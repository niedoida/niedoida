/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_OCCUPATIONS_FACTORY_HPP
#define NIEDOIDA_CORE_KIT_OCCUPATIONS_FACTORY_HPP

#include "core_kit/occupations.hpp"
#include "core_kit/factory.hpp"
#include "core_kit/initial_guess_factory.hpp"

namespace niedoida {

    namespace core {

        class OccupationsFactory: 
            public Factory<Occupations> {
        };

        class AufbauOccupationsFactory: 
            public OccupationsFactory {
        public:
            AufbauOccupationsFactory(boost::optional<double> threshold):
                _threshold(threshold) {}

            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(
                        new AufbauOccupations(
                            system->basis_set.real_size(),
                            system->no_electrons(),
                            system->multiplicity,
                            _threshold));
                }

        private:
            boost::optional<double> _threshold;
        };

        class FermiOccupationsFactory: 
            public OccupationsFactory {
        public:
            FermiOccupationsFactory(double smear):
                _smear(smear) {}

            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(
                        new FermiOccupations(
                            system->basis_set.real_size(),
                            system->no_electrons(),
                            system->multiplicity,
                            _smear));
                }

        private:
            double _smear;
        };

        class MaximumOverlapOccupationsFactory:
            public OccupationsFactory {
        public: 
            MaximumOverlapOccupationsFactory(
                std::shared_ptr<const InitialGuessFactory> initial_guess_factory): 
                m_initial_guess_factory(initial_guess_factory) {} 
       
            Product make(std::shared_ptr<const System> system) const;

        protected:
            std::shared_ptr<const InitialGuessFactory> m_initial_guess_factory;
        };
    }
}

#endif
