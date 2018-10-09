/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <io_kit/log.hpp>
#include <niedoida/niedoida.hpp>

#include <core_kit/integral_engine_factory.hpp>
#include <gto_kit/os1_integral_engine.hpp>

#include <scf_kit/scf.hpp>
#include <scf_kit/scf_utils.hpp>

#include <el_stat_prop_kit/adapter.hpp>
#include <el_stat_prop_kit/popular_bits_lists.hpp>
#include <el_stat_prop_kit/simple_system_adapter.hpp>
#include <el_stat_prop_kit/transform_raw_quadrupole_into_traceless_quadupole.hpp>

#include <cphf_kit/cphf_hessian.hpp>
#include <cphf_kit/cphf_linear_response.hpp>
#include <cphf_kit/sos_hessian.hpp>

namespace {
    using namespace niedoida;

    io::Logger::VectorFormatInfo
    make_labeled_vector_format_info(const std::vector<std::string>& labels)
    {
        io::Logger::VectorFormatInfo fi = io::Logger::DEFAULT_VECTOR_FORMAT;
        fi.labels = labels;
        return fi;
    }

    io::Logger::VectorFormatInfo vfi_p()
    {
        static const auto fi =
            make_labeled_vector_format_info({"p_x", "p_y", "p_z"});
        return fi;
    }

    io::Logger::VectorFormatInfo vfi_raw_Q()
    {
        static const auto fi = make_labeled_vector_format_info(
            {"rawQ_xx", "rawQ_xy", "rawQ_xz", "rawQ_yy", "rawQ_yz", "rawQ_zz"});
        return fi;
    }

    io::Logger::VectorFormatInfo vfi_traceless_Q()
    {
        static const auto fi = make_labeled_vector_format_info(
            {"Q_xx", "Q_xy", "Q_xz", "Q_yy", "Q_yz", "Q_zz"});
        return fi;
    }

    io::Logger::MatrixFormatInfo make_row_labeled_matrix_format_info(
        const std::vector<std::string>& row_labels)
    {
        io::Logger::MatrixFormatInfo fi = io::Logger::DEFAULT_MATRIX_FORMAT;
        fi.row_labels = row_labels;
        return fi;
    }

    io::Logger::MatrixFormatInfo mfi_p()
    {
        static const auto fi =
            make_row_labeled_matrix_format_info({"p_x", "p_y", "p_z"});
        return fi;
    }

    io::Logger::MatrixFormatInfo mfi_raw_Q()
    {
        static const auto fi = make_row_labeled_matrix_format_info(
            {"rawQ_xx", "rawQ_xy", "rawQ_xz", "rawQ_yy", "rawQ_yz", "rawQ_zz"});
        return fi;
    }

    io::Logger::MatrixFormatInfo mfi_traceless_Q()
    {
        static const auto fi = make_row_labeled_matrix_format_info(
            {"Q_xx", "Q_xy", "Q_xz", "Q_yy", "Q_yz", "Q_zz"});
        return fi;
    }

}

namespace {
    using namespace niedoida;

    el_stat_prop::SimpleSystemAdapter
    make_el_stat_prop_system(const std::shared_ptr<const core::System> system,
                             const scf::SCF& scf)
    {

        const unsigned n_atoms = system->atoms.size();
        arma::mat atom_coords_std_frame(3, n_atoms);
        for (unsigned atom = 0; atom < n_atoms; ++atom)
            atom_coords_std_frame.col(atom) = system->atoms[atom]->coords;

        const arma::mat& rotation_to_std_frame =
            system->symmetry_info->rotation_to_std_frame();
        const arma::vec& translation_to_std_frame =
            system->symmetry_info->translation_to_std_frame();
        const unsigned n_basis = system->basis_set.real_size();
        std::vector<unsigned> atomic_basis_sizes(n_atoms);
        for (unsigned atom = 0; atom < n_atoms; ++atom) {
            const auto abs = system->basis_set.atomic_basis_sets()[atom];
            atomic_basis_sizes[atom] = abs->real_size();
        }
        const arma::mat& overlap_matrix = *(system->basis_set.overlap_matrix);
        const gto::OS1MultipoleIntegralEngine mie(*system);
        const auto r = mie.dipole_matrices();
        const auto rr = mie.quadrupole_matrices();
        arma::mat density_operator_alpha =
            scf::density_matrix(scf.mo_coefficients(core::SPIN_ALPHA),
                                scf.mo_occupations(core::SPIN_ALPHA));
        arma::mat density_operator_beta =
            scf::density_matrix(scf.mo_coefficients(core::SPIN_BETA),
                                scf.mo_occupations(core::SPIN_BETA));
        arma::vec nuclei_charges(n_atoms);
        for (unsigned atom = 0; atom < n_atoms; ++atom) {
            nuclei_charges(atom) =
                system->atoms[atom]->isotope->element->atomic_number;
        }

        el_stat_prop::SimpleSystemAdapter el_stat_prop_system;
        el_stat_prop_system.set_n_atoms(n_atoms)
            .set_atom_coords_std_frame(atom_coords_std_frame)
            .set_n_basis(n_basis)
            .set_atomic_basis_sizes(atomic_basis_sizes)
            .set_rotation_to_std_frame(rotation_to_std_frame)
            .set_translation_to_std_frame(translation_to_std_frame)
            .set_overlap_matrix(overlap_matrix)
            .set_x_std_oritent_matrix(r[0])
            .set_y_std_oritent_matrix(r[1])
            .set_z_std_oritent_matrix(r[2])
            .set_xx_std_oritent_matrix(rr(0, 0))
            .set_xy_std_oritent_matrix(rr(0, 1))
            .set_xz_std_oritent_matrix(rr(0, 2))
            .set_yy_std_oritent_matrix(rr(1, 1))
            .set_yz_std_oritent_matrix(rr(1, 2))
            .set_zz_std_oritent_matrix(rr(2, 2))
            .set_nuclei_charges(nuclei_charges)
            .set_density_operators(density_operator_alpha,
                                   density_operator_beta);

        return el_stat_prop_system;
    }
}

#include <iostream>

namespace niedoida {

    void do_el_stat_prop(
        const Config& config,
        const InputData& input_data,
        const std::shared_ptr<const core::System> system,
        const std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
            two_e_ie_factory,
        const scf::SCF& scf)
    {

        io::Log::Section el_stat_prop_section("el-stat-prop");

        // *******************************************************************
        // ****** auxiliary quantities ***************************************
        // *******************************************************************

        const unsigned Nocc_alpha = system->no_electrons(core::SPIN_ALPHA);
        const unsigned Nocc_beta = system->no_electrons(core::SPIN_BETA);
        const arma::mat& free_scf_C_alpha =
            scf.mo_coefficients(core::SPIN_ALPHA);
        const arma::mat& free_scf_C_beta = scf.mo_coefficients(core::SPIN_BETA);
        const arma::vec& free_scf_mo_energies_alpha =
            scf.mo_energies(core::SPIN_ALPHA);
        const arma::vec& free_scf_mo_energies_beta =
            scf.mo_energies(core::SPIN_BETA);

        // *******************************************************************
        // ****** preparation ************************************************
        // *******************************************************************

        el_stat_prop::SimpleSystemAdapter el_stat_prop_system =
            make_el_stat_prop_system(system, scf);
        const unsigned n_atoms = system->atoms.size();

        // *******************************************************************
        // ****** charges ****************************************************
        // *******************************************************************
        if (input_data.properties.electric.charge) {
            const auto bits = el_stat_prop::charge_bit(el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const double value_nuclei = values.value_nuclei()(0);
            const double value_electrons = values.value_electron()(0);
            io::Log::instance().write(io::Logger::VERBOSE,
                                      "charge [nuclei contribution]",
                                      value_nuclei);
            io::Log::instance().write(io::Logger::VERBOSE,
                                      "charge [electrons contribution]",
                                      value_electrons);
            io::Log::instance().write(io::Logger::TERSE,
                                      "charge [total]",
                                      value_nuclei + value_electrons);
        }

        // *******************************************************************
        // ****** dipole_in_std_frame ****************************************
        // *******************************************************************
        if (input_data.properties.electric.dipole_in_std_frame) {
            const auto bits =
                el_stat_prop::dipole_bits_in_std_frame(el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::vec& value_electrons = values.value_electron();
            io::Log::instance().write(
                io::Logger::TERSE,
                "dipoles (in std-frame) [total, electrons contribution]",
                value_electrons,
                vfi_p());
        }

        // *******************************************************************
        // ****** dipole_in_inp_frame ****************************************
        // *******************************************************************
        if (input_data.properties.electric.dipole_in_inp_frame) {
            const auto bits =
                el_stat_prop::dipole_bits_in_inp_frame(el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::vec& value_nuclei = values.value_nuclei();
            const arma::vec& value_electrons = values.value_electron();
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "dipole (in inp-frame) [nuclei contribution]",
                value_nuclei,
                vfi_p());
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "dipole (in inp-frame) [electrons contribution]",
                value_electrons,
                vfi_p());
            io::Log::instance().write(io::Logger::TERSE,
                                      "dipole (in inp-frame) [total]",
                                      value_nuclei + value_electrons,
                                      vfi_p());
        }

        // *******************************************************************
        // ****** quadrupole_in_std_frame ************************************
        // *******************************************************************
        if (input_data.properties.electric.quadrupole_in_std_frame) {
            const auto bits =
                el_stat_prop::quadrupole_bits_in_std_frame(el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::vec& value_nuclei = values.value_nuclei();
            const arma::vec& value_electrons = values.value_electron();
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "quadrupole (raw, in std-frame) [nuclei contribution]",
                value_nuclei,
                vfi_raw_Q());
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "quadrupole (raw, in std-frame) [electrons contribution]",
                value_electrons,
                vfi_raw_Q());
            io::Log::instance().write(io::Logger::TERSE,
                                      "quadrupole (raw, in std-frame) [total]",
                                      value_nuclei + value_electrons,
                                      vfi_raw_Q());
            const arma::vec traceless =
                el_stat_prop::transform_raw_quadrupole_into_traceless_quadupole(
                    value_nuclei + value_electrons);
            io::Log::instance().write(
                io::Logger::TERSE,
                "quadrupole (traceless, in std-frame) [total]",
                traceless,
                vfi_traceless_Q());
        }

        // *******************************************************************
        // ****** quadrupole_in_inp_frame ************************************
        // *******************************************************************
        if (input_data.properties.electric.quadrupole_in_inp_frame) {
            const auto bits =
                el_stat_prop::quadrupole_bits_in_inp_frame(el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::vec& value_nuclei = values.value_nuclei();
            const arma::vec& value_electrons = values.value_electron();
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "quadrupole (raw, in inp-frame) [nuclei contribution]",
                value_nuclei,
                vfi_raw_Q());
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "quadrupole (raw, in inp-frame) [electrons contribution]",
                value_electrons,
                vfi_raw_Q());
            io::Log::instance().write(io::Logger::TERSE,
                                      "quadrupole (raw, in inp-frame) [total]",
                                      value_nuclei + value_electrons,
                                      vfi_raw_Q());
            const arma::vec traceless =
                el_stat_prop::transform_raw_quadrupole_into_traceless_quadupole(
                    value_nuclei + value_electrons);
            io::Log::instance().write(
                io::Logger::TERSE,
                "quadrupole (traceless, in inp-frame) [total]",
                traceless,
                vfi_traceless_Q());
        }

        // *******************************************************************
        // ****** atomic_partial_mulliken_charges ****************************
        // *******************************************************************
        if (input_data.properties.electric.atomic_partial_mulliken_charges) {
            const auto bits =
                el_stat_prop::atomic_partial_mulliken_charges_bits(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::vec& value_nuclei = values.value_nuclei();
            const arma::vec& value_electrons = values.value_electron();
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "atomic-partial-mulliken-charges [nuclei contribution]",
                value_nuclei);
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "atomic-partial-mulliken-charges [electrons contribution]",
                value_electrons);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-charges [total]",
                static_cast<arma::vec>(value_nuclei + value_electrons));
            if (input_data.extra_output.pimuel)
                (value_nuclei + value_electrons)
                    .eval()
                    .save(config.job_name() + ".mulliken.vec_q0",
                          arma::raw_ascii);
        }

        // *******************************************************************
        // ****** atomic_partial_lowdin_charges ******************************
        // *******************************************************************
        if (input_data.properties.electric.atomic_partial_lowdin_charges) {
            const auto bits = el_stat_prop::atomic_partial_lowdin_charges_bits(
                el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::vec& value_nuclei = values.value_nuclei();
            const arma::vec& value_electrons = values.value_electron();
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "atomic-partial-lowdin-charges [nuclei contribution]",
                value_nuclei);
            io::Log::instance().write(
                io::Logger::VERBOSE,
                "atomic-partial-lowdin-charges [electrons contribution]",
                value_electrons);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-lowdin-charges [total]",
                static_cast<arma::vec>(value_nuclei + value_electrons));
            if (input_data.extra_output.pimuel)
                (value_nuclei + value_electrons)
                    .eval()
                    .save(config.job_name() + ".lowdin.vec_q0",
                          arma::raw_ascii);
        }

        // *******************************************************************
        // ****** atomic_partial_mulliken_dipoles_in_std_frame ***************
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_mulliken_dipoles_in_std_frame) {
            const auto bits = atomic_partial_mulliken_dipoles_bits_in_std_frame(
                el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 3u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-dipoles (in std-frame) [total, "
                "electrons contribution]",
                value_electrons,
                mfi_p());
        }

        // *******************************************************************
        // ****** atomic_partial_mulliken_dipoles_in_inp_frame ***************
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_mulliken_dipoles_in_inp_frame) {
            const auto bits =
                el_stat_prop::atomic_partial_mulliken_dipoles_bits_in_inp_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 3u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-dipoles (in inp-frame) [total, "
                "electrons contribution]",
                value_electrons,
                mfi_p());
            if (input_data.extra_output.pimuel)
                value_electrons.t().eval().save(
                    config.job_name() + ".mulliken.mat_p0", arma::raw_ascii);
        }

        // *******************************************************************
        // ****** atomic_partial_lowdin_dipoles_in_std_frame *****************
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_lowdin_dipoles_in_std_frame) {
            const auto bits =
                el_stat_prop::atomic_partial_lowdin_dipoles_bits_in_std_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 3u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic_partial_lowdin_dipoles (in std-frame) [total, "
                "electrons contribution]",
                value_electrons,
                mfi_p());
        }

        // *******************************************************************
        // ****** atomic_partial_lowdin_dipoles_in_inp_frame *****************
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_lowdin_dipoles_in_inp_frame) {
            const auto bits =
                el_stat_prop::atomic_partial_lowdin_dipoles_bits_in_inp_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 3u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-lowdin-dipoles (in inp-frame) [total, "
                "electrons contribution]",
                value_electrons,
                mfi_p());
            if (input_data.extra_output.pimuel)
                value_electrons.t().eval().save(
                    config.job_name() + ".lowdin.mat_p0", arma::raw_ascii);
        }

        // *******************************************************************
        // ****** atomic_partial_mulliken_quadrupoles_in_std_frame ***********
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_mulliken_quadrupoles_in_std_frame) {
            const auto bits = el_stat_prop::
                atomic_partial_mulliken_quadrupoles_bits_in_std_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 6u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-quadrupoles (raw, in std-frame) "
                "[total, electrons contribution]",
                value_electrons,
                mfi_raw_Q());
            arma::mat traceless = value_electrons;
            traceless.each_col([](arma::vec& Q) {
                Q = el_stat_prop::
                    transform_raw_quadrupole_into_traceless_quadupole(Q);
            });
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-quadrupoles (traceless, in std-frame) "
                "[total, electrons contribution]",
                traceless,
                mfi_traceless_Q());
        }

        // *******************************************************************
        // ****** atomic_partial_mulliken_quadrupoles_in_inp_frame ***********
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_mulliken_quadrupoles_in_inp_frame) {
            const auto bits = el_stat_prop::
                atomic_partial_mulliken_quadrupoles_bits_in_inp_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 6u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-quadrupoles (raw, in inp-frame) "
                "[total, electrons contribution]",
                value_electrons,
                mfi_raw_Q());
            arma::mat traceless = value_electrons;
            traceless.each_col([](arma::vec& Q) {
                Q = el_stat_prop::
                    transform_raw_quadrupole_into_traceless_quadupole(Q);
            });
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-mulliken-quadrupoles (traceless, in inp-frame) "
                "[total, electrons contribution]",
                traceless,
                mfi_traceless_Q());
            if (input_data.extra_output.pimuel) {
                value_electrons.t().eval().save(
                    config.job_name() + ".mulliken.mat_rawQ0", arma::raw_ascii);
                traceless.t().eval().save(
                    config.job_name() + ".mulliken.mat_Q0", arma::raw_ascii);
            }
        }

        // *******************************************************************
        // ****** atomic_partial_lowdin_quadrupoles_in_std_frame *************
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_lowdin_quadrupoles_in_std_frame) {
            const auto bits = el_stat_prop::
                atomic_partial_lowdin_quadrupoles_bits_in_std_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 6u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-lowdin-quadrupoles (raw, in std-frame) [total, "
                "electrons contribution]",
                value_electrons,
                mfi_raw_Q());
            arma::mat traceless = value_electrons;
            traceless.each_col([](arma::vec& Q) {
                Q = el_stat_prop::
                    transform_raw_quadrupole_into_traceless_quadupole(Q);
            });
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-lowdin-quadrupoles (traceless, in std-frame) "
                "[total, electrons contribution]",
                traceless,
                mfi_traceless_Q());
        }

        // *******************************************************************
        // ****** atomic_partial_lowdin_quadrupoles_in_inp_frame *************
        // *******************************************************************
        if (input_data.properties.electric
                .atomic_partial_lowdin_quadrupoles_in_inp_frame) {
            const auto bits = el_stat_prop::
                atomic_partial_lowdin_quadrupoles_bits_in_inp_frame(
                    el_stat_prop_system);
            const auto values =
                el_stat_prop::transform_bit_collection_to_values(bits.begin(),
                                                                 bits.end());
            const arma::mat value_electrons(
                values.value_electron().memptr(), 6u, n_atoms);
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-lowdin-quadrupoles (raw, in inp-frame) [total, "
                "electrons contribution]",
                value_electrons,
                mfi_raw_Q());
            arma::mat traceless = value_electrons;
            traceless.each_col([](arma::vec& Q) {
                Q = el_stat_prop::
                    transform_raw_quadrupole_into_traceless_quadupole(Q);
            });
            io::Log::instance().write(
                io::Logger::TERSE,
                "atomic-partial-lowdin-quadrupoles (traceless, in inp-frame) "
                "[total, electrons contribution]",
                traceless,
                mfi_traceless_Q());
            if (input_data.extra_output.pimuel) {
                traceless.t().eval().save(config.job_name() + ".lowdin.mat_Q0",
                                          arma::raw_ascii);
                value_electrons.t().eval().save(
                    config.job_name() + ".lowdin.mat_rawQ0", arma::raw_ascii);
            }
        }

        // *******************************************************************
        // ****** polarizability *********************************************
        // *******************************************************************
        if (input_data.properties.electric.polarizability) {
            const auto bits =
                el_stat_prop::dipole_bits_in_inp_frame(el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
                const arma::mat hessian =
                    cphf::calculate_sos_hessian_given_collectionOf_HperturbAOs(
                        system,
                        free_scf_C_alpha,
                        free_scf_C_beta,
                        free_scf_mo_energies_alpha,
                        free_scf_mo_energies_beta,
                        collection_of_electron_operator);
                const arma::mat polarizability = -hessian;
                io::Log::instance().write(
                    io::Logger::TERSE,
                    "polarizability-in-sos-approximation (in inp-frame)",
                    polarizability);
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
                const auto collection_of_DDE_over_DxDkappa =
                    cphf::transform_HperturbAO_to_DDE_over_DxDkappa(
                        collection_of_electron_operator.begin(),
                        collection_of_electron_operator.end(),
                        free_scf_C_alpha,
                        free_scf_C_beta,
                        Nocc_alpha,
                        Nocc_beta);
                auto cphf_linearResponse = cphf::make_CPHF_linearResponse(
                    system, scf, two_e_ie_factory);
                cphf::CPHF_Hessian cphf_hessian(*cphf_linearResponse);
                const arma::mat hessian =
                    cphf_hessian.calculate_CPHF_Hessian_given_DDE(
                        collection_of_DDE_over_DxDkappa);
                const arma::mat polarizability = -hessian;
                io::Log::instance().write(io::Logger::TERSE,
                                          "polarizability (in inp-frame)",
                                          polarizability);
            }
        }

        // *******************************************************************
        // ****** atom_atom_N_mulliken ***************************************
        // *******************************************************************
        if (input_data.properties.electric.atom_atom_N_mulliken) {
            const auto bits =
                el_stat_prop::atomic_partial_mulliken_charges_bits(
                    el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
            }
        }

        // *******************************************************************
        // ****** atom_atom_N_lowdin *****************************************
        // *******************************************************************
        if (input_data.properties.electric.atom_atom_N_lowdin) {
            const auto bits = el_stat_prop::atomic_partial_lowdin_charges_bits(
                el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
            }
        }

        // *******************************************************************
        // ****** atom_atom_4N_mulliken **************************************
        // *******************************************************************
        if (input_data.properties.electric.atom_atom_4N_mulliken) {
            const auto bits = el_stat_prop::bits_for_pi4N_mulliken_in_inp_frame(
                el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
                // std::string filenamePi_SOS = job_name +
                // "_mulliken_SOS.mat_pi4N";
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
                // std::string filenamePi = job_name + "_mulliken.mat_pi4N";
            }
        }

        // *******************************************************************
        // ****** atom_atom_4N_lowdin ****************************************
        // *******************************************************************
        if (input_data.properties.electric.atom_atom_4N_lowdin) {
            const auto bits = el_stat_prop::bits_for_pi4N_lowdin_in_inp_frame(
                el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
                // std::string filenamePi_SOS = job_name +
                // "_lowdin_SOS.mat_pi4N";
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
                // std::string filenamePi = job_name + "_lowdin.mat_pi4N";
            }
        }

        // *******************************************************************
        // ****** atom_atom_10N_mulliken *************************************
        // *******************************************************************
        if (input_data.properties.electric.atom_atom_10N_mulliken) {
            const auto bits =
                el_stat_prop::bits_for_pi10N_mulliken_in_inp_frame(
                    el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
                const arma::mat hessian =
                    cphf::calculate_sos_hessian_given_collectionOf_HperturbAOs(
                        system,
                        free_scf_C_alpha,
                        free_scf_C_beta,
                        free_scf_mo_energies_alpha,
                        free_scf_mo_energies_beta,
                        collection_of_electron_operator);
                io::Log::instance().write(io::Logger::TERSE,
                                          "mulliken-pi10N-in-sos-approximation "
                                          "matrix (in inp-frame) ",
                                          hessian);
                if (input_data.extra_output.pimuel)
                    hessian.save(config.job_name() + ".mulliken.sos.mat_pi10N",
                                 arma::raw_ascii);
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
                const auto collection_of_DDE_over_DxDkappa =
                    cphf::transform_HperturbAO_to_DDE_over_DxDkappa(
                        collection_of_electron_operator.begin(),
                        collection_of_electron_operator.end(),
                        free_scf_C_alpha,
                        free_scf_C_beta,
                        Nocc_alpha,
                        Nocc_beta);
                auto cphf_linearResponse = cphf::make_CPHF_linearResponse(
                    system, scf, two_e_ie_factory);
                cphf::CPHF_Hessian cphf_hessian(*cphf_linearResponse);
                const arma::mat hessian =
                    cphf_hessian.calculate_CPHF_Hessian_given_DDE(
                        collection_of_DDE_over_DxDkappa);
                io::Log::instance().write(
                    io::Logger::TERSE,
                    "mulliken-pi10N matrix (in inp-frame) ",
                    hessian);
                if (input_data.extra_output.pimuel)
                    hessian.save(config.job_name() + ".mulliken.mat_pi10N",
                                 arma::raw_ascii);
            }
        }

        // *******************************************************************
        // ******* atom_atom_10N_lowdin  *************************************
        // *******************************************************************
        if (input_data.properties.electric.atom_atom_10N_lowdin) {
            const auto bits = el_stat_prop::bits_for_pi10N_lowdin_in_inp_frame(
                el_stat_prop_system);
            const auto collection_of_electron_operator =
                el_stat_prop::transform_bit_collection_to_electron_operators(
                    bits.begin(), bits.end());
            {
                //  SOS:
                const arma::mat hessian =
                    cphf::calculate_sos_hessian_given_collectionOf_HperturbAOs(
                        system,
                        free_scf_C_alpha,
                        free_scf_C_beta,
                        free_scf_mo_energies_alpha,
                        free_scf_mo_energies_beta,
                        collection_of_electron_operator);
                io::Log::instance().write(
                    io::Logger::TERSE,
                    "lowdin-pi10N-in-sos-approximation matrix (in inp-frame) ",
                    hessian);
                if (input_data.extra_output.pimuel)
                    hessian.save(config.job_name() + ".lowdin.sos.mat_pi10N",
                                 arma::raw_ascii);
            }
            if (!input_data.properties.electric.only_sos) {
                //  CPHF:
                const auto collection_of_DDE_over_DxDkappa =
                    cphf::transform_HperturbAO_to_DDE_over_DxDkappa(
                        collection_of_electron_operator.begin(),
                        collection_of_electron_operator.end(),
                        free_scf_C_alpha,
                        free_scf_C_beta,
                        Nocc_alpha,
                        Nocc_beta);
                auto cphf_linearResponse = cphf::make_CPHF_linearResponse(
                    system, scf, two_e_ie_factory);
                cphf::CPHF_Hessian cphf_hessian(*cphf_linearResponse);
                const arma::mat hessian =
                    cphf_hessian.calculate_CPHF_Hessian_given_DDE(
                        collection_of_DDE_over_DxDkappa);
                io::Log::instance().write(io::Logger::TERSE,
                                          "lowdin-pi10N matrix (in inp-frame) ",
                                          hessian);
                if (input_data.extra_output.pimuel)
                    hessian.save(config.job_name() + ".lowdin.mat_pi10N",
                                 arma::raw_ascii);
            }
        }

        // *******************************************************************
        // ******* mesh_london ***********************************************
        // *******************************************************************
        if (input_data.extra_output.mesh_london) {
            const unsigned n_occ_alpha = system->no_electrons(core::SPIN_ALPHA);
            const unsigned n_occ_beta = system->no_electrons(core::SPIN_BETA);
            arma::mat c_alpha = scf.mo_coefficients(core::SPIN_ALPHA);
            arma::mat c_beta = scf.mo_coefficients(core::SPIN_BETA);
            arma::vec epsilon_alpha = scf.mo_energies(core::SPIN_ALPHA);
            arma::vec epsilon_beta = scf.mo_energies(core::SPIN_BETA);

            if (input_data.properties.electric.mesh_london_homo_lumo_swap) {
                std::cout << "swap alpha rows!" << std::endl;
                c_alpha.swap_cols(n_occ_alpha - 1, n_occ_alpha);
                epsilon_alpha.swap_rows(n_occ_alpha - 1, n_occ_alpha);
            }

            const arma::span span_occ_alpha = arma::span(0, n_occ_alpha - 1);
            const arma::span span_occ_beta = arma::span(0, n_occ_beta - 1);
            const arma::span span_virt_alpha =
                arma::span(n_occ_alpha, c_alpha.n_cols - 1);
            const arma::span span_virt_beta =
                arma::span(n_occ_beta, c_beta.n_cols - 1);

            {
                const auto bits_p =
                    el_stat_prop::dipole_bits_in_inp_frame(el_stat_prop_system);
                const arma::mat electron_operator_ao_x =
                    bits_p[0]->electron_operator();
                const arma::mat electron_operator_ao_y =
                    bits_p[1]->electron_operator();
                const arma::mat electron_operator_ao_z =
                    bits_p[2]->electron_operator();

                const arma::mat electron_operator_mo_alpha_x =
                    c_alpha.t() * electron_operator_ao_x * c_alpha;
                const arma::mat electron_operator_mo_alpha_y =
                    c_alpha.t() * electron_operator_ao_y * c_alpha;
                const arma::mat electron_operator_mo_alpha_z =
                    c_alpha.t() * electron_operator_ao_z * c_alpha;
                const arma::mat electron_operator_mo_beta_x =
                    c_beta.t() * electron_operator_ao_x * c_beta;
                const arma::mat electron_operator_mo_beta_y =
                    c_beta.t() * electron_operator_ao_y * c_beta;
                const arma::mat electron_operator_mo_beta_z =
                    c_beta.t() * electron_operator_ao_z * c_beta;

                const arma::mat electron_operator_mo_alpha_restricted_x =
                    electron_operator_mo_alpha_x(span_occ_alpha,
                                                 span_virt_alpha);
                const arma::mat electron_operator_mo_alpha_restricted_y =
                    electron_operator_mo_alpha_y(span_occ_alpha,
                                                 span_virt_alpha);
                const arma::mat electron_operator_mo_alpha_restricted_z =
                    electron_operator_mo_alpha_z(span_occ_alpha,
                                                 span_virt_alpha);
                const arma::mat electron_operator_mo_beta_restricted_x =
                    electron_operator_mo_beta_x(span_occ_beta, span_virt_beta);
                const arma::mat electron_operator_mo_beta_restricted_y =
                    electron_operator_mo_beta_y(span_occ_beta, span_virt_beta);
                const arma::mat electron_operator_mo_beta_restricted_z =
                    electron_operator_mo_beta_z(span_occ_beta, span_virt_beta);

                const std::string file_path_x_alpha =
                    config.job_name() + ".px" + ".alpha.mo";
                const std::string file_path_y_alpha =
                    config.job_name() + ".py" + ".alpha.mo";
                const std::string file_path_z_alpha =
                    config.job_name() + ".pz" + ".alpha.mo";
                const std::string file_path_x_beta =
                    config.job_name() + ".px" + ".beta.mo";
                const std::string file_path_y_beta =
                    config.job_name() + ".py" + ".beta.mo";
                const std::string file_path_z_beta =
                    config.job_name() + ".pz" + ".beta.mo";

                electron_operator_mo_alpha_restricted_x.save(file_path_z_alpha,
                                                             arma::arma_ascii);
                electron_operator_mo_alpha_restricted_y.save(file_path_y_alpha,
                                                             arma::arma_ascii);
                electron_operator_mo_alpha_restricted_z.save(file_path_x_alpha,
                                                             arma::arma_ascii);
                electron_operator_mo_beta_restricted_x.save(file_path_z_beta,
                                                            arma::arma_ascii);
                electron_operator_mo_beta_restricted_y.save(file_path_y_beta,
                                                            arma::arma_ascii);
                electron_operator_mo_beta_restricted_z.save(file_path_x_beta,
                                                            arma::arma_ascii);
            }

            const auto bits_q =
                el_stat_prop::atomic_partial_lowdin_charges_bits(
                    el_stat_prop_system);
            const auto bits_p =
                el_stat_prop::atomic_partial_lowdin_dipoles_bits_in_inp_frame(
                    el_stat_prop_system);
            const auto bits_Q = el_stat_prop::
                atomic_partial_lowdin_quadrupoles_bits_in_inp_frame(
                    el_stat_prop_system);

            for (unsigned atom = 0; atom < el_stat_prop_system.n_atoms();
                 atom++) {
                {
                    const arma::mat electron_operator_ao =
                        bits_q[atom]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".q_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".q_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_p[3 * atom + 0]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".px_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".px_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_p[3 * atom + 1]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".py_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".py_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_p[3 * atom + 2]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".pz_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".pz_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_Q[6 * atom + 0]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".Qxx_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".Qxx_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_Q[6 * atom + 1]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".Qxy_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".Qxy_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_Q[6 * atom + 2]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".Qxz_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".Qxz_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_Q[6 * atom + 3]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".Qyy_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".Qyy_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_Q[6 * atom + 4]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".Qyz_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".Qyz_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::mat electron_operator_ao =
                        bits_Q[6 * atom + 5]->electron_operator();
                    const arma::mat electron_operator_mo_alpha =
                        c_alpha.t() * electron_operator_ao * c_alpha;
                    const arma::mat electron_operator_mo_alpha_restricted =
                        electron_operator_mo_alpha(span_occ_alpha,
                                                   span_virt_alpha);
                    const arma::mat electron_operator_mo_beta =
                        c_beta.t() * electron_operator_ao * c_beta;
                    const arma::mat electron_operator_mo_beta_restricted =
                        electron_operator_mo_beta(span_occ_beta,
                                                  span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".Qzz_" + std::to_string(atom) +
                        ".alpha.mo";
                    const std::string file_path_beta =
                        config.job_name() + ".Qzz_" + std::to_string(atom) +
                        ".beta.mo";
                    electron_operator_mo_alpha_restricted.save(
                        file_path_alpha, arma::arma_ascii);
                    electron_operator_mo_beta_restricted.save(file_path_beta,
                                                              arma::arma_ascii);
                }

                {
                    const arma::vec epsilon_alpha_occ =
                        epsilon_alpha(span_occ_alpha);
                    const arma::vec epsilon_beta_occ =
                        epsilon_beta(span_occ_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".epsilon_occ" + ".alpha";
                    const std::string file_path_beta =
                        config.job_name() + ".epsilon_occ" + ".beta";
                    epsilon_alpha_occ.save(file_path_alpha, arma::arma_ascii);
                    epsilon_beta_occ.save(file_path_beta, arma::arma_ascii);
                }
                {
                    const arma::vec epsilon_alpha_virt =
                        epsilon_alpha(span_virt_alpha);
                    const arma::vec epsilon_beta_virt =
                        epsilon_beta(span_virt_beta);
                    const std::string file_path_alpha =
                        config.job_name() + ".epsilon_virt" + ".alpha";
                    const std::string file_path_beta =
                        config.job_name() + ".epsilon_virt" + ".beta";
                    epsilon_alpha_virt.save(file_path_alpha, arma::arma_ascii);
                    epsilon_beta_virt.save(file_path_beta, arma::arma_ascii);
                }

            } // end of: for (unsigned atom = 0; atom <
              // el_stat_prop_system.n_atoms(); atom++)

        } // end of: if ( input_data.extra_output.mesh_london )

    } // end of: void do_el_stat_prop()
}

/*
  input_data.properties.electric.charge
  input_data.properties.electric.dipole_in_std_frame
  input_data.properties.electric.dipole_in_inp_frame
  input_data.properties.electric.quadrupole_in_std_frame
  input_data.properties.electric.quadrupole_in_inp_frame
  input_data.properties.electric.atomic_partial_mulliken_charges
  input_data.properties.electric.atomic_partial_lowdin_charges
  input_data.properties.electric.atomic_partial_mulliken_dipoles_in_std_frame
  input_data.properties.electric.atomic_partial_mulliken_dipoles_in_inp_frame
  input_data.properties.electric.atomic_partial_lowdin_dipoles_in_std_frame
  input_data.properties.electric.atomic_partial_lowdin_dipoles_in_inp_frame
  input_data.properties.electric.atomic_partial_mulliken_quadrupoles_in_std_frame
  input_data.properties.electric.atomic_partial_mulliken_quadrupoles_in_inp_frame
  input_data.properties.electric.atomic_partial_lowdin_quadrupoles_in_std_frame
  input_data.properties.electric.atomic_partial_lowdin_quadrupoles_in_inp_frame

  input_data.properties.electric.polarizability
  input_data.properties.electric.atom_atom_N_mulliken
  input_data.properties.electric.atom_atom_N_lowdin
  input_data.properties.electric.atom_atom_4N_mulliken
  input_data.properties.electric.atom_atom_4N_lowdin
  input_data.properties.electric.atom_atom_10N_mulliken
  input_data.properties.electric.atom_atom_10N_lowdin
*/
