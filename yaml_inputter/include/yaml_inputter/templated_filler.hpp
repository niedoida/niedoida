/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TEMPLATED_FILLER_HPP
#define TEMPLATED_FILLER_HPP

#include<iostream>
#include<stdexcept>
#include<string>
#include<set>
#include<yaml-cpp/yaml.h>
#include<yaml_inputter/templated_fetcher_functions.hpp>

namespace yaml_inputter {

    class Filler {
    public:
        // VariableProxy inner class:

        template<class Var_t> class TargetProxy {
        public:
            template<class... Ts> void fill_required(Ts&&... keys) const;
            template<class... Ts> void fill_required_scalar(Ts&&... keys) const;
            template<class... Ts> void fill_optional(Ts&&... keys) const;
            template<class... Ts> void fill_optional_scalar(Ts&&... keys) const;
        private:
            Var_t& var;
            const Filler& filler;
            TargetProxy(Var_t& var, const Filler& filler);
            TargetProxy(const TargetProxy&) = default;
            TargetProxy& operator=(const TargetProxy&) = default;
            friend Filler;
        };

        // public functions:
        Filler(const YAML::Node& root,
                std::ostream& log = std::cout,
                std::ostream& lorerr = std::cerr);
        template<class Var_t> TargetProxy<Var_t> target(Var_t& t) const;
        template<class... Ts> size_t required_sequence_size(Ts&&... keys) const;
        template<class... Ts> size_t optional_sequence_size(Ts&&... keys) const;
        template<class... Ts> void check_stray_fields(const std::set<std::string>& valid_fields, Ts&&... keys) const;
    private:
        const YAML::Node & root;
        std::ostream& log;
        std::ostream& lorerr;
    };

    // *****************************************************************************
    // ********* Filler member function declarations *******************************
    // *****************************************************************************

    inline Filler::Filler(const YAML::Node& root,
            std::ostream& log,
            std::ostream& lorerr) :
    root(root),
    log(log),
    lorerr(lorerr) {
    }

    template<class Var_t>
    inline Filler::TargetProxy<Var_t> Filler::target(Var_t& t) const {
        return TargetProxy<Var_t>(t, *this);
    }

    template<class... Ts>
    size_t Filler::required_sequence_size(Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_sequence(root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            log << "[INFO] Filler got the required sequence "
                    << fetcher_result.name << " size successfully." << std::endl;
            return fetcher_result.value.size();
        }
        const std::string error_message = "[ERROR] Error while getting size of the required sequence " + fetcher_result.name + ".";
        const std::string problem_message = fetcher_result.problem.message;
        const std::string what = error_message + "\n" + problem_message;
        lorerr << what << std::endl;
        throw std::runtime_error(what);
    }

    template<class... Ts>
    size_t Filler::optional_sequence_size(Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_sequence(root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            log << "[INFO] Filler got the optional sequence "
                    << fetcher_result.name << " size successfully." << std::endl;
            return fetcher_result.value.size();
        }
        if (fetcher_result.problem.no == Errno::encountered_undefined_node ||
                fetcher_result.problem.no == Errno::encountered_null_node) {
            log << "[INFO] Filler set the optional sequence "
                    << fetcher_result.name << " size to be equal 0 as the sequence was not given." << std::endl;
            return 0;
        }
        const std::string error_message = "[ERROR] Error while getting size of the optional sequence " + fetcher_result.name + ".";
        const std::string problem_message = fetcher_result.problem.message;
        const std::string what = error_message + "\n" + problem_message;
        lorerr << what << std::endl;
        throw std::runtime_error(what);
    }

    template<class... Ts>
    void Filler::check_stray_fields(const std::set<std::string>& valid_fields, Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_map(root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            for (auto it = fetcher_result.value.begin(); it != fetcher_result.value.end(); ++it) {
                const YAML::Node key = it->first;
                //const YAML::Node value = it->second;
                const std::string key_string = key.as<std::string>();
                if (!valid_fields.count(key_string)) {
                    const std::string error_message = "[ERROR] Error while checking stray fields of " + fetcher_result.name + ".";
                    const auto stray_node = templated_fetcher_functions::fetch_node(root, std::forward<Ts>(keys)..., key_string);
                    const std::string problem_message = "[PROBLEM] Stray field " + stray_node.name + " found.";
                    const std::string what = error_message + "\n" + problem_message;
                    lorerr << what << std::endl;
                    throw std::runtime_error(what);
                }
            }
        } else if (fetcher_result.problem.no == Errno::encountered_undefined_node ||
                fetcher_result.problem.no == Errno::encountered_null_node) {
            return;
        } else if (fetcher_result.problem.no == Errno::encountered_bad_structure ||
                fetcher_result.problem.no == Errno::fetched_conversion_fail) {
            const std::string error_message = "[ERROR] Error while checking stray fields of " + fetcher_result.name + ".";
            const std::string problem_message = fetcher_result.problem.message;
            const std::string what = error_message + "\n" + problem_message;
            lorerr << what << std::endl;
            throw std::runtime_error(what);
        }
    }


    // *****************************************************************************
    // *********** Filler::TargetProxy<Var_t> member functions declarations ********
    // *****************************************************************************

    template<class Var_t>
    inline Filler::TargetProxy<Var_t>::TargetProxy(Var_t& var, const Filler & filler) :
    var(var),
    filler(filler) {
    }

    template<class Var_t>
    template<class... Ts>
    inline void Filler::TargetProxy<Var_t>::fill_required(Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_as<Var_t>(filler.root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            filler.log << "[INFO] Filler filled required field "
                    << fetcher_result.name << " successfully." << std::endl;
            var = fetcher_result.value;
            return;
        }
        const std::string error_message = "[ERROR] Error while reading " + fetcher_result.name + " node.";
        const std::string problem_message = fetcher_result.problem.message;
        const std::string what = error_message + "\n" + problem_message;
        filler.lorerr << what << std::endl;
        throw std::runtime_error(what);
    }

    template<class Var_t>
    template<class... Ts>
    inline void Filler::TargetProxy<Var_t>::fill_required_scalar(Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_scalar_as<Var_t>(filler.root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            filler.log << "[INFO] Filler filled required field "
                    << fetcher_result.name << " successfully." << std::endl;
            var = fetcher_result.value;
            return;
        }
        const std::string error_message = "[ERROR] Error while reading " + fetcher_result.name + " node.";
        const std::string problem_message = fetcher_result.problem.message;
        const std::string what = error_message + "\n" + problem_message;
        filler.lorerr << what << std::endl;
        throw std::runtime_error(what);
    }

    template<class Var_t>
    template<class... Ts>
    inline void Filler::TargetProxy<Var_t>::fill_optional(Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_as<Var_t>(filler.root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            filler.log << "[INFO] Filler filled optional field "
                    << fetcher_result.name << " successfully." << std::endl;
            var = fetcher_result.value;
            return;
        }
        if (fetcher_result.problem.no == Errno::encountered_undefined_node ||
                fetcher_result.problem.no == Errno::encountered_null_node) {
            filler.log << "[INFO] Filler did not fill optional field " <<
                    fetcher_result.name << " as the value was not given." << std::endl;
            return;
        }
        if (fetcher_result.problem.no == Errno::encountered_bad_structure ||
                fetcher_result.problem.no == Errno::fetched_conversion_fail) {
            const std::string error_message = "[ERROR] Error while reading " + fetcher_result.name + " node.";
            const std::string problem_message = fetcher_result.problem.message;
            const std::string what = error_message + "\n" + problem_message;
            filler.lorerr << what << std::endl;
            throw std::runtime_error(what);
        }
        throw std::logic_error("[INTERNAL ERROR] in void Filler::TargetProxy<Var_t>::fill_optional(Ts&&... keys) const");
    }

    template<class Var_t>
    template<class... Ts>
    inline void Filler::TargetProxy<Var_t>::fill_optional_scalar(Ts&&... keys) const {
        auto fetcher_result = templated_fetcher_functions::fetch_scalar_as<Var_t>(filler.root, std::forward<Ts>(keys)...);
        if (fetcher_result.problem.no == Errno::no_error) {
            filler.log << "[INFO] Filler filled optional field "
                    << fetcher_result.name << " successfully." << std::endl;
            var = fetcher_result.value;
            return;
        }
        if (fetcher_result.problem.no == Errno::encountered_undefined_node ||
                fetcher_result.problem.no == Errno::encountered_null_node) {
            filler.log << "[INFO] Filler did not fill optional field " <<
                    fetcher_result.name << " as the value was not given." << std::endl;
            return;
        }
        if (fetcher_result.problem.no == Errno::encountered_bad_structure ||
                fetcher_result.problem.no == Errno::fetched_conversion_fail ||
                fetcher_result.problem.no == Errno::fetched_is_not_a_scalar) {
            const std::string error_message = "[ERROR] Error while reading " + fetcher_result.name + " node.";
            const std::string problem_message = fetcher_result.problem.message;
            const std::string what = error_message + "\n" + problem_message;
            filler.lorerr << what << std::endl;
            throw std::runtime_error(what);
        }
        throw std::logic_error("[INTERNAL ERROR] in void Filler::TargetProxy<Var_t>::fill_optional(Ts&&... keys) const");
    }

} // end of namespace yaml_inputter

#endif
