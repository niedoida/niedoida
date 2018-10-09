/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_LOCALIZATION_HPP
#define NIEDOIDA_POSTHF_KIT_LOCALIZATION_HPP

#include <boost/noncopyable.hpp>

#include <armadillo>

#include "core_kit/system.hpp"
#include "core_kit/integral_engine.hpp"

namespace niedoida {

    namespace posthf {

        class Localization{
        public:
            virtual ~Localization() {}

            virtual arma::mat localize_orbitals(const arma::mat& C) const = 0;
        };

        class PipekMezeyLocalization: public Localization, public boost::noncopyable {
        public:
            PipekMezeyLocalization(const std::shared_ptr<const niedoida::core::System> system,
                                   std::unique_ptr<niedoida::core::OneElectronIntegralEngine> one_e_int_eng);

            arma::mat localize_orbitals(const arma::mat& C) const;

        private:
            double localization_value();
            arma::vec localization_gradient();
            void exponential_transformation();
        };

        class CholeskyLocalization: public Localization {
        public:
            CholeskyLocalization(const std::shared_ptr<const niedoida::core::System> system);

            arma::mat localize_orbitals(const arma::mat& C) const;
            arma::mat localize_density_matrix(const arma::mat& P,
                                              const bool skip_virtual = true) const;
            unsigned no_base() const;
            unsigned no_complement() const;
        private:
            const std::shared_ptr<const niedoida::core::System> m_system;
            mutable unsigned m_no_base;
            mutable unsigned m_no_complement;
        };

        inline
        unsigned CholeskyLocalization::no_base() const
        {
            return m_no_base;
        }

        inline
        unsigned CholeskyLocalization::no_complement() const
        {
            return m_no_complement;
        }
    }
}

#endif
