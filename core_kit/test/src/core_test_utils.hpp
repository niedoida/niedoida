/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/core_kit.hpp"

std::unique_ptr<niedoida::core::BasisSetBuilder> create_bs_builder(
    std::string format,
    std::istream& is );

arma::mat orthonormalize_basis( const arma::mat& S, double threshold );