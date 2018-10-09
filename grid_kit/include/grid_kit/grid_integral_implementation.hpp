/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_GRID_INTEGRAL_IMPLEMENTATION_HPP
#define NIEDOIDA_GRID_KIT_GRID_INTEGRAL_IMPLEMENTATION_HPP

#include "core_kit/ao_value_engine.hpp"
#include "core_kit/system.hpp"
#include "core_kit/grid.hpp"
#include "core_kit/basis_set_info.hpp"

#include <memory>
#include <vector>

#include <boost/multi_array.hpp>

namespace niedoida {
    namespace grid {
        void calc_overlap(
            const std::size_t n,
            const double* const v,
            double* s);

        void calc_overlap_derivs(
            const std::size_t n,
            const double* NIEDOIDA_RESTRICT const v,
            const double* NIEDOIDA_RESTRICT const d,
            double* NIEDOIDA_RESTRICT ds);


        double density(
            const arma::mat& P,
            std::size_t no_significant_contractions,
            double const* NIEDOIDA_RESTRICT overlap,
            std::size_t const* NIEDOIDA_RESTRICT contractions);

        std::pair<double, double> density(
            const arma::mat P[2],
            std::size_t no_significant_contractions,
            double const* NIEDOIDA_RESTRICT overlap,
            std::size_t const* NIEDOIDA_RESTRICT contractions);


        class GridIntegralImplementation {
        public:
            GridIntegralImplementation(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<core::AOValueEngine> ao_value_engine);

            virtual ~GridIntegralImplementation() = default;

            struct PointAOData {
                std::size_t no_contractions;
                std::size_t* indices;
                double* values;
                double* derivs_x;
                double* derivs_y;
                double* derivs_z;
                double* derivs_xx;
                double* derivs_xy;
                double* derivs_xz;
                double* derivs_yy;
                double* derivs_yz;
                double* derivs_zz;
                double max_value;
                double max_deriv;
                double max_deriv2;
            };

            struct BlockAOData {
                std::size_t no_points;
                std::size_t no_contractions;
                std::unique_ptr<std::size_t[]> indices;
                std::unique_ptr<double[]> values;
                std::unique_ptr<double[]> derivs_x;
                std::unique_ptr<double[]> derivs_y;
                std::unique_ptr<double[]> derivs_z;
                std::unique_ptr<double[]> derivs_xx;
                std::unique_ptr<double[]> derivs_xy;
                std::unique_ptr<double[]> derivs_xz;
                std::unique_ptr<double[]> derivs_yy;
                std::unique_ptr<double[]> derivs_yz;
                std::unique_ptr<double[]> derivs_zz;
                std::unique_ptr<PointAOData[]> point_ao_data;
            };

            std::shared_ptr<BlockAOData> block_ao_data(
                const core::Grid::Block& block, 
                double threshold, 
                unsigned derivs_order,
                bool prescreening = true) const;

        protected:
            core::BasisSetInfo m_bs_info;
            std::unique_ptr<core::AOValueEngine> m_ao_value_engine;

            mutable arma::mat m_ao_values_buf;
            mutable arma::cube m_ao_derivs_buf;
            mutable arma::cube m_ao_derivs2_buf;
        };


        inline
        void calc_overlap(
            const std::size_t n,
            const double* NIEDOIDA_RESTRICT const v,
            double* NIEDOIDA_RESTRICT s)
        {
            for (std::size_t i = 0; i < n; ++i) {
                s += i + 1;
            }
        }

        inline
        void calc_overlap_derivs(
            const std::size_t n,
            const double* NIEDOIDA_RESTRICT const v,
            const double* NIEDOIDA_RESTRICT const d,
            double* NIEDOIDA_RESTRICT ds)
        {
            double* t = ds;

            for (std::size_t i = 0; i < n; ++i) {
                t += i + 1;
            }

            t = ds;

            for (std::size_t i = 0; i < n; ++i) {
                t += i + 1;
            }
        }
    }
}

#endif
