/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "compat_kit/molcas_basis_set_builder.hpp"

#include <boost/algorithm/string.hpp>

#include "core_kit/core_utils.hpp"

namespace niedoida {
    namespace compat {
        MolcasBasisSetBuilder::MolcasBasisSetBuilder(std::istream& is)
        {
            while (is) {
                std::string line;
                std::getline(is, line);
                boost::algorithm::trim(line);

                if (line != "Basis set")
                    continue;

                std::getline(is, line);
                boost::algorithm::trim(line);

                std::vector<std::string> tokens;

                // boost::algorithm::split(tokens, line, boost::is_any_of("
                // */"), boost::token_compress_on); std::string element_name =
                // tokens[1];

                std::getline(is, line);
                boost::algorithm::trim(line);
                boost::algorithm::split(tokens,
                                        line,
                                        boost::is_any_of(" "),
                                        boost::token_compress_on);

                const unsigned atomic_number = std::stod(tokens[0]);
                const unsigned max_l = std::stoi(tokens[1]);

                Representation rep;
                for (unsigned l = 0; l <= max_l; ++l) {
                    do {
                        std::getline(is, line);
                        boost::algorithm::trim(line);
                    } while (boost::algorithm::starts_with(line, "*"));

                    boost::algorithm::split(tokens,
                                            line,
                                            boost::is_any_of(" "),
                                            boost::token_compress_on);
                    const unsigned no_primitives = std::stoi(tokens[0]);
                    const unsigned no_contractions = std::stoi(tokens[1]);

                    MolcasShell shell;

                    shell.l = l;

                    shell.exps.set_size(no_primitives);
                    for (unsigned p = 0; p < no_primitives; ++p) {
                        std::getline(is, line);
                        boost::algorithm::trim(line);
                        shell.exps(p) = std::stod(line);
                    }

                    shell.coeffs.set_size(no_contractions, no_primitives);
                    for (unsigned p = 0; p < no_primitives; ++p) {
                        std::getline(is, line);
                        boost::algorithm::trim(line);
                        boost::algorithm::split(tokens,
                                                line,
                                                boost::is_any_of(" "),
                                                boost::token_compress_on);
                        for (unsigned c = 0; c < no_contractions; ++c)
                            shell.coeffs(c, p) = std::stod(tokens[c]);
                    }

                    rep.shells.push_back(shell);
                }
                representations_map[atomic_number] = rep;
            }
        }

        void
        MolcasBasisSetBuilder::build_atomic_basis_set(core::AtomicBasisSet& abs)
        {
            ElementRepMap::iterator rep_map_it = representations_map.find(
                abs.atom().isotope->element->atomic_number);

            if (rep_map_it == representations_map.end())
                throw std::runtime_error(
                    std::string("MOLCAS basis set: unknown element name: ") +
                    abs.atom().isotope->element->name);

            const MolcasBasisSetBuilder::Representation& rep =
                rep_map_it->second;

            for (unsigned i = 0; i < rep.shells.size(); ++i) {
                const std::vector<unsigned> l(rep.shells[i].coeffs.n_rows,
                                              rep.shells[i].l);
                abs.add_valence_shell().fill(
                    l, rep.shells[i].exps, rep.shells[i].coeffs);
            }
        }
    }
}
