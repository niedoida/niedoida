/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_integral_engine.hpp"

#include <boost/math/special_functions/gamma.hpp>

namespace niedoida {
    namespace gto {
        OS1Implementation::FlatBasisSet::FlatBasisSet(
            const core::BasisSet& bs) :
            max_l(0),
            max_primitive_size(0),
            max_naive_size(0),
            AAAA_max_size(0),
            BBBBBB_max_size(0),
            spherical(true)
        {
            using namespace std;

            unsigned contraction_number = 0;
            double shell_exps_max = 0;
            double shell_exps_min = 0;
            double exps_max = 0;
            double exps_min = 1e10; // quick hack
            for (unsigned i = 0; i < bs.atomic_basis_sets().size(); ++i) {
                core::AtomicBasisSet* abs = bs.atomic_basis_sets()[i];
                const core::Atom* atom = &(abs->atom());
                for (unsigned j = 0; j < abs->valence_shells().size(); ++j) {
                    core::Shell* shell = abs->valence_shells()[j];
                    shell_exps_min = 1e10; // quick hack
                    shell_exps_max = 0;
                    unsigned shell_AAAA_size =
                        shell->naive_size() * shell->naive_size() *
                        (2 * shell->l_max() + 1) * (2 * shell->l_max() + 2) *
                        (2 * shell->l_max() + 3) * (2 * shell->l_max() + 1) *
                        (2 * shell->l_max() + 2) * (2 * shell->l_max() + 3);
                    unsigned shell_BBBBBB_size =
                        shell->naive_size() * shell->naive_size() *
                        shell->naive_size() * shell->naive_size() *
                        (2 * shell->l_max() + 1) * (2 * shell->l_max() + 2) *
                        (2 * shell->l_max() + 3) * (2 * shell->l_max() + 1) *
                        (2 * shell->l_max() + 2) * (2 * shell->l_max() + 3);
                    if (shell_AAAA_size > AAAA_max_size)
                        AAAA_max_size = shell_AAAA_size;
                    if (shell_BBBBBB_size > BBBBBB_max_size)
                        BBBBBB_max_size = shell_BBBBBB_size;
                    if (shell->naive_size() > max_naive_size)
                        max_naive_size = shell->naive_size();
                    if (shell->primitive_exps().size() > max_primitive_size)
                        max_primitive_size = shell->primitive_exps().size();
                    if (shell->l_max() > max_l)
                        max_l = shell->l_max();
                    std::vector<double> s_type_primitive_norms(
                        shell->primitive_exps().size());
                    const arma::vec& primitive_exps = shell->primitive_exps();
                    for (unsigned k = 0; k < shell->primitive_exps().size();
                         ++k) {
                        s_type_primitive_norms[k] =
                            pow(2 * primitive_exps[k] /
                                    boost::math::double_constants::pi,
                                0.75) *
                            max(1.0,
                                pow(4 * primitive_exps[k],
                                    shell->l_max() / 2.0));
                        if (shell->primitive_exps()[k] > shell_exps_max)
                            shell_exps_max = shell->primitive_exps()[k];
                        if (shell->primitive_exps()[k] > exps_max)
                            exps_max = shell->primitive_exps()[k];
                        if (shell->primitive_exps()[k] < shell_exps_min)
                            shell_exps_min = shell->primitive_exps()[k];
                        if (shell->primitive_exps()[k] < exps_min)
                            exps_min = shell->primitive_exps()[k];
                    }

                    // prenorming contraction_coeffs in radial part
                    arma::mat prenormed_contraction_coeffs =
                        shell->contraction_coeffs();
                    const std::vector<unsigned>& l = shell->l();
                    for (unsigned p = 0;
                         p < prenormed_contraction_coeffs.n_rows;
                         ++p)
                        for (unsigned q = 0;
                             q < prenormed_contraction_coeffs.n_cols;
                             ++q)
                            prenormed_contraction_coeffs(p, q) *=
                                std::sqrt(2 / boost::math::tgamma(1.5 + l[p])) *
                                std::pow(2 * primitive_exps[q],
                                         0.75 + l[p] / 2.0) *
                                std::sqrt(
                                    (2 * l[p] + 1) /
                                    (4 * boost::math::double_constants::pi));

                    Shell es = {true,
                                shell_exps_min,
                                shell_exps_max,
                                contraction_number,
                                atom,
                                shell->l_min(),
                                shell->l_max(),
                                l,
                                primitive_exps,
                                prenormed_contraction_coeffs,
                                shell->real_size(),
                                shell->cartesian_size(),
                                shell->naive_size()};
                    shells.push_back(es);
                    contraction_number += shell->real_size();
                }
            }

            primitive_exps_max = exps_max;
            primitive_exps_min = exps_min;
            size = (spherical ? bs.real_size() : bs.cartesian_size());
        }
    }
}
