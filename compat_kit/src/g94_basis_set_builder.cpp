/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "compat_kit/g94_basis_set_builder.hpp"

#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/constants.hpp>

#include "core_kit/core_utils.hpp"

namespace niedoida {
    namespace compat {
        G94BasisSetBuilder::G94BasisSetBuilder(std::istream& is)
        {
            while (is) {
                std::string line;
                std::getline(is, line);
                boost::algorithm::trim(line);

                if (line.empty() || boost::algorithm::starts_with(line, "!") ||
                    boost::algorithm::starts_with(line, "BASIS="))
                    continue;

                std::vector<std::string> tokens;
                boost::algorithm::split(tokens,
                                        line,
                                        boost::is_any_of(" "),
                                        boost::token_compress_on);

                const std::string element = tokens[0];
                Representation rep;
                rep.coefficient = std::stoi(tokens[1]);

                std::getline(is, line);
                boost::algorithm::trim(line);
                while (is && line != "****") {
                    G94Shell shell;
                    boost::algorithm::split(tokens,
                                            line,
                                            boost::is_any_of(" "),
                                            boost::token_compress_on);
                    shell.type = tokens[0];
                    std::size_t no_primitives = std::stoi(tokens[1]);
                    shell.scaling_factor = std::stod(tokens[2]);

                    shell.exps.set_size(no_primitives);
                    shell.coeffs.set_size(shell.type.size(), no_primitives);
                    for (std::size_t i = 0; i < no_primitives; ++i) {
                        std::getline(is, line);
                        boost::algorithm::trim(line);
                        boost::algorithm::split(tokens,
                                                line,
                                                boost::is_any_of(" "),
                                                boost::token_compress_on);
                        shell.exps(i) = std::stod(tokens[0]);
                        for (std::size_t j = 1; j < tokens.size(); ++j)
                            shell.coeffs(j - 1, i) = std::stod(tokens[j]);
                    }

                    rep.shell.push_back(shell);

                    std::getline(is, line);
                    boost::algorithm::trim(line);
                }

                // skip aux basis set in case it's appended to the regular one
                if (representations_map.find(element) !=
                    representations_map.end())
                    continue;

                representations_map[element] = rep;
            }
        }

        void
        G94BasisSetBuilder::build_atomic_basis_set(core::AtomicBasisSet& abs)
        {

            ElementRepMap::iterator rep_map_it =
                representations_map.find(abs.atom().isotope->element->symbol);

            if (rep_map_it == representations_map.end())
                throw std::runtime_error(
                    "g94 basis set: unknown element symbol");

            const G94BasisSetBuilder::Representation& rep = rep_map_it->second;

            for (unsigned i = 0; i < rep.shell.size(); ++i) {
                std::vector<unsigned> l;
                for (unsigned t : rep.shell[i].type)
                    l.push_back(core::shell_symbol_to_l(t));

                abs.add_valence_shell().fill(
                    l, rep.shell[i].exps, rep.shell[i].coeffs);
            }
        }
    }
}
