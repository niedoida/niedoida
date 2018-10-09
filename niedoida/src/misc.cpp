/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    unsigned storage_unit_factor(const InputData& input_data)
    {
        unsigned f = 1;
        switch (input_data.units.storage_unit) {
        case InputData::Units::STORAGE_UNIT_GIGABYTE:
            f *= 1024;
        case InputData::Units::STORAGE_UNIT_MEGABYTE:
            f *= 1024;
        case InputData::Units::STORAGE_UNIT_KILOBYTE:
            f *= 1024;
        case InputData::Units::STORAGE_UNIT_BYTE:
            f *= 1;
            break;
        }

        return f;
    }
}
