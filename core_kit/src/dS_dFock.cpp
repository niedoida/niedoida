/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/dFock.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"
#include "cphf_kit/cphf_linear_response.hpp"
#include "scf_kit/scf_utils.hpp"

#include <cstdio>

#include "scf_kit/scf_utils.hpp"

#include <cmath>
#include <string>
#include <vector>

#include <boost/math/special_functions/gamma.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>

#include "core_kit/basis_set_info.hpp"
#include "core_kit/shell_quartet.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"
#include "core_kit/significant_shell_quartet_index_generator.hpp"

namespace niedoida {
    namespace core {

        void
        calc_dS_dFock(std::shared_ptr<const System> system,
                      std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen,
                      const arma::mat& C,
                      std::vector<unsigned>& atoms,
                      std::vector<arma::mat>& dS_x_occ_occ,
                      std::vector<arma::mat>& dS_y_occ_occ,
                      std::vector<arma::mat>& dS_z_occ_occ,
                      std::vector<arma::mat>& dFock_x_occ_occ,
                      std::vector<arma::mat>& dFock_y_occ_occ,
                      std::vector<arma::mat>& dFock_z_occ_occ,
                      std::vector<arma::mat>& dS_x_occ_virt,
                      std::vector<arma::mat>& dS_y_occ_virt,
                      std::vector<arma::mat>& dS_z_occ_virt,
                      std::vector<arma::mat>& dFock_x_occ_virt,
                      std::vector<arma::mat>& dFock_y_occ_virt,
                      std::vector<arma::mat>& dFock_z_occ_virt)
        {

            dS_x_occ_occ.clear();
            dS_y_occ_occ.clear();
            dS_z_occ_occ.clear();
            dFock_x_occ_occ.clear();
            dFock_y_occ_occ.clear();
            dFock_z_occ_occ.clear();
            dS_x_occ_virt.clear();
            dS_y_occ_virt.clear();
            dS_z_occ_virt.clear();
            dFock_x_occ_virt.clear();
            dFock_y_occ_virt.clear();
            dFock_z_occ_virt.clear();

            const unsigned n_atoms = atoms.size();
            unsigned n_occ = system->no_electrons(SPIN_ALPHA);
            unsigned n_orbitals = C.n_rows;

            std::unique_ptr<FockMatrixGenerator> FMG =
                fm_gen->make(system);
            arma::mat C_occ = C.submat(arma::span(0, n_orbitals - 1),
                                       arma::span(0, n_occ - 1));
            arma::mat C_occ_t = trans(C_occ);
            arma::mat P = scf::density_matrix(C, n_occ);
            FMG->set_density_matrix(P, P);
            FMG->calc_matrix_core_gradient(atoms, P);

            std::vector<arma::cube> dF_core = FMG->matrix_core_gradient(atoms);

            core::OS1OneElectronIntegralGradientEngine gradient_engine(system);

            arma::mat C_t = C.t();

            for (std::size_t atom = 0; atom < n_atoms; atom++) {

                arma::mat dsx;
                arma::mat dsy;
                arma::mat dsz;

                gradient_engine.overlap_gradient(atom, dsx, dsy, dsz);

                arma::mat s_x_temp = C_t * dsx * C;
                arma::mat s_y_temp = C_t * dsy * C;
                arma::mat s_z_temp = C_t * dsz * C;

                dS_x_occ_occ.push_back(s_x_temp.submat(
                    arma::span(0, n_occ - 1), arma::span(0, n_occ - 1)));
                dS_y_occ_occ.push_back(s_y_temp.submat(
                    arma::span(0, n_occ - 1), arma::span(0, n_occ - 1)));
                dS_z_occ_occ.push_back(s_z_temp.submat(
                    arma::span(0, n_occ - 1), arma::span(0, n_occ - 1)));

                dS_x_occ_virt.push_back(
                    s_x_temp.submat(arma::span(0, n_occ - 1),
                                    arma::span(n_occ, n_orbitals - 1)));
                dS_y_occ_virt.push_back(
                    s_y_temp.submat(arma::span(0, n_occ - 1),
                                    arma::span(n_occ, n_orbitals - 1)));
                dS_z_occ_virt.push_back(
                    s_z_temp.submat(arma::span(0, n_occ - 1),
                                    arma::span(n_occ, n_orbitals - 1)));

                arma::mat Fx_temp = C_t * dF_core[atom].slice(0) * C;
                arma::mat Fy_temp = C_t * dF_core[atom].slice(1) * C;
                arma::mat Fz_temp = C_t * dF_core[atom].slice(2) * C;

                dFock_x_occ_occ.push_back(Fx_temp.submat(
                    arma::span(0, n_occ - 1), arma::span(0, n_occ - 1)));
                dFock_y_occ_occ.push_back(Fy_temp.submat(
                    arma::span(0, n_occ - 1), arma::span(0, n_occ - 1)));
                dFock_z_occ_occ.push_back(Fz_temp.submat(
                    arma::span(0, n_occ - 1), arma::span(0, n_occ - 1)));

                dFock_x_occ_virt.push_back(
                    Fx_temp.submat(arma::span(0, n_occ - 1),
                                   arma::span(n_occ, n_orbitals - 1)));
                dFock_y_occ_virt.push_back(
                    Fy_temp.submat(arma::span(0, n_occ - 1),
                                   arma::span(n_occ, n_orbitals - 1)));
                dFock_z_occ_virt.push_back(
                    Fz_temp.submat(arma::span(0, n_occ - 1),
                                   arma::span(n_occ, n_orbitals - 1)));
            }
        }
    }
}
