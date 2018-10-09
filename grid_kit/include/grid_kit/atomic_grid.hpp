/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_ATOMIC_GRID_HPP
#define NIEDOIDA_GRID_KIT_ATOMIC_GRID_HPP

#include <memory>
#include "core_kit/grid.hpp"
#include "grid_kit/partition_function.hpp"

namespace niedoida {
    namespace grid {
        class AtomicGrid: public core::Grid {
        public:
            AtomicGrid(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<PartitionFunction> pf):
                _system(system),
                _pf(std::move(pf)) {}

            std::size_t no_blocks() const override;
            std::shared_ptr<const Block> get_block(std::size_t block) const override;

        protected:
            virtual std::vector<std::shared_ptr<Block> > make_atomic_grid(std::size_t a, const PartitionFunction&) const = 0;

        private:
            void create_grid() const;

            std::shared_ptr<const core::System> _system;
            std::unique_ptr<PartitionFunction> _pf;

            mutable std::unique_ptr<std::vector<std::shared_ptr<Block> > > _blocks;
        };
        
    }
}

#endif
