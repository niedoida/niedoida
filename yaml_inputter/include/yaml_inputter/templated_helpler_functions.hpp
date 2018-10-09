/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TEMPLATED_HELPER_FUNCTIONS_HPP
#define TEMPLATED_HELPER_FUNCTIONS_HPP

#include<cassert>
#include<string>
#include<type_traits>
#include<yaml-cpp/yaml.h>
#include<yaml_inputter/is_string.hpp>
#include<yaml_inputter/problem_handler.hpp>

#define UNUSED(x)

namespace yaml_inputter {

    namespace templated_helper_functions {

        // *********************************************************************
        // ***********   to_string(...)                    *********************
        // *********************************************************************        
        
        template<class T>
        inline typename std::enable_if<std::is_integral<T>::value, std::string>::type
        to_string(const T & i) noexcept {
            return std::to_string(i);
        }

        template<class T>
        inline typename std::enable_if<is_string<T>::value, std::string>::type
        to_string(const T & s) noexcept {
            return std::string(s);
        }

        // *********************************************************************
        // ***********   validate(...)                     *********************
        // *********************************************************************

        /*
         * Helper functions: validate<T>(node, node_name, problem)
         * The functions check whether the node has proper type, ie.:
         * When T is integral type
         * the function checks if the node is a yaml-sequence-node
         * When T is a string (c-string or std::string)
         * the function checks if the node is a yaml-map-node.
         * For T of other types the function is not created by the template.
         * 
         * The template parameter T is used only to 
         * choose the correct function body.
         */

        template<class T>
        inline typename std::enable_if<std::is_integral<T>::value, bool>::type
        validate(const YAML::Node & node,
                const std::string & node_name,
                Problem & problem) noexcept {
            assert(problem.no == Errno::no_error);
            if (!node.IsSequence()) {
                problem.no = Errno::encountered_bad_structure;
                problem.message = "[PROBLEM] ";
                problem.message += "The yaml::node " + node_name + " is not a sequence.";
                return false;
            }
            return true;
        }

        template<class T>
        inline typename std::enable_if<is_string<T>::value, bool>::type
        validate(const YAML::Node & node,
                const std::string & node_name,
                Problem & problem) noexcept {
            assert(problem.no == Errno::no_error);
            if (!node.IsMap()) {
                problem.no = Errno::encountered_bad_structure;
                problem.message = "[PROBLEM] ";
                problem.message += "The yaml::node " + node_name + " is not a map.";
                return false;
            }
            return true;
        }

    } // end of namespace templated_helper_functions 

} // end of namespace yaml_inputter


#endif