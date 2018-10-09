/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_4_vr(const double ae,
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
    const double C87606 = g[31];
    const double C87625 = g[32];
    const double C87640 = g[33];
    const double C87655 = g[34];
    const double C87671 = g[35];
    const double C87763 = g[36];
    const double C87779 = g[37];
    const double C87807 = g[38];
    const double C87822 = g[39];
    const double C87866 = g[40];
    const double C87882 = g[41];
    const double C87910 = g[42];
    const double C87939 = g[43];
    const double C87968 = g[44];
    const double C87996 = g[45];
    const double C88036 = g[46];
    const double C88077 = g[47];
    const double C88145 = g[48];
    const double C88214 = g[49];
    const double C88241 = g[50];
    const double C88255 = g[51];
    const double C88321 = g[52];
    const double C88362 = g[53];
    const double C88376 = g[54];
    const double C88392 = g[55];
    const double C88407 = g[56];
    const double C88421 = g[57];
    const double C88450 = g[58];
    const double C88505 = g[59];
    const double C88533 = g[60];
    const double C88561 = g[61];
    const double C88616 = g[62];
    const double C88631 = g[63];
    const double C88764 = g[64];
    const double C88780 = g[65];
    const double C88801 = g[66];
    const double C88857 = g[67];
    const double C88898 = g[68];
    const double C88939 = g[69];
    const double C88961 = g[70];
    const double C89037 = g[71];
    const double C89262 = g[72];
    const double C89320 = g[73];
    const double C89391 = g[74];
    const double C89421 = g[75];
    const double C89903 = g[76];
    const double C90107 = g[77];
    const double C90160 = g[78];
    const double C90276 = g[79];
    const double C90433 = g[80];
    const double C90749 = g[81];
    const double C91768 = g[82];
    const double C91898 = g[83];
    const double C87609 = p + q;
    const double C87608 = p * q;
    const double C91992 = bs[6];
    const double C91991 = bs[5];
    const double C91989 = bs[4];
    const double C91988 = bs[3];
    const double C91984 = bs[2];
    const double C91982 = std::pow(Pi, 2.5);
    const double C91979 = bs[1];
    const double C91978 = ce * de;
    const double C91977 = bs[0];
    const double C91971 = zP - zQ;
    const double C91970 = be * zAB;
    const double C91969 = yP - yQ;
    const double C91968 = be * yAB;
    const double C91965 = 2 * p;
    const double C91964 = xP - xQ;
    const double C91963 = be * xAB;
    const double C87610 = C87609 * p;
    const double C91983 = std::sqrt(C87609);
    const double C91981 = q * C87609;
    const double C91980 = C87608 * de;
    const double C91962 = C87609 * C87608;
    const double C91961 = de * C87608;
    const double C92045 = 4 * C91982;
    const double C92043 = kab * C91978;
    const double C92023 = C91971 * C87608;
    const double C92022 = C91969 * C87608;
    const double C92016 = C91964 * C87608;
    const double C92046 = C87608 * C91983;
    const double C92044 = kab * C91980;
    const double C92070 = C90107 * C91961;
    const double C92066 = C89421 * C91961;
    const double C92059 = C89037 * C91961;
    const double C92057 = C88939 * C91961;
    const double C92056 = C88898 * C91961;
    const double C92055 = C88857 * C91961;
    const double C92054 = C88780 * C91961;
    const double C92052 = C88631 * C91961;
    const double C92050 = C88561 * C91961;
    const double C92048 = C88505 * C91961;
    const double C92047 = C88450 * C91961;
    const double C92042 = C88421 * C91961;
    const double C92041 = C88407 * C91961;
    const double C92039 = C88376 * C91961;
    const double C92038 = C88362 * C91961;
    const double C92037 = C88321 * C91961;
    const double C92036 = C88255 * C91961;
    const double C92035 = C88241 * C91961;
    const double C92034 = C88214 * C91961;
    const double C92033 = C88077 * C91961;
    const double C92032 = C87996 * C91961;
    const double C92030 = C87910 * C91961;
    const double C92029 = C87882 * C91961;
    const double C92026 = C87807 * C91961;
    const double C92025 = C87779 * C91961;
    const double C92021 = C87671 * C91961;
    const double C92018 = C87640 * C91961;
    const double C92017 = C87625 * C91961;
    const double C92015 = C87606 * C91961;
    const double C92109 = kcd * C92043;
    const double C92110 = kcd * C92044;
    const double C92134 = C92070 / C91962;
    const double C92130 = C92066 / C91962;
    const double C92123 = C92059 / C91962;
    const double C92121 = C92057 / C91962;
    const double C92120 = C92056 / C91962;
    const double C92119 = C92055 / C91962;
    const double C92118 = C92054 / C91962;
    const double C92116 = C92052 / C91962;
    const double C92114 = C92050 / C91962;
    const double C92112 = C92048 / C91962;
    const double C92111 = C92047 / C91962;
    const double C92108 = C92042 / C91962;
    const double C92107 = C92041 / C91962;
    const double C92105 = C92039 / C91962;
    const double C92104 = C92038 / C91962;
    const double C92103 = C92037 / C91962;
    const double C92102 = C92036 / C91962;
    const double C92101 = C92035 / C91962;
    const double C92100 = C92034 / C91962;
    const double C92099 = C92033 / C91962;
    const double C92098 = C92032 / C91962;
    const double C92096 = C92030 / C91962;
    const double C92095 = C92029 / C91962;
    const double C92092 = C92026 / C91962;
    const double C92091 = C92025 / C91962;
    const double C92089 = C92021 / C91962;
    const double C92086 = C92018 / C91962;
    const double C92085 = C92017 / C91962;
    const double C92084 = C92015 / C91962;
    const double C92167 = C91991 * C92109;
    const double C92165 = C91989 * C92109;
    const double C92162 = C91988 * C92109;
    const double C92160 = C91984 * C92109;
    const double C92156 = C91979 * C92109;
    const double C92154 = C91977 * C92109;
    const double C92168 = C91992 * C92110;
    const double C92166 = C91991 * C92110;
    const double C92163 = C91989 * C92110;
    const double C92161 = C91988 * C92110;
    const double C92157 = C91984 * C92110;
    const double C92155 = C91979 * C92110;
    const double C89041 =
        (((xCD * C92167) / q + (C91964 * C92168) / C91981) * C92045) / C92046;
    const double C90486 =
        (((yCD * C92167) / q + (C91969 * C92168) / C91981) * C92045) / C92046;
    const double C91925 =
        (((zCD * C92167) / q + (C91971 * C92168) / C91981) * C92045) / C92046;
    const double C88943 =
        (((xCD * C92165) / q + (C91964 * C92166) / C91981) * C92045) / C92046;
    const double C90396 =
        (((yCD * C92165) / q + (C91969 * C92166) / C91981) * C92045) / C92046;
    const double C91835 =
        (((zCD * C92165) / q + (C91971 * C92166) / C91981) * C92045) / C92046;
    const double C88769 =
        (((xCD * C92162) / q + (C91964 * C92163) / C91981) * C92045) / C92046;
    const double C90225 =
        (((yCD * C92162) / q + (C91969 * C92163) / C91981) * C92045) / C92046;
    const double C91664 =
        (((zCD * C92162) / q + (C91971 * C92163) / C91981) * C92045) / C92046;
    const double C88396 =
        (((xCD * C92160) / q + (C91964 * C92161) / C91981) * C92045) / C92046;
    const double C89837 =
        (((yCD * C92160) / q + (C91969 * C92161) / C91981) * C92045) / C92046;
    const double C91279 =
        (((zCD * C92160) / q + (C91971 * C92161) / C91981) * C92045) / C92046;
    const double C87660 =
        (((xCD * C92156) / q + (C91964 * C92157) / C91981) * C92045) / C92046;
    const double C89133 =
        (((yCD * C92156) / q + (C91969 * C92157) / C91981) * C92045) / C92046;
    const double C90578 =
        (((zCD * C92156) / q + (C91971 * C92157) / C91981) * C92045) / C92046;
    const double C87659 =
        (((xCD * C92154) / q + (C91964 * C92155) / C91981) * C92045) / C92046;
    const double C89132 =
        (((yCD * C92154) / q + (C91969 * C92155) / C91981) * C92045) / C92046;
    const double C90577 =
        (((zCD * C92154) / q + (C91971 * C92155) / C91981) * C92045) / C92046;
    const double C91990 = C88943 * C87608;
    const double C88965 =
        C92123 - (C88943 * C91963) / p - (C89041 * C92016) / C87610;
    const double C88992 = -((C88943 * C91968) / p + (C89041 * C92022) / C87610);
    const double C89019 = -((C88943 * C91970) / p + (C89041 * C92023) / C87610);
    const double C92003 = C90396 * C87608;
    const double C90410 = -((C90396 * C91963) / p + (C90486 * C92016) / C87610);
    const double C90438 =
        C92123 - (C90396 * C91968) / p - (C90486 * C92022) / C87610;
    const double C90465 = -((C90396 * C91970) / p + (C90486 * C92023) / C87610);
    const double C92014 = C91835 * C87608;
    const double C91849 = -((C91835 * C91963) / p + (C91925 * C92016) / C87610);
    const double C91876 = -((C91835 * C91968) / p + (C91925 * C92022) / C87610);
    const double C91904 =
        C92123 - (C91835 * C91970) / p - (C91925 * C92023) / C87610;
    const double C91987 = C88769 * C87608;
    const double C88768 =
        C92121 - (C88769 * C91963) / p - (C88943 * C92016) / C87610;
    const double C88819 = -((C88769 * C91968) / p + (C88943 * C92022) / C87610);
    const double C88874 = -((C88769 * C91970) / p + (C88943 * C92023) / C87610);
    const double C92002 = C90225 * C87608;
    const double C90239 = -((C90225 * C91963) / p + (C90396 * C92016) / C87610);
    const double C90281 =
        C92121 - (C90225 * C91968) / p - (C90396 * C92022) / C87610;
    const double C90335 = -((C90225 * C91970) / p + (C90396 * C92023) / C87610);
    const double C92013 = C91664 * C87608;
    const double C91678 = -((C91664 * C91963) / p + (C91835 * C92016) / C87610);
    const double C91719 = -((C91664 * C91968) / p + (C91835 * C92022) / C87610);
    const double C91774 =
        C92121 - (C91664 * C91970) / p - (C91835 * C92023) / C87610;
    const double C91976 = C88396 * C87608;
    const double C88381 =
        C92118 - (C88396 * C91963) / p - (C88769 * C92016) / C87610;
    const double C88468 = -((C88396 * C91968) / p + (C88769 * C92022) / C87610);
    const double C88579 = -((C88396 * C91970) / p + (C88769 * C92023) / C87610);
    const double C91999 = C89837 * C87608;
    const double C89851 = -((C89837 * C91963) / p + (C90225 * C92016) / C87610);
    const double C89908 =
        C92118 - (C89837 * C91968) / p - (C90225 * C92022) / C87610;
    const double C90016 = -((C89837 * C91970) / p + (C90225 * C92023) / C87610);
    const double C92010 = C91279 * C87608;
    const double C91293 = -((C91279 * C91963) / p + (C91664 * C92016) / C87610);
    const double C91349 = -((C91279 * C91968) / p + (C91664 * C92022) / C87610);
    const double C91457 =
        C92118 - (C91279 * C91970) / p - (C91664 * C92023) / C87610;
    const double C91967 = C87660 * C87608;
    const double C87629 =
        C92107 - (C87660 * C91963) / p - (C88396 * C92016) / C87610;
    const double C87811 = -((C87660 * C91968) / p + (C88396 * C92022) / C87610);
    const double C87914 = -((C87660 * C91970) / p + (C88396 * C92023) / C87610);
    const double C91994 = C89133 * C87608;
    const double C89089 = -((C89133 * C91963) / p + (C89837 * C92016) / C87610);
    const double C89281 =
        C92107 - (C89133 * C91968) / p - (C89837 * C92022) / C87610;
    const double C89381 = -((C89133 * C91970) / p + (C89837 * C92023) / C87610);
    const double C92005 = C90578 * C87608;
    const double C90534 = -((C90578 * C91963) / p + (C91279 * C92016) / C87610);
    const double C90725 = -((C90578 * C91968) / p + (C91279 * C92022) / C87610);
    const double C90825 =
        C92107 - (C90578 * C91970) / p - (C91279 * C92023) / C87610;
    const double C83303 =
        C92089 - (C87659 * C91963) / p - (C87660 * C92016) / C87610;
    const double C83770 = -((C87659 * C91968) / p + (C87660 * C92022) / C87610);
    const double C84204 = -((C87659 * C91970) / p + (C87660 * C92023) / C87610);
    const double C84689 = -((C89132 * C91963) / p + (C89133 * C92016) / C87610);
    const double C85147 =
        C92089 - (C89132 * C91968) / p - (C89133 * C92022) / C87610;
    const double C85572 = -((C89132 * C91970) / p + (C89133 * C92023) / C87610);
    const double C86047 = -((C90577 * C91963) / p + (C90578 * C92016) / C87610);
    const double C86505 = -((C90577 * C91968) / p + (C90578 * C92022) / C87610);
    const double C86930 =
        C92089 - (C90577 * C91970) / p - (C90578 * C92023) / C87610;
    const double C92058 = C91990 / C87610;
    const double C92072 = C92003 / C87610;
    const double C92083 = C92014 / C87610;
    const double C92053 = C91987 / C87610;
    const double C92071 = C92002 / C87610;
    const double C92082 = C92013 / C87610;
    const double C92040 = C91976 / C87610;
    const double C92067 = C91999 / C87610;
    const double C92079 = C92010 / C87610;
    const double C92020 = C91967 / C87610;
    const double C87972 = -((C87914 * C91968) / p + (C88579 * C92022) / C87610);
    const double C92061 = C91994 / C87610;
    const double C89439 =
        C92134 - (C89381 * C91968) / p - (C90016 * C92022) / C87610;
    const double C92074 = C92005 / C87610;
    const double C90881 = -((C90825 * C91968) / p + (C91457 * C92022) / C87610);
    const double C83427 =
        C92092 - (C83770 * C91963) / p - (C87811 * C92016) / C87610;
    const double C83520 =
        C92096 - (C84204 * C91963) / p - (C87914 * C92016) / C87610;
    const double C83955 = -((C84204 * C91968) / p + (C87914 * C92022) / C87610);
    const double C84811 = -((C85147 * C91963) / p + (C89281 * C92016) / C87610);
    const double C84902 = -((C85572 * C91963) / p + (C89381 * C92016) / C87610);
    const double C85328 =
        C92096 - (C85572 * C91968) / p - (C89381 * C92022) / C87610;
    const double C86169 = -((C86505 * C91963) / p + (C90725 * C92016) / C87610);
    const double C86260 = -((C86930 * C91963) / p + (C90825 * C92016) / C87610);
    const double C86686 = -((C86930 * C91968) / p + (C90825 * C92022) / C87610);
    const double C92122 = C88769 - C92058;
    const double C92136 = C90225 - C92072;
    const double C92147 = C91664 - C92083;
    const double C92117 = C88396 - C92053;
    const double C92135 = C89837 - C92071;
    const double C92146 = C91279 - C92082;
    const double C92106 = C87660 - C92040;
    const double C92131 = C89133 - C92067;
    const double C92143 = C90578 - C92079;
    const double C92088 = C87659 - C92020;
    const double C92125 = C89132 - C92061;
    const double C92138 = C90577 - C92074;
    const double C83681 = (C87968 * C91961) / C91962 - (C83955 * C91963) / p -
                          (C87972 * C92016) / C87610;
    const double C85060 = -((C85328 * C91963) / p + (C89439 * C92016) / C87610);
    const double C86418 = -((C86686 * C91963) / p + (C90881 * C92016) / C87610);
    const double C92164 = C92122 / C91965;
    const double C92177 = C92136 / C91965;
    const double C92186 = C92147 / C91965;
    const double C92159 = C92117 / C91965;
    const double C92176 = C92135 / C91965;
    const double C92185 = C92146 / C91965;
    const double C92153 = C92106 / C91965;
    const double C92174 = C92131 / C91965;
    const double C92183 = C92143 / C91965;
    const double C92148 = C92088 / C91965;
    const double C92169 = C92125 / C91965;
    const double C92178 = C92138 / C91965;
    const double C88805 = (C88961 * C91961) / C91962 - (C88768 * C91963) / p -
                          (C88965 * C92016) / C87610 + C92164;
    const double C88846 =
        C92164 - ((C88819 * C91968) / p + (C88992 * C92022) / C87610);
    const double C88902 =
        C92164 - ((C88874 * C91970) / p + (C89019 * C92023) / C87610);
    const double C90253 =
        C92177 - ((C90239 * C91963) / p + (C90410 * C92016) / C87610);
    const double C90295 = (C90433 * C91961) / C91962 - (C90281 * C91968) / p -
                          (C90438 * C92022) / C87610 + C92177;
    const double C90349 =
        C92177 - ((C90335 * C91970) / p + (C90465 * C92023) / C87610);
    const double C91692 =
        C92186 - ((C91678 * C91963) / p + (C91849 * C92016) / C87610);
    const double C91733 =
        C92186 - ((C91719 * C91968) / p + (C91876 * C92022) / C87610);
    const double C91788 = (C91898 * C91961) / C91962 - (C91774 * C91970) / p -
                          (C91904 * C92023) / C87610 + C92186;
    const double C88380 = (C88764 * C91961) / C91962 - (C88381 * C91963) / p -
                          (C88768 * C92016) / C87610 + C92159;
    const double C88454 =
        C92159 - ((C88468 * C91968) / p + (C88819 * C92022) / C87610);
    const double C88565 =
        C92159 - ((C88579 * C91970) / p + (C88874 * C92023) / C87610);
    const double C89865 =
        C92176 - ((C89851 * C91963) / p + (C90239 * C92016) / C87610);
    const double C89922 = (C90276 * C91961) / C91962 - (C89908 * C91968) / p -
                          (C90281 * C92022) / C87610 + C92176;
    const double C90030 =
        C92176 - ((C90016 * C91970) / p + (C90335 * C92023) / C87610);
    const double C91307 =
        C92185 - ((C91293 * C91963) / p + (C91678 * C92016) / C87610);
    const double C91363 =
        C92185 - ((C91349 * C91968) / p + (C91719 * C92022) / C87610);
    const double C91471 = (C91768 * C91961) / C91962 - (C91457 * C91970) / p -
                          (C91774 * C92023) / C87610 + C92185;
    const double C87614 = (C88392 * C91961) / C91962 - (C87629 * C91963) / p -
                          (C88381 * C92016) / C87610 + C92153;
    const double C87768 =
        C92153 - ((C87811 * C91968) / p + (C88468 * C92022) / C87610);
    const double C87871 =
        C92153 - ((C87914 * C91970) / p + (C88579 * C92023) / C87610);
    const double C89090 =
        C92174 - ((C89089 * C91963) / p + (C89851 * C92016) / C87610);
    const double C89238 = (C89903 * C91961) / C91962 - (C89281 * C91968) / p -
                          (C89908 * C92022) / C87610 + C92174;
    const double C89339 =
        C92174 - ((C89381 * C91970) / p + (C90016 * C92023) / C87610);
    const double C90535 =
        C92183 - ((C90534 * C91963) / p + (C91293 * C92016) / C87610);
    const double C90683 =
        C92183 - ((C90725 * C91968) / p + (C91349 * C92022) / C87610);
    const double C90783 =
        C92134 - (C90825 * C91970) / p - (C91457 * C92023) / C87610 + C92183;
    const double C83287 = (C87655 * C91961) / C91962 - (C83303 * C91963) / p -
                          (C87629 * C92016) / C87610 + C92148;
    const double C83725 =
        C92148 - ((C83770 * C91968) / p + (C87811 * C92022) / C87610);
    const double C84130 =
        C92148 - ((C84204 * C91970) / p + (C87914 * C92023) / C87610);
    const double C84674 =
        C92169 - ((C84689 * C91963) / p + (C89089 * C92016) / C87610);
    const double C85103 =
        C92092 - (C85147 * C91968) / p - (C89281 * C92022) / C87610 + C92169;
    const double C85499 =
        C92169 - ((C85572 * C91970) / p + (C89381 * C92023) / C87610);
    const double C86032 =
        C92178 - ((C86047 * C91963) / p + (C90534 * C92016) / C87610);
    const double C86461 =
        C92178 - ((C86505 * C91968) / p + (C90725 * C92022) / C87610);
    const double C86857 =
        C92096 - (C86930 * C91970) / p - (C90825 * C92023) / C87610 + C92178;
    const double C88425 = (C88801 * C91961) / C91962 - (C88380 * C91963) / p -
                          (C88805 * C92016) / C87610 +
                          (C88381 - (C88768 * C87608) / C87610) / p;
    const double C91985 = C88454 * C87608;
    const double C88509 = (C88468 - (C88819 * C87608) / C87610) / p -
                          ((C88454 * C91968) / p + (C88846 * C92022) / C87610);
    const double C88537 =
        C92119 - (C88454 * C91963) / p - (C88846 * C92016) / C87610;
    const double C91986 = C88565 * C87608;
    const double C88620 =
        C92120 - (C88565 * C91963) / p - (C88902 * C92016) / C87610;
    const double C88635 = (C88579 - (C88874 * C87608) / C87610) / p -
                          ((C88565 * C91970) / p + (C88902 * C92023) / C87610);
    const double C88714 = -((C88565 * C91968) / p + (C88902 * C92022) / C87610);
    const double C89879 = (C89851 - (C90239 * C87608) / C87610) / p -
                          ((C89865 * C91963) / p + (C90253 * C92016) / C87610);
    const double C92000 = C89922 * C87608;
    const double C89975 = C92119 - (C89922 * C91968) / p -
                          (C90295 * C92022) / C87610 +
                          (C89908 - (C90281 * C87608) / C87610) / p;
    const double C89989 = -((C89922 * C91963) / p + (C90295 * C92016) / C87610);
    const double C92001 = C90030 * C87608;
    const double C90070 = -((C90030 * C91963) / p + (C90349 * C92016) / C87610);
    const double C90097 = (C90016 - (C90335 * C87608) / C87610) / p -
                          ((C90030 * C91970) / p + (C90349 * C92023) / C87610);
    const double C90165 =
        C92120 - (C90030 * C91968) / p - (C90349 * C92022) / C87610;
    const double C91321 = (C91293 - (C91678 * C87608) / C87610) / p -
                          ((C91307 * C91963) / p + (C91692 * C92016) / C87610);
    const double C92011 = C91363 * C87608;
    const double C91416 = (C91349 - (C91719 * C87608) / C87610) / p -
                          ((C91363 * C91968) / p + (C91733 * C92022) / C87610);
    const double C91430 = -((C91363 * C91963) / p + (C91733 * C92016) / C87610);
    const double C92012 = C91471 * C87608;
    const double C91511 = -((C91471 * C91963) / p + (C91788 * C92016) / C87610);
    const double C91538 = C92120 - (C91471 * C91970) / p -
                          (C91788 * C92023) / C87610 +
                          (C91457 - (C91774 * C87608) / C87610) / p;
    const double C91604 = -((C91471 * C91968) / p + (C91788 * C92022) / C87610);
    const double C87613 = C92105 - (C87614 * C91963) / p -
                          (C88380 * C92016) / C87610 +
                          (C87629 - (C88381 * C87608) / C87610) / p;
    const double C87855 = -((C87614 * C91970) / p + (C88380 * C92023) / C87610);
    const double C91972 = C87768 * C87608;
    const double C87767 =
        C92111 - (C87768 * C91963) / p - (C88454 * C92016) / C87610;
    const double C87827 = (C87811 - (C88468 * C87608) / C87610) / p -
                          ((C87768 * C91968) / p + (C88454 * C92022) / C87610);
    const double C88040 = -((C87768 * C91970) / p + (C88454 * C92023) / C87610);
    const double C91974 = C87871 * C87608;
    const double C87870 =
        C92114 - (C87871 * C91963) / p - (C88565 * C92016) / C87610;
    const double C87944 = (C87914 - (C88579 * C87608) / C87610) / p -
                          ((C87871 * C91970) / p + (C88565 * C92023) / C87610);
    const double C88134 = -((C87871 * C91968) / p + (C88565 * C92022) / C87610);
    const double C89104 = (C89089 - (C89851 * C87608) / C87610) / p -
                          ((C89090 * C91963) / p + (C89865 * C92016) / C87610);
    const double C89325 = -((C89090 * C91970) / p + (C89865 * C92023) / C87610);
    const double C91995 = C89238 * C87608;
    const double C89252 = -((C89238 * C91963) / p + (C89922 * C92016) / C87610);
    const double C89295 = C92111 - (C89238 * C91968) / p -
                          (C89922 * C92022) / C87610 +
                          (C89281 - (C89908 * C87608) / C87610) / p;
    const double C89505 = -((C89238 * C91970) / p + (C89922 * C92023) / C87610);
    const double C91997 = C89339 * C87608;
    const double C89353 = -((C89339 * C91963) / p + (C90030 * C92016) / C87610);
    const double C89410 = (C89381 - (C90016 * C87608) / C87610) / p -
                          ((C89339 * C91970) / p + (C90030 * C92023) / C87610);
    const double C89598 =
        C92114 - (C89339 * C91968) / p - (C90030 * C92022) / C87610;
    const double C90549 = (C90534 - (C91293 * C87608) / C87610) / p -
                          ((C90535 * C91963) / p + (C91307 * C92016) / C87610);
    const double C90769 =
        C92105 - (C90535 * C91970) / p - (C91307 * C92023) / C87610;
    const double C92006 = C90683 * C87608;
    const double C90697 = -((C90683 * C91963) / p + (C91363 * C92016) / C87610);
    const double C90739 = (C90725 - (C91349 * C87608) / C87610) / p -
                          ((C90683 * C91968) / p + (C91363 * C92022) / C87610);
    const double C90947 =
        C92111 - (C90683 * C91970) / p - (C91363 * C92023) / C87610;
    const double C92008 = C90783 * C87608;
    const double C90797 = -((C90783 * C91963) / p + (C91471 * C92016) / C87610);
    const double C90853 = C92114 - (C90783 * C91970) / p -
                          (C91471 * C92023) / C87610 +
                          (C90825 - (C91457 * C87608) / C87610) / p;
    const double C91040 = -((C90783 * C91968) / p + (C91471 * C92022) / C87610);
    const double C83270 = C92085 - (C83287 * C91963) / p -
                          (C87614 * C92016) / C87610 +
                          (C83303 - (C87629 * C87608) / C87610) / p;
    const double C83348 = -((C83287 * C91968) / p + (C87614 * C92022) / C87610);
    const double C83393 = -((C83287 * C91970) / p + (C87614 * C92023) / C87610);
    const double C83410 =
        C92091 - (C83725 * C91963) / p - (C87768 * C92016) / C87610;
    const double C83771 = (C83770 - (C87811 * C87608) / C87610) / p -
                          ((C83725 * C91968) / p + (C87768 * C92022) / C87610);
    const double C83801 = -((C83725 * C91970) / p + (C87768 * C92023) / C87610);
    const double C83503 =
        C92095 - (C84130 * C91963) / p - (C87871 * C92016) / C87610;
    const double C83939 = -((C84130 * C91968) / p + (C87871 * C92022) / C87610);
    const double C84205 = (C84204 - (C87914 * C87608) / C87610) / p -
                          ((C84130 * C91970) / p + (C87871 * C92023) / C87610);
    const double C84657 = (C84689 - (C89089 * C87608) / C87610) / p -
                          ((C84674 * C91963) / p + (C89090 * C92016) / C87610);
    const double C84734 =
        C92085 - (C84674 * C91968) / p - (C89090 * C92022) / C87610;
    const double C84779 = -((C84674 * C91970) / p + (C89090 * C92023) / C87610);
    const double C84794 = -((C85103 * C91963) / p + (C89238 * C92016) / C87610);
    const double C85148 = C92091 - (C85103 * C91968) / p -
                          (C89238 * C92022) / C87610 +
                          (C85147 - (C89281 * C87608) / C87610) / p;
    const double C85178 = -((C85103 * C91970) / p + (C89238 * C92023) / C87610);
    const double C84885 = -((C85499 * C91963) / p + (C89339 * C92016) / C87610);
    const double C85312 =
        C92095 - (C85499 * C91968) / p - (C89339 * C92022) / C87610;
    const double C85573 = (C85572 - (C89381 * C87608) / C87610) / p -
                          ((C85499 * C91970) / p + (C89339 * C92023) / C87610);
    const double C86015 = (C86047 - (C90534 * C87608) / C87610) / p -
                          ((C86032 * C91963) / p + (C90535 * C92016) / C87610);
    const double C86092 = -((C86032 * C91968) / p + (C90535 * C92022) / C87610);
    const double C86137 =
        C92085 - (C86032 * C91970) / p - (C90535 * C92023) / C87610;
    const double C86152 = -((C86461 * C91963) / p + (C90683 * C92016) / C87610);
    const double C86506 = (C86505 - (C90725 * C87608) / C87610) / p -
                          ((C86461 * C91968) / p + (C90683 * C92022) / C87610);
    const double C86536 =
        C92091 - (C86461 * C91970) / p - (C90683 * C92023) / C87610;
    const double C86243 = -((C86857 * C91963) / p + (C90783 * C92016) / C87610);
    const double C86670 = -((C86857 * C91968) / p + (C90783 * C92022) / C87610);
    const double C86931 = C92095 - (C86857 * C91970) / p -
                          (C90783 * C92023) / C87610 +
                          (C86930 - (C90825 * C87608) / C87610) / p;
    const double C92049 = C91985 / C87610;
    const double C92051 = C91986 / C87610;
    const double C92068 = C92000 / C87610;
    const double C92069 = C92001 / C87610;
    const double C92080 = C92011 / C87610;
    const double C92081 = C92012 / C87610;
    const double C91966 = C87613 * C87608;
    const double C87644 = C92108 - (C87613 * C91963) / p -
                          (C88425 * C92016) / C87610 +
                          (3 * (C87614 - (C88380 * C87608) / C87610)) / C91965;
    const double C87796 = -((C87613 * C91968) / p + (C88425 * C92022) / C87610);
    const double C87899 = -((C87613 * C91970) / p + (C88425 * C92023) / C87610);
    const double C92024 = C91972 / C87610;
    const double C91973 = C87827 * C87608;
    const double C87826 =
        C92112 - (C87827 * C91963) / p - (C88509 * C92016) / C87610;
    const double C88176 = -((C87827 * C91970) / p + (C88509 * C92023) / C87610);
    const double C92028 = C91974 / C87610;
    const double C91975 = C87944 * C87608;
    const double C87943 =
        C92116 - (C87944 * C91963) / p - (C88635 * C92016) / C87610;
    const double C88203 = -((C87944 * C91968) / p + (C88635 * C92022) / C87610);
    const double C91993 = C89104 * C87608;
    const double C89118 = (3 * (C89090 - (C89865 * C87608) / C87610)) / C91965 -
                          ((C89104 * C91963) / p + (C89879 * C92016) / C87610);
    const double C89267 =
        C92108 - (C89104 * C91968) / p - (C89879 * C92022) / C87610;
    const double C89367 = -((C89104 * C91970) / p + (C89879 * C92023) / C87610);
    const double C92062 = C91995 / C87610;
    const double C91996 = C89295 * C87608;
    const double C89296 = -((C89295 * C91963) / p + (C89975 * C92016) / C87610);
    const double C89639 = -((C89295 * C91970) / p + (C89975 * C92023) / C87610);
    const double C92064 = C91997 / C87610;
    const double C91998 = C89410 * C87608;
    const double C89411 = -((C89410 * C91963) / p + (C90097 * C92016) / C87610);
    const double C89666 =
        C92116 - (C89410 * C91968) / p - (C90097 * C92022) / C87610;
    const double C92004 = C90549 * C87608;
    const double C90563 = (3 * (C90535 - (C91307 * C87608) / C87610)) / C91965 -
                          ((C90549 * C91963) / p + (C91321 * C92016) / C87610);
    const double C90711 = -((C90549 * C91968) / p + (C91321 * C92022) / C87610);
    const double C90811 =
        C92108 - (C90549 * C91970) / p - (C91321 * C92023) / C87610;
    const double C92075 = C92006 / C87610;
    const double C92007 = C90739 * C87608;
    const double C90740 = -((C90739 * C91963) / p + (C91416 * C92016) / C87610);
    const double C91081 =
        C92112 - (C90739 * C91970) / p - (C91416 * C92023) / C87610;
    const double C92077 = C92008 / C87610;
    const double C92009 = C90853 * C87608;
    const double C90854 = -((C90853 * C91963) / p + (C91538 * C92016) / C87610);
    const double C91108 = -((C90853 * C91968) / p + (C91538 * C92022) / C87610);
    const double C83269 = C92084 - (C83270 * C91963) / p -
                          (C87613 * C92016) / C87610 +
                          (3 * (C83287 - (C87614 * C87608) / C87610)) / C91965;
    const double C83333 = -((C83270 * C91968) / p + (C87613 * C92022) / C87610);
    const double C83378 = -((C83270 * C91970) / p + (C87613 * C92023) / C87610);
    const double C83486 = -((C83393 * C91968) / p + (C87855 * C92022) / C87610);
    const double C83755 =
        C92098 - (C83771 * C91963) / p - (C87827 * C92016) / C87610;
    const double C83892 = -((C83771 * C91970) / p + (C87827 * C92023) / C87610);
    const double C83786 = (C88036 * C91961) / C91962 - (C83801 * C91963) / p -
                          (C88040 * C92016) / C87610;
    const double C84160 =
        C92101 - (C83939 * C91963) / p - (C88134 * C92016) / C87610;
    const double C84189 =
        C92102 - (C84205 * C91963) / p - (C87944 * C92016) / C87610;
    const double C84249 = -((C84205 * C91968) / p + (C87944 * C92022) / C87610);
    const double C84658 = (3 * (C84674 - (C89090 * C87608) / C87610)) / C91965 -
                          ((C84657 * C91963) / p + (C89104 * C92016) / C87610);
    const double C84719 =
        C92084 - (C84657 * C91968) / p - (C89104 * C92022) / C87610;
    const double C84764 = -((C84657 * C91970) / p + (C89104 * C92023) / C87610);
    const double C84870 = (C89320 * C91961) / C91962 - (C84779 * C91968) / p -
                          (C89325 * C92022) / C87610;
    const double C85132 = -((C85148 * C91963) / p + (C89295 * C92016) / C87610);
    const double C85267 = -((C85148 * C91970) / p + (C89295 * C92023) / C87610);
    const double C85163 = -((C85178 * C91963) / p + (C89505 * C92016) / C87610);
    const double C85528 = -((C85312 * C91963) / p + (C89598 * C92016) / C87610);
    const double C85557 = -((C85573 * C91963) / p + (C89410 * C92016) / C87610);
    const double C85616 =
        C92102 - (C85573 * C91968) / p - (C89410 * C92022) / C87610;
    const double C86016 = (3 * (C86032 - (C90535 * C87608) / C87610)) / C91965 -
                          ((C86015 * C91963) / p + (C90549 * C92016) / C87610);
    const double C86077 = -((C86015 * C91968) / p + (C90549 * C92022) / C87610);
    const double C86122 =
        C92084 - (C86015 * C91970) / p - (C90549 * C92023) / C87610;
    const double C86228 = -((C86137 * C91968) / p + (C90769 * C92022) / C87610);
    const double C86490 = -((C86506 * C91963) / p + (C90739 * C92016) / C87610);
    const double C86625 =
        C92098 - (C86506 * C91970) / p - (C90739 * C92023) / C87610;
    const double C86521 = -((C86536 * C91963) / p + (C90947 * C92016) / C87610);
    const double C86886 = -((C86670 * C91963) / p + (C91040 * C92016) / C87610);
    const double C86915 = -((C86931 * C91963) / p + (C90853 * C92016) / C87610);
    const double C86974 = -((C86931 * C91968) / p + (C90853 * C92022) / C87610);
    const double C92113 = C87768 - C92049;
    const double C92115 = C87871 - C92051;
    const double C92132 = C89238 - C92068;
    const double C92133 = C89339 - C92069;
    const double C92144 = C90683 - C92080;
    const double C92145 = C90783 - C92081;
    const double C92019 = C91966 / C87610;
    const double C92090 = C83725 - C92024;
    const double C92027 = C91973 / C87610;
    const double C92094 = C84130 - C92028;
    const double C92031 = C91975 / C87610;
    const double C92060 = C91993 / C87610;
    const double C92126 = C85103 - C92062;
    const double C92063 = C91996 / C87610;
    const double C92128 = C85499 - C92064;
    const double C92065 = C91998 / C87610;
    const double C92073 = C92004 / C87610;
    const double C92139 = C86461 - C92075;
    const double C92076 = C92007 / C87610;
    const double C92141 = C86857 - C92077;
    const double C92078 = C92009 / C87610;
    const double C83318 = -((C83269 * C91968) / p + (C87644 * C92022) / C87610);
    const double C83363 = -((C83269 * C91970) / p + (C87644 * C92023) / C87610);
    const double C83622 = -((C83378 * C91968) / p + (C87899 * C92022) / C87610);
    const double C84028 =
        C92100 - (C83892 * C91963) / p - (C88176 * C92016) / C87610;
    const double C84383 =
        C92104 - (C84249 * C91963) / p - (C88203 * C92016) / C87610;
    const double C84704 =
        C92086 - (C84658 * C91968) / p - (C89118 * C92022) / C87610;
    const double C84749 = -((C84658 * C91970) / p + (C89118 * C92023) / C87610);
    const double C85003 =
        C92130 - (C84764 * C91968) / p - (C89367 * C92022) / C87610;
    const double C85400 = -((C85267 * C91963) / p + (C89639 * C92016) / C87610);
    const double C85747 = -((C85616 * C91963) / p + (C89666 * C92016) / C87610);
    const double C86062 = -((C86016 * C91968) / p + (C90563 * C92022) / C87610);
    const double C86107 =
        C92086 - (C86016 * C91970) / p - (C90563 * C92023) / C87610;
    const double C86361 = -((C86122 * C91968) / p + (C90811 * C92022) / C87610);
    const double C86758 = -((C86625 * C91963) / p + (C91081 * C92016) / C87610);
    const double C87105 = -((C86974 * C91963) / p + (C91108 * C92016) / C87610);
    const double C87841 = (C88533 * C91961) / C91962 - (C87767 * C91963) / p -
                          (C88537 * C92016) / C87610 + C92113 / C91965;
    const double C88081 = (3 * C92113) / C91965 -
                          ((C87827 * C91968) / p + (C88509 * C92022) / C87610);
    const double C92158 = C92115 / C91965;
    const double C88325 = (3 * C92115) / C91965 -
                          ((C87944 * C91970) / p + (C88635 * C92023) / C87610);
    const double C89310 =
        C92132 / C91965 - ((C89252 * C91963) / p + (C89989 * C92016) / C87610);
    const double C89545 = C92112 - (C89295 * C91968) / p -
                          (C89975 * C92022) / C87610 + (3 * C92132) / C91965;
    const double C92175 = C92133 / C91965;
    const double C89784 = (3 * C92133) / C91965 -
                          ((C89410 * C91970) / p + (C90097 * C92023) / C87610);
    const double C90755 =
        C92144 / C91965 - ((C90697 * C91963) / p + (C91430 * C92016) / C87610);
    const double C90987 = (3 * C92144) / C91965 -
                          ((C90739 * C91968) / p + (C91416 * C92022) / C87610);
    const double C92184 = C92145 / C91965;
    const double C91226 = C92116 - (C90853 * C91970) / p -
                          (C91538 * C92023) / C87610 + (3 * C92145) / C91965;
    const double C92087 = C83270 - C92019;
    const double C83409 = (C87763 * C91961) / C91962 - (C83410 * C91963) / p -
                          (C87767 * C92016) / C87610 + C92090 / C91965;
    const double C83817 = (3 * C92090) / C91965 -
                          ((C83771 * C91968) / p + (C87827 * C92022) / C87610);
    const double C92093 = C83771 - C92027;
    const double C92151 = C92094 / C91965;
    const double C84265 = (3 * C92094) / C91965 -
                          ((C84205 * C91970) / p + (C87944 * C92023) / C87610);
    const double C92097 = C84205 - C92031;
    const double C92124 = C84657 - C92060;
    const double C84795 =
        C92126 / C91965 - ((C84794 * C91963) / p + (C89252 * C92016) / C87610);
    const double C85193 = C92098 - (C85148 * C91968) / p -
                          (C89295 * C92022) / C87610 + (3 * C92126) / C91965;
    const double C92127 = C85148 - C92063;
    const double C92172 = C92128 / C91965;
    const double C85631 = (3 * C92128) / C91965 -
                          ((C85573 * C91970) / p + (C89410 * C92023) / C87610);
    const double C92129 = C85573 - C92065;
    const double C92137 = C86015 - C92073;
    const double C86153 =
        C92139 / C91965 - ((C86152 * C91963) / p + (C90697 * C92016) / C87610);
    const double C86551 = (3 * C92139) / C91965 -
                          ((C86506 * C91968) / p + (C90739 * C92022) / C87610);
    const double C92140 = C86506 - C92076;
    const double C92181 = C92141 / C91965;
    const double C86989 = C92102 - (C86931 * C91970) / p -
                          (C90853 * C92023) / C87610 + (3 * C92141) / C91965;
    const double C92142 = C86931 - C92078;
    const double C87928 = (C88616 * C91961) / C91962 - (C87870 * C91963) / p -
                          (C88620 * C92016) / C87610 + C92158;
    const double C88149 =
        C92158 - ((C88134 * C91968) / p + (C88714 * C92022) / C87610);
    const double C89396 =
        C92175 - ((C89353 * C91963) / p + (C90070 * C92016) / C87610);
    const double C89612 = (C90160 * C91961) / C91962 - (C89598 * C91968) / p -
                          (C90165 * C92022) / C87610 + C92175;
    const double C90839 =
        C92184 - ((C90797 * C91963) / p + (C91511 * C92016) / C87610);
    const double C91054 =
        C92184 - ((C91040 * C91968) / p + (C91604 * C92022) / C87610);
    const double C92149 = C92087 / C91965;
    const double C83271 = C92086 - (C83269 * C91963) / p -
                          (C87644 * C92016) / C87610 + (2 * C92087) / p;
    const double C83471 = -((C83409 * C91970) / p + (C87841 * C92023) / C87610);
    const double C83818 =
        C92099 - (C83817 * C91963) / p - (C88081 * C92016) / C87610;
    const double C83877 = -((C83817 * C91970) / p + (C88081 * C92023) / C87610);
    const double C92150 = C92093 / C91965;
    const double C83848 =
        (2 * C92093) / p - ((C83817 * C91968) / p + (C88081 * C92022) / C87610);
    const double C83502 = (C87866 * C91961) / C91962 - (C83503 * C91963) / p -
                          (C87870 * C92016) / C87610 + C92151;
    const double C83908 =
        C92151 - ((C83939 * C91968) / p + (C88134 * C92022) / C87610);
    const double C84266 =
        C92103 - (C84265 * C91963) / p - (C88325 * C92016) / C87610;
    const double C84296 = -((C84265 * C91968) / p + (C88325 * C92022) / C87610);
    const double C92152 = C92097 / C91965;
    const double C84325 =
        (2 * C92097) / p - ((C84265 * C91970) / p + (C88325 * C92023) / C87610);
    const double C92170 = C92124 / C91965;
    const double C84659 =
        (2 * C92124) / p - ((C84658 * C91963) / p + (C89118 * C92016) / C87610);
    const double C84855 = -((C84795 * C91970) / p + (C89310 * C92023) / C87610);
    const double C85194 = -((C85193 * C91963) / p + (C89545 * C92016) / C87610);
    const double C85252 = -((C85193 * C91970) / p + (C89545 * C92023) / C87610);
    const double C92171 = C92127 / C91965;
    const double C85223 = C92099 - (C85193 * C91968) / p -
                          (C89545 * C92022) / C87610 + (2 * C92127) / p;
    const double C84886 =
        C92172 - ((C84885 * C91963) / p + (C89353 * C92016) / C87610);
    const double C85282 =
        C92101 - (C85312 * C91968) / p - (C89598 * C92022) / C87610 + C92172;
    const double C85632 = -((C85631 * C91963) / p + (C89784 * C92016) / C87610);
    const double C85661 =
        C92103 - (C85631 * C91968) / p - (C89784 * C92022) / C87610;
    const double C92173 = C92129 / C91965;
    const double C85690 =
        (2 * C92129) / p - ((C85631 * C91970) / p + (C89784 * C92023) / C87610);
    const double C92179 = C92137 / C91965;
    const double C86017 =
        (2 * C92137) / p - ((C86016 * C91963) / p + (C90563 * C92016) / C87610);
    const double C86213 = (C90749 * C91961) / C91962 - (C86153 * C91970) / p -
                          (C90755 * C92023) / C87610;
    const double C86552 = -((C86551 * C91963) / p + (C90987 * C92016) / C87610);
    const double C86610 =
        C92099 - (C86551 * C91970) / p - (C90987 * C92023) / C87610;
    const double C92180 = C92140 / C91965;
    const double C86581 =
        (2 * C92140) / p - ((C86551 * C91968) / p + (C90987 * C92022) / C87610);
    const double C86244 =
        C92181 - ((C86243 * C91963) / p + (C90797 * C92016) / C87610);
    const double C86640 =
        C92181 - ((C86670 * C91968) / p + (C91040 * C92022) / C87610);
    const double C86990 = -((C86989 * C91963) / p + (C91226 * C92016) / C87610);
    const double C87019 = -((C86989 * C91968) / p + (C91226 * C92022) / C87610);
    const double C92182 = C92142 / C91965;
    const double C87048 = C92103 - (C86989 * C91970) / p -
                          (C91226 * C92023) / C87610 + (2 * C92142) / p;
    const double C83411 =
        C92149 - ((C83333 * C91968) / p + (C87796 * C92022) / C87610);
    const double C83504 =
        C92149 - ((C83378 * C91970) / p + (C87899 * C92023) / C87610);
    const double C83442 = (C87822 * C91961) / C91962 - (C83755 * C91963) / p -
                          (C87826 * C92016) / C87610 + C92150;
    const double C83940 =
        C92150 - ((C83892 * C91970) / p + (C88176 * C92023) / C87610);
    const double C83535 = -((C83502 * C91968) / p + (C87928 * C92022) / C87610);
    const double C83909 = (C88145 * C91961) / C91962 - (C83908 * C91963) / p -
                          (C88149 * C92016) / C87610;
    const double C83564 = (C87939 * C91961) / C91962 - (C84189 * C91963) / p -
                          (C87943 * C92016) / C87610 + C92152;
    const double C83970 =
        C92152 - ((C84249 * C91968) / p + (C88203 * C92022) / C87610);
    const double C84796 = (C89262 * C91961) / C91962 - (C84719 * C91968) / p -
                          (C89267 * C92022) / C87610 + C92170;
    const double C84887 =
        C92170 - ((C84764 * C91970) / p + (C89367 * C92023) / C87610);
    const double C84826 =
        C92171 - ((C85132 * C91963) / p + (C89296 * C92016) / C87610);
    const double C85313 =
        C92171 - ((C85267 * C91970) / p + (C89639 * C92023) / C87610);
    const double C84917 = (C89391 * C91961) / C91962 - (C84886 * C91968) / p -
                          (C89396 * C92022) / C87610;
    const double C85283 = -((C85282 * C91963) / p + (C89612 * C92016) / C87610);
    const double C84946 =
        C92173 - ((C85557 * C91963) / p + (C89411 * C92016) / C87610);
    const double C85343 =
        C92104 - (C85616 * C91968) / p - (C89666 * C92022) / C87610 + C92173;
    const double C86154 =
        C92179 - ((C86077 * C91968) / p + (C90711 * C92022) / C87610);
    const double C86245 =
        C92130 - (C86122 * C91970) / p - (C90811 * C92023) / C87610 + C92179;
    const double C86184 =
        C92180 - ((C86490 * C91963) / p + (C90740 * C92016) / C87610);
    const double C86671 =
        C92100 - (C86625 * C91970) / p - (C91081 * C92023) / C87610 + C92180;
    const double C86275 = -((C86244 * C91968) / p + (C90839 * C92022) / C87610);
    const double C86641 = -((C86640 * C91963) / p + (C91054 * C92016) / C87610);
    const double C86304 =
        C92182 - ((C86915 * C91963) / p + (C90854 * C92016) / C87610);
    const double C86701 =
        C92182 - ((C86974 * C91968) / p + (C91108 * C92022) / C87610);
    vrx[0] = C83269;
    vrx[1] = C83270;
    vrx[2] = C83271;
    vrx[3] = C83287;
    vrx[4] = C83303;
    vrx[5] = C83318;
    vrx[6] = C83333;
    vrx[7] = C83348;
    vrx[8] = C83363;
    vrx[9] = C83378;
    vrx[10] = C83393;
    vrx[11] = C83409;
    vrx[12] = C83410;
    vrx[13] = C83411;
    vrx[14] = C83427;
    vrx[15] = C83442;
    vrx[16] = C83471;
    vrx[17] = C83486;
    vrx[18] = C83502;
    vrx[19] = C83503;
    vrx[20] = C83504;
    vrx[21] = C83520;
    vrx[22] = C83535;
    vrx[23] = C83564;
    vrx[24] = C83622;
    vrx[25] = C83681;
    vrx[26] = C83725;
    vrx[27] = C83755;
    vrx[28] = C83770;
    vrx[29] = C83771;
    vrx[30] = C83786;
    vrx[31] = C83801;
    vrx[32] = C83817;
    vrx[33] = C83818;
    vrx[34] = C83848;
    vrx[35] = C83877;
    vrx[36] = C83892;
    vrx[37] = C83908;
    vrx[38] = C83909;
    vrx[39] = C83939;
    vrx[40] = C83940;
    vrx[41] = C83955;
    vrx[42] = C83970;
    vrx[43] = C84028;
    vrx[44] = C84130;
    vrx[45] = C84160;
    vrx[46] = C84189;
    vrx[47] = C84204;
    vrx[48] = C84205;
    vrx[49] = C84249;
    vrx[50] = C84265;
    vrx[51] = C84266;
    vrx[52] = C84296;
    vrx[53] = C84325;
    vrx[54] = C84383;
    vry[0] = C84657;
    vry[1] = C84658;
    vry[2] = C84659;
    vry[3] = C84674;
    vry[4] = C84689;
    vry[5] = C84704;
    vry[6] = C84719;
    vry[7] = C84734;
    vry[8] = C84749;
    vry[9] = C84764;
    vry[10] = C84779;
    vry[11] = C84794;
    vry[12] = C84795;
    vry[13] = C84796;
    vry[14] = C84811;
    vry[15] = C84826;
    vry[16] = C84855;
    vry[17] = C84870;
    vry[18] = C84885;
    vry[19] = C84886;
    vry[20] = C84887;
    vry[21] = C84902;
    vry[22] = C84917;
    vry[23] = C84946;
    vry[24] = C85003;
    vry[25] = C85060;
    vry[26] = C85103;
    vry[27] = C85132;
    vry[28] = C85147;
    vry[29] = C85148;
    vry[30] = C85163;
    vry[31] = C85178;
    vry[32] = C85193;
    vry[33] = C85194;
    vry[34] = C85223;
    vry[35] = C85252;
    vry[36] = C85267;
    vry[37] = C85282;
    vry[38] = C85283;
    vry[39] = C85312;
    vry[40] = C85313;
    vry[41] = C85328;
    vry[42] = C85343;
    vry[43] = C85400;
    vry[44] = C85499;
    vry[45] = C85528;
    vry[46] = C85557;
    vry[47] = C85572;
    vry[48] = C85573;
    vry[49] = C85616;
    vry[50] = C85631;
    vry[51] = C85632;
    vry[52] = C85661;
    vry[53] = C85690;
    vry[54] = C85747;
    vrz[0] = C86015;
    vrz[1] = C86016;
    vrz[2] = C86017;
    vrz[3] = C86032;
    vrz[4] = C86047;
    vrz[5] = C86062;
    vrz[6] = C86077;
    vrz[7] = C86092;
    vrz[8] = C86107;
    vrz[9] = C86122;
    vrz[10] = C86137;
    vrz[11] = C86152;
    vrz[12] = C86153;
    vrz[13] = C86154;
    vrz[14] = C86169;
    vrz[15] = C86184;
    vrz[16] = C86213;
    vrz[17] = C86228;
    vrz[18] = C86243;
    vrz[19] = C86244;
    vrz[20] = C86245;
    vrz[21] = C86260;
    vrz[22] = C86275;
    vrz[23] = C86304;
    vrz[24] = C86361;
    vrz[25] = C86418;
    vrz[26] = C86461;
    vrz[27] = C86490;
    vrz[28] = C86505;
    vrz[29] = C86506;
    vrz[30] = C86521;
    vrz[31] = C86536;
    vrz[32] = C86551;
    vrz[33] = C86552;
    vrz[34] = C86581;
    vrz[35] = C86610;
    vrz[36] = C86625;
    vrz[37] = C86640;
    vrz[38] = C86641;
    vrz[39] = C86670;
    vrz[40] = C86671;
    vrz[41] = C86686;
    vrz[42] = C86701;
    vrz[43] = C86758;
    vrz[44] = C86857;
    vrz[45] = C86886;
    vrz[46] = C86915;
    vrz[47] = C86930;
    vrz[48] = C86931;
    vrz[49] = C86974;
    vrz[50] = C86989;
    vrz[51] = C86990;
    vrz[52] = C87019;
    vrz[53] = C87048;
    vrz[54] = C87105;
}
