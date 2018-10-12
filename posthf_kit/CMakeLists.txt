# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set (HDRS
    include/posthf_kit/canonical_mp2.hpp
    include/posthf_kit/localization.hpp
    include/posthf_kit/lt_cd_df_mp2.hpp
    include/posthf_kit/lt_cd_df_poisson_mp2.hpp
    include/posthf_kit/lt_mp2_efield_gradient.hpp
    include/posthf_kit/lt_mp2_efield_hessian.hpp
    include/posthf_kit/lt_mp2.hpp
    include/posthf_kit/lt_mp2_utils.hpp
    include/posthf_kit/mp2_base.hpp
    include/posthf_kit/mp2.hpp
    include/posthf_kit/posthf_kit.hpp)

set (SRCS
    src/df_rhf_mp2.cpp
    src/localization.cpp
    # src/lt_ao_mp2_2eintegrals.cpp
    # src/lt_ao_mp2_base.cpp
    # src/lt_ao_mp2_schwartz_prescreening.cpp
    # src/lt_mp2_density_matrix.cpp
    # src/mp2_basis_structure.cpp 
    src/naive_mp2.cpp
    # src/rhf_ls_lt_ao_mp2.cpp
    # src/rhf_ls_lt_ao_mp2_efield_gradient.cpp
    # src/rhf_lt_ao_mp2.cpp
    # src/rhf_lt_ao_mp2_efield_gradient.cpp
    # src/rhf_lt_ao_mp2_efield_hessian.cpp
    # src/rhf_lt_cd_df_mp2.cpp
    # src/rhf_lt_cd_df_poisson_mp2.cpp
    # src/rhf_lt_mp2.cpp    
    src/rhf_mp2.cpp              
    src/rhf_mp2_imp_2.cpp                     
    src/rhf_mp2_imp.cpp                  
    src/rhf_mp2_minmem.cpp
    src/uhf_mp2_imp_2.cpp)

add_library (posthf_kit ${SRCS} ${HDRS})

target_include_directories (posthf_kit PUBLIC include)
target_link_libraries (posthf_kit scf_kit core_kit misc_kit io_kit gto_kit)
