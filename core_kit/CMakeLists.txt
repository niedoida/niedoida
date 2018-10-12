# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/core_kit/ao_symmetry.hpp
    include/core_kit/ao_value_engine_factory.hpp
    include/core_kit/ao_value_engine.hpp
    include/core_kit/atom.hpp
    include/core_kit/atomic_fragment.hpp
    include/core_kit/basic_2el_int_prop.hpp
    include/core_kit/basis_set_builder.hpp
    include/core_kit/basis_set.hpp
    include/core_kit/basis_set_info.hpp
    include/core_kit/charge.hpp
    include/core_kit/core_kit.hpp
    include/core_kit/core_utils.hpp
    include/core_kit/dFock.hpp
    include/core_kit/dispersion.hpp
    include/core_kit/efield.hpp
    include/core_kit/factory.hpp
    include/core_kit/fock_matrix_generator_factory.hpp
    include/core_kit/fock_matrix_generator.hpp
    include/core_kit/fragment.hpp
    include/core_kit/grid.hpp
    include/core_kit/hessian_engine.hpp
    include/core_kit/initial_guess_factory.hpp
    include/core_kit/initial_guess.hpp
    include/core_kit/integral_cache.hpp
    include/core_kit/integral_engine_factory.hpp
    include/core_kit/integral_engine.hpp
    include/core_kit/mo_symmetry.hpp
    include/core_kit/occupations_factory.hpp
    include/core_kit/occupations.hpp
    include/core_kit/os1_integral_gradient_engine.hpp
    include/core_kit/periodic_table.hpp
    include/core_kit/promolecule.hpp
    include/core_kit/pseudo_fock_matrix_generator.hpp
    include/core_kit/schwartz_estimator.hpp
    include/core_kit/shell_ACD_index_generator.hpp
    include/core_kit/shell_pair_index_generator.hpp
    include/core_kit/shell_quartet.hpp
    include/core_kit/shell_quartet_index_generator.hpp
    include/core_kit/shell_quartet_petite_list.hpp
    include/core_kit/significant_shell_pairs_generator.hpp
    include/core_kit/significant_shell_quartet_index_generator.hpp
    include/core_kit/spectroscopic_properties.hpp
    include/core_kit/spin.hpp
    include/core_kit/system.hpp)

set (SRCS
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
    src/dF_matrix_generator.cpp)

add_library (core_kit ${SRCS} ${HDRS})

target_include_directories (core_kit PUBLIC include)
#target_link_libraries(core_kit io_kit misc_kit symmetry_kit scf_kit gto_d1_kit gto_d2_kit cphf_kit)
target_link_libraries(core_kit io_kit misc_kit symmetry_kit scf_kit gto_d1_kit cphf_kit)
enable_testing ()
add_subdirectory (test)
