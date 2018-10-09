/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ELECTRON_DENSITY_FRAGMENT_PROPERTY_TAG
#define ELECTRON_DENSITY_FRAGMENT_PROPERTY_TAG

#include <memory>
#include <string>

#include "el_stat_prop_kit/fragments_tags.hpp"
#include "el_stat_prop_kit/properties_tags.hpp"
#include "el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    class FragmentPropertyTag : public PropertyTag {
        typedef FragmentPropertyTag type;

    public:
        FragmentPropertyTag(const std::shared_ptr<PropertyTag> property_tag,
                            const std::shared_ptr<FragmentTag> fragment_tag);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;

    public:
        const std::shared_ptr<PropertyTag> m_property_tag;
        const std::shared_ptr<FragmentTag> m_fragment_tag;
    };

} // end of namespace el_stat_prop

#endif
