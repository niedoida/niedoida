/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/core_kit.hpp"

enum LDA_FUNCTIONAL { SLATER, SVWN };

std::shared_ptr<const niedoida::core::FockMatrixGeneratorFactory> create_simple_HF_Matrix_Generator( std::shared_ptr<niedoida::core::System> );
std::shared_ptr<const niedoida::core::FockMatrixGeneratorFactory> create_simple_LDA_KS_Matrix_Generator( std::shared_ptr<niedoida::core::System>, LDA_FUNCTIONAL functional=SLATER );