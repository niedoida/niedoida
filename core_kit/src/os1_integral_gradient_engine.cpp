/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/os1_integral_gradient_engine.hpp"

#include <cmath>

#include <boost/math/constants/constants.hpp>
#include <boost/math/special_functions/gamma.hpp>

namespace niedoida {
    namespace core {
        OS1OneElectronIntegralGradientEngine::
            OS1OneElectronIntegralGradientEngine(
                std::shared_ptr<const System> system) :
            _no_atoms(system->atoms.size()),
            _xAB(system->atoms.size(), system->atoms.size(), arma::fill::zeros),
            _yAB(system->atoms.size(), system->atoms.size(), arma::fill::zeros),
            _zAB(system->atoms.size(), system->atoms.size(), arma::fill::zeros),
            _r(system->atoms.size(), 3, arma::fill::zeros),
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
                                std::sqrt((2 * l + 1) / (4 * M_PI));
                    }

                    _shells.push_back(As);
                }
            }
        }

        void OS1OneElectronIntegralGradientEngine::clear_matrices(
            arma::mat& gx, arma::mat& gy, arma::mat& gz) const
        {
            if (gx.n_rows == _no_contractions && gx.n_cols == _no_contractions)
                gx.zeros();
            else
                gx.zeros(_no_contractions, _no_contractions);

            if (gy.n_rows == _no_contractions && gy.n_cols == _no_contractions)
                gy.zeros();
            else
                gy.zeros(_no_contractions, _no_contractions);

            if (gz.n_rows == _no_contractions && gz.n_cols == _no_contractions)
                gz.zeros();
            else
                gz.zeros(_no_contractions, _no_contractions);
        }
    }
}
