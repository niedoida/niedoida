/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_MO_INTEGRAL_HPP
#define NIEDOIDA_TD_KIT_MO_INTEGRAL_HPP

#include "core_kit/system.hpp"
#include "core_kit/basis_set_info.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "scf_kit/scf_utils.hpp"
#include "core_kit/schwartz_estimator.hpp"

namespace niedoida {
    namespace td {

        class MOOneEIntGenerator {
        public:
            MOOneEIntGenerator(
                std::unique_ptr<core::OneElectronIntegralEngine> one_e_ie_engine,
                const arma::mat& mo_coeffs);

            double value(std::size_t i, 
                         std::size_t j) const;

        private:
            std::unique_ptr<core::OneElectronIntegralEngine> m_1ei;
            arma::mat m_mo_coeffs;
            arma::mat m_one_e_int_matrix_mo;
        };


        class MOTwoEIntGenerator {
        public:
            MOTwoEIntGenerator(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<core::TwoElectronIntegralEngine> two_ev_int_eng,
                const arma::mat& mo_coeffs);

            double value(std::size_t i, 
                         std::size_t j, 
                         std::size_t k, 
                         std::size_t l);
        private:

            void update(std::size_t i, 
                        std::size_t j, 
                        std::size_t k, 
                        std::size_t l);

            void update_task(
                std::size_t a,
                std::size_t b,
                std::size_t c,
                std::size_t d,
                unsigned long begin, 
                unsigned long end);

            void partial_update(
                std::size_t a,
                std::size_t b,
                std::size_t c,
                std::size_t d,
                const core::Request& request);

            void reduce();

            std::shared_ptr<const core::System> m_system;
            core::BasisSetInfo m_bs_info;
            std::unique_ptr<core::TwoElectronIntegralEngine> m_2ie;
            arma::mat m_mo_coeffs;

            const std::size_t m_max_no_requests;
            core::SchwartzEstimator m_schwartz;
            const double m_threshold;
            std::vector<core::Request> m_requests;
            arma::mat m_buf;

            unsigned long m_no_shell_quartets;
            double m_g;
        };

    }
}

#endif
