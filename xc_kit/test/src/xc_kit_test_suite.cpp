/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/unit_test.hpp>

using namespace boost::unit_test_framework;

void check_slater_x_functional();
void check_vwn_c_functional();
void check_vwn_rpa_c_functional();
void check_pbe_x_functional();
void check_pbe_c_functional();
void check_pw91_x_functional();
void check_pw91_c_functional();
void check_pw92_c_functional();
void check_lyp_c_functional();
void check_becke88_x_functional();
void check_b3_x_functional();
void check_b3lyp_xc_functional();
void check_pw91_xc_functional();

void check_slater_x_functional_accuracy();
void check_vwn3_c_functional_accuracy();
void check_vwn_c_functional_accuracy();
void check_pw92_c_functional_accuracy();


test_suite* init_unit_test_suite(int argc, char* argv[])
{
    test_suite* ts = BOOST_TEST_SUITE("xc functionals test suite");

    ts->add(BOOST_TEST_CASE(&check_slater_x_functional));
    ts->add(BOOST_TEST_CASE(&check_vwn_c_functional));
    ts->add(BOOST_TEST_CASE(&check_pw92_c_functional));
    ts->add(BOOST_TEST_CASE(&check_vwn_rpa_c_functional));
    ts->add(BOOST_TEST_CASE(&check_pbe_x_functional));
    ts->add(BOOST_TEST_CASE(&check_pbe_c_functional));
    ts->add(BOOST_TEST_CASE(&check_pw91_x_functional));
    ts->add(BOOST_TEST_CASE(&check_pw91_c_functional));
    ts->add(BOOST_TEST_CASE(&check_pw92_c_functional));
    ts->add(BOOST_TEST_CASE(&check_lyp_c_functional));
    ts->add(BOOST_TEST_CASE(&check_becke88_x_functional));
    ts->add(BOOST_TEST_CASE(&check_b3_x_functional));
    ts->add(BOOST_TEST_CASE(&check_b3lyp_xc_functional));
    ts->add(BOOST_TEST_CASE(&check_pw91_xc_functional));

    ts->add(BOOST_TEST_CASE(&check_slater_x_functional_accuracy));
    ts->add(BOOST_TEST_CASE(&check_vwn3_c_functional_accuracy));
    ts->add(BOOST_TEST_CASE(&check_vwn_c_functional_accuracy));
    ts->add(BOOST_TEST_CASE(&check_pw92_c_functional_accuracy));

    return ts;
}

