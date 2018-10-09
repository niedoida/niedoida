/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "semi_empirical_kit/eht.hpp"

#include "misc_kit/phys_consts.hpp"

#include <cassert>

namespace {

    static const double _eht_alpha[][3] = {
        {-13.6},              // H
        {0},                  // He
        {-5.4, -3.5},         // Li
        {-10.0, -6.0},        // Be
        {-15.2, -8.5},        // B
        {-21.4, -11.4},       // C
        {-26.0, -13.4},       // N
        {-32.3, -14.8},       // O
        {-40.0, -18.1},       // F
        {0},                  // Ne
        {-5.1, -3.0},         // Na
        {-9.0, -4.5},         // Mg
        {-12.3, -6.5},        // Al
        {-17.3, -9.2, -6.0},  // Si
        {-18.6, -14.0, -7.0}, // P
        {-20.0, -13.3, -8.0}, // S
        {-30.0, -15.0, -9.0}  // Cl
    };
}

namespace niedoida {
    namespace semi_empirical {
        double eht_alpha(unsigned atomic_number, unsigned l)
        {
            assert(atomic_number > 0);
            assert(atomic_number < 18);

            assert(l < 3);

            const double alpha =
                _eht_alpha[atomic_number - 1][l] * misc::ev_to_hartree;

            //???
            assert(alpha != 0);

            return alpha;
        }
    }
}
