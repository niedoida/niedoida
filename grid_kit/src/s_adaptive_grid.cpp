/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/s_adaptive_grid.hpp"

#include <limits>

namespace {
    std::size_t
    adjust_angular_size(std::size_t requested_size,
                        const std::vector<std::size_t>& allowed_sizes)
    {
        for (std::size_t i = 0; i < allowed_sizes.size(); ++i)
            if (allowed_sizes[i] >= requested_size)
                return i;

        return allowed_sizes.size() - 1;
    }
}

namespace niedoida {
    namespace grid {
        SAdaptiveGrid::SAdaptiveGrid(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<RadialGrid> rg,
            std::unique_ptr<SphericalGrid> sg,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            double accuracy,
            std::size_t max_no_radial_grid_points,
            std::size_t max_spherical_grid_size) :
            ProductGrid(system,
                        std::move(pf),
                        std::move(rg),
                        std::move(sg),
                        ao_value_engine_factory),
            GridIntegralImplementation(system,
                                       ao_value_engine_factory->make(system)),
            _overlap_buf(new double[(m_bs_info.m_no_contractions *
                                     (m_bs_info.m_no_contractions + 1)) /
                                    2]),
            _accuracy(accuracy),
            _max_spherical_grid_size(max_spherical_grid_size),
            _prev_atom(0),
            _prev_grid_size(0)
        {
        }

        std::size_t
        SAdaptiveGrid::spherical_grid_size(std::size_t a,
                                           double r,
                                           const PartitionFunction& pf,
                                           const SphericalGrid& sg) const
        {
            //    if (r <= std::numeric_limits<double>::epsilon())
            //        return 1;

            if (r <= std::numeric_limits<double>::epsilon())
                std::cout << "argh" << std::endl;

            const double r2 = r * r;

            arma::mat prev_s(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);
            arma::mat next_s(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);

            //    int start = 2;
            //
            //    if (a != _prev_atom)
            //        _prev_atom = a;
            //    else
            //        start = std::max(2,
            //        static_cast<int>(std::sqrt(_prev_grid_size / 8.0)));

            const std::size_t n = adjust_angular_size(_max_spherical_grid_size,
                                                      sg.allowed_sizes());

            for (std::size_t i = 0; i < n; ++i) {
                std::shared_ptr<Grid::Block> block =
                    sg(a, r, i, _accuracy / 1e3);
                const std::size_t bs = block->size;

                pf(a, bs, block->coords.memptr(), block->weights.memptr());

                block->weights *= r2;

                next_s = overlap(*block);
                const double delta = norm(next_s - prev_s, 1);
                prev_s = next_s;
                if (delta < _accuracy) {
                    return i > 0 ? i - 1 : i;
                    //            const int j = std::max(i, 3);
                    //            _prev_grid_size = (j - 1) * (j - 1) * 2;
                    //            return _prev_grid_size;
                }
            }

            //    _prev_grid_size = _max_spherical_grid_size;

            return n;
        }

        arma::mat SAdaptiveGrid::overlap(const Grid::Block& block) const
        {
            arma::mat result(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, _accuracy / 1e3, 0);

            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                const std::size_t n = data->point_ao_data[p].no_contractions;
                const double* const NIEDOIDA_RESTRICT v =
                    data->point_ao_data[p].values;
                double* NIEDOIDA_RESTRICT s = _overlap_buf.get();

                calc_overlap(n, v, s);

                const double w = block.weights[p];

                const std::size_t* NIEDOIDA_RESTRICT const indices =
                    data->point_ao_data[p].indices;

                for (std::size_t i = 0; i < n; ++i) {
                    const std::size_t c1 = indices[i];
                    double* NIEDOIDA_RESTRICT overlap_row = &result(c1, 0);
                    for (std::size_t j = 0; j <= i; ++j) {
                        const std::size_t c2 = indices[j];
                        overlap_row[c2] += w * *s++;
                    }
                }
            }

            return result;
        }
    }
}
