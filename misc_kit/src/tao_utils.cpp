/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/tao_utils.hpp"

namespace niedoida {
    namespace misc {
        std::string tao_solver_status_string(TaoConvergedReason reason)
        {
            switch (reason) {
            case TAO_CONTINUE_ITERATING:
                return "show must go on";
            case TAO_CONVERGED_GATOL:
                return "absolute tolerance criterium satisfied";
            case TAO_CONVERGED_GRTOL:
                return "relative tolerance criterium satisfied";
            case TAO_CONVERGED_GTTOL:
                return "relative tolerance criterium satisfied";
            case TAO_CONVERGED_STEPTOL:
                return "minimum step size criterium satisfied";
            case TAO_CONVERGED_MINF:
                return "gradient criterium satisfied";
            case TAO_CONVERGED_USER:
                return "user-defined criterium satisfied";
            case TAO_DIVERGED_MAXITS:
                return "maximum number of iterations exceeded";
            case TAO_DIVERGED_NAN:
                return "Not A Number encountered";
            case TAO_DIVERGED_MAXFCN:
                return "maximum number of function evaluations exceeded";
            case TAO_DIVERGED_LS_FAILURE:
                return "line search does not converge";
            case TAO_DIVERGED_TR_REDUCTION:
                return "well, something is wrong";
            case TAO_DIVERGED_USER:
                return "user-defined criterium NOT satisfied";
            default:
                return "???";
            }
        }

        arma::vec petsc2arma(Vec v)
        {
            PetscInt n;
            VecGetSize(v, &n);

            arma::vec u(n);

            for (PetscInt a = 0; a < n; ++a) {
                int it = a;
                VecGetValues(v, 1, &it, &(u(a)));
            }

            return u;
        }

        void arma2petsc(const arma::vec& u, Vec v)
        {
            PetscInt n;
            VecGetSize(v, &n);

            for (PetscInt a = 0; a < n; ++a) {
                int it = a;
                VecSetValues(v, 1, &it, &(u(a)), INSERT_VALUES);
            }

            VecAssemblyBegin(v);
            VecAssemblyEnd(v);
        }
    }
}
