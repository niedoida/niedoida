/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/unit_test.hpp>
#include "gto_d2_kit/d2_kinetic.hpp"

#include <armadillo>

using namespace boost::unit_test; 

BOOST_AUTO_TEST_SUITE(gto_d2_kit_kinetic_test)

const double ae = 1.1; 
const double be = 1.7;
const double cc = ae * be / (ae + be);
const double xAB = 1.1;
const double yAB = 2.3;
const double zAB = 1.6;
const bool same_atom = true;


#define CHECK_HESSIAN(h, rh)                                                 \
    for (unsigned i = 0; i < h.n_rows; ++i)                                  \
        for (unsigned j = 0; j < h.n_cols; ++j)                              \
            for (int k = 0; k < 6; ++k)                                      \
                BOOST_CHECK_CLOSE(h(i, j, k), rh(i, j, k), 1e-5)

#define GENERATE_TEST_CASE(m, n, d)                                          \
    arma::cube h(2 * m + 1, 2 * n + 1, 6, arma::fill::zeros);                \
    kinetic_second_derivative_##m##n(ae, be, cc, xAB, yAB, zAB,              \
                                     h.slice(0).begin(),                     \
                                     h.slice(1).begin(),                     \
                                     h.slice(2).begin(),                     \
                                     h.slice(3).begin(),                     \
                                     h.slice(4).begin(),                     \
                                     h.slice(5).begin(),                     \
                                     same_atom,                              \
                                     2 * n + 1, 0, 0);                       \
    CHECK_HESSIAN(h, arma::cube(d, h.n_rows, h.n_cols, 6))

BOOST_AUTO_TEST_CASE(kinetic_ss)
{
    const double data[] = {
        -0.80977780360381868,
        
        -12.206932610645746,
        
        -8.4917792074057381,
        
        -20.495265966226206,
        
        -17.75553834275745,
        
        -7.3233584456479939
    };
    GENERATE_TEST_CASE(0, 0, data);
}

BOOST_AUTO_TEST_CASE(kinetic_sp)
{
    const double data[] = {
        3.1491388659503206, 0.056791633807489958, 0.039507223518253712,
        
        0.05679163380748907, -5.1447533653069044, -4.6648641323114184,
        
        0.039507223518253115, -4.6648641323114193, -1.6841340497606614,
        
        -5.1447533653069035, -4.2294401324621642, -7.4832776222645867,
        
        -4.6648641323114184, -7.4832776222645885, -3.5213711949541096,
        
        -1.6841340497606614, -3.5213711949541118, 2.0914088727576128
    };
    GENERATE_TEST_CASE(0, 1, data);
}

// FIXME: !!!!
//BOOST_AUTO_TEST_CASE(kinetic_ps)
//{
//    const double data[] = {
//        -4.8668509746504949, 0, 0,
//        -0.087768888611576057, 0, -0.061056618164573612,
//        -0.061056618164574576, 0, 7.2093354772085565,
//        7.9509824736561239, 0, 2.6027526223573854,
//        7.2093354772085547, 0, 11.565065416227089,
//        2.6027526223573858, 0, 5.4421191194745315
//    };
//    GENERATE_TEST_CASE(1, 0, data);
//}

BOOST_AUTO_TEST_CASE(kinetic_pp)
{
    const double data[] = {
        -1.503944542236809, -3.2150141674135209, -2.2365315947224498,
        -3.2150141674135222, -1.1691430126232609, -0.82112463003006564,
        -2.2365315947224502, -0.82112463003006586, -0.55999349088900052,
        
        -3.2150141674135218, -1.1691430126232611, -0.82112463003006586,
        -1.16914301262326, -0.64993398503989797, 1.3916918255498811,
        -0.82112463003006531, 1.3916918255498816, 0.28421658308089565,
        
        -2.2365315947224498, -0.82112463003006619, -0.55999349088900063,
        -0.82112463003006531, 1.39169182554988, 0.28421658308089615,
        -0.55999349088900052, 0.28421658308089587, -1.646103931260491,
        
        -1.1691430126232594, -0.64993398503989974, 1.39169182554988,
        -0.64993398503989852, -7.7367463058771078, -0.94535852369439655,
        1.3916918255498809, -0.94535852369439755, -0.10165212370715805,
        
        -0.82112463003006608, 1.3916918255498807, 0.28421658308089559,
        1.3916918255498809, -0.94535852369439666, -0.10165212370715805,
        0.28421658308089526, -0.10165212370715805, -3.4418536744537533,
        
        -0.55999349088900019, 0.28421658308089615, -1.6461039312604899,
        0.28421658308089676, -0.10165212370715923, -3.441853674453752,
        -1.6461039312604904, -3.441853674453752, -4.4821024740987223
    };
    GENERATE_TEST_CASE(1, 1, data);
}

BOOST_AUTO_TEST_SUITE_END()
