# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/io_kit/io_kit.hpp
    include/io_kit/logger.hpp
    include/io_kit/log.hpp
    include/io_kit/misc.hpp
    include/io_kit/null_logger.hpp
    include/io_kit/simple_logger.hpp)

set (SRCS
    src/log.cpp
    src/logger.cpp
    src/simple_logger.cpp)

add_library(io_kit ${SRCS} ${HDRS})

target_include_directories(io_kit PUBLIC include)
