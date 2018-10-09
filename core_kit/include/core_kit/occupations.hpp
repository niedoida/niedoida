/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_OCCUPATIONS_HPP
#define NIEDOIDA_CORE_KIT_OCCUPATIONS_HPP

#include "system.hpp"
#include "spin.hpp"

#include <boost/optional.hpp>

namespace niedoida {

    namespace core {

/**
 * @brief Abstract based class for occupation numbers generator
 */
        class Occupations {
        public:
            virtual ~Occupations() {}
            /**
             * @brief Function returning a vector of occupation numbers (possibly fractional)
             */
            virtual const arma::vec& occupation_numbers(
                const arma::vec& /*epsilons*/, 
                const arma::mat& /*coeffs*/, 
                Spin /*s*/) = 0;
        };

/**
 * @brief Occupation numbers based on Aufbau Prinzip 
 *
 * Only the lowest energy levels are occupied (integer occupation
 * numbers).  Quasi-degenerated HOMO orbitals may be handled in a
 * special way (optional parameter `tresh'), thus obtaining fractional
 * occupation numbers.
 */
        class AufbauOccupations: public Occupations {
        public:
            AufbauOccupations(unsigned /*no_basis_functions*/,
                              unsigned /*no_electrons*/,
                              unsigned /*multiplicity*/,
                              boost::optional<double> /*tresh*/);

            const arma::vec& occupation_numbers(
                const arma::vec& /*epsilons*/, 
                const arma::mat& /*coeffs*/,
                Spin /*s*/);

        protected:
            boost::optional<double> m_tresh;
            arma::vec m_occ[NO_SPINS];
            unsigned m_n[NO_SPINS]; 
        };

/**
 * @brief Fractional occupation numbers based on Fermi-Dirac distribution
 */
        class FermiOccupations: public Occupations {
        public:
            FermiOccupations(unsigned /*no_basis_functions*/,
                             unsigned /*no_electrons*/,
                             unsigned /*multiplicity*/,
                             double /*smear*/);

            const arma::vec& occupation_numbers(
                const arma::vec& /*epsilons*/, 
                const arma::mat& /*coeffs*/,
                Spin /*s*/);

        private:
            double m_beta;
            arma::vec m_occ[NO_SPINS];
            unsigned m_n[NO_SPINS]; 
        };

/**
 * @brief Average occupation numbers
 *
 * Useful e.g., for easy generation of spherically-symmetric atoms.
 */
        class AverageOccupations: public Occupations {
        public:
            AverageOccupations(unsigned /*no_basis_functions*/, 
                               unsigned /*no_electrons*/,
                               unsigned /*no_deg_states*/,
                               unsigned /*no_deg_electrons*/);

            const arma::vec& occupation_numbers(
                const arma::vec& /*epsilons*/, 
                const arma::mat& /*coeffs*/,
                Spin s) { return m_occupations[s]; }

        private:
            arma::vec m_occupations[NO_SPINS];
        };

/**
 * @brief Occupation numbers based on similarity to reference orbitals
 *
 * This employs maximum overlap method (MOM) described in details in,
 * e.g., [Besley, Gilbert, Gill (2009): J. Chem. Phys. 130, 124308].
 */
        class MaximumOverlapOccupations: public AufbauOccupations {
        public:
            MaximumOverlapOccupations(
                unsigned /*no_electrons*/,
                unsigned /*multiplicity*/,
                const arma::mat& /*overlap_matrix*/,
                const arma::mat& /*initial_mocoeffs_alpha*/,
                const arma::mat& /*initial_mocoeffs_beta*/);

            const arma::vec& occupation_numbers(
                const arma::mat& /*coeffs*/,
                Spin /*s*/);

        private:
            arma::mat m_S;
            arma::mat m_C0[NO_SPINS];
        };
    }
}

#endif
