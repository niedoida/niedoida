/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_QUADRATURES_HPP
#define NIEDOIDA_MISC_KIT_QUADRATURES_HPP

#include <utility>
#include <vector>

namespace niedoida {
    namespace misc {
        typedef std::vector<std::pair<double, double> > Quadrature;

        Quadrature gauss_legendre_quadrature(double x1, double x2, std::size_t n);
        Quadrature gauss_chebyshev_0_quadrature(double x1, double x2, std::size_t n);
        Quadrature simple_quadrature(double x1, double x2, std::size_t n);
    }
}

#endif
