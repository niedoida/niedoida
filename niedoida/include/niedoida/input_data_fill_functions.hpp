/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* Header file generated automatically by yaml-inputter-tk-code-generator.
 * The header content is based on the provided input-data-specification file.
 * File generation date: Sun Apr 22 16:57:13 2018
 * WARNING: Do not modify this file!
 * (Every change will be overridden during the next compilation.)
 */

#ifndef INPUT_DATA_FILL_FUNCTIONS_HPP
#define INPUT_DATA_FILL_FUNCTIONS_HPP

#include<set> // set used in check-stray-fields block
#include<yaml_inputter/templated_filler.hpp>
#include<niedoida/input_data_yaml_conversions.hpp> // user request header

namespace niedoida {
    template<class... Ts>
    void fill(InputData::Limits& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.cpu_time).fill_optional_scalar(std::forward<Ts>(keys)..., "cpu_time");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"cpu_time"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::AtomInfo& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::ChargeInfo& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::FragmentInfo& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.label).fill_optional_scalar(std::forward<Ts>(keys)..., "label");
        {
            std::size_t size = filler.optional_sequence_size("atoms");
            instance.atoms.resize(size);
            for(std::size_t index = 0; index < size; index++) {
                filler.target(instance.atoms[index]).fill_optional_scalar(std::forward<Ts>(keys)..., "atoms", index);
            }
        }
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"label", "atoms"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::SCFParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.initial_guess).fill_optional_scalar(std::forward<Ts>(keys)..., "initial_guess");
        filler.target(instance.initial_guess_fname).fill_optional_scalar(std::forward<Ts>(keys)..., "initial_guess_filename");
        filler.target(instance.mo_transpose[2]).fill_optional_scalar(std::forward<Ts>(keys)..., "mo_transpose[2]");
        filler.target(instance.method).fill_optional_scalar(std::forward<Ts>(keys)..., "method");
        filler.target(instance.incremental).fill_optional_scalar(std::forward<Ts>(keys)..., "incremental");
        filler.target(instance.max_no_iterations).fill_optional_scalar(std::forward<Ts>(keys)..., "max_no_iterations");
        filler.target(instance.energy_threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "energy_threshold");
        filler.target(instance.density_threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "density_threshold");
        filler.target(instance.convergence_accelerator).fill_optional_scalar(std::forward<Ts>(keys)..., "convergence_accelerator");
        filler.target(instance.shift_1).fill_optional_scalar(std::forward<Ts>(keys)..., "shift_1");
        filler.target(instance.shift_2).fill_optional_scalar(std::forward<Ts>(keys)..., "shift_2");
        filler.target(instance.threshold_linear_independence).fill_optional_scalar(std::forward<Ts>(keys)..., "threshold_linear_independence");
        filler.target(instance.occupations).fill_optional_scalar(std::forward<Ts>(keys)..., "occupations");
        filler.target(instance.degeneracy_threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "degeneracy_threshold");
        filler.target(instance.smear).fill_optional_scalar(std::forward<Ts>(keys)..., "smear");
        filler.target(instance.symmetry_level).fill_optional_scalar(std::forward<Ts>(keys)..., "symmetry");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"initial_guess", "initial_guess_filename", "mo_transpose[2]", "method", "incremental", "max_no_iterations", "energy_threshold", "density_threshold", "convergence_accelerator", "shift_1", "shift_2", "threshold_linear_independence", "occupations", "degeneracy_threshold", "smear", "symmetry"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::CDFTParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.population_type).fill_optional_scalar(std::forward<Ts>(keys)..., "population_type");
        filler.target(instance.atomic_weights_alpha).fill_optional(std::forward<Ts>(keys)..., "atomic_weights_alpha");
        filler.target(instance.atomic_weights_beta).fill_optional(std::forward<Ts>(keys)..., "atomic_weights_beta");
        filler.target(instance.constrained_value).fill_optional_scalar(std::forward<Ts>(keys)..., "constrained_value");
        filler.target(instance.initial_multiplier).fill_optional_scalar(std::forward<Ts>(keys)..., "initial_multiplier");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"population_type", "atomic_weights_alpha", "atomic_weights_beta", "constrained_value", "initial_multiplier"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Units& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.length_unit).fill_optional_scalar(std::forward<Ts>(keys)..., "length");
        filler.target(instance.energy_unit).fill_optional_scalar(std::forward<Ts>(keys)..., "energy");
        filler.target(instance.storage_unit).fill_optional_scalar(std::forward<Ts>(keys)..., "storage");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"length", "energy", "storage"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::IntegrationParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.engine).fill_optional_scalar(std::forward<Ts>(keys)..., "engine");
        filler.target(instance.threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "threshold");
        filler.target(instance.cache_size).fill_optional_scalar(std::forward<Ts>(keys)..., "cache_size");
        filler.target(instance.aux_cache_size).fill_optional_scalar(std::forward<Ts>(keys)..., "aux_cache_size");
        filler.target(instance.storage).fill_optional_scalar(std::forward<Ts>(keys)..., "storage");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"engine", "threshold", "cache_size", "aux_cache_size", "storage"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::MollerPlessetParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.order).fill_optional_scalar(std::forward<Ts>(keys)..., "order");
        filler.target(instance.energy_only).fill_optional_scalar(std::forward<Ts>(keys)..., "energy_only");
        filler.target(instance.dipole_moment).fill_optional_scalar(std::forward<Ts>(keys)..., "dipole_moment");
        filler.target(instance.degeneracy_corrected).fill_optional_scalar(std::forward<Ts>(keys)..., "degeneracy_corrected");
        filler.target(instance.memory_pool).fill_optional_scalar(std::forward<Ts>(keys)..., "memory_pool");
        filler.target(instance.no_frozen).fill_optional_scalar(std::forward<Ts>(keys)..., "no_frozen");
        filler.target(instance.no_deleted).fill_optional_scalar(std::forward<Ts>(keys)..., "no_deleted");
        filler.target(instance.no_frozen_beta).fill_optional_scalar(std::forward<Ts>(keys)..., "no_frozen_beta");
        filler.target(instance.no_deleted_beta).fill_optional_scalar(std::forward<Ts>(keys)..., "no_deleted_beta");
        filler.target(instance.type).fill_optional_scalar(std::forward<Ts>(keys)..., "type");
        filler.target(instance.quadrature_type).fill_optional_scalar(std::forward<Ts>(keys)..., "quadrature_type");
        filler.target(instance.no_points).fill_optional_scalar(std::forward<Ts>(keys)..., "no_points");
        filler.target(instance.eps).fill_optional_scalar(std::forward<Ts>(keys)..., "eps");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"order", "energy_only", "dipole_moment", "degeneracy_corrected", "memory_pool", "no_frozen", "no_deleted", "no_frozen_beta", "no_deleted_beta", "type", "quadrature_type", "no_points", "eps"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::TDParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.type).fill_optional_scalar(std::forward<Ts>(keys)..., "type");
        filler.target(instance.multiplicity).fill_optional_scalar(std::forward<Ts>(keys)..., "multiplicity");
        filler.target(instance.no_frozen).fill_optional_scalar(std::forward<Ts>(keys)..., "no_frozen");
        filler.target(instance.no_deleted).fill_optional_scalar(std::forward<Ts>(keys)..., "no_deleted");
        filler.target(instance.no_states).fill_optional_scalar(std::forward<Ts>(keys)..., "no_states");
        filler.target(instance.no_roots).fill_optional_scalar(std::forward<Ts>(keys)..., "no_roots");
        filler.target(instance.no_iterations).fill_optional_scalar(std::forward<Ts>(keys)..., "no_iterations");
        filler.target(instance.diagonalization_threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "dress_davidson_threshold");
        filler.target(instance.integral_threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "integral_threshold");
        filler.target(instance.dress_no_iterations).fill_optional_scalar(std::forward<Ts>(keys)..., "max_no_dressing_iterations");
        filler.target(instance.dress_no_davidson_iterations).fill_optional_scalar(std::forward<Ts>(keys)..., "max_no_davidson_dressing_iterations");
        filler.target(instance.dress_diagonalization_threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "dress_diagonalization_threshold");
        filler.target(instance.dress_double_config_energy_range).fill_optional_scalar(std::forward<Ts>(keys)..., "dress_delta_energy");
        filler.target(instance.dress_state).fill_optional_scalar(std::forward<Ts>(keys)..., "dress_state");
        filler.target(instance.state_of_interest).fill_optional_scalar(std::forward<Ts>(keys)..., "state_of_interest");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"type", "multiplicity", "no_frozen", "no_deleted", "no_states", "no_roots", "no_iterations", "dress_davidson_threshold", "integral_threshold", "max_no_dressing_iterations", "max_no_davidson_dressing_iterations", "dress_diagonalization_threshold", "dress_delta_energy", "dress_state", "state_of_interest"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Properties::PopulationAnalyses& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.mulliken).fill_optional_scalar(std::forward<Ts>(keys)..., "mulliken");
        filler.target(instance.lowdin).fill_optional_scalar(std::forward<Ts>(keys)..., "lowdin");
        filler.target(instance.hirshfeld).fill_optional_scalar(std::forward<Ts>(keys)..., "hirshfeld");
        filler.target(instance.voronoi).fill_optional_scalar(std::forward<Ts>(keys)..., "voronoi");
        filler.target(instance.bader).fill_optional_scalar(std::forward<Ts>(keys)..., "bader");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"mulliken", "lowdin", "hirshfeld", "voronoi", "bader"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Properties::BondOrderAnalyses& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.mayer).fill_optional_scalar(std::forward<Ts>(keys)..., "mayer");
        filler.target(instance.gopinathan_jug).fill_optional_scalar(std::forward<Ts>(keys)..., "gopinathan_jug");
        filler.target(instance.nalewajski).fill_optional_scalar(std::forward<Ts>(keys)..., "nalewajski");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"mayer", "gopinathan_jug", "nalewajski"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Properties::OrbitalLocalization& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.cholesky).fill_optional_scalar(std::forward<Ts>(keys)..., "cholesky");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"cholesky"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Properties::Electric& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.charge).fill_optional_scalar(std::forward<Ts>(keys)..., "charge");
        filler.target(instance.dipole_in_std_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "dipole_in_std_frame");
        filler.target(instance.dipole_in_inp_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "dipole_in_inp_frame");
        filler.target(instance.quadrupole_in_std_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "quadrupole_in_std_frame");
        filler.target(instance.quadrupole_in_inp_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "quadrupole_in_inp_frame");
        filler.target(instance.atomic_partial_mulliken_charges).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_mulliken_charges");
        filler.target(instance.atomic_partial_lowdin_charges).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_lowdin_charges");
        filler.target(instance.atomic_partial_mulliken_dipoles_in_std_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_mulliken_dipoles_in_std_frame");
        filler.target(instance.atomic_partial_mulliken_dipoles_in_inp_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_mulliken_dipoles_in_inp_frame");
        filler.target(instance.atomic_partial_lowdin_dipoles_in_std_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_lowdin_dipoles_in_std_frame");
        filler.target(instance.atomic_partial_lowdin_dipoles_in_inp_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_lowdin_dipoles_in_inp_frame");
        filler.target(instance.atomic_partial_mulliken_quadrupoles_in_std_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_mulliken_quadrupoles_in_std_frame");
        filler.target(instance.atomic_partial_mulliken_quadrupoles_in_inp_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_mulliken_quadrupoles_in_inp_frame");
        filler.target(instance.atomic_partial_lowdin_quadrupoles_in_std_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_lowdin_quadrupoles_in_std_frame");
        filler.target(instance.atomic_partial_lowdin_quadrupoles_in_inp_frame).fill_optional_scalar(std::forward<Ts>(keys)..., "atomic_partial_lowdin_quadrupoles_in_inp_frame");
        filler.target(instance.polarizability).fill_optional_scalar(std::forward<Ts>(keys)..., "polarizability");
        filler.target(instance.polarizability_DCPHF).fill_optional_scalar(std::forward<Ts>(keys)..., "polarizability_DCPHF");
        filler.target(instance.hyperpolarizability).fill_optional_scalar(std::forward<Ts>(keys)..., "hyperpolarizability");
        filler.target(instance.atom_atom_N_mulliken).fill_optional_scalar(std::forward<Ts>(keys)..., "atom_atom_N_mulliken");
        filler.target(instance.atom_atom_N_lowdin).fill_optional_scalar(std::forward<Ts>(keys)..., "atom_atom_N_lowdin");
        filler.target(instance.atom_atom_4N_mulliken).fill_optional_scalar(std::forward<Ts>(keys)..., "atom_atom_4N_mulliken");
        filler.target(instance.atom_atom_4N_lowdin).fill_optional_scalar(std::forward<Ts>(keys)..., "atom_atom_4N_lowdin");
        filler.target(instance.atom_atom_10N_mulliken).fill_optional_scalar(std::forward<Ts>(keys)..., "atom_atom_10N_mulliken");
        filler.target(instance.atom_atom_10N_lowdin).fill_optional_scalar(std::forward<Ts>(keys)..., "atom_atom_10N_lowdin");
        filler.target(instance.only_sos).fill_optional_scalar(std::forward<Ts>(keys)..., "only_sos");
        filler.target(instance.mesh_london_homo_lumo_swap).fill_optional_scalar(std::forward<Ts>(keys)..., "mesh_london_homo_lumo_swap");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"charge", "dipole_in_std_frame", "dipole_in_inp_frame", "quadrupole_in_std_frame", "quadrupole_in_inp_frame", "atomic_partial_mulliken_charges", "atomic_partial_lowdin_charges", "atomic_partial_mulliken_dipoles_in_std_frame", "atomic_partial_mulliken_dipoles_in_inp_frame", "atomic_partial_lowdin_dipoles_in_std_frame", "atomic_partial_lowdin_dipoles_in_inp_frame", "atomic_partial_mulliken_quadrupoles_in_std_frame", "atomic_partial_mulliken_quadrupoles_in_inp_frame", "atomic_partial_lowdin_quadrupoles_in_std_frame", "atomic_partial_lowdin_quadrupoles_in_inp_frame", "polarizability", "polarizability_DCPHF", "hyperpolarizability", "atom_atom_N_mulliken", "atom_atom_N_lowdin", "atom_atom_4N_mulliken", "atom_atom_4N_lowdin", "atom_atom_10N_mulliken", "atom_atom_10N_lowdin", "only_sos", "mesh_london_homo_lumo_swap"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Properties::Spectroscopic& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.ir_frequencies).fill_optional_scalar(std::forward<Ts>(keys)..., "ir_frequencies");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"ir_frequencies"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::Properties& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        fill(instance.population_analyses, filler, std::forward<Ts>(keys)..., "population_analyses");
        fill(instance.bond_order_analyses, filler, std::forward<Ts>(keys)..., "bond_order_analyses");
        fill(instance.orbital_localization, filler, std::forward<Ts>(keys)..., "orbital_localization");
        fill(instance.electric, filler, std::forward<Ts>(keys)..., "electric");
        fill(instance.spectroscopic, filler, std::forward<Ts>(keys)..., "spectroscopic");
        filler.target(instance.max_multipole_moment_order).fill_optional_scalar(std::forward<Ts>(keys)..., "max_multipole_moment_order");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"population_analyses", "bond_order_analyses", "orbital_localization", "electric", "spectroscopic", "max_multipole_moment_order"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::ExtraOutput& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.output_verbosity).fill_optional_scalar(std::forward<Ts>(keys)..., "output_verbosity");
        filler.target(instance.binary).fill_optional_scalar(std::forward<Ts>(keys)..., "binary");
        filler.target(instance.molden).fill_optional_scalar(std::forward<Ts>(keys)..., "molden");
        filler.target(instance.pimuel).fill_optional_scalar(std::forward<Ts>(keys)..., "pimuel");
        filler.target(instance.mesh_london).fill_optional_scalar(std::forward<Ts>(keys)..., "mesh_london");
        filler.target(instance.dump_scf_matrices).fill_optional_scalar(std::forward<Ts>(keys)..., "dump_scf_matrices");
        filler.target(instance.dump_1e_matrices).fill_optional_scalar(std::forward<Ts>(keys)..., "dump_1e_matrices");
        filler.target(instance.dump_external_charges_potential).fill_optional_scalar(std::forward<Ts>(keys)..., "dump_external_charges_potential");
        filler.target(instance.dump_uef_potential).fill_optional_scalar(std::forward<Ts>(keys)..., "dump_uef_potential");
        filler.target(instance.dump_multipole_matrices).fill_optional_scalar(std::forward<Ts>(keys)..., "dump_multipole_matrices");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"output_verbosity", "binary", "molden", "pimuel", "mesh_london", "dump_scf_matrices", "dump_1e_matrices", "dump_external_charges_potential", "dump_uef_potential", "dump_multipole_matrices"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::GeometryOptimizationParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.method).fill_optional_scalar(std::forward<Ts>(keys)..., "method");
        filler.target(instance.coords).fill_optional_scalar(std::forward<Ts>(keys)..., "coords");
        filler.target(instance.threshold).fill_optional_scalar(std::forward<Ts>(keys)..., "threshold");
        filler.target(instance.max_no_steps).fill_optional_scalar(std::forward<Ts>(keys)..., "max_no_steps");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"method", "coords", "threshold", "max_no_steps"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData::GridParams& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.grid_type).fill_optional_scalar(std::forward<Ts>(keys)..., "type");
        filler.target(instance.angular_grid_type).fill_optional_scalar(std::forward<Ts>(keys)..., "angular");
        filler.target(instance.radial_mapping).fill_optional_scalar(std::forward<Ts>(keys)..., "radial_mapping");
        filler.target(instance.accuracy).fill_optional_scalar(std::forward<Ts>(keys)..., "accuracy");
        filler.target(instance.max_no_radial_points).fill_optional_scalar(std::forward<Ts>(keys)..., "max_no_radial_points");
        filler.target(instance.max_no_angular_points).fill_optional_scalar(std::forward<Ts>(keys)..., "max_no_angular_points");
        filler.target(instance.cache_size).fill_optional_scalar(std::forward<Ts>(keys)..., "cache_size");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"type", "angular", "radial_mapping", "accuracy", "max_no_radial_points", "max_no_angular_points", "cache_size"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
    template<class... Ts>
    void fill(InputData& instance, const yaml_inputter::Filler & filler, Ts&&... keys) {
        filler.target(instance.title).fill_optional_scalar(std::forward<Ts>(keys)..., "title");
        fill(instance.limits, filler, std::forward<Ts>(keys)..., "limits");
        filler.target(instance.run_type).fill_optional_scalar(std::forward<Ts>(keys)..., "run_type");
        filler.target(instance.basis_set_name).fill_optional_scalar(std::forward<Ts>(keys)..., "basis_set");
        filler.target(instance.aux_basis_set_name).fill_optional_scalar(std::forward<Ts>(keys)..., "aux_basis_set");
        filler.target(instance.posthf_aux_basis_set_name).fill_optional_scalar(std::forward<Ts>(keys)..., "posthf_aux_basis_set");
        filler.target(instance.poisson_basis_set_name).fill_optional_scalar(std::forward<Ts>(keys)..., "poisson_basis_set");
        {
            std::size_t size = filler.required_sequence_size("atoms");
            instance.atoms.resize(size);
            for(std::size_t index = 0; index < size; index++) {
                filler.target(instance.atoms[index]).fill_required_scalar(std::forward<Ts>(keys)..., "atoms", index);
            }
        }
        {
            std::size_t size = filler.optional_sequence_size("external_charges");
            instance.ext_chrgs.resize(size);
            for(std::size_t index = 0; index < size; index++) {
                filler.target(instance.ext_chrgs[index]).fill_optional_scalar(std::forward<Ts>(keys)..., "external_charges", index);
            }
        }
        {
            std::size_t size = filler.optional_sequence_size("fragments");
            instance.fragments.resize(size);
            for(std::size_t index = 0; index < size; index++) {
                fill(instance.fragments[index], filler, std::forward<Ts>(keys)..., "fragments", index);
            }
        }
        filler.target(instance.charge).fill_optional_scalar(std::forward<Ts>(keys)..., "charge");
        filler.target(instance.multiplicity).fill_optional_scalar(std::forward<Ts>(keys)..., "multiplicity");
        filler.target(instance.external_electric_field).fill_optional(std::forward<Ts>(keys)..., "external_electric_field");
        filler.target(instance.tol_dist).fill_optional_scalar(std::forward<Ts>(keys)..., "tol_dist");
        fill(instance.scf_params, filler, std::forward<Ts>(keys)..., "scf");
        fill(instance.cdft_params, filler, std::forward<Ts>(keys)..., "cdft");
        fill(instance.units, filler, std::forward<Ts>(keys)..., "units");
        fill(instance.integration_params, filler, std::forward<Ts>(keys)..., "integration_params");
        filler.target(instance.theory).fill_optional_scalar(std::forward<Ts>(keys)..., "theory");
        filler.target(instance.dispersion_correction).fill_optional_scalar(std::forward<Ts>(keys)..., "dispersion");
        fill(instance.moller_plesset_params, filler, std::forward<Ts>(keys)..., "moller_plesset");
        fill(instance.td_params, filler, std::forward<Ts>(keys)..., "td");
        fill(instance.properties, filler, std::forward<Ts>(keys)..., "properties");
        fill(instance.extra_output, filler, std::forward<Ts>(keys)..., "output");
        fill(instance.geometry_optimization_params, filler, std::forward<Ts>(keys)..., "geometry_optimization");
        filler.target(instance.symmetry_group).fill_optional_scalar(std::forward<Ts>(keys)..., "symmetry_group");
        fill(instance.grid_params, filler, std::forward<Ts>(keys)..., "grid");
        filler.target(instance.use_input_coords).fill_optional_scalar(std::forward<Ts>(keys)..., "use_input_coords");
        {  // check-stray-fields block
            std::set<std::string> correct_fields = {"title", "limits", "run_type", "basis_set", "aux_basis_set", "posthf_aux_basis_set", "poisson_basis_set", "atoms", "external_charges", "fragments", "charge", "multiplicity", "external_electric_field", "tol_dist", "scf", "cdft", "units", "integration_params", "theory", "dispersion", "moller_plesset", "td", "properties", "output", "geometry_optimization", "symmetry_group", "grid", "use_input_coords"};
            filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);
        } // end of check-stray-fields block
    } // end of fill function
    
} // end of namespace niedoida
#endif // end of #ifndef INPUT_DATA_FILL_FUNCTIONS_HPP
