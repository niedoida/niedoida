/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_GRID_HPP
#define NIEDOIDA_CORE_KIT_GRID_HPP

#include <memory>
#include <vector>

#include <armadillo>

namespace niedoida {

    namespace core {

        class Grid {
        public:
            virtual ~Grid() {}

            struct Block {
                Block(std::size_t size):
                    size(size),
                    coords(3, size),
                    weights(size),
                    significant_shells(size)
                    {
                    }

                std::size_t size;
                arma::mat coords;
                arma::vec weights;
                std::vector<std::vector<std::size_t> > significant_shells;
                std::vector<std::size_t> block_significant_shells;
            };

            virtual std::size_t no_blocks() const = 0;
            virtual std::shared_ptr<const Block> get_block(std::size_t block) const = 0;
        };

    }
}

#endif
