# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

cmake_minimum_required (VERSION 3.12)

project (NIEDOIDA VERSION 18.10 DESCRIPTION "General-purpose quantum-chemical and microelectrostatic package" HOMEPAGE_URL http://niedoida.org LANGUAGES CXX)

option (NIEDOIDA_ENABLE_USER_DOCS "generate user documentation" OFF)
option (NIEDOIDA_ENABLE_DEV_DOCS "generate developer documentation" OFF)
option (NIEDOIDA_GENERATE_XC_FUNCTIONALS "re-generate xc functionals" OFF)

set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set (CMAKE_CXX_STANDARD 11)

if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU" OR ${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang" OR ${CMAKE_CXX_COMPILER_ID} STREQUAL "AppleClang")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -Wno-unknown-pragmas -pthread -ffast-math")
    add_definitions (-DNIEDOIDA_RESTRICT=__restrict__)
    if (${CMAKE_CXX_COMPILER_ID} STREQUAL "AppleClang")
        add_definitions (-DBOOST_STACKTRACE_GNU_SOURCE_NOT_REQUIRED)
    endif ()
elseif (${MSVC})
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /fp:fast /wd4068 /wd4244 /wd4267 /EHs")
    add_definitions (-DNIEDOIDA_RESTRICT=__restrict -D_USE_MATH_DEFINES -DARMA_DONT_PRINT_CXX11_WARNING -D_SCL_SECURE_NO_WARNINGS -DBOOST_ALL_NO_LIB)
endif ()

if (NOT WIN32)
    find_package (OpenSSL REQUIRED)
endif ()

set (EXTERNAL_PACKAGES_ROOT "${CMAKE_SOURCE_DIR}/external_packages")

if (NOT WIN32)
    include (external_packages/share/Armadillo/CMake/ArmadilloConfig.cmake)
    get_target_property(ARMADILLO_DEPENDENCIES armadillo INTERFACE_LINK_LIBRARIES)
    if (NOT APPLE)
        list (APPEND ARMADILLO_DEPENDENCIES gfortran)
    endif ()
    set (LA_LIBRARIES ${ARMADILLO_LIBRARIES} ${ARMADILLO_DEPENDENCIES})
else ()
	find_library (ARMADILLO_LIBRARY armadillo PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
    find_library (F77BLAS_LIBRARY libf2cblas PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
    find_library (LAPACK_LIBRARY libf2clapack PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
	set (LA_LIBRARIES "${ARMADILLO_LIBRARY}" "${LAPACK_LIBRARY}" "${F77BLAS_LIBRARY}")
endif ()


if (WIN32)
    find_package (MPI)
    include_directories (${MPI_INCLUDE_PATH})
else ()
    find_library (MPI_LIBRARIES mpi PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
    if (APPLE)
        find_library (PMPI_LIB pmpi PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
        list (APPEND MPI_LIBRARIES ${PMPI_LIB})
    endif ()
endif ()

if (NOT WIN32)
    find_library (PETSC_LIBRARY petsc PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
    find_library (YAML_CPP_LIBRARY yaml-cpp PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
else ()
    find_library (PETSC_LIBRARY libpetsc PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
    find_library (YAML_CPP_LIBRARY libyaml-cppmd PATHS "${EXTERNAL_PACKAGES_ROOT}/lib" NO_DEFAULT_PATH)
endif ()


set (BOOST_ROOT "${EXTERNAL_PACKAGES_ROOT}")
set (Boost_NO_SYSTEM_PATHS   ON)
set (Boost_USE_STATIC_LIBS   ON)
set (Boost_USE_MULTITHREADED ON)
find_package(Boost REQUIRED filesystem mpi program_options thread timer system unit_test_framework regex)

include_directories (BEFORE SYSTEM "${EXTERNAL_PACKAGES_ROOT}/include")

find_program (YACAS yacas REQUIRED PATHS "${EXTERNAL_PACKAGES_ROOT}/bin" NO_DEFAULT_PATH)

enable_testing()

add_subdirectory (docs)
add_subdirectory (io_kit)
add_subdirectory (misc_kit)
add_subdirectory (compat_kit)
add_subdirectory (gto_kit)
add_subdirectory (gto_d1_kit)
#add_subdirectory (gto_d2_kit)
add_subdirectory (symmetry_kit)
add_subdirectory (core_kit)
add_subdirectory (property_kit)
add_subdirectory (semi_empirical_kit)
add_subdirectory (scf_kit)
add_subdirectory (xc_kit)
add_subdirectory (grid_kit)
add_subdirectory (td_kit)
add_subdirectory (posthf_kit)
add_subdirectory (cphf_kit)
add_subdirectory (el_stat_prop_kit)
add_subdirectory (niedoida)

install (DIRECTORY data/ DESTINATION share/niedoida)
#install (PROGRAMS run_all_niedoida_basis_tests run_all_niedoida_methods_tests run_all_niedoida_tests DESTINATION share/niedoida)
install (DIRECTORY tests/niedoida DESTINATION share/niedoida/tests FILES_MATCHING PATTERN "*.inp" PATTERN "*.py")