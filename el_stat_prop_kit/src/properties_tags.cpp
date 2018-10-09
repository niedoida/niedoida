/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<string>
#include<memory>
#include<stdexcept>
#include<boost/regex.hpp>

#include"el_stat_prop_kit/properties_tags.hpp"
#include"el_stat_prop_kit/tag_from_string.hpp"

namespace el_stat_prop {

    // *****************************************************************************

    using PossibleReferencePointTagsList = PossibleTagList<
            InpOrientReferencePointTag,
            StdOrientReferencePointTag,
            AtomReferencePointTag >;

    // *****************************************************************************

    std::string ChargeTag::to_string() const {
        const std::string resut = "q";
        return resut;
    }

    auto ChargeTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        if (str != "q")
            return nullptr;
        return std::make_shared<type>();
    }

    // *****************************************************************************

    DipoleMomentTag::DipoleMomentTag(
            Orient orient, Direction direction,
            std::shared_ptr<ReferencePointTag> reference_point) :
    m_orient(orient),
    m_direction(direction),
    m_reference_point(reference_point) {
        if (!m_reference_point)
            throw std::invalid_argument("Formal argument reference_point is nullptr.");
    }

    std::string DipoleMomentTag::to_string() const {
        const std::string orient_str = orient_to_string(m_orient);
        const std::string dirrection_str = direction_to_string(m_direction);
        const std::string reference_point_str = m_reference_point->to_string();
        const std::string resut =
                "p_" + orient_str + "::" + dirrection_str +
                "->" + reference_point_str;
        return resut;
    }

    auto DipoleMomentTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        boost::regex re("p_((?:stdOrient)|(?:inpOrient))::([xyz])->(.*)");
        boost::smatch m;
        if (!boost::regex_match(str, m, re))
            return nullptr;
        const Orient orient = orient_from_string(m[1]);
        const Direction direction = direction_from_string(m[2]);
        const auto reference_point_tag =
                tag_from_string<ReferencePointTag, PossibleReferencePointTagsList>(m[3]);
        if (!reference_point_tag) return nullptr;
        return std::make_shared<type>(orient, direction, reference_point_tag);
    }

    // *****************************************************************************

    QuadrupoleMomentTag::QuadrupoleMomentTag(
            Orient orient, Direction2 direction,
            std::shared_ptr<ReferencePointTag> reference_point) :
    m_orient(orient),
    m_direction(direction),
    m_reference_point(reference_point) {
        if (!m_reference_point)
            throw std::invalid_argument("Formal argument reference_point is nullptr.");
    }

    std::string QuadrupoleMomentTag::to_string() const {
        const std::string orient_str = orient_to_string(m_orient);
        const std::string dirrection_str = direction2_to_string(m_direction);
        const std::string reference_point_str = m_reference_point->to_string();
        const std::string resut =
                "Q_" + orient_str + "::" + dirrection_str +
                "->" + reference_point_str;
        return resut;
    }

    auto QuadrupoleMomentTag::from_string(const std::string& str) -> std::shared_ptr<type> {
        boost::regex re("Q_((?:stdOrient)|(?:inpOrient))::([xyz][xyz])->(.*)");
        boost::smatch m;
        if (!boost::regex_match(str, m, re))
            return nullptr;
        const Orient orient = orient_from_string(m[1]);
        const Direction2 direction = direction2_from_string(m[2]);
        const auto reference_point_tag =
                tag_from_string<ReferencePointTag, PossibleReferencePointTagsList>(m[3]);
        if (!reference_point_tag) return nullptr;
        return std::make_shared<type>(orient, direction, reference_point_tag);
    }

} // end of namespace el_stat_prop
