/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<string>
#include<memory>
#include<stdexcept>
#include<boost/regex.hpp>

#include<el_stat_prop_kit/reference_points_tags.hpp>

namespace el_stat_prop {

    // *****************************************************************************
    // ***************  CoordsOriginTag - concrete classes: ************************
    // *****************************************************************************

    std::string StdOrientReferencePointTag::to_string() const {
        return "StdReferencePoint";
    }


    auto StdOrientReferencePointTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        boost::regex re("Std", boost::regex::icase);
        boost::smatch m;
        if (!boost::regex_match(str, m, re))
            return nullptr;
        return std::make_shared<type>();
    }


    // *****************************************************************************

    std::string InpOrientReferencePointTag::to_string() const {
        return "InpReferencePoint";
    }


    auto InpOrientReferencePointTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        boost::regex re("Inp", boost::regex::icase);
        boost::smatch m;
        if (!boost::regex_match(str, m, re))
            return nullptr;
        return std::make_shared<type>();
    }


    // *****************************************************************************

    AtomReferencePointTag::AtomReferencePointTag(unsigned atom) :
    m_atom(atom) {
    }

    std::string AtomReferencePointTag::to_string() const {
        std::string result = "Atom";
        result += std::to_string(m_atom);
        result += "ReferencePoint";
        return result;
    }


    auto AtomReferencePointTag::from_string(const std::string& s) -> std::shared_ptr<type> {
        boost::regex re(R"(Atom(\d+))", boost::regex::icase);
        boost::smatch m;
        if (!boost::regex_match(s, m, re)) {
            return nullptr;
        }
        try {
            const unsigned atom = std::stoi(m[1]);
            return std::make_shared<type>(atom);
        } catch (...) {
            std::string messsage = "Interior fatal error.";
            messsage += " (in AtomOriginTag::from_string)";
            throw std::logic_error(messsage);
        }
    }

} // end of namespace el_stat_prop
