# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/semi_empirical_kit/eht.hpp
    include/semi_empirical_kit/semi_empirical_kit.hpp)

set (SRCS
    src/eht_alpha.cpp
    src/eht_hamiltonian.cpp)

add_library (semi_empirical_kit ${SRCS} ${HDRS})

target_include_directories (semi_empirical_kit PUBLIC include)
target_link_libraries (semi_empirical_kit gto_kit core_kit misc_kit io_kit)
