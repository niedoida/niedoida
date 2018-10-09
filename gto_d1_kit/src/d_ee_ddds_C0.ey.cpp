/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2220_3_ints(const double ae,
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
    const double C37072 = de * zCD;
    const double C37071 = be * zAB;
    const double C37067 = de * yCD;
    const double C37066 = be * yAB;
    const double C37065 = 2 * q;
    const double C37064 = de * xCD;
    const double C37063 = be * xAB;
    const double C37146 = p + q;
    const double C38004 = p * q;
    const double C38003 = std::pow(Pi, 2.5);
    const double C37998 = zP - zQ;
    const double C37996 = yP - yQ;
    const double C37992 = 2 * p;
    const double C37991 = xP - xQ;
    const double C37113 = C37071 + C37072;
    const double C37112 = C37066 + C37067;
    const double C37111 = C37063 + C37064;
    const double C38005 = std::sqrt(C37146);
    const double C38025 = C38003 * kab;
    const double C38020 = C37998 * q;
    const double C38018 = C37996 * q;
    const double C38014 = C37991 * q;
    const double C38026 = C38004 * C38005;
    const double C38043 = C38025 * kcd;
    const double C29393 = (2. * C38043 * bs[1]) / C38026;
    const double C30126 = (2. * C38043 * bs[2]) / C38026;
    const double C30716 = (2. * C38043 * bs[3]) / C38026;
    const double C31012 = (2. * C38043 * bs[4]) / C38026;
    const double C31166 = (2. * C38043 * bs[5]) / C38026;
    const double C31257 = (2. * C38043 * bs[6]) / C38026;
    const double C37164 = (2. * C38043 * bs[0]) / C38026;
    const double C37994 = C29393 * q;
    const double C38001 = C30126 * q;
    const double C28961 = -((C29393 * C37063) / p + (C30126 * C38014) / C37146);
    const double C29307 = -((C29393 * C37066) / p + (C30126 * C38018) / C37146);
    const double C29336 = -((C29393 * C37071) / p + (C30126 * C38020) / C37146);
    const double C38010 = C30716 * q;
    const double C30111 = -((C30126 * C37063) / p + (C30716 * C38014) / C37146);
    const double C32491 = -((C30126 * C37066) / p + (C30716 * C38018) / C37146);
    const double C32639 = -((C30126 * C37071) / p + (C30716 * C38020) / C37146);
    const double C38012 = C31012 * q;
    const double C30700 = -((C30716 * C37063) / p + (C31012 * C38014) / C37146);
    const double C33084 = -((C30716 * C37066) / p + (C31012 * C38018) / C37146);
    const double C35431 = -((C30716 * C37071) / p + (C31012 * C38020) / C37146);
    const double C38013 = C31166 * q;
    const double C31060 = -((C31012 * C37063) / p + (C31166 * C38014) / C37146);
    const double C33417 = -((C31012 * C37066) / p + (C31166 * C38018) / C37146);
    const double C35764 = -((C31012 * C37071) / p + (C31166 * C38020) / C37146);
    const double C31181 = -((C31166 * C37063) / p + (C31257 * C38014) / C37146);
    const double C33537 = -((C31166 * C37066) / p + (C31257 * C38018) / C37146);
    const double C35881 = -((C31166 * C37071) / p + (C31257 * C38020) / C37146);
    const double C15808 = -((C37164 * C37063) / p + (C29393 * C38014) / C37146);
    const double C17998 = -((C37164 * C37066) / p + (C29393 * C38018) / C37146);
    const double C18028 = -((C37164 * C37071) / p + (C29393 * C38020) / C37146);
    const double C38016 = C37994 / C37146;
    const double C38023 = C38001 / C37146;
    const double C38031 = C38010 / C37146;
    const double C29321 = -((C29336 * C37066) / p + (C32639 * C38018) / C37146);
    const double C38033 = C38012 / C37146;
    const double C38034 = C38013 / C37146;
    const double C37133 = C15808 / C37065;
    const double C37132 = C17998 / C37065;
    const double C16145 = -((C17998 * C37063) / p + (C29307 * C38014) / C37146);
    const double C37134 = C18028 / C37065;
    const double C16412 = -((C18028 * C37063) / p + (C29336 * C38014) / C37146);
    const double C18013 = -((C18028 * C37066) / p + (C29336 * C38018) / C37146);
    const double C38036 = C37164 - C38016;
    const double C38041 = C29393 - C38023;
    const double C38048 = C30126 - C38031;
    const double C38050 = C30716 - C38033;
    const double C38051 = C31012 - C38034;
    const double C37077 = C16145 / q;
    const double C37083 = C16412 / q;
    const double C37098 = C18013 / q;
    const double C16731 = -((C18013 * C37063) / p + (C29321 * C38014) / C37146);
    const double C38052 = C38036 / C37992;
    const double C38057 = C38041 / C37992;
    const double C38061 = C38048 / C37992;
    const double C38062 = C38050 / C37992;
    const double C38063 = C38051 / C37992;
    const double C37110 = C16731 * p;
    const double C37088 = C16731 / q;
    const double C15793 =
        C38052 - ((C15808 * C37063) / p + (C28961 * C38014) / C37146);
    const double C16818 =
        C38052 - ((C17998 * C37066) / p + (C29307 * C38018) / C37146);
    const double C17518 =
        C38052 - ((C18028 * C37071) / p + (C29336 * C38020) / C37146);
    const double C28946 =
        C38057 - ((C28961 * C37063) / p + (C30111 * C38014) / C37146);
    const double C29074 =
        C38057 - ((C29307 * C37066) / p + (C32491 * C38018) / C37146);
    const double C29198 =
        C38057 - ((C29336 * C37071) / p + (C32639 * C38020) / C37146);
    const double C30095 =
        C38061 - ((C30111 * C37063) / p + (C30700 * C38014) / C37146);
    const double C30147 =
        C38061 - ((C32491 * C37066) / p + (C33084 * C38018) / C37146);
    const double C30176 =
        C38061 - ((C32639 * C37071) / p + (C35431 * C38020) / C37146);
    const double C30791 =
        C38062 - ((C30700 * C37063) / p + (C31060 * C38014) / C37146);
    const double C30849 =
        C38062 - ((C33084 * C37066) / p + (C33417 * C38018) / C37146);
    const double C30891 =
        C38062 - ((C35431 * C37071) / p + (C35764 * C38020) / C37146);
    const double C31075 =
        C38063 - ((C31060 * C37063) / p + (C31181 * C38014) / C37146);
    const double C33432 =
        C38063 - ((C33417 * C37066) / p + (C33537 * C38018) / C37146);
    const double C33461 =
        C38063 - ((C35764 * C37071) / p + (C35881 * C38020) / C37146);
    const double C15450 = -(C16145 * C37113 + C37110) / q;
    const double C15613 = -(C16412 * C37112 + C37110) / q;
    const double C15658 = -(C18013 * C37111 + C37110) / q;
    const double C37116 = C15793 / C37065;
    const double C37124 = C16818 / C37065;
    const double C37130 = C17518 / C37065;
    const double C15746 = (C15808 - (C28961 * q) / C37146) / p -
                          ((C15793 * C37063) / p + (C28946 * C38014) / C37146);
    const double C16161 = -((C15793 * C37066) / p + (C28946 * C38018) / C37146);
    const double C16428 = -((C15793 * C37071) / p + (C28946 * C38020) / C37146);
    const double C37995 = C29074 * q;
    const double C16100 = -((C16818 * C37063) / p + (C29074 * C38014) / C37146);
    const double C17005 = (C17998 - (C29307 * q) / C37146) / p -
                          ((C16818 * C37066) / p + (C29074 * C38018) / C37146);
    const double C17185 = -((C16818 * C37071) / p + (C29074 * C38020) / C37146);
    const double C37997 = C29198 * q;
    const double C16367 = -((C17518 * C37063) / p + (C29198 * C38014) / C37146);
    const double C17632 = -((C17518 * C37066) / p + (C29198 * C38018) / C37146);
    const double C17707 = (C18028 - (C29336 * q) / C37146) / p -
                          ((C17518 * C37071) / p + (C29198 * C38020) / C37146);
    const double C28927 = (C28961 - (C30111 * q) / C37146) / p -
                          ((C28946 * C37063) / p + (C30095 * C38014) / C37146);
    const double C31430 = -((C28946 * C37071) / p + (C30095 * C38020) / C37146);
    const double C38008 = C30147 * q;
    const double C28976 = -((C29074 * C37063) / p + (C30147 * C38014) / C37146);
    const double C29156 = (C29307 - (C32491 * q) / C37146) / p -
                          ((C29074 * C37066) / p + (C30147 * C38018) / C37146);
    const double C29170 = -((C29074 * C37071) / p + (C30147 * C38020) / C37146);
    const double C38009 = C30176 * q;
    const double C29005 = -((C29198 * C37063) / p + (C30176 * C38014) / C37146);
    const double C29266 = -((C29198 * C37066) / p + (C30176 * C38018) / C37146);
    const double C29280 = (C29336 - (C32639 * q) / C37146) / p -
                          ((C29198 * C37071) / p + (C30176 * C38020) / C37146);
    const double C30309 = (C30111 - (C30700 * q) / C37146) / p -
                          ((C30095 * C37063) / p + (C30791 * C38014) / C37146);
    const double C30391 = (C32491 - (C33084 * q) / C37146) / p -
                          ((C30147 * C37066) / p + (C30849 * C38018) / C37146);
    const double C30434 = -((C30147 * C37063) / p + (C30849 * C38014) / C37146);
    const double C38011 = C30891 * q;
    const double C30478 = -((C30176 * C37063) / p + (C30891 * C38014) / C37146);
    const double C30522 = (C32639 - (C35431 * q) / C37146) / p -
                          ((C30176 * C37071) / p + (C30891 * C38020) / C37146);
    const double C32788 = -((C30176 * C37066) / p + (C30891 * C38018) / C37146);
    const double C30806 = (C30700 - (C31060 * q) / C37146) / p -
                          ((C30791 * C37063) / p + (C31075 * C38014) / C37146);
    const double C30905 = (C33084 - (C33417 * q) / C37146) / p -
                          ((C30849 * C37066) / p + (C33432 * C38018) / C37146);
    const double C30972 = (C35431 - (C35764 * q) / C37146) / p -
                          ((C30891 * C37071) / p + (C33461 * C38020) / C37146);
    const double C33209 = -((C30891 * C37066) / p + (C33461 * C38018) / C37146);
    const double C37121 = C15746 / C37065;
    const double C12896 = C15808 / q - (C15793 * C37111) / q - (C15746 * p) / q;
    const double C37070 = C16161 * p;
    const double C37075 = C16428 * p;
    const double C38017 = C37995 / C37146;
    const double C37089 = C16100 * p;
    const double C37128 = C17005 / C37065;
    const double C13924 = C17998 / q - (C16818 * C37112) / q - (C17005 * p) / q;
    const double C37092 = C17185 * p;
    const double C38019 = C37997 / C37146;
    const double C37102 = C16367 * p;
    const double C37104 = C17632 * p;
    const double C37131 = C17707 / C37065;
    const double C14793 = C18028 / q - (C17518 * C37113) / q - (C17707 * p) / q;
    const double C37993 = C28927 * q;
    const double C15761 = (3 * (C15793 - (C28946 * q) / C37146)) / C37992 -
                          ((C15746 * C37063) / p + (C28927 * C38014) / C37146);
    const double C16176 = -((C15746 * C37066) / p + (C28927 * C38018) / C37146);
    const double C16443 = -((C15746 * C37071) / p + (C28927 * C38020) / C37146);
    const double C16746 = -((C16428 * C37066) / p + (C31430 * C38018) / C37146);
    const double C38029 = C38008 / C37146;
    const double C37999 = C29156 * q;
    const double C17020 = -((C17005 * C37063) / p + (C29156 * C38014) / C37146);
    const double C17474 = -((C17005 * C37071) / p + (C29156 * C38020) / C37146);
    const double C17200 = -((C17185 * C37063) / p + (C29170 * C38014) / C37146);
    const double C38030 = C38009 / C37146;
    const double C17647 = -((C17632 * C37063) / p + (C29266 * C38014) / C37146);
    const double C38000 = C29280 * q;
    const double C17722 = -((C17707 * C37063) / p + (C29280 * C38014) / C37146);
    const double C17954 = -((C17707 * C37066) / p + (C29280 * C38018) / C37146);
    const double C38002 = C30309 * q;
    const double C29363 = (3 * (C28946 - (C30095 * q) / C37146)) / C37992 -
                          ((C28927 * C37063) / p + (C30309 * C38014) / C37146);
    const double C31801 = -((C28927 * C37066) / p + (C30309 * C38018) / C37146);
    const double C31897 = -((C28927 * C37071) / p + (C30309 * C38020) / C37146);
    const double C38006 = C30391 * q;
    const double C29561 = -((C29156 * C37063) / p + (C30391 * C38014) / C37146);
    const double C29792 = -((C29156 * C37071) / p + (C30391 * C38020) / C37146);
    const double C38032 = C38011 / C37146;
    const double C38007 = C30522 * q;
    const double C29691 = -((C29280 * C37063) / p + (C30522 * C38014) / C37146);
    const double C30000 = -((C29280 * C37066) / p + (C30522 * C38018) / C37146);
    const double C30324 = (3 * (C30095 - (C30791 * q) / C37146)) / C37992 -
                          ((C30309 * C37063) / p + (C30806 * C38014) / C37146);
    const double C32845 = -((C30309 * C37066) / p + (C30806 * C38018) / C37146);
    const double C35220 = -((C30309 * C37071) / p + (C30806 * C38020) / C37146);
    const double C30406 = (3 * (C30147 - (C30849 * q) / C37146)) / C37992 -
                          ((C30391 * C37066) / p + (C30905 * C38018) / C37146);
    const double C30493 = -((C30391 * C37063) / p + (C30905 * C38014) / C37146);
    const double C35314 = -((C30391 * C37071) / p + (C30905 * C38020) / C37146);
    const double C30579 = -((C30522 * C37063) / p + (C30972 * C38014) / C37146);
    const double C33008 = -((C30522 * C37066) / p + (C30972 * C38018) / C37146);
    const double C13040 = -(C15793 * C37112 + C37070) / q;
    const double C15390 = C37132 - (C16145 * C37111) / q - C37070 / q;
    const double C13087 = -(C15793 * C37113 + C37075) / q;
    const double C15568 = C37134 - (C16412 * C37111) / q - C37075 / q;
    const double C38037 = C16818 - C38017;
    const double C13830 = -(C16818 * C37111 + C37089) / q;
    const double C15435 = C37133 - (C16145 * C37112) / q - C37089 / q;
    const double C13954 = -(C16818 * C37113 + C37092) / q;
    const double C15702 = C37134 - (C18013 * C37112) / q - C37092 / q;
    const double C38038 = C17518 - C38019;
    const double C14670 = -(C17518 * C37111 + C37102) / q;
    const double C15629 = C37133 - (C16412 * C37113) / q - C37102 / q;
    const double C14763 = -(C17518 * C37112 + C37104) / q;
    const double C15717 = C37132 - (C18013 * C37113) / q - C37104 / q;
    const double C38015 = C37993 / C37146;
    const double C12878 =
        (3 * C15793) / C37065 - (C15746 * C37111) / q - (C15761 * p) / q;
    const double C37069 = C16176 * p;
    const double C37074 = C16443 * p;
    const double C37081 = C16746 * p;
    const double C38046 = C29074 - C38029;
    const double C38021 = C37999 / C37146;
    const double C37090 = C17020 * p;
    const double C37095 = C17474 * p;
    const double C37091 = C17200 * p;
    const double C38047 = C29198 - C38030;
    const double C37103 = C17647 * p;
    const double C38022 = C38000 / C37146;
    const double C37105 = C17722 * p;
    const double C37106 = C17954 * p;
    const double C38024 = C38002 / C37146;
    const double C16659 = -((C15761 * C37066) / p + (C29363 * C38018) / C37146);
    const double C16688 = -((C15761 * C37071) / p + (C29363 * C38020) / C37146);
    const double C16761 = -((C16443 * C37066) / p + (C31897 * C38018) / C37146);
    const double C38027 = C38006 / C37146;
    const double C17489 = -((C17474 * C37063) / p + (C29792 * C38014) / C37146);
    const double C38049 = C30176 - C38032;
    const double C38028 = C38007 / C37146;
    const double C17969 = -((C17954 * C37063) / p + (C30000 * C38014) / C37146);
    const double C31786 = -((C29363 * C37066) / p + (C30324 * C38018) / C37146);
    const double C31883 = -((C29363 * C37071) / p + (C30324 * C38020) / C37146);
    const double C16115 =
        C38037 / C37992 - ((C16100 * C37063) / p + (C28976 * C38014) / C37146);
    const double C16975 = (3 * C38037) / C37992 -
                          ((C17005 * C37066) / p + (C29156 * C38018) / C37146);
    const double C38054 = C38038 / C37992;
    const double C17677 = (3 * C38038) / C37992 -
                          ((C17707 * C37071) / p + (C29280 * C38020) / C37146);
    const double C38035 = C15746 - C38015;
    const double C13025 = -(C15746 * C37112 + C37069) / q;
    const double C13167 = C37077 - (C16161 * C37111) / q - C37069 / q;
    const double C13072 = -(C15746 * C37113 + C37074) / q;
    const double C13361 = C37083 - (C16428 * C37111) / q - C37074 / q;
    const double C13297 = -(C16161 * C37113 + C37081) / q;
    const double C13459 = -(C16428 * C37112 + C37081) / q;
    const double C15479 = C18013 / C37065 - (C16731 * C37111) / q - C37081 / q;
    const double C29764 = (3 * C38046) / C37992 -
                          ((C29156 * C37066) / p + (C30391 * C38018) / C37146);
    const double C34276 =
        C38046 / C37992 - ((C28976 * C37063) / p + (C30434 * C38014) / C37146);
    const double C38039 = C17005 - C38021;
    const double C13909 = C37077 - (C16100 * C37112) / q - C37090 / q;
    const double C14018 = -(C17005 * C37111 + C37090) / q;
    const double C14144 = -(C17005 * C37113 + C37095) / q;
    const double C14304 = C37098 - (C17185 * C37112) / q - C37095 / q;
    const double C13939 = -(C16100 * C37113 + C37091) / q;
    const double C14206 = -(C17185 * C37111 + C37091) / q;
    const double C15524 = C16412 / C37065 - (C16731 * C37112) / q - C37091 / q;
    const double C38060 = C38047 / C37992;
    const double C29986 = (3 * C38047) / C37992 -
                          ((C29280 * C37071) / p + (C30522 * C38020) / C37146);
    const double C14748 = -(C16367 * C37112 + C37103) / q;
    const double C14837 = -(C17632 * C37111 + C37103) / q;
    const double C15539 = C16145 / C37065 - (C16731 * C37113) / q - C37103 / q;
    const double C38040 = C17707 - C38022;
    const double C14778 = C37083 - (C16367 * C37113) / q - C37105 / q;
    const double C14946 = -(C17707 * C37111 + C37105) / q;
    const double C14899 = C37098 - (C17632 * C37113) / q - C37106 / q;
    const double C15042 = -(C17707 * C37112 + C37106) / q;
    const double C38042 = C28927 - C38024;
    const double C37068 = C16659 * p;
    const double C37073 = C16688 * p;
    const double C37087 = C16761 * p;
    const double C38044 = C29156 - C38027;
    const double C37101 = C17489 * p;
    const double C30449 =
        C38049 / C37992 - ((C32788 * C37066) / p + (C33209 * C38018) / C37146);
    const double C30537 = (3 * C38049) / C37992 -
                          ((C30522 * C37071) / p + (C30972 * C38020) / C37146);
    const double C38045 = C29280 - C38028;
    const double C37109 = C17969 * p;
    const double C37079 = C16115 * p;
    const double C14113 =
        (3 * C16818) / C37065 - (C17005 * C37112) / q - (C16975 * p) / q;
    const double C16382 =
        C38054 - ((C16367 * C37063) / p + (C29005 * C38014) / C37146);
    const double C17155 =
        C38054 - ((C17632 * C37066) / p + (C29266 * C38018) / C37146);
    const double C15074 =
        (3 * C17518) / C37065 - (C17707 * C37113) / q - (C17677 * p) / q;
    const double C38053 = C38035 / C37992;
    const double C15777 =
        (2 * C38035) / p - ((C15761 * C37063) / p + (C29363 * C38014) / C37146);
    const double C16990 = -((C16975 * C37063) / p + (C29764 * C38014) / C37146);
    const double C22575 = -((C16975 * C37071) / p + (C29764 * C38020) / C37146);
    const double C29576 = -((C29764 * C37063) / p + (C30406 * C38014) / C37146);
    const double C29888 = -((C29764 * C37071) / p + (C30406 * C38020) / C37146);
    const double C17445 = -((C16115 * C37071) / p + (C34276 * C38020) / C37146);
    const double C38055 = C38039 / C37992;
    const double C22127 =
        (2 * C38039) / p - ((C16975 * C37066) / p + (C29764 * C38018) / C37146);
    const double C29778 =
        C38060 - ((C29266 * C37066) / p + (C32788 * C38018) / C37146);
    const double C31982 =
        C38060 - ((C29005 * C37063) / p + (C30478 * C38014) / C37146);
    const double C17692 = -((C17677 * C37063) / p + (C29986 * C38014) / C37146);
    const double C22816 = -((C17677 * C37066) / p + (C29986 * C38018) / C37146);
    const double C38056 = C38040 / C37992;
    const double C27930 =
        (2 * C38040) / p - ((C17677 * C37071) / p + (C29986 * C38020) / C37146);
    const double C38064 = C38042 / C37992;
    const double C29378 =
        (2 * C38042) / p - ((C29363 * C37063) / p + (C30324 * C38014) / C37146);
    const double C13009 = -(C15761 * C37112 + C37068) / q;
    const double C13538 =
        (3 * C16161) / C37065 - (C16176 * C37111) / q - C37068 / q;
    const double C13056 = -(C15761 * C37113 + C37073) / q;
    const double C13628 =
        (3 * C16428) / C37065 - (C16443 * C37111) / q - C37073 / q;
    const double C13599 = -(C16176 * C37113 + C37087) / q;
    const double C13674 = -(C16443 * C37112 + C37087) / q;
    const double C13719 = C37088 - (C16746 * C37111) / q - C37087 / q;
    const double C38058 = C38044 / C37992;
    const double C29874 =
        (2 * C38044) / p - ((C29764 * C37066) / p + (C30406 * C38018) / C37146);
    const double C14443 = -(C17020 * C37113 + C37101) / q;
    const double C14518 = C37088 - (C17200 * C37112) / q - C37101 / q;
    const double C14562 = -(C17474 * C37111 + C37101) / q;
    const double C29706 = -((C29986 * C37063) / p + (C30537 * C38014) / C37146);
    const double C30054 = -((C29986 * C37066) / p + (C30537 * C38018) / C37146);
    const double C38059 = C38045 / C37992;
    const double C30068 =
        (2 * C38045) / p - ((C29986 * C37071) / p + (C30537 * C38020) / C37146);
    const double C15179 = C37088 - (C17647 * C37113) / q - C37109 / q;
    const double C15254 = -(C17722 * C37112 + C37109) / q;
    const double C15299 = -(C17954 * C37111 + C37109) / q;
    const double C37117 = C37079 / q;
    const double C37086 = C16382 * p;
    const double C37100 = C17155 * p;
    const double C16130 =
        C38053 - ((C16176 * C37066) / p + (C31801 * C38018) / C37146);
    const double C16397 =
        C38053 - ((C16443 * C37071) / p + (C31897 * C38020) / C37146);
    const double C12859 =
        (2 * C15746) / q - (C15761 * C37111) / q - (C15777 * p) / q;
    const double C37093 = C16990 * p;
    const double C37094 = C22575 * p;
    const double C37080 = C17445 * p;
    const double C17416 =
        C38055 - ((C17020 * C37063) / p + (C29561 * C38014) / C37146);
    const double C22317 =
        C38055 - ((C17474 * C37071) / p + (C29792 * C38020) / C37146);
    const double C14097 =
        (2 * C17005) / q - (C16975 * C37112) / q - (C22127 * p) / q;
    const double C17170 = -((C17155 * C37063) / p + (C29778 * C38014) / C37146);
    const double C29606 = -((C29778 * C37063) / p + (C30449 * C38014) / C37146);
    const double C17882 = -((C16382 * C37066) / p + (C31982 * C38018) / C37146);
    const double C37107 = C17692 * p;
    const double C37108 = C22816 * p;
    const double C17911 =
        C38056 - ((C17722 * C37063) / p + (C29691 * C38014) / C37146);
    const double C23046 =
        C38056 - ((C17954 * C37066) / p + (C30000 * C38018) / C37146);
    const double C15058 =
        (2 * C17707) / q - (C17677 * C37113) / q - (C27930 * p) / q;
    const double C32080 =
        C38064 - ((C31897 * C37071) / p + (C35220 * C38020) / C37146);
    const double C34334 =
        C38064 - ((C31801 * C37066) / p + (C32845 * C38018) / C37146);
    const double C29636 =
        C38058 - ((C29561 * C37063) / p + (C30493 * C38014) / C37146);
    const double C29943 =
        C38058 - ((C29792 * C37071) / p + (C35314 * C38020) / C37146);
    const double C29736 =
        C38059 - ((C29691 * C37063) / p + (C30579 * C38014) / C37146);
    const double C29958 =
        C38059 - ((C30000 * C37066) / p + (C33008 * C38018) / C37146);
    const double C13264 = C37116 - (C16161 * C37112) / q - C37117;
    const double C13813 = C37124 - (C16100 * C37111) / q - C37117;
    const double C37120 = C37086 / q;
    const double C37127 = C37100 / q;
    const double C37076 = C16130 * p;
    const double C37082 = C16397 * p;
    const double C14000 = -(C16975 * C37111 + C37093) / q;
    const double C14428 =
        (3 * C16100) / C37065 - (C17020 * C37112) / q - C37093 / q;
    const double C14128 = -(C16975 * C37113 + C37094) / q;
    const double C14609 =
        (3 * C17185) / C37065 - (C17474 * C37112) / q - C37094 / q;
    const double C37122 = C37080 / q;
    const double C13280 = -(C16115 * C37113 + C37080) / q;
    const double C37078 = C17416 * p;
    const double C37097 = C22317 * p;
    const double C37096 = C17170 * p;
    const double C37084 = C17882 * p;
    const double C14928 = -(C17677 * C37111 + C37107) / q;
    const double C15270 =
        (3 * C16367) / C37065 - (C17722 * C37113) / q - C37107 / q;
    const double C15026 = -(C17677 * C37112 + C37108) / q;
    const double C15361 =
        (3 * C17632) / C37065 - (C17954 * C37113) / q - C37108 / q;
    const double C37085 = C17911 * p;
    const double C37099 = C23046 * p;
    const double C13493 = C37116 - (C16428 * C37113) / q - C37120;
    const double C14653 = C37130 - (C16367 * C37111) / q - C37120;
    const double C14336 = C37124 - (C17185 * C37113) / q - C37127;
    const double C14884 = C37130 - (C17632 * C37112) / q - C37127;
    const double C37114 = C37076 / q;
    const double C37118 = C37082 / q;
    const double C13767 = C16428 / C37065 - (C16746 * C37112) / q - C37122;
    const double C14472 = C17185 / C37065 - (C17200 * C37111) / q - C37122;
    const double C37115 = C37078 / q;
    const double C37125 = C37097 / q;
    const double C37129 = C37096 / q;
    const double C14188 = -(C17155 * C37111 + C37096) / q;
    const double C37123 = C37084 / q;
    const double C13442 = -(C16382 * C37112 + C37084) / q;
    const double C37119 = C37085 / q;
    const double C37126 = C37099 / q;
    const double C13148 = C16100 / q - (C16115 * C37111) / q - C37114;
    const double C13584 = C37121 - (C16176 * C37112) / q - C37114;
    const double C13342 = C16367 / q - (C16382 * C37111) / q - C37118;
    const double C13690 = C37121 - (C16443 * C37113) / q - C37118;
    const double C13247 = C16161 / q - (C16115 * C37112) / q - C37115;
    const double C14382 = C37128 - (C17020 * C37111) / q - C37115;
    const double C14288 = C17632 / q - (C17155 * C37112) / q - C37125;
    const double C14624 = C37128 - (C17474 * C37113) / q - C37125;
    const double C14533 = C16100 / C37065 - (C17200 * C37113) / q - C37129;
    const double C15164 = C16367 / C37065 - (C17647 * C37112) / q - C37129;
    const double C13783 = C16161 / C37065 - (C16746 * C37113) / q - C37123;
    const double C15118 = C17632 / C37065 - (C17647 * C37111) / q - C37123;
    const double C13476 = C16428 / q - (C16382 * C37113) / q - C37119;
    const double C15208 = C37131 - (C17722 * C37111) / q - C37119;
    const double C14320 = C17185 / q - (C17155 * C37113) / q - C37126;
    const double C15346 = C37131 - (C17954 * C37112) / q - C37126;
    g[0] = C12859;
    g[1] = C12878;
    g[2] = C12896;
    g[3] = C13009;
    g[4] = C13025;
    g[5] = C13040;
    g[6] = C13056;
    g[7] = C13072;
    g[8] = C13087;
    g[9] = C13148;
    g[10] = C13167;
    g[11] = C13247;
    g[12] = C13264;
    g[13] = C13280;
    g[14] = C13297;
    g[15] = C13342;
    g[16] = C13361;
    g[17] = C13442;
    g[18] = C13459;
    g[19] = C13476;
    g[20] = C13493;
    g[21] = C13538;
    g[22] = C13584;
    g[23] = C13599;
    g[24] = C13628;
    g[25] = C13674;
    g[26] = C13690;
    g[27] = C13719;
    g[28] = C13767;
    g[29] = C13783;
    g[30] = C13813;
    g[31] = C13830;
    g[32] = C13909;
    g[33] = C13924;
    g[34] = C13939;
    g[35] = C13954;
    g[36] = C14000;
    g[37] = C14018;
    g[38] = C14097;
    g[39] = C14113;
    g[40] = C14128;
    g[41] = C14144;
    g[42] = C14188;
    g[43] = C14206;
    g[44] = C14288;
    g[45] = C14304;
    g[46] = C14320;
    g[47] = C14336;
    g[48] = C14382;
    g[49] = C14428;
    g[50] = C14443;
    g[51] = C14472;
    g[52] = C14518;
    g[53] = C14533;
    g[54] = C14562;
    g[55] = C14609;
    g[56] = C14624;
    g[57] = C14653;
    g[58] = C14670;
    g[59] = C14748;
    g[60] = C14763;
    g[61] = C14778;
    g[62] = C14793;
    g[63] = C14837;
    g[64] = C14884;
    g[65] = C14899;
    g[66] = C14928;
    g[67] = C14946;
    g[68] = C15026;
    g[69] = C15042;
    g[70] = C15058;
    g[71] = C15074;
    g[72] = C15118;
    g[73] = C15164;
    g[74] = C15179;
    g[75] = C15208;
    g[76] = C15254;
    g[77] = C15270;
    g[78] = C15299;
    g[79] = C15346;
    g[80] = C15361;
    g[81] = C15390;
    g[82] = C15435;
    g[83] = C15450;
    g[84] = C15479;
    g[85] = C15524;
    g[86] = C15539;
    g[87] = C15568;
    g[88] = C15613;
    g[89] = C15629;
    g[90] = C15658;
    g[91] = C15702;
    g[92] = C15717;
    g[93] = C15746;
    g[94] = C15761;
    g[95] = C15777;
    g[96] = C15793;
    g[97] = C15808;
    g[98] = C16100;
    g[99] = C16115;
    g[100] = C16130;
    g[101] = C16145;
    g[102] = C16161;
    g[103] = C16176;
    g[104] = C16367;
    g[105] = C16382;
    g[106] = C16397;
    g[107] = C16412;
    g[108] = C16428;
    g[109] = C16443;
    g[110] = C16659;
    g[111] = C16688;
    g[112] = C16731;
    g[113] = C16746;
    g[114] = C16761;
    g[115] = C16818;
    g[116] = C16975;
    g[117] = C16990;
    g[118] = C17005;
    g[119] = C17020;
    g[120] = C17155;
    g[121] = C17170;
    g[122] = C17185;
    g[123] = C17200;
    g[124] = C17416;
    g[125] = C17445;
    g[126] = C17474;
    g[127] = C17489;
    g[128] = C17518;
    g[129] = C17632;
    g[130] = C17647;
    g[131] = C17677;
    g[132] = C17692;
    g[133] = C17707;
    g[134] = C17722;
    g[135] = C17882;
    g[136] = C17911;
    g[137] = C17954;
    g[138] = C17969;
    g[139] = C17998;
    g[140] = C18013;
    g[141] = C18028;
    g[142] = C22127;
    g[143] = C22317;
    g[144] = C22575;
    g[145] = C22816;
    g[146] = C23046;
    g[147] = C27930;
    g[148] = C28927;
    g[149] = C28946;
    g[150] = C28961;
    g[151] = C28976;
    g[152] = C29005;
    g[153] = C29074;
    g[154] = C29156;
    g[155] = C29170;
    g[156] = C29198;
    g[157] = C29266;
    g[158] = C29280;
    g[159] = C29307;
    g[160] = C29321;
    g[161] = C29336;
    g[162] = C29363;
    g[163] = C29378;
    g[164] = C29393;
    g[165] = C29561;
    g[166] = C29576;
    g[167] = C29606;
    g[168] = C29636;
    g[169] = C29691;
    g[170] = C29706;
    g[171] = C29736;
    g[172] = C29764;
    g[173] = C29778;
    g[174] = C29792;
    g[175] = C29874;
    g[176] = C29888;
    g[177] = C29943;
    g[178] = C29958;
    g[179] = C29986;
    g[180] = C30000;
    g[181] = C30054;
    g[182] = C30068;
    g[183] = C30095;
    g[184] = C30111;
    g[185] = C30126;
    g[186] = C30147;
    g[187] = C30176;
    g[188] = C30309;
    g[189] = C30324;
    g[190] = C30391;
    g[191] = C30406;
    g[192] = C30434;
    g[193] = C30449;
    g[194] = C30478;
    g[195] = C30493;
    g[196] = C30522;
    g[197] = C30537;
    g[198] = C30579;
    g[199] = C30700;
    g[200] = C30716;
    g[201] = C30791;
    g[202] = C30806;
    g[203] = C30849;
    g[204] = C30891;
    g[205] = C30905;
    g[206] = C30972;
    g[207] = C31012;
    g[208] = C31060;
    g[209] = C31075;
    g[210] = C31166;
    g[211] = C31181;
    g[212] = C31257;
    g[213] = C31430;
    g[214] = C31786;
    g[215] = C31801;
    g[216] = C31883;
    g[217] = C31897;
    g[218] = C31982;
    g[219] = C32080;
    g[220] = C32491;
    g[221] = C32639;
    g[222] = C32788;
    g[223] = C32845;
    g[224] = C33008;
    g[225] = C33084;
    g[226] = C33209;
    g[227] = C33417;
    g[228] = C33432;
    g[229] = C33461;
    g[230] = C33537;
    g[231] = C34276;
    g[232] = C34334;
    g[233] = C35220;
    g[234] = C35314;
    g[235] = C35431;
    g[236] = C35764;
    g[237] = C35881;
}
