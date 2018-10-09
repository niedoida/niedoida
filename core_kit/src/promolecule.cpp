/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/promolecule.hpp"
#include "core_kit/atomic_fragment.hpp"
#include "core_kit/core_kit.hpp"
#include "core_kit/system.hpp"

namespace niedoida {

    namespace core {

        // class Promolecule implementation

        Promolecule::Promolecule(
            const std::shared_ptr<const System> system,
            const std::shared_ptr<const OneElectronIntegralEngineFactory>
                one_e_ie_factory,
            const std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            const std::shared_ptr<const TotalEFieldPotentialFactory>
                ef_potential_factory,
            const std::shared_ptr<const TotalEFieldEnergyFactory>
                ef_energy_factory,
            const std::shared_ptr<const FockMatrixGeneratorFactory> fmg_factory)
        {
            // constructs promolecule from _atomic_ fragments

            C = arma::zeros<arma::mat>(system->basis_set.real_size(),
                                       system->basis_set.real_size());
            P_avr[SPIN_ALPHA] = P_avr[SPIN_BETA] = arma::zeros<arma::mat>(
                system->basis_set.real_size(), system->basis_set.real_size());

            // mapping:
            //
            // element => index at system->atoms
            //
            // to avoid computing the same atoms few times.
            //
            // FIXME: not element nor isotope are good to identify atoms
            // when we let two atoms of the same element have different basis
            // sets!
            std::map<const Element*, std::size_t> element_map;

            std::size_t i = 0;

            for (std::size_t a = 0; a < system->atoms.size(); ++a) {

                const std::size_t n =
                    system->basis_set.atomic_basis_sets()[a]->real_size();

                // fragments will be labeled after atoms
                // const std::string& label = system->atoms[a]->label;

                const Element* const element =
                    system->atoms[a]->isotope->element;

                // remember where basis set of atom begins ...
                m_first_orbital_in_fragment.push_back(i);
                // ... and how many orbitals it consists of
                m_no_orbitals_in_fragment.push_back(n);

                // mark block of coefficient matrices related to the current
                // atom
                const arma::span r(i, i + n - 1);
                arma::subview<double> C_block = C.submat(r, r);
                arma::subview<double> P_avr_alpha_block =
                    P_avr[SPIN_ALPHA].submat(r, r);
                arma::subview<double> P_avr_beta_block =
                    P_avr[SPIN_BETA].submat(r, r);

                if (element_map.find(element) != element_map.end()) {
                    // ... the same element has already been computed ...
                    const std::size_t b = element_map[element];
                    const arma::span r1(m_first_orbital_in_fragment[b],
                                        m_first_orbital_in_fragment[b] +
                                            m_no_orbitals_in_fragment[b] - 1);
                    // FIXME: for general (submolecular) fragments
                    // it will be more complicated than just copying relevant
                    // blocks!
                    C_block = C.submat(r1, r1);
                    P_avr_alpha_block = P_avr[SPIN_ALPHA].submat(r1, r1);
                    P_avr_beta_block = P_avr[SPIN_BETA].submat(r1, r1);
                    m_no_core_states_in_fragment.push_back(
                        m_no_core_states_in_fragment[b]);
                    m_no_deg_states_in_fragment.push_back(
                        m_no_deg_states_in_fragment[b]);
                    m_no_deg_electrons_in_fragment.push_back(
                        m_no_deg_electrons_in_fragment[b]);
                } else {
                    // ... the element appears the first time ...
                    // compute it
                    AtomicFragment f(system,
                                     a,
                                     one_e_ie_factory,
                                     two_e_ie_factory,
                                     ef_potential_factory,
                                     ef_energy_factory,
                                     fmg_factory);
                    C_block = f.fo_coefficients(SPIN_ALPHA);
                    P_avr_alpha_block = f.average_density_matrix(SPIN_ALPHA);
                    P_avr_beta_block = f.average_density_matrix(SPIN_BETA);
                    m_no_core_states_in_fragment.push_back(f.no_core_states());
                    m_no_deg_states_in_fragment.push_back(f.no_deg_states());
                    m_no_deg_electrons_in_fragment.push_back(
                        f.no_deg_electrons());
                    element_map[element] = a; // add to the map
                }

                i += n;
            }
        }
    }
}
