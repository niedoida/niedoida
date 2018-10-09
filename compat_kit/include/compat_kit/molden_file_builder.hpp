/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_COMPAT_KIT_MOLDEN_FILE_BUILDER_HPP
#define NIEDOIDA_COMPAT_KIT_MOLDEN_FILE_BUILDER_HPP

#include <iosfwd>
#include <memory>

#include <armadillo>

#include "core_kit/system.hpp"

namespace niedoida {
    namespace compat {
        class MoldenFileBuilder {
        public:
            MoldenFileBuilder(std::shared_ptr<const core::System> system);

            /* There are several variants of this function */

            // for UHF or ROHF with explicit specifying occupation numbers
            void add_scf_step(double energy,
                              const arma::vec& mo_energies_alpha,
                              const arma::vec& mo_energies_beta,
                              const arma::mat& mo_coeffs_alpha,
                              const arma::mat& mo_coeffs_beta,
                              const arma::vec& mo_occups_alpha,
                              const arma::vec& mo_occups_beta);

            // for RHF (there is no reason to double MOs in such a case) 
            // with explicit specifying occupation numbers 
            void add_scf_step(double energy,
                              const arma::vec& mo_energies,
                              const arma::mat& mo_coeffs,
                              const arma::vec& mo_occups);

            // for UHF or ROHF without explicit specifying occupation numbers
            // (they will be taken from system->occupations)
            void add_scf_step(double energy,
                              const arma::vec& mo_energies_alpha,
                              const arma::vec& mo_energies_beta,
                              const arma::mat& mo_coeffs_alpha,
                              const arma::mat& mo_coeffs_beta);

            // for RHF without explicit specifying occupation numbers
            // (they will be taken from system->occupations)
            void add_scf_step(double energy,
                              const arma::vec& mo_energies,
                              const arma::mat& mo_coeffs);


            void write(std::ostream&);

        private:
            std::shared_ptr<const core::System> m_system;

            std::vector<double> m_scf_energies;
            arma::mat m_mo_coeffs[2];
            arma::vec m_mo_energies[2];
            arma::vec m_mo_occups[2];

            bool m_has_two_mo_sets;
        };
    }
}

#endif
