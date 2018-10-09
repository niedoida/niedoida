/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TEMPLATED_RAMBLER_FUNCTIONS_HPP
#define TEMPLATED_RAMBLER_FUNCTIONS_HPP

#include<cassert>
#include<string>
#include<type_traits>
#include<yaml-cpp/yaml.h>
#include<yaml_inputter/is_string.hpp>
#include<yaml_inputter/problem_handler.hpp>
#include<yaml_inputter/templated_helpler_functions.hpp>

#define UNUSED(x)

namespace yaml_inputter {

    namespace templated_rambler_functions {

        // *********************************************************************
        // ***********   append_node_name(...)                     *************
        // *********************************************************************

        /*
         * The append_node_name(node, node_name, problem, [key[,key ... ]]) functions.
         * 
         * Append the node_name formal argument (passed by reference)
         * If there is at least one key argument:
         *   Function appends the node_name formal argument (passed by reference)
         *   and (recursively) calls the append_node_name(node, node_name, problem, ...) 
         *   with the decremented number of key arguments.
         * If there is no key arguments (recursion termination)
         *   Do nothing.
         */

        inline YAML::Node append_node_name(
                const YAML::Node & node,
                std::string & node_name,
                Problem & problem) noexcept {
            //std::cout << "append_node_name -- terminate" << std::endl;
            UNUSED(node_name);
            UNUSED(problem);
            return node;
        }

        template<class T, class... Ts>
        inline YAML::Node append_node_name(
                const YAML::Node & node,
                std::string & node_name,
                Problem & problem,
                T&& first_key, Ts&&... rest_keys) noexcept {
            using bareT = typename std::remove_reference<T>::type;
            static_assert(std::is_integral<bareT>::value || is_string<bareT>::value, "Key type is invalid.");
            //std::cout << "append_node_name -- T" << std::endl;        
            node_name += "->" + templated_helper_functions::to_string(first_key);
            UNUSED(problem);
            return append_node_name(node, node_name, problem,
                    std::forward<Ts>(rest_keys)...);
        }

        // *********************************************************************
        // ***********   go_deeper(...)                            *************
        // *********************************************************************

        inline YAML::Node go_deeper(
                const YAML::Node & node,
                std::string & node_name,
                Problem & problem) noexcept {
            //std::cout << "go_down -- terminate" << std::endl;
            UNUSED(node_name);
            UNUSED(problem);
            return node;
        }

        template<class T, class... Ts>
        inline YAML::Node go_deeper(
                const YAML::Node & node,
                std::string & node_name,
                Problem & problem,
                T&& first_key, Ts&&... rest_keys) noexcept {
            using bareT = typename std::remove_reference<T>::type;
            static_assert(std::is_integral<bareT>::value || is_string<bareT>::value, "Key type is invalid.");
            //std::cout << "go_down -- T" << std::endl;
            assert(problem.no == Errno::no_error);
            if (!templated_helper_functions::template validate<bareT>(node, node_name, problem)) {
                node_name += "->" + templated_helper_functions::to_string(first_key);
                return append_node_name(node, node_name, problem,
                        std::forward<Ts>(rest_keys)...);
            }
            YAML::Node down = node[first_key];
            node_name += "->" + templated_helper_functions::to_string(first_key);
            if (!down.IsDefined()) {
                problem.no = Errno::encountered_undefined_node;
                problem.message = "[PROBLEM] The yaml::node " + node_name + " is not defined.";
                return append_node_name(node, node_name, problem,
                        std::forward<Ts>(rest_keys)...);
            }
            if (down.IsNull()) {
                problem.no = Errno::encountered_null_node;
                problem.message = "[PROBLEM] The yaml::node " + node_name + " is null.";
                return append_node_name(node, node_name, problem,
                        std::forward<Ts>(rest_keys)...);
            }
            return go_deeper(down, node_name, problem,
                    std::forward<Ts>(rest_keys)...);
        }

    } // end of namespace templated_rambler_functions 

} // end of namespace yaml_inputter


#endif