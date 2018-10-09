/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_BOND_ORDER_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_BOND_ORDER_ANALYSIS_HPP

#include <armadillo>
#include <boost/noncopyable.hpp>

/**
 * @ingroup property_kit
 *
 * @brief Base class for any bond order analysis
 */
class BondOrderAnalysis: public boost::noncopyable {
public:
    virtual ~BondOrderAnalysis () {}
    virtual const arma::mat& bond_orders() const = 0;
};

#endif
