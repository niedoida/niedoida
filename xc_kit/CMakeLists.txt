# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/xc_kit/xc_functional_data.hpp
    include/xc_kit/xc_functional.hpp
    include/xc_kit/xc_functionals.hpp
    include/xc_kit/xc_kit.hpp)

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

list (TRANSFORM fnames PREPEND ${CMAKE_CURRENT_BINARY_DIR}/ OUTPUT_VARIABLE SRCS)
list (TRANSFORM SRCS APPEND .cpp OUTPUT_VARIABLE SRCS)

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

add_library(xc_kit ${SRCS} ${HDRS})

target_include_directories (xc_kit PUBLIC include)
