/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/hessian_engine.hpp"

#include <cmath>

#include <boost/math/constants/constants.hpp>
#include <boost/math/special_functions/gamma.hpp>

namespace niedoida {
    namespace core {
        OneElectronD2IntegralEngine::OneElectronD2IntegralEngine(
            std::shared_ptr<const System> system) :
            _no_atoms(system->atoms.size()),
            _xAB(arma::zeros<arma::mat>(system->atoms.size(),
                                        system->atoms.size())),
            _yAB(arma::zeros<arma::mat>(system->atoms.size(),
                                        system->atoms.size())),
            _zAB(arma::zeros<arma::mat>(system->atoms.size(),
                                        system->atoms.size())),
            _r(arma::zeros<arma::mat>(system->atoms.size(), 3)),
            _no_contractions(system->basis_set.real_size()),
            _charge(std::vector<unsigned int>(system->atoms.size()))
        {
            using namespace boost::math::double_constants;

            for (std::size_t C = 0; C < _no_atoms; ++C) {
                const arma::vec coords = system->atoms[C]->coords;
                _r(C, 0) = coords[0];
                _r(C, 1) = coords[1];
                _r(C, 2) = coords[2];
                const unsigned int no_electrons =
                    system->atoms[C]->isotope->element->atomic_number;
                _charge[C] = no_electrons;
            }

            for (std::size_t A = 0; A < _no_atoms; ++A) {
                for (std::size_t B = 0; B < _no_atoms; ++B) {
                    _xAB(A, B) = _r(A, 0) - _r(B, 0);
                    _yAB(A, B) = _r(A, 1) - _r(B, 1);
                    _zAB(A, B) = _r(A, 2) - _r(B, 2);
                }
            }

            for (std::size_t A = 0, first_Ai = 0; A < _no_atoms;
                 first_Ai +=
                 system->basis_set.atomic_basis_sets()[A++]->real_size())
                _first_contraction_on_atom.push_back(first_Ai);

            for (std::size_t A = 0, first_shell = 0; A < _no_atoms; ++A) {

                const AtomicBasisSet& Abs =
                    *system->basis_set.atomic_basis_sets()[A];

                _first_shell_on_atom.push_back(first_shell);
                _no_shells_on_atom.push_back(Abs.valence_shells().size());

                first_shell += Abs.valence_shells().size();

                for (std::size_t Asi = 0; Asi < Abs.valence_shells().size();
                     ++Asi) {

                    Shell As = {
                        Abs.valence_shells()[Asi]->l(),
                        Abs.valence_shells()[Asi]->primitive_exps(),
                        Abs.valence_shells()[Asi]->contraction_coeffs()};

                    for (unsigned p = 0; p < As.coeffs.n_rows; ++p) {
                        const unsigned l = As.l[p];

                        for (unsigned q = 0; q < As.coeffs.n_cols; ++q)
                            As.coeffs(p, q) *=
                                std::sqrt(2 / boost::math::tgamma(1.5 + l)) *
                                std::pow(2 * As.exps[q], 0.75 + l / 2.0) *
                                std::sqrt((2 * l + 1) / (4 * pi));
                    }

                    _shells.push_back(As);
                }
            }
        }

        void OneElectronD2IntegralEngine::clear_overlap_kinetic_matrices(
            arma::mat& d2sxx,
            arma::mat& d2sxy,
            arma::mat& d2sxz,
            arma::mat& d2syy,
            arma::mat& d2syz,
            arma::mat& d2szz) const
        {
            if (d2sxx.n_rows == _no_contractions &&
                d2sxx.n_cols == _no_contractions)
                d2sxx.zeros();
            else
                d2sxx =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2sxy.n_rows == _no_contractions &&
                d2sxy.n_cols == _no_contractions)
                d2sxy.zeros();
            else
                d2sxy =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2sxz.n_rows == _no_contractions &&
                d2sxz.n_cols == _no_contractions)
                d2sxz.zeros();
            else
                d2sxz =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2syy.n_rows == _no_contractions &&
                d2syy.n_cols == _no_contractions)
                d2syy.zeros();
            else
                d2syy =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2syz.n_rows == _no_contractions &&
                d2syz.n_cols == _no_contractions)
                d2syz.zeros();
            else
                d2syz =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2szz.n_rows == _no_contractions &&
                d2szz.n_cols == _no_contractions)
                d2szz.zeros();
            else
                d2szz =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);
        }

        void OneElectronD2IntegralEngine::clear_coulomb_matrices(
            arma::mat& d2sxx,
            arma::mat& d2sxy,
            arma::mat& d2sxz,
            arma::mat& d2syx,
            arma::mat& d2syy,
            arma::mat& d2syz,
            arma::mat& d2szx,
            arma::mat& d2szy,
            arma::mat& d2szz) const
        {
            if (d2sxx.n_rows == _no_contractions &&
                d2sxx.n_cols == _no_contractions)
                d2sxx.zeros();
            else
                d2sxx =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2sxy.n_rows == _no_contractions &&
                d2sxy.n_cols == _no_contractions)
                d2sxy.zeros();
            else
                d2sxy =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2sxz.n_rows == _no_contractions &&
                d2sxz.n_cols == _no_contractions)
                d2sxz.zeros();
            else
                d2sxz =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2syx.n_rows == _no_contractions &&
                d2syx.n_cols == _no_contractions)
                d2syx.zeros();
            else
                d2syx =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2syy.n_rows == _no_contractions &&
                d2syy.n_cols == _no_contractions)
                d2syy.zeros();
            else
                d2syy =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2syz.n_rows == _no_contractions &&
                d2syz.n_cols == _no_contractions)
                d2syz.zeros();
            else
                d2syz =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2szx.n_rows == _no_contractions &&
                d2szx.n_cols == _no_contractions)
                d2szx.zeros();
            else
                d2szx =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2szy.n_rows == _no_contractions &&
                d2szy.n_cols == _no_contractions)
                d2szy.zeros();
            else
                d2szy =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);

            if (d2szz.n_rows == _no_contractions &&
                d2szz.n_cols == _no_contractions)
                d2szz.zeros();
            else
                d2szz =
                    arma::zeros<arma::mat>(_no_contractions, _no_contractions);
        }
    }
}
