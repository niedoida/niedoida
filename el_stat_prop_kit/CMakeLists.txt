# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/el_stat_prop_kit/adapter.hpp
    include/el_stat_prop_kit/bit_from_tag.hpp
    include/el_stat_prop_kit/direction_enum.hpp
    include/el_stat_prop_kit/fixed_systems_adapters.hpp
    include/el_stat_prop_kit/fragment_property_bit.hpp
    include/el_stat_prop_kit/fragment_property_tag.hpp
    include/el_stat_prop_kit/fragments_bits.hpp
    include/el_stat_prop_kit/fragments_tags.hpp
    include/el_stat_prop_kit/multiplied_property_bit.hpp
    include/el_stat_prop_kit/multiplied_property_tag.hpp
    include/el_stat_prop_kit/popular_bits_lists.hpp
    include/el_stat_prop_kit/properties_bits.hpp
    include/el_stat_prop_kit/properties_tags.hpp
    include/el_stat_prop_kit/reference_points_bits.hpp
    include/el_stat_prop_kit/reference_points_tags.hpp
    include/el_stat_prop_kit/simple_system_adapter.hpp
    include/el_stat_prop_kit/tag_abstract_base.hpp
    include/el_stat_prop_kit/tag_from_string.hpp
    include/el_stat_prop_kit/transform_raw_quadrupole_into_traceless_quadupole.hpp
    include/el_stat_prop_kit/using_self_type_macro.hpp)

set (SRCS
    src/adapter.cpp
    src/direction_enum.cpp
    src/fixed_systems_adapters.cpp
    src/fragment_property_bit.cpp
    src/fragment_property_tag.cpp
    src/fragments_bits.cpp
    src/fragments_tags.cpp
    src/multiplied_property_bit.cpp
    src/multiplied_property_tag.cpp
    src/popular_bits_lists.cpp
    src/properties_bits.cpp
    src/properties_tags.cpp
    src/reference_points_bits.cpp
    src/reference_points_tags.cpp
    src/simple_system_adapter.cpp
    src/transform_raw_quadrupole_into_traceless_quadupole.cpp)

add_library(el_stat_prop_kit ${SRCS} ${HDRS})
target_include_directories(el_stat_prop_kit PUBLIC include)
target_link_libraries(el_stat_prop_kit PUBLIC ${LA_LIBRARIES} ${Boost_LIBRARIES})
