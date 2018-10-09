/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/simple_logger.hpp"

#include <boost/format.hpp>
#include <cmath>
#include <string>

#if !defined(_WIN32) && !defined(__APPLE__)
extern "C" {
#    include <malloc.h>
}
#endif

namespace niedoida {
    namespace io {
        SimpleLogger::SimpleLogger(std::ostream& os, const std::string& s) :
            _os(os),
            _s(s)
        {
            _os << "begin " << _s << "\n";
        }

        SimpleLogger::~SimpleLogger()
        {
            _t.stop();

            _os << "end " << _s << "\n";

            _os << "timing:" << _t.format(5);
#if !defined(_WIN32) && !defined(__APPLE__)
            struct mallinfo malloc_info = mallinfo();
            _os << "memory: " << malloc_info.uordblks / 1048576.0 << " MB \n";
#endif
            _os << std::endl;
        }

        std::unique_ptr<Logger> SimpleLogger::sublogger(const std::string& s)
        {
            std::unique_ptr<Logger> p(new SimpleLogger(_os, s));
            p->set_verbosity(_vl);
            return std::move(p);
        }

        Logger::VerbosityLevel SimpleLogger::set_verbosity(VerbosityLevel vl)
        {
            std::swap(_vl, vl);

            return vl;
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 bool value)
        {
            if (vl > _vl)
                return;

            _os << element_name << ": " << value << "\n";
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 int number,
                                 const std::string& format)
        {
            if (vl > _vl)
                return;

            _os << element_name << ": " << (boost::format(format) % (number))
                << "\n";
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 std::size_t number,
                                 const std::string& format)
        {
            if (vl > _vl)
                return;

            _os << element_name << ": " << (boost::format(format) % (number))
                << "\n";
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 double number,
                                 const std::string& format)
        {
            if (vl > _vl)
                return;

            _os << element_name << ": " << (boost::format(format) % (number))
                << "\n";
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 const std::string& s,
                                 const std::string& format)
        {
            if (vl > _vl)
                return;

            _os << element_name << ": " << (boost::format(format) % (s))
                << "\n";
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 const arma::vec& vec,
                                 const VectorFormatInfo& format)
        {
            if (vl > _vl)
                return;

            const unsigned row_width = 70;

            const unsigned no_elems = vec.size();

            _os << element_name << ": " << no_elems << ", ";

            if (no_elems == 0) {
                _os << 1 << "\n";
                return;
            }

            // assume that the width of all elements is the same
            boost::format element_format(format.element_format);
            element_format % vec[0];
            const unsigned element_width = element_format.size();
            element_format.clear();

            // build column header format
            std::stringstream s, t;
            s << '%' << element_width << 'd';
            boost::format column_label_format(s.str());
            t << '%' << element_width << 's';
            boost::format column_text_label_format(t.str());

            const unsigned elements_per_row = row_width / element_width;
            const unsigned no_sections = static_cast<unsigned>(
                std::ceil(static_cast<double>(no_elems) / elements_per_row));

            _os << elements_per_row << "\n";

            const bool use_custom_labels =
                format.labels && (*(format.labels)).size() >= vec.size();

            if (!use_custom_labels) {
                for (unsigned section = 0; section < no_sections; ++section) {
                    const unsigned n =
                        std::min(elements_per_row,
                                 no_elems - section * elements_per_row);
                    for (unsigned j = 0; j < n; ++j)
                        _os << column_label_format %
                                   (j + 1 + section * elements_per_row);

                    _os << "\n";
                    for (unsigned j = 0; j < n; ++j)
                        _os << boost::format(element_format) %
                                   vec[j + section * elements_per_row];

                    _os << "\n";
                };
            } else {
                const std::vector<std::string>& labels = *(format.labels);
                for (unsigned section = 0; section < no_sections; ++section) {
                    const unsigned n =
                        std::min(elements_per_row,
                                 no_elems - section * elements_per_row);

                    for (unsigned j = 0; j < n; ++j)
                        _os << column_text_label_format %
                                   labels[j + section * elements_per_row];

                    _os << "\n";
                    for (unsigned j = 0; j < n; ++j)
                        _os << boost::format(element_format) %
                                   vec[j + section * elements_per_row];

                    _os << "\n";
                }
            }
        }

        void SimpleLogger::write(VerbosityLevel vl,
                                 const std::string& element_name,
                                 const arma::mat& matrix,
                                 const MatrixFormatInfo& format)
        {
            if (vl > _vl)
                return;

            const unsigned row_width = 70;

            const unsigned no_rows = matrix.n_rows;
            const unsigned no_cols = matrix.n_cols;

            _os << element_name << ": " << no_rows << "x" << no_cols << ", ";

            if (no_rows == 0 || no_cols == 0) {
                _os << 1 << "\n";
                return;
            }

            // assume that the width of all elements is the same
            boost::format element_format(format.element_format);
            element_format % matrix(0, 0);
            const unsigned element_width = element_format.size();
            element_format.clear();

            // assume that the width of all row labels is the same
            boost::format text_row_label_format("%10s");
            text_row_label_format % "";
            const unsigned text_row_label_width = text_row_label_format.size();
            text_row_label_format.clear();

            boost::format row_label_format("% 4.4f");
            row_label_format % 1;
            const unsigned row_label_width = row_label_format.size();
            row_label_format.clear();

            // build column header format
            boost::format column_label_format(
                "%" + std::to_string(element_width) + "d");
            boost::format column_text_label_format(
                "%" + std::to_string(element_width) + "s");

            const unsigned elements_per_row =
                (row_width - row_label_width) / element_width;
            const unsigned no_sections = static_cast<unsigned>(
                std::ceil(static_cast<double>(no_cols) / elements_per_row));

            _os << elements_per_row << "\n";

            const bool use_custom_row_labels =
                format.row_labels &&
                (*(format.row_labels)).size() >= matrix.n_rows;

            const bool use_custom_col_labels =
                format.column_labels &&
                (*(format.column_labels)).size() >= matrix.n_cols;

            // corner field:
            const unsigned corner_width =
                (use_custom_row_labels ? text_row_label_width
                                       : row_label_width);
            boost::format corner_format("%" + std::to_string(corner_width) +
                                        "s");

            // emit:
            for (unsigned section = 0; section < no_sections; ++section) {
                const unsigned n = std::min(
                    elements_per_row, no_cols - section * elements_per_row);
                _os << corner_format % "";
                for (unsigned j = 0; j < n; ++j)
                    if (use_custom_col_labels)
                        _os << column_text_label_format %
                                   (*(format.column_labels))
                                       [j + section * elements_per_row];
                    else
                        _os << column_label_format %
                                   (j + 1 + section * elements_per_row);
                _os << "\n";
                for (unsigned i = 0; i < no_rows; ++i) {
                    if (use_custom_row_labels)
                        _os << text_row_label_format %
                                   (*(format.row_labels))[i];
                    else
                        _os << row_label_format % (i + 1);
                    for (unsigned j = 0; j < n; ++j)
                        _os << boost::format(element_format) %
                                   matrix(i, j + section * elements_per_row);
                    _os << "\n";
                } // end of loop over rows (i)
                _os << "\n";
            } // end of loop over section
        }
    }
}
