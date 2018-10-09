/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/pruned_grid.hpp"

#include <limits>

namespace {
    std::size_t
    adjust_angular_size(std::size_t requested_size,
                        const std::vector<std::size_t>& allowed_sizes)
    {
        for (std::size_t i = 0; i < allowed_sizes.size(); ++i)
            if (allowed_sizes[i] >= requested_size)
                return i;

        return allowed_sizes.size() - 1;
    }

    struct PruningParams {
        double hard_core_limit;
        double middle_core_limit;
        double valence_limit;
        double hard_core_factor;
        double middle_core_factor;
        double valence_factor;
    };

    /*
       setting angular grid pruning parameters,
       optimized means here that those from Gaussian
       has been revised to ensure efficiency and
       reliability - pruning should change
       current precision only negligibly
    */

    PruningParams set_pruning(const unsigned atom_no_electrons,
                              const double r_bs)
    {
        PruningParams params = {0, 0, 0, 1.0 / 16.0, 1.0 / 4.0, 1.0 / 2};

        if (atom_no_electrons == 1) { // optimized for H
            params.hard_core_limit = 0.2;
            params.middle_core_limit = 0.5;
            params.valence_limit = 0.75;
        } else if (atom_no_electrons == 2) { // first period
            params.hard_core_limit = 0.25 * r_bs;
            params.middle_core_limit = 0.5 * r_bs;
            params.valence_limit = 1.0 * r_bs;
        } else if (atom_no_electrons == 3) { // optimized for Li
            params.hard_core_limit = 0.4;
            params.middle_core_limit = 0.8;
            params.valence_limit = 1.3;
        } else if (atom_no_electrons == 6) { // optimized for C
            params.hard_core_limit = 0.2;
            params.middle_core_limit = 0.6;
            params.valence_limit = 1.0;
        } else if (atom_no_electrons <= 10) { // second period
            params.hard_core_limit = 0.1667 * r_bs;
            params.middle_core_limit = 0.5 * r_bs;
            params.valence_limit = 0.9 * r_bs;
        } else if (atom_no_electrons <= 18) { // third period
            params.hard_core_limit = 0.1 * r_bs;
            params.middle_core_limit = 0.4 * r_bs;
            params.valence_limit = 0.8 * r_bs;
        } else if (atom_no_electrons <= 36) { // fourth period
            params.hard_core_limit = 0.02 * r_bs;
            params.middle_core_limit = 0.1 * r_bs;
            params.valence_limit = 0.2 * r_bs;
        }

        return params;
    }
}

namespace niedoida {
    namespace grid {
        PrunedGrid::PrunedGrid(std::shared_ptr<const core::System> system,
                               std::unique_ptr<PartitionFunction> pf,
                               std::unique_ptr<RadialGrid> rg,
                               std::unique_ptr<SphericalGrid> sg,
                               std::shared_ptr<const core::AOValueEngineFactory>
                                   ao_value_engine_factory,
                               std::size_t spherical_grid_size) :
            ProductGrid(system,
                        std::move(pf),
                        std::move(rg),
                        std::move(sg),
                        ao_value_engine_factory),
            _system(system),
            _spherical_grid_size(spherical_grid_size)
        {
        }

        std::size_t
        PrunedGrid::spherical_grid_size(std::size_t a,
                                        double r,
                                        const PartitionFunction&,
                                        const SphericalGrid& sg) const
        {
            if (r <= std::numeric_limits<double>::epsilon())
                std::cout << "argh" << std::endl;

            if (r <= std::numeric_limits<double>::epsilon())
                return 0;

            const core::Atom& atom = *_system->atoms[a];
            const core::Element& element = *atom.isotope->element;
            const double r_bs = element.bragg_slater_radius;
            const unsigned atom_no_electrons = element.atomic_number;

            PruningParams pp = set_pruning(atom_no_electrons, r_bs);

            double t;
            if (r < pp.hard_core_limit) {
                t = pp.hard_core_factor * _spherical_grid_size;
            } else if (r >= pp.hard_core_limit && r < pp.middle_core_limit) {
                t = pp.middle_core_factor * _spherical_grid_size;
            } else if (r >= pp.middle_core_limit && r < pp.valence_limit) {
                t = pp.valence_factor * _spherical_grid_size;
            } else {
                t = _spherical_grid_size;
            }

            const std::size_t spherical_grid_size = std::max(
                static_cast<std::size_t>(t), static_cast<std::size_t>(12));

            return adjust_angular_size(spherical_grid_size, sg.allowed_sizes());
        }
    }
}
