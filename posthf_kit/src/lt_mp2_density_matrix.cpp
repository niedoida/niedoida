/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "posthf_kit/lt_mp2_utils.hpp"

#include <cassert>
#include <memory>
#include <vector>

#include <boost/mpi.hpp>

#include "misc_kit/dispatcher.hpp"

namespace niedoida {
    namespace posthf {

        arma::mat X_density_matrix(const arma::mat& C,
                                   unsigned no_occ,
                                   unsigned no_frozen,
                                   const arma::vec& epsilon,
                                   const double t_alpha)
        {
            const unsigned n = C.n_rows;
            arma::vec occ = arma::zeros<arma::vec>(n);

            for (unsigned i = no_frozen; i < no_occ; ++i)
                occ(i) = 1.0;

            return general_density_matrix(C, occ, epsilon, t_alpha);
        }

        arma::mat Y_density_matrix(const arma::mat& C,
                                   unsigned no_occ,
                                   unsigned no_deleted,
                                   const arma::vec& epsilon,
                                   const double t_alpha)
        {
            const unsigned n = C.n_rows;
            arma::vec occ = arma::zeros<arma::vec>(n);

            for (unsigned i = no_occ; i < n - no_deleted; ++i)
                occ(i) = 1.0;

            return general_density_matrix(C, occ, -epsilon, t_alpha);
        }

        arma::mat general_density_matrix(const arma::mat& C,
                                         const arma::vec& occ,
                                         const arma::vec& epsilon,
                                         const double t_alpha)
        {
            const unsigned n = C.n_rows;

            assert(C.n_cols == n);
            assert(occ.size() == n);

            arma::mat P = arma::zeros<arma::mat>(n, n);

            {

                std::unique_ptr<niedoida::misc::Dispatcher> d =
                    niedoida::misc::dispatcher(n);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    for (unsigned i = task_info->first; i < task_info->second;
                         ++i)
                        for (unsigned k = 0; k < n; ++k)
                            for (unsigned l = 0; l < n; ++l)
                                P(k, l) += occ(i) * C(k, i) * C(l, i) *
                                           std::exp(epsilon(i) * t_alpha);
                }
            }

            arma::mat complete_P(n, n, arma::fill::zeros);

            boost::mpi::communicator m_comm;

            boost::mpi::all_reduce(m_comm,
                                   P.memptr(),
                                   n * n,
                                   complete_P.memptr(),
                                   std::plus<double>());

            return complete_P;
        }
    }
}
