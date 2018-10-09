/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "io_kit/log.hpp"
#include "symmetry_kit/symmetry_operation_info.hpp"

namespace niedoida {
    void update_symmetry_info(core::System& system, double eps)
    {
        io::Log::Section s("symmetry");

        const std::size_t n = system.atoms.size();

        arma::mat coords(3, n);
        std::vector<unsigned> q(n);

        for (unsigned i = 0; i < n; ++i) {
            for (unsigned j = 0; j < 3; ++j)
                coords(j, i) = system.atoms[i]->coords[j];
            q[i] = system.atoms[i]->isotope->element->atomic_number;
        }

        system.symmetry_info.reset(new symmetry::SymmetryInfo(coords, q, eps));

        const symmetry::SymmetryGroup& sg =
            system.symmetry_info->symmetry_group();

        if (!sg.is_finite()) {
            io::Log::instance().write(io::Logger::TERSE, "group", sg.name());
            io::Log::instance().write(
                io::Logger::TERSE, "rank", std::string("inf"));
        }

        const symmetry::FiniteSymmetryGroup& fsg =
            system.symmetry_info->finite_symmetry_group();
        io::Log::instance().write(
            io::Logger::TERSE, "finite_group", fsg.name());
        io::Log::instance().write(
            io::Logger::TERSE, "rank", static_cast<int>(fsg.rank()));

        std::vector<std::string> op_labels;

        for (unsigned cc = 0; cc < fsg.conjugacy_classes().size(); ++cc) {
            const arma::mat op =
                fsg.elements()[fsg.conjugacy_classes()[cc].front()];
            const symmetry::SymmetryOperationInfo e(op);

            std::string s;
            if (fsg.conjugacy_classes()[cc].size() != 1)
                s += std::to_string(fsg.conjugacy_classes()[cc].size());
            s += e.label();

            op_labels.push_back(s);
        }

        io::Logger::MatrixFormatInfo fi = io::Logger::DEFAULT_MATRIX_FORMAT;
        fi.row_labels = fsg.real_character_labels();
        fi.column_labels = op_labels;
        io::Log::instance().write(io::Logger::TERSE,
                                  "character table",
                                  fsg.real_character_table(),
                                  fi);

        const symmetry::FiniteSymmetryGroup& asg =
            largest_abelian_subgroup(fsg);
        io::Log::instance().write(
            io::Logger::TERSE, "largest_abelian_subgroup", asg.name());
        io::Log::instance().write(
            io::Logger::TERSE, "rank", static_cast<int>(asg.rank()));

        for (unsigned i = 0; i < n; ++i)
            for (unsigned j = 0; j < 3; ++j)
                system.atoms[i]->coords[j] =
                    system.symmetry_info->symmetrized_coords()(i, j);
    }
}
