/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/grid_utils.hpp"

#include "grid_kit/grid_integral_implementation.hpp"
#include "misc_kit/dispatcher.hpp"

#include <armadillo>

namespace {
    using namespace niedoida;

    class OverlapIntegrals : private grid::GridIntegralImplementation {
    public:
        OverlapIntegrals(std::shared_ptr<const core::System>,
                         std::unique_ptr<core::AOValueEngine>,
                         const core::Grid&);

        arma::mat overlap;

    private:
        void update();
        void update_block(const core::Grid::Block&, const BlockAOData&);
        void reduce();

        const core::Grid& _grid;
        std::unique_ptr<double[]> _overlap_buf;
    };

    OverlapIntegrals::OverlapIntegrals(
        std::shared_ptr<const core::System> system,
        std::unique_ptr<core::AOValueEngine> ao_value_engine,
        const core::Grid& grid) :
        GridIntegralImplementation(system, std::move(ao_value_engine)),
        overlap(m_bs_info.m_no_contractions,
                m_bs_info.m_no_contractions,
                arma::fill::zeros),
        _grid(grid)
    {
        _overlap_buf.reset(new double[m_bs_info.m_no_contractions *
                                      (m_bs_info.m_no_contractions + 1) / 2]);

        update();

        reduce();
    }

    void OverlapIntegrals::update()
    {
        std::unique_ptr<misc::Dispatcher> d(
            misc::dispatcher(_grid.no_blocks()));

        while (misc::Dispatcher::TaskInfo task_info = d->get_task()) {

            // for each grid block...
            for (std::size_t b = task_info->first; b < task_info->second; ++b) {
                std::shared_ptr<const core::Grid::Block> block =
                    _grid.get_block(b);

                // FIXME:
                std::shared_ptr<const BlockAOData> data =
                    block_ao_data(*block, 1e-20, 0);

                update_block(*block, *data);
            }
        }
    }

    void OverlapIntegrals::update_block(const core::Grid::Block& block,
                                        const BlockAOData& data)
    {
        // in each point of the block...
        for (std::size_t p = 0; p < block.size; ++p) {

            const std::size_t n = data.point_ao_data[p].no_contractions;
            /*const*/ double* const NIEDOIDA_RESTRICT v =
                data.point_ao_data[p].values;
            const double w = block.weights[p];
            double* NIEDOIDA_RESTRICT s = _overlap_buf.get();

            for (std::size_t i = 0; i < n; ++i) {
                const arma::vec vv(v, i + 1, false, true);
                arma::vec ss(s, i + 1, false, true);
                ss = w * *(v + i) * vv;
                // ola::scal(i + 1, w * *(v + i), v, s);
                s += i + 1;
            }

            s = _overlap_buf.get();

            const std::size_t* NIEDOIDA_RESTRICT const indices =
                data.point_ao_data[p].indices;

            for (std::size_t i = 0; i < n; ++i) {
                const std::size_t c1 = indices[i];
                double* NIEDOIDA_RESTRICT overlap_col = &overlap(0, c1);
                for (std::size_t j = 0; j <= i; ++j) {
                    const std::size_t c2 = indices[j];
                    overlap_col[c2] += *s++;
                }
            }
        }
    }

    void OverlapIntegrals::reduce()
    {
        boost::mpi::communicator comm;

        const arma::mat partial = overlap;
        boost::mpi::all_reduce(comm,
                               partial.memptr(),
                               partial.n_elem,
                               overlap.memptr(),
                               std::plus<double>());
    }
}

namespace niedoida {
    namespace grid {
        arma::mat overlap(std::shared_ptr<const core::System> system,
                          std::unique_ptr<core::AOValueEngine> ao_value_engine,
                          const core::Grid& grid)
        {
            return OverlapIntegrals(system, std::move(ao_value_engine), grid)
                .overlap;
        }
    }
}
