/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "io_kit/log.hpp"
#include "property_kit/property_kit.hpp"

#include <string>

namespace {
    using namespace niedoida;

    void print_bond_orders(std::shared_ptr<const core::System> system,
                           const arma::mat& bond_orders,
                           const double threshold = 0.050)
    {
        io::Log::instance().write(
            io::Logger::NORMAL, "bond order threshold", threshold);

        std::vector<std::string> labels;
        arma::vec values(system->atoms.size() * system->atoms.size());
        std::size_t k = 0;
        for (std::size_t a = 0; a < system->atoms.size(); ++a)
            for (std::size_t b = a + 1; b < system->atoms.size(); ++b) {
                if (bond_orders(a, b) >= threshold) {
                    const std::string sa = std::to_string(a + 1);
                    const std::string sb = std::to_string(b + 1);
                    const std::string label = sa + " " + sb;
                    labels.push_back(label);
                    values(k) = bond_orders(a, b);
                    k += 1;
                }
            }

        io::Logger::VectorFormatInfo vfi = io::Logger::DEFAULT_VECTOR_FORMAT;

        vfi.labels = labels;

        io::Log::instance().write(
            io::Logger::NORMAL, "bond orders", values.head(k), vfi);
    }
}

namespace niedoida {
    void print_bond_order_analysis(const InputData& input_data,
                                   std::shared_ptr<const core::System> system,
                                   const arma::mat& P_alpha,
                                   const arma::mat& P_beta)
    {
        if (input_data.properties.bond_order_analyses.mayer) {
            io::Log::Section mayer_section("Mayer analysis");

            // Mayer bond order analysis
            const property::MayerAnalysis mayer(
                system->basis_set, P_alpha, P_beta);

            print_bond_orders(system, mayer.bond_orders());

            io::Log::instance().write(
                io::Logger::NORMAL, "Vtotal", mayer.total_valences());
            io::Log::instance().write(
                io::Logger::NORMAL, "Vfree", mayer.free_valences());
        }

        if (input_data.properties.bond_order_analyses.gopinathan_jug) {
            io::Log::Section gj_section("Gopinathan-Jug analysis");

            const arma::mat S12 =
                arma::sqrtmat_sympd(*system->basis_set.overlap_matrix);

            const arma::mat ort_P_alpha = S12 * P_alpha * S12,
                            ort_P_beta = S12 * P_beta * S12;

            // Gopinathan-Jug bond order analysis
            const property::GopinathanAnalysis gopi(
                system->basis_set, ort_P_alpha, ort_P_beta);

            print_bond_orders(system, gopi.bond_orders());
        }

        if (input_data.properties.bond_order_analyses.nalewajski) {
            io::Log::Section gj_section("Nalewajski-Mrozek analysis");

            const property::NalewajskiAnalysis nalewajski(
                P_alpha,
                P_beta,
                *system->basis_set.overlap_matrix,
                system->promolecule->first_orbital_in_fragment(),
                system->promolecule->no_orbitals_in_fragment(),
                system->promolecule->no_core_states_in_fragment(),
                system->promolecule->no_deg_states_in_fragment(),
                system->promolecule->no_deg_electrons_in_fragment(),
                system->promolecule->fo_coefficients(core::SPIN_ALPHA));

            print_bond_orders(system, nalewajski.bond_orders());

            io::Log::instance().write(io::Logger::NORMAL,
                                      "Vab",
                                      nalewajski.interatomic_contributions());
            io::Log::instance().write(io::Logger::NORMAL,
                                      "Vi",
                                      nalewajski.atomic_ionic_contributions());
            io::Log::instance().write(
                io::Logger::NORMAL,
                "Vc",
                nalewajski.atomic_covalent_contributions());
        }
    }
}
