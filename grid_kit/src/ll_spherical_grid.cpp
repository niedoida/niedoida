/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/ll_spherical_grid.hpp"

#include <boost/math/constants/constants.hpp>

namespace {
    // All the Lebedev-Laikov stuff is taken from
    // http://ccl.net/cca/software/SOURCES/FORTRAN/Lebedev-Laikov-Grids/index.shtml
    // and translated into c++. Below is the original comment accompanying
    // the code.
    /*
      chvd
      chvd   This subroutine is part of a set of subroutines that generate
      chvd   Lebedev grids (1-6) for integration on a sphere. The original
      chvd   C-code (1) was kindly provided by Dr. Dmitri N. Laikov and
      chvd   translated into fortran by Dr. Christoph van Wuellen.
      chvd   This subroutine was translated from C to fortran77 by hand.
      chvd
      chvd   Users of this code are asked to include reference (1) in their
      chvd   publications, and in the user- and programmers-manuals
      chvd   describing their codes.
      chvd
      chvd   This code was distributed through CCL (http://www.ccl.net/).
      chvd
      chvd   (1) V.I. Lebedev, and D.N. Laikov
      chvd       "A quadrature formula for the sphere of the 131st
      chvd        algebraic order of accuracy"
      chvd       Doklady Mathematics, Vol. 59, No. 3, 1999, pp. 477-481.
      chvd
      chvd   (2) V.I. Lebedev
      chvd       "A quadrature formula for the sphere of 59th algebraic
      chvd        order of accuracy"
      chvd       Russian Acad. Sci. Dokl. Math., Vol. 50, 1995, pp. 283-286.
      chvd
      chvd   (3) V.I. Lebedev, and A.L. Skorokhodov
      chvd       "Quadrature formulas of orders 41, 47, and 53 for the sphere"
      chvd       Russian Acad. Sci. Dokl. Math., Vol. 45, 1992, pp. 587-592.
      chvd
      chvd   (4) V.I. Lebedev
      chvd       "Spherical quadrature formulas exact to orders 25-29"
      chvd       Siberian Mathematical Journal, Vol. 18, 1977, pp. 99-107.
      chvd
      chvd   (5) V.I. Lebedev
      chvd       "Quadratures on a sphere"
      chvd       Computational Mathematics and Mathematical Physics, Vol. 16,
      chvd       1976, pp. 10-24.
      chvd
      chvd   (6) V.I. Lebedev
      chvd       "Values of the nodes and weights of ninth to seventeenth
      chvd        order Gauss-Markov quadrature formulae invariant under the
      chvd        octahedron group with inversion"
      chvd       Computational Mathematics and Mathematical Physics, Vol. 15,
      chvd       1975, pp. 44-51.
      chvd
      cvw
      cvw    Given a point on a sphere (specified by a and b), generate all
      cvw    the equivalent points under Oh symmetry, making grid points with
      cvw    weight v.
      cvw    The variable num is increased by the number of different points
      cvw    generated.
      cvw
      cvw    Depending on code, there are 6...48 different but equivalent
      cvw    points.
      cvw
      cvw    code=1:   (0,0,1) etc                                (  6 points)
      cvw    code=2:   (0,a,a) etc, a=1/sqrt(2)                   ( 12 points)
      cvw    code=3:   (a,a,a) etc, a=1/sqrt(3)                   (  8 points)
      cvw    code=4:   (a,a,b) etc, b=sqrt(1-2 a^2)               ( 24 points)
      cvw    code=5:   (a,b,0) etc, b=sqrt(1-a^2), a input        ( 24 points)
      cvw    code=6:   (a,b,c) etc, c=sqrt(1-a^2-b^2), a/b input  ( 48 points)
      cvw
    */

    std::size_t gen_oh_1(arma::subview<double> coords,
                         arma::subview_col<double> weights,
                         double v)
    {
        coords(0, 0) = 1;
        coords(1, 0) = 0;
        coords(2, 0) = 0;
        weights(0) = v;
        coords(0, 1) = -1;
        coords(1, 1) = 0;
        coords(2, 1) = 0;
        weights(1) = v;
        coords(0, 2) = 0;
        coords(1, 2) = 1;
        coords(2, 2) = 0;
        weights(2) = v;
        coords(0, 3) = 0;
        coords(1, 3) = -1;
        coords(2, 3) = 0;
        weights(3) = v;
        coords(0, 4) = 0;
        coords(1, 4) = 0;
        coords(2, 4) = 1;
        weights(4) = v;
        coords(0, 5) = 0;
        coords(1, 5) = 0;
        coords(2, 5) = -1;
        weights(5) = v;

        return 6;
    }

    std::size_t gen_oh_2(arma::subview<double> coords,
                         arma::subview_col<double> weights,
                         double v)
    {
        const double a = std::sqrt(0.5);

        coords(0, 0) = 0;
        coords(1, 0) = a;
        coords(2, 0) = a;
        weights(0) = v;
        coords(0, 1) = 0;
        coords(1, 1) = -a;
        coords(2, 1) = a;
        weights(1) = v;
        coords(0, 2) = 0;
        coords(1, 2) = a;
        coords(2, 2) = -a;
        weights(2) = v;
        coords(0, 3) = 0;
        coords(1, 3) = -a;
        coords(2, 3) = -a;
        weights(3) = v;
        coords(0, 4) = a;
        coords(1, 4) = 0;
        coords(2, 4) = a;
        weights(4) = v;
        coords(0, 5) = -a;
        coords(1, 5) = 0;
        coords(2, 5) = a;
        weights(5) = v;
        coords(0, 6) = a;
        coords(1, 6) = 0;
        coords(2, 6) = -a;
        weights(6) = v;
        coords(0, 7) = -a;
        coords(1, 7) = 0;
        coords(2, 7) = -a;
        weights(7) = v;
        coords(0, 8) = a;
        coords(1, 8) = a;
        coords(2, 8) = 0;
        weights(8) = v;
        coords(0, 9) = -a;
        coords(1, 9) = a;
        coords(2, 9) = 0;
        weights(9) = v;
        coords(0, 10) = a;
        coords(1, 10) = -a;
        coords(2, 10) = 0;
        weights(10) = v;
        coords(0, 11) = -a;
        coords(1, 11) = -a;
        coords(2, 11) = 0;
        weights(11) = v;

        return 12;
    }

    std::size_t gen_oh_3(arma::subview<double> coords,
                         arma::subview_col<double> weights,
                         double v)
    {
        const double a = std::sqrt(1.0 / 3.0);

        coords(0, 0) = a;
        coords(1, 0) = a;
        coords(2, 0) = a;
        weights(0) = v;
        coords(0, 1) = -a;
        coords(1, 1) = a;
        coords(2, 1) = a;
        weights(1) = v;
        coords(0, 2) = a;
        coords(1, 2) = -a;
        coords(2, 2) = a;
        weights(2) = v;
        coords(0, 3) = -a;
        coords(1, 3) = -a;
        coords(2, 3) = a;
        weights(3) = v;
        coords(0, 4) = a;
        coords(1, 4) = a;
        coords(2, 4) = -a;
        weights(4) = v;
        coords(0, 5) = -a;
        coords(1, 5) = a;
        coords(2, 5) = -a;
        weights(5) = v;
        coords(0, 6) = a;
        coords(1, 6) = -a;
        coords(2, 6) = -a;
        weights(6) = v;
        coords(0, 7) = -a;
        coords(1, 7) = -a;
        coords(2, 7) = -a;
        weights(7) = v;

        return 8;
    }

    std::size_t gen_oh_4(arma::subview<double> coords,
                         arma::subview_col<double> weights,
                         double a,
                         double v)
    {
        const double b = std::sqrt(1 - 2 * a * a);

        coords(0, 0) = a;
        coords(1, 0) = a;
        coords(2, 0) = b;
        weights(0) = v;
        coords(0, 1) = -a;
        coords(1, 1) = a;
        coords(2, 1) = b;
        weights(1) = v;
        coords(0, 2) = a;
        coords(1, 2) = -a;
        coords(2, 2) = b;
        weights(2) = v;
        coords(0, 3) = -a;
        coords(1, 3) = -a;
        coords(2, 3) = b;
        weights(3) = v;
        coords(0, 4) = a;
        coords(1, 4) = a;
        coords(2, 4) = -b;
        weights(4) = v;
        coords(0, 5) = -a;
        coords(1, 5) = a;
        coords(2, 5) = -b;
        weights(5) = v;
        coords(0, 6) = a;
        coords(1, 6) = -a;
        coords(2, 6) = -b;
        weights(6) = v;
        coords(0, 7) = -a;
        coords(1, 7) = -a;
        coords(2, 7) = -b;
        weights(7) = v;
        coords(0, 8) = a;
        coords(1, 8) = b;
        coords(2, 8) = a;
        weights(8) = v;
        coords(0, 9) = -a;
        coords(1, 9) = b;
        coords(2, 9) = a;
        weights(9) = v;
        coords(0, 10) = a;
        coords(1, 10) = -b;
        coords(2, 10) = a;
        weights(10) = v;
        coords(0, 11) = -a;
        coords(1, 11) = -b;
        coords(2, 11) = a;
        weights(11) = v;
        coords(0, 12) = a;
        coords(1, 12) = b;
        coords(2, 12) = -a;
        weights(12) = v;
        coords(0, 13) = -a;
        coords(1, 13) = b;
        coords(2, 13) = -a;
        weights(13) = v;
        coords(0, 14) = a;
        coords(1, 14) = -b;
        coords(2, 14) = -a;
        weights(14) = v;
        coords(0, 15) = -a;
        coords(1, 15) = -b;
        coords(2, 15) = -a;
        weights(15) = v;
        coords(0, 16) = b;
        coords(1, 16) = a;
        coords(2, 16) = a;
        weights(16) = v;
        coords(0, 17) = -b;
        coords(1, 17) = a;
        coords(2, 17) = a;
        weights(17) = v;
        coords(0, 18) = b;
        coords(1, 18) = -a;
        coords(2, 18) = a;
        weights(18) = v;
        coords(0, 19) = -b;
        coords(1, 19) = -a;
        coords(2, 19) = a;
        weights(19) = v;
        coords(0, 20) = b;
        coords(1, 20) = a;
        coords(2, 20) = -a;
        weights(20) = v;
        coords(0, 21) = -b;
        coords(1, 21) = a;
        coords(2, 21) = -a;
        weights(21) = v;
        coords(0, 22) = b;
        coords(1, 22) = -a;
        coords(2, 22) = -a;
        weights(22) = v;
        coords(0, 23) = -b;
        coords(1, 23) = -a;
        coords(2, 23) = -a;
        weights(23) = v;

        return 24;
    }

    std::size_t gen_oh_5(arma::subview<double> coords,
                         arma::subview_col<double> weights,
                         double a,
                         double v)
    {
        const double b = std::sqrt(1 - a * a);

        coords(0, 0) = a;
        coords(1, 0) = b;
        coords(2, 0) = 0;
        weights(0) = v;
        coords(0, 1) = -a;
        coords(1, 1) = b;
        coords(2, 1) = 0;
        weights(1) = v;
        coords(0, 2) = a;
        coords(1, 2) = -b;
        coords(2, 2) = 0;
        weights(2) = v;
        coords(0, 3) = -a;
        coords(1, 3) = -b;
        coords(2, 3) = 0;
        weights(3) = v;
        coords(0, 4) = b;
        coords(1, 4) = a;
        coords(2, 4) = 0;
        weights(4) = v;
        coords(0, 5) = -b;
        coords(1, 5) = a;
        coords(2, 5) = 0;
        weights(5) = v;
        coords(0, 6) = b;
        coords(1, 6) = -a;
        coords(2, 6) = 0;
        weights(6) = v;
        coords(0, 7) = -b;
        coords(1, 7) = -a;
        coords(2, 7) = 0;
        weights(7) = v;
        coords(0, 8) = a;
        coords(1, 8) = 0;
        coords(2, 8) = b;
        weights(8) = v;
        coords(0, 9) = -a;
        coords(1, 9) = 0;
        coords(2, 9) = b;
        weights(9) = v;
        coords(0, 10) = a;
        coords(1, 10) = 0;
        coords(2, 10) = -b;
        weights(10) = v;
        coords(0, 11) = -a;
        coords(1, 11) = 0;
        coords(2, 11) = -b;
        weights(11) = v;
        coords(0, 12) = b;
        coords(1, 12) = 0;
        coords(2, 12) = a;
        weights(12) = v;
        coords(0, 13) = -b;
        coords(1, 13) = 0;
        coords(2, 13) = a;
        weights(13) = v;
        coords(0, 14) = b;
        coords(1, 14) = 0;
        coords(2, 14) = -a;
        weights(14) = v;
        coords(0, 15) = -b;
        coords(1, 15) = 0;
        coords(2, 15) = -a;
        weights(15) = v;
        coords(0, 16) = 0;
        coords(1, 16) = a;
        coords(2, 16) = b;
        weights(16) = v;
        coords(0, 17) = 0;
        coords(1, 17) = -a;
        coords(2, 17) = b;
        weights(17) = v;
        coords(0, 18) = 0;
        coords(1, 18) = a;
        coords(2, 18) = -b;
        weights(18) = v;
        coords(0, 19) = 0;
        coords(1, 19) = -a;
        coords(2, 19) = -b;
        weights(19) = v;
        coords(0, 20) = 0;
        coords(1, 20) = b;
        coords(2, 20) = a;
        weights(20) = v;
        coords(0, 21) = 0;
        coords(1, 21) = -b;
        coords(2, 21) = a;
        weights(21) = v;
        coords(0, 22) = 0;
        coords(1, 22) = b;
        coords(2, 22) = -a;
        weights(22) = v;
        coords(0, 23) = 0;
        coords(1, 23) = -b;
        coords(2, 23) = -a;
        weights(23) = v;

        return 24;
    }

    std::size_t gen_oh_6(arma::subview<double> coords,
                         arma::subview_col<double> weights,
                         double a,
                         double b,
                         double v)
    {
        const double c = std::sqrt(1 - a * a - b * b);

        coords(0, 0) = a;
        coords(1, 0) = b;
        coords(2, 0) = c;
        weights(0) = v;
        coords(0, 1) = -a;
        coords(1, 1) = b;
        coords(2, 1) = c;
        weights(1) = v;
        coords(0, 2) = a;
        coords(1, 2) = -b;
        coords(2, 2) = c;
        weights(2) = v;
        coords(0, 3) = -a;
        coords(1, 3) = -b;
        coords(2, 3) = c;
        weights(3) = v;
        coords(0, 4) = a;
        coords(1, 4) = b;
        coords(2, 4) = -c;
        weights(4) = v;
        coords(0, 5) = -a;
        coords(1, 5) = b;
        coords(2, 5) = -c;
        weights(5) = v;
        coords(0, 6) = a;
        coords(1, 6) = -b;
        coords(2, 6) = -c;
        weights(6) = v;
        coords(0, 7) = -a;
        coords(1, 7) = -b;
        coords(2, 7) = -c;
        weights(7) = v;
        coords(0, 8) = a;
        coords(1, 8) = c;
        coords(2, 8) = b;
        weights(8) = v;
        coords(0, 9) = -a;
        coords(1, 9) = c;
        coords(2, 9) = b;
        weights(9) = v;
        coords(0, 10) = a;
        coords(1, 10) = -c;
        coords(2, 10) = b;
        weights(10) = v;
        coords(0, 11) = -a;
        coords(1, 11) = -c;
        coords(2, 11) = b;
        weights(11) = v;
        coords(0, 12) = a;
        coords(1, 12) = c;
        coords(2, 12) = -b;
        weights(12) = v;
        coords(0, 13) = -a;
        coords(1, 13) = c;
        coords(2, 13) = -b;
        weights(13) = v;
        coords(0, 14) = a;
        coords(1, 14) = -c;
        coords(2, 14) = -b;
        weights(14) = v;
        coords(0, 15) = -a;
        coords(1, 15) = -c;
        coords(2, 15) = -b;
        weights(15) = v;
        coords(0, 16) = b;
        coords(1, 16) = a;
        coords(2, 16) = c;
        weights(16) = v;
        coords(0, 17) = -b;
        coords(1, 17) = a;
        coords(2, 17) = c;
        weights(17) = v;
        coords(0, 18) = b;
        coords(1, 18) = -a;
        coords(2, 18) = c;
        weights(18) = v;
        coords(0, 19) = -b;
        coords(1, 19) = -a;
        coords(2, 19) = c;
        weights(19) = v;
        coords(0, 20) = b;
        coords(1, 20) = a;
        coords(2, 20) = -c;
        weights(20) = v;
        coords(0, 21) = -b;
        coords(1, 21) = a;
        coords(2, 21) = -c;
        weights(21) = v;
        coords(0, 22) = b;
        coords(1, 22) = -a;
        coords(2, 22) = -c;
        weights(22) = v;
        coords(0, 23) = -b;
        coords(1, 23) = -a;
        coords(2, 23) = -c;
        weights(23) = v;
        coords(0, 24) = b;
        coords(1, 24) = c;
        coords(2, 24) = a;
        weights(24) = v;
        coords(0, 25) = -b;
        coords(1, 25) = c;
        coords(2, 25) = a;
        weights(25) = v;
        coords(0, 26) = b;
        coords(1, 26) = -c;
        coords(2, 26) = a;
        weights(26) = v;
        coords(0, 27) = -b;
        coords(1, 27) = -c;
        coords(2, 27) = a;
        weights(27) = v;
        coords(0, 28) = b;
        coords(1, 28) = c;
        coords(2, 28) = -a;
        weights(28) = v;
        coords(0, 29) = -b;
        coords(1, 29) = c;
        coords(2, 29) = -a;
        weights(29) = v;
        coords(0, 30) = b;
        coords(1, 30) = -c;
        coords(2, 30) = -a;
        weights(30) = v;
        coords(0, 31) = -b;
        coords(1, 31) = -c;
        coords(2, 31) = -a;
        weights(31) = v;
        coords(0, 32) = c;
        coords(1, 32) = a;
        coords(2, 32) = b;
        weights(32) = v;
        coords(0, 33) = -c;
        coords(1, 33) = a;
        coords(2, 33) = b;
        weights(33) = v;
        coords(0, 34) = c;
        coords(1, 34) = -a;
        coords(2, 34) = b;
        weights(34) = v;
        coords(0, 35) = -c;
        coords(1, 35) = -a;
        coords(2, 35) = b;
        weights(35) = v;
        coords(0, 36) = c;
        coords(1, 36) = a;
        coords(2, 36) = -b;
        weights(36) = v;
        coords(0, 37) = -c;
        coords(1, 37) = a;
        coords(2, 37) = -b;
        weights(37) = v;
        coords(0, 38) = c;
        coords(1, 38) = -a;
        coords(2, 38) = -b;
        weights(38) = v;
        coords(0, 39) = -c;
        coords(1, 39) = -a;
        coords(2, 39) = -b;
        weights(39) = v;
        coords(0, 40) = c;
        coords(1, 40) = b;
        coords(2, 40) = a;
        weights(40) = v;
        coords(0, 41) = -c;
        coords(1, 41) = b;
        coords(2, 41) = a;
        weights(41) = v;
        coords(0, 42) = c;
        coords(1, 42) = -b;
        coords(2, 42) = a;
        weights(42) = v;
        coords(0, 43) = -c;
        coords(1, 43) = -b;
        coords(2, 43) = a;
        weights(43) = v;
        coords(0, 44) = c;
        coords(1, 44) = b;
        coords(2, 44) = -a;
        weights(44) = v;
        coords(0, 45) = -c;
        coords(1, 45) = b;
        coords(2, 45) = -a;
        weights(45) = v;
        coords(0, 46) = c;
        coords(1, 46) = -b;
        coords(2, 46) = -a;
        weights(46) = v;
        coords(0, 47) = -c;
        coords(1, 47) = -b;
        coords(2, 47) = -a;
        weights(47) = v;

        return 48;
    }

    using namespace niedoida;

    std::shared_ptr<core::Grid::Block> sphere_0006()
    {
        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(6));
        arma::subview<double> c = b->coords.head_cols(6);
        arma::subview_col<double> w = b->weights.head(6);
        gen_oh_1(c, w, 0.1666666666666667);

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0014()
    {
        const std::size_t size = 14;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.6666666666666667e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.7500000000000000e-1);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0026()
    {
        const std::size_t size = 26;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.4761904761904762e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.3809523809523810e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.3214285714285714e-1);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0038()
    {
        const std::size_t size = 38;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.9523809523809524e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.3214285714285714e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.4597008433809831, 0.2857142857142857e-1);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0050()
    {
        const std::size_t size = 50;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.1269841269841270e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.2257495590828924e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.2109375000000000e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3015113445777636, 0.2017333553791887e-1);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0074()
    {
        const std::size_t size = 74;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.5130671797338464e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.1660406956574204e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, -0.2958603896103896e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4803844614152614, 0.2657620708215946e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3207726489807764, 0.1652217099371571e-1);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0086()
    {
        const std::size_t size = 86;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.1154401154401154e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.1194390908585628e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3696028464541502, 0.1111055571060340e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6943540066026664, 0.1187650129453714e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3742430390903412, 0.1181230374690448e-1);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0110()
    {
        const std::size_t size = 110;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.3828270494937162e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.9793737512487512e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1851156353447362, 0.8211737283191111e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6904210483822922, 0.9942814891178103e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3956894730559419, 0.9595471336070963e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.4783690288121502, 0.9694996361663028e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0146()
    {
        const std::size_t size = 146;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.5996313688621381e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.7372999718620756e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.7210515360144488e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6764410400114264, 0.7116355493117555e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4174961227965453, 0.6753829486314477e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1574676672039082, 0.7574394159054034e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1403553811713183,
                          0.4493328323269557,
                          0.6991087353303262e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0170()
    {
        const std::size_t size = 170;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.5544842902037365e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.6071332770670752e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.6383674773515093e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2551252621114134, 0.5183387587747790e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6743601460362766, 0.6317929009813725e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4318910696719410, 0.6201670006589077e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.2613931360335988, 0.5477143385137348e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.4990453161796037,
                          0.1446630744325115,
                          0.5968383987681156e-2);
        }
        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0194()
    {
        const std::size_t size = 194;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.1782340447244611e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.5716905949977102e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.5573383178848738e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6712973442695226, 0.5608704082587997e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2892465627575439, 0.5158237711805383e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4446933178717437, 0.5518771467273614e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1299335447650067, 0.4106777028169394e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3457702197611283, 0.5051846064614808e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1590417105383530,
                          0.8360360154824589,
                          0.5530248916233094e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0230()
    {
        const std::size_t size = 230;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, -0.5522639919727325e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.4450274607445226e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4492044687397611, 0.4496841067921404e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2520419490210201, 0.5049153450478750e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6981906658447242, 0.3976408018051883e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6587405243460960, 0.4401400650381014e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4038544050097660e-1, 0.1724544350544401e-1);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.5823842309715585, 0.4231083095357343e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3545877390518688, 0.5198069864064399e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2272181808998187,
                          0.4864661535886647,
                          0.4695720972568883e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0266()
    {
        const std::size_t size = 266;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, -0.1313769127326952e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, -0.2522728704859336e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.4186853881700583e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.7039373391585475, 0.5315167977810885e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1012526248572414, 0.4047142377086219e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4647448726420539, 0.4112482394406990e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3277420654971629, 0.3595584899758782e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6620338663699974, 0.4256131351428158e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.8506508083520399, 0.4229582700647240e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.3233484542692899,
                          0.1153112011009701,
                          0.4080914225780505e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2314790158712601,
                          0.5244939240922365,
                          0.4071467593830964e-2);
        }
        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0302()
    {
        const std::size_t size = 302;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.8545911725128148e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.3599119285025571e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3515640345570105, 0.3449788424305883e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6566329410219612, 0.3604822601419882e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4729054132581005, 0.3576729661743367e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.9618308522614784e-1, 0.2352101413689164e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2219645236294178, 0.3108953122413675e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.7011766416089545, 0.3650045807677255e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.2644152887060663, 0.2982344963171804e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.5718955891878961, 0.3600820932216460e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2510034751770465,
                          0.8000727494073952,
                          0.3571540554273387e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1233548532583327,
                          0.4127724083168531,
                          0.3392312205006170e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0350()
    {
        const std::size_t size = 350;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.3006796749453936e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.3050627745650771e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.7068965463912316e+0, 0.1621104600288991e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4794682625712025e+0, 0.3005701484901752e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1927533154878019e+0, 0.2990992529653774e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6930357961327123e+0, 0.2982170644107595e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3608302115520091e+0, 0.2721564237310992e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6498486161496169e+0, 0.3033513795811141e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.1932945013230339e+0, 0.3007949555218533e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3800494919899303e+0, 0.2881964603055307e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2899558825499574e+0,
                          0.7934537856582316e+0,
                          0.2958357626535696e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.9684121455103957e-1,
                          0.8280801506686862e+0,
                          0.3036020026407088e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1833434647041659e+0,
                          0.9074658265305127e+0,
                          0.2832187403926303e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0434()
    {
        const std::size_t size = 434;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.5265897968224436e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.2548219972002607e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.2512317418927307e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6909346307509111e+0, 0.2530403801186355e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1774836054609158e+0, 0.2014279020918528e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4914342637784746e+0, 0.2501725168402936e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6456664707424256e+0, 0.2513267174597564e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2861289010307638e+0, 0.2302694782227416e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.7568084367178018e-1, 0.1462495621594614e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3927259763368002e+0, 0.2445373437312980e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.8818132877794288e+0, 0.2417442375638981e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.9776428111182649e+0, 0.1910951282179532e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2054823696403044e+0,
                          0.8689460322872412e+0,
                          0.2416930044324775e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.5905157048925271e+0,
                          0.7999278543857286e+0,
                          0.2512236854563495e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.5550152361076807e+0,
                          0.7717462626915901e+0,
                          0.2496644054553086e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.9371809858553722e+0,
                          0.3344363145343455e+0,
                          0.2236607760437849e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0590()
    {
        const std::size_t size = 590;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.3095121295306187e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.1852379698597489e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.7040954938227469e+0, 0.1871790639277744e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6807744066455243e+0, 0.1858812585438317e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6372546939258752e+0, 0.1852028828296213e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.5044419707800358e+0, 0.1846715956151242e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4215761784010967e+0, 0.1818471778162769e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3317920736472123e+0, 0.1749564657281154e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2384736701421887e+0, 0.1617210647254411e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1459036449157763e+0, 0.1384737234851692e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6095034115507196e-1, 0.9764331165051050e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.6116843442009876e+0, 0.1857161196774078e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3964755348199858e+0, 0.1705153996395864e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.1724782009907724e+0, 0.1300321685886048e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.5610263808622060e+0,
                          0.3518280927733519e+0,
                          0.1842866472905286e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.4742392842551980e+0,
                          0.2634716655937950e+0,
                          0.1802658934377451e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.5984126497885380e+0,
                          0.1816640840360209e+0,
                          0.1849830560443660e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.3791035407695563e+0,
                          0.1720795225656878e+0,
                          0.1713904507106709e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2778673190586244e+0,
                          0.8213021581932511e-1,
                          0.1555213603396808e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.5033564271075117e+0,
                          0.8999205842074875e-1,
                          0.1802239128008525e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0770()
    {
        const std::size_t size = 770;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.2192942088181184e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_2(c, w, 0.1436433617319080e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.1421940344335877e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.5087204410502360e-1, 0.6798123511050502e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1228198790178831e+0, 0.9913184235294912e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2026890814408786e+0, 0.1180207833238949e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2847745156464294e+0, 0.1296599602080921e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3656719078978026e+0, 0.1365871427428316e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4428264886713469e+0, 0.1402988604775325e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.5140619627249735e+0, 0.1418645563595609e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6306401219166803e+0, 0.1421376741851662e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6716883332022612e+0, 0.1423996475490962e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6979792685336881e+0, 0.1431554042178567e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.1446865674195309e+0, 0.9254401499865368e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.3390263475411216e+0, 0.1250239995053509e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.5335804651263506e+0, 0.1394365843329230e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.6944024393349413e-1,
                          0.2355187894242326e+0,
                          0.1127089094671749e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2269004109529460e+0,
                          0.4102182474045730e+0,
                          0.1345753760910670e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.8025574607775339e-1,
                          0.6214302417481605e+0,
                          0.1424957283316783e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1467999527896572e+0,
                          0.3245284345717394e+0,
                          0.1261523341237750e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1571507769824727e+0,
                          0.5224482189696630e+0,
                          0.1392547106052696e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2365702993157246e+0,
                          0.6017546634089558e+0,
                          0.1418761677877656e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.7714815866765732e-1,
                          0.4346575516141163e+0,
                          0.1338366684479554e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.3062936666210730e+0,
                          0.4908826589037616e+0,
                          0.1393700862676131e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.3822477379524787e+0,
                          0.5648768149099500e+0,
                          0.1415914757466932e-2);
        }

        return b;
    }

    std::shared_ptr<core::Grid::Block> sphere_0974()
    {
        const std::size_t size = 974;

        std::shared_ptr<core::Grid::Block> b(new core::Grid::Block(size));
        std::size_t d = 0;
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_1(c, w, 0.1438294190527431e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_3(c, w, 0.1125772288287004e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4292963545341347e-1, 0.4948029341949241e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1051426854086404e+0, 0.7357990109125470e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.1750024867623087e+0, 0.8889132771304384e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.2477653379650257e+0, 0.9888347838921435e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3206567123955957e+0, 0.1053299681709471e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.3916520749849983e+0, 0.1092778807014578e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.4590825874187624e+0, 0.1114389394063227e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.5214563888415861e+0, 0.1123724788051555e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6253170244654199e+0, 0.1125239325243814e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6637926744523170e+0, 0.1126153271815905e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.6910410398498301e+0, 0.1130286931123841e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_4(c, w, 0.7052907007457760e+0, 0.1134986534363955e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.1236686762657990e+0, 0.6823367927109931e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.2940777114468387e+0, 0.9454158160447096e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.4697753849207649e+0, 0.1074429975385679e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_5(c, w, 0.6334563241139567e+0, 0.1129300086569132e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.5974048614181342e-1,
                          0.2029128752777523e+0,
                          0.8436884500901954e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1375760408473636e+0,
                          0.4602621942484054e+0,
                          0.1075255720448885e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.3391016526336286e+0,
                          0.5030673999662036e+0,
                          0.1108577236864462e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1271675191439820e+0,
                          0.2817606422442134e+0,
                          0.9566475323783357e-3);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2693120740413512e+0,
                          0.4331561291720157e+0,
                          0.1080663250717391e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1419786452601918e+0,
                          0.6256167358580814e+0,
                          0.1126797131196295e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.6709284600738255e-1,
                          0.3798395216859157e+0,
                          0.1022568715358061e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.7057738183256172e-1,
                          0.5517505421423520e+0,
                          0.1108960267713108e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2783888477882155e+0,
                          0.6029619156159187e+0,
                          0.1122790653435766e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.1979578938917407e+0,
                          0.3589606329589096e+0,
                          0.1032401847117460e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.2087307061103274e+0,
                          0.5348666438135476e+0,
                          0.1107249382283854e-2);
        }
        {
            arma::subview<double> c = b->coords.cols(d, size - 1);
            arma::subview_col<double> w = b->weights.subvec(d, size - 1);
            d += gen_oh_6(c,
                          w,
                          0.4055122137872836e+0,
                          0.5674997546074373e+0,
                          0.1121780048519972e-2);
        }

        return b;
    }

    typedef std::shared_ptr<core::Grid::Block> (*SphereGenerator)();

    SphereGenerator sphere_generators[] = {
        sphere_0014,
        sphere_0026,
        sphere_0038,
        sphere_0050,
        sphere_0086,
        sphere_0110,
        sphere_0146,
        sphere_0170,
        sphere_0194,
        sphere_0302,
        sphere_0350,
        sphere_0434,
        sphere_0590,
        sphere_0770,
        sphere_0974
    };

    inline double diff_norm(const arma::vec3& p, const arma::vec3& q)
    {
        const double dx = p(0) - q(0);
        const double dy = p(1) - q(1);
        const double dz = p(2) - q(2);

        return std::sqrt(dx * dx + dy * dy + dz * dz);
    }
}

namespace niedoida {
    namespace grid {
        LLSphericalGrid::LLSphericalGrid(
            std::shared_ptr<const core::System> system,
            boost::function<double(const core::Shell&, double)> shell_range) :
            SimpleSphericalGrid(system, shell_range)
        {
            _allowed_sizes = {14,
                              26,
                              38,
                              50,
                              86,
                              110,
                              146,
                              170,
                              194,
                              302,
                              350,
                              434,
                              590,
                              770,
                              974};
        }

        const std::vector<std::size_t> LLSphericalGrid::allowed_sizes() const
        {
            return _allowed_sizes;
        }

        std::shared_ptr<core::Grid::Block> LLSphericalGrid::
        operator()(std::size_t a,
                   double r,
                   std::size_t size_index,
                   double threshold) const
        {
            assert(size_index < _allowed_sizes.size());
            const std::size_t block_size = _allowed_sizes[size_index];

            std::shared_ptr<core::Grid::Block> block =
                (*sphere_generators[size_index])();

            const arma::vec3 atom_coords = _atom_coords[a];

            if ((_prev_a != a) || (_prev_r != r) ||
                (_prev_threshold != threshold)) {

                _shell_ranges.clear();

                for (const core::Shell* s : _shells)
                    _shell_ranges.push_back(_shell_range(*s, threshold));

                const std::size_t no_shells = _shells.size();

                _significant_sphere_shells.clear();
                _significant_sphere_shells.reserve(no_shells);

                // find all significant shells for this sphere
                for (std::size_t s = 0; s < no_shells; ++s) {
                    const double d = diff_norm(atom_coords, _shell_coords[s]);
                    const double sr = _shell_ranges[s];

                    if ((d < r && r < d + sr) || (d >= r && r >= d - sr))
                        _significant_sphere_shells.push_back(s);
                }

                _prev_a = a;
                _prev_r = r;
                _prev_threshold = threshold;
            }

            const std::size_t no_significant_sphere_shells =
                _significant_sphere_shells.size();

            for (std::size_t i = 0; i < block_size; ++i) {

                block->coords.col(i) *= r;
                block->coords.col(i) += atom_coords;

                // note: the LL grid is normalized to 1 over the whole sphere
                block->weights(i) *= 4 * boost::math::double_constants::pi;

                // we'll get rid of the overhead later
                block->significant_shells[i].reserve(
                    no_significant_sphere_shells);

                // find all significant shells for this point
                for (std::size_t q : _significant_sphere_shells) {
                    const double srq = _shell_ranges[q];
                    if (diff_norm(block->coords.col(i), _shell_coords[q]) < srq)
                        block->significant_shells[i].push_back(q);
                }
            }

            return block;
        }
    }
}
