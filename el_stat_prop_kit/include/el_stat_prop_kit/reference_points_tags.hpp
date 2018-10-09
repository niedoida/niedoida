/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef REFERENCE_POINTS_TAGS_HPP
#define REFERENCE_POINTS_TAGS_HPP

#include <memory>
#include <string>

#include "el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ReferencePointTag -  abstract base class:
    // **********************
    // *****************************************************************************

    class ReferencePointTag : public TagAbstractBase {
    public:
    };

    // *****************************************************************************
    // ***************  ReferencePointTag - concrete classes:
    // **********************
    // *****************************************************************************

    class StdOrientReferencePointTag : public ReferencePointTag {
        typedef StdOrientReferencePointTag type;

    public:
        std::string to_string() const override;
        static auto from_string(const std::string& s) -> std::shared_ptr<type>;
    };

    // *****************************************************************************

    class InpOrientReferencePointTag : public ReferencePointTag {
        typedef InpOrientReferencePointTag type;

    public:
        std::string to_string() const override;
        static auto from_string(const std::string& s) -> std::shared_ptr<type>;
    };

    // *****************************************************************************

    class AtomReferencePointTag : public ReferencePointTag {
        typedef AtomReferencePointTag type;

    public:
        explicit AtomReferencePointTag(unsigned atom);
        std::string to_string() const override;
        static auto from_string(const std::string& s) -> std::shared_ptr<type>;

    public:
        const unsigned m_atom;
    };

} // end of namespace el_stat_prop

#endif
