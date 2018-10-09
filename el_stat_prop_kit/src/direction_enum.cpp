/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<string>
#include<stdexcept>
#include<el_stat_prop_kit/direction_enum.hpp>

namespace el_stat_prop {

    std::string direction_to_string(Direction d) {
        switch (d) {
            case Direction::x: return "x";
            case Direction::y: return "y";
            case Direction::z: return "z";
            default: exit(51);
        }
    }

    Direction direction_from_string(const std::string& s) {
        if (s == "x") return Direction::x;
        if (s == "y") return Direction::y;
        if (s == "z") return Direction::z;
        std::string message = "Invalid argument in direction_from_string function."
                " Formal argument s = \"" + s + "\".";
        throw std::invalid_argument(message);
    }

    // *****************************************************************************

    std::pair<Direction, Direction> direction2_to_directions_pair(Direction2 dd) {
        switch (dd) {
            case Direction2::xx: return std::make_pair(Direction::x, Direction::x);
            case Direction2::xy: return std::make_pair(Direction::x, Direction::y);
            case Direction2::xz: return std::make_pair(Direction::x, Direction::z);
            case Direction2::yy: return std::make_pair(Direction::y, Direction::y);
            case Direction2::yz: return std::make_pair(Direction::y, Direction::z);
            case Direction2::zz: return std::make_pair(Direction::z, Direction::z);
            default: exit(52);
        }
    }

    std::string direction2_to_string(Direction2 dd) {
        auto temp = direction2_to_directions_pair(dd);
        return direction_to_string(temp.first) + direction_to_string(temp.second);
    }

    Direction2 direction2_from_string(const std::string& s) {
        //boost::to_lower_copy(s);
        if (s == "xx") return Direction2::xx;
        if (s == "xy") return Direction2::xy;
        if (s == "xz") return Direction2::xz;
        if (s == "yy") return Direction2::yy;
        if (s == "yz") return Direction2::yz;
        if (s == "zz") return Direction2::zz;
        std::string message = "Invalid argument in direction_from_string function."
                " Formal argument s = \"" + s + "\".";
        throw std::invalid_argument(message);
    }

    // *****************************************************************************

    std::string orient_to_string(Orient o) {
        switch (o) {
            case Orient::stdOrient: return "stdOrient";
            case Orient::inpOrient: return "inpOrient";
            default: exit(53);
        }
    }

    Orient orient_from_string(const std::string& s) {
        if (s == "stdOrient") return Orient::stdOrient;
        if (s == "inpOrient") return Orient::inpOrient;
        std::string message = "Invalid argument in origin_from_string function."
                " Formal argument s = \"" + s + "\".";
        throw std::invalid_argument(message);
    }

} // end of namespace el_stat_prop
