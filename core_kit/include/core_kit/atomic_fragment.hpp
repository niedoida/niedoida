/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_ATOMIC_FRAGMENT_HPP
#define NIEDOIDA_CORE_KIT_ATOMIC_FRAGMENT_HPP

#include "core_kit/fragment.hpp"

#include "core_kit/system.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"

#include "core_kit/efield.hpp"
#include "core_kit/integral_engine_factory.hpp"


namespace niedoida {

    namespace core {

/**
 * @brief Implementation of fragment consisting of only one atom
 *
 * @todo Write (and use here) ROHF with fractional occupations
 * to achieve sphericaly symmetrical atomic fragments. Currently
 * orbitals has a little broken symmetry.
 */
        class AtomicFragment: public Fragment {
        public:
            AtomicFragment(
                const std::shared_ptr<const System>, 
                const std::size_t,        
                const std::shared_ptr<const OneElectronIntegralEngineFactory>,
                const std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                const std::shared_ptr<const TotalEFieldPotentialFactory>,
                const std::shared_ptr<const TotalEFieldEnergyFactory>,
                const std::shared_ptr<const FockMatrixGeneratorFactory>);

            const arma::mat& fo_coefficients(Spin) const;
            unsigned no_core_states() const;
            unsigned no_deg_states() const;
            unsigned no_deg_electrons() const;
            const arma::mat& average_density_matrix(Spin) const;

        private:
            unsigned m_no_core_states;
            unsigned m_no_deg_electrons; // no of electrons in degenerated valence shell
            unsigned m_no_deg_states;    // no of degenerated states (not incl. spin deg.)

            arma::mat C;
            arma::mat P_avr[NO_SPINS];
        };

// inline functions

        inline 
        const arma::mat& AtomicFragment::fo_coefficients(Spin) const 
        {
            return C;
        }

        inline 
        unsigned AtomicFragment::no_core_states() const 
        {
            return m_no_core_states;
        }

        inline
        unsigned AtomicFragment::no_deg_states() const
        {
            return m_no_deg_states;
        }

        inline
        unsigned AtomicFragment::no_deg_electrons() const
        {
            return m_no_deg_electrons;
        }


        inline 
        const arma::mat& AtomicFragment::average_density_matrix(Spin s) const
        {
            return P_avr[s];
        }

    }
}


#endif
