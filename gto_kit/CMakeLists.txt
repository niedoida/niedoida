# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_custom_command (OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/gto_value_engine.cpp
    COMMAND ${YACAS} -pc --patchload ${CMAKE_CURRENT_SOURCE_DIR}/src/gto_value_engine.ey > ${CMAKE_CURRENT_BINARY_DIR}/gto_value_engine.cpp
    MAIN_DEPENDENCY src/gto_value_engine.ey)

add_library(gto_kit
    src/cartesian_to_spherical.cpp
    src/gto_shell_range.cpp
    src/hr1.cpp
    src/hr2.cpp
    src/hr3_1.cpp
    src/hr3_2.cpp
    src/hr3_3.cpp
    src/hr4_1.cpp
    src/hr4_2.cpp
    src/hr4_3.cpp
    src/hr4_4.cpp
    src/os1_efield.cpp
    src/os1_implementation.cpp
    src/os1_integral_engine_factory.cpp
    src/os1_multipole_integral_engine.cpp
    src/os1_one_electron_integral_engine.cpp
    src/os1_poisson_two_electron_integral_engine.cpp
    src/os1_quasi_two_electron_integral_engine.cpp
    src/os1_two_electron_integral_engine.cpp
    src/pseudo_hr.cpp
    src/svr13_14.cpp
    src/svr15_16.cpp
    src/svr1_4.cpp
    src/svr5_8.cpp
    src/svr9_12.cpp
    src/transfer1.cpp
    src/transfer1_1.cpp
    src/transfer2.cpp
    src/transfer2_1.cpp
    src/transfer3.cpp
    src/transfer3_1.cpp
    src/transfer4.cpp
    src/transfer4_1.cpp
    src/transfer4_2.cpp
    src/transfer4_3.cpp
    src/transfer5.cpp
    src/transfer5_1.cpp
    src/transfer5_2.cpp
    src/transfer5_3.cpp
    src/transfer6.cpp
    src/transfer6_1.cpp
    src/transfer6_2.cpp
    src/transfer6_3.cpp
    src/transfer6_4.cpp
    src/transfer7.cpp
    src/transfer7_1.cpp
    src/transfer7_2.cpp
    src/transfer7_3.cpp
    src/transfer7_4.cpp
    src/transfer8.cpp
    src/transfer8_1.cpp
    src/transfer8_2.cpp
    src/transfer8_3.cpp
    src/transfer8_4.cpp
    src/vr13_14.cpp
    src/vr15_16.cpp
    src/vr1_4.cpp
    src/vr5_8.cpp
    src/vr9_12.cpp
    src/xc_integral_engine.cpp
    src/xc_integral_engine_ks_matrix_core_gradient.cpp
    src/xc_integral_engine_factory.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/gto_value_engine.cpp)

target_include_directories (gto_kit PUBLIC include)
target_link_libraries (gto_kit xc_kit core_kit misc_kit grid_kit)
