/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include <stdexcept>

#include "core_kit/dispersion.hpp"
#include "core_kit/schwartz_estimator.hpp"
#include "gto_kit/os1_efield.hpp"
#include "io_kit/log.hpp"
#include "misc_kit/phys_consts.hpp"
#include "misc_kit/tao_utils.hpp"

namespace niedoida {

    void geometry_optimization(
        const InputData& input_data,
        const Config& config,
        boost::mpi::communicator& comm,
        std::shared_ptr<const core::System> system,
        std::shared_ptr<const core::InitialGuessFactory> initial_guess_factory,
        std::shared_ptr<const scf::SCFFactory> scf_factory,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
            two_e_ie_factory,
        std::shared_ptr<const core::OneElectronIntegralEngineFactory>
            one_e_ie_factory,
        std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory,
        std::shared_ptr<const core::AOValueEngineFactory>
            ao_value_engine_factory,
        std::shared_ptr<const grid::GridFactory> grid_factory,
        std::shared_ptr<const DFTMethod> dft_method)
    {
        io::Log::Section geometry_optimization_section("Geometry optimization");

        unsigned max_l = 0;
        for (const core::AtomicBasisSet* const abs :
             system->basis_set.atomic_basis_sets())
            for (const core::Shell* const s : abs->valence_shells())
                max_l = std::max(max_l, s->l_max());

        if (max_l > 2)
            throw std::runtime_error(
                "geometry optimization for systems with orbitals f or higher "
                "not yet implemented");

        Vec coords;

        VecCreateSeq(PETSC_COMM_SELF, 3 * system->atoms.size(), &coords);

        for (std::size_t a = 0; a < system->atoms.size(); ++a) {
            for (int k = 0; k < 3; ++k) {
                int i = 3 * a + k;
                double t = COORDS_SCALE * system->atoms[a]->coords[k];
                VecSetValues(coords, 1, &i, &t, INSERT_VALUES);
            }
        }

        VecAssemblyBegin(coords);
        VecAssemblyEnd(coords);

        Tao tao;

        std::unique_ptr<core::InitialGuess> ig =
            initial_guess_factory->make(system);

        GeometryOptimizationMonitorContext mctx = {system};

        TaoCreate(PETSC_COMM_SELF, &tao);

        TaoSetType(tao, TAOLMVM);

        TaoSetInitialVector(tao, coords);

        GeometryOptimizationContext ctx;

        if (input_data.td_params.type == InputData::TDParams::TD_NONE) {

            GeometryOptimizationData gOptData;

            ctx = {
                NonTimeDependent,
                &gOptData,
                fmg_factory,
                one_e_ie_factory,
                two_e_ie_factory,
                scf_factory,
                nullptr,
                0,
                system,
                {ig->density_matrix(core::SPIN_ALPHA),
                 ig->density_matrix(core::SPIN_BETA)},
                input_data.scf_params.max_no_iterations,
            };

        } else {

            GeometryOptimizationData gOptData = {
                arma::mat(0, 0),
                input_data.td_params.multiplicity,
                input_data.td_params.no_frozen,
                input_data.td_params.no_deleted,
                input_data.td_params.state_of_interest,
                input_data.td_params.no_roots,
                input_data.td_params.no_states,
                input_data.td_params.no_iterations,
                input_data.td_params.diagonalization_threshold,
                input_data.td_params.integral_threshold};

            std::shared_ptr<td::XCMultiKernelGeneratorFactory> xcmkg_factory;

            if (input_data.theory != InputData::THEORY_HF)
                xcmkg_factory.reset(new td::XCMultiKernelGeneratorFactory(
                    grid_factory,
                    ao_value_engine_factory,
                    dft_method->xc_functional,
                    1024));

            ctx = {TimeDependent,
                   &gOptData,
                   fmg_factory,
                   one_e_ie_factory,
                   two_e_ie_factory,
                   scf_factory,
                   xcmkg_factory,
                   dft_method->fock_exchange_contrib,
                   system,
                   {ig->density_matrix(core::SPIN_ALPHA),
                    ig->density_matrix(core::SPIN_BETA)},
                   input_data.scf_params.max_no_iterations};
        }

        TaoSetObjectiveAndGradientRoutine(tao, &evaluate_gradient, &ctx);
        TaoSetMonitor(tao, monitor, &mctx, 0);
        TaoSetTolerances(tao, 0.001 / COORDS_SCALE, 0, 0);
        TaoSetMaximumIterations(tao, 50);

        TaoSolve(tao);

        TaoConvergedReason reason;
        TaoGetConvergedReason(tao, &reason);
        io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                  "status",
                                  misc::tao_solver_status_string(reason));

        Vec ccc;

        TaoGetSolutionVector(tao, &ccc);
        arma::mat final_coords(system->atoms.size(), 3);

        int ix = 0;
        for (std::size_t a = 0; a < system->atoms.size(); ++a) {
            for (int k = 0; k < 3; ++k) {
                VecGetValues(ccc, 1, &ix, &final_coords(a, k));
                ix++;
            }
        }

        final_coords /= COORDS_SCALE;

        if (input_data.units.length_unit ==
            InputData::Units::LENGTH_UNIT_ANGSTROM)
            final_coords *= misc::bohr_to_angstrom;

        std::shared_ptr<core::System> new_system = deep_copy(*system);
        // zmien wspolrzedne
        update_coords(*new_system, ccc);

        {
            arma::mat coords(new_system->atoms.size(), 3);

            for (std::size_t i = 0; i < new_system->atoms.size(); ++i)
                for (std::size_t j = 0; j < 3; ++j)
                    coords(i, j) = new_system->atoms[i]->coords[j];

            io::Logger::MatrixFormatInfo fi = io::Logger::DEFAULT_MATRIX_FORMAT;

            fi.column_labels = std::vector<std::string>();
            fi.column_labels->push_back("x");
            fi.column_labels->push_back("y");
            fi.column_labels->push_back("z");

            fi.row_labels = std::vector<std::string>();
            for (std::size_t i = 0; i < new_system->atoms.size(); ++i)
                fi.row_labels->push_back(new_system->atoms[i]->label);

            io::Log::instance().write(
                io::Logger::TERSE, "optimized coordinates", coords, fi);
        }

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
            one_e_ie_factory->make(new_system);

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
            new core::SchwartzEstimator(*new_system,
                                        *two_e_ie_factory->make(new_system)));

        single_point(input_data,
                     config,
                     comm,
                     new_system,
                     one_e_ie_factory,
                     two_e_ie_factory,
                     ao_value_engine_factory,
                     grid_factory,
                     dft_method,
                     fmg_factory,
                     initial_guess_factory,
                     scf_factory);

        TaoDestroy(&tao);
        VecDestroy(&coords);
    }
}
