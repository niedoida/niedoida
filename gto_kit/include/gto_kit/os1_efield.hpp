/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_OS1_EFIELD_HPP
#define NIEDOIDA_GTO_KIT_OS1_EFIELD_HPP

#include "core_kit/efield.hpp"

namespace niedoida {
    namespace gto {
        class OS1NucPotential: public core::EFieldPotential {
        public:
            OS1NucPotential(std::shared_ptr<const core::System>);

            const arma::mat& potential_matrix() const
            {
                return _v;
            }

        private:
            arma::mat _v;
        };

        class OS1ExtChrgsPotential: public core::EFieldPotential {
        public:
            OS1ExtChrgsPotential(std::shared_ptr<const core::System>);

            const arma::mat& potential_matrix() const
            {
                return _v;
            }

        private:
            arma::mat _v;
        };

        class OS1UEFPotential: public core::EFieldPotential {
        public:
            OS1UEFPotential(std::shared_ptr<const core::System>);

            const arma::mat& potential_matrix() const
            {
                return _v;
            }

        private:
            arma::mat _v;
        };
     
        class OS1NucPotentialFactory: public core::EFieldPotentialFactory {
        public:
            Product make(std::shared_ptr<const core::System> system) const
            {
                return Product(new OS1NucPotential(system));
            }
        };

        class OS1ExtChrgsPotentialFactory: public core::EFieldPotentialFactory {
        public:
            Product make(std::shared_ptr<const core::System> system) const
            {
                return Product(new OS1ExtChrgsPotential(system));
            }
        };

        class OS1UEFPotentialFactory: public core::EFieldPotentialFactory {
        public:
            Product make(std::shared_ptr<const core::System> system) const
            {
                return Product(new OS1UEFPotential(system));
            }
        };
    }
}

#endif
