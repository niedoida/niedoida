/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator.hpp"

#include "core_kit/os1_integral_gradient_engine.hpp"

#include "scf_kit/scf_utils.hpp"

#include "io_kit/log.hpp"

namespace niedoida {
    namespace core {

        std::vector<arma::cube> HFFockMatrixGenerator::matrix_core_gradient(
            const std::vector<unsigned>& atoms) const
        {
            const std::size_t n = atoms.size();
            const std::size_t no_orbitals = m_P[SPIN_ALPHA].n_rows;

            std::vector<arma::cube> g(
                n, arma::cube(no_orbitals, no_orbitals, 3, arma::fill::zeros));
            for (std::size_t index = 0; index < n; ++index) {
                const std::size_t a = atoms[index];

                OS1OneElectronIntegralGradientEngine gradient_engine(m_system);

                arma::mat dTx;
                arma::mat dTy;
                arma::mat dTz;

                arma::mat dVnex;
                arma::mat dVney;
                arma::mat dVnez;

                gradient_engine.kinetic_gradient(a, dTx, dTy, dTz);

                gradient_engine.ne_gradient(a, dVnex, dVney, dVnez);

                // summing up T and Vne gradient matrices
                dTx -= dVnex;
                dTy -= dVney;
                dTz -= dVnez;

                g[index].slice(0) += dTx;
                g[index].slice(1) += dTy;
                g[index].slice(2) += dTz;
            }

            std::vector<arma::cube> g_coulomb = coulomb_matrix_core_gradient();
            std::vector<arma::cube> g_exchange =
                exchange_matrix_core_gradient();

            for (std::size_t atom_ind = 0; atom_ind < n; atom_ind++)
                g[atom_ind] += g_coulomb[atom_ind] + g_exchange[atom_ind];

            return g;
        }
    }
}