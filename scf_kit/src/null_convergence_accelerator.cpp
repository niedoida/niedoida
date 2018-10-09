/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/convergence_accelerators.hpp"

namespace niedoida {
    namespace scf {
        std::pair<arma::mat, arma::mat>
        NullConvergenceAccelerator::apply(const arma::mat&,
                                          const arma::mat& h,
                                          const arma::mat& g_alpha,
                                          const arma::mat&,
                                          const arma::mat& g_beta,
                                          const arma::mat&,
                                          double)
        {
            return std::make_pair(h + g_alpha, h + g_beta);
        }
    }
}
