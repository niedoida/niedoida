/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TEMPLATED_FETCHER_FUNCTIONS_HPP
#define TEMPLATED_FETCHER_FUNCTIONS_HPP

#include<cassert>
#include<yaml-cpp/yaml.h>
#include<yaml_inputter/templated_rambler_functions.hpp>
#include<yaml_inputter/problem_handler.hpp>

namespace yaml_inputter {

    namespace templated_fetcher_functions {

        // *************************************************************************     

        template <class T>
        struct FetchResult {
            T value;
            std::string name;
            Problem problem;
        };

        using NodeFetchResult = FetchResult<YAML::Node>;

        // *************************************************************************    

        template<class... Ts>
        inline NodeFetchResult fetch_node(const YAML::Node & root, Ts&&... keys) {
            std::string node_name = "$ROOT";
            Problem problem;
            const YAML::Node result_node =
                    templated_rambler_functions::go_deeper(root, node_name, problem, std::forward<Ts>(keys)...);
            return {result_node, node_name, problem};
        }

        // *************************************************************************    

        template<class... Ts>
        inline NodeFetchResult fetch_scalar(const YAML::Node & root, Ts&&... keys) {
            auto result = fetch_node(root, std::forward<Ts>(keys)...);
            if (result.problem.no != Errno::no_error) {
                return result;
            }
            assert(result.problem.no == Errno::no_error);

            if (!result.value.IsScalar()) {
                result.problem.no = Errno::fetched_is_not_a_scalar;
                result.problem.message = "[PROBLEM] ";
                result.problem.message += "The yaml::node " + result.name + " is not a scalar.";
            }
            return result;
        }

        // *************************************************************************    

        template<class... Ts>
        inline NodeFetchResult fetch_map(const YAML::Node & root, Ts&&... keys) {
            auto result = fetch_node(root, std::forward<Ts>(keys)...);
            if (result.problem.no != Errno::no_error) {
                return result;
            }
            assert(result.problem.no == Errno::no_error);
            templated_helper_functions::template validate<std::string>(result.value, result.name, result.problem);
            return result;
        }

        // *************************************************************************    

        template<class... Ts>
        inline NodeFetchResult fetch_sequence(const YAML::Node & root, Ts&&... keys) {
            auto result = fetch_node(root, std::forward<Ts>(keys)...);
            if (result.problem.no != Errno::no_error) {
                return result;
            }
            assert(result.problem.no == Errno::no_error);
            templated_helper_functions::template validate<int>(result.value, result.name, result.problem);
            return result;
        }
        
        
        // *************************************************************************    

        template<class Value_t, class... Ts>
        // Value_t must be default constructible (in case of error)
        inline FetchResult<Value_t> fetch_as(const YAML::Node & root, Ts&&... keys) {
            const auto result = fetch_node(root, std::forward<Ts>(keys)...);
            if (result.problem.no != Errno::no_error) {
                return {Value_t(), result.name, result.problem};
            }
            try {
                Value_t val = result.value.template as<Value_t>();
                return {val, result.name, result.problem};
            } catch (YAML::BadConversion&) {
                Problem problem;
                problem.no = Errno::fetched_conversion_fail;
                problem.message = "[PROBLEM] yaml-bad-conversion error.";
                return {Value_t(), result.name, problem};
            }
        }

        // *************************************************************************    

        template<class Value_t, class... Ts>
        // Value_t must be default constructible (in case of error)
        inline FetchResult<Value_t> fetch_scalar_as(const YAML::Node & root, Ts&&... keys) {
            const auto result = fetch_scalar(root, std::forward<Ts>(keys)...);
            if (result.problem.no != Errno::no_error) {
                return {Value_t(), result.name, result.problem};
            }
            try {
                Value_t val = result.value.template as<Value_t>();
                return {val, result.name, result.problem};
            } catch (YAML::BadConversion&) {
                Problem problem;
                problem.no = Errno::fetched_conversion_fail;
                problem.message = "[PROBLEM] yaml-bad-conversion error.";
                return {Value_t(), result.name, problem};
            }
        }
        
    } // end of namespace templated_fetcher_functions 

} // end of namespace yaml_inputter

#endif
