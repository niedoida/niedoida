# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/cphf_kit/cphf_hessian.hpp
    include/cphf_kit/cphf_linear_response.hpp
    include/cphf_kit/sos_hessian.hpp)

set (SRCS
    src/cphf_linear_response.cpp
    src/cphf_hessian.cpp
    src/sos_hessian.cpp)

add_library(cphf_kit ${SRCS} ${HDRS})

target_include_directories(cphf_kit PUBLIC include)
target_link_libraries (cphf_kit core_kit gto_kit)
