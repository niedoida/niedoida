/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/mo_symmetry.hpp"
#include "core_kit/ao_symmetry.hpp"
#include "io_kit/io_kit.hpp"

#include <boost/algorithm/string.hpp>

namespace {
    arma::uvec irrep_product(const arma::mat& rct,
                             const arma::uvec& cc_sizes,
                             const arma::uvec& ss,
                             arma::uword mo)
    {
        arma::vec characters(rct.n_cols, arma::fill::zeros);
        for (unsigned g = 0; g < rct.n_cols; ++g)
            for (unsigned irrep = 0; irrep < rct.n_rows; ++irrep)
                characters(g) += rct(mo, g) * rct(irrep, g) * ss(irrep);

        const unsigned order = arma::sum(cc_sizes);
        arma::uvec decomposed(rct.n_rows, arma::fill::zeros);

        for (unsigned row = 0; row < rct.n_rows; ++row) {
            double result = 0;

            for (unsigned g = 0; g < rct.n_cols; ++g)
                result += characters(g) * rct(row, g) * cc_sizes(g);
            result /= order;
            decomposed(row) = static_cast<unsigned>(std::round(result));
        }

        return decomposed;
    }
}

namespace niedoida {
    namespace core {
        arma::uvec mo_degeneracy(const core::System& system,
                                 const arma::vec& energies,
                                 const double eps)
        {
            const arma::vec delta = arma::diff(energies);

            arma::uvec degeneracy(1, arma::fill::ones);
            for (unsigned i = 0; i < delta.n_rows; ++i)
                if (delta(i) < eps)
                    degeneracy.tail(1) += 1;
                else
                    degeneracy =
                        arma::join_cols(degeneracy, arma::ones<arma::uvec>(1));

            return degeneracy;
        }

        arma::mat symmetrize_mo(const core::System& system,
                                const arma::vec& energies,
                                const arma::mat& C,
                                const double eps)
        {
            const arma::uvec degeneracy = mo_degeneracy(system, energies, eps);

            const arma::mat SC = *system.basis_set.overlap_matrix * C;
            const arma::cube P = ao_projections(system);
            arma::cube projected_C(arma::size(P));
            for (unsigned nu = 0; nu < P.n_slices; ++nu)
                projected_C.slice(nu) = P.slice(nu) * C;

            arma::mat D(C.n_rows, 0);

            for (unsigned i = 0, j = 0; j < degeneracy.n_rows;
                 i += degeneracy(j++)) {
                const unsigned da = degeneracy(j);
                for (unsigned nu = 0; nu < P.n_slices; ++nu) {
                    const arma::mat prj =
                        projected_C.slice(nu).cols(i, i + da - 1).t() *
                        SC.cols(i, i + da - 1);

                    if (arma::norm(prj) < eps)
                        continue;

                    if (arma::norm(prj - arma::eye<arma::mat>(arma::size(prj))) < eps) {
                        D = arma::join_rows(D, C.cols(i, i + da - 1));
                        continue;
                    }

                    arma::vec eval;
                    arma::mat evec;
                    arma::eig_sym(eval, evec, prj);

                    D = arma::join_rows(D,
                                        C.cols(i, i + da - 1) *
                                            evec.cols(arma::find(eval > 0.99)));
                }
            }

            if (arma::size(C) != arma::size(D)) {
                io::Log::instance().write(
                    io::Logger::TERSE,
                    "warning",
                    "failed to symmetrize molecular orbitals");

                D = C;
            }

            return D;
        }

        arma::uvec mo_symmetry(const core::System& system, const arma::mat& C)
        {
            const arma::cube P = ao_projections(system);

            const arma::mat SC = *system.basis_set.overlap_matrix * C;

            arma::uvec irreps(C.n_cols);

            arma::cube projected_C(arma::size(P));
            for (unsigned nu = 0; nu < P.n_slices; ++nu)
                projected_C.slice(nu) = P.slice(nu) * C;

            for (unsigned i = 0; i < C.n_cols; ++i) {
                irreps(i) = arma::uword(-1);
                for (unsigned nu = 0; nu < P.n_slices; ++nu) {
                    if (std::abs(arma::dot(projected_C.slice(nu).col(i),
                                           SC.col(i))) > 0.99) {
                        irreps(i) = nu;
                        break;
                    }
                }
            }

            return irreps;
        }

        std::vector<std::string> mo_symmetry_labels(const core::System& system,
                                                    const arma::mat& C)
        {
            const arma::uvec irreps = mo_symmetry(system, C);
            std::vector<std::string> labels(irreps.size(), "?");

            for (unsigned i = 0; i < C.n_cols; ++i) {
                if (irreps(i) != arma::uword(-1))
                    labels[i] = system.symmetry_info->finite_symmetry_group()
                                    .real_character_labels()[irreps(i)];
                labels[i] = std::to_string(i + 1) + " - " + labels[i];
            }

            for (std::string& l : labels)
                boost::algorithm::to_lower(l);

            return labels;
        }

        arma::uword state_symmetry(const arma::mat& rct,
                                   const arma::uvec& cc_sizes,
                                   const arma::vec& occ,
                                   const arma::uvec& degeneracy,
                                   const arma::uvec& mo_symmetry)
        {
            arma::uvec ss(rct.n_rows, arma::fill::zeros);
            ss(0) = 1;

            for (unsigned i = 0, j = 0; j < degeneracy.n_rows; i += degeneracy(j++)) {
                const unsigned d = degeneracy(j);
                const unsigned n =
                        static_cast<unsigned>(std::round(arma::sum(occ.rows(i, i + d - 1))));

                if (n == 0)
                    break;

                for (unsigned k = 0; k < d; ++k)
                    if (mo_symmetry(i + k) == arma::uword(-1))
                        return -1;

                if (n == 2 * d)
                    continue;

                for (unsigned k = 0; k < d; ++k)
                    if (static_cast<unsigned>(std::round(occ(i + k))) != 2)
                        ss = irrep_product(rct, cc_sizes, ss, mo_symmetry(i + k));
            }

            if (arma::sum(ss) > 1)
                return -1;
            return arma::uvec(arma::find(ss))(0);
        }
    }
}
