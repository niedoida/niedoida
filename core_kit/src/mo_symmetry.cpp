#include "core_kit/mo_symmetry.hpp"

#include "core_kit/ao_symmetry.hpp"
#include "io_kit/io_kit.hpp"

#include <boost/algorithm/string.hpp>

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

                    if (arma::norm(prj - arma::eye<arma::mat>(
                                             arma::size(prj))) < eps) {
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
    }
}
