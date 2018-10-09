/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ELECTRON_DENSITY_FRAGMENTS_BITS_HPP
#define ELECTRON_DENSITY_FRAGMENTS_BITS_HPP

#include<armadillo>

#include<el_stat_prop_kit/fragments_tags.hpp>
#include<el_stat_prop_kit/adapter.hpp>

namespace el_stat_prop {

    // *****************************************************************************
    // ***********        FragmentBit - abstract base class:          **************
    // *****************************************************************************

    class FragmentBit {
    public:
        explicit FragmentBit(const SystemAdapterAbstractBase&);
        virtual arma::mat trim_electron_operator(const arma::mat&) const = 0;
        virtual arma::vec trim_nuclei_contraction_coeffs(const arma::vec&) const = 0;
        virtual ~FragmentBit() = 0;
    public:
        const SystemAdapterAbstractBase& m_system;
    };

    // *****************************************************************************
    // ***********        FragmentTag - concrete classes:             **************
    // *****************************************************************************

    class MullikenBit : public FragmentBit {
    public:
        using tag_t = MullikenTag;
        MullikenBit(tag_t, const SystemAdapterAbstractBase&);
        arma::mat trim_electron_operator(const arma::mat&) const override;
        arma::vec trim_nuclei_contraction_coeffs(const arma::vec&) const override;
    public:
        const tag_t m_tag;
    };

    // *****************************************************************************

    class LowdinBit : public FragmentBit {
    public:
        using tag_t = LowdinTag;
        LowdinBit(tag_t, const SystemAdapterAbstractBase&);
        arma::mat trim_electron_operator(const arma::mat&) const override;
        arma::vec trim_nuclei_contraction_coeffs(const arma::vec&) const override;
    public:
        const tag_t m_tag;
    };

} // end of namespace el_stat_prop

#endif

