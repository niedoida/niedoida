/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/xc_integral_engine.hpp"

#include "core_kit/spin.hpp"

#include "io_kit/logger.hpp"

#include "io_kit/log.hpp"
#include "misc_kit/dispatcher.hpp"
#include "misc_kit/threadpool.hpp"

#include <algorithm>
#include <cstring>

namespace {
    const double threshold = 1e-10;
}

namespace niedoida {
    namespace gto {
        XCIntegralEngine::XCIntegralEngine(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<core::Grid> grid,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            xc::LocalXCFunctional lda_functional,
            std::size_t max_cache_size) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_grid(std::move(grid)),
            m_cache(max_cache_size)
        {
            m_result.xc_ints[core::SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_result.xc_ints[core::SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_result.xc_ints_dC[core::SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_result.xc_ints_dC[core::SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i) {
                m_integrators.push_back(
                    new Integrator(system,
                                   *m_grid,
                                   lda_functional,
                                   0,
                                   ao_value_engine_factory->make(system),
                                   m_cache,
                                   m_queue,
                                   m_result,
                                   m_bs_info));
            }
        }

        XCIntegralEngine::XCIntegralEngine(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<core::Grid> grid,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            xc::GGAXCFunctional gga_functional,
            std::size_t max_cache_size) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_grid(std::move(grid)),
            m_cache(max_cache_size)
        {
            m_result.xc_ints[core::SPIN_ALPHA] =
                arma::zeros<arma::mat>(m_bs_info.m_no_contractions);

            m_result.xc_ints[core::SPIN_BETA] =
                arma::zeros<arma::mat>(m_bs_info.m_no_contractions);

            m_result.xc_ints_dC[core::SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_result.xc_ints_dC[core::SPIN_BETA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i) {
                m_integrators.push_back(
                    new Integrator(system,
                                   *m_grid,
                                   0,
                                   gga_functional,
                                   ao_value_engine_factory->make(system),
                                   m_cache,
                                   m_queue,
                                   m_result,
                                   m_bs_info));
            }
        }

        void XCIntegralEngine::set_density_matrix(const arma::mat& P_alpha,
                                                  const arma::mat& P_beta)
        {
            io::Log::Section section("grid integration");

            m_P[core::SPIN_ALPHA] = P_alpha;
            m_P[core::SPIN_BETA] = P_beta;

            // m_P_for_CPHF[core::SPIN_ALPHA ] = P_alpha;
            // m_P_for_CPHF[core::SPIN_BETA] = P_beta;

            // Note: I assume that no matter how the expression is actually
            // calculated, difference between _exactly_ the same matrices should
            // give _exactly_ 0. Fingers crossed...
            m_polarized = norm(P_alpha - P_beta, "inf") != 0;

            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i)
                m_integrators[i].reset(m_P, m_P_for_CPHF, m_polarized);

            m_result.energy = 0;
            m_result.density_integral = 0;

            update();

            const double cache_hit_ratio =
                double(m_cache.no_hits) / (m_cache.no_hits + m_cache.no_misses);

            io::Log::instance().write(
                io::Logger::NORMAL, "ao_cache_hit_ratio", cache_hit_ratio);

            const std::size_t n = m_system->no_electrons();
            const double d = m_result.density_integral - n;

            io::Log::instance().write(io::Logger::NORMAL,
                                      "absolute_grid_accuracy",
                                      -std::log10(std::abs(d)));
            io::Log::instance().write(io::Logger::NORMAL,
                                      "relative_grid_accuracy",
                                      -std::log10(std::abs(d) / n));
            io::Log::instance().write(
                io::Logger::NORMAL, "xc_energy", m_result.energy);
        }

        void XCIntegralEngine::set_density_matrix_for_CPHF(
            const arma::mat& P_alpha,
            const arma::mat& P_beta,
            const arma::mat& P_alpha_for_CPHF,
            const arma::mat& P_beta_for_CPHF)
        {
            io::Log::Section section("grid integration");

            m_P[core::SPIN_ALPHA] = P_alpha;
            m_P[core::SPIN_BETA] = P_beta;

            m_P_for_CPHF[core::SPIN_ALPHA] = P_alpha_for_CPHF;
            m_P_for_CPHF[core::SPIN_BETA] = P_beta_for_CPHF;

            // Note: Krzyzowalismy palce przy "normalnych" macierzach
            // gestosci wiec teraz rowniez warto to zrobic.
            m_polarized = norm(P_alpha_for_CPHF - P_beta_for_CPHF, "inf") != 0;

            for (std::size_t i = 0; i < misc::GlobalThreadPool::no_threads();
                 ++i)
                m_integrators[i].reset(m_P, m_P_for_CPHF, m_polarized);

            m_result.energy = 0;
            m_result.density_integral = 0;

            update_dC();

            const double cache_hit_ratio =
                double(m_cache.no_hits) / (m_cache.no_hits + m_cache.no_misses);

            io::Log::instance().write(
                io::Logger::NORMAL, "ao_cache_hit_ratio", cache_hit_ratio);

            const std::size_t n = m_system->no_electrons();
            const double d = m_result.density_integral - n;

            io::Log::instance().write(io::Logger::NORMAL,
                                      "absolute_grid_accuracy",
                                      -std::log10(std::abs(d)));
            io::Log::instance().write(io::Logger::NORMAL,
                                      "relative_grid_accuracy",
                                      -std::log10(std::abs(d) / n));
            io::Log::instance().write(
                io::Logger::NORMAL, "xc_energy", m_result.energy);
        }

        void XCIntegralEngine::update()
        {
            m_result.xc_ints[core::SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            if (m_polarized) {
                m_result.xc_ints[core::SPIN_BETA] = arma::zeros<arma::mat>(
                    m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
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
                        misc::ThreadPool::Task t(
                            std::bind(&Integrator::run, &w));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();
                }
            }

            reduce();
        }

        void XCIntegralEngine::update_dC()
        {
            m_result.xc_ints[core::SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            m_result.xc_ints_dC[core::SPIN_ALPHA] = arma::zeros<arma::mat>(
                m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

            if (m_polarized) {
                m_result.xc_ints[core::SPIN_BETA] = arma::zeros<arma::mat>(
                    m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

                m_result.xc_ints_dC[core::SPIN_BETA] = arma::zeros<arma::mat>(
                    m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);
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
                        misc::ThreadPool::Task t(
                            std::bind(&Integrator::run_dC, &w));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();
                }
            }

            reduce_dC();
        }

        void XCIntegralEngine::reduce()
        {
            const std::size_t n =
                m_bs_info.m_no_contractions * m_bs_info.m_no_contractions;

            arma::mat partial_xc_ints = m_result.xc_ints[core::SPIN_ALPHA];

            boost::mpi::communicator comm;

            boost::mpi::all_reduce(comm,
                                   partial_xc_ints.memptr(),
                                   n,
                                   m_result.xc_ints[core::SPIN_ALPHA].memptr(),
                                   std::plus<double>());

            if (m_polarized) {
                partial_xc_ints = m_result.xc_ints[core::SPIN_BETA];

                boost::mpi::all_reduce(
                    comm,
                    partial_xc_ints.memptr(),
                    n,
                    m_result.xc_ints[core::SPIN_BETA].memptr(),
                    std::plus<double>());

            } else {
                m_result.xc_ints[core::SPIN_BETA] =
                    m_result.xc_ints[core::SPIN_ALPHA];
            }

            const double partial_energy = m_result.energy;
            boost::mpi::all_reduce(
                comm, partial_energy, m_result.energy, std::plus<double>());

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

        void XCIntegralEngine::reduce_dC()
        {
            const std::size_t n =
                m_bs_info.m_no_contractions * m_bs_info.m_no_contractions;

            arma::mat partial_xc_ints = m_result.xc_ints[core::SPIN_ALPHA];

            arma::mat partial_xc_ints_dC =
                m_result.xc_ints_dC[core::SPIN_ALPHA];

            boost::mpi::communicator comm;

            boost::mpi::all_reduce(comm,
                                   partial_xc_ints.memptr(),
                                   n,
                                   m_result.xc_ints[core::SPIN_ALPHA].memptr(),
                                   std::plus<double>());
            boost::mpi::all_reduce(
                comm,
                partial_xc_ints_dC.memptr(),
                n,
                m_result.xc_ints_dC[core::SPIN_ALPHA].memptr(),
                std::plus<double>());

            if (m_polarized) {
                partial_xc_ints = m_result.xc_ints[core::SPIN_BETA];

                partial_xc_ints_dC = m_result.xc_ints_dC[core::SPIN_BETA];

                boost::mpi::all_reduce(
                    comm,
                    partial_xc_ints.memptr(),
                    n,
                    m_result.xc_ints[core::SPIN_BETA].memptr(),
                    std::plus<double>());
                boost::mpi::all_reduce(
                    comm,
                    partial_xc_ints_dC.memptr(),
                    n,
                    m_result.xc_ints_dC[core::SPIN_BETA].memptr(),
                    std::plus<double>());

            } else {
                m_result.xc_ints[core::SPIN_BETA] =
                    m_result.xc_ints[core::SPIN_ALPHA];
                m_result.xc_ints_dC[core::SPIN_BETA] =
                    m_result.xc_ints_dC[core::SPIN_ALPHA];
            }

            const double partial_energy = m_result.energy;
            boost::mpi::all_reduce(
                comm, partial_energy, m_result.energy, std::plus<double>());

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

        void XCIntegralEngine::Integrator::reset(const arma::mat* const P,
                                                 bool polarized)
        {
            _P = P;
            _polarized = polarized;
            _cycle += 1;
        }

        void
        XCIntegralEngine::Integrator::reset(const arma::mat* const P,
                                            const arma::mat* const P_for_CPHF,
                                            bool polarized)
        {
            _P = P;
            _P_for_CPHF = P_for_CPHF;
            _polarized = polarized;
            _cycle += 1;
        }

        void XCIntegralEngine::Integrator::run()
        {
            for (;;) {
                std::size_t b;
                {
                    std::lock_guard<std::mutex> lock(_queue.mutex);
                    if (_queue.blocks.empty()) {
                        return;
                    }
                    b = _queue.blocks.front();
                    _queue.blocks.pop();
                }

                if (_polarized)
                    update_block_polarized(b);
                else
                    update_block_unpolarized(b);
            }
        }

        void XCIntegralEngine::Integrator::run_dC()
        {
            for (;;) {
                std::size_t b;
                {
                    std::lock_guard<std::mutex> lock(_queue.mutex);
                    if (_queue.blocks.empty()) {
                        return;
                    }
                    b = _queue.blocks.front();
                    _queue.blocks.pop();
                }

                // if (_polarized)
                //    update_block_polarized(b);
                // else
                update_block_unpolarized_dC(b);
            }
        }

        void XCIntegralEngine::Integrator::reset_gradient(std::size_t no_atoms)
        {
            _result.energy_gradient.zeros(3, no_atoms);
        }

        void XCIntegralEngine::Integrator::energy_gradient(
            const std::vector<unsigned>& atoms)
        {
            for (;;) {
                std::size_t b;
                {
                    std::lock_guard<std::mutex> lock(_queue.mutex);
                    if (_queue.blocks.empty()) {
                        return;
                    }
                    b = _queue.blocks.front();
                    _queue.blocks.pop();
                }

                if (_polarized)
                    gradient_update_block_polarized(atoms, b);
                else if (_lda_functional)
                    gradient_update_block_unpolarized_lda(atoms, b);
                else
                    gradient_update_block_unpolarized_gga(atoms, b);
            }
        }

        void XCIntegralEngine::Integrator::update_block_polarized(std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, _gga_functional ? 1 : 0);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);
            _block_data.P[core::SPIN_BETA].set_size(no_block_contractions,
                                                    no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i) {
                for (std::size_t j = 0; j <= i; ++j) {
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);
                    _block_data.P[core::SPIN_BETA](i, j) = _P[core::SPIN_BETA](
                        _block_data.b2g_map[i], _block_data.b2g_map[j]);
                }
            }

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);
            _block_data.P[core::SPIN_BETA] =
                arma::symmatl(_block_data.P[core::SPIN_BETA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);
            _block_data.xc_ints[core::SPIN_BETA].zeros(no_block_contractions,
                                                       no_block_contractions);

            // matrices for local functionals
            arma::mat C(block->size, no_block_contractions);
            arma::mat B(block->size, no_block_contractions);
            arma::vec vv(block->size);
            arma::mat B_b(block->size, no_block_contractions);
            arma::vec vv_b(block->size);

            // and for GGA corrections
            arma::mat DX;
            arma::mat DY;
            arma::mat DZ;
            arma::vec dx;
            arma::vec dy;
            arma::vec dz;
            arma::vec vvg;
            arma::vec dx_b;
            arma::vec dy_b;
            arma::vec dz_b;
            arma::vec vvg_b;
            arma::vec vvg_bb;

            // values(derivs)
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            if (_gga_functional) {
                DX.set_size(block->size, no_block_contractions);
                DY.set_size(block->size, no_block_contractions);
                DZ.set_size(block->size, no_block_contractions);

                vvg.set_size(block->size);
                vvg_b.set_size(block->size);
                vvg_bb.set_size(block->size);

                for (std::size_t p = 0; p < block->size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i) {
                        DX(p, i) =
                            data->derivs_x[p * no_block_contractions + i];
                        DY(p, i) =
                            data->derivs_y[p * no_block_contractions + i];
                        DZ(p, i) =
                            data->derivs_z[p * no_block_contractions + i];
                    }
            }

            // common G = CP
            arma::mat G = C * _block_data.P[core::SPIN_ALPHA];
            arma::mat G_b = C * _block_data.P[core::SPIN_BETA];

            arma::vec d(block->size);
            arma::vec d_b(block->size);
            for (std::size_t p = 0; p < block->size; ++p) {
                d(p) = dot(G.row(p), C.row(p));
                d_b(p) = dot(G_b.row(p), C.row(p));
            }

            // density gradient
            if (_gga_functional) {
                dx.set_size(block->size);
                dy.set_size(block->size);
                dz.set_size(block->size);

                dx_b.set_size(block->size);
                dy_b.set_size(block->size);
                dz_b.set_size(block->size);

                for (std::size_t p = 0; p < block->size; ++p) {
                    dx(p) = 2 * dot(G.row(p), DX.row(p));
                    dy(p) = 2 * dot(G.row(p), DY.row(p));
                    dz(p) = 2 * dot(G.row(p), DZ.row(p));

                    dx_b(p) = 2 * dot(G_b.row(p), DX.row(p));
                    dy_b(p) = 2 * dot(G_b.row(p), DY.row(p));
                    dz_b(p) = 2 * dot(G_b.row(p), DZ.row(p));
                }
            }

            // functional
            xc::XCFunctionalData functional;

            double energy = 0, density_integral = 0;

            for (std::size_t p = 0; p < block->size; ++p) {

                double rho = d(p);
                double rho_b = d_b(p);
                if (rho < 0)
                    rho = 0;
                if (rho_b < 0)
                    rho_b = 0;

                if (_gga_functional) {
                    const double gamma =
                        dx(p) * dx(p) + dy(p) * dy(p) + dz(p) * dz(p);
                    const double gamma_b =
                        dx(p) * dx_b(p) + dy(p) * dy_b(p) + dz(p) * dz_b(p);
                    const double gamma_bb = dx_b(p) * dx_b(p) +
                                            dy_b(p) * dy_b(p) +
                                            dz_b(p) * dz_b(p);
                    functional = _gga_functional(
                        rho, rho_b, gamma, gamma_b, gamma_bb, 1);
                } else {
                    functional = _lda_functional(rho, rho_b, 1);
                }

                vv(p) = 0.5 * functional.de_dra * block->weights[p];
                vv_b(p) = 0.5 * functional.de_drb * block->weights[p];

                if (_gga_functional) {
                    vvg(p) = 2 * functional.de_dgaa * block->weights[p];
                    vvg_b(p) = functional.de_dgab * block->weights[p];
                    vvg_bb(p) = 2 * functional.de_dgbb * block->weights[p];
                }

                energy += functional.e * block->weights[p];
                density_integral += (rho + rho_b) * block->weights[p];
            }

            // B = vC + v_g(grad * R)
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    const double Cpi = C(p, i);
                    B(p, i) = vv(p) * Cpi;
                    B_b(p, i) = vv_b(p) * Cpi;
                }

            if (_gga_functional) {
                for (std::size_t p = 0; p < block->size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i) {
                        const double ta = dx(p) * DX(p, i) + dy(p) * DY(p, i) +
                                          dz(p) * DZ(p, i);
                        const double tb = dx_b(p) * DX(p, i) +
                                          dy_b(p) * DY(p, i) +
                                          dz_b(p) * DZ(p, i);
                        B(p, i) += vvg(p) * ta + vvg_b(p) * tb;
                        B_b(p, i) += vvg_b(p) * ta + vvg_bb(p) * tb;
                    }
            }

            arma::mat V = trans(C) * B;
            arma::mat V_b = trans(C) * B_b;

            // Fxc = V + trans(V)
            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _block_data.xc_ints[core::SPIN_ALPHA](i, j) =
                        V(i, j) + V(j, i);
                    _block_data.xc_ints[core::SPIN_BETA](i, j) =
                        V_b(i, j) + V_b(j, i);
                }

            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            _result.energy += energy;
            _result.density_integral += density_integral;

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _result.xc_ints[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                                      _block_data.b2g_map[j]) +=
                        _block_data.xc_ints[core::SPIN_ALPHA](i, j);
                    _result.xc_ints[core::SPIN_BETA](_block_data.b2g_map[i],
                                                     _block_data.b2g_map[j]) +=
                        _block_data.xc_ints[core::SPIN_BETA](i, j);
                }

            _result.xc_ints[core::SPIN_ALPHA] =
                arma::symmatl(_result.xc_ints[core::SPIN_ALPHA]);
            _result.xc_ints[core::SPIN_BETA] =
                arma::symmatl(_result.xc_ints[core::SPIN_BETA]);
        }

        void
        XCIntegralEngine::Integrator::update_block_unpolarized(std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, _gga_functional ? 1 : 0);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);
                }

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);

            // matrices for local functionals
            arma::mat C(block->size, no_block_contractions);
            arma::mat B(block->size, no_block_contractions);

            arma::vec vv(block->size);

            // and for GGA corrections
            arma::mat DX;
            arma::mat DY;
            arma::mat DZ;
            arma::vec dx;
            arma::vec dy;
            arma::vec dz;
            arma::vec vvg;

            // values(derivs)
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            if (_gga_functional) {
                DX.set_size(block->size, no_block_contractions);
                DY.set_size(block->size, no_block_contractions);
                DZ.set_size(block->size, no_block_contractions);

                vvg.set_size(block->size);

                for (std::size_t p = 0; p < block->size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i) {
                        DX(p, i) =
                            data->derivs_x[p * no_block_contractions + i];
                        DY(p, i) =
                            data->derivs_y[p * no_block_contractions + i];
                        DZ(p, i) =
                            data->derivs_z[p * no_block_contractions + i];
                    }
            }

            const arma::mat G = C * _block_data.P[core::SPIN_ALPHA];

            // density
            arma::vec d(block->size);
            for (std::size_t p = 0; p < block->size; ++p) {
                d(p) = dot(G.row(p), C.row(p));
            }

            // density gradient
            if (_gga_functional) {
                dx.set_size(block->size);
                dy.set_size(block->size);
                dz.set_size(block->size);

                for (std::size_t p = 0; p < block->size; ++p) {
                    dx(p) = 2 * dot(G.row(p), DX.row(p));
                    dy(p) = 2 * dot(G.row(p), DY.row(p));
                    dz(p) = 2 * dot(G.row(p), DZ.row(p));
                }
            }

            // functional
            xc::XCFunctionalData functional;

            double energy = 0, density_integral = 0;

            for (std::size_t p = 0; p < block->size; ++p) {

                double rho = d(p);
                if (rho < 0)
                    rho = 0;

                if (_gga_functional) {
                    double gamma =
                        dx(p) * dx(p) + dy(p) * dy(p) + dz(p) * dz(p);
                    functional =
                        _gga_functional(rho, rho, gamma, gamma, gamma, 1);
                } else {
                    functional = _lda_functional(rho, rho, 1);
                }

                vv(p) = 0.5 * functional.de_dra * block->weights[p];

                if (_gga_functional)
                    vvg(p) = (2 * functional.de_dgaa + functional.de_dgab) *
                             block->weights[p];

                energy += functional.e * block->weights[p];
                density_integral += 2 * rho * block->weights[p];
            }

            // B = vC + v_g(grad * R)
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    B(p, i) = vv(p) * C(p, i);
                }

            if (_gga_functional)
                for (std::size_t p = 0; p < block->size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        B(p, i) +=
                            vvg(p) * (dx(p) * DX(p, i) + dy(p) * DY(p, i) +
                                      dz(p) * DZ(p, i));

            const arma::mat V = trans(C) * B;

            // Fxc = V + trans(V)
            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _block_data.xc_ints[core::SPIN_ALPHA](i, j) =
                        V(i, j) + V(j, i);
                }
            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            _result.energy += energy;
            _result.density_integral += density_integral;

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _result.xc_ints[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                                      _block_data.b2g_map[j]) +=
                        _block_data.xc_ints[core::SPIN_ALPHA](i, j);
                }

            _result.xc_ints[core::SPIN_ALPHA] =
                arma::symmatl(_result.xc_ints[core::SPIN_ALPHA]);
        }

        void
        XCIntegralEngine::Integrator::update_block_unpolarized_dC(std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, _gga_functional ? 1 : 0);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);
            _block_data.P_for_CPHF[core::SPIN_ALPHA].set_size(
                no_block_contractions, no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);
                    _block_data.P_for_CPHF[core::SPIN_ALPHA](i, j) =
                        _P_for_CPHF[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                                      _block_data.b2g_map[j]);
                }

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);
            _block_data.P_for_CPHF[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P_for_CPHF[core::SPIN_ALPHA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);
            _block_data.xc_ints_dC[core::SPIN_ALPHA].zeros(
                no_block_contractions, no_block_contractions);

            // matrices for local functionals
            arma::mat C(block->size, no_block_contractions);
            arma::mat B(block->size, no_block_contractions);
            arma::mat B_dC(block->size, no_block_contractions);

            arma::vec vv(block->size);
            arma::vec vv_dC(block->size);

            // and for GGA corrections
            arma::mat DX;
            arma::mat DY;
            arma::mat DZ;
            arma::vec dx;
            arma::vec dy;
            arma::vec dz;
            arma::vec vvg;

            // values(derivs)
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            if (_gga_functional) {
                DX.set_size(block->size, no_block_contractions);
                DY.set_size(block->size, no_block_contractions);
                DZ.set_size(block->size, no_block_contractions);

                vvg.set_size(block->size);

                for (std::size_t p = 0; p < block->size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i) {
                        DX(p, i) =
                            data->derivs_x[p * no_block_contractions + i];
                        DY(p, i) =
                            data->derivs_y[p * no_block_contractions + i];
                        DZ(p, i) =
                            data->derivs_z[p * no_block_contractions + i];
                    }
            }

            const arma::mat G = C * _block_data.P[core::SPIN_ALPHA];
            const arma::mat G_dC = C * _block_data.P_for_CPHF[core::SPIN_ALPHA];

            // density
            arma::vec d(block->size);
            arma::vec d_dC(block->size);
            for (std::size_t p = 0; p < block->size; ++p) {
                d(p) = dot(G.row(p), C.row(p));
                d_dC(p) = dot(G_dC.row(p), C.row(p));
            }

            // density gradient
            if (_gga_functional) {
                dx.set_size(block->size);
                dy.set_size(block->size);
                dz.set_size(block->size);

                for (std::size_t p = 0; p < block->size; ++p) {
                    dx(p) = 2 * dot(G.row(p), DX.row(p));
                    dy(p) = 2 * dot(G.row(p), DY.row(p));
                    dz(p) = 2 * dot(G.row(p), DZ.row(p));
                }
            }

            // functional
            xc::XCFunctionalData functional;

            double energy = 0, density_integral = 0;

            for (std::size_t p = 0; p < block->size; ++p) {

                double rho = d(p);
                if (rho < 0)
                    rho = 0;

                if (_gga_functional) {
                    double gamma =
                        dx(p) * dx(p) + dy(p) * dy(p) + dz(p) * dz(p);
                    functional =
                        _gga_functional(rho, rho, gamma, gamma, gamma, 1);
                } else {
                    functional = _lda_functional(rho, rho, 2);
                }

                vv(p) = 0.5 * functional.de_dra * block->weights[p];
                vv_dC(p) =
                    0.5 * functional.d2e_drara * block->weights[p] * d_dC(p);

                if (_gga_functional)
                    vvg(p) = (2 * functional.de_dgaa + functional.de_dgab) *
                             block->weights[p];

                energy += functional.e * block->weights[p];
                density_integral += 2 * rho * block->weights[p];
            }

            // B = vC + v_g(grad * R)
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    B(p, i) = vv(p) * C(p, i);
                    B_dC(p, i) = vv_dC(p) * C(p, i);
                }

            if (_gga_functional)
                for (std::size_t p = 0; p < block->size; ++p)
                    for (std::size_t i = 0; i < no_block_contractions; ++i)
                        B(p, i) +=
                            vvg(p) * (dx(p) * DX(p, i) + dy(p) * DY(p, i) +
                                      dz(p) * DZ(p, i));

            const arma::mat V = trans(C) * B;
            const arma::mat V_dC = trans(C) * B_dC;

            // Fxc = V + trans(V)
            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _block_data.xc_ints[core::SPIN_ALPHA](i, j) =
                        V(i, j) + V(j, i);
                    _block_data.xc_ints_dC[core::SPIN_ALPHA](i, j) =
                        V_dC(i, j) + V_dC(j, i);
                }
            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            _result.energy += energy;
            _result.density_integral += density_integral;

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    _result.xc_ints[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                                      _block_data.b2g_map[j]) +=
                        _block_data.xc_ints[core::SPIN_ALPHA](i, j);
                    _result.xc_ints_dC[core::SPIN_ALPHA](
                        _block_data.b2g_map[i], _block_data.b2g_map[j]) +=
                        _block_data.xc_ints_dC[core::SPIN_ALPHA](i, j);
                }

            _result.xc_ints[core::SPIN_ALPHA] =
                arma::symmatl(_result.xc_ints[core::SPIN_ALPHA]);
            _result.xc_ints_dC[core::SPIN_ALPHA] =
                arma::symmatl(_result.xc_ints_dC[core::SPIN_ALPHA]);
        }

        std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
        XCIntegralEngine::Integrator::get_block_data(
            std::size_t block_idx,
            std::shared_ptr<const core::Grid::Block> block,
            unsigned deriv_order)
        {
            // fast path for all cycles except the first one
            if (_cycle > 1) {
                // retrieve or create block AO data, cache if possible
                BlockAODataCache::const_iterator i =
                    _cache.data.find(block_idx);

                if (i != _cache.data.end() &&
                    (deriv_order > 0 && !i->second->derivs_x.get()))
                    i = _cache.data.end();

                if (i != _cache.data.end() &&
                    (deriv_order > 1 && !i->second->derivs_xx.get()))
                    i = _cache.data.end();

                if (i != _cache.data.end()) {
                    _cache.no_hits += 1;
                    return std::shared_ptr<
                        const grid::GridIntegralImplementation::BlockAOData>(
                        (*i).second);
                }

                return block_ao_data(*block, threshold, deriv_order);
            }

            // slow path with synchronization and an attempt to cache new data
            {
                std::lock_guard<std::mutex> lock(_cache.mutex);

                // retrieve or create block AO data, cache if possible
                BlockAODataCache::const_iterator i =
                    _cache.data.find(block_idx);

                if (i != _cache.data.end() &&
                    (deriv_order > 0 && !i->second->derivs_x.get()))
                    i = _cache.data.end();

                if (i != _cache.data.end() &&
                    (deriv_order > 1 && !i->second->derivs_xx.get()))
                    i = _cache.data.end();

                if (i != _cache.data.end()) {
                    _cache.no_hits += 1;
                    return std::shared_ptr<
                        const GridIntegralImplementation::BlockAOData>(
                        (*i).second);
                }
            }

            std::shared_ptr<const GridIntegralImplementation::BlockAOData>
                data = block_ao_data(*block, threshold, deriv_order);

            {
                std::size_t n = 0;
                for (unsigned i = 0; i <= deriv_order; ++i)
                    n += (i + 1) * (i + 2);
                n /= 2;
                n *= data->no_contractions *
                     (sizeof(double) + sizeof(std::size_t));

                std::lock_guard<std::mutex> lock(_cache.mutex);
                _cache.no_misses += 1;

                if (_cache.size + n < _cache.max_size) {
                    _cache.data.insert(std::make_pair(block_idx, data));
                    _cache.size += n;
                }
            }

            return data;
        }

        void
        XCIntegralEngine::Integrator::gradient_update_block_unpolarized_lda(
            const std::vector<unsigned>& atoms, std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, 1);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);

            // values
            arma::mat C(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            // derivs
            arma::mat DX(block->size, no_block_contractions);
            arma::mat DY(block->size, no_block_contractions);
            arma::mat DZ(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    DX(p, i) = data->derivs_x[p * no_block_contractions + i];
                    DY(p, i) = data->derivs_y[p * no_block_contractions + i];
                    DZ(p, i) = data->derivs_z[p * no_block_contractions + i];
                }

            const arma::mat G = C * _block_data.P[core::SPIN_ALPHA];

            // density
            arma::vec d(block->size);
            for (std::size_t p = 0; p < block->size; ++p)
                d(p) = dot(G.row(p), C.row(p));

            const std::size_t no_atoms = atoms.size();

            arma::mat de(3, no_atoms, arma::fill::zeros);

            for (std::size_t p = 0; p < block->size; ++p) {

                const double rho = std::max(d(p), 0.0);
                const xc::XCFunctionalData functional =
                    _lda_functional(rho, rho, 1);

                arma::mat rho_deriv(3, no_atoms, arma::fill::zeros);

                for (std::size_t a = 0; a < no_atoms; ++a) {
                    const std::size_t atom = atoms[a];
                    std::size_t fc =
                        m_bs_info.m_first_contraction_in_atom[atom];
                    std::size_t lc =
                        fc + m_bs_info.m_no_contractions_in_atom[atom];

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        std::size_t gk = _block_data.b2g_map[k];

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            std::size_t gl = _block_data.b2g_map[l];

                            const double Cpl = C(p, l);

                            const double Pkl =
                                _block_data.P[core::SPIN_ALPHA](k, l);

                            if (gk >= fc && gk < lc) {
                                rho_deriv(0, a) -= Pkl * Cpl * DX(p, k);
                                rho_deriv(1, a) -= Pkl * Cpl * DY(p, k);
                                rho_deriv(2, a) -= Pkl * Cpl * DZ(p, k);
                            }

                            if (gl >= fc && gl < lc) {
                                rho_deriv(0, a) -= Pkl * Cpk * DX(p, l);
                                rho_deriv(1, a) -= Pkl * Cpk * DY(p, l);
                                rho_deriv(2, a) -= Pkl * Cpk * DZ(p, l);
                            }
                        }
                    }
                }

                de += 2 * functional.de_dra * rho_deriv * block->weights[p];
            }

            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            _result.energy_gradient += de;
        }

        void
        XCIntegralEngine::Integrator::gradient_update_block_unpolarized_gga(
            const std::vector<unsigned>& atoms, std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, 2);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);

            // values
            arma::mat C(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            // derivs
            arma::mat DX(block->size, no_block_contractions);
            arma::mat DY(block->size, no_block_contractions);
            arma::mat DZ(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    DX(p, i) = data->derivs_x[p * no_block_contractions + i];
                    DY(p, i) = data->derivs_y[p * no_block_contractions + i];
                    DZ(p, i) = data->derivs_z[p * no_block_contractions + i];
                }

            // second derivs
            arma::mat DXX(block->size, no_block_contractions);
            arma::mat DXY(block->size, no_block_contractions);
            arma::mat DXZ(block->size, no_block_contractions);
            arma::mat DYY(block->size, no_block_contractions);
            arma::mat DYZ(block->size, no_block_contractions);
            arma::mat DZZ(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    DXX(p, i) = data->derivs_xx[p * no_block_contractions + i];
                    DXY(p, i) = data->derivs_xy[p * no_block_contractions + i];
                    DXZ(p, i) = data->derivs_xz[p * no_block_contractions + i];
                    DYY(p, i) = data->derivs_yy[p * no_block_contractions + i];
                    DYZ(p, i) = data->derivs_yz[p * no_block_contractions + i];
                    DZZ(p, i) = data->derivs_zz[p * no_block_contractions + i];
                }

            const arma::mat G = C * _block_data.P[core::SPIN_ALPHA];

            // density
            arma::vec d(block->size);
            for (std::size_t p = 0; p < block->size; ++p)
                d(p) = dot(G.row(p), C.row(p));

            // density gradient
            arma::vec dx(block->size);
            arma::vec dy(block->size);
            arma::vec dz(block->size);

            for (std::size_t p = 0; p < block->size; ++p) {
                dx(p) = 2 * dot(G.row(p), DX.row(p));
                dy(p) = 2 * dot(G.row(p), DY.row(p));
                dz(p) = 2 * dot(G.row(p), DZ.row(p));
            }

            const std::size_t no_atoms = atoms.size();

            arma::mat de(3, no_atoms, arma::fill::zeros);

            for (std::size_t p = 0; p < block->size; ++p) {

                const double rho = std::max(d(p), 0.0);
                const double gamma =
                    dx(p) * dx(p) + dy(p) * dy(p) + dz(p) * dz(p);
                const xc::XCFunctionalData functional =
                    _gga_functional(rho, rho, gamma, gamma, gamma, 1);

                arma::mat rho_deriv(3, no_atoms, arma::fill::zeros);

                for (std::size_t a = 0; a < no_atoms; ++a) {
                    const std::size_t atom = atoms[a];
                    std::size_t fc =
                        m_bs_info.m_first_contraction_in_atom[atom];
                    std::size_t lc =
                        fc + m_bs_info.m_no_contractions_in_atom[atom];

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        std::size_t gk = _block_data.b2g_map[k];

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            std::size_t gl = _block_data.b2g_map[l];

                            const double Cpl = C(p, l);

                            const double Pkl =
                                _block_data.P[core::SPIN_ALPHA](k, l);

                            if (gk >= fc && gk < lc) {
                                rho_deriv(0, a) -= Pkl * Cpl * DX(p, k);
                                rho_deriv(1, a) -= Pkl * Cpl * DY(p, k);
                                rho_deriv(2, a) -= Pkl * Cpl * DZ(p, k);
                            }

                            if (gl >= fc && gl < lc) {
                                rho_deriv(0, a) -= Pkl * Cpk * DX(p, l);
                                rho_deriv(1, a) -= Pkl * Cpk * DY(p, l);
                                rho_deriv(2, a) -= Pkl * Cpk * DZ(p, l);
                            }
                        }
                    }
                }

                arma::mat gamma_deriv(3, no_atoms, arma::fill::zeros);

                for (std::size_t a = 0; a < no_atoms; ++a) {
                    const std::size_t atom = atoms[a];
                    std::size_t fc =
                        m_bs_info.m_first_contraction_in_atom[atom];
                    std::size_t lc =
                        fc + m_bs_info.m_no_contractions_in_atom[atom];

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        std::size_t gk = _block_data.b2g_map[k];

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            std::size_t gl = _block_data.b2g_map[l];

                            const double Cpl = C(p, l);

                            const double Pkl =
                                _block_data.P[core::SPIN_ALPHA](k, l);

                            if (gk >= fc && gk < lc) {
                                gamma_deriv(0, a) -= 2 * dx(p) *
                                                     (Pkl * DXX(p, k) * Cpl +
                                                      DX(p, k) * DX(p, l));
                                gamma_deriv(0, a) -= 2 * dy(p) *
                                                     (Pkl * DXY(p, k) * Cpl +
                                                      DX(p, k) * DY(p, l));
                                gamma_deriv(0, a) -= 2 * dz(p) *
                                                     (Pkl * DXZ(p, k) * Cpl +
                                                      DX(p, k) * DZ(p, l));

                                gamma_deriv(1, a) -= 2 * dx(p) *
                                                     (Pkl * DXY(p, k) * Cpl +
                                                      DY(p, k) * DX(p, l));
                                gamma_deriv(1, a) -= 2 * dy(p) *
                                                     (Pkl * DYY(p, k) * Cpl +
                                                      DY(p, k) * DY(p, l));
                                gamma_deriv(1, a) -= 2 * dz(p) *
                                                     (Pkl * DYZ(p, k) * Cpl +
                                                      DY(p, k) * DZ(p, l));

                                gamma_deriv(2, a) -= 2 * dx(p) *
                                                     (Pkl * DXZ(p, k) * Cpl +
                                                      DZ(p, k) * DX(p, l));
                                gamma_deriv(2, a) -= 2 * dy(p) *
                                                     (Pkl * DYZ(p, k) * Cpl +
                                                      DZ(p, k) * DY(p, l));
                                gamma_deriv(2, a) -= 2 * dz(p) *
                                                     (Pkl * DZZ(p, k) * Cpl +
                                                      DZ(p, k) * DZ(p, l));
                            }

                            if (gl >= fc && gl < lc) {
                                gamma_deriv(0, a) -= 2 * dx(p) *
                                                     (Pkl * DXX(p, l) * Cpk +
                                                      DX(p, l) * DX(p, k));
                                gamma_deriv(0, a) -= 2 * dy(p) *
                                                     (Pkl * DXY(p, l) * Cpk +
                                                      DX(p, l) * DY(p, k));
                                gamma_deriv(0, a) -= 2 * dz(p) *
                                                     (Pkl * DXZ(p, l) * Cpk +
                                                      DX(p, l) * DZ(p, k));

                                gamma_deriv(1, a) -= 2 * dx(p) *
                                                     (Pkl * DXY(p, l) * Cpk +
                                                      DY(p, l) * DX(p, k));
                                gamma_deriv(1, a) -= 2 * dy(p) *
                                                     (Pkl * DYY(p, l) * Cpk +
                                                      DY(p, l) * DY(p, k));
                                gamma_deriv(1, a) -= 2 * dz(p) *
                                                     (Pkl * DYZ(p, l) * Cpk +
                                                      DY(p, l) * DZ(p, k));

                                gamma_deriv(2, a) -= 2 * dx(p) *
                                                     (Pkl * DXZ(p, l) * Cpk +
                                                      DZ(p, l) * DX(p, k));
                                gamma_deriv(2, a) -= 2 * dy(p) *
                                                     (Pkl * DYZ(p, l) * Cpk +
                                                      DZ(p, l) * DY(p, k));
                                gamma_deriv(2, a) -= 2 * dz(p) *
                                                     (Pkl * DZZ(p, l) * Cpk +
                                                      DZ(p, l) * DZ(p, k));
                            }
                        }
                    }
                }

                de += (2 * functional.de_dra * rho_deriv +
                       (2 * functional.de_dgaa + functional.de_dgab) *
                           gamma_deriv) *
                      block->weights[p];
            }

            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            _result.energy_gradient += de;
        }

        void XCIntegralEngine::Integrator::gradient_update_block_polarized(
            const std::vector<unsigned>& atoms, std::size_t b)
        {
        }

        arma::mat
        XCIntegralEngine::energy_gradient(const std::vector<unsigned>& atoms)
        {
            m_result.energy_gradient = arma::zeros<arma::mat>(3, atoms.size());
            m_result.density_integral = 0;
            m_result.energy = 0;

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
                            std::bind(&Integrator::energy_gradient, &w, atoms));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();
                }
            }

            return m_result.energy_gradient;
        }
    }
}
