/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_COMPAT_KIT_MOLCAS_BASIS_SET_BUILDER_HPP
#define NIEDOIDA_COMPAT_KIT_MOLCAS_BASIS_SET_BUILDER_HPP

#include "core_kit/basis_set_builder.hpp"

#include <armadillo>

#include <iostream>
#include <map>
#include <vector>

namespace niedoida {
    namespace compat {
        /**
         *  @ingroup compat_kit
         *  
         *  @brief  Basis set builder for atomic bases stored in MOLCAS format
         *
         */
        class MolcasBasisSetBuilder : public virtual core::BasisSetBuilder {

        public:
            MolcasBasisSetBuilder(std::istream&);

            void build_atomic_basis_set(core::AtomicBasisSet& abs);

        private:
            /**
             *  @ingroup compat_kit
             *  
             *  @brief  Shell description in MOLCAS basis set
             *
             */
            struct MolcasShell {
            public:
                unsigned l;
                arma::vec exps;
                arma::mat coeffs;
            };    

            /**
             *  @ingroup compat_kit
             *  
             *  @brief  Holds the set of data describing an atom basis set taken
             *  form the MOLCAS basis set description
             *
             */
            struct Representation {
                unsigned coefficient; //currently unused
                std::vector<MolcasShell> shells;
            };

            typedef std::map<unsigned, Representation> ElementRepMap;
            ElementRepMap representations_map;
        };
    }
}

#endif
