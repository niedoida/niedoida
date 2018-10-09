#!/usr/bin/env python2.4

import sys, os.path


def generate_check(ff, t, fun, name, index):
    if t[0] == name:
        expected = t[2]
        if (not float(expected) == 0):
            ff.write('    BOOST_CHECK_CLOSE(xc.%s, %s, eps);\n' % (index, expected))
        else:
            ff.write('    BOOST_CHECK_SMALL(xc.%s, eps);\n' % index)

def generate_test_routine(functional, fname, lda):
    ff = open('check_%s.cpp' % functional, 'w');
    ff.write(
"""#include <boost/test/floating_point_comparison.hpp>
#include <boost/test/test_tools.hpp>    
#include <boost/test/unit_test.hpp>

#include "xc_kit/xc_functionals.hpp"
    
""");

    subroutine = 'check_%s' % functional
    ff.write('void %s()\n' % subroutine);
    ff.write('{\n')
    ff.write('    const double eps = %s;\n' % epsilon)
    ff.write('    XCFunctionalData xc;\n')
    f = open(fname, 'r')

    for l in f.readlines():
        l = l.strip()
        if l == '':
            continue
    
        t = l.split()
    
        if t[0] == 'rhoa=':
            rhoa = t[1]
            rhob = t[3]
            sigma_aa = t[5]
            sigma_ab = t[7]
            sigma_bb = t[9]
            if (lda):
                ff.write('    xc = %s(%s, %s, 2);\n' % (functional, rhoa, rhob))
            else:
                ff.write('    xc = %s(%s, %s, %s, %s, %s, 2);\n' % (functional, rhoa, rhob, sigma_aa, sigma_ab, sigma_bb))

        generate_check(ff, t, functional, 'zk', 'e')
        generate_check(ff, t, functional, 'vrhoa', 'de_dra')
        generate_check(ff, t, functional, 'vrhob', 'de_drb')
        generate_check(ff, t, functional, 'v2rhoa2', 'd2e_drara')
        generate_check(ff, t, functional, 'v2rhoab', 'd2e_drarb')
        generate_check(ff, t, functional, 'v2rhob2', 'd2e_drbrb')
        generate_check(ff, t, functional, 'vsigmaaa', 'de_dgaa')
        generate_check(ff, t, functional, 'vsigmaab', 'de_dgab')
        generate_check(ff, t, functional, 'vsigmabb', 'de_dgbb')

        generate_check(ff, t, functional, 'v2sigmaaa2', 'd2e_dgaagaa')
        generate_check(ff, t, functional, 'v2sigmaaaab', 'd2e_dgaagab')
        generate_check(ff, t, functional, 'v2sigmaaabb', 'd2e_dgaagbb')
        generate_check(ff, t, functional, 'v2sigmaab2', 'd2e_dgabgab')
        generate_check(ff, t, functional, 'v2sigmaabbb', 'd2e_dgbbgab')
        generate_check(ff, t, functional, 'v2sigmabb2', 'd2e_dgbbgbb')

        generate_check(ff, t, functional, 'v2rhoasigmaaa', 'd2e_dragaa')
        generate_check(ff, t, functional, 'v2rhoasigmaab', 'd2e_dragab')
        generate_check(ff, t, functional, 'v2rhoasigmabb', 'd2e_dragbb')
        generate_check(ff, t, functional, 'v2rhobsigmaaa', 'd2e_drbgaa')
        generate_check(ff, t, functional, 'v2rhobsigmaab', 'd2e_drbgab')
        generate_check(ff, t, functional, 'v2rhobsigmabb', 'd2e_drbgbb')

    f.close()

    ff.write('}\n\n')
    ff.close()

epsilon = '1e-7'

test_data = [('slater_x_functional', 'data_pt_x_lda', 1),
             ('vwn_c_functional', 'data_pt_c_vwn5', 1),
             ('vwn_rpa_c_functional', 'data_pt_c_vwn5rpa', 1),
             ('pbe_x_functional', 'data_pt_x_pbe', 0),
             ('pbe_c_functional', 'data_pt_c_pbe', 0),
             ('pw91_x_functional', 'data_pt_x_pw91', 0),
             ('pw91_c_functional', 'data_pt_c_pw91', 0),
             ('pw92_c_functional', 'data_pt_c_pw92', 1),
             ('lyp_c_functional', 'data_pt_c_lyp', 0),
             ('becke88_x_functional', 'data_pt_x_b88', 0),
             ('b3_x_functional', 'data_pt_x_b3', 0),
             ('b3lyp_xc_functional', 'data_pt_xc_b3lyp', 0),
             ('pw91_xc_functional', 'data_pt_xc_pw91', 0)]


for (fun, fname, lda) in test_data:
    generate_test_routine(fun, fname, lda)


ff = open('xc_kit_test_suite.cpp', 'w');

ff.write(
"""#include <boost/test/unit_test.hpp>

using namespace boost::unit_test_framework;

""");

for (fun, fname, lda) in test_data:
    ff.write('void check_%s();\n' % fun)

ff.write(
"""

test_suite* init_unit_test_suite(int argc, char* argv[])
{
    test_suite* ts = BOOST_TEST_SUITE("xc functionals test suite");

""")

for (fun, fname, lda) in test_data:
    ff.write('    ts->add(BOOST_TEST_CASE(&check_%s));\n' % fun)

ff.write("""
    return ts;
}

""")

