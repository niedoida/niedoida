# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library (core_kit
    src/ao_labels.cpp
    src/ao_symmetry.cpp
    src/atom.cpp
    src/atomic_basis_set.cpp
    src/atomic_fragment.cpp
    src/basis_set.cpp
    src/basis_set_info.cpp
    src/canonical_purification.cpp
    src/combined_jk_matrix_generator.cpp
    src/combined_jk_matrix_generator_core_grad.cpp
    src/core_utils.cpp
    src/denfit_j_matrix_generator.cpp
    src/efield.cpp
    src/fock_matrix_generator_factory.cpp
    src/grimme_d3.cpp
    src/hf_fock_matrix_generator.cpp
    src/hf_fock_matrix_core_gradient_generator.cpp
    src/hybrid_ks_fock_matrix_generator.cpp
    src/initial_guess.cpp
    src/integral_cache.cpp
    src/integral_engine_factory.cpp
    src/mo_symmetry.cpp
    src/occupations.cpp
    src/occupations_factory.cpp
    src/periodic_table.cpp
    src/promolecule.cpp
    src/pseudo_fock_matrix_generator.cpp
    src/pseudo_fock_multi_matrix_generator.cpp
    src/pure_ks_fock_matrix_generator.cpp
    src/pure_ks_fock_matrix_core_gradient_generator.cpp
    src/schwartz_estimator.cpp
    src/shell.cpp
    src/significant_shell_pairs_generator.cpp
    src/simple_symmetry_petite_list.cpp
    src/standard_j_matrix_generator.cpp
    src/standard_j_matrix_generator_core_grad.cpp
    src/standard_k_matrix_generator.cpp
    src/standard_k_matrix_generator_core_grad.cpp
    src/system.cpp
#    src/two_electron_disk_integral_engine.cpp
    src/two_electron_in_core_integral_engine.cpp
    src/two_electron_integral_cache.cpp
    src/os1_integral_gradient_engine.cpp
    src/os1_integral_gradient_engine_kinetic.cpp
    src/os1_integral_gradient_engine_ne.cpp
    src/os1_integral_gradient_engine_overlap.cpp
    src/os1_two_electron_gradient_engine.cpp
    src/HF_energy_gradient.cpp
    src/all_dS_dFock.cpp
    src/energy_hessian_HF.cpp
#    src/hessian_engine.cpp
#    src/integral_hessian_engine_kinetic.cpp
#    src/integral_hessian_engine_ne.cpp
#    src/integral_hessian_engine_overlap.cpp
#    src/two_electron_hessian_engine.cpp
    src/u_matrices_from_cphf.cpp
    src/spectroscopic_properties.cpp
    src/dS_dFock.cpp
    src/dF_matrix_generator.cpp
)

target_include_directories (core_kit PUBLIC include)
#target_link_libraries(core_kit io_kit misc_kit symmetry_kit scf_kit gto_d1_kit gto_d2_kit cphf_kit)
target_link_libraries(core_kit io_kit misc_kit symmetry_kit scf_kit gto_d1_kit cphf_kit)
enable_testing ()
add_subdirectory (test)
