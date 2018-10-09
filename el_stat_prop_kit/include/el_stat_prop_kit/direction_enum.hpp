/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BASE_BITS_HPP
#define BASE_BITS_HPP

#include<utility>

namespace el_stat_prop {

    // *****************************************************************************

    enum class Direction {
        x = 0,
        y = 1,
        z = 2,
    };

    std::string direction_to_string(Direction);

    template<class Res_t> Res_t direction_to_vec(Direction direction) {
        switch (direction) {
            case Direction::x: return {1.0, 0.0, 0.0};
            case Direction::y: return {0.0, 1.0, 0.0};
            case Direction::z: return {0.0, 0.0, 1.0};
            default: exit(55);
        };
    }

    Direction direction_from_string(const std::string&);

    // *****************************************************************************

    enum class Direction2 {
        xx = 0,
        xy = 1,
        xz = 2,
        yy = 3,
        yz = 4,
        zz = 5,
    };

    std::pair<Direction, Direction> direction2_to_directions_pair(Direction2);
    std::string direction2_to_string(Direction2);
    Direction2 direction2_from_string(const std::string&);

    // *****************************************************************************

    enum class Orient {
        stdOrient = 100,
        inpOrient = 101,
    };

    std::string orient_to_string(Orient);
    Orient orient_from_string(const std::string&);

} // end of namespace el_stat_prop

#endif

