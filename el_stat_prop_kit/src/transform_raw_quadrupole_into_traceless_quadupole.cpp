/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/transform_raw_quadrupole_into_traceless_quadupole.hpp>

namespace el_stat_prop {

    arma::vec6 transform_raw_quadrupole_into_traceless_quadupole(const arma::vec6& raw) {
        const double& raw_xx = raw(0);
        const double& raw_yy = raw(3);
        const double& raw_zz = raw(5);
        const double raw_tr = raw_xx + raw_yy + raw_zz;
        arma::vec6 traceless = 3 * raw;
        double& traceless_xx = traceless(0);
        double& traceless_yy = traceless(3);
        double& traceless_zz = traceless(5);
        traceless_xx -= raw_tr;
        traceless_yy -= raw_tr;
        traceless_zz -= raw_tr;
        return traceless;
    }

} // end of namespace el_stat_prop
