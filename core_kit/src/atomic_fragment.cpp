/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/atomic_fragment.hpp"

#include "scf_kit/scf_kit.hpp"
#include "symmetry_kit/symmetry_kit.hpp"

namespace niedoida {

    namespace core {

        // class AtomicFragment implementation

        AtomicFragment::AtomicFragment(
            const std::shared_ptr<const System> system,
            const std::size_t atom_idx,
            const std::shared_ptr<const OneElectronIntegralEngineFactory>
                one_e_ie_factory,
            const std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            const std::shared_ptr<const TotalEFieldPotentialFactory>
                ef_potential_factory,
            const std::shared_ptr<const TotalEFieldEnergyFactory>
                ef_energy_factory,
            const std::shared_ptr<const FockMatrixGeneratorFactory>
                fmg_factory) :
            Fragment(system->atoms[atom_idx]->label)
        {
            // create new system
            std::shared_ptr<System> atomic_system =
                std::shared_ptr<System>(new System);

            const Isotope& isotope = *system->atoms[atom_idx]->isotope;
            const double coords[] = {0, 0, 0};

            // with just one atom
            atomic_system->atoms.push_back(new Atom(isotope, coords, ""));

            const AtomicBasisSet& orig_abs =
                *system->basis_set.atomic_basis_sets()[atom_idx];

            AtomicBasisSet& abs = atomic_system->basis_set.add_atomic_basis_set(
                *atomic_system->atoms[0]);
            for (std::size_t s = 0; s < orig_abs.valence_shells().size(); ++s) {
                const Shell& orig_shell = *orig_abs.valence_shells()[s];
                Shell& shell = abs.add_valence_shell();
                shell.fill(orig_shell.l(),
                           orig_shell.primitive_exps(),
                           orig_shell.contraction_coeffs());
            }

            if (system->aux_basis_set) {
                atomic_system->aux_basis_set.reset(new BasisSet);
                const AtomicBasisSet& orig_abs =
                    *system->aux_basis_set->atomic_basis_sets()[atom_idx];

                AtomicBasisSet& abs =
                    atomic_system->aux_basis_set->add_atomic_basis_set(
                        *atomic_system->atoms[0]);
                for (std::size_t s = 0; s < orig_abs.valence_shells().size();
                     ++s) {
                    const Shell& orig_shell = *orig_abs.valence_shells()[s];
                    Shell& shell = abs.add_valence_shell();
                    shell.fill(orig_shell.l(),
                               orig_shell.primitive_exps(),
                               orig_shell.contraction_coeffs());
                }
            }

            atomic_system->charge = 0;

            // determine number of core (closed-shell) and degenerated
            // states, and number of electrons in degenerated states
            // currently only elements having less than 20 shells
            // are supported
            static const unsigned max_shells = 19;
            static const unsigned no_states[max_shells] = {
                1, 1, 3, 1, 3, 1, 5, 3, 1, 5, 3, 1, 7, 5, 3, 1, 7, 5, 3};
            unsigned n = atomic_system->no_electrons();
            for (unsigned i = 0; i < max_shells; ++i) {
                if (n > no_states[i] + no_states[i])
                    n -= no_states[i] + no_states[i];
                else {
                    m_no_deg_electrons = n;
                    m_no_deg_states = no_states[i];
                    m_no_core_states = (atomic_system->no_electrons() - n) / 2;
                    break;
                }
            }

            atomic_system->multiplicity = (m_no_deg_electrons < m_no_deg_states)
                                              ? m_no_deg_electrons + 1
                                              : m_no_deg_states +
                                                    m_no_deg_states -
                                                    m_no_deg_electrons + 1;

            arma::mat atomic_coords(3, 1, arma::fill::zeros);
            std::vector<unsigned> q(1, 1);
            atomic_system->symmetry_info.reset(
                new niedoida::symmetry::SymmetryInfo(atomic_coords, q, 1e-8));

            // use average occupations for atomic fragments
            std::unique_ptr<Occupations> occupations(
                new AverageOccupations(abs.real_size(),
                                       atomic_system->no_electrons(),
                                       m_no_deg_states,
                                       m_no_deg_electrons));

            // calculate system/basis set specific matrices
            std::unique_ptr<OneElectronIntegralEngine> one_e_ie =
                one_e_ie_factory->make(atomic_system);
            std::unique_ptr<EFieldPotential> ef_potential =
                ef_potential_factory->make(atomic_system);
            std::unique_ptr<EFieldEnergy> ef_energy =
                ef_energy_factory->make(atomic_system);

            atomic_system->external_potential_matrix.reset(
                new arma::mat(ef_potential->potential_matrix()));
            atomic_system->efield_energy.reset(new double(ef_energy->energy()));
            atomic_system->basis_set.overlap_matrix.reset(
                new arma::mat(one_e_ie->overlap_matrix()));
            atomic_system->basis_set.kinetic_matrix.reset(
                new arma::mat(one_e_ie->kinetic_matrix()));

            atomic_system->basis_set.schwartz_estimator.reset(
                new SchwartzEstimator(*atomic_system,
                                      *two_e_ie_factory->make(atomic_system)));

            arma::mat fS(one_e_ie->overlap_matrix());

            const std::size_t nn = fS.n_rows;
            arma::vec lambda(nn);
            arma::mat beta;
            arma::eig_sym(lambda, beta, fS);
            fS = beta;

            for (std::size_t i = 0; i < nn; i++)
                fS.col(i) /= sqrt(lambda(i));

            atomic_system->basis_set.the_basis.reset(new arma::mat(fS));

            // create fock matrix generator and convergence accelerator
            std::unique_ptr<FockMatrixGenerator> fock_matrix_generator =
                fmg_factory->make(atomic_system);

            std::unique_ptr<const niedoida::scf::DiagonalizeFockMatrix>
                diagonalize_fock_matrix(
                    new niedoida::scf::StdDiagonalizeFockMatrix(
                        *atomic_system->basis_set.overlap_matrix));

            std::unique_ptr<niedoida::scf::ConvergenceAccelerator>
                convergence_accelerator(new niedoida::scf::DIIS(0.5));

            // setup SCF
            niedoida::scf::ROHF scf(atomic_system,
                                    std::move(occupations),
                                    std::move(fock_matrix_generator),
                                    std::move(diagonalize_fock_matrix),
                                    std::move(convergence_accelerator),
                                    false,
                                    1e-8,
                                    1e-6);

            // run it
            do
                scf.next_iteration();
            while (!scf.is_converged());

            // remember fragment orbitals and average density matrix
            C = scf.mo_coefficients(SPIN_ALPHA);
            P_avr[SPIN_ALPHA] = scf.density_matrix(SPIN_ALPHA);
            P_avr[SPIN_BETA] = scf.density_matrix(SPIN_BETA);
        }
    }
}
