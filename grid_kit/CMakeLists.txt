# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/grid_kit/atomic_grid.hpp
    include/grid_kit/gl_spherical_grid.hpp
    include/grid_kit/grid_factory.hpp
    include/grid_kit/grid_integral_implementation.hpp
    include/grid_kit/grid_kit.hpp
    include/grid_kit/grid_utils.hpp
    include/grid_kit/ll_spherical_grid.hpp
    include/grid_kit/partition_function.hpp
    include/grid_kit/product_grid.hpp
    include/grid_kit/pruned_grid.hpp
    include/grid_kit/r_adaptive_product_grid.hpp
    include/grid_kit/radial_grids.hpp
    include/grid_kit/radial_mapping.hpp
    include/grid_kit/rho0_adaptive_grid.hpp
    include/grid_kit/s_adaptive_grid.hpp
    include/grid_kit/sds_adaptive_grid.hpp
    include/grid_kit/simple_grid.hpp
    include/grid_kit/simple_spherical_grid.hpp
    include/grid_kit/vxc0_adaptive_grid.hpp)

set (SRCS
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

add_library(grid_kit ${SRCS} ${HDRS})

target_include_directories (grid_kit PUBLIC include)
target_link_libraries (grid_kit xc_kit core_kit misc_kit)
