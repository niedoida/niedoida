/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/logger.hpp"

namespace niedoida {
    namespace io {
        const std::string Logger::DEFAULT_STRING_FORMAT = "%s";
        const std::string Logger::DEFAULT_INT_FORMAT = "%d";
        const std::string Logger::DEFAULT_DOUBLE_FORMAT = "% 14.8f";
        const Logger::VectorFormatInfo Logger::DEFAULT_VECTOR_FORMAT = {
            Logger::DEFAULT_DOUBLE_FORMAT,              // element_format
            boost::optional<std::vector<std::string>>() // labels
        };
        const Logger::MatrixFormatInfo Logger::DEFAULT_MATRIX_FORMAT = {
            Logger::DEFAULT_DOUBLE_FORMAT,               // element_format
            boost::optional<std::vector<std::string>>(), // column_labels
            boost::optional<std::vector<std::string>>()  // row_labels
        };
    }
}
