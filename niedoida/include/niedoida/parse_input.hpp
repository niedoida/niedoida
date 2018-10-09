/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef PARSE_INPUT_HPP
#define PARSE_INPUT_HPP

#include<istream>
#include<niedoida/input_data.hpp>

namespace niedoida {
    InputData parse_input(std::istream& is);
}

#endif
