/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef RADIAL_MAPPING_HPP
#define RADIAL_MAPPING_HPP

class RadialMapping {
public:
    virtual ~RadialMapping() {}

    virtual double mapping(double) = 0;
    virtual double deriv(double) = 0;
};


class LogmMapping: public RadialMapping {
public:
};

#endif
