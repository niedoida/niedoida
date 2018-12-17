/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "io_kit/log.hpp"

#include "td_kit/cis.hpp"
#include "td_kit/dress.hpp"
#include "td_kit/dressed_cis.hpp"
#include "td_kit/mo_integral.hpp"
#include "td_kit/nto.hpp"

#include "misc_kit/phys_consts.hpp"
#include "td_kit/tdks_dressed_tda.hpp"
#include "td_kit/tdks_tda.hpp"

#include "core_kit/mo_symmetry.hpp"

namespace {
    using namespace niedoida;

    void print_excitation_info(const td::RestrictedTD& rtd,
                               unsigned no_occ,
                               unsigned no_virt,
                               unsigned no_frozen,
                               unsigned no_deleted,
                               const symmetry::FiniteSymmetryGroup& fsg,
                               const arma::uvec& degeneracy,
                               const arma::uvec& cc_sizes,
                               const arma::uvec& mo_symmetry)
    {
        const unsigned eff_no_occ = no_occ - no_frozen;
        const unsigned eff_no_virt = no_virt - no_deleted;

        io::Log::instance().write(io::Logger::VERBOSE,
                                  "no_states_converged",
                                  std::size_t(rtd.energies().size()));

        if (rtd.energies().size() > 0) {

            io::Log::instance().write(
                io::Logger::NORMAL, "energies", rtd.energies());
            io::Log::instance().write(
                io::Logger::NORMAL,
                "energies (eV)",
                arma::vec(misc::hartree_to_ev * rtd.energies()));

            std::size_t a_max = 0;
            std::size_t i_max = 0;
            double max_v = 0;
            for (std::size_t n = 0; n < rtd.coefficients().n_cols; ++n) {
                io::Log::instance().write(io::Logger::NORMAL,
                                          "state", n + 1);
                io::Log::instance().write(io::Logger::NORMAL,
                                          "energy (eV)",
                                          misc::hartree_to_ev * rtd.energies()(n));

                std::vector<std::string> labels;
                arma::vec values(rtd.coefficients().n_rows);
                std::size_t k = 0;
                for (std::size_t a = 0; a < eff_no_occ; ++a)
                    for (std::size_t i = 0; i < eff_no_virt; ++i) {
                        const double v =
                            rtd.coefficients()(a * eff_no_virt + i, n);
                        if (std::abs(v) > max_v) {
                            max_v = v;
                            a_max = a + no_frozen;
                            i_max = i + no_occ;
                        }
                        if (std::abs(v) > 5e-2) {
                            const std::string sa =
                                std::to_string(a + no_frozen + 1);
                            const std::string si =
                                std::to_string(i + no_occ + 1);
                            const std::string label = sa + "->" + si;
                            labels.push_back(label);
                            values(k) = v;
                            k += 1;
                        }
                    }

                arma::vec occ(eff_no_occ + eff_no_virt,
                              arma::fill::zeros);

                for (unsigned i = 0; i < eff_no_occ; ++i)
                    occ(i) = 2;
                occ(a_max) -= 1;
                occ(i_max) += 1;

                const arma::mat& rct = fsg.real_character_table();
                const std::vector<std::string>& rcl =
                    fsg.real_character_labels();

                const arma::uword ss =
                    core::state_symmetry(rct,
                                         cc_sizes,
                                         occ,
                                         degeneracy,
                                         mo_symmetry);

                const std::string ss_label = (ss == arma::uword(-1))
                    ? "?symmetry"
                    : rcl[ss];

                io::Log::instance().write(io::Logger::NORMAL,
                                          "symmetry",
                                          ss_label);

                io::Logger::VectorFormatInfo vfi =
                    io::Logger::DEFAULT_VECTOR_FORMAT;

                vfi.labels = labels;

                io::Log::instance().write(
                    io::Logger::TERSE, "coefficients", values.head(k), vfi);
            }
            io::Log::instance().write(
                io::Logger::TERSE,
                "ground state -> excited states transition dipole moments",
                rtd.transition_dipoles());
        }
    }
}

namespace niedoida {
    void do_td(const InputData& input_data,
               std::shared_ptr<const core::System> system,
               std::unique_ptr<scf::SCF> scf,
               std::shared_ptr<const core::OneElectronIntegralEngineFactory>
                   one_e_ie_factory,
               std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                   two_e_ie_factory,
               std::shared_ptr<const core::AOValueEngineFactory>
                   ao_value_engine_factory,
               std::shared_ptr<const grid::GridFactory> grid_factory,
               std::shared_ptr<const DFTMethod> dft_method,
               std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen,
               const arma::uvec& degeneracy,
               const arma::uvec& cc_sizes,
               const arma::uvec& mo_symmetry)
    {
        std::unique_ptr<td::RestrictedTD> rtd;

        const unsigned no_frozen = input_data.td_params.no_frozen;
        const unsigned no_deleted = input_data.td_params.no_deleted;

        const unsigned no_occ = system->no_electrons(core::SPIN_ALPHA);
        const unsigned no_virt = system->basis_set.real_size() - no_occ;

        const unsigned eff_no_occ = no_occ - no_frozen;
        const unsigned eff_no_virt = no_virt - no_deleted;

        const unsigned no_roots =
            std::min(input_data.td_params.no_roots, eff_no_occ * eff_no_virt);
        const unsigned no_states =
            std::min(input_data.td_params.no_states, no_roots);

        const double energy_unit = (input_data.units.energy_unit ==
                                    InputData::Units::ENERGY_UNIT_HARTREE)
                                       ? 1
                                       : misc::hartree_to_ev;

        double scf_total_energy =
            (scf->electronic_energy() + scf::nuclear_repulsion(system->atoms)) *
            energy_unit;

        arma::vec energies;
        arma::mat coeffs;
        //        unsigned no_states_converged;

        const double dress_delta_energy =
            input_data.td_params.dress_double_config_energy_range;

        std::shared_ptr<td::XCMultiKernelGenerator> xc_kernel_gen;

	const symmetry::FiniteSymmetryGroup& fsg =
            system->symmetry_info->finite_symmetry_group();

        if (input_data.td_params.multiplicity & (1 << 0)) {
            io::Log::Section s_section("singlet states");

            if (input_data.theory == InputData::THEORY_HF &&
                input_data.td_params.type == InputData::TDParams::TDA) {

                rtd.reset(
                    new td::RCIS(td::RestrictedTD::SINGLET,
                                 system,
                                 scf->mo_coefficients(core::SPIN_ALPHA),
                                 scf->mo_energies(core::SPIN_ALPHA),
                                 two_e_ie_factory,
                                 no_frozen,
                                 no_deleted,
                                 no_states,
                                 no_roots,
                                 input_data.td_params.no_iterations,
                                 input_data.td_params.diagonalization_threshold,
                                 input_data.td_params.integral_threshold));

                if (input_data.td_params.dress_no_iterations > 0) {

                    energies = rtd->energies();
                    coeffs = rtd->coefficients();
                    arma::mat full_coeffs = rtd->coefficients(true);
                    arma::vec full_energies = rtd->energies(true);

                    print_excitation_info(*rtd, no_occ,
                                          no_virt, no_frozen,
                                          no_deleted, fsg,
                                          degeneracy, cc_sizes,
                                          mo_symmetry);

                    std::shared_ptr<const td::MOOneEIntGenerator>
                        mo_one_e_int_gen;
                    std::shared_ptr<td::MOTwoEIntGenerator> mo_two_e_int_gen;

                    mo_one_e_int_gen.reset(new td::MOOneEIntGenerator(
                        one_e_ie_factory->make(system),
                        scf->mo_coefficients(core::SPIN_ALPHA)));

                    mo_two_e_int_gen.reset(new td::MOTwoEIntGenerator(
                        system,
                        two_e_ie_factory->make(system),
                        scf->mo_coefficients(core::SPIN_ALPHA)));

                    td::Dress dress(system,
                                    coeffs,
                                    energies,
                                    scf->mo_coefficients(core::SPIN_ALPHA),
                                    scf->mo_energies(core::SPIN_ALPHA),
                                    energies.size() < no_states
                                        ? energies.size()
                                        : no_states,
                                    mo_one_e_int_gen,
                                    mo_two_e_int_gen,
                                    two_e_ie_factory,
                                    dress_delta_energy,
                                    input_data.td_params.dress_state);

                    for (unsigned k = 0;
                         k < input_data.td_params.dress_no_iterations;
                         ++k) {
                        io::Log::instance().write(
                            io::Logger::TERSE, "dress iteration", k);
                        arma::vec old_energies = energies;

                        rtd.reset(new td::RDressedCIS(
                            td::RestrictedTD::SINGLET,
                            system,
                            scf->mo_coefficients(core::SPIN_ALPHA),
                            scf->mo_energies(core::SPIN_ALPHA),
                            two_e_ie_factory,
                            no_frozen,
                            no_deleted,
                            energies.size() < no_states ? energies.size()
                                                        : no_states,
                            input_data.td_params.dress_no_davidson_iterations,
                            input_data.td_params
                                .dress_diagonalization_threshold,
                            dress.get_dress_matrix(),
                            full_coeffs));

                        energies = rtd->energies();
                        coeffs = rtd->coefficients();
                        full_coeffs = rtd->coefficients(true);
                        full_energies = rtd->energies(true);

                        print_excitation_info(*rtd, no_occ,
                                              no_virt, no_frozen,
                                              no_deleted, fsg,
                                              degeneracy, cc_sizes,
                                              mo_symmetry);

                        double max_energy_change = 0.0;

                        for (std::size_t i = 0;
                             i < energies.size() && i < old_energies.size();
                             ++i) {

                            double current_change =
                                std::abs(energies[i] - old_energies[i]);

                            if (current_change > max_energy_change)
                                max_energy_change = current_change;
                        }

                        io::Log::instance().write(io::Logger::NORMAL,
                                                  "max energy change",
                                                  max_energy_change);

                        if (max_energy_change > 0.0001 ||
                            energies.size() != old_energies.size()) {
                            dress.update_dress(
                                full_energies.head(no_states),
                                full_coeffs.cols(0, no_states - 1));
                        } else {
                            break;
                        }
                    }
                }
            } else if (input_data.td_params.type == InputData::TDParams::TDA) {

                if (dft_method->xc_functional.which() == 0)
                    xc_kernel_gen.reset(new td::XCMultiKernelGenerator(
                        system,
                        grid_factory->make(system),
                        ao_value_engine_factory,
                        boost::get<xc::LocalXCFunctional>(
                            dft_method->xc_functional),
                        1024));
                else
                    xc_kernel_gen.reset(new td::XCMultiKernelGenerator(
                        system,
                        grid_factory->make(system),
                        ao_value_engine_factory,
                        boost::get<xc::GGAXCFunctional>(
                            dft_method->xc_functional),
                        1024));

                rtd.reset(new td::TDKS_TDA(
                    td::RestrictedTD::SINGLET,
                    system,
                    scf->mo_coefficients(core::SPIN_ALPHA),
                    scf->mo_energies(core::SPIN_ALPHA),
                    two_e_ie_factory,
                    no_frozen,
                    no_deleted,
                    no_states,
                    no_roots,
                    input_data.td_params.no_iterations,
                    input_data.td_params.diagonalization_threshold,
                    input_data.td_params.integral_threshold,
                    xc_kernel_gen,
                    dft_method->fock_exchange_contrib));

                if (input_data.td_params.dress_no_iterations > 0) {

                    energies = rtd->energies();
                    coeffs = rtd->coefficients();
                    arma::mat full_coeffs = rtd->coefficients(true);
                    arma::vec full_energies = rtd->energies(true);

                    print_excitation_info(*rtd, no_occ,
                                          no_virt, no_frozen,
                                          no_deleted, fsg,
                                          degeneracy, cc_sizes,
                                          mo_symmetry);

                    std::shared_ptr<const td::MOOneEIntGenerator>
                        mo_one_e_int_gen;
                    std::shared_ptr<td::MOTwoEIntGenerator> mo_two_e_int_gen;

                    mo_one_e_int_gen.reset(new td::MOOneEIntGenerator(
                        one_e_ie_factory->make(system),
                        scf->mo_coefficients(core::SPIN_ALPHA)));

                    mo_two_e_int_gen.reset(new td::MOTwoEIntGenerator(
                        system,
                        two_e_ie_factory->make(system),
                        scf->mo_coefficients(core::SPIN_ALPHA)));

                    td::Dress dress(system,
                                    coeffs,
                                    energies,
                                    scf->mo_coefficients(core::SPIN_ALPHA),
                                    scf->mo_energies(core::SPIN_ALPHA),
                                    energies.size() < no_states
                                        ? energies.size()
                                        : no_states,
                                    mo_one_e_int_gen,
                                    mo_two_e_int_gen,
                                    two_e_ie_factory,
                                    dress_delta_energy,
                                    input_data.td_params.dress_state);

                    for (unsigned k = 0;
                         k < input_data.td_params.dress_no_iterations;
                         ++k) {
                        io::Log::instance().write(
                            io::Logger::TERSE, "dress iteration", k);
                        arma::vec old_energies = energies;

                        rtd.reset(new td::TDKS_DressedTDA(
                            td::RestrictedTD::SINGLET,
                            system,
                            scf->mo_coefficients(core::SPIN_ALPHA),
                            scf->mo_energies(core::SPIN_ALPHA),
                            two_e_ie_factory,
                            no_frozen,
                            no_deleted,
                            energies.size() < no_states ? energies.size()
                                                        : no_states,
                            input_data.td_params.dress_no_davidson_iterations,
                            input_data.td_params
                                .dress_diagonalization_threshold,
                            xc_kernel_gen,
                            dress.get_dress_matrix(),
                            full_coeffs,
                            dft_method->fock_exchange_contrib));

                        energies = rtd->energies();
                        coeffs = rtd->coefficients();
                        full_coeffs = rtd->coefficients(true);
                        full_energies = rtd->energies(true);

                        print_excitation_info(*rtd, no_occ,
                                              no_virt, no_frozen,
                                              no_deleted, fsg,
                                              degeneracy, cc_sizes,
                                              mo_symmetry);

                        double max_energy_change = 0.0;

                        for (std::size_t i = 0;
                             i < energies.size() && i < old_energies.size();
                             ++i) {

                            double current_change =
                                std::abs(energies[i] - old_energies[i]);

                            if (current_change > max_energy_change)
                                max_energy_change = current_change;
                        }

                        io::Log::instance().write(io::Logger::NORMAL,
                                                  "max energy change",
                                                  max_energy_change);

                        if (max_energy_change > 0.0001 ||
                            energies.size() != old_energies.size()) {
                            dress.update_dress(
                                full_energies.head(no_states),
                                full_coeffs.cols(0, no_states - 1));
                        } else {
                            break;
                        }
                    }
                }
            }

            energies = rtd->energies();
            coeffs = rtd->coefficients();

            print_excitation_info(*rtd, no_occ,
                                  no_virt, no_frozen,
                                  no_deleted, fsg,
                                  degeneracy, cc_sizes,
                                  mo_symmetry);

            if (energies.size() > 0) {

                arma::vec f(energies.size());
                for (std::size_t n = 0; n < energies.size(); ++n) {
                    const double m =
                        arma::norm(rtd->transition_dipoles().row(n), 2);
                    const double m2 = m * m;
                    f(n) = 2.0 / 3.0 * energies(n) * m2;
                }

                io::Log::instance().write(
                    io::Logger::NORMAL, "oscillator_strength", f);

                {
                    io::Log::Section section("NTO");

                    for (std::size_t n = 0; n < coeffs.n_cols; ++n) {
                        io::Log::instance().write(
                            io::Logger::NORMAL, "state", n);

                        arma::mat T(eff_no_occ, eff_no_virt);

                        for (std::size_t a = 0; a < eff_no_occ; ++a)
                            for (std::size_t i = 0; i < eff_no_virt; ++i)
                                T(a, i) = coeffs(a * eff_no_virt + i, n);

                        td::NTO nto(T);

                        for (std::size_t i = 0;
                             i < nto.coeffs().size() && nto.coeffs()(i) > 0.1;
                             ++i) {
                            io::Log::instance().write(io::Logger::NORMAL,
                                                      "contribution",
                                                      nto.coeffs()(i));
                            io::Log::instance().write(
                                io::Logger::NORMAL,
                                "h coeffs",
                                arma::vec(nto.h_orbs().col(i)));
                            io::Log::instance().write(
                                io::Logger::NORMAL,
                                "e coeffs",
                                arma::vec(nto.e_orbs().col(i)));
                        }
                    }
                }
            }
        }

        if (input_data.td_params.multiplicity & (1 << 1)) {
            io::Log::Section s_section("triplet states");

            if (input_data.theory == InputData::THEORY_HF &&
                input_data.td_params.type == InputData::TDParams::TDA) {

                rtd.reset(
                    new td::RCIS(td::RestrictedTD::TRIPLET,
                                 system,
                                 scf->mo_coefficients(core::SPIN_ALPHA),
                                 scf->mo_energies(core::SPIN_ALPHA),
                                 two_e_ie_factory,
                                 no_frozen,
                                 no_deleted,
                                 no_states,
                                 no_roots,
                                 input_data.td_params.no_iterations,
                                 input_data.td_params.diagonalization_threshold,
                                 input_data.td_params.integral_threshold));

            } else {
                if (input_data.td_params.type == InputData::TDParams::TDA) {
                    rtd.reset(new td::TDKS_TDA(
                        td::RestrictedTD::TRIPLET,
                        system,
                        scf->mo_coefficients(core::SPIN_ALPHA),
                        scf->mo_energies(core::SPIN_ALPHA),
                        two_e_ie_factory,
                        no_frozen,
                        no_deleted,
                        no_states,
                        no_roots,
                        input_data.td_params.no_iterations,
                        input_data.td_params.diagonalization_threshold,
                        input_data.td_params.integral_threshold,
                        xc_kernel_gen,
                        dft_method->fock_exchange_contrib));
                }
                //                } else {
                //
                //                                 rtd.reset(new TDKS_RPA(
                //                                               RestrictedTD::TRIPLET,
                //                                               system,
                //                                               scf->mo_coefficients(SPIN_ALPHA),
                //                                               scf->mo_energies(SPIN_ALPHA),
                //                                               two_e_ie_factory,
                //                                               no_frozen,
                //                                               no_deleted,
                //                                               no_states,
                //                                               no_roots,
                //                                               input_data.td_params.no_iterations,
                //                                               input_data.td_params.diagonalization_threshold,
                //                                               fxc));
            }

            energies = rtd->energies();
            coeffs = rtd->coefficients();

            print_excitation_info(*rtd, no_occ,
                                  no_virt, no_frozen,
                                  no_deleted, fsg,
                                  degeneracy, cc_sizes,
                                  mo_symmetry);
        }
    }
}
