/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ELECTRON_DENSITY_PROPERTIES_TAGS_HPP
#define ELECTRON_DENSITY_PROPERTIES_TAGS_HPP

#include <memory>
#include <string>

#include "el_stat_prop_kit/direction_enum.hpp"
#include "el_stat_prop_kit/reference_points_tags.hpp"
#include "el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ElectronDensityPropertyTag - abstract base class:
    // **************
    // *****************************************************************************

    class PropertyTag : public TagAbstractBase {
    public:
    };

    // *****************************************************************************
    // ***************              PropertyTag - concrete classes:
    // *************
    // *****************************************************************************

    class ChargeTag : public PropertyTag {
        typedef ChargeTag type;

    public:
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    };

    // *****************************************************************************

    class DipoleMomentTag : public PropertyTag {
        typedef DipoleMomentTag type;

    public:
        DipoleMomentTag(Orient, Direction, std::shared_ptr<ReferencePointTag>);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;

    public:
        const Orient m_orient;
        const Direction m_direction;
        const std::shared_ptr<ReferencePointTag> m_reference_point;
    };

    // *****************************************************************************

    class QuadrupoleMomentTag : public PropertyTag {
        typedef QuadrupoleMomentTag type;

    public:
        QuadrupoleMomentTag(Orient,
                            Direction2,
                            std::shared_ptr<ReferencePointTag>);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;

    public:
        const Orient m_orient;
        const Direction2 m_direction;
        const std::shared_ptr<ReferencePointTag> m_reference_point;
    };

} // end of namespace el_stat_prop

#endif
