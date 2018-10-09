/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_3_ints(const double ae,
                              const double xA,
                              const double yA,
                              const double zA,
                              const double be,
                              const double xB,
                              const double yB,
                              const double zB,
                              const double ce,
                              const double xC,
                              const double yC,
                              const double zC,
                              const double de,
                              const double xD,
                              const double yD,
                              const double zD,
                              const double* const bs,
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C35291 = 2 * q;
    const double C35285 = de * zCD;
    const double C35284 = be * zAB;
    const double C35282 = de * yCD;
    const double C35281 = be * yAB;
    const double C35280 = de * xCD;
    const double C35279 = be * xAB;
    const double C35311 = p + q;
    const double C35581 = p * q;
    const double C35580 = std::pow(Pi, 2.5);
    const double C35579 = zP - zQ;
    const double C35578 = yP - yQ;
    const double C35577 = xP - xQ;
    const double C35576 = 2 * p;
    const double C35295 = C35284 + C35285;
    const double C35294 = C35281 + C35282;
    const double C35293 = C35279 + C35280;
    const double C35582 = std::sqrt(C35311);
    const double C35589 = C35580 * kab;
    const double C35588 = C35579 * q;
    const double C35587 = C35578 * q;
    const double C35586 = C35577 * q;
    const double C35590 = C35581 * C35582;
    const double C35594 = C35589 * kcd;
    const double C32529 = (2. * C35594 * bs[1]) / C35590;
    const double C32993 = (2. * C35594 * bs[2]) / C35590;
    const double C33214 = (2. * C35594 * bs[3]) / C35590;
    const double C33305 = (2. * C35594 * bs[4]) / C35590;
    const double C35309 = (2. * C35594 * bs[0]) / C35590;
    const double C35575 = C32529 * q;
    const double C35583 = C32993 * q;
    const double C32510 = -((C32529 * C35279) / p + (C32993 * C35586) / C35311);
    const double C32720 = -((C32529 * C35281) / p + (C32993 * C35587) / C35311);
    const double C32749 = -((C32529 * C35284) / p + (C32993 * C35588) / C35311);
    const double C35584 = C33214 * q;
    const double C33015 = -((C32993 * C35279) / p + (C33214 * C35586) / C35311);
    const double C33867 = -((C32993 * C35281) / p + (C33214 * C35587) / C35311);
    const double C33909 = -((C32993 * C35284) / p + (C33214 * C35588) / C35311);
    const double C33255 = -((C33214 * C35279) / p + (C33305 * C35586) / C35311);
    const double C34091 = -((C33214 * C35281) / p + (C33305 * C35587) / C35311);
    const double C34923 = -((C33214 * C35284) / p + (C33305 * C35588) / C35311);
    const double C29233 = -((C35309 * C35279) / p + (C32529 * C35586) / C35311);
    const double C29587 = -((C35309 * C35281) / p + (C32529 * C35587) / C35311);
    const double C29631 = -((C35309 * C35284) / p + (C32529 * C35588) / C35311);
    const double C35585 = C35575 / C35311;
    const double C35591 = C35583 / C35311;
    const double C35592 = C35584 / C35311;
    const double C32734 = -((C32749 * C35281) / p + (C33909 * C35587) / C35311);
    const double C35297 = C29233 / C35291;
    const double C35296 = C29587 / C35291;
    const double C28856 = -((C29587 * C35279) / p + (C32720 * C35586) / C35311);
    const double C35298 = C29631 / C35291;
    const double C28988 = -((C29631 * C35279) / p + (C32749 * C35586) / C35311);
    const double C29120 = -((C29631 * C35281) / p + (C32749 * C35587) / C35311);
    const double C35593 = C35309 - C35585;
    const double C35595 = C32529 - C35591;
    const double C35596 = C32993 - C35592;
    const double C29703 = -((C29120 * C35279) / p + (C32734 * C35586) / C35311);
    const double C35597 = C35593 / C35576;
    const double C35598 = C35595 / C35576;
    const double C35599 = C35596 / C35576;
    const double C35292 = C29703 * p;
    const double C28435 =
        C35597 - ((C29233 * C35279) / p + (C32510 * C35586) / C35311);
    const double C28575 =
        C35597 - ((C29587 * C35281) / p + (C32720 * C35587) / C35311);
    const double C28715 =
        C35597 - ((C29631 * C35284) / p + (C32749 * C35588) / C35311);
    const double C32543 =
        C35598 - ((C32510 * C35279) / p + (C33015 * C35586) / C35311);
    const double C32598 =
        C35598 - ((C32720 * C35281) / p + (C33867 * C35587) / C35311);
    const double C32666 =
        C35598 - ((C32749 * C35284) / p + (C33909 * C35588) / C35311);
    const double C33097 =
        C35599 - ((C33015 * C35279) / p + (C33255 * C35586) / C35311);
    const double C33112 =
        C35599 - ((C33867 * C35281) / p + (C34091 * C35587) / C35311);
    const double C33140 =
        C35599 - ((C33909 * C35284) / p + (C34923 * C35588) / C35311);
    const double C27280 = -(C28856 * C35295 + C35292) / q;
    const double C27334 = -(C28988 * C35294 + C35292) / q;
    const double C27386 = -(C29120 * C35293 + C35292) / q;
    const double C29249 = (C29233 - (C32510 * q) / C35311) / p -
                          ((C28435 * C35279) / p + (C32543 * C35586) / C35311);
    const double C29602 = -((C28435 * C35281) / p + (C32543 * C35587) / C35311);
    const double C29646 = -((C28435 * C35284) / p + (C32543 * C35588) / C35311);
    const double C29368 = -((C28575 * C35279) / p + (C32598 * C35586) / C35311);
    const double C30730 = (C29587 - (C32720 * q) / C35311) / p -
                          ((C28575 * C35281) / p + (C32598 * C35587) / C35311);
    const double C31018 = -((C28575 * C35284) / p + (C32598 * C35588) / C35311);
    const double C29485 = -((C28715 * C35279) / p + (C32666 * C35586) / C35311);
    const double C30834 = -((C28715 * C35281) / p + (C32666 * C35587) / C35311);
    const double C32176 = (C29631 - (C32749 * q) / C35311) / p -
                          ((C28715 * C35284) / p + (C32666 * C35588) / C35311);
    const double C32783 = (C32510 - (C33015 * q) / C35311) / p -
                          ((C32543 * C35279) / p + (C33097 * C35586) / C35311);
    const double C33669 = -((C32543 * C35284) / p + (C33097 * C35588) / C35311);
    const double C32824 = -((C32598 * C35279) / p + (C33112 * C35586) / C35311);
    const double C32868 = (C32720 - (C33867 * q) / C35311) / p -
                          ((C32598 * C35281) / p + (C33112 * C35587) / C35311);
    const double C32883 = -((C32598 * C35284) / p + (C33112 * C35588) / C35311);
    const double C32853 = -((C32666 * C35279) / p + (C33140 * C35586) / C35311);
    const double C32938 = -((C32666 * C35281) / p + (C33140 * C35587) / C35311);
    const double C32952 = (C32749 - (C33909 * q) / C35311) / p -
                          ((C32666 * C35284) / p + (C33140 * C35588) / C35311);
    const double C26981 = C29233 / q - (C28435 * C35293) / q - (C29249 * p) / q;
    const double C35283 = C29602 * p;
    const double C35286 = C29646 * p;
    const double C35287 = C29368 * p;
    const double C27091 = C29587 / q - (C28575 * C35294) / q - (C30730 * p) / q;
    const double C35288 = C31018 * p;
    const double C35289 = C29485 * p;
    const double C35290 = C30834 * p;
    const double C27199 = C29631 / q - (C28715 * C35295) / q - (C32176 * p) / q;
    const double C27010 = -(C28435 * C35294 + C35283) / q;
    const double C27224 = C35296 - (C28856 * C35293) / q - C35283 / q;
    const double C27037 = -(C28435 * C35295 + C35286) / q;
    const double C27305 = C35298 - (C28988 * C35293) / q - C35286 / q;
    const double C27062 = -(C28575 * C35293 + C35287) / q;
    const double C27253 = C35297 - (C28856 * C35294) / q - C35287 / q;
    const double C27118 = -(C28575 * C35295 + C35288) / q;
    const double C27415 = C35298 - (C29120 * C35294) / q - C35288 / q;
    const double C27143 = -(C28715 * C35293 + C35289) / q;
    const double C27361 = C35297 - (C28988 * C35295) / q - C35289 / q;
    const double C27172 = -(C28715 * C35294 + C35290) / q;
    const double C27442 = C35296 - (C29120 * C35295) / q - C35290 / q;
    g[0] = C26981;
    g[1] = C27010;
    g[2] = C27037;
    g[3] = C27062;
    g[4] = C27091;
    g[5] = C27118;
    g[6] = C27143;
    g[7] = C27172;
    g[8] = C27199;
    g[9] = C27224;
    g[10] = C27253;
    g[11] = C27280;
    g[12] = C27305;
    g[13] = C27334;
    g[14] = C27361;
    g[15] = C27386;
    g[16] = C27415;
    g[17] = C27442;
    g[18] = C28435;
    g[19] = C28575;
    g[20] = C28715;
    g[21] = C28856;
    g[22] = C28988;
    g[23] = C29120;
    g[24] = C29233;
    g[25] = C29249;
    g[26] = C29368;
    g[27] = C29485;
    g[28] = C29587;
    g[29] = C29602;
    g[30] = C29631;
    g[31] = C29646;
    g[32] = C29703;
    g[33] = C30730;
    g[34] = C30834;
    g[35] = C31018;
    g[36] = C32176;
    g[37] = C32510;
    g[38] = C32529;
    g[39] = C32543;
    g[40] = C32598;
    g[41] = C32666;
    g[42] = C32720;
    g[43] = C32734;
    g[44] = C32749;
    g[45] = C32783;
    g[46] = C32824;
    g[47] = C32853;
    g[48] = C32868;
    g[49] = C32883;
    g[50] = C32938;
    g[51] = C32952;
    g[52] = C32993;
    g[53] = C33015;
    g[54] = C33097;
    g[55] = C33112;
    g[56] = C33140;
    g[57] = C33214;
    g[58] = C33255;
    g[59] = C33305;
    g[60] = C33669;
    g[61] = C33867;
    g[62] = C33909;
    g[63] = C34091;
    g[64] = C34923;
}
