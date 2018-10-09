/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SYSTEM_HPP
#define NIEDOIDA_CORE_KIT_SYSTEM_HPP

#include <vector>

#include <boost/noncopyable.hpp>

#include "core_kit/atom.hpp"
#include "core_kit/charge.hpp"
#include "core_kit/basis_set.hpp"
#include "core_kit/spin.hpp"
#include "core_kit/promolecule.hpp"
#include "symmetry_kit/symmetry_info.hpp"

namespace niedoida {

    namespace core {
/**
 * @ingroup core_kit
 * 
 * @brief Represents a system.
 *
 * The class represents a quantum-chemical system, like a molecule,
 * or a group of molecules. Provides access to all the atoms, and
 * to the basis set.
 *
 * @todo Find a better (safer) interface.
 * 
 */
        
        class IntegralCache;
        class ACDIntegralCache;

        class System: public boost::noncopyable {
        public:
            System();
            ~System();

            std::vector<Atom*> atoms;
            std::vector<Charge*> ext_chrgs;
            int charge;
            unsigned multiplicity;
            arma::vec uniform_electric_field;
            BasisSet basis_set;
            unsigned no_core_electrons;
    
            std::unique_ptr<BasisSet> aux_basis_set;
            std::unique_ptr<BasisSet> posthf_aux_basis_set;
            std::unique_ptr<BasisSet> poisson_basis_set;
            std::unique_ptr<arma::mat> external_potential_matrix;
            std::unique_ptr<double> efield_energy;

            arma::vec translation_to_input_frame;
            arma::mat rotation_to_input_frame;

	    std::unique_ptr<const symmetry::AbstractSymmetryInfo> symmetry_info;

            /**
             * @brief Returns number of electrons of given spin in the system.
             *
             * Unpaired electrons are assigned alpha spin.
             * 
             */
            unsigned no_electrons(Spin) const;

            /**
             * @brief Returns number of electrons in the system.
             *
             */
            unsigned no_electrons() const;

            /**
             * @brief Returns vector of occupation numbers for given spin
             *
             */
            arma::vec occupations(Spin) const;

            std::shared_ptr<const Promolecule> promolecule;

            mutable std::shared_ptr<IntegralCache> integral_cache;
            mutable std::shared_ptr<ACDIntegralCache> acd_integral_cache;   
        };

    }
}

#endif
