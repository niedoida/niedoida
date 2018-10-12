# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/compat_kit/g94_basis_set_builder.hpp
    include/compat_kit/molcas_basis_set_builder.hpp
    include/compat_kit/molden_file_builder.hpp)

set (SRCS
    src/g94_basis_set_builder.cpp
    src/molcas_basis_set_builder.cpp
    src/molden_file_builder.cpp)

add_library(compat_kit ${SRCS} ${HDRS})

target_include_directories (compat_kit PUBLIC include)
target_link_libraries (compat_kit core_kit)
