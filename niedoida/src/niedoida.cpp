/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include <iostream>
#include <memory>

#include <signal.h>

#ifdef _WIN32
#    include <process.h>
#    include <windows.h>
#endif

#include <boost/algorithm/string.hpp>
#include <boost/exception/all.hpp>
#include <boost/filesystem.hpp>
#include <boost/format.hpp>
#include <boost/mpi.hpp>
#include <boost/program_options.hpp>
#include <boost/stacktrace.hpp>

#include "core_kit/core_kit.hpp"
#include "gto_kit/gto_value_engine.hpp"
#include "gto_kit/os1_efield.hpp"
#include "gto_kit/os1_integral_engine.hpp"
#include "io_kit/io_kit.hpp"
#include "misc_kit/phys_consts.hpp"
#include "misc_kit/threadpool.hpp"
#include "scf_kit/scf_kit.hpp"
#include "semi_empirical_kit/eht.hpp"

#include "niedoida/config.hpp"
#include "niedoida/input_data.hpp"
#include "niedoida/parse_input.hpp"

#ifndef _WIN32
#    include <sys/resource.h>
#    include <sys/time.h>
#endif

struct MPIGuard {
    MPIGuard(int argc, char* argv[]) { PetscInitialize(&argc, &argv, 0, 0); }

    ~MPIGuard() { PetscFinalize(); }
};

void signal_handler(int signum)
{
    ::signal(signum, SIG_DFL);
    std::cerr << "Received signal: " << signum << '\n'
              << "Stack trace:\n"
              << boost::stacktrace::stacktrace() << '\n';
    ::raise(signum);
}

int main(int argc, char* argv[])
{
    MPIGuard mpi_guard(argc, argv);

    ::signal(SIGSEGV, &signal_handler);
    ::signal(SIGABRT, &signal_handler);

    namespace fs = boost::filesystem;
    namespace po = boost::program_options;
    namespace mpi = boost::mpi;

    using namespace niedoida;

    std::unique_ptr<std::ostream> log_file;

    mpi::environment env;
    mpi::communicator world;

    try {
        po::options_description od("Allowed options");

        od.add_options()(
            "no-cores,n", po::value<unsigned>(), "number of cores")(
            "input-file", po::value<std::string>(), "input file");

        po::positional_options_description pod;

        pod.add("input-file", -1);

        po::variables_map vm;
        po::store(po::command_line_parser(argc, argv)
                      .options(od)
                      .positional(pod)
                      .run(),
                  vm);
        po::notify(vm);

        std::unique_ptr<std::istream> inp_file;

        if (vm.count("input-file")) {
            fs::path inp_path(vm["input-file"].as<std::string>());
            fs::path log_path(fs::change_extension(inp_path, ".log"));

            inp_file.reset(new fs::ifstream(inp_path));
            log_file.reset(world.rank() == 0
                               ? new fs::ofstream(log_path)
                               : new std::ostream(new io::NullBuffer));
        }

        io::Log::reset(world.rank() == 0
                           ? std::unique_ptr<io::Logger>(new io::SimpleLogger(
                                 log_file ? *log_file : std::cout, "niedoida"))
                           : std::unique_ptr<io::Logger>(new io::NullLogger()));

        io::Log::instance().write(
            io::Logger::TERSE, "version", NIEDOIDA_VERSION);

        std::string job_name;

        if (vm.count("input-file")) {
            job_name = boost::algorithm::erase_last_copy(
                vm["input-file"].as<std::string>(), ".inp");
        } else {
            std::ostringstream os;
#ifdef _WIN32
            os << (boost::format("niedoida-%07.7d") % _getpid());
#else
            os << (boost::format("niedoida-%07.7d") % getpid());
#endif
            job_name = os.str();
        }

        fs::path work_dir =
            (vm.count("input-file"))
                ? fs::system_complete(
                      fs::path(vm["input-file"].as<std::string>())
                          .branch_path())
                : fs::initial_path();

        Config config(work_dir, job_name);

        InputData input_data = parse_input(inp_file ? *inp_file : std::cin);

        io::Log::instance().set_verbosity(
            input_data.extra_output.output_verbosity);

        if (!check_input(input_data, config))
            throw std::runtime_error("wrong input");

        if (vm.count("no-cores"))
            misc::GlobalThreadPool::no_threads(vm["no-cores"].as<unsigned>());

        print_job_info(config, input_data);

        {
            io::Log::Section section("parallelization info");
            io::Log::instance().write(
                io::Logger::NORMAL, "number of processes", world.size());

            std::size_t no_threads;
            mpi::reduce(world,
                        misc::GlobalThreadPool::no_threads(),
                        no_threads,
                        std::plus<std::size_t>(),
                        0);
            io::Log::instance().write(
                io::Logger::NORMAL, "total number of threads", no_threads);
        }

#ifndef _WIN32
        {
            rlimit cpu_time_limit;
            getrlimit(RLIMIT_CPU, &cpu_time_limit);
            cpu_time_limit.rlim_cur = input_data.limits.cpu_time;
            setrlimit(RLIMIT_CPU, &cpu_time_limit);
        }
#else
        SetPriorityClass(GetCurrentProcess(), PROCESS_MODE_BACKGROUND_BEGIN);
#endif

        std::shared_ptr<core::System> system =
            create_system(config, input_data);

        {
            io::Log::Section s("basis set");
            print_basis_set(io::Log::instance(), system->basis_set);
        }

        if (system->aux_basis_set) {
            io::Log::Section s("auxiliary basis set");
            print_basis_set(io::Log::instance(), *system->aux_basis_set);
        }

        if (system->posthf_aux_basis_set) {
            io::Log::Section s("post-HF auxiliary basis set");
            print_basis_set(io::Log::instance(), *system->posthf_aux_basis_set);
        }

        if (system->poisson_basis_set) {
            io::Log::Section s("Poisson basis set");
            print_basis_set(io::Log::instance(), *system->poisson_basis_set);
        }

        {
            arma::mat coords(system->atoms.size(), 3);

            for (std::size_t i = 0; i < system->atoms.size(); ++i)
                for (std::size_t j = 0; j < 3; ++j)
                    coords(i, j) = system->atoms[i]->coords[j];

            io::Logger::MatrixFormatInfo fi = io::Logger::DEFAULT_MATRIX_FORMAT;

            fi.column_labels = std::vector<std::string>();
            fi.column_labels->push_back("x");
            fi.column_labels->push_back("y");
            fi.column_labels->push_back("z");

            fi.row_labels = std::vector<std::string>();
            for (std::size_t i = 0; i < system->atoms.size(); ++i)
                fi.row_labels->push_back(system->atoms[i]->label);

            io::Log::instance().write(
                io::Logger::TERSE, "coordinates", coords, fi);
        }

        {
            arma::mat ext_chrgs_coords_and_charge_value(
                system->ext_chrgs.size(), 4);

            for (std::size_t i = 0; i < system->ext_chrgs.size(); ++i) {
                for (std::size_t j = 0; j < 3; ++j)
                    ext_chrgs_coords_and_charge_value(i, j) =
                        system->ext_chrgs[i]->coords[j];
                ext_chrgs_coords_and_charge_value(i, 3) =
                    system->ext_chrgs[i]->charge_value;
            }
            io::Logger::MatrixFormatInfo fi = io::Logger::DEFAULT_MATRIX_FORMAT;

            fi.column_labels = std::vector<std::string>();
            fi.column_labels->push_back("x");
            fi.column_labels->push_back("y");
            fi.column_labels->push_back("z");
            fi.column_labels->push_back("q");

            io::Log::instance().write(
                io::Logger::TERSE,
                "external_charges_coords_and_charge_value",
                ext_chrgs_coords_and_charge_value,
                fi);
        }

        {
            const arma::mat& R = system->symmetry_info->rotation_to_std_frame();
            const arma::vec& t =
                system->symmetry_info->translation_to_std_frame();
            io::Log::instance().write(
                io::Logger::TERSE, "rotation_to_std_frame", R);
            io::Log::instance().write(
                io::Logger::TERSE, "translation_to_std_frame", t);
        }

        std::shared_ptr<const core::OneElectronIntegralEngineFactory>
            one_e_ie_factory = create_one_e_ie_factory(config, input_data);

        std::shared_ptr<core::TotalEFieldPotentialFactory> ef_potential_factory(
            new core::TotalEFieldPotentialFactory);
        std::shared_ptr<core::TotalEFieldEnergyFactory> ef_energy_factory(
            new core::TotalEFieldEnergyFactory);

        ef_potential_factory->contributions.push_back(
            std::shared_ptr<core::EFieldPotentialFactory>(
                new gto::OS1NucPotentialFactory));
        ef_potential_factory->contributions.push_back(
            std::shared_ptr<core::EFieldPotentialFactory>(
                new gto::OS1ExtChrgsPotentialFactory));
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
        ef_energy_factory->contributions.push_back(
            std::shared_ptr<core::EFieldEnergyFactory>(
                new core::ExternalCharges2EnergyFactory));
        ef_energy_factory->contributions.push_back(
            std::shared_ptr<core::EFieldEnergyFactory>(
                new core::NucExternalChargesEnergyFactory));
        ef_energy_factory->contributions.push_back(
            std::shared_ptr<core::EFieldEnergyFactory>(
                new core::ExternalChargesUEFEnergyFactory));

        {
            io::Log::Section section("1-electron integrals");
            std::unique_ptr<core::OneElectronIntegralEngine> one_e_ie =
                one_e_ie_factory->make(system);
            std::unique_ptr<core::EFieldPotential> ef_potential =
                ef_potential_factory->make(system);
            std::unique_ptr<core::EFieldEnergy> ef_energy =
                ef_energy_factory->make(system);
            system->external_potential_matrix.reset(
                new arma::mat(ef_potential->potential_matrix()));
            system->efield_energy.reset(new double(ef_energy->energy()));
            system->basis_set.overlap_matrix.reset(
                new arma::mat(one_e_ie->overlap_matrix()));
            system->basis_set.kinetic_matrix.reset(
                new arma::mat(one_e_ie->kinetic_matrix()));
            system->basis_set.the_basis.reset(
                new arma::mat(orthonormalize_basis(
                    one_e_ie->overlap_matrix(),
                    input_data.scf_params.threshold_linear_independence)));
        }

        if (input_data.extra_output.dump_1e_matrices) {
            system->basis_set.overlap_matrix->save(
                config.job_name() + ".overlap_matrix", arma::arma_ascii);
            system->basis_set.kinetic_matrix->save(
                config.job_name() + ".kinetic_matrix", arma::arma_ascii);
            system->external_potential_matrix->save(
                config.job_name() + ".external_potential_matrix",
                arma::arma_ascii);
        }

        if (input_data.extra_output.dump_external_charges_potential) {
            std::shared_ptr<core::TotalEFieldPotentialFactory>
                external_ef_potential_factory(
                    new core::TotalEFieldPotentialFactory);
            external_ef_potential_factory->contributions.push_back(
                std::shared_ptr<core::EFieldPotentialFactory>(
                    new gto::OS1ExtChrgsPotentialFactory));
            std::unique_ptr<core::EFieldPotential> external_ef_potential =
                external_ef_potential_factory->make(system);
            arma::mat external_ef_potential_matrix =
                external_ef_potential->potential_matrix();
            external_ef_potential_matrix.save(
                config.job_name() +
                    ".external_charges_external_potential_matrix",
                arma::arma_ascii);
        }

        if (input_data.extra_output.dump_uef_potential) {
            std::shared_ptr<core::TotalEFieldPotentialFactory>
                external_ef_potential_factory(
                    new core::TotalEFieldPotentialFactory);
            external_ef_potential_factory->contributions.push_back(
                std::shared_ptr<core::EFieldPotentialFactory>(
                    new gto::OS1UEFPotentialFactory));
            std::unique_ptr<core::EFieldPotential> external_ef_potential =
                external_ef_potential_factory->make(system);
            arma::mat external_ef_potential_matrix =
                external_ef_potential->potential_matrix();
            external_ef_potential_matrix.save(
                config.job_name() + ".uef_external_potential_matrix",
                arma::arma_ascii);
        }

        if (input_data.extra_output.dump_multipole_matrices) {
            const gto::OS1MultipoleIntegralEngine mie(*system);
            const auto r = mie.dipole_matrices();
            const auto rr = mie.quadrupole_matrices();
            r[0].save(config.job_name() + ".x", arma::arma_ascii);
            r[1].save(config.job_name() + ".y", arma::arma_ascii);
            r[2].save(config.job_name() + ".z", arma::arma_ascii);
            rr(0, 0).save(config.job_name() + ".xx", arma::arma_ascii);
            rr(0, 1).save(config.job_name() + ".xy", arma::arma_ascii);
            rr(0, 2).save(config.job_name() + ".xz", arma::arma_ascii);
            rr(1, 1).save(config.job_name() + ".yy", arma::arma_ascii);
            rr(1, 2).save(config.job_name() + ".yz", arma::arma_ascii);
            rr(2, 2).save(config.job_name() + ".zz", arma::arma_ascii);
        }

        if (input_data.theory == InputData::THEORY_EH) {
            io::Log::Section eht_section("eht");

            arma::vec eps;
            arma::mat C;

            arma::eig_sym(eps, C, semi_empirical::eht_hamiltonian(system));

            io::Log::instance().write(io::Logger::TERSE, "mo_energies", eps);
            io::Log::instance().write(io::Logger::TERSE, "mo_coefficients", C);

            compat::MoldenFileBuilder molden_file_builder(system);

            molden_file_builder.add_scf_step(0, eps, eps, C, C);
            if (input_data.extra_output.molden && world.rank() == 0) {
                std::ofstream molden_file(
                    (config.job_name() + ".molden").c_str());
                molden_file_builder.write(molden_file);
            }
        }

        if (input_data.theory < InputData::THEORY_EH) {

            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                two_e_ie_factory = create_two_e_ie_factory(config, input_data);

            system->basis_set.schwartz_estimator.reset(
                new core::SchwartzEstimator(*system,
                                            *two_e_ie_factory->make(system)));
            std::shared_ptr<const core::QuasiTwoElectronIntegralEngineFactory>
                quasi_two_e_ie_factory =
                    create_quasi_two_e_ie_factory(config, input_data);

            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory(new gto::GTOValueEngineFactory);

            std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory>
                xc_ie_factory;

            std::shared_ptr<const DFTMethod> dft_method =
                create_dft_method(input_data);
            std::shared_ptr<const grid::GridFactory> grid_factory;

            if (dft_method->xc_functional.which() != 0) {
                grid_factory = create_grid_factory(input_data,
                                                   dft_method->xc_functional,
                                                   ao_value_engine_factory);

                xc_ie_factory = create_xc_ie_factory(input_data,
                                                     dft_method->xc_functional,
                                                     grid_factory,
                                                     ao_value_engine_factory);
            }

            std::shared_ptr<const core::FockMatrixGeneratorFactory>
                fm_gen_factory =
                    create_fm_gen_factory(config,
                                          input_data,
                                          two_e_ie_factory,
                                          xc_ie_factory,
                                          quasi_two_e_ie_factory,
                                          dft_method->fock_exchange_contrib);

            {
                io::Log::Section s("promolecule");

                system->promolecule = std::shared_ptr<const core::Promolecule>(
                    new core::Promolecule(system,
                                          one_e_ie_factory,
                                          two_e_ie_factory,
                                          ef_potential_factory,
                                          ef_energy_factory,
                                          fm_gen_factory));
            }

            std::shared_ptr<const core::InitialGuessFactory>
                initial_guess_factory =
                    create_initial_guess_factory(config, input_data);

            std::shared_ptr<const core::OccupationsFactory>
                occupations_factory = create_occupations_factory(
                    config, input_data, initial_guess_factory);

            std::shared_ptr<const scf::ConvergenceAcceleratorFactory>
                ca_factory =
                    create_convergence_accelerator_factory(config, input_data);

            std::shared_ptr<const scf::SCFFactory> scf_factory =
                create_scf_factory(config,
                                   input_data,
                                   occupations_factory,
                                   fm_gen_factory,
                                   ca_factory);

            if (input_data.run_type == InputData::RUN_TYPE_SINGLE_POINT) {
                single_point(input_data,
                             config,
                             world,
                             system,
                             one_e_ie_factory,
                             two_e_ie_factory,
                             ao_value_engine_factory,
                             grid_factory,
                             dft_method,
                             fm_gen_factory,
                             initial_guess_factory,
                             scf_factory);
            } else if (input_data.run_type ==
                       InputData::RUN_TYPE_GEOMETRY_OPTIMIZATION) {
                geometry_optimization(input_data,
                                      config,
                                      world,
                                      system,
                                      initial_guess_factory,
                                      scf_factory,
                                      two_e_ie_factory,
                                      one_e_ie_factory,
                                      fm_gen_factory,
                                      ao_value_engine_factory,
                                      grid_factory,
                                      dft_method);
            }
        }

#ifdef _WIN32
        SetPriorityClass(GetCurrentProcess(), PROCESS_MODE_BACKGROUND_END);
#endif

        io::Log::instance().write(io::Logger::TERSE, "termination", "normal");

        io::Log::reset(nullptr);
    } catch (const boost::exception& e) {
        io::Log::instance().write(io::Logger::TERSE, "termination", "abnormal");
        io::Log::instance().write(
            io::Logger::TERSE, "reason", boost::diagnostic_information(e));
        io::Log::reset(nullptr);
        return 1;
    } catch (const std::exception& e) {
        io::Log::instance().write(io::Logger::TERSE, "termination", "abnormal");
        io::Log::instance().write(io::Logger::TERSE, "reason", e.what());
        io::Log::reset(nullptr);
        return 1;
    } catch (...) {
        io::Log::instance().write(io::Logger::TERSE, "termination", "abnormal");
        io::Log::instance().write(io::Logger::TERSE, "reason", "unknown");
        io::Log::reset(nullptr);
        throw;
    }
}
