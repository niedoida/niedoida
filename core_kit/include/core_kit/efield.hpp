/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_EFIELD_HPP
#define NIEDOIDA_CORE_KIT_EFIELD_HPP

#include "core_kit/system.hpp"
#include "core_kit/factory.hpp"

namespace niedoida {

    namespace core {

        class EFieldPotential {
        public:
            virtual ~EFieldPotential() {}

            virtual const arma::mat& potential_matrix() const = 0;
        };

        class EFieldEnergy {
        public:
            virtual ~EFieldEnergy() {}

            virtual double energy() const = 0;
        };

        class EFieldPotentialFactory: 
            public Factory<EFieldPotential> {
        };

        class EFieldEnergyFactory: 
            public Factory<EFieldEnergy> {
        };


        class TotalEFieldPotential: public EFieldPotential {
        public:
            TotalEFieldPotential(std::shared_ptr<const System> system):
                _n(system->basis_set.real_size()), _v(arma::zeros<arma::mat>(_n, _n)) {}

            std::vector<std::shared_ptr<const EFieldPotential> > contributions;

            const arma::mat& potential_matrix() const;

        private:
            std::size_t _n;
            mutable arma::mat _v;
        };

        class TotalEFieldEnergy: public EFieldEnergy {
        public:
            std::vector<std::shared_ptr<const EFieldEnergy> > contributions;

            double energy() const;
        };

        class TotalEFieldPotentialFactory: 
            public EFieldPotentialFactory {
        public:
            std::vector<std::shared_ptr<const EFieldPotentialFactory> > contributions;

            Product make(std::shared_ptr<const System>) const;
        };

        class TotalEFieldEnergyFactory: 
            public EFieldEnergyFactory {
        public:
            std::vector<std::shared_ptr<const EFieldEnergyFactory> > contributions;

            Product make(std::shared_ptr<const System>) const;
        };


        class NucPotential: public EFieldPotential {
        public:
            NucPotential();

            const arma::mat& potential_matrix() const
                {
                    return _v;
                }

        private:
            arma::mat _v;
        };

        class UEFPotential: public EFieldPotential {
        public:
            UEFPotential();

            const arma::mat& potential_matrix() const
                {
                    return _v;
                }

        private:
            arma::mat _v;
        };

        class ExternalChargesPotential: public EFieldPotential {
        public:
            ExternalChargesPotential();

            const arma::mat& potential_matrix() const
                {
                    return _v;
                }

        private:
            arma::mat _v;
        };

        class Nuc2Energy: public EFieldEnergy {
        public:
            Nuc2Energy(std::shared_ptr<const System> system);

            double energy() const
                {
                    return _e;
                }

        private:
            double _e;
        };

        class UEF2Energy: public EFieldEnergy {
        public:
            double energy() const
                {
                    return 0;
                }
        };

        class NucUEFEnergy: public EFieldEnergy {
        public:
            NucUEFEnergy(std::shared_ptr<const System> system);

            double energy() const
                {
                    return _e;
                }

        private:
            double _e;
        };

        class ExternalCharges2Energy: public EFieldEnergy {
        public:
            ExternalCharges2Energy(std::shared_ptr<const System> system);

            double energy() const
                {
                    return _e;
                }

        private:
            double _e;
        };

        class NucExternalChargesEnergy: public EFieldEnergy {
        public:
            NucExternalChargesEnergy(std::shared_ptr<const System> system);

            double energy() const
                {
                    return _e;
                }

        private:
            double _e;
        };

        class ExternalChargesUEFEnergy: public EFieldEnergy {
        public:
            ExternalChargesUEFEnergy(std::shared_ptr<const System> system);

            double energy() const
                {
                    return _e;
                }

        private:
            double _e;
        };


        class Nuc2EnergyFactory: public EFieldEnergyFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(new Nuc2Energy(system));
                }
        };

        class UEF2EnergyFactory: public EFieldEnergyFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(new UEF2Energy);
                }
        };

        class NucUEFEnergyFactory: public EFieldEnergyFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(new NucUEFEnergy(system));
                }
        };

        class ExternalCharges2EnergyFactory: public EFieldEnergyFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(new ExternalCharges2Energy(system));
                }
        };

        class NucExternalChargesEnergyFactory: public EFieldEnergyFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(new NucExternalChargesEnergy(system));
                }
        };

        class ExternalChargesUEFEnergyFactory: public EFieldEnergyFactory {
        public:
            Product make(std::shared_ptr<const System> system) const
                {
                    return Product(new ExternalChargesUEFEnergy(system));
                }
        };

    }
}

#endif
