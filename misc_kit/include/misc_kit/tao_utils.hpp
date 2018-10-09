/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TAO_UTILS_HPP
#define TAO_UTILS_HPP

#include <petsctao.h>

#include <string>

#include <armadillo>
namespace niedoida {
	namespace misc{
	std::string tao_solver_status_string(TaoConvergedReason reason);

	arma::vec petsc2arma(Vec v);

	void arma2petsc(const arma::vec& u, Vec v);
	}
}

#endif
