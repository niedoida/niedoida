/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_XC_KIT_XC_FUNCTIONAL_DATA_HPP
#define NIEDOIDA_XC_KIT_XC_FUNCTIONAL_DATA_HPP

namespace niedoida {
    namespace xc {
        struct XCFunctionalData {
            XCFunctionalData():
                e(0), 
                de_dra(0), de_drb(0), 
                de_dgaa(0), de_dgab(0), de_dgbb(0),
                d2e_drara(0), d2e_drarb(0), d2e_drbrb(0),
                d2e_dragaa(0), d2e_dragab(0), d2e_dragbb(0),
                d2e_drbgaa(0), d2e_drbgab(0), d2e_drbgbb(0),
                d2e_dgaagaa(0),  d2e_dgaagab(0), d2e_dgaagbb(0),
                d2e_dgbbgab(0),  d2e_dgbbgbb(0),
                d2e_dgabgab(0) {}

            double e;
            double de_dra;
            double de_drb;
            double de_dgaa;
            double de_dgab;
            double de_dgbb;
            double d2e_drara;
            double d2e_drarb;
            double d2e_drbrb;
            double d2e_dragaa;
            double d2e_dragab;
            double d2e_dragbb;
            double d2e_drbgaa;
            double d2e_drbgab;
            double d2e_drbgbb;
            double d2e_dgaagaa;
            double d2e_dgaagab;
            double d2e_dgaagbb;
            double d2e_dgbbgab;
            double d2e_dgbbgbb;
            double d2e_dgabgab;
            double d3e_drarara;
            double d3e_drararb;
            double d3e_drarbrb;
            double d3e_drbrbrb;
            double d3e_draragaa;
            double d3e_draragab;
            double d3e_draragbb;
            double d3e_drarbgaa;
            double d3e_drarbgab;
            double d3e_drarbgbb;
            double d3e_drbrbgaa;
            double d3e_drbrbgab;
            double d3e_drbrbgbb;
            double d3e_dragaagaa;
            double d3e_dragaagab;
            double d3e_dragaagbb;
            double d3e_dragabgab;
            double d3e_dragabgbb;
            double d3e_dragbbgbb;
            double d3e_drbgaagaa;
            double d3e_drbgaagab;
            double d3e_drbgaagbb;
            double d3e_drbgabgab;
            double d3e_drbgabgbb;
            double d3e_drbgbbgbb;
            double d3e_dgaagaagaa;
            double d3e_dgaagaagab;
            double d3e_dgaagaagbb;
            double d3e_dgaagabgab;
            double d3e_dgaagabgbb;
            double d3e_dgaagbbgbb;
            double d3e_dgabgabgab;
            double d3e_dgabgabgbb;
            double d3e_dgabgbbgbb;
            double d3e_dgbbgbbgbb;
        };

        inline
        XCFunctionalData operator * (double a, const XCFunctionalData& d)
        {
            XCFunctionalData r(d);

            r.e *= a;
            r.de_dra *= a;
            r.de_drb *= a;
            r.de_dgaa *= a;
            r.de_dgab *= a;
            r.de_dgbb *= a;
            r.d2e_drara *= a;
            r.d2e_drarb *= a;
            r.d2e_drbrb *= a;
            r.d2e_dragaa *= a; 
            r.d2e_dragab *= a; 
            r.d2e_dragbb *= a; 
            r.d2e_drbgaa *= a; 
            r.d2e_drbgab *= a; 
            r.d2e_drbgbb *= a; 
            r.d2e_dgaagaa *= a;
            r.d2e_dgaagab *= a;
            r.d2e_dgaagbb *= a;
            r.d2e_dgbbgab *= a;
            r.d2e_dgbbgbb *= a;
            r.d2e_dgabgab *= a;

            return r;
        }

        inline
        XCFunctionalData operator + (const XCFunctionalData& a, const XCFunctionalData& b)
        {
            XCFunctionalData r(a);

            r.e += b.e;
            r.de_dra += b.de_dra;
            r.de_drb += b.de_drb;
            r.de_dgaa += b.de_dgaa;
            r.de_dgab += b.de_dgab;
            r.de_dgbb += b.de_dgbb;
            r.d2e_drara += b.d2e_drara;
            r.d2e_drarb += b.d2e_drarb;
            r.d2e_drbrb += b.d2e_drbrb;
            r.d2e_dragaa  += b.d2e_dragaa; 
            r.d2e_dragab  += b.d2e_dragab; 
            r.d2e_dragbb  += b.d2e_dragbb; 
            r.d2e_drbgaa  += b.d2e_drbgaa; 
            r.d2e_drbgab  += b.d2e_drbgab; 
            r.d2e_drbgbb  += b.d2e_drbgbb; 
            r.d2e_dgaagaa += b.d2e_dgaagaa;
            r.d2e_dgaagab += b.d2e_dgaagab;
            r.d2e_dgaagbb += b.d2e_dgaagbb;
            r.d2e_dgbbgab += b.d2e_dgbbgab;
            r.d2e_dgbbgbb += b.d2e_dgbbgbb;
            r.d2e_dgabgab += b.d2e_dgabgab;

            return r;
        }
    }
}

#endif
