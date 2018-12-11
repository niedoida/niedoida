/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_IO_KIT_NULL_LOGGER_HPP
#define NIEDOIDA_IO_KIT_NULL_LOGGER_HPP

#include "logger.hpp"

namespace niedoida {
    namespace io {

        class NullLogger : public Logger {
        public:
            std::unique_ptr<Logger> sublogger(const std::string& name) override;

            VerbosityLevel set_verbosity(VerbosityLevel) override
            {
                return NORMAL;
            }
            
            void write(VerbosityLevel,
                       const std::string&,
                       bool
                       ) override
            {
            }

            void write(VerbosityLevel,
                       const std::string&,
                       int,
                       const std::string& format = DEFAULT_INT_FORMAT
                       ) override
            {
            }

            void write(VerbosityLevel,
                       const std::string&,
                       std::size_t,
                       const std::string& format = DEFAULT_INT_FORMAT
                       ) override
            {
            }

            void write(VerbosityLevel,
                       const std::string&,
                       double,
                       const std::string& format = DEFAULT_DOUBLE_FORMAT
                       ) override
            {
            }

            void write(VerbosityLevel,
                       const std::string&,
                       const std::string&,
                       const std::string& format = DEFAULT_STRING_FORMAT
                       ) override
            {
            }

            void write(VerbosityLevel,
                       const std::string&,
                       const arma::vec&,
                       const VectorFormatInfo& = DEFAULT_VECTOR_FORMAT
                       ) override
            {
            }

            void write(VerbosityLevel,
                       const std::string&,
                       const arma::mat&,
                       const MatrixFormatInfo& = DEFAULT_MATRIX_FORMAT
                       ) override
            {
            }
        };
        
        inline std::unique_ptr<Logger> NullLogger::sublogger(const std::string& name)
        {
            return std::unique_ptr<Logger>(new NullLogger);
        }
    }
}

#endif
