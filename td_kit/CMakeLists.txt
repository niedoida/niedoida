# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/td_kit/cis_gradient.hpp
    include/td_kit/cis.hpp
    include/td_kit/dressed_cis.hpp
    include/td_kit/dress.hpp
    include/td_kit/hybrid_rpa.hpp
    include/td_kit/mo_integral.hpp
    include/td_kit/nto.hpp
    include/td_kit/pseudo_fock_matrix_generator.hpp
    include/td_kit/restricted_td_factory.hpp
    include/td_kit/restricted_td.hpp
    include/td_kit/td_kit.hpp
    include/td_kit/tdks_dressed_tda.hpp
    include/td_kit/tdks_hybrid_rpa.hpp
    include/td_kit/tdks_rpa.hpp
    include/td_kit/tdks_tda.hpp
    include/td_kit/xc_kernel_generator.hpp)

set (SRCS
    src/cis.cpp
    src/dress.cpp
    src/dress_matrix.cpp
    src/dressed_cis.cpp
    src/dressFakeP.cpp
    src/mo_integral.cpp
    src/nto.cpp
    src/restricted_td.cpp
    src/cis_gradient.cpp
    src/sigma_gradient.cpp
    src/d_Fock_oo_vv.cpp
    src/tdks_tda.cpp
    src/tdks_dressed_tda.cpp
    src/xc_multi_kernel_generator.cpp
    src/xc_multi_kernel_generator_factory.cpp)

add_library (td_kit ${SRCS} ${HDRS})


target_include_directories (td_kit PUBLIC include)
target_link_libraries (td_kit gto_kit core_kit misc_kit io_kit)
