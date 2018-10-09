/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_IO_KIT_LOGGER_HPP
#define NIEDOIDA_IO_KIT_LOGGER_HPP

#include <memory>
#include <string>
#include <vector>

#include <boost/optional.hpp>

#include <armadillo>

namespace niedoida {
    namespace io {
        class Logger {
        public:
            virtual ~Logger()  = default;

            virtual std::unique_ptr<Logger> sublogger(const std::string& name) = 0;

            enum VerbosityLevel {
                TERSE,
                NORMAL,
                VERBOSE,
                DEBUG
            };

            virtual VerbosityLevel set_verbosity(VerbosityLevel) = 0;
            
            struct VectorFormatInfo {
                std::string element_format;
                boost::optional<std::vector<std::string> > labels;
            };

            struct MatrixFormatInfo {
                std::string element_format;
                boost::optional<std::vector<std::string> > row_labels;
                boost::optional<std::vector<std::string> > column_labels;
            };

            static const std::string DEFAULT_STRING_FORMAT;
            static const std::string DEFAULT_INT_FORMAT;
            static const std::string DEFAULT_DOUBLE_FORMAT;
            static const VectorFormatInfo DEFAULT_VECTOR_FORMAT;
            static const MatrixFormatInfo DEFAULT_MATRIX_FORMAT;

            
            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               bool
                ) = 0;

            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               int,
                               const std::string& format = DEFAULT_INT_FORMAT
                ) = 0;

            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               std::size_t,
                               const std::string& format = DEFAULT_INT_FORMAT
                ) = 0;

            void write(VerbosityLevel vl,
                       const std::string& element_name,
                       unsigned v,
                       const std::string& format = DEFAULT_INT_FORMAT
                )
            {
                write(vl, element_name, std::size_t(v), format);
            }
            
            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               double,
                               const std::string& format = DEFAULT_DOUBLE_FORMAT
                ) = 0;

            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               const std::string&,
                               const std::string& format = DEFAULT_STRING_FORMAT
                ) = 0;

            void write(VerbosityLevel vl,
                       const std::string& element_name,
                       const char* s,
                       const std::string& format = DEFAULT_STRING_FORMAT)
            {
                write(vl, element_name, std::string(s), format);
            }
            
            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               const arma::vec&,
                               const VectorFormatInfo& = DEFAULT_VECTOR_FORMAT
                ) = 0;

            virtual void write(VerbosityLevel,
                               const std::string& element_name,
                               const arma::mat&,
                               const MatrixFormatInfo& = DEFAULT_MATRIX_FORMAT
                ) = 0;
        };

        

    }
}

#endif

