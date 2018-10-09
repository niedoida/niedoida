/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2221_4_ints(const double ae,
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
    const double C104264 = 2 * q;
    const double C107066 = de * zCD;
    const double C107065 = be * zAB;
    const double C107061 = de * yCD;
    const double C107060 = be * yAB;
    const double C107056 = de * xCD;
    const double C107055 = be * xAB;
    const double C107322 = p + q;
    const double C108660 = p * q;
    const double C108659 = std::pow(Pi, 2.5);
    const double C108655 = zP - zQ;
    const double C108653 = yP - yQ;
    const double C108649 = xP - xQ;
    const double C108648 = 2 * p;
    const double C107250 = C107065 + C107066;
    const double C107246 = C107060 + C107061;
    const double C107245 = C107055 + C107056;
    const double C108661 = std::sqrt(C107322);
    const double C108691 = C108659 * kab;
    const double C108687 = C108655 * q;
    const double C108685 = C108653 * q;
    const double C108681 = C108649 * q;
    const double C108692 = C108660 * C108661;
    const double C108719 = C108691 * kcd;
    const double C63315 = (2. * C108719 * bs[0]) / C108692;
    const double C90786 = (2. * C108719 * bs[1]) / C108692;
    const double C92037 = (2. * C108719 * bs[2]) / C108692;
    const double C92923 = (2. * C108719 * bs[3]) / C108692;
    const double C93414 = (2. * C108719 * bs[4]) / C108692;
    const double C93678 = (2. * C108719 * bs[5]) / C108692;
    const double C93812 = (2. * C108719 * bs[6]) / C108692;
    const double C93903 = (2. * C108719 * bs[7]) / C108692;
    const double C107210 = C63315 / C104264;
    const double C108650 = C90786 * q;
    const double C59723 =
        -((C63315 * C107055) / p + (C90786 * C108681) / C107322);
    const double C63213 =
        -((C63315 * C107060) / p + (C90786 * C108685) / C107322);
    const double C63256 =
        -((C63315 * C107065) / p + (C90786 * C108687) / C107322);
    const double C108664 = C92037 * q;
    const double C90369 =
        -((C90786 * C107055) / p + (C92037 * C108681) / C107322);
    const double C90715 =
        -((C90786 * C107060) / p + (C92037 * C108685) / C107322);
    const double C90744 =
        -((C90786 * C107065) / p + (C92037 * C108687) / C107322);
    const double C108673 = C92923 * q;
    const double C92022 =
        -((C92037 * C107055) / p + (C92923 * C108681) / C107322);
    const double C95632 =
        -((C92037 * C107060) / p + (C92923 * C108685) / C107322);
    const double C95780 =
        -((C92037 * C107065) / p + (C92923 * C108687) / C107322);
    const double C108678 = C93414 * q;
    const double C92907 =
        -((C92923 * C107055) / p + (C93414 * C108681) / C107322);
    const double C96515 =
        -((C92923 * C107060) / p + (C93414 * C108685) / C107322);
    const double C100072 =
        -((C92923 * C107065) / p + (C93414 * C108687) / C107322);
    const double C108679 = C93678 * q;
    const double C93462 =
        -((C93414 * C107055) / p + (C93678 * C108681) / C107322);
    const double C97039 =
        -((C93414 * C107060) / p + (C93678 * C108685) / C107322);
    const double C100597 =
        -((C93414 * C107065) / p + (C93678 * C108687) / C107322);
    const double C108680 = C93812 * q;
    const double C93693 =
        -((C93678 * C107055) / p + (C93812 * C108681) / C107322);
    const double C97266 =
        -((C93678 * C107060) / p + (C93812 * C108685) / C107322);
    const double C100821 =
        -((C93678 * C107065) / p + (C93812 * C108687) / C107322);
    const double C93853 =
        -((C93812 * C107055) / p + (C93903 * C108681) / C107322);
    const double C97412 =
        -((C93812 * C107060) / p + (C93903 * C108685) / C107322);
    const double C100954 =
        -((C93812 * C107065) / p + (C93903 * C108687) / C107322);
    const double C108682 = C108650 / C107322;
    const double C107196 = C59723 / C104264;
    const double C107193 = C63213 / C104264;
    const double C107204 = C63256 / C104264;
    const double C108695 = C108664 / C107322;
    const double C60270 =
        -((C63213 * C107055) / p + (C90715 * C108681) / C107322);
    const double C60690 =
        -((C63256 * C107055) / p + (C90744 * C108681) / C107322);
    const double C63241 =
        -((C63256 * C107060) / p + (C90744 * C108685) / C107322);
    const double C108704 = C108673 / C107322;
    const double C90729 =
        -((C90744 * C107060) / p + (C95780 * C108685) / C107322);
    const double C108709 = C108678 / C107322;
    const double C108710 = C108679 / C107322;
    const double C108711 = C108680 / C107322;
    const double C108712 = C63315 - C108682;
    const double C108722 = C90786 - C108695;
    const double C107224 = C60270 * p;
    const double C107192 = C60270 / C104264;
    const double C107082 = C60270 / q;
    const double C107232 = C60690 * p;
    const double C107203 = C60690 / C104264;
    const double C107097 = C60690 / q;
    const double C107242 = C63241 * p;
    const double C107201 = C63241 / C104264;
    const double C107144 = C63241 / q;
    const double C108731 = C92037 - C108704;
    const double C61220 =
        -((C63241 * C107055) / p + (C90729 * C108681) / C107322);
    const double C108736 = C92923 - C108709;
    const double C108737 = C93414 - C108710;
    const double C108738 = C93678 - C108711;
    const double C108739 = C108712 / C108648;
    const double C108747 = C108722 / C108648;
    const double C61321 = -(C63213 * C107245 + C107224) / q;
    const double C71828 = -(C59723 * C107246 + C107224) / q;
    const double C62462 = -(C63256 * C107245 + C107232) / q;
    const double C72151 = -(C59723 * C107250 + C107232) / q;
    const double C74528 = -(C63256 * C107246 + C107242) / q;
    const double C75244 = -(C63213 * C107250 + C107242) / q;
    const double C108753 = C108731 / C108648;
    const double C107200 = C61220 / C104264;
    const double C107199 = C61220 * p;
    const double C107116 = C61220 / q;
    const double C108756 = C108736 / C108648;
    const double C108757 = C108737 / C108648;
    const double C108758 = C108738 / C108648;
    const double C59693 =
        C108739 - ((C59723 * C107055) / p + (C90369 * C108681) / C107322);
    const double C61306 =
        C108739 - ((C63213 * C107060) / p + (C90715 * C108685) / C107322);
    const double C62447 =
        C108739 - ((C63256 * C107065) / p + (C90744 * C108687) / C107322);
    const double C90354 =
        C108747 - ((C90369 * C107055) / p + (C92022 * C108681) / C107322);
    const double C90482 =
        C108747 - ((C90715 * C107060) / p + (C95632 * C108685) / C107322);
    const double C90606 =
        C108747 - ((C90744 * C107065) / p + (C95780 * C108687) / C107322);
    const double C107197 = C72151 / C104264;
    const double C107207 = C74528 / C104264;
    const double C107208 = C75244 / C104264;
    const double C92006 =
        C108753 - ((C92022 * C107055) / p + (C92907 * C108681) / C107322);
    const double C92058 =
        C108753 - ((C95632 * C107060) / p + (C96515 * C108685) / C107322);
    const double C92087 =
        C108753 - ((C95780 * C107065) / p + (C100072 * C108687) / C107322);
    const double C58901 = -(C60270 * C107250 + C107199) / q;
    const double C59337 = -(C60690 * C107246 + C107199) / q;
    const double C59413 = -(C63241 * C107245 + C107199) / q;
    const double C92998 =
        C108756 - ((C92907 * C107055) / p + (C93462 * C108681) / C107322);
    const double C93042 =
        C108756 - ((C96515 * C107060) / p + (C97039 * C108685) / C107322);
    const double C93098 =
        C108756 - ((C100072 * C107065) / p + (C100597 * C108687) / C107322);
    const double C93477 =
        C108757 - ((C93462 * C107055) / p + (C93693 * C108681) / C107322);
    const double C97054 =
        C108757 - ((C97039 * C107060) / p + (C97266 * C108685) / C107322);
    const double C97083 =
        C108757 - ((C100597 * C107065) / p + (C100821 * C108687) / C107322);
    const double C93762 =
        C108758 - ((C93693 * C107055) / p + (C93853 * C108681) / C107322);
    const double C97322 =
        C108758 - ((C97266 * C107060) / p + (C97412 * C108685) / C107322);
    const double C100864 =
        C108758 - ((C100821 * C107065) / p + (C100954 * C108687) / C107322);
    const double C107059 = C59693 / C104264;
    const double C59676 = C107210 - (C59723 * C107245) / q - (C59693 * p) / q;
    const double C107119 = C61306 / C104264;
    const double C73422 = C107210 - (C63213 * C107246) / q - (C61306 * p) / q;
    const double C107162 = C62447 / C104264;
    const double C75301 = C107210 - (C63256 * C107250) / q - (C62447 * p) / q;
    const double C59662 =
        (C59723 - (C90369 * q) / C107322) / p -
        ((C59693 * C107055) / p + (C90354 * C108681) / C107322);
    const double C60225 =
        -((C59693 * C107060) / p + (C90354 * C108685) / C107322);
    const double C60645 =
        -((C59693 * C107065) / p + (C90354 * C108687) / C107322);
    const double C108652 = C90482 * q;
    const double C60240 =
        -((C61306 * C107055) / p + (C90482 * C108681) / C107322);
    const double C61537 =
        (C63213 - (C90715 * q) / C107322) / p -
        ((C61306 * C107060) / p + (C90482 * C108685) / C107322);
    const double C61872 =
        -((C61306 * C107065) / p + (C90482 * C108687) / C107322);
    const double C108654 = C90606 * q;
    const double C60660 =
        -((C62447 * C107055) / p + (C90606 * C108681) / C107322);
    const double C62604 =
        -((C62447 * C107060) / p + (C90606 * C108685) / C107322);
    const double C62680 =
        (C63256 - (C90744 * q) / C107322) / p -
        ((C62447 * C107065) / p + (C90606 * C108687) / C107322);
    const double C90335 =
        (C90369 - (C92022 * q) / C107322) / p -
        ((C90354 * C107055) / p + (C92006 * C108681) / C107322);
    const double C94076 =
        -((C90354 * C107065) / p + (C92006 * C108687) / C107322);
    const double C108668 = C92058 * q;
    const double C90384 =
        -((C90482 * C107055) / p + (C92058 * C108681) / C107322);
    const double C90564 =
        (C90715 - (C95632 * q) / C107322) / p -
        ((C90482 * C107060) / p + (C92058 * C108685) / C107322);
    const double C90578 =
        -((C90482 * C107065) / p + (C92058 * C108687) / C107322);
    const double C108669 = C92087 * q;
    const double C90413 =
        -((C90606 * C107055) / p + (C92087 * C108681) / C107322);
    const double C90674 =
        -((C90606 * C107060) / p + (C92087 * C108685) / C107322);
    const double C90688 =
        (C90744 - (C95780 * q) / C107322) / p -
        ((C90606 * C107065) / p + (C92087 * C108687) / C107322);
    const double C107126 = C58901 / q;
    const double C92220 =
        (C92022 - (C92907 * q) / C107322) / p -
        ((C92006 * C107055) / p + (C92998 * C108681) / C107322);
    const double C92302 =
        (C95632 - (C96515 * q) / C107322) / p -
        ((C92058 * C107060) / p + (C93042 * C108685) / C107322);
    const double C92317 =
        -((C92058 * C107055) / p + (C93042 * C108681) / C107322);
    const double C108674 = C93098 * q;
    const double C92389 =
        -((C92087 * C107055) / p + (C93098 * C108681) / C107322);
    const double C92433 =
        (C95780 - (C100072 * q) / C107322) / p -
        ((C92087 * C107065) / p + (C93098 * C108687) / C107322);
    const double C95929 =
        -((C92087 * C107060) / p + (C93098 * C108685) / C107322);
    const double C93013 =
        (C92907 - (C93462 * q) / C107322) / p -
        ((C92998 * C107055) / p + (C93477 * C108681) / C107322);
    const double C93112 =
        (C96515 - (C97039 * q) / C107322) / p -
        ((C93042 * C107060) / p + (C97054 * C108685) / C107322);
    const double C93179 =
        (C100072 - (C100597 * q) / C107322) / p -
        ((C93098 * C107065) / p + (C97083 * C108687) / C107322);
    const double C96640 =
        -((C93098 * C107060) / p + (C97083 * C108685) / C107322);
    const double C93561 =
        (C93462 - (C93693 * q) / C107322) / p -
        ((C93477 * C107055) / p + (C93762 * C108681) / C107322);
    const double C93630 =
        (C97039 - (C97266 * q) / C107322) / p -
        ((C97054 * C107060) / p + (C97322 * C108685) / C107322);
    const double C93657 =
        (C100597 - (C100821 * q) / C107322) / p -
        ((C97083 * C107065) / p + (C100864 * C108687) / C107322);
    const double C107209 = C75301 / C104264;
    const double C107058 = C59662 / C104264;
    const double C52273 =
        C59723 / q - (C59693 * C107245) / q - (C59662 * p) / q;
    const double C107080 = C60225 / C104264;
    const double C107072 = C60225 * p;
    const double C107095 = C60645 / C104264;
    const double C107078 = C60645 * p;
    const double C108684 = C108652 / C107322;
    const double C107120 = C60240 * p;
    const double C107118 = C60240 / C104264;
    const double C107131 = C61537 / C104264;
    const double C54995 =
        C63213 / q - (C61306 * C107246) / q - (C61537 * p) / q;
    const double C107138 = C61872 / C104264;
    const double C107129 = C61872 * p;
    const double C108686 = C108654 / C107322;
    const double C107163 = C60660 * p;
    const double C107161 = C60660 / C104264;
    const double C107172 = C62604 / C104264;
    const double C107168 = C62604 * p;
    const double C107178 = C62680 / C104264;
    const double C57219 =
        C63256 / q - (C62447 * C107250) / q - (C62680 * p) / q;
    const double C108651 = C90335 * q;
    const double C59630 =
        (3 * (C59693 - (C90354 * q) / C107322)) / C108648 -
        ((C59662 * C107055) / p + (C90335 * C108681) / C107322);
    const double C60286 =
        -((C59662 * C107060) / p + (C90335 * C108685) / C107322);
    const double C60706 =
        -((C59662 * C107065) / p + (C90335 * C108687) / C107322);
    const double C61205 =
        -((C60645 * C107060) / p + (C94076 * C108685) / C107322);
    const double C108699 = C108668 / C107322;
    const double C108656 = C90564 * q;
    const double C61567 =
        -((C61537 * C107055) / p + (C90564 * C108681) / C107322);
    const double C62389 =
        -((C61537 * C107065) / p + (C90564 * C108687) / C107322);
    const double C61902 =
        -((C61872 * C107055) / p + (C90578 * C108681) / C107322);
    const double C108700 = C108669 / C107322;
    const double C62619 =
        -((C62604 * C107055) / p + (C90674 * C108681) / C107322);
    const double C108657 = C90688 * q;
    const double C62710 =
        -((C62680 * C107055) / p + (C90688 * C108681) / C107322);
    const double C63155 =
        -((C62680 * C107060) / p + (C90688 * C108685) / C107322);
    const double C108665 = C92220 * q;
    const double C90771 =
        (3 * (C90354 - (C92006 * q) / C107322)) / C108648 -
        ((C90335 * C107055) / p + (C92220 * C108681) / C107322);
    const double C94460 =
        -((C90335 * C107060) / p + (C92220 * C108685) / C107322);
    const double C94543 =
        -((C90335 * C107065) / p + (C92220 * C108687) / C107322);
    const double C108666 = C92302 * q;
    const double C90969 =
        -((C90564 * C107055) / p + (C92302 * C108681) / C107322);
    const double C91200 =
        -((C90564 * C107065) / p + (C92302 * C108687) / C107322);
    const double C108705 = C108674 / C107322;
    const double C108667 = C92433 * q;
    const double C91099 =
        -((C90688 * C107055) / p + (C92433 * C108681) / C107322);
    const double C91408 =
        -((C90688 * C107060) / p + (C92433 * C108685) / C107322);
    const double C108675 = C93013 * q;
    const double C92235 =
        (3 * (C92006 - (C92998 * q) / C107322)) / C108648 -
        ((C92220 * C107055) / p + (C93013 * C108681) / C107322);
    const double C95986 =
        -((C92220 * C107060) / p + (C93013 * C108685) / C107322);
    const double C99572 =
        -((C92220 * C107065) / p + (C93013 * C108687) / C107322);
    const double C108676 = C93112 * q;
    const double C92332 =
        (3 * (C92058 - (C93042 * q) / C107322)) / C108648 -
        ((C92302 * C107060) / p + (C93112 * C108685) / C107322);
    const double C92404 =
        -((C92302 * C107055) / p + (C93112 * C108681) / C107322);
    const double C99666 =
        -((C92302 * C107065) / p + (C93112 * C108687) / C107322);
    const double C108677 = C93179 * q;
    const double C92490 =
        -((C92433 * C107055) / p + (C93179 * C108681) / C107322);
    const double C96149 =
        -((C92433 * C107060) / p + (C93179 * C108685) / C107322);
    const double C93219 =
        (3 * (C92998 - (C93477 * q) / C107322)) / C108648 -
        ((C93013 * C107055) / p + (C93561 * C108681) / C107322);
    const double C100369 =
        -((C93013 * C107065) / p + (C93561 * C108687) / C107322);
    const double C93260 =
        (3 * (C93042 - (C97054 * q) / C107322)) / C108648 -
        ((C93112 * C107060) / p + (C93630 * C108685) / C107322);
    const double C93330 =
        -((C93112 * C107055) / p + (C93630 * C108681) / C107322);
    const double C100384 =
        -((C93112 * C107065) / p + (C93630 * C108687) / C107322);
    const double C93345 =
        (3 * (C93098 - (C97083 * q) / C107322)) / C108648 -
        ((C93179 * C107065) / p + (C93657 * C108687) / C107322);
    const double C93373 =
        -((C93179 * C107055) / p + (C93657 * C108681) / C107322);
    const double C96868 =
        -((C93179 * C107060) / p + (C93657 * C108685) / C107322);
    const double C52769 = -(C59693 * C107246 + C107072) / q;
    const double C58711 = C107193 - (C60270 * C107245) / q - C107072 / q;
    const double C52863 = -(C59693 * C107250 + C107078) / q;
    const double C59178 = C107204 - (C60690 * C107245) / q - C107078 / q;
    const double C108714 = C61306 - C108684;
    const double C54670 = -(C61306 * C107245 + C107120) / q;
    const double C58870 = C107196 - (C60270 * C107246) / q - C107120 / q;
    const double C55055 = -(C61306 * C107250 + C107129) / q;
    const double C59571 = C107204 - (C63241 * C107246) / q - C107129 / q;
    const double C108715 = C62447 - C108686;
    const double C56835 = -(C62447 * C107245 + C107163) / q;
    const double C59369 = C107196 - (C60690 * C107250) / q - C107163 / q;
    const double C57159 = -(C62447 * C107246 + C107168) / q;
    const double C59601 = C107193 - (C63241 * C107250) / q - C107168 / q;
    const double C107175 = C57219 / C104264;
    const double C108683 = C108651 / C107322;
    const double C107057 = C59630 / C104264;
    const double C52256 =
        (3 * C59693) / C104264 - (C59662 * C107245) / q - (C59630 * p) / q;
    const double C107106 = C60286 / C104264;
    const double C107071 = C60286 * p;
    const double C107112 = C60706 / C104264;
    const double C107077 = C60706 * p;
    const double C107237 = C61205 / q;
    const double C107115 = C61205 / C104264;
    const double C107093 = C61205 * p;
    const double C108726 = C90482 - C108699;
    const double C108688 = C108656 / C107322;
    const double C107149 = C61567 / C104264;
    const double C107125 = C61567 * p;
    const double C107159 = C62389 / C104264;
    const double C107136 = C62389 * p;
    const double C107216 = C61902 / q;
    const double C107154 = C61902 / C104264;
    const double C107128 = C61902 * p;
    const double C108727 = C90606 - C108700;
    const double C107220 = C62619 / q;
    const double C107182 = C62619 / C104264;
    const double C107167 = C62619 * p;
    const double C108689 = C108657 / C107322;
    const double C107186 = C62710 / C104264;
    const double C107171 = C62710 * p;
    const double C107189 = C63155 / C104264;
    const double C107176 = C63155 * p;
    const double C108696 = C108665 / C107322;
    const double C108658 = C90771 * q;
    const double C61059 =
        -((C59630 * C107060) / p + (C90771 * C108685) / C107322);
    const double C61148 =
        -((C59630 * C107065) / p + (C90771 * C108687) / C107322);
    const double C61235 =
        -((C60706 * C107060) / p + (C94543 * C108685) / C107322);
    const double C108697 = C108666 / C107322;
    const double C62404 =
        -((C62389 * C107055) / p + (C91200 * C108681) / C107322);
    const double C108732 = C92087 - C108705;
    const double C108698 = C108667 / C107322;
    const double C63170 =
        -((C63155 * C107055) / p + (C91408 * C108681) / C107322);
    const double C108706 = C108675 / C107322;
    const double C108670 = C92235 * q;
    const double C94445 =
        -((C90771 * C107060) / p + (C92235 * C108685) / C107322);
    const double C94529 =
        -((C90771 * C107065) / p + (C92235 * C108687) / C107322);
    const double C108707 = C108676 / C107322;
    const double C108671 = C92332 * q;
    const double C108708 = C108677 / C107322;
    const double C96204 =
        -((C92235 * C107060) / p + (C93219 * C108685) / C107322);
    const double C99762 =
        -((C92235 * C107065) / p + (C93219 * C108687) / C107322);
    const double C92680 =
        -((C92332 * C107055) / p + (C93260 * C108681) / C107322);
    const double C99916 =
        -((C92332 * C107065) / p + (C93260 * C108687) / C107322);
    const double C107090 = C52863 / C104264;
    const double C60194 = C108714 / C108648 - ((C60240 * C107055) / p +
                                               (C90384 * C108681) / C107322);
    const double C61506 =
        (3 * C108714) / C108648 -
        ((C61537 * C107060) / p + (C90564 * C108685) / C107322);
    const double C107121 = C58870 / q;
    const double C107141 = C55055 / C104264;
    const double C108741 = C108715 / C108648;
    const double C62649 =
        (3 * C108715) / C108648 -
        ((C62680 * C107065) / p + (C90688 * C108687) / C107322);
    const double C107165 = C59369 / q;
    const double C107173 = C57159 / C104264;
    const double C107146 = C59601 / q;
    const double C108713 = C59662 - C108683;
    const double C52222 =
        C59676 / q - (C52273 * C107245) / q + C107059 - (C52256 * p) / q;
    const double C52754 = -(C59662 * C107246 + C107071) / q;
    const double C52975 = C107082 - (C60225 * C107245) / q - C107071 / q;
    const double C52848 = -(C59662 * C107250 + C107077) / q;
    const double C53467 = C107097 - (C60645 * C107245) / q - C107077 / q;
    const double C53371 = -(C60225 * C107250 + C107093) / q;
    const double C53800 = -(C60645 * C107246 + C107093) / q;
    const double C58945 = C107201 - (C61220 * C107245) / q - C107093 / q;
    const double C91172 =
        (3 * C108726) / C108648 -
        ((C90564 * C107060) / p + (C92302 * C108685) / C107322);
    const double C98123 = C108726 / C108648 - ((C90384 * C107055) / p +
                                               (C92317 * C108681) / C107322);
    const double C108716 = C61537 - C108688;
    const double C54980 = C107082 - (C60240 * C107246) / q - C107125 / q;
    const double C55151 = -(C61537 * C107245 + C107125) / q;
    const double C55543 = -(C61537 * C107250 + C107136) / q;
    const double C55970 = C107144 - (C61872 * C107246) / q - C107136 / q;
    const double C55040 = -(C60240 * C107250 + C107128) / q;
    const double C55637 = -(C61872 * C107245 + C107128) / q;
    const double C59104 = C107203 - (C61220 * C107246) / q - C107128 / q;
    const double C108750 = C108727 / C108648;
    const double C91394 =
        (3 * C108727) / C108648 -
        ((C90688 * C107065) / p + (C92433 * C108687) / C107322);
    const double C57144 = -(C60660 * C107246 + C107167) / q;
    const double C57279 = -(C62604 * C107245 + C107167) / q;
    const double C59134 = C107192 - (C61220 * C107250) / q - C107167 / q;
    const double C108717 = C62680 - C108689;
    const double C57204 = C107097 - (C60660 * C107250) / q - C107171 / q;
    const double C57548 = -(C62680 * C107245 + C107171) / q;
    const double C57469 = C107144 - (C62604 * C107250) / q - C107176 / q;
    const double C57879 = -(C62680 * C107246 + C107176) / q;
    const double C108723 = C90335 - C108696;
    const double C108690 = C108658 / C107322;
    const double C107070 = C61059 * p;
    const double C107076 = C61148 * p;
    const double C107111 = C61235 * p;
    const double C108724 = C90564 - C108697;
    const double C107153 = C62404 * p;
    const double C92360 = C108732 / C108648 - ((C95929 * C107060) / p +
                                               (C96640 * C108685) / C107322);
    const double C92448 =
        (3 * C108732) / C108648 -
        ((C92433 * C107065) / p + (C93179 * C108687) / C107322);
    const double C108725 = C90688 - C108698;
    const double C107185 = C63170 * p;
    const double C108733 = C92220 - C108706;
    const double C108701 = C108670 / C107322;
    const double C63764 =
        -((C61148 * C107060) / p + (C94529 * C108685) / C107322);
    const double C108734 = C92302 - C108707;
    const double C108702 = C108671 / C107322;
    const double C108735 = C92433 - C108708;
    const double C107213 = 3 * C60194;
    const double C107088 = C60194 * p;
    const double C107079 = C60194 / C104264;
    const double C107130 = C61506 / C104264;
    const double C55481 =
        (3 * C61306) / C104264 - (C61537 * C107246) / q - (C61506 * p) / q;
    const double C60614 =
        C108741 - ((C60660 * C107055) / p + (C90413 * C108681) / C107322);
    const double C61841 =
        C108741 - ((C62604 * C107060) / p + (C90674 * C108685) / C107322);
    const double C107177 = C62649 / C104264;
    const double C57942 =
        (3 * C62447) / C104264 - (C62680 * C107250) / q - (C62649 * p) / q;
    const double C108740 = C108713 / C108648;
    const double C59708 = (2 * C108713) / p - ((C59630 * C107055) / p +
                                               (C90771 * C108681) / C107322);
    const double C102932 =
        C71828 / q - (C52769 * C107245) / q - (C52754 * p) / q;
    const double C58696 =
        C61321 / C104264 - (C58711 * C107245) / q + C107192 - (C52975 * p) / q;
    const double C107109 = C52848 / C104264;
    const double C102945 =
        C72151 / q - (C52863 * C107245) / q - (C52848 * p) / q;
    const double C59163 =
        C62462 / C104264 - (C59178 * C107245) / q + C107203 - (C53467 * p) / q;
    const double C107075 = C53371 * p;
    const double C103948 = C107207 - (C59337 * C107245) / q - (C53800 * p) / q;
    const double C59398 = C107201 - (C59413 * C107245) / q - (C58945 * p) / q;
    const double C108662 = C91172 * q;
    const double C61552 =
        -((C61506 * C107055) / p + (C91172 * C108681) / C107322);
    const double C63866 =
        -((C61506 * C107065) / p + (C91172 * C108687) / C107322);
    const double C90998 =
        -((C91172 * C107055) / p + (C92332 * C108681) / C107322);
    const double C91296 =
        -((C91172 * C107065) / p + (C92332 * C108687) / C107322);
    const double C62346 =
        -((C60194 * C107065) / p + (C98123 * C108687) / C107322);
    const double C108742 = C108716 / C108648;
    const double C63836 = (2 * C108716) / p - ((C61506 * C107060) / p +
                                               (C91172 * C108685) / C107322);
    const double C107194 = C54980 * p;
    const double C107160 = C55543 / C104264;
    const double C55025 =
        C75244 / q - (C55055 * C107246) / q - (C55543 * p) / q;
    const double C59457 =
        C107207 - (C59571 * C107246) / q + C107201 - (C55970 * p) / q;
    const double C107198 = C55040 * p;
    const double C107205 = C59104 * p;
    const double C107155 = C59104 / q;
    const double C91186 =
        C108750 - ((C90674 * C107060) / p + (C95929 * C108685) / C107322);
    const double C94628 =
        C108750 - ((C90413 * C107055) / p + (C92389 * C108681) / C107322);
    const double C108663 = C91394 * q;
    const double C62695 =
        -((C62649 * C107055) / p + (C91394 * C108681) / C107322);
    const double C64250 =
        -((C62649 * C107060) / p + (C91394 * C108685) / C107322);
    const double C103509 = -(C57159 * C107245 + C57144 * p) / q;
    const double C107195 = C59134 * p;
    const double C107158 = C59134 / q;
    const double C108743 = C108717 / C108648;
    const double C64280 = (2 * C108717) / p - ((C62649 * C107065) / p +
                                               (C91394 * C108687) / C107322);
    const double C107206 = C57204 * p;
    const double C107170 = C57469 * p;
    const double C107190 = C57879 / C104264;
    const double C108759 = C108723 / C108648;
    const double C90800 = (2 * C108723) / p - ((C90771 * C107055) / p +
                                               (C92235 * C108681) / C107322);
    const double C108718 = C59630 - C108690;
    const double C52738 = -(C59630 * C107246 + C107070) / q;
    const double C53925 =
        (3 * C60225) / C104264 - (C60286 * C107245) / q - C107070 / q;
    const double C52832 = -(C59630 * C107250 + C107076) / q;
    const double C54163 =
        (3 * C60645) / C104264 - (C60706 * C107245) / q - C107076 / q;
    const double C54119 = -(C60286 * C107250 + C107111) / q;
    const double C54323 = -(C60706 * C107246 + C107111) / q;
    const double C54400 = C107116 - (C61205 * C107245) / q - C107111 / q;
    const double C108748 = C108724 / C108648;
    const double C91282 = (2 * C108724) / p - ((C91172 * C107060) / p +
                                               (C92332 * C108685) / C107322);
    const double C56288 = -(C61567 * C107250 + C107153) / q;
    const double C56492 = C107116 - (C61902 * C107246) / q - C107153 / q;
    const double C56568 = -(C62389 * C107245 + C107153) / q;
    const double C108672 = C92448 * q;
    const double C91114 =
        -((C91394 * C107055) / p + (C92448 * C108681) / C107322);
    const double C91462 =
        -((C91394 * C107060) / p + (C92448 * C108685) / C107322);
    const double C92769 =
        -((C92448 * C107055) / p + (C93345 * C108681) / C107322);
    const double C96413 =
        -((C92448 * C107060) / p + (C93345 * C108685) / C107322);
    const double C108749 = C108725 / C108648;
    const double C91476 = (2 * C108725) / p - ((C91394 * C107065) / p +
                                               (C92448 * C108687) / C107322);
    const double C58195 = C107116 - (C62619 * C107250) / q - C107185 / q;
    const double C58399 = -(C62710 * C107246 + C107185) / q;
    const double C58476 = -(C63155 * C107245 + C107185) / q;
    const double C92611 = (2 * C108733) / p - ((C92235 * C107055) / p +
                                               (C93219 * C108681) / C107322);
    const double C96274 = C108733 / C108648 - ((C99572 * C107065) / p +
                                               (C100369 * C108687) / C107322);
    const double C108728 = C90771 - C108701;
    const double C107223 = C63764 * p;
    const double C108754 = C108734 / C108648;
    const double C92695 = (2 * C108734) / p - ((C92332 * C107060) / p +
                                               (C93260 * C108685) / C107322);
    const double C108729 = C91172 - C108702;
    const double C108755 = C108735 / C108648;
    const double C92784 = (2 * C108735) / p - ((C92448 * C107065) / p +
                                               (C93345 * C108687) / C107322);
    const double C107292 = C107213 / C104264;
    const double C107260 = C107088 / q;
    const double C54758 =
        C73422 / q - (C54995 * C107246) / q + C107119 - (C55481 * p) / q;
    const double C107218 = 3 * C60614;
    const double C107105 = C60614 * p;
    const double C107094 = C60614 / C104264;
    const double C107239 = 3 * C61841;
    const double C107148 = C61841 * p;
    const double C107137 = C61841 / C104264;
    const double C107191 = C57942 / C104264;
    const double C57040 =
        C75301 / q - (C57219 * C107250) / q + C107162 - (C57942 * p) / q;
    const double C60255 =
        C108740 - ((C60286 * C107060) / p + (C94460 * C108685) / C107322);
    const double C60675 =
        C108740 - ((C60706 * C107065) / p + (C94543 * C108687) / C107322);
    const double C52239 =
        (2 * C59662) / q - (C59630 * C107245) / q - (C59708 * p) / q;
    const double C52816 = -(C52863 * C107246 + C107075) / q;
    const double C103805 = C107208 - (C58901 * C107245) / q - C107075 / q;
    const double C108693 = C108662 / C107322;
    const double C107132 = C61552 * p;
    const double C107135 = C63866 * p;
    const double C63881 =
        -((C63866 * C107055) / p + (C91296 * C108681) / C107322);
    const double C107092 = C62346 * p;
    const double C62257 =
        C108742 - ((C61567 * C107055) / p + (C90969 * C108681) / C107322);
    const double C64016 =
        C108742 - ((C62389 * C107065) / p + (C91200 * C108687) / C107322);
    const double C55465 =
        (2 * C61537) / q - (C61506 * C107246) / q - (C63836 * p) / q;
    const double C58756 =
        C71828 / C104264 - (C58870 * C107246) / q + C107192 - C107194 / q;
    const double C103221 = -(C54995 * C107245 + C107194) / q;
    const double C58885 = C107197 - (C58901 * C107246) / q - C107198 / q;
    const double C103233 = -(C55055 * C107245 + C107198) / q;
    const double C59223 = C107203 - (C59337 * C107246) / q - C107205 / q;
    const double C104130 = -(C59571 * C107245 + C107205) / q;
    const double C61887 =
        -((C61841 * C107055) / p + (C91186 * C108681) / C107322);
    const double C91014 =
        -((C91186 * C107055) / p + (C92360 * C108681) / C107322);
    const double C63010 =
        -((C60614 * C107060) / p + (C94628 * C108685) / C107322);
    const double C108694 = C108663 / C107322;
    const double C107179 = C62695 * p;
    const double C107180 = C64250 * p;
    const double C58813 = C107192 - (C58901 * C107250) / q - C107195 / q;
    const double C59353 = -(C59369 * C107246 + C107195) / q;
    const double C104141 = -(C59601 * C107245 + C107195) / q;
    const double C63098 =
        C108743 - ((C62710 * C107055) / p + (C91099 * C108681) / C107322);
    const double C64046 =
        C108743 - ((C63155 * C107060) / p + (C91408 * C108685) / C107322);
    const double C57926 =
        (2 * C62680) / q - (C62649 * C107250) / q - (C64280 * p) / q;
    const double C59280 =
        C107197 - (C59369 * C107250) / q + C107203 - C107206 / q;
    const double C103521 = -(C57219 * C107245 + C107206) / q;
    const double C57189 = -(C57219 * C107246 + C107170) / q;
    const double C59514 =
        C107208 - (C59601 * C107250) / q + C107201 - C107170 / q;
    const double C94726 =
        C108759 - ((C94543 * C107065) / p + (C99572 * C108687) / C107322);
    const double C98196 =
        C108759 - ((C94460 * C107060) / p + (C95986 * C108685) / C107322);
    const double C63330 =
        -((C59708 * C107060) / p + (C90800 * C108685) / C107322);
    const double C63346 =
        -((C59708 * C107065) / p + (C90800 * C108687) / C107322);
    const double C108744 = C108718 / C108648;
    const double C63299 =
        (5 * C108718) / C108648 -
        ((C59708 * C107055) / p + (C90800 * C108681) / C107322);
    const double C102926 =
        (3 * C52769) / C104264 - (C52754 * C107245) / q - (C52738 * p) / q;
    const double C52941 =
        C58711 / q - (C52975 * C107245) / q + C107080 - (C53925 * p) / q;
    const double C102939 =
        (3 * C52863) / C104264 - (C52848 * C107245) / q - (C52832 * p) / q;
    const double C53433 =
        C59178 / q - (C53467 * C107245) / q + C107095 - (C54163 * p) / q;
    const double C107074 = C54119 * p;
    const double C103056 =
        C59337 / q - (C53800 * C107245) / q - (C54323 * p) / q;
    const double C58930 =
        C59413 / C104264 - (C58945 * C107245) / q + C107200 - (C54400 * p) / q;
    const double C91044 =
        C108748 - ((C90969 * C107055) / p + (C92404 * C108681) / C107322);
    const double C91351 =
        C108748 - ((C91200 * C107065) / p + (C99666 * C108687) / C107322);
    const double C63851 =
        -((C63836 * C107055) / p + (C91282 * C108681) / C107322);
    const double C75928 =
        -((C63836 * C107065) / p + (C91282 * C108687) / C107322);
    const double C107127 = C56288 * p;
    const double C107202 = C56492 * p;
    const double C108703 = C108672 / C107322;
    const double C64265 =
        -((C64250 * C107055) / p + (C91462 * C108681) / C107322);
    const double C91144 =
        C108749 - ((C91099 * C107055) / p + (C92490 * C108681) / C107322);
    const double C91366 =
        C108749 - ((C91408 * C107060) / p + (C96149 * C108685) / C107322);
    const double C64295 =
        -((C64280 * C107055) / p + (C91476 * C108681) / C107322);
    const double C76347 =
        -((C64280 * C107060) / p + (C91476 * C108685) / C107322);
    const double C107169 = C58195 * p;
    const double C103630 = -(C57879 * C107245 + C58399 * p) / q;
    const double C95128 =
        -((C90800 * C107060) / p + (C92611 * C108685) / C107322);
    const double C95213 =
        -((C90800 * C107065) / p + (C92611 * C108687) / C107322);
    const double C108760 = C108728 / C108648;
    const double C91503 =
        (5 * C108728) / C108648 -
        ((C90800 * C107055) / p + (C92611 * C108681) / C107322);
    const double C61074 =
        (3 * C61205) / C104264 - (C61235 * C107245) / q - C107223 / q;
    const double C71945 = -(C61148 * C107246 + C107223) / q;
    const double C73167 = -(C61059 * C107250 + C107223) / q;
    const double C92724 =
        C108754 - ((C99666 * C107065) / p + (C100384 * C108687) / C107322);
    const double C92754 =
        C108754 - ((C92404 * C107055) / p + (C93330 * C108681) / C107322);
    const double C91654 =
        -((C91282 * C107055) / p + (C92695 * C108681) / C107322);
    const double C91880 =
        -((C91282 * C107065) / p + (C92695 * C108687) / C107322);
    const double C108751 = C108729 / C108648;
    const double C91797 =
        (5 * C108729) / C108648 -
        ((C91282 * C107060) / p + (C92695 * C108685) / C107322);
    const double C92739 =
        C108755 - ((C96149 * C107060) / p + (C96868 * C108685) / C107322);
    const double C92799 =
        C108755 - ((C92490 * C107055) / p + (C93373 * C108681) / C107322);
    const double C91768 =
        -((C91476 * C107055) / p + (C92784 * C108681) / C107322);
    const double C91992 =
        -((C91476 * C107060) / p + (C92784 * C108685) / C107322);
    const double C53307 = C107059 - (C60225 * C107246) / q - C107260;
    const double C54654 = C107119 - (C60240 * C107245) / q - C107260;
    const double C107296 = C107218 / C104264;
    const double C107269 = C107105 / q;
    const double C107306 = C107239 / C104264;
    const double C107288 = C107148 / q;
    const double C107081 = C60255 * p;
    const double C107096 = C60675 * p;
    const double C52206 = (3 * C52273) / C104264 - (C52256 * C107245) / q +
                          C107058 - (C52239 * p) / q;
    const double C108720 = C61506 - C108693;
    const double C55134 = -(C61506 * C107245 + C107132) / q;
    const double C56257 =
        (3 * C60240) / C104264 - (C61567 * C107246) / q - C107132 / q;
    const double C55527 = -(C61506 * C107250 + C107135) / q;
    const double C56728 =
        (3 * C61872) / C104264 - (C62389 * C107246) / q - C107135 / q;
    const double C107227 = C63881 * p;
    const double C107277 = C107092 / q;
    const double C53354 = -(C60194 * C107250 + C107092) / q;
    const double C107087 = C62257 * p;
    const double C107143 = C64016 * p;
    const double C55242 = (3 * C54995) / C104264 - (C55481 * C107246) / q +
                          C107131 - (C55465 * p) / q;
    const double C107139 = C61887 * p;
    const double C64001 =
        (C61841 - (C91186 * q) / C107322) / C108648 -
        ((C61887 * C107055) / p + (C91014 * C108681) / C107322);
    const double C107102 = C63010 * p;
    const double C108721 = C62649 - C108694;
    const double C57531 = -(C62649 * C107245 + C107179) / q;
    const double C58431 =
        (3 * C60660) / C104264 - (C62710 * C107250) / q - C107179 / q;
    const double C57863 = -(C62649 * C107246 + C107180) / q;
    const double C58667 =
        (3 * C62604) / C104264 - (C63155 * C107250) / q - C107180 / q;
    const double C107104 = C63098 * p;
    const double C107147 = C64046 * p;
    const double C57760 = (3 * C57219) / C104264 - (C57942 * C107250) / q +
                          C107178 - (C57926 * p) / q;
    const double C63632 =
        -((C60675 * C107060) / p + (C94726 * C108685) / C107322);
    const double C95268 =
        -((C94726 * C107060) / p + (C96274 * C108685) / C107322);
    const double C63497 =
        -((C60255 * C107065) / p + (C98196 * C108687) / C107322);
    const double C107211 = C63330 * p;
    const double C107212 = C63346 * p;
    const double C63467 =
        C108744 - ((C61059 * C107060) / p + (C94445 * C108685) / C107322);
    const double C63617 =
        C108744 - ((C61148 * C107065) / p + (C94529 * C108687) / C107322);
    const double C59646 =
        (5 * C59630) / C104264 - (C59708 * C107245) / q - (C63299 * p) / q;
    const double C101579 = C102926 + xAB * C102932;
    const double C101600 = C52941 + yAB * C52222;
    const double C102260 = C52941 + xAB * C58696;
    const double C101586 = C102939 + xAB * C102945;
    const double C101642 = C53433 + zAB * C52222;
    const double C102470 = C53433 + xAB * C59163;
    const double C52801 = -(C52848 * C107246 + C107074) / q;
    const double C103004 = C107126 - (C53371 * C107245) / q - C107074 / q;
    const double C101663 = C103056 + zAB * C102932;
    const double C102491 = C103056 + xAB * C103948;
    const double C102338 = C58930 + zAB * C58696;
    const double C102512 = C58930 + yAB * C59163;
    const double C102686 = C58930 + xAB * C59398;
    const double C63482 =
        (C61567 - (C90969 * q) / C107322) / p -
        ((C62257 * C107055) / p + (C91044 * C108681) / C107322);
    const double C64178 =
        -((C62257 * C107065) / p + (C91044 * C108687) / C107322);
    const double C64031 =
        -((C64016 * C107055) / p + (C91351 * C108681) / C107322);
    const double C107226 = C63851 * p;
    const double C107238 = C75928 * p;
    const double C55010 = C107126 - (C55040 * C107246) / q - C107127 / q;
    const double C103292 = -(C55543 * C107245 + C107127) / q;
    const double C58990 =
        C59337 / C104264 - (C59104 * C107246) / q + C107200 - C107202 / q;
    const double C103344 = -(C55970 * C107245 + C107202) / q;
    const double C108730 = C91394 - C108703;
    const double C107234 = C64265 * p;
    const double C63647 =
        (C62710 - (C91099 * q) / C107322) / p -
        ((C63098 * C107055) / p + (C91144 * C108681) / C107322);
    const double C64426 =
        -((C63098 * C107060) / p + (C91144 * C108685) / C107322);
    const double C64061 =
        -((C64046 * C107055) / p + (C91366 * C108681) / C107322);
    const double C76103 =
        (C63155 - (C91408 * q) / C107322) / p -
        ((C64046 * C107060) / p + (C91366 * C108685) / C107322);
    const double C107235 = C64295 * p;
    const double C107244 = C76347 * p;
    const double C57174 = -(C57204 * C107246 + C107169) / q;
    const double C59047 =
        C58901 / C104264 - (C59134 * C107250) / q + C107200 - C107169 / q;
    const double C103578 = -(C57469 * C107245 + C107169) / q;
    const double C102131 = C103630 + zAB * C103509;
    const double C95143 =
        C108760 - ((C94445 * C107060) / p + (C96204 * C108685) / C107322);
    const double C95185 =
        C108760 - ((C94529 * C107065) / p + (C99762 * C108687) / C107322);
    const double C54384 =
        C58945 / q - (C54400 * C107245) / q + C107115 - (C61074 * p) / q;
    const double C103136 =
        (3 * C53800) / C104264 - (C54323 * C107245) / q - (C71945 * p) / q;
    const double C107073 = C73167 * p;
    const double C91696 =
        -((C91351 * C107055) / p + (C92724 * C108681) / C107322);
    const double C98845 =
        (C90969 - (C92404 * q) / C107322) / p -
        ((C91044 * C107055) / p + (C92754 * C108681) / C107322);
    const double C91639 =
        C108751 - ((C90998 * C107055) / p + (C92680 * C108681) / C107322);
    const double C91838 =
        C108751 - ((C91296 * C107065) / p + (C99916 * C108687) / C107322);
    const double C91711 =
        -((C91366 * C107055) / p + (C92739 * C108681) / C107322);
    const double C91936 =
        (C91408 - (C96149 * q) / C107322) / p -
        ((C91366 * C107060) / p + (C92739 * C108685) / C107322);
    const double C95366 =
        (C91099 - (C92490 * q) / C107322) / p -
        ((C91144 * C107055) / p + (C92799 * C108681) / C107322);
    const double C107064 = C53307 * p;
    const double C54638 = C107119 - (C54670 * C107245) / q - (C54654 * p) / q;
    const double C53865 = C107059 - (C60645 * C107250) / q - C107269;
    const double C56819 = C107162 - (C60660 * C107245) / q - C107269;
    const double C56033 = C107119 - (C61872 * C107250) / q - C107288;
    const double C57439 = C107162 - (C62604 * C107246) / q - C107288;
    const double C107254 = C107081 / q;
    const double C107263 = C107096 / q;
    const double C101558 = C52206 + xAB * C52222;
    const double C108745 = C108720 / C108648;
    const double C75912 =
        (5 * C108720) / C108648 -
        ((C63836 * C107060) / p + (C91282 * C108685) / C107322);
    const double C107122 = C56257 * p;
    const double C55512 =
        (3 * C55055) / C104264 - (C55543 * C107246) / q - (C55527 * p) / q;
    const double C55728 =
        C59571 / q - (C55970 * C107246) / q + C107138 - (C56728 * p) / q;
    const double C61600 = -(C63866 * C107245 + C107227) / q;
    const double C73824 = -(C61552 * C107250 + C107227) / q;
    const double C74312 =
        (3 * C61902) / C104264 - (C62404 * C107246) / q - C107227 / q;
    const double C54561 = C107095 - (C61205 * C107246) / q - C107277;
    const double C56332 = C107138 - (C61902 * C107245) / q - C107277;
    const double C107091 = C53354 * p;
    const double C107259 = C107087 / q;
    const double C107285 = C107143 / q;
    const double C101841 = C55242 + yAB * C54758;
    const double C107291 = C107139 / q;
    const double C55620 = -(C61841 * C107245 + C107139) / q;
    const double C107228 = C64001 * p;
    const double C107278 = C107102 / q;
    const double C53783 = -(C60614 * C107246 + C107102) / q;
    const double C108746 = C108721 / C108648;
    const double C88345 =
        (5 * C108721) / C108648 -
        ((C64280 * C107065) / p + (C91476 * C108687) / C107322);
    const double C107166 = C58431 * p;
    const double C107174 = C58667 * p;
    const double C107268 = C107104 / q;
    const double C107287 = C107147 / q;
    const double C102124 = C57760 + zAB * C57040;
    const double C107221 = C63632 * p;
    const double C107217 = C63497 * p;
    const double C59739 =
        (2 * C60286) / q - (C61059 * C107245) / q - C107211 / q;
    const double C71812 = -(C59708 * C107246 + C107211) / q;
    const double C59756 =
        (2 * C60706) / q - (C61148 * C107245) / q - C107212 / q;
    const double C72135 = -(C59708 * C107250 + C107212) / q;
    const double C107214 = C63467 * p;
    const double C107219 = C63617 * p;
    const double C52189 =
        (2 * C52256) / q - (C52239 * C107245) / q + C107057 - (C59646 * p) / q;
    const double C101593 = C52801 + xAB * C52816;
    const double C101628 = C103004 + yAB * C102945;
    const double C102288 = C103004 + xAB * C103805;
    const double C107215 = C63482 * p;
    const double C107231 = C64178 * p;
    const double C107229 = C64031 * p;
    const double C61582 = -(C63836 * C107245 + C107226) / q;
    const double C73643 =
        (2 * C61567) / q - (C61552 * C107246) / q - C107226 / q;
    const double C73704 =
        (2 * C62389) / q - (C63866 * C107246) / q - C107238 / q;
    const double C85752 = -(C63836 * C107250 + C107238) / q;
    const double C101827 = C55010 + xAB * C55025;
    const double C102331 = C55010 + yAB * C58885;
    const double C101862 = C103292 + yAB * C103233;
    const double C102345 = C58990 + zAB * C58756;
    const double C102519 = C58990 + yAB * C59223;
    const double C102693 = C58990 + xAB * C59457;
    const double C101897 = C103344 + zAB * C103221;
    const double C102749 = C103344 + yAB * C104130;
    const double C108752 = C108730 / C108648;
    const double C91951 =
        (5 * C108730) / C108648 -
        ((C91476 * C107065) / p + (C92784 * C108687) / C107322);
    const double C62725 = -(C64250 * C107245 + C107234) / q;
    const double C74775 = -(C62695 * C107246 + C107234) / q;
    const double C75216 =
        (3 * C62619) / C104264 - (C63170 * C107250) / q - C107234 / q;
    const double C107222 = C63647 * p;
    const double C107236 = C64426 * p;
    const double C107230 = C64061 * p;
    const double C107241 = C76103 * p;
    const double C62742 = -(C64280 * C107245 + C107235) / q;
    const double C74983 =
        (2 * C62710) / q - (C62695 * C107250) / q - C107235 / q;
    const double C74863 = -(C64280 * C107246 + C107244) / q;
    const double C86888 =
        (2 * C63155) / q - (C64250 * C107250) / q - C107244 / q;
    const double C102061 = C57174 + xAB * C57189;
    const double C102583 = C57174 + zAB * C59353;
    const double C102352 = C59047 + zAB * C58813;
    const double C102526 = C59047 + yAB * C59280;
    const double C102700 = C59047 + xAB * C59514;
    const double C102096 = C103578 + yAB * C103521;
    const double C102793 = C103578 + zAB * C104141;
    const double C101755 = C54384 + zAB * C52941;
    const double C102589 = C54384 + yAB * C53433;
    const double C102685 = C54384 + xAB * C58930;
    const double C101737 = C103136 + zAB * C102926;
    const double C102490 = C103136 + xAB * C103056;
    const double C52785 = -(C52832 * C107246 + C107073) / q;
    const double C103110 =
        (3 * C53371) / C104264 - (C54119 * C107245) / q - C107073 / q;
    const double C107249 = C107064 / q;
    const double C107069 = C53865 * p;
    const double C56803 = C107162 - (C56835 * C107245) / q - (C56819 * p) / q;
    const double C107124 = C56033 * p;
    const double C56923 = C107162 - (C57159 * C107246) / q - (C57439 * p) / q;
    const double C52957 = C60240 / q - (C60194 * C107245) / q - C107254;
    const double C54088 = C107058 - (C60286 * C107246) / q - C107254;
    const double C53449 = C60660 / q - (C60614 * C107245) / q - C107263;
    const double C54355 = C107058 - (C60706 * C107250) / q - C107263;
    const double C63821 =
        C108745 - ((C61552 * C107055) / p + (C90998 * C108681) / C107322);
    const double C76088 =
        C108745 - ((C63866 * C107065) / p + (C91296 * C108687) / C107322);
    const double C73688 =
        (5 * C61506) / C104264 - (C63836 * C107246) / q - (C75912 * p) / q;
    const double C54743 =
        C107121 - (C54980 * C107246) / q + C107118 - C107122 / q;
    const double C103280 = -(C55481 * C107245 + C107122) / q;
    const double C101869 = C55512 + yAB * C55025;
    const double C101883 = C55728 + zAB * C54758;
    const double C102735 = C55728 + yAB * C59457;
    const double C107152 = C73824 * p;
    const double C107156 = C74312 * p;
    const double C107099 = C54561 * p;
    const double C55604 = C107138 - (C55637 * C107245) / q - (C56332 * p) / q;
    const double C107262 = C107091 / q;
    const double C53290 = C60225 / q - (C60194 * C107246) / q - C107259;
    const double C56094 = C107131 - (C61567 * C107245) / q - C107259;
    const double C55954 = C62604 / q - (C61841 * C107246) / q - C107285;
    const double C56759 = C107131 - (C62389 * C107250) / q - C107285;
    const double C56523 = C107118 - (C61902 * C107250) / q - C107291;
    const double C58164 = C107161 - (C62619 * C107246) / q - C107291;
    const double C107301 = C107228 / q;
    const double C54593 = C107080 - (C61205 * C107250) / q - C107278;
    const double C58001 = C107172 - (C62619 * C107245) / q - C107278;
    const double C103503 = C107173 - (C57144 * C107245) / q - (C53783 * p) / q;
    const double C64235 =
        C108746 - ((C62695 * C107055) / p + (C91114 * C108681) / C107322);
    const double C76318 =
        C108746 - ((C64250 * C107060) / p + (C91462 * C108685) / C107322);
    const double C86904 =
        (5 * C62649) / C104264 - (C64280 * C107250) / q - (C88345 * p) / q;
    const double C57025 =
        C107165 - (C57204 * C107250) / q + C107161 - C107166 / q;
    const double C103642 = -(C57942 * C107245 + C107166) / q;
    const double C57381 =
        C107146 - (C57469 * C107250) / q + C107172 - C107174 / q;
    const double C57911 = -(C57942 * C107246 + C107174) / q;
    const double C53848 = C60645 / q - (C60614 * C107250) / q - C107268;
    const double C58239 = C107178 - (C62710 * C107245) / q - C107268;
    const double C56017 = C61872 / q - (C61841 * C107250) / q - C107287;
    const double C58636 = C107178 - (C63155 * C107246) / q - C107287;
    const double C107298 = C107221 / q;
    const double C72785 = -(C60675 * C107246 + C107221) / q;
    const double C107295 = C107217 / q;
    const double C72580 = -(C60255 * C107250 + C107217) / q;
    const double C53910 = (3 * C52975) / C104264 - (C53925 * C107245) / q +
                          C107106 - (C59739 * p) / q;
    const double C102925 =
        (2 * C52754) / q - (C52738 * C107245) / q - (C71812 * p) / q;
    const double C54148 = (3 * C53467) / C104264 - (C54163 * C107245) / q +
                          C107112 - (C59756 * p) / q;
    const double C102938 =
        (2 * C52848) / q - (C52832 * C107245) / q - (C72135 * p) / q;
    const double C107293 = C107214 / q;
    const double C107297 = C107219 / q;
    const double C101557 = C52189 + xAB * C52206;
    const double C107294 = C107215 / q;
    const double C107302 = C107231 / q;
    const double C74356 = -(C62257 * C107250 + C107231) / q;
    const double C107305 = C107229 / q;
    const double C61917 = -(C64016 * C107245 + C107229) / q;
    const double C107150 = C73643 * p;
    const double C56613 = (3 * C55970) / C104264 - (C56728 * C107246) / q +
                          C107159 - (C73704 * p) / q;
    const double C55496 =
        (2 * C55543) / q - (C55527 * C107246) / q - (C85752 * p) / q;
    const double C91740 =
        C108752 - ((C91114 * C107055) / p + (C92769 * C108681) / C107322);
    const double C91894 =
        C108752 - ((C91462 * C107060) / p + (C96413 * C108685) / C107322);
    const double C103629 = -(C57863 * C107245 + C74775 * p) / q;
    const double C107184 = C75216 * p;
    const double C107299 = C107222 / q;
    const double C107304 = C107236 / q;
    const double C72873 = -(C63098 * C107246 + C107236) / q;
    const double C107309 = C107230 / q;
    const double C61934 = -(C64046 * C107245 + C107230) / q;
    const double C107308 = C107241 / q;
    const double C107188 = C74983 * p;
    const double C107181 = C86888 * p;
    const double C5413 = C101755 + yAB * C101642;
    const double C8235 = C101755 + xAB * C102338;
    const double C9065 = C102589 + xAB * C102512;
    const double C9563 = C102685 + xAB * C102686;
    const double C5334 = C101737 + xAB * C101663;
    const double C8654 = C102490 + xAB * C102491;
    const double C101592 = C52785 + xAB * C52801;
    const double C101707 = C103110 + yAB * C102939;
    const double C102287 = C103110 + xAB * C103004;
    const double C52407 = C107059 - (C52769 * C107246) / q - C107249;
    const double C103794 = C73422 / C104264 - (C58870 * C107245) / q - C107249;
    const double C107253 = C107069 / q;
    const double C107280 = C107124 / q;
    const double C54623 =
        C54670 / C104264 - (C54654 * C107245) / q + C107118 - (C52957 * p) / q;
    const double C107063 = C54088 * p;
    const double C56788 =
        C56835 / C104264 - (C56819 * C107245) / q + C107161 - (C53449 * p) / q;
    const double C107068 = C54355 * p;
    const double C107225 = C63821 * p;
    const double C107240 = C76088 * p;
    const double C55226 =
        (2 * C55481) / q - (C55465 * C107246) / q + C107130 - (C73688 * p) / q;
    const double C101799 = C54743 + xAB * C54758;
    const double C102307 = C54743 + yAB * C58756;
    const double C101855 = C103280 + yAB * C103221;
    const double C56272 =
        (3 * C55040) / C104264 - (C56288 * C107246) / q - C107152 / q;
    const double C103291 = -(C55527 * C107245 + C107152) / q;
    const double C56377 =
        C107155 - (C56492 * C107246) / q + C107154 - C107156 / q;
    const double C103456 = -(C56728 * C107245 + C107156) / q;
    const double C107265 = C107099 / q;
    const double C101876 = C55604 + zAB * C54638;
    const double C102728 = C55604 + yAB * C59398;
    const double C53339 = C107090 - (C53371 * C107246) / q - C107262;
    const double C103227 = C107141 - (C55040 * C107245) / q - C107262;
    const double C107084 = C53290 * p;
    const double C55118 = C107131 - (C55151 * C107245) / q - (C56094 * p) / q;
    const double C57324 =
        C107173 - (C57439 * C107246) / q + C107172 - (C55954 * p) / q;
    const double C107134 = C56759 * p;
    const double C107123 = C56523 * p;
    const double C107164 = C58164 * p;
    const double C61856 = C107137 - (C61887 * C107245) / q - C107301;
    const double C72857 = C107094 - (C63010 * C107246) / q - C107301;
    const double C74400 = C107079 - (C62346 * C107250) / q - C107301;
    const double C107086 = C54593 * p;
    const double C57263 = C107172 - (C57279 * C107245) / q - (C58001 * p) / q;
    const double C102047 = C103503 + xAB * C103509;
    const double C102571 = C103503 + zAB * C103948;
    const double C107233 = C64235 * p;
    const double C107243 = C76318 * p;
    const double C57744 =
        (2 * C57942) / q - (C57926 * C107250) / q + C107177 - (C86904 * p) / q;
    const double C102040 = C57025 + xAB * C57040;
    const double C102565 = C57025 + zAB * C59280;
    const double C102138 = C103642 + zAB * C103521;
    const double C102082 = C57381 + yAB * C57040;
    const double C102781 = C57381 + zAB * C59514;
    const double C102145 = C57911 + zAB * C57189;
    const double C107101 = C53848 * p;
    const double C57515 = C107178 - (C57548 * C107245) / q - (C58239 * p) / q;
    const double C107142 = C56017 * p;
    const double C57639 = C107178 - (C57879 * C107246) / q - (C58636 * p) / q;
    const double C60721 = C107220 - (C63010 * C107245) / q - C107298;
    const double C73310 = C107106 - (C61235 * C107250) / q - C107298;
    const double C103055 =
        C57144 / q - (C53783 * C107245) / q - (C72785 * p) / q;
    const double C60318 = C107216 - (C62346 * C107245) / q - C107295;
    const double C73123 = C107112 - (C61235 * C107246) / q - C107295;
    const double C107110 = C72580 * p;
    const double C101683 = C53910 + yAB * C52206;
    const double C102259 = C53910 + xAB * C52941;
    const double C101578 = C102925 + xAB * C102926;
    const double C101719 = C54148 + zAB * C52206;
    const double C102469 = C54148 + xAB * C53433;
    const double C101585 = C102938 + xAB * C102939;
    const double C60209 = C107292 - (C60255 * C107245) / q - C107293;
    const double C71929 = C107057 - (C61059 * C107246) / q - C107293;
    const double C60629 = C107296 - (C60675 * C107245) / q - C107297;
    const double C73225 = C107057 - (C61148 * C107250) / q - C107297;
    const double C4583 = C101557 + xAB * C101558;
    const double C60301 = C61567 / q - (C62257 * C107245) / q - C107294;
    const double C72371 = C60286 / q - (C60255 * C107246) / q - C107294;
    const double C62272 = C107159 - (C62404 * C107245) / q - C107302;
    const double C72432 = C107237 - (C62346 * C107246) / q - C107302;
    const double C107089 = C74356 * p;
    const double C73974 = C107220 - (C61887 * C107246) / q - C107305;
    const double C74457 = C107149 - (C62404 * C107250) / q - C107305;
    const double C56140 =
        (3 * C54980) / C104264 - (C56257 * C107246) / q + C107149 - C107150 / q;
    const double C103279 = -(C55465 * C107245 + C107150) / q;
    const double C101995 = C56613 + zAB * C55242;
    const double C102734 = C56613 + yAB * C55728;
    const double C101868 = C55496 + yAB * C55512;
    const double C102130 = C103629 + zAB * C103630;
    const double C58105 =
        C107158 - (C58195 * C107250) / q + C107182 - C107184 / q;
    const double C58415 = -(C58431 * C107246 + C107184) / q;
    const double C103748 = -(C58667 * C107245 + C107184) / q;
    const double C60737 = C62710 / q - (C63098 * C107245) / q - C107299;
    const double C73020 = C60706 / q - (C60675 * C107250) / q - C107299;
    const double C63025 = C107189 - (C63170 * C107245) / q - C107304;
    const double C75102 = C107237 - (C63010 * C107250) / q - C107304;
    const double C103710 = C107190 - (C58399 * C107245) / q - (C72873 * p) / q;
    const double C74209 = C107216 - (C61887 * C107250) / q - C107309;
    const double C75058 = C107186 - (C63170 * C107246) / q - C107309;
    const double C74090 = C63155 / q - (C64046 * C107246) / q - C107308;
    const double C86121 = C62389 / q - (C64016 * C107250) / q - C107308;
    const double C58342 =
        (3 * C57204) / C104264 - (C58431 * C107250) / q + C107186 - C107188 / q;
    const double C103641 = -(C57926 * C107245 + C107188) / q;
    const double C57895 = -(C57926 * C107246 + C107181) / q;
    const double C58579 =
        (3 * C57469) / C104264 - (C58667 * C107250) / q + C107189 - C107181 / q;
    const double C4723 = C101592 + xAB * C101593;
    const double C5195 = C101707 + xAB * C101628;
    const double C7685 = C102287 + xAB * C102288;
    const double C52588 = C107059 - (C52863 * C107250) / q - C107253;
    const double C103959 = C107209 - (C59369 * C107245) / q - C107253;
    const double C54877 = C107119 - (C55055 * C107250) / q - C107280;
    const double C59586 = C107209 - (C59601 * C107246) / q - C107280;
    const double C101792 = C54623 + xAB * C54638;
    const double C102301 = C54623 + yAB * C58696;
    const double C107248 = C107063 / q;
    const double C102026 = C56788 + xAB * C56803;
    const double C102553 = C56788 + zAB * C59163;
    const double C107252 = C107068 / q;
    const double C107300 = C107225 / q;
    const double C107307 = C107240 / q;
    const double C101840 = C55226 + yAB * C55242;
    const double C101947 = C56272 + yAB * C55010;
    const double C101861 = C103291 + yAB * C103292;
    const double C101959 = C56377 + zAB * C54743;
    const double C102518 = C56377 + yAB * C58990;
    const double C102007 = C103456 + zAB * C103280;
    const double C102748 = C103456 + yAB * C103344;
    const double C53559 = C107095 - (C53800 * C107246) / q - C107265;
    const double C103881 = C59571 / C104264 - (C59104 * C107245) / q - C107265;
    const double C101635 = C53339 + yAB * C52816;
    const double C102295 = C53339 + xAB * C58885;
    const double C101820 = C103227 + xAB * C103233;
    const double C102325 = C103227 + yAB * C103805;
    const double C107256 = C107084 / q;
    const double C101834 = C55118 + yAB * C54638;
    const double C102075 = C57324 + yAB * C56923;
    const double C102775 = C57324 + zAB * C59457;
    const double C107282 = C107134 / q;
    const double C107279 = C107123 / q;
    const double C103356 = -(C56033 * C107245 + C107123) / q;
    const double C56908 = C107161 - (C57144 * C107246) / q - C107164 / q;
    const double C103567 = -(C57439 * C107245 + C107164) / q;
    const double C55587 = C107137 - (C55620 * C107245) / q - (C61856 * p) / q;
    const double C107098 = C72857 * p;
    const double C107085 = C74400 * p;
    const double C107258 = C107086 / q;
    const double C53833 = -(C53865 * C107246 + C107086) / q;
    const double C102068 = C57263 + yAB * C56803;
    const double C102769 = C57263 + zAB * C59398;
    const double C107303 = C107233 / q;
    const double C107310 = C107243 / q;
    const double C102123 = C57744 + zAB * C57760;
    const double C107267 = C107101 / q;
    const double C102110 = C57515 + zAB * C56803;
    const double C107284 = C107142 / q;
    const double C102117 = C57639 + zAB * C56923;
    const double C57986 =
        C57279 / C104264 - (C58001 * C107245) / q + C107182 - (C60721 * p) / q;
    const double C107108 = C73310 * p;
    const double C101662 = C103055 + zAB * C103056;
    const double C102046 = C103055 + xAB * C103503;
    const double C56317 =
        C55637 / C104264 - (C56332 * C107245) / q + C107154 - (C60318 * p) / q;
    const double C107113 = C73123 * p;
    const double C107272 = C107110 / q;
    const double C5081 = C101683 + xAB * C101600;
    const double C7571 = C102259 + xAB * C102260;
    const double C4670 = C101578 + xAB * C101579;
    const double C5247 = C101719 + xAB * C101642;
    const double C8567 = C102469 + xAB * C102470;
    const double C4697 = C101585 + xAB * C101586;
    const double C52924 =
        C54654 / q - (C52957 * C107245) / q + C107079 - (C60209 * p) / q;
    const double C107062 = C71929 * p;
    const double C53416 =
        C56819 / q - (C53449 * C107245) / q + C107094 - (C60629 * p) / q;
    const double C107067 = C73225 * p;
    const double C56079 =
        C55151 / C104264 - (C56094 * C107245) / q + C107149 - (C60301 * p) / q;
    const double C107107 = C72371 * p;
    const double C56552 = C107159 - (C56568 * C107245) / q - (C62272 * p) / q;
    const double C107117 = C72432 * p;
    const double C107261 = C107089 / q;
    const double C107183 = C73974 * p;
    const double C107151 = C74457 * p;
    const double C101923 = C56140 + yAB * C54743;
    const double C101854 = C103279 + yAB * C103280;
    const double C6438 = C101995 + yAB * C101883;
    const double C9758 = C102734 + yAB * C102735;
    const double C5885 = C101868 + yAB * C101869;
    const double C6994 = C102130 + zAB * C102131;
    const double C102163 = C58105 + yAB * C57025;
    const double C102351 = C58105 + zAB * C59047;
    const double C102217 = C58415 + zAB * C57174;
    const double C102247 = C103748 + zAB * C103578;
    const double C58224 =
        C57548 / C104264 - (C58239 * C107245) / q + C107186 - (C60737 * p) / q;
    const double C107114 = C73020 * p;
    const double C58460 = C107189 - (C58476 * C107245) / q - (C63025 * p) / q;
    const double C107103 = C75102 * p;
    const double C102205 = C103710 + zAB * C103503;
    const double C107157 = C74209 * p;
    const double C107187 = C75058 * p;
    const double C58521 =
        C107190 - (C58636 * C107246) / q + C107189 - (C74090 * p) / q;
    const double C107145 = C86121 * p;
    const double C102199 = C58342 + zAB * C57025;
    const double C102137 = C103641 + zAB * C103642;
    const double C102144 = C57895 + zAB * C57911;
    const double C102235 = C58579 + zAB * C57381;
    const double C52392 = C107058 - (C52754 * C107246) / q - C107248;
    const double C102992 = C107121 - (C53307 * C107245) / q - C107248;
    const double C52573 = C107058 - (C52848 * C107250) / q - C107252;
    const double C103068 = C107165 - (C53865 * C107245) / q - C107252;
    const double C61521 = C107130 - (C61552 * C107245) / q - C107300;
    const double C72416 = C107292 - (C62257 * C107246) / q - C107300;
    const double C74074 = C107306 - (C64016 * C107246) / q - C107307;
    const double C85768 = C107130 - (C63866 * C107250) / q - C107307;
    const double C5774 = C101840 + yAB * C101841;
    const double C6217 = C101947 + xAB * C101869;
    const double C7877 = C101947 + yAB * C102331;
    const double C5859 = C101861 + yAB * C101862;
    const double C6272 = C101959 + xAB * C101883;
    const double C8430 = C101959 + yAB * C102345;
    const double C8762 = C102518 + yAB * C102519;
    const double C10090 = C102518 + xAB * C102735;
    const double C6496 = C102007 + yAB * C101897;
    const double C9816 = C102748 + yAB * C102749;
    const double C101649 = C53559 + zAB * C52407;
    const double C102477 = C53559 + xAB * C59223;
    const double C102359 = C103881 + zAB * C103794;
    const double C102533 = C103881 + yAB * C103948;
    const double C102707 = C103881 + xAB * C104130;
    const double C53067 =
        C52769 / C104264 - (C53307 * C107246) / q + C107080 - C107256;
    const double C103215 = C54995 / C104264 - (C54980 * C107245) / q - C107256;
    const double C55361 = C107131 - (C55543 * C107250) / q - C107282;
    const double C56002 = C107146 - (C56033 * C107246) / q - C107282;
    const double C54862 = C107118 - (C55040 * C107250) / q - C107279;
    const double C59119 = C59369 / C104264 - (C59134 * C107246) / q - C107279;
    const double C101904 = C103356 + zAB * C103233;
    const double C102756 = C103356 + yAB * C104141;
    const double C102033 = C56908 + xAB * C56923;
    const double C102559 = C56908 + zAB * C59223;
    const double C102089 = C103567 + yAB * C103509;
    const double C102787 = C103567 + zAB * C104130;
    const double C101875 = C55587 + zAB * C55604;
    const double C102067 = C55587 + yAB * C57263;
    const double C107264 = C107098 / q;
    const double C107257 = C107085 / q;
    const double C53186 = C107080 - (C53371 * C107250) / q - C107258;
    const double C103892 = C59601 / C104264 - (C59134 * C107245) / q - C107258;
    const double C101677 = C53833 + zAB * C52816;
    const double C102505 = C53833 + xAB * C59353;
    const double C62664 = C107177 - (C62695 * C107245) / q - C107303;
    const double C75159 = C107296 - (C63098 * C107250) / q - C107303;
    const double C74847 = C107177 - (C64250 * C107246) / q - C107310;
    const double C86137 = C107306 - (C64046 * C107250) / q - C107310;
    const double C6965 = C102123 + zAB * C102124;
    const double C53680 = C107090 - (C53865 * C107250) / q + C107095 - C107267;
    const double C103515 = C107175 - (C57204 * C107245) / q - C107267;
    const double C55851 = C107141 - (C56033 * C107250) / q + C107138 - C107284;
    const double C57454 = C107175 - (C57469 * C107246) / q - C107284;
    const double C102151 = C57986 + yAB * C56788;
    const double C102337 = C57986 + zAB * C58930;
    const double C107271 = C107108 / q;
    const double C54339 = -(C54355 * C107246 + C107108) / q;
    const double C5002 = C101662 + zAB * C101663;
    const double C9318 = C101662 + xAB * C102571;
    const double C6662 = C102046 + xAB * C102047;
    const double C101953 = C56317 + zAB * C54623;
    const double C102511 = C56317 + yAB * C58930;
    const double C107273 = C107113 / q;
    const double C54103 = C107109 - (C54119 * C107246) / q - C107272;
    const double C103003 = C55040 / q - (C53354 * C107245) / q - C107272;
    const double C101599 = C52924 + yAB * C52941;
    const double C101791 = C52924 + xAB * C54623;
    const double C107247 = C107062 / q;
    const double C101641 = C53416 + zAB * C53433;
    const double C102025 = C53416 + xAB * C56788;
    const double C107251 = C107067 / q;
    const double C101917 = C56079 + yAB * C54623;
    const double C107270 = C107107 / q;
    const double C101989 = C56552 + zAB * C55118;
    const double C102727 = C56552 + yAB * C55604;
    const double C107275 = C107117 / q;
    const double C53323 = C53371 / q - (C53354 * C107246) / q - C107261;
    const double C103398 = C107160 - (C56288 * C107245) / q - C107261;
    const double C58047 =
        C57144 / C104264 - (C58164 * C107246) / q + C107182 - C107183 / q;
    const double C103343 = -(C55954 * C107245 + C107183) / q;
    const double C107289 = C107151 / q;
    const double C103462 = -(C56759 * C107245 + C107151) / q;
    const double C6106 = C101923 + xAB * C101841;
    const double C7766 = C101923 + yAB * C102307;
    const double C5832 = C101854 + yAB * C101855;
    const double C7131 = C102163 + xAB * C102082;
    const double C7961 = C102351 + zAB * C102352;
    const double C9455 = C102351 + yAB * C102565;
    const double C10285 = C102351 + xAB * C102781;
    const double C7379 = C102217 + xAB * C102145;
    const double C9039 = C102217 + zAB * C102583;
    const double C7519 = C102247 + yAB * C102138;
    const double C10009 = C102247 + zAB * C102793;
    const double C102187 = C58224 + zAB * C56788;
    const double C107274 = C107114 / q;
    const double C102223 = C58460 + zAB * C57263;
    const double C107276 = C107103 / q;
    const double C53817 = -(C53848 * C107246 + C107103) / q;
    const double C7326 = C102205 + xAB * C102131;
    const double C8986 = C102205 + zAB * C102571;
    const double C107290 = C107157 / q;
    const double C103355 = -(C56017 * C107245 + C107157) / q;
    const double C58284 = C107186 - (C58399 * C107246) / q - C107187 / q;
    const double C103742 = -(C58636 * C107245 + C107187) / q;
    const double C102229 = C58521 + zAB * C57324;
    const double C107286 = C107145 / q;
    const double C7297 = C102199 + xAB * C102124;
    const double C8957 = C102199 + zAB * C102565;
    const double C7021 = C102137 + zAB * C102138;
    const double C7047 = C102144 + zAB * C102145;
    const double C7463 = C102235 + yAB * C102124;
    const double C9953 = C102235 + zAB * C102781;
    const double C101565 = C52392 + xAB * C52407;
    const double C101621 = C102992 + yAB * C102932;
    const double C102281 = C102992 + xAB * C103794;
    const double C101572 = C52573 + xAB * C52588;
    const double C101670 = C103068 + zAB * C102945;
    const double C102498 = C103068 + xAB * C103959;
    const double C55101 = C107130 - (C55134 * C107245) / q - (C61521 * p) / q;
    const double C107083 = C72416 * p;
    const double C55712 =
        C57439 / q - (C55954 * C107246) / q + C107137 - (C74074 * p) / q;
    const double C107133 = C85768 * p;
    const double C101607 = C53067 + yAB * C52407;
    const double C102267 = C53067 + xAB * C58756;
    const double C101813 = C103215 + xAB * C103221;
    const double C102319 = C103215 + yAB * C103794;
    const double C101848 = C55361 + yAB * C54877;
    const double C101911 = C56002 + zAB * C55025;
    const double C102763 = C56002 + yAB * C59586;
    const double C101806 = C54862 + xAB * C54877;
    const double C102313 = C54862 + yAB * C58813;
    const double C102373 = C59119 + zAB * C58885;
    const double C102547 = C59119 + yAB * C59353;
    const double C102721 = C59119 + xAB * C59586;
    const double C5911 = C101875 + zAB * C101876;
    const double C10393 = C101875 + yAB * C102769;
    const double C6741 = C102067 + yAB * C102068;
    const double C53543 = C107094 - (C53783 * C107246) / q - C107264;
    const double C103678 = C57439 / C104264 - (C58164 * C107245) / q - C107264;
    const double C53170 = C107079 - (C53354 * C107250) / q - C107257;
    const double C54577 = C53865 / C104264 - (C54593 * C107246) / q - C107257;
    const double C103430 = C56033 / C104264 - (C56523 * C107245) / q - C107257;
    const double C101614 = C53186 + yAB * C52588;
    const double C102274 = C53186 + xAB * C58813;
    const double C102366 = C103892 + zAB * C103805;
    const double C102540 = C103892 + yAB * C103959;
    const double C102714 = C103892 + xAB * C104141;
    const double C57498 = C107177 - (C57531 * C107245) / q - (C62664 * p) / q;
    const double C107100 = C75159 * p;
    const double C57623 = C107177 - (C57863 * C107246) / q - (C74847 * p) / q;
    const double C107140 = C86137 * p;
    const double C101656 = C53680 + zAB * C52588;
    const double C102484 = C53680 + xAB * C59280;
    const double C102054 = C103515 + xAB * C103521;
    const double C102577 = C103515 + zAB * C103959;
    const double C101890 = C55851 + zAB * C54877;
    const double C102742 = C55851 + yAB * C59514;
    const double C102103 = C57454 + yAB * C57189;
    const double C102799 = C57454 + zAB * C59586;
    const double C7073 = C102151 + xAB * C102068;
    const double C7903 = C102337 + zAB * C102338;
    const double C9397 = C102337 + yAB * C102553;
    const double C10227 = C102337 + xAB * C102769;
    const double C54029 = C107106 - (C54119 * C107250) / q - C107271;
    const double C103174 = C107158 - (C54593 * C107245) / q - C107271;
    const double C101749 = C54339 + zAB * C52801;
    const double C102504 = C54339 + xAB * C53833;
    const double C6243 = C101953 + xAB * C101876;
    const double C8401 = C101953 + yAB * C102338;
    const double C8733 = C102511 + yAB * C102512;
    const double C10061 = C102511 + xAB * C102728;
    const double C54208 = C107112 - (C54323 * C107246) / q - C107273;
    const double C103168 = C107155 - (C54561 * C107245) / q - C107273;
    const double C101713 = C54103 + yAB * C52801;
    const double C102294 = C54103 + xAB * C53339;
    const double C101627 = C103003 + yAB * C103004;
    const double C101819 = C103003 + xAB * C103227;
    const double C4749 = C101599 + yAB * C101600;
    const double C8069 = C101599 + xAB * C102301;
    const double C5579 = C101791 + xAB * C101792;
    const double C52376 = C107057 - (C52738 * C107246) / q - C107247;
    const double C103104 =
        (3 * C53307) / C104264 - (C54088 * C107245) / q - C107247;
    const double C4915 = C101641 + zAB * C101642;
    const double C9231 = C101641 + xAB * C102553;
    const double C6575 = C102025 + xAB * C102026;
    const double C52557 = C107057 - (C52832 * C107250) / q - C107251;
    const double C103142 =
        (3 * C53865) / C104264 - (C54355 * C107245) / q - C107251;
    const double C6077 = C101917 + xAB * C101834;
    const double C7737 = C101917 + yAB * C102301;
    const double C53971 =
        C52754 / C104264 - (C54088 * C107246) / q + C107106 - C107270;
    const double C102991 = C54980 / q - (C53290 * C107245) / q - C107270;
    const double C6409 = C101989 + yAB * C101876;
    const double C9729 = C102727 + yAB * C102728;
    const double C54446 =
        C53800 / C104264 - (C54561 * C107246) / q + C107115 - C107275;
    const double C103424 = C55970 / C104264 - (C56492 * C107245) / q - C107275;
    const double C101634 = C53323 + yAB * C53339;
    const double C101826 = C53323 + xAB * C55010;
    const double C101941 = C103398 + yAB * C103227;
    const double C102157 = C58047 + yAB * C56908;
    const double C102344 = C58047 + zAB * C58990;
    const double C101896 = C103343 + zAB * C103344;
    const double C102088 = C103343 + yAB * C103567;
    const double C56198 = C107149 - (C56288 * C107250) / q - C107289;
    const double C56507 = C107158 - (C56523 * C107246) / q - C107289;
    const double C102013 = C103462 + zAB * C103292;
    const double C102755 = C103462 + yAB * C103356;
    const double C7239 = C102187 + xAB * C102110;
    const double C8899 = C102187 + zAB * C102553;
    const double C54266 = C107109 - (C54355 * C107250) / q + C107112 - C107274;
    const double C103067 = C57204 / q - (C53848 * C107245) / q - C107274;
    const double C7405 = C102223 + yAB * C102110;
    const double C9895 = C102223 + zAB * C102769;
    const double C54504 =
        C53371 / C104264 - (C54593 * C107250) / q + C107115 - C107276;
    const double C103684 = C57469 / C104264 - (C58195 * C107245) / q - C107276;
    const double C101676 = C53817 + zAB * C53833;
    const double C102060 = C53817 + xAB * C57174;
    const double C56435 =
        C55040 / C104264 - (C56523 * C107250) / q + C107154 - C107290;
    const double C58179 = C57204 / C104264 - (C58195 * C107246) / q - C107290;
    const double C101903 = C103355 + zAB * C103356;
    const double C102095 = C103355 + yAB * C103578;
    const double C102193 = C58284 + zAB * C56908;
    const double C102241 = C103742 + zAB * C103567;
    const double C7434 = C102229 + yAB * C102117;
    const double C9924 = C102229 + zAB * C102775;
    const double C55986 = C57469 / q - (C56017 * C107246) / q - C107286;
    const double C56671 = C107160 - (C56759 * C107250) / q + C107159 - C107286;
    const double C101833 = C55101 + yAB * C55118;
    const double C107255 = C107083 / q;
    const double C101882 = C55712 + zAB * C55728;
    const double C102074 = C55712 + yAB * C57324;
    const double C107281 = C107133 / q;
    const double C101648 = C53543 + zAB * C53559;
    const double C102032 = C53543 + xAB * C56908;
    const double C102169 = C103678 + yAB * C103503;
    const double C102358 = C103678 + zAB * C103881;
    const double C101613 = C53170 + yAB * C53186;
    const double C101805 = C53170 + xAB * C54862;
    const double C101785 = C54577 + zAB * C53339;
    const double C102619 = C54577 + yAB * C53833;
    const double C102720 = C54577 + xAB * C59119;
    const double C101977 = C103430 + zAB * C103227;
    const double C102539 = C103430 + yAB * C103892;
    const double C102109 = C57498 + zAB * C57515;
    const double C107266 = C107100 / q;
    const double C102116 = C57623 + zAB * C57639;
    const double C107283 = C107140 / q;
    const double C101695 = C54029 + yAB * C52573;
    const double C102273 = C54029 + xAB * C53186;
    const double C101779 = C103174 + zAB * C103004;
    const double C102613 = C103174 + yAB * C103068;
    const double C102713 = C103174 + xAB * C103892;
    const double C5387 = C101749 + xAB * C101677;
    const double C8707 = C102504 + xAB * C102505;
    const double C101725 = C54208 + zAB * C52392;
    const double C102476 = C54208 + xAB * C53559;
    const double C101773 = C103168 + zAB * C102992;
    const double C102607 = C103168 + yAB * C103056;
    const double C102706 = C103168 + xAB * C103881;
    const double C5221 = C101713 + xAB * C101635;
    const double C7711 = C102294 + xAB * C102295;
    const double C4863 = C101627 + yAB * C101628;
    const double C8183 = C101627 + xAB * C102325;
    const double C5693 = C101819 + xAB * C101820;
    const double C101564 = C52376 + xAB * C52392;
    const double C101701 = C103104 + yAB * C102926;
    const double C102280 = C103104 + xAB * C102992;
    const double C101571 = C52557 + xAB * C52573;
    const double C101743 = C103142 + zAB * C102939;
    const double C102497 = C103142 + xAB * C103068;
    const double C101689 = C53971 + yAB * C52392;
    const double C102266 = C53971 + xAB * C53067;
    const double C101620 = C102991 + yAB * C102992;
    const double C101812 = C102991 + xAB * C103215;
    const double C101761 = C54446 + zAB * C53067;
    const double C102595 = C54446 + yAB * C53559;
    const double C102692 = C54446 + xAB * C58990;
    const double C101971 = C103424 + zAB * C103215;
    const double C102532 = C103424 + yAB * C103881;
    const double C4889 = C101634 + yAB * C101635;
    const double C8209 = C101634 + xAB * C102331;
    const double C5719 = C101826 + xAB * C101827;
    const double C6191 = C101941 + xAB * C101862;
    const double C7851 = C101941 + yAB * C102325;
    const double C7102 = C102157 + xAB * C102075;
    const double C7932 = C102344 + zAB * C102345;
    const double C9426 = C102344 + yAB * C102559;
    const double C10256 = C102344 + xAB * C102775;
    const double C5998 = C101896 + zAB * C101897;
    const double C10480 = C101896 + yAB * C102787;
    const double C6828 = C102088 + yAB * C102089;
    const double C101929 = C56198 + yAB * C54862;
    const double C101983 = C56507 + zAB * C55010;
    const double C102546 = C56507 + yAB * C59119;
    const double C6523 = C102013 + yAB * C101904;
    const double C9843 = C102755 + yAB * C102756;
    const double C101731 = C54266 + zAB * C52573;
    const double C102483 = C54266 + xAB * C53680;
    const double C101669 = C103067 + zAB * C103068;
    const double C102053 = C103067 + xAB * C103515;
    const double C101767 = C54504 + zAB * C53186;
    const double C102601 = C54504 + yAB * C53680;
    const double C102699 = C54504 + xAB * C59047;
    const double C102175 = C103684 + yAB * C103515;
    const double C102365 = C103684 + zAB * C103892;
    const double C5055 = C101676 + zAB * C101677;
    const double C9371 = C101676 + xAB * C102583;
    const double C6715 = C102060 + xAB * C102061;
    const double C101965 = C56435 + zAB * C54862;
    const double C102525 = C56435 + yAB * C59047;
    const double C102181 = C58179 + yAB * C57174;
    const double C102372 = C58179 + zAB * C59119;
    const double C6025 = C101903 + zAB * C101904;
    const double C10507 = C101903 + yAB * C102793;
    const double C6855 = C102095 + yAB * C102096;
    const double C7268 = C102193 + xAB * C102117;
    const double C8928 = C102193 + zAB * C102559;
    const double C7492 = C102241 + yAB * C102131;
    const double C9982 = C102241 + zAB * C102787;
    const double C101910 = C55986 + zAB * C56002;
    const double C102102 = C55986 + yAB * C57454;
    const double C102001 = C56671 + zAB * C55361;
    const double C102741 = C56671 + yAB * C55851;
    const double C5745 = C101833 + yAB * C101834;
    const double C53051 =
        C53307 / q - (C53290 * C107246) / q + C107079 - C107255;
    const double C103392 = C55481 / C104264 - (C56257 * C107245) / q - C107255;
    const double C5940 = C101882 + zAB * C101883;
    const double C10422 = C101882 + yAB * C102775;
    const double C6770 = C102074 + yAB * C102075;
    const double C55345 = C107130 - (C55527 * C107250) / q - C107281;
    const double C56743 =
        (3 * C56033) / C104264 - (C56759 * C107246) / q - C107281;
    const double C4944 = C101648 + zAB * C101649;
    const double C9260 = C101648 + xAB * C102559;
    const double C6604 = C102032 + xAB * C102033;
    const double C7160 = C102169 + xAB * C102089;
    const double C7990 = C102358 + zAB * C102359;
    const double C9484 = C102358 + yAB * C102571;
    const double C10314 = C102358 + xAB * C102787;
    const double C4807 = C101613 + yAB * C101614;
    const double C8127 = C101613 + xAB * C102313;
    const double C5637 = C101805 + xAB * C101806;
    const double C5553 = C101785 + yAB * C101677;
    const double C8375 = C101785 + xAB * C102373;
    const double C9205 = C102619 + xAB * C102547;
    const double C9703 = C102720 + xAB * C102721;
    const double C6357 = C101977 + xAB * C101904;
    const double C8515 = C101977 + yAB * C102366;
    const double C8847 = C102539 + yAB * C102540;
    const double C10175 = C102539 + xAB * C102756;
    const double C6907 = C102109 + zAB * C102110;
    const double C53664 =
        C53865 / q - (C53848 * C107250) / q + C107094 - C107266;
    const double C103716 = C107191 - (C58431 * C107245) / q - C107266;
    const double C6936 = C102116 + zAB * C102117;
    const double C55835 =
        C56033 / q - (C56017 * C107250) / q + C107137 - C107283;
    const double C58651 = C107191 - (C58667 * C107246) / q - C107283;
    const double C5139 = C101695 + xAB * C101614;
    const double C7629 = C102273 + xAB * C102274;
    const double C5527 = C101779 + yAB * C101670;
    const double C8349 = C101779 + xAB * C102366;
    const double C9179 = C102613 + xAB * C102540;
    const double C9677 = C102713 + xAB * C102714;
    const double C5276 = C101725 + xAB * C101649;
    const double C8596 = C102476 + xAB * C102477;
    const double C5500 = C101773 + yAB * C101663;
    const double C8322 = C101773 + xAB * C102359;
    const double C9152 = C102607 + xAB * C102533;
    const double C9650 = C102706 + xAB * C102707;
    const double C4612 = C101564 + xAB * C101565;
    const double C5168 = C101701 + xAB * C101621;
    const double C7658 = C102280 + xAB * C102281;
    const double C4641 = C101571 + xAB * C101572;
    const double C5361 = C101743 + xAB * C101670;
    const double C8681 = C102497 + xAB * C102498;
    const double C5110 = C101689 + xAB * C101607;
    const double C7600 = C102266 + xAB * C102267;
    const double C4836 = C101620 + yAB * C101621;
    const double C8156 = C101620 + xAB * C102319;
    const double C5666 = C101812 + xAB * C101813;
    const double C5442 = C101761 + yAB * C101649;
    const double C8264 = C101761 + xAB * C102345;
    const double C9094 = C102595 + xAB * C102519;
    const double C9592 = C102692 + xAB * C102693;
    const double C6330 = C101971 + xAB * C101897;
    const double C8488 = C101971 + yAB * C102359;
    const double C8820 = C102532 + yAB * C102533;
    const double C10148 = C102532 + xAB * C102749;
    const double C6135 = C101929 + xAB * C101848;
    const double C7795 = C101929 + yAB * C102313;
    const double C6383 = C101983 + xAB * C101911;
    const double C8541 = C101983 + yAB * C102373;
    const double C8873 = C102546 + yAB * C102547;
    const double C10201 = C102546 + xAB * C102763;
    const double C5305 = C101731 + xAB * C101656;
    const double C8625 = C102483 + xAB * C102484;
    const double C5029 = C101669 + zAB * C101670;
    const double C9345 = C101669 + xAB * C102577;
    const double C6689 = C102053 + xAB * C102054;
    const double C5471 = C101767 + yAB * C101656;
    const double C8293 = C101767 + xAB * C102352;
    const double C9123 = C102601 + xAB * C102526;
    const double C9621 = C102699 + xAB * C102700;
    const double C7187 = C102175 + xAB * C102096;
    const double C8017 = C102365 + zAB * C102366;
    const double C9511 = C102365 + yAB * C102577;
    const double C10341 = C102365 + xAB * C102793;
    const double C6301 = C101965 + xAB * C101890;
    const double C8459 = C101965 + yAB * C102352;
    const double C8791 = C102525 + yAB * C102526;
    const double C10119 = C102525 + xAB * C102742;
    const double C7213 = C102181 + xAB * C102103;
    const double C8043 = C102372 + zAB * C102373;
    const double C9537 = C102372 + yAB * C102583;
    const double C10367 = C102372 + xAB * C102799;
    const double C6051 = C101910 + zAB * C101911;
    const double C10533 = C101910 + yAB * C102799;
    const double C6881 = C102102 + yAB * C102103;
    const double C6467 = C102001 + yAB * C101890;
    const double C9787 = C102741 + yAB * C102742;
    const double C101606 = C53051 + yAB * C53067;
    const double C101798 = C53051 + xAB * C54743;
    const double C101935 = C103392 + yAB * C103215;
    const double C101847 = C55345 + yAB * C55361;
    const double C102019 = C56743 + zAB * C55512;
    const double C102762 = C56743 + yAB * C56002;
    const double C101655 = C53664 + zAB * C53680;
    const double C102039 = C53664 + xAB * C57025;
    const double C102211 = C103716 + zAB * C103515;
    const double C101889 = C55835 + zAB * C55851;
    const double C102081 = C55835 + yAB * C57381;
    const double C102253 = C58651 + zAB * C57454;
    const double C4778 = C101606 + yAB * C101607;
    const double C8098 = C101606 + xAB * C102307;
    const double C5608 = C101798 + xAB * C101799;
    const double C6164 = C101935 + xAB * C101855;
    const double C7824 = C101935 + yAB * C102319;
    const double C5803 = C101847 + yAB * C101848;
    const double C6549 = C102019 + yAB * C101911;
    const double C9869 = C102762 + yAB * C102763;
    const double C4973 = C101655 + zAB * C101656;
    const double C9289 = C101655 + xAB * C102565;
    const double C6633 = C102039 + xAB * C102040;
    const double C7353 = C102211 + xAB * C102138;
    const double C9013 = C102211 + zAB * C102577;
    const double C5969 = C101889 + zAB * C101890;
    const double C10451 = C101889 + yAB * C102781;
    const double C6799 = C102081 + yAB * C102082;
    const double C7545 = C102253 + yAB * C102145;
    const double C10035 = C102253 + zAB * C102799;
    g[0] = C4583;
    g[1] = C4612;
    g[2] = C4641;
    g[3] = C4670;
    g[4] = C4697;
    g[5] = C4723;
    g[6] = C4749;
    g[7] = C4778;
    g[8] = C4807;
    g[9] = C4836;
    g[10] = C4863;
    g[11] = C4889;
    g[12] = C4915;
    g[13] = C4944;
    g[14] = C4973;
    g[15] = C5002;
    g[16] = C5029;
    g[17] = C5055;
    g[18] = C5081;
    g[19] = C5110;
    g[20] = C5139;
    g[21] = C5168;
    g[22] = C5195;
    g[23] = C5221;
    g[24] = C5247;
    g[25] = C5276;
    g[26] = C5305;
    g[27] = C5334;
    g[28] = C5361;
    g[29] = C5387;
    g[30] = C5413;
    g[31] = C5442;
    g[32] = C5471;
    g[33] = C5500;
    g[34] = C5527;
    g[35] = C5553;
    g[36] = C5579;
    g[37] = C5608;
    g[38] = C5637;
    g[39] = C5666;
    g[40] = C5693;
    g[41] = C5719;
    g[42] = C5745;
    g[43] = C5774;
    g[44] = C5803;
    g[45] = C5832;
    g[46] = C5859;
    g[47] = C5885;
    g[48] = C5911;
    g[49] = C5940;
    g[50] = C5969;
    g[51] = C5998;
    g[52] = C6025;
    g[53] = C6051;
    g[54] = C6077;
    g[55] = C6106;
    g[56] = C6135;
    g[57] = C6164;
    g[58] = C6191;
    g[59] = C6217;
    g[60] = C6243;
    g[61] = C6272;
    g[62] = C6301;
    g[63] = C6330;
    g[64] = C6357;
    g[65] = C6383;
    g[66] = C6409;
    g[67] = C6438;
    g[68] = C6467;
    g[69] = C6496;
    g[70] = C6523;
    g[71] = C6549;
    g[72] = C6575;
    g[73] = C6604;
    g[74] = C6633;
    g[75] = C6662;
    g[76] = C6689;
    g[77] = C6715;
    g[78] = C6741;
    g[79] = C6770;
    g[80] = C6799;
    g[81] = C6828;
    g[82] = C6855;
    g[83] = C6881;
    g[84] = C6907;
    g[85] = C6936;
    g[86] = C6965;
    g[87] = C6994;
    g[88] = C7021;
    g[89] = C7047;
    g[90] = C7073;
    g[91] = C7102;
    g[92] = C7131;
    g[93] = C7160;
    g[94] = C7187;
    g[95] = C7213;
    g[96] = C7239;
    g[97] = C7268;
    g[98] = C7297;
    g[99] = C7326;
    g[100] = C7353;
    g[101] = C7379;
    g[102] = C7405;
    g[103] = C7434;
    g[104] = C7463;
    g[105] = C7492;
    g[106] = C7519;
    g[107] = C7545;
    g[108] = C7571;
    g[109] = C7600;
    g[110] = C7629;
    g[111] = C7658;
    g[112] = C7685;
    g[113] = C7711;
    g[114] = C7737;
    g[115] = C7766;
    g[116] = C7795;
    g[117] = C7824;
    g[118] = C7851;
    g[119] = C7877;
    g[120] = C7903;
    g[121] = C7932;
    g[122] = C7961;
    g[123] = C7990;
    g[124] = C8017;
    g[125] = C8043;
    g[126] = C8069;
    g[127] = C8098;
    g[128] = C8127;
    g[129] = C8156;
    g[130] = C8183;
    g[131] = C8209;
    g[132] = C8235;
    g[133] = C8264;
    g[134] = C8293;
    g[135] = C8322;
    g[136] = C8349;
    g[137] = C8375;
    g[138] = C8401;
    g[139] = C8430;
    g[140] = C8459;
    g[141] = C8488;
    g[142] = C8515;
    g[143] = C8541;
    g[144] = C8567;
    g[145] = C8596;
    g[146] = C8625;
    g[147] = C8654;
    g[148] = C8681;
    g[149] = C8707;
    g[150] = C8733;
    g[151] = C8762;
    g[152] = C8791;
    g[153] = C8820;
    g[154] = C8847;
    g[155] = C8873;
    g[156] = C8899;
    g[157] = C8928;
    g[158] = C8957;
    g[159] = C8986;
    g[160] = C9013;
    g[161] = C9039;
    g[162] = C9065;
    g[163] = C9094;
    g[164] = C9123;
    g[165] = C9152;
    g[166] = C9179;
    g[167] = C9205;
    g[168] = C9231;
    g[169] = C9260;
    g[170] = C9289;
    g[171] = C9318;
    g[172] = C9345;
    g[173] = C9371;
    g[174] = C9397;
    g[175] = C9426;
    g[176] = C9455;
    g[177] = C9484;
    g[178] = C9511;
    g[179] = C9537;
    g[180] = C9563;
    g[181] = C9592;
    g[182] = C9621;
    g[183] = C9650;
    g[184] = C9677;
    g[185] = C9703;
    g[186] = C9729;
    g[187] = C9758;
    g[188] = C9787;
    g[189] = C9816;
    g[190] = C9843;
    g[191] = C9869;
    g[192] = C9895;
    g[193] = C9924;
    g[194] = C9953;
    g[195] = C9982;
    g[196] = C10009;
    g[197] = C10035;
    g[198] = C10061;
    g[199] = C10090;
    g[200] = C10119;
    g[201] = C10148;
    g[202] = C10175;
    g[203] = C10201;
    g[204] = C10227;
    g[205] = C10256;
    g[206] = C10285;
    g[207] = C10314;
    g[208] = C10341;
    g[209] = C10367;
    g[210] = C10393;
    g[211] = C10422;
    g[212] = C10451;
    g[213] = C10480;
    g[214] = C10507;
    g[215] = C10533;
    g[216] = C52189;
    g[217] = C52206;
    g[218] = C52222;
    g[219] = C52239;
    g[220] = C52256;
    g[221] = C52273;
    g[222] = C52376;
    g[223] = C52392;
    g[224] = C52407;
    g[225] = C52557;
    g[226] = C52573;
    g[227] = C52588;
    g[228] = C52738;
    g[229] = C52754;
    g[230] = C52769;
    g[231] = C52785;
    g[232] = C52801;
    g[233] = C52816;
    g[234] = C52832;
    g[235] = C52848;
    g[236] = C52863;
    g[237] = C52924;
    g[238] = C52941;
    g[239] = C52957;
    g[240] = C52975;
    g[241] = C53051;
    g[242] = C53067;
    g[243] = C53170;
    g[244] = C53186;
    g[245] = C53290;
    g[246] = C53307;
    g[247] = C53323;
    g[248] = C53339;
    g[249] = C53354;
    g[250] = C53371;
    g[251] = C53416;
    g[252] = C53433;
    g[253] = C53449;
    g[254] = C53467;
    g[255] = C53543;
    g[256] = C53559;
    g[257] = C53664;
    g[258] = C53680;
    g[259] = C53783;
    g[260] = C53800;
    g[261] = C53817;
    g[262] = C53833;
    g[263] = C53848;
    g[264] = C53865;
    g[265] = C53910;
    g[266] = C53925;
    g[267] = C53971;
    g[268] = C54029;
    g[269] = C54088;
    g[270] = C54103;
    g[271] = C54119;
    g[272] = C54148;
    g[273] = C54163;
    g[274] = C54208;
    g[275] = C54266;
    g[276] = C54323;
    g[277] = C54339;
    g[278] = C54355;
    g[279] = C54384;
    g[280] = C54400;
    g[281] = C54446;
    g[282] = C54504;
    g[283] = C54561;
    g[284] = C54577;
    g[285] = C54593;
    g[286] = C54623;
    g[287] = C54638;
    g[288] = C54654;
    g[289] = C54670;
    g[290] = C54743;
    g[291] = C54758;
    g[292] = C54862;
    g[293] = C54877;
    g[294] = C54980;
    g[295] = C54995;
    g[296] = C55010;
    g[297] = C55025;
    g[298] = C55040;
    g[299] = C55055;
    g[300] = C55101;
    g[301] = C55118;
    g[302] = C55134;
    g[303] = C55151;
    g[304] = C55226;
    g[305] = C55242;
    g[306] = C55345;
    g[307] = C55361;
    g[308] = C55465;
    g[309] = C55481;
    g[310] = C55496;
    g[311] = C55512;
    g[312] = C55527;
    g[313] = C55543;
    g[314] = C55587;
    g[315] = C55604;
    g[316] = C55620;
    g[317] = C55637;
    g[318] = C55712;
    g[319] = C55728;
    g[320] = C55835;
    g[321] = C55851;
    g[322] = C55954;
    g[323] = C55970;
    g[324] = C55986;
    g[325] = C56002;
    g[326] = C56017;
    g[327] = C56033;
    g[328] = C56079;
    g[329] = C56094;
    g[330] = C56140;
    g[331] = C56198;
    g[332] = C56257;
    g[333] = C56272;
    g[334] = C56288;
    g[335] = C56317;
    g[336] = C56332;
    g[337] = C56377;
    g[338] = C56435;
    g[339] = C56492;
    g[340] = C56507;
    g[341] = C56523;
    g[342] = C56552;
    g[343] = C56568;
    g[344] = C56613;
    g[345] = C56671;
    g[346] = C56728;
    g[347] = C56743;
    g[348] = C56759;
    g[349] = C56788;
    g[350] = C56803;
    g[351] = C56819;
    g[352] = C56835;
    g[353] = C56908;
    g[354] = C56923;
    g[355] = C57025;
    g[356] = C57040;
    g[357] = C57144;
    g[358] = C57159;
    g[359] = C57174;
    g[360] = C57189;
    g[361] = C57204;
    g[362] = C57219;
    g[363] = C57263;
    g[364] = C57279;
    g[365] = C57324;
    g[366] = C57381;
    g[367] = C57439;
    g[368] = C57454;
    g[369] = C57469;
    g[370] = C57498;
    g[371] = C57515;
    g[372] = C57531;
    g[373] = C57548;
    g[374] = C57623;
    g[375] = C57639;
    g[376] = C57744;
    g[377] = C57760;
    g[378] = C57863;
    g[379] = C57879;
    g[380] = C57895;
    g[381] = C57911;
    g[382] = C57926;
    g[383] = C57942;
    g[384] = C57986;
    g[385] = C58001;
    g[386] = C58047;
    g[387] = C58105;
    g[388] = C58164;
    g[389] = C58179;
    g[390] = C58195;
    g[391] = C58224;
    g[392] = C58239;
    g[393] = C58284;
    g[394] = C58342;
    g[395] = C58399;
    g[396] = C58415;
    g[397] = C58431;
    g[398] = C58460;
    g[399] = C58476;
    g[400] = C58521;
    g[401] = C58579;
    g[402] = C58636;
    g[403] = C58651;
    g[404] = C58667;
    g[405] = C58696;
    g[406] = C58711;
    g[407] = C58756;
    g[408] = C58813;
    g[409] = C58870;
    g[410] = C58885;
    g[411] = C58901;
    g[412] = C58930;
    g[413] = C58945;
    g[414] = C58990;
    g[415] = C59047;
    g[416] = C59104;
    g[417] = C59119;
    g[418] = C59134;
    g[419] = C59163;
    g[420] = C59178;
    g[421] = C59223;
    g[422] = C59280;
    g[423] = C59337;
    g[424] = C59353;
    g[425] = C59369;
    g[426] = C59398;
    g[427] = C59413;
    g[428] = C59457;
    g[429] = C59514;
    g[430] = C59571;
    g[431] = C59586;
    g[432] = C59601;
    g[433] = C59630;
    g[434] = C59646;
    g[435] = C59662;
    g[436] = C59676;
    g[437] = C59693;
    g[438] = C59708;
    g[439] = C59723;
    g[440] = C59739;
    g[441] = C59756;
    g[442] = C60194;
    g[443] = C60209;
    g[444] = C60225;
    g[445] = C60240;
    g[446] = C60255;
    g[447] = C60270;
    g[448] = C60286;
    g[449] = C60301;
    g[450] = C60318;
    g[451] = C60614;
    g[452] = C60629;
    g[453] = C60645;
    g[454] = C60660;
    g[455] = C60675;
    g[456] = C60690;
    g[457] = C60706;
    g[458] = C60721;
    g[459] = C60737;
    g[460] = C61059;
    g[461] = C61074;
    g[462] = C61148;
    g[463] = C61205;
    g[464] = C61220;
    g[465] = C61235;
    g[466] = C61306;
    g[467] = C61321;
    g[468] = C61506;
    g[469] = C61521;
    g[470] = C61537;
    g[471] = C61552;
    g[472] = C61567;
    g[473] = C61582;
    g[474] = C61600;
    g[475] = C61841;
    g[476] = C61856;
    g[477] = C61872;
    g[478] = C61887;
    g[479] = C61902;
    g[480] = C61917;
    g[481] = C61934;
    g[482] = C62257;
    g[483] = C62272;
    g[484] = C62346;
    g[485] = C62389;
    g[486] = C62404;
    g[487] = C62447;
    g[488] = C62462;
    g[489] = C62604;
    g[490] = C62619;
    g[491] = C62649;
    g[492] = C62664;
    g[493] = C62680;
    g[494] = C62695;
    g[495] = C62710;
    g[496] = C62725;
    g[497] = C62742;
    g[498] = C63010;
    g[499] = C63025;
    g[500] = C63098;
    g[501] = C63155;
    g[502] = C63170;
    g[503] = C63213;
    g[504] = C63241;
    g[505] = C63256;
    g[506] = C63299;
    g[507] = C63315;
    g[508] = C63330;
    g[509] = C63346;
    g[510] = C63467;
    g[511] = C63482;
    g[512] = C63497;
    g[513] = C63617;
    g[514] = C63632;
    g[515] = C63647;
    g[516] = C63764;
    g[517] = C63821;
    g[518] = C63836;
    g[519] = C63851;
    g[520] = C63866;
    g[521] = C63881;
    g[522] = C64001;
    g[523] = C64016;
    g[524] = C64031;
    g[525] = C64046;
    g[526] = C64061;
    g[527] = C64178;
    g[528] = C64235;
    g[529] = C64250;
    g[530] = C64265;
    g[531] = C64280;
    g[532] = C64295;
    g[533] = C64426;
    g[534] = C71812;
    g[535] = C71828;
    g[536] = C71929;
    g[537] = C71945;
    g[538] = C72135;
    g[539] = C72151;
    g[540] = C72371;
    g[541] = C72416;
    g[542] = C72432;
    g[543] = C72580;
    g[544] = C72785;
    g[545] = C72857;
    g[546] = C72873;
    g[547] = C73020;
    g[548] = C73123;
    g[549] = C73167;
    g[550] = C73225;
    g[551] = C73310;
    g[552] = C73422;
    g[553] = C73643;
    g[554] = C73688;
    g[555] = C73704;
    g[556] = C73824;
    g[557] = C73974;
    g[558] = C74074;
    g[559] = C74090;
    g[560] = C74209;
    g[561] = C74312;
    g[562] = C74356;
    g[563] = C74400;
    g[564] = C74457;
    g[565] = C74528;
    g[566] = C74775;
    g[567] = C74847;
    g[568] = C74863;
    g[569] = C74983;
    g[570] = C75058;
    g[571] = C75102;
    g[572] = C75159;
    g[573] = C75216;
    g[574] = C75244;
    g[575] = C75301;
    g[576] = C75912;
    g[577] = C75928;
    g[578] = C76088;
    g[579] = C76103;
    g[580] = C76318;
    g[581] = C76347;
    g[582] = C85752;
    g[583] = C85768;
    g[584] = C86121;
    g[585] = C86137;
    g[586] = C86888;
    g[587] = C86904;
    g[588] = C88345;
    g[589] = C90335;
    g[590] = C90354;
    g[591] = C90369;
    g[592] = C90384;
    g[593] = C90413;
    g[594] = C90482;
    g[595] = C90564;
    g[596] = C90578;
    g[597] = C90606;
    g[598] = C90674;
    g[599] = C90688;
    g[600] = C90715;
    g[601] = C90729;
    g[602] = C90744;
    g[603] = C90771;
    g[604] = C90786;
    g[605] = C90800;
    g[606] = C90969;
    g[607] = C90998;
    g[608] = C91014;
    g[609] = C91044;
    g[610] = C91099;
    g[611] = C91114;
    g[612] = C91144;
    g[613] = C91172;
    g[614] = C91186;
    g[615] = C91200;
    g[616] = C91282;
    g[617] = C91296;
    g[618] = C91351;
    g[619] = C91366;
    g[620] = C91394;
    g[621] = C91408;
    g[622] = C91462;
    g[623] = C91476;
    g[624] = C91503;
    g[625] = C91639;
    g[626] = C91654;
    g[627] = C91696;
    g[628] = C91711;
    g[629] = C91740;
    g[630] = C91768;
    g[631] = C91797;
    g[632] = C91838;
    g[633] = C91880;
    g[634] = C91894;
    g[635] = C91936;
    g[636] = C91951;
    g[637] = C91992;
    g[638] = C92006;
    g[639] = C92022;
    g[640] = C92037;
    g[641] = C92058;
    g[642] = C92087;
    g[643] = C92220;
    g[644] = C92235;
    g[645] = C92302;
    g[646] = C92317;
    g[647] = C92332;
    g[648] = C92360;
    g[649] = C92389;
    g[650] = C92404;
    g[651] = C92433;
    g[652] = C92448;
    g[653] = C92490;
    g[654] = C92611;
    g[655] = C92680;
    g[656] = C92695;
    g[657] = C92724;
    g[658] = C92739;
    g[659] = C92754;
    g[660] = C92769;
    g[661] = C92784;
    g[662] = C92799;
    g[663] = C92907;
    g[664] = C92923;
    g[665] = C92998;
    g[666] = C93013;
    g[667] = C93042;
    g[668] = C93098;
    g[669] = C93112;
    g[670] = C93179;
    g[671] = C93219;
    g[672] = C93260;
    g[673] = C93330;
    g[674] = C93345;
    g[675] = C93373;
    g[676] = C93414;
    g[677] = C93462;
    g[678] = C93477;
    g[679] = C93561;
    g[680] = C93630;
    g[681] = C93657;
    g[682] = C93678;
    g[683] = C93693;
    g[684] = C93762;
    g[685] = C93812;
    g[686] = C93853;
    g[687] = C93903;
    g[688] = C94076;
    g[689] = C94445;
    g[690] = C94460;
    g[691] = C94529;
    g[692] = C94543;
    g[693] = C94628;
    g[694] = C94726;
    g[695] = C95128;
    g[696] = C95143;
    g[697] = C95185;
    g[698] = C95213;
    g[699] = C95268;
    g[700] = C95366;
    g[701] = C95632;
    g[702] = C95780;
    g[703] = C95929;
    g[704] = C95986;
    g[705] = C96149;
    g[706] = C96204;
    g[707] = C96274;
    g[708] = C96413;
    g[709] = C96515;
    g[710] = C96640;
    g[711] = C96868;
    g[712] = C97039;
    g[713] = C97054;
    g[714] = C97083;
    g[715] = C97266;
    g[716] = C97322;
    g[717] = C97412;
    g[718] = C98123;
    g[719] = C98196;
    g[720] = C98845;
    g[721] = C99572;
    g[722] = C99666;
    g[723] = C99762;
    g[724] = C99916;
    g[725] = C100072;
    g[726] = C100369;
    g[727] = C100384;
    g[728] = C100597;
    g[729] = C100821;
    g[730] = C100864;
    g[731] = C100954;
}
