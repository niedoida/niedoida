# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library(compat_kit
    src/g94_basis_set_builder.cpp
    src/molcas_basis_set_builder.cpp
    src/molden_file_builder.cpp)

target_include_directories (compat_kit PUBLIC include)
target_link_libraries (compat_kit core_kit)
