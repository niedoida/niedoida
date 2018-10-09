# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library (semi_empirical_kit
    src/eht_alpha.cpp
    src/eht_hamiltonian.cpp)

target_include_directories (semi_empirical_kit PUBLIC include)
target_link_libraries (semi_empirical_kit gto_kit core_kit misc_kit io_kit)
