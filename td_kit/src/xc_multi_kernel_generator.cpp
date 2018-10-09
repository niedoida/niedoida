/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/xc_kernel_generator.hpp"

#include "io_kit/log.hpp"
#include "misc_kit/blackbox.hpp"
#include "misc_kit/dispatcher.hpp"

#include <cmath>

namespace {
    using namespace niedoida;

    const double threshold = 1e-10;

    inline std::size_t _index(core::Spin s1, core::Spin s2) { return s1 + s2; }
}

namespace niedoida {
    namespace td {
        XCMultiKernelGenerator::XCMultiKernelGenerator(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<core::Grid> grid,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            xc::XCFunctional xc_functional,
            std::size_t max_cache_size) :
            GridIntegralImplementation(system,
                                       ao_value_engine_factory->make(system)),
            m_system(system),
            m_grid(std::move(grid)),
            m_cache(max_cache_size)
        {
            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i)
                m_integrators.push_back(
                    new Integrator(system,
                                   *m_grid,
                                   xc_functional,
                                   ao_value_engine_factory->make(system),
                                   m_P,
                                   m_fake_P,
                                   m_cache,
                                   m_queue,
                                   m_result));
        }

        void XCMultiKernelGenerator::set_density_matrix(
            const arma::mat& P_alpha,
            const arma::mat& P_beta,
            const std::vector<arma::cube>& fake_P)
        {
            io::Log::Section section("grid integration");

            m_P.set_size(P_alpha.n_rows, P_alpha.n_cols, 2);
            m_P.slice(core::SPIN_ALPHA) = P_alpha;
            m_P.slice(core::SPIN_BETA) = P_beta;

            m_no_matrices = fake_P[core::SPIN_ALPHA].n_slices;

            m_fake_P.resize(2);
            m_result.xc_ints.resize(3);

            m_fake_P = fake_P;

            m_result.xc_ints[0] =
                arma::zeros<arma::cube>(m_bs_info.m_no_contractions,
                                        m_bs_info.m_no_contractions,
                                        m_no_matrices);
            m_result.xc_ints[1] =
                arma::zeros<arma::cube>(m_bs_info.m_no_contractions,
                                        m_bs_info.m_no_contractions,
                                        m_no_matrices);
            m_result.xc_ints[2] =
                arma::zeros<arma::cube>(m_bs_info.m_no_contractions,
                                        m_bs_info.m_no_contractions,
                                        m_no_matrices);

            m_result.density_integral = 0;

            // Note: I assume that no matter how the expression is actually
            // calculated, difference between _exactly_ the same matrices should
            // give _exactly_ 0. Fingers crossed...
            const bool m_polarized = norm(P_alpha - P_beta, "inf") != 0;

            for (Integrator& i : m_integrators)
                i.reset(m_polarized);

            update();

            const double cache_hit_ratio =
                double(m_cache.no_hits) / (m_cache.no_hits + m_cache.no_misses);

            io::Log::instance().write(
                io::Logger::DEBUG, "ao_cache_hit_ratio", cache_hit_ratio);

            const std::size_t no_electrons = m_system->no_electrons();
            const double d = m_result.density_integral - no_electrons;

            io::Log::instance().write(io::Logger::NORMAL,
                                      "absolute_grid_accuracy",
                                      -std::log10(std::abs(d)));
            io::Log::instance().write(io::Logger::NORMAL,
                                      "relative_grid_accuracy",
                                      -std::log10(std::abs(d) / no_electrons));
        }

        void XCMultiKernelGenerator::update()
        {
            {
                std::unique_ptr<misc::Dispatcher> d(
                    misc::dispatcher(m_grid->no_blocks()));

                while (const misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    {
                        std::lock_guard<std::mutex> queue_lock(m_queue.mutex);

                        for (std::size_t b = task_info->first;
                             b < task_info->second;
                             ++b)
                            m_queue.blocks.push(b);
                    }

                    for (Integrator& w : m_integrators) {
                        misc::ThreadPool::Task t(
                            std::bind(&Integrator::run, &w));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();
                }
            }

            reduce();
        }

        void XCMultiKernelGenerator::reduce()
        {
            boost::mpi::communicator comm;

            const std::size_t no_ints = m_no_matrices *
                                        m_bs_info.m_no_contractions *
                                        m_bs_info.m_no_contractions;

            arma::cube tmp =
                m_result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)];
            boost::mpi::all_reduce(
                comm,
                tmp.memptr(),
                no_ints,
                m_result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                    .memptr(),
                std::plus<double>());

            tmp = m_result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)];
            boost::mpi::all_reduce(
                comm,
                tmp.memptr(),
                no_ints,
                m_result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                    .memptr(),
                std::plus<double>());

            if (m_polarized) {
                tmp =
                    m_result.xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)];
                boost::mpi::all_reduce(
                    comm,
                    tmp.memptr(),
                    no_ints,
                    m_result.xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)]
                        .memptr(),
                    std::plus<double>());
            }

            const double partial_density_integral = m_result.density_integral;
            boost::mpi::all_reduce(comm,
                                   partial_density_integral,
                                   m_result.density_integral,
                                   std::plus<double>());

            unsigned long t = m_cache.no_hits;
            boost::mpi::all_reduce(
                comm, t, m_cache.no_hits, std::plus<double>());

            t = m_cache.no_misses;
            boost::mpi::all_reduce(
                comm, t, m_cache.no_misses, std::plus<double>());
        }

        const arma::mat& XCMultiKernelGenerator::integrals(std::size_t n,
                                                           core::Spin s1,
                                                           core::Spin s2) const
        {
            return m_result.xc_ints[_index(s1, s2)].slice(n);
        }

        const arma::field<arma::mat>&
        XCMultiKernelGenerator::gradient(const std::vector<unsigned>& atoms,
                                         std::size_t state,
                                         core::Spin,
                                         core::Spin)
        {
            m_result.xc_derivs.set_size(3, atoms.size(), m_polarized ? 3 : 2);

            for (int d = 0; d < 3; ++d)
                for (unsigned a = 0; a < atoms.size(); ++a) {
                    m_result.xc_derivs(d, a, 0).zeros(m_P.n_rows, m_P.n_cols);
                    m_result.xc_derivs(d, a, 1).zeros(m_P.n_rows, m_P.n_cols);
                    if (m_polarized)
                        m_result.xc_derivs(d, a, 2).zeros(m_P.n_rows,
                                                          m_P.n_cols);
                }

            {
                boost::mpi::communicator comm;
                std::unique_ptr<misc::Dispatcher> d(
                    misc::dispatcher(comm, m_grid->no_blocks()));

                while (const misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    {
                        std::lock_guard<std::mutex> queue_lock(m_queue.mutex);

                        for (std::size_t b = task_info->first;
                             b < task_info->second;
                             ++b)
                            m_queue.blocks.push(b);
                    }

                    for (Integrator& w : m_integrators) {
                        w.reset_gradient(atoms.size());
                        misc::ThreadPool::Task t(
                            std::bind(&Integrator::gradient, &w, atoms, state));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();
                }
            }

            return m_result.xc_derivs;
        }

        void XCMultiKernelGenerator::Integrator::reset(bool polarized)
        {
            _polarized = polarized;

            _no_matrices = _fake_P[0].n_slices;
            _block_data.fake_P.resize(_polarized ? 2 : 1);
            _block_data.xc_ints.resize(_polarized ? 3 : 2);

            _cycle += 1;
        }

        void
        XCMultiKernelGenerator::Integrator::reset_gradient(unsigned no_atoms)
        {
        }

        void XCMultiKernelGenerator::Integrator::run()
        {
            for (;;) {
                std::size_t b;
                {
                    std::lock_guard<std::mutex> lock(_queue.mutex);
                    if (_queue.blocks.empty())
                        return;
                    b = _queue.blocks.front();
                    _queue.blocks.pop();
                }

                update_block(b);
            }
        }

        void XCMultiKernelGenerator::Integrator::gradient(
            const std::vector<unsigned>& atoms, unsigned state)
        {
            for (;;) {
                std::size_t b;
                {
                    std::lock_guard<std::mutex> lock(_queue.mutex);
                    if (_queue.blocks.empty())
                        return;
                    b = _queue.blocks.front();
                    _queue.blocks.pop();
                }

                update_block_gradient(atoms, state, b);
            }
        }

        void XCMultiKernelGenerator::Integrator::update_block(std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const BlockAOData> data = get_block_data(b, block);

            const std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P.set_size(no_block_contractions,
                                   no_block_contractions,
                                   _polarized ? 2 : 1);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    _block_data.P(i, j, core::SPIN_ALPHA) =
                        _P(_block_data.b2g_map[i],
                           _block_data.b2g_map[j],
                           core::SPIN_ALPHA);

            _block_data.P.slice(core::SPIN_ALPHA) =
                arma::symmatl(_block_data.P.slice(core::SPIN_ALPHA));

            if (_polarized) {
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _block_data.P(i, j, core::SPIN_BETA) =
                            _P(_block_data.b2g_map[i],
                               _block_data.b2g_map[j],
                               core::SPIN_BETA);

                _block_data.P.slice(core::SPIN_BETA) =
                    arma::symmatl(_block_data.P.slice(core::SPIN_BETA));
            }

            _block_data.fake_P[core::SPIN_ALPHA].set_size(
                no_block_contractions, no_block_contractions, _no_matrices);
            _block_data.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                .zeros(
                    no_block_contractions, no_block_contractions, _no_matrices);
            _block_data.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                .zeros(
                    no_block_contractions, no_block_contractions, _no_matrices);

            if (_polarized) {
                _block_data.fake_P[core::SPIN_BETA].set_size(
                    no_block_contractions, no_block_contractions, _no_matrices);
                _block_data.xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)]
                    .zeros(no_block_contractions,
                           no_block_contractions,
                           _no_matrices);
            }

            for (std::size_t n = 0; n < _no_matrices; ++n) {

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _block_data.fake_P[core::SPIN_ALPHA](i, j, n) =
                            _fake_P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                                      _block_data.b2g_map[j],
                                                      n);

                _block_data.fake_P[core::SPIN_ALPHA].slice(n) = arma::symmatl(
                    _block_data.fake_P[core::SPIN_ALPHA].slice(n));

                if (_polarized) {
                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        for (std::size_t j = 0; j <= i; ++j)
                            _block_data.fake_P[core::SPIN_BETA](i, j, n) =
                                _fake_P[core::SPIN_BETA](_block_data.b2g_map[i],
                                                         _block_data.b2g_map[j],
                                                         n);

                    _block_data.fake_P[core::SPIN_BETA].slice(n) =
                        arma::symmatl(
                            _block_data.fake_P[core::SPIN_BETA].slice(n));
                }
            }

            _density_integral = 0;

            // calculate the integrals
            if (_xc_functional.which() == 2)
                if (_polarized)
                    update_block_gga_polarized(*block, *data);
                else
                    update_block_gga_unpolarized(*block, *data);
            else if (_polarized)
                update_block_lda_polarized(*block, *data);
            else
                update_block_lda_unpolarized(*block, *data);

            // propagate the block integrals to global matrices
            std::unique_lock<std::mutex> lock(_result.mutex);

            _result.density_integral += _density_integral;

            for (std::size_t n = 0; n < _no_matrices; ++n) {

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _result.xc_ints[_index(core::SPIN_ALPHA,
                                               core::SPIN_ALPHA)](
                            _block_data.b2g_map[i],
                            _block_data.b2g_map[j],
                            n) +=
                            _block_data.xc_ints[_index(
                                core::SPIN_ALPHA, core::SPIN_ALPHA)](i, j, n);

                _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                    .slice(n) = arma::symmatl(
                    _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                        .slice(n));

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _result
                            .xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)](
                                _block_data.b2g_map[i],
                                _block_data.b2g_map[j],
                                n) +=
                            _block_data.xc_ints[_index(
                                core::SPIN_ALPHA, core::SPIN_BETA)](i, j, n);

                _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                    .slice(n) = arma::symmatl(
                    _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                        .slice(n));

                if (_polarized) {
                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        for (std::size_t j = 0; j <= i; ++j)
                            _result.xc_ints[_index(core::SPIN_BETA,
                                                   core::SPIN_BETA)](
                                _block_data.b2g_map[i],
                                _block_data.b2g_map[j],
                                n) +=
                                _block_data.xc_ints[_index(
                                    core::SPIN_BETA, core::SPIN_BETA)](i, j, n);

                    _result.xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)]
                        .slice(n) = arma::symmatl(
                        _result
                            .xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)]
                            .slice(n));
                }
            }
        }

        void XCMultiKernelGenerator::Integrator::update_block_gradient(
            const std::vector<unsigned>& atoms, unsigned state, std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const BlockAOData> data = get_block_data(b, block);

            const std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P.set_size(no_block_contractions,
                                   no_block_contractions,
                                   _polarized ? 2 : 1);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    _block_data.P(i, j, core::SPIN_ALPHA) =
                        _P(_block_data.b2g_map[i],
                           _block_data.b2g_map[j],
                           core::SPIN_ALPHA);

            _block_data.P.slice(core::SPIN_ALPHA) =
                arma::symmatl(_block_data.P.slice(core::SPIN_ALPHA));

            if (_polarized) {
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _block_data.P(i, j, core::SPIN_BETA) =
                            _P(_block_data.b2g_map[i],
                               _block_data.b2g_map[j],
                               core::SPIN_BETA);

                _block_data.P.slice(core::SPIN_BETA) =
                    arma::symmatl(_block_data.P.slice(core::SPIN_BETA));
            }

            _block_data.fake_P[core::SPIN_ALPHA].set_size(
                no_block_contractions, no_block_contractions, _no_matrices);
            if (_polarized)
                _block_data.fake_P[core::SPIN_BETA].set_size(
                    no_block_contractions, no_block_contractions, _no_matrices);

            for (std::size_t n = 0; n < _no_matrices; ++n) {

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _block_data.fake_P[core::SPIN_ALPHA](i, j, n) =
                            _fake_P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                                      _block_data.b2g_map[j],
                                                      n);

                _block_data.fake_P[core::SPIN_ALPHA].slice(n) = arma::symmatl(
                    _block_data.fake_P[core::SPIN_ALPHA].slice(n));

                if (_polarized) {
                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        for (std::size_t j = 0; j <= i; ++j)
                            _block_data.fake_P[core::SPIN_BETA](i, j, n) =
                                _fake_P[core::SPIN_BETA](_block_data.b2g_map[i],
                                                         _block_data.b2g_map[j],
                                                         n);

                    _block_data.fake_P[core::SPIN_BETA].slice(n) =
                        arma::symmatl(
                            _block_data.fake_P[core::SPIN_BETA].slice(n));
                }
            }

            _block_data.xc_derivs.set_size(3, atoms.size(), _polarized ? 3 : 2);

            for (int d = 0; d < 3; ++d)
                for (unsigned a = 0; a < atoms.size(); ++a) {
                    _block_data
                        .xc_derivs(
                            d, a, _index(core::SPIN_ALPHA, core::SPIN_ALPHA))
                        .zeros(no_block_contractions, no_block_contractions);
                    _block_data
                        .xc_derivs(
                            d, a, _index(core::SPIN_ALPHA, core::SPIN_BETA))
                        .zeros(no_block_contractions, no_block_contractions);

                    if (_polarized)
                        _block_data
                            .xc_derivs(
                                d, a, _index(core::SPIN_BETA, core::SPIN_BETA))
                            .zeros(no_block_contractions,
                                   no_block_contractions);
                }

            _density_integral = 0;

            // calculate the integrals
            if (_xc_functional.which() == 2)
                if (_polarized)
                    update_block_gradient_gga_polarized(
                        atoms, state, *block, *data);
                else
                    update_block_gradient_gga_unpolarized(
                        atoms, state, *block, *data);
            else if (_polarized)
                update_block_gradient_lda_polarized(
                    atoms, state, *block, *data);
            else
                update_block_gradient_lda_unpolarized(
                    atoms, state, *block, *data);

            // propagate the block integrals to global matrices
            std::unique_lock<std::mutex> lock(_result.mutex);

            _result.density_integral += _density_integral;

            for (std::size_t n = 0; n < _no_matrices; ++n) {

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _result.xc_ints[_index(core::SPIN_ALPHA,
                                               core::SPIN_ALPHA)](
                            _block_data.b2g_map[i],
                            _block_data.b2g_map[j],
                            n) +=
                            _block_data.xc_ints[_index(
                                core::SPIN_ALPHA, core::SPIN_ALPHA)](i, j, n);

                _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                    .slice(n) = arma::symmatl(
                    _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                        .slice(n));

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        _result
                            .xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)](
                                _block_data.b2g_map[i],
                                _block_data.b2g_map[j],
                                n) +=
                            _block_data.xc_ints[_index(
                                core::SPIN_ALPHA, core::SPIN_BETA)](i, j, n);

                _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                    .slice(n) = arma::symmatl(
                    _result.xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                        .slice(n));

                if (_polarized) {
                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        for (std::size_t j = 0; j <= i; ++j)
                            _result.xc_ints[_index(core::SPIN_BETA,
                                                   core::SPIN_BETA)](
                                _block_data.b2g_map[i],
                                _block_data.b2g_map[j],
                                n) +=
                                _block_data.xc_ints[_index(
                                    core::SPIN_BETA, core::SPIN_BETA)](i, j, n);

                    _result.xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)]
                        .slice(n) = arma::symmatl(
                        _result
                            .xc_ints[_index(core::SPIN_BETA, core::SPIN_BETA)]
                            .slice(n));
                }
            }
        }

        void XCMultiKernelGenerator::Integrator::update_block_lda_unpolarized(
            const core::Grid::Block& block, const BlockAOData& data)
        {
            std::size_t no_block_contractions =
                data.no_contractions / block.size;

            // matrices for local functionals
            arma::mat C(block.size, no_block_contractions);
            arma::mat Baa(block.size, no_block_contractions);
            arma::mat Bab(block.size, no_block_contractions);
            arma::mat vaa(_no_matrices, block.size);
            arma::mat vab(_no_matrices, block.size);
            arma::mat full_P;

            for (std::size_t p = 0; p < block.size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data.values[p * no_block_contractions + i];

            arma::mat d(_no_matrices + 1, block.size);
            for (std::size_t k = 0; k < _no_matrices + 1; ++k) {
                if (k == 0)
                    full_P = _block_data.P.slice(core::SPIN_ALPHA);
                else
                    full_P = _block_data.fake_P[core::SPIN_ALPHA].slice(k - 1);

                const arma::mat G = C * full_P;

                // density
                for (std::size_t p = 0; p < block.size; ++p)
                    d(k, p) = dot(G.row(p), C.row(p));
            }

            for (std::size_t p = 0; p < block.size; ++p) {

                double rho = d(0, p);
                if (rho < 0)
                    rho = 0;

                const xc::XCFunctionalData functional =
                    boost::get<xc::LocalXCFunctional>(_xc_functional)(
                        rho, rho, 2);

                _density_integral += 2 * rho * block.weights[p];

                for (std::size_t k = 0; k < _no_matrices; ++k) {

                    double fake_rho = d(k + 1, p);

                    vaa(k, p) = 0.5 * functional.d2e_drara * fake_rho *
                                block.weights[p];
                    vab(k, p) = 0.5 * functional.d2e_drarb * fake_rho *
                                block.weights[p];
                }
            }

            for (std::size_t k = 0; k < _no_matrices; ++k) {
                for (std::size_t p = 0; p < block.size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i) {
                        Baa(p, i) = vaa(k, p) * C(p, i);
                        Bab(p, i) = vab(k, p) * C(p, i);
                    }

                arma::mat Vaa(no_block_contractions, no_block_contractions);
                arma::mat Vab(no_block_contractions, no_block_contractions);

                Vaa = trans(C) * Baa;
                Vab = trans(C) * Bab;

                arma::mat& xc_ints_aa =
                    _block_data
                        .xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                        .slice(k);
                arma::mat& xc_ints_ab =
                    _block_data
                        .xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                        .slice(k);

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        xc_ints_aa(i, j) = Vaa(i, j) + Vaa(j, i);

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        xc_ints_ab(i, j) = Vab(i, j) + Vab(j, i);
            }
        }

        void XCMultiKernelGenerator::Integrator::update_block_gga_unpolarized(
            const core::Grid::Block& block, const BlockAOData& data)
        {

            std::size_t no_block_contractions =
                data.no_contractions / block.size;

            // matrices for local functionals
            arma::mat C(block.size, no_block_contractions);
            arma::mat DX(block.size, no_block_contractions);
            arma::mat DY(block.size, no_block_contractions);
            arma::mat DZ(block.size, no_block_contractions);

            arma::mat d(_no_matrices + 1, block.size, arma::fill::zeros);
            arma::mat dx(_no_matrices + 1, block.size, arma::fill::zeros);
            arma::mat dy(_no_matrices + 1, block.size, arma::fill::zeros);
            arma::mat dz(_no_matrices + 1, block.size, arma::fill::zeros);
            arma::mat Baa(block.size, no_block_contractions);
            arma::mat Bab(block.size, no_block_contractions);
            arma::mat vaa(_no_matrices, block.size);
            arma::mat vab(_no_matrices, block.size);
            arma::mat vgaa(_no_matrices, block.size);
            arma::mat vgab(_no_matrices, block.size);
            arma::mat vfgaa(_no_matrices, block.size);
            arma::mat vfgab(_no_matrices, block.size);

            for (std::size_t p = 0; p < block.size; ++p) {
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    C(p, i) = data.values[p * no_block_contractions + i];
                    DX(p, i) = data.derivs_x[p * no_block_contractions + i];
                    DY(p, i) = data.derivs_y[p * no_block_contractions + i];
                    DZ(p, i) = data.derivs_z[p * no_block_contractions + i];
                }
            }

            for (std::size_t k = 0; k < _no_matrices + 1; ++k) {
                arma::mat G;

                if (k == 0)
                    G = C * _block_data.P.slice(core::SPIN_ALPHA);
                else
                    G = C * _block_data.fake_P[core::SPIN_ALPHA].slice(k - 1);

                for (std::size_t p = 0; p < block.size; ++p) {
                    d(k, p) = dot(G.row(p), C.row(p));
                    dx(k, p) = 2 * dot(G.row(p), DX.row(p));
                    dy(k, p) = 2 * dot(G.row(p), DY.row(p));
                    dz(k, p) = 2 * dot(G.row(p), DZ.row(p));
                }
            }

            for (std::size_t p = 0; p < block.size; ++p) {

                double rho = d(0, p);
                if (rho < 0)
                    rho = 0;

                _density_integral += 2 * rho * block.weights[p];

                double rho_x = dx(0, p);
                double rho_y = dy(0, p);
                double rho_z = dz(0, p);

                double gamma = rho_x * rho_x + rho_y * rho_y + rho_z * rho_z;

                const xc::XCFunctionalData functional =
                    boost::get<xc::GGAXCFunctional>(_xc_functional)(
                        rho, rho, gamma, gamma, gamma, 2);

                for (std::size_t k = 0; k < _no_matrices; ++k) {

                    double fake_rho = d(k + 1, p);
                    double gradrho_x_grad_fakerho = dx(0, p) * dx(k + 1, p) +
                                                    dy(0, p) * dy(k + 1, p) +
                                                    dz(0, p) * dz(k + 1, p);

                    vaa(k, p) =
                        0.5 *
                        (functional.d2e_drara * fake_rho +
                         2 * functional.d2e_dragaa * gradrho_x_grad_fakerho +
                         functional.d2e_dragab * gradrho_x_grad_fakerho) *
                        block.weights[p];
                    vab(k, p) =
                        0.5 *
                        (functional.d2e_drarb * fake_rho +
                         2 * functional.d2e_dragbb * gradrho_x_grad_fakerho +
                         functional.d2e_dragab * gradrho_x_grad_fakerho) *
                        block.weights[p];
                    vgaa(k, p) =
                        (2 * functional.d2e_dragaa * fake_rho +
                         functional.d2e_dragab * fake_rho +
                         4 * functional.d2e_dgaagaa * gradrho_x_grad_fakerho +
                         2 * functional.d2e_dgaagab * gradrho_x_grad_fakerho +
                         2 * functional.d2e_dgaagab * gradrho_x_grad_fakerho +
                         functional.d2e_dgabgab * gradrho_x_grad_fakerho) *
                        block.weights[p];
                    vgab(k, p) =
                        (2 * functional.d2e_drbgaa * fake_rho +
                         functional.d2e_drbgab * fake_rho +
                         4 * functional.d2e_dgaagbb * gradrho_x_grad_fakerho +
                         2 * functional.d2e_dgaagab * gradrho_x_grad_fakerho +
                         2 * functional.d2e_dgbbgab * gradrho_x_grad_fakerho +
                         functional.d2e_dgabgab * gradrho_x_grad_fakerho) *
                        block.weights[p];
                    vfgaa(k, p) = 2 * functional.de_dgaa * block.weights[p];
                    vfgab(k, p) = functional.de_dgab * block.weights[p];
                }
            }

            for (std::size_t k = 0; k < _no_matrices; ++k) {
                for (std::size_t p = 0; p < block.size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i) {
                        Baa(p, i) = vaa(k, p) * C(p, i) +
                                    vgaa(k, p) * (dx(0, p) * DX(p, i) +
                                                  dy(0, p) * DY(p, i) +
                                                  dz(0, p) * DZ(p, i)) +
                                    vfgaa(k, p) * (dx(k + 1, p) * DX(p, i) +
                                                   dy(k + 1, p) * DY(p, i) +
                                                   dz(k + 1, p) * DZ(p, i));
                        Bab(p, i) = vab(k, p) * C(p, i) +
                                    vgab(k, p) * (dx(0, p) * DX(p, i) +
                                                  dy(0, p) * DY(p, i) +
                                                  dz(0, p) * DZ(p, i)) +
                                    vfgab(k, p) * (dx(k + 1, p) * DX(p, i) +
                                                   dy(k + 1, p) * DY(p, i) +
                                                   dz(k + 1, p) * DZ(p, i));
                    }

                arma::mat Vaa(no_block_contractions, no_block_contractions);
                arma::mat Vab(no_block_contractions, no_block_contractions);

                Vaa = trans(C) * Baa;
                Vab = trans(C) * Bab;

                arma::mat& xc_ints_aa =
                    _block_data
                        .xc_ints[_index(core::SPIN_ALPHA, core::SPIN_ALPHA)]
                        .slice(k);
                arma::mat& xc_ints_ab =
                    _block_data
                        .xc_ints[_index(core::SPIN_ALPHA, core::SPIN_BETA)]
                        .slice(k);

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        xc_ints_aa(i, j) = Vaa(i, j) + Vaa(j, i);

                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        xc_ints_ab(i, j) = Vab(i, j) + Vab(j, i);
            }
        }

        void XCMultiKernelGenerator::Integrator::update_block_lda_polarized(
            const core::Grid::Block& block, const BlockAOData& data)
        {
        }

        void XCMultiKernelGenerator::Integrator::update_block_gga_polarized(
            const core::Grid::Block& block, const BlockAOData& data)
        {
        }

        void XCMultiKernelGenerator::Integrator::
            update_block_gradient_lda_unpolarized(
                const std::vector<unsigned>& atoms,
                unsigned state,
                const core::Grid::Block& block,
                const BlockAOData& data)
        {
            std::size_t no_block_contractions =
                data.no_contractions / block.size;

            // matrices for local functionals
            arma::mat C(block.size, no_block_contractions);
            arma::mat Baa(block.size, no_block_contractions);
            arma::mat Bab(block.size, no_block_contractions);
            arma::cube dvaa_dR(3, atoms.size(), block.size);
            arma::cube dvab_dR(3, atoms.size(), block.size);
            arma::mat full_P;

            arma::mat dfake_rho_dR(3, atoms.size());
            arma::mat drho_dR(3, atoms.size());

            for (std::size_t p = 0; p < block.size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data.values[p * no_block_contractions + i];

            arma::mat d(_no_matrices + 1, block.size);
            for (std::size_t k = 0; k < _no_matrices + 1; ++k) {
                if (k == 0)
                    full_P = _block_data.P.slice(core::SPIN_ALPHA);
                else
                    full_P = _block_data.fake_P[core::SPIN_ALPHA].slice(k - 1);

                const arma::mat G = C * full_P;

                // density
                for (std::size_t p = 0; p < block.size; ++p)
                    d(k, p) = dot(G.row(p), C.row(p));
            }

            for (std::size_t p = 0; p < block.size; ++p) {

                double rho = d(0, p);
                if (rho < 0)
                    rho = 0;

                const xc::XCFunctionalData functional =
                    boost::get<xc::LocalXCFunctional>(_xc_functional)(
                        rho, rho, 3);

                _density_integral += 2 * rho * block.weights[p];

                for (unsigned k = 0; k < 3; ++k) {
                    for (unsigned a = 0; a < atoms.size(); ++a) {

                        double fake_rho = d(state + 1, p);

                        // vaa(k, p) = 0.5 * functional.d2e_drara * fake_rho *
                        // block.weights[p];
                        dvaa_dR(k, a, p) =
                            0.5 * block.weights[p] *
                            (dfake_rho_dR(k, a) * functional.d2e_drara +
                             fake_rho * drho_dR(k, a) *
                                 (functional.d3e_drarara +
                                  functional.d3e_drararb));

                        // vab(k, p) = 0.5 * functional.d2e_drarb * fake_rho *
                        // block.weights[p];
                        dvab_dR(k, a, p) =
                            0.5 * block.weights[p] *
                            (dfake_rho_dR(k, a) * functional.d2e_drarb +
                             2 * fake_rho * drho_dR(k, a) *
                                 functional.d3e_drararb);
                    }
                }
            }

            for (unsigned k = 0; k < 3; ++k) {
                for (unsigned a = 0; a < atoms.size(); ++a) {
                    for (std::size_t p = 0; p < block.size; ++p)
                        for (std::size_t i = 0; i < no_block_contractions;
                             ++i) {
                            Baa(p, i) = dvaa_dR(k, a, p) * C(p, i);
                            Bab(p, i) = dvab_dR(k, a, p) * C(p, i);
                        }

                    arma::mat dVaa(no_block_contractions,
                                   no_block_contractions);
                    arma::mat dVab(no_block_contractions,
                                   no_block_contractions);

                    dVaa = trans(C) * Baa;
                    dVab = trans(C) * Bab;

                    arma::mat& xc_derivs_aa = _block_data.xc_derivs(
                        k, a, _index(core::SPIN_ALPHA, core::SPIN_ALPHA));
                    arma::mat& xc_derivs_ab = _block_data.xc_derivs(
                        k, a, _index(core::SPIN_ALPHA, core::SPIN_ALPHA));

                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        for (std::size_t j = 0; j <= i; ++j)
                            xc_derivs_aa(i, j) = dVaa(i, j) + dVaa(j, i);

                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        for (std::size_t j = 0; j <= i; ++j)
                            xc_derivs_ab(i, j) = dVab(i, j) + dVab(j, i);
                }
            }
        }

        void XCMultiKernelGenerator::Integrator::
            update_block_gradient_gga_unpolarized(
                const std::vector<unsigned>& atoms,
                unsigned state,
                const core::Grid::Block& block,
                const BlockAOData& data)
        {
        }

        void
        XCMultiKernelGenerator::Integrator::update_block_gradient_lda_polarized(
            const std::vector<unsigned>& atoms,
            unsigned state,
            const core::Grid::Block& block,
            const BlockAOData& data)
        {
        }

        void
        XCMultiKernelGenerator::Integrator::update_block_gradient_gga_polarized(
            const std::vector<unsigned>& atoms,
            unsigned state,
            const core::Grid::Block& block,
            const BlockAOData& data)
        {
        }

        std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
        XCMultiKernelGenerator::Integrator::get_block_data(
            std::size_t block_idx,
            std::shared_ptr<const core::Grid::Block> block)
        {
            // fast path for all cycles except the first one
            if (_cycle > 1) {
                // retrieve or create block AO data, do not try to put it to the
                // cache
                const BlockAODataCache::const_iterator i =
                    _cache.data.find(block_idx);

                if (i != _cache.data.end()) {
                    _cache.no_hits += 1;
                    return std::shared_ptr<
                        const grid::GridIntegralImplementation::BlockAOData>(
                        (*i).second);
                }

                return block_ao_data(
                    *block, threshold, _xc_functional.which() == 2 ? 1 : 0);
            }

            // slow path with synchronization and an attempt to cache new data
            {
                std::unique_lock<std::mutex> lock(_cache.mutex);

                // retrieve or create block AO data
                const BlockAODataCache::const_iterator i =
                    _cache.data.find(block_idx);

                if (i != _cache.data.end()) {
                    _cache.no_hits += 1;
                    return std::shared_ptr<
                        const grid::GridIntegralImplementation::BlockAOData>(
                        (*i).second);
                }
            }

            std::shared_ptr<const GridIntegralImplementation::BlockAOData>
                data = block_ao_data(
                    *block, threshold, _xc_functional.which() == 2 ? 1 : 0);

            const std::size_t n =
                data->no_contractions *
                ((_xc_functional.which() == 2 ? 4 : 1) * sizeof(double) +
                 sizeof(std::size_t));

            // put the data to cache if possible
            {
                std::unique_lock<std::mutex> lock(_cache.mutex);
                _cache.no_misses += 1;

                if (_cache.size + n < _cache.max_size) {
                    _cache.data.insert(std::make_pair(block_idx, data));
                    _cache.size += n;
                }
            }

            return data;
        }
    }
}
