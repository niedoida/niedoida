/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/core_utils.hpp"
#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace core {

        arma::mat canonical_purification(const arma::mat& P,
                                         const arma::mat& S,
                                         double eps,
                                         unsigned n)
        {
            arma::mat R = P;

            arma::mat PS;
            arma::mat PSP;
            arma::mat PSPS;
            arma::mat PSPSP;
            arma::mat SP;
            arma::mat SPSP;
            arma::mat SPSPSP;
            arma::mat newP;
            for (unsigned i = 0; i < n; ++i) {
                PS = R * S;
                PSP = PS * R;
                if (norm(PSP - R, "inf") < eps)
                    break;
                PSPS = PSP * S;
                PSPSP = PSPS * R;
                SP = trans(PS);
                SPSP = trans(PSPS);
                SPSPSP = S * PSPSP;
                niedoida::io::Log::instance().write(niedoida::io::Logger::DEBUG,
                                                    "norm PSP-P",
                                                    norm(PSP - R, "inf"));
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "trace PS", trace(PS));
                double c = trace(SPSP - SPSPSP) / trace(SP - SPSP);
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "c coefficient", c);

                if (c < 0.5) {
                    newP = ((1 - 2 * c) * R + (1 + c) * PSP - PSPSP) / (1 - c);
                } else {
                    newP = ((1 + c) * PSP - PSPSP) / c;
                }
                R = 0.5 * (newP + trans(newP));
            }
            return R;
        }
    }
}
