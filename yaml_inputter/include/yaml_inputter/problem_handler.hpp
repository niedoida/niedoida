/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef PROBLEM_HANDLER_HPP
#define PROBLEM_HANDLER_HPP

#include<string>

namespace yaml_inputter {

    enum class Errno {
        no_error,
        encountered_bad_structure,
        encountered_null_node,
        encountered_undefined_node,
        fetched_is_not_a_scalar,
        fetched_conversion_fail
    };

    struct Problem {
        Errno no = Errno::no_error;
        std::string message = "";
    };

} // end of namespace yaml_inputter

#endif
