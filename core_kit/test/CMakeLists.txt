# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

cmake_minimum_required (VERSION 3.5)

set (CTEST_PROJECT_NAME "core_kit_test")


include_directories (
    ${TEST_SOURCE_DIR}/src
    ${Boost_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/include/core_kit
    ${CMAKE_SOURCE_DIR}/include/compat_kit
    ${CMAKE_SOURCE_DIR}/include/gto_kit)

add_definitions (-DBOOST_TEST_STATIC_LINK)
add_executable (core_kit_test src/core_kit_test.cpp
    src/HF_dFock_core.cpp
    src/DFT_LDA_dFock_core.cpp
    src/core_test_utils.cpp
    src/test_systems.cpp
    src/test_Fock_Matrices.cpp
    src/HF_cphf_test.cpp
    src/DFT_LDA_cpks_test.cpp)

add_test (NAME core_kit_test COMMAND core_kit_test)

if (${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set (NIEDOIDA_EXTRA_LIBS dl rt)
endif ()

target_link_libraries (core_kit_test
    core_kit
    compat_kit
    gto_kit
    io_kit
    misc_kit
    symmetry_kit
    scf_kit
    gto_d1_kit
    #gto_d2_kit
    cphf_kit
    grid_kit
    semi_empirical_kit
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
