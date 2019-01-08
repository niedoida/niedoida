/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* Header file generated automatically by yaml-inputter-tk-code-generator.
 * The header content is based on the provided input-data-specification file.
 * File generation date: Fri Jan  4 18:05:35 2019
 * WARNING: Do not modify this file!
 * (Every change will be overridden during the next compilation.)
 */

#ifndef INPUT_DATA_HPP
#define INPUT_DATA_HPP

#include<vector> // user request header
#include<string> // user request header
#include<armadillo> // user request header
#include<boost/optional.hpp> // user request header
#include<core_kit/periodic_table.hpp> // user request header
#include<io_kit/logger.hpp> // user request header

namespace niedoida {
    struct InputData {
        enum RunType {
            RUN_TYPE_SINGLE_POINT,
            RUN_TYPE_GEOMETRY_OPTIMIZATION
        };
        enum Theory {
            THEORY_HF,
            THEORY_HFVWN,
            THEORY_SLATER,
            THEORY_SVWN,
            THEORY_SLYP,
            THEORY_BECKE,
            THEORY_BLYP,
            THEORY_PW91,
            THEORY_PBE,
            THEORY_B3LYP,
            THEORY_PBE0,
            THEORY_MPW91,
            THEORY_MPW91LYP,
            THEORY_mB3LYP,
            THEORY_B3LYP5,
            THEORY_B3PW91,
            THEORY_B2PLYP,
            THEORY_mPW2PLYP,
            THEORY_EH
        };
        enum DispersionCorrection {
            DISPERSION_CORRECTION_NONE,
            DISPERSION_CORRECTION_GRIMME_D3
        };
        enum GridType {
            SIMPLE_GRID,
            PRUNED_GRID,
            ANGULAR_S_ADAPTIVE_GRID,
            ANGULAR_RHO0_ADAPTIVE_GRID,
            ANGULAR_VXC0_ADAPTIVE_GRID,
            FULL_RHO0_ADAPTIVE_GRID
        };
        enum AngularGridType {
            GAUSS_LEGENDRE_ANGULAR_GRID,
            LEBEDEV_LAIKOV_ANGULAR_GRID
        };
        enum RadialMapping {
            LOGM_RADIAL_MAPPING,
            KOESTER_RADIAL_MAPPING
        };
        struct Limits {
            unsigned cpu_time=7*24*60*60; // fill-strategy: optional-scalar, yaml-key: "cpu_time"
        };
        struct AtomInfo {
            std::string label; // fill-strategy: none
            const core::Isotope* isotope; // fill-strategy: none
            arma::vec3 coords; // fill-strategy: none
        };
        struct ChargeInfo {
            arma::vec3 coords; // fill-strategy: none
            double charge_value; // fill-strategy: none
        };
        struct FragmentInfo {
            std::string label; // fill-strategy: optional-scalar, yaml-key: "label"
            std::vector<AtomInfo> atoms; // optional-sequence of std::vector<AtomInfo>::value_type atoms[index]; // fill-strategy: optional-scalar, yaml-key: "atoms"->index
        };
        struct SCFParams {
            enum InitialGuess {
                INITIAL_GUESS_HCORE,
                INITIAL_GUESS_FRAGMENTS
            };
            enum Method {
                METHOD_RHF,
                METHOD_ROHF,
                METHOD_UHF
            };
            enum ConvergenceAccelerator {
                NULL_CONVERGENCE_ACCELERATOR,
                DIIS_CONVERGENCE_ACCELERATOR
            };
            enum Occupations {
                OCCUPATIONS_AUFBAU,
                OCCUPATIONS_FERMI,
                OCCUPATIONS_MAXIMUM_OVERLAP
            };
            enum SymmetryLevel {
                SYMMETRY_LEVEL_NONE,
                SYMMETRY_LEVEL_SIMPLE
            };
            InitialGuess initial_guess=INITIAL_GUESS_FRAGMENTS; // fill-strategy: optional-scalar, yaml-key: "initial_guess"
            std::string initial_guess_fname; // fill-strategy: optional-scalar, yaml-key: "initial_guess_filename"
            std::vector<std::pair<unsigned, unsigned>> mo_transpose[2]; // fill-strategy: optional-scalar, yaml-key: "mo_transpose[2]"
            Method method=METHOD_RHF; // fill-strategy: optional-scalar, yaml-key: "method"
            bool incremental=true; // fill-strategy: optional-scalar, yaml-key: "incremental"
            unsigned max_no_iterations=50; // fill-strategy: optional-scalar, yaml-key: "max_no_iterations"
            double energy_threshold=1e-6; // fill-strategy: optional-scalar, yaml-key: "energy_threshold"
            double density_threshold=1e-6; // fill-strategy: optional-scalar, yaml-key: "density_threshold"
            ConvergenceAccelerator convergence_accelerator=DIIS_CONVERGENCE_ACCELERATOR; // fill-strategy: optional-scalar, yaml-key: "convergence_accelerator"
            boost::optional<double> shift_1; // fill-strategy: optional-scalar, yaml-key: "shift_1"
            boost::optional<double> shift_2; // fill-strategy: optional-scalar, yaml-key: "shift_2"
            double threshold_linear_independence=0; // fill-strategy: optional-scalar, yaml-key: "threshold_linear_independence"
            Occupations occupations=OCCUPATIONS_AUFBAU; // fill-strategy: optional-scalar, yaml-key: "occupations"
            boost::optional<double> degeneracy_threshold; // fill-strategy: optional-scalar, yaml-key: "degeneracy_threshold"
            double smear= 0.001; // fill-strategy: optional-scalar, yaml-key: "smear"
            SymmetryLevel symmetry_level=SYMMETRY_LEVEL_NONE; // fill-strategy: optional-scalar, yaml-key: "symmetry"
        };
        struct CDFTParams {
            enum PopulationType {
                CDFT_POPULATION_LOWDIN,
                CDFT_POPULATION_BECKE
            };
            PopulationType population_type; // fill-strategy: optional-scalar, yaml-key: "population_type"
            std::vector<double> atomic_weights_alpha; // fill-strategy: optional, yaml-key: "atomic_weights_alpha"
            std::vector<double> atomic_weights_beta; // fill-strategy: optional, yaml-key: "atomic_weights_beta"
            double constrained_value; // fill-strategy: optional-scalar, yaml-key: "constrained_value"
            double initial_multiplier; // fill-strategy: optional-scalar, yaml-key: "initial_multiplier"
        };
        struct Units {
            enum LengthUnit {
                LENGTH_UNIT_BOHR,
                LENGTH_UNIT_ANGSTROM
            };
            enum EnergyUnit {
                ENERGY_UNIT_HARTREE,
                ENERGY_UNIT_EV
            };
            enum StorageUnit {
                STORAGE_UNIT_BYTE,
                STORAGE_UNIT_KILOBYTE,
                STORAGE_UNIT_MEGABYTE,
                STORAGE_UNIT_GIGABYTE
            };
            LengthUnit length_unit=LENGTH_UNIT_BOHR; // fill-strategy: optional-scalar, yaml-key: "length"
            EnergyUnit energy_unit=ENERGY_UNIT_HARTREE; // fill-strategy: optional-scalar, yaml-key: "energy"
            StorageUnit storage_unit=STORAGE_UNIT_MEGABYTE; // fill-strategy: optional-scalar, yaml-key: "storage"
        };
        struct IntegrationParams {
            enum Engine {
                NAIVE_ENGINE,
                OS1_ENGINE
            };
            enum Storage {
                NO_STORAGE,
                LOCAL_STORAGE,
                SHARED_STORAGE,
                IN_CORE_STORAGE
            };
            Engine engine=OS1_ENGINE; // fill-strategy: optional-scalar, yaml-key: "engine"
            double threshold=1e-12; // fill-strategy: optional-scalar, yaml-key: "threshold"
            std::size_t cache_size=64; // fill-strategy: optional-scalar, yaml-key: "cache_size"
            std::size_t aux_cache_size=64; // fill-strategy: optional-scalar, yaml-key: "aux_cache_size"
            Storage storage=NO_STORAGE; // fill-strategy: optional-scalar, yaml-key: "storage"
        };
        struct MollerPlessetParams {
            enum Type {
                CONVENTIONAL_MP2,
                CONVENTIONAL_MP2_IMP,
                CONVENTIONAL_MP2_MINMEM,
                CONVENTIONAL_MP2_IMP_2,
                LT_MO_MP2,
                LT_AO_MP2,
                LS_LT_AO_MP2,
                LT_CD_DF_MP2
            };
            enum QuadratureType {
                FITTED_SIMPLE_QUADRATURE,
                FITTED_NORMALIZED_QUADRATURE,
                EM_STATIC_QUADRATURE,
                EM_SIMPLE_QUADRATURE,
                EM_NORMALIZED_QUADRATURE
            };
            unsigned order=0; // fill-strategy: optional-scalar, yaml-key: "order"
            bool energy_only=true; // fill-strategy: optional-scalar, yaml-key: "energy_only"
            bool dipole_moment=false; // fill-strategy: optional-scalar, yaml-key: "dipole_moment"
            bool degeneracy_corrected=false; // fill-strategy: optional-scalar, yaml-key: "degeneracy_corrected"
            std::size_t memory_pool=256; // fill-strategy: optional-scalar, yaml-key: "memory_pool"
            unsigned no_frozen=0; // fill-strategy: optional-scalar, yaml-key: "no_frozen"
            unsigned no_deleted=0; // fill-strategy: optional-scalar, yaml-key: "no_deleted"
            unsigned no_frozen_beta=0; // fill-strategy: optional-scalar, yaml-key: "no_frozen_beta"
            unsigned no_deleted_beta=0; // fill-strategy: optional-scalar, yaml-key: "no_deleted_beta"
            Type type=CONVENTIONAL_MP2_IMP_2; // fill-strategy: optional-scalar, yaml-key: "type"
            QuadratureType quadrature_type=EM_STATIC_QUADRATURE; // fill-strategy: optional-scalar, yaml-key: "quadrature_type"
            unsigned no_points=10; // fill-strategy: optional-scalar, yaml-key: "no_points"
            double eps=1e-8; // fill-strategy: optional-scalar, yaml-key: "eps"
        };
        struct TDParams {
            enum Type {
                TD_NONE,
                TDA,
                RPA
            };
            Type type=TDParams::TD_NONE; // fill-strategy: optional-scalar, yaml-key: "type"
            unsigned multiplicity=1<<0|1<<1; // fill-strategy: optional-scalar, yaml-key: "multiplicity"
            unsigned no_frozen=0; // fill-strategy: optional-scalar, yaml-key: "no_frozen"
            unsigned no_deleted=0; // fill-strategy: optional-scalar, yaml-key: "no_deleted"
            unsigned no_states=3; // fill-strategy: optional-scalar, yaml-key: "no_states"
            unsigned no_roots=0; // fill-strategy: optional-scalar, yaml-key: "no_roots"
            unsigned no_iterations=50; // fill-strategy: optional-scalar, yaml-key: "no_iterations"
            double diagonalization_threshold=1e-4; // fill-strategy: optional-scalar, yaml-key: "dress_davidson_threshold"
            double integral_threshold=1e-10; // fill-strategy: optional-scalar, yaml-key: "integral_threshold"
            unsigned dress_no_iterations=0; // fill-strategy: optional-scalar, yaml-key: "max_no_dressing_iterations"
            unsigned dress_no_davidson_iterations=0; // fill-strategy: optional-scalar, yaml-key: "max_no_davidson_dressing_iterations"
            double dress_diagonalization_threshold=1e-3; // fill-strategy: optional-scalar, yaml-key: "dress_diagonalization_threshold"
            double dress_double_config_energy_range=0.2; // fill-strategy: optional-scalar, yaml-key: "dress_delta_energy"
            unsigned dress_state=1; // fill-strategy: optional-scalar, yaml-key: "dress_state"
            unsigned state_of_interest=0; // fill-strategy: optional-scalar, yaml-key: "state_of_interest"
        };
        struct Properties {
            struct PopulationAnalyses {
                bool mulliken=true; // fill-strategy: optional-scalar, yaml-key: "mulliken"
                bool lowdin=true; // fill-strategy: optional-scalar, yaml-key: "lowdin"
                bool hirshfeld=false; // fill-strategy: optional-scalar, yaml-key: "hirshfeld"
                bool voronoi=false; // fill-strategy: optional-scalar, yaml-key: "voronoi"
                bool bader=false; // fill-strategy: optional-scalar, yaml-key: "bader"
            };
            struct BondOrderAnalyses {
                bool mayer=true; // fill-strategy: optional-scalar, yaml-key: "mayer"
                bool gopinathan_jug=true; // fill-strategy: optional-scalar, yaml-key: "gopinathan_jug"
                bool nalewajski=true; // fill-strategy: optional-scalar, yaml-key: "nalewajski"
            };
            struct OrbitalLocalization {
                bool cholesky=false; // fill-strategy: optional-scalar, yaml-key: "cholesky"
            };
            struct Electric {
                bool charge=false; // fill-strategy: optional-scalar, yaml-key: "charge"
                bool dipole_in_std_frame=false; // fill-strategy: optional-scalar, yaml-key: "dipole_in_std_frame"
                bool dipole_in_inp_frame=false; // fill-strategy: optional-scalar, yaml-key: "dipole_in_inp_frame"
                bool quadrupole_in_std_frame=false; // fill-strategy: optional-scalar, yaml-key: "quadrupole_in_std_frame"
                bool quadrupole_in_inp_frame=false; // fill-strategy: optional-scalar, yaml-key: "quadrupole_in_inp_frame"
                bool atomic_partial_mulliken_charges=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_mulliken_charges"
                bool atomic_partial_lowdin_charges=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_lowdin_charges"
                bool atomic_partial_mulliken_dipoles_in_std_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_mulliken_dipoles_in_std_frame"
                bool atomic_partial_mulliken_dipoles_in_inp_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_mulliken_dipoles_in_inp_frame"
                bool atomic_partial_lowdin_dipoles_in_std_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_lowdin_dipoles_in_std_frame"
                bool atomic_partial_lowdin_dipoles_in_inp_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_lowdin_dipoles_in_inp_frame"
                bool atomic_partial_mulliken_quadrupoles_in_std_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_mulliken_quadrupoles_in_std_frame"
                bool atomic_partial_mulliken_quadrupoles_in_inp_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_mulliken_quadrupoles_in_inp_frame"
                bool atomic_partial_lowdin_quadrupoles_in_std_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_lowdin_quadrupoles_in_std_frame"
                bool atomic_partial_lowdin_quadrupoles_in_inp_frame=false; // fill-strategy: optional-scalar, yaml-key: "atomic_partial_lowdin_quadrupoles_in_inp_frame"
                bool polarizability=false; // fill-strategy: optional-scalar, yaml-key: "polarizability"
                bool polarizability_DCPHF=false; // fill-strategy: optional-scalar, yaml-key: "polarizability_DCPHF"
                bool hyperpolarizability=false; // fill-strategy: optional-scalar, yaml-key: "hyperpolarizability"
                bool atom_atom_N_mulliken=false; // fill-strategy: optional-scalar, yaml-key: "atom_atom_N_mulliken"
                bool atom_atom_N_lowdin=false; // fill-strategy: optional-scalar, yaml-key: "atom_atom_N_lowdin"
                bool atom_atom_4N_mulliken=false; // fill-strategy: optional-scalar, yaml-key: "atom_atom_4N_mulliken"
                bool atom_atom_4N_lowdin=false; // fill-strategy: optional-scalar, yaml-key: "atom_atom_4N_lowdin"
                bool atom_atom_10N_mulliken=false; // fill-strategy: optional-scalar, yaml-key: "atom_atom_10N_mulliken"
                bool atom_atom_10N_lowdin=false; // fill-strategy: optional-scalar, yaml-key: "atom_atom_10N_lowdin"
                bool only_sos=false; // fill-strategy: optional-scalar, yaml-key: "only_sos"
                bool mesh_london_homo_lumo_swap=false; // fill-strategy: optional-scalar, yaml-key: "mesh_london_homo_lumo_swap"
            };
            struct Spectroscopic {
                bool ir_frequencies=false; // fill-strategy: optional-scalar, yaml-key: "ir_frequencies"
            };
            PopulationAnalyses population_analyses; // fill-strategy: delegated, yaml-key: "population_analyses"
            BondOrderAnalyses bond_order_analyses; // fill-strategy: delegated, yaml-key: "bond_order_analyses"
            OrbitalLocalization orbital_localization; // fill-strategy: delegated, yaml-key: "orbital_localization"
            Electric electric; // fill-strategy: delegated, yaml-key: "electric"
            Spectroscopic spectroscopic; // fill-strategy: delegated, yaml-key: "spectroscopic"
            unsigned max_multipole_moment_order; // fill-strategy: optional-scalar, yaml-key: "max_multipole_moment_order"
        };
        struct ExtraOutput {
            io::Logger::VerbosityLevel output_verbosity=io::Logger::NORMAL; // fill-strategy: optional-scalar, yaml-key: "output_verbosity"
            bool binary=false; // fill-strategy: optional-scalar, yaml-key: "binary"
            bool molden=false; // fill-strategy: optional-scalar, yaml-key: "molden"
            bool pimuel=false; // fill-strategy: optional-scalar, yaml-key: "pimuel"
            bool mesh_london=false; // fill-strategy: optional-scalar, yaml-key: "mesh_london"
            bool dump_scf_matrices=false; // fill-strategy: optional-scalar, yaml-key: "dump_scf_matrices"
            bool dump_1e_matrices=false; // fill-strategy: optional-scalar, yaml-key: "dump_1e_matrices"
            bool dump_external_charges_potential=false; // fill-strategy: optional-scalar, yaml-key: "dump_external_charges_potential"
            bool dump_uef_potential=false; // fill-strategy: optional-scalar, yaml-key: "dump_uef_potential"
            bool dump_multipole_matrices=false; // fill-strategy: optional-scalar, yaml-key: "dump_multipole_matrices"
        };
        struct GeometryOptimizationParams {
            enum Method {
                LMVM_METHOD,
                NM_METHOD
            };
            enum Coords {
                CARTESIAN_COORDS,
                DELOCALIZED_INTERNAL_COORDS
            };
            Method method=NM_METHOD; // fill-strategy: optional-scalar, yaml-key: "method"
            Coords coords=CARTESIAN_COORDS; // fill-strategy: optional-scalar, yaml-key: "coords"
            double threshold=1e-5; // fill-strategy: optional-scalar, yaml-key: "threshold"
            unsigned max_no_steps=100; // fill-strategy: optional-scalar, yaml-key: "max_no_steps"
        };
        struct GridParams {
            GridType grid_type=ANGULAR_RHO0_ADAPTIVE_GRID; // fill-strategy: optional-scalar, yaml-key: "type"
            AngularGridType angular_grid_type=LEBEDEV_LAIKOV_ANGULAR_GRID; // fill-strategy: optional-scalar, yaml-key: "angular"
            RadialMapping radial_mapping; // fill-strategy: optional-scalar, yaml-key: "radial_mapping"
            double accuracy=1e-6; // fill-strategy: optional-scalar, yaml-key: "accuracy"
            unsigned max_no_radial_points=75; // fill-strategy: optional-scalar, yaml-key: "max_no_radial_points"
            unsigned max_no_angular_points=1500; // fill-strategy: optional-scalar, yaml-key: "max_no_angular_points"
            std::size_t cache_size=64; // fill-strategy: optional-scalar, yaml-key: "cache_size"
        };
        std::string title="untitled"; // fill-strategy: optional-scalar, yaml-key: "title"
        Limits limits; // fill-strategy: delegated, yaml-key: "limits"
        RunType run_type=RUN_TYPE_SINGLE_POINT; // fill-strategy: optional-scalar, yaml-key: "run_type"
        std::string basis_set_name="sto-3g"; // fill-strategy: optional-scalar, yaml-key: "basis_set"
        std::string aux_basis_set_name; // fill-strategy: optional-scalar, yaml-key: "aux_basis_set"
        std::string posthf_aux_basis_set_name; // fill-strategy: optional-scalar, yaml-key: "posthf_aux_basis_set"
        std::string poisson_basis_set_name; // fill-strategy: optional-scalar, yaml-key: "poisson_basis_set"
        std::vector<AtomInfo> atoms; // required-sequence of std::vector<AtomInfo>::value_type atoms[index]; // fill-strategy: required-scalar, yaml-key: "atoms"->index
        std::vector<ChargeInfo> ext_chrgs; // optional-sequence of std::vector<ChargeInfo>::value_type ext_chrgs[index]; // fill-strategy: optional-scalar, yaml-key: "external_charges"->index
        std::vector<FragmentInfo> fragments; // optional-sequence of std::vector<FragmentInfo>::value_type fragments[index]; // fill-strategy: delegated, yaml-key: "fragments"->index
        int charge=0; // fill-strategy: optional-scalar, yaml-key: "charge"
        unsigned multiplicity=1; // fill-strategy: optional-scalar, yaml-key: "multiplicity"
        arma::vec external_electric_field{3, arma::fill::zeros}; // fill-strategy: optional, yaml-key: "external_electric_field"
        double tol_dist=5e-3; // fill-strategy: optional-scalar, yaml-key: "tol_dist"
        SCFParams scf_params; // fill-strategy: delegated, yaml-key: "scf"
        CDFTParams cdft_params; // fill-strategy: delegated, yaml-key: "cdft"
        Units units; // fill-strategy: delegated, yaml-key: "units"
        IntegrationParams integration_params; // fill-strategy: delegated, yaml-key: "integration_params"
        Theory theory=THEORY_HF; // fill-strategy: optional-scalar, yaml-key: "theory"
        DispersionCorrection dispersion_correction=DISPERSION_CORRECTION_NONE; // fill-strategy: optional-scalar, yaml-key: "dispersion"
        MollerPlessetParams moller_plesset_params; // fill-strategy: delegated, yaml-key: "moller_plesset"
        TDParams td_params; // fill-strategy: delegated, yaml-key: "td"
        Properties properties; // fill-strategy: delegated, yaml-key: "properties"
        ExtraOutput extra_output; // fill-strategy: delegated, yaml-key: "output"
        GeometryOptimizationParams geometry_optimization_params; // fill-strategy: delegated, yaml-key: "geometry_optimization"
        std::string symmetry_group; // fill-strategy: optional-scalar, yaml-key: "symmetry_group"
        GridParams grid_params; // fill-strategy: delegated, yaml-key: "grid"
        bool use_input_coords=false; // fill-strategy: optional-scalar, yaml-key: "use_input_coords"
    };
    
} // end of namespace niedoida
#endif // end of #ifndef INPUT_DATA_HPP
