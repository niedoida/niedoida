# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/scf_kit/convergence_accelerator_factory.hpp
    include/scf_kit/convergence_accelerators.hpp
    include/scf_kit/diagonalize_fock_matrix.hpp
    include/scf_kit/rhf.hpp
    include/scf_kit/rohf.hpp
    include/scf_kit/scf_factory.hpp
    include/scf_kit/scf.hpp
    include/scf_kit/scf_kit.hpp
    include/scf_kit/scf_utils.hpp
    include/scf_kit/uhf.hpp)

set (SRCS
    src/density_matrix.cpp
    src/diagonalize_fock_matrix.cpp
    src/diis.cpp
    src/nuclear_repulsion.cpp
    src/null_convergence_accelerator.cpp
    src/rhf.cpp
    src/rohf.cpp
    src/shift_fock_matrix.cpp
    src/uhf.cpp)

add_library (scf_kit ${SRCS} ${HDRS})

target_include_directories (scf_kit PUBLIC include)
target_link_libraries (scf_kit core_kit misc_kit io_kit)
