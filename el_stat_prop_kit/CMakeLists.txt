# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

file(GLOB cpp_files src/*.cpp)

add_library(el_stat_prop_kit ${cpp_files})
target_include_directories(el_stat_prop_kit PUBLIC include)
target_link_libraries(el_stat_prop_kit PUBLIC ${LA_LIBRARIES} ${Boost_LIBRARIES})

#add_subdirectory(test)
#add_subdirectory(executable)
