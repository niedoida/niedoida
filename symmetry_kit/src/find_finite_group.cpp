/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

#include "symmetry_kit/find_symmetry_utils.hpp"

namespace {
    class UnknownSymmetryGroup
        : public niedoida::symmetry::FiniteSymmetryGroup {
    public:
        UnknownSymmetryGroup(const std::vector<arma::mat>& generators) :
            FiniteSymmetryGroup(generators)
        {
        }

        std::string name() const { return "???"; }
    };
}

namespace niedoida {
    namespace symmetry {
        const FiniteSymmetryGroup& find_finite_group(const AxisSet& axes,
                                                     const VectorSet& planes)
        {
            std::vector<arma::mat> generators;
            for (AxisSet::const_iterator i = axes.begin(); i != axes.end();
                 ++i) {
                generators.push_back(make_axis_rep((*i).fold, (*i).vec));
            }
            for (VectorSet::const_iterator i = planes.begin();
                 i != planes.end();
                 ++i) {
                generators.push_back(make_sigma_rep(*i));
            }
            const FiniteSymmetryGroup* result =
                dynamic_cast<const FiniteSymmetryGroup*>(
                    &SymmetryGroups::instance().get("C1"));

            UnknownSymmetryGroup unknown(generators);

            const SymmetryGroups& groups = SymmetryGroups::instance();

            for (SymmetryGroups::iterator g = groups.begin(); g != groups.end();
                 ++g) {
                if (!g->second->is_finite())
                    continue;

                const FiniteSymmetryGroup& fg =
                    dynamic_cast<const FiniteSymmetryGroup&>(*(*g).second);

                if (is_subgroup(fg, unknown) && fg.rank() > result->rank()) {
                    result = &fg;
                }
            }
            return *result;
        }
    }
}
