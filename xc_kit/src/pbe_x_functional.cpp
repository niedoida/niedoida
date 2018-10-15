/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

// Auto-generated file, do not modify
#include "xc_kit/xc_functionals.hpp"

#include <cmath>
#include <limits>

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

// Auto-generated, do not modify
namespace niedoida {
    namespace xc {
        XCFunctionalData pbe_x_functional(
            double rhoa, double rhob, 
            double gammaaa, double gammaab, double gammabb, 
            unsigned n)
        {
            const double eps = std::numeric_limits<double>::epsilon();
            const double Pi = 3.1415926535897932384626433832795028842;

            XCFunctionalData result;

            if (rhoa + rhob < 2 * eps)
                return result;

            // Value of the functional itself

            if (rhoa >= eps && rhob >= eps) {
        const double C49 = 2 * rhoa;
        const double C50 = 2 * rhob;
        const double C51 = 1. / 3.;
        const double C52 = std::pow(Pi, 2);
        const double C53 = C52 * C49;
        const double C54 = C52 * C50;
        const double C55 = 3. * C53;
        const double C56 = 3. * C54;
        const double C57 = std::pow(C55, C51);
        const double C58 = std::pow(C56, C51);

                result.e =  - ( ( 1.804 - 0.804 / ( ( 0.2195149727645171 * std::pow(std::sqrt(4 * gammabb) / ( 2. * ( C58 * C50 + 1e-16) ) , 2))  / 0.804 + 1) )  * rhob * 3. * C58 + ( 1.804 - 0.804 / ( ( 0.2195149727645171 * std::pow(std::sqrt(4 * gammaaa) / ( 2. * ( C57 * C49 + 1e-16) ) , 2))  / 0.804 + 1) )  * rhoa * 3. * C57)  / ( 4. * Pi) ;
            } else if (rhoa < eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);

                result.e =  - ( ( 1.804 - 0.804 / ( ( 0.2195149727645171 * std::pow(std::sqrt(4 * gammabb) / ( 2. * ( C72 * C64 + 1e-16) ) , 2))  / 0.804 + 1) )  * rhob * 3. * C72 + ( 1.804 - 0.804 / ( ( 0.2195149727645171 * std::pow(std::sqrt(4 * gammaaa) / ( 2. * ( C71 * C63 + 1e-16) ) , 2))  / 0.804 + 1) )  * rhoa * 3. * C71)  / ( 4. * Pi) ;
            } else if (rhob < eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);

                result.e =  - ( ( 1.804 - 0.804 / ( ( 0.2195149727645171 * std::pow(std::sqrt(4 * gammabb) / ( 2. * ( C83 * C75 + 1e-16) ) , 2))  / 0.804 + 1) )  * rhob * 3. * C83 + ( 1.804 - 0.804 / ( ( 0.2195149727645171 * std::pow(std::sqrt(4 * gammaaa) / ( 2. * ( C82 * C74 + 1e-16) ) , 2))  / 0.804 + 1) )  * rhoa * 3. * C82)  / ( 4. * Pi) ;
            }

            if (n < 1)
                return result;

            // First derivatives with respect to density

            if (rhoa >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;

                result.de_dra =  - ( ( 1.804 - 0.804 / C99)  * ( ( rhoa * 3. * C94)  / 3. + C85)  + ( rhoa * C85 * -0.705960152410687 * ( 2 * C82 + ( 2 * rhoa * C94)  / 3.)  * C86)  / ( 1.608 * C90 * std::pow(C93, 2) * std::pow(C99, 2)) )  / ( 4. * Pi) ;
            }

            if (rhob >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;

                result.de_drb =  - ( ( 1.804 - 0.804 / C115)  * ( ( rhob * 3. * C110)  / 3. + C101)  + ( rhob * C101 * -0.705960152410687 * ( 2 * C72 + ( 2 * rhob * C110)  / 3.)  * C102)  / ( 1.608 * C106 * std::pow(C109, 2) * std::pow(C115, 2)) )  / ( 4. * Pi) ;
            }

            // First derivatives with respect to density gradient

            if (gammaaa >= eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;

                result.de_dgaa =  - ( rhoa * 3. * C168 * 0.705960152410687 * C166)  / ( 1.608 * C170 * C166 * C171 * std::pow(( 0.2195149727645171 * std::pow(C166 / C171, 2))  / 0.804 + 1, 2) * 4. * Pi) ;
            }

            if (gammaab >= eps) {

                result.de_dgab = 0;
            }

            if (gammabb >= eps) {
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;

                result.de_dgbb =  - ( rhob * 3. * C181 * 0.705960152410687 * C179)  / ( 1.608 * C183 * C179 * C184 * std::pow(( 0.2195149727645171 * std::pow(C179 / C184, 2))  / 0.804 + 1, 2) * 4. * Pi) ;
            }

            if (n < 2)
                return result;

            // Second derivatives with respect to density

            if (rhoa >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C186 = -12. * C77;
        const double C187 = 2 * C82;
        const double C188 = 3. * C94;
        const double C189 = rhoa * C85;
        const double C190 = rhoa * C94;
        const double C191 = -5. / 3.;
        const double C192 = std::pow(C93, 2);
        const double C193 = std::pow(C99, 2);
        const double C194 = 2 * C190;
        const double C195 = C90 * C192;
        const double C196 = rhoa * C188;
        const double C197 = std::pow(C80, C191);
        const double C198 = C195 * C193;
        const double C199 = C197 * C186;
        const double C200 = C194 / 3.;
        const double C201 = C196 / 3.;
        const double C202 = 1.608 * C198;
        const double C203 = C77 * C199;
        const double C204 = C187 + C200;
        const double C205 = C201 + C85;
        const double C206 = C204 * C86;
        const double C207 = -0.705960152410687 * C206;
        const double C208 = C205 * C207;

                result.d2e_drara =  - ( ( ( 1.804 - 0.804 / C99)  * ( ( rhoa * 18. * C203)  / 3. + C188 + C188) )  / 3. + C208 / C202 + ( 1.608 * C198 * ( ( C189 * -2.8238406096427479 * gammaaa * ( 2 * C94 + 2 * ( ( rhoa * 6. * C203)  / 3. + C94) ) )  / 3. + C208)  - C189 * C207 * 1.608 * ( ( C195 * C99 * -1.7561197821161368 * C206)  / ( 1.608 * C195)  + ( C90 * 4. * C204 * C93 + C204 * C192)  * C193) )  / std::pow(C202, 2))  / ( 4. * Pi) ;
            }

            if (rhoa >= eps && rhob >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;

                result.d2e_drarb = 0;
            }

            if (rhob >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C211 = -12. * C66;
        const double C212 = 2 * C72;
        const double C213 = 3. * C110;
        const double C214 = rhob * C101;
        const double C215 = rhob * C110;
        const double C216 = -5. / 3.;
        const double C217 = std::pow(C109, 2);
        const double C218 = std::pow(C115, 2);
        const double C219 = 2 * C215;
        const double C220 = C106 * C217;
        const double C221 = rhob * C213;
        const double C222 = std::pow(C70, C216);
        const double C223 = C220 * C218;
        const double C224 = C222 * C211;
        const double C225 = C219 / 3.;
        const double C226 = C221 / 3.;
        const double C227 = 1.608 * C223;
        const double C228 = C66 * C224;
        const double C229 = C212 + C225;
        const double C230 = C226 + C101;
        const double C231 = C229 * C102;
        const double C232 = -0.705960152410687 * C231;
        const double C233 = C230 * C232;

                result.d2e_drbrb =  - ( ( ( 1.804 - 0.804 / C115)  * ( ( rhob * 18. * C228)  / 3. + C213 + C213) )  / 3. + C233 / C227 + ( 1.608 * C223 * ( ( C214 * -2.8238406096427479 * gammabb * ( 2 * C110 + 2 * ( ( rhob * 6. * C228)  / 3. + C110) ) )  / 3. + C233)  - C214 * C232 * 1.608 * ( ( C220 * C115 * -1.7561197821161368 * C231)  / ( 1.608 * C220)  + ( C106 * 4. * C229 * C109 + C229 * C217)  * C218) )  / std::pow(C227, 2))  / ( 4. * Pi) ;
            }

            // Second derivatives with respect to density gradient

            if (gammaaa > eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C265 = 3. * C168;
        const double C266 = 4. * Pi;
        const double C267 = C166 * C171;
        const double C268 = C166 / C171;
        const double C269 = C170 * C267;
        const double C270 = rhoa * C265;
        const double C271 = std::pow(C268, 2);
        const double C272 = 0.2195149727645171 * C271;
        const double C273 = C272 / 0.804;
        const double C274 = C273 + 1;
        const double C275 = std::pow(C274, 2);
        const double C276 = C269 * C275;
        const double C277 = C276 * C266;

                result.d2e_dgaagaa =  - ( ( 1.608 * C277 * 1.4119203048213739 * C270)  / C166 - C270 * 0.705960152410687 * C166 * 1.608 * ( ( C269 * C274 * 1.7561197821161368 * C166)  / ( 1.608 * C269)  + ( C275 * 4. * std::pow(C170, 2))  / C166)  * C266)  / std::pow(1.608 * C277, 2);
            }

            if (gammaaa >= eps && gammaab >= eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;

                result.d2e_dgaagab = 0;
            }

            if (gammaaa >= eps && gammabb >= eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;

                result.d2e_dgaagbb = 0;
            }

            if (gammaab >= eps) {

                result.d2e_dgabgab = 0;
            }

            if (gammabb >= eps && gammaab >= eps) {
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;

                result.d2e_dgbbgab = 0;
            }

            if (gammabb >= eps) {
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C282 = 3. * C181;
        const double C283 = 4. * Pi;
        const double C284 = C179 * C184;
        const double C285 = C179 / C184;
        const double C286 = C183 * C284;
        const double C287 = rhob * C282;
        const double C288 = std::pow(C285, 2);
        const double C289 = 0.2195149727645171 * C288;
        const double C290 = C289 / 0.804;
        const double C291 = C290 + 1;
        const double C292 = std::pow(C291, 2);
        const double C293 = C286 * C292;
        const double C294 = C293 * C283;

                result.d2e_dgbbgbb =  - ( ( 1.608 * C294 * 1.4119203048213739 * C287)  / C179 - C287 * 0.705960152410687 * C179 * 1.608 * ( ( C286 * C291 * 1.7561197821161368 * C179)  / ( 1.608 * C286)  + ( C292 * 4. * std::pow(C183, 2))  / C179)  * C283)  / std::pow(1.608 * C294, 2);
            }

            // Mixed second derivatives

            if (rhoa >= eps && gammaaa >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C235 = 2 * C82;
        const double C236 = C91 * C93;
        const double C237 = rhoa * C85;
        const double C238 = rhoa * C94;
        const double C239 = std::pow(C93, 2);
        const double C240 = std::pow(C99, 2);
        const double C241 = 2 * C238;
        const double C242 = C90 * C236;
        const double C243 = C90 * C239;
        const double C244 = C243 * C240;
        const double C245 = C241 / 3.;
        const double C246 = C235 + C245;

                result.d2e_dragaa =  - ( ( ( ( rhoa * 3. * C94)  / 3. + C85)  * 0.705960152410687 * C91)  / ( 1.608 * C242 * C240)  + ( 1.608 * C244 * C237 * -2.8238406096427479 * C246 - ( C237 * -0.705960152410687 * C246 * C86 * 1.608 * C243 * C99 * 1.7561197821161368 * C91)  / ( 1.608 * C242) )  / std::pow(1.608 * C244, 2))  / ( 4. * Pi) ;
            }

            if (rhoa >= eps && gammaab >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;

                result.d2e_dragab = 0;
            }

            if (rhoa >= eps && gammabb >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;

                result.d2e_dragbb = 0;
            }

            if (rhob >= eps && gammaaa >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;

                result.d2e_drbgaa = 0;
            }

            if (rhob >= eps && gammaab >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;

                result.d2e_drbgab = 0;
            }

            if (rhob >= eps && gammabb >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C252 = 2 * C72;
        const double C253 = C107 * C109;
        const double C254 = rhob * C101;
        const double C255 = rhob * C110;
        const double C256 = std::pow(C109, 2);
        const double C257 = std::pow(C115, 2);
        const double C258 = 2 * C255;
        const double C259 = C106 * C253;
        const double C260 = C106 * C256;
        const double C261 = C260 * C257;
        const double C262 = C258 / 3.;
        const double C263 = C252 + C262;

                result.d2e_drbgbb =  - ( ( ( ( rhob * 3. * C110)  / 3. + C101)  * 0.705960152410687 * C107)  / ( 1.608 * C259 * C257)  + ( 1.608 * C261 * C254 * -2.8238406096427479 * C263 - ( C254 * -0.705960152410687 * C263 * C102 * 1.608 * C260 * C115 * 1.7561197821161368 * C107)  / ( 1.608 * C259) )  / std::pow(1.608 * C261, 2))  / ( 4. * Pi) ;
            }

            if (n < 3)
                return result;

            // Third derivatives with respect to density

            if (rhoa >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C186 = -12. * C77;
        const double C187 = 2 * C82;
        const double C188 = 3. * C94;
        const double C189 = rhoa * C85;
        const double C190 = rhoa * C94;
        const double C191 = -5. / 3.;
        const double C192 = std::pow(C93, 2);
        const double C193 = std::pow(C99, 2);
        const double C194 = 2 * C190;
        const double C195 = C90 * C192;
        const double C196 = rhoa * C188;
        const double C197 = std::pow(C80, C191);
        const double C198 = C195 * C193;
        const double C199 = C197 * C186;
        const double C200 = C194 / 3.;
        const double C201 = C196 / 3.;
        const double C202 = 1.608 * C198;
        const double C203 = C77 * C199;
        const double C204 = C187 + C200;
        const double C205 = C201 + C85;
        const double C206 = C204 * C86;
        const double C207 = -0.705960152410687 * C206;
        const double C208 = C205 * C207;
        const double C297 = -30. * C77;
        const double C298 = -1.7561197821161368 * C206;
        const double C299 = 1.608 * C195;
        const double C300 = 2 * C94;
        const double C301 = 6. * C203;
        const double C302 = 18. * C203;
        const double C303 = C189 * C207;
        const double C304 = C204 * C192;
        const double C305 = C204 * C93;
        const double C306 = -8. / 3.;
        const double C307 = std::pow(C202, 2);
        const double C308 = 4. * C305;
        const double C309 = C99 * C298;
        const double C310 = rhoa * C301;
        const double C311 = rhoa * C302;
        const double C312 = std::pow(C80, C306);
        const double C313 = C195 * C309;
        const double C314 = C204 * C308;
        const double C315 = C312 * C297;
        const double C316 = C90 * C308;
        const double C317 = C310 / 3.;
        const double C318 = C311 / 3.;
        const double C319 = C77 * C315;
        const double C320 = C316 + C304;
        const double C321 = C317 + C94;
        const double C322 = C318 + C188;
        const double C323 = C313 / C299;
        const double C324 = -12. * C319;
        const double C325 = 2 * C321;
        const double C326 = C320 * C193;
        const double C327 = C320 * C309;
        const double C328 = C322 + C188;
        const double C329 = C206 * C328;
        const double C330 = C77 * C324;
        const double C331 = C300 + C325;
        const double C332 = C323 + C326;
        const double C333 = 0.705960152410687 * C329;
        const double C334 = 1.608 * C332;
        const double C335 = gammaaa * C331;
        const double C336 = -2.8238406096427479 * C335;
        const double C337 = C189 * C336;
        const double C338 = C205 * C336;
        const double C339 = C338 - C333;
        const double C340 = C337 / 3.;
        const double C341 = C340 + C208;

                result.d3e_drarara =  - ( ( ( ( 1.804 - 0.804 / C99)  * ( ( rhoa * 18. * C330)  / 3. + C302 + C302 + C302) )  / 3. + ( C328 * C207)  / C202)  / 3. + ( ( 1.608 * C198 * C339)  / 3. - C208 * C334)  / C307 + ( C307 * ( 1.608 * ( ( C198 * ( ( C189 * -2.8238406096427479 * gammaaa * ( 12. * C203 + 2 * ( ( rhoa * 6. * C330)  / 3. + C301 + C301) ) )  / 3. + C338 + C339) )  / 3. + C332 * C341)  - ( C303 * 1.608 * ( ( 1.608 * C195 * ( C195 * ( ( C99 * -7.0244791284645472 * C335)  / 3. + ( 1.5419783445698139 * std::pow(C206, 2))  / C299)  + C327)  - C313 * 1.608 * C320)  / std::pow(C299, 2) + C327 / C299 + ( C90 * 4. * ( 2. * std::pow(C204, 2) + ( 2. * C90 * C331)  / 3.)  + C314 + C314 + ( C192 * C331)  / 3.)  * C193)  + C341 * C334) )  - ( 1.608 * C198 * C341 - C303 * C334)  * 3.216 * C332 * C202)  / std::pow(C202, 4))  / ( 4. * Pi) ;
            }

            if (rhoa >= eps && rhob >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C186 = -12. * C77;
        const double C187 = 2 * C82;
        const double C188 = 3. * C94;
        const double C189 = rhoa * C85;
        const double C190 = rhoa * C94;
        const double C191 = -5. / 3.;
        const double C192 = std::pow(C93, 2);
        const double C193 = std::pow(C99, 2);
        const double C194 = 2 * C190;
        const double C195 = C90 * C192;
        const double C196 = rhoa * C188;
        const double C197 = std::pow(C80, C191);
        const double C198 = C195 * C193;
        const double C199 = C197 * C186;
        const double C200 = C194 / 3.;
        const double C201 = C196 / 3.;
        const double C202 = 1.608 * C198;
        const double C203 = C77 * C199;
        const double C204 = C187 + C200;
        const double C205 = C201 + C85;
        const double C206 = C204 * C86;
        const double C207 = -0.705960152410687 * C206;
        const double C208 = C205 * C207;
        const double C211 = -12. * C66;
        const double C212 = 2 * C72;
        const double C213 = 3. * C110;
        const double C214 = rhob * C101;
        const double C215 = rhob * C110;
        const double C216 = -5. / 3.;
        const double C217 = std::pow(C109, 2);
        const double C218 = std::pow(C115, 2);
        const double C219 = 2 * C215;
        const double C220 = C106 * C217;
        const double C221 = rhob * C213;
        const double C222 = std::pow(C70, C216);
        const double C223 = C220 * C218;
        const double C224 = C222 * C211;
        const double C225 = C219 / 3.;
        const double C226 = C221 / 3.;
        const double C227 = 1.608 * C223;
        const double C228 = C66 * C224;
        const double C229 = C212 + C225;
        const double C230 = C226 + C101;
        const double C231 = C229 * C102;
        const double C232 = -0.705960152410687 * C231;
        const double C233 = C230 * C232;

                result.d3e_drararb = 0;
                result.d3e_drarbrb = 0;
            }

            if (rhob >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C211 = -12. * C66;
        const double C212 = 2 * C72;
        const double C213 = 3. * C110;
        const double C214 = rhob * C101;
        const double C215 = rhob * C110;
        const double C216 = -5. / 3.;
        const double C217 = std::pow(C109, 2);
        const double C218 = std::pow(C115, 2);
        const double C219 = 2 * C215;
        const double C220 = C106 * C217;
        const double C221 = rhob * C213;
        const double C222 = std::pow(C70, C216);
        const double C223 = C220 * C218;
        const double C224 = C222 * C211;
        const double C225 = C219 / 3.;
        const double C226 = C221 / 3.;
        const double C227 = 1.608 * C223;
        const double C228 = C66 * C224;
        const double C229 = C212 + C225;
        const double C230 = C226 + C101;
        const double C231 = C229 * C102;
        const double C232 = -0.705960152410687 * C231;
        const double C233 = C230 * C232;
        const double C345 = -30. * C66;
        const double C346 = -1.7561197821161368 * C231;
        const double C347 = 1.608 * C220;
        const double C348 = 2 * C110;
        const double C349 = 6. * C228;
        const double C350 = 18. * C228;
        const double C351 = C214 * C232;
        const double C352 = C229 * C109;
        const double C353 = C229 * C217;
        const double C354 = -8. / 3.;
        const double C355 = std::pow(C227, 2);
        const double C356 = 4. * C352;
        const double C357 = C115 * C346;
        const double C358 = rhob * C349;
        const double C359 = rhob * C350;
        const double C360 = std::pow(C70, C354);
        const double C361 = C106 * C356;
        const double C362 = C220 * C357;
        const double C363 = C229 * C356;
        const double C364 = C360 * C345;
        const double C365 = C358 / 3.;
        const double C366 = C359 / 3.;
        const double C367 = C66 * C364;
        const double C368 = C361 + C353;
        const double C369 = C365 + C110;
        const double C370 = C366 + C213;
        const double C371 = C362 / C347;
        const double C372 = -12. * C367;
        const double C373 = 2 * C369;
        const double C374 = C368 * C218;
        const double C375 = C368 * C357;
        const double C376 = C370 + C213;
        const double C377 = C231 * C376;
        const double C378 = C66 * C372;
        const double C379 = C348 + C373;
        const double C380 = C371 + C374;
        const double C381 = 0.705960152410687 * C377;
        const double C382 = 1.608 * C380;
        const double C383 = gammabb * C379;
        const double C384 = -2.8238406096427479 * C383;
        const double C385 = C214 * C384;
        const double C386 = C230 * C384;
        const double C387 = C386 - C381;
        const double C388 = C385 / 3.;
        const double C389 = C388 + C233;

                result.d3e_drbrbrb =  - ( ( ( ( 1.804 - 0.804 / C115)  * ( ( rhob * 18. * C378)  / 3. + C350 + C350 + C350) )  / 3. + ( C376 * C232)  / C227)  / 3. + ( ( 1.608 * C223 * C387)  / 3. - C233 * C382)  / C355 + ( C355 * ( 1.608 * ( ( C223 * ( ( C214 * -2.8238406096427479 * gammabb * ( 12. * C228 + 2 * ( ( rhob * 6. * C378)  / 3. + C349 + C349) ) )  / 3. + C386 + C387) )  / 3. + C380 * C389)  - ( C351 * 1.608 * ( ( 1.608 * C220 * ( C220 * ( ( C115 * -7.0244791284645472 * C383)  / 3. + ( 1.5419783445698139 * std::pow(C231, 2))  / C347)  + C375)  - C362 * 1.608 * C368)  / std::pow(C347, 2) + C375 / C347 + ( C106 * 4. * ( 2. * std::pow(C229, 2) + ( 2. * C106 * C379)  / 3.)  + C363 + C363 + ( C217 * C379)  / 3.)  * C218)  + C389 * C382) )  - ( 1.608 * C223 * C389 - C351 * C382)  * 3.216 * C380 * C227)  / std::pow(C227, 4))  / ( 4. * Pi) ;
            }

            // Third derivatives with respect to density gradient

            if (gammaaa > eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C265 = 3. * C168;
        const double C266 = 4. * Pi;
        const double C267 = C166 * C171;
        const double C268 = C166 / C171;
        const double C269 = C170 * C267;
        const double C270 = rhoa * C265;
        const double C271 = std::pow(C268, 2);
        const double C272 = 0.2195149727645171 * C271;
        const double C273 = C272 / 0.804;
        const double C274 = C273 + 1;
        const double C275 = std::pow(C274, 2);
        const double C276 = C269 * C275;
        const double C277 = C276 * C266;
        const double C514 = 0.705960152410687 * C166;
        const double C515 = 1.4119203048213739 * C270;
        const double C516 = 1.608 * C269;
        const double C517 = 1.608 * C277;
        const double C518 = 1.7561197821161368 * C166;
        const double C519 = std::pow(C170, 2);
        const double C520 = 4. * C519;
        const double C521 = C270 * C514;
        const double C522 = C274 * C518;
        const double C523 = C277 * C515;
        const double C524 = C269 * C522;
        const double C525 = C275 * C520;
        const double C526 = C524 / C516;
        const double C527 = C525 / C166;
        const double C528 = C526 + C527;
        const double C529 = C528 * C266;
        const double C530 = C529 * C515;
        const double C531 = 1.608 * C530;

                result.d3e_dgaagaagaa =  - ( std::pow(C517, 2) * ( ( C166 * C531 - ( 3.216 * C523)  / C166)  / C162 - ( C521 * 1.608 * ( ( 1.608 * C269 * ( C269 * ( ( 3.5122395642322736 * C274)  / C166 + ( 6.1679133782792555 * gammaaa)  / C516)  + ( C522 * C520)  / C166)  - ( C524 * 6.432 * C519)  / C166)  / std::pow(C516, 2) + ( ( C166 * 4. * C519 * C522)  / C516 - ( 2 * C525)  / C166)  / C162)  * C266 + C531 / C166) )  - ( ( 1.608 * C523)  / C166 - C521 * 1.608 * C529)  * 3.216 * C529 * C517)  / std::pow(C517, 4);
            }

            if (gammaaa >= eps && gammaab >= eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C265 = 3. * C168;
        const double C266 = 4. * Pi;
        const double C267 = C166 * C171;
        const double C268 = C166 / C171;
        const double C269 = C170 * C267;
        const double C270 = rhoa * C265;
        const double C271 = std::pow(C268, 2);
        const double C272 = 0.2195149727645171 * C271;
        const double C273 = C272 / 0.804;
        const double C274 = C273 + 1;
        const double C275 = std::pow(C274, 2);
        const double C276 = C269 * C275;
        const double C277 = C276 * C266;

                result.d3e_dgaagaagab = 0;
                result.d3e_dgaagabgab = 0;
            }

            if (gammaaa >= eps && gammabb >= eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C265 = 3. * C168;
        const double C266 = 4. * Pi;
        const double C267 = C166 * C171;
        const double C268 = C166 / C171;
        const double C269 = C170 * C267;
        const double C270 = rhoa * C265;
        const double C271 = std::pow(C268, 2);
        const double C272 = 0.2195149727645171 * C271;
        const double C273 = C272 / 0.804;
        const double C274 = C273 + 1;
        const double C275 = std::pow(C274, 2);
        const double C276 = C269 * C275;
        const double C277 = C276 * C266;
        const double C282 = 3. * C181;
        const double C283 = 4. * Pi;
        const double C284 = C179 * C184;
        const double C285 = C179 / C184;
        const double C286 = C183 * C284;
        const double C287 = rhob * C282;
        const double C288 = std::pow(C285, 2);
        const double C289 = 0.2195149727645171 * C288;
        const double C290 = C289 / 0.804;
        const double C291 = C290 + 1;
        const double C292 = std::pow(C291, 2);
        const double C293 = C286 * C292;
        const double C294 = C293 * C283;

                result.d3e_dgaagaagbb = 0;
                result.d3e_dgaagbbgbb = 0;
            }

            if (gammaaa >= eps && gammaab >= eps && gammabb >= eps) {
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;

                result.d3e_dgaagabgbb = 0;
            }

            if (gammaab >= eps) {

                result.d3e_dgabgabgab = 0;
            }

            if (gammabb >= eps && gammaab >= eps) {
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C282 = 3. * C181;
        const double C283 = 4. * Pi;
        const double C284 = C179 * C184;
        const double C285 = C179 / C184;
        const double C286 = C183 * C284;
        const double C287 = rhob * C282;
        const double C288 = std::pow(C285, 2);
        const double C289 = 0.2195149727645171 * C288;
        const double C290 = C289 / 0.804;
        const double C291 = C290 + 1;
        const double C292 = std::pow(C291, 2);
        const double C293 = C286 * C292;
        const double C294 = C293 * C283;

                result.d3e_dgabgabgbb = 0;
                result.d3e_dgabgbbgbb = 0;
            }

            if (gammabb >= eps) {
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C282 = 3. * C181;
        const double C283 = 4. * Pi;
        const double C284 = C179 * C184;
        const double C285 = C179 / C184;
        const double C286 = C183 * C284;
        const double C287 = rhob * C282;
        const double C288 = std::pow(C285, 2);
        const double C289 = 0.2195149727645171 * C288;
        const double C290 = C289 / 0.804;
        const double C291 = C290 + 1;
        const double C292 = std::pow(C291, 2);
        const double C293 = C286 * C292;
        const double C294 = C293 * C283;
        const double C541 = 0.705960152410687 * C179;
        const double C542 = 1.4119203048213739 * C287;
        const double C543 = 1.608 * C286;
        const double C544 = 1.608 * C294;
        const double C545 = 1.7561197821161368 * C179;
        const double C546 = std::pow(C183, 2);
        const double C547 = 4. * C546;
        const double C548 = C287 * C541;
        const double C549 = C291 * C545;
        const double C550 = C294 * C542;
        const double C551 = C286 * C549;
        const double C552 = C292 * C547;
        const double C553 = C551 / C543;
        const double C554 = C552 / C179;
        const double C555 = C553 + C554;
        const double C556 = C555 * C283;
        const double C557 = C556 * C542;
        const double C558 = 1.608 * C557;

                result.d3e_dgbbgbbgbb =  - ( std::pow(C544, 2) * ( ( C179 * C558 - ( 3.216 * C550)  / C179)  / C175 - ( C548 * 1.608 * ( ( 1.608 * C286 * ( C286 * ( ( 3.5122395642322736 * C291)  / C179 + ( 6.1679133782792555 * gammabb)  / C543)  + ( C549 * C547)  / C179)  - ( C551 * 6.432 * C546)  / C179)  / std::pow(C543, 2) + ( ( C179 * 4. * C546 * C549)  / C543 - ( 2 * C552)  / C179)  / C175)  * C283 + C558 / C179) )  - ( ( 1.608 * C550)  / C179 - C548 * 1.608 * C556)  * 3.216 * C556 * C544)  / std::pow(C544, 4);
            }

            // Mixed third derivatives

            if (rhoa >= eps && gammaaa >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C186 = -12. * C77;
        const double C187 = 2 * C82;
        const double C188 = 3. * C94;
        const double C189 = rhoa * C85;
        const double C190 = rhoa * C94;
        const double C191 = -5. / 3.;
        const double C192 = std::pow(C93, 2);
        const double C193 = std::pow(C99, 2);
        const double C194 = 2 * C190;
        const double C195 = C90 * C192;
        const double C196 = rhoa * C188;
        const double C197 = std::pow(C80, C191);
        const double C198 = C195 * C193;
        const double C199 = C197 * C186;
        const double C200 = C194 / 3.;
        const double C201 = C196 / 3.;
        const double C202 = 1.608 * C198;
        const double C203 = C77 * C199;
        const double C204 = C187 + C200;
        const double C205 = C201 + C85;
        const double C206 = C204 * C86;
        const double C207 = -0.705960152410687 * C206;
        const double C208 = C205 * C207;
        const double C235 = 2 * C82;
        const double C236 = C91 * C93;
        const double C237 = rhoa * C85;
        const double C238 = rhoa * C94;
        const double C239 = std::pow(C93, 2);
        const double C240 = std::pow(C99, 2);
        const double C241 = 2 * C238;
        const double C242 = C90 * C236;
        const double C243 = C90 * C239;
        const double C244 = C243 * C240;
        const double C245 = C241 / 3.;
        const double C246 = C235 + C245;
        const double C265 = 3. * C168;
        const double C266 = 4. * Pi;
        const double C267 = C166 * C171;
        const double C268 = C166 / C171;
        const double C269 = C170 * C267;
        const double C270 = rhoa * C265;
        const double C271 = std::pow(C268, 2);
        const double C272 = 0.2195149727645171 * C271;
        const double C273 = C272 / 0.804;
        const double C274 = C273 + 1;
        const double C275 = std::pow(C274, 2);
        const double C276 = C269 * C275;
        const double C277 = C276 * C266;
        const double C391 = -2.8238406096427479 * C204;
        const double C392 = -1.7561197821161368 * C206;
        const double C393 = 1.608 * C195;
        const double C394 = 1.608 * C242;
        const double C395 = 1.7561197821161368 * C91;
        const double C396 = 2 * C94;
        const double C397 = 6. * C203;
        const double C398 = C189 * C207;
        const double C399 = C204 * C192;
        const double C400 = C204 * C93;
        const double C401 = std::pow(C202, 2);
        const double C402 = 4. * C400;
        const double C403 = C205 * C391;
        const double C404 = C99 * C392;
        const double C405 = C99 * C395;
        const double C406 = rhoa * C397;
        const double C407 = C195 * C404;
        const double C408 = C195 * C405;
        const double C409 = C90 * C402;
        const double C410 = C406 / 3.;
        const double C411 = C409 + C399;
        const double C412 = C410 + C94;
        const double C413 = C407 / C393;
        const double C414 = 2 * C412;
        const double C415 = C411 * C193;
        const double C416 = C396 + C414;
        const double C417 = C413 + C415;
        const double C418 = 1.608 * C417;
        const double C419 = gammaaa * C416;
        const double C420 = -2.8238406096427479 * C419;
        const double C421 = C189 * C420;
        const double C422 = C421 / 3.;
        const double C423 = C422 + C208;
        const double C466 = -2.8238406096427479 * C246;
        const double C467 = 1.608 * C242;
        const double C468 = 1.608 * C244;
        const double C469 = 1.7561197821161368 * C91;
        const double C470 = 3. * C94;
        const double C471 = C242 * C240;
        const double C472 = C246 * C86;
        const double C473 = std::pow(C90, 2);
        const double C474 = -0.705960152410687 * C472;
        const double C475 = C237 * C466;
        const double C476 = C99 * C469;
        const double C477 = rhoa * C470;
        const double C478 = C237 * C474;
        const double C479 = C243 * C476;
        const double C480 = C477 / 3.;
        const double C481 = 1.608 * C479;
        const double C482 = C480 + C85;
        const double C483 = C478 * C481;

                result.d3e_draragaa =  - ( ( ( ( rhoa * 18. * C203)  / 3. + C188 + C188)  * 0.705960152410687 * C91)  / ( 4.824 * C242 * C193)  + ( 1.608 * C198 * C403 - ( C208 * 1.608 * C408)  / C394)  / C401 + ( C401 * ( 1.608 * ( C198 * ( ( C189 * -2.8238406096427479 * C416)  / 3. + C403)  + ( C423 * C408)  / C394)  - ( C398 * 1.608 * ( ( C195 * ( C99 * -7.0244791284645472 * C204 + ( -1.7561197821161368 * C206 * 0.8780598910580684 * C91)  / C394) )  / C393 + ( C411 * C405)  / C394)  + C189 * C391 * C418) )  - ( ( 1.608 * C198 * C423 - C398 * C418)  * 1.608 * C198 * 3.216 * C408)  / C394)  / std::pow(C202, 4))  / ( 4. * Pi) ;
                result.d3e_dragaagaa =  - ( ( ( 1.608 * C471 * 1.4119203048213739 * C482)  / C91 - C482 * 0.705960152410687 * C91 * 1.608 * ( ( C242 * C476)  / C467 + ( C240 * 4. * C473)  / C91) )  / std::pow(1.608 * C471, 2) + ( std::pow(C468, 2) * ( ( 1.608 * C475 * C479)  / C467 - ( 1.608 * C242 * ( C478 * 1.608 * C243 * ( ( 3.5122395642322736 * C99)  / C91 + ( 6.1679133782792555 * gammaaa)  / C467)  + C475 * C481)  - ( C483 * 6.432 * C473)  / C91)  / std::pow(C467, 2))  - ( ( 1.608 * C244 * C475 - C483 / C467)  * 1.608 * C244 * 3.216 * C479)  / C467)  / std::pow(C468, 4))  / C266;
            }

            if (rhoa >= eps && gammaaa >= eps && gammaab >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C235 = 2 * C82;
        const double C236 = C91 * C93;
        const double C237 = rhoa * C85;
        const double C238 = rhoa * C94;
        const double C239 = std::pow(C93, 2);
        const double C240 = std::pow(C99, 2);
        const double C241 = 2 * C238;
        const double C242 = C90 * C236;
        const double C243 = C90 * C239;
        const double C244 = C243 * C240;
        const double C245 = C241 / 3.;
        const double C246 = C235 + C245;

                result.d3e_dragaagab = 0;
            }

            if (rhoa >= eps && gammaaa >= eps && gammabb >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C235 = 2 * C82;
        const double C236 = C91 * C93;
        const double C237 = rhoa * C85;
        const double C238 = rhoa * C94;
        const double C239 = std::pow(C93, 2);
        const double C240 = std::pow(C99, 2);
        const double C241 = 2 * C238;
        const double C242 = C90 * C236;
        const double C243 = C90 * C239;
        const double C244 = C243 * C240;
        const double C245 = C241 / 3.;
        const double C246 = C235 + C245;

                result.d3e_dragaagbb = 0;
            }

            if (rhoa >= eps && rhob >= eps && gammaaa >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C235 = 2 * C82;
        const double C236 = C91 * C93;
        const double C237 = rhoa * C85;
        const double C238 = rhoa * C94;
        const double C239 = std::pow(C93, 2);
        const double C240 = std::pow(C99, 2);
        const double C241 = 2 * C238;
        const double C242 = C90 * C236;
        const double C243 = C90 * C239;
        const double C244 = C243 * C240;
        const double C245 = C241 / 3.;
        const double C246 = C235 + C245;

                result.d3e_drarbgaa = 0;
            }

            if (rhoa >= eps && rhob >= eps && gammaab >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;

                result.d3e_drarbgab = 0;
            }

            if (rhoa >= eps && rhob >= eps && gammabb >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C252 = 2 * C72;
        const double C253 = C107 * C109;
        const double C254 = rhob * C101;
        const double C255 = rhob * C110;
        const double C256 = std::pow(C109, 2);
        const double C257 = std::pow(C115, 2);
        const double C258 = 2 * C255;
        const double C259 = C106 * C253;
        const double C260 = C106 * C256;
        const double C261 = C260 * C257;
        const double C262 = C258 / 3.;
        const double C263 = C252 + C262;

                result.d3e_drarbgbb = 0;
            }

            if (rhoa >= eps && gammaab >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C186 = -12. * C77;
        const double C187 = 2 * C82;
        const double C188 = 3. * C94;
        const double C189 = rhoa * C85;
        const double C190 = rhoa * C94;
        const double C191 = -5. / 3.;
        const double C192 = std::pow(C93, 2);
        const double C193 = std::pow(C99, 2);
        const double C194 = 2 * C190;
        const double C195 = C90 * C192;
        const double C196 = rhoa * C188;
        const double C197 = std::pow(C80, C191);
        const double C198 = C195 * C193;
        const double C199 = C197 * C186;
        const double C200 = C194 / 3.;
        const double C201 = C196 / 3.;
        const double C202 = 1.608 * C198;
        const double C203 = C77 * C199;
        const double C204 = C187 + C200;
        const double C205 = C201 + C85;
        const double C206 = C204 * C86;
        const double C207 = -0.705960152410687 * C206;
        const double C208 = C205 * C207;

                result.d3e_draragab = 0;
                result.d3e_dragabgab = 0;
            }

            if (rhoa >= eps && gammabb >= eps) {
        const double C74 = 2 * rhoa;
        const double C75 = 2 * rhob;
        const double C76 = 1. / 3.;
        const double C77 = std::pow(Pi, 2);
        const double C78 = C77 * C74;
        const double C79 = C77 * C75;
        const double C80 = 3. * C78;
        const double C81 = 3. * C79;
        const double C82 = std::pow(C80, C76);
        const double C83 = std::pow(C81, C76);
        const double C85 = 3. * C82;
        const double C86 = 4 * gammaaa;
        const double C87 = 6. * C77;
        const double C88 = C82 * C74;
        const double C89 = -2. / 3.;
        const double C90 = C88 + 1e-16;
        const double C91 = std::sqrt(C86);
        const double C92 = std::pow(C80, C89);
        const double C93 = 2. * C90;
        const double C94 = C92 * C87;
        const double C95 = C91 / C93;
        const double C96 = std::pow(C95, 2);
        const double C97 = 0.2195149727645171 * C96;
        const double C98 = C97 / 0.804;
        const double C99 = C98 + 1;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C186 = -12. * C77;
        const double C187 = 2 * C82;
        const double C188 = 3. * C94;
        const double C189 = rhoa * C85;
        const double C190 = rhoa * C94;
        const double C191 = -5. / 3.;
        const double C192 = std::pow(C93, 2);
        const double C193 = std::pow(C99, 2);
        const double C194 = 2 * C190;
        const double C195 = C90 * C192;
        const double C196 = rhoa * C188;
        const double C197 = std::pow(C80, C191);
        const double C198 = C195 * C193;
        const double C199 = C197 * C186;
        const double C200 = C194 / 3.;
        const double C201 = C196 / 3.;
        const double C202 = 1.608 * C198;
        const double C203 = C77 * C199;
        const double C204 = C187 + C200;
        const double C205 = C201 + C85;
        const double C206 = C204 * C86;
        const double C207 = -0.705960152410687 * C206;
        const double C208 = C205 * C207;
        const double C282 = 3. * C181;
        const double C283 = 4. * Pi;
        const double C284 = C179 * C184;
        const double C285 = C179 / C184;
        const double C286 = C183 * C284;
        const double C287 = rhob * C282;
        const double C288 = std::pow(C285, 2);
        const double C289 = 0.2195149727645171 * C288;
        const double C290 = C289 / 0.804;
        const double C291 = C290 + 1;
        const double C292 = std::pow(C291, 2);
        const double C293 = C286 * C292;
        const double C294 = C293 * C283;

                result.d3e_draragbb = 0;
                result.d3e_dragbbgbb = 0;
            }

            if (rhob >= eps && gammaaa >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C211 = -12. * C66;
        const double C212 = 2 * C72;
        const double C213 = 3. * C110;
        const double C214 = rhob * C101;
        const double C215 = rhob * C110;
        const double C216 = -5. / 3.;
        const double C217 = std::pow(C109, 2);
        const double C218 = std::pow(C115, 2);
        const double C219 = 2 * C215;
        const double C220 = C106 * C217;
        const double C221 = rhob * C213;
        const double C222 = std::pow(C70, C216);
        const double C223 = C220 * C218;
        const double C224 = C222 * C211;
        const double C225 = C219 / 3.;
        const double C226 = C221 / 3.;
        const double C227 = 1.608 * C223;
        const double C228 = C66 * C224;
        const double C229 = C212 + C225;
        const double C230 = C226 + C101;
        const double C231 = C229 * C102;
        const double C232 = -0.705960152410687 * C231;
        const double C233 = C230 * C232;
        const double C265 = 3. * C168;
        const double C266 = 4. * Pi;
        const double C267 = C166 * C171;
        const double C268 = C166 / C171;
        const double C269 = C170 * C267;
        const double C270 = rhoa * C265;
        const double C271 = std::pow(C268, 2);
        const double C272 = 0.2195149727645171 * C271;
        const double C273 = C272 / 0.804;
        const double C274 = C273 + 1;
        const double C275 = std::pow(C274, 2);
        const double C276 = C269 * C275;
        const double C277 = C276 * C266;

                result.d3e_drbrbgaa = 0;
                result.d3e_drbgaagaa = 0;
            }

            if (rhob >= eps && gammaab >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C211 = -12. * C66;
        const double C212 = 2 * C72;
        const double C213 = 3. * C110;
        const double C214 = rhob * C101;
        const double C215 = rhob * C110;
        const double C216 = -5. / 3.;
        const double C217 = std::pow(C109, 2);
        const double C218 = std::pow(C115, 2);
        const double C219 = 2 * C215;
        const double C220 = C106 * C217;
        const double C221 = rhob * C213;
        const double C222 = std::pow(C70, C216);
        const double C223 = C220 * C218;
        const double C224 = C222 * C211;
        const double C225 = C219 / 3.;
        const double C226 = C221 / 3.;
        const double C227 = 1.608 * C223;
        const double C228 = C66 * C224;
        const double C229 = C212 + C225;
        const double C230 = C226 + C101;
        const double C231 = C229 * C102;
        const double C232 = -0.705960152410687 * C231;
        const double C233 = C230 * C232;

                result.d3e_drbrbgab = 0;
                result.d3e_drbgabgab = 0;
            }

            if (rhob >= eps && gammabb >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C211 = -12. * C66;
        const double C212 = 2 * C72;
        const double C213 = 3. * C110;
        const double C214 = rhob * C101;
        const double C215 = rhob * C110;
        const double C216 = -5. / 3.;
        const double C217 = std::pow(C109, 2);
        const double C218 = std::pow(C115, 2);
        const double C219 = 2 * C215;
        const double C220 = C106 * C217;
        const double C221 = rhob * C213;
        const double C222 = std::pow(C70, C216);
        const double C223 = C220 * C218;
        const double C224 = C222 * C211;
        const double C225 = C219 / 3.;
        const double C226 = C221 / 3.;
        const double C227 = 1.608 * C223;
        const double C228 = C66 * C224;
        const double C229 = C212 + C225;
        const double C230 = C226 + C101;
        const double C231 = C229 * C102;
        const double C232 = -0.705960152410687 * C231;
        const double C233 = C230 * C232;
        const double C252 = 2 * C72;
        const double C253 = C107 * C109;
        const double C254 = rhob * C101;
        const double C255 = rhob * C110;
        const double C256 = std::pow(C109, 2);
        const double C257 = std::pow(C115, 2);
        const double C258 = 2 * C255;
        const double C259 = C106 * C253;
        const double C260 = C106 * C256;
        const double C261 = C260 * C257;
        const double C262 = C258 / 3.;
        const double C263 = C252 + C262;
        const double C282 = 3. * C181;
        const double C283 = 4. * Pi;
        const double C284 = C179 * C184;
        const double C285 = C179 / C184;
        const double C286 = C183 * C284;
        const double C287 = rhob * C282;
        const double C288 = std::pow(C285, 2);
        const double C289 = 0.2195149727645171 * C288;
        const double C290 = C289 / 0.804;
        const double C291 = C290 + 1;
        const double C292 = std::pow(C291, 2);
        const double C293 = C286 * C292;
        const double C294 = C293 * C283;
        const double C432 = -2.8238406096427479 * C229;
        const double C433 = -1.7561197821161368 * C231;
        const double C434 = 1.608 * C220;
        const double C435 = 1.608 * C259;
        const double C436 = 1.7561197821161368 * C107;
        const double C437 = 2 * C110;
        const double C438 = 6. * C228;
        const double C439 = C214 * C232;
        const double C440 = C229 * C109;
        const double C441 = C229 * C217;
        const double C442 = std::pow(C227, 2);
        const double C443 = 4. * C440;
        const double C444 = C115 * C433;
        const double C445 = C115 * C436;
        const double C446 = C230 * C432;
        const double C447 = rhob * C438;
        const double C448 = C106 * C443;
        const double C449 = C220 * C444;
        const double C450 = C220 * C445;
        const double C451 = C447 / 3.;
        const double C452 = C448 + C441;
        const double C453 = C451 + C110;
        const double C454 = C449 / C434;
        const double C455 = 2 * C453;
        const double C456 = C452 * C218;
        const double C457 = C437 + C455;
        const double C458 = C454 + C456;
        const double C459 = 1.608 * C458;
        const double C460 = gammabb * C457;
        const double C461 = -2.8238406096427479 * C460;
        const double C462 = C214 * C461;
        const double C463 = C462 / 3.;
        const double C464 = C463 + C233;
        const double C495 = -2.8238406096427479 * C263;
        const double C496 = 1.608 * C259;
        const double C497 = 1.608 * C261;
        const double C498 = 1.7561197821161368 * C107;
        const double C499 = 3. * C110;
        const double C500 = C259 * C257;
        const double C501 = C263 * C102;
        const double C502 = std::pow(C106, 2);
        const double C503 = -0.705960152410687 * C501;
        const double C504 = C115 * C498;
        const double C505 = C254 * C495;
        const double C506 = rhob * C499;
        const double C507 = C254 * C503;
        const double C508 = C260 * C504;
        const double C509 = C506 / 3.;
        const double C510 = 1.608 * C508;
        const double C511 = C509 + C101;
        const double C512 = C507 * C510;

                result.d3e_drbrbgbb =  - ( ( ( ( rhob * 18. * C228)  / 3. + C213 + C213)  * 0.705960152410687 * C107)  / ( 4.824 * C259 * C218)  + ( 1.608 * C223 * C446 - ( C233 * 1.608 * C450)  / C435)  / C442 + ( C442 * ( 1.608 * ( C223 * ( ( C214 * -2.8238406096427479 * C457)  / 3. + C446)  + ( C464 * C450)  / C435)  - ( C439 * 1.608 * ( ( C220 * ( C115 * -7.0244791284645472 * C229 + ( -1.7561197821161368 * C231 * 0.8780598910580684 * C107)  / C435) )  / C434 + ( C452 * C445)  / C435)  + C214 * C432 * C459) )  - ( ( 1.608 * C223 * C464 - C439 * C459)  * 1.608 * C223 * 3.216 * C450)  / C435)  / std::pow(C227, 4))  / ( 4. * Pi) ;
                result.d3e_drbgbbgbb =  - ( ( ( 1.608 * C500 * 1.4119203048213739 * C511)  / C107 - C511 * 0.705960152410687 * C107 * 1.608 * ( ( C259 * C504)  / C496 + ( C257 * 4. * C502)  / C107) )  / std::pow(1.608 * C500, 2) + ( std::pow(C497, 2) * ( ( 1.608 * C505 * C508)  / C496 - ( 1.608 * C259 * ( C507 * 1.608 * C260 * ( ( 3.5122395642322736 * C115)  / C107 + ( 6.1679133782792555 * gammabb)  / C496)  + C505 * C510)  - ( C512 * 6.432 * C502)  / C107)  / std::pow(C496, 2))  - ( ( 1.608 * C261 * C505 - C512 / C496)  * 1.608 * C261 * 3.216 * C508)  / C496)  / std::pow(C497, 4))  / C283;
            }

            if (rhob >= eps && gammaaa >= eps && gammaab >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;

                result.d3e_drbgaagab = 0;
            }

            if (rhob >= eps && gammaaa >= eps && gammabb >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C161 = 2 * rhoa;
        const double C162 = 4 * gammaaa;
        const double C163 = 1. / 3.;
        const double C164 = std::pow(Pi, 2);
        const double C165 = C164 * C161;
        const double C166 = std::sqrt(C162);
        const double C167 = 3. * C165;
        const double C168 = std::pow(C167, C163);
        const double C169 = C168 * C161;
        const double C170 = C169 + 1e-16;
        const double C171 = 2. * C170;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C252 = 2 * C72;
        const double C253 = C107 * C109;
        const double C254 = rhob * C101;
        const double C255 = rhob * C110;
        const double C256 = std::pow(C109, 2);
        const double C257 = std::pow(C115, 2);
        const double C258 = 2 * C255;
        const double C259 = C106 * C253;
        const double C260 = C106 * C256;
        const double C261 = C260 * C257;
        const double C262 = C258 / 3.;
        const double C263 = C252 + C262;

                result.d3e_drbgaagbb = 0;
            }

            if (rhob >= eps && gammaab >= eps && gammabb >= eps) {
        const double C63 = 2 * rhoa;
        const double C64 = 2 * rhob;
        const double C65 = 1. / 3.;
        const double C66 = std::pow(Pi, 2);
        const double C67 = C66 * C63;
        const double C68 = C66 * C64;
        const double C69 = 3. * C67;
        const double C70 = 3. * C68;
        const double C71 = std::pow(C69, C65);
        const double C72 = std::pow(C70, C65);
        const double C101 = 3. * C72;
        const double C102 = 4 * gammabb;
        const double C103 = 6. * C66;
        const double C104 = C72 * C64;
        const double C105 = -2. / 3.;
        const double C106 = C104 + 1e-16;
        const double C107 = std::sqrt(C102);
        const double C108 = std::pow(C70, C105);
        const double C109 = 2. * C106;
        const double C110 = C108 * C103;
        const double C111 = C107 / C109;
        const double C112 = std::pow(C111, 2);
        const double C113 = 0.2195149727645171 * C112;
        const double C114 = C113 / 0.804;
        const double C115 = C114 + 1;
        const double C174 = 2 * rhob;
        const double C175 = 4 * gammabb;
        const double C176 = 1. / 3.;
        const double C177 = std::pow(Pi, 2);
        const double C178 = C177 * C174;
        const double C179 = std::sqrt(C175);
        const double C180 = 3. * C178;
        const double C181 = std::pow(C180, C176);
        const double C182 = C181 * C174;
        const double C183 = C182 + 1e-16;
        const double C184 = 2. * C183;
        const double C252 = 2 * C72;
        const double C253 = C107 * C109;
        const double C254 = rhob * C101;
        const double C255 = rhob * C110;
        const double C256 = std::pow(C109, 2);
        const double C257 = std::pow(C115, 2);
        const double C258 = 2 * C255;
        const double C259 = C106 * C253;
        const double C260 = C106 * C256;
        const double C261 = C260 * C257;
        const double C262 = C258 / 3.;
        const double C263 = C252 + C262;

                result.d3e_drbgabgbb = 0;
            }

            return result;
        }
    }
}

