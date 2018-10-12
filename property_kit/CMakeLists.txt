# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/property_kit/bader_analysis.hpp
    include/property_kit/bond_order_analysis.hpp
    include/property_kit/gopinathan_jug_analysis.hpp
    include/property_kit/hirshfeld_analysis.hpp
    include/property_kit/lowdin_analysis.hpp
    include/property_kit/mayer_analysis.hpp
    include/property_kit/mulliken_analysis.hpp
    include/property_kit/multipole_moments.hpp
    include/property_kit/nalewajski_analysis.hpp
    include/property_kit/population_analysis.hpp
    include/property_kit/property_kit.hpp
    include/property_kit/voronoi_analysis.hpp)

set (SRCS
    src/multipole_moments.cpp
    src/mulliken_analysis.cpp
    src/lowdin_analysis.cpp
    src/hirshfeld_analysis.cpp
    src/voronoi_analysis.cpp
    src/bader_analysis.cpp
    src/mayer_analysis.cpp
    src/gopinathan_jug_analysis.cpp
    src/nalewajski_analysis.cpp)

add_library (property_kit ${SRCS} ${HDRS})

target_include_directories (property_kit PUBLIC include)
target_link_libraries (property_kit core_kit)
