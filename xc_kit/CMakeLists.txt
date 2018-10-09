# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (fnames
    slater_x_functional
    becke88_x_functional
    pw91_x_functional
    mpw91_x_functional
    pbe_x_functional
    revpbe_x_functional
    vwn_c_functional
    vwn3_c_functional
    pw92_c_functional
    lyp_c_functional
    pbe_c_functional
    pw91_c_functional)

execute_process (COMMAND ${YACAS} -d OUTPUT_VARIABLE YACAS_SCRIPTS_PATH OUTPUT_STRIP_TRAILING_WHITESPACE)

if (WIN32)
	set (YACAS_SCRIPTS_PATH "${CMAKE_CURRENT_SOURCE_DIR}\;${YACAS_SCRIPTS_PATH}")
else ()
	set (YACAS_SCRIPTS_PATH "${CMAKE_CURRENT_SOURCE_DIR}:${YACAS_SCRIPTS_PATH}")
endif ()


foreach (_fn ${fnames})
    add_custom_command (OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${_fn}.cpp
        COMMAND ${YACAS} --rootdir ${YACAS_SCRIPTS_PATH} -pc --patchload ${CMAKE_CURRENT_SOURCE_DIR}/src/${_fn}.ey > ${CMAKE_CURRENT_BINARY_DIR}/${_fn}.cpp
        MAIN_DEPENDENCY ${CMAKE_CURRENT_SOURCE_DIR}/src/${_fn}.ey)
endforeach ()

add_library(xc_kit 
    ${CMAKE_CURRENT_BINARY_DIR}/slater_x_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/becke88_x_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/pw91_x_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/mpw91_x_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/pbe_x_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/revpbe_x_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/vwn_c_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/vwn3_c_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/pw92_c_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/lyp_c_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/pbe_c_functional.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/pw91_c_functional.cpp)

target_include_directories (xc_kit PUBLIC include)
