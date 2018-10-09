# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

cmake_minimum_required (VERSION 3.5)

set (CTEST_PROJECT_NAME "gto_d1_kit_test")

include_directories (
                     ${TEST_SOURCE_DIR}/src
                     ${Boost_INCLUDE_DIRS}
                     ${CMAKE_SOURCE_DIR}/include/gto_d1_kit
                     )
add_definitions (-DBOOST_TEST_STATIC_LINK)
add_executable (gto_d1_kit_test src/gto_d1_kit_test.cpp
  src/overlap_test.cpp
  src/kinetic_test.cpp
  src/vne_test.cpp
  src/vee_test.cpp)

add_test (NAME gto_d1_kit_test COMMAND gto_d1_kit_test)

target_link_libraries (gto_d1_kit_test
			gto_d1_kit
                       ${Boost_FILESYSTEM_LIBRARY}
                       ${Boost_SYSTEM_LIBRARY}
                       ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                       )



