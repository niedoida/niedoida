/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/sds_adaptive_grid.hpp"

#include <armadillo>
#include <limits>

namespace niedoida {
    namespace grid {
        SdSAdaptiveGrid::SdSAdaptiveGrid(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<RadialGrid> rg,
            std::unique_ptr<SphericalGrid> sg,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            std::size_t spherical_grid_size) :
            ProductGrid(system,
                        std::move(pf),
                        std::move(rg),
                        std::move(sg),
                        ao_value_engine_factory),
            GridIntegralImplementation(
                system, std::move(ao_value_engine_factory->make(system))),
            _overlap_buf(new double[(m_bs_info.m_no_contractions *
                                     (m_bs_info.m_no_contractions + 1)) /
                                    2]),
            _spherical_grid_size(spherical_grid_size)
        {
        }

        std::size_t SdSAdaptiveGrid::spherical_grid_size(
            std::size_t a, double r, const SphericalGrid& sg) const
        {
            if (r <= std::numeric_limits<double>::epsilon())
                return 1;

            arma::mat prev_s(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);
            arma::mat next_s(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);

            for (std::size_t n = 2; n < 18; ++n) {
                std::shared_ptr<const Grid::Block> block =
                    sg(a, r, n * n * 2, 1e-50);
                next_s = overlap(*block);
                const double delta = arma::norm(next_s - prev_s, 1);
                prev_s = next_s;
                if (std::abs(delta) < 1e-10)
                    return (n - 1) * (n - 1) * 2;
            }

            return _spherical_grid_size;
        }

        arma::mat SdSAdaptiveGrid::overlap(const Grid::Block& block) const
        {
            arma::mat result(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions);

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, 1e-20, 0);

            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                const std::size_t n = data->point_ao_data[p].no_contractions;
                /*const*/ double* const NIEDOIDA_RESTRICT v =
                    data->point_ao_data[p].values;
                const double w = block.weights[p];
                double* NIEDOIDA_RESTRICT s = _overlap_buf.get();

                for (std::size_t i = 0; i < n; ++i) {
                    // ola::scal(i + 1, w * *(v + i), v, s);
                    const arma::vec vv(v, i + 1, false, true);
                    arma::vec ss(s, i + 1, false, true);
                    ss = w * *(v + i) * vv;
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

        arma::mat SdSAdaptiveGrid::overlap_derivs(const Grid::Block& block,
                                                  int) const
        {
            arma::mat result(m_bs_info.m_no_contractions,
                             m_bs_info.m_no_contractions,
                             arma::fill::zeros);

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, 1e-20, 1);

            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                const std::size_t n = data->point_ao_data[p].no_contractions;
                /*const*/ double* const NIEDOIDA_RESTRICT v =
                    data->point_ao_data[p].values;
                const double w = block.weights[p];
                double* NIEDOIDA_RESTRICT s = _overlap_buf.get();

                for (std::size_t i = 0; i < n; ++i) {
                    // ola::scal(i + 1, w * *(v + i), v, s);
                    const arma::vec vv(v, i + 1, false, true);
                    arma::vec ss(s, i + 1, false, true);
                    ss = w * *(v + i) * vv;
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
