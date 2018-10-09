/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_3_vr(const double ae,
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
                            const double* const g,
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C32510 = g[37];
    const double C32529 = g[38];
    const double C32543 = g[39];
    const double C32598 = g[40];
    const double C32666 = g[41];
    const double C32720 = g[42];
    const double C32734 = g[43];
    const double C32749 = g[44];
    const double C32783 = g[45];
    const double C32824 = g[46];
    const double C32853 = g[47];
    const double C32868 = g[48];
    const double C32883 = g[49];
    const double C32938 = g[50];
    const double C32952 = g[51];
    const double C32993 = g[52];
    const double C33015 = g[53];
    const double C33097 = g[54];
    const double C33112 = g[55];
    const double C33140 = g[56];
    const double C33214 = g[57];
    const double C33255 = g[58];
    const double C33305 = g[59];
    const double C33669 = g[60];
    const double C33867 = g[61];
    const double C33909 = g[62];
    const double C34091 = g[63];
    const double C34923 = g[64];
    const double C32513 = p + q;
    const double C32512 = p * q;
    const double C35010 = bs[5];
    const double C35009 = bs[4];
    const double C35007 = bs[3];
    const double C35005 = bs[2];
    const double C35001 = std::pow(Pi, 2.5);
    const double C35000 = ce * de;
    const double C34999 = bs[0];
    const double C34996 = bs[1];
    const double C34995 = zP - zQ;
    const double C34994 = be * zAB;
    const double C34993 = yP - yQ;
    const double C34992 = be * yAB;
    const double C34991 = 2 * p;
    const double C34989 = xP - xQ;
    const double C34988 = be * xAB;
    const double C32514 = C32513 * p;
    const double C35002 = std::sqrt(C32513);
    const double C34998 = q * C32513;
    const double C34997 = C32512 * ce;
    const double C34987 = C32513 * C32512;
    const double C34986 = ce * C32512;
    const double C35033 = 4 * C35001;
    const double C35032 = kab * C35000;
    const double C35026 = C34995 * C32512;
    const double C35025 = C34993 * C32512;
    const double C35021 = C34989 * C32512;
    const double C35034 = C32512 * C35002;
    const double C35031 = kab * C34997;
    const double C35053 = C33909 * C34986;
    const double C35048 = C33305 * C34986;
    const double C35046 = C33214 * C34986;
    const double C35045 = C33140 * C34986;
    const double C35044 = C33112 * C34986;
    const double C35043 = C33097 * C34986;
    const double C35041 = C32993 * C34986;
    const double C35040 = C32952 * C34986;
    const double C35039 = C32938 * C34986;
    const double C35038 = C32868 * C34986;
    const double C35035 = C32783 * C34986;
    const double C35030 = C32749 * C34986;
    const double C35029 = C32720 * C34986;
    const double C35028 = C32666 * C34986;
    const double C35027 = C32598 * C34986;
    const double C35024 = C32543 * C34986;
    const double C35023 = C32529 * C34986;
    const double C35068 = kcd * C35032;
    const double C35067 = kcd * C35031;
    const double C35087 = C35053 / C34987;
    const double C35082 = C35048 / C34987;
    const double C35080 = C35046 / C34987;
    const double C35079 = C35045 / C34987;
    const double C35078 = C35044 / C34987;
    const double C35077 = C35043 / C34987;
    const double C35075 = C35041 / C34987;
    const double C35074 = C35040 / C34987;
    const double C35073 = C35039 / C34987;
    const double C35072 = C35038 / C34987;
    const double C35069 = C35035 / C34987;
    const double C35066 = C35030 / C34987;
    const double C35065 = C35029 / C34987;
    const double C35064 = C35028 / C34987;
    const double C35063 = C35027 / C34987;
    const double C35062 = C35024 / C34987;
    const double C35061 = C35023 / C34987;
    const double C35107 = C35009 * C35068;
    const double C35105 = C35007 * C35068;
    const double C35102 = C35005 * C35068;
    const double C35099 = C34996 * C35068;
    const double C35096 = C34999 * C35068;
    const double C35106 = C35010 * C35067;
    const double C35104 = C35009 * C35067;
    const double C35101 = C35007 * C35067;
    const double C35098 = C35005 * C35067;
    const double C35095 = C34996 * C35067;
    const double C33309 =
        (((C34989 * C35106) / C34998 - (xCD * C35107) / q) * C35033) / C35034;
    const double C34131 =
        (((C34993 * C35106) / C34998 - (yCD * C35107) / q) * C35033) / C35034;
    const double C34950 =
        (((C34995 * C35106) / C34998 - (zCD * C35107) / q) * C35033) / C35034;
    const double C33218 =
        (((C34989 * C35104) / C34998 - (xCD * C35105) / q) * C35033) / C35034;
    const double C34041 =
        (((C34993 * C35104) / C34998 - (yCD * C35105) / q) * C35033) / C35034;
    const double C34860 =
        (((C34995 * C35104) / C34998 - (zCD * C35105) / q) * C35033) / C35034;
    const double C32997 =
        (((C34989 * C35101) / C34998 - (xCD * C35102) / q) * C35033) / C35034;
    const double C33830 =
        (((C34993 * C35101) / C34998 - (yCD * C35102) / q) * C35033) / C35034;
    const double C34651 =
        (((C34995 * C35101) / C34998 - (zCD * C35102) / q) * C35033) / C35034;
    const double C32518 =
        (((C34989 * C35098) / C34998 - (xCD * C35099) / q) * C35033) / C35034;
    const double C33357 =
        (((C34993 * C35098) / C34998 - (yCD * C35099) / q) * C35033) / C35034;
    const double C34179 =
        (((C34995 * C35098) / C34998 - (zCD * C35099) / q) * C35033) / C35034;
    const double C29237 =
        (((C34989 * C35095) / C34998 - (xCD * C35096) / q) * C35033) / C35034;
    const double C30544 =
        (((C34993 * C35095) / C34998 - (yCD * C35096) / q) * C35033) / C35034;
    const double C31846 =
        (((C34995 * C35095) / C34998 - (zCD * C35096) / q) * C35033) / C35034;
    const double C35008 = C33218 * C32512;
    const double C33259 =
        C35082 - (C33218 * C34988) / p - (C33309 * C35021) / C32514;
    const double C33273 = -((C33218 * C34992) / p + (C33309 * C35025) / C32514);
    const double C33287 = -((C33218 * C34994) / p + (C33309 * C35026) / C32514);
    const double C35015 = C34041 * C32512;
    const double C34081 = -((C34041 * C34988) / p + (C34131 * C35021) / C32514);
    const double C34096 =
        C35082 - (C34041 * C34992) / p - (C34131 * C35025) / C32514;
    const double C34110 = -((C34041 * C34994) / p + (C34131 * C35026) / C32514);
    const double C35020 = C34860 * C32512;
    const double C34900 = -((C34860 * C34988) / p + (C34950 * C35021) / C32514);
    const double C34914 = -((C34860 * C34992) / p + (C34950 * C35025) / C32514);
    const double C34929 =
        C35082 - (C34860 * C34994) / p - (C34950 * C35026) / C32514;
    const double C35006 = C32997 * C32512;
    const double C33019 =
        C35080 - (C32997 * C34988) / p - (C33218 * C35021) / C32514;
    const double C33046 = -((C32997 * C34992) / p + (C33218 * C35025) / C32514);
    const double C33073 = -((C32997 * C34994) / p + (C33218 * C35026) / C32514);
    const double C35014 = C33830 * C32512;
    const double C33844 = -((C33830 * C34988) / p + (C34041 * C35021) / C32514);
    const double C33872 =
        C35080 - (C33830 * C34992) / p - (C34041 * C35025) / C32514;
    const double C33899 = -((C33830 * C34994) / p + (C34041 * C35026) / C32514);
    const double C35019 = C34651 * C32512;
    const double C34665 = -((C34651 * C34988) / p + (C34860 * C35021) / C32514);
    const double C34692 = -((C34651 * C34992) / p + (C34860 * C35025) / C32514);
    const double C34719 =
        C35080 - (C34651 * C34994) / p - (C34860 * C35026) / C32514;
    const double C34990 = C32518 * C32512;
    const double C32517 =
        C35075 - (C32518 * C34988) / p - (C32997 * C35021) / C32514;
    const double C32587 = -((C32518 * C34992) / p + (C32997 * C35025) / C32514);
    const double C32655 = -((C32518 * C34994) / p + (C32997 * C35026) / C32514);
    const double C35011 = C33357 * C32512;
    const double C33358 = -((C33357 * C34988) / p + (C33830 * C35021) / C32514);
    const double C33425 =
        C35075 - (C33357 * C34992) / p - (C33830 * C35025) / C32514;
    const double C33492 = -((C33357 * C34994) / p + (C33830 * C35026) / C32514);
    const double C35016 = C34179 * C32512;
    const double C34180 = -((C34179 * C34988) / p + (C34651 * C35021) / C32514);
    const double C34247 = -((C34179 * C34992) / p + (C34651 * C35025) / C32514);
    const double C34314 =
        C35075 - (C34179 * C34994) / p - (C34651 * C35026) / C32514;
    const double C28439 =
        C35061 - (C29237 * C34988) / p - (C32518 * C35021) / C32514;
    const double C28624 = -((C29237 * C34992) / p + (C32518 * C35025) / C32514);
    const double C28809 = -((C29237 * C34994) / p + (C32518 * C35026) / C32514);
    const double C29753 = -((C30544 * C34988) / p + (C33357 * C35021) / C32514);
    const double C29937 =
        C35061 - (C30544 * C34992) / p - (C33357 * C35025) / C32514;
    const double C30121 = -((C30544 * C34994) / p + (C33357 * C35026) / C32514);
    const double C31055 = -((C31846 * C34988) / p + (C34179 * C35021) / C32514);
    const double C31239 = -((C31846 * C34992) / p + (C34179 * C35025) / C32514);
    const double C31423 =
        C35061 - (C31846 * C34994) / p - (C34179 * C35026) / C32514;
    const double C35047 = C35008 / C32514;
    const double C35054 = C35015 / C32514;
    const double C35059 = C35020 / C32514;
    const double C35042 = C35006 / C32514;
    const double C35052 = C35014 / C32514;
    const double C35058 = C35019 / C32514;
    const double C35022 = C34990 / C32514;
    const double C32738 = -((C32655 * C34992) / p + (C33073 * C35025) / C32514);
    const double C35049 = C35011 / C32514;
    const double C33572 =
        C35087 - (C33492 * C34992) / p - (C33899 * C35025) / C32514;
    const double C35055 = C35016 / C32514;
    const double C34394 = -((C34314 * C34992) / p + (C34719 * C35025) / C32514);
    const double C28843 =
        C35065 - (C28624 * C34988) / p - (C32587 * C35021) / C32514;
    const double C28975 =
        C35066 - (C28809 * C34988) / p - (C32655 * C35021) / C32514;
    const double C29107 = -((C28809 * C34992) / p + (C32655 * C35025) / C32514);
    const double C30154 = -((C29937 * C34988) / p + (C33425 * C35021) / C32514);
    const double C30285 = -((C30121 * C34988) / p + (C33492 * C35021) / C32514);
    const double C30416 =
        C35066 - (C30121 * C34992) / p - (C33492 * C35025) / C32514;
    const double C31456 = -((C31239 * C34988) / p + (C34247 * C35021) / C32514);
    const double C31587 = -((C31423 * C34988) / p + (C34314 * C35021) / C32514);
    const double C31718 = -((C31423 * C34992) / p + (C34314 * C35025) / C32514);
    const double C35081 = C32997 - C35047;
    const double C35088 = C33830 - C35054;
    const double C35093 = C34651 - C35059;
    const double C35076 = C32518 - C35042;
    const double C35086 = C33357 - C35052;
    const double C35092 = C34179 - C35058;
    const double C35060 = C29237 - C35022;
    const double C35083 = C30544 - C35049;
    const double C35089 = C31846 - C35055;
    const double C28944 = (C32734 * C34986) / C34987 - (C29107 * C34988) / p -
                          (C32738 * C35021) / C32514;
    const double C30254 = -((C30416 * C34988) / p + (C33572 * C35021) / C32514);
    const double C31556 = -((C31718 * C34988) / p + (C34394 * C35021) / C32514);
    const double C35103 = C35081 / C34991;
    const double C35111 = C35088 / C34991;
    const double C35115 = C35093 / C34991;
    const double C35100 = C35076 / C34991;
    const double C35110 = C35086 / C34991;
    const double C35114 = C35092 / C34991;
    const double C35094 = C35060 / C34991;
    const double C35108 = C35083 / C34991;
    const double C35112 = C35089 / C34991;
    const double C33101 = (C33255 * C34986) / C34987 - (C33019 * C34988) / p -
                          (C33259 * C35021) / C32514 + C35103;
    const double C33116 =
        C35103 - ((C33046 * C34992) / p + (C33273 * C35025) / C32514);
    const double C33144 =
        C35103 - ((C33073 * C34994) / p + (C33287 * C35026) / C32514);
    const double C33927 =
        C35111 - ((C33844 * C34988) / p + (C34081 * C35021) / C32514);
    const double C33941 = (C34091 * C34986) / C34987 - (C33872 * C34992) / p -
                          (C34096 * C35025) / C32514 + C35111;
    const double C33968 =
        C35111 - ((C33899 * C34994) / p + (C34110 * C35026) / C32514);
    const double C34746 =
        C35115 - ((C34665 * C34988) / p + (C34900 * C35021) / C32514);
    const double C34760 =
        C35115 - ((C34692 * C34992) / p + (C34914 * C35025) / C32514);
    const double C34787 = (C34923 * C34986) / C34987 - (C34719 * C34994) / p -
                          (C34929 * C35026) / C32514 + C35115;
    const double C32547 = (C33015 * C34986) / C34987 - (C32517 * C34988) / p -
                          (C33019 * C35021) / C32514 + C35100;
    const double C32602 =
        C35100 - ((C32587 * C34992) / p + (C33046 * C35025) / C32514);
    const double C32670 =
        C35100 - ((C32655 * C34994) / p + (C33073 * C35026) / C32514);
    const double C33385 =
        C35110 - ((C33358 * C34988) / p + (C33844 * C35021) / C32514);
    const double C33439 = (C33867 * C34986) / C34987 - (C33425 * C34992) / p -
                          (C33872 * C35025) / C32514 + C35110;
    const double C33506 =
        C35110 - ((C33492 * C34994) / p + (C33899 * C35026) / C32514);
    const double C34207 =
        C35114 - ((C34180 * C34988) / p + (C34665 * C35021) / C32514);
    const double C34261 =
        C35114 - ((C34247 * C34992) / p + (C34692 * C35025) / C32514);
    const double C34328 =
        C35087 - (C34314 * C34994) / p - (C34719 * C35026) / C32514 + C35114;
    const double C28422 = (C32510 * C34986) / C34987 - (C28439 * C34988) / p -
                          (C32517 * C35021) / C32514 + C35094;
    const double C28562 =
        C35094 - ((C28624 * C34992) / p + (C32587 * C35025) / C32514);
    const double C28702 =
        C35094 - ((C28809 * C34994) / p + (C32655 * C35026) / C32514);
    const double C29737 =
        C35108 - ((C29753 * C34988) / p + (C33358 * C35021) / C32514);
    const double C29876 =
        C35065 - (C29937 * C34992) / p - (C33425 * C35025) / C32514 + C35108;
    const double C30015 =
        C35108 - ((C30121 * C34994) / p + (C33492 * C35026) / C32514);
    const double C31039 =
        C35112 - ((C31055 * C34988) / p + (C34180 * C35021) / C32514);
    const double C31178 =
        C35112 - ((C31239 * C34992) / p + (C34247 * C35025) / C32514);
    const double C31317 =
        C35066 - (C31423 * C34994) / p - (C34314 * C35026) / C32514 + C35112;
    const double C32787 = C35077 - (C32547 * C34988) / p -
                          (C33101 * C35021) / C32514 +
                          (C32517 - (C33019 * C32512) / C32514) / p;
    const double C32842 = -((C32547 * C34994) / p + (C33101 * C35026) / C32514);
    const double C35003 = C32602 * C32512;
    const double C32828 =
        C35078 - (C32602 * C34988) / p - (C33116 * C35021) / C32514;
    const double C32872 = (C32587 - (C33046 * C32512) / C32514) / p -
                          ((C32602 * C34992) / p + (C33116 * C35025) / C32514);
    const double C32887 = -((C32602 * C34994) / p + (C33116 * C35026) / C32514);
    const double C35004 = C32670 * C32512;
    const double C32857 =
        C35079 - (C32670 * C34988) / p - (C33144 * C35021) / C32514;
    const double C32927 = -((C32670 * C34992) / p + (C33144 * C35025) / C32514);
    const double C32956 = (C32655 - (C33073 * C32512) / C32514) / p -
                          ((C32670 * C34994) / p + (C33144 * C35026) / C32514);
    const double C33619 = (C33358 - (C33844 * C32512) / C32514) / p -
                          ((C33385 * C34988) / p + (C33927 * C35021) / C32514);
    const double C33674 = -((C33385 * C34994) / p + (C33927 * C35026) / C32514);
    const double C35012 = C33439 * C32512;
    const double C33659 = -((C33439 * C34988) / p + (C33941 * C35021) / C32514);
    const double C33702 = C35078 - (C33439 * C34992) / p -
                          (C33941 * C35025) / C32514 +
                          (C33425 - (C33872 * C32512) / C32514) / p;
    const double C33716 = -((C33439 * C34994) / p + (C33941 * C35026) / C32514);
    const double C35013 = C33506 * C32512;
    const double C33688 = -((C33506 * C34988) / p + (C33968 * C35021) / C32514);
    const double C33756 =
        C35079 - (C33506 * C34992) / p - (C33968 * C35025) / C32514;
    const double C33783 = (C33492 - (C33899 * C32512) / C32514) / p -
                          ((C33506 * C34994) / p + (C33968 * C35026) / C32514);
    const double C34441 = (C34180 - (C34665 * C32512) / C32514) / p -
                          ((C34207 * C34988) / p + (C34746 * C35021) / C32514);
    const double C34495 =
        C35077 - (C34207 * C34994) / p - (C34746 * C35026) / C32514;
    const double C35017 = C34261 * C32512;
    const double C34481 = -((C34261 * C34988) / p + (C34760 * C35021) / C32514);
    const double C34523 = (C34247 - (C34692 * C32512) / C32514) / p -
                          ((C34261 * C34992) / p + (C34760 * C35025) / C32514);
    const double C34537 =
        C35078 - (C34261 * C34994) / p - (C34760 * C35026) / C32514;
    const double C35018 = C34328 * C32512;
    const double C34509 = -((C34328 * C34988) / p + (C34787 * C35021) / C32514);
    const double C34577 = -((C34328 * C34992) / p + (C34787 * C35025) / C32514);
    const double C34604 = C35079 - (C34328 * C34994) / p -
                          (C34787 * C35026) / C32514 +
                          (C34314 - (C34719 * C32512) / C32514) / p;
    const double C28440 = C35062 - (C28422 * C34988) / p -
                          (C32547 * C35021) / C32514 +
                          (C28439 - (C32517 * C32512) / C32514) / p;
    const double C28487 = -((C28422 * C34992) / p + (C32547 * C35025) / C32514);
    const double C28532 = -((C28422 * C34994) / p + (C32547 * C35026) / C32514);
    const double C28579 =
        C35063 - (C28562 * C34988) / p - (C32602 * C35021) / C32514;
    const double C28625 = (C28624 - (C32587 * C32512) / C32514) / p -
                          ((C28562 * C34992) / p + (C32602 * C35025) / C32514);
    const double C28672 = -((C28562 * C34994) / p + (C32602 * C35026) / C32514);
    const double C28719 =
        C35064 - (C28702 * C34988) / p - (C32670 * C35021) / C32514;
    const double C28764 = -((C28702 * C34992) / p + (C32670 * C35025) / C32514);
    const double C28810 = (C28809 - (C32655 * C32512) / C32514) / p -
                          ((C28702 * C34994) / p + (C32670 * C35026) / C32514);
    const double C29754 = (C29753 - (C33358 * C32512) / C32514) / p -
                          ((C29737 * C34988) / p + (C33385 * C35021) / C32514);
    const double C29801 =
        C35062 - (C29737 * C34992) / p - (C33385 * C35025) / C32514;
    const double C29846 = -((C29737 * C34994) / p + (C33385 * C35026) / C32514);
    const double C29892 = -((C29876 * C34988) / p + (C33439 * C35021) / C32514);
    const double C29938 = C35063 - (C29876 * C34992) / p -
                          (C33439 * C35025) / C32514 +
                          (C29937 - (C33425 * C32512) / C32514) / p;
    const double C29985 = -((C29876 * C34994) / p + (C33439 * C35026) / C32514);
    const double C30031 = -((C30015 * C34988) / p + (C33506 * C35021) / C32514);
    const double C30076 =
        C35064 - (C30015 * C34992) / p - (C33506 * C35025) / C32514;
    const double C30122 = (C30121 - (C33492 * C32512) / C32514) / p -
                          ((C30015 * C34994) / p + (C33506 * C35026) / C32514);
    const double C31056 = (C31055 - (C34180 * C32512) / C32514) / p -
                          ((C31039 * C34988) / p + (C34207 * C35021) / C32514);
    const double C31103 = -((C31039 * C34992) / p + (C34207 * C35025) / C32514);
    const double C31148 =
        C35062 - (C31039 * C34994) / p - (C34207 * C35026) / C32514;
    const double C31194 = -((C31178 * C34988) / p + (C34261 * C35021) / C32514);
    const double C31240 = (C31239 - (C34247 * C32512) / C32514) / p -
                          ((C31178 * C34992) / p + (C34261 * C35025) / C32514);
    const double C31287 =
        C35063 - (C31178 * C34994) / p - (C34261 * C35026) / C32514;
    const double C31333 = -((C31317 * C34988) / p + (C34328 * C35021) / C32514);
    const double C31378 = -((C31317 * C34992) / p + (C34328 * C35025) / C32514);
    const double C31424 = C35064 - (C31317 * C34994) / p -
                          (C34328 * C35026) / C32514 +
                          (C31423 - (C34314 * C32512) / C32514) / p;
    const double C35036 = C35003 / C32514;
    const double C35037 = C35004 / C32514;
    const double C35050 = C35012 / C32514;
    const double C35051 = C35013 / C32514;
    const double C35056 = C35017 / C32514;
    const double C35057 = C35018 / C32514;
    const double C29253 = C35069 - (C28440 * C34988) / p -
                          (C32787 * C35021) / C32514 +
                          (3 * (C28422 - (C32547 * C32512) / C32514)) / C34991;
    const double C29282 = -((C28440 * C34992) / p + (C32787 * C35025) / C32514);
    const double C29311 = -((C28440 * C34994) / p + (C32787 * C35026) / C32514);
    const double C29341 = -((C28532 * C34992) / p + (C32842 * C35025) / C32514);
    const double C29386 =
        C35072 - (C28625 * C34988) / p - (C32872 * C35021) / C32514;
    const double C29458 = -((C28625 * C34994) / p + (C32872 * C35026) / C32514);
    const double C29401 = (C32883 * C34986) / C34987 - (C28672 * C34988) / p -
                          (C32887 * C35021) / C32514;
    const double C29503 =
        C35073 - (C28764 * C34988) / p - (C32927 * C35021) / C32514;
    const double C29518 =
        C35074 - (C28810 * C34988) / p - (C32956 * C35021) / C32514;
    const double C29547 = -((C28810 * C34992) / p + (C32956 * C35025) / C32514);
    const double C30559 = (3 * (C29737 - (C33385 * C32512) / C32514)) / C34991 -
                          ((C29754 * C34988) / p + (C33619 * C35021) / C32514);
    const double C30588 =
        C35069 - (C29754 * C34992) / p - (C33619 * C35025) / C32514;
    const double C30617 = -((C29754 * C34994) / p + (C33619 * C35026) / C32514);
    const double C30647 = (C33669 * C34986) / C34987 - (C29846 * C34992) / p -
                          (C33674 * C35025) / C32514;
    const double C30691 = -((C29938 * C34988) / p + (C33702 * C35021) / C32514);
    const double C30764 = -((C29938 * C34994) / p + (C33702 * C35026) / C32514);
    const double C30706 = -((C29985 * C34988) / p + (C33716 * C35021) / C32514);
    const double C30808 = -((C30076 * C34988) / p + (C33756 * C35021) / C32514);
    const double C30823 = -((C30122 * C34988) / p + (C33783 * C35021) / C32514);
    const double C30853 =
        C35074 - (C30122 * C34992) / p - (C33783 * C35025) / C32514;
    const double C31861 = (3 * (C31039 - (C34207 * C32512) / C32514)) / C34991 -
                          ((C31056 * C34988) / p + (C34441 * C35021) / C32514);
    const double C31890 = -((C31056 * C34992) / p + (C34441 * C35025) / C32514);
    const double C31919 =
        C35069 - (C31056 * C34994) / p - (C34441 * C35026) / C32514;
    const double C31949 = -((C31148 * C34992) / p + (C34495 * C35025) / C32514);
    const double C31993 = -((C31240 * C34988) / p + (C34523 * C35021) / C32514);
    const double C32065 =
        C35072 - (C31240 * C34994) / p - (C34523 * C35026) / C32514;
    const double C32008 = -((C31287 * C34988) / p + (C34537 * C35021) / C32514);
    const double C32109 = -((C31378 * C34988) / p + (C34577 * C35021) / C32514);
    const double C32124 = -((C31424 * C34988) / p + (C34604 * C35021) / C32514);
    const double C32153 = -((C31424 * C34992) / p + (C34604 * C35025) / C32514);
    const double C35070 = C28562 - C35036;
    const double C35071 = C28702 - C35037;
    const double C35084 = C29876 - C35050;
    const double C35085 = C30015 - C35051;
    const double C35090 = C31178 - C35056;
    const double C35091 = C31317 - C35057;
    const double C29326 = (C32824 * C34986) / C34987 - (C28579 * C34988) / p -
                          (C32828 * C35021) / C32514 + C35070 / C34991;
    const double C29429 = (3 * C35070) / C34991 -
                          ((C28625 * C34992) / p + (C32872 * C35025) / C32514);
    const double C35097 = C35071 / C34991;
    const double C29575 = (3 * C35071) / C34991 -
                          ((C28810 * C34994) / p + (C32956 * C35026) / C32514);
    const double C30632 =
        C35084 / C34991 - ((C29892 * C34988) / p + (C33659 * C35021) / C32514);
    const double C30735 = C35072 - (C29938 * C34992) / p -
                          (C33702 * C35025) / C32514 + (3 * C35084) / C34991;
    const double C35109 = C35085 / C34991;
    const double C30881 = (3 * C35085) / C34991 -
                          ((C30122 * C34994) / p + (C33783 * C35026) / C32514);
    const double C31934 =
        C35090 / C34991 - ((C31194 * C34988) / p + (C34481 * C35021) / C32514);
    const double C32036 = (3 * C35090) / C34991 -
                          ((C31240 * C34992) / p + (C34523 * C35025) / C32514);
    const double C35113 = C35091 / C34991;
    const double C32182 = C35074 - (C31424 * C34994) / p -
                          (C34604 * C35026) / C32514 + (3 * C35091) / C34991;
    const double C29356 = (C32853 * C34986) / C34987 - (C28719 * C34988) / p -
                          (C32857 * C35021) / C32514 + C35097;
    const double C29473 =
        C35097 - ((C28764 * C34992) / p + (C32927 * C35025) / C32514);
    const double C30662 =
        C35109 - ((C30031 * C34988) / p + (C33688 * C35021) / C32514);
    const double C30779 =
        C35073 - (C30076 * C34992) / p - (C33756 * C35025) / C32514 + C35109;
    const double C31964 =
        C35113 - ((C31333 * C34988) / p + (C34509 * C35021) / C32514);
    const double C32080 =
        C35113 - ((C31378 * C34992) / p + (C34577 * C35025) / C32514);
    vrx[0] = C28422;
    vrx[1] = C28439;
    vrx[2] = C28440;
    vrx[3] = C28487;
    vrx[4] = C28532;
    vrx[5] = C28562;
    vrx[6] = C28579;
    vrx[7] = C28624;
    vrx[8] = C28625;
    vrx[9] = C28672;
    vrx[10] = C28702;
    vrx[11] = C28719;
    vrx[12] = C28764;
    vrx[13] = C28809;
    vrx[14] = C28810;
    vrx[15] = C28843;
    vrx[16] = C28944;
    vrx[17] = C28975;
    vrx[18] = C29107;
    vrx[19] = C29237;
    vrx[20] = C29253;
    vrx[21] = C29282;
    vrx[22] = C29311;
    vrx[23] = C29326;
    vrx[24] = C29341;
    vrx[25] = C29356;
    vrx[26] = C29386;
    vrx[27] = C29401;
    vrx[28] = C29429;
    vrx[29] = C29458;
    vrx[30] = C29473;
    vrx[31] = C29503;
    vrx[32] = C29518;
    vrx[33] = C29547;
    vrx[34] = C29575;
    vry[0] = C29737;
    vry[1] = C29753;
    vry[2] = C29754;
    vry[3] = C29801;
    vry[4] = C29846;
    vry[5] = C29876;
    vry[6] = C29892;
    vry[7] = C29937;
    vry[8] = C29938;
    vry[9] = C29985;
    vry[10] = C30015;
    vry[11] = C30031;
    vry[12] = C30076;
    vry[13] = C30121;
    vry[14] = C30122;
    vry[15] = C30154;
    vry[16] = C30254;
    vry[17] = C30285;
    vry[18] = C30416;
    vry[19] = C30544;
    vry[20] = C30559;
    vry[21] = C30588;
    vry[22] = C30617;
    vry[23] = C30632;
    vry[24] = C30647;
    vry[25] = C30662;
    vry[26] = C30691;
    vry[27] = C30706;
    vry[28] = C30735;
    vry[29] = C30764;
    vry[30] = C30779;
    vry[31] = C30808;
    vry[32] = C30823;
    vry[33] = C30853;
    vry[34] = C30881;
    vrz[0] = C31039;
    vrz[1] = C31055;
    vrz[2] = C31056;
    vrz[3] = C31103;
    vrz[4] = C31148;
    vrz[5] = C31178;
    vrz[6] = C31194;
    vrz[7] = C31239;
    vrz[8] = C31240;
    vrz[9] = C31287;
    vrz[10] = C31317;
    vrz[11] = C31333;
    vrz[12] = C31378;
    vrz[13] = C31423;
    vrz[14] = C31424;
    vrz[15] = C31456;
    vrz[16] = C31556;
    vrz[17] = C31587;
    vrz[18] = C31718;
    vrz[19] = C31846;
    vrz[20] = C31861;
    vrz[21] = C31890;
    vrz[22] = C31919;
    vrz[23] = C31934;
    vrz[24] = C31949;
    vrz[25] = C31964;
    vrz[26] = C31993;
    vrz[27] = C32008;
    vrz[28] = C32036;
    vrz[29] = C32065;
    vrz[30] = C32080;
    vrz[31] = C32109;
    vrz[32] = C32124;
    vrz[33] = C32153;
    vrz[34] = C32182;
}
