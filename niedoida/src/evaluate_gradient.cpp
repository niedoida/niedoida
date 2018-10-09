/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_efield.hpp"
#include "io_kit/log.hpp"
#include "niedoida/niedoida.hpp"
#include "scf_kit/scf_utils.hpp"
#include "td_kit/cis.hpp"
#include "td_kit/cis_gradient.hpp"
#include "td_kit/tdks_tda.hpp"

namespace niedoida {

    int
    evaluate_gradient(Tao, Vec coords, double* energy, Vec gradient, void* vctx)
    {
        io::Log::Section section("energy gradient");

        GeometryOptimizationContext* ctx =
            static_cast<GeometryOptimizationContext*>(vctx);

        // copy system
        std::shared_ptr<const core::System> old_system = ctx->system;
        std::shared_ptr<core::System> new_system = deep_copy(*old_system);

        const std::size_t no_atoms = old_system->atoms.size();

        // change coords
        update_coords(*new_system, coords);
        const symmetry::FiniteSymmetryGroup& fsg =
            new_system->symmetry_info->finite_symmetry_group();
        const std::vector<std::vector<unsigned>>& fsg_perm_rep =
            new_system->symmetry_info->perm_rep();
        const std::vector<arma::mat>& fsg_cart_rep = fsg.elements();

        // update
        std::shared_ptr<core::TotalEFieldPotentialFactory> ef_potential_factory(
            new core::TotalEFieldPotentialFactory);
        std::shared_ptr<core::TotalEFieldEnergyFactory> ef_energy_factory(
            new core::TotalEFieldEnergyFactory);

        ef_potential_factory->contributions.push_back(
            std::shared_ptr<core::EFieldPotentialFactory>(
                new gto::OS1NucPotentialFactory));
        ef_potential_factory->contributions.push_back(
            std::shared_ptr<core::EFieldPotentialFactory>(
                new gto::OS1UEFPotentialFactory));

        ef_energy_factory->contributions.push_back(
            std::shared_ptr<core::EFieldEnergyFactory>(
                new core::Nuc2EnergyFactory));
        ef_energy_factory->contributions.push_back(
            std::shared_ptr<core::EFieldEnergyFactory>(
                new core::UEF2EnergyFactory));
        ef_energy_factory->contributions.push_back(
            std::shared_ptr<core::EFieldEnergyFactory>(
                new core::NucUEFEnergyFactory));

        std::unique_ptr<core::OneElectronIntegralEngine> one_e_ie =
            ctx->one_e_ie_factory->make(new_system);

        std::unique_ptr<core::EFieldPotential> ef_potential =
            ef_potential_factory->make(new_system);
        std::unique_ptr<core::EFieldEnergy> ef_energy =
            ef_energy_factory->make(new_system);

        new_system->external_potential_matrix.reset(
            new arma::mat(ef_potential->potential_matrix()));
        new_system->efield_energy.reset(new double(ef_energy->energy()));
        new_system->basis_set.overlap_matrix.reset(
            new arma::mat(one_e_ie->overlap_matrix()));
        new_system->basis_set.kinetic_matrix.reset(
            new arma::mat(one_e_ie->kinetic_matrix()));

        const double threshold = 0;

        arma::mat fS(one_e_ie->overlap_matrix());

        const std::size_t n = fS.n_rows;
        arma::vec lambda(n);
        arma::mat beta;
        arma::eig_sym(lambda, beta, fS);
        fS = beta;

        std::size_t granica = 0;
        while (lambda(granica) < threshold && granica < n - 1)
            granica++;

        fS = fS.cols(granica, n - 1);

        for (std::size_t i = 0; i < n - granica; i++)
            fS.col(i) /= std::sqrt(lambda(i + granica));

        new_system->basis_set.the_basis.reset(new arma::mat(fS));

        new_system->basis_set.schwartz_estimator.reset(
            new core::SchwartzEstimator(
                *new_system, *ctx->two_e_ie_factory->make(new_system)));

        // eval energy

        double new_Ee = 0;
        double new_Enn = 0;

        std::unique_ptr<scf::SCF> scf0 = ctx->scf_factory->make(new_system);
        scf0->set_initial_density_matrix(ctx->P[core::SPIN_ALPHA],
                                         ctx->P[core::SPIN_BETA]);

        // print_coords(*new_system);

        double Ee = 0;
        arma::mat P_alpha = scf0->density_matrix(core::SPIN_ALPHA);
        arma::mat P_beta = scf0->density_matrix(core::SPIN_BETA);

        for (unsigned i = 0;
             !scf0->is_converged() && i < ctx->max_no_scf_iterations;
             ++i) {

            scf0->next_iteration();
            const double dE = scf0->electronic_energy() - Ee;
            Ee = scf0->electronic_energy();

            const arma::mat dP_alpha =
                P_alpha - scf0->density_matrix(core::SPIN_ALPHA);
            const arma::mat dP_beta =
                P_beta - scf0->density_matrix(core::SPIN_BETA);

            P_alpha = scf0->density_matrix(core::SPIN_ALPHA);
            P_beta = scf0->density_matrix(core::SPIN_BETA);

            const double norm_1_P =
                std::max(arma::norm(dP_alpha, 1), arma::norm(dP_beta, 1));
            const double norm_f_P = std::max(arma::norm(dP_alpha, "fro"),
                                             arma::norm(dP_beta, "fro"));

            io::Log::instance().write(niedoida::io::Logger::NORMAL, "E", Ee);
            io::Log::instance().write(niedoida::io::Logger::NORMAL, "dE", dE);
            io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "dP1", norm_1_P);
            io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "dP2", norm_f_P);
        }

        const double Enn = scf::nuclear_repulsion(new_system->atoms);

        if (scf0->is_converged()) {
            new_Ee = Ee;
            new_Enn = Enn;

        } else {
            io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                      "scf_convergence",
                                      std::string("scf not converged"));
            abort();
        }

        ctx->P[core::SPIN_ALPHA] = scf0->density_matrix(core::SPIN_ALPHA);
        ctx->P[core::SPIN_BETA] = scf0->density_matrix(core::SPIN_BETA);

        *energy = new_Ee + new_Enn;

        arma::mat full_coeffs;
        if (ctx->gType == TimeDependent) {
            const unsigned no_frozen = ctx->gData->no_frozen;
            const unsigned no_deleted = ctx->gData->no_deleted;

            const unsigned no_occ = new_system->no_electrons(core::SPIN_ALPHA);
            const unsigned no_virt = new_system->basis_set.real_size() - no_occ;

            const unsigned eff_no_occ = no_occ - no_frozen;
            const unsigned eff_no_virt = no_virt - no_deleted;

            const unsigned no_roots =
                std::min(ctx->gData->no_roots, eff_no_occ * eff_no_virt);
            const unsigned no_states =
                std::min(ctx->gData->no_states, no_roots);

            std::unique_ptr<td::RestrictedTD> rtd;

            if (ctx->gData->multiplicity & (1 << 0)) {

                rtd.reset(
                    new td::TDKS_TDA(td::RestrictedTD::SINGLET,
                                     new_system,
                                     scf0->mo_coefficients(core::SPIN_ALPHA),
                                     scf0->mo_energies(core::SPIN_ALPHA),
                                     ctx->two_e_ie_factory,
                                     no_frozen,
                                     no_deleted,
                                     no_states,
                                     no_roots,
                                     ctx->gData->no_iterations,
                                     ctx->gData->diagonalization_threshold,
                                     ctx->gData->integral_threshold,
                                     ctx->xcmkfg_factory->make(new_system),
                                     ctx->fock_exchange_contrib));

            } else {
                rtd.reset(new td::RCIS(td::RestrictedTD::TRIPLET,
                                       new_system,
                                       scf0->mo_coefficients(core::SPIN_ALPHA),
                                       scf0->mo_energies(core::SPIN_ALPHA),
                                       ctx->two_e_ie_factory,
                                       no_frozen,
                                       no_deleted,
                                       no_states,
                                       no_roots,
                                       ctx->gData->no_iterations,
                                       ctx->gData->diagonalization_threshold,
                                       ctx->gData->integral_threshold));
            }

            full_coeffs = rtd->coefficients(true);
            arma::vec full_energies = rtd->energies(true);

            std::vector<arma::mat> full_coeffs_v = td::transform_ci_coeffs(
                full_coeffs, no_occ, no_virt, no_frozen, no_deleted);
            if (ctx->gData->last_coeffs.n_rows == 0) {
                ctx->gData->last_coeffs =
                    full_coeffs_v[ctx->gData->state_of_interest];
            } else {
                double max_prod = 0;
                int actual_state_ind = -1;
                for (std::size_t state_it = 0; state_it < full_coeffs_v.size();
                     state_it++) {
                    double prod = fabs(arma::accu(full_coeffs_v[state_it] %
                                                  (ctx->gData->last_coeffs)));
                    if (prod > max_prod) {
                        max_prod = prod;
                        actual_state_ind = state_it;
                    }
                }
                if (actual_state_ind == -1)
                    std::cout << "NOT FOUND A STATE TO OPTIMIZE"
                              << std::endl;
                ctx->gData->last_coeffs = full_coeffs_v[actual_state_ind];
                ctx->gData->state_of_interest = actual_state_ind;
            }

            // end of CIS energy
            *energy += full_energies[ctx->gData->state_of_interest];
        }

        std::vector<bool> done(no_atoms, false);

        std::vector<unsigned> unique_atoms;

        for (std::size_t a = 0; a < no_atoms; ++a) {
            if (done[a])
                continue;

            unique_atoms.push_back(a);

            done[a] = true;

            for (std::size_t e = 0; e < fsg_cart_rep.size(); ++e)
                done[fsg_perm_rep[e][a]] = true;
        }

        const std::size_t no_unique_atoms = unique_atoms.size();
        arma::mat unique_atoms_gradient;
        if (ctx->gType == TimeDependent) {
            const unsigned no_frozen = ctx->gData->no_frozen;
            const unsigned no_deleted = ctx->gData->no_deleted;

            const unsigned no_occ = new_system->no_electrons(core::SPIN_ALPHA);
            const unsigned no_virt = new_system->basis_set.real_size() - no_occ;

            const unsigned eff_no_occ = no_occ - no_frozen;
            const unsigned eff_no_virt = no_virt - no_deleted;

            const unsigned no_roots =
                std::min(ctx->gData->no_roots, eff_no_occ * eff_no_virt);
            const unsigned no_states =
                std::min(ctx->gData->no_states, no_roots);

            bool is_singlet = false;
            if (ctx->gData->multiplicity & (1 << 0)) {
                is_singlet = true;
            }

            unique_atoms_gradient =
                td::energy_gradient_cis(new_system,
                                        scf0->mo_coefficients(core::SPIN_ALPHA),
                                        scf0->mo_energies(core::SPIN_ALPHA),
                                        full_coeffs,
                                        ctx->two_e_ie_factory,
                                        ctx->fmg_factory,
                                        no_frozen,
                                        no_deleted,
                                        no_states,
                                        no_roots,
                                        unique_atoms,
                                        ctx->gData->state_of_interest,
                                        is_singlet);

        } else {

            std::unique_ptr<core::FockMatrixGenerator> FMG =
                ctx->fmg_factory->make(new_system);
            unique_atoms_gradient =
                FMG->energy_gradient(new_system,
                                     scf0->mo_coefficients(core::SPIN_ALPHA),
                                     scf0->mo_energies(core::SPIN_ALPHA),
                                     unique_atoms);
        }

        arma::mat all_atoms_gradient(no_atoms, 3);

        done = std::vector<bool>(no_atoms, false);

        for (std::size_t i = 0; i < no_unique_atoms; ++i) {
            const std::size_t a = unique_atoms[i];

            const arma::rowvec de = unique_atoms_gradient.row(i);

            all_atoms_gradient.row(a) = de;

            done[a] = true;

            for (std::size_t e = 0; e < fsg_cart_rep.size(); ++e) {

                const std::vector<unsigned>& pr = fsg_perm_rep[e];
                const arma::mat& cr = fsg_cart_rep[e];

                const unsigned b = pr[a];

                if (done[b])
                    continue;

                arma::mat CR(3, 3);

                for (int i = 0; i < 3; ++i)
                    for (int j = 0; j < 3; ++j)
                        CR(i, j) = cr(i, j);

                all_atoms_gradient.row(b) = trans(CR * trans(de));

                done[b] = true;
            }
        }

        // transform gradient to input coordinates
        arma::mat A(3, 3);

        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                A(i, j) =
                    new_system->symmetry_info->rotation_to_std_frame()(i, j);

        A = inv(A);

        all_atoms_gradient = arma::trans(A * arma::trans(all_atoms_gradient));

        for (std::size_t a = 0; a < no_atoms; ++a)
            for (int k = 0; k < 3; ++k)
                VecSetValue(gradient,
                            3 * a + k,
                            all_atoms_gradient(a, k) / COORDS_SCALE,
                            INSERT_VALUES);

        VecAssemblyBegin(gradient);
        VecAssemblyEnd(gradient);

        return 0;
    }
}
