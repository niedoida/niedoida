/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/s_adaptive_grid.hpp"

#include <limits>

namespace niedoida {
    namespace grid {
        RhoAdaptiveGrid::RhoAdaptiveGrid(
            boost::shared_ptr<const System> system,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<RadialGrid> rg,
            std::unique_ptr<SphericalGrid> sg,
            boost::shared_ptr<const AOValueEngineFactory>
                ao_value_engine_factory,
            std::size_t spherical_grid_size) :
            ProductGrid(system, pf, rg, sg, ao_value_engine_factory),
            GridIntegralImplementation(system,
                                       ao_value_engine_factory->make(system)),
            _overlap_buf(new double[(m_bs_info.m_no_contractions *
                                     (m_bs_info.m_no_contractions + 1)) /
                                    2]),
            _max_spherical_grid_size(spherical_grid_size),
            _prev_atom(0),
            _prev_grid_size(0)
        {
        }

        std::size_t
        RhoAdaptiveGrid::spherical_grid_size(std::size_t a,
                                             double r,
                                             const PartitionFunction& pf,
                                             const SphericalGrid& sg) const
        {
            if (r <= std::numeric_limits<double>::epsilon())
                return 1;

            const double r2 = r * r;

            double prev_rho = 0;
            double next_rho = 0;

            const int n =
                static_cast<int>(std::sqrt(_max_spherical_grid_size / 2.0));

            int start = 2;

            if (a != _prev_atom)
                _prev_atom = a;
            else
                start = std::max(
                    2, static_cast<int>(std::sqrt(_prev_grid_size / 8.0)));
            for (int i = start; i < n; ++i) {
                boost::shared_ptr<Grid::Block> block =
                    sg(a, r, i * i * 2, 1e-10);
                const std::size_t bs = block->size;
                double* coords = &(block->coords[0][0]);
                double* weights = &(block->weights[0]);

                pf(a, bs, coords, weights);

                next_s = overlap(*block);
                const double delta = ublas::norm_1(next_s - prev_s);
                prev_s = next_s;
                if (std::abs(delta) < 1e-5) {
                    const int j = std::max(i, 3);
                    _prev_grid_size = (j - 1) * (j - 1) * 2;
                    return _prev_grid_size;
                }
            }

            _prev_grid_size = _max_spherical_grid_size;

            return _max_spherical_grid_size;
        }

        arma::mat RhoAdaptiveGrid::overlap(const Grid::Block& block) const
        {
            arma::mat result(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, 1e-12, 0);

            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                const std::size_t n = data->point_ao_data[p].no_contractions;
                const double* const NIEDOIDA_RESTRICT v =
                    data->point_ao_data[p].values;
                const double w = block.weights[p];
                double* NIEDOIDA_RESTRICT s = _overlap_buf.get();

                for (std::size_t i = 0; i < n; ++i) {
                    ola::scal(i + 1, w * *(v + i), v, s);
                    s += i + 1;
                }

                s = _overlap_buf.get();

                const std::size_t* NIEDOIDA_RESTRICT const indices =
                    data->point_ao_data[p].indices;

                for (std::size_t i = 0; i < n; ++i) {
                    const std::size_t c1 = indices[i];
                    double* NIEDOIDA_RESTRICT overlap_row = &result(c1, 0);
                    for (std::size_t j = 0; j <= i; ++j) {
                        const std::size_t c2 = indices[j];
                        overlap_row[c2] += *s++;
                    }
                }
            }

            return result;
        }
    }
}
