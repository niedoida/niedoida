#include "core_kit/ao_symmetry.hpp"

#include "core_kit/basis_set_info.hpp"

#include "symmetry_kit/wigner_matrices.hpp"

namespace niedoida {
    namespace core {
        arma::cube ao_rotations(const System& system)
        {
            const symmetry::FiniteSymmetryGroup& fsg =
                system.symmetry_info->finite_symmetry_group();
            BasisSetInfo bsi(system.basis_set);

            const unsigned n = fsg.elements().size();

            arma::cube R(bsi.m_no_contractions,
                         bsi.m_no_contractions,
                         n,
                         arma::fill::zeros);

            for (unsigned o = 0; o < n; ++o) {

                const arma::mat& op = fsg.elements()[o];

                for (unsigned a = 0; a < system.atoms.size(); ++a) {
                    const AtomicBasisSet& abs =
                        *system.basis_set.atomic_basis_sets()[a];

                    arma::mat ar(
                        abs.real_size(), abs.real_size(), arma::fill::zeros);

                    unsigned c = 0;
                    for (unsigned s = 0; s < abs.valence_shells().size(); ++s) {
                        const Shell& shell = *abs.valence_shells()[s];
                        const std::vector<arma::mat> D =
                            symmetry::wigner_matrices(shell.l_max(), op);
                        for (unsigned l : shell.l()) {
                            const arma::mat& d = D[l];
                            ar.submat(
                                c, c, c + d.n_rows - 1, c + d.n_cols - 1) = d;
                            c += 2 * l + 1;
                        }
                    }

                    const unsigned ac = bsi.m_first_contraction_in_atom[a];
                    const unsigned b = system.symmetry_info->perm_rep()[o][a];
                    const unsigned bc = bsi.m_first_contraction_in_atom[b];

                    R.slice(o).submat(
                        bc, ac, bc + ar.n_rows - 1, ac + ar.n_cols - 1) = ar;
                }
            }

            return R;
        }

        arma::cube ao_projections(const System& system)
        {
            const unsigned bs = system.basis_set.real_size();
            const niedoida::symmetry::FiniteSymmetryGroup& fsg =
                system.symmetry_info->finite_symmetry_group();
            const arma::mat Chi = fsg.real_character_table();
            const arma::cube R = ao_rotations(system);
            arma::cube P(bs, bs, Chi.n_rows, arma::fill::zeros);

            for (unsigned nu = 0; nu < Chi.n_rows; ++nu) {
                double s = 0;
                for (unsigned cc = 0; cc < fsg.conjugacy_classes().size(); ++cc)
                    for (unsigned op : fsg.conjugacy_classes()[cc]) {
                        P.slice(nu) += Chi(nu, cc) * R.slice(op);
                        s += Chi(nu, cc) * Chi(nu, cc);
                    }

                P.slice(nu) /= fsg.rank();

                if (std::abs(s - fsg.rank()) < 1e-5)
                    P.slice(nu) *= Chi(nu, 0);
            }

            return P;
        }
    }
}
