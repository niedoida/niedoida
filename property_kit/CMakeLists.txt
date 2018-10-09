# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library (property_kit
    src/multipole_moments.cpp
    src/mulliken_analysis.cpp
    src/lowdin_analysis.cpp
    src/hirshfeld_analysis.cpp
    src/voronoi_analysis.cpp
    src/bader_analysis.cpp
    src/mayer_analysis.cpp
    src/gopinathan_jug_analysis.cpp
    src/nalewajski_analysis.cpp)

target_include_directories (property_kit PUBLIC include)
target_link_libraries (property_kit core_kit)
