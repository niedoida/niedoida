/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_COMPAT_KIT_G94_BASIS_SET_BUILDER_HPP
#define NIEDOIDA_COMPAT_KIT_G94_BASIS_SET_BUILDER_HPP

#include "core_kit/basis_set_builder.hpp"

#include "core_kit/periodic_table.hpp"
#include "misc_kit/misc_utils.hpp"

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include <armadillo>

namespace niedoida {
    namespace compat {
        /**
         *  @ingroup compat_kit
         *  
         *  @brief  Basis set builder for atomic bases stored in Gaussian94 format
         *
         */
        class G94BasisSetBuilder : public virtual core::BasisSetBuilder {

        public:
            G94BasisSetBuilder(std::istream&);

            void build_atomic_basis_set(core::AtomicBasisSet& abs) override;

        private:
            struct G94Shell {
            public:
                std::string type;
                double scaling_factor;
                arma::vec exps;
                arma::mat coeffs;
            };    

            struct Representation {
                unsigned coefficient; //currently unused
                std::vector<G94Shell> shell;
            };

            typedef std::map<const std::string, Representation, misc::lt_string_nocase> ElementRepMap;
            ElementRepMap representations_map;
        };
    }
}

#endif
