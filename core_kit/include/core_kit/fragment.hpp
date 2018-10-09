/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_FRAGMENT_HPP
#define NIEDOIDA_CORE_KIT_FRAGMENT_HPP

#include <string>
#include <armadillo>
#include <boost/noncopyable.hpp>
#include "core_kit/spin.hpp"

namespace niedoida {

    namespace core {

/**
 * @brief Abstract base class for implementing any kind of fragment
 *
 */
        class Fragment: public boost::noncopyable {
        public:
            virtual ~Fragment() {};
    
            /**
             * @brief simple constructor -- just sets up the label
             */
            Fragment(const std::string& _label) : label(_label) {};

            /**
             * @brief the label indicating fragment
             */
            const std::string label;

            /**
             * @brief fragment orbitals coefficients for given spin
             * 
             * Fragment orbitals (FO) are orbitals get by performing SCF
             * calculations for the separated fragment.
             */
            virtual const arma::mat& fo_coefficients(Spin) const = 0;
    
            /**
             * @brief number of core (doubly occupied) orbitals
             */
            virtual unsigned no_core_states() const = 0;

            /**
             * @brief number of degenerated states in highest occupied shell
             */
            virtual unsigned no_deg_states() const = 0;

            /**
             * @brief number of electrons in the highest occupied shell
             */
            virtual unsigned no_deg_electrons() const = 0;

            /** 
             * @brief average density matrix (in AO)
             * 
             * It is averaged over all spatialy degenerated states (no_deg_states() returns 
             * the no. of them), but not including spin degeneracy. So there are generally
             * two different results for s=SPIN_ALPHA and s=SPIN_BETA.
             */
            virtual const arma::mat& average_density_matrix(Spin) const = 0;
    
        };

    }
}

#endif
