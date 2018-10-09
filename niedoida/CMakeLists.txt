# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_executable (niedoida
    src/parse_input.cpp
    src/check_input.cpp
    src/config.cpp
    src/create_convergence_accelerator_factory.cpp
    src/create_dft_method.cpp
    src/create_fm_gen_factory.cpp
    src/create_grid_factory.cpp
    src/create_initial_guess_factory.cpp
    src/create_occupations_factory.cpp
    src/create_one_e_ie_factory.cpp
    src/create_poisson_two_e_ie_factory.cpp
    src/create_quasi_two_e_ie_factory.cpp
    src/create_scf_factory.cpp
    src/create_system.cpp
    src/create_two_e_ie_factory.cpp
    src/create_xc_ie_factory.cpp
    src/do_scf.cpp
    src/do_el_stat_prop.cpp
    src/do_td.cpp
    src/do_posthf.cpp
    src/misc.cpp
    src/niedoida.cpp
    src/orthonormalize_basis.cpp
    src/print_basis_set.cpp
    src/print_job_info.cpp
    src/print_bond_order_analysis.cpp
    src/print_population_analysis.cpp
    src/single_point.cpp
    src/update_symmetry_info.cpp
    src/update_coords.cpp
    src/evaluate_gradient.cpp
    src/deep_copy.cpp
    src/geometry_optimization.cpp
    src/monitor.cpp)

target_include_directories (niedoida PRIVATE include ../yaml_inputter/include)

if (${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set (NIEDOIDA_EXTRA_LIBS dl rt)
endif ()

if (WIN32)
    set (NIEDOIDA_EXTRA_LIBS shlwapi)
endif ()

target_link_libraries (niedoida
    io_kit
    misc_kit
    core_kit
    property_kit
    compat_kit
    symmetry_kit
    grid_kit
    gto_kit
    semi_empirical_kit
    scf_kit
    el_stat_prop_kit
    td_kit
    xc_kit
    posthf_kit
    ${Boost_LIBRARIES}
    ${PETSC_LIBRARY}
    ${MPI_LIBRARIES}
    ${LA_LIBRARIES}
    ${YAML_CPP_LIBRARY}
    ${OPENSSL_LIBRARIES}
    ${NIEDOIDA_EXTRA_LIBS})

target_compile_definitions(niedoida PRIVATE -DNIEDOIDA_VERSION="${PROJECT_VERSION}")

install (TARGETS niedoida RUNTIME DESTINATION bin)