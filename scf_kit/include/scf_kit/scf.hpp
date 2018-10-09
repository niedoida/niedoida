/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_SCF_HPP
#define NIEDOIDA_SCF_KIT_SCF_HPP

#include <armadillo>

#include "core_kit/spin.hpp"

namespace niedoida {
    namespace scf {
        /**
         * @ingroup scf_kit
         *
         * @brief Basis class for SCF algorithms.
         *
         * The class defines common interface for all SCF algorithms.
         *
         */
        class PSCF {
        public:
            virtual ~PSCF() = default;

            /**
             * @brief Tells whether the method is restricted, or unrestricted.
             *
             * @return true if the method is restricted, false otherwise.
             */
            virtual bool is_restricted() const = 0;

            /**
             * @brief Sets the initial density matrix
             *
             */
            virtual void set_initial_density_matrix( 
                const arma::mat&,
                const arma::mat&) = 0;

            /**
             * @brief Performs next SCF iteration.
             *
             * @return true if converged, false otherwise.
             */
            virtual bool next_iteration() = 0;

            /**
             * @brief Checks if SCF is converged.
             *
             * @return true if converged, false otherwise.
             */
            virtual bool is_converged() const = 0;

            /**
             * @brief Molecular orbital energies for given spin.
             *
             */
            virtual const arma::vec& mo_energies(core::Spin) const = 0;

            /**
             * @brief Density matrix for given spin.
             *
             */
            virtual const arma::mat& density_matrix(core::Spin) const = 0;

            /**
             * @brief Electronic energy of the system
             *
             */
            virtual double electronic_energy() const = 0;

            /**
             * @brief Energy of external field
             *
             */
            virtual double efield_energy() const = 0;

            /**
             * @brief Total energy of the system
             *
             */
            virtual double energy() const = 0;

            /**
             * @brief Fock matrix for given spin
             *
             */
            virtual const arma::mat& fock_matrix(core::Spin) const = 0;
        };

        class SCF: public PSCF {
        public:
            /**
             * @brief Molecular orbital coefficients for given spin.
             *
             */
            virtual const arma::mat& mo_coefficients(core::Spin) const = 0;

            /**
             * @brief Molecular orbital occupation numbers for a given spin
             *
             */
            virtual const arma::vec& mo_occupations(core::Spin) const = 0;
        };
    }
}

#endif
