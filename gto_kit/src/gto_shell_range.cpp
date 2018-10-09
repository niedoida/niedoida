/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/gto_utils.hpp"
#include <boost/exception/all.hpp>
#include <exception>
#include <stdexcept>

#include <boost/math/constants/constants.hpp>
#include <boost/math/special_functions/gamma.hpp>

namespace niedoida {
    namespace gto {
        double gto_shell_range(const core::Shell& s, double threshold)
        {
            assert(threshold < 1);

            //  for safety, one, most diffuse, primitive component is treated
            //  only
            threshold /= s.primitive_exps().size();

            const double min_alpha = *std::min_element(
                s.primitive_exps().begin(), s.primitive_exps().end());
            const unsigned max_l =
                *std::max_element(s.l().begin(), s.l().end());

            // norming r^{max_l}e^{-min_alpha * r^2}
            const double max_C =
                std::sqrt(0.5 / boost::math::double_constants::pi *
                          boost::math::tgamma(1.5 + max_l)) *
                std::pow(2 * min_alpha, 0.75 + max_l / 2.0);

            const double delta =
                max_l * max_l - 4 * min_alpha * std::log(threshold / max_C);

            if (delta < 0)
                BOOST_THROW_EXCEPTION(
                    std::runtime_error("impossible happened"));

            return (max_l + std::sqrt(delta)) / (2 * min_alpha);
        }
    }
}
