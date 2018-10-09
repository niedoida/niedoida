/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<string>
#include<memory>
#include<stdexcept>
#include<boost/regex.hpp>

#include<el_stat_prop_kit/fragments_tags.hpp>

namespace el_stat_prop {

    // *****************************************************************************

    MullikenTag::MullikenTag(unsigned atom) :
    m_atom(atom) {
    }

    std::string MullikenTag::to_string() const {
        std::string resut = "Mulliken";
        resut += "[" + std::to_string(m_atom) + "]";
        return resut;
    }


    auto MullikenTag::from_string(const std::string& s) -> std::shared_ptr<type> {
        boost::regex re(R"((\d+)M)", boost::regex::icase);
        boost::smatch m;
        if (!boost::regex_match(s, m, re)) {
            return nullptr;
        }
        try {
            const unsigned atom = std::stoi(m[1]);
            return std::make_shared<type>(atom);
        } catch (...) {
            std::string messsage = "Interior fatal error";
            messsage += " (in MullikenTag::from_string)";
            throw std::logic_error(messsage);
        }
    }


    // *****************************************************************************

    LowdinTag::LowdinTag(unsigned atom) : m_atom(atom) {
    }

    std::string LowdinTag::to_string() const {
        std::string resut = "Lowdin";
        resut += "[" + std::to_string(m_atom) + "]";
        return resut;
    }


    auto LowdinTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        boost::regex re(R"((\d+)L)", boost::regex::icase);
        boost::smatch m;
        if (!boost::regex_match(str, m, re)) {
            return nullptr;
        }
        try {
            const unsigned atom = std::stoi(m[1]);
            return std::make_shared<type>(atom);
        } catch (...) {
            std::string messsage = "Interior fatal error";
            messsage += " (in LowdinTag::from_string)";
            throw std::logic_error(messsage);
        }
    }

} // end of namespace el_stat_prop
