/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "compat_kit/molden_file_builder.hpp"

#include "core_kit/core_utils.hpp"

#include <algorithm>
#include <iostream>

#include <boost/format.hpp>

namespace niedoida {
    namespace compat {
        MoldenFileBuilder::MoldenFileBuilder(
            std::shared_ptr<const core::System> system) :
            m_system(system)
        {
        }

        void MoldenFileBuilder::add_scf_step(double energy,
                                             const arma::vec& mo_energies_alpha,
                                             const arma::vec& mo_energies_beta,
                                             const arma::mat& mo_coeffs_alpha,
                                             const arma::mat& mo_coeffs_beta,
                                             const arma::vec& mo_occups_alpha,
                                             const arma::vec& mo_occups_beta)
        {
            m_scf_energies.push_back(energy);
            m_mo_energies[core::SPIN_ALPHA] = mo_energies_alpha;
            m_mo_energies[core::SPIN_BETA] = mo_energies_beta;
            m_mo_coeffs[core::SPIN_ALPHA] = mo_coeffs_alpha;
            m_mo_coeffs[core::SPIN_BETA] = mo_coeffs_beta;
            m_mo_occups[core::SPIN_ALPHA] = mo_occups_alpha;
            m_mo_occups[core::SPIN_BETA] = mo_occups_beta;

            m_has_two_mo_sets = true;
        }

        void MoldenFileBuilder::add_scf_step(double energy,
                                             const arma::vec& mo_energies,
                                             const arma::mat& mo_coeffs,
                                             const arma::vec& mo_occups)
        {
            m_scf_energies.push_back(energy);
            m_mo_energies[core::SPIN_ALPHA] = mo_energies;
            m_mo_coeffs[core::SPIN_ALPHA] = mo_coeffs;
            m_mo_occups[core::SPIN_ALPHA] = mo_occups;

            m_has_two_mo_sets = false;
        }

        void MoldenFileBuilder::add_scf_step(double energy,
                                             const arma::vec& mo_energies_alpha,
                                             const arma::vec& mo_energies_beta,
                                             const arma::mat& mo_coeffs_alpha,
                                             const arma::mat& mo_coeffs_beta)
        {
            add_scf_step(energy,
                         mo_energies_alpha,
                         mo_energies_beta,
                         mo_coeffs_alpha,
                         mo_coeffs_beta,
                         m_system->occupations(core::SPIN_ALPHA),
                         m_system->occupations(core::SPIN_BETA));
        }

        void MoldenFileBuilder::add_scf_step(double energy,
                                             const arma::vec& mo_energies,
                                             const arma::mat& mo_coeffs)
        {
            add_scf_step(energy,
                         mo_energies,
                         mo_coeffs,
                         m_system->occupations(core::SPIN_ALPHA));
        }

        void MoldenFileBuilder::write(std::ostream& os)
        {
            using boost::format;

            os << "[Molden Format]\n";

            os << "[Atoms] Au\n";

            const std::size_t no_atoms = m_system->atoms.size();

            for (std::size_t a = 0; a < m_system->atoms.size(); ++a) {
                const core::Atom& atom = *m_system->atoms[a];

                os << atom.label << ' ' << a + 1 << ' '
                   << atom.isotope->element->atomic_number << ' '
                   << (format("%e %e %e\n") % atom.coords[0] % atom.coords[1] %
                       atom.coords[2])
                          .str();
            }

            os << "[GTO]\n";

            for (std::size_t a = 0; a < no_atoms; ++a) {
                os << a + 1 << ' ' << 0 << '\n';

                const core::AtomicBasisSet& abs =
                    *m_system->basis_set.atomic_basis_sets()[a];
                const std::size_t no_shells = abs.valence_shells().size();

                for (std::size_t s = 0; s < no_shells; ++s) {
                    const core::Shell& shell = *abs.valence_shells()[s];
                    const std::size_t n = shell.naive_size();
                    const std::size_t no_primitives =
                        shell.primitive_exps().size();

                    for (std::size_t i = 0; i < n; ++i)
                        os << core::l_to_shell_symbol(shell.l()[i]);

                    os << ' ' << no_primitives << " 1.00\n";

                    for (std::size_t j = 0; j < no_primitives; ++j) {
                        os << (format("%14.8f") % shell.primitive_exps()[j]);
                        for (std::size_t i = 0; i < n; ++i)
                            os << (format("% 14.8f") %
                                   shell.contraction_coeffs()(i, j));
                        os << '\n';
                    }
                }
                os << '\n';
            }

            os << "[SCFCONV]\n";

            os << "scf-first 1 THROUGH " << m_scf_energies.size() << '\n';

            for (double e : m_scf_energies)
                os << e << '\n';

            os << "[5D]\n";

            os << "[MO]\n";

            // generate permutation of atomic orbitals obeying molden
            // convension for d, f, g etc functions, e.g.:
            // d0, d+1, d-1, d+2, d-2
            std::vector<unsigned> ao_perm;
            unsigned ao_index = 0;
            for (std::vector<core::AtomicBasisSet*>::const_iterator abs =
                     m_system->basis_set.atomic_basis_sets().begin();
                 abs != m_system->basis_set.atomic_basis_sets().end();
                 ++abs)
                for (std::vector<core::Shell*>::const_iterator shell =
                         (*abs)->valence_shells().begin();
                     shell != (*abs)->valence_shells().end();
                     ++shell)
                    for (std::vector<unsigned>::const_iterator l =
                             (*shell)->l().begin();
                         l != (*shell)->l().end();
                         ++l) {
                        switch (*l) {
                        case 0: // s
                            ao_perm.push_back(ao_index);
                            break;
                        case 1:                              // p
                            ao_perm.push_back(ao_index);     // px
                            ao_perm.push_back(ao_index + 1); // py
                            ao_perm.push_back(ao_index + 2); // pz
                            break;
                        default:                              // d, f, g ...
                            ao_perm.push_back(ao_index + *l); // Y_{l,0}
                            for (unsigned m = 1; m <= *l; ++m) {
                                ao_perm.push_back(ao_index + *l +
                                                  m); // Y_{l,+m}
                                ao_perm.push_back(ao_index + *l -
                                                  m); // Y_{l,-m}
                            }
                        }
                        ao_index += 2 * (*l) + 1;
                    }

            const std::size_t no_mo = m_mo_energies[0].size();

            // Print one or two MO sets depending on the value of
            // `m_has_two_mo_sets'
            for (int s = 0; s < (m_has_two_mo_sets ? 2 : 1); ++s) {
                for (std::size_t i = 0; i < no_mo; ++i) {
                    os << "Sym=A\n";
                    os << "Ene=" << m_mo_energies[s][i] << '\n';
                    os << "Spin=" << (s == 0 ? "Alpha" : "Beta") << '\n';
                    os << (format("Occup=%e\n") % m_mo_occups[core::Spin(s)][i])
                              .str();
                    for (std::size_t j = 0; j < no_mo; ++j)
                        os << (format("%d %e\n") % (j + 1) %
                               m_mo_coeffs[s](ao_perm[j], i))
                                  .str();
                }
            }
        }
    }
}
