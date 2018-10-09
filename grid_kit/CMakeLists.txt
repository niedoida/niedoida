# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library(grid_kit
    src/atomic_grid.cpp
    src/emcl_radial_grid.cpp
    src/extended_simple_tg2_grid.cpp
    src/gl_spherical_grid.cpp
    src/grid_factory.cpp
    src/grid_integral_implementation.cpp
    src/grid_orientation.cpp
    src/lindh_radial_grid.cpp
    src/ll_spherical_grid.cpp
    src/log3_radial_grid.cpp
    src/logm_radial_grid.cpp
    src/max_ao_values.cpp
    src/overlap.cpp
    src/product_grid.cpp
    src/pruned_grid.cpp
    src/r_adaptive_product_grid.cpp
    src/rho0_adaptive_grid.cpp
    src/s_adaptive_grid.cpp
    src/sds_adaptive_grid.cpp
    src/simple_grid.cpp
    src/simple_spherical_grid.cpp
    src/ss_partition_function.cpp
    src/vxc0_adaptive_grid.cpp)

target_include_directories (grid_kit PUBLIC include)
target_link_libraries (grid_kit xc_kit core_kit misc_kit)
