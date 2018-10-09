/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "xc_kit/xc_functionals.hpp"

#include <utility>

namespace niedoida {
    std::shared_ptr<DFTMethod> create_dft_method(const InputData& input_data)
    {
        switch (input_data.theory) {

        case InputData::THEORY_HF:
            xc::NoneXCFunctional none_xc_functional;
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(none_xc_functional, 1, 0));

        case InputData::THEORY_HFVWN:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::vwn_c_functional, 1, 0));

        case InputData::THEORY_SLATER:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::slater_x_functional, 0, 0));

        case InputData::THEORY_SVWN:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::svwn_xc_functional, 0, 0));

        case InputData::THEORY_SLYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::slyp_xc_functional, 0, 0));

        case InputData::THEORY_BECKE:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::becke88_x_functional, 0, 0));

        case InputData::THEORY_BLYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::blyp_xc_functional, 0, 0));

        case InputData::THEORY_PW91:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::pw91_xc_functional, 0, 0));

        case InputData::THEORY_MPW91:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::mpw91_xc_functional, 0, 0));

        case InputData::THEORY_MPW91LYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::mpw91lyp_xc_functional, 0, 0));

        case InputData::THEORY_PBE:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::pbe_xc_functional, 0, 0));

        case InputData::THEORY_PBE0:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::pbe0_xc_functional, 0.25, 0));

        case InputData::THEORY_B3LYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::b3lyp_xc_functional, 0.20, 0));

        case InputData::THEORY_mB3LYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::modb3lyp_xc_functional, 0.15, 0));

        case InputData::THEORY_B3LYP5:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::b3lyp5_xc_functional, 0.20, 0));

        case InputData::THEORY_B3PW91:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::b3pw91_xc_functional, 0.20, 0));

        case InputData::THEORY_B2PLYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::b2plyp_xc_functional, 0.53, 0.27));

        case InputData::THEORY_mPW2PLYP:
            return std::shared_ptr<DFTMethod>(
                new DFTMethod(&xc::mpw2plyp_xc_functional, 0.55, 0.25));
        }
    }
}
