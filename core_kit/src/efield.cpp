/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/efield.hpp"

#include <boost/foreach.hpp>

#include <cmath>

namespace niedoida {

    namespace core {

        const arma::mat& TotalEFieldPotential::potential_matrix() const
        {
            _v = arma::zeros<arma::mat>(_n, _n);

            for (const std::shared_ptr<const EFieldPotential>& c :
                 contributions)
                _v += c->potential_matrix();

            return _v;
        }

        double TotalEFieldEnergy::energy() const
        {
            double e = 0;

            for (const std::shared_ptr<const EFieldEnergy>& c : contributions)
                e += c->energy();

            return e;
        }

        EFieldPotentialFactory::Product TotalEFieldPotentialFactory::make(
            std::shared_ptr<const System> system) const
        {
            std::unique_ptr<TotalEFieldPotential> p(
                new TotalEFieldPotential(system));

            for (const std::shared_ptr<const EFieldPotentialFactory>& c :
                 contributions) {
                std::unique_ptr<EFieldPotential> f = c->make(system);
                EFieldPotential* pf = f.release();
                std::shared_ptr<EFieldPotential> sf(pf);
                p->contributions.push_back(sf);
            }

            return std::move(p);
        }

        EFieldEnergyFactory::Product TotalEFieldEnergyFactory::make(
            std::shared_ptr<const System> system) const
        {
            std::unique_ptr<TotalEFieldEnergy> p(new TotalEFieldEnergy);

            for (const std::shared_ptr<const EFieldEnergyFactory>& c :
                 contributions) {
                std::unique_ptr<EFieldEnergy> f = c->make(system);
                EFieldEnergy* pf = f.release();
                std::shared_ptr<EFieldEnergy> sf(pf);

                p->contributions.push_back(sf);
            }

            return std::move(p);
        }

        Nuc2Energy::Nuc2Energy(std::shared_ptr<const System> system) : _e(0)
        {
            const std::size_t n = system->atoms.size();
            for (std::size_t a = 0; a < n; ++a) {
                for (std::size_t b = 0; b < a; ++b) {
                    const arma::vec3& p = system->atoms[a]->coords;
                    const arma::vec3& q = system->atoms[b]->coords;
                    const double d = arma::norm(p - q);
                    _e += system->atoms[a]->isotope->element->atomic_number *
                          system->atoms[b]->isotope->element->atomic_number / d;
                }
            }
        }

        NucUEFEnergy::NucUEFEnergy(std::shared_ptr<const System> system) : _e(0)
        {
            const std::size_t n = system->atoms.size();
            for (std::size_t a = 0; a < n; ++a) {
                const arma::vec::fixed<3>& p = system->atoms[a]->coords;
                const arma::vec& q = system->uniform_electric_field;
                const double d = (p(0) * q(0)) + (p(1) * q(1)) + (p(2) * q(2));
                _e += system->atoms[a]->isotope->element->atomic_number * d;
            }
        }

        ExternalCharges2Energy::ExternalCharges2Energy(
            std::shared_ptr<const System> system) :
            _e(0)
        {
            const std::size_t n = system->ext_chrgs.size();
            for (std::size_t a = 0; a < n; ++a) {
                for (std::size_t b = 0; b < a; ++b) {
                    const arma::vec3& p = system->ext_chrgs[a]->coords;
                    const arma::vec3& q = system->ext_chrgs[b]->coords;
                    const double d = arma::norm(p - q);
                    _e += system->ext_chrgs[a]->charge_value *
                          system->ext_chrgs[b]->charge_value / d;
                }
            }
        }

        NucExternalChargesEnergy::NucExternalChargesEnergy(
            std::shared_ptr<const System> system) :
            _e(0)
        {
            const std::size_t n_atoms = system->atoms.size();
            const std::size_t n_charges = system->ext_chrgs.size();
            for (std::size_t a = 0; a < n_atoms; ++a) {
                for (std::size_t b = 0; b < n_charges; ++b) {
                    const arma::vec3& p = system->atoms[a]->coords;
                    const arma::vec3& q = system->ext_chrgs[b]->coords;
                    const double d = arma::norm(p - q);
                    _e += system->atoms[a]->isotope->element->atomic_number *
                          system->ext_chrgs[b]->charge_value / d;
                }
            }
        }

        ExternalChargesUEFEnergy::ExternalChargesUEFEnergy(
            std::shared_ptr<const System> system) :
            _e(0)
        {
            const std::size_t n = system->ext_chrgs.size();
            for (std::size_t a = 0; a < n; ++a) {
                const arma::vec::fixed<3>& p = system->ext_chrgs[a]->coords;
                const arma::vec& q = system->uniform_electric_field;
                const double d = arma::dot(p, q);
                _e += system->ext_chrgs[a]->charge_value * d;
            }
        }
    }
}
