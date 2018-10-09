/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "io_kit/log.hpp"

namespace niedoida {
    void do_scf(scf::SCF& scf,
                double energy_unit,
                unsigned max_no_iterations,
                boost::optional<compat::MoldenFileBuilder> molden_file_builder)
    {
        double Ee = 0;
        arma::mat P_alpha = scf.density_matrix(core::SPIN_ALPHA);
        arma::mat P_beta = scf.density_matrix(core::SPIN_BETA);

        for (unsigned i = 0; !scf.is_converged() && i < max_no_iterations;
             ++i) {
            io::Log::instance().write(io::Logger::TERSE, "i", (int)i);

            scf.next_iteration();
            const double dE = scf.electronic_energy() * energy_unit - Ee;
            Ee = scf.electronic_energy() * energy_unit;

            const arma::mat dP_alpha =
                P_alpha - scf.density_matrix(core::SPIN_ALPHA);
            const arma::mat dP_beta =
                P_beta - scf.density_matrix(core::SPIN_BETA);

            P_alpha = scf.density_matrix(core::SPIN_ALPHA);
            P_beta = scf.density_matrix(core::SPIN_BETA);

            const std::size_t n = dP_alpha.n_rows;

            const double norm_f_P = std::max(arma::norm(dP_alpha, "fro"),
                                             arma::norm(dP_beta, "fro"));
            const double norm_rms_P = norm_f_P / (n * n);

            double norm_max_P = 0;
            for (std::size_t ia = 0; ia < n; ++ia)
                for (std::size_t ib = 0; ib < n; ++ib) {
                    if (std::abs(dP_alpha(ia, ib)) > norm_max_P)
                        norm_max_P = dP_alpha(ia, ib);
                    if (std::abs(dP_beta(ia, ib)) > norm_max_P)
                        norm_max_P = dP_beta(ia, ib);
                }

            io::Log::instance().write(io::Logger::TERSE, "E", Ee);
            io::Log::instance().write(io::Logger::TERSE, "dE", dE);
            io::Log::instance().write(io::Logger::TERSE, "dPRMS", norm_rms_P);
            io::Log::instance().write(io::Logger::TERSE, "dPMax", norm_max_P);

            if (molden_file_builder) {
                if (scf.is_restricted())
                    molden_file_builder->add_scf_step(
                        Ee,
                        scf.mo_energies(core::SPIN_ALPHA),
                        scf.mo_coefficients(core::SPIN_ALPHA),
                        scf.mo_occupations(core::SPIN_ALPHA));
                else
                    molden_file_builder->add_scf_step(
                        Ee,
                        scf.mo_energies(core::SPIN_ALPHA),
                        scf.mo_energies(core::SPIN_BETA),
                        scf.mo_coefficients(core::SPIN_ALPHA),
                        scf.mo_coefficients(core::SPIN_BETA),
                        scf.mo_occupations(core::SPIN_ALPHA),
                        scf.mo_occupations(core::SPIN_BETA));
            }
        }
    }
}
