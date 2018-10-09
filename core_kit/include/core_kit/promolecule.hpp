/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_PROMOLECULE_HPP
#define NIEDOIDA_CORE_KIT_PROMOLECULE_HPP

#include "core_kit/atom.hpp"
#include "core_kit/spin.hpp"

#include <boost/noncopyable.hpp>

#include <armadillo>

#include <memory>

namespace niedoida {

    namespace core {

/**
 * @brief The class implements promolecule.
 *
 * Construction of promolecule for the given system,
 * currently from separated atoms but in future also
 * from arbitrary defined fragments, consisting of more
 * than one atom.
 */

        class System;
        class FockMatrixGeneratorFactory;
        class TotalEFieldPotentialFactory;
        class TotalEFieldEnergyFactory;
        class OneElectronIntegralEngineFactory;
        class TwoElectronIntegralEngineFactory;

        class Promolecule: public boost::noncopyable {
        public:
            /**
             * @brief constructs promolecule from all atoms of the system
             */
            Promolecule(
                const std::shared_ptr<const System> system,
                const std::shared_ptr<const OneElectronIntegralEngineFactory>,
                const std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                const std::shared_ptr<const TotalEFieldPotentialFactory>,
                const std::shared_ptr<const TotalEFieldEnergyFactory>,
                const std::shared_ptr<const FockMatrixGeneratorFactory>);

            /**
             * @brief block-diagonal matrix with promolecule FO coefficients
             */
            const arma::mat& fo_coefficients(Spin) const;

            /**
             * @brief index of the first orbital in each fragment
             */
            const std::vector<std::size_t>& first_orbital_in_fragment() const;

            /**
             * @brief number of orbitals in each fragment
             */
            const std::vector<std::size_t>& no_orbitals_in_fragment() const;

            /**
             * @brief number of core (doubly occupied) orbitals in each fragment
             */
            const std::vector<std::size_t>& no_core_states_in_fragment() const;

            /**
             * @brief number of degenerated states in highest occupied shell
             * for each fragment
             */
            const std::vector<std::size_t>& no_deg_states_in_fragment() const;

            /**
             * @brief number of electrons in the highest occupied shell
             * for each fragment
             */
            const std::vector<std::size_t>& no_deg_electrons_in_fragment() const;

            /**
             * @brief average density matrix of promolecule (in AO)
             */
            const arma::mat& average_density_matrix(Spin) const;
    
        private:
            arma::mat C;
            arma::mat P_avr[NO_SPINS];
            std::vector<std::size_t> m_first_orbital_in_fragment;
            std::vector<std::size_t> m_no_orbitals_in_fragment;
            std::vector<std::size_t> m_no_core_states_in_fragment;
            std::vector<std::size_t> m_no_deg_states_in_fragment;
            std::vector<std::size_t> m_no_deg_electrons_in_fragment;
        };

// inline functions

        inline 
        const arma::mat& Promolecule::fo_coefficients(Spin) const 
        {
            return C;
        }

        inline
        const std::vector<std::size_t>& Promolecule::first_orbital_in_fragment() const
        {
            return m_first_orbital_in_fragment;
        }

        inline
        const std::vector<std::size_t>& Promolecule::no_orbitals_in_fragment() const
        {
            return m_no_orbitals_in_fragment;
        }

        inline
        const std::vector<std::size_t>& Promolecule::no_core_states_in_fragment() const
        {
            return m_no_core_states_in_fragment;
        }

        inline
        const std::vector<std::size_t>& Promolecule::no_deg_states_in_fragment() const
        {
            return m_no_deg_states_in_fragment;
        }

        inline
        const std::vector<std::size_t>& Promolecule::no_deg_electrons_in_fragment() const
        {
            return m_no_deg_electrons_in_fragment;
        }

        inline
        const arma::mat& Promolecule::average_density_matrix(Spin s) const
        {
            return P_avr[s];
        }

    }
}

#endif
