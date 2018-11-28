# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/symmetry_kit/decomposition.hpp
    include/symmetry_kit/rotation_matrix.hpp
    include/symmetry_kit/symmetry_group.hpp
    include/symmetry_kit/symmetry_info.hpp
    include/symmetry_kit/symmetry_kit.hpp
    include/symmetry_kit/symmetry_operation_info.hpp
    include/symmetry_kit/symmetry_utils.hpp
    include/symmetry_kit/wigner_matrices.hpp)

set (SRCS
    src/ci_symmetry_group.cpp
    src/cn_symmetry_group.cpp
    src/cnh_symmetry_group.cpp
    src/cnv_symmetry_group.cpp
    src/create_perm_rep.cpp
    src/cs_symmetry_group.cpp
    src/decomposition.cpp
    src/dn_symmetry_group.cpp
    src/dnd_symmetry_group.cpp
    src/dnh_symmetry_group.cpp
    src/downgrade_infinite_symm_group.cpp
    src/finite_symmetry_group.cpp
    src/i_symmetry_group.cpp
    src/ih_symmetry_group.cpp
    src/is_subgroup.cpp
    src/largest_abelian_subgroup.cpp
    src/rotation_matrix.cpp
    src/symmetry_groups.cpp
    src/o_symmetry_group.cpp
    src/oh_symmetry_group.cpp
    src/sn_symmetry_group.cpp
    src/symmetrize_coords.cpp
    src/symmetry_info.cpp
    src/symmetry_operation_info.cpp
    src/t_symmetry_group.cpp
    src/td_symmetry_group.cpp
    src/th_symmetry_group.cpp
    src/wigner_matrices.cpp)

add_library (symmetry_kit ${SRCS} ${HDRS})

target_include_directories (symmetry_kit PUBLIC include)
target_link_libraries (symmetry_kit misc_kit io_kit)
