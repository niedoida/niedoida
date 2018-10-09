# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

add_library(io_kit
    src/log.cpp
    src/logger.cpp
    src/simple_logger.cpp)

target_include_directories(io_kit PUBLIC include)
