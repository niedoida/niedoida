/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ELECTRON_DENSITY_FRAGMENTS_TAGS
#define ELECTRON_DENSITY_FRAGMENTS_TAGS

#include <memory>
#include <string>

#include "el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ElectronDensityFragmentTag - abstract base class:
    // **************
    // *****************************************************************************

    class FragmentTag : public TagAbstractBase {
    };

    // *****************************************************************************
    // ***************  ElectronDensityFragmentTag - concrete classes:
    // *************
    // *****************************************************************************

    class MullikenTag : public FragmentTag {
        typedef MullikenTag type;

    public:
        explicit MullikenTag(unsigned atom);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;

    public:
        const unsigned m_atom;
    };

    // *****************************************************************************

    class LowdinTag : public FragmentTag {
        typedef LowdinTag type;

    public:
        explicit LowdinTag(unsigned atom);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;

    public:
        const unsigned m_atom;
    };

} // end of namespace el_stat_prop

#endif
