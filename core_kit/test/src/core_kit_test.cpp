/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/included/unit_test.hpp>
#include <petsctao.h>
#define BOOST_TEST_IGNORE_NON_ZERO_CHILD_CODE

using namespace boost::unit_test;

test_suite * test_HF_dFock_core();
test_suite * test_DFT_LDA_dFock_core();
test_suite * test_HF_CPHF();
test_suite * test_DFT_LDA_CPKS();
test_suite *

init_unit_test_suite( int argc, char * argv[] ) {

    PetscInitialize( &argc, &argv, 0, 0 );
    test_suite* ts_HF_dFock_core = test_HF_dFock_core();
    framework::master_test_suite().add( ts_HF_dFock_core );

    test_suite* ts_DFT_LDA_dFock_core = test_DFT_LDA_dFock_core();
    framework::master_test_suite().add( ts_DFT_LDA_dFock_core );
    
    test_suite* ts_test_HF_CPHF = test_HF_CPHF();
    framework::master_test_suite().add( ts_test_HF_CPHF );
    
    test_suite* ts_test_DFT_LDA_CPKS = test_DFT_LDA_CPKS();
    framework::master_test_suite().add( ts_test_DFT_LDA_CPKS );
    return 0;
}
