/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "core_kit/ao_symmetry.hpp"
#include "core_kit/dispersion.hpp"
#include "core_kit/mo_symmetry.hpp"
#include "io_kit/log.hpp"
#include "misc_kit/phys_consts.hpp"

namespace niedoida {

    void single_point(
        const InputData& input_data,
        const Config& config,
        boost::mpi::communicator& comm,
        std::shared_ptr<const core::System> system,
        std::shared_ptr<const core::OneElectronIntegralEngineFactory>
            one_e_ie_factory,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
            two_e_ie_factory,
        std::shared_ptr<const core::AOValueEngineFactory>
            ao_value_engine_factory,
        std::shared_ptr<const grid::GridFactory> grid_factory,
        std::shared_ptr<const DFTMethod> dft_method,
        std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory,
        std::shared_ptr<const core::InitialGuessFactory> initial_guess_factory,
        std::shared_ptr<const scf::SCFFactory> scf_factory)
    {
        std::unique_ptr<scf::SCF> scf = scf_factory->make(system);

        const symmetry::FiniteSymmetryGroup& fsg =
            system->symmetry_info->finite_symmetry_group();

        const std::vector<std::vector<unsigned>>& cc =
            fsg.conjugacy_classes();
        arma::uvec cc_sizes(cc.size(), arma::fill::zeros);
        for (unsigned i = 0; i < cc_sizes.n_rows; ++i)
            cc_sizes(i) = cc[i].size();

        arma::uvec degeneracy;
        arma::uvec mo_symmetry;

        {
            io::Log::Section scf_section("scf");
            std::unique_ptr<core::InitialGuess> ig =
                initial_guess_factory->make(system);
            scf->set_initial_density_matrix(
                ig->density_matrix(core::SPIN_ALPHA),
                ig->density_matrix(core::SPIN_BETA));

            const double energy_unit = (input_data.units.energy_unit ==
                                        InputData::Units::ENERGY_UNIT_HARTREE)
                                           ? 1
                                           : 1 / misc::ev_to_hartree;

            io::Log::instance().write(io::Logger::TERSE,
                                      "target_dE",
                                      input_data.scf_params.energy_threshold *
                                          energy_unit,
                                      "%e");
            io::Log::instance().write(io::Logger::TERSE,
                                      "target_dPRMS",
                                      input_data.scf_params.density_threshold /
                                          100,
                                      "%e");
            io::Log::instance().write(io::Logger::TERSE,
                                      "target_dPMax",
                                      input_data.scf_params.density_threshold,
                                      "%e");

            compat::MoldenFileBuilder molden_file_builder(system);

            do_scf(*scf,
                   energy_unit,
                   input_data.scf_params.max_no_iterations,
                   boost::optional<compat::MoldenFileBuilder>(
                       molden_file_builder));

            io::Log::instance().write(
                io::Logger::TERSE, "scf converged", scf->is_converged());

            if (!scf->is_converged())
                return;

            {
                io::Log::Section section("results");

                if (input_data.dispersion_correction ==
                    InputData::DISPERSION_CORRECTION_GRIMME_D3) {

                    bool found = true;

                    double rs6;
                    double rs8 = 1;
                    double s6 = 1;
                    double s8;

                    switch (input_data.theory) {
                    case InputData::THEORY_SLATER:
                        rs6 = 0.999;
                        rs8 = 0.697;
                        s8 = -1.957;
                        break;
                    case InputData::THEORY_BLYP:
                        rs6 = 1.094;
                        s8 = 1.682;
                        break;
                    case InputData::THEORY_PBE:
                        rs6 = 1.217;
                        s8 = 0.722;
                        break;
                    case InputData::THEORY_B3LYP:
                        rs6 = 1.261;
                        s8 = 1.703;
                        break;
                    case InputData::THEORY_PBE0:
                        rs6 = 1.287;
                        s8 = 0.928;
                        break;
                    case InputData::THEORY_B3LYP5:
                        rs6 = 1.261;
                        s8 = 1.703;
                        break;
                    case InputData::THEORY_B3PW91:
                        rs6 = 1.176;
                        s8 = 1.775;
                        break;
                    case InputData::THEORY_B2PLYP:
                        rs6 = 1.427;
                        s6 = 0.64;
                        s8 = 1.022;
                        break;
                    default:
                        found = false;
                    }

                    double Ed = 0;

                    if (found) {

                        const double alpha6 = 14.0;
                        const double alpha8 = alpha6 + 2;

                        const double Ed = core::grimme_d3(
                            *system, rs6, rs8, alpha6, alpha8, s6, s8);

                        io::Log::instance().write(
                            io::Logger::TERSE, "dispersion_energy", Ed);
                    }

                    io::Log::instance().write(io::Logger::TERSE,
                                              "total_energy",
                                              (scf->energy() + Ed) *
                                                  energy_unit);

                } else {
                    io::Log::instance().write(io::Logger::TERSE,
                                              "total_energy",
                                              scf->energy() * energy_unit);
                }

                if (!scf->is_restricted()) {
                    const double na = system->no_electrons(core::SPIN_ALPHA);
                    const double nb = system->no_electrons(core::SPIN_BETA);

                    const double Sz = 0.5 * (na - nb);

                    const arma::mat S = *(system->basis_set.overlap_matrix);

                    const arma::mat PbS =
                        scf->density_matrix(core::SPIN_BETA) * S;
                    const arma::mat PaS =
                        scf->density_matrix(core::SPIN_ALPHA) * S;

                    const double S2 =
                        Sz * Sz + 0.5 * (na + nb) - arma::trace(PbS * PaS);

                    io::Log::instance().write(io::Logger::VERBOSE, "S_z", Sz);
                    io::Log::instance().write(io::Logger::VERBOSE, "S^2", S2);
                }

                const arma::mat C_alpha =
                    core::symmetrize_mo(*system,
                                        scf->mo_energies(core::SPIN_ALPHA),
                                        scf->mo_coefficients(core::SPIN_ALPHA));

                const arma::mat C_beta =
                    core::symmetrize_mo(*system,
                                        scf->mo_energies(core::SPIN_BETA),
                                        scf->mo_coefficients(core::SPIN_BETA));

                const std::vector<std::string> mo_labels_alpha =
                    core::mo_symmetry_labels(*system, C_alpha);
                const std::vector<std::string> mo_labels_beta =
                    core::mo_symmetry_labels(*system, C_beta);

                const arma::vec occ =
                    scf->mo_occupations(core::SPIN_ALPHA) +
                    scf->mo_occupations(core::SPIN_BETA);

                degeneracy =
                    core::mo_degeneracy(*system,
                                        scf->mo_energies(core::SPIN_ALPHA));
                mo_symmetry =
                    core::mo_symmetry(*system, C_alpha);

                const arma::uword ss =
                    core::state_symmetry(fsg.real_character_table(),
                                         cc_sizes,
                                         occ,
                                         degeneracy,
                                         mo_symmetry);

                const std::string ss_label = (ss == arma::uword(-1))
                    ? "?symmetry"
                    : fsg.real_character_labels()[ss];

                io::Log::instance().write(io::Logger::NORMAL,
                                          "ground state symmetry",
                                          ss_label);

                io::Logger::VectorFormatInfo fi =
                    io::Logger::DEFAULT_VECTOR_FORMAT;
                fi.labels = mo_labels_alpha;

                io::Logger::VectorFormatInfo fi_beta =
                    io::Logger::DEFAULT_VECTOR_FORMAT;
                fi_beta.labels = mo_labels_beta;

                io::Log::instance().write(io::Logger::NORMAL,
                                          "alpha_orbital_energies",
                                          scf->mo_energies(core::SPIN_ALPHA),
                                          fi);

                if (!scf->is_restricted())
                    io::Log::instance().write(io::Logger::NORMAL,
                                              "beta_orbital_energies",
                                              scf->mo_energies(core::SPIN_BETA),
                                              fi_beta);

                io::Log::instance().write(io::Logger::NORMAL,
                                          "alpha_orbital_occupations",
                                          scf->mo_occupations(core::SPIN_ALPHA),
                                          fi);

                if (!scf->is_restricted())
                    io::Log::instance().write(
                        io::Logger::NORMAL,
                        "beta orbital occupations",
                        scf->mo_occupations(core::SPIN_BETA),
                        fi_beta);

                io::Logger::MatrixFormatInfo mfi =
                    io::Logger::DEFAULT_MATRIX_FORMAT;
                mfi.column_labels = mo_labels_alpha;

                io::Logger::MatrixFormatInfo mfi_beta =
                    io::Logger::DEFAULT_MATRIX_FORMAT;
                mfi_beta.column_labels = mo_labels_beta;

                io::Log::instance().write(
                    io::Logger::VERBOSE,
                    "alpha_mo_coefficients",
                    scf->mo_coefficients(core::SPIN_ALPHA),
                    mfi);

                if (!scf->is_restricted())
                    io::Log::instance().write(
                        io::Logger::VERBOSE,
                        "beta_mo_coefficients",
                        scf->mo_coefficients(core::SPIN_BETA),
                        mfi_beta);



                print_population_analysis(input_data,
                                          system,
                                          scf->density_matrix(core::SPIN_ALPHA),
                                          scf->density_matrix(core::SPIN_BETA),
                                          grid_factory);

                print_bond_order_analysis(input_data,
                                          system,
                                          scf->density_matrix(core::SPIN_ALPHA),
                                          scf->density_matrix(core::SPIN_BETA));

                if (input_data.extra_output.molden && comm.rank() == 0) {
                    std::ofstream molden_file(
                        (config.job_name() + ".molden").c_str());
                    molden_file_builder.write(molden_file);
                }
            }
        }

        if (input_data.extra_output.dump_scf_matrices) {
            scf->mo_coefficients(core::SPIN_ALPHA)
                .save(config.job_name() + ".alpha.C", arma::arma_ascii);
            scf->mo_coefficients(core::SPIN_BETA)
                .save(config.job_name() + ".beta.C", arma::arma_ascii);
            scf->density_matrix(core::SPIN_ALPHA)
                .save(config.job_name() + ".alpha.P", arma::arma_ascii);
            scf->density_matrix(core::SPIN_BETA)
                .save(config.job_name() + ".beta.P", arma::arma_ascii);
            scf->mo_energies(core::SPIN_ALPHA)
                .save(config.job_name() + ".alpha.E", arma::arma_ascii);
            scf->mo_energies(core::SPIN_BETA)
                .save(config.job_name() + ".beta.E", arma::arma_ascii);
            scf->fock_matrix(core::SPIN_ALPHA)
                .save(config.job_name() + ".alpha.F", arma::arma_ascii);
            scf->fock_matrix(core::SPIN_BETA)
                .save(config.job_name() + ".beta.F", arma::arma_ascii);
            scf->mo_occupations(core::SPIN_ALPHA)
                .save(config.job_name() + ".alpha.occ", arma::arma_ascii);
            scf->mo_occupations(core::SPIN_BETA)
                .save(config.job_name() + ".beta.occ", arma::arma_ascii);
            arma::vec n_electrons = {
                (double)(system->no_electrons(core::SPIN_ALPHA)),
                (double)(system->no_electrons(core::SPIN_BETA))};
            n_electrons.save(config.job_name() + ".n_electrons",
                             arma::arma_ascii);
        }

        if (input_data.moller_plesset_params.order == 2 ||
            dft_method->mp2_correlation_contrib != 0) {

            std::shared_ptr<
                const core::PostHFQuasiTwoElectronIntegralEngineFactory>
                posthf_quasi_two_e_ie_factory =
                    create_posthf_quasi_two_e_ie_factory(config, input_data);

            do_posthf(input_data,
                      system,
                      *scf,
                      two_e_ie_factory,
                      posthf_quasi_two_e_ie_factory,
                      dft_method);
        }

        if (input_data.properties.electric.charge ||
            input_data.properties.electric.dipole_in_std_frame ||
            input_data.properties.electric.dipole_in_inp_frame ||
            input_data.properties.electric.quadrupole_in_std_frame ||
            input_data.properties.electric.quadrupole_in_inp_frame ||
            input_data.properties.electric.atomic_partial_mulliken_charges ||
            input_data.properties.electric.atomic_partial_lowdin_charges ||
            input_data.properties.electric
                .atomic_partial_mulliken_dipoles_in_std_frame ||
            input_data.properties.electric
                .atomic_partial_mulliken_dipoles_in_inp_frame ||
            input_data.properties.electric
                .atomic_partial_lowdin_dipoles_in_std_frame ||
            input_data.properties.electric
                .atomic_partial_lowdin_dipoles_in_inp_frame ||
            input_data.properties.electric
                .atomic_partial_mulliken_quadrupoles_in_std_frame ||
            input_data.properties.electric
                .atomic_partial_mulliken_quadrupoles_in_inp_frame ||
            input_data.properties.electric
                .atomic_partial_lowdin_quadrupoles_in_std_frame ||
            input_data.properties.electric
                .atomic_partial_lowdin_quadrupoles_in_inp_frame ||
            input_data.properties.electric.polarizability ||
            input_data.properties.electric.atom_atom_N_mulliken ||
            input_data.properties.electric.atom_atom_N_lowdin ||
            input_data.properties.electric.atom_atom_4N_mulliken ||
            input_data.properties.electric.atom_atom_4N_lowdin ||
            input_data.properties.electric.atom_atom_10N_mulliken ||
            input_data.properties.electric.atom_atom_10N_lowdin ||
            input_data.extra_output.mesh_london)
            do_el_stat_prop(config, input_data, system, two_e_ie_factory, *scf);

        if (input_data.td_params.type != InputData::TDParams::TD_NONE)
            do_td(input_data,
                  system,
                  std::move(scf),
                  one_e_ie_factory,
                  two_e_ie_factory,
                  ao_value_engine_factory,
                  grid_factory,
                  dft_method,
                  fm_gen_factory,
                  degeneracy,
                  cc_sizes,
                  mo_symmetry);
    }
}
