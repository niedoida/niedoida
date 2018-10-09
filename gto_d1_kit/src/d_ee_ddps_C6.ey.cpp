/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_3_vr(const double ae,
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
    const double C87534 = g[31];
    const double C87553 = g[32];
    const double C87568 = g[33];
    const double C87583 = g[34];
    const double C87599 = g[35];
    const double C87691 = g[36];
    const double C87706 = g[37];
    const double C87735 = g[38];
    const double C87750 = g[39];
    const double C87794 = g[40];
    const double C87809 = g[41];
    const double C87838 = g[42];
    const double C87867 = g[43];
    const double C87896 = g[44];
    const double C87924 = g[45];
    const double C87964 = g[46];
    const double C88005 = g[47];
    const double C88073 = g[48];
    const double C88142 = g[49];
    const double C88169 = g[50];
    const double C88183 = g[51];
    const double C88249 = g[52];
    const double C88290 = g[53];
    const double C88304 = g[54];
    const double C88320 = g[55];
    const double C88334 = g[56];
    const double C88349 = g[57];
    const double C88392 = g[58];
    const double C88433 = g[59];
    const double C88461 = g[60];
    const double C88503 = g[61];
    const double C88544 = g[62];
    const double C88559 = g[63];
    const double C88692 = g[64];
    const double C88714 = g[65];
    const double C88729 = g[66];
    const double C88785 = g[67];
    const double C88826 = g[68];
    const double C88874 = g[69];
    const double C88889 = g[70];
    const double C88965 = g[71];
    const double C89190 = g[72];
    const double C89248 = g[73];
    const double C89319 = g[74];
    const double C89349 = g[75];
    const double C89831 = g[76];
    const double C90035 = g[77];
    const double C90088 = g[78];
    const double C90204 = g[79];
    const double C90361 = g[80];
    const double C90677 = g[81];
    const double C91696 = g[82];
    const double C91826 = g[83];
    const double C87537 = p + q;
    const double C87536 = p * q;
    const double C91920 = bs[6];
    const double C91919 = bs[5];
    const double C91917 = bs[4];
    const double C91915 = bs[3];
    const double C91912 = bs[2];
    const double C91910 = std::pow(Pi, 2.5);
    const double C91909 = ce * de;
    const double C91908 = bs[0];
    const double C91905 = bs[1];
    const double C91899 = zP - zQ;
    const double C91898 = be * zAB;
    const double C91897 = yP - yQ;
    const double C91896 = be * yAB;
    const double C91893 = 2 * p;
    const double C91892 = xP - xQ;
    const double C91891 = be * xAB;
    const double C87538 = C87537 * p;
    const double C91911 = std::sqrt(C87537);
    const double C91907 = q * C87537;
    const double C91906 = C87536 * ce;
    const double C91890 = C87537 * C87536;
    const double C91889 = ce * C87536;
    const double C91973 = 4 * C91910;
    const double C91972 = kab * C91909;
    const double C91951 = C91899 * C87536;
    const double C91950 = C91897 * C87536;
    const double C91944 = C91892 * C87536;
    const double C91974 = C87536 * C91911;
    const double C91971 = kab * C91906;
    const double C91998 = C90035 * C91889;
    const double C91994 = C89349 * C91889;
    const double C91987 = C88965 * C91889;
    const double C91985 = C88874 * C91889;
    const double C91984 = C88826 * C91889;
    const double C91983 = C88785 * C91889;
    const double C91981 = C88692 * C91889;
    const double C91980 = C88559 * C91889;
    const double C91978 = C88503 * C91889;
    const double C91976 = C88433 * C91889;
    const double C91975 = C88392 * C91889;
    const double C91970 = C88349 * C91889;
    const double C91969 = C88334 * C91889;
    const double C91968 = C88320 * C91889;
    const double C91966 = C88290 * C91889;
    const double C91965 = C88249 * C91889;
    const double C91964 = C88183 * C91889;
    const double C91963 = C88169 * C91889;
    const double C91962 = C88142 * C91889;
    const double C91961 = C88005 * C91889;
    const double C91960 = C87924 * C91889;
    const double C91958 = C87838 * C91889;
    const double C91956 = C87794 * C91889;
    const double C91954 = C87735 * C91889;
    const double C91952 = C87691 * C91889;
    const double C91949 = C87599 * C91889;
    const double C91946 = C87568 * C91889;
    const double C91945 = C87553 * C91889;
    const double C91943 = C87534 * C91889;
    const double C92038 = kcd * C91972;
    const double C92037 = kcd * C91971;
    const double C92062 = C91998 / C91890;
    const double C92058 = C91994 / C91890;
    const double C92051 = C91987 / C91890;
    const double C92049 = C91985 / C91890;
    const double C92048 = C91984 / C91890;
    const double C92047 = C91983 / C91890;
    const double C92045 = C91981 / C91890;
    const double C92044 = C91980 / C91890;
    const double C92042 = C91978 / C91890;
    const double C92040 = C91976 / C91890;
    const double C92039 = C91975 / C91890;
    const double C92036 = C91970 / C91890;
    const double C92035 = C91969 / C91890;
    const double C92034 = C91968 / C91890;
    const double C92032 = C91966 / C91890;
    const double C92031 = C91965 / C91890;
    const double C92030 = C91964 / C91890;
    const double C92029 = C91963 / C91890;
    const double C92028 = C91962 / C91890;
    const double C92027 = C91961 / C91890;
    const double C92026 = C91960 / C91890;
    const double C92024 = C91958 / C91890;
    const double C92022 = C91956 / C91890;
    const double C92020 = C91954 / C91890;
    const double C92018 = C91952 / C91890;
    const double C92017 = C91949 / C91890;
    const double C92014 = C91946 / C91890;
    const double C92013 = C91945 / C91890;
    const double C92012 = C91943 / C91890;
    const double C92096 = C91919 * C92038;
    const double C92094 = C91917 * C92038;
    const double C92091 = C91915 * C92038;
    const double C92088 = C91912 * C92038;
    const double C92085 = C91905 * C92038;
    const double C92083 = C91908 * C92038;
    const double C92095 = C91920 * C92037;
    const double C92093 = C91919 * C92037;
    const double C92090 = C91917 * C92037;
    const double C92087 = C91915 * C92037;
    const double C92084 = C91912 * C92037;
    const double C92082 = C91905 * C92037;
    const double C88969 =
        (((C91892 * C92095) / C91907 - (xCD * C92096) / q) * C91973) / C91974;
    const double C90414 =
        (((C91897 * C92095) / C91907 - (yCD * C92096) / q) * C91973) / C91974;
    const double C91853 =
        (((C91899 * C92095) / C91907 - (zCD * C92096) / q) * C91973) / C91974;
    const double C88878 =
        (((C91892 * C92093) / C91907 - (xCD * C92094) / q) * C91973) / C91974;
    const double C90324 =
        (((C91897 * C92093) / C91907 - (yCD * C92094) / q) * C91973) / C91974;
    const double C91763 =
        (((C91899 * C92093) / C91907 - (zCD * C92094) / q) * C91973) / C91974;
    const double C88696 =
        (((C91892 * C92090) / C91907 - (xCD * C92091) / q) * C91973) / C91974;
    const double C90153 =
        (((C91897 * C92090) / C91907 - (yCD * C92091) / q) * C91973) / C91974;
    const double C91592 =
        (((C91899 * C92090) / C91907 - (zCD * C92091) / q) * C91973) / C91974;
    const double C88309 =
        (((C91892 * C92087) / C91907 - (xCD * C92088) / q) * C91973) / C91974;
    const double C89765 =
        (((C91897 * C92087) / C91907 - (yCD * C92088) / q) * C91973) / C91974;
    const double C91207 =
        (((C91899 * C92087) / C91907 - (zCD * C92088) / q) * C91973) / C91974;
    const double C87588 =
        (((C91892 * C92084) / C91907 - (xCD * C92085) / q) * C91973) / C91974;
    const double C89061 =
        (((C91897 * C92084) / C91907 - (yCD * C92085) / q) * C91973) / C91974;
    const double C90506 =
        (((C91899 * C92084) / C91907 - (zCD * C92085) / q) * C91973) / C91974;
    const double C87587 =
        (((C91892 * C92082) / C91907 - (xCD * C92083) / q) * C91973) / C91974;
    const double C89060 =
        (((C91897 * C92082) / C91907 - (yCD * C92083) / q) * C91973) / C91974;
    const double C90505 =
        (((C91899 * C92082) / C91907 - (zCD * C92083) / q) * C91973) / C91974;
    const double C91918 = C88878 * C87536;
    const double C88893 =
        C92051 - (C88878 * C91891) / p - (C88969 * C91944) / C87538;
    const double C88920 = -((C88878 * C91896) / p + (C88969 * C91950) / C87538);
    const double C88947 = -((C88878 * C91898) / p + (C88969 * C91951) / C87538);
    const double C91931 = C90324 * C87536;
    const double C90338 = -((C90324 * C91891) / p + (C90414 * C91944) / C87538);
    const double C90366 =
        C92051 - (C90324 * C91896) / p - (C90414 * C91950) / C87538;
    const double C90393 = -((C90324 * C91898) / p + (C90414 * C91951) / C87538);
    const double C91942 = C91763 * C87536;
    const double C91777 = -((C91763 * C91891) / p + (C91853 * C91944) / C87538);
    const double C91804 = -((C91763 * C91896) / p + (C91853 * C91950) / C87538);
    const double C91832 =
        C92051 - (C91763 * C91898) / p - (C91853 * C91951) / C87538;
    const double C91916 = C88696 * C87536;
    const double C88718 =
        C92049 - (C88696 * C91891) / p - (C88878 * C91944) / C87538;
    const double C88760 = -((C88696 * C91896) / p + (C88878 * C91950) / C87538);
    const double C88815 = -((C88696 * C91898) / p + (C88878 * C91951) / C87538);
    const double C91930 = C90153 * C87536;
    const double C90167 = -((C90153 * C91891) / p + (C90324 * C91944) / C87538);
    const double C90209 =
        C92049 - (C90153 * C91896) / p - (C90324 * C91950) / C87538;
    const double C90263 = -((C90153 * C91898) / p + (C90324 * C91951) / C87538);
    const double C91941 = C91592 * C87536;
    const double C91606 = -((C91592 * C91891) / p + (C91763 * C91944) / C87538);
    const double C91647 = -((C91592 * C91896) / p + (C91763 * C91950) / C87538);
    const double C91702 =
        C92049 - (C91592 * C91898) / p - (C91763 * C91951) / C87538;
    const double C91904 = C88309 * C87536;
    const double C88308 =
        C92045 - (C88309 * C91891) / p - (C88696 * C91944) / C87538;
    const double C88381 = -((C88309 * C91896) / p + (C88696 * C91950) / C87538);
    const double C88492 = -((C88309 * C91898) / p + (C88696 * C91951) / C87538);
    const double C91927 = C89765 * C87536;
    const double C89779 = -((C89765 * C91891) / p + (C90153 * C91944) / C87538);
    const double C89836 =
        C92045 - (C89765 * C91896) / p - (C90153 * C91950) / C87538;
    const double C89944 = -((C89765 * C91898) / p + (C90153 * C91951) / C87538);
    const double C91938 = C91207 * C87536;
    const double C91221 = -((C91207 * C91891) / p + (C91592 * C91944) / C87538);
    const double C91277 = -((C91207 * C91896) / p + (C91592 * C91950) / C87538);
    const double C91385 =
        C92045 - (C91207 * C91898) / p - (C91592 * C91951) / C87538;
    const double C91895 = C87588 * C87536;
    const double C87542 =
        C92034 - (C87588 * C91891) / p - (C88309 * C91944) / C87538;
    const double C87739 = -((C87588 * C91896) / p + (C88309 * C91950) / C87538);
    const double C87842 = -((C87588 * C91898) / p + (C88309 * C91951) / C87538);
    const double C91922 = C89061 * C87536;
    const double C89017 = -((C89061 * C91891) / p + (C89765 * C91944) / C87538);
    const double C89209 =
        C92034 - (C89061 * C91896) / p - (C89765 * C91950) / C87538;
    const double C89309 = -((C89061 * C91898) / p + (C89765 * C91951) / C87538);
    const double C91933 = C90506 * C87536;
    const double C90462 = -((C90506 * C91891) / p + (C91207 * C91944) / C87538);
    const double C90653 = -((C90506 * C91896) / p + (C91207 * C91950) / C87538);
    const double C90753 =
        C92034 - (C90506 * C91898) / p - (C91207 * C91951) / C87538;
    const double C83261 =
        C92017 - (C87587 * C91891) / p - (C87588 * C91944) / C87538;
    const double C83728 = -((C87587 * C91896) / p + (C87588 * C91950) / C87538);
    const double C84162 = -((C87587 * C91898) / p + (C87588 * C91951) / C87538);
    const double C84647 = -((C89060 * C91891) / p + (C89061 * C91944) / C87538);
    const double C85105 =
        C92017 - (C89060 * C91896) / p - (C89061 * C91950) / C87538;
    const double C85530 = -((C89060 * C91898) / p + (C89061 * C91951) / C87538);
    const double C86005 = -((C90505 * C91891) / p + (C90506 * C91944) / C87538);
    const double C86463 = -((C90505 * C91896) / p + (C90506 * C91950) / C87538);
    const double C86888 =
        C92017 - (C90505 * C91898) / p - (C90506 * C91951) / C87538;
    const double C91986 = C91918 / C87538;
    const double C92000 = C91931 / C87538;
    const double C92011 = C91942 / C87538;
    const double C91982 = C91916 / C87538;
    const double C91999 = C91930 / C87538;
    const double C92010 = C91941 / C87538;
    const double C91967 = C91904 / C87538;
    const double C91995 = C91927 / C87538;
    const double C92007 = C91938 / C87538;
    const double C91948 = C91895 / C87538;
    const double C87900 = -((C87842 * C91896) / p + (C88492 * C91950) / C87538);
    const double C91989 = C91922 / C87538;
    const double C89367 =
        C92062 - (C89309 * C91896) / p - (C89944 * C91950) / C87538;
    const double C92002 = C91933 / C87538;
    const double C90809 = -((C90753 * C91896) / p + (C91385 * C91950) / C87538);
    const double C83385 =
        C92020 - (C83728 * C91891) / p - (C87739 * C91944) / C87538;
    const double C83478 =
        C92024 - (C84162 * C91891) / p - (C87842 * C91944) / C87538;
    const double C83913 = -((C84162 * C91896) / p + (C87842 * C91950) / C87538);
    const double C84769 = -((C85105 * C91891) / p + (C89209 * C91944) / C87538);
    const double C84860 = -((C85530 * C91891) / p + (C89309 * C91944) / C87538);
    const double C85286 =
        C92024 - (C85530 * C91896) / p - (C89309 * C91950) / C87538;
    const double C86127 = -((C86463 * C91891) / p + (C90653 * C91944) / C87538);
    const double C86218 = -((C86888 * C91891) / p + (C90753 * C91944) / C87538);
    const double C86644 = -((C86888 * C91896) / p + (C90753 * C91950) / C87538);
    const double C92050 = C88696 - C91986;
    const double C92064 = C90153 - C92000;
    const double C92075 = C91592 - C92011;
    const double C92046 = C88309 - C91982;
    const double C92063 = C89765 - C91999;
    const double C92074 = C91207 - C92010;
    const double C92033 = C87588 - C91967;
    const double C92059 = C89061 - C91995;
    const double C92071 = C90506 - C92007;
    const double C92016 = C87587 - C91948;
    const double C92053 = C89060 - C91989;
    const double C92066 = C90505 - C92002;
    const double C83639 = (C87896 * C91889) / C91890 - (C83913 * C91891) / p -
                          (C87900 * C91944) / C87538;
    const double C85018 = -((C85286 * C91891) / p + (C89367 * C91944) / C87538);
    const double C86376 = -((C86644 * C91891) / p + (C90809 * C91944) / C87538);
    const double C92092 = C92050 / C91893;
    const double C92105 = C92064 / C91893;
    const double C92114 = C92075 / C91893;
    const double C92089 = C92046 / C91893;
    const double C92104 = C92063 / C91893;
    const double C92113 = C92074 / C91893;
    const double C92081 = C92033 / C91893;
    const double C92102 = C92059 / C91893;
    const double C92111 = C92071 / C91893;
    const double C92076 = C92016 / C91893;
    const double C92097 = C92053 / C91893;
    const double C92106 = C92066 / C91893;
    const double C88733 = (C88889 * C91889) / C91890 - (C88718 * C91891) / p -
                          (C88893 * C91944) / C87538 + C92092;
    const double C88774 =
        C92092 - ((C88760 * C91896) / p + (C88920 * C91950) / C87538);
    const double C88830 =
        C92092 - ((C88815 * C91898) / p + (C88947 * C91951) / C87538);
    const double C90181 =
        C92105 - ((C90167 * C91891) / p + (C90338 * C91944) / C87538);
    const double C90223 = (C90361 * C91889) / C91890 - (C90209 * C91896) / p -
                          (C90366 * C91950) / C87538 + C92105;
    const double C90277 =
        C92105 - ((C90263 * C91898) / p + (C90393 * C91951) / C87538);
    const double C91620 =
        C92114 - ((C91606 * C91891) / p + (C91777 * C91944) / C87538);
    const double C91661 =
        C92114 - ((C91647 * C91896) / p + (C91804 * C91950) / C87538);
    const double C91716 = (C91826 * C91889) / C91890 - (C91702 * C91898) / p -
                          (C91832 * C91951) / C87538 + C92114;
    const double C88338 = (C88714 * C91889) / C91890 - (C88308 * C91891) / p -
                          (C88718 * C91944) / C87538 + C92089;
    const double C88396 =
        C92089 - ((C88381 * C91896) / p + (C88760 * C91950) / C87538);
    const double C88507 =
        C92089 - ((C88492 * C91898) / p + (C88815 * C91951) / C87538);
    const double C89793 =
        C92104 - ((C89779 * C91891) / p + (C90167 * C91944) / C87538);
    const double C89850 = (C90204 * C91889) / C91890 - (C89836 * C91896) / p -
                          (C90209 * C91950) / C87538 + C92104;
    const double C89958 =
        C92104 - ((C89944 * C91898) / p + (C90263 * C91951) / C87538);
    const double C91235 =
        C92113 - ((C91221 * C91891) / p + (C91606 * C91944) / C87538);
    const double C91291 =
        C92113 - ((C91277 * C91896) / p + (C91647 * C91950) / C87538);
    const double C91399 = (C91696 * C91889) / C91890 - (C91385 * C91898) / p -
                          (C91702 * C91951) / C87538 + C92113;
    const double C87541 = (C88304 * C91889) / C91890 - (C87542 * C91891) / p -
                          (C88308 * C91944) / C87538 + C92081;
    const double C87695 =
        C92081 - ((C87739 * C91896) / p + (C88381 * C91950) / C87538);
    const double C87798 =
        C92081 - ((C87842 * C91898) / p + (C88492 * C91951) / C87538);
    const double C89018 =
        C92102 - ((C89017 * C91891) / p + (C89779 * C91944) / C87538);
    const double C89166 = (C89831 * C91889) / C91890 - (C89209 * C91896) / p -
                          (C89836 * C91950) / C87538 + C92102;
    const double C89267 =
        C92102 - ((C89309 * C91898) / p + (C89944 * C91951) / C87538);
    const double C90463 =
        C92111 - ((C90462 * C91891) / p + (C91221 * C91944) / C87538);
    const double C90611 =
        C92111 - ((C90653 * C91896) / p + (C91277 * C91950) / C87538);
    const double C90711 =
        C92062 - (C90753 * C91898) / p - (C91385 * C91951) / C87538 + C92111;
    const double C83245 = (C87583 * C91889) / C91890 - (C83261 * C91891) / p -
                          (C87542 * C91944) / C87538 + C92076;
    const double C83683 =
        C92076 - ((C83728 * C91896) / p + (C87739 * C91950) / C87538);
    const double C84088 =
        C92076 - ((C84162 * C91898) / p + (C87842 * C91951) / C87538);
    const double C84632 =
        C92097 - ((C84647 * C91891) / p + (C89017 * C91944) / C87538);
    const double C85061 =
        C92020 - (C85105 * C91896) / p - (C89209 * C91950) / C87538 + C92097;
    const double C85457 =
        C92097 - ((C85530 * C91898) / p + (C89309 * C91951) / C87538);
    const double C85990 =
        C92106 - ((C86005 * C91891) / p + (C90462 * C91944) / C87538);
    const double C86419 =
        C92106 - ((C86463 * C91896) / p + (C90653 * C91950) / C87538);
    const double C86815 =
        C92024 - (C86888 * C91898) / p - (C90753 * C91951) / C87538 + C92106;
    const double C88353 = (C88729 * C91889) / C91890 - (C88338 * C91891) / p -
                          (C88733 * C91944) / C87538 +
                          (C88308 - (C88718 * C87536) / C87538) / p;
    const double C91913 = C88396 * C87536;
    const double C88437 = (C88381 - (C88760 * C87536) / C87538) / p -
                          ((C88396 * C91896) / p + (C88774 * C91950) / C87538);
    const double C88465 =
        C92047 - (C88396 * C91891) / p - (C88774 * C91944) / C87538;
    const double C91914 = C88507 * C87536;
    const double C88548 =
        C92048 - (C88507 * C91891) / p - (C88830 * C91944) / C87538;
    const double C88563 = (C88492 - (C88815 * C87536) / C87538) / p -
                          ((C88507 * C91898) / p + (C88830 * C91951) / C87538);
    const double C88642 = -((C88507 * C91896) / p + (C88830 * C91950) / C87538);
    const double C89807 = (C89779 - (C90167 * C87536) / C87538) / p -
                          ((C89793 * C91891) / p + (C90181 * C91944) / C87538);
    const double C91928 = C89850 * C87536;
    const double C89903 = C92047 - (C89850 * C91896) / p -
                          (C90223 * C91950) / C87538 +
                          (C89836 - (C90209 * C87536) / C87538) / p;
    const double C89917 = -((C89850 * C91891) / p + (C90223 * C91944) / C87538);
    const double C91929 = C89958 * C87536;
    const double C89998 = -((C89958 * C91891) / p + (C90277 * C91944) / C87538);
    const double C90025 = (C89944 - (C90263 * C87536) / C87538) / p -
                          ((C89958 * C91898) / p + (C90277 * C91951) / C87538);
    const double C90093 =
        C92048 - (C89958 * C91896) / p - (C90277 * C91950) / C87538;
    const double C91249 = (C91221 - (C91606 * C87536) / C87538) / p -
                          ((C91235 * C91891) / p + (C91620 * C91944) / C87538);
    const double C91939 = C91291 * C87536;
    const double C91344 = (C91277 - (C91647 * C87536) / C87538) / p -
                          ((C91291 * C91896) / p + (C91661 * C91950) / C87538);
    const double C91358 = -((C91291 * C91891) / p + (C91661 * C91944) / C87538);
    const double C91940 = C91399 * C87536;
    const double C91439 = -((C91399 * C91891) / p + (C91716 * C91944) / C87538);
    const double C91466 = C92048 - (C91399 * C91898) / p -
                          (C91716 * C91951) / C87538 +
                          (C91385 - (C91702 * C87536) / C87538) / p;
    const double C91532 = -((C91399 * C91896) / p + (C91716 * C91950) / C87538);
    const double C87557 = C92035 - (C87541 * C91891) / p -
                          (C88338 * C91944) / C87538 +
                          (C87542 - (C88308 * C87536) / C87538) / p;
    const double C87783 = -((C87541 * C91898) / p + (C88338 * C91951) / C87538);
    const double C91900 = C87695 * C87536;
    const double C87710 =
        C92039 - (C87695 * C91891) / p - (C88396 * C91944) / C87538;
    const double C87755 = (C87739 - (C88381 * C87536) / C87538) / p -
                          ((C87695 * C91896) / p + (C88396 * C91950) / C87538);
    const double C87968 = -((C87695 * C91898) / p + (C88396 * C91951) / C87538);
    const double C91902 = C87798 * C87536;
    const double C87813 =
        C92042 - (C87798 * C91891) / p - (C88507 * C91944) / C87538;
    const double C87872 = (C87842 - (C88492 * C87536) / C87538) / p -
                          ((C87798 * C91898) / p + (C88507 * C91951) / C87538);
    const double C88062 = -((C87798 * C91896) / p + (C88507 * C91950) / C87538);
    const double C89032 = (C89017 - (C89779 * C87536) / C87538) / p -
                          ((C89018 * C91891) / p + (C89793 * C91944) / C87538);
    const double C89253 = -((C89018 * C91898) / p + (C89793 * C91951) / C87538);
    const double C91923 = C89166 * C87536;
    const double C89180 = -((C89166 * C91891) / p + (C89850 * C91944) / C87538);
    const double C89223 = C92039 - (C89166 * C91896) / p -
                          (C89850 * C91950) / C87538 +
                          (C89209 - (C89836 * C87536) / C87538) / p;
    const double C89433 = -((C89166 * C91898) / p + (C89850 * C91951) / C87538);
    const double C91925 = C89267 * C87536;
    const double C89281 = -((C89267 * C91891) / p + (C89958 * C91944) / C87538);
    const double C89338 = (C89309 - (C89944 * C87536) / C87538) / p -
                          ((C89267 * C91898) / p + (C89958 * C91951) / C87538);
    const double C89526 =
        C92042 - (C89267 * C91896) / p - (C89958 * C91950) / C87538;
    const double C90477 = (C90462 - (C91221 * C87536) / C87538) / p -
                          ((C90463 * C91891) / p + (C91235 * C91944) / C87538);
    const double C90697 =
        C92035 - (C90463 * C91898) / p - (C91235 * C91951) / C87538;
    const double C91934 = C90611 * C87536;
    const double C90625 = -((C90611 * C91891) / p + (C91291 * C91944) / C87538);
    const double C90667 = (C90653 - (C91277 * C87536) / C87538) / p -
                          ((C90611 * C91896) / p + (C91291 * C91950) / C87538);
    const double C90875 =
        C92039 - (C90611 * C91898) / p - (C91291 * C91951) / C87538;
    const double C91936 = C90711 * C87536;
    const double C90725 = -((C90711 * C91891) / p + (C91399 * C91944) / C87538);
    const double C90781 = C92042 - (C90711 * C91898) / p -
                          (C91399 * C91951) / C87538 +
                          (C90753 - (C91385 * C87536) / C87538) / p;
    const double C90968 = -((C90711 * C91896) / p + (C91399 * C91950) / C87538);
    const double C83227 = C92012 - (C83245 * C91891) / p -
                          (C87541 * C91944) / C87538 +
                          (C83261 - (C87542 * C87536) / C87538) / p;
    const double C83306 = -((C83245 * C91896) / p + (C87541 * C91950) / C87538);
    const double C83351 = -((C83245 * C91898) / p + (C87541 * C91951) / C87538);
    const double C83367 =
        C92018 - (C83683 * C91891) / p - (C87695 * C91944) / C87538;
    const double C83729 = (C83728 - (C87739 * C87536) / C87538) / p -
                          ((C83683 * C91896) / p + (C87695 * C91950) / C87538);
    const double C83759 = -((C83683 * C91898) / p + (C87695 * C91951) / C87538);
    const double C83460 =
        C92022 - (C84088 * C91891) / p - (C87798 * C91944) / C87538;
    const double C83897 = -((C84088 * C91896) / p + (C87798 * C91950) / C87538);
    const double C84163 = (C84162 - (C87842 * C87536) / C87538) / p -
                          ((C84088 * C91898) / p + (C87798 * C91951) / C87538);
    const double C84615 = (C84647 - (C89017 * C87536) / C87538) / p -
                          ((C84632 * C91891) / p + (C89018 * C91944) / C87538);
    const double C84692 =
        C92012 - (C84632 * C91896) / p - (C89018 * C91950) / C87538;
    const double C84737 = -((C84632 * C91898) / p + (C89018 * C91951) / C87538);
    const double C84752 = -((C85061 * C91891) / p + (C89166 * C91944) / C87538);
    const double C85106 = C92018 - (C85061 * C91896) / p -
                          (C89166 * C91950) / C87538 +
                          (C85105 - (C89209 * C87536) / C87538) / p;
    const double C85136 = -((C85061 * C91898) / p + (C89166 * C91951) / C87538);
    const double C84843 = -((C85457 * C91891) / p + (C89267 * C91944) / C87538);
    const double C85270 =
        C92022 - (C85457 * C91896) / p - (C89267 * C91950) / C87538;
    const double C85531 = (C85530 - (C89309 * C87536) / C87538) / p -
                          ((C85457 * C91898) / p + (C89267 * C91951) / C87538);
    const double C85973 = (C86005 - (C90462 * C87536) / C87538) / p -
                          ((C85990 * C91891) / p + (C90463 * C91944) / C87538);
    const double C86050 = -((C85990 * C91896) / p + (C90463 * C91950) / C87538);
    const double C86095 =
        C92012 - (C85990 * C91898) / p - (C90463 * C91951) / C87538;
    const double C86110 = -((C86419 * C91891) / p + (C90611 * C91944) / C87538);
    const double C86464 = (C86463 - (C90653 * C87536) / C87538) / p -
                          ((C86419 * C91896) / p + (C90611 * C91950) / C87538);
    const double C86494 =
        C92018 - (C86419 * C91898) / p - (C90611 * C91951) / C87538;
    const double C86201 = -((C86815 * C91891) / p + (C90711 * C91944) / C87538);
    const double C86628 = -((C86815 * C91896) / p + (C90711 * C91950) / C87538);
    const double C86889 = C92022 - (C86815 * C91898) / p -
                          (C90711 * C91951) / C87538 +
                          (C86888 - (C90753 * C87536) / C87538) / p;
    const double C91977 = C91913 / C87538;
    const double C91979 = C91914 / C87538;
    const double C91996 = C91928 / C87538;
    const double C91997 = C91929 / C87538;
    const double C92008 = C91939 / C87538;
    const double C92009 = C91940 / C87538;
    const double C91894 = C87557 * C87536;
    const double C87572 = C92036 - (C87557 * C91891) / p -
                          (C88353 * C91944) / C87538 +
                          (3 * (C87541 - (C88338 * C87536) / C87538)) / C91893;
    const double C87724 = -((C87557 * C91896) / p + (C88353 * C91950) / C87538);
    const double C87827 = -((C87557 * C91898) / p + (C88353 * C91951) / C87538);
    const double C91953 = C91900 / C87538;
    const double C91901 = C87755 * C87536;
    const double C87754 =
        C92040 - (C87755 * C91891) / p - (C88437 * C91944) / C87538;
    const double C88104 = -((C87755 * C91898) / p + (C88437 * C91951) / C87538);
    const double C91957 = C91902 / C87538;
    const double C91903 = C87872 * C87536;
    const double C87871 =
        C92044 - (C87872 * C91891) / p - (C88563 * C91944) / C87538;
    const double C88131 = -((C87872 * C91896) / p + (C88563 * C91950) / C87538);
    const double C91921 = C89032 * C87536;
    const double C89046 = (3 * (C89018 - (C89793 * C87536) / C87538)) / C91893 -
                          ((C89032 * C91891) / p + (C89807 * C91944) / C87538);
    const double C89195 =
        C92036 - (C89032 * C91896) / p - (C89807 * C91950) / C87538;
    const double C89295 = -((C89032 * C91898) / p + (C89807 * C91951) / C87538);
    const double C91990 = C91923 / C87538;
    const double C91924 = C89223 * C87536;
    const double C89224 = -((C89223 * C91891) / p + (C89903 * C91944) / C87538);
    const double C89567 = -((C89223 * C91898) / p + (C89903 * C91951) / C87538);
    const double C91992 = C91925 / C87538;
    const double C91926 = C89338 * C87536;
    const double C89339 = -((C89338 * C91891) / p + (C90025 * C91944) / C87538);
    const double C89594 =
        C92044 - (C89338 * C91896) / p - (C90025 * C91950) / C87538;
    const double C91932 = C90477 * C87536;
    const double C90491 = (3 * (C90463 - (C91235 * C87536) / C87538)) / C91893 -
                          ((C90477 * C91891) / p + (C91249 * C91944) / C87538);
    const double C90639 = -((C90477 * C91896) / p + (C91249 * C91950) / C87538);
    const double C90739 =
        C92036 - (C90477 * C91898) / p - (C91249 * C91951) / C87538;
    const double C92003 = C91934 / C87538;
    const double C91935 = C90667 * C87536;
    const double C90668 = -((C90667 * C91891) / p + (C91344 * C91944) / C87538);
    const double C91009 =
        C92040 - (C90667 * C91898) / p - (C91344 * C91951) / C87538;
    const double C92005 = C91936 / C87538;
    const double C91937 = C90781 * C87536;
    const double C90782 = -((C90781 * C91891) / p + (C91466 * C91944) / C87538);
    const double C91036 = -((C90781 * C91896) / p + (C91466 * C91950) / C87538);
    const double C83228 = C92013 - (C83227 * C91891) / p -
                          (C87557 * C91944) / C87538 +
                          (3 * (C83245 - (C87541 * C87536) / C87538)) / C91893;
    const double C83291 = -((C83227 * C91896) / p + (C87557 * C91950) / C87538);
    const double C83336 = -((C83227 * C91898) / p + (C87557 * C91951) / C87538);
    const double C83444 = -((C83351 * C91896) / p + (C87783 * C91950) / C87538);
    const double C83713 =
        C92026 - (C83729 * C91891) / p - (C87755 * C91944) / C87538;
    const double C83850 = -((C83729 * C91898) / p + (C87755 * C91951) / C87538);
    const double C83744 = (C87964 * C91889) / C91890 - (C83759 * C91891) / p -
                          (C87968 * C91944) / C87538;
    const double C84118 =
        C92029 - (C83897 * C91891) / p - (C88062 * C91944) / C87538;
    const double C84147 =
        C92030 - (C84163 * C91891) / p - (C87872 * C91944) / C87538;
    const double C84207 = -((C84163 * C91896) / p + (C87872 * C91950) / C87538);
    const double C84616 = (3 * (C84632 - (C89018 * C87536) / C87538)) / C91893 -
                          ((C84615 * C91891) / p + (C89032 * C91944) / C87538);
    const double C84677 =
        C92013 - (C84615 * C91896) / p - (C89032 * C91950) / C87538;
    const double C84722 = -((C84615 * C91898) / p + (C89032 * C91951) / C87538);
    const double C84828 = (C89248 * C91889) / C91890 - (C84737 * C91896) / p -
                          (C89253 * C91950) / C87538;
    const double C85090 = -((C85106 * C91891) / p + (C89223 * C91944) / C87538);
    const double C85225 = -((C85106 * C91898) / p + (C89223 * C91951) / C87538);
    const double C85121 = -((C85136 * C91891) / p + (C89433 * C91944) / C87538);
    const double C85486 = -((C85270 * C91891) / p + (C89526 * C91944) / C87538);
    const double C85515 = -((C85531 * C91891) / p + (C89338 * C91944) / C87538);
    const double C85574 =
        C92030 - (C85531 * C91896) / p - (C89338 * C91950) / C87538;
    const double C85974 = (3 * (C85990 - (C90463 * C87536) / C87538)) / C91893 -
                          ((C85973 * C91891) / p + (C90477 * C91944) / C87538);
    const double C86035 = -((C85973 * C91896) / p + (C90477 * C91950) / C87538);
    const double C86080 =
        C92013 - (C85973 * C91898) / p - (C90477 * C91951) / C87538;
    const double C86186 = -((C86095 * C91896) / p + (C90697 * C91950) / C87538);
    const double C86448 = -((C86464 * C91891) / p + (C90667 * C91944) / C87538);
    const double C86583 =
        C92026 - (C86464 * C91898) / p - (C90667 * C91951) / C87538;
    const double C86479 = -((C86494 * C91891) / p + (C90875 * C91944) / C87538);
    const double C86844 = -((C86628 * C91891) / p + (C90968 * C91944) / C87538);
    const double C86873 = -((C86889 * C91891) / p + (C90781 * C91944) / C87538);
    const double C86932 = -((C86889 * C91896) / p + (C90781 * C91950) / C87538);
    const double C92041 = C87695 - C91977;
    const double C92043 = C87798 - C91979;
    const double C92060 = C89166 - C91996;
    const double C92061 = C89267 - C91997;
    const double C92072 = C90611 - C92008;
    const double C92073 = C90711 - C92009;
    const double C91947 = C91894 / C87538;
    const double C92019 = C83683 - C91953;
    const double C91955 = C91901 / C87538;
    const double C92023 = C84088 - C91957;
    const double C91959 = C91903 / C87538;
    const double C91988 = C91921 / C87538;
    const double C92054 = C85061 - C91990;
    const double C91991 = C91924 / C87538;
    const double C92056 = C85457 - C91992;
    const double C91993 = C91926 / C87538;
    const double C92001 = C91932 / C87538;
    const double C92067 = C86419 - C92003;
    const double C92004 = C91935 / C87538;
    const double C92069 = C86815 - C92005;
    const double C92006 = C91937 / C87538;
    const double C83276 = -((C83228 * C91896) / p + (C87572 * C91950) / C87538);
    const double C83321 = -((C83228 * C91898) / p + (C87572 * C91951) / C87538);
    const double C83580 = -((C83336 * C91896) / p + (C87827 * C91950) / C87538);
    const double C83986 =
        C92028 - (C83850 * C91891) / p - (C88104 * C91944) / C87538;
    const double C84341 =
        C92032 - (C84207 * C91891) / p - (C88131 * C91944) / C87538;
    const double C84662 =
        C92014 - (C84616 * C91896) / p - (C89046 * C91950) / C87538;
    const double C84707 = -((C84616 * C91898) / p + (C89046 * C91951) / C87538);
    const double C84961 =
        C92058 - (C84722 * C91896) / p - (C89295 * C91950) / C87538;
    const double C85358 = -((C85225 * C91891) / p + (C89567 * C91944) / C87538);
    const double C85705 = -((C85574 * C91891) / p + (C89594 * C91944) / C87538);
    const double C86020 = -((C85974 * C91896) / p + (C90491 * C91950) / C87538);
    const double C86065 =
        C92014 - (C85974 * C91898) / p - (C90491 * C91951) / C87538;
    const double C86319 = -((C86080 * C91896) / p + (C90739 * C91950) / C87538);
    const double C86716 = -((C86583 * C91891) / p + (C91009 * C91944) / C87538);
    const double C87063 = -((C86932 * C91891) / p + (C91036 * C91944) / C87538);
    const double C87769 = (C88461 * C91889) / C91890 - (C87710 * C91891) / p -
                          (C88465 * C91944) / C87538 + C92041 / C91893;
    const double C88009 = (3 * C92041) / C91893 -
                          ((C87755 * C91896) / p + (C88437 * C91950) / C87538);
    const double C92086 = C92043 / C91893;
    const double C88253 = (3 * C92043) / C91893 -
                          ((C87872 * C91898) / p + (C88563 * C91951) / C87538);
    const double C89238 =
        C92060 / C91893 - ((C89180 * C91891) / p + (C89917 * C91944) / C87538);
    const double C89473 = C92040 - (C89223 * C91896) / p -
                          (C89903 * C91950) / C87538 + (3 * C92060) / C91893;
    const double C92103 = C92061 / C91893;
    const double C89712 = (3 * C92061) / C91893 -
                          ((C89338 * C91898) / p + (C90025 * C91951) / C87538);
    const double C90683 =
        C92072 / C91893 - ((C90625 * C91891) / p + (C91358 * C91944) / C87538);
    const double C90915 = (3 * C92072) / C91893 -
                          ((C90667 * C91896) / p + (C91344 * C91950) / C87538);
    const double C92112 = C92073 / C91893;
    const double C91154 = C92044 - (C90781 * C91898) / p -
                          (C91466 * C91951) / C87538 + (3 * C92073) / C91893;
    const double C92015 = C83227 - C91947;
    const double C83368 = (C87706 * C91889) / C91890 - (C83367 * C91891) / p -
                          (C87710 * C91944) / C87538 + C92019 / C91893;
    const double C83775 = (3 * C92019) / C91893 -
                          ((C83729 * C91896) / p + (C87755 * C91950) / C87538);
    const double C92021 = C83729 - C91955;
    const double C92079 = C92023 / C91893;
    const double C84223 = (3 * C92023) / C91893 -
                          ((C84163 * C91898) / p + (C87872 * C91951) / C87538);
    const double C92025 = C84163 - C91959;
    const double C92052 = C84615 - C91988;
    const double C84753 =
        C92054 / C91893 - ((C84752 * C91891) / p + (C89180 * C91944) / C87538);
    const double C85151 = C92026 - (C85106 * C91896) / p -
                          (C89223 * C91950) / C87538 + (3 * C92054) / C91893;
    const double C92055 = C85106 - C91991;
    const double C92100 = C92056 / C91893;
    const double C85589 = (3 * C92056) / C91893 -
                          ((C85531 * C91898) / p + (C89338 * C91951) / C87538);
    const double C92057 = C85531 - C91993;
    const double C92065 = C85973 - C92001;
    const double C86111 =
        C92067 / C91893 - ((C86110 * C91891) / p + (C90625 * C91944) / C87538);
    const double C86509 = (3 * C92067) / C91893 -
                          ((C86464 * C91896) / p + (C90667 * C91950) / C87538);
    const double C92068 = C86464 - C92004;
    const double C92109 = C92069 / C91893;
    const double C86947 = C92030 - (C86889 * C91898) / p -
                          (C90781 * C91951) / C87538 + (3 * C92069) / C91893;
    const double C92070 = C86889 - C92006;
    const double C87856 = (C88544 * C91889) / C91890 - (C87813 * C91891) / p -
                          (C88548 * C91944) / C87538 + C92086;
    const double C88077 =
        C92086 - ((C88062 * C91896) / p + (C88642 * C91950) / C87538);
    const double C89324 =
        C92103 - ((C89281 * C91891) / p + (C89998 * C91944) / C87538);
    const double C89540 = (C90088 * C91889) / C91890 - (C89526 * C91896) / p -
                          (C90093 * C91950) / C87538 + C92103;
    const double C90767 =
        C92112 - ((C90725 * C91891) / p + (C91439 * C91944) / C87538);
    const double C90982 =
        C92112 - ((C90968 * C91896) / p + (C91532 * C91950) / C87538);
    const double C92077 = C92015 / C91893;
    const double C83229 = C92014 - (C83228 * C91891) / p -
                          (C87572 * C91944) / C87538 + (2 * C92015) / p;
    const double C83429 = -((C83368 * C91898) / p + (C87769 * C91951) / C87538);
    const double C83776 =
        C92027 - (C83775 * C91891) / p - (C88009 * C91944) / C87538;
    const double C83835 = -((C83775 * C91898) / p + (C88009 * C91951) / C87538);
    const double C92078 = C92021 / C91893;
    const double C83806 =
        (2 * C92021) / p - ((C83775 * C91896) / p + (C88009 * C91950) / C87538);
    const double C83461 = (C87809 * C91889) / C91890 - (C83460 * C91891) / p -
                          (C87813 * C91944) / C87538 + C92079;
    const double C83866 =
        C92079 - ((C83897 * C91896) / p + (C88062 * C91950) / C87538);
    const double C84224 =
        C92031 - (C84223 * C91891) / p - (C88253 * C91944) / C87538;
    const double C84254 = -((C84223 * C91896) / p + (C88253 * C91950) / C87538);
    const double C92080 = C92025 / C91893;
    const double C84283 =
        (2 * C92025) / p - ((C84223 * C91898) / p + (C88253 * C91951) / C87538);
    const double C92098 = C92052 / C91893;
    const double C84617 =
        (2 * C92052) / p - ((C84616 * C91891) / p + (C89046 * C91944) / C87538);
    const double C84813 = -((C84753 * C91898) / p + (C89238 * C91951) / C87538);
    const double C85152 = -((C85151 * C91891) / p + (C89473 * C91944) / C87538);
    const double C85210 = -((C85151 * C91898) / p + (C89473 * C91951) / C87538);
    const double C92099 = C92055 / C91893;
    const double C85181 = C92027 - (C85151 * C91896) / p -
                          (C89473 * C91950) / C87538 + (2 * C92055) / p;
    const double C84844 =
        C92100 - ((C84843 * C91891) / p + (C89281 * C91944) / C87538);
    const double C85240 =
        C92029 - (C85270 * C91896) / p - (C89526 * C91950) / C87538 + C92100;
    const double C85590 = -((C85589 * C91891) / p + (C89712 * C91944) / C87538);
    const double C85619 =
        C92031 - (C85589 * C91896) / p - (C89712 * C91950) / C87538;
    const double C92101 = C92057 / C91893;
    const double C85648 =
        (2 * C92057) / p - ((C85589 * C91898) / p + (C89712 * C91951) / C87538);
    const double C92107 = C92065 / C91893;
    const double C85975 =
        (2 * C92065) / p - ((C85974 * C91891) / p + (C90491 * C91944) / C87538);
    const double C86171 = (C90677 * C91889) / C91890 - (C86111 * C91898) / p -
                          (C90683 * C91951) / C87538;
    const double C86510 = -((C86509 * C91891) / p + (C90915 * C91944) / C87538);
    const double C86568 =
        C92027 - (C86509 * C91898) / p - (C90915 * C91951) / C87538;
    const double C92108 = C92068 / C91893;
    const double C86539 =
        (2 * C92068) / p - ((C86509 * C91896) / p + (C90915 * C91950) / C87538);
    const double C86202 =
        C92109 - ((C86201 * C91891) / p + (C90725 * C91944) / C87538);
    const double C86598 =
        C92109 - ((C86628 * C91896) / p + (C90968 * C91950) / C87538);
    const double C86948 = -((C86947 * C91891) / p + (C91154 * C91944) / C87538);
    const double C86977 = -((C86947 * C91896) / p + (C91154 * C91950) / C87538);
    const double C92110 = C92070 / C91893;
    const double C87006 = C92031 - (C86947 * C91898) / p -
                          (C91154 * C91951) / C87538 + (2 * C92070) / p;
    const double C83369 =
        C92077 - ((C83291 * C91896) / p + (C87724 * C91950) / C87538);
    const double C83462 =
        C92077 - ((C83336 * C91898) / p + (C87827 * C91951) / C87538);
    const double C83400 = (C87750 * C91889) / C91890 - (C83713 * C91891) / p -
                          (C87754 * C91944) / C87538 + C92078;
    const double C83898 =
        C92078 - ((C83850 * C91898) / p + (C88104 * C91951) / C87538);
    const double C83493 = -((C83461 * C91896) / p + (C87856 * C91950) / C87538);
    const double C83867 = (C88073 * C91889) / C91890 - (C83866 * C91891) / p -
                          (C88077 * C91944) / C87538;
    const double C83522 = (C87867 * C91889) / C91890 - (C84147 * C91891) / p -
                          (C87871 * C91944) / C87538 + C92080;
    const double C83928 =
        C92080 - ((C84207 * C91896) / p + (C88131 * C91950) / C87538);
    const double C84754 = (C89190 * C91889) / C91890 - (C84677 * C91896) / p -
                          (C89195 * C91950) / C87538 + C92098;
    const double C84845 =
        C92098 - ((C84722 * C91898) / p + (C89295 * C91951) / C87538);
    const double C84784 =
        C92099 - ((C85090 * C91891) / p + (C89224 * C91944) / C87538);
    const double C85271 =
        C92099 - ((C85225 * C91898) / p + (C89567 * C91951) / C87538);
    const double C84875 = (C89319 * C91889) / C91890 - (C84844 * C91896) / p -
                          (C89324 * C91950) / C87538;
    const double C85241 = -((C85240 * C91891) / p + (C89540 * C91944) / C87538);
    const double C84904 =
        C92101 - ((C85515 * C91891) / p + (C89339 * C91944) / C87538);
    const double C85301 =
        C92032 - (C85574 * C91896) / p - (C89594 * C91950) / C87538 + C92101;
    const double C86112 =
        C92107 - ((C86035 * C91896) / p + (C90639 * C91950) / C87538);
    const double C86203 =
        C92058 - (C86080 * C91898) / p - (C90739 * C91951) / C87538 + C92107;
    const double C86142 =
        C92108 - ((C86448 * C91891) / p + (C90668 * C91944) / C87538);
    const double C86629 =
        C92028 - (C86583 * C91898) / p - (C91009 * C91951) / C87538 + C92108;
    const double C86233 = -((C86202 * C91896) / p + (C90767 * C91950) / C87538);
    const double C86599 = -((C86598 * C91891) / p + (C90982 * C91944) / C87538);
    const double C86262 =
        C92110 - ((C86873 * C91891) / p + (C90782 * C91944) / C87538);
    const double C86659 =
        C92110 - ((C86932 * C91896) / p + (C91036 * C91950) / C87538);
    vrx[0] = C83227;
    vrx[1] = C83228;
    vrx[2] = C83229;
    vrx[3] = C83245;
    vrx[4] = C83261;
    vrx[5] = C83276;
    vrx[6] = C83291;
    vrx[7] = C83306;
    vrx[8] = C83321;
    vrx[9] = C83336;
    vrx[10] = C83351;
    vrx[11] = C83367;
    vrx[12] = C83368;
    vrx[13] = C83369;
    vrx[14] = C83385;
    vrx[15] = C83400;
    vrx[16] = C83429;
    vrx[17] = C83444;
    vrx[18] = C83460;
    vrx[19] = C83461;
    vrx[20] = C83462;
    vrx[21] = C83478;
    vrx[22] = C83493;
    vrx[23] = C83522;
    vrx[24] = C83580;
    vrx[25] = C83639;
    vrx[26] = C83683;
    vrx[27] = C83713;
    vrx[28] = C83728;
    vrx[29] = C83729;
    vrx[30] = C83744;
    vrx[31] = C83759;
    vrx[32] = C83775;
    vrx[33] = C83776;
    vrx[34] = C83806;
    vrx[35] = C83835;
    vrx[36] = C83850;
    vrx[37] = C83866;
    vrx[38] = C83867;
    vrx[39] = C83897;
    vrx[40] = C83898;
    vrx[41] = C83913;
    vrx[42] = C83928;
    vrx[43] = C83986;
    vrx[44] = C84088;
    vrx[45] = C84118;
    vrx[46] = C84147;
    vrx[47] = C84162;
    vrx[48] = C84163;
    vrx[49] = C84207;
    vrx[50] = C84223;
    vrx[51] = C84224;
    vrx[52] = C84254;
    vrx[53] = C84283;
    vrx[54] = C84341;
    vry[0] = C84615;
    vry[1] = C84616;
    vry[2] = C84617;
    vry[3] = C84632;
    vry[4] = C84647;
    vry[5] = C84662;
    vry[6] = C84677;
    vry[7] = C84692;
    vry[8] = C84707;
    vry[9] = C84722;
    vry[10] = C84737;
    vry[11] = C84752;
    vry[12] = C84753;
    vry[13] = C84754;
    vry[14] = C84769;
    vry[15] = C84784;
    vry[16] = C84813;
    vry[17] = C84828;
    vry[18] = C84843;
    vry[19] = C84844;
    vry[20] = C84845;
    vry[21] = C84860;
    vry[22] = C84875;
    vry[23] = C84904;
    vry[24] = C84961;
    vry[25] = C85018;
    vry[26] = C85061;
    vry[27] = C85090;
    vry[28] = C85105;
    vry[29] = C85106;
    vry[30] = C85121;
    vry[31] = C85136;
    vry[32] = C85151;
    vry[33] = C85152;
    vry[34] = C85181;
    vry[35] = C85210;
    vry[36] = C85225;
    vry[37] = C85240;
    vry[38] = C85241;
    vry[39] = C85270;
    vry[40] = C85271;
    vry[41] = C85286;
    vry[42] = C85301;
    vry[43] = C85358;
    vry[44] = C85457;
    vry[45] = C85486;
    vry[46] = C85515;
    vry[47] = C85530;
    vry[48] = C85531;
    vry[49] = C85574;
    vry[50] = C85589;
    vry[51] = C85590;
    vry[52] = C85619;
    vry[53] = C85648;
    vry[54] = C85705;
    vrz[0] = C85973;
    vrz[1] = C85974;
    vrz[2] = C85975;
    vrz[3] = C85990;
    vrz[4] = C86005;
    vrz[5] = C86020;
    vrz[6] = C86035;
    vrz[7] = C86050;
    vrz[8] = C86065;
    vrz[9] = C86080;
    vrz[10] = C86095;
    vrz[11] = C86110;
    vrz[12] = C86111;
    vrz[13] = C86112;
    vrz[14] = C86127;
    vrz[15] = C86142;
    vrz[16] = C86171;
    vrz[17] = C86186;
    vrz[18] = C86201;
    vrz[19] = C86202;
    vrz[20] = C86203;
    vrz[21] = C86218;
    vrz[22] = C86233;
    vrz[23] = C86262;
    vrz[24] = C86319;
    vrz[25] = C86376;
    vrz[26] = C86419;
    vrz[27] = C86448;
    vrz[28] = C86463;
    vrz[29] = C86464;
    vrz[30] = C86479;
    vrz[31] = C86494;
    vrz[32] = C86509;
    vrz[33] = C86510;
    vrz[34] = C86539;
    vrz[35] = C86568;
    vrz[36] = C86583;
    vrz[37] = C86598;
    vrz[38] = C86599;
    vrz[39] = C86628;
    vrz[40] = C86629;
    vrz[41] = C86644;
    vrz[42] = C86659;
    vrz[43] = C86716;
    vrz[44] = C86815;
    vrz[45] = C86844;
    vrz[46] = C86873;
    vrz[47] = C86888;
    vrz[48] = C86889;
    vrz[49] = C86932;
    vrz[50] = C86947;
    vrz[51] = C86948;
    vrz[52] = C86977;
    vrz[53] = C87006;
    vrz[54] = C87063;
}
