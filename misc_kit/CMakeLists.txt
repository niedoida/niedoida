# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
	include/misc_kit/blackbox.hpp
	include/misc_kit/dispatcher.hpp
	include/misc_kit/misc_utils.hpp
	include/misc_kit/phys_consts.hpp
	include/misc_kit/quadratures.hpp
	include/misc_kit/special_functions.hpp
	include/misc_kit/tao_utils.hpp
	include/misc_kit/threadpool.hpp)

set (SRCS
	src/davidson_diagonalize.cpp
	src/boys.cpp
	src/gauss_chebyshev_0_quadrature.cpp
	src/gauss_legendre_quadrature.cpp
	src/lambert_w.cpp
	src/simple_quadrature.cpp
	src/static_dispatcher.cpp
	src/threadpool.cpp
	src/trivial_dispatcher.cpp
	src/tao_utils.cpp)

if (WIN32)
	set (SRCS ${SRCS} src/dispatcher.cpp)
else ()
	set (SRCS ${SRCS} src/dispatcher.cpp src/dynamic_dispatcher.cpp src/dynamic_cache_dispatcher.cpp)
endif ()

add_library (misc_kit ${SRCS} ${HDRS})

target_include_directories (misc_kit PUBLIC include)
target_link_libraries (misc_kit io_kit)
