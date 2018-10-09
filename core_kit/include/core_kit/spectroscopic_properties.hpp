/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef SPECTROSCOPIC_PROPERTIES_HPP
#define	SPECTROSCOPIC_PROPERTIES_HPP

#include "core_kit/system.hpp"
#include <armadillo>

namespace niedoida{
  namespace core {
    arma::vec calc_ir_frequencies_from_hessian( arma::mat &hessian , std::shared_ptr<const System> system);
  }
}
#endif

