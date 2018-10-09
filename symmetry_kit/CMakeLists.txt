# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library (symmetry_kit
    src/align.cpp
    src/canonic.cpp
    src/center_of_mass.cpp
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
    src/find_elements.cpp
    src/find_finite_group.cpp
    src/find_symmetry.cpp
    src/find_symmetry_asymmetric_top.cpp
    src/find_symmetry_atomic.cpp
    src/find_symmetry_linear.cpp
    src/find_symmetry_spheric_top.cpp
    src/find_symmetry_symmetric_top.cpp
    src/finite_symmetry_group.cpp
    src/i_symmetry_group.cpp
    src/ih_symmetry_group.cpp
    src/inertia.cpp
    src/is_subgroup.cpp
    src/largest_abelian_subgroup.cpp
    src/misc.cpp
    src/symmetry_groups.cpp
    src/o_symmetry_group.cpp
    src/oh_symmetry_group.cpp
    src/rotate.cpp
    src/rotation_matrix.cpp
    src/sn_symmetry_group.cpp
    src/symmetrize_coords.cpp
    src/symmetry_info.cpp
    src/symmetry_operation_info.cpp
    src/t_symmetry_group.cpp
    src/td_symmetry_group.cpp
    src/th_symmetry_group.cpp
    src/wigner_matrices.cpp)

target_include_directories (symmetry_kit PUBLIC include)
target_link_libraries (symmetry_kit misc_kit io_kit)
