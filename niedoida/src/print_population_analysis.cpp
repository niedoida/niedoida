/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "niedoida/niedoida.hpp"
#include "property_kit/property_kit.hpp"

namespace niedoida {
    void print_population_analysis(
        const InputData& input_data,
        std::shared_ptr<const core::System> system,
        const arma::mat& P_alpha,
        const arma::mat& P_beta,
        std::shared_ptr<const grid::GridFactory> grid_factory)
    {
        const arma::mat S = *system->basis_set.overlap_matrix;

        arma::vec atomic_numbers(system->atoms.size());
        for (std::size_t a = 0; a < system->atoms.size(); ++a)
            atomic_numbers(a) =
                system->atoms[a]->isotope->element->atomic_number;

        if (input_data.properties.population_analyses.mulliken) {
            io::Log::Section mulliken_section("Mulliken analysis");

            // Mulliken and Lowdin pop. analysis
            const property::MullikenAnalysis mulliken(
                system->basis_set, S, P_alpha, P_beta);

            io::Log::instance().write(io::Logger::NORMAL,
                                      "Mulliken orbital populations",
                                      mulliken.orbital_populations());
            io::Log::instance().write(io::Logger::NORMAL,
                                      "Mulliken atomic populations",
                                      mulliken.atomic_populations());

            io::Log::instance().write(
                io::Logger::NORMAL,
                "Mulliken atomic charges",
                arma::vec(atomic_numbers - mulliken.atomic_populations()));

            io::Log::instance().write(io::Logger::NORMAL,
                                      "Mulliken overlap populations",
                                      mulliken.overlap_populations());
        }

        if (input_data.properties.population_analyses.lowdin) {
            io::Log::Section lowdin_section("Lowdin analysis");

            arma::mat S12 = arma::sqrtmat_sympd(S);

            const property::LowdinAnalysis lowdin(
                system->basis_set, S12 * P_alpha * S12, S12 * P_beta * S12);

            io::Log::instance().write(io::Logger::NORMAL,
                                      "Lowdin orbital populations",
                                      lowdin.orbital_populations());
            io::Log::instance().write(io::Logger::NORMAL,
                                      "Lowdin atomic populations",
                                      lowdin.atomic_populations());
            io::Log::instance().write(
                io::Logger::NORMAL,
                "Lowdin atomic charges",
                arma::vec(atomic_numbers - lowdin.atomic_populations()));
        }

        //        if (input_data.properties.population_analyses.hirshfeld) {
        //            io::Log::Section hirshfeld_section("Hirshfeld analysis");
        //
        //            const arma::mat P = P_alpha + P_beta;
        //
        //            // FIXME:
        //            std::unique_ptr<core::Grid> grid =
        //            grid_factory->make(system);
        //            std::unique_ptr<core::AOValueEngine> ao_value_engine(
        //                    new gto::GTOValueEngine(system->basis_set));
        //
        //            property::HirshfeldAnalysis hirshfeld(system,
        //                P,
        //                system->promolecule,
        //                std::move(grid),
        //                std::move(ao_value_engine));
        //
        //            io::Log::instance().write(
        //                    io::Logger::NORMAL,
        //                    "Hirshfeld atomic populations",
        //                    hirshfeld.atomic_populations());
        //
        //            io::Log::instance().write(
        //                    io::Logger::NORMAL,
        //                    "Hirshfeld atomic charges",
        //                    arma::vec(atomic_numbers -
        //                    hirshfeld.atomic_populations()));
        //        }

        //        if (input_data.properties.population_analyses.voronoi) {
        //            io::Log::Section voronoi_section("Voronoi analysis");
        //
        //            const arma::mat P = P_alpha + P_beta;
        //
        //            // FIXME:
        //            std::unique_ptr<core::Grid> grid =
        //            grid_factory->make(system);
        //            std::unique_ptr<core::AOValueEngine> ao_value_engine(
        //                    new gto::GTOValueEngine(system->basis_set));
        //
        //            property::VoronoiAnalysis voronoi(system, P,
        //            std::move(grid), std::move(ao_value_engine));
        //
        //            io::Log::instance().write(
        //                    io::Logger::NORMAL,
        //                    "Voronoi atomic populations",
        //                    voronoi.atomic_populations());
        //
        //            io::Log::instance().write(
        //                    io::Logger::NORMAL,
        //                    "Voronoi atomic charges",
        //                    arma::vec(atomic_numbers -
        //                    voronoi.atomic_populations()));
        //        }

        if (input_data.properties.population_analyses.bader) {
            io::Log::Section voronoi_section("Bader analysis");

            const arma::mat P = P_alpha + P_beta;

            std::unique_ptr<core::AOValueEngine> ao_value_engine(
                new gto::GTOValueEngine(system->basis_set));

            property::BaderAnalysis bader(
                system, P, std::move(ao_value_engine));

            io::Log::instance().write(io::Logger::NORMAL,
                                      "Bader atomic populations",
                                      bader.atomic_populations());

            io::Log::instance().write(
                io::Logger::NORMAL,
                "Bader atomic charges",
                arma::vec(atomic_numbers - bader.atomic_populations()));
        }
    }
}
