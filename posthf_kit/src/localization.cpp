/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "posthf_kit/localization.hpp"
#include "scf_kit/scf_utils.hpp"

namespace niedoida {

    namespace posthf {

        CholeskyLocalization::CholeskyLocalization(
            const std::shared_ptr<const niedoida::core::System> system) :
            m_system(system),
            m_no_base(0),
            m_no_complement(0)
        {
        }

        arma::mat
        CholeskyLocalization::localize_orbitals(const arma::mat& C) const
        {
            arma::mat P = niedoida::scf::density_matrix(C, C.n_cols);
            return localize_density_matrix(P);
        }

        arma::mat CholeskyLocalization::localize_density_matrix(
            const arma::mat& P, const bool skip_complement) const
        {
            arma::mat r;
            return r;
            // 
            //    dzemm::dzemm<double> gemm(PUI::no_cores());
            //    arma::mat loc_alpha = P;
            //    const int lapack_n = loc_alpha.size1();
            //    ublas::vector<int> piv(lapack_n);
            //    ublas::vector<double> work(2 * lapack_n);
            //    const char lapack_uplo = 'L';
            //    const double tol = 1e-10; //quick hack
            //    int rank;
            //    int info;
            //
            //    LAPACK_DPSTRF(&lapack_uplo, &lapack_n, &loc_alpha(0, 0),
            //                  &lapack_n, &piv(0), &rank, &tol, &work(0),
            //                  &info);
            //
            //    m_no_base = rank;
            //
            //    arma::mat loc = ublas::zero_matrix<double>(lapack_n, rank);
            //
            //    loc_alpha = trans(loc_alpha);
            //
            //    for(std::size_t i = 0; i < lapack_n; ++i)
            //        for(std::size_t j = 0; j <= std::min(int(i), rank - 1);
            //        ++j)
            //            loc(i, j) = loc_alpha(i, j);
            //
            //    loc_alpha = loc;
            //
            //    for(std::size_t i = 0; i < loc_alpha.size1(); ++i)
            //        for(std::size_t j = 0; j < loc_alpha.size2(); ++j)
            //            loc(piv(i) - 1, j) = loc_alpha(i, j);
            //
            //    if(skip_complement) {
            //        return loc;
            //    } else {
            //        arma::mat SS =
            //            *(m_system->basis_set.overlap_matrix);
            //
            //
            //        arma::mat Q(P.size1(), SS.size2());
            //
            //        gemm(P, SS, Q);
            //        Q = ublas::identity_matrix<double>(lapack_n, lapack_n) -
            //        Q;
            //
            //        arma::mat QT = trans(Q);
            //
            //        arma::mat DT_alpha(Q.size1(), Q.size2());
            //        gemm(Q, QT, DT_alpha);
            //
            //        LAPACK_DPSTRF(&lapack_uplo, &lapack_n, &DT_alpha(0, 0),
            //                      &lapack_n, &piv(0), &rank, &tol, &work(0),
            //                      &info);
            //
            //        m_no_complement = rank;
            //
            //        DT_alpha = trans(DT_alpha);
            //
            //        arma::mat DT = ublas::zero_matrix<double>(lapack_n, rank);
            //
            //        for(std::size_t i = 0; i < lapack_n; ++i)
            //            for(std::size_t j = 0; j <= std::min(int(i), rank -
            //            1); ++j)
            //                DT(i, j) = DT_alpha(i, j);
            //
            //        DT_alpha = DT;
            //
            //        for(std::size_t i = 0; i < DT_alpha.size1(); ++i)
            //            for(std::size_t j = 0; j < DT_alpha.size2(); ++j)
            //                DT(piv(i) - 1, j) = DT_alpha(i, j);
            //
            //        arma::mat DTT = trans(DT);
            //        arma::mat DTTS(DTT.size1(), SS.size2());
            //        arma::mat ST(DTTS.size1(), DT.size2());
            //        arma::mat loc_virt(DT.size1(), ST.size2());
            //        arma::mat ST_inv_root(ST.size1(), ST.size2());
            //
            //        gemm(DTT, SS, DTTS);
            //        gemm(DTTS, DT, ST);
            //        ST_inv_root = pow(ST, -0.5);
            //        gemm(DT, ST_inv_root, loc_virt);
            //
            //        arma::mat full_loc(lapack_n, loc.size2() +
            //        loc_virt.size2());
            //
            //        for(std::size_t i = 0; i < lapack_n; ++i)
            //            for(std::size_t j = 0; j < loc.size2(); ++j)
            //                full_loc(i, j) = loc(i, j);
            //
            //        for(std::size_t i = 0; i < lapack_n; ++i)
            //            for(std::size_t j = 0; j < loc_virt.size2(); ++j)
            //                full_loc(i, j + loc.size2()) = loc_virt(i, j);
            //
            //        return full_loc;
            //    }
        }
    }
}
