/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pspd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1012_11(const double ae,
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
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C25915 = ae + be;
    const double C25914 = xA - xB;
    const double C25913 = ae * be;
    const double C25932 = yA - yB;
    const double C25935 = zA - zB;
    const double C25966 = p + q;
    const double C25965 = p * q;
    const double C25971 = xP - xQ;
    const double C25970 = bs[2];
    const double C25978 = std::pow(ae, 2);
    const double C25976 = bs[3];
    const double C25989 = bs[4];
    const double C26010 = bs[5];
    const double C26041 = yP - yQ;
    const double C26066 = zP - zQ;
    const double C87 = bs[0];
    const double C26778 = ce + de;
    const double C26777 = ce * de;
    const double C26776 = xC - xD;
    const double C26800 = yC - yD;
    const double C26816 = zC - zD;
    const double C26920 = 2 * C25915;
    const double C26919 = std::pow(C25914, 2);
    const double C25916 = C25913 * C25914;
    const double C25948 = C25913 * C25932;
    const double C26922 = std::pow(C25932, 2);
    const double C25960 = C25913 * C25935;
    const double C26921 = std::pow(C25935, 2);
    const double C25967 = 2 * C25965;
    const double C25979 = C25971 * ae;
    const double C25975 = std::pow(C25971, 2);
    const double C26044 = C26041 * ae;
    const double C26043 = C25971 * C26041;
    const double C26092 = C26041 * C25971;
    const double C26105 = std::pow(C26041, 2);
    const double C26069 = C26066 * ae;
    const double C26068 = C25971 * C26066;
    const double C26119 = C26041 * C26066;
    const double C26130 = C26066 * C25971;
    const double C26143 = C26066 * C26041;
    const double C26154 = std::pow(C26066, 2);
    const double C26780 = 2 * C26778;
    const double C26790 = std::pow(C26778, 2);
    const double C26782 = C26776 * de;
    const double C26781 = C26776 * ce;
    const double C26779 = std::pow(C26776, 2);
    const double C26801 = std::pow(C26800, 2);
    const double C26853 = C26800 * de;
    const double C26852 = C26800 * ce;
    const double C26817 = std::pow(C26816, 2);
    const double C26881 = C26816 * de;
    const double C26880 = C26816 * ce;
    const double C26944 = std::pow(C26920, -1);
    const double C26943 = C26919 * C25913;
    const double C26946 = C26922 * C25913;
    const double C26945 = C26921 * C25913;
    const double C25969 = C25967 / C25966;
    const double C97 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C25967 / C25966, 2) -
          (bs[1] * C25967) / C25966) *
         std::pow(ae, 2)) /
        std::pow(C25915, 2);
    const double C88 = -(C25971 * bs[1] * C25967) / C25966;
    const double C601 = -(C26041 * bs[1] * C25967) / C25966;
    const double C1218 = -(C26066 * bs[1] * C25967) / C25966;
    const double C25981 = C25976 * C25979;
    const double C25992 = C25989 * C25979;
    const double C26015 = C26010 * C25979;
    const double C92 = (-(bs[1] * C25979 * C25967) / C25966) / C25915;
    const double C25991 = C25975 * C25989;
    const double C26014 = C25975 * C26010;
    const double C26046 = C25976 * C26044;
    const double C26050 = C25989 * C26044;
    const double C26057 = C26010 * C26044;
    const double C145 = (-(bs[1] * C26044 * C25967) / C25966) / C25915;
    const double C26045 = C26043 * C25978;
    const double C26093 = C26092 * C25978;
    const double C26107 = C26105 * C25989;
    const double C26112 = C26105 * C26010;
    const double C26071 = C25976 * C26069;
    const double C26075 = C25989 * C26069;
    const double C26082 = C26010 * C26069;
    const double C208 = (-(bs[1] * C26069 * C25967) / C25966) / C25915;
    const double C26070 = C26068 * C25978;
    const double C26120 = C26119 * C25978;
    const double C26131 = C26130 * C25978;
    const double C26144 = C26143 * C25978;
    const double C26156 = C26154 * C25989;
    const double C26161 = C26154 * C26010;
    const double C26791 = std::pow(C26780, -1);
    const double C26931 = std::pow(C26780, -2);
    const double C26795 = 2 * C26790;
    const double C26929 = 4 * C26790;
    const double C26783 = C26779 * C26777;
    const double C26802 = C26801 * C26777;
    const double C26818 = C26817 * C26777;
    const double C26956 = C26943 / C25915;
    const double C26958 = C26946 / C25915;
    const double C26957 = C26945 / C25915;
    const double C25972 = std::pow(C25969, 2);
    const double C25977 = -C25969;
    const double C25990 = std::pow(C25969, 4);
    const double C26049 = C25989 * C26045;
    const double C26056 = C26010 * C26045;
    const double C26095 = C25989 * C26093;
    const double C26098 = C26010 * C26093;
    const double C26074 = C25989 * C26070;
    const double C26081 = C26010 * C26070;
    const double C26122 = C25989 * C26120;
    const double C26125 = C26010 * C26120;
    const double C26133 = C25989 * C26131;
    const double C26136 = C26010 * C26131;
    const double C26146 = C25989 * C26144;
    const double C26149 = C26010 * C26144;
    const double C26784 = C26783 / C26778;
    const double C26803 = C26802 / C26778;
    const double C26819 = C26818 / C26778;
    const double C26965 = -C26956;
    const double C26967 = -C26958;
    const double C26966 = -C26957;
    const double C25974 = C25970 * C25972;
    const double C98 = (2 * ae * C25972 * C25970 * C25971 * ae +
                        C25971 *
                            (C25970 * C25972 + std::pow(C25971, 2) * bs[3] *
                                                   std::pow(-C25969, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C25915, 2);
    const double C150 =
        (C25972 * C25970 * C25971 * (yP - yQ) * C25978) / std::pow(C25915, 2);
    const double C213 =
        (C25972 * C25970 * C25971 * (zP - zQ) * C25978) / std::pow(C25915, 2);
    const double C270 =
        (C25972 * C25970 * C26041 * C25971 * C25978) / std::pow(C25915, 2);
    const double C310 =
        ((std::pow(C26041, 2) * C25970 * C25972 - (bs[1] * C25967) / C25966) *
         C25978) /
        std::pow(C25915, 2);
    const double C369 =
        (C25972 * C25970 * C26041 * C26066 * C25978) / std::pow(C25915, 2);
    const double C423 =
        (C25972 * C25970 * C26066 * C25971 * C25978) / std::pow(C25915, 2);
    const double C462 =
        (C25972 * C25970 * C26066 * C26041 * C25978) / std::pow(C25915, 2);
    const double C517 =
        ((std::pow(C26066, 2) * C25970 * C25972 - (bs[1] * C25967) / C25966) *
         C25978) /
        std::pow(C25915, 2);
    const double C93 = (C25971 * C25972 * C25970 * C25979) / C25915 -
                       (ae * bs[1] * C25967) / (C25966 * C25915);
    const double C146 = (C25971 * C25972 * C25970 * C26044) / C25915;
    const double C209 = (C25971 * C25972 * C25970 * C26069) / C25915;
    const double C607 = (C26041 * C25972 * C25970 * C25979) / C25915;
    const double C677 = (C26041 * C25972 * C25970 * C26044) / C25915 -
                        (ae * bs[1] * C25967) / (C25966 * C25915);
    const double C751 = (C26041 * C25972 * C25970 * C26069) / C25915;
    const double C1224 = (C26066 * C25972 * C25970 * C25979) / C25915;
    const double C1294 = (C26066 * C25972 * C25970 * C26044) / C25915;
    const double C1368 = (C26066 * C25972 * C25970 * C26069) / C25915 -
                         (ae * bs[1] * C25967) / (C25966 * C25915);
    const double C25980 = std::pow(C25977, 3);
    const double C26011 = std::pow(C25977, 5);
    const double C25996 = C25990 * C25992;
    const double C25995 = C25991 * C25990;
    const double C26009 = C25989 * C25990;
    const double C26052 = C25990 * C26050;
    const double C26077 = C25990 * C26075;
    const double C26108 = C26107 * C25990;
    const double C26157 = C26156 * C25990;
    const double C26051 = C25990 * C26049;
    const double C26096 = C25990 * C26095;
    const double C26076 = C25990 * C26074;
    const double C26123 = C25990 * C26122;
    const double C26134 = C25990 * C26133;
    const double C26147 = C25990 * C26146;
    const double C26785 = -C26784;
    const double C26804 = -C26803;
    const double C26820 = -C26819;
    const double C26968 = std::exp(C26965);
    const double C26970 = std::exp(C26967);
    const double C26969 = std::exp(C26966);
    const double C25982 = C25974 * ae;
    const double C89 = C25974 * C25975 - (bs[1] * C25967) / C25966;
    const double C600 = C26041 * C25971 * C25974;
    const double C602 = C25974 * C26105 - (bs[1] * C25967) / C25966;
    const double C1217 = C26066 * C25971 * C25974;
    const double C1219 = C25974 * C26154 - (bs[1] * C25967) / C25966;
    const double C2854 = C26066 * C26041 * C25974;
    const double C25983 = C25980 * C25981;
    const double C25988 = C25976 * C25980;
    const double C26047 = C25980 * C26046;
    const double C26072 = C25980 * C26071;
    const double C151 = (ae * C25972 * C25970 * C26041 * ae +
                         C25971 * C25980 * C25976 * C25971 * C26041 * C25978) /
                        std::pow(C25915, 2);
    const double C214 = (ae * C25972 * C25970 * C26066 * ae +
                         C25971 * C25980 * C25976 * C25971 * C26066 * C25978) /
                        std::pow(C25915, 2);
    const double C271 = (ae * C25972 * C25970 * C26044 +
                         C25971 * C25980 * C25976 * C26041 * C25971 * C25978) /
                        std::pow(C25915, 2);
    const double C311 =
        (C25971 * (C25974 + std::pow(C26041, 2) * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C370 = (C25971 * C25980 * C25976 * C26041 * C26066 * C25978) /
                        std::pow(C25915, 2);
    const double C371 =
        (C25980 * C25976 * C26120 + C25990 * C25989 * C26120 * C25975) /
        std::pow(C25915, 2);
    const double C424 = (ae * C25972 * C25970 * C26069 +
                         C25971 * C25980 * C25976 * C26066 * C25971 * C25978) /
                        std::pow(C25915, 2);
    const double C463 = (C25971 * C25980 * C25976 * C26066 * C26041 * C25978) /
                        std::pow(C25915, 2);
    const double C464 =
        (C25980 * C25976 * C26144 + C25990 * C25989 * C26144 * C25975) /
        std::pow(C25915, 2);
    const double C518 =
        (C25971 * (C25974 + std::pow(C26066, 2) * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C613 =
        (C26041 * (C25974 + C25975 * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C683 =
        (ae * C25972 * C25970 * C25979 + C26041 * C25980 * C25976 * C26045) /
        std::pow(C25915, 2);
    const double C757 =
        (C26041 * C25980 * C25976 * C26070) / std::pow(C25915, 2);
    const double C825 =
        (ae * C25972 * C25970 * C25979 + C26041 * C25980 * C25976 * C26093) /
        std::pow(C25915, 2);
    const double C881 =
        (2 * ae * C25972 * C25970 * C26044 +
         C26041 * (C25974 + C26105 * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C953 =
        (ae * C25972 * C25970 * C26069 + C26041 * C25980 * C25976 * C26120) /
        std::pow(C25915, 2);
    const double C1019 =
        (C26041 * C25980 * C25976 * C26131) / std::pow(C25915, 2);
    const double C1075 =
        (ae * C25972 * C25970 * C26069 + C26041 * C25980 * C25976 * C26144) /
        std::pow(C25915, 2);
    const double C1141 =
        (C26041 * (C25974 + C26154 * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C1230 =
        (C26066 * (C25974 + C25975 * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C1300 =
        (C26066 * C25980 * C25976 * C26045) / std::pow(C25915, 2);
    const double C1374 =
        (ae * C25972 * C25970 * C25979 + C26066 * C25980 * C25976 * C26070) /
        std::pow(C25915, 2);
    const double C1442 =
        (C26066 * C25980 * C25976 * C26093) / std::pow(C25915, 2);
    const double C1498 =
        (C26066 * (C25974 + C26105 * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C1570 =
        (ae * C25972 * C25970 * C26044 + C26066 * C25980 * C25976 * C26120) /
        std::pow(C25915, 2);
    const double C1636 =
        (ae * C25972 * C25970 * C25979 + C26066 * C25980 * C25976 * C26131) /
        std::pow(C25915, 2);
    const double C1692 =
        (ae * C25972 * C25970 * C26044 + C26066 * C25980 * C25976 * C26144) /
        std::pow(C25915, 2);
    const double C1758 =
        (2 * ae * C25972 * C25970 * C26069 +
         C26066 * (C25974 + C26154 * C25976 * C25980) * C25978) /
        std::pow(C25915, 2);
    const double C26020 = C26011 * C26015;
    const double C26019 = C26014 * C26011;
    const double C26059 = C26011 * C26057;
    const double C26058 = C26011 * C26056;
    const double C26084 = C26011 * C26082;
    const double C26083 = C26011 * C26081;
    const double C26099 = C26011 * C26098;
    const double C26113 = C26112 * C26011;
    const double C26126 = C26011 * C26125;
    const double C26137 = C26011 * C26136;
    const double C26150 = C26011 * C26149;
    const double C26162 = C26161 * C26011;
    const double C25999 = C25971 * C25996;
    const double C26008 = ae * C25996;
    const double C26406 = C26041 * C25996;
    const double C26584 = C26066 * C25996;
    const double C26018 = C26009 * C25975;
    const double C26017 = C25971 * C26009;
    const double C26016 = C26009 * ae;
    const double C26501 = C26009 * C26105;
    const double C26500 = C26041 * C26009;
    const double C26607 = C26009 * C26154;
    const double C26606 = C26066 * C26009;
    const double C26055 = ae * C26052;
    const double C26054 = C25971 * C26052;
    const double C26379 = C26041 * C26052;
    const double C26592 = C26066 * C26052;
    const double C26080 = ae * C26077;
    const double C26079 = C25971 * C26077;
    const double C26423 = C26041 * C26077;
    const double C26476 = C26066 * C26077;
    const double C1301 =
        (C25980 * C25976 * C26045 + C26051 * C26154) / std::pow(C25915, 2);
    const double C1443 =
        (C25980 * C25976 * C26093 + C26096 * C26154) / std::pow(C25915, 2);
    const double C758 =
        (C25980 * C25976 * C26070 + C26076 * C26105) / std::pow(C25915, 2);
    const double C372 =
        (2 * C25971 * C26123 +
         C25971 * (C26123 + C26011 * C26010 * C26120 * C25975)) /
        std::pow(C25915, 2);
    const double C1020 =
        (C25980 * C25976 * C26131 + C26134 * C26105) / std::pow(C25915, 2);
    const double C465 =
        (2 * C25971 * C26147 +
         C25971 * (C26147 + C26011 * C26010 * C26144 * C25975)) /
        std::pow(C25915, 2);
    const double C26786 = std::exp(C26785);
    const double C26805 = std::exp(C26804);
    const double C26821 = std::exp(C26820);
    const double C9597 = C26968 * C607;
    const double C18547 = C26968 * C1224;
    const double C25917 = C25916 * C26968;
    const double C73 = -(C26968 * C25914 * be) / C25915;
    const double C74 = C26944 * C26968;
    const double C157 = C26970 * C146;
    const double C18427 = C26970 * C1294;
    const double C25949 = C25948 * C26970;
    const double C144 = -(2 * C25913 * (yA - yB) * C26970) / C25915;
    const double C309 =
        -((C26970 - (C25932 * 2 * C25913 * C25932 * C26970) / C25915) * 2 *
          C25913) /
        C25915;
    const double C9097 =
        (-(0 * be) / C25915) / (2 * C25915) -
        ((C26970 - (C25932 * 2 * C25913 * C25932 * C26970) / C25915) * be) /
            C25915;
    const double C9098 =
        (-(2 * C25913 * C25932 * C26970) / C25915) / (2 * C25915) -
        (0 * be) / C25915;
    const double C9051 = -(C26970 * C25932 * be) / C25915;
    const double C9052 = C26944 * C26970;
    const double C220 = C26969 * C209;
    const double C9527 = C26969 * C751;
    const double C25961 = C25960 * C26969;
    const double C207 = -(2 * C25913 * (zA - zB) * C26969) / C25915;
    const double C516 =
        -((C26969 - (C25935 * 2 * C25913 * C25935 * C26969) / C25915) * 2 *
          C25913) /
        C25915;
    const double C17630 =
        (-(0 * be) / C25915) / (2 * C25915) -
        ((C26969 - (C25935 * 2 * C25913 * C25935 * C26969) / C25915) * be) /
            C25915;
    const double C17631 =
        (-(2 * C25913 * C25935 * C26969) / C25915) / (2 * C25915) -
        (0 * be) / C25915;
    const double C17559 = -(C26969 * C25935 * be) / C25915;
    const double C17560 = C26944 * C26969;
    const double C25984 = C25971 * C25983;
    const double C684 = (C25980 * C25976 * C26045 + ae * C26041 * C25983 +
                         C26041 * (ae * C25983 + C26041 * C26051)) /
                        std::pow(C25915, 2);
    const double C826 = (C25980 * C25976 * C26093 + ae * C26041 * C25983 +
                         C26041 * (ae * C25983 + C26041 * C26096)) /
                        std::pow(C25915, 2);
    const double C1375 = (C25980 * C25976 * C26070 + ae * C26066 * C25983 +
                          C26066 * (ae * C25983 + C26066 * C26076)) /
                         std::pow(C25915, 2);
    const double C1637 = (C25980 * C25976 * C26131 + ae * C26066 * C25983 +
                          C26066 * (ae * C25983 + C26066 * C26134)) /
                         std::pow(C25915, 2);
    const double C2936 =
        (C26066 * (ae * C25983 + C26041 * C26051)) / std::pow(C25915, 2);
    const double C3014 =
        (ae * C26041 * C25983 + C26066 * C26041 * C26076) / std::pow(C25915, 2);
    const double C3089 =
        (ae * C26066 * C25983 + C26041 * C26066 * C26096) / std::pow(C25915, 2);
    const double C3309 =
        (ae * C26041 * C25983 + C26066 * C26041 * C26134) / std::pow(C25915, 2);
    const double C608 = (C25972 * C25970 * C25979 + C25983 * C26105) / C25915;
    const double C1225 = (C25972 * C25970 * C25979 + C25983 * C26154) / C25915;
    const double C2857 = (C26066 * C26041 * C25983) / C25915;
    const double C3961 =
        (2 * C26041 * C25983 + C26041 * (C25983 + C25996 * C26105)) / C25915;
    const double C5846 = (C26066 * (C25983 + C25996 * C26105)) / C25915;
    const double C7218 =
        (2 * C26066 * C25983 + C26066 * (C25983 + C25996 * C26154)) / C25915;
    const double C25994 = C25971 * C25988;
    const double C25993 = C25988 * ae;
    const double C25998 = C25988 + C25995;
    const double C26109 = C25988 + C26108;
    const double C26158 = C25988 + C26157;
    const double C26380 = C26041 * C25988;
    const double C26477 = C26066 * C25988;
    const double C312 =
        ((C25974 + C26105 * C25976 * C25980) * C25978 +
         (C25988 + C26105 * C25989 * C25990) * C25978 * C25975) /
        std::pow(C25915, 2);
    const double C519 =
        ((C25974 + C26154 * C25976 * C25980) * C25978 +
         (C25988 + C26154 * C25989 * C25990) * C25978 * C25975) /
        std::pow(C25915, 2);
    const double C90 =
        2 * C25971 * C25974 + C25971 * (C25974 + C25988 * C25975);
    const double C604 = C26041 * (C25974 + C25988 * C25975);
    const double C1221 = C26066 * (C25974 + C25988 * C25975);
    const double C3959 =
        2 * C26041 * C25974 + C26041 * (C25974 + C25988 * C26105);
    const double C5844 = C26066 * (C25974 + C25988 * C26105);
    const double C7216 =
        2 * C26066 * C25974 + C26066 * (C25974 + C25988 * C26154);
    const double C26197 = C26041 * C26047;
    const double C152 =
        (C25980 * C25976 * C26045 + ae * C25971 * C26047 +
         C25971 * (ae * C26047 + C25971 * C25990 * C25989 * C26045)) /
        std::pow(C25915, 2);
    const double C153 =
        (2 * (ae * C26047 + C25971 * C26051) + ae * (C26047 + C26052 * C25975) +
         C25971 *
             (C26051 + ae * C25971 * C26052 +
              C25971 * (ae * C26052 + C25971 * C26011 * C26010 * C26045))) /
        std::pow(C25915, 2);
    const double C272 =
        (C25980 * C25976 * C26093 + ae * C25971 * C26047 +
         C25971 * (ae * C26047 + C25971 * C25990 * C25989 * C26093)) /
        std::pow(C25915, 2);
    const double C1299 =
        (C26066 * (ae * C26047 + C25971 * C26051)) / std::pow(C25915, 2);
    const double C1441 =
        (C26066 * (ae * C26047 + C25971 * C26096)) / std::pow(C25915, 2);
    const double C1569 =
        (ae * C25971 * C26047 + C26066 * C25971 * C26123) / std::pow(C25915, 2);
    const double C1571 = (C25980 * C25976 * C26120 + ae * C26066 * C26047 +
                          C26066 * (ae * C26047 + C26066 * C26123)) /
                         std::pow(C25915, 2);
    const double C1691 =
        (ae * C25971 * C26047 + C26066 * C25971 * C26147) / std::pow(C25915, 2);
    const double C1693 = (C25980 * C25976 * C26144 + ae * C26066 * C26047 +
                          C26066 * (ae * C26047 + C26066 * C26147)) /
                         std::pow(C25915, 2);
    const double C147 = (C25972 * C25970 * C26044 + C26047 * C25975) / C25915;
    const double C148 =
        (2 * C25971 * C26047 + C25971 * (C26047 + C26052 * C25975)) / C25915;
    const double C676 =
        (C26041 * C25971 * C26047 + C25971 * C25974 * ae) / C25915;
    const double C680 = (C26041 * (C26047 + C26052 * C25975) +
                         (C25974 + C25988 * C25975) * ae) /
                        C25915;
    const double C1293 = (C26066 * C25971 * C26047) / C25915;
    const double C1295 = (C25972 * C25970 * C26044 + C26047 * C26154) / C25915;
    const double C1297 = (C26066 * (C26047 + C26052 * C25975)) / C25915;
    const double C7258 =
        (2 * C26066 * C26047 + C26066 * (C26047 + C26052 * C26154)) / C25915;
    const double C26289 = C26066 * C26072;
    const double C215 =
        (C25980 * C25976 * C26070 + ae * C25971 * C26072 +
         C25971 * (ae * C26072 + C25971 * C25990 * C25989 * C26070)) /
        std::pow(C25915, 2);
    const double C216 =
        (2 * (ae * C26072 + C25971 * C26076) + ae * (C26072 + C26077 * C25975) +
         C25971 *
             (C26076 + ae * C25971 * C26077 +
              C25971 * (ae * C26077 + C25971 * C26011 * C26010 * C26070))) /
        std::pow(C25915, 2);
    const double C425 =
        (C25980 * C25976 * C26131 + ae * C25971 * C26072 +
         C25971 * (ae * C26072 + C25971 * C25990 * C25989 * C26131)) /
        std::pow(C25915, 2);
    const double C756 =
        (C26041 * (ae * C26072 + C25971 * C26076)) / std::pow(C25915, 2);
    const double C952 =
        (ae * C25971 * C26072 + C26041 * C25971 * C26123) / std::pow(C25915, 2);
    const double C954 = (C25980 * C25976 * C26120 + ae * C26041 * C26072 +
                         C26041 * (ae * C26072 + C26041 * C26123)) /
                        std::pow(C25915, 2);
    const double C1018 =
        (C26041 * (ae * C26072 + C25971 * C26134)) / std::pow(C25915, 2);
    const double C1074 =
        (ae * C25971 * C26072 + C26041 * C25971 * C26147) / std::pow(C25915, 2);
    const double C1076 = (C25980 * C25976 * C26144 + ae * C26041 * C26072 +
                          C26041 * (ae * C26072 + C26041 * C26147)) /
                         std::pow(C25915, 2);
    const double C210 = (C25972 * C25970 * C26069 + C26072 * C25975) / C25915;
    const double C211 =
        (2 * C25971 * C26072 + C25971 * (C26072 + C26077 * C25975)) / C25915;
    const double C750 = (C26041 * C25971 * C26072) / C25915;
    const double C752 = (C25972 * C25970 * C26069 + C26072 * C26105) / C25915;
    const double C754 = (C26041 * (C26072 + C26077 * C25975)) / C25915;
    const double C1367 =
        (C26066 * C25971 * C26072 + C25971 * C25974 * ae) / C25915;
    const double C1371 = (C26066 * (C26072 + C26077 * C25975) +
                          (C25974 + C25988 * C25975) * ae) /
                         C25915;
    const double C3011 =
        (C26066 * C26041 * C26072 + C26041 * C25974 * ae) / C25915;
    const double C4039 =
        (2 * C26041 * C26072 + C26041 * (C26072 + C26077 * C26105)) / C25915;
    const double C5956 = (C26066 * (C26072 + C26077 * C26105) +
                          (C25974 + C25988 * C26105) * ae) /
                         C25915;
    const double C159 = C26970 * C151;
    const double C222 = C26969 * C214;
    const double C319 = C26970 * C311;
    const double C377 = C26969 * C370;
    const double C379 = C26969 * C371;
    const double C470 = C26970 * C463;
    const double C472 = C26970 * C464;
    const double C526 = C26969 * C518;
    const double C9399 = C26968 * C613;
    const double C9529 = C26969 * C757;
    const double C9599 = C26968 * C825;
    const double C9729 = C26969 * C953;
    const double C9786 = C26968 * C1019;
    const double C9905 = C26969 * C1141;
    const double C18356 = C26968 * C1230;
    const double C18429 = C26970 * C1300;
    const double C18549 = C26968 * C1442;
    const double C18629 = C26970 * C1498;
    const double C18743 = C26968 * C1636;
    const double C18805 = C26970 * C1692;
    const double C26024 = C25971 * C26020;
    const double C26488 = C26020 * C26105;
    const double C26562 = C26041 * C26020;
    const double C26586 = C26020 * C26154;
    const double C26023 = C26009 + C26019;
    const double C26061 = C26059 * C25975;
    const double C26368 = C25971 * C26059;
    const double C26499 = C26041 * C26059;
    const double C26593 = C26059 * C26154;
    const double C26060 = C25971 * C26058;
    const double C26487 = C26041 * C26058;
    const double C7260 =
        (2 * C26066 * C26051 + C26066 * (C26051 + C26058 * C26154)) /
        std::pow(C25915, 2);
    const double C24138 =
        (3 * (C26051 + C26058 * C26154) +
         C26066 * (2 * C26066 * C26058 +
                   C26066 * (C26058 +
                             std::pow(C25969, 6) * bs[6] * C26045 * C26154))) /
        std::pow(C25915, 2);
    const double C26086 = C26084 * C25975;
    const double C26390 = C25971 * C26084;
    const double C26518 = C26084 * C26105;
    const double C26571 = C26041 * C26084;
    const double C26605 = C26066 * C26084;
    const double C26085 = C25971 * C26083;
    const double C26561 = C26041 * C26083;
    const double C26585 = C26066 * C26083;
    const double C4041 =
        (2 * C26041 * C26076 + C26041 * (C26076 + C26083 * C26105)) /
        std::pow(C25915, 2);
    const double C5958 = (ae * (C25983 + C25996 * C26105) +
                          C26066 * (C26076 + C26083 * C26105)) /
                         std::pow(C25915, 2);
    const double C12522 =
        (3 * (C26076 + C26083 * C26105) +
         C26041 * (2 * C26041 * C26083 +
                   C26041 * (C26083 +
                             std::pow(C25969, 6) * bs[6] * C26070 * C26105))) /
        std::pow(C25915, 2);
    const double C26100 = C25971 * C26099;
    const double C26493 = C26041 * C26099;
    const double C26545 = C26066 * C26099;
    const double C4479 = (ae * (C25983 + C25996 * C26154) +
                          C26041 * (C26096 + C26099 * C26154)) /
                         std::pow(C25915, 2);
    const double C7334 =
        (2 * C26066 * C26096 + C26066 * (C26096 + C26099 * C26154)) /
        std::pow(C25915, 2);
    const double C26114 = C26009 + C26113;
    const double C26389 = C25971 * C26126;
    const double C26517 = C26041 * C26126;
    const double C26553 = C26066 * C26126;
    const double C373 =
        (3 * (C26123 + C26126 * C25975) +
         C25971 * (2 * C25971 * C26126 +
                   C25971 * (C26126 +
                             std::pow(C25969, 6) * bs[6] * C26120 * C25975))) /
        std::pow(C25915, 2);
    const double C956 = (ae * (C26072 + C26077 * C25975) +
                         C26041 * (C26123 + C26126 * C25975)) /
                        std::pow(C25915, 2);
    const double C1573 = (ae * (C26047 + C26052 * C25975) +
                          C26066 * (C26123 + C26126 * C25975)) /
                         std::pow(C25915, 2);
    const double C26138 = C25971 * C26137;
    const double C26567 = C26041 * C26137;
    const double C26596 = C26066 * C26137;
    const double C4187 =
        (2 * C26041 * C26134 + C26041 * (C26134 + C26137 * C26105)) /
        std::pow(C25915, 2);
    const double C6168 = (ae * (C25983 + C25996 * C26105) +
                          C26066 * (C26134 + C26137 * C26105)) /
                         std::pow(C25915, 2);
    const double C12681 =
        (3 * (C26134 + C26137 * C26105) +
         C26041 * (2 * C26041 * C26137 +
                   C26041 * (C26137 +
                             std::pow(C25969, 6) * bs[6] * C26131 * C26105))) /
        std::pow(C25915, 2);
    const double C26395 = C25971 * C26150;
    const double C26523 = C26041 * C26150;
    const double C26599 = C26066 * C26150;
    const double C466 =
        (3 * (C26147 + C26150 * C25975) +
         C25971 * (2 * C25971 * C26150 +
                   C25971 * (C26150 +
                             std::pow(C25969, 6) * bs[6] * C26144 * C25975))) /
        std::pow(C25915, 2);
    const double C1078 = (ae * (C26072 + C26077 * C25975) +
                          C26041 * (C26147 + C26150 * C25975)) /
                         std::pow(C25915, 2);
    const double C1695 = (ae * (C26047 + C26052 * C25975) +
                          C26066 * (C26147 + C26150 * C25975)) /
                         std::pow(C25915, 2);
    const double C26163 = C26009 + C26162;
    const double C26013 = 2 * C26008;
    const double C4003 =
        (2 * (ae * C25983 + C26041 * C26051) + ae * (C25983 + C25996 * C26105) +
         C26041 * (C26051 + ae * C26041 * C25996 +
                   C26041 * (C26008 + C26041 * C26058))) /
        std::pow(C25915, 2);
    const double C4077 =
        (2 * (ae * C25983 + C26041 * C26096) + ae * (C25983 + C25996 * C26105) +
         C26041 * (C26096 + ae * C26041 * C25996 +
                   C26041 * (C26008 + C26041 * C26099))) /
        std::pow(C25915, 2);
    const double C4373 =
        (ae * C25983 + C26041 * C26051 + (C26008 + C26041 * C26058) * C26154) /
        std::pow(C25915, 2);
    const double C7298 =
        (2 * (ae * C25983 + C26066 * C26076) + ae * (C25983 + C25996 * C26154) +
         C26066 * (C26076 + ae * C26066 * C25996 +
                   C26066 * (C26008 + C26066 * C26083))) /
        std::pow(C25915, 2);
    const double C7444 =
        (2 * (ae * C25983 + C26066 * C26134) + ae * (C25983 + C25996 * C26154) +
         C26066 * (C26134 + ae * C26066 * C25996 +
                   C26066 * (C26008 + C26066 * C26137))) /
        std::pow(C25915, 2);
    const double C4427 = (C26041 * C26076 + ae * C26066 * C26406 +
                          C26066 * (ae * C26406 + C26066 * C26041 * C26083)) /
                         std::pow(C25915, 2);
    const double C4637 = (C26041 * C26134 + ae * C26066 * C26406 +
                          C26066 * (ae * C26406 + C26066 * C26041 * C26137)) /
                         std::pow(C25915, 2);
    const double C5904 = (C26066 * (C26051 + ae * C26406 +
                                    C26041 * (C26008 + C26041 * C26058))) /
                         std::pow(C25915, 2);
    const double C6010 =
        (C26066 * C26096 + ae * C26066 * C26406 +
         C26041 * (ae * C26066 * C25996 + C26041 * C26066 * C26099)) /
        std::pow(C25915, 2);
    const double C12985 =
        (C26096 + C26099 * C26154 + ae * (C26406 + C26041 * C26020 * C26154) +
         C26041 * (ae * (C25996 + C26020 * C26154) +
                   C26041 * (C26099 +
                             std::pow(C25969, 6) * bs[6] * C26093 * C26154))) /
        std::pow(C25915, 2);
    const double C4315 = (C26041 * C25983 + C26406 * C26154) / C25915;
    const double C26022 = C25988 + C26018;
    const double C26021 = C26017 * ae;
    const double C26369 = C26041 * C26017;
    const double C26467 = C26066 * C26017;
    const double C26505 = C25988 + C26501;
    const double C26504 = C26500 * ae;
    const double C26572 = C26066 * C26500;
    const double C26611 = C25988 + C26607;
    const double C26610 = C26606 * ae;
    const double C26496 = 2 * C26055;
    const double C7408 =
        (2 * (ae * C26047 + C26066 * C26123) + ae * (C26047 + C26052 * C26154) +
         C26066 * (C26123 + ae * C26066 * C26052 +
                   C26066 * (C26055 + C26066 * C26126))) /
        std::pow(C25915, 2);
    const double C7480 =
        (2 * (ae * C26047 + C26066 * C26147) + ae * (C26047 + C26052 * C26154) +
         C26066 * (C26147 + ae * C26066 * C26052 +
                   C26066 * (C26055 + C26066 * C26150))) /
        std::pow(C25915, 2);
    const double C26201 = C26041 * C26054;
    const double C273 =
        (2 * (ae * C26047 + C25971 * C26096) + ae * (C26047 + C26052 * C25975) +
         C25971 * (C26096 + ae * C26054 +
                   C25971 * (C26055 + C25971 * C26011 * C26010 * C26093))) /
        std::pow(C25915, 2);
    const double C1572 = (C25971 * C26123 + ae * C26066 * C26054 +
                          C26066 * (ae * C26054 + C26066 * C25971 * C26126)) /
                         std::pow(C25915, 2);
    const double C1694 = (C25971 * C26147 + ae * C26066 * C26054 +
                          C26066 * (ae * C26054 + C26066 * C25971 * C26150)) /
                         std::pow(C25915, 2);
    const double C1296 = (C25971 * C26047 + C26054 * C26154) / C25915;
    const double C26602 = 2 * C26080;
    const double C4151 =
        (2 * (ae * C26072 + C26041 * C26123) + ae * (C26072 + C26077 * C26105) +
         C26041 * (C26123 + ae * C26041 * C26077 +
                   C26041 * (C26080 + C26041 * C26126))) /
        std::pow(C25915, 2);
    const double C4223 =
        (2 * (ae * C26072 + C26041 * C26147) + ae * (C26072 + C26077 * C26105) +
         C26041 * (C26147 + ae * C26041 * C26077 +
                   C26041 * (C26080 + C26041 * C26150))) /
        std::pow(C25915, 2);
    const double C26293 = C26066 * C26079;
    const double C426 =
        (2 * (ae * C26072 + C25971 * C26134) + ae * (C26072 + C26077 * C25975) +
         C25971 * (C26134 + ae * C26079 +
                   C25971 * (C26080 + C25971 * C26011 * C26010 * C26131))) /
        std::pow(C25915, 2);
    const double C955 = (C25971 * C26123 + ae * C26041 * C26079 +
                         C26041 * (ae * C26079 + C26041 * C25971 * C26126)) /
                        std::pow(C25915, 2);
    const double C1077 = (C25971 * C26147 + ae * C26041 * C26079 +
                          C26041 * (ae * C26079 + C26041 * C25971 * C26150)) /
                         std::pow(C25915, 2);
    const double C753 = (C25971 * C26072 + C26079 * C26105) / C25915;
    const double C26424 = C26066 * C26423;
    const double C18431 = C26970 * C1301;
    const double C18551 = C26968 * C1443;
    const double C9531 = C26969 * C758;
    const double C383 = C26969 * C372;
    const double C9788 = C26968 * C1020;
    const double C476 = C26970 * C465;
    const double C26787 = C26786 * C26781;
    const double C26792 = C26791 * C26786;
    const double C26926 = C26786 * C26782;
    const double C26923 = C26786 / C26780;
    const double C3518 = C26931 * C26786;
    const double C26854 = C26805 * C26852;
    const double C26857 = C26791 * C26805;
    const double C26935 = C26805 * C26853;
    const double C26930 = C26805 / C26780;
    const double C597 = C26931 * C26805;
    const double C26882 = C26821 * C26880;
    const double C26885 = C26791 * C26821;
    const double C26939 = C26821 * C26881;
    const double C26932 = C26821 / C26780;
    const double C1216 = C26931 * C26821;
    const double C83 =
        -(((-4 * C25917) / C25915 -
           (C25914 * (C26968 - (C25914 * 2 * C25917) / C25915) * 2 * C25913) /
               C25915) *
          be) /
        C25915;
    const double C84 =
        (-(0 * be) / C25915) / (2 * C25915) -
        ((C26968 - (C25914 * 2 * C25917) / C25915) * be) / C25915;
    const double C85 =
        (-((C26968 - (C25914 * 2 * C25917) / C25915) * 2 * C25913) / C25915) /
        (2 * C25915);
    const double C86 =
        (-(2 * C25917) / C25915) / (2 * C25915) - (0 * be) / C25915;
    const double C9053 =
        -((C26968 - (C25914 * 2 * C25917) / C25915) * 2 * C25913) / C25915;
    const double C9054 = -(2 * C25917) / C25915;
    const double C9201 =
        -(((-4 * C25949) / C25915 -
           (C25932 * (C26970 - (C25932 * 2 * C25949) / C25915) * 2 * C25913) /
               C25915) *
          be) /
        C25915;
    const double C9202 =
        (-((C26970 - (C25932 * 2 * C25949) / C25915) * 2 * C25913) / C25915) /
        (2 * C25915);
    const double C162 = C144 * C89;
    const double C158 = C144 * C93;
    const double C156 = C144 * C88;
    const double C318 = C144 * C146;
    const double C316 = C144 * C145;
    const double C469 = C144 * C209;
    const double C691 = C144 * C600;
    const double C890 = C144 * C677;
    const double C1308 = C144 * C1217;
    const double C1507 = C144 * C1294;
    const double C18432 = C144 * C1219;
    const double C18428 = C144 * C1224;
    const double C18426 = C144 * C1218;
    const double C18804 = C144 * C1368;
    const double C19924 = C144 * C2854;
    const double C320 = C309 * C89;
    const double C317 = C309 * C88;
    const double C887 = C309 * C600;
    const double C1504 = C309 * C1217;
    const double C18630 = C309 * C1219;
    const double C18628 = C309 * C1218;
    const double C20136 = C309 * C2854;
    const double C9207 = C9097 * C146;
    const double C9204 = C9097 * C145;
    const double C9671 = C9097 * C677;
    const double C10173 = C9097 * C1294;
    const double C9205 = C9098 * C677;
    const double C17836 =
        -(((-4 * C25961) / C25915 -
           (C25935 * (C26969 - (C25935 * 2 * C25961) / C25915) * 2 * C25913) /
               C25915) *
          be) /
        C25915;
    const double C17837 =
        (-((C26969 - (C25935 * 2 * C25961) / C25915) * 2 * C25913) / C25915) /
        (2 * C25915);
    const double C225 = C207 * C89;
    const double C221 = C207 * C93;
    const double C219 = C207 * C88;
    const double C376 = C207 * C146;
    const double C525 = C207 * C209;
    const double C523 = C207 * C208;
    const double C765 = C207 * C600;
    const double C1150 = C207 * C751;
    const double C1382 = C207 * C1217;
    const double C1767 = C207 * C1368;
    const double C9532 = C207 * C602;
    const double C9528 = C207 * C607;
    const double C9526 = C207 * C601;
    const double C9728 = C207 * C677;
    const double C11520 = C207 * C2854;
    const double C527 = C516 * C89;
    const double C524 = C516 * C88;
    const double C1147 = C516 * C600;
    const double C1764 = C516 * C1217;
    const double C9906 = C516 * C602;
    const double C9904 = C516 * C601;
    const double C11953 = C516 * C2854;
    const double C17842 = C17630 * C209;
    const double C17839 = C17630 * C208;
    const double C18298 = C17630 * C751;
    const double C18861 = C17630 * C1368;
    const double C17840 = C17631 * C1368;
    const double C25985 = C25984 + C25982;
    const double C9601 = C26968 * C826;
    const double C18745 = C26968 * C1637;
    const double C19927 = C26970 * C2936;
    const double C11519 = C26969 * C3014;
    const double C11595 = C26968 * C3089;
    const double C11812 = C26968 * C3309;
    const double C9530 = C207 * C608;
    const double C9603 = C26968 * C608;
    const double C18430 = C144 * C1225;
    const double C18553 = C26968 * C1225;
    const double C11518 = C207 * C2857;
    const double C11597 = C26968 * C2857;
    const double C19926 = C144 * C2857;
    const double C12526 = C207 * C3961;
    const double C12568 = C26968 * C3961;
    const double C14474 = C207 * C5846;
    const double C14532 = C26968 * C5846;
    const double C22791 = C144 * C5846;
    const double C24142 = C144 * C7218;
    const double C24220 = C26968 * C7218;
    const double C25997 = C25994 * ae;
    const double C3012 =
        (C26066 * C26041 * C26079 + C26041 * C25994 * ae) / C25915;
    const double C603 = C25971 * C25974 + C25994 * C26105;
    const double C1220 = C25971 * C25974 + C25994 * C26154;
    const double C2855 = C26066 * C26041 * C25994;
    const double C3958 =
        2 * C26041 * C25994 + C26041 * (C25994 + C26017 * C26105);
    const double C5843 = C26066 * (C25994 + C26017 * C26105);
    const double C7215 =
        2 * C26066 * C25994 + C26066 * (C25994 + C26017 * C26154);
    const double C26001 = C25999 + C25993;
    const double C26381 = C26379 + C25993;
    const double C26478 = C26476 + C25993;
    const double C4585 = (ae * (C26072 + C26066 * (C26066 * C26077 + C25993) +
                                C26066 * C25988 * ae) +
                          C26041 * (C26123 + ae * C26066 * C26052 +
                                    C26066 * (C26055 + C26066 * C26126))) /
                         std::pow(C25915, 2);
    const double C26000 = C25998 * C25978;
    const double C26110 = C26109 * C25978;
    const double C26159 = C26158 * C25978;
    const double C26382 = C26380 * ae;
    const double C4313 = C26041 * C25974 + C26380 * C26154;
    const double C15741 =
        2 * C26066 * C26380 + C26066 * (C26380 + C26500 * C26154);
    const double C26479 = C26477 * ae;
    const double C322 = C26970 * C312;
    const double C529 = C26969 * C519;
    const double C164 = C144 * C90;
    const double C227 = C207 * C90;
    const double C323 = C309 * C90;
    const double C530 = C516 * C90;
    const double C1894 = C144 * C604;
    const double C1952 = C207 * C604;
    const double C2060 = C309 * C604;
    const double C2280 = C516 * C604;
    const double C2396 = C144 * C1221;
    const double C2454 = C207 * C1221;
    const double C2562 = C309 * C1221;
    const double C2782 = C516 * C1221;
    const double C12524 = C207 * C3959;
    const double C12758 = C516 * C3959;
    const double C14472 = C207 * C5844;
    const double C14802 = C516 * C5844;
    const double C22789 = C144 * C5844;
    const double C22949 = C309 * C5844;
    const double C24140 = C144 * C7216;
    const double C24262 = C309 * C7216;
    const double C26198 = C26197 + C25982;
    const double C161 = C26970 * C152;
    const double C167 = C26970 * C153;
    const double C1307 = C26970 * C1299;
    const double C18557 = C26968 * C1441;
    const double C1577 = C26969 * C1569;
    const double C1699 = C26970 * C1691;
    const double C18807 = C26970 * C1693;
    const double C163 = C26970 * C147;
    const double C321 = C144 * C147;
    const double C378 = C207 * C147;
    const double C9208 = C9097 * C147;
    const double C165 = C26970 * C148;
    const double C324 = C144 * C148;
    const double C382 = C207 * C148;
    const double C9211 = C9097 * C148;
    const double C692 = C26970 * C676;
    const double C888 = C144 * C676;
    const double C959 = C207 * C676;
    const double C9206 = C9098 * C676;
    const double C9674 = C9097 * C676;
    const double C895 = C144 * C680;
    const double C1895 = C26970 * C680;
    const double C2118 = C207 * C680;
    const double C9209 = C9098 * C680;
    const double C10646 = C9097 * C680;
    const double C1309 = C26970 * C1293;
    const double C1505 = C144 * C1293;
    const double C1576 = C207 * C1293;
    const double C10176 = C9097 * C1293;
    const double C1508 = C144 * C1295;
    const double C10174 = C9097 * C1295;
    const double C18433 = C26970 * C1295;
    const double C1512 = C144 * C1297;
    const double C2397 = C26970 * C1297;
    const double C2620 = C207 * C1297;
    const double C11105 = C9097 * C1297;
    const double C7373 = C144 * C7258;
    const double C15890 = C9097 * C7258;
    const double C24141 = C26970 * C7258;
    const double C26290 = C26289 + C25982;
    const double C224 = C26969 * C215;
    const double C230 = C26969 * C216;
    const double C764 = C26969 * C756;
    const double C960 = C26969 * C952;
    const double C9731 = C26969 * C954;
    const double C9792 = C26968 * C1018;
    const double C1082 = C26970 * C1074;
    const double C226 = C26969 * C210;
    const double C471 = C144 * C210;
    const double C528 = C207 * C210;
    const double C17843 = C17630 * C210;
    const double C228 = C26969 * C211;
    const double C475 = C144 * C211;
    const double C531 = C207 * C211;
    const double C17846 = C17630 * C211;
    const double C766 = C26969 * C750;
    const double C1081 = C144 * C750;
    const double C1148 = C207 * C750;
    const double C18301 = C17630 * C750;
    const double C1151 = C207 * C752;
    const double C9533 = C26969 * C752;
    const double C18299 = C17630 * C752;
    const double C1155 = C207 * C754;
    const double C1953 = C26969 * C754;
    const double C2225 = C144 * C754;
    const double C19319 = C17630 * C754;
    const double C1383 = C26969 * C1367;
    const double C1698 = C144 * C1367;
    const double C1765 = C207 * C1367;
    const double C17841 = C17631 * C1367;
    const double C18864 = C17630 * C1367;
    const double C1772 = C207 * C1371;
    const double C2455 = C26969 * C1371;
    const double C2727 = C144 * C1371;
    const double C17844 = C17631 * C1371;
    const double C19791 = C17630 * C1371;
    const double C3456 = C207 * C3011;
    const double C11521 = C26969 * C3011;
    const double C18297 = C17631 * C3011;
    const double C20341 = C144 * C3011;
    const double C20410 = C17630 * C3011;
    const double C4262 = C207 * C4039;
    const double C12525 = C26969 * C4039;
    const double C21172 = C17630 * C4039;
    const double C6275 = C207 * C5956;
    const double C14473 = C26969 * C5956;
    const double C18300 = C17631 * C5956;
    const double C23106 = C144 * C5956;
    const double C23160 = C17630 * C5956;
    const double C26027 = C26024 + C26016;
    const double C26490 = C25996 + C26488;
    const double C15742 =
        (2 * C26066 * C26406 + C26066 * (C26406 + C26562 * C26154)) / C25915;
    const double C26588 = C25996 + C26586;
    const double C26026 = C26023 * C25978;
    const double C26063 = C26052 + C26061;
    const double C26370 = C26041 * C26368;
    const double C7257 =
        (2 * C26066 * C26054 + C26066 * (C26054 + C26368 * C26154)) / C25915;
    const double C26503 = C26499 + C26016;
    const double C26594 = C26052 + C26593;
    const double C26062 = C26055 + C26060;
    const double C26489 = C26008 + C26487;
    const double C24143 = C26970 * C7260;
    const double C26088 = C26077 + C26086;
    const double C26418 = C26041 * C26390;
    const double C26466 = C26066 * C26390;
    const double C4038 =
        (2 * C26041 * C26079 + C26041 * (C26079 + C26390 * C26105)) / C25915;
    const double C5955 = (C26066 * (C26079 + C26390 * C26105) +
                          (C25994 + C26017 * C26105) * ae) /
                         C25915;
    const double C26520 = C26077 + C26518;
    const double C26573 = C26066 * C26571;
    const double C26609 = C26605 + C26016;
    const double C26087 = C26080 + C26085;
    const double C15817 =
        (2 * (ae * C26406 + C26066 * C26561) + ae * (C26406 + C26562 * C26154) +
         C26066 *
             (C26561 + ae * C26066 * C26562 +
              C26066 * (ae * C26562 + C26066 * C26041 * std::pow(C25969, 6) *
                                          bs[6] * C26070))) /
        std::pow(C25915, 2);
    const double C26587 = C26008 + C26585;
    const double C12527 = C26969 * C4041;
    const double C14475 = C26969 * C5958;
    const double C26101 = C26055 + C26100;
    const double C26494 = C26008 + C26493;
    const double C15852 =
        (ae * (2 * C26066 * C25996 + C26066 * (C25996 + C26020 * C26154)) +
         C26041 * (2 * C26545 + C26066 * (C26099 + std::pow(C25969, 6) * bs[6] *
                                                       C26093 * C26154))) /
        std::pow(C25915, 2);
    const double C24217 =
        (3 * (C26096 + C26099 * C26154) +
         C26066 * (2 * C26545 + C26066 * (C26099 + std::pow(C25969, 6) * bs[6] *
                                                       C26093 * C26154))) /
        std::pow(C25915, 2);
    const double C12990 = C26968 * C4479;
    const double C24222 = C26968 * C7334;
    const double C26115 = C26114 * C25978;
    const double C4150 =
        (2 * (ae * C26079 + C26041 * C26389) + ae * (C26079 + C26390 * C26105) +
         C26041 *
             (C26389 + ae * C26041 * C26390 +
              C26041 * (ae * C26390 + C26041 * C25971 * std::pow(C25969, 6) *
                                          bs[6] * C26120))) /
        std::pow(C25915, 2);
    const double C7407 =
        (2 * (ae * C26054 + C26066 * C26389) + ae * (C26054 + C26368 * C26154) +
         C26066 *
             (C26389 + ae * C26066 * C26368 +
              C26066 * (ae * C26368 + C26066 * C25971 * std::pow(C25969, 6) *
                                          bs[6] * C26120))) /
        std::pow(C25915, 2);
    const double C26519 = C26080 + C26517;
    const double C26554 = C26055 + C26553;
    const double C2119 = C26969 * C956;
    const double C2621 = C26969 * C1573;
    const double C26139 = C26080 + C26138;
    const double C15959 =
        (2 * (ae * C26406 + C26066 * C26567) + ae * (C26406 + C26562 * C26154) +
         C26066 *
             (C26567 + ae * C26066 * C26562 +
              C26066 * (ae * C26562 + C26066 * C26041 * std::pow(C25969, 6) *
                                          bs[6] * C26131))) /
        std::pow(C25915, 2);
    const double C26597 = C26008 + C26596;
    const double C12685 = C26968 * C4187;
    const double C14697 = C26968 * C6168;
    const double C4222 =
        (2 * (ae * C26079 + C26041 * C26395) + ae * (C26079 + C26390 * C26105) +
         C26041 *
             (C26395 + ae * C26041 * C26390 +
              C26041 * (ae * C26390 + C26041 * C25971 * std::pow(C25969, 6) *
                                          bs[6] * C26144))) /
        std::pow(C25915, 2);
    const double C7479 =
        (2 * (ae * C26054 + C26066 * C26395) + ae * (C26054 + C26368 * C26154) +
         C26066 *
             (C26395 + ae * C26066 * C26368 +
              C26066 * (ae * C26368 + C26066 * C25971 * std::pow(C25969, 6) *
                                          bs[6] * C26144))) /
        std::pow(C25915, 2);
    const double C26524 = C26080 + C26523;
    const double C26600 = C26055 + C26599;
    const double C2226 = C26970 * C1078;
    const double C2728 = C26970 * C1695;
    const double C26164 = C26163 * C25978;
    const double C12570 = C26968 * C4077;
    const double C21276 = C26970 * C4373;
    const double C24340 = C26968 * C7444;
    const double C12931 = C26969 * C4427;
    const double C13153 = C26968 * C4637;
    const double C22792 = C26970 * C5904;
    const double C14534 = C26968 * C6010;
    const double C12930 = C207 * C4315;
    const double C12988 = C26968 * C4315;
    const double C21275 = C144 * C4315;
    const double C26025 = C26022 * ae;
    const double C91 = 3 * (C25974 + C25988 * C25975) +
                       C25971 * (2 * C25994 + C25971 * C26022);
    const double C605 = C25974 + C25988 * C25975 + C26022 * C26105;
    const double C1222 = C25974 + C25988 * C25975 + C26022 * C26154;
    const double C1836 = C26041 * (2 * C25994 + C25971 * C26022);
    const double C2338 = C26066 * (2 * C25994 + C25971 * C26022);
    const double C2856 = C26066 * C26041 * C26022;
    const double C4584 =
        (ae * (C26079 + C26066 * (C26066 * C26390 + C26021) +
               C26066 * C26017 * ae) +
         C26041 *
             (C26389 + ae * C26066 * C26368 +
              C26066 * (ae * C26368 + C26066 * C25971 * std::pow(C25969, 6) *
                                          bs[6] * C26120))) /
        std::pow(C25915, 2);
    const double C26371 = C26369 * ae;
    const double C4312 = C26041 * C25994 + C26369 * C26154;
    const double C26469 = C26467 * ae;
    const double C26507 = C26505 * ae;
    const double C12441 = 3 * (C25974 + C25988 * C26105) +
                          C26041 * (2 * C26380 + C26041 * C26505);
    const double C12813 = C25974 + C25988 * C26105 + C26505 * C26154;
    const double C14357 = C26066 * (2 * C26380 + C26041 * C26505);
    const double C13095 =
        (C26123 + ae * C26066 * C26052 + C26066 * (C26055 + C26066 * C26126) +
         ae * (C26423 + C26066 * (C26066 * C26041 * C26084 + C26504) +
               C26066 * C26500 * ae) +
         C26041 *
             (ae * (C26077 + C26066 * (C26066 * C26084 + C26016) +
                    C26066 * C26009 * ae) +
              C26041 * (C26126 + ae * C26066 * C26059 +
                        C26066 * (ae * C26059 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26120)))) /
        std::pow(C25915, 2);
    const double C26574 = C26572 * ae;
    const double C26613 = C26611 * ae;
    const double C24094 = 3 * (C25974 + C25988 * C26154) +
                          C26066 * (2 * C26477 + C26066 * C26611);
    const double C24378 = C26970 * C7480;
    const double C1581 = C26969 * C1572;
    const double C1703 = C26970 * C1694;
    const double C1311 = C26970 * C1296;
    const double C1510 = C144 * C1296;
    const double C1580 = C207 * C1296;
    const double C10179 = C9097 * C1296;
    const double C12646 = C26969 * C4151;
    const double C964 = C26969 * C955;
    const double C1086 = C26970 * C1077;
    const double C768 = C26969 * C753;
    const double C1085 = C144 * C753;
    const double C1153 = C207 * C753;
    const double C18304 = C17630 * C753;
    const double C26927 = C26787 / C26795;
    const double C26925 = C26787 / C26778;
    const double C26924 = C26787 * C26782;
    const double C3517 = (2 * C26791 * C26787) / C26778;
    const double C26928 = C26792 * C26782;
    const double C82 = C26792 / C26929;
    const double C1835 = C26792 / C26780;
    const double C26948 = C26926 / C26778;
    const double C3516 = (C26786 * std::pow(C26781, 2)) / C26790 + C26923;
    const double C26937 = C26854 / C26795;
    const double C26936 = C26854 * C26853;
    const double C26933 = C26854 / C26778;
    const double C596 = (2 * C26791 * C26854) / C26778;
    const double C26938 = C26857 * C26853;
    const double C3956 = C26857 / C26929;
    const double C4796 = C26857 / C26780;
    const double C26950 = C26935 / C26778;
    const double C595 = (C26805 * std::pow(C26852, 2)) / C26790 + C26930;
    const double C26941 = C26882 / C26795;
    const double C26940 = C26882 * C26881;
    const double C26934 = C26882 / C26778;
    const double C1215 = (2 * C26791 * C26882) / C26778;
    const double C26942 = C26885 * C26881;
    const double C7214 = C26885 / C26929;
    const double C8165 = C26885 / C26780;
    const double C26953 = C26939 / C26778;
    const double C1214 = (C26821 * std::pow(C26880, 2)) / C26790 + C26932;
    const double C106 = C84 * C93;
    const double C103 = C84 * C92;
    const double C621 = C84 * C608;
    const double C620 = C84 * C607;
    const double C1238 = C84 * C1225;
    const double C1237 = C84 * C1224;
    const double C2864 = C84 * C2857;
    const double C3966 = C84 * C3961;
    const double C4320 = C84 * C4315;
    const double C5851 = C84 * C5846;
    const double C7223 = C84 * C7218;
    const double C104 = C86 * C93;
    const double C9404 = C9053 * C600;
    const double C9400 = C9053 * C602;
    const double C9398 = C9053 * C601;
    const double C10430 = C9053 * C604;
    const double C11372 = C9053 * C2854;
    const double C12445 = C9053 * C3959;
    const double C14361 = C9053 * C5844;
    const double C18359 = C9053 * C1217;
    const double C18357 = C9053 * C1219;
    const double C18355 = C9053 * C1218;
    const double C19370 = C9053 * C1221;
    const double C24098 = C9053 * C7216;
    const double C9059 = C9054 * C93;
    const double C9057 = C9054 * C607;
    const double C9056 = C9054 * C92;
    const double C9403 = C9054 * C3961;
    const double C9401 = C9054 * C608;
    const double C9606 = C9054 * C676;
    const double C9604 = C9054 * C600;
    const double C9602 = C9054 * C602;
    const double C9598 = C9054 * C677;
    const double C9596 = C9054 * C601;
    const double C9794 = C9054 * C753;
    const double C9791 = C9054 * C750;
    const double C9787 = C9054 * C752;
    const double C9785 = C9054 * C751;
    const double C9967 = C9054 * C4315;
    const double C9966 = C9054 * C1225;
    const double C9965 = C9054 * C1224;
    const double C9964 = C9054 * C2857;
    const double C10591 = C9054 * C680;
    const double C10589 = C9054 * C604;
    const double C10748 = C9054 * C754;
    const double C11374 = C9054 * C5846;
    const double C11596 = C9054 * C2854;
    const double C11811 = C9054 * C3011;
    const double C12567 = C9054 * C3959;
    const double C12684 = C9054 * C4039;
    const double C14531 = C9054 * C5844;
    const double C14696 = C9054 * C5956;
    const double C15746 = C9054 * C7218;
    const double C18560 = C9054 * C1296;
    const double C18556 = C9054 * C1293;
    const double C18554 = C9054 * C1217;
    const double C18552 = C9054 * C1219;
    const double C18550 = C9054 * C1295;
    const double C18548 = C9054 * C1294;
    const double C18546 = C9054 * C1218;
    const double C18746 = C9054 * C1367;
    const double C18742 = C9054 * C1368;
    const double C19530 = C9054 * C1297;
    const double C19528 = C9054 * C1221;
    const double C19687 = C9054 * C1371;
    const double C24221 = C9054 * C7258;
    const double C24219 = C9054 * C7216;
    const double C169 = C158 + C159;
    const double C168 = C156 + C157;
    const double C477 = C469 + C470;
    const double C18439 = C18428 + C18429;
    const double C18438 = C18426 + C18427;
    const double C18808 = C18804 + C18805;
    const double C327 = C317 + C318;
    const double C18634 = C18628 + C1507;
    const double C232 = C221 + C222;
    const double C231 = C219 + C220;
    const double C384 = C376 + C377;
    const double C9539 = C9528 + C9529;
    const double C9538 = C9526 + C9527;
    const double C9732 = C9728 + C9729;
    const double C534 = C524 + C525;
    const double C9908 = C9904 + C1150;
    const double C25986 = ae * C25985;
    const double C94 =
        (C25972 * C25970 * C25979 + C25971 * C25985 + C25971 * C25974 * ae) /
        C25915;
    const double C606 = (C26041 * C25985) / C25915;
    const double C1223 = (C26066 * C25985) / C25915;
    const double C9540 = C9530 + C9531;
    const double C18440 = C18430 + C18431;
    const double C11524 = C11518 + C11519;
    const double C19931 = C19926 + C19927;
    const double C26202 = C26201 + C25997;
    const double C26294 = C26293 + C25997;
    const double C3019 = C26969 * C3012;
    const double C3383 = C144 * C3012;
    const double C3458 = C207 * C3012;
    const double C11815 = C9054 * C3012;
    const double C18302 = C17631 * C3012;
    const double C20413 = C17630 * C3012;
    const double C693 = C144 * C603;
    const double C767 = C207 * C603;
    const double C892 = C309 * C603;
    const double C1152 = C516 * C603;
    const double C9406 = C9053 * C603;
    const double C9608 = C9054 * C603;
    const double C1310 = C144 * C1220;
    const double C1384 = C207 * C1220;
    const double C1509 = C309 * C1220;
    const double C1769 = C516 * C1220;
    const double C18361 = C9053 * C1220;
    const double C18558 = C9054 * C1220;
    const double C2940 = C144 * C2855;
    const double C3018 = C207 * C2855;
    const double C3163 = C309 * C2855;
    const double C3457 = C516 * C2855;
    const double C11375 = C9053 * C2855;
    const double C11598 = C9054 * C2855;
    const double C26003 = ae * C26001;
    const double C26002 = C25971 * C26001;
    const double C26012 = 2 * C26001;
    const double C26170 = C26041 * C26001;
    const double C26238 = C26066 * C26001;
    const double C609 = (C25985 + C26001 * C26105) / C25915;
    const double C1226 = (C25985 + C26001 * C26154) / C25915;
    const double C26384 = ae * C26381;
    const double C26383 = C26041 * C26381;
    const double C26439 = C26066 * C26381;
    const double C26498 = 2 * C26381;
    const double C26481 = ae * C26478;
    const double C26480 = C26066 * C26478;
    const double C26604 = 2 * C26478;
    const double C13098 = C26969 * C4585;
    const double C612 = (2 * ae * C26041 * C25983 + C25971 * C26041 * C26000) /
                        std::pow(C25915, 2);
    const double C614 =
        ((C25974 + C25975 * C25976 * C25980) * C25978 + C26000 * C26105) /
        std::pow(C25915, 2);
    const double C1229 = (2 * ae * C26066 * C25983 + C25971 * C26066 * C26000) /
                         std::pow(C25915, 2);
    const double C1231 =
        ((C25974 + C25975 * C25976 * C25980) * C25978 + C26000 * C26154) /
        std::pow(C25915, 2);
    const double C2860 = (C26066 * C26041 * C26000) / std::pow(C25915, 2);
    const double C313 =
        (2 * C25971 * C26110 +
         C25971 *
             (C26110 + (C26009 + C26105 * C26010 * C26011) * C25978 * C25975)) /
        std::pow(C25915, 2);
    const double C880 = (2 * ae * C25971 * C26047 + C26041 * C25971 * C26110) /
                        std::pow(C25915, 2);
    const double C1497 = (C26066 * C25971 * C26110) / std::pow(C25915, 2);
    const double C1499 =
        ((C25974 + C26105 * C25976 * C25980) * C25978 + C26110 * C26154) /
        std::pow(C25915, 2);
    const double C3158 = (2 * ae * C26066 * C26047 + C26041 * C26066 * C26110) /
                         std::pow(C25915, 2);
    const double C520 =
        (2 * C25971 * C26159 +
         C25971 *
             (C26159 + (C26009 + C26154 * C26010 * C26011) * C25978 * C25975)) /
        std::pow(C25915, 2);
    const double C1140 = (C26041 * C25971 * C26159) / std::pow(C25915, 2);
    const double C1142 =
        ((C25974 + C26154 * C25976 * C25980) * C25978 + C26159 * C26105) /
        std::pow(C25915, 2);
    const double C1757 = (2 * ae * C25971 * C26072 + C26066 * C25971 * C26159) /
                         std::pow(C25915, 2);
    const double C3452 = (2 * ae * C26041 * C26072 + C26066 * C26041 * C26159) /
                         std::pow(C25915, 2);
    const double C26425 = C26424 + C26382;
    const double C12817 = C9053 * C4313;
    const double C12928 = C207 * C4313;
    const double C12987 = C9054 * C4313;
    const double C13258 = C516 * C4313;
    const double C21273 = C144 * C4313;
    const double C21433 = C309 * C4313;
    const double C26199 = ae * C26198;
    const double C678 =
        (C25972 * C25970 * C26044 + C26041 * C26198 + C26041 * C25974 * ae) /
        C25915;
    const double C2933 = (C26066 * C26198) / C25915;
    const double C4371 = (C26198 + C26381 * C26154) / C25915;
    const double C171 = C162 + C163;
    const double C328 = C320 + C321;
    const double C385 = C378 + C379;
    const double C172 = C164 + C165;
    const double C329 = C323 + C324;
    const double C386 = C382 + C383;
    const double C698 = C691 + C692;
    const double C897 = C887 + C888;
    const double C2063 = C2060 + C895;
    const double C1898 = C1894 + C1895;
    const double C1315 = C1308 + C1309;
    const double C1514 = C1504 + C1505;
    const double C1582 = C1576 + C1577;
    const double C18635 = C18630 + C1508;
    const double C18441 = C18432 + C18433;
    const double C2565 = C2562 + C1512;
    const double C2400 = C2396 + C2397;
    const double C24265 = C24262 + C7373;
    const double C24144 = C24140 + C24141;
    const double C26291 = ae * C26290;
    const double C1369 =
        (C25972 * C25970 * C26069 + C26066 * C26290 + C26066 * C25974 * ae) /
        C25915;
    const double C965 = C959 + C960;
    const double C234 = C225 + C226;
    const double C478 = C471 + C472;
    const double C535 = C527 + C528;
    const double C235 = C227 + C228;
    const double C479 = C475 + C476;
    const double C536 = C530 + C531;
    const double C772 = C765 + C766;
    const double C1087 = C1081 + C1082;
    const double C1157 = C1147 + C1148;
    const double C9909 = C9906 + C1151;
    const double C9541 = C9532 + C9533;
    const double C2283 = C2280 + C1155;
    const double C1956 = C1952 + C1953;
    const double C1389 = C1382 + C1383;
    const double C1704 = C1698 + C1699;
    const double C1774 = C1764 + C1765;
    const double C2785 = C2782 + C1772;
    const double C2458 = C2454 + C2455;
    const double C11955 = C11953 + C3456;
    const double C11525 = C11520 + C11521;
    const double C12761 = C12758 + C4262;
    const double C12528 = C12524 + C12525;
    const double C14805 = C14802 + C6275;
    const double C14476 = C14472 + C14473;
    const double C26030 = ae * C26027;
    const double C26029 = C25971 * C26027;
    const double C26173 = C26027 * C26105;
    const double C26241 = C26027 * C26154;
    const double C26304 = C26041 * C26027;
    const double C26318 = C26066 * C26027;
    const double C12926 =
        (C26076 + C26083 * C26105 + ae * C26066 * C26490 +
         C26066 *
             (ae * C26490 + C26066 * (C26083 + std::pow(C25969, 6) * bs[6] *
                                                   C26070 * C26105))) /
        std::pow(C25915, 2);
    const double C13149 =
        (C26134 + C26137 * C26105 + ae * C26066 * C26490 +
         C26066 *
             (ae * C26490 + C26066 * (C26137 + std::pow(C25969, 6) * bs[6] *
                                                   C26131 * C26105))) /
        std::pow(C25915, 2);
    const double C14470 =
        (ae * (2 * C26406 + C26041 * C26490) +
         C26066 * (2 * C26041 * C26083 +
                   C26041 * (C26083 +
                             std::pow(C25969, 6) * bs[6] * C26070 * C26105))) /
        std::pow(C25915, 2);
    const double C14529 =
        (2 * (ae * C26066 * C25996 + C26041 * C26545) + ae * C26066 * C26490 +
         C26041 * (C26545 + ae * C26066 * C26041 * C26020 +
                   C26041 * (ae * C26066 * C26020 + C26041 * C26066 *
                                                        std::pow(C25969, 6) *
                                                        bs[6] * C26093))) /
        std::pow(C25915, 2);
    const double C14693 =
        (ae * (2 * C26406 + C26041 * C26490) +
         C26066 * (2 * C26041 * C26137 +
                   C26041 * (C26137 +
                             std::pow(C25969, 6) * bs[6] * C26131 * C26105))) /
        std::pow(C25915, 2);
    const double C12442 = (3 * (C25983 + C25996 * C26105) +
                           C26041 * (2 * C26406 + C26041 * C26490)) /
                          C25915;
    const double C12814 = (C25983 + C25996 * C26105 + C26490 * C26154) / C25915;
    const double C14358 = (C26066 * (2 * C26406 + C26041 * C26490)) / C25915;
    const double C15745 = C9054 * C15742;
    const double C24095 = (3 * (C25983 + C25996 * C26154) +
                           C26066 * (2 * C26584 + C26066 * C26588)) /
                          C25915;
    const double C26028 = C25971 * C26026;
    const double C26302 = C26041 * C26026;
    const double C26316 = C26066 * C26026;
    const double C615 = (2 * ae * (C25983 + C25996 * C26105) +
                         C25971 * (C26000 + C26026 * C26105)) /
                        std::pow(C25915, 2);
    const double C1232 = (2 * ae * (C25983 + C25996 * C26154) +
                          C25971 * (C26000 + C26026 * C26154)) /
                         std::pow(C25915, 2);
    const double C3963 =
        (2 * C26041 * C26000 + C26041 * (C26000 + C26026 * C26105)) /
        std::pow(C25915, 2);
    const double C5847 = (2 * ae * C26066 * (C25996 + C26020 * C26105) +
                          C25971 * C26066 *
                              (C26026 + (C26010 * C26011 +
                                         C25975 * bs[6] * std::pow(C25969, 6)) *
                                            C25978 * C26105)) /
                         std::pow(C25915, 2);
    const double C5848 =
        (C26066 * (C26000 + C26026 * C26105)) / std::pow(C25915, 2);
    const double C7220 =
        (2 * C26066 * C26000 + C26066 * (C26000 + C26026 * C26154)) /
        std::pow(C25915, 2);
    const double C12815 =
        (C26000 + C26026 * C26105 +
         (C26026 + (C26010 * C26011 + C25975 * bs[6] * std::pow(C25969, 6)) *
                       C25978 * C26105) *
             C26154) /
        std::pow(C25915, 2);
    const double C26206 = C26041 * C26063;
    const double C1574 =
        (C26123 + C26126 * C25975 + ae * C26066 * C26063 +
         C26066 *
             (ae * C26063 + C26066 * (C26126 + std::pow(C25969, 6) * bs[6] *
                                                   C26120 * C25975))) /
        std::pow(C25915, 2);
    const double C1696 =
        (C26147 + C26150 * C25975 + ae * C26066 * C26063 +
         C26066 *
             (ae * C26063 + C26066 * (C26150 + std::pow(C25969, 6) * bs[6] *
                                                   C26144 * C25975))) /
        std::pow(C25915, 2);
    const double C2617 =
        (ae * (2 * C26054 + C25971 * C26063) +
         C26066 * (2 * C25971 * C26126 +
                   C25971 * (C26126 +
                             std::pow(C25969, 6) * bs[6] * C26120 * C25975))) /
        std::pow(C25915, 2);
    const double C2724 =
        (ae * (2 * C26054 + C25971 * C26063) +
         C26066 * (2 * C25971 * C26150 +
                   C25971 * (C26150 +
                             std::pow(C25969, 6) * bs[6] * C26144 * C25975))) /
        std::pow(C25915, 2);
    const double C149 = (3 * (C26047 + C26052 * C25975) +
                         C25971 * (2 * C26054 + C25971 * C26063)) /
                        C25915;
    const double C1298 = (C26047 + C26052 * C25975 + C26063 * C26154) / C25915;
    const double C1891 = (C26041 * (2 * C26054 + C25971 * C26063) +
                          (2 * C25994 + C25971 * C26022) * ae) /
                         C25915;
    const double C2393 = (C26066 * (2 * C26054 + C25971 * C26063)) / C25915;
    const double C26372 = C26370 + C26021;
    const double C7372 = C144 * C7257;
    const double C26508 = ae * C26503;
    const double C26506 = C26041 * C26503;
    const double C26531 = C26503 * C26154;
    const double C26549 = C26066 * C26503;
    const double C24137 = (3 * (C26047 + C26052 * C26154) +
                           C26066 * (2 * C26592 + C26066 * C26594)) /
                          C25915;
    const double C154 =
        (3 * (C26051 + ae * C26054 + C25971 * C26062) +
         ae * (2 * C26054 + C25971 * C26063) +
         C25971 *
             (2 * C26062 + ae * C26063 +
              C25971 * (C26058 + ae * C25971 * C26059 +
                        C25971 * (ae * C26059 + C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C1302 =
        (ae * C26047 + C25971 * C26051 + C26062 * C26154) / std::pow(C25915, 2);
    const double C1303 = (C26066 * (C26051 + ae * C26054 + C25971 * C26062)) /
                         std::pow(C25915, 2);
    const double C1304 =
        (C26051 + ae * C26054 + C25971 * C26062 +
         (C26058 + ae * C25971 * C26059 +
          C25971 *
              (ae * C26059 + C25971 * std::pow(C25969, 6) * bs[6] * C26045)) *
             C26154) /
        std::pow(C25915, 2);
    const double C2394 =
        (C26066 *
         (2 * C26062 + ae * C26063 +
          C25971 * (C26058 + ae * C25971 * C26059 +
                    C25971 * (ae * C26059 + C25971 * std::pow(C25969, 6) *
                                                bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C7259 =
        (2 * C26066 * C26062 +
         C26066 * (C26062 + (ae * C26059 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26045) *
                                C26154)) /
        std::pow(C25915, 2);
    const double C12486 =
        (3 * (C26051 + ae * C26406 + C26041 * C26489) +
         ae * (2 * C26406 + C26041 * C26490) +
         C26041 *
             (2 * C26489 + ae * C26490 +
              C26041 * (C26058 + ae * C26041 * C26020 +
                        C26041 * (ae * C26020 + C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C12874 =
        (C26051 + ae * C26406 + C26041 * C26489 +
         (C26058 + ae * C26041 * C26020 +
          C26041 *
              (ae * C26020 + C26041 * std::pow(C25969, 6) * bs[6] * C26045)) *
             C26154) /
        std::pow(C25915, 2);
    const double C14418 =
        (C26066 *
         (2 * C26489 + ae * C26490 +
          C26041 * (C26058 + ae * C26041 * C26020 +
                    C26041 * (ae * C26020 + C26041 * std::pow(C25969, 6) *
                                                bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C15781 =
        (2 * C26066 * C26489 +
         C26066 * (C26489 + (ae * C26020 +
                             C26041 * std::pow(C25969, 6) * bs[6] * C26045) *
                                C26154)) /
        std::pow(C25915, 2);
    const double C24145 = C24142 + C24143;
    const double C26298 = C26066 * C26088;
    const double C957 =
        (C26123 + C26126 * C25975 + ae * C26041 * C26088 +
         C26041 *
             (ae * C26088 + C26041 * (C26126 + std::pow(C25969, 6) * bs[6] *
                                                   C26120 * C25975))) /
        std::pow(C25915, 2);
    const double C1079 =
        (C26147 + C26150 * C25975 + ae * C26041 * C26088 +
         C26041 *
             (ae * C26088 + C26041 * (C26150 + std::pow(C25969, 6) * bs[6] *
                                                   C26144 * C25975))) /
        std::pow(C25915, 2);
    const double C2115 =
        (ae * (2 * C26079 + C25971 * C26088) +
         C26041 * (2 * C25971 * C26126 +
                   C25971 * (C26126 +
                             std::pow(C25969, 6) * bs[6] * C26120 * C25975))) /
        std::pow(C25915, 2);
    const double C2222 =
        (ae * (2 * C26079 + C25971 * C26088) +
         C26041 * (2 * C25971 * C26150 +
                   C25971 * (C26150 +
                             std::pow(C25969, 6) * bs[6] * C26144 * C25975))) /
        std::pow(C25915, 2);
    const double C212 = (3 * (C26072 + C26077 * C25975) +
                         C25971 * (2 * C26079 + C25971 * C26088)) /
                        C25915;
    const double C755 = (C26072 + C26077 * C25975 + C26088 * C26105) / C25915;
    const double C1949 = (C26041 * (2 * C26079 + C25971 * C26088)) / C25915;
    const double C2451 = (C26066 * (2 * C26079 + C25971 * C26088) +
                          (2 * C25994 + C25971 * C26022) * ae) /
                         C25915;
    const double C3013 =
        (C26066 * C26041 * C26088 + C26041 * C26022 * ae) / C25915;
    const double C26419 = C26066 * C26418;
    const double C26468 = C26466 + C26021;
    const double C4261 = C207 * C4038;
    const double C6274 = C207 * C5955;
    const double C18303 = C17631 * C5955;
    const double C26538 = C26066 * C26520;
    const double C12521 = (3 * (C26072 + C26077 * C26105) +
                           C26041 * (2 * C26423 + C26041 * C26520)) /
                          C25915;
    const double C14469 = (C26066 * (2 * C26423 + C26041 * C26520) +
                           (2 * C26380 + C26041 * C26505) * ae) /
                          C25915;
    const double C26575 = C26573 + C26504;
    const double C26614 = ae * C26609;
    const double C26612 = C26066 * C26609;
    const double C217 =
        (3 * (C26076 + ae * C26079 + C25971 * C26087) +
         ae * (2 * C26079 + C25971 * C26088) +
         C25971 *
             (2 * C26087 + ae * C26088 +
              C25971 * (C26083 + ae * C25971 * C26084 +
                        C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26070)))) /
        std::pow(C25915, 2);
    const double C759 =
        (ae * C26072 + C25971 * C26076 + C26087 * C26105) / std::pow(C25915, 2);
    const double C760 = (C26041 * (C26076 + ae * C26079 + C25971 * C26087)) /
                        std::pow(C25915, 2);
    const double C761 = (C26076 + ae * C26079 + C25971 * C26087 +
                         (C26083 + ae * C25971 * C26084 +
                          C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                      bs[6] * C26070)) *
                             C26105) /
                        std::pow(C25915, 2);
    const double C1950 =
        (C26041 *
         (2 * C26087 + ae * C26088 +
          C25971 * (C26083 + ae * C25971 * C26084 +
                    C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                bs[6] * C26070)))) /
        std::pow(C25915, 2);
    const double C4040 =
        (2 * C26041 * C26087 +
         C26041 * (C26087 + (ae * C26084 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26070) *
                                C26105)) /
        std::pow(C25915, 2);
    const double C24182 =
        (3 * (C26076 + ae * C26584 + C26066 * C26587) +
         ae * (2 * C26584 + C26066 * C26588) +
         C26066 *
             (2 * C26587 + ae * C26588 +
              C26066 * (C26083 + ae * C26066 * C26020 +
                        C26066 * (ae * C26020 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26070)))) /
        std::pow(C25915, 2);
    const double C12529 = C12526 + C12527;
    const double C14477 = C14474 + C14475;
    const double C274 =
        (3 * (C26096 + ae * C26054 + C25971 * C26101) +
         ae * (2 * C26054 + C25971 * C26063) +
         C25971 *
             (2 * C26101 + ae * C26063 +
              C25971 * (C26099 + ae * C25971 * C26059 +
                        C25971 * (ae * C26059 + C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26093)))) /
        std::pow(C25915, 2);
    const double C1444 =
        (ae * C26047 + C25971 * C26096 + C26101 * C26154) / std::pow(C25915, 2);
    const double C1445 = (C26066 * (C26096 + ae * C26054 + C25971 * C26101)) /
                         std::pow(C25915, 2);
    const double C1446 =
        (C26096 + ae * C26054 + C25971 * C26101 +
         (C26099 + ae * C25971 * C26059 +
          C25971 *
              (ae * C26059 + C25971 * std::pow(C25969, 6) * bs[6] * C26093)) *
             C26154) /
        std::pow(C25915, 2);
    const double C2509 =
        (C26066 *
         (2 * C26101 + ae * C26063 +
          C25971 * (C26099 + ae * C25971 * C26059 +
                    C25971 * (ae * C26059 + C25971 * std::pow(C25969, 6) *
                                                bs[6] * C26093)))) /
        std::pow(C25915, 2);
    const double C7333 =
        (2 * C26066 * C26101 +
         C26066 * (C26101 + (ae * C26059 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26093) *
                                C26154)) /
        std::pow(C25915, 2);
    const double C12565 =
        (3 * (C26096 + ae * C26406 + C26041 * C26494) +
         ae * (2 * C26406 + C26041 * C26490) +
         C26041 *
             (2 * C26494 + ae * C26490 +
              C26041 * (C26099 + ae * C26041 * C26020 +
                        C26041 * (ae * C26020 + C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26093)))) /
        std::pow(C25915, 2);
    const double C26367 = C25971 * C26115;
    const double C26497 = C26041 * C26115;
    const double C26547 = C26066 * C26115;
    const double C314 =
        (3 * (C26110 + C26115 * C25975) +
         C25971 * (2 * C25971 * C26115 +
                   C25971 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C884 = (2 * ae * (C26047 + C26052 * C25975) +
                         C26041 * (C26110 + C26115 * C25975)) /
                        std::pow(C25915, 2);
    const double C1500 =
        (C25971 * C26110 + C25971 * C26115 * C26154) / std::pow(C25915, 2);
    const double C1501 =
        (C26066 * (C26110 + C26115 * C25975)) / std::pow(C25915, 2);
    const double C1502 =
        (C26110 + C26115 * C25975 +
         (C26115 + (C26010 * C26011 + C26105 * bs[6] * std::pow(C25969, 6)) *
                       C25978 * C25975) *
             C26154) /
        std::pow(C25915, 2);
    const double C2058 =
        (2 * ae * (2 * C26054 + C25971 * C26063) +
         C26041 * (2 * C25971 * C26115 +
                   C25971 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C2560 =
        (C26066 * (2 * C25971 * C26115 +
                   C25971 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C3159 =
        (2 * ae * C26066 * C26054 + C26041 * C26066 * C25971 * C26115) /
        std::pow(C25915, 2);
    const double C3160 = (2 * ae * C26066 * C26063 +
                          C26041 * C26066 *
                              (C26115 + (C26010 * C26011 +
                                         C26105 * bs[6] * std::pow(C25969, 6)) *
                                            C25978 * C25975)) /
                         std::pow(C25915, 2);
    const double C4531 = (2 * ae * (C26047 + C26052 * C26154) +
                          C26041 * (C26110 + C26115 * C26154)) /
                         std::pow(C25915, 2);
    const double C7370 =
        (2 * C26066 * C26110 + C26066 * (C26110 + C26115 * C26154)) /
        std::pow(C25915, 2);
    const double C12643 =
        (3 * (C26123 + ae * C26423 + C26041 * C26519) +
         ae * (2 * C26423 + C26041 * C26520) +
         C26041 *
             (2 * C26519 + ae * C26520 +
              C26041 * (C26126 + ae * C26041 * C26084 +
                        C26041 * (ae * C26084 + C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26120)))) /
        std::pow(C25915, 2);
    const double C15924 =
        (ae * (2 * C26478 +
               C26066 * (C26077 + C26066 * (C26066 * C26084 + C26016) +
                         C26066 * C26009 * ae) +
               (C25988 + C26009 * C26154) * ae) +
         C26041 *
             (2 * C26554 + ae * (C26052 + C26059 * C26154) +
              C26066 * (C26126 + ae * C26066 * C26059 +
                        C26066 * (ae * C26059 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26120)))) /
        std::pow(C25915, 2);
    const double C24302 =
        (3 * (C26123 + ae * C26592 + C26066 * C26554) +
         ae * (2 * C26592 + C26066 * C26594) +
         C26066 *
             (2 * C26554 + ae * C26594 +
              C26066 * (C26126 + ae * C26066 * C26059 +
                        C26066 * (ae * C26059 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26120)))) /
        std::pow(C25915, 2);
    const double C2120 = C2118 + C2119;
    const double C2622 = C2620 + C2621;
    const double C427 =
        (3 * (C26134 + ae * C26079 + C25971 * C26139) +
         ae * (2 * C26079 + C25971 * C26088) +
         C25971 *
             (2 * C26139 + ae * C26088 +
              C25971 * (C26137 + ae * C25971 * C26084 +
                        C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26131)))) /
        std::pow(C25915, 2);
    const double C1021 =
        (ae * C26072 + C25971 * C26134 + C26139 * C26105) / std::pow(C25915, 2);
    const double C1022 = (C26041 * (C26134 + ae * C26079 + C25971 * C26139)) /
                         std::pow(C25915, 2);
    const double C1023 =
        (C26134 + ae * C26079 + C25971 * C26139 +
         (C26137 + ae * C25971 * C26084 +
          C25971 *
              (ae * C26084 + C25971 * std::pow(C25969, 6) * bs[6] * C26131)) *
             C26105) /
        std::pow(C25915, 2);
    const double C2171 =
        (C26041 *
         (2 * C26139 + ae * C26088 +
          C25971 * (C26137 + ae * C25971 * C26084 +
                    C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                bs[6] * C26131)))) /
        std::pow(C25915, 2);
    const double C4186 =
        (2 * C26041 * C26139 +
         C26041 * (C26139 + (ae * C26084 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26131) *
                                C26105)) /
        std::pow(C25915, 2);
    const double C24337 =
        (3 * (C26134 + ae * C26584 + C26066 * C26597) +
         ae * (2 * C26584 + C26066 * C26588) +
         C26066 *
             (2 * C26597 + ae * C26588 +
              C26066 * (C26137 + ae * C26066 * C26020 +
                        C26066 * (ae * C26020 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26131)))) /
        std::pow(C25915, 2);
    const double C12721 =
        (3 * (C26147 + ae * C26423 + C26041 * C26524) +
         ae * (2 * C26423 + C26041 * C26520) +
         C26041 *
             (2 * C26524 + ae * C26520 +
              C26041 * (C26150 + ae * C26041 * C26084 +
                        C26041 * (ae * C26084 + C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26144)))) /
        std::pow(C25915, 2);
    const double C24375 =
        (3 * (C26147 + ae * C26592 + C26066 * C26600) +
         ae * (2 * C26592 + C26066 * C26594) +
         C26066 *
             (2 * C26600 + ae * C26594 +
              C26066 * (C26150 + ae * C26066 * C26059 +
                        C26066 * (ae * C26059 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26144)))) /
        std::pow(C25915, 2);
    const double C2227 = C2225 + C2226;
    const double C2729 = C2727 + C2728;
    const double C26398 = C25971 * C26164;
    const double C26570 = C26041 * C26164;
    const double C26603 = C26066 * C26164;
    const double C521 =
        (3 * (C26159 + C26164 * C25975) +
         C25971 * (2 * C25971 * C26164 +
                   C25971 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C1143 =
        (C25971 * C26159 + C25971 * C26164 * C26105) / std::pow(C25915, 2);
    const double C1144 =
        (C26041 * (C26159 + C26164 * C25975)) / std::pow(C25915, 2);
    const double C1145 =
        (C26159 + C26164 * C25975 +
         (C26164 + (C26010 * C26011 + C26154 * bs[6] * std::pow(C25969, 6)) *
                       C25978 * C25975) *
             C26105) /
        std::pow(C25915, 2);
    const double C1761 = (2 * ae * (C26072 + C26077 * C25975) +
                          C26066 * (C26159 + C26164 * C25975)) /
                         std::pow(C25915, 2);
    const double C2278 =
        (C26041 * (2 * C25971 * C26164 +
                   C25971 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C2780 =
        (2 * ae * (2 * C26079 + C25971 * C26088) +
         C26066 * (2 * C25971 * C26164 +
                   C25971 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C3453 =
        (2 * ae * C26041 * C26079 + C26066 * C26041 * C25971 * C26164) /
        std::pow(C25915, 2);
    const double C3454 = (2 * ae * C26041 * C26088 +
                          C26066 * C26041 *
                              (C26164 + (C26010 * C26011 +
                                         C26154 * bs[6] * std::pow(C25969, 6)) *
                                            C25978 * C25975)) /
                         std::pow(C25915, 2);
    const double C4259 =
        (2 * C26041 * C26159 + C26041 * (C26159 + C26164 * C26105)) /
        std::pow(C25915, 2);
    const double C6272 = (2 * ae * (C26072 + C26077 * C26105) +
                          C26066 * (C26159 + C26164 * C26105)) /
                         std::pow(C25915, 2);
    const double C12756 =
        (3 * (C26159 + C26164 * C26105) +
         C26041 * (2 * C26041 * C26164 +
                   C26041 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C14800 =
        (2 * ae * (2 * C26423 + C26041 * C26520) +
         C26066 * (2 * C26041 * C26164 +
                   C26041 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C22794 = C22791 + C22792;
    const double C12933 = C12930 + C12931;
    const double C21278 = C21275 + C21276;
    const double C1583 = C1580 + C1581;
    const double C1088 = C1085 + C1086;
    const double C26947 = C26924 / C26790;
    const double C26949 = C26928 / C26778;
    const double C598 = -C26948;
    const double C26951 = C26936 / C26790;
    const double C26952 = C26938 / C26778;
    const double C3514 = -C26950;
    const double C26954 = C26940 / C26790;
    const double C26955 = C26942 / C26778;
    const double C6325 = -C26953;
    const double C9410 = C9398 + C9057;
    const double C12448 = C12445 + C9403;
    const double C9411 = C9400 + C9401;
    const double C9615 = C9602 + C9603;
    const double C9613 = C9598 + C9599;
    const double C9612 = C9596 + C9597;
    const double C9798 = C9791 + C9792;
    const double C9797 = C9787 + C9788;
    const double C9796 = C9785 + C9786;
    const double C18365 = C18357 + C9966;
    const double C18364 = C18355 + C9965;
    const double C11378 = C11372 + C9964;
    const double C14364 = C14361 + C11374;
    const double C11603 = C11596 + C11597;
    const double C11817 = C11811 + C11812;
    const double C12571 = C12567 + C12568;
    const double C12686 = C12684 + C12685;
    const double C14535 = C14531 + C14532;
    const double C14698 = C14696 + C14697;
    const double C24101 = C24098 + C15746;
    const double C18567 = C18556 + C18557;
    const double C18565 = C18552 + C18553;
    const double C18564 = C18550 + C18551;
    const double C18563 = C18548 + C18549;
    const double C18562 = C18546 + C18547;
    const double C18750 = C18742 + C18743;
    const double C24224 = C24221 + C24222;
    const double C24223 = C24219 + C24220;
    const double C468 = C168 * C207;
    const double C480 = C477 * C26969;
    const double C18443 = C18439 * C26968;
    const double C18442 = C18438 * C9054;
    const double C330 = C327 + C318;
    const double C18636 = C18634 + C1507;
    const double C375 = C231 * C144;
    const double C387 = C384 * C26970;
    const double C9543 = C9539 * C26968;
    const double C9542 = C9538 * C9054;
    const double C537 = C534 + C525;
    const double C9910 = C9908 + C1150;
    const double C99 =
        ((C25974 + C25975 * C25976 * C25980) * C25978 + C25986 + C25986 +
         C25971 *
             (2 * ae * C25983 +
              C25971 *
                  (C25976 * C25980 + C25975 * bs[4] * std::pow(C25969, 4)) *
                  C25978)) /
        std::pow(C25915, 2);
    const double C682 = (C25986 + C26041 * (ae * C26047 + C25971 * C26051)) /
                        std::pow(C25915, 2);
    const double C824 = (C25986 + C26041 * (ae * C26047 + C25971 * C26096)) /
                        std::pow(C25915, 2);
    const double C1373 = (C25986 + C26066 * (ae * C26072 + C25971 * C26076)) /
                         std::pow(C25915, 2);
    const double C1635 = (C25986 + C26066 * (ae * C26072 + C25971 * C26134)) /
                         std::pow(C25915, 2);
    const double C107 = C84 * C94;
    const double C105 = C86 * C94;
    const double C160 = C144 * C94;
    const double C223 = C207 * C94;
    const double C9060 = C9054 * C94;
    const double C623 = C84 * C606;
    const double C619 = C86 * C606;
    const double C689 = C144 * C606;
    const double C763 = C207 * C606;
    const double C9058 = C9054 * C606;
    const double C9605 = C26968 * C606;
    const double C1240 = C84 * C1223;
    const double C1236 = C86 * C1223;
    const double C1306 = C144 * C1223;
    const double C1380 = C207 * C1223;
    const double C9968 = C9054 * C1223;
    const double C18555 = C26968 * C1223;
    const double C9544 = C9540 * C26968;
    const double C18444 = C18440 * C26968;
    const double C11526 = C11524 * C26968;
    const double C19933 = C19931 * C26968;
    const double C26203 = ae * C26202;
    const double C679 =
        (C25971 * C26047 + C26041 * C26202 + C26041 * C25994 * ae) / C25915;
    const double C2934 = (C26066 * C26202) / C25915;
    const double C26295 = ae * C26294;
    const double C1370 =
        (C25971 * C26072 + C26066 * C26294 + C26066 * C25994 * ae) / C25915;
    const double C773 = C767 + C768;
    const double C1158 = C1152 + C1153;
    const double C1316 = C1310 + C1311;
    const double C1515 = C1509 + C1510;
    const double C3022 = C3018 + C3019;
    const double C3461 = C3457 + C3458;
    const double C2937 =
        (C26066 * (C26003 + C26041 * C26062)) / std::pow(C25915, 2);
    const double C26004 = C25983 + C26002;
    const double C26171 = ae * C26170;
    const double C2858 = (C26066 * C26170) / C25915;
    const double C26239 = ae * C26238;
    const double C626 = C84 * C609;
    const double C622 = C86 * C609;
    const double C695 = C144 * C609;
    const double C769 = C207 * C609;
    const double C9407 = C9054 * C609;
    const double C9609 = C26968 * C609;
    const double C1243 = C84 * C1226;
    const double C1239 = C86 * C1226;
    const double C1312 = C144 * C1226;
    const double C1386 = C207 * C1226;
    const double C9971 = C9054 * C1226;
    const double C18559 = C26968 * C1226;
    const double C4689 =
        (ae * C26072 + C26041 * C26147 + ae * C26066 * C26381 +
         C26066 * (C26384 + C26066 * (C26080 + C26041 * C26150))) /
        std::pow(C25915, 2);
    const double C26385 = C26047 + C26383;
    const double C26440 = ae * C26439;
    const double C26482 = C26072 + C26480;
    const double C9405 = C26968 * C612;
    const double C9402 = C26968 * C614;
    const double C18360 = C26968 * C1229;
    const double C18358 = C26968 * C1231;
    const double C11373 = C26968 * C2860;
    const double C325 = C26970 * C313;
    const double C889 = C26970 * C880;
    const double C1506 = C26970 * C1497;
    const double C18631 = C26970 * C1499;
    const double C20137 = C26970 * C3158;
    const double C532 = C26969 * C520;
    const double C1149 = C26969 * C1140;
    const double C9907 = C26969 * C1142;
    const double C1766 = C26969 * C1757;
    const double C11954 = C26969 * C3452;
    const double C26426 = ae * C26425;
    const double C4425 =
        (C26041 * C26072 + C26066 * C26425 + C26066 * C26380 * ae) / C25915;
    const double C12820 = C12817 + C9967;
    const double C12991 = C12987 + C12988;
    const double C882 =
        ((C25974 + C26105 * C25976 * C25980) * C25978 + C26199 + C26199 +
         C26041 * (2 * ae * C26047 + C26041 * C26110)) /
        std::pow(C25915, 2);
    const double C3378 = (C26199 + C26066 * (ae * C26072 + C26041 * C26147)) /
                         std::pow(C25915, 2);
    const double C891 = C144 * C678;
    const double C9600 = C9054 * C678;
    const double C9672 = C9097 * C678;
    const double C9670 = C9098 * C678;
    const double C9730 = C207 * C678;
    const double C3162 = C144 * C2933;
    const double C10172 = C9098 * C2933;
    const double C11594 = C9054 * C2933;
    const double C11672 = C9097 * C2933;
    const double C11742 = C207 * C2933;
    const double C19925 = C26970 * C2933;
    const double C4534 = C144 * C4371;
    const double C10175 = C9098 * C4371;
    const double C12989 = C9054 * C4371;
    const double C13045 = C9097 * C4371;
    const double C13097 = C207 * C4371;
    const double C21274 = C26970 * C4371;
    const double C473 = C171 * C207;
    const double C331 = C328 + C321;
    const double C388 = C385 * C26970;
    const double C474 = C172 * C207;
    const double C332 = C329 + C324;
    const double C389 = C386 * C26970;
    const double C1083 = C698 * C207;
    const double C899 = C897 + C888;
    const double C2064 = C2063 + C895;
    const double C2224 = C1898 * C207;
    const double C1700 = C1315 * C207;
    const double C18434 = C1315 * C9054;
    const double C1516 = C1514 + C1505;
    const double C1584 = C1582 * C26970;
    const double C18637 = C18635 + C1508;
    const double C18445 = C18441 * C9054;
    const double C2566 = C2565 + C1512;
    const double C2726 = C2400 * C207;
    const double C19426 = C2400 * C9054;
    const double C24266 = C24265 + C7373;
    const double C24146 = C24144 * C9054;
    const double C1759 =
        ((C25974 + C26154 * C25976 * C25980) * C25978 + C26291 + C26291 +
         C26066 * (2 * ae * C26072 + C26066 * C26159)) /
        std::pow(C25915, 2);
    const double C3235 = (C26291 + C26041 * (ae * C26047 + C26066 * C26123)) /
                         std::pow(C25915, 2);
    const double C1768 = C207 * C1369;
    const double C18744 = C9054 * C1369;
    const double C18806 = C144 * C1369;
    const double C18862 = C17630 * C1369;
    const double C18860 = C17631 * C1369;
    const double C967 = C965 * C26970;
    const double C380 = C234 * C144;
    const double C481 = C478 * C26969;
    const double C538 = C535 + C528;
    const double C381 = C235 * C144;
    const double C482 = C479 * C26969;
    const double C539 = C536 + C531;
    const double C961 = C772 * C144;
    const double C9534 = C772 * C9054;
    const double C1089 = C1087 * C26969;
    const double C1159 = C1157 + C1148;
    const double C9911 = C9909 + C1151;
    const double C9545 = C9541 * C9054;
    const double C2284 = C2283 + C1155;
    const double C2117 = C1956 * C144;
    const double C10537 = C1956 * C9054;
    const double C1578 = C1389 * C144;
    const double C1706 = C1704 * C26969;
    const double C1776 = C1774 + C1765;
    const double C2786 = C2785 + C1772;
    const double C2619 = C2458 * C144;
    const double C11956 = C11955 + C3456;
    const double C11527 = C11525 * C9054;
    const double C12762 = C12761 + C4262;
    const double C12530 = C12528 * C9054;
    const double C14806 = C14805 + C6275;
    const double C14478 = C14476 * C9054;
    const double C4372 =
        (C26003 + C26041 * C26062 +
         (C26030 + C26041 * (ae * C26059 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26045)) *
             C26154) /
        std::pow(C25915, 2);
    const double C26032 = C25996 + C26029;
    const double C26174 = C26001 + C26173;
    const double C26242 = C26001 + C26241;
    const double C26306 = ae * C26304;
    const double C26332 = C26066 * C26304;
    const double C4314 = (C26170 + C26304 * C26154) / C25915;
    const double C26320 = ae * C26318;
    const double C12447 = C9054 * C12442;
    const double C12819 = C9054 * C12814;
    const double C14363 = C9054 * C14358;
    const double C24100 = C9054 * C24095;
    const double C26031 = C26013 + C26028;
    const double C2861 =
        (2 * ae * C26066 * C26041 * C25996 + C25971 * C26066 * C26302) /
        std::pow(C25915, 2);
    const double C3962 =
        (2 * ae * (2 * C26041 * C25996 + C26041 * (C25996 + C26020 * C26105)) +
         C25971 * (2 * C26302 +
                   C26041 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C4316 =
        (2 * ae * (C26041 * C25996 + C26041 * C26020 * C26154) +
         C25971 * (C26302 + C26041 *
                                (C26010 * C26011 +
                                 C25975 * bs[6] * std::pow(C25969, 6)) *
                                C25978 * C26154)) /
        std::pow(C25915, 2);
    const double C4317 =
        (C26041 * C26000 + C26302 * C26154) / std::pow(C25915, 2);
    const double C12443 =
        (3 * (C26000 + C26026 * C26105) +
         C26041 * (2 * C26302 +
                   C26041 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C14359 =
        (C26066 * (2 * C26302 +
                   C26041 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C15743 =
        (2 * C26066 * C26302 +
         C26066 * (C26302 + C26041 *
                                (C26010 * C26011 +
                                 C25975 * bs[6] * std::pow(C25969, 6)) *
                                C25978 * C26154)) /
        std::pow(C25915, 2);
    const double C7219 =
        (2 * ae * (2 * C26066 * C25996 + C26066 * (C25996 + C26020 * C26154)) +
         C25971 * (2 * C26316 +
                   C26066 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26154))) /
        std::pow(C25915, 2);
    const double C24096 =
        (3 * (C26000 + C26026 * C26154) +
         C26066 * (2 * C26316 +
                   C26066 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26154))) /
        std::pow(C25915, 2);
    const double C9408 = C26968 * C615;
    const double C18362 = C26968 * C1232;
    const double C12446 = C26968 * C3963;
    const double C14362 = C26968 * C5848;
    const double C24099 = C26968 * C7220;
    const double C26207 = C26206 + C26025;
    const double C326 = C144 * C149;
    const double C1513 = C144 * C1298;
    const double C2062 = C144 * C1891;
    const double C9210 = C9098 * C1891;
    const double C2564 = C144 * C2393;
    const double C26374 = ae * C26372;
    const double C26373 = C26041 * C26372;
    const double C26436 = C26066 * C26372;
    const double C4370 = (C26202 + C26372 * C26154) / C25915;
    const double C26509 = C26052 + C26506;
    const double C26532 = C26381 + C26531;
    const double C26551 = ae * C26549;
    const double C24264 = C144 * C24137;
    const double C1313 = C26970 * C1302;
    const double C2399 = C26970 * C1303;
    const double C24147 = C24145 * C26968;
    const double C26299 = C26298 + C26025;
    const double C533 = C207 * C212;
    const double C1156 = C207 * C755;
    const double C2282 = C207 * C1949;
    const double C2784 = C207 * C2451;
    const double C17845 = C17631 * C2451;
    const double C3460 = C207 * C3013;
    const double C19318 = C17631 * C3013;
    const double C26420 = C26419 + C26371;
    const double C26471 = ae * C26468;
    const double C26470 = C26066 * C26468;
    const double C26539 = C26538 + C26507;
    const double C12760 = C207 * C12521;
    const double C14804 = C207 * C14469;
    const double C21171 = C17631 * C14469;
    const double C26577 = ae * C26575;
    const double C26576 = C26066 * C26575;
    const double C26615 = C26077 + C26612;
    const double C770 = C26969 * C759;
    const double C1955 = C26969 * C760;
    const double C12531 = C12529 * C26968;
    const double C14479 = C14477 * C26968;
    const double C18561 = C26968 * C1444;
    const double C19531 = C26968 * C1445;
    const double C4530 =
        (2 * ae * (C26054 + C26368 * C26154) +
         C26041 * (C26367 + C25971 *
                                (C26010 * C26011 +
                                 C26105 * bs[6] * std::pow(C25969, 6)) *
                                C25978 * C26154)) /
        std::pow(C25915, 2);
    const double C7369 =
        (2 * C26066 * C26367 +
         C26066 * (C26367 + C25971 *
                                (C26010 * C26011 +
                                 C26105 * bs[6] * std::pow(C25969, 6)) *
                                C25978 * C26154)) /
        std::pow(C25915, 2);
    const double C26502 = C26496 + C26497;
    const double C15887 =
        (2 * ae * (2 * C26066 * C26052 + C26066 * (C26052 + C26059 * C26154)) +
         C26041 * (2 * C26547 +
                   C26066 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26154))) /
        std::pow(C25915, 2);
    const double C24260 =
        (3 * (C26110 + C26115 * C26154) +
         C26066 * (2 * C26547 +
                   C26066 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26154))) /
        std::pow(C25915, 2);
    const double C2061 = C26970 * C884;
    const double C1511 = C26970 * C1500;
    const double C2563 = C26970 * C1501;
    const double C3165 = C26970 * C3159;
    const double C21434 = C26970 * C4531;
    const double C24263 = C26970 * C7370;
    const double C2121 = C2120 * C26970;
    const double C2623 = C2622 * C26970;
    const double C9795 = C26968 * C1021;
    const double C10749 = C26968 * C1022;
    const double C2228 = C2227 * C26969;
    const double C2730 = C2729 * C26969;
    const double C4258 =
        (2 * C26041 * C26398 +
         C26041 * (C26398 + C25971 *
                                (C26010 * C26011 +
                                 C26154 * bs[6] * std::pow(C25969, 6)) *
                                C25978 * C26105)) /
        std::pow(C25915, 2);
    const double C6271 =
        (2 * ae * (C26079 + C26390 * C26105) +
         C26066 * (C26398 + C25971 *
                                (C26010 * C26011 +
                                 C26154 * bs[6] * std::pow(C25969, 6)) *
                                C25978 * C26105)) /
        std::pow(C25915, 2);
    const double C26608 = C26602 + C26603;
    const double C1154 = C26969 * C1143;
    const double C2281 = C26969 * C1144;
    const double C2783 = C26969 * C1761;
    const double C3459 = C26969 * C3453;
    const double C12759 = C26969 * C4259;
    const double C14803 = C26969 * C6272;
    const double C22796 = C22794 * C26968;
    const double C12935 = C12933 * C26968;
    const double C21280 = C21278 * C26968;
    const double C1585 = C1583 * C26970;
    const double C1090 = C1088 * C26969;
    const double C26959 = C26923 - C26947;
    const double C26960 = C26927 - C26949;
    const double C26961 = C26930 - C26951;
    const double C26962 = C26937 - C26952;
    const double C26963 = C26932 - C26954;
    const double C26964 = C26941 - C26955;
    const double C9414 = C9410 + C9057;
    const double C12449 = C12448 + C9403;
    const double C9415 = C9411 + C9401;
    const double C9789 = C9615 * C207;
    const double C9784 = C9612 * C207;
    const double C9802 = C9798 * C26969;
    const double C9801 = C9797 * C26969;
    const double C9800 = C9796 * C26969;
    const double C18369 = C18365 + C9966;
    const double C18368 = C18364 + C9965;
    const double C11380 = C11378 + C9964;
    const double C14365 = C14364 + C11374;
    const double C11813 = C11603 * C207;
    const double C20066 = C11603 * C144;
    const double C11819 = C11817 * C26969;
    const double C12683 = C12571 * C207;
    const double C12687 = C12686 * C26969;
    const double C14695 = C14535 * C207;
    const double C22897 = C14535 * C144;
    const double C14699 = C14698 * C26969;
    const double C24102 = C24101 + C15746;
    const double C18575 = C18567 * C26970;
    const double C18573 = C18565 * C144;
    const double C18572 = C18564 * C26970;
    const double C18571 = C18563 * C26970;
    const double C18570 = C18562 * C144;
    const double C24226 = C24224 * C26970;
    const double C24225 = C24223 * C144;
    const double C333 = C330 + C319;
    const double C18638 = C18636 + C18629;
    const double C540 = C537 + C526;
    const double C9912 = C9910 + C9905;
    const double C690 = C26970 * C682;
    const double C9607 = C26968 * C824;
    const double C1381 = C26969 * C1373;
    const double C18747 = C26968 * C1635;
    const double C170 = C160 + C161;
    const double C233 = C223 + C224;
    const double C771 = C763 + C764;
    const double C9412 = C9404 + C9058;
    const double C9616 = C9604 + C9605;
    const double C1314 = C1306 + C1307;
    const double C18366 = C18359 + C9968;
    const double C18566 = C18554 + C18555;
    const double C883 =
        (C25971 * C26110 + C26203 + C26203 +
         C26041 * (2 * ae * C26054 + C26041 * C25971 * C26115)) /
        std::pow(C25915, 2);
    const double C3379 =
        (C26203 + C26066 * (ae * C26079 + C26041 * C25971 * C26150)) /
        std::pow(C25915, 2);
    const double C694 = C26970 * C679;
    const double C893 = C144 * C679;
    const double C963 = C207 * C679;
    const double C9610 = C9054 * C679;
    const double C9677 = C9097 * C679;
    const double C9675 = C9098 * C679;
    const double C2941 = C26970 * C2934;
    const double C3164 = C144 * C2934;
    const double C3240 = C207 * C2934;
    const double C10177 = C9098 * C2934;
    const double C11600 = C9054 * C2934;
    const double C11675 = C9097 * C2934;
    const double C1760 =
        (C25971 * C26159 + C26295 + C26295 +
         C26066 * (2 * ae * C26079 + C26066 * C25971 * C26164)) /
        std::pow(C25915, 2);
    const double C3236 =
        (C26295 + C26041 * (ae * C26054 + C26066 * C25971 * C26126)) /
        std::pow(C25915, 2);
    const double C1385 = C26969 * C1370;
    const double C1702 = C144 * C1370;
    const double C1770 = C207 * C1370;
    const double C18748 = C9054 * C1370;
    const double C18867 = C17630 * C1370;
    const double C18865 = C17631 * C1370;
    const double C962 = C773 * C144;
    const double C9536 = C773 * C9054;
    const double C1160 = C1158 + C1153;
    const double C1701 = C1316 * C207;
    const double C18436 = C1316 * C9054;
    const double C1517 = C1515 + C1510;
    const double C3239 = C3022 * C144;
    const double C11522 = C3022 * C9054;
    const double C3462 = C3461 + C3458;
    const double C2943 = C26970 * C2937;
    const double C26005 = C26004 + C25997;
    const double C616 =
        (C26041 * C26000 + C26171 + C26171 +
         C25971 * (2 * ae * C26041 * C25996 + C25971 * C26041 * C26026)) /
        std::pow(C25915, 2);
    const double C685 = (ae * C26047 + C25971 * C26051 + C26171 +
                         C26041 * (C26003 + C26041 * C26062)) /
                        std::pow(C25915, 2);
    const double C827 = (ae * C26047 + C25971 * C26096 + C26171 +
                         C26041 * (C26003 + C26041 * C26101)) /
                        std::pow(C25915, 2);
    const double C3015 =
        (C26171 + C26066 * C26041 * C26087) / std::pow(C25915, 2);
    const double C3310 =
        (C26171 + C26066 * C26041 * C26139) / std::pow(C25915, 2);
    const double C2867 = C84 * C2858;
    const double C2865 = C86 * C2858;
    const double C2942 = C144 * C2858;
    const double C3020 = C207 * C2858;
    const double C9969 = C9054 * C2858;
    const double C11599 = C26968 * C2858;
    const double C1233 =
        (C26066 * C26000 + C26239 + C26239 +
         C25971 * (2 * ae * C26066 * C25996 + C25971 * C26066 * C26026)) /
        std::pow(C25915, 2);
    const double C1376 = (ae * C26072 + C25971 * C26076 + C26239 +
                          C26066 * (C26003 + C26066 * C26087)) /
                         std::pow(C25915, 2);
    const double C1638 = (ae * C26072 + C25971 * C26134 + C26239 +
                          C26066 * (C26003 + C26066 * C26139)) /
                         std::pow(C25915, 2);
    const double C3090 =
        (C26239 + C26041 * C26066 * C26101) / std::pow(C25915, 2);
    const double C9413 = C9406 + C9407;
    const double C9618 = C9608 + C9609;
    const double C18367 = C18361 + C9971;
    const double C18568 = C18558 + C18559;
    const double C21591 = C26970 * C4689;
    const double C26386 = C26385 + C26382;
    const double C6062 =
        (C26066 * C26110 + C26440 + C26440 +
         C26041 * (2 * ae * C26066 * C26052 + C26041 * C26066 * C26115)) /
        std::pow(C25915, 2);
    const double C26483 = C26482 + C26479;
    const double C4741 =
        (C26041 * C26159 + C26426 + C26426 +
         C26066 * (2 * ae * C26423 + C26066 * C26041 * C26164)) /
        std::pow(C25915, 2);
    const double C6116 = (ae * C26047 + C26066 * C26123 + C26426 +
                          C26041 * (ae * (C26066 * C26077 + C25993) +
                                    C26041 * (C26055 + C26066 * C26126))) /
                         std::pow(C25915, 2);
    const double C4744 = C207 * C4425;
    const double C12929 = C26969 * C4425;
    const double C13152 = C9054 * C4425;
    const double C20411 = C17631 * C4425;
    const double C21590 = C144 * C4425;
    const double C21644 = C17630 * C4425;
    const double C12821 = C12820 + C9967;
    const double C13151 = C12991 * C207;
    const double C21381 = C12991 * C144;
    const double C20342 = C26970 * C3378;
    const double C9614 = C9600 + C9601;
    const double C9733 = C9730 + C9731;
    const double C20139 = C20136 + C3162;
    const double C11602 = C11594 + C11595;
    const double C19930 = C19924 + C19925;
    const double C21436 = C21433 + C4534;
    const double C12992 = C12989 + C12990;
    const double C13099 = C13097 + C13098;
    const double C21277 = C21273 + C21274;
    const double C334 = C331 + C322;
    const double C335 = C332 + C325;
    const double C901 = C899 + C889;
    const double C1518 = C1516 + C1506;
    const double C18639 = C18637 + C18631;
    const double C11743 = C26969 * C3235;
    const double C18751 = C18744 + C18745;
    const double C18809 = C18806 + C18807;
    const double C541 = C538 + C529;
    const double C542 = C539 + C532;
    const double C1161 = C1159 + C1149;
    const double C9913 = C9911 + C9907;
    const double C1778 = C1776 + C1766;
    const double C11957 = C11956 + C11954;
    const double C26033 = C26032 + C26021;
    const double C26175 = ae * C26174;
    const double C3960 = (2 * C26170 + C26041 * C26174) / C25915;
    const double C5845 = (C26066 * C26174) / C25915;
    const double C26243 = ae * C26242;
    const double C7217 = (2 * C26238 + C26066 * C26242) / C25915;
    const double C5903 =
        (C26066 * (C26062 + C26306 +
                   C26041 * (C26030 + C26041 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C26333 = ae * C26332;
    const double C4319 = C86 * C4314;
    const double C9970 = C9054 * C4314;
    const double C11376 = C26968 * C2861;
    const double C12818 = C26968 * C4317;
    const double C26208 = ae * C26207;
    const double C681 =
        (C26047 + C26052 * C25975 + C26041 * C26207 + C26041 * C26022 * ae) /
        C25915;
    const double C2935 = (C26066 * C26207) / C25915;
    const double C4688 =
        (ae * C26079 + C26041 * C26395 + ae * C26066 * C26372 +
         C26066 * (C26374 + C26066 * (ae * C26390 + C26041 * C25971 *
                                                        std::pow(C25969, 6) *
                                                        bs[6] * C26144))) /
        std::pow(C25915, 2);
    const double C26375 = C26054 + C26373;
    const double C26437 = ae * C26436;
    const double C4533 = C144 * C4370;
    const double C10178 = C9098 * C4370;
    const double C26510 = C26509 + C26504;
    const double C26533 = ae * C26532;
    const double C15780 = (2 * C26439 + C26066 * C26532) / C25915;
    const double C1317 = C1312 + C1313;
    const double C26300 = ae * C26299;
    const double C1372 =
        (C26072 + C26077 * C25975 + C26066 * C26299 + C26066 * C26022 * ae) /
        C25915;
    const double C26421 = ae * C26420;
    const double C4424 =
        (C26041 * C26079 + C26066 * C26420 + C26066 * C26369 * ae) / C25915;
    const double C26472 = C26079 + C26470;
    const double C26540 = ae * C26539;
    const double C12925 =
        (C26072 + C26077 * C26105 + C26066 * C26539 + C26066 * C26505 * ae) /
        C25915;
    const double C26578 = C26423 + C26576;
    const double C26616 = C26615 + C26610;
    const double C774 = C769 + C770;
    const double C18569 = C18560 + C18561;
    const double C19533 = C19530 + C19531;
    const double C2065 = C2064 + C2061;
    const double C2567 = C2566 + C2563;
    const double C24267 = C24266 + C24263;
    const double C9799 = C9794 + C9795;
    const double C10750 = C10748 + C10749;
    const double C2285 = C2284 + C2281;
    const double C2787 = C2786 + C2783;
    const double C12763 = C12762 + C12759;
    const double C14807 = C14806 + C14803;
    const double C79 = (C26959 * C26781) / C26778 + (C26925 - C26948) / C26780;
    const double C80 =
        (C26960 * C26781) / C26778 + (2 * C26792 + C26959) / C26780;
    const double C81 = (C26781 * C26792) / C26795 + C26960 / C26780;
    const double C3953 =
        (C26961 * C26852) / C26778 + (C26933 - C26950) / C26780;
    const double C3954 =
        (C26962 * C26852) / C26778 + (2 * C26857 + C26961) / C26780;
    const double C3955 = (C26852 * C26857) / C26795 + C26962 / C26780;
    const double C7211 =
        (C26963 * C26880) / C26778 + (C26934 - C26953) / C26780;
    const double C7212 =
        (C26964 * C26880) / C26778 + (2 * C26885 + C26963) / C26780;
    const double C7213 = (C26880 * C26885) / C26795 + C26964 / C26780;
    const double C9418 = C9414 + C9399;
    const double C12450 = C12449 + C12446;
    const double C9419 = C9415 + C9402;
    const double C18373 = C18369 + C18358;
    const double C18372 = C18368 + C18356;
    const double C11382 = C11380 + C11373;
    const double C14366 = C14365 + C14362;
    const double C24103 = C24102 + C24099;
    const double C18640 = C18638 * C26968;
    const double C543 = C540 * C26970;
    const double C697 = C689 + C690;
    const double C9617 = C9606 + C9607;
    const double C1388 = C1380 + C1381;
    const double C18752 = C18746 + C18747;
    const double C9535 = C771 * C26968;
    const double C9416 = C9412 + C9058;
    const double C9790 = C9616 * C207;
    const double C18435 = C1314 * C26968;
    const double C18370 = C18366 + C9968;
    const double C18574 = C18566 * C144;
    const double C894 = C26970 * C883;
    const double C3384 = C26970 * C3379;
    const double C699 = C693 + C694;
    const double C898 = C892 + C893;
    const double C966 = C963 + C964;
    const double C2944 = C2940 + C2941;
    const double C3167 = C3163 + C3164;
    const double C1771 = C26969 * C1760;
    const double C3241 = C26969 * C3236;
    const double C1390 = C1384 + C1385;
    const double C1705 = C1702 + C1703;
    const double C1775 = C1769 + C1770;
    const double C1162 = C1160 + C1154;
    const double C1519 = C1517 + C1511;
    const double C3463 = C3462 + C3459;
    const double C26006 = ae * C26005;
    const double C95 =
        (2 * C25985 + C25971 * C26005 + (C25974 + C25988 * C25975) * ae) /
        C25915;
    const double C610 = (C26041 * C26005) / C25915;
    const double C1227 = (C26066 * C26005) / C25915;
    const double C10431 = C26968 * C616;
    const double C696 = C26970 * C685;
    const double C9611 = C26968 * C827;
    const double C3021 = C26969 * C3015;
    const double C11816 = C26968 * C3310;
    const double C2945 = C2942 + C2943;
    const double C11379 = C11375 + C9969;
    const double C11604 = C11598 + C11599;
    const double C19371 = C26968 * C1233;
    const double C1387 = C26969 * C1376;
    const double C18749 = C26968 * C1638;
    const double C11601 = C26968 * C3090;
    const double C9417 = C9413 + C9407;
    const double C9793 = C9618 * C207;
    const double C18371 = C18367 + C9971;
    const double C18576 = C18568 * C144;
    const double C26387 = ae * C26386;
    const double C4001 =
        (2 * C26198 + C26041 * C26386 + (C25974 + C25988 * C26105) * ae) /
        C25915;
    const double C5902 = (C26066 * C26386) / C25915;
    const double C22950 = C26970 * C6062;
    const double C26484 = ae * C26483;
    const double C7296 =
        (2 * C26290 + C26066 * C26483 + (C25974 + C25988 * C26154) * ae) /
        C25915;
    const double C13259 = C26969 * C4741;
    const double C14642 = C26969 * C6116;
    const double C13261 = C13258 + C4744;
    const double C12932 = C12928 + C12929;
    const double C13154 = C13152 + C13153;
    const double C21592 = C21590 + C21591;
    const double C20343 = C20341 + C20342;
    const double C20140 = C20139 + C3162;
    const double C20067 = C11602 * C26970;
    const double C19932 = C19930 * C9054;
    const double C21437 = C21436 + C4534;
    const double C21382 = C12992 * C26970;
    const double C21279 = C21277 * C9054;
    const double C18632 = C1518 * C26968;
    const double C18641 = C18639 * C26968;
    const double C11744 = C11742 + C11743;
    const double C544 = C541 * C26970;
    const double C545 = C542 * C26970;
    const double C1163 = C1161 * C26970;
    const double C1780 = C1778 * C26970;
    const double C26035 = ae * C26033;
    const double C26034 = C25971 * C26033;
    const double C26303 = C26041 * C26033;
    const double C26317 = C26066 * C26033;
    const double C611 = (C26005 + C26033 * C26105) / C25915;
    const double C1228 = (C26005 + C26033 * C26154) / C25915;
    const double C617 =
        (C26000 + C26026 * C26105 + C26175 + C26175 +
         C25971 * (2 * ae * (C25996 + C26020 * C26105) +
                   C25971 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C4002 =
        (2 * (C26003 + C26041 * C26062) + C26175 +
         C26041 * (C26062 + C26306 +
                   C26041 * (C26030 + C26041 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C4076 =
        (2 * (C26003 + C26041 * C26101) + C26175 +
         C26041 * (C26101 + C26306 +
                   C26041 * (C26030 + C26041 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26093)))) /
        std::pow(C25915, 2);
    const double C5957 =
        (C26175 +
         C26066 * (C26087 + (ae * C26084 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26070) *
                                C26105)) /
        std::pow(C25915, 2);
    const double C6167 =
        (C26175 +
         C26066 * (C26139 + (ae * C26084 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26131) *
                                C26105)) /
        std::pow(C25915, 2);
    const double C3965 = C86 * C3960;
    const double C9409 = C9054 * C3960;
    const double C5850 = C86 * C5845;
    const double C11377 = C9054 * C5845;
    const double C1234 =
        (C26000 + C26026 * C26154 + C26243 + C26243 +
         C25971 * (2 * ae * (C25996 + C26020 * C26154) +
                   C25971 * (C26026 + (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26154))) /
        std::pow(C25915, 2);
    const double C4478 =
        (C26243 +
         C26041 * (C26101 + (ae * C26059 +
                             C25971 * std::pow(C25969, 6) * bs[6] * C26093) *
                                C26154)) /
        std::pow(C25915, 2);
    const double C7297 =
        (2 * (C26003 + C26066 * C26087) + C26243 +
         C26066 * (C26087 + C26320 +
                   C26066 * (C26030 + C26066 * (ae * C26084 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26070)))) /
        std::pow(C25915, 2);
    const double C7443 =
        (2 * (C26003 + C26066 * C26139) + C26243 +
         C26066 * (C26139 + C26320 +
                   C26066 * (C26030 + C26066 * (ae * C26084 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26131)))) /
        std::pow(C25915, 2);
    const double C7222 = C86 * C7217;
    const double C18363 = C9054 * C7217;
    const double C2862 =
        (C26066 * C26302 + C26333 + C26333 +
         C25971 *
             (2 * ae * C26066 * C26041 * C26020 +
              C25971 * C26066 * C26041 *
                  (C26010 * C26011 + C25975 * bs[6] * std::pow(C25969, 6)) *
                  C25978)) /
        std::pow(C25915, 2);
    const double C4426 =
        (C26041 * C26087 + C26333 +
         C26066 * (C26306 + C26066 * C26041 *
                                (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                   bs[6] * C26070))) /
        std::pow(C25915, 2);
    const double C4636 =
        (C26041 * C26139 + C26333 +
         C26066 * (C26306 + C26066 * C26041 *
                                (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                   bs[6] * C26131))) /
        std::pow(C25915, 2);
    const double C6009 =
        (C26066 * C26101 + C26333 +
         C26041 * (C26320 + C26041 * C26066 *
                                (ae * C26059 + C25971 * std::pow(C25969, 6) *
                                                   bs[6] * C26093))) /
        std::pow(C25915, 2);
    const double C12822 = C12821 + C12818;
    const double C885 =
        (C26110 + C26115 * C25975 + C26208 + C26208 +
         C26041 * (2 * ae * C26063 +
                   C26041 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C3380 =
        (C26208 + C26066 * (ae * C26088 +
                            C26041 * (C26150 + std::pow(C25969, 6) * bs[6] *
                                                   C26144 * C25975))) /
        std::pow(C25915, 2);
    const double C896 = C144 * C681;
    const double C10645 = C9098 * C681;
    const double C3166 = C144 * C2935;
    const double C11104 = C9098 * C2935;
    const double C26376 = C26375 + C26371;
    const double C6061 =
        (C26066 * C26367 + C26437 + C26437 +
         C26041 *
             (2 * ae * C26066 * C26368 +
              C26041 * C26066 * C25971 *
                  (C26010 * C26011 + C26105 * bs[6] * std::pow(C25969, 6)) *
                  C25978)) /
        std::pow(C25915, 2);
    const double C26512 = ae * C26510;
    const double C26511 = C26041 * C26510;
    const double C26548 = C26066 * C26510;
    const double C12873 = (C26386 + C26510 * C26154) / C25915;
    const double C13042 =
        (C26110 + C26115 * C26154 + C26533 + C26533 +
         C26041 * (2 * ae * (C26052 + C26059 * C26154) +
                   C26041 * (C26115 + (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26154))) /
        std::pow(C25915, 2);
    const double C15994 =
        (2 * (C26384 + C26066 * C26524) + C26533 +
         C26066 * (C26524 + C26551 +
                   C26066 * (C26508 + C26066 * (ae * C26084 +
                                                C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26144)))) /
        std::pow(C25915, 2);
    const double C15889 = C9098 * C15780;
    const double C21435 = C144 * C15780;
    const double C18437 = C1317 * C26968;
    const double C1762 =
        (C26159 + C26164 * C25975 + C26300 + C26300 +
         C26066 * (2 * ae * C26088 +
                   C26066 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C25975))) /
        std::pow(C25915, 2);
    const double C3237 =
        (C26300 + C26041 * (ae * C26063 +
                            C26066 * (C26126 + std::pow(C25969, 6) * bs[6] *
                                                   C26120 * C25975))) /
        std::pow(C25915, 2);
    const double C1773 = C207 * C1372;
    const double C19790 = C17631 * C1372;
    const double C4740 =
        (C26041 * C26398 + C26421 + C26421 +
         C26066 *
             (2 * ae * C26418 +
              C26066 * C26041 * C25971 *
                  (C26010 * C26011 + C26154 * bs[6] * std::pow(C25969, 6)) *
                  C25978)) /
        std::pow(C25915, 2);
    const double C6115 =
        (ae * C26054 + C26066 * C26389 + C26421 +
         C26041 *
             (ae * (C26066 * C26390 + C26021) +
              C26041 * (ae * C26368 + C26066 * C25971 * std::pow(C25969, 6) *
                                          bs[6] * C26120))) /
        std::pow(C25915, 2);
    const double C4743 = C207 * C4424;
    const double C20412 = C17631 * C4424;
    const double C26473 = C26472 + C26469;
    const double C13256 =
        (C26159 + C26164 * C26105 + C26540 + C26540 +
         C26066 * (2 * ae * C26520 +
                   C26066 * (C26164 + (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                          C25978 * C26105))) /
        std::pow(C25915, 2);
    const double C14639 =
        (2 * (C26481 + C26041 * C26554) + C26540 +
         C26041 *
             (C26554 + ae * (C26066 * C26041 * C26084 + C26504) +
              C26041 * (ae * (C26066 * C26084 + C26016) +
                        C26041 * (ae * C26059 + C26066 * std::pow(C25969, 6) *
                                                    bs[6] * C26120)))) /
        std::pow(C25915, 2);
    const double C13260 = C207 * C12925;
    const double C23159 = C17631 * C12925;
    const double C26579 = C26578 + C26574;
    const double C26618 = ae * C26616;
    const double C26617 = C26066 * C26616;
    const double C9537 = C774 * C26968;
    const double C18577 = C18569 * C26970;
    const double C19535 = C19533 * C26970;
    const double C19586 = C2567 * C26968;
    const double C24268 = C24267 * C26968;
    const double C9803 = C9799 * C26969;
    const double C10751 = C10750 * C26969;
    const double C2286 = C2285 * C26970;
    const double C2788 = C2787 * C26970;
    const double C9422 = C9418 * C26969;
    const double C12451 = C12450 * C26969;
    const double C9423 = C9419 * C26969;
    const double C11384 = C11382 * C26969;
    const double C14367 = C14366 * C26969;
    const double C9420 = C9416 + C9405;
    const double C18374 = C18370 + C18360;
    const double C3385 = C3383 + C3384;
    const double C1084 = C699 * C207;
    const double C900 = C898 + C893;
    const double C968 = C966 * C26970;
    const double C3382 = C2944 * C207;
    const double C19928 = C2944 * C9054;
    const double C3168 = C3167 + C3164;
    const double C3242 = C3240 + C3241;
    const double C1579 = C1390 * C144;
    const double C1707 = C1705 * C26969;
    const double C1777 = C1775 + C1770;
    const double C1164 = C1162 * C26970;
    const double C18633 = C1519 * C26968;
    const double C3464 = C3463 * C26970;
    const double C100 =
        (2 * (2 * ae * C25983 + C25971 * C26000) + C26006 + C26006 +
         C25971 * (C26000 + C26003 + C26003 +
                   C25971 * (2 * ae * C25996 +
                             C25971 *
                                 (C25989 * C25990 +
                                  C25975 * bs[5] * std::pow(C25977, 5)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C686 =
        (C26006 + C26041 * (C26051 + ae * C26054 + C25971 * C26062)) /
        std::pow(C25915, 2);
    const double C828 =
        (C26006 + C26041 * (C26096 + ae * C26054 + C25971 * C26101)) /
        std::pow(C25915, 2);
    const double C1377 =
        (C26006 + C26066 * (C26076 + ae * C26079 + C25971 * C26087)) /
        std::pow(C25915, 2);
    const double C1639 =
        (C26006 + C26066 * (C26134 + ae * C26079 + C25971 * C26139)) /
        std::pow(C25915, 2);
    const double C110 = C84 * C95;
    const double C108 = C86 * C95;
    const double C166 = C144 * C95;
    const double C229 = C207 * C95;
    const double C9063 = C9054 * C95;
    const double C624 = C86 * C610;
    const double C1841 = C84 * C610;
    const double C1896 = C144 * C610;
    const double C1954 = C207 * C610;
    const double C9061 = C9054 * C610;
    const double C10590 = C26968 * C610;
    const double C1241 = C86 * C1227;
    const double C2343 = C84 * C1227;
    const double C2398 = C144 * C1227;
    const double C2456 = C207 * C1227;
    const double C10903 = C9054 * C1227;
    const double C19529 = C26968 * C1227;
    const double C700 = C695 + C696;
    const double C9619 = C9610 + C9611;
    const double C3023 = C3020 + C3021;
    const double C11818 = C11815 + C11816;
    const double C19929 = C2945 * C26968;
    const double C11381 = C11379 + C9969;
    const double C11814 = C11604 * C207;
    const double C20068 = C11604 * C144;
    const double C1391 = C1386 + C1387;
    const double C18753 = C18748 + C18749;
    const double C11605 = C11600 + C11601;
    const double C9421 = C9417 + C9408;
    const double C18375 = C18371 + C18362;
    const double C4113 =
        (2 * (2 * ae * C26047 + C26041 * C26110) + C26387 + C26387 +
         C26041 * (C26110 + C26384 + C26384 +
                   C26041 * (2 * C26055 + C26041 * C26115))) /
        std::pow(C25915, 2);
    const double C6220 =
        (C26387 + C26066 * (C26147 + ae * C26423 +
                            C26041 * (C26080 + C26041 * C26150))) /
        std::pow(C25915, 2);
    const double C4116 = C144 * C4001;
    const double C9673 = C9098 * C4001;
    const double C12569 = C9054 * C4001;
    const double C12609 = C9097 * C4001;
    const double C12645 = C207 * C4001;
    const double C6065 = C144 * C5902;
    const double C11673 = C9098 * C5902;
    const double C14533 = C9054 * C5902;
    const double C14589 = C9097 * C5902;
    const double C14641 = C207 * C5902;
    const double C22790 = C26970 * C5902;
    const double C7516 =
        (2 * (2 * ae * C26072 + C26066 * C26159) + C26484 + C26484 +
         C26066 * (C26159 + C26481 + C26481 +
                   C26066 * (2 * C26080 + C26066 * C26164))) /
        std::pow(C25915, 2);
    const double C7519 = C207 * C7296;
    const double C18863 = C17631 * C7296;
    const double C24339 = C9054 * C7296;
    const double C24377 = C144 * C7296;
    const double C24416 = C17630 * C7296;
    const double C13262 = C13261 + C4744;
    const double C12934 = C12932 * C9054;
    const double C13155 = C13154 * C26969;
    const double C20141 = C20140 + C20137;
    const double C21438 = C21437 + C21434;
    const double C687 =
        (C26051 + ae * C26054 + C25971 * C26062 + ae * C26041 * C26033 +
         C26041 * (C26035 + C26041 * (C26058 + ae * C25971 * C26059 +
                                      C25971 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C829 =
        (C26096 + ae * C26054 + C25971 * C26101 + ae * C26041 * C26033 +
         C26041 * (C26035 + C26041 * (C26099 + ae * C25971 * C26059 +
                                      C25971 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26093)))) /
        std::pow(C25915, 2);
    const double C1378 =
        (C26076 + ae * C26079 + C25971 * C26087 + ae * C26066 * C26033 +
         C26066 * (C26035 + C26066 * (C26083 + ae * C25971 * C26084 +
                                      C25971 * (ae * C26084 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26070)))) /
        std::pow(C25915, 2);
    const double C1640 =
        (C26134 + ae * C26079 + C25971 * C26139 + ae * C26066 * C26033 +
         C26066 * (C26035 + C26066 * (C26137 + ae * C25971 * C26084 +
                                      C25971 * (ae * C26084 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26131)))) /
        std::pow(C25915, 2);
    const double C2938 =
        (C26066 * (C26035 + C26041 * (C26058 + ae * C25971 * C26059 +
                                      C25971 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C26036 = C26012 + C26034;
    const double C26305 = ae * C26303;
    const double C2859 = (C26066 * C26303) / C25915;
    const double C26319 = ae * C26317;
    const double C625 = C86 * C611;
    const double C10432 = C9054 * C611;
    const double C1242 = C86 * C1228;
    const double C19372 = C9054 * C1228;
    const double C12823 = C12822 * C26969;
    const double C26377 = ae * C26376;
    const double C4000 =
        (2 * C26202 + C26041 * C26376 + (C25994 + C26017 * C26105) * ae) /
        C25915;
    const double C5901 = (C26066 * C26376) / C25915;
    const double C13205 =
        (C26147 + ae * C26423 + C26041 * C26524 + ae * C26066 * C26510 +
         C26066 * (C26512 + C26066 * (C26150 + ae * C26041 * C26084 +
                                      C26041 * (ae * C26084 +
                                                C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26144)))) /
        std::pow(C25915, 2);
    const double C26513 = C26498 + C26511;
    const double C26550 = ae * C26548;
    const double C13044 = C9098 * C12873;
    const double C22951 = C144 * C12873;
    const double C26474 = ae * C26473;
    const double C7295 =
        (2 * C26294 + C26066 * C26473 + (C25994 + C26017 * C26154) * ae) /
        C25915;
    const double C26580 = ae * C26579;
    const double C15816 =
        (2 * C26425 + C26066 * C26579 + (C26380 + C26500 * C26154) * ae) /
        C25915;
    const double C26619 = C26604 + C26617;
    const double C9424 = C9420 * C26969;
    const double C3386 = C3385 * C26969;
    const double C902 = C900 + C894;
    const double C3169 = C3168 + C3165;
    const double C3243 = C3242 * C26970;
    const double C1779 = C1777 + C1771;
    const double C1897 = C26970 * C686;
    const double C10592 = C26968 * C828;
    const double C2457 = C26969 * C1377;
    const double C19688 = C26968 * C1639;
    const double C173 = C166 + C167;
    const double C236 = C229 + C230;
    const double C1957 = C1954 + C1955;
    const double C10433 = C10430 + C9061;
    const double C10593 = C10589 + C10590;
    const double C2401 = C2398 + C2399;
    const double C19373 = C19370 + C10903;
    const double C19532 = C19528 + C19529;
    const double C11523 = C3023 * C26968;
    const double C11820 = C11818 * C26969;
    const double C11383 = C11381 + C11376;
    const double C20069 = C11605 * C26970;
    const double C9425 = C9421 * C26969;
    const double C23107 = C26970 * C6220;
    const double C12572 = C12569 + C12570;
    const double C12647 = C12645 + C12646;
    const double C22952 = C22949 + C6065;
    const double C14536 = C14533 + C14534;
    const double C14643 = C14641 + C14642;
    const double C22793 = C22789 + C22790;
    const double C24341 = C24339 + C24340;
    const double C24379 = C24377 + C24378;
    const double C13263 = C13262 + C13259;
    const double C20142 = C20141 * C26968;
    const double C21439 = C21438 * C26968;
    const double C26037 = C26036 + C26025;
    const double C1838 =
        (2 * (2 * ae * C26041 * C25996 + C25971 * C26302) + C26305 + C26305 +
         C25971 * (C26302 + C26306 + C26306 +
                   C25971 * (2 * ae * C26041 * C26020 +
                             C25971 * C26041 *
                                 (C26010 * C26011 +
                                  C25975 * bs[6] * std::pow(C25969, 6)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C3016 =
        (C26305 + C26066 * C26041 *
                      (C26083 + ae * C25971 * C26084 +
                       C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                   bs[6] * C26070))) /
        std::pow(C25915, 2);
    const double C3311 =
        (C26305 + C26066 * C26041 *
                      (C26137 + ae * C25971 * C26084 +
                       C25971 * (ae * C26084 + C25971 * std::pow(C25969, 6) *
                                                   bs[6] * C26131))) /
        std::pow(C25915, 2);
    const double C2866 = C86 * C2859;
    const double C10902 = C9054 * C2859;
    const double C2340 =
        (2 * (2 * ae * C26066 * C25996 + C25971 * C26316) + C26319 + C26319 +
         C25971 * (C26316 + C26320 + C26320 +
                   C25971 * (2 * ae * C26066 * C26020 +
                             C25971 * C26066 *
                                 (C26010 * C26011 +
                                  C25975 * bs[6] * std::pow(C25969, 6)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C3091 =
        (C26319 + C26041 * C26066 *
                      (C26099 + ae * C25971 * C26059 +
                       C25971 * (ae * C26059 + C25971 * std::pow(C25969, 6) *
                                                   bs[6] * C26093))) /
        std::pow(C25915, 2);
    const double C4112 =
        (2 * (2 * ae * C26054 + C26041 * C26367) + C26377 + C26377 +
         C26041 * (C26367 + C26374 + C26374 +
                   C26041 * (2 * ae * C26368 +
                             C26041 * C25971 *
                                 (C26010 * C26011 +
                                  C26105 * bs[6] * std::pow(C25969, 6)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C6219 =
        (C26377 + C26066 * (C26395 + ae * C26418 +
                            C26041 * (ae * C26390 + C26041 * C25971 *
                                                        std::pow(C25969, 6) *
                                                        bs[6] * C26144))) /
        std::pow(C25915, 2);
    const double C4115 = C144 * C4000;
    const double C9676 = C9098 * C4000;
    const double C6064 = C144 * C5901;
    const double C11674 = C9098 * C5901;
    const double C26514 = C26513 + C26507;
    const double C14586 =
        (2 * (2 * ae * C26066 * C26052 + C26041 * C26547) + C26550 + C26550 +
         C26041 * (C26547 + C26551 + C26551 +
                   C26041 * (2 * ae * C26066 * C26059 +
                             C26041 * C26066 *
                                 (C26010 * C26011 +
                                  C26105 * bs[6] * std::pow(C25969, 6)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C7515 =
        (2 * (2 * ae * C26079 + C26066 * C26398) + C26474 + C26474 +
         C26066 * (C26398 + C26471 + C26471 +
                   C26066 * (2 * ae * C26390 +
                             C26066 * C25971 *
                                 (C26010 * C26011 +
                                  C26154 * bs[6] * std::pow(C25969, 6)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C7518 = C207 * C7295;
    const double C18866 = C17631 * C7295;
    const double C16029 =
        (2 * (2 * ae * C26423 + C26066 * C26570) + C26580 + C26580 +
         C26066 * (C26570 + C26577 + C26577 +
                   C26066 * (2 * ae * C26571 +
                             C26066 * C26041 *
                                 (C26010 * C26011 +
                                  C26154 * bs[6] * std::pow(C25969, 6)) *
                                 C25978))) /
        std::pow(C25915, 2);
    const double C16031 = C207 * C15816;
    const double C21643 = C17631 * C15816;
    const double C26620 = C26619 + C26613;
    const double C20138 = C3169 * C26968;
    const double C1781 = C1779 * C26970;
    const double C1899 = C1896 + C1897;
    const double C10594 = C10591 + C10592;
    const double C2459 = C2456 + C2457;
    const double C19689 = C19687 + C19688;
    const double C10538 = C1957 * C26968;
    const double C10434 = C10433 + C9061;
    const double C10747 = C10593 * C207;
    const double C19427 = C2401 * C26968;
    const double C19374 = C19373 + C10903;
    const double C19534 = C19532 * C144;
    const double C11385 = C11383 * C26969;
    const double C23108 = C23106 + C23107;
    const double C22953 = C22952 + C6065;
    const double C22898 = C14536 * C26970;
    const double C22795 = C22793 * C9054;
    const double C26038 = ae * C26037;
    const double C96 =
        (3 * C26005 + C25971 * C26037 + (2 * C25994 + C25971 * C26022) * ae) /
        C25915;
    const double C1837 = (C26041 * C26037) / C25915;
    const double C2339 = (C26066 * C26037) / C25915;
    const double C26515 = ae * C26514;
    const double C12485 =
        (3 * C26386 + C26041 * C26514 + (2 * C26380 + C26041 * C26505) * ae) /
        C25915;
    const double C14417 = (C26066 * C26514) / C25915;
    const double C26621 = ae * C26620;
    const double C24181 =
        (3 * C26483 + C26066 * C26620 + (2 * C26477 + C26066 * C26611) * ae) /
        C25915;
    const double C10435 = C10434 + C10431;
    const double C19375 = C19374 + C19371;
    const double C22954 = C22953 + C22950;
    const double C101 =
        (3 * (C26000 + C26003 + C26003 + C25971 * C26031) + C26038 + C26038 +
         C25971 *
             (2 * C26031 + C26035 + C26035 +
              C25971 * (C26026 + C26030 + C26030 +
                        C25971 * (2 * ae * C26020 +
                                  C25971 *
                                      (C26010 * C26011 +
                                       C25975 * bs[6] * std::pow(C25969, 6)) *
                                      C25978)))) /
        std::pow(C25915, 2);
    const double C1892 =
        (C26038 + C26041 * (2 * C26062 + ae * C26063 +
                            C25971 * (C26058 + ae * C25971 * C26059 +
                                      C25971 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26045)))) /
        std::pow(C25915, 2);
    const double C2007 =
        (C26038 + C26041 * (2 * C26101 + ae * C26063 +
                            C25971 * (C26099 + ae * C25971 * C26059 +
                                      C25971 * (ae * C26059 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26093)))) /
        std::pow(C25915, 2);
    const double C2452 =
        (C26038 + C26066 * (2 * C26087 + ae * C26088 +
                            C25971 * (C26083 + ae * C25971 * C26084 +
                                      C25971 * (ae * C26084 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26070)))) /
        std::pow(C25915, 2);
    const double C2673 =
        (C26038 + C26066 * (2 * C26139 + ae * C26088 +
                            C25971 * (C26137 + ae * C25971 * C26084 +
                                      C25971 * (ae * C26084 +
                                                C25971 * std::pow(C25969, 6) *
                                                    bs[6] * C26131)))) /
        std::pow(C25915, 2);
    const double C109 = C86 * C96;
    const double C1840 = C86 * C1837;
    const double C9062 = C9054 * C1837;
    const double C2342 = C86 * C2339;
    const double C17562 = C9054 * C2339;
    const double C12606 =
        (3 * (C26110 + C26384 + C26384 + C26041 * C26502) + C26515 + C26515 +
         C26041 *
             (2 * C26502 + C26512 + C26512 +
              C26041 * (C26115 + C26508 + C26508 +
                        C26041 * (2 * ae * C26059 +
                                  C26041 *
                                      (C26010 * C26011 +
                                       C26105 * bs[6] * std::pow(C25969, 6)) *
                                      C25978)))) /
        std::pow(C25915, 2);
    const double C14749 =
        (C26515 + C26066 * (2 * C26524 + ae * C26520 +
                            C26041 * (C26150 + ae * C26041 * C26084 +
                                      C26041 * (ae * C26084 +
                                                C26041 * std::pow(C25969, 6) *
                                                    bs[6] * C26144)))) /
        std::pow(C25915, 2);
    const double C12608 = C9098 * C12485;
    const double C14588 = C9098 * C14417;
    const double C21034 = C144 * C14417;
    const double C24413 =
        (3 * (C26159 + C26481 + C26481 + C26066 * C26608) + C26621 + C26621 +
         C26066 *
             (2 * C26608 + C26618 + C26618 +
              C26066 * (C26164 + C26614 + C26614 +
                        C26066 * (2 * ae * C26084 +
                                  C26066 *
                                      (C26010 * C26011 +
                                       C26154 * bs[6] * std::pow(C25969, 6)) *
                                      C25978)))) /
        std::pow(C25915, 2);
    const double C24415 = C17631 * C24181;
    const double C10436 = C10435 * C26969;
    const double C22955 = C22954 * C26968;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                     C104 + C74 * C98) *
                        C26969 * C26970 * C26821 * C26933 -
                    (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 +
                     C620 + C73 * C613) *
                        C26969 * C26970 * C26821 * C26857) *
                       C26959 +
                   ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 + C624 +
                     C624 + C74 * C616) *
                        C26969 * C26970 * C26821 * C26857 -
                    (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                     C106 + C73 * C98) *
                        C26969 * C26970 * C26821 * C26933) *
                       C26960 +
                   ((C83 * C89 + C107 + C107 + C73 * C99 + C85 * C90 + C108 +
                     C108 + C74 * C100) *
                        C26969 * C26970 * C26821 * C26933 -
                    (C85 * C1836 + C1840 + C1840 + C74 * C1838 + C83 * C604 +
                     C1841 + C1841 + C73 * C616) *
                        C26969 * C26970 * C26821 * C26857) *
                       C1835)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26821 * C26933 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26821 * C26857) *
              C26959 +
          ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
               C26821 * C26857 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26821 * C26933) *
              C26960 +
          ((C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
               C26821 * C26933 -
           ((C144 * C1837 + C26970 * C1892) * C74 +
            (C144 * C1836 + C26970 * C1891) * C86 + C1899 * C73 + C1898 * C84) *
               C26969 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26821 * C26933 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26821 * C26857) *
              C26959 +
          ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
               C26821 * C26857 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26821 * C26933) *
              C26960 +
          ((C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
               C26821 * C26933 -
           ((C207 * C1837 + C26969 * C1950) * C74 +
            (C207 * C1836 + C26969 * C1949) * C86 + C1957 * C73 + C1956 * C84) *
               C26970 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26821 * C26933 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26821 * C26857) *
              C26959 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
            (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
               C26969 * C26821 * C26857 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26821 * C26933) *
              C26960 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
            (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
               C26969 * C26821 * C26933 -
           ((C86 * C1891 + C74 * C2007 + C84 * C680 + C73 * C828) * C26970 +
            (C86 * C1836 + C74 * C1837 + C84 * C604 + C73 * C610) * C144) *
               C26969 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26821 * C26933 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26821 * C26857) *
              C26959 +
          ((C901 * C73 + C2065 * C74) * C26969 * C26821 * C26857 -
           (C334 * C74 + C333 * C73) * C26969 * C26821 * C26933) *
              C26960 +
          ((C334 * C73 + C335 * C74) * C26969 * C26821 * C26933 -
           ((C309 * C1836 + C2062 + C2062 + C26970 * C2058) * C74 +
            C2065 * C73) *
               C26969 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26821 * C26933 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26821 * C26857) *
              C26959 +
          (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C26821 * C26857 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C26933) *
              C26960 +
          (((C380 + C388) * C73 + (C381 + C389) * C74) * C26821 * C26933 -
           (((C207 * C1891 + C26969 * C2115) * C26970 +
             (C207 * C1836 + C26969 * C1949) * C144) *
                C74 +
            (C2121 + C2117) * C73) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26821 * C26933 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26821 * C26857) *
              C26959 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
            (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
               C26970 * C26821 * C26857 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26821 * C26933) *
              C26960 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
            (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
               C26970 * C26821 * C26933 -
           ((C86 * C1949 + C74 * C2171 + C84 * C754 + C73 * C1022) * C26969 +
            (C86 * C1836 + C74 * C1837 + C84 * C604 + C73 * C610) * C207) *
               C26970 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26821 * C26933 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26821 * C26857) *
              C26959 +
          (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C26821 * C26857 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C26933) *
              C26960 +
          (((C473 + C481) * C73 + (C474 + C482) * C74) * C26821 * C26933 -
           (((C144 * C1949 + C26970 * C2222) * C26969 +
             (C144 * C1836 + C26970 * C1891) * C207) *
                C74 +
            (C2228 + C2224) * C73) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26821 * C26933 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26821 * C26857) *
              C26959 +
          ((C1163 * C73 + C2286 * C74) * C26821 * C26857 -
           (C544 * C74 + C543 * C73) * C26821 * C26933) *
              C26960 +
          ((C544 * C73 + C545 * C74) * C26821 * C26933 -
           ((C516 * C1836 + C2282 + C2282 + C26969 * C2278) * C26970 * C74 +
            C2286 * C73) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                      C104 + C74 * C98) *
                         C26969 * C26970 * C26934 -
                     (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                      C1237 + C1237 + C73 * C1230) *
                         C26969 * C26970 * C26885) *
                        C26933 +
                    ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 +
                      C2865 + C2865 + C74 * C2861) *
                         C26969 * C26970 * C26885 -
                     (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 +
                      C620 + C620 + C73 * C613) *
                         C26969 * C26970 * C26934) *
                        C26857) *
                       C598 +
                   (((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 +
                      C1241 + C1241 + C74 * C1233) *
                         C26969 * C26970 * C26885 -
                     (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                      C106 + C73 * C98) *
                         C26969 * C26970 * C26934) *
                        C26933 +
                    ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 +
                      C624 + C624 + C74 * C616) *
                         C26969 * C26970 * C26934 -
                     (C85 * C2856 + C2866 + C2866 + C74 * C2862 + C83 * C2855 +
                      C2867 + C2867 + C73 * C2861) *
                         C26969 * C26970 * C26885) *
                        C26857) *
                       C26792)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C84 +
             (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
                C26969 * C26934 -
            (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
             (C144 * C1218 + C26970 * C1294) * C84) *
                C26969 * C26885) *
               C26933 +
           (((C144 * C2854 + C26970 * C2933) * C84 +
             (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 +
             C2945 * C74) *
                C26969 * C26885 -
            (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
             (C144 * C601 + C26970 * C677) * C84) *
                C26969 * C26934) *
               C26857) *
              C598 +
          (((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
                C26885 -
            (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
                C26934) *
               C26933 +
           ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
                C26934 -
            ((C144 * C2859 + C26970 * C2938) * C74 +
             (C144 * C2856 + C26970 * C2935) * C86 + C2945 * C73 +
             C2944 * C84) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C84 +
             (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
                C26970 * C26934 -
            (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
             (C207 * C1218 + C26969 * C1368) * C84) *
                C26970 * C26885) *
               C26933 +
           (((C207 * C2854 + C26969 * C3011) * C84 +
             (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 +
             C3023 * C74) *
                C26970 * C26885 -
            (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
             (C207 * C601 + C26969 * C751) * C84) *
                C26970 * C26934) *
               C26857) *
              C598 +
          (((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
                C26885 -
            (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
                C26934) *
               C26933 +
           ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
                C26934 -
            ((C207 * C2859 + C26969 * C3016) * C74 +
             (C207 * C2856 + C26969 * C3013) * C86 + C3023 * C73 +
             C3022 * C84) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
             (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
                C26969 * C26934 -
            ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
             (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
                C26969 * C26885) *
               C26933 +
           (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
             (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
                C26969 * C26885 -
            ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
             (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
                C26969 * C26934) *
               C26857) *
              C598 +
          ((((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
             (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
                C26969 * C26885 -
            ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
             (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
                C26969 * C26934) *
               C26933 +
           (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
             (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
                C26969 * C26934 -
            ((C86 * C2935 + C74 * C3091 + C84 * C2934 + C73 * C3090) * C26970 +
             (C86 * C2856 + C74 * C2859 + C84 * C2855 + C73 * C2858) * C144) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
                C26969 * C26934 -
            (C1518 * C74 +
             (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
                C26969 * C26885) *
               C26933 +
           (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
             C3169 * C74) *
                C26969 * C26885 -
            (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
                C26969 * C26934) *
               C26857) *
              C598 +
          (((C1518 * C73 + C2567 * C74) * C26969 * C26885 -
            (C334 * C74 + C333 * C73) * C26969 * C26934) *
               C26933 +
           ((C901 * C73 + C2065 * C74) * C26969 * C26934 -
            ((C309 * C2856 + C3166 + C3166 + C26970 * C3160) * C74 +
             C3169 * C73) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C207 * C87 + C26969 * C208) * C144 +
              (C207 * C145 + C26969 * C369) * C26970) *
                 C73 +
             (C375 + C387) * C74) *
                C26934 -
            ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                      (C207 * C1218 + C26969 * C1368) * C144) *
                                         C73) *
                C26885) *
               C26933 +
           ((((C207 * C2854 + C26969 * C3011) * C144 +
              (C207 * C2933 + C26969 * C3235) * C26970) *
                 C73 +
             (C3239 + C3243) * C74) *
                C26885 -
            ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                    (C207 * C601 + C26969 * C751) * C144) *
                                       C73) *
                C26934) *
               C26857) *
              C598 +
          ((((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26885 -
            ((C388 + C380) * C74 + (C387 + C375) * C73) * C26934) *
               C26933 +
           (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C26934 -
            (((C207 * C2935 + C26969 * C3237) * C26970 +
              (C207 * C2856 + C26969 * C3013) * C144) *
                 C74 +
             (C3243 + C3239) * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
             (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
                C26970 * C26934 -
            ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
             (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
                C26970 * C26885) *
               C26933 +
           (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
             (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
                C26970 * C26885 -
            ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
             (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
                C26970 * C26934) *
               C26857) *
              C598 +
          ((((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
             (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
                C26970 * C26885 -
            ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
             (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
                C26970 * C26934) *
               C26933 +
           (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
             (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
                C26970 * C26934 -
            ((C86 * C3013 + C74 * C3311 + C84 * C3012 + C73 * C3310) * C26969 +
             (C86 * C2856 + C74 * C2859 + C84 * C2855 + C73 * C2858) * C207) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C144 * C87 + C26970 * C145) * C207 +
              (C144 * C208 + C26970 * C462) * C26969) *
                 C73 +
             (C468 + C480) * C74) *
                C26934 -
            ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                      (C144 * C1218 + C26970 * C1294) * C207) *
                                         C73) *
                C26885) *
               C26933 +
           ((((C144 * C2854 + C26970 * C2933) * C207 +
              (C144 * C3011 + C26970 * C3378) * C26969) *
                 C73 +
             (C3382 + C3386) * C74) *
                C26885 -
            ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                      (C144 * C601 + C26970 * C677) * C207) *
                                         C73) *
                C26934) *
               C26857) *
              C598 +
          ((((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26885 -
            ((C481 + C473) * C74 + (C480 + C468) * C73) * C26934) *
               C26933 +
           (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C26934 -
            (((C144 * C3013 + C26970 * C3380) * C26969 +
              (C144 * C2856 + C26970 * C2935) * C207) *
                 C74 +
             (C3386 + C3382) * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
             C543 * C74) *
                C26934 -
            (C1780 * C74 +
             (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
                C26885) *
               C26933 +
           (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
             C3464 * C74) *
                C26885 -
            (C1163 * C74 +
             (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
                C26934) *
               C26857) *
              C598 +
          (((C1780 * C73 + C2788 * C74) * C26885 -
            (C544 * C74 + C543 * C73) * C26934) *
               C26933 +
           ((C1163 * C73 + C2286 * C74) * C26934 -
            ((C516 * C2856 + C3460 + C3460 + C26969 * C3454) * C26970 * C74 +
             C3464 * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::pow(Pi, 2.5) * (((C83 * C87 + C103 + C103 + C73 * C97 +
                                 C85 * C88 + C104 + C104 + C74 * C98) *
                                    C26969 * C26970 * C26821 * C595 -
                                (C85 * C600 + C619 + C619 + C74 * C612 +
                                 C83 * C601 + C620 + C620 + C73 * C613) *
                                    C26969 * C26970 * C26821 * C596 +
                                (C83 * C602 + C621 + C621 + C73 * C614 +
                                 C85 * C603 + C622 + C622 + C74 * C615) *
                                    C26969 * C26970 * C26821 * C597) *
                                   C598 +
                               ((C83 * C600 + C623 + C623 + C73 * C612 +
                                 C85 * C604 + C624 + C624 + C74 * C616) *
                                    C26969 * C26970 * C26821 * C596 -
                                (C85 * C89 + C105 + C105 + C74 * C99 +
                                 C83 * C88 + C106 + C106 + C73 * C98) *
                                    C26969 * C26970 * C26821 * C595 -
                                (C85 * C605 + C625 + C625 + C74 * C617 +
                                 C83 * C603 + C626 + C626 + C73 * C615) *
                                    C26969 * C26970 * C26821 * C597) *
                                   C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 +
                               C104 + C104 + C74 * C98) *
                                  C26969 * C26970 * C26821 * C26805 * C79 -
                              (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 +
                               C106 + C106 + C73 * C98) *
                                  C26969 * C26970 * C26821 * C26805 * C80 +
                              (C83 * C89 + C107 + C107 + C73 * C99 + C85 * C90 +
                               C108 + C108 + C74 * C100) *
                                  C26969 * C26970 * C26821 * C26805 * C81 -
                              (C85 * C91 + C109 + C109 + C74 * C101 +
                               C83 * C90 + C110 + C110 + C73 * C100) *
                                  C26969 * C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 + C104 +
            C74 * C98) *
               C26969 * C26970 * C1214 -
           (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 + C1237 +
            C1237 + C73 * C1230) *
               C26969 * C26970 * C1215 +
           (C83 * C1219 + C1238 + C1238 + C73 * C1231 + C85 * C1220 + C1239 +
            C1239 + C74 * C1232) *
               C26969 * C26970 * C1216) *
              C26805 * C598 +
          ((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 + C1241 +
            C1241 + C74 * C1233) *
               C26969 * C26970 * C1215 -
           (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 + C106 +
            C73 * C98) *
               C26969 * C26970 * C1214 -
           (C85 * C1222 + C1242 + C1242 + C74 * C1234 + C83 * C1220 + C1243 +
            C1243 + C73 * C1232) *
               C26969 * C26970 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26821 * C595 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26821 * C596 +
           ((C144 * C602 + C26970 * C678) * C84 +
            (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
               C26969 * C26821 * C597) *
              C598 +
          ((C698 * C84 + C697 * C73 + (C144 * C604 + C26970 * C680) * C86 +
            (C144 * C610 + C26970 * C686) * C74) *
               C26969 * C26821 * C596 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26821 * C595 -
           ((C144 * C611 + C26970 * C687) * C74 +
            (C144 * C605 + C26970 * C681) * C86 + C700 * C73 + C699 * C84) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C84 +
           (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
              C26969 * C26821 * C26805 * C79 -
          (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
              C26821 * C26805 * C80 +
          (C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
              C26821 * C26805 * C81 -
          ((C144 * C96 + C26970 * C154) * C74 +
           (C144 * C91 + C26970 * C149) * C86 + C173 * C73 + C172 * C84) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C1214 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C1215 +
           ((C144 * C1219 + C26970 * C1295) * C84 +
            (C144 * C1225 + C26970 * C1301) * C73 + C1316 * C86 + C1317 * C74) *
               C26969 * C1216) *
              C26805 * C598 +
          ((C1315 * C84 + C1314 * C73 + (C144 * C1221 + C26970 * C1297) * C86 +
            (C144 * C1227 + C26970 * C1303) * C74) *
               C26969 * C1215 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C1214 -
           ((C144 * C1228 + C26970 * C1304) * C74 +
            (C144 * C1222 + C26970 * C1298) * C86 + C1317 * C73 + C1316 * C84) *
               C26969 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26821 * C595 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26821 * C596 +
           ((C207 * C602 + C26969 * C752) * C84 +
            (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
               C26970 * C26821 * C597) *
              C598 +
          ((C772 * C84 + C771 * C73 + (C207 * C604 + C26969 * C754) * C86 +
            (C207 * C610 + C26969 * C760) * C74) *
               C26970 * C26821 * C596 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26821 * C595 -
           ((C207 * C611 + C26969 * C761) * C74 +
            (C207 * C605 + C26969 * C755) * C86 + C774 * C73 + C773 * C84) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C84 +
           (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
              C26970 * C26821 * C26805 * C79 -
          (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
              C26821 * C26805 * C80 +
          (C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
              C26821 * C26805 * C81 -
          ((C207 * C96 + C26969 * C217) * C74 +
           (C207 * C91 + C26969 * C212) * C86 + C236 * C73 + C235 * C84) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C1214 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C1215 +
           ((C207 * C1219 + C26969 * C1369) * C84 +
            (C207 * C1225 + C26969 * C1375) * C73 + C1390 * C86 + C1391 * C74) *
               C26970 * C1216) *
              C26805 * C598 +
          ((C1389 * C84 + C1388 * C73 + (C207 * C1221 + C26969 * C1371) * C86 +
            (C207 * C1227 + C26969 * C1377) * C74) *
               C26970 * C1215 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C1214 -
           ((C207 * C1228 + C26969 * C1378) * C74 +
            (C207 * C1222 + C26969 * C1372) * C86 + C1391 * C73 + C1390 * C84) *
               C26970 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26821 * C595 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26821 * C596 +
           ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
            (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
               C26969 * C26821 * C597) *
              C598 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
            (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
               C26969 * C26821 * C596 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26821 * C595 -
           ((C86 * C681 + C74 * C829 + C84 * C679 + C73 * C827) * C26970 +
            (C86 * C605 + C74 * C611 + C84 * C603 + C73 * C609) * C144) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
           (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
              C26969 * C26821 * C26805 * C79 -
          ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
           (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
              C26969 * C26821 * C26805 * C80 +
          ((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
           (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
              C26969 * C26821 * C26805 * C81 -
          ((C86 * C149 + C74 * C274 + C84 * C148 + C73 * C273) * C26970 +
           (C86 * C91 + C74 * C96 + C84 * C90 + C73 * C95) * C144) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C1214 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C1215 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C144 +
            (C84 * C1295 + C73 * C1443 + C86 * C1296 + C74 * C1444) * C26970) *
               C26969 * C1216) *
              C26805 * C598 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
            (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
               C26969 * C1215 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C1214 -
           ((C86 * C1298 + C74 * C1446 + C84 * C1296 + C73 * C1444) * C26970 +
            (C86 * C1222 + C74 * C1228 + C84 * C1220 + C73 * C1226) * C144) *
               C26969 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26821 * C595 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26821 * C596 +
           ((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
               C26969 * C26821 * C597) *
              C598 +
          ((C901 * C73 + (C309 * C604 + C895 + C895 + C26970 * C884) * C74) *
               C26969 * C26821 * C596 -
           (C334 * C74 + C333 * C73) * C26969 * C26821 * C595 -
           ((C309 * C605 + C896 + C896 + C26970 * C885) * C74 + C902 * C73) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
              C26969 * C26821 * C26805 * C79 -
          (C334 * C74 + C333 * C73) * C26969 * C26821 * C26805 * C80 +
          (C334 * C73 + C335 * C74) * C26969 * C26821 * C26805 * C81 -
          ((C309 * C91 + C326 + C326 + C26970 * C314) * C74 + C335 * C73) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C1214 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C1215 +
           ((C309 * C1219 + C1508 + C1508 + C26970 * C1499) * C73 +
            C1519 * C74) *
               C26969 * C1216) *
              C26805 * C598 +
          ((C1518 * C73 +
            (C309 * C1221 + C1512 + C1512 + C26970 * C1501) * C74) *
               C26969 * C1215 -
           (C334 * C74 + C333 * C73) * C26969 * C1214 -
           ((C309 * C1222 + C1513 + C1513 + C26970 * C1502) * C74 +
            C1519 * C73) *
               C26969 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26821 * C595 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26821 * C596 +
           (((C207 * C602 + C26969 * C752) * C144 +
             (C207 * C678 + C26969 * C954) * C26970) *
                C73 +
            (C962 + C968) * C74) *
               C26821 * C597) *
              C598 +
          (((C961 + C967) * C73 + ((C207 * C604 + C26969 * C754) * C144 +
                                   (C207 * C680 + C26969 * C956) * C26970) *
                                      C74) *
               C26821 * C596 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C595 -
           (((C207 * C681 + C26969 * C957) * C26970 +
             (C207 * C605 + C26969 * C755) * C144) *
                C74 +
            (C968 + C962) * C73) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C144 +
            (C207 * C145 + C26969 * C369) * C26970) *
               C73 +
           (C375 + C387) * C74) *
              C26821 * C26805 * C79 -
          ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C26805 * C80 +
          ((C380 + C388) * C73 + (C381 + C389) * C74) * C26821 * C26805 * C81 -
          (((C207 * C149 + C26969 * C373) * C26970 +
            (C207 * C91 + C26969 * C212) * C144) *
               C74 +
           (C389 + C381) * C73) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C1214 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C1215 +
           (((C207 * C1219 + C26969 * C1369) * C144 +
             (C207 * C1295 + C26969 * C1571) * C26970) *
                C73 +
            (C1579 + C1585) * C74) *
               C1216) *
              C26805 * C598 +
          (((C1578 + C1584) * C73 + ((C207 * C1221 + C26969 * C1371) * C144 +
                                     (C207 * C1297 + C26969 * C1573) * C26970) *
                                        C74) *
               C1215 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C1214 -
           (((C207 * C1298 + C26969 * C1574) * C26970 +
             (C207 * C1222 + C26969 * C1372) * C144) *
                C74 +
            (C1585 + C1579) * C73) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26821 * C595 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26821 * C596 +
           ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
            (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
               C26970 * C26821 * C597) *
              C598 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
            (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
               C26970 * C26821 * C596 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26821 * C595 -
           ((C86 * C755 + C74 * C1023 + C84 * C753 + C73 * C1021) * C26969 +
            (C86 * C605 + C74 * C611 + C84 * C603 + C73 * C609) * C207) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
           (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
              C26970 * C26821 * C26805 * C79 -
          ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
           (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
              C26970 * C26821 * C26805 * C80 +
          ((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
           (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
              C26970 * C26821 * C26805 * C81 -
          ((C86 * C212 + C74 * C427 + C84 * C211 + C73 * C426) * C26969 +
           (C86 * C91 + C74 * C96 + C84 * C90 + C73 * C95) * C207) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C1214 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C1215 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C207 +
            (C84 * C1369 + C73 * C1637 + C86 * C1370 + C74 * C1638) * C26969) *
               C26970 * C1216) *
              C26805 * C598 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
            (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
               C26970 * C1215 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C1214 -
           ((C86 * C1372 + C74 * C1640 + C84 * C1370 + C73 * C1638) * C26969 +
            (C86 * C1222 + C74 * C1228 + C84 * C1220 + C73 * C1226) * C207) *
               C26970 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26821 * C595 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26821 * C596 +
           (((C144 * C602 + C26970 * C678) * C207 +
             (C144 * C752 + C26970 * C1076) * C26969) *
                C73 +
            (C1084 + C1090) * C74) *
               C26821 * C597) *
              C598 +
          (((C1083 + C1089) * C73 + ((C144 * C604 + C26970 * C680) * C207 +
                                     (C144 * C754 + C26970 * C1078) * C26969) *
                                        C74) *
               C26821 * C596 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C595 -
           (((C144 * C755 + C26970 * C1079) * C26969 +
             (C144 * C605 + C26970 * C681) * C207) *
                C74 +
            (C1090 + C1084) * C73) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C207 +
            (C144 * C208 + C26970 * C462) * C26969) *
               C73 +
           (C468 + C480) * C74) *
              C26821 * C26805 * C79 -
          ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C26805 * C80 +
          ((C473 + C481) * C73 + (C474 + C482) * C74) * C26821 * C26805 * C81 -
          (((C144 * C212 + C26970 * C466) * C26969 +
            (C144 * C91 + C26970 * C149) * C207) *
               C74 +
           (C482 + C474) * C73) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C1214 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C1215 +
           (((C144 * C1219 + C26970 * C1295) * C207 +
             (C144 * C1369 + C26970 * C1693) * C26969) *
                C73 +
            (C1701 + C1707) * C74) *
               C1216) *
              C26805 * C598 +
          (((C1700 + C1706) * C73 + ((C144 * C1221 + C26970 * C1297) * C207 +
                                     (C144 * C1371 + C26970 * C1695) * C26969) *
                                        C74) *
               C1215 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C1214 -
           (((C144 * C1372 + C26970 * C1696) * C26969 +
             (C144 * C1222 + C26970 * C1298) * C207) *
                C74 +
            (C1707 + C1701) * C73) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26821 * C595 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26821 * C596 +
           ((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
            C1164 * C74) *
               C26821 * C597) *
              C598 +
          ((C1163 * C73 +
            (C516 * C604 + C1155 + C1155 + C26969 * C1144) * C26970 * C74) *
               C26821 * C596 -
           (C544 * C74 + C543 * C73) * C26821 * C595 -
           ((C516 * C605 + C1156 + C1156 + C26969 * C1145) * C26970 * C74 +
            C1164 * C73) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
           C543 * C74) *
              C26821 * C26805 * C79 -
          (C544 * C74 + C543 * C73) * C26821 * C26805 * C80 +
          (C544 * C73 + C545 * C74) * C26821 * C26805 * C81 -
          ((C516 * C91 + C533 + C533 + C26969 * C521) * C26970 * C74 +
           C545 * C73) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C1214 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C1215 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C26970 * C73 +
            C1781 * C74) *
               C1216) *
              C26805 * C598 +
          ((C1780 * C73 +
            (C516 * C1221 + C1772 + C1772 + C26969 * C1761) * C26970 * C74) *
               C1215 -
           (C544 * C74 + C543 * C73) * C1214 -
           ((C516 * C1222 + C1773 + C1773 + C26969 * C1762) * C26970 * C74 +
            C1781 * C73) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                     C104 + C74 * C98) *
                        C26969 * C26970 * C26934 -
                    (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                     C1237 + C1237 + C73 * C1230) *
                        C26969 * C26970 * C26885) *
                       C26805 * C26959 +
                   ((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 +
                     C1241 + C1241 + C74 * C1233) *
                        C26969 * C26970 * C26885 -
                    (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                     C106 + C73 * C98) *
                        C26969 * C26970 * C26934) *
                       C26805 * C26960 +
                   ((C83 * C89 + C107 + C107 + C73 * C99 + C85 * C90 + C108 +
                     C108 + C74 * C100) *
                        C26969 * C26970 * C26934 -
                    (C85 * C2338 + C2342 + C2342 + C74 * C2340 + C83 * C1221 +
                     C2343 + C2343 + C73 * C1233) *
                        C26969 * C26970 * C26885) *
                       C26805 * C1835)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26934 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26885) *
              C26805 * C26959 +
          ((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
               C26885 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26934) *
              C26805 * C26960 +
          ((C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
               C26934 -
           ((C144 * C2339 + C26970 * C2394) * C74 +
            (C144 * C2338 + C26970 * C2393) * C86 + C2401 * C73 + C2400 * C84) *
               C26969 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26934 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26885) *
              C26805 * C26959 +
          ((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
               C26885 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26934) *
              C26805 * C26960 +
          ((C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
               C26934 -
           ((C207 * C2339 + C26969 * C2452) * C74 +
            (C207 * C2338 + C26969 * C2451) * C86 + C2459 * C73 + C2458 * C84) *
               C26970 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26934 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26885) *
              C26805 * C26959 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
            (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
               C26969 * C26885 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26934) *
              C26805 * C26960 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
            (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
               C26969 * C26934 -
           ((C86 * C2393 + C74 * C2509 + C84 * C1297 + C73 * C1445) * C26970 +
            (C86 * C2338 + C74 * C2339 + C84 * C1221 + C73 * C1227) * C144) *
               C26969 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26934 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26885) *
              C26805 * C26959 +
          ((C1518 * C73 + C2567 * C74) * C26969 * C26885 -
           (C334 * C74 + C333 * C73) * C26969 * C26934) *
              C26805 * C26960 +
          ((C334 * C73 + C335 * C74) * C26969 * C26934 -
           ((C309 * C2338 + C2564 + C2564 + C26970 * C2560) * C74 +
            C2567 * C73) *
               C26969 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26934 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26885) *
              C26805 * C26959 +
          (((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26885 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26934) *
              C26805 * C26960 +
          (((C380 + C388) * C73 + (C381 + C389) * C74) * C26934 -
           (((C207 * C2393 + C26969 * C2617) * C26970 +
             (C207 * C2338 + C26969 * C2451) * C144) *
                C74 +
            (C2623 + C2619) * C73) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26934 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26885) *
              C26805 * C26959 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
            (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
               C26970 * C26885 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26934) *
              C26805 * C26960 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
            (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
               C26970 * C26934 -
           ((C86 * C2451 + C74 * C2673 + C84 * C1371 + C73 * C1639) * C26969 +
            (C86 * C2338 + C74 * C2339 + C84 * C1221 + C73 * C1227) * C207) *
               C26970 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26934 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26885) *
              C26805 * C26959 +
          (((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26885 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26934) *
              C26805 * C26960 +
          (((C473 + C481) * C73 + (C474 + C482) * C74) * C26934 -
           (((C144 * C2451 + C26970 * C2724) * C26969 +
             (C144 * C2338 + C26970 * C2393) * C207) *
                C74 +
            (C2730 + C2726) * C73) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26934 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26885) *
              C26805 * C26959 +
          ((C1780 * C73 + C2788 * C74) * C26885 -
           (C544 * C74 + C543 * C73) * C26934) *
              C26805 * C26960 +
          ((C544 * C73 + C545 * C74) * C26934 -
           ((C516 * C2338 + C2784 + C2784 + C26969 * C2780) * C26970 * C74 +
            C2788 * C73) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                    C104 + C74 * C98) *
                       C26969 * C26970 * C26821 * C26805 * C79 -
                   (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                    C106 + C73 * C98) *
                       C26969 * C26970 * C26821 * C26805 * C80 +
                   (C83 * C89 + C107 + C107 + C73 * C99 + C85 * C90 + C108 +
                    C108 + C74 * C100) *
                       C26969 * C26970 * C26821 * C26805 * C81 -
                   (C85 * C91 + C109 + C109 + C74 * C101 + C83 * C90 + C110 +
                    C110 + C73 * C100) *
                       C26969 * C26970 * C26821 * C26805 * C82)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                     C104 + C74 * C98) *
                        C26969 * C26970 * C26821 * C595 -
                    (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 +
                     C620 + C73 * C613) *
                        C26969 * C26970 * C26821 * C596 +
                    (C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 + C622 +
                     C622 + C74 * C615) *
                        C26969 * C26970 * C26821 * C597) *
                       C598 +
                   ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 + C624 +
                     C624 + C74 * C616) *
                        C26969 * C26970 * C26821 * C596 -
                    (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                     C106 + C73 * C98) *
                        C26969 * C26970 * C26821 * C595 -
                    (C85 * C605 + C625 + C625 + C74 * C617 + C83 * C603 + C626 +
                     C626 + C73 * C615) *
                        C26969 * C26970 * C26821 * C597) *
                       C26792)) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C84 +
           (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
              C26969 * C26821 * C26805 * C79 -
          (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
              C26821 * C26805 * C80 +
          (C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
              C26821 * C26805 * C81 -
          ((C144 * C96 + C26970 * C154) * C74 +
           (C144 * C91 + C26970 * C149) * C86 + C173 * C73 + C172 * C84) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26821 * C595 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26821 * C596 +
           ((C144 * C602 + C26970 * C678) * C84 +
            (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
               C26969 * C26821 * C597) *
              C598 +
          ((C698 * C84 + C697 * C73 + (C144 * C604 + C26970 * C680) * C86 +
            (C144 * C610 + C26970 * C686) * C74) *
               C26969 * C26821 * C596 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26821 * C595 -
           ((C144 * C611 + C26970 * C687) * C74 +
            (C144 * C605 + C26970 * C681) * C86 + C700 * C73 + C699 * C84) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C84 +
           (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
              C26970 * C26821 * C26805 * C79 -
          (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
              C26821 * C26805 * C80 +
          (C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
              C26821 * C26805 * C81 -
          ((C207 * C96 + C26969 * C217) * C74 +
           (C207 * C91 + C26969 * C212) * C86 + C236 * C73 + C235 * C84) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26821 * C595 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26821 * C596 +
           ((C207 * C602 + C26969 * C752) * C84 +
            (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
               C26970 * C26821 * C597) *
              C598 +
          ((C772 * C84 + C771 * C73 + (C207 * C604 + C26969 * C754) * C86 +
            (C207 * C610 + C26969 * C760) * C74) *
               C26970 * C26821 * C596 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26821 * C595 -
           ((C207 * C611 + C26969 * C761) * C74 +
            (C207 * C605 + C26969 * C755) * C86 + C774 * C73 + C773 * C84) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
           (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
              C26969 * C26821 * C26805 * C79 -
          ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
           (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
              C26969 * C26821 * C26805 * C80 +
          ((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
           (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
              C26969 * C26821 * C26805 * C81 -
          ((C86 * C149 + C74 * C274 + C84 * C148 + C73 * C273) * C26970 +
           (C86 * C91 + C74 * C96 + C84 * C90 + C73 * C95) * C144) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26821 * C595 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26821 * C596 +
           ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
            (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
               C26969 * C26821 * C597) *
              C598 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
            (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
               C26969 * C26821 * C596 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26821 * C595 -
           ((C86 * C681 + C74 * C829 + C84 * C679 + C73 * C827) * C26970 +
            (C86 * C605 + C74 * C611 + C84 * C603 + C73 * C609) * C144) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
              C26969 * C26821 * C26805 * C79 -
          (C334 * C74 + C333 * C73) * C26969 * C26821 * C26805 * C80 +
          (C334 * C73 + C335 * C74) * C26969 * C26821 * C26805 * C81 -
          ((C309 * C91 + C326 + C326 + C26970 * C314) * C74 + C335 * C73) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26821 * C595 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26821 * C596 +
           ((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
               C26969 * C26821 * C597) *
              C598 +
          ((C901 * C73 + (C309 * C604 + C895 + C895 + C26970 * C884) * C74) *
               C26969 * C26821 * C596 -
           (C334 * C74 + C333 * C73) * C26969 * C26821 * C595 -
           ((C309 * C605 + C896 + C896 + C26970 * C885) * C74 + C902 * C73) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C144 +
            (C207 * C145 + C26969 * C369) * C26970) *
               C73 +
           (C375 + C387) * C74) *
              C26821 * C26805 * C79 -
          ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C26805 * C80 +
          ((C380 + C388) * C73 + (C381 + C389) * C74) * C26821 * C26805 * C81 -
          (((C207 * C149 + C26969 * C373) * C26970 +
            (C207 * C91 + C26969 * C212) * C144) *
               C74 +
           (C389 + C381) * C73) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26821 * C595 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26821 * C596 +
           (((C207 * C602 + C26969 * C752) * C144 +
             (C207 * C678 + C26969 * C954) * C26970) *
                C73 +
            (C962 + C968) * C74) *
               C26821 * C597) *
              C598 +
          (((C961 + C967) * C73 + ((C207 * C604 + C26969 * C754) * C144 +
                                   (C207 * C680 + C26969 * C956) * C26970) *
                                      C74) *
               C26821 * C596 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C595 -
           (((C207 * C681 + C26969 * C957) * C26970 +
             (C207 * C605 + C26969 * C755) * C144) *
                C74 +
            (C968 + C962) * C73) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
           (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
              C26970 * C26821 * C26805 * C79 -
          ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
           (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
              C26970 * C26821 * C26805 * C80 +
          ((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
           (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
              C26970 * C26821 * C26805 * C81 -
          ((C86 * C212 + C74 * C427 + C84 * C211 + C73 * C426) * C26969 +
           (C86 * C91 + C74 * C96 + C84 * C90 + C73 * C95) * C207) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26821 * C595 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26821 * C596 +
           ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
            (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
               C26970 * C26821 * C597) *
              C598 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
            (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
               C26970 * C26821 * C596 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26821 * C595 -
           ((C86 * C755 + C74 * C1023 + C84 * C753 + C73 * C1021) * C26969 +
            (C86 * C605 + C74 * C611 + C84 * C603 + C73 * C609) * C207) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C207 +
            (C144 * C208 + C26970 * C462) * C26969) *
               C73 +
           (C468 + C480) * C74) *
              C26821 * C26805 * C79 -
          ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C26805 * C80 +
          ((C473 + C481) * C73 + (C474 + C482) * C74) * C26821 * C26805 * C81 -
          (((C144 * C212 + C26970 * C466) * C26969 +
            (C144 * C91 + C26970 * C149) * C207) *
               C74 +
           (C482 + C474) * C73) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26821 * C595 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26821 * C596 +
           (((C144 * C602 + C26970 * C678) * C207 +
             (C144 * C752 + C26970 * C1076) * C26969) *
                C73 +
            (C1084 + C1090) * C74) *
               C26821 * C597) *
              C598 +
          (((C1083 + C1089) * C73 + ((C144 * C604 + C26970 * C680) * C207 +
                                     (C144 * C754 + C26970 * C1078) * C26969) *
                                        C74) *
               C26821 * C596 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C595 -
           (((C144 * C755 + C26970 * C1079) * C26969 +
             (C144 * C605 + C26970 * C681) * C207) *
                C74 +
            (C1090 + C1084) * C73) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
           C543 * C74) *
              C26821 * C26805 * C79 -
          (C544 * C74 + C543 * C73) * C26821 * C26805 * C80 +
          (C544 * C73 + C545 * C74) * C26821 * C26805 * C81 -
          ((C516 * C91 + C533 + C533 + C26969 * C521) * C26970 * C74 +
           C545 * C73) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26821 * C595 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26821 * C596 +
           ((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
            C1164 * C74) *
               C26821 * C597) *
              C598 +
          ((C1163 * C73 +
            (C516 * C604 + C1155 + C1155 + C26969 * C1144) * C26970 * C74) *
               C26821 * C596 -
           (C544 * C74 + C543 * C73) * C26821 * C595 -
           ((C516 * C605 + C1156 + C1156 + C26969 * C1145) * C26970 * C74 +
            C1164 * C73) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                     C104 + C74 * C98) *
                        C26969 * C26970 * C26821 * C26961 -
                    (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 +
                     C620 + C73 * C613) *
                        C26969 * C26970 * C26821 * C26962 +
                    (C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 + C622 +
                     C622 + C74 * C615) *
                        C26969 * C26970 * C26821 * C4796) *
                       C26925 +
                   ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 + C624 +
                     C624 + C74 * C616) *
                        C26969 * C26970 * C26821 * C26962 -
                    (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                     C106 + C73 * C98) *
                        C26969 * C26970 * C26821 * C26961 -
                    (C85 * C605 + C625 + C625 + C74 * C617 + C83 * C603 + C626 +
                     C626 + C73 * C615) *
                        C26969 * C26970 * C26821 * C4796) *
                       C26792)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26821 * C26961 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26821 * C26962 +
           ((C144 * C602 + C26970 * C678) * C84 +
            (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
               C26969 * C26821 * C4796) *
              C26925 +
          ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
               C26821 * C26962 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26821 * C26961 -
           ((C144 * C611 + C26970 * C687) * C74 +
            (C144 * C605 + C26970 * C681) * C86 + C700 * C73 + C699 * C84) *
               C26969 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26821 * C26961 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26821 * C26962 +
           ((C207 * C602 + C26969 * C752) * C84 +
            (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
               C26970 * C26821 * C4796) *
              C26925 +
          ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
               C26821 * C26962 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26821 * C26961 -
           ((C207 * C611 + C26969 * C761) * C74 +
            (C207 * C605 + C26969 * C755) * C86 + C774 * C73 + C773 * C84) *
               C26970 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26821 * C26961 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26821 * C26962 +
           ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
            (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
               C26969 * C26821 * C4796) *
              C26925 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
            (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
               C26969 * C26821 * C26962 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26821 * C26961 -
           ((C86 * C681 + C74 * C829 + C84 * C679 + C73 * C827) * C26970 +
            (C86 * C605 + C74 * C611 + C84 * C603 + C73 * C609) * C144) *
               C26969 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26821 * C26961 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26821 * C26962 +
           ((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
               C26969 * C26821 * C4796) *
              C26925 +
          ((C901 * C73 + C2065 * C74) * C26969 * C26821 * C26962 -
           (C334 * C74 + C333 * C73) * C26969 * C26821 * C26961 -
           ((C309 * C605 + C896 + C896 + C26970 * C885) * C74 + C902 * C73) *
               C26969 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26821 * C26961 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26821 * C26962 +
           (((C207 * C602 + C26969 * C752) * C144 +
             (C207 * C678 + C26969 * C954) * C26970) *
                C73 +
            (C962 + C968) * C74) *
               C26821 * C4796) *
              C26925 +
          (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C26821 * C26962 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C26961 -
           (((C207 * C681 + C26969 * C957) * C26970 +
             (C207 * C605 + C26969 * C755) * C144) *
                C74 +
            (C968 + C962) * C73) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26821 * C26961 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26821 * C26962 +
           ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
            (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
               C26970 * C26821 * C4796) *
              C26925 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
            (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
               C26970 * C26821 * C26962 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26821 * C26961 -
           ((C86 * C755 + C74 * C1023 + C84 * C753 + C73 * C1021) * C26969 +
            (C86 * C605 + C74 * C611 + C84 * C603 + C73 * C609) * C207) *
               C26970 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26821 * C26961 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26821 * C26962 +
           (((C144 * C602 + C26970 * C678) * C207 +
             (C144 * C752 + C26970 * C1076) * C26969) *
                C73 +
            (C1084 + C1090) * C74) *
               C26821 * C4796) *
              C26925 +
          (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C26821 * C26962 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C26961 -
           (((C144 * C755 + C26970 * C1079) * C26969 +
             (C144 * C605 + C26970 * C681) * C207) *
                C74 +
            (C1090 + C1084) * C73) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26821 * C26961 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26821 * C26962 +
           ((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
            C1164 * C74) *
               C26821 * C4796) *
              C26925 +
          ((C1163 * C73 + C2286 * C74) * C26821 * C26962 -
           (C544 * C74 + C543 * C73) * C26821 * C26961 -
           ((C516 * C605 + C1156 + C1156 + C26969 * C1145) * C26970 * C74 +
            C1164 * C73) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                     C104 + C74 * C98) *
                        C26969 * C26970 * C26934 -
                    (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                     C1237 + C1237 + C73 * C1230) *
                        C26969 * C26970 * C26885) *
                       C26961 +
                   ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 +
                     C2865 + C2865 + C74 * C2861) *
                        C26969 * C26970 * C26885 -
                    (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 +
                     C620 + C73 * C613) *
                        C26969 * C26970 * C26934) *
                       C26962 +
                   ((C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 + C622 +
                     C622 + C74 * C615) *
                        C26969 * C26970 * C26934 -
                    (C85 * C5843 + C5850 + C5850 + C74 * C5847 + C83 * C5844 +
                     C5851 + C5851 + C73 * C5848) *
                        C26969 * C26970 * C26885) *
                       C4796) *
                  C26786) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26934 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26885) *
              C26961 +
          (((C144 * C2854 + C26970 * C2933) * C84 +
            (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 + C2945 * C74) *
               C26969 * C26885 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26934) *
              C26962 +
          (((C144 * C602 + C26970 * C678) * C84 +
            (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
               C26969 * C26934 -
           ((C144 * C5845 + C26970 * C5903) * C74 +
            (C144 * C5843 + C26970 * C5901) * C86 +
            (C144 * C5846 + C26970 * C5904) * C73 +
            (C144 * C5844 + C26970 * C5902) * C84) *
               C26969 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26934 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26885) *
              C26961 +
          (((C207 * C2854 + C26969 * C3011) * C84 +
            (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 + C3023 * C74) *
               C26970 * C26885 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26934) *
              C26962 +
          (((C207 * C602 + C26969 * C752) * C84 +
            (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
               C26970 * C26934 -
           ((C207 * C5845 + C26969 * C5957) * C74 +
            (C207 * C5843 + C26969 * C5955) * C86 +
            (C207 * C5846 + C26969 * C5958) * C73 +
            (C207 * C5844 + C26969 * C5956) * C84) *
               C26970 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26934 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26885) *
              C26961 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
            (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
               C26969 * C26885 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26934) *
              C26962 +
          (((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
            (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
               C26969 * C26934 -
           ((C86 * C5901 + C74 * C6009 + C84 * C5902 + C73 * C6010) * C26970 +
            (C86 * C5843 + C74 * C5845 + C84 * C5844 + C73 * C5846) * C144) *
               C26969 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26934 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26885) *
              C26961 +
          (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
            C3169 * C74) *
               C26969 * C26885 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26934) *
              C26962 +
          (((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
               C26969 * C26934 -
           ((C309 * C5843 + C6064 + C6064 + C26970 * C6061) * C74 +
            (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C73) *
               C26969 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26934 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26885) *
              C26961 +
          ((((C207 * C2854 + C26969 * C3011) * C144 +
             (C207 * C2933 + C26969 * C3235) * C26970) *
                C73 +
            (C3239 + C3243) * C74) *
               C26885 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26934) *
              C26962 +
          ((((C207 * C602 + C26969 * C752) * C144 +
             (C207 * C678 + C26969 * C954) * C26970) *
                C73 +
            (C962 + C968) * C74) *
               C26934 -
           (((C207 * C5901 + C26969 * C6115) * C26970 +
             (C207 * C5843 + C26969 * C5955) * C144) *
                C74 +
            ((C207 * C5902 + C26969 * C6116) * C26970 +
             (C207 * C5844 + C26969 * C5956) * C144) *
                C73) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26934 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26885) *
              C26961 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
            (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
               C26970 * C26885 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26934) *
              C26962 +
          (((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
            (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
               C26970 * C26934 -
           ((C86 * C5955 + C74 * C6167 + C84 * C5956 + C73 * C6168) * C26969 +
            (C86 * C5843 + C74 * C5845 + C84 * C5844 + C73 * C5846) * C207) *
               C26970 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26934 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26885) *
              C26961 +
          ((((C144 * C2854 + C26970 * C2933) * C207 +
             (C144 * C3011 + C26970 * C3378) * C26969) *
                C73 +
            (C3382 + C3386) * C74) *
               C26885 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26934) *
              C26962 +
          ((((C144 * C602 + C26970 * C678) * C207 +
             (C144 * C752 + C26970 * C1076) * C26969) *
                C73 +
            (C1084 + C1090) * C74) *
               C26934 -
           (((C144 * C5955 + C26970 * C6219) * C26969 +
             (C144 * C5843 + C26970 * C5901) * C207) *
                C74 +
            ((C144 * C5956 + C26970 * C6220) * C26969 +
             (C144 * C5844 + C26970 * C5902) * C207) *
                C73) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26934 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26885) *
              C26961 +
          (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
            C3464 * C74) *
               C26885 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26934) *
              C26962 +
          (((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
            C1164 * C74) *
               C26934 -
           ((C516 * C5843 + C6274 + C6274 + C26969 * C6271) * C26970 * C74 +
            (C516 * C5844 + C6275 + C6275 + C26969 * C6272) * C26970 * C73) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 + C104 +
           C74 * C98) *
              C26969 * C26970 * C26821 * C3953 -
          (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 + C620 +
           C73 * C613) *
              C26969 * C26970 * C26821 * C3954 +
          (C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 + C622 + C622 +
           C74 * C615) *
              C26969 * C26970 * C26821 * C3955 -
          (C85 * C3958 + C3965 + C3965 + C74 * C3962 + C83 * C3959 + C3966 +
           C3966 + C73 * C3963) *
              C26969 * C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C83 * C87 + C103 + C103 + C73 * C97 +
                                C85 * C88 + C104 + C104 + C74 * C98) *
                                   C26969 * C26970 * C26821 * C3514 -
                               (C85 * C600 + C619 + C619 + C74 * C612 +
                                C83 * C601 + C620 + C620 + C73 * C613) *
                                   C26969 * C26970 * C26821 * C26857) *
                                  C3516 +
                              ((C83 * C600 + C623 + C623 + C73 * C612 +
                                C85 * C604 + C624 + C624 + C74 * C616) *
                                   C26969 * C26970 * C26821 * C26857 -
                               (C85 * C89 + C105 + C105 + C74 * C99 +
                                C83 * C88 + C106 + C106 + C73 * C98) *
                                   C26969 * C26970 * C26821 * C3514) *
                                  C3517 +
                              ((C83 * C89 + C107 + C107 + C73 * C99 +
                                C85 * C90 + C108 + C108 + C74 * C100) *
                                   C26969 * C26970 * C26821 * C3514 -
                               (C85 * C1836 + C1840 + C1840 + C74 * C1838 +
                                C83 * C604 + C1841 + C1841 + C73 * C616) *
                                   C26969 * C26970 * C26821 * C26857) *
                                  C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 + C104 +
            C74 * C98) *
               C26969 * C26970 * C1214 -
           (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 + C1237 +
            C1237 + C73 * C1230) *
               C26969 * C26970 * C1215 +
           (C83 * C1219 + C1238 + C1238 + C73 * C1231 + C85 * C1220 + C1239 +
            C1239 + C74 * C1232) *
               C26969 * C26970 * C1216) *
              C3514 +
          ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 + C2865 +
            C2865 + C74 * C2861) *
               C26969 * C26970 * C1215 -
           (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 + C620 +
            C73 * C613) *
               C26969 * C26970 * C1214 -
           (C85 * C4312 + C4319 + C4319 + C74 * C4316 + C83 * C4313 + C4320 +
            C4320 + C73 * C4317) *
               C26969 * C26970 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C84 +
           (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
              C26969 * C26821 * C3953 -
          (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
           (C144 * C601 + C26970 * C677) * C84) *
              C26969 * C26821 * C3954 +
          ((C144 * C602 + C26970 * C678) * C84 +
           (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
              C26969 * C26821 * C3955 -
          ((C144 * C3960 + C26970 * C4002) * C74 +
           (C144 * C3958 + C26970 * C4000) * C86 +
           (C144 * C3961 + C26970 * C4003) * C73 +
           (C144 * C3959 + C26970 * C4001) * C84) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26821 * C3514 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26821 * C26857) *
              C3516 +
          ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
               C26821 * C26857 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26821 * C3514) *
              C3517 +
          ((C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
               C26821 * C3514 -
           ((C144 * C1837 + C26970 * C1892) * C74 +
            (C144 * C1836 + C26970 * C1891) * C86 + C1899 * C73 + C1898 * C84) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C1214 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C1215 +
           ((C144 * C1219 + C26970 * C1295) * C84 +
            (C144 * C1225 + C26970 * C1301) * C73 + C1316 * C86 + C1317 * C74) *
               C26969 * C1216) *
              C3514 +
          (((C144 * C2854 + C26970 * C2933) * C84 +
            (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 + C2945 * C74) *
               C26969 * C1215 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C1214 -
           ((C144 * C4314 + C26970 * C4372) * C74 +
            (C144 * C4312 + C26970 * C4370) * C86 +
            (C144 * C4315 + C26970 * C4373) * C73 +
            (C144 * C4313 + C26970 * C4371) * C84) *
               C26969 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C84 +
           (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
              C26970 * C26821 * C3953 -
          (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
           (C207 * C601 + C26969 * C751) * C84) *
              C26970 * C26821 * C3954 +
          ((C207 * C602 + C26969 * C752) * C84 +
           (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
              C26970 * C26821 * C3955 -
          ((C207 * C3960 + C26969 * C4040) * C74 +
           (C207 * C3958 + C26969 * C4038) * C86 +
           (C207 * C3961 + C26969 * C4041) * C73 +
           (C207 * C3959 + C26969 * C4039) * C84) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26821 * C3514 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26821 * C26857) *
              C3516 +
          ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
               C26821 * C26857 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26821 * C3514) *
              C3517 +
          ((C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
               C26821 * C3514 -
           ((C207 * C1837 + C26969 * C1950) * C74 +
            (C207 * C1836 + C26969 * C1949) * C86 + C1957 * C73 + C1956 * C84) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C1214 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C1215 +
           ((C207 * C1219 + C26969 * C1369) * C84 +
            (C207 * C1225 + C26969 * C1375) * C73 + C1390 * C86 + C1391 * C74) *
               C26970 * C1216) *
              C3514 +
          (((C207 * C2854 + C26969 * C3011) * C84 +
            (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 + C3023 * C74) *
               C26970 * C1215 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C1214 -
           ((C207 * C4314 + C26969 * C4426) * C74 +
            (C207 * C4312 + C26969 * C4424) * C86 +
            (C207 * C4315 + C26969 * C4427) * C73 +
            (C207 * C4313 + C26969 * C4425) * C84) *
               C26970 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
           (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
              C26969 * C26821 * C3953 -
          ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
           (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
              C26969 * C26821 * C3954 +
          ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
           (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
              C26969 * C26821 * C3955 -
          ((C86 * C4000 + C74 * C4076 + C84 * C4001 + C73 * C4077) * C26970 +
           (C86 * C3958 + C74 * C3960 + C84 * C3959 + C73 * C3961) * C144) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26821 * C3514 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26821 * C26857) *
              C3516 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
            (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
               C26969 * C26821 * C26857 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26821 * C3514) *
              C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
            (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
               C26969 * C26821 * C3514 -
           ((C86 * C1891 + C74 * C2007 + C84 * C680 + C73 * C828) * C26970 +
            (C86 * C1836 + C74 * C1837 + C84 * C604 + C73 * C610) * C144) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C1214 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C1215 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C144 +
            (C84 * C1295 + C73 * C1443 + C86 * C1296 + C74 * C1444) * C26970) *
               C26969 * C1216) *
              C3514 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
            (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
               C26969 * C1215 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C1214 -
           ((C86 * C4370 + C74 * C4478 + C84 * C4371 + C73 * C4479) * C26970 +
            (C86 * C4312 + C74 * C4314 + C84 * C4313 + C73 * C4315) * C144) *
               C26969 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
              C26969 * C26821 * C3953 -
          (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
              C26969 * C26821 * C3954 +
          ((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
              C26969 * C26821 * C3955 -
          ((C309 * C3958 + C4115 + C4115 + C26970 * C4112) * C74 +
           (C309 * C3959 + C4116 + C4116 + C26970 * C4113) * C73) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26821 * C3514 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26821 * C26857) *
              C3516 +
          ((C901 * C73 + C2065 * C74) * C26969 * C26821 * C26857 -
           (C334 * C74 + C333 * C73) * C26969 * C26821 * C3514) *
              C3517 +
          ((C334 * C73 + C335 * C74) * C26969 * C26821 * C3514 -
           ((C309 * C1836 + C2062 + C2062 + C26970 * C2058) * C74 +
            C2065 * C73) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C1214 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C1215 +
           ((C309 * C1219 + C1508 + C1508 + C26970 * C1499) * C73 +
            C1519 * C74) *
               C26969 * C1216) *
              C3514 +
          (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
            C3169 * C74) *
               C26969 * C1215 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C1214 -
           ((C309 * C4312 + C4533 + C4533 + C26970 * C4530) * C74 +
            (C309 * C4313 + C4534 + C4534 + C26970 * C4531) * C73) *
               C26969 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C144 +
            (C207 * C145 + C26969 * C369) * C26970) *
               C73 +
           (C375 + C387) * C74) *
              C26821 * C3953 -
          ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                  (C207 * C601 + C26969 * C751) * C144) *
                                     C73) *
              C26821 * C3954 +
          (((C207 * C602 + C26969 * C752) * C144 +
            (C207 * C678 + C26969 * C954) * C26970) *
               C73 +
           (C962 + C968) * C74) *
              C26821 * C3955 -
          (((C207 * C4000 + C26969 * C4150) * C26970 +
            (C207 * C3958 + C26969 * C4038) * C144) *
               C74 +
           ((C207 * C4001 + C26969 * C4151) * C26970 +
            (C207 * C3959 + C26969 * C4039) * C144) *
               C73) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26821 * C3514 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26821 * C26857) *
              C3516 +
          (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C26821 * C26857 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C3514) *
              C3517 +
          (((C380 + C388) * C73 + (C381 + C389) * C74) * C26821 * C3514 -
           (((C207 * C1891 + C26969 * C2115) * C26970 +
             (C207 * C1836 + C26969 * C1949) * C144) *
                C74 +
            (C2121 + C2117) * C73) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C1214 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C1215 +
           (((C207 * C1219 + C26969 * C1369) * C144 +
             (C207 * C1295 + C26969 * C1571) * C26970) *
                C73 +
            (C1579 + C1585) * C74) *
               C1216) *
              C3514 +
          ((((C207 * C2854 + C26969 * C3011) * C144 +
             (C207 * C2933 + C26969 * C3235) * C26970) *
                C73 +
            (C3239 + C3243) * C74) *
               C1215 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C1214 -
           (((C207 * C4370 + C26969 * C4584) * C26970 +
             (C207 * C4312 + C26969 * C4424) * C144) *
                C74 +
            ((C207 * C4371 + C26969 * C4585) * C26970 +
             (C207 * C4313 + C26969 * C4425) * C144) *
                C73) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
           (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
              C26970 * C26821 * C3953 -
          ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
           (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
              C26970 * C26821 * C3954 +
          ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
           (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
              C26970 * C26821 * C3955 -
          ((C86 * C4038 + C74 * C4186 + C84 * C4039 + C73 * C4187) * C26969 +
           (C86 * C3958 + C74 * C3960 + C84 * C3959 + C73 * C3961) * C207) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26821 * C3514 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26821 * C26857) *
              C3516 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
            (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
               C26970 * C26821 * C26857 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26821 * C3514) *
              C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
            (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
               C26970 * C26821 * C3514 -
           ((C86 * C1949 + C74 * C2171 + C84 * C754 + C73 * C1022) * C26969 +
            (C86 * C1836 + C74 * C1837 + C84 * C604 + C73 * C610) * C207) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C1214 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C1215 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C207 +
            (C84 * C1369 + C73 * C1637 + C86 * C1370 + C74 * C1638) * C26969) *
               C26970 * C1216) *
              C3514 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
            (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
               C26970 * C1215 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C1214 -
           ((C86 * C4424 + C74 * C4636 + C84 * C4425 + C73 * C4637) * C26969 +
            (C86 * C4312 + C74 * C4314 + C84 * C4313 + C73 * C4315) * C207) *
               C26970 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C207 +
            (C144 * C208 + C26970 * C462) * C26969) *
               C73 +
           (C468 + C480) * C74) *
              C26821 * C3953 -
          ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                    (C144 * C601 + C26970 * C677) * C207) *
                                       C73) *
              C26821 * C3954 +
          (((C144 * C602 + C26970 * C678) * C207 +
            (C144 * C752 + C26970 * C1076) * C26969) *
               C73 +
           (C1084 + C1090) * C74) *
              C26821 * C3955 -
          (((C144 * C4038 + C26970 * C4222) * C26969 +
            (C144 * C3958 + C26970 * C4000) * C207) *
               C74 +
           ((C144 * C4039 + C26970 * C4223) * C26969 +
            (C144 * C3959 + C26970 * C4001) * C207) *
               C73) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26821 * C3514 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26821 * C26857) *
              C3516 +
          (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C26821 * C26857 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C3514) *
              C3517 +
          (((C473 + C481) * C73 + (C474 + C482) * C74) * C26821 * C3514 -
           (((C144 * C1949 + C26970 * C2222) * C26969 +
             (C144 * C1836 + C26970 * C1891) * C207) *
                C74 +
            (C2228 + C2224) * C73) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C1214 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C1215 +
           (((C144 * C1219 + C26970 * C1295) * C207 +
             (C144 * C1369 + C26970 * C1693) * C26969) *
                C73 +
            (C1701 + C1707) * C74) *
               C1216) *
              C3514 +
          ((((C144 * C2854 + C26970 * C2933) * C207 +
             (C144 * C3011 + C26970 * C3378) * C26969) *
                C73 +
            (C3382 + C3386) * C74) *
               C1215 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C1214 -
           (((C144 * C4424 + C26970 * C4688) * C26969 +
             (C144 * C4312 + C26970 * C4370) * C207) *
                C74 +
            ((C144 * C4425 + C26970 * C4689) * C26969 +
             (C144 * C4313 + C26970 * C4371) * C207) *
                C73) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
           C543 * C74) *
              C26821 * C3953 -
          (C1163 * C74 +
           (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
              C26821 * C3954 +
          ((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
           C1164 * C74) *
              C26821 * C3955 -
          ((C516 * C3958 + C4261 + C4261 + C26969 * C4258) * C26970 * C74 +
           (C516 * C3959 + C4262 + C4262 + C26969 * C4259) * C26970 * C73) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26821 * C3514 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26821 * C26857) *
              C3516 +
          ((C1163 * C73 + C2286 * C74) * C26821 * C26857 -
           (C544 * C74 + C543 * C73) * C26821 * C3514) *
              C3517 +
          ((C544 * C73 + C545 * C74) * C26821 * C3514 -
           ((C516 * C1836 + C2282 + C2282 + C26969 * C2278) * C26970 * C74 +
            C2286 * C73) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C1214 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C1215 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C26970 * C73 +
            C1781 * C74) *
               C1216) *
              C3514 +
          (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
            C3464 * C74) *
               C1215 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C1214 -
           ((C516 * C4312 + C4743 + C4743 + C26969 * C4740) * C26970 * C74 +
            (C516 * C4313 + C4744 + C4744 + C26969 * C4741) * C26970 * C73) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                      C104 + C74 * C98) *
                         C26969 * C26970 * C26934 -
                     (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                      C1237 + C1237 + C73 * C1230) *
                         C26969 * C26970 * C26885) *
                        C3514 +
                    ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 +
                      C2865 + C2865 + C74 * C2861) *
                         C26969 * C26970 * C26885 -
                     (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 +
                      C620 + C620 + C73 * C613) *
                         C26969 * C26970 * C26934) *
                        C26857) *
                       C26925 +
                   (((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 +
                      C1241 + C1241 + C74 * C1233) *
                         C26969 * C26970 * C26885 -
                     (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                      C106 + C73 * C98) *
                         C26969 * C26970 * C26934) *
                        C3514 +
                    ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 +
                      C624 + C624 + C74 * C616) *
                         C26969 * C26970 * C26934 -
                     (C85 * C2856 + C2866 + C2866 + C74 * C2862 + C83 * C2855 +
                      C2867 + C2867 + C73 * C2861) *
                         C26969 * C26970 * C26885) *
                        C26857) *
                       C26792)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C84 +
             (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
                C26969 * C26934 -
            (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
             (C144 * C1218 + C26970 * C1294) * C84) *
                C26969 * C26885) *
               C3514 +
           (((C144 * C2854 + C26970 * C2933) * C84 +
             (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 +
             C2945 * C74) *
                C26969 * C26885 -
            (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
             (C144 * C601 + C26970 * C677) * C84) *
                C26969 * C26934) *
               C26857) *
              C26925 +
          (((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
                C26885 -
            (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
                C26934) *
               C3514 +
           ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
                C26934 -
            ((C144 * C2859 + C26970 * C2938) * C74 +
             (C144 * C2856 + C26970 * C2935) * C86 + C2945 * C73 +
             C2944 * C84) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C84 +
             (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
                C26970 * C26934 -
            (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
             (C207 * C1218 + C26969 * C1368) * C84) *
                C26970 * C26885) *
               C3514 +
           (((C207 * C2854 + C26969 * C3011) * C84 +
             (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 +
             C3023 * C74) *
                C26970 * C26885 -
            (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
             (C207 * C601 + C26969 * C751) * C84) *
                C26970 * C26934) *
               C26857) *
              C26925 +
          (((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
                C26885 -
            (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
                C26934) *
               C3514 +
           ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
                C26934 -
            ((C207 * C2859 + C26969 * C3016) * C74 +
             (C207 * C2856 + C26969 * C3013) * C86 + C3023 * C73 +
             C3022 * C84) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
             (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
                C26969 * C26934 -
            ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
             (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
                C26969 * C26885) *
               C3514 +
           (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
             (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
                C26969 * C26885 -
            ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
             (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
                C26969 * C26934) *
               C26857) *
              C26925 +
          ((((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
             (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
                C26969 * C26885 -
            ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
             (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
                C26969 * C26934) *
               C3514 +
           (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
             (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
                C26969 * C26934 -
            ((C86 * C2935 + C74 * C3091 + C84 * C2934 + C73 * C3090) * C26970 +
             (C86 * C2856 + C74 * C2859 + C84 * C2855 + C73 * C2858) * C144) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
                C26969 * C26934 -
            (C1518 * C74 +
             (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
                C26969 * C26885) *
               C3514 +
           (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
             C3169 * C74) *
                C26969 * C26885 -
            (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
                C26969 * C26934) *
               C26857) *
              C26925 +
          (((C1518 * C73 + C2567 * C74) * C26969 * C26885 -
            (C334 * C74 + C333 * C73) * C26969 * C26934) *
               C3514 +
           ((C901 * C73 + C2065 * C74) * C26969 * C26934 -
            ((C309 * C2856 + C3166 + C3166 + C26970 * C3160) * C74 +
             C3169 * C73) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C207 * C87 + C26969 * C208) * C144 +
              (C207 * C145 + C26969 * C369) * C26970) *
                 C73 +
             (C375 + C387) * C74) *
                C26934 -
            ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                      (C207 * C1218 + C26969 * C1368) * C144) *
                                         C73) *
                C26885) *
               C3514 +
           ((((C207 * C2854 + C26969 * C3011) * C144 +
              (C207 * C2933 + C26969 * C3235) * C26970) *
                 C73 +
             (C3239 + C3243) * C74) *
                C26885 -
            ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                    (C207 * C601 + C26969 * C751) * C144) *
                                       C73) *
                C26934) *
               C26857) *
              C26925 +
          ((((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26885 -
            ((C388 + C380) * C74 + (C387 + C375) * C73) * C26934) *
               C3514 +
           (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C26934 -
            (((C207 * C2935 + C26969 * C3237) * C26970 +
              (C207 * C2856 + C26969 * C3013) * C144) *
                 C74 +
             (C3243 + C3239) * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
             (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
                C26970 * C26934 -
            ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
             (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
                C26970 * C26885) *
               C3514 +
           (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
             (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
                C26970 * C26885 -
            ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
             (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
                C26970 * C26934) *
               C26857) *
              C26925 +
          ((((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
             (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
                C26970 * C26885 -
            ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
             (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
                C26970 * C26934) *
               C3514 +
           (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
             (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
                C26970 * C26934 -
            ((C86 * C3013 + C74 * C3311 + C84 * C3012 + C73 * C3310) * C26969 +
             (C86 * C2856 + C74 * C2859 + C84 * C2855 + C73 * C2858) * C207) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C144 * C87 + C26970 * C145) * C207 +
              (C144 * C208 + C26970 * C462) * C26969) *
                 C73 +
             (C468 + C480) * C74) *
                C26934 -
            ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                      (C144 * C1218 + C26970 * C1294) * C207) *
                                         C73) *
                C26885) *
               C3514 +
           ((((C144 * C2854 + C26970 * C2933) * C207 +
              (C144 * C3011 + C26970 * C3378) * C26969) *
                 C73 +
             (C3382 + C3386) * C74) *
                C26885 -
            ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                      (C144 * C601 + C26970 * C677) * C207) *
                                         C73) *
                C26934) *
               C26857) *
              C26925 +
          ((((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26885 -
            ((C481 + C473) * C74 + (C480 + C468) * C73) * C26934) *
               C3514 +
           (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C26934 -
            (((C144 * C3013 + C26970 * C3380) * C26969 +
              (C144 * C2856 + C26970 * C2935) * C207) *
                 C74 +
             (C3386 + C3382) * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
             C543 * C74) *
                C26934 -
            (C1780 * C74 +
             (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
                C26885) *
               C3514 +
           (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
             C3464 * C74) *
                C26885 -
            (C1163 * C74 +
             (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
                C26934) *
               C26857) *
              C26925 +
          (((C1780 * C73 + C2788 * C74) * C26885 -
            (C544 * C74 + C543 * C73) * C26934) *
               C3514 +
           ((C1163 * C73 + C2286 * C74) * C26934 -
            ((C516 * C2856 + C3460 + C3460 + C26969 * C3454) * C26970 * C74 +
             C3464 * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                     C104 + C74 * C98) *
                        C26969 * C26970 * C26821 * C3514 -
                    (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 +
                     C620 + C73 * C613) *
                        C26969 * C26970 * C26821 * C26857) *
                       C3516 +
                   ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 + C624 +
                     C624 + C74 * C616) *
                        C26969 * C26970 * C26821 * C26857 -
                    (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                     C106 + C73 * C98) *
                        C26969 * C26970 * C26821 * C3514) *
                       C3517 +
                   ((C83 * C89 + C107 + C107 + C73 * C99 + C85 * C90 + C108 +
                     C108 + C74 * C100) *
                        C26969 * C26970 * C26821 * C3514 -
                    (C85 * C1836 + C1840 + C1840 + C74 * C1838 + C83 * C604 +
                     C1841 + C1841 + C73 * C616) *
                        C26969 * C26970 * C26821 * C26857) *
                       C3518)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                    C104 + C74 * C98) *
                       C26969 * C26970 * C26821 * C3953 -
                   (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 +
                    C620 + C73 * C613) *
                       C26969 * C26970 * C26821 * C3954 +
                   (C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 + C622 +
                    C622 + C74 * C615) *
                       C26969 * C26970 * C26821 * C3955 -
                   (C85 * C3958 + C3965 + C3965 + C74 * C3962 + C83 * C3959 +
                    C3966 + C3966 + C73 * C3963) *
                       C26969 * C26970 * C26821 * C3956) *
                  C26786) /
                     (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26821 * C3514 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26821 * C26857) *
              C3516 +
          ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
               C26821 * C26857 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26821 * C3514) *
              C3517 +
          ((C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
               C26821 * C3514 -
           ((C144 * C1837 + C26970 * C1892) * C74 +
            (C144 * C1836 + C26970 * C1891) * C86 + C1899 * C73 + C1898 * C84) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C84 +
           (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
              C26969 * C26821 * C3953 -
          (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
           (C144 * C601 + C26970 * C677) * C84) *
              C26969 * C26821 * C3954 +
          ((C144 * C602 + C26970 * C678) * C84 +
           (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
              C26969 * C26821 * C3955 -
          ((C144 * C3960 + C26970 * C4002) * C74 +
           (C144 * C3958 + C26970 * C4000) * C86 +
           (C144 * C3961 + C26970 * C4003) * C73 +
           (C144 * C3959 + C26970 * C4001) * C84) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26821 * C3514 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26821 * C26857) *
              C3516 +
          ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
               C26821 * C26857 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26821 * C3514) *
              C3517 +
          ((C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
               C26821 * C3514 -
           ((C207 * C1837 + C26969 * C1950) * C74 +
            (C207 * C1836 + C26969 * C1949) * C86 + C1957 * C73 + C1956 * C84) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C84 +
           (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
              C26970 * C26821 * C3953 -
          (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
           (C207 * C601 + C26969 * C751) * C84) *
              C26970 * C26821 * C3954 +
          ((C207 * C602 + C26969 * C752) * C84 +
           (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
              C26970 * C26821 * C3955 -
          ((C207 * C3960 + C26969 * C4040) * C74 +
           (C207 * C3958 + C26969 * C4038) * C86 +
           (C207 * C3961 + C26969 * C4041) * C73 +
           (C207 * C3959 + C26969 * C4039) * C84) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26821 * C3514 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26821 * C26857) *
              C3516 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
            (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
               C26969 * C26821 * C26857 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26821 * C3514) *
              C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
            (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
               C26969 * C26821 * C3514 -
           ((C86 * C1891 + C74 * C2007 + C84 * C680 + C73 * C828) * C26970 +
            (C86 * C1836 + C74 * C1837 + C84 * C604 + C73 * C610) * C144) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
           (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
              C26969 * C26821 * C3953 -
          ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
           (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
              C26969 * C26821 * C3954 +
          ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
           (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
              C26969 * C26821 * C3955 -
          ((C86 * C4000 + C74 * C4076 + C84 * C4001 + C73 * C4077) * C26970 +
           (C86 * C3958 + C74 * C3960 + C84 * C3959 + C73 * C3961) * C144) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26821 * C3514 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26821 * C26857) *
              C3516 +
          ((C901 * C73 + C2065 * C74) * C26969 * C26821 * C26857 -
           (C334 * C74 + C333 * C73) * C26969 * C26821 * C3514) *
              C3517 +
          ((C334 * C73 + C335 * C74) * C26969 * C26821 * C3514 -
           ((C309 * C1836 + C2062 + C2062 + C26970 * C2058) * C74 +
            C2065 * C73) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
              C26969 * C26821 * C3953 -
          (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
              C26969 * C26821 * C3954 +
          ((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
              C26969 * C26821 * C3955 -
          ((C309 * C3958 + C4115 + C4115 + C26970 * C4112) * C74 +
           (C309 * C3959 + C4116 + C4116 + C26970 * C4113) * C73) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26821 * C3514 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26821 * C26857) *
              C3516 +
          (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C26821 * C26857 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26821 * C3514) *
              C3517 +
          (((C380 + C388) * C73 + (C381 + C389) * C74) * C26821 * C3514 -
           (((C207 * C1891 + C26969 * C2115) * C26970 +
             (C207 * C1836 + C26969 * C1949) * C144) *
                C74 +
            (C2121 + C2117) * C73) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C144 +
            (C207 * C145 + C26969 * C369) * C26970) *
               C73 +
           (C375 + C387) * C74) *
              C26821 * C3953 -
          ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                  (C207 * C601 + C26969 * C751) * C144) *
                                     C73) *
              C26821 * C3954 +
          (((C207 * C602 + C26969 * C752) * C144 +
            (C207 * C678 + C26969 * C954) * C26970) *
               C73 +
           (C962 + C968) * C74) *
              C26821 * C3955 -
          (((C207 * C4000 + C26969 * C4150) * C26970 +
            (C207 * C3958 + C26969 * C4038) * C144) *
               C74 +
           ((C207 * C4001 + C26969 * C4151) * C26970 +
            (C207 * C3959 + C26969 * C4039) * C144) *
               C73) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26821 * C3514 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26821 * C26857) *
              C3516 +
          (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
            (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
               C26970 * C26821 * C26857 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26821 * C3514) *
              C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
            (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
               C26970 * C26821 * C3514 -
           ((C86 * C1949 + C74 * C2171 + C84 * C754 + C73 * C1022) * C26969 +
            (C86 * C1836 + C74 * C1837 + C84 * C604 + C73 * C610) * C207) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
           (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
              C26970 * C26821 * C3953 -
          ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
           (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
              C26970 * C26821 * C3954 +
          ((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
           (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
              C26970 * C26821 * C3955 -
          ((C86 * C4038 + C74 * C4186 + C84 * C4039 + C73 * C4187) * C26969 +
           (C86 * C3958 + C74 * C3960 + C84 * C3959 + C73 * C3961) * C207) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26821 * C3514 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26821 * C26857) *
              C3516 +
          (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C26821 * C26857 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26821 * C3514) *
              C3517 +
          (((C473 + C481) * C73 + (C474 + C482) * C74) * C26821 * C3514 -
           (((C144 * C1949 + C26970 * C2222) * C26969 +
             (C144 * C1836 + C26970 * C1891) * C207) *
                C74 +
            (C2228 + C2224) * C73) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C207 +
            (C144 * C208 + C26970 * C462) * C26969) *
               C73 +
           (C468 + C480) * C74) *
              C26821 * C3953 -
          ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                    (C144 * C601 + C26970 * C677) * C207) *
                                       C73) *
              C26821 * C3954 +
          (((C144 * C602 + C26970 * C678) * C207 +
            (C144 * C752 + C26970 * C1076) * C26969) *
               C73 +
           (C1084 + C1090) * C74) *
              C26821 * C3955 -
          (((C144 * C4038 + C26970 * C4222) * C26969 +
            (C144 * C3958 + C26970 * C4000) * C207) *
               C74 +
           ((C144 * C4039 + C26970 * C4223) * C26969 +
            (C144 * C3959 + C26970 * C4001) * C207) *
               C73) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26821 * C3514 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26821 * C26857) *
              C3516 +
          ((C1163 * C73 + C2286 * C74) * C26821 * C26857 -
           (C544 * C74 + C543 * C73) * C26821 * C3514) *
              C3517 +
          ((C544 * C73 + C545 * C74) * C26821 * C3514 -
           ((C516 * C1836 + C2282 + C2282 + C26969 * C2278) * C26970 * C74 +
            C2286 * C73) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
           C543 * C74) *
              C26821 * C3953 -
          (C1163 * C74 +
           (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
              C26821 * C3954 +
          ((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
           C1164 * C74) *
              C26821 * C3955 -
          ((C516 * C3958 + C4261 + C4261 + C26969 * C4258) * C26970 * C74 +
           (C516 * C3959 + C4262 + C4262 + C26969 * C4259) * C26970 * C73) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                       C104 + C74 * C98) *
                          C26969 * C26970 * C6325 -
                      (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                       C1237 + C1237 + C73 * C1230) *
                          C26969 * C26970 * C26885) *
                         C26933 +
                     ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 +
                       C2865 + C2865 + C74 * C2861) *
                          C26969 * C26970 * C26885 -
                      (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 +
                       C620 + C620 + C73 * C613) *
                          C26969 * C26970 * C6325) *
                         C26857) *
                        C26925 +
                    (((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 +
                       C1241 + C1241 + C74 * C1233) *
                          C26969 * C26970 * C26885 -
                      (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                       C106 + C73 * C98) *
                          C26969 * C26970 * C6325) *
                         C26933 +
                     ((C83 * C600 + C623 + C623 + C73 * C612 + C85 * C604 +
                       C624 + C624 + C74 * C616) *
                          C26969 * C26970 * C6325 -
                      (C85 * C2856 + C2866 + C2866 + C74 * C2862 + C83 * C2855 +
                       C2867 + C2867 + C73 * C2861) *
                          C26969 * C26970 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C84 +
             (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
                C26969 * C6325 -
            (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
             (C144 * C1218 + C26970 * C1294) * C84) *
                C26969 * C26885) *
               C26933 +
           (((C144 * C2854 + C26970 * C2933) * C84 +
             (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 +
             C2945 * C74) *
                C26969 * C26885 -
            (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
             (C144 * C601 + C26970 * C677) * C84) *
                C26969 * C6325) *
               C26857) *
              C26925 +
          (((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
                C26885 -
            (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
                C6325) *
               C26933 +
           ((C698 * C84 + C697 * C73 + C1898 * C86 + C1899 * C74) * C26969 *
                C6325 -
            ((C144 * C2859 + C26970 * C2938) * C74 +
             (C144 * C2856 + C26970 * C2935) * C86 + C2945 * C73 +
             C2944 * C84) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C84 +
             (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
                C26970 * C6325 -
            (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
             (C207 * C1218 + C26969 * C1368) * C84) *
                C26970 * C26885) *
               C26933 +
           (((C207 * C2854 + C26969 * C3011) * C84 +
             (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 +
             C3023 * C74) *
                C26970 * C26885 -
            (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
             (C207 * C601 + C26969 * C751) * C84) *
                C26970 * C6325) *
               C26857) *
              C26925 +
          (((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
                C26885 -
            (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
                C6325) *
               C26933 +
           ((C772 * C84 + C771 * C73 + C1956 * C86 + C1957 * C74) * C26970 *
                C6325 -
            ((C207 * C2859 + C26969 * C3016) * C74 +
             (C207 * C2856 + C26969 * C3013) * C86 + C3023 * C73 +
             C3022 * C84) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
             (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
                C26969 * C6325 -
            ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
             (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
                C26969 * C26885) *
               C26933 +
           (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
             (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
                C26969 * C26885 -
            ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
             (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
                C26969 * C6325) *
               C26857) *
              C26925 +
          ((((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
             (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
                C26969 * C26885 -
            ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
             (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
                C26969 * C6325) *
               C26933 +
           (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C144 +
             (C84 * C676 + C73 * C824 + C86 * C680 + C74 * C828) * C26970) *
                C26969 * C6325 -
            ((C86 * C2935 + C74 * C3091 + C84 * C2934 + C73 * C3090) * C26970 +
             (C86 * C2856 + C74 * C2859 + C84 * C2855 + C73 * C2858) * C144) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
                C26969 * C6325 -
            (C1518 * C74 +
             (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
                C26969 * C26885) *
               C26933 +
           (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
             C3169 * C74) *
                C26969 * C26885 -
            (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
                C26969 * C6325) *
               C26857) *
              C26925 +
          (((C1518 * C73 + C2567 * C74) * C26969 * C26885 -
            (C334 * C74 + C333 * C73) * C26969 * C6325) *
               C26933 +
           ((C901 * C73 + C2065 * C74) * C26969 * C6325 -
            ((C309 * C2856 + C3166 + C3166 + C26970 * C3160) * C74 +
             C3169 * C73) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C207 * C87 + C26969 * C208) * C144 +
              (C207 * C145 + C26969 * C369) * C26970) *
                 C73 +
             (C375 + C387) * C74) *
                C6325 -
            ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                      (C207 * C1218 + C26969 * C1368) * C144) *
                                         C73) *
                C26885) *
               C26933 +
           ((((C207 * C2854 + C26969 * C3011) * C144 +
              (C207 * C2933 + C26969 * C3235) * C26970) *
                 C73 +
             (C3239 + C3243) * C74) *
                C26885 -
            ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                    (C207 * C601 + C26969 * C751) * C144) *
                                       C73) *
                C6325) *
               C26857) *
              C26925 +
          ((((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26885 -
            ((C388 + C380) * C74 + (C387 + C375) * C73) * C6325) *
               C26933 +
           (((C961 + C967) * C73 + (C2117 + C2121) * C74) * C6325 -
            (((C207 * C2935 + C26969 * C3237) * C26970 +
              (C207 * C2856 + C26969 * C3013) * C144) *
                 C74 +
             (C3243 + C3239) * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
             (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
                C26970 * C6325 -
            ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
             (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
                C26970 * C26885) *
               C26933 +
           (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
             (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
                C26970 * C26885 -
            ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
             (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
                C26970 * C6325) *
               C26857) *
              C26925 +
          ((((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
             (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
                C26970 * C26885 -
            ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
             (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
                C26970 * C6325) *
               C26933 +
           (((C84 * C600 + C73 * C606 + C86 * C604 + C74 * C610) * C207 +
             (C84 * C750 + C73 * C1018 + C86 * C754 + C74 * C1022) * C26969) *
                C26970 * C6325 -
            ((C86 * C3013 + C74 * C3311 + C84 * C3012 + C73 * C3310) * C26969 +
             (C86 * C2856 + C74 * C2859 + C84 * C2855 + C73 * C2858) * C207) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C144 * C87 + C26970 * C145) * C207 +
              (C144 * C208 + C26970 * C462) * C26969) *
                 C73 +
             (C468 + C480) * C74) *
                C6325 -
            ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                      (C144 * C1218 + C26970 * C1294) * C207) *
                                         C73) *
                C26885) *
               C26933 +
           ((((C144 * C2854 + C26970 * C2933) * C207 +
              (C144 * C3011 + C26970 * C3378) * C26969) *
                 C73 +
             (C3382 + C3386) * C74) *
                C26885 -
            ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                      (C144 * C601 + C26970 * C677) * C207) *
                                         C73) *
                C6325) *
               C26857) *
              C26925 +
          ((((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26885 -
            ((C481 + C473) * C74 + (C480 + C468) * C73) * C6325) *
               C26933 +
           (((C1083 + C1089) * C73 + (C2224 + C2228) * C74) * C6325 -
            (((C144 * C3013 + C26970 * C3380) * C26969 +
              (C144 * C2856 + C26970 * C2935) * C207) *
                 C74 +
             (C3386 + C3382) * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
             C543 * C74) *
                C6325 -
            (C1780 * C74 +
             (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
                C26885) *
               C26933 +
           (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
             C3464 * C74) *
                C26885 -
            (C1163 * C74 +
             (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
                C6325) *
               C26857) *
              C26925 +
          (((C1780 * C73 + C2788 * C74) * C26885 -
            (C544 * C74 + C543 * C73) * C6325) *
               C26933 +
           ((C1163 * C73 + C2286 * C74) * C6325 -
            ((C516 * C2856 + C3460 + C3460 + C26969 * C3454) * C26970 * C74 +
             C3464 * C73) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                      C104 + C74 * C98) *
                         C26969 * C26970 * C26963 -
                     (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                      C1237 + C1237 + C73 * C1230) *
                         C26969 * C26970 * C26964 +
                     (C83 * C1219 + C1238 + C1238 + C73 * C1231 + C85 * C1220 +
                      C1239 + C1239 + C74 * C1232) *
                         C26969 * C26970 * C8165) *
                        C26933 +
                    ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 +
                      C2865 + C2865 + C74 * C2861) *
                         C26969 * C26970 * C26964 -
                     (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 +
                      C620 + C620 + C73 * C613) *
                         C26969 * C26970 * C26963 -
                     (C85 * C4312 + C4319 + C4319 + C74 * C4316 + C83 * C4313 +
                      C4320 + C4320 + C73 * C4317) *
                         C26969 * C26970 * C8165) *
                        C26857) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26963 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26964 +
           ((C144 * C1219 + C26970 * C1295) * C84 +
            (C144 * C1225 + C26970 * C1301) * C73 + C1316 * C86 + C1317 * C74) *
               C26969 * C8165) *
              C26933 +
          (((C144 * C2854 + C26970 * C2933) * C84 +
            (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 + C2945 * C74) *
               C26969 * C26964 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C26963 -
           ((C144 * C4314 + C26970 * C4372) * C74 +
            (C144 * C4312 + C26970 * C4370) * C86 +
            (C144 * C4315 + C26970 * C4373) * C73 +
            (C144 * C4313 + C26970 * C4371) * C84) *
               C26969 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26963 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26964 +
           ((C207 * C1219 + C26969 * C1369) * C84 +
            (C207 * C1225 + C26969 * C1375) * C73 + C1390 * C86 + C1391 * C74) *
               C26970 * C8165) *
              C26933 +
          (((C207 * C2854 + C26969 * C3011) * C84 +
            (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 + C3023 * C74) *
               C26970 * C26964 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C26963 -
           ((C207 * C4314 + C26969 * C4426) * C74 +
            (C207 * C4312 + C26969 * C4424) * C86 +
            (C207 * C4315 + C26969 * C4427) * C73 +
            (C207 * C4313 + C26969 * C4425) * C84) *
               C26970 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26963 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26964 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C144 +
            (C84 * C1295 + C73 * C1443 + C86 * C1296 + C74 * C1444) * C26970) *
               C26969 * C8165) *
              C26933 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
            (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
               C26969 * C26964 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C26963 -
           ((C86 * C4370 + C74 * C4478 + C84 * C4371 + C73 * C4479) * C26970 +
            (C86 * C4312 + C74 * C4314 + C84 * C4313 + C73 * C4315) * C144) *
               C26969 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26963 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26964 +
           ((C309 * C1219 + C1508 + C1508 + C26970 * C1499) * C73 +
            C1519 * C74) *
               C26969 * C8165) *
              C26933 +
          (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
            C3169 * C74) *
               C26969 * C26964 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C26963 -
           ((C309 * C4312 + C4533 + C4533 + C26970 * C4530) * C74 +
            (C309 * C4313 + C4534 + C4534 + C26970 * C4531) * C73) *
               C26969 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26963 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26964 +
           (((C207 * C1219 + C26969 * C1369) * C144 +
             (C207 * C1295 + C26969 * C1571) * C26970) *
                C73 +
            (C1579 + C1585) * C74) *
               C8165) *
              C26933 +
          ((((C207 * C2854 + C26969 * C3011) * C144 +
             (C207 * C2933 + C26969 * C3235) * C26970) *
                C73 +
            (C3239 + C3243) * C74) *
               C26964 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C26963 -
           (((C207 * C4370 + C26969 * C4584) * C26970 +
             (C207 * C4312 + C26969 * C4424) * C144) *
                C74 +
            ((C207 * C4371 + C26969 * C4585) * C26970 +
             (C207 * C4313 + C26969 * C4425) * C144) *
                C73) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26963 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26964 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C207 +
            (C84 * C1369 + C73 * C1637 + C86 * C1370 + C74 * C1638) * C26969) *
               C26970 * C8165) *
              C26933 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
            (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
               C26970 * C26964 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C26963 -
           ((C86 * C4424 + C74 * C4636 + C84 * C4425 + C73 * C4637) * C26969 +
            (C86 * C4312 + C74 * C4314 + C84 * C4313 + C73 * C4315) * C207) *
               C26970 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26963 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26964 +
           (((C144 * C1219 + C26970 * C1295) * C207 +
             (C144 * C1369 + C26970 * C1693) * C26969) *
                C73 +
            (C1701 + C1707) * C74) *
               C8165) *
              C26933 +
          ((((C144 * C2854 + C26970 * C2933) * C207 +
             (C144 * C3011 + C26970 * C3378) * C26969) *
                C73 +
            (C3382 + C3386) * C74) *
               C26964 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C26963 -
           (((C144 * C4424 + C26970 * C4688) * C26969 +
             (C144 * C4312 + C26970 * C4370) * C207) *
                C74 +
            ((C144 * C4425 + C26970 * C4689) * C26969 +
             (C144 * C4313 + C26970 * C4371) * C207) *
                C73) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26963 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26964 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C26970 * C73 +
            C1781 * C74) *
               C8165) *
              C26933 +
          (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
            C3464 * C74) *
               C26964 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C26963 -
           ((C516 * C4312 + C4743 + C4743 + C26969 * C4740) * C26970 * C74 +
            (C516 * C4313 + C4744 + C4744 + C26969 * C4741) * C26970 * C73) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (-std::pow(Pi, 2.5) *
         (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 + C104 +
            C74 * C98) *
               C26969 * C26970 * C6325 -
           (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 + C1237 +
            C1237 + C73 * C1230) *
               C26969 * C26970 * C26885) *
              C595 +
          ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 + C2865 +
            C2865 + C74 * C2861) *
               C26969 * C26970 * C26885 -
           (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 + C620 + C620 +
            C73 * C613) *
               C26969 * C26970 * C6325) *
              C596 +
          ((C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 + C622 + C622 +
            C74 * C615) *
               C26969 * C26970 * C6325 -
           (C85 * C5843 + C5850 + C5850 + C74 * C5847 + C83 * C5844 + C5851 +
            C5851 + C73 * C5848) *
               C26969 * C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C83 * C87 + C103 + C103 + C73 * C97 +
                                C85 * C88 + C104 + C104 + C74 * C98) *
                                   C26969 * C26970 * C6325 -
                               (C85 * C1217 + C1236 + C1236 + C74 * C1229 +
                                C83 * C1218 + C1237 + C1237 + C73 * C1230) *
                                   C26969 * C26970 * C26885) *
                                  C26805 * C3516 +
                              ((C83 * C1217 + C1240 + C1240 + C73 * C1229 +
                                C85 * C1221 + C1241 + C1241 + C74 * C1233) *
                                   C26969 * C26970 * C26885 -
                               (C85 * C89 + C105 + C105 + C74 * C99 +
                                C83 * C88 + C106 + C106 + C73 * C98) *
                                   C26969 * C26970 * C6325) *
                                  C26805 * C3517 +
                              ((C83 * C89 + C107 + C107 + C73 * C99 +
                                C85 * C90 + C108 + C108 + C74 * C100) *
                                   C26969 * C26970 * C6325 -
                               (C85 * C2338 + C2342 + C2342 + C74 * C2340 +
                                C83 * C1221 + C2343 + C2343 + C73 * C1233) *
                                   C26969 * C26970 * C26885) *
                                  C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 + C104 +
           C74 * C98) *
              C26969 * C26970 * C7211 -
          (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 + C1237 +
           C1237 + C73 * C1230) *
              C26969 * C26970 * C7212 +
          (C83 * C1219 + C1238 + C1238 + C73 * C1231 + C85 * C1220 + C1239 +
           C1239 + C74 * C1232) *
              C26969 * C26970 * C7213 -
          (C85 * C7215 + C7222 + C7222 + C74 * C7219 + C83 * C7216 + C7223 +
           C7223 + C73 * C7220) *
              C26969 * C26970 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C6325 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26885) *
              C595 +
          (((C144 * C2854 + C26970 * C2933) * C84 +
            (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 + C2945 * C74) *
               C26969 * C26885 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C6325) *
              C596 +
          (((C144 * C602 + C26970 * C678) * C84 +
            (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
               C26969 * C6325 -
           ((C144 * C5845 + C26970 * C5903) * C74 +
            (C144 * C5843 + C26970 * C5901) * C86 +
            (C144 * C5846 + C26970 * C5904) * C73 +
            (C144 * C5844 + C26970 * C5902) * C84) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C6325 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26885) *
              C26805 * C3516 +
          ((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
               C26885 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C6325) *
              C26805 * C3517 +
          ((C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
               C6325 -
           ((C144 * C2339 + C26970 * C2394) * C74 +
            (C144 * C2338 + C26970 * C2393) * C86 + C2401 * C73 + C2400 * C84) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C84 +
           (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
              C26969 * C7211 -
          (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
           (C144 * C1218 + C26970 * C1294) * C84) *
              C26969 * C7212 +
          ((C144 * C1219 + C26970 * C1295) * C84 +
           (C144 * C1225 + C26970 * C1301) * C73 + C1316 * C86 + C1317 * C74) *
              C26969 * C7213 -
          ((C144 * C7217 + C26970 * C7259) * C74 +
           (C144 * C7215 + C26970 * C7257) * C86 +
           (C144 * C7218 + C26970 * C7260) * C73 +
           (C144 * C7216 + C26970 * C7258) * C84) *
              C26969 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C6325 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26885) *
              C595 +
          (((C207 * C2854 + C26969 * C3011) * C84 +
            (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 + C3023 * C74) *
               C26970 * C26885 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C6325) *
              C596 +
          (((C207 * C602 + C26969 * C752) * C84 +
            (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
               C26970 * C6325 -
           ((C207 * C5845 + C26969 * C5957) * C74 +
            (C207 * C5843 + C26969 * C5955) * C86 +
            (C207 * C5846 + C26969 * C5958) * C73 +
            (C207 * C5844 + C26969 * C5956) * C84) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C6325 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26885) *
              C26805 * C3516 +
          ((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
               C26885 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C6325) *
              C26805 * C3517 +
          ((C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
               C6325 -
           ((C207 * C2339 + C26969 * C2452) * C74 +
            (C207 * C2338 + C26969 * C2451) * C86 + C2459 * C73 + C2458 * C84) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C84 +
           (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
              C26970 * C7211 -
          (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
           (C207 * C1218 + C26969 * C1368) * C84) *
              C26970 * C7212 +
          ((C207 * C1219 + C26969 * C1369) * C84 +
           (C207 * C1225 + C26969 * C1375) * C73 + C1390 * C86 + C1391 * C74) *
              C26970 * C7213 -
          ((C207 * C7217 + C26969 * C7297) * C74 +
           (C207 * C7215 + C26969 * C7295) * C86 +
           (C207 * C7218 + C26969 * C7298) * C73 +
           (C207 * C7216 + C26969 * C7296) * C84) *
              C26970 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C6325 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26885) *
              C595 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
            (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
               C26969 * C26885 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C6325) *
              C596 +
          (((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
            (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
               C26969 * C6325 -
           ((C86 * C5901 + C74 * C6009 + C84 * C5902 + C73 * C6010) * C26970 +
            (C86 * C5843 + C74 * C5845 + C84 * C5844 + C73 * C5846) * C144) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C6325 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26885) *
              C26805 * C3516 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
            (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
               C26969 * C26885 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C6325) *
              C26805 * C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
            (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
               C26969 * C6325 -
           ((C86 * C2393 + C74 * C2509 + C84 * C1297 + C73 * C1445) * C26970 +
            (C86 * C2338 + C74 * C2339 + C84 * C1221 + C73 * C1227) * C144) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
           (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
              C26969 * C7211 -
          ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
           (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
              C26969 * C7212 +
          ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C144 +
           (C84 * C1295 + C73 * C1443 + C86 * C1296 + C74 * C1444) * C26970) *
              C26969 * C7213 -
          ((C86 * C7257 + C74 * C7333 + C84 * C7258 + C73 * C7334) * C26970 +
           (C86 * C7215 + C74 * C7217 + C84 * C7216 + C73 * C7218) * C144) *
              C26969 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C6325 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26885) *
              C595 +
          (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
            C3169 * C74) *
               C26969 * C26885 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C6325) *
              C596 +
          (((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
               C26969 * C6325 -
           ((C309 * C5843 + C6064 + C6064 + C26970 * C6061) * C74 +
            (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C73) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C6325 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26885) *
              C26805 * C3516 +
          ((C1518 * C73 + C2567 * C74) * C26969 * C26885 -
           (C334 * C74 + C333 * C73) * C26969 * C6325) *
              C26805 * C3517 +
          ((C334 * C73 + C335 * C74) * C26969 * C6325 -
           ((C309 * C2338 + C2564 + C2564 + C26970 * C2560) * C74 +
            C2567 * C73) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
              C26969 * C7211 -
          (C1518 * C74 +
           (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
              C26969 * C7212 +
          ((C309 * C1219 + C1508 + C1508 + C26970 * C1499) * C73 +
           C1519 * C74) *
              C26969 * C7213 -
          ((C309 * C7215 + C7372 + C7372 + C26970 * C7369) * C74 +
           (C309 * C7216 + C7373 + C7373 + C26970 * C7370) * C73) *
              C26969 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (-std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C6325 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26885) *
              C595 +
          ((((C207 * C2854 + C26969 * C3011) * C144 +
             (C207 * C2933 + C26969 * C3235) * C26970) *
                C73 +
            (C3239 + C3243) * C74) *
               C26885 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C6325) *
              C596 +
          ((((C207 * C602 + C26969 * C752) * C144 +
             (C207 * C678 + C26969 * C954) * C26970) *
                C73 +
            (C962 + C968) * C74) *
               C6325 -
           (((C207 * C5901 + C26969 * C6115) * C26970 +
             (C207 * C5843 + C26969 * C5955) * C144) *
                C74 +
            ((C207 * C5902 + C26969 * C6116) * C26970 +
             (C207 * C5844 + C26969 * C5956) * C144) *
                C73) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C6325 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26885) *
              C26805 * C3516 +
          (((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26885 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C6325) *
              C26805 * C3517 +
          (((C380 + C388) * C73 + (C381 + C389) * C74) * C6325 -
           (((C207 * C2393 + C26969 * C2617) * C26970 +
             (C207 * C2338 + C26969 * C2451) * C144) *
                C74 +
            (C2623 + C2619) * C73) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C144 +
            (C207 * C145 + C26969 * C369) * C26970) *
               C73 +
           (C375 + C387) * C74) *
              C7211 -
          ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                    (C207 * C1218 + C26969 * C1368) * C144) *
                                       C73) *
              C7212 +
          (((C207 * C1219 + C26969 * C1369) * C144 +
            (C207 * C1295 + C26969 * C1571) * C26970) *
               C73 +
           (C1579 + C1585) * C74) *
              C7213 -
          (((C207 * C7257 + C26969 * C7407) * C26970 +
            (C207 * C7215 + C26969 * C7295) * C144) *
               C74 +
           ((C207 * C7258 + C26969 * C7408) * C26970 +
            (C207 * C7216 + C26969 * C7296) * C144) *
               C73) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C6325 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26885) *
              C595 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
            (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
               C26970 * C26885 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C6325) *
              C596 +
          (((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
            (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
               C26970 * C6325 -
           ((C86 * C5955 + C74 * C6167 + C84 * C5956 + C73 * C6168) * C26969 +
            (C86 * C5843 + C74 * C5845 + C84 * C5844 + C73 * C5846) * C207) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C6325 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26885) *
              C26805 * C3516 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
            (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
               C26970 * C26885 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C6325) *
              C26805 * C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
            (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
               C26970 * C6325 -
           ((C86 * C2451 + C74 * C2673 + C84 * C1371 + C73 * C1639) * C26969 +
            (C86 * C2338 + C74 * C2339 + C84 * C1221 + C73 * C1227) * C207) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
           (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
              C26970 * C7211 -
          ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
           (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
              C26970 * C7212 +
          ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C207 +
           (C84 * C1369 + C73 * C1637 + C86 * C1370 + C74 * C1638) * C26969) *
              C26970 * C7213 -
          ((C86 * C7295 + C74 * C7443 + C84 * C7296 + C73 * C7444) * C26969 +
           (C86 * C7215 + C74 * C7217 + C84 * C7216 + C73 * C7218) * C207) *
              C26970 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (-std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C6325 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26885) *
              C595 +
          ((((C144 * C2854 + C26970 * C2933) * C207 +
             (C144 * C3011 + C26970 * C3378) * C26969) *
                C73 +
            (C3382 + C3386) * C74) *
               C26885 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C6325) *
              C596 +
          ((((C144 * C602 + C26970 * C678) * C207 +
             (C144 * C752 + C26970 * C1076) * C26969) *
                C73 +
            (C1084 + C1090) * C74) *
               C6325 -
           (((C144 * C5955 + C26970 * C6219) * C26969 +
             (C144 * C5843 + C26970 * C5901) * C207) *
                C74 +
            ((C144 * C5956 + C26970 * C6220) * C26969 +
             (C144 * C5844 + C26970 * C5902) * C207) *
                C73) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C6325 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26885) *
              C26805 * C3516 +
          (((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26885 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C6325) *
              C26805 * C3517 +
          (((C473 + C481) * C73 + (C474 + C482) * C74) * C6325 -
           (((C144 * C2451 + C26970 * C2724) * C26969 +
             (C144 * C2338 + C26970 * C2393) * C207) *
                C74 +
            (C2730 + C2726) * C73) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C207 +
            (C144 * C208 + C26970 * C462) * C26969) *
               C73 +
           (C468 + C480) * C74) *
              C7211 -
          ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                    (C144 * C1218 + C26970 * C1294) * C207) *
                                       C73) *
              C7212 +
          (((C144 * C1219 + C26970 * C1295) * C207 +
            (C144 * C1369 + C26970 * C1693) * C26969) *
               C73 +
           (C1701 + C1707) * C74) *
              C7213 -
          (((C144 * C7295 + C26970 * C7479) * C26969 +
            (C144 * C7215 + C26970 * C7257) * C207) *
               C74 +
           ((C144 * C7296 + C26970 * C7480) * C26969 +
            (C144 * C7216 + C26970 * C7258) * C207) *
               C73) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (-std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C6325 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26885) *
              C595 +
          (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
            C3464 * C74) *
               C26885 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C6325) *
              C596 +
          (((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
            C1164 * C74) *
               C6325 -
           ((C516 * C5843 + C6274 + C6274 + C26969 * C6271) * C26970 * C74 +
            (C516 * C5844 + C6275 + C6275 + C26969 * C6272) * C26970 * C73) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C6325 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26885) *
              C26805 * C3516 +
          ((C1780 * C73 + C2788 * C74) * C26885 -
           (C544 * C74 + C543 * C73) * C6325) *
              C26805 * C3517 +
          ((C544 * C73 + C545 * C74) * C6325 -
           ((C516 * C2338 + C2784 + C2784 + C26969 * C2780) * C26970 * C74 +
            C2788 * C73) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
           C543 * C74) *
              C7211 -
          (C1780 * C74 +
           (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
              C7212 +
          ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C26970 * C73 +
           C1781 * C74) *
              C7213 -
          ((C516 * C7215 + C7518 + C7518 + C26969 * C7515) * C26970 * C74 +
           (C516 * C7216 + C7519 + C7519 + C26969 * C7516) * C26970 * C73) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                      C104 + C74 * C98) *
                         C26969 * C26970 * C26963 -
                     (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                      C1237 + C1237 + C73 * C1230) *
                         C26969 * C26970 * C26964 +
                     (C83 * C1219 + C1238 + C1238 + C73 * C1231 + C85 * C1220 +
                      C1239 + C1239 + C74 * C1232) *
                         C26969 * C26970 * C8165) *
                        C26805 * C26925 +
                    ((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 +
                      C1241 + C1241 + C74 * C1233) *
                         C26969 * C26970 * C26964 -
                     (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                      C106 + C73 * C98) *
                         C26969 * C26970 * C26963 -
                     (C85 * C1222 + C1242 + C1242 + C74 * C1234 + C83 * C1220 +
                      C1243 + C1243 + C73 * C1232) *
                         C26969 * C26970 * C8165) *
                        C26805 * C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C26963 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26964 +
           ((C144 * C1219 + C26970 * C1295) * C84 +
            (C144 * C1225 + C26970 * C1301) * C73 + C1316 * C86 + C1317 * C74) *
               C26969 * C8165) *
              C26805 * C26925 +
          ((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
               C26964 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C26963 -
           ((C144 * C1228 + C26970 * C1304) * C74 +
            (C144 * C1222 + C26970 * C1298) * C86 + C1317 * C73 + C1316 * C84) *
               C26969 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C26963 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26964 +
           ((C207 * C1219 + C26969 * C1369) * C84 +
            (C207 * C1225 + C26969 * C1375) * C73 + C1390 * C86 + C1391 * C74) *
               C26970 * C8165) *
              C26805 * C26925 +
          ((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
               C26964 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C26963 -
           ((C207 * C1228 + C26969 * C1378) * C74 +
            (C207 * C1222 + C26969 * C1372) * C86 + C1391 * C73 + C1390 * C84) *
               C26970 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C26963 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26964 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C144 +
            (C84 * C1295 + C73 * C1443 + C86 * C1296 + C74 * C1444) * C26970) *
               C26969 * C8165) *
              C26805 * C26925 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
            (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
               C26969 * C26964 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C26963 -
           ((C86 * C1298 + C74 * C1446 + C84 * C1296 + C73 * C1444) * C26970 +
            (C86 * C1222 + C74 * C1228 + C84 * C1220 + C73 * C1226) * C144) *
               C26969 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C26963 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26964 +
           ((C309 * C1219 + C1508 + C1508 + C26970 * C1499) * C73 +
            C1519 * C74) *
               C26969 * C8165) *
              C26805 * C26925 +
          ((C1518 * C73 + C2567 * C74) * C26969 * C26964 -
           (C334 * C74 + C333 * C73) * C26969 * C26963 -
           ((C309 * C1222 + C1513 + C1513 + C26970 * C1502) * C74 +
            C1519 * C73) *
               C26969 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C26963 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26964 +
           (((C207 * C1219 + C26969 * C1369) * C144 +
             (C207 * C1295 + C26969 * C1571) * C26970) *
                C73 +
            (C1579 + C1585) * C74) *
               C8165) *
              C26805 * C26925 +
          (((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26964 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C26963 -
           (((C207 * C1298 + C26969 * C1574) * C26970 +
             (C207 * C1222 + C26969 * C1372) * C144) *
                C74 +
            (C1585 + C1579) * C73) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C26963 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26964 +
           ((C84 * C1219 + C73 * C1225 + C86 * C1220 + C74 * C1226) * C207 +
            (C84 * C1369 + C73 * C1637 + C86 * C1370 + C74 * C1638) * C26969) *
               C26970 * C8165) *
              C26805 * C26925 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
            (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
               C26970 * C26964 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C26963 -
           ((C86 * C1372 + C74 * C1640 + C84 * C1370 + C73 * C1638) * C26969 +
            (C86 * C1222 + C74 * C1228 + C84 * C1220 + C73 * C1226) * C207) *
               C26970 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C26963 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26964 +
           (((C144 * C1219 + C26970 * C1295) * C207 +
             (C144 * C1369 + C26970 * C1693) * C26969) *
                C73 +
            (C1701 + C1707) * C74) *
               C8165) *
              C26805 * C26925 +
          (((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26964 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C26963 -
           (((C144 * C1372 + C26970 * C1696) * C26969 +
             (C144 * C1222 + C26970 * C1298) * C207) *
                C74 +
            (C1707 + C1701) * C73) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C26963 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26964 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C26970 * C73 +
            C1781 * C74) *
               C8165) *
              C26805 * C26925 +
          ((C1780 * C73 + C2788 * C74) * C26964 -
           (C544 * C74 + C543 * C73) * C26963 -
           ((C516 * C1222 + C1773 + C1773 + C26969 * C1762) * C26970 * C74 +
            C1781 * C73) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                      C104 + C74 * C98) *
                         C26969 * C26970 * C6325 -
                     (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                      C1237 + C1237 + C73 * C1230) *
                         C26969 * C26970 * C26885) *
                        C26805 * C3516 +
                    ((C83 * C1217 + C1240 + C1240 + C73 * C1229 + C85 * C1221 +
                      C1241 + C1241 + C74 * C1233) *
                         C26969 * C26970 * C26885 -
                     (C85 * C89 + C105 + C105 + C74 * C99 + C83 * C88 + C106 +
                      C106 + C73 * C98) *
                         C26969 * C26970 * C6325) *
                        C26805 * C3517 +
                    ((C83 * C89 + C107 + C107 + C73 * C99 + C85 * C90 + C108 +
                      C108 + C74 * C100) *
                         C26969 * C26970 * C6325 -
                     (C85 * C2338 + C2342 + C2342 + C74 * C2340 + C83 * C1221 +
                      C2343 + C2343 + C73 * C1233) *
                         C26969 * C26970 * C26885) *
                        C26805 * C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C83 * C87 + C103 + C103 + C73 * C97 + C85 * C88 + C104 +
                      C104 + C74 * C98) *
                         C26969 * C26970 * C6325 -
                     (C85 * C1217 + C1236 + C1236 + C74 * C1229 + C83 * C1218 +
                      C1237 + C1237 + C73 * C1230) *
                         C26969 * C26970 * C26885) *
                        C595 +
                    ((C83 * C2854 + C2864 + C2864 + C73 * C2860 + C85 * C2855 +
                      C2865 + C2865 + C74 * C2861) *
                         C26969 * C26970 * C26885 -
                     (C85 * C600 + C619 + C619 + C74 * C612 + C83 * C601 +
                      C620 + C620 + C73 * C613) *
                         C26969 * C26970 * C6325) *
                        C596 +
                    ((C83 * C602 + C621 + C621 + C73 * C614 + C85 * C603 +
                      C622 + C622 + C74 * C615) *
                         C26969 * C26970 * C6325 -
                     (C85 * C5843 + C5850 + C5850 + C74 * C5847 + C83 * C5844 +
                      C5851 + C5851 + C73 * C5848) *
                         C26969 * C26970 * C26885) *
                        C597) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C6325 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26885) *
              C26805 * C3516 +
          ((C1315 * C84 + C1314 * C73 + C2400 * C86 + C2401 * C74) * C26969 *
               C26885 -
           (C170 * C74 + C171 * C86 + C169 * C73 + C168 * C84) * C26969 *
               C6325) *
              C26805 * C3517 +
          ((C171 * C84 + C170 * C73 + C172 * C86 + C173 * C74) * C26969 *
               C6325 -
           ((C144 * C2339 + C26970 * C2394) * C74 +
            (C144 * C2338 + C26970 * C2393) * C86 + C2401 * C73 + C2400 * C84) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C84 +
            (C144 * C92 + C26970 * C150) * C73 + C168 * C86 + C169 * C74) *
               C26969 * C6325 -
           (C1314 * C74 + C1315 * C86 + (C144 * C1224 + C26970 * C1300) * C73 +
            (C144 * C1218 + C26970 * C1294) * C84) *
               C26969 * C26885) *
              C595 +
          (((C144 * C2854 + C26970 * C2933) * C84 +
            (C144 * C2857 + C26970 * C2936) * C73 + C2944 * C86 + C2945 * C74) *
               C26969 * C26885 -
           (C697 * C74 + C698 * C86 + (C144 * C607 + C26970 * C683) * C73 +
            (C144 * C601 + C26970 * C677) * C84) *
               C26969 * C6325) *
              C596 +
          (((C144 * C602 + C26970 * C678) * C84 +
            (C144 * C608 + C26970 * C684) * C73 + C699 * C86 + C700 * C74) *
               C26969 * C6325 -
           ((C144 * C5845 + C26970 * C5903) * C74 +
            (C144 * C5843 + C26970 * C5901) * C86 +
            (C144 * C5846 + C26970 * C5904) * C73 +
            (C144 * C5844 + C26970 * C5902) * C84) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C6325 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26885) *
              C26805 * C3516 +
          ((C1389 * C84 + C1388 * C73 + C2458 * C86 + C2459 * C74) * C26970 *
               C26885 -
           (C233 * C74 + C234 * C86 + C232 * C73 + C231 * C84) * C26970 *
               C6325) *
              C26805 * C3517 +
          ((C234 * C84 + C233 * C73 + C235 * C86 + C236 * C74) * C26970 *
               C6325 -
           ((C207 * C2339 + C26969 * C2452) * C74 +
            (C207 * C2338 + C26969 * C2451) * C86 + C2459 * C73 + C2458 * C84) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C84 +
            (C207 * C92 + C26969 * C213) * C73 + C231 * C86 + C232 * C74) *
               C26970 * C6325 -
           (C1388 * C74 + C1389 * C86 + (C207 * C1224 + C26969 * C1374) * C73 +
            (C207 * C1218 + C26969 * C1368) * C84) *
               C26970 * C26885) *
              C595 +
          (((C207 * C2854 + C26969 * C3011) * C84 +
            (C207 * C2857 + C26969 * C3014) * C73 + C3022 * C86 + C3023 * C74) *
               C26970 * C26885 -
           (C771 * C74 + C772 * C86 + (C207 * C607 + C26969 * C757) * C73 +
            (C207 * C601 + C26969 * C751) * C84) *
               C26970 * C6325) *
              C596 +
          (((C207 * C602 + C26969 * C752) * C84 +
            (C207 * C608 + C26969 * C758) * C73 + C773 * C86 + C774 * C74) *
               C26970 * C6325 -
           ((C207 * C5845 + C26969 * C5957) * C74 +
            (C207 * C5843 + C26969 * C5955) * C86 +
            (C207 * C5846 + C26969 * C5958) * C73 +
            (C207 * C5844 + C26969 * C5956) * C84) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C6325 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26885) *
              C26805 * C3516 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C144 +
            (C84 * C1293 + C73 * C1441 + C86 * C1297 + C74 * C1445) * C26970) *
               C26969 * C26885 -
           ((C86 * C147 + C74 * C272 + C84 * C146 + C73 * C271) * C26970 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C144) *
               C26969 * C6325) *
              C26805 * C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C144 +
            (C84 * C147 + C73 * C272 + C86 * C148 + C74 * C273) * C26970) *
               C26969 * C6325 -
           ((C86 * C2393 + C74 * C2509 + C84 * C1297 + C73 * C1445) * C26970 +
            (C86 * C2338 + C74 * C2339 + C84 * C1221 + C73 * C1227) * C144) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C144 +
            (C84 * C145 + C73 * C270 + C86 * C146 + C74 * C271) * C26970) *
               C26969 * C6325 -
           ((C86 * C1293 + C74 * C1441 + C84 * C1294 + C73 * C1442) * C26970 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C144) *
               C26969 * C26885) *
              C595 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C144 +
            (C84 * C2933 + C73 * C3089 + C86 * C2934 + C74 * C3090) * C26970) *
               C26969 * C26885 -
           ((C86 * C676 + C74 * C824 + C84 * C677 + C73 * C825) * C26970 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C144) *
               C26969 * C6325) *
              C596 +
          (((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C144 +
            (C84 * C678 + C73 * C826 + C86 * C679 + C74 * C827) * C26970) *
               C26969 * C6325 -
           ((C86 * C5901 + C74 * C6009 + C84 * C5902 + C73 * C6010) * C26970 +
            (C86 * C5843 + C74 * C5845 + C84 * C5844 + C73 * C5846) * C144) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C6325 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26885) *
              C26805 * C3516 +
          ((C1518 * C73 + C2567 * C74) * C26969 * C26885 -
           (C334 * C74 + C333 * C73) * C26969 * C6325) *
              C26805 * C3517 +
          ((C334 * C73 + C335 * C74) * C26969 * C6325 -
           ((C309 * C2338 + C2564 + C2564 + C26970 * C2560) * C74 +
            C2567 * C73) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C73 + C333 * C74) *
               C26969 * C6325 -
           (C1518 * C74 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C73) *
               C26969 * C26885) *
              C595 +
          (((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C73 +
            C3169 * C74) *
               C26969 * C26885 -
           (C901 * C74 + (C309 * C601 + C890 + C890 + C26970 * C881) * C73) *
               C26969 * C6325) *
              C596 +
          (((C309 * C602 + C891 + C891 + C26970 * C882) * C73 + C902 * C74) *
               C26969 * C6325 -
           ((C309 * C5843 + C6064 + C6064 + C26970 * C6061) * C74 +
            (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C73) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C6325 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26885) *
              C26805 * C3516 +
          (((C1578 + C1584) * C73 + (C2619 + C2623) * C74) * C26885 -
           ((C388 + C380) * C74 + (C387 + C375) * C73) * C6325) *
              C26805 * C3517 +
          (((C380 + C388) * C73 + (C381 + C389) * C74) * C6325 -
           (((C207 * C2393 + C26969 * C2617) * C26970 +
             (C207 * C2338 + C26969 * C2451) * C144) *
                C74 +
            (C2623 + C2619) * C73) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C144 +
             (C207 * C145 + C26969 * C369) * C26970) *
                C73 +
            (C375 + C387) * C74) *
               C6325 -
           ((C1584 + C1578) * C74 + ((C207 * C1294 + C26969 * C1570) * C26970 +
                                     (C207 * C1218 + C26969 * C1368) * C144) *
                                        C73) *
               C26885) *
              C595 +
          ((((C207 * C2854 + C26969 * C3011) * C144 +
             (C207 * C2933 + C26969 * C3235) * C26970) *
                C73 +
            (C3239 + C3243) * C74) *
               C26885 -
           ((C967 + C961) * C74 + ((C207 * C677 + C26969 * C953) * C26970 +
                                   (C207 * C601 + C26969 * C751) * C144) *
                                      C73) *
               C6325) *
              C596 +
          ((((C207 * C602 + C26969 * C752) * C144 +
             (C207 * C678 + C26969 * C954) * C26970) *
                C73 +
            (C962 + C968) * C74) *
               C6325 -
           (((C207 * C5901 + C26969 * C6115) * C26970 +
             (C207 * C5843 + C26969 * C5955) * C144) *
                C74 +
            ((C207 * C5902 + C26969 * C6116) * C26970 +
             (C207 * C5844 + C26969 * C5956) * C144) *
                C73) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C6325 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26885) *
              C26805 * C3516 +
          (((C84 * C1217 + C73 * C1223 + C86 * C1221 + C74 * C1227) * C207 +
            (C84 * C1367 + C73 * C1635 + C86 * C1371 + C74 * C1639) * C26969) *
               C26970 * C26885 -
           ((C86 * C210 + C74 * C425 + C84 * C209 + C73 * C424) * C26969 +
            (C86 * C89 + C74 * C94 + C84 * C88 + C73 * C93) * C207) *
               C26970 * C6325) *
              C26805 * C3517 +
          (((C84 * C89 + C73 * C94 + C86 * C90 + C74 * C95) * C207 +
            (C84 * C210 + C73 * C425 + C86 * C211 + C74 * C426) * C26969) *
               C26970 * C6325 -
           ((C86 * C2451 + C74 * C2673 + C84 * C1371 + C73 * C1639) * C26969 +
            (C86 * C2338 + C74 * C2339 + C84 * C1221 + C73 * C1227) * C207) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C84 * C87 + C73 * C92 + C86 * C88 + C74 * C93) * C207 +
            (C84 * C208 + C73 * C423 + C86 * C209 + C74 * C424) * C26969) *
               C26970 * C6325 -
           ((C86 * C1367 + C74 * C1635 + C84 * C1368 + C73 * C1636) * C26969 +
            (C86 * C1217 + C74 * C1223 + C84 * C1218 + C73 * C1224) * C207) *
               C26970 * C26885) *
              C595 +
          (((C84 * C2854 + C73 * C2857 + C86 * C2855 + C74 * C2858) * C207 +
            (C84 * C3011 + C73 * C3309 + C86 * C3012 + C74 * C3310) * C26969) *
               C26970 * C26885 -
           ((C86 * C750 + C74 * C1018 + C84 * C751 + C73 * C1019) * C26969 +
            (C86 * C600 + C74 * C606 + C84 * C601 + C73 * C607) * C207) *
               C26970 * C6325) *
              C596 +
          (((C84 * C602 + C73 * C608 + C86 * C603 + C74 * C609) * C207 +
            (C84 * C752 + C73 * C1020 + C86 * C753 + C74 * C1021) * C26969) *
               C26970 * C6325 -
           ((C86 * C5955 + C74 * C6167 + C84 * C5956 + C73 * C6168) * C26969 +
            (C86 * C5843 + C74 * C5845 + C84 * C5844 + C73 * C5846) * C207) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C6325 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26885) *
              C26805 * C3516 +
          (((C1700 + C1706) * C73 + (C2726 + C2730) * C74) * C26885 -
           ((C481 + C473) * C74 + (C480 + C468) * C73) * C6325) *
              C26805 * C3517 +
          (((C473 + C481) * C73 + (C474 + C482) * C74) * C6325 -
           (((C144 * C2451 + C26970 * C2724) * C26969 +
             (C144 * C2338 + C26970 * C2393) * C207) *
                C74 +
            (C2730 + C2726) * C73) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C207 +
             (C144 * C208 + C26970 * C462) * C26969) *
                C73 +
            (C468 + C480) * C74) *
               C6325 -
           ((C1706 + C1700) * C74 + ((C144 * C1368 + C26970 * C1692) * C26969 +
                                     (C144 * C1218 + C26970 * C1294) * C207) *
                                        C73) *
               C26885) *
              C595 +
          ((((C144 * C2854 + C26970 * C2933) * C207 +
             (C144 * C3011 + C26970 * C3378) * C26969) *
                C73 +
            (C3382 + C3386) * C74) *
               C26885 -
           ((C1089 + C1083) * C74 + ((C144 * C751 + C26970 * C1075) * C26969 +
                                     (C144 * C601 + C26970 * C677) * C207) *
                                        C73) *
               C6325) *
              C596 +
          ((((C144 * C602 + C26970 * C678) * C207 +
             (C144 * C752 + C26970 * C1076) * C26969) *
                C73 +
            (C1084 + C1090) * C74) *
               C6325 -
           (((C144 * C5955 + C26970 * C6219) * C26969 +
             (C144 * C5843 + C26970 * C5901) * C207) *
                C74 +
            ((C144 * C5956 + C26970 * C6220) * C26969 +
             (C144 * C5844 + C26970 * C5902) * C207) *
                C73) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C6325 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26885) *
              C26805 * C3516 +
          ((C1780 * C73 + C2788 * C74) * C26885 -
           (C544 * C74 + C543 * C73) * C6325) *
              C26805 * C3517 +
          ((C544 * C73 + C545 * C74) * C6325 -
           ((C516 * C2338 + C2784 + C2784 + C26969 * C2780) * C26970 * C74 +
            C2788 * C73) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C26970 * C73 +
            C543 * C74) *
               C6325 -
           (C1780 * C74 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C26970 * C73) *
               C26885) *
              C595 +
          (((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C26970 * C73 +
            C3464 * C74) *
               C26885 -
           (C1163 * C74 +
            (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C26970 * C73) *
               C6325) *
              C596 +
          (((C516 * C602 + C1151 + C1151 + C26969 * C1142) * C26970 * C73 +
            C1164 * C74) *
               C6325 -
           ((C516 * C5843 + C6274 + C6274 + C26969 * C6271) * C26970 * C74 +
            (C516 * C5844 + C6275 + C6275 + C26969 * C6272) * C26970 * C73) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26821 * C26933 -
           (C9423 * C9052 + C9422 * C9051) * C26821 * C26857) *
              C26959 +
          ((C9424 * C9051 + C9425 * C9052) * C26821 * C26857 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26821 * C26933) *
              C26960 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
            C10436 * C9052) *
               C26821 * C26933 -
           ((C9053 * C605 + C10432 + C10432 + C26968 * C617) * C26969 * C9052 +
            C10436 * C9051) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26821 * C26933 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26821 * C26857) *
              C26959 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                C9054 +
            (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                C26968) *
               C26969 * C26821 * C26857 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26821 * C26933) *
              C26960 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
            (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
                C26968) *
               C26969 * C26821 * C26933 -
           ((C9098 * C611 + C9052 * C687 + C9097 * C610 + C9051 * C686) *
                C26968 +
            (C9098 * C605 + C9052 * C681 + C9097 * C604 + C9051 * C680) *
                C9054) *
               C26969 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26821 * C26933 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 *
               C26857) *
              C26959 +
          (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26821 *
               C26857 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26821 * C26933) *
              C26960 +
          (((C234 * C9054 + C233 * C26968) * C9051 +
            (C10537 + C10538) * C9052) *
               C26821 * C26933 -
           (((C207 * C611 + C26969 * C761) * C26968 +
             (C207 * C605 + C26969 * C755) * C9054) *
                C9052 +
            (C10538 + C10537) * C9051) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26821 * C26933 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26821 * C26857) *
              C26959 +
          ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
               C26969 * C26821 * C26857 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C26821 * C26933) *
              C26960 +
          (((C9054 * C89 + C26968 * C94) * C9097 +
            (C9054 * C147 + C26968 * C272) * C9051 + C10593 * C9098 +
            C10594 * C9052) *
               C26969 * C26821 * C26933 -
           ((C9054 * C681 + C26968 * C829) * C9052 +
            (C9054 * C605 + C26968 * C611) * C9098 + C10594 * C9051 +
            C10593 * C9097) *
               C26969 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26821 * C26933 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C26821 * C26857) *
                        C26959 +
                    ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                      C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                         C26968 * C26969 * C26821 * C26857 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C26821 * C26933) *
                        C26960 +
                    ((C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                      C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                         C26968 * C26969 * C26821 * C26933 -
                     (C9202 * C605 + C10645 + C10645 + C9052 * C885 +
                      C9201 * C604 + C10646 + C10646 + C9051 * C884) *
                         C26968 * C26969 * C26821 * C26857) *
                        C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26821 * C26933 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26821 * C26857) *
              C26959 +
          ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
               C26968 * C26821 * C26857 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26821 * C26933) *
              C26960 +
          ((C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
               C26968 * C26821 * C26933 -
           ((C207 * C681 + C26969 * C957) * C9052 +
            (C207 * C605 + C26969 * C755) * C9098 + C2120 * C9051 +
            C1956 * C9097) *
               C26968 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26821 * C26933 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 *
               C26857) *
              C26959 +
          (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26821 *
               C26857 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26821 * C26933) *
              C26960 +
          ((((C9054 * C89 + C26968 * C94) * C207 +
             (C9054 * C210 + C26968 * C425) * C26969) *
                C9051 +
            (C10747 + C10751) * C9052) *
               C26821 * C26933 -
           (((C9054 * C755 + C26968 * C1023) * C26969 +
             (C9054 * C605 + C26968 * C611) * C207) *
                C9052 +
            (C10751 + C10747) * C9051) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26821 * C26933 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26821 * C26857) *
              C26959 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) * C207 +
            (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                C26969) *
               C26968 * C26821 * C26857 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26821 * C26933) *
              C26960 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
            (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
                C26969) *
               C26968 * C26821 * C26933 -
           ((C9098 * C755 + C9052 * C1079 + C9097 * C754 + C9051 * C1078) *
                C26969 +
            (C9098 * C605 + C9052 * C681 + C9097 * C604 + C9051 * C680) *
                C207) *
               C26968 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26821 * C26933 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C26857) *
              C26959 +
          ((C1161 * C9051 + C1162 * C9052) * C26968 * C26821 * C26857 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C26933) *
              C26960 +
          ((C541 * C9051 + C2285 * C9052) * C26968 * C26821 * C26933 -
           ((C516 * C605 + C1156 + C1156 + C26969 * C1145) * C9052 +
            C2285 * C9051) *
               C26968 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
             C9422 * C9052) *
                C26934 -
            (C11384 * C9052 + (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) *
                                  C26969 * C9051) *
                C26885) *
               C26933 +
           ((C11384 * C9051 +
             (C9053 * C5844 + C11374 + C11374 + C26968 * C5848) * C26969 *
                 C9052) *
                C26885 -
            (C9423 * C9052 + C9422 * C9051) * C26934) *
               C26857) *
              C598 +
          ((((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
             C11385 * C9052) *
                C26885 -
            (C9424 * C9052 +
             (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
                C26934) *
               C26933 +
           ((C9424 * C9051 + C9425 * C9052) * C26934 -
            ((C9053 * C5843 + C11377 + C11377 + C26968 * C5847) * C26969 *
                 C9052 +
             C11385 * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) *
                 C9054 +
             (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                 C26968) *
                C26969 * C26934 -
            ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                 C26968 +
             (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                 C9054) *
                C26969 * C26885) *
               C26933 +
           (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                 C9054 +
             (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                 C26968) *
                C26969 * C26885 -
            ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                 C26968 +
             (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                 C9054) *
                C26969 * C26934) *
               C26857) *
              C598 +
          ((((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                 C9054 +
             (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                 C26968) *
                C26969 * C26885 -
            ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                 C26968 +
             (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                 C9054) *
                C26969 * C26934) *
               C26933 +
           (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                 C9054 +
             (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                 C26968) *
                C26969 * C26934 -
            ((C9098 * C5845 + C9052 * C5903 + C9097 * C2858 + C9051 * C2937) *
                 C26968 +
             (C9098 * C5843 + C9052 * C5901 + C9097 * C2855 + C9051 * C2934) *
                 C9054) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C207 * C87 + C26969 * C208) * C9054 +
              (C207 * C92 + C26969 * C213) * C26968) *
                 C9051 +
             (C9542 + C9543) * C9052) *
                C26934 -
            ((C11526 + C11527) * C9052 +
             ((C207 * C1224 + C26969 * C1374) * C26968 +
              (C207 * C1218 + C26969 * C1368) * C9054) *
                 C9051) *
                C26885) *
               C26933 +
           (((C11527 + C11526) * C9051 +
             ((C207 * C5844 + C26969 * C5956) * C9054 +
              (C207 * C5846 + C26969 * C5958) * C26968) *
                 C9052) *
                C26885 -
            ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26934) *
               C26857) *
              C598 +
          ((((C1389 * C9054 + C1388 * C26968) * C9051 +
             (C11522 + C11523) * C9052) *
                C26885 -
            ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
                C26934) *
               C26933 +
           (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26934 -
            (((C207 * C5845 + C26969 * C5957) * C26968 +
              (C207 * C5843 + C26969 * C5955) * C9054) *
                 C9052 +
             (C11523 + C11522) * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C9097 +
             (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
             C9613 * C9052) *
                C26969 * C26934 -
            (C11602 * C9052 + C11603 * C9098 +
             (C9054 * C1294 + C26968 * C1442) * C9051 +
             (C9054 * C1218 + C26968 * C1224) * C9097) *
                C26969 * C26885) *
               C26933 +
           ((C11603 * C9097 + C11602 * C9051 +
             (C9054 * C5844 + C26968 * C5846) * C9098 +
             (C9054 * C5902 + C26968 * C6010) * C9052) *
                C26969 * C26885 -
            (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
                C26969 * C26934) *
               C26857) *
              C598 +
          ((((C9054 * C1217 + C26968 * C1223) * C9097 +
             (C9054 * C1293 + C26968 * C1441) * C9051 + C11604 * C9098 +
             C11605 * C9052) *
                C26969 * C26885 -
            (C9617 * C9052 + C9616 * C9098 +
             (C9054 * C146 + C26968 * C271) * C9051 +
             (C9054 * C88 + C26968 * C93) * C9097) *
                C26969 * C26934) *
               C26933 +
           ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
                C26969 * C26934 -
            ((C9054 * C5901 + C26968 * C6009) * C9052 +
             (C9054 * C5843 + C26968 * C5845) * C9098 + C11605 * C9051 +
             C11604 * C9097) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                       C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                          C26968 * C26969 * C26934 -
                      (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                       C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                          C26968 * C26969 * C26885) *
                         C26933 +
                     ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                       C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                          C26968 * C26969 * C26885 -
                      (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                       C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                          C26968 * C26969 * C26934) *
                         C26857) *
                        C598 +
                    (((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                       C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                          C26968 * C26969 * C26885 -
                      (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                       C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                          C26968 * C26969 * C26934) *
                         C26933 +
                     ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                       C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                          C26968 * C26969 * C26934 -
                      (C9202 * C5843 + C11674 + C11674 + C9052 * C6061 +
                       C9201 * C2855 + C11675 + C11675 + C9051 * C3159) *
                          C26968 * C26969 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9097 +
             (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
             C9732 * C9052) *
                C26968 * C26934 -
            (C11744 * C9052 + C11525 * C9098 +
             (C207 * C1294 + C26969 * C1570) * C9051 +
             (C207 * C1218 + C26969 * C1368) * C9097) *
                C26968 * C26885) *
               C26933 +
           ((C11525 * C9097 + C11744 * C9051 +
             (C207 * C5844 + C26969 * C5956) * C9098 +
             (C207 * C5902 + C26969 * C6116) * C9052) *
                C26968 * C26885 -
            (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
                C26968 * C26934) *
               C26857) *
              C598 +
          (((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
                C26968 * C26885 -
            (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
                C26968 * C26934) *
               C26933 +
           ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
                C26968 * C26934 -
            ((C207 * C5901 + C26969 * C6115) * C9052 +
             (C207 * C5843 + C26969 * C5955) * C9098 + C3242 * C9051 +
             C3022 * C9097) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C9054 * C87 + C26968 * C92) * C207 +
              (C9054 * C208 + C26968 * C423) * C26969) *
                 C9051 +
             (C9784 + C9800) * C9052) *
                C26934 -
            ((C11819 + C11813) * C9052 +
             ((C9054 * C1368 + C26968 * C1636) * C26969 +
              (C9054 * C1218 + C26968 * C1224) * C207) *
                 C9051) *
                C26885) *
               C26933 +
           (((C11813 + C11819) * C9051 +
             ((C9054 * C5844 + C26968 * C5846) * C207 +
              (C9054 * C5956 + C26968 * C6168) * C26969) *
                 C9052) *
                C26885 -
            ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26934) *
               C26857) *
              C598 +
          (((((C9054 * C1217 + C26968 * C1223) * C207 +
              (C9054 * C1367 + C26968 * C1635) * C26969) *
                 C9051 +
             (C11814 + C11820) * C9052) *
                C26885 -
            ((C9802 + C9790) * C9052 +
             ((C9054 * C209 + C26968 * C424) * C26969 +
              (C9054 * C88 + C26968 * C93) * C207) *
                 C9051) *
                C26934) *
               C26933 +
           (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26934 -
            (((C9054 * C5955 + C26968 * C6167) * C26969 +
              (C9054 * C5843 + C26968 * C5845) * C207) *
                 C9052 +
             (C11820 + C11814) * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
             (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                 C26969) *
                C26968 * C26934 -
            ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                 C26969 +
             (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                 C207) *
                C26968 * C26885) *
               C26933 +
           (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                 C207 +
             (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                 C26969) *
                C26968 * C26885 -
            ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                 C26969 +
             (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                 C207) *
                C26968 * C26934) *
               C26857) *
              C598 +
          ((((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                 C207 +
             (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                 C26969) *
                C26968 * C26885 -
            ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                 C26969 +
             (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                 C207) *
                C26968 * C26934) *
               C26933 +
           (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                 C207 +
             (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                 C26969) *
                C26968 * C26934 -
            ((C9098 * C5955 + C9052 * C6219 + C9097 * C3012 + C9051 * C3379) *
                 C26969 +
             (C9098 * C5843 + C9052 * C5901 + C9097 * C2855 + C9051 * C2934) *
                 C207) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
             C9912 * C9052) *
                C26968 * C26934 -
            (C11957 * C9052 +
             (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
                C26968 * C26885) *
               C26933 +
           ((C11957 * C9051 +
             (C516 * C5844 + C6275 + C6275 + C26969 * C6272) * C9052) *
                C26968 * C26885 -
            (C9913 * C9052 + C9912 * C9051) * C26968 * C26934) *
               C26857) *
              C598 +
          (((C1778 * C9051 + C3463 * C9052) * C26968 * C26885 -
            (C1161 * C9052 + C540 * C9051) * C26968 * C26934) *
               C26933 +
           ((C1161 * C9051 + C1162 * C9052) * C26968 * C26934 -
            ((C516 * C5843 + C6274 + C6274 + C26969 * C6271) * C9052 +
             C3463 * C9051) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26821 * C595 -
           (C9423 * C9052 + C9422 * C9051) * C26821 * C596 +
           (C9423 * C9051 +
            (C9053 * C3959 + C9403 + C9403 + C26968 * C3963) * C26969 * C9052) *
               C26821 * C597) *
              C598 +
          ((C9424 * C9051 + C9425 * C9052) * C26821 * C596 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26821 * C595 -
           ((C9053 * C3958 + C9409 + C9409 + C26968 * C3962) * C26969 * C9052 +
            C9425 * C9051) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
           (C9053 * C601 + C9057 + C9057 + C26968 * C613) * C26969 * C9052) *
              C26821 * C26805 * C79 -
          ((C9053 * C600 + C9058 + C9058 + C26968 * C612) * C26969 * C9052 +
           (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
              C26821 * C26805 * C80 +
          ((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
           (C9053 * C604 + C9061 + C9061 + C26968 * C616) * C26969 * C9052) *
              C26821 * C26805 * C81 -
          ((C9053 * C1836 + C9062 + C9062 + C26968 * C1838) * C26969 * C9052 +
           (C9053 * C90 + C9063 + C9063 + C26968 * C100) * C26969 * C9051) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C1214 -
           ((C9053 * C2854 + C9964 + C9964 + C26968 * C2860) * C26969 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C1215 +
           ((C9053 * C1219 + C9966 + C9966 + C26968 * C1231) * C26969 * C9051 +
            (C9053 * C4313 + C9967 + C9967 + C26968 * C4317) * C26969 * C9052) *
               C1216) *
              C26805 * C598 +
          (((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
            (C9053 * C2855 + C9969 + C9969 + C26968 * C2861) * C26969 * C9052) *
               C1215 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C1214 -
           ((C9053 * C4312 + C9970 + C9970 + C26968 * C4316) * C26969 * C9052 +
            (C9053 * C1220 + C9971 + C9971 + C26968 * C1232) * C26969 * C9051) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26821 * C595 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26821 * C596 +
           ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C9054 +
            (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
                C26968) *
               C26969 * C26821 * C597) *
              C598 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                C9054 +
            (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                C26968) *
               C26969 * C26821 * C596 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26821 * C595 -
           ((C9098 * C3960 + C9052 * C4002 + C9097 * C609 + C9051 * C685) *
                C26968 +
            (C9098 * C3958 + C9052 * C4000 + C9097 * C603 + C9051 * C679) *
                C9054) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
           (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
               C26968) *
              C26969 * C26821 * C26805 * C79 -
          ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) * C26968 +
           (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C9054) *
              C26969 * C26821 * C26805 * C80 +
          ((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
           (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
               C26968) *
              C26969 * C26821 * C26805 * C81 -
          ((C9098 * C1837 + C9052 * C1892 + C9097 * C95 + C9051 * C153) *
               C26968 +
           (C9098 * C1836 + C9052 * C1891 + C9097 * C90 + C9051 * C148) *
               C9054) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C1214 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C1215 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C9054 +
            (C9097 * C1225 + C9051 * C1301 + C9098 * C4315 + C9052 * C4373) *
                C26968) *
               C26969 * C1216) *
              C26805 * C598 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C9054 +
            (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                C26968) *
               C26969 * C1215 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C1214 -
           ((C9098 * C4314 + C9052 * C4372 + C9097 * C1226 + C9051 * C1302) *
                C26968 +
            (C9098 * C4312 + C9052 * C4370 + C9097 * C1220 + C9051 * C1296) *
                C9054) *
               C26969 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26821 * C595 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 * C596 +
           ((C9545 + C9544) * C9051 +
            ((C207 * C3959 + C26969 * C4039) * C9054 +
             (C207 * C3961 + C26969 * C4041) * C26968) *
                C9052) *
               C26821 * C597) *
              C598 +
          (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26821 * C596 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26821 * C595 -
           (((C207 * C3960 + C26969 * C4040) * C26968 +
             (C207 * C3958 + C26969 * C4038) * C9054) *
                C9052 +
            (C9537 + C9536) * C9051) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C207 * C87 + C26969 * C208) * C9054 +
                                (C207 * C92 + C26969 * C213) * C26968) *
                                   C9051 +
                               ((C207 * C601 + C26969 * C751) * C9054 +
                                (C207 * C607 + C26969 * C757) * C26968) *
                                   C9052) *
                                  C26821 * C26805 * C79 -
                              ((C771 * C26968 + C772 * C9054) * C9052 +
                               (C232 * C26968 + C231 * C9054) * C9051) *
                                  C26821 * C26805 * C80 +
                              ((C234 * C9054 + C233 * C26968) * C9051 +
                               (C1956 * C9054 + C1957 * C26968) * C9052) *
                                  C26821 * C26805 * C81 -
                              (((C207 * C1837 + C26969 * C1950) * C26968 +
                                (C207 * C1836 + C26969 * C1949) * C9054) *
                                   C9052 +
                               (C236 * C26968 + C235 * C9054) * C9051) *
                                  C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C1214 -
           (((C207 * C2857 + C26969 * C3014) * C26968 +
             (C207 * C2854 + C26969 * C3011) * C9054) *
                C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C1215 +
           (((C207 * C1219 + C26969 * C1369) * C9054 +
             (C207 * C1225 + C26969 * C1375) * C26968) *
                C9051 +
            ((C207 * C4313 + C26969 * C4425) * C9054 +
             (C207 * C4315 + C26969 * C4427) * C26968) *
                C9052) *
               C1216) *
              C26805 * C598 +
          (((C1389 * C9054 + C1388 * C26968) * C9051 +
            (C3022 * C9054 + C3023 * C26968) * C9052) *
               C1215 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C1214 -
           (((C207 * C4314 + C26969 * C4426) * C26968 +
             (C207 * C4312 + C26969 * C4424) * C9054) *
                C9052 +
            (C1391 * C26968 + C1390 * C9054) * C9051) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26821 * C595 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26821 * C596 +
           (C9615 * C9097 + C9614 * C9051 +
            (C9054 * C3959 + C26968 * C3961) * C9098 +
            (C9054 * C4001 + C26968 * C4077) * C9052) *
               C26969 * C26821 * C597) *
              C598 +
          ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
               C26969 * C26821 * C596 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C26821 * C595 -
           ((C9054 * C4000 + C26968 * C4076) * C9052 +
            (C9054 * C3958 + C26968 * C3960) * C9098 + C9619 * C9051 +
            C9618 * C9097) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9054 * C87 + C26968 * C92) * C9097 +
                               (C9054 * C145 + C26968 * C270) * C9051 +
                               (C9054 * C601 + C26968 * C607) * C9098 +
                               (C9054 * C677 + C26968 * C825) * C9052) *
                                  C26969 * C26821 * C26805 * C79 -
                              ((C9054 * C676 + C26968 * C824) * C9052 +
                               (C9054 * C600 + C26968 * C606) * C9098 +
                               (C9054 * C146 + C26968 * C271) * C9051 +
                               (C9054 * C88 + C26968 * C93) * C9097) *
                                  C26969 * C26821 * C26805 * C80 +
                              ((C9054 * C89 + C26968 * C94) * C9097 +
                               (C9054 * C147 + C26968 * C272) * C9051 +
                               (C9054 * C604 + C26968 * C610) * C9098 +
                               (C9054 * C680 + C26968 * C828) * C9052) *
                                  C26969 * C26821 * C26805 * C81 -
                              ((C9054 * C1891 + C26968 * C2007) * C9052 +
                               (C9054 * C1836 + C26968 * C1837) * C9098 +
                               (C9054 * C148 + C26968 * C273) * C9051 +
                               (C9054 * C90 + C26968 * C95) * C9097) *
                                  C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C1214 -
           ((C9054 * C2933 + C26968 * C3089) * C9052 +
            (C9054 * C2854 + C26968 * C2857) * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C1215 +
           ((C9054 * C1219 + C26968 * C1225) * C9097 +
            (C9054 * C1295 + C26968 * C1443) * C9051 +
            (C9054 * C4313 + C26968 * C4315) * C9098 +
            (C9054 * C4371 + C26968 * C4479) * C9052) *
               C26969 * C1216) *
              C26805 * C598 +
          (((C9054 * C1217 + C26968 * C1223) * C9097 +
            (C9054 * C1293 + C26968 * C1441) * C9051 +
            (C9054 * C2855 + C26968 * C2858) * C9098 +
            (C9054 * C2934 + C26968 * C3090) * C9052) *
               C26969 * C1215 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C1214 -
           ((C9054 * C4370 + C26968 * C4478) * C9052 +
            (C9054 * C4312 + C26968 * C4314) * C9098 +
            (C9054 * C1296 + C26968 * C1444) * C9051 +
            (C9054 * C1220 + C26968 * C1226) * C9097) *
               C26969 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::pow(Pi, 2.5) *
         (((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 + C9205 +
            C9205 + C9052 * C881) *
               C26968 * C26969 * C26821 * C595 -
           (C9202 * C602 + C9670 + C9670 + C9052 * C882 + C9201 * C601 + C9671 +
            C9671 + C9051 * C881) *
               C26968 * C26969 * C26821 * C596 +
           (C9201 * C602 + C9672 + C9672 + C9051 * C882 + C9202 * C3959 +
            C9673 + C9673 + C9052 * C4113) *
               C26968 * C26969 * C26821 * C597) *
              C598 +
          ((C9201 * C600 + C9674 + C9674 + C9051 * C880 + C9202 * C603 + C9675 +
            C9675 + C9052 * C883) *
               C26968 * C26969 * C26821 * C596 -
           (C9202 * C600 + C9206 + C9206 + C9052 * C880 + C9201 * C88 + C9207 +
            C9207 + C9051 * C311) *
               C26968 * C26969 * C26821 * C595 -
           (C9202 * C3958 + C9676 + C9676 + C9052 * C4112 + C9201 * C603 +
            C9677 + C9677 + C9051 * C883) *
               C26968 * C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                               C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                                  C26968 * C26969 * C26821 * C26805 * C79 -
                              (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                               C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                                  C26968 * C26969 * C26821 * C26805 * C80 +
                              (C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                               C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                                  C26968 * C26969 * C26821 * C26805 * C81 -
                              (C9202 * C1836 + C9210 + C9210 + C9052 * C2058 +
                               C9201 * C90 + C9211 + C9211 + C9051 * C313) *
                                  C26968 * C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 + C9205 +
            C9205 + C9052 * C881) *
               C26968 * C26969 * C1214 -
           (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 + C9201 * C1218 +
            C10173 + C10173 + C9051 * C1498) *
               C26968 * C26969 * C1215 +
           (C9201 * C1219 + C10174 + C10174 + C9051 * C1499 + C9202 * C4313 +
            C10175 + C10175 + C9052 * C4531) *
               C26968 * C26969 * C1216) *
              C26805 * C598 +
          ((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 + C9202 * C2855 +
            C10177 + C10177 + C9052 * C3159) *
               C26968 * C26969 * C1215 -
           (C9202 * C600 + C9206 + C9206 + C9052 * C880 + C9201 * C88 + C9207 +
            C9207 + C9051 * C311) *
               C26968 * C26969 * C1214 -
           (C9202 * C4312 + C10178 + C10178 + C9052 * C4530 + C9201 * C1220 +
            C10179 + C10179 + C9051 * C1500) *
               C26968 * C26969 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26821 * C595 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26821 * C596 +
           (C9541 * C9097 + C9733 * C9051 +
            (C207 * C3959 + C26969 * C4039) * C9098 +
            (C207 * C4001 + C26969 * C4151) * C9052) *
               C26968 * C26821 * C597) *
              C598 +
          ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
               C26968 * C26821 * C596 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26821 * C595 -
           ((C207 * C4000 + C26969 * C4150) * C9052 +
            (C207 * C3958 + C26969 * C4038) * C9098 + C966 * C9051 +
            C773 * C9097) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C9097 +
           (C207 * C145 + C26969 * C369) * C9051 +
           (C207 * C601 + C26969 * C751) * C9098 +
           (C207 * C677 + C26969 * C953) * C9052) *
              C26968 * C26821 * C26805 * C79 -
          (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) * C26968 *
              C26821 * C26805 * C80 +
          (C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
              C26968 * C26821 * C26805 * C81 -
          ((C207 * C1891 + C26969 * C2115) * C9052 +
           (C207 * C1836 + C26969 * C1949) * C9098 + C386 * C9051 +
           C235 * C9097) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C1214 -
           ((C207 * C2933 + C26969 * C3235) * C9052 +
            (C207 * C2854 + C26969 * C3011) * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C1215 +
           ((C207 * C1219 + C26969 * C1369) * C9097 +
            (C207 * C1295 + C26969 * C1571) * C9051 +
            (C207 * C4313 + C26969 * C4425) * C9098 +
            (C207 * C4371 + C26969 * C4585) * C9052) *
               C26968 * C1216) *
              C26805 * C598 +
          ((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
               C26968 * C1215 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C1214 -
           ((C207 * C4370 + C26969 * C4584) * C9052 +
            (C207 * C4312 + C26969 * C4424) * C9098 + C1583 * C9051 +
            C1390 * C9097) *
               C26968 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26821 * C595 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 * C596 +
           ((C9789 + C9801) * C9051 +
            ((C9054 * C3959 + C26968 * C3961) * C207 +
             (C9054 * C4039 + C26968 * C4187) * C26969) *
                C9052) *
               C26821 * C597) *
              C598 +
          (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26821 * C596 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26821 * C595 -
           (((C9054 * C4038 + C26968 * C4186) * C26969 +
             (C9054 * C3958 + C26968 * C3960) * C207) *
                C9052 +
            (C9803 + C9793) * C9051) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9054 * C87 + C26968 * C92) * C207 +
                                (C9054 * C208 + C26968 * C423) * C26969) *
                                   C9051 +
                               ((C9054 * C601 + C26968 * C607) * C207 +
                                (C9054 * C751 + C26968 * C1019) * C26969) *
                                   C9052) *
                                  C26821 * C26805 * C79 -
                              (((C9054 * C750 + C26968 * C1018) * C26969 +
                                (C9054 * C600 + C26968 * C606) * C207) *
                                   C9052 +
                               ((C9054 * C209 + C26968 * C424) * C26969 +
                                (C9054 * C88 + C26968 * C93) * C207) *
                                   C9051) *
                                  C26821 * C26805 * C80 +
                              (((C9054 * C89 + C26968 * C94) * C207 +
                                (C9054 * C210 + C26968 * C425) * C26969) *
                                   C9051 +
                               ((C9054 * C604 + C26968 * C610) * C207 +
                                (C9054 * C754 + C26968 * C1022) * C26969) *
                                   C9052) *
                                  C26821 * C26805 * C81 -
                              (((C9054 * C1949 + C26968 * C2171) * C26969 +
                                (C9054 * C1836 + C26968 * C1837) * C207) *
                                   C9052 +
                               ((C9054 * C211 + C26968 * C426) * C26969 +
                                (C9054 * C90 + C26968 * C95) * C207) *
                                   C9051) *
                                  C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C1214 -
           (((C9054 * C3011 + C26968 * C3309) * C26969 +
             (C9054 * C2854 + C26968 * C2857) * C207) *
                C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C1215 +
           (((C9054 * C1219 + C26968 * C1225) * C207 +
             (C9054 * C1369 + C26968 * C1637) * C26969) *
                C9051 +
            ((C9054 * C4313 + C26968 * C4315) * C207 +
             (C9054 * C4425 + C26968 * C4637) * C26969) *
                C9052) *
               C1216) *
              C26805 * C598 +
          ((((C9054 * C1217 + C26968 * C1223) * C207 +
             (C9054 * C1367 + C26968 * C1635) * C26969) *
                C9051 +
            ((C9054 * C2855 + C26968 * C2858) * C207 +
             (C9054 * C3012 + C26968 * C3310) * C26969) *
                C9052) *
               C1215 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C1214 -
           (((C9054 * C4424 + C26968 * C4636) * C26969 +
             (C9054 * C4312 + C26968 * C4314) * C207) *
                C9052 +
            ((C9054 * C1370 + C26968 * C1638) * C26969 +
             (C9054 * C1220 + C26968 * C1226) * C207) *
                C9051) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26821 * C595 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26821 * C596 +
           ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C207 +
            (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
                C26969) *
               C26968 * C26821 * C597) *
              C598 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) * C207 +
            (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                C26969) *
               C26968 * C26821 * C596 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26821 * C595 -
           ((C9098 * C4038 + C9052 * C4222 + C9097 * C753 + C9051 * C1077) *
                C26969 +
            (C9098 * C3958 + C9052 * C4000 + C9097 * C603 + C9051 * C679) *
                C207) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
           (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
               C26969) *
              C26968 * C26821 * C26805 * C79 -
          ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
               C26969 +
           (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
              C26968 * C26821 * C26805 * C80 +
          ((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
           (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
               C26969) *
              C26968 * C26821 * C26805 * C81 -
          ((C9098 * C1949 + C9052 * C2222 + C9097 * C211 + C9051 * C465) *
               C26969 +
           (C9098 * C1836 + C9052 * C1891 + C9097 * C90 + C9051 * C148) *
               C207) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C1214 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C1215 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C207 +
            (C9097 * C1369 + C9051 * C1693 + C9098 * C4425 + C9052 * C4689) *
                C26969) *
               C26968 * C1216) *
              C26805 * C598 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C207 +
            (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                C26969) *
               C26968 * C1215 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C1214 -
           ((C9098 * C4424 + C9052 * C4688 + C9097 * C1370 + C9051 * C1694) *
                C26969 +
            (C9098 * C4312 + C9052 * C4370 + C9097 * C1220 + C9051 * C1296) *
                C207) *
               C26968 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26821 * C595 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C596 +
           (C9913 * C9051 +
            (C516 * C3959 + C4262 + C4262 + C26969 * C4259) * C9052) *
               C26968 * C26821 * C597) *
              C598 +
          ((C1161 * C9051 + C1162 * C9052) * C26968 * C26821 * C596 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C595 -
           ((C516 * C3958 + C4261 + C4261 + C26969 * C4258) * C9052 +
            C1162 * C9051) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
           (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C9052) *
              C26968 * C26821 * C26805 * C79 -
          (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C26805 * C80 +
          (C541 * C9051 + C2285 * C9052) * C26968 * C26821 * C26805 * C81 -
          ((C516 * C1836 + C2282 + C2282 + C26969 * C2278) * C9052 +
           C542 * C9051) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C1214 -
           ((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C1215 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C9051 +
            (C516 * C4313 + C4744 + C4744 + C26969 * C4741) * C9052) *
               C26968 * C1216) *
              C26805 * C598 +
          ((C1778 * C9051 + C3463 * C9052) * C26968 * C1215 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C1214 -
           ((C516 * C4312 + C4743 + C4743 + C26969 * C4740) * C9052 +
            C1779 * C9051) *
               C26968 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26934 -
           ((C9053 * C2854 + C9964 + C9964 + C26968 * C2860) * C26969 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26885) *
              C26805 * C26959 +
          (((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
            (C9053 * C2855 + C9969 + C9969 + C26968 * C2861) * C26969 * C9052) *
               C26885 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26934) *
              C26805 * C26960 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
            C10436 * C9052) *
               C26934 -
           ((C9053 * C2856 + C10902 + C10902 + C26968 * C2862) * C26969 *
                C9052 +
            (C9053 * C1221 + C10903 + C10903 + C26968 * C1233) * C26969 *
                C9051) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26934 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26885) *
              C26805 * C26959 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C9054 +
            (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                C26968) *
               C26969 * C26885 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26934) *
              C26805 * C26960 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
            (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
                C26968) *
               C26969 * C26934 -
           ((C9098 * C2859 + C9052 * C2938 + C9097 * C1227 + C9051 * C1303) *
                C26968 +
            (C9098 * C2856 + C9052 * C2935 + C9097 * C1221 + C9051 * C1297) *
                C9054) *
               C26969 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26934 -
           (((C207 * C2857 + C26969 * C3014) * C26968 +
             (C207 * C2854 + C26969 * C3011) * C9054) *
                C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26885) *
              C26805 * C26959 +
          (((C1389 * C9054 + C1388 * C26968) * C9051 +
            (C3022 * C9054 + C3023 * C26968) * C9052) *
               C26885 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26934) *
              C26805 * C26960 +
          (((C234 * C9054 + C233 * C26968) * C9051 +
            (C10537 + C10538) * C9052) *
               C26934 -
           (((C207 * C2859 + C26969 * C3016) * C26968 +
             (C207 * C2856 + C26969 * C3013) * C9054) *
                C9052 +
            (C2459 * C26968 + C2458 * C9054) * C9051) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C9097 +
                      (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
                      C9613 * C9052) *
                         C26969 * C26934 -
                     ((C9054 * C2933 + C26968 * C3089) * C9052 +
                      (C9054 * C2854 + C26968 * C2857) * C9098 +
                      (C9054 * C1294 + C26968 * C1442) * C9051 +
                      (C9054 * C1218 + C26968 * C1224) * C9097) *
                         C26969 * C26885) *
                        C26805 * C26959 +
                    (((C9054 * C1217 + C26968 * C1223) * C9097 +
                      (C9054 * C1293 + C26968 * C1441) * C9051 +
                      (C9054 * C2855 + C26968 * C2858) * C9098 +
                      (C9054 * C2934 + C26968 * C3090) * C9052) *
                         C26969 * C26885 -
                     (C9617 * C9052 + C9616 * C9098 +
                      (C9054 * C146 + C26968 * C271) * C9051 +
                      (C9054 * C88 + C26968 * C93) * C9097) *
                         C26969 * C26934) *
                        C26805 * C26960 +
                    (((C9054 * C89 + C26968 * C94) * C9097 +
                      (C9054 * C147 + C26968 * C272) * C9051 + C10593 * C9098 +
                      C10594 * C9052) *
                         C26969 * C26934 -
                     ((C9054 * C2935 + C26968 * C3091) * C9052 +
                      (C9054 * C2856 + C26968 * C2859) * C9098 +
                      (C9054 * C1297 + C26968 * C1445) * C9051 +
                      (C9054 * C1221 + C26968 * C1227) * C9097) *
                         C26969 * C26885) *
                        C26805 * C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26934 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26885) *
                        C26805 * C26959 +
                    ((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                      C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                         C26968 * C26969 * C26885 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C26934) *
                        C26805 * C26960 +
                    ((C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                      C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                         C26968 * C26969 * C26934 -
                     (C9202 * C2856 + C11104 + C11104 + C9052 * C3160 +
                      C9201 * C1221 + C11105 + C11105 + C9051 * C1501) *
                         C26968 * C26969 * C26885) *
                        C26805 * C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26934 -
           ((C207 * C2933 + C26969 * C3235) * C9052 +
            (C207 * C2854 + C26969 * C3011) * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26885) *
              C26805 * C26959 +
          ((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
               C26968 * C26885 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26934) *
              C26805 * C26960 +
          ((C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
               C26968 * C26934 -
           ((C207 * C2935 + C26969 * C3237) * C9052 +
            (C207 * C2856 + C26969 * C3013) * C9098 + C2622 * C9051 +
            C2458 * C9097) *
               C26968 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26934 -
           (((C9054 * C3011 + C26968 * C3309) * C26969 +
             (C9054 * C2854 + C26968 * C2857) * C207) *
                C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26885) *
              C26805 * C26959 +
          ((((C9054 * C1217 + C26968 * C1223) * C207 +
             (C9054 * C1367 + C26968 * C1635) * C26969) *
                C9051 +
            ((C9054 * C2855 + C26968 * C2858) * C207 +
             (C9054 * C3012 + C26968 * C3310) * C26969) *
                C9052) *
               C26885 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26934) *
              C26805 * C26960 +
          ((((C9054 * C89 + C26968 * C94) * C207 +
             (C9054 * C210 + C26968 * C425) * C26969) *
                C9051 +
            (C10747 + C10751) * C9052) *
               C26934 -
           (((C9054 * C3013 + C26968 * C3311) * C26969 +
             (C9054 * C2856 + C26968 * C2859) * C207) *
                C9052 +
            ((C9054 * C1371 + C26968 * C1639) * C26969 +
             (C9054 * C1221 + C26968 * C1227) * C207) *
                C9051) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26934 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26885) *
              C26805 * C26959 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C207 +
            (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                C26969) *
               C26968 * C26885 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26934) *
              C26805 * C26960 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
            (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
                C26969) *
               C26968 * C26934 -
           ((C9098 * C3013 + C9052 * C3380 + C9097 * C1371 + C9051 * C1695) *
                C26969 +
            (C9098 * C2856 + C9052 * C2935 + C9097 * C1221 + C9051 * C1297) *
                C207) *
               C26968 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
                      C9912 * C9052) *
                         C26968 * C26934 -
                     ((C516 * C2854 + C3456 + C3456 + C26969 * C3452) * C9052 +
                      (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
                         C26968 * C26885) *
                        C26805 * C26959 +
                    ((C1778 * C9051 + C3463 * C9052) * C26968 * C26885 -
                     (C1161 * C9052 + C540 * C9051) * C26968 * C26934) *
                        C26805 * C26960 +
                    ((C541 * C9051 + C2285 * C9052) * C26968 * C26934 -
                     ((C516 * C2856 + C3460 + C3460 + C26969 * C3454) * C9052 +
                      C2787 * C9051) *
                         C26968 * C26885) *
                        C26805 * C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
           (C9053 * C601 + C9057 + C9057 + C26968 * C613) * C26969 * C9052) *
              C26821 * C26805 * C79 -
          ((C9053 * C600 + C9058 + C9058 + C26968 * C612) * C26969 * C9052 +
           (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
              C26821 * C26805 * C80 +
          ((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
           (C9053 * C604 + C9061 + C9061 + C26968 * C616) * C26969 * C9052) *
              C26821 * C26805 * C81 -
          ((C9053 * C1836 + C9062 + C9062 + C26968 * C1838) * C26969 * C9052 +
           (C9053 * C90 + C9063 + C9063 + C26968 * C100) * C26969 * C9051) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26821 * C595 -
           (C9423 * C9052 + C9422 * C9051) * C26821 * C596 +
           (C9423 * C9051 +
            (C9053 * C3959 + C9403 + C9403 + C26968 * C3963) * C26969 * C9052) *
               C26821 * C597) *
              C598 +
          ((C9424 * C9051 + C9425 * C9052) * C26821 * C596 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26821 * C595 -
           ((C9053 * C3958 + C9409 + C9409 + C26968 * C3962) * C26969 * C9052 +
            C9425 * C9051) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
           (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
               C26968) *
              C26969 * C26821 * C26805 * C79 -
          ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) * C26968 +
           (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C9054) *
              C26969 * C26821 * C26805 * C80 +
          ((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
           (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
               C26968) *
              C26969 * C26821 * C26805 * C81 -
          ((C9098 * C1837 + C9052 * C1892 + C9097 * C95 + C9051 * C153) *
               C26968 +
           (C9098 * C1836 + C9052 * C1891 + C9097 * C90 + C9051 * C148) *
               C9054) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26821 * C595 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26821 * C596 +
           ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C9054 +
            (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
                C26968) *
               C26969 * C26821 * C597) *
              C598 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                C9054 +
            (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                C26968) *
               C26969 * C26821 * C596 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26821 * C595 -
           ((C9098 * C3960 + C9052 * C4002 + C9097 * C609 + C9051 * C685) *
                C26968 +
            (C9098 * C3958 + C9052 * C4000 + C9097 * C603 + C9051 * C679) *
                C9054) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9054 +
            (C207 * C92 + C26969 * C213) * C26968) *
               C9051 +
           ((C207 * C601 + C26969 * C751) * C9054 +
            (C207 * C607 + C26969 * C757) * C26968) *
               C9052) *
              C26821 * C26805 * C79 -
          ((C771 * C26968 + C772 * C9054) * C9052 +
           (C232 * C26968 + C231 * C9054) * C9051) *
              C26821 * C26805 * C80 +
          ((C234 * C9054 + C233 * C26968) * C9051 +
           (C1956 * C9054 + C1957 * C26968) * C9052) *
              C26821 * C26805 * C81 -
          (((C207 * C1837 + C26969 * C1950) * C26968 +
            (C207 * C1836 + C26969 * C1949) * C9054) *
               C9052 +
           (C236 * C26968 + C235 * C9054) * C9051) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26821 * C595 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 * C596 +
           ((C9545 + C9544) * C9051 +
            ((C207 * C3959 + C26969 * C4039) * C9054 +
             (C207 * C3961 + C26969 * C4041) * C26968) *
                C9052) *
               C26821 * C597) *
              C598 +
          (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26821 * C596 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26821 * C595 -
           (((C207 * C3960 + C26969 * C4040) * C26968 +
             (C207 * C3958 + C26969 * C4038) * C9054) *
                C9052 +
            (C9537 + C9536) * C9051) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9054 * C87 + C26968 * C92) * C9097 +
           (C9054 * C145 + C26968 * C270) * C9051 +
           (C9054 * C601 + C26968 * C607) * C9098 +
           (C9054 * C677 + C26968 * C825) * C9052) *
              C26969 * C26821 * C26805 * C79 -
          ((C9054 * C676 + C26968 * C824) * C9052 +
           (C9054 * C600 + C26968 * C606) * C9098 +
           (C9054 * C146 + C26968 * C271) * C9051 +
           (C9054 * C88 + C26968 * C93) * C9097) *
              C26969 * C26821 * C26805 * C80 +
          ((C9054 * C89 + C26968 * C94) * C9097 +
           (C9054 * C147 + C26968 * C272) * C9051 +
           (C9054 * C604 + C26968 * C610) * C9098 +
           (C9054 * C680 + C26968 * C828) * C9052) *
              C26969 * C26821 * C26805 * C81 -
          ((C9054 * C1891 + C26968 * C2007) * C9052 +
           (C9054 * C1836 + C26968 * C1837) * C9098 +
           (C9054 * C148 + C26968 * C273) * C9051 +
           (C9054 * C90 + C26968 * C95) * C9097) *
              C26969 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26821 * C595 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26821 * C596 +
           (C9615 * C9097 + C9614 * C9051 +
            (C9054 * C3959 + C26968 * C3961) * C9098 +
            (C9054 * C4001 + C26968 * C4077) * C9052) *
               C26969 * C26821 * C597) *
              C598 +
          ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
               C26969 * C26821 * C596 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C26821 * C595 -
           ((C9054 * C4000 + C26968 * C4076) * C9052 +
            (C9054 * C3958 + C26968 * C3960) * C9098 + C9619 * C9051 +
            C9618 * C9097) *
               C26969 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 +
                     C9205 + C9205 + C9052 * C881) *
                        C26968 * C26969 * C26821 * C26805 * C79 -
                    (C9202 * C600 + C9206 + C9206 + C9052 * C880 + C9201 * C88 +
                     C9207 + C9207 + C9051 * C311) *
                        C26968 * C26969 * C26821 * C26805 * C80 +
                    (C9201 * C89 + C9208 + C9208 + C9051 * C312 + C9202 * C604 +
                     C9209 + C9209 + C9052 * C884) *
                        C26968 * C26969 * C26821 * C26805 * C81 -
                    (C9202 * C1836 + C9210 + C9210 + C9052 * C2058 +
                     C9201 * C90 + C9211 + C9211 + C9051 * C313) *
                        C26968 * C26969 * C26821 * C26805 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26821 * C595 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C26821 * C596 +
                     (C9201 * C602 + C9672 + C9672 + C9051 * C882 +
                      C9202 * C3959 + C9673 + C9673 + C9052 * C4113) *
                         C26968 * C26969 * C26821 * C597) *
                        C598 +
                    ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                      C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                         C26968 * C26969 * C26821 * C596 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C26821 * C595 -
                     (C9202 * C3958 + C9676 + C9676 + C9052 * C4112 +
                      C9201 * C603 + C9677 + C9677 + C9051 * C883) *
                         C26968 * C26969 * C26821 * C597) *
                        C26792)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C9097 +
           (C207 * C145 + C26969 * C369) * C9051 +
           (C207 * C601 + C26969 * C751) * C9098 +
           (C207 * C677 + C26969 * C953) * C9052) *
              C26968 * C26821 * C26805 * C79 -
          (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) * C26968 *
              C26821 * C26805 * C80 +
          (C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
              C26968 * C26821 * C26805 * C81 -
          ((C207 * C1891 + C26969 * C2115) * C9052 +
           (C207 * C1836 + C26969 * C1949) * C9098 + C386 * C9051 +
           C235 * C9097) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26821 * C595 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26821 * C596 +
           (C9541 * C9097 + C9733 * C9051 +
            (C207 * C3959 + C26969 * C4039) * C9098 +
            (C207 * C4001 + C26969 * C4151) * C9052) *
               C26968 * C26821 * C597) *
              C598 +
          ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
               C26968 * C26821 * C596 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26821 * C595 -
           ((C207 * C4000 + C26969 * C4150) * C9052 +
            (C207 * C3958 + C26969 * C4038) * C9098 + C966 * C9051 +
            C773 * C9097) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C207 +
            (C9054 * C208 + C26968 * C423) * C26969) *
               C9051 +
           ((C9054 * C601 + C26968 * C607) * C207 +
            (C9054 * C751 + C26968 * C1019) * C26969) *
               C9052) *
              C26821 * C26805 * C79 -
          (((C9054 * C750 + C26968 * C1018) * C26969 +
            (C9054 * C600 + C26968 * C606) * C207) *
               C9052 +
           ((C9054 * C209 + C26968 * C424) * C26969 +
            (C9054 * C88 + C26968 * C93) * C207) *
               C9051) *
              C26821 * C26805 * C80 +
          (((C9054 * C89 + C26968 * C94) * C207 +
            (C9054 * C210 + C26968 * C425) * C26969) *
               C9051 +
           ((C9054 * C604 + C26968 * C610) * C207 +
            (C9054 * C754 + C26968 * C1022) * C26969) *
               C9052) *
              C26821 * C26805 * C81 -
          (((C9054 * C1949 + C26968 * C2171) * C26969 +
            (C9054 * C1836 + C26968 * C1837) * C207) *
               C9052 +
           ((C9054 * C211 + C26968 * C426) * C26969 +
            (C9054 * C90 + C26968 * C95) * C207) *
               C9051) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26821 * C595 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 * C596 +
           ((C9789 + C9801) * C9051 +
            ((C9054 * C3959 + C26968 * C3961) * C207 +
             (C9054 * C4039 + C26968 * C4187) * C26969) *
                C9052) *
               C26821 * C597) *
              C598 +
          (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26821 * C596 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26821 * C595 -
           (((C9054 * C4038 + C26968 * C4186) * C26969 +
             (C9054 * C3958 + C26968 * C3960) * C207) *
                C9052 +
            (C9803 + C9793) * C9051) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
           (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
               C26969) *
              C26968 * C26821 * C26805 * C79 -
          ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
               C26969 +
           (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
              C26968 * C26821 * C26805 * C80 +
          ((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
           (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
               C26969) *
              C26968 * C26821 * C26805 * C81 -
          ((C9098 * C1949 + C9052 * C2222 + C9097 * C211 + C9051 * C465) *
               C26969 +
           (C9098 * C1836 + C9052 * C1891 + C9097 * C90 + C9051 * C148) *
               C207) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26821 * C595 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26821 * C596 +
           ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C207 +
            (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
                C26969) *
               C26968 * C26821 * C597) *
              C598 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) * C207 +
            (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                C26969) *
               C26968 * C26821 * C596 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26821 * C595 -
           ((C9098 * C4038 + C9052 * C4222 + C9097 * C753 + C9051 * C1077) *
                C26969 +
            (C9098 * C3958 + C9052 * C4000 + C9097 * C603 + C9051 * C679) *
                C207) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
           (C516 * C601 + C1150 + C1150 + C26969 * C1141) * C9052) *
              C26968 * C26821 * C26805 * C79 -
          (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C26805 * C80 +
          (C541 * C9051 + C2285 * C9052) * C26968 * C26821 * C26805 * C81 -
          ((C516 * C1836 + C2282 + C2282 + C26969 * C2278) * C9052 +
           C542 * C9051) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26821 * C595 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C596 +
           (C9913 * C9051 +
            (C516 * C3959 + C4262 + C4262 + C26969 * C4259) * C9052) *
               C26968 * C26821 * C597) *
              C598 +
          ((C1161 * C9051 + C1162 * C9052) * C26968 * C26821 * C596 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C595 -
           ((C516 * C3958 + C4261 + C4261 + C26969 * C4258) * C9052 +
            C1162 * C9051) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26821 * C26961 -
           (C9423 * C9052 + C9422 * C9051) * C26821 * C26962 +
           (C9423 * C9051 + C12451 * C9052) * C26821 * C4796) *
              C26925 +
          ((C9424 * C9051 + C9425 * C9052) * C26821 * C26962 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26821 * C26961 -
           ((C9053 * C3958 + C9409 + C9409 + C26968 * C3962) * C26969 * C9052 +
            C9425 * C9051) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26821 * C26961 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26821 * C26962 +
           ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C9054 +
            (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
                C26968) *
               C26969 * C26821 * C4796) *
              C26925 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                C9054 +
            (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                C26968) *
               C26969 * C26821 * C26962 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26821 * C26961 -
           ((C9098 * C3960 + C9052 * C4002 + C9097 * C609 + C9051 * C685) *
                C26968 +
            (C9098 * C3958 + C9052 * C4000 + C9097 * C603 + C9051 * C679) *
                C9054) *
               C26969 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26821 * C26961 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 *
               C26962 +
           ((C9545 + C9544) * C9051 + (C12530 + C12531) * C9052) * C26821 *
               C4796) *
              C26925 +
          (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26821 *
               C26962 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26821 * C26961 -
           (((C207 * C3960 + C26969 * C4040) * C26968 +
             (C207 * C3958 + C26969 * C4038) * C9054) *
                C9052 +
            (C9537 + C9536) * C9051) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26821 * C26961 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26821 * C26962 +
           (C9615 * C9097 + C9614 * C9051 + C12571 * C9098 + C12572 * C9052) *
               C26969 * C26821 * C4796) *
              C26925 +
          ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
               C26969 * C26821 * C26962 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C26821 * C26961 -
           ((C9054 * C4000 + C26968 * C4076) * C9052 +
            (C9054 * C3958 + C26968 * C3960) * C9098 + C9619 * C9051 +
            C9618 * C9097) *
               C26969 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26821 * C26961 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C26821 * C26962 +
                     (C9201 * C602 + C9672 + C9672 + C9051 * C882 +
                      C9202 * C3959 + C9673 + C9673 + C9052 * C4113) *
                         C26968 * C26969 * C26821 * C4796) *
                        C26925 +
                    ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                      C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                         C26968 * C26969 * C26821 * C26962 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C26821 * C26961 -
                     (C9202 * C3958 + C9676 + C9676 + C9052 * C4112 +
                      C9201 * C603 + C9677 + C9677 + C9051 * C883) *
                         C26968 * C26969 * C26821 * C4796) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26821 * C26961 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26821 * C26962 +
           (C9541 * C9097 + C9733 * C9051 + C12528 * C9098 + C12647 * C9052) *
               C26968 * C26821 * C4796) *
              C26925 +
          ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
               C26968 * C26821 * C26962 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26821 * C26961 -
           ((C207 * C4000 + C26969 * C4150) * C9052 +
            (C207 * C3958 + C26969 * C4038) * C9098 + C966 * C9051 +
            C773 * C9097) *
               C26968 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26821 * C26961 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 *
               C26962 +
           ((C9789 + C9801) * C9051 + (C12683 + C12687) * C9052) * C26821 *
               C4796) *
              C26925 +
          (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26821 *
               C26962 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26821 * C26961 -
           (((C9054 * C4038 + C26968 * C4186) * C26969 +
             (C9054 * C3958 + C26968 * C3960) * C207) *
                C9052 +
            (C9803 + C9793) * C9051) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26821 * C26961 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26821 * C26962 +
           ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C207 +
            (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
                C26969) *
               C26968 * C26821 * C4796) *
              C26925 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) * C207 +
            (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                C26969) *
               C26968 * C26821 * C26962 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26821 * C26961 -
           ((C9098 * C4038 + C9052 * C4222 + C9097 * C753 + C9051 * C1077) *
                C26969 +
            (C9098 * C3958 + C9052 * C4000 + C9097 * C603 + C9051 * C679) *
                C207) *
               C26968 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26821 * C26961 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C26962 +
           (C9913 * C9051 + C12763 * C9052) * C26968 * C26821 * C4796) *
              C26925 +
          ((C1161 * C9051 + C1162 * C9052) * C26968 * C26821 * C26962 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C26961 -
           ((C516 * C3958 + C4261 + C4261 + C26969 * C4258) * C9052 +
            C1162 * C9051) *
               C26968 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26934 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26885) *
              C26961 +
          ((C11384 * C9051 + C14367 * C9052) * C26885 -
           (C9423 * C9052 + C9422 * C9051) * C26934) *
              C26962 +
          ((C9423 * C9051 + C12451 * C9052) * C26934 -
           ((C9053 * C14357 + C14363 + C14363 + C26968 * C14359) * C26969 *
                C9052 +
            C14367 * C9051) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26934 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26885) *
              C26961 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C9054 +
            (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                C26968) *
               C26969 * C26885 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26934) *
              C26962 +
          (((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C9054 +
            (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
                C26968) *
               C26969 * C26934 -
           ((C9098 * C14358 + C9052 * C14418 + C9097 * C5846 + C9051 * C5904) *
                C26968 +
            (C9098 * C14357 + C9052 * C14417 + C9097 * C5844 + C9051 * C5902) *
                C9054) *
               C26969 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26934 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26885) *
              C26961 +
          (((C11527 + C11526) * C9051 + (C14478 + C14479) * C9052) * C26885 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26934) *
              C26962 +
          (((C9545 + C9544) * C9051 + (C12530 + C12531) * C9052) * C26934 -
           (((C207 * C14358 + C26969 * C14470) * C26968 +
             (C207 * C14357 + C26969 * C14469) * C9054) *
                C9052 +
            (C14479 + C14478) * C9051) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26934 -
           (C11602 * C9052 + C11603 * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C26885) *
              C26961 +
          ((C11603 * C9097 + C11602 * C9051 + C14535 * C9098 + C14536 * C9052) *
               C26969 * C26885 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26934) *
              C26962 +
          ((C9615 * C9097 + C9614 * C9051 + C12571 * C9098 + C12572 * C9052) *
               C26969 * C26934 -
           ((C9054 * C14417 + C26968 * C14529) * C9052 +
            (C9054 * C14357 + C26968 * C14358) * C9098 + C14536 * C9051 +
            C14535 * C9097) *
               C26969 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyy[21] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26934 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26885) *
                        C26961 +
                    ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                      C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                         C26968 * C26969 * C26885 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C26934) *
                        C26962 +
                    ((C9201 * C602 + C9672 + C9672 + C9051 * C882 +
                      C9202 * C3959 + C9673 + C9673 + C9052 * C4113) *
                         C26968 * C26969 * C26934 -
                     (C9202 * C14357 + C14588 + C14588 + C9052 * C14586 +
                      C9201 * C5844 + C14589 + C14589 + C9051 * C6062) *
                         C26968 * C26969 * C26885) *
                        C4796) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26934 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26885) *
              C26961 +
          ((C11525 * C9097 + C11744 * C9051 + C14476 * C9098 + C14643 * C9052) *
               C26968 * C26885 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26934) *
              C26962 +
          ((C9541 * C9097 + C9733 * C9051 + C12528 * C9098 + C12647 * C9052) *
               C26968 * C26934 -
           ((C207 * C14417 + C26969 * C14639) * C9052 +
            (C207 * C14357 + C26969 * C14469) * C9098 + C14643 * C9051 +
            C14476 * C9097) *
               C26968 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26934 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26885) *
              C26961 +
          (((C11813 + C11819) * C9051 + (C14695 + C14699) * C9052) * C26885 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26934) *
              C26962 +
          (((C9789 + C9801) * C9051 + (C12683 + C12687) * C9052) * C26934 -
           (((C9054 * C14469 + C26968 * C14693) * C26969 +
             (C9054 * C14357 + C26968 * C14358) * C207) *
                C9052 +
            (C14699 + C14695) * C9051) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26934 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26885) *
              C26961 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C207 +
            (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                C26969) *
               C26968 * C26885 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26934) *
              C26962 +
          (((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C207 +
            (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
                C26969) *
               C26968 * C26934 -
           ((C9098 * C14469 + C9052 * C14749 + C9097 * C5956 + C9051 * C6220) *
                C26969 +
            (C9098 * C14357 + C9052 * C14417 + C9097 * C5844 + C9051 * C5902) *
                C207) *
               C26968 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26934 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C26885) *
              C26961 +
          ((C11957 * C9051 + C14807 * C9052) * C26968 * C26885 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26934) *
              C26962 +
          ((C9913 * C9051 + C12763 * C9052) * C26968 * C26934 -
           ((C516 * C14357 + C14804 + C14804 + C26969 * C14800) * C9052 +
            C14807 * C9051) *
               C26968 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
           C9422 * C9052) *
              C26821 * C3953 -
          (C9423 * C9052 + C9422 * C9051) * C26821 * C3954 +
          (C9423 * C9051 + C12451 * C9052) * C26821 * C3955 -
          ((C9053 * C12441 + C12447 + C12447 + C26968 * C12443) * C26969 *
               C9052 +
           C12451 * C9051) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26821 * C3514 -
           (C9423 * C9052 + C9422 * C9051) * C26821 * C26857) *
              C3516 +
          ((C9424 * C9051 + C9425 * C9052) * C26821 * C26857 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26821 * C3514) *
              C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
            C10436 * C9052) *
               C26821 * C3514 -
           ((C9053 * C605 + C10432 + C10432 + C26968 * C617) * C26969 * C9052 +
            C10436 * C9051) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C1214 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C1215 +
           ((C9053 * C1219 + C9966 + C9966 + C26968 * C1231) * C26969 * C9051 +
            C12823 * C9052) *
               C1216) *
              C3514 +
          ((C11384 * C9051 +
            (C9053 * C5844 + C11374 + C11374 + C26968 * C5848) * C26969 *
                C9052) *
               C1215 -
           (C9423 * C9052 + C9422 * C9051) * C1214 -
           ((C9053 * C12813 + C12819 + C12819 + C26968 * C12815) * C26969 *
                C9052 +
            C12823 * C9051) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
           (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
               C26968) *
              C26969 * C26821 * C3953 -
          ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
               C26968 +
           (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
               C9054) *
              C26969 * C26821 * C3954 +
          ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
               C9054 +
           (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
               C26968) *
              C26969 * C26821 * C3955 -
          ((C9098 * C12442 + C9052 * C12486 + C9097 * C3961 + C9051 * C4003) *
               C26968 +
           (C9098 * C12441 + C9052 * C12485 + C9097 * C3959 + C9051 * C4001) *
               C9054) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26821 * C3514 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26821 * C26857) *
              C3516 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                C9054 +
            (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                C26968) *
               C26969 * C26821 * C26857 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26821 * C3514) *
              C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
            (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
                C26968) *
               C26969 * C26821 * C3514 -
           ((C9098 * C611 + C9052 * C687 + C9097 * C610 + C9051 * C686) *
                C26968 +
            (C9098 * C605 + C9052 * C681 + C9097 * C604 + C9051 * C680) *
                C9054) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C1214 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C1215 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C9054 +
            (C9097 * C1225 + C9051 * C1301 + C9098 * C4315 + C9052 * C4373) *
                C26968) *
               C26969 * C1216) *
              C3514 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C9054 +
            (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                C26968) *
               C26969 * C1215 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C1214 -
           ((C9098 * C12814 + C9052 * C12874 + C9097 * C4315 + C9051 * C4373) *
                C26968 +
            (C9098 * C12813 + C9052 * C12873 + C9097 * C4313 + C9051 * C4371) *
                C9054) *
               C26969 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9054 +
            (C207 * C92 + C26969 * C213) * C26968) *
               C9051 +
           (C9542 + C9543) * C9052) *
              C26821 * C3953 -
          ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 * C3954 +
          ((C9545 + C9544) * C9051 + (C12530 + C12531) * C9052) * C26821 *
              C3955 -
          (((C207 * C12442 + C26969 * C12522) * C26968 +
            (C207 * C12441 + C26969 * C12521) * C9054) *
               C9052 +
           (C12531 + C12530) * C9051) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26821 * C3514 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 *
               C26857) *
              C3516 +
          (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26821 *
               C26857 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26821 * C3514) *
              C3517 +
          (((C234 * C9054 + C233 * C26968) * C9051 +
            (C10537 + C10538) * C9052) *
               C26821 * C3514 -
           (((C207 * C611 + C26969 * C761) * C26968 +
             (C207 * C605 + C26969 * C755) * C9054) *
                C9052 +
            (C10538 + C10537) * C9051) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C1214 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C1215 +
           (((C207 * C1219 + C26969 * C1369) * C9054 +
             (C207 * C1225 + C26969 * C1375) * C26968) *
                C9051 +
            (C12934 + C12935) * C9052) *
               C1216) *
              C3514 +
          (((C11527 + C11526) * C9051 +
            ((C207 * C5844 + C26969 * C5956) * C9054 +
             (C207 * C5846 + C26969 * C5958) * C26968) *
                C9052) *
               C1215 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C1214 -
           (((C207 * C12814 + C26969 * C12926) * C26968 +
             (C207 * C12813 + C26969 * C12925) * C9054) *
                C9052 +
            (C12935 + C12934) * C9051) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C9054 * C87 + C26968 * C92) * C9097 +
           (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
           C9613 * C9052) *
              C26969 * C26821 * C3953 -
          (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
              C26969 * C26821 * C3954 +
          (C9615 * C9097 + C9614 * C9051 + C12571 * C9098 + C12572 * C9052) *
              C26969 * C26821 * C3955 -
          ((C9054 * C12485 + C26968 * C12565) * C9052 +
           (C9054 * C12441 + C26968 * C12442) * C9098 + C12572 * C9051 +
           C12571 * C9097) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26821 * C3514 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26821 * C26857) *
              C3516 +
          ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
               C26969 * C26821 * C26857 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C26821 * C3514) *
              C3517 +
          (((C9054 * C89 + C26968 * C94) * C9097 +
            (C9054 * C147 + C26968 * C272) * C9051 + C10593 * C9098 +
            C10594 * C9052) *
               C26969 * C26821 * C3514 -
           ((C9054 * C681 + C26968 * C829) * C9052 +
            (C9054 * C605 + C26968 * C611) * C9098 + C10594 * C9051 +
            C10593 * C9097) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C1214 -
           (C11602 * C9052 + C11603 * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C1215 +
           ((C9054 * C1219 + C26968 * C1225) * C9097 +
            (C9054 * C1295 + C26968 * C1443) * C9051 + C12991 * C9098 +
            C12992 * C9052) *
               C26969 * C1216) *
              C3514 +
          ((C11603 * C9097 + C11602 * C9051 +
            (C9054 * C5844 + C26968 * C5846) * C9098 +
            (C9054 * C5902 + C26968 * C6010) * C9052) *
               C26969 * C1215 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C1214 -
           ((C9054 * C12873 + C26968 * C12985) * C9052 +
            (C9054 * C12813 + C26968 * C12814) * C9098 + C12992 * C9051 +
            C12991 * C9097) *
               C26969 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 + C9205 +
           C9205 + C9052 * C881) *
              C26968 * C26969 * C26821 * C3953 -
          (C9202 * C602 + C9670 + C9670 + C9052 * C882 + C9201 * C601 + C9671 +
           C9671 + C9051 * C881) *
              C26968 * C26969 * C26821 * C3954 +
          (C9201 * C602 + C9672 + C9672 + C9051 * C882 + C9202 * C3959 + C9673 +
           C9673 + C9052 * C4113) *
              C26968 * C26969 * C26821 * C3955 -
          (C9202 * C12441 + C12608 + C12608 + C9052 * C12606 + C9201 * C3959 +
           C12609 + C12609 + C9051 * C4113) *
              C26968 * C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                                C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                                   C26968 * C26969 * C26821 * C3514 -
                               (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                                C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                                   C26968 * C26969 * C26821 * C26857) *
                                  C3516 +
                              ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                                C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                                   C26968 * C26969 * C26821 * C26857 -
                               (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                                C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                                   C26968 * C26969 * C26821 * C3514) *
                                  C3517 +
                              ((C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                                C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                                   C26968 * C26969 * C26821 * C3514 -
                               (C9202 * C605 + C10645 + C10645 + C9052 * C885 +
                                C9201 * C604 + C10646 + C10646 + C9051 * C884) *
                                   C26968 * C26969 * C26821 * C26857) *
                                  C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 + C9205 +
            C9205 + C9052 * C881) *
               C26968 * C26969 * C1214 -
           (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 + C9201 * C1218 +
            C10173 + C10173 + C9051 * C1498) *
               C26968 * C26969 * C1215 +
           (C9201 * C1219 + C10174 + C10174 + C9051 * C1499 + C9202 * C4313 +
            C10175 + C10175 + C9052 * C4531) *
               C26968 * C26969 * C1216) *
              C3514 +
          ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 + C9202 * C5844 +
            C11673 + C11673 + C9052 * C6062) *
               C26968 * C26969 * C1215 -
           (C9202 * C602 + C9670 + C9670 + C9052 * C882 + C9201 * C601 + C9671 +
            C9671 + C9051 * C881) *
               C26968 * C26969 * C1214 -
           (C9202 * C12813 + C13044 + C13044 + C9052 * C13042 + C9201 * C4313 +
            C13045 + C13045 + C9051 * C4531) *
               C26968 * C26969 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C9097 +
           (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
           C9732 * C9052) *
              C26968 * C26821 * C3953 -
          (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
              C26968 * C26821 * C3954 +
          (C9541 * C9097 + C9733 * C9051 + C12528 * C9098 + C12647 * C9052) *
              C26968 * C26821 * C3955 -
          ((C207 * C12485 + C26969 * C12643) * C9052 +
           (C207 * C12441 + C26969 * C12521) * C9098 + C12647 * C9051 +
           C12528 * C9097) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26821 * C3514 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26821 * C26857) *
              C3516 +
          ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
               C26968 * C26821 * C26857 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26821 * C3514) *
              C3517 +
          ((C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
               C26968 * C26821 * C3514 -
           ((C207 * C681 + C26969 * C957) * C9052 +
            (C207 * C605 + C26969 * C755) * C9098 + C2120 * C9051 +
            C1956 * C9097) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C1214 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C1215 +
           ((C207 * C1219 + C26969 * C1369) * C9097 +
            (C207 * C1295 + C26969 * C1571) * C9051 + C12932 * C9098 +
            C13099 * C9052) *
               C26968 * C1216) *
              C3514 +
          ((C11525 * C9097 + C11744 * C9051 +
            (C207 * C5844 + C26969 * C5956) * C9098 +
            (C207 * C5902 + C26969 * C6116) * C9052) *
               C26968 * C1215 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C1214 -
           ((C207 * C12873 + C26969 * C13095) * C9052 +
            (C207 * C12813 + C26969 * C12925) * C9098 + C13099 * C9051 +
            C12932 * C9097) *
               C26968 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C207 +
            (C9054 * C208 + C26968 * C423) * C26969) *
               C9051 +
           (C9784 + C9800) * C9052) *
              C26821 * C3953 -
          ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 * C3954 +
          ((C9789 + C9801) * C9051 + (C12683 + C12687) * C9052) * C26821 *
              C3955 -
          (((C9054 * C12521 + C26968 * C12681) * C26969 +
            (C9054 * C12441 + C26968 * C12442) * C207) *
               C9052 +
           (C12687 + C12683) * C9051) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26821 * C3514 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 *
               C26857) *
              C3516 +
          (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26821 *
               C26857 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26821 * C3514) *
              C3517 +
          ((((C9054 * C89 + C26968 * C94) * C207 +
             (C9054 * C210 + C26968 * C425) * C26969) *
                C9051 +
            (C10747 + C10751) * C9052) *
               C26821 * C3514 -
           (((C9054 * C755 + C26968 * C1023) * C26969 +
             (C9054 * C605 + C26968 * C611) * C207) *
                C9052 +
            (C10751 + C10747) * C9051) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C1214 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C1215 +
           (((C9054 * C1219 + C26968 * C1225) * C207 +
             (C9054 * C1369 + C26968 * C1637) * C26969) *
                C9051 +
            (C13151 + C13155) * C9052) *
               C1216) *
              C3514 +
          (((C11813 + C11819) * C9051 +
            ((C9054 * C5844 + C26968 * C5846) * C207 +
             (C9054 * C5956 + C26968 * C6168) * C26969) *
                C9052) *
               C1215 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C1214 -
           (((C9054 * C12925 + C26968 * C13149) * C26969 +
             (C9054 * C12813 + C26968 * C12814) * C207) *
                C9052 +
            (C13155 + C13151) * C9051) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
           (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
               C26969) *
              C26968 * C26821 * C3953 -
          ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
               C26969 +
           (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) * C207) *
              C26968 * C26821 * C3954 +
          ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
               C207 +
           (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
               C26969) *
              C26968 * C26821 * C3955 -
          ((C9098 * C12521 + C9052 * C12721 + C9097 * C4039 + C9051 * C4223) *
               C26969 +
           (C9098 * C12441 + C9052 * C12485 + C9097 * C3959 + C9051 * C4001) *
               C207) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26821 * C3514 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26821 * C26857) *
              C3516 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) * C207 +
            (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                C26969) *
               C26968 * C26821 * C26857 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26821 * C3514) *
              C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
            (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
                C26969) *
               C26968 * C26821 * C3514 -
           ((C9098 * C755 + C9052 * C1079 + C9097 * C754 + C9051 * C1078) *
                C26969 +
            (C9098 * C605 + C9052 * C681 + C9097 * C604 + C9051 * C680) *
                C207) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C1214 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C1215 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C207 +
            (C9097 * C1369 + C9051 * C1693 + C9098 * C4425 + C9052 * C4689) *
                C26969) *
               C26968 * C1216) *
              C3514 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C207 +
            (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                C26969) *
               C26968 * C1215 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C1214 -
           ((C9098 * C12925 + C9052 * C13205 + C9097 * C4425 + C9051 * C4689) *
                C26969 +
            (C9098 * C12813 + C9052 * C12873 + C9097 * C4313 + C9051 * C4371) *
                C207) *
               C26968 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 + C9912 * C9052) *
              C26968 * C26821 * C3953 -
          (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C3954 +
          (C9913 * C9051 + C12763 * C9052) * C26968 * C26821 * C3955 -
          ((C516 * C12441 + C12760 + C12760 + C26969 * C12756) * C9052 +
           C12763 * C9051) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26821 * C3514 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C26857) *
              C3516 +
          ((C1161 * C9051 + C1162 * C9052) * C26968 * C26821 * C26857 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C3514) *
              C3517 +
          ((C541 * C9051 + C2285 * C9052) * C26968 * C26821 * C3514 -
           ((C516 * C605 + C1156 + C1156 + C26969 * C1145) * C9052 +
            C2285 * C9051) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C1214 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C1215 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C9051 +
            C13263 * C9052) *
               C26968 * C1216) *
              C3514 +
          ((C11957 * C9051 +
            (C516 * C5844 + C6275 + C6275 + C26969 * C6272) * C9052) *
               C26968 * C1215 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C1214 -
           ((C516 * C12813 + C13260 + C13260 + C26969 * C13256) * C9052 +
            C13263 * C9051) *
               C26968 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
             C9422 * C9052) *
                C26934 -
            (C11384 * C9052 + (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) *
                                  C26969 * C9051) *
                C26885) *
               C3514 +
           ((C11384 * C9051 +
             (C9053 * C5844 + C11374 + C11374 + C26968 * C5848) * C26969 *
                 C9052) *
                C26885 -
            (C9423 * C9052 + C9422 * C9051) * C26934) *
               C26857) *
              C26925 +
          ((((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
             C11385 * C9052) *
                C26885 -
            (C9424 * C9052 +
             (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
                C26934) *
               C3514 +
           ((C9424 * C9051 + C9425 * C9052) * C26934 -
            ((C9053 * C5843 + C11377 + C11377 + C26968 * C5847) * C26969 *
                 C9052 +
             C11385 * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) *
                 C9054 +
             (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                 C26968) *
                C26969 * C26934 -
            ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                 C26968 +
             (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                 C9054) *
                C26969 * C26885) *
               C3514 +
           (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                 C9054 +
             (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                 C26968) *
                C26969 * C26885 -
            ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                 C26968 +
             (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                 C9054) *
                C26969 * C26934) *
               C26857) *
              C26925 +
          ((((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                 C9054 +
             (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                 C26968) *
                C26969 * C26885 -
            ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                 C26968 +
             (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                 C9054) *
                C26969 * C26934) *
               C3514 +
           (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                 C9054 +
             (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                 C26968) *
                C26969 * C26934 -
            ((C9098 * C5845 + C9052 * C5903 + C9097 * C2858 + C9051 * C2937) *
                 C26968 +
             (C9098 * C5843 + C9052 * C5901 + C9097 * C2855 + C9051 * C2934) *
                 C9054) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C207 * C87 + C26969 * C208) * C9054 +
              (C207 * C92 + C26969 * C213) * C26968) *
                 C9051 +
             (C9542 + C9543) * C9052) *
                C26934 -
            ((C11526 + C11527) * C9052 +
             ((C207 * C1224 + C26969 * C1374) * C26968 +
              (C207 * C1218 + C26969 * C1368) * C9054) *
                 C9051) *
                C26885) *
               C3514 +
           (((C11527 + C11526) * C9051 +
             ((C207 * C5844 + C26969 * C5956) * C9054 +
              (C207 * C5846 + C26969 * C5958) * C26968) *
                 C9052) *
                C26885 -
            ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26934) *
               C26857) *
              C26925 +
          ((((C1389 * C9054 + C1388 * C26968) * C9051 +
             (C11522 + C11523) * C9052) *
                C26885 -
            ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
                C26934) *
               C3514 +
           (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26934 -
            (((C207 * C5845 + C26969 * C5957) * C26968 +
              (C207 * C5843 + C26969 * C5955) * C9054) *
                 C9052 +
             (C11523 + C11522) * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C9097 +
             (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
             C9613 * C9052) *
                C26969 * C26934 -
            (C11602 * C9052 + C11603 * C9098 +
             (C9054 * C1294 + C26968 * C1442) * C9051 +
             (C9054 * C1218 + C26968 * C1224) * C9097) *
                C26969 * C26885) *
               C3514 +
           ((C11603 * C9097 + C11602 * C9051 +
             (C9054 * C5844 + C26968 * C5846) * C9098 +
             (C9054 * C5902 + C26968 * C6010) * C9052) *
                C26969 * C26885 -
            (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
                C26969 * C26934) *
               C26857) *
              C26925 +
          ((((C9054 * C1217 + C26968 * C1223) * C9097 +
             (C9054 * C1293 + C26968 * C1441) * C9051 + C11604 * C9098 +
             C11605 * C9052) *
                C26969 * C26885 -
            (C9617 * C9052 + C9616 * C9098 +
             (C9054 * C146 + C26968 * C271) * C9051 +
             (C9054 * C88 + C26968 * C93) * C9097) *
                C26969 * C26934) *
               C3514 +
           ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
                C26969 * C26934 -
            ((C9054 * C5901 + C26968 * C6009) * C9052 +
             (C9054 * C5843 + C26968 * C5845) * C9098 + C11605 * C9051 +
             C11604 * C9097) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[23] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                       C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                          C26968 * C26969 * C26934 -
                      (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                       C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                          C26968 * C26969 * C26885) *
                         C3514 +
                     ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                       C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                          C26968 * C26969 * C26885 -
                      (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                       C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                          C26968 * C26969 * C26934) *
                         C26857) *
                        C26925 +
                    (((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                       C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                          C26968 * C26969 * C26885 -
                      (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                       C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                          C26968 * C26969 * C26934) *
                         C3514 +
                     ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                       C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                          C26968 * C26969 * C26934 -
                      (C9202 * C5843 + C11674 + C11674 + C9052 * C6061 +
                       C9201 * C2855 + C11675 + C11675 + C9051 * C3159) *
                          C26968 * C26969 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9097 +
             (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
             C9732 * C9052) *
                C26968 * C26934 -
            (C11744 * C9052 + C11525 * C9098 +
             (C207 * C1294 + C26969 * C1570) * C9051 +
             (C207 * C1218 + C26969 * C1368) * C9097) *
                C26968 * C26885) *
               C3514 +
           ((C11525 * C9097 + C11744 * C9051 +
             (C207 * C5844 + C26969 * C5956) * C9098 +
             (C207 * C5902 + C26969 * C6116) * C9052) *
                C26968 * C26885 -
            (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
                C26968 * C26934) *
               C26857) *
              C26925 +
          (((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
                C26968 * C26885 -
            (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
                C26968 * C26934) *
               C3514 +
           ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
                C26968 * C26934 -
            ((C207 * C5901 + C26969 * C6115) * C9052 +
             (C207 * C5843 + C26969 * C5955) * C9098 + C3242 * C9051 +
             C3022 * C9097) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C9054 * C87 + C26968 * C92) * C207 +
              (C9054 * C208 + C26968 * C423) * C26969) *
                 C9051 +
             (C9784 + C9800) * C9052) *
                C26934 -
            ((C11819 + C11813) * C9052 +
             ((C9054 * C1368 + C26968 * C1636) * C26969 +
              (C9054 * C1218 + C26968 * C1224) * C207) *
                 C9051) *
                C26885) *
               C3514 +
           (((C11813 + C11819) * C9051 +
             ((C9054 * C5844 + C26968 * C5846) * C207 +
              (C9054 * C5956 + C26968 * C6168) * C26969) *
                 C9052) *
                C26885 -
            ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26934) *
               C26857) *
              C26925 +
          (((((C9054 * C1217 + C26968 * C1223) * C207 +
              (C9054 * C1367 + C26968 * C1635) * C26969) *
                 C9051 +
             (C11814 + C11820) * C9052) *
                C26885 -
            ((C9802 + C9790) * C9052 +
             ((C9054 * C209 + C26968 * C424) * C26969 +
              (C9054 * C88 + C26968 * C93) * C207) *
                 C9051) *
                C26934) *
               C3514 +
           (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26934 -
            (((C9054 * C5955 + C26968 * C6167) * C26969 +
              (C9054 * C5843 + C26968 * C5845) * C207) *
                 C9052 +
             (C11820 + C11814) * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
             (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                 C26969) *
                C26968 * C26934 -
            ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                 C26969 +
             (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                 C207) *
                C26968 * C26885) *
               C3514 +
           (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                 C207 +
             (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                 C26969) *
                C26968 * C26885 -
            ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                 C26969 +
             (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                 C207) *
                C26968 * C26934) *
               C26857) *
              C26925 +
          ((((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                 C207 +
             (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                 C26969) *
                C26968 * C26885 -
            ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                 C26969 +
             (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                 C207) *
                C26968 * C26934) *
               C3514 +
           (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                 C207 +
             (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                 C26969) *
                C26968 * C26934 -
            ((C9098 * C5955 + C9052 * C6219 + C9097 * C3012 + C9051 * C3379) *
                 C26969 +
             (C9098 * C5843 + C9052 * C5901 + C9097 * C2855 + C9051 * C2934) *
                 C207) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
             C9912 * C9052) *
                C26968 * C26934 -
            (C11957 * C9052 +
             (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
                C26968 * C26885) *
               C3514 +
           ((C11957 * C9051 +
             (C516 * C5844 + C6275 + C6275 + C26969 * C6272) * C9052) *
                C26968 * C26885 -
            (C9913 * C9052 + C9912 * C9051) * C26968 * C26934) *
               C26857) *
              C26925 +
          (((C1778 * C9051 + C3463 * C9052) * C26968 * C26885 -
            (C1161 * C9052 + C540 * C9051) * C26968 * C26934) *
               C3514 +
           ((C1161 * C9051 + C1162 * C9052) * C26968 * C26934 -
            ((C516 * C5843 + C6274 + C6274 + C26969 * C6271) * C9052 +
             C3463 * C9051) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26821 * C3514 -
           (C9423 * C9052 + C9422 * C9051) * C26821 * C26857) *
              C3516 +
          ((C9424 * C9051 + C9425 * C9052) * C26821 * C26857 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26821 * C3514) *
              C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
            C10436 * C9052) *
               C26821 * C3514 -
           ((C9053 * C605 + C10432 + C10432 + C26968 * C617) * C26969 * C9052 +
            C10436 * C9051) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
           C9422 * C9052) *
              C26821 * C3953 -
          (C9423 * C9052 + C9422 * C9051) * C26821 * C3954 +
          (C9423 * C9051 + C12451 * C9052) * C26821 * C3955 -
          ((C9053 * C12441 + C12447 + C12447 + C26968 * C12443) * C26969 *
               C9052 +
           C12451 * C9051) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26821 * C3514 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26821 * C26857) *
              C3516 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                C9054 +
            (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                C26968) *
               C26969 * C26821 * C26857 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26821 * C3514) *
              C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
            (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
                C26968) *
               C26969 * C26821 * C3514 -
           ((C9098 * C611 + C9052 * C687 + C9097 * C610 + C9051 * C686) *
                C26968 +
            (C9098 * C605 + C9052 * C681 + C9097 * C604 + C9051 * C680) *
                C9054) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
           (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
               C26968) *
              C26969 * C26821 * C3953 -
          ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
               C26968 +
           (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
               C9054) *
              C26969 * C26821 * C3954 +
          ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
               C9054 +
           (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
               C26968) *
              C26969 * C26821 * C3955 -
          ((C9098 * C12442 + C9052 * C12486 + C9097 * C3961 + C9051 * C4003) *
               C26968 +
           (C9098 * C12441 + C9052 * C12485 + C9097 * C3959 + C9051 * C4001) *
               C9054) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26821 * C3514 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 *
               C26857) *
              C3516 +
          (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C26821 *
               C26857 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26821 * C3514) *
              C3517 +
          (((C234 * C9054 + C233 * C26968) * C9051 +
            (C10537 + C10538) * C9052) *
               C26821 * C3514 -
           (((C207 * C611 + C26969 * C761) * C26968 +
             (C207 * C605 + C26969 * C755) * C9054) *
                C9052 +
            (C10538 + C10537) * C9051) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9054 +
            (C207 * C92 + C26969 * C213) * C26968) *
               C9051 +
           (C9542 + C9543) * C9052) *
              C26821 * C3953 -
          ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26821 * C3954 +
          ((C9545 + C9544) * C9051 + (C12530 + C12531) * C9052) * C26821 *
              C3955 -
          (((C207 * C12442 + C26969 * C12522) * C26968 +
            (C207 * C12441 + C26969 * C12521) * C9054) *
               C9052 +
           (C12531 + C12530) * C9051) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26821 * C3514 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26821 * C26857) *
              C3516 +
          ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
               C26969 * C26821 * C26857 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C26821 * C3514) *
              C3517 +
          (((C9054 * C89 + C26968 * C94) * C9097 +
            (C9054 * C147 + C26968 * C272) * C9051 + C10593 * C9098 +
            C10594 * C9052) *
               C26969 * C26821 * C3514 -
           ((C9054 * C681 + C26968 * C829) * C9052 +
            (C9054 * C605 + C26968 * C611) * C9098 + C10594 * C9051 +
            C10593 * C9097) *
               C26969 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9054 * C87 + C26968 * C92) * C9097 +
           (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
           C9613 * C9052) *
              C26969 * C26821 * C3953 -
          (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
              C26969 * C26821 * C3954 +
          (C9615 * C9097 + C9614 * C9051 + C12571 * C9098 + C12572 * C9052) *
              C26969 * C26821 * C3955 -
          ((C9054 * C12485 + C26968 * C12565) * C9052 +
           (C9054 * C12441 + C26968 * C12442) * C9098 + C12572 * C9051 +
           C12571 * C9097) *
              C26969 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26821 * C3514 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C26821 * C26857) *
                        C3516 +
                    ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                      C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                         C26968 * C26969 * C26821 * C26857 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C26821 * C3514) *
                        C3517 +
                    ((C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                      C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                         C26968 * C26969 * C26821 * C3514 -
                     (C9202 * C605 + C10645 + C10645 + C9052 * C885 +
                      C9201 * C604 + C10646 + C10646 + C9051 * C884) *
                         C26968 * C26969 * C26821 * C26857) *
                        C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 +
                     C9205 + C9205 + C9052 * C881) *
                        C26968 * C26969 * C26821 * C3953 -
                    (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                     C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                        C26968 * C26969 * C26821 * C3954 +
                    (C9201 * C602 + C9672 + C9672 + C9051 * C882 +
                     C9202 * C3959 + C9673 + C9673 + C9052 * C4113) *
                        C26968 * C26969 * C26821 * C3955 -
                    (C9202 * C12441 + C12608 + C12608 + C9052 * C12606 +
                     C9201 * C3959 + C12609 + C12609 + C9051 * C4113) *
                        C26968 * C26969 * C26821 * C3956) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26821 * C3514 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26821 * C26857) *
              C3516 +
          ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
               C26968 * C26821 * C26857 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26821 * C3514) *
              C3517 +
          ((C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
               C26968 * C26821 * C3514 -
           ((C207 * C681 + C26969 * C957) * C9052 +
            (C207 * C605 + C26969 * C755) * C9098 + C2120 * C9051 +
            C1956 * C9097) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C9097 +
           (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
           C9732 * C9052) *
              C26968 * C26821 * C3953 -
          (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
              C26968 * C26821 * C3954 +
          (C9541 * C9097 + C9733 * C9051 + C12528 * C9098 + C12647 * C9052) *
              C26968 * C26821 * C3955 -
          ((C207 * C12485 + C26969 * C12643) * C9052 +
           (C207 * C12441 + C26969 * C12521) * C9098 + C12647 * C9051 +
           C12528 * C9097) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26821 * C3514 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 *
               C26857) *
              C3516 +
          (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C26821 *
               C26857 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26821 * C3514) *
              C3517 +
          ((((C9054 * C89 + C26968 * C94) * C207 +
             (C9054 * C210 + C26968 * C425) * C26969) *
                C9051 +
            (C10747 + C10751) * C9052) *
               C26821 * C3514 -
           (((C9054 * C755 + C26968 * C1023) * C26969 +
             (C9054 * C605 + C26968 * C611) * C207) *
                C9052 +
            (C10751 + C10747) * C9051) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C207 +
            (C9054 * C208 + C26968 * C423) * C26969) *
               C9051 +
           (C9784 + C9800) * C9052) *
              C26821 * C3953 -
          ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26821 * C3954 +
          ((C9789 + C9801) * C9051 + (C12683 + C12687) * C9052) * C26821 *
              C3955 -
          (((C9054 * C12521 + C26968 * C12681) * C26969 +
            (C9054 * C12441 + C26968 * C12442) * C207) *
               C9052 +
           (C12687 + C12683) * C9051) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26821 * C3514 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26821 * C26857) *
              C3516 +
          (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) * C207 +
            (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                C26969) *
               C26968 * C26821 * C26857 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26821 * C3514) *
              C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
            (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
                C26969) *
               C26968 * C26821 * C3514 -
           ((C9098 * C755 + C9052 * C1079 + C9097 * C754 + C9051 * C1078) *
                C26969 +
            (C9098 * C605 + C9052 * C681 + C9097 * C604 + C9051 * C680) *
                C207) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
           (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
               C26969) *
              C26968 * C26821 * C3953 -
          ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
               C26969 +
           (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) * C207) *
              C26968 * C26821 * C3954 +
          ((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
               C207 +
           (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
               C26969) *
              C26968 * C26821 * C3955 -
          ((C9098 * C12521 + C9052 * C12721 + C9097 * C4039 + C9051 * C4223) *
               C26969 +
           (C9098 * C12441 + C9052 * C12485 + C9097 * C3959 + C9051 * C4001) *
               C207) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26821 * C3514 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C26857) *
              C3516 +
          ((C1161 * C9051 + C1162 * C9052) * C26968 * C26821 * C26857 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C26821 * C3514) *
              C3517 +
          ((C541 * C9051 + C2285 * C9052) * C26968 * C26821 * C3514 -
           ((C516 * C605 + C1156 + C1156 + C26969 * C1145) * C9052 +
            C2285 * C9051) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 + C9912 * C9052) *
              C26968 * C26821 * C3953 -
          (C9913 * C9052 + C9912 * C9051) * C26968 * C26821 * C3954 +
          (C9913 * C9051 + C12763 * C9052) * C26968 * C26821 * C3955 -
          ((C516 * C12441 + C12760 + C12760 + C26969 * C12756) * C9052 +
           C12763 * C9051) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
             C9422 * C9052) *
                C6325 -
            (C11384 * C9052 + (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) *
                                  C26969 * C9051) *
                C26885) *
               C26933 +
           ((C11384 * C9051 + C14367 * C9052) * C26885 -
            (C9423 * C9052 + C9422 * C9051) * C6325) *
               C26857) *
              C26925 +
          ((((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
             C11385 * C9052) *
                C26885 -
            (C9424 * C9052 +
             (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
                C6325) *
               C26933 +
           ((C9424 * C9051 + C9425 * C9052) * C6325 -
            ((C9053 * C5843 + C11377 + C11377 + C26968 * C5847) * C26969 *
                 C9052 +
             C11385 * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) *
                 C9054 +
             (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                 C26968) *
                C26969 * C6325 -
            ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                 C26968 +
             (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                 C9054) *
                C26969 * C26885) *
               C26933 +
           (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                 C9054 +
             (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                 C26968) *
                C26969 * C26885 -
            ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                 C26968 +
             (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                 C9054) *
                C26969 * C6325) *
               C26857) *
              C26925 +
          ((((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                 C9054 +
             (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                 C26968) *
                C26969 * C26885 -
            ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                 C26968 +
             (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                 C9054) *
                C26969 * C6325) *
               C26933 +
           (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                 C9054 +
             (C9097 * C606 + C9051 * C682 + C9098 * C609 + C9052 * C685) *
                 C26968) *
                C26969 * C6325 -
            ((C9098 * C5845 + C9052 * C5903 + C9097 * C2858 + C9051 * C2937) *
                 C26968 +
             (C9098 * C5843 + C9052 * C5901 + C9097 * C2855 + C9051 * C2934) *
                 C9054) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C207 * C87 + C26969 * C208) * C9054 +
              (C207 * C92 + C26969 * C213) * C26968) *
                 C9051 +
             (C9542 + C9543) * C9052) *
                C6325 -
            ((C11526 + C11527) * C9052 +
             ((C207 * C1224 + C26969 * C1374) * C26968 +
              (C207 * C1218 + C26969 * C1368) * C9054) *
                 C9051) *
                C26885) *
               C26933 +
           (((C11527 + C11526) * C9051 + (C14478 + C14479) * C9052) * C26885 -
            ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C6325) *
               C26857) *
              C26925 +
          ((((C1389 * C9054 + C1388 * C26968) * C9051 +
             (C11522 + C11523) * C9052) *
                C26885 -
            ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
                C6325) *
               C26933 +
           (((C9534 + C9535) * C9051 + (C9536 + C9537) * C9052) * C6325 -
            (((C207 * C5845 + C26969 * C5957) * C26968 +
              (C207 * C5843 + C26969 * C5955) * C9054) *
                 C9052 +
             (C11523 + C11522) * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C9097 +
             (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
             C9613 * C9052) *
                C26969 * C6325 -
            (C11602 * C9052 + C11603 * C9098 +
             (C9054 * C1294 + C26968 * C1442) * C9051 +
             (C9054 * C1218 + C26968 * C1224) * C9097) *
                C26969 * C26885) *
               C26933 +
           ((C11603 * C9097 + C11602 * C9051 + C14535 * C9098 +
             C14536 * C9052) *
                C26969 * C26885 -
            (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
                C26969 * C6325) *
               C26857) *
              C26925 +
          ((((C9054 * C1217 + C26968 * C1223) * C9097 +
             (C9054 * C1293 + C26968 * C1441) * C9051 + C11604 * C9098 +
             C11605 * C9052) *
                C26969 * C26885 -
            (C9617 * C9052 + C9616 * C9098 +
             (C9054 * C146 + C26968 * C271) * C9051 +
             (C9054 * C88 + C26968 * C93) * C9097) *
                C26969 * C6325) *
               C26933 +
           ((C9616 * C9097 + C9617 * C9051 + C9618 * C9098 + C9619 * C9052) *
                C26969 * C6325 -
            ((C9054 * C5901 + C26968 * C6009) * C9052 +
             (C9054 * C5843 + C26968 * C5845) * C9098 + C11605 * C9051 +
             C11604 * C9097) *
                C26969 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                       C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                          C26968 * C26969 * C6325 -
                      (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                       C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                          C26968 * C26969 * C26885) *
                         C26933 +
                     ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                       C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                          C26968 * C26969 * C26885 -
                      (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                       C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                          C26968 * C26969 * C6325) *
                         C26857) *
                        C26925 +
                    (((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                       C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                          C26968 * C26969 * C26885 -
                      (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                       C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                          C26968 * C26969 * C6325) *
                         C26933 +
                     ((C9201 * C600 + C9674 + C9674 + C9051 * C880 +
                       C9202 * C603 + C9675 + C9675 + C9052 * C883) *
                          C26968 * C26969 * C6325 -
                      (C9202 * C5843 + C11674 + C11674 + C9052 * C6061 +
                       C9201 * C2855 + C11675 + C11675 + C9051 * C3159) *
                          C26968 * C26969 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9097 +
             (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
             C9732 * C9052) *
                C26968 * C6325 -
            (C11744 * C9052 + C11525 * C9098 +
             (C207 * C1294 + C26969 * C1570) * C9051 +
             (C207 * C1218 + C26969 * C1368) * C9097) *
                C26968 * C26885) *
               C26933 +
           ((C11525 * C9097 + C11744 * C9051 + C14476 * C9098 +
             C14643 * C9052) *
                C26968 * C26885 -
            (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
                C26968 * C6325) *
               C26857) *
              C26925 +
          (((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
                C26968 * C26885 -
            (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
                C26968 * C6325) *
               C26933 +
           ((C772 * C9097 + C965 * C9051 + C773 * C9098 + C966 * C9052) *
                C26968 * C6325 -
            ((C207 * C5901 + C26969 * C6115) * C9052 +
             (C207 * C5843 + C26969 * C5955) * C9098 + C3242 * C9051 +
             C3022 * C9097) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C9054 * C87 + C26968 * C92) * C207 +
              (C9054 * C208 + C26968 * C423) * C26969) *
                 C9051 +
             (C9784 + C9800) * C9052) *
                C6325 -
            ((C11819 + C11813) * C9052 +
             ((C9054 * C1368 + C26968 * C1636) * C26969 +
              (C9054 * C1218 + C26968 * C1224) * C207) *
                 C9051) *
                C26885) *
               C26933 +
           (((C11813 + C11819) * C9051 + (C14695 + C14699) * C9052) * C26885 -
            ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C6325) *
               C26857) *
              C26925 +
          (((((C9054 * C1217 + C26968 * C1223) * C207 +
              (C9054 * C1367 + C26968 * C1635) * C26969) *
                 C9051 +
             (C11814 + C11820) * C9052) *
                C26885 -
            ((C9802 + C9790) * C9052 +
             ((C9054 * C209 + C26968 * C424) * C26969 +
              (C9054 * C88 + C26968 * C93) * C207) *
                 C9051) *
                C6325) *
               C26933 +
           (((C9790 + C9802) * C9051 + (C9793 + C9803) * C9052) * C6325 -
            (((C9054 * C5955 + C26968 * C6167) * C26969 +
              (C9054 * C5843 + C26968 * C5845) * C207) *
                 C9052 +
             (C11820 + C11814) * C9051) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
             (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                 C26969) *
                C26968 * C6325 -
            ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                 C26969 +
             (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                 C207) *
                C26968 * C26885) *
               C26933 +
           (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                 C207 +
             (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                 C26969) *
                C26968 * C26885 -
            ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                 C26969 +
             (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                 C207) *
                C26968 * C6325) *
               C26857) *
              C26925 +
          ((((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                 C207 +
             (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                 C26969) *
                C26968 * C26885 -
            ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                 C26969 +
             (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                 C207) *
                C26968 * C6325) *
               C26933 +
           (((C9097 * C600 + C9051 * C676 + C9098 * C603 + C9052 * C679) *
                 C207 +
             (C9097 * C750 + C9051 * C1074 + C9098 * C753 + C9052 * C1077) *
                 C26969) *
                C26968 * C6325 -
            ((C9098 * C5955 + C9052 * C6219 + C9097 * C3012 + C9051 * C3379) *
                 C26969 +
             (C9098 * C5843 + C9052 * C5901 + C9097 * C2855 + C9051 * C2934) *
                 C207) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
             C9912 * C9052) *
                C26968 * C6325 -
            (C11957 * C9052 +
             (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
                C26968 * C26885) *
               C26933 +
           ((C11957 * C9051 + C14807 * C9052) * C26968 * C26885 -
            (C9913 * C9052 + C9912 * C9051) * C26968 * C6325) *
               C26857) *
              C26925 +
          (((C1778 * C9051 + C3463 * C9052) * C26968 * C26885 -
            (C1161 * C9052 + C540 * C9051) * C26968 * C6325) *
               C26933 +
           ((C1161 * C9051 + C1162 * C9052) * C26968 * C6325 -
            ((C516 * C5843 + C6274 + C6274 + C26969 * C6271) * C9052 +
             C3463 * C9051) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26963 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26964 +
           ((C9053 * C1219 + C9966 + C9966 + C26968 * C1231) * C26969 * C9051 +
            C12823 * C9052) *
               C8165) *
              C26933 +
          ((C11384 * C9051 + C14367 * C9052) * C26964 -
           (C9423 * C9052 + C9422 * C9051) * C26963 -
           ((C9053 * C12813 + C12819 + C12819 + C26968 * C12815) * C26969 *
                C9052 +
            C12823 * C9051) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26963 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26964 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C9054 +
            (C9097 * C1225 + C9051 * C1301 + C9098 * C4315 + C9052 * C4373) *
                C26968) *
               C26969 * C8165) *
              C26933 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C9054 +
            (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                C26968) *
               C26969 * C26964 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C26963 -
           ((C9098 * C12814 + C9052 * C12874 + C9097 * C4315 + C9051 * C4373) *
                C26968 +
            (C9098 * C12813 + C9052 * C12873 + C9097 * C4313 + C9051 * C4371) *
                C9054) *
               C26969 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26963 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26964 +
           (((C207 * C1219 + C26969 * C1369) * C9054 +
             (C207 * C1225 + C26969 * C1375) * C26968) *
                C9051 +
            (C12934 + C12935) * C9052) *
               C8165) *
              C26933 +
          (((C11527 + C11526) * C9051 + (C14478 + C14479) * C9052) * C26964 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C26963 -
           (((C207 * C12814 + C26969 * C12926) * C26968 +
             (C207 * C12813 + C26969 * C12925) * C9054) *
                C9052 +
            (C12935 + C12934) * C9051) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C26963 -
           (C11602 * C9052 + C11603 * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C26964 +
           ((C9054 * C1219 + C26968 * C1225) * C9097 +
            (C9054 * C1295 + C26968 * C1443) * C9051 + C12991 * C9098 +
            C12992 * C9052) *
               C26969 * C8165) *
              C26933 +
          ((C11603 * C9097 + C11602 * C9051 + C14535 * C9098 + C14536 * C9052) *
               C26969 * C26964 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C26963 -
           ((C9054 * C12873 + C26968 * C12985) * C9052 +
            (C9054 * C12813 + C26968 * C12814) * C9098 + C12992 * C9051 +
            C12991 * C9097) *
               C26969 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26963 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26964 +
                     (C9201 * C1219 + C10174 + C10174 + C9051 * C1499 +
                      C9202 * C4313 + C10175 + C10175 + C9052 * C4531) *
                         C26968 * C26969 * C8165) *
                        C26933 +
                    ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                      C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                         C26968 * C26969 * C26964 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C26963 -
                     (C9202 * C12813 + C13044 + C13044 + C9052 * C13042 +
                      C9201 * C4313 + C13045 + C13045 + C9051 * C4531) *
                         C26968 * C26969 * C8165) *
                        C26857) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26963 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26964 +
           ((C207 * C1219 + C26969 * C1369) * C9097 +
            (C207 * C1295 + C26969 * C1571) * C9051 + C12932 * C9098 +
            C13099 * C9052) *
               C26968 * C8165) *
              C26933 +
          ((C11525 * C9097 + C11744 * C9051 + C14476 * C9098 + C14643 * C9052) *
               C26968 * C26964 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C26963 -
           ((C207 * C12873 + C26969 * C13095) * C9052 +
            (C207 * C12813 + C26969 * C12925) * C9098 + C13099 * C9051 +
            C12932 * C9097) *
               C26968 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26963 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26964 +
           (((C9054 * C1219 + C26968 * C1225) * C207 +
             (C9054 * C1369 + C26968 * C1637) * C26969) *
                C9051 +
            (C13151 + C13155) * C9052) *
               C8165) *
              C26933 +
          (((C11813 + C11819) * C9051 + (C14695 + C14699) * C9052) * C26964 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C26963 -
           (((C9054 * C12925 + C26968 * C13149) * C26969 +
             (C9054 * C12813 + C26968 * C12814) * C207) *
                C9052 +
            (C13155 + C13151) * C9051) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26963 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26964 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C207 +
            (C9097 * C1369 + C9051 * C1693 + C9098 * C4425 + C9052 * C4689) *
                C26969) *
               C26968 * C8165) *
              C26933 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C207 +
            (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                C26969) *
               C26968 * C26964 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C26963 -
           ((C9098 * C12925 + C9052 * C13205 + C9097 * C4425 + C9051 * C4689) *
                C26969 +
            (C9098 * C12813 + C9052 * C12873 + C9097 * C4313 + C9051 * C4371) *
                C207) *
               C26968 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C26963 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C26964 +
           ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C9051 +
            C13263 * C9052) *
               C26968 * C8165) *
              C26933 +
          ((C11957 * C9051 + C14807 * C9052) * C26968 * C26964 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C26963 -
           ((C516 * C12813 + C13260 + C13260 + C26969 * C13256) * C9052 +
            C13263 * C9051) *
               C26968 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexx[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C6325 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26885) *
              C595 +
          ((C11384 * C9051 + C14367 * C9052) * C26885 -
           (C9423 * C9052 + C9422 * C9051) * C6325) *
              C596 +
          ((C9423 * C9051 + C12451 * C9052) * C6325 -
           ((C9053 * C14357 + C14363 + C14363 + C26968 * C14359) * C26969 *
                C9052 +
            C14367 * C9051) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C6325 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26885) *
              C26805 * C3516 +
          (((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
            C11385 * C9052) *
               C26885 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C6325) *
              C26805 * C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
            C10436 * C9052) *
               C6325 -
           ((C9053 * C2856 + C10902 + C10902 + C26968 * C2862) * C26969 *
                C9052 +
            (C9053 * C1221 + C10903 + C10903 + C26968 * C1233) * C26969 *
                C9051) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
           C9422 * C9052) *
              C7211 -
          (C11384 * C9052 +
           (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
              C7212 +
          ((C9053 * C1219 + C9966 + C9966 + C26968 * C1231) * C26969 * C9051 +
           C12823 * C9052) *
              C7213 -
          ((C9053 * C15741 + C15745 + C15745 + C26968 * C15743) * C26969 *
               C9052 +
           (C9053 * C7216 + C15746 + C15746 + C26968 * C7220) * C26969 *
               C9051) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26885) *
              C595 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C9054 +
            (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                C26968) *
               C26969 * C26885 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C6325) *
              C596 +
          (((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C9054 +
            (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C14358 + C9052 * C14418 + C9097 * C5846 + C9051 * C5904) *
                C26968 +
            (C9098 * C14357 + C9052 * C14417 + C9097 * C5844 + C9051 * C5902) *
                C9054) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26885) *
              C26805 * C3516 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C9054 +
            (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                C26968) *
               C26969 * C26885 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C6325) *
              C26805 * C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
            (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C2859 + C9052 * C2938 + C9097 * C1227 + C9051 * C1303) *
                C26968 +
            (C9098 * C2856 + C9052 * C2935 + C9097 * C1221 + C9051 * C1297) *
                C9054) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
           (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
               C26968) *
              C26969 * C7211 -
          ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
               C26968 +
           (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
               C9054) *
              C26969 * C7212 +
          ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
               C9054 +
           (C9097 * C1225 + C9051 * C1301 + C9098 * C4315 + C9052 * C4373) *
               C26968) *
              C26969 * C7213 -
          ((C9098 * C15742 + C9052 * C15781 + C9097 * C7218 + C9051 * C7260) *
               C26968 +
           (C9098 * C15741 + C9052 * C15780 + C9097 * C7216 + C9051 * C7258) *
               C9054) *
              C26969 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[27] +=
        (-std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C6325 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26885) *
              C595 +
          (((C11527 + C11526) * C9051 + (C14478 + C14479) * C9052) * C26885 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C6325) *
              C596 +
          (((C9545 + C9544) * C9051 + (C12530 + C12531) * C9052) * C6325 -
           (((C207 * C14358 + C26969 * C14470) * C26968 +
             (C207 * C14357 + C26969 * C14469) * C9054) *
                C9052 +
            (C14479 + C14478) * C9051) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C6325 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26885) *
              C26805 * C3516 +
          (((C1389 * C9054 + C1388 * C26968) * C9051 +
            (C11522 + C11523) * C9052) *
               C26885 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C6325) *
              C26805 * C3517 +
          (((C234 * C9054 + C233 * C26968) * C9051 +
            (C10537 + C10538) * C9052) *
               C6325 -
           (((C207 * C2859 + C26969 * C3016) * C26968 +
             (C207 * C2856 + C26969 * C3013) * C9054) *
                C9052 +
            (C2459 * C26968 + C2458 * C9054) * C9051) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9054 +
            (C207 * C92 + C26969 * C213) * C26968) *
               C9051 +
           (C9542 + C9543) * C9052) *
              C7211 -
          ((C11526 + C11527) * C9052 +
           ((C207 * C1224 + C26969 * C1374) * C26968 +
            (C207 * C1218 + C26969 * C1368) * C9054) *
               C9051) *
              C7212 +
          (((C207 * C1219 + C26969 * C1369) * C9054 +
            (C207 * C1225 + C26969 * C1375) * C26968) *
               C9051 +
           (C12934 + C12935) * C9052) *
              C7213 -
          (((C207 * C15742 + C26969 * C15817) * C26968 +
            (C207 * C15741 + C26969 * C15816) * C9054) *
               C9052 +
           ((C207 * C7218 + C26969 * C7298) * C26968 +
            (C207 * C7216 + C26969 * C7296) * C9054) *
               C9051) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C6325 -
           (C11602 * C9052 + C11603 * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C26885) *
              C595 +
          ((C11603 * C9097 + C11602 * C9051 + C14535 * C9098 + C14536 * C9052) *
               C26969 * C26885 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C6325) *
              C596 +
          ((C9615 * C9097 + C9614 * C9051 + C12571 * C9098 + C12572 * C9052) *
               C26969 * C6325 -
           ((C9054 * C14417 + C26968 * C14529) * C9052 +
            (C9054 * C14357 + C26968 * C14358) * C9098 + C14536 * C9051 +
            C14535 * C9097) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9054 * C87 + C26968 * C92) * C9097 +
                                (C9054 * C145 + C26968 * C270) * C9051 +
                                C9612 * C9098 + C9613 * C9052) *
                                   C26969 * C6325 -
                               (C11602 * C9052 + C11603 * C9098 +
                                (C9054 * C1294 + C26968 * C1442) * C9051 +
                                (C9054 * C1218 + C26968 * C1224) * C9097) *
                                   C26969 * C26885) *
                                  C26805 * C3516 +
                              (((C9054 * C1217 + C26968 * C1223) * C9097 +
                                (C9054 * C1293 + C26968 * C1441) * C9051 +
                                C11604 * C9098 + C11605 * C9052) *
                                   C26969 * C26885 -
                               (C9617 * C9052 + C9616 * C9098 +
                                (C9054 * C146 + C26968 * C271) * C9051 +
                                (C9054 * C88 + C26968 * C93) * C9097) *
                                   C26969 * C6325) *
                                  C26805 * C3517 +
                              (((C9054 * C89 + C26968 * C94) * C9097 +
                                (C9054 * C147 + C26968 * C272) * C9051 +
                                C10593 * C9098 + C10594 * C9052) *
                                   C26969 * C6325 -
                               ((C9054 * C2935 + C26968 * C3091) * C9052 +
                                (C9054 * C2856 + C26968 * C2859) * C9098 +
                                (C9054 * C1297 + C26968 * C1445) * C9051 +
                                (C9054 * C1221 + C26968 * C1227) * C9097) *
                                   C26969 * C26885) *
                                  C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9054 * C87 + C26968 * C92) * C9097 +
           (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
           C9613 * C9052) *
              C26969 * C7211 -
          (C11602 * C9052 + C11603 * C9098 +
           (C9054 * C1294 + C26968 * C1442) * C9051 +
           (C9054 * C1218 + C26968 * C1224) * C9097) *
              C26969 * C7212 +
          ((C9054 * C1219 + C26968 * C1225) * C9097 +
           (C9054 * C1295 + C26968 * C1443) * C9051 + C12991 * C9098 +
           C12992 * C9052) *
              C26969 * C7213 -
          ((C9054 * C15780 + C26968 * C15852) * C9052 +
           (C9054 * C15741 + C26968 * C15742) * C9098 +
           (C9054 * C7258 + C26968 * C7334) * C9051 +
           (C9054 * C7216 + C26968 * C7218) * C9097) *
              C26969 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[27] += (-std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26885) *
                        C595 +
                    ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                      C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                         C26968 * C26969 * C26885 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C6325) *
                        C596 +
                    ((C9201 * C602 + C9672 + C9672 + C9051 * C882 +
                      C9202 * C3959 + C9673 + C9673 + C9052 * C4113) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C14357 + C14588 + C14588 + C9052 * C14586 +
                      C9201 * C5844 + C14589 + C14589 + C9051 * C6062) *
                         C26968 * C26969 * C26885) *
                        C597) *
                   C26786) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26885) *
                        C26805 * C3516 +
                    ((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                      C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                         C26968 * C26969 * C26885 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C6325) *
                        C26805 * C3517 +
                    ((C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                      C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C2856 + C11104 + C11104 + C9052 * C3160 +
                      C9201 * C1221 + C11105 + C11105 + C9051 * C1501) *
                         C26968 * C26969 * C26885) *
                        C26805 * C3518)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C9201 * C87 + C9204 + C9204 + C9051 * C310 + C9202 * C601 +
                     C9205 + C9205 + C9052 * C881) *
                        C26968 * C26969 * C7211 -
                    (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                     C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                        C26968 * C26969 * C7212 +
                    (C9201 * C1219 + C10174 + C10174 + C9051 * C1499 +
                     C9202 * C4313 + C10175 + C10175 + C9052 * C4531) *
                        C26968 * C26969 * C7213 -
                    (C9202 * C15741 + C15889 + C15889 + C9052 * C15887 +
                     C9201 * C7216 + C15890 + C15890 + C9051 * C7370) *
                        C26968 * C26969 * C7214) *
                   C26805 * C26786) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C6325 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26885) *
              C595 +
          ((C11525 * C9097 + C11744 * C9051 + C14476 * C9098 + C14643 * C9052) *
               C26968 * C26885 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C6325) *
              C596 +
          ((C9541 * C9097 + C9733 * C9051 + C12528 * C9098 + C12647 * C9052) *
               C26968 * C6325 -
           ((C207 * C14417 + C26969 * C14639) * C9052 +
            (C207 * C14357 + C26969 * C14469) * C9098 + C14643 * C9051 +
            C14476 * C9097) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C6325 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26885) *
              C26805 * C3516 +
          ((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
               C26968 * C26885 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C6325) *
              C26805 * C3517 +
          ((C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
               C26968 * C6325 -
           ((C207 * C2935 + C26969 * C3237) * C9052 +
            (C207 * C2856 + C26969 * C3013) * C9098 + C2622 * C9051 +
            C2458 * C9097) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C207 * C87 + C26969 * C208) * C9097 +
           (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
           C9732 * C9052) *
              C26968 * C7211 -
          (C11744 * C9052 + C11525 * C9098 +
           (C207 * C1294 + C26969 * C1570) * C9051 +
           (C207 * C1218 + C26969 * C1368) * C9097) *
              C26968 * C7212 +
          ((C207 * C1219 + C26969 * C1369) * C9097 +
           (C207 * C1295 + C26969 * C1571) * C9051 + C12932 * C9098 +
           C13099 * C9052) *
              C26968 * C7213 -
          ((C207 * C15780 + C26969 * C15924) * C9052 +
           (C207 * C15741 + C26969 * C15816) * C9098 +
           (C207 * C7258 + C26969 * C7408) * C9051 +
           (C207 * C7216 + C26969 * C7296) * C9097) *
              C26968 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[27] +=
        (-std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C6325 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26885) *
              C595 +
          (((C11813 + C11819) * C9051 + (C14695 + C14699) * C9052) * C26885 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C6325) *
              C596 +
          (((C9789 + C9801) * C9051 + (C12683 + C12687) * C9052) * C6325 -
           (((C9054 * C14469 + C26968 * C14693) * C26969 +
             (C9054 * C14357 + C26968 * C14358) * C207) *
                C9052 +
            (C14699 + C14695) * C9051) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C6325 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26885) *
              C26805 * C3516 +
          ((((C9054 * C1217 + C26968 * C1223) * C207 +
             (C9054 * C1367 + C26968 * C1635) * C26969) *
                C9051 +
            (C11814 + C11820) * C9052) *
               C26885 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C6325) *
              C26805 * C3517 +
          ((((C9054 * C89 + C26968 * C94) * C207 +
             (C9054 * C210 + C26968 * C425) * C26969) *
                C9051 +
            (C10747 + C10751) * C9052) *
               C6325 -
           (((C9054 * C3013 + C26968 * C3311) * C26969 +
             (C9054 * C2856 + C26968 * C2859) * C207) *
                C9052 +
            ((C9054 * C1371 + C26968 * C1639) * C26969 +
             (C9054 * C1221 + C26968 * C1227) * C207) *
                C9051) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C207 +
            (C9054 * C208 + C26968 * C423) * C26969) *
               C9051 +
           (C9784 + C9800) * C9052) *
              C7211 -
          ((C11819 + C11813) * C9052 +
           ((C9054 * C1368 + C26968 * C1636) * C26969 +
            (C9054 * C1218 + C26968 * C1224) * C207) *
               C9051) *
              C7212 +
          (((C9054 * C1219 + C26968 * C1225) * C207 +
            (C9054 * C1369 + C26968 * C1637) * C26969) *
               C9051 +
           (C13151 + C13155) * C9052) *
              C7213 -
          (((C9054 * C15816 + C26968 * C15959) * C26969 +
            (C9054 * C15741 + C26968 * C15742) * C207) *
               C9052 +
           ((C9054 * C7296 + C26968 * C7444) * C26969 +
            (C9054 * C7216 + C26968 * C7218) * C207) *
               C9051) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26885) *
              C595 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C207 +
            (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                C26969) *
               C26968 * C26885 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C6325) *
              C596 +
          (((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C207 +
            (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C14469 + C9052 * C14749 + C9097 * C5956 + C9051 * C6220) *
                C26969 +
            (C9098 * C14357 + C9052 * C14417 + C9097 * C5844 + C9051 * C5902) *
                C207) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26885) *
              C26805 * C3516 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C207 +
            (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                C26969) *
               C26968 * C26885 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C6325) *
              C26805 * C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
            (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C3013 + C9052 * C3380 + C9097 * C1371 + C9051 * C1695) *
                C26969 +
            (C9098 * C2856 + C9052 * C2935 + C9097 * C1221 + C9051 * C1297) *
                C207) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
           (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
               C26969) *
              C26968 * C7211 -
          ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
               C26969 +
           (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
               C207) *
              C26968 * C7212 +
          ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
               C207 +
           (C9097 * C1369 + C9051 * C1693 + C9098 * C4425 + C9052 * C4689) *
               C26969) *
              C26968 * C7213 -
          ((C9098 * C15816 + C9052 * C15994 + C9097 * C7296 + C9051 * C7480) *
               C26969 +
           (C9098 * C15741 + C9052 * C15780 + C9097 * C7216 + C9051 * C7258) *
               C207) *
              C26968 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[27] +=
        (-std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C6325 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C26885) *
              C595 +
          ((C11957 * C9051 + C14807 * C9052) * C26968 * C26885 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C6325) *
              C596 +
          ((C9913 * C9051 + C12763 * C9052) * C26968 * C6325 -
           ((C516 * C14357 + C14804 + C14804 + C26969 * C14800) * C9052 +
            C14807 * C9051) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C6325 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C26885) *
              C26805 * C3516 +
          ((C1778 * C9051 + C3463 * C9052) * C26968 * C26885 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C6325) *
              C26805 * C3517 +
          ((C541 * C9051 + C2285 * C9052) * C26968 * C6325 -
           ((C516 * C2856 + C3460 + C3460 + C26969 * C3454) * C9052 +
            C2787 * C9051) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 + C9912 * C9052) *
              C26968 * C7211 -
          (C11957 * C9052 +
           (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
              C26968 * C7212 +
          ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C9051 +
           C13263 * C9052) *
              C26968 * C7213 -
          ((C516 * C15741 + C16031 + C16031 + C26969 * C16029) * C9052 +
           (C516 * C7216 + C7519 + C7519 + C26969 * C7516) * C9051) *
              C26968 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C26963 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26964 +
           ((C9053 * C1219 + C9966 + C9966 + C26968 * C1231) * C26969 * C9051 +
            C12823 * C9052) *
               C8165) *
              C26805 * C26925 +
          (((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
            C11385 * C9052) *
               C26964 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C26963 -
           ((C9053 * C4312 + C9970 + C9970 + C26968 * C4316) * C26969 * C9052 +
            (C9053 * C1220 + C9971 + C9971 + C26968 * C1232) * C26969 * C9051) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C26963 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26964 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C9054 +
            (C9097 * C1225 + C9051 * C1301 + C9098 * C4315 + C9052 * C4373) *
                C26968) *
               C26969 * C8165) *
              C26805 * C26925 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C9054 +
            (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                C26968) *
               C26969 * C26964 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C26963 -
           ((C9098 * C4314 + C9052 * C4372 + C9097 * C1226 + C9051 * C1302) *
                C26968 +
            (C9098 * C4312 + C9052 * C4370 + C9097 * C1220 + C9051 * C1296) *
                C9054) *
               C26969 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C26963 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26964 +
           (((C207 * C1219 + C26969 * C1369) * C9054 +
             (C207 * C1225 + C26969 * C1375) * C26968) *
                C9051 +
            (C12934 + C12935) * C9052) *
               C8165) *
              C26805 * C26925 +
          (((C1389 * C9054 + C1388 * C26968) * C9051 +
            (C11522 + C11523) * C9052) *
               C26964 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C26963 -
           (((C207 * C4314 + C26969 * C4426) * C26968 +
             (C207 * C4312 + C26969 * C4424) * C9054) *
                C9052 +
            (C1391 * C26968 + C1390 * C9054) * C9051) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C9097 +
                      (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
                      C9613 * C9052) *
                         C26969 * C26963 -
                     (C11602 * C9052 + C11603 * C9098 +
                      (C9054 * C1294 + C26968 * C1442) * C9051 +
                      (C9054 * C1218 + C26968 * C1224) * C9097) *
                         C26969 * C26964 +
                     ((C9054 * C1219 + C26968 * C1225) * C9097 +
                      (C9054 * C1295 + C26968 * C1443) * C9051 +
                      C12991 * C9098 + C12992 * C9052) *
                         C26969 * C8165) *
                        C26805 * C26925 +
                    (((C9054 * C1217 + C26968 * C1223) * C9097 +
                      (C9054 * C1293 + C26968 * C1441) * C9051 +
                      C11604 * C9098 + C11605 * C9052) *
                         C26969 * C26964 -
                     (C9617 * C9052 + C9616 * C9098 +
                      (C9054 * C146 + C26968 * C271) * C9051 +
                      (C9054 * C88 + C26968 * C93) * C9097) *
                         C26969 * C26963 -
                     ((C9054 * C4370 + C26968 * C4478) * C9052 +
                      (C9054 * C4312 + C26968 * C4314) * C9098 +
                      (C9054 * C1296 + C26968 * C1444) * C9051 +
                      (C9054 * C1220 + C26968 * C1226) * C9097) *
                         C26969 * C8165) *
                        C26805 * C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C26963 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26964 +
                     (C9201 * C1219 + C10174 + C10174 + C9051 * C1499 +
                      C9202 * C4313 + C10175 + C10175 + C9052 * C4531) *
                         C26968 * C26969 * C8165) *
                        C26805 * C26925 +
                    ((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                      C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                         C26968 * C26969 * C26964 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C26963 -
                     (C9202 * C4312 + C10178 + C10178 + C9052 * C4530 +
                      C9201 * C1220 + C10179 + C10179 + C9051 * C1500) *
                         C26968 * C26969 * C8165) *
                        C26805 * C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C26963 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26964 +
           ((C207 * C1219 + C26969 * C1369) * C9097 +
            (C207 * C1295 + C26969 * C1571) * C9051 + C12932 * C9098 +
            C13099 * C9052) *
               C26968 * C8165) *
              C26805 * C26925 +
          ((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
               C26968 * C26964 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C26963 -
           ((C207 * C4370 + C26969 * C4584) * C9052 +
            (C207 * C4312 + C26969 * C4424) * C9098 + C1583 * C9051 +
            C1390 * C9097) *
               C26968 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C26963 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26964 +
           (((C9054 * C1219 + C26968 * C1225) * C207 +
             (C9054 * C1369 + C26968 * C1637) * C26969) *
                C9051 +
            (C13151 + C13155) * C9052) *
               C8165) *
              C26805 * C26925 +
          ((((C9054 * C1217 + C26968 * C1223) * C207 +
             (C9054 * C1367 + C26968 * C1635) * C26969) *
                C9051 +
            (C11814 + C11820) * C9052) *
               C26964 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C26963 -
           (((C9054 * C4424 + C26968 * C4636) * C26969 +
             (C9054 * C4312 + C26968 * C4314) * C207) *
                C9052 +
            ((C9054 * C1370 + C26968 * C1638) * C26969 +
             (C9054 * C1220 + C26968 * C1226) * C207) *
                C9051) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C26963 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26964 +
           ((C9097 * C1219 + C9051 * C1295 + C9098 * C4313 + C9052 * C4371) *
                C207 +
            (C9097 * C1369 + C9051 * C1693 + C9098 * C4425 + C9052 * C4689) *
                C26969) *
               C26968 * C8165) *
              C26805 * C26925 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C207 +
            (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                C26969) *
               C26968 * C26964 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C26963 -
           ((C9098 * C4424 + C9052 * C4688 + C9097 * C1370 + C9051 * C1694) *
                C26969 +
            (C9098 * C4312 + C9052 * C4370 + C9097 * C1220 + C9051 * C1296) *
                C207) *
               C26968 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
                      C9912 * C9052) *
                         C26968 * C26963 -
                     (C11957 * C9052 +
                      (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
                         C26968 * C26964 +
                     ((C516 * C1219 + C1768 + C1768 + C26969 * C1759) * C9051 +
                      C13263 * C9052) *
                         C26968 * C8165) *
                        C26805 * C26925 +
                    ((C1778 * C9051 + C3463 * C9052) * C26968 * C26964 -
                     (C1161 * C9052 + C540 * C9051) * C26968 * C26963 -
                     ((C516 * C4312 + C4743 + C4743 + C26969 * C4740) * C9052 +
                      C1779 * C9051) *
                         C26968 * C8165) *
                        C26805 * C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C6325 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26885) *
              C26805 * C3516 +
          (((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C26969 * C9051 +
            C11385 * C9052) *
               C26885 -
           (C9424 * C9052 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C26969 * C9051) *
               C6325) *
              C26805 * C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C26969 * C9051 +
            C10436 * C9052) *
               C6325 -
           ((C9053 * C2856 + C10902 + C10902 + C26968 * C2862) * C26969 *
                C9052 +
            (C9053 * C1221 + C10903 + C10903 + C26968 * C1233) * C26969 *
                C9051) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C26969 * C9051 +
            C9422 * C9052) *
               C6325 -
           (C11384 * C9052 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C26969 * C9051) *
               C26885) *
              C595 +
          ((C11384 * C9051 + C14367 * C9052) * C26885 -
           (C9423 * C9052 + C9422 * C9051) * C6325) *
              C596 +
          ((C9423 * C9051 + C12451 * C9052) * C6325 -
           ((C9053 * C14357 + C14363 + C14363 + C26968 * C14359) * C26969 *
                C9052 +
            C14367 * C9051) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26885) *
              C26805 * C3516 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C9054 +
            (C9097 * C1223 + C9051 * C1299 + C9098 * C2858 + C9052 * C2937) *
                C26968) *
               C26969 * C26885 -
           ((C9098 * C606 + C9052 * C682 + C9097 * C93 + C9051 * C151) *
                C26968 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) *
                C9054) *
               C26969 * C6325) *
              C26805 * C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C9054 +
            (C9097 * C94 + C9051 * C152 + C9098 * C610 + C9052 * C686) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C2859 + C9052 * C2938 + C9097 * C1227 + C9051 * C1303) *
                C26968 +
            (C9098 * C2856 + C9052 * C2935 + C9097 * C1221 + C9051 * C1297) *
                C9054) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C9054 +
            (C9097 * C92 + C9051 * C150 + C9098 * C607 + C9052 * C683) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C2857 + C9052 * C2936 + C9097 * C1224 + C9051 * C1300) *
                C26968 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C9054) *
               C26969 * C26885) *
              C595 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C9054 +
            (C9097 * C2857 + C9051 * C2936 + C9098 * C5846 + C9052 * C5904) *
                C26968) *
               C26969 * C26885 -
           ((C9098 * C608 + C9052 * C684 + C9097 * C607 + C9051 * C683) *
                C26968 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C9054) *
               C26969 * C6325) *
              C596 +
          (((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C9054 +
            (C9097 * C608 + C9051 * C684 + C9098 * C3961 + C9052 * C4003) *
                C26968) *
               C26969 * C6325 -
           ((C9098 * C14358 + C9052 * C14418 + C9097 * C5846 + C9051 * C5904) *
                C26968 +
            (C9098 * C14357 + C9052 * C14417 + C9097 * C5844 + C9051 * C5902) *
                C9054) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C6325 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26885) *
              C26805 * C3516 +
          (((C1389 * C9054 + C1388 * C26968) * C9051 +
            (C11522 + C11523) * C9052) *
               C26885 -
           ((C9535 + C9534) * C9052 + (C232 * C26968 + C231 * C9054) * C9051) *
               C6325) *
              C26805 * C3517 +
          (((C234 * C9054 + C233 * C26968) * C9051 +
            (C10537 + C10538) * C9052) *
               C6325 -
           (((C207 * C2859 + C26969 * C3016) * C26968 +
             (C207 * C2856 + C26969 * C3013) * C9054) *
                C9052 +
            (C2459 * C26968 + C2458 * C9054) * C9051) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C207 * C87 + C26969 * C208) * C9054 +
             (C207 * C92 + C26969 * C213) * C26968) *
                C9051 +
            (C9542 + C9543) * C9052) *
               C6325 -
           ((C11526 + C11527) * C9052 +
            ((C207 * C1224 + C26969 * C1374) * C26968 +
             (C207 * C1218 + C26969 * C1368) * C9054) *
                C9051) *
               C26885) *
              C595 +
          (((C11527 + C11526) * C9051 + (C14478 + C14479) * C9052) * C26885 -
           ((C9544 + C9545) * C9052 + (C9543 + C9542) * C9051) * C6325) *
              C596 +
          (((C9545 + C9544) * C9051 + (C12530 + C12531) * C9052) * C6325 -
           (((C207 * C14358 + C26969 * C14470) * C26968 +
             (C207 * C14357 + C26969 * C14469) * C9054) *
                C9052 +
            (C14479 + C14478) * C9051) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C6325 -
           (C11602 * C9052 + C11603 * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C26885) *
              C26805 * C3516 +
          (((C9054 * C1217 + C26968 * C1223) * C9097 +
            (C9054 * C1293 + C26968 * C1441) * C9051 + C11604 * C9098 +
            C11605 * C9052) *
               C26969 * C26885 -
           (C9617 * C9052 + C9616 * C9098 +
            (C9054 * C146 + C26968 * C271) * C9051 +
            (C9054 * C88 + C26968 * C93) * C9097) *
               C26969 * C6325) *
              C26805 * C3517 +
          (((C9054 * C89 + C26968 * C94) * C9097 +
            (C9054 * C147 + C26968 * C272) * C9051 + C10593 * C9098 +
            C10594 * C9052) *
               C26969 * C6325 -
           ((C9054 * C2935 + C26968 * C3091) * C9052 +
            (C9054 * C2856 + C26968 * C2859) * C9098 +
            (C9054 * C1297 + C26968 * C1445) * C9051 +
            (C9054 * C1221 + C26968 * C1227) * C9097) *
               C26969 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C9097 +
            (C9054 * C145 + C26968 * C270) * C9051 + C9612 * C9098 +
            C9613 * C9052) *
               C26969 * C6325 -
           (C11602 * C9052 + C11603 * C9098 +
            (C9054 * C1294 + C26968 * C1442) * C9051 +
            (C9054 * C1218 + C26968 * C1224) * C9097) *
               C26969 * C26885) *
              C595 +
          ((C11603 * C9097 + C11602 * C9051 + C14535 * C9098 + C14536 * C9052) *
               C26969 * C26885 -
           (C9614 * C9052 + C9615 * C9098 + C9613 * C9051 + C9612 * C9097) *
               C26969 * C6325) *
              C596 +
          ((C9615 * C9097 + C9614 * C9051 + C12571 * C9098 + C12572 * C9052) *
               C26969 * C6325 -
           ((C9054 * C14417 + C26968 * C14529) * C9052 +
            (C9054 * C14357 + C26968 * C14358) * C9098 + C14536 * C9051 +
            C14535 * C9097) *
               C26969 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26885) *
                        C26805 * C3516 +
                    ((C9201 * C1217 + C10176 + C10176 + C9051 * C1497 +
                      C9202 * C2855 + C10177 + C10177 + C9052 * C3159) *
                         C26968 * C26969 * C26885 -
                     (C9202 * C600 + C9206 + C9206 + C9052 * C880 +
                      C9201 * C88 + C9207 + C9207 + C9051 * C311) *
                         C26968 * C26969 * C6325) *
                        C26805 * C3517 +
                    ((C9201 * C89 + C9208 + C9208 + C9051 * C312 +
                      C9202 * C604 + C9209 + C9209 + C9052 * C884) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C2856 + C11104 + C11104 + C9052 * C3160 +
                      C9201 * C1221 + C11105 + C11105 + C9051 * C1501) *
                         C26968 * C26969 * C26885) *
                        C26805 * C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9201 * C87 + C9204 + C9204 + C9051 * C310 +
                      C9202 * C601 + C9205 + C9205 + C9052 * C881) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C2854 + C10172 + C10172 + C9052 * C3158 +
                      C9201 * C1218 + C10173 + C10173 + C9051 * C1498) *
                         C26968 * C26969 * C26885) *
                        C595 +
                    ((C9201 * C2854 + C11672 + C11672 + C9051 * C3158 +
                      C9202 * C5844 + C11673 + C11673 + C9052 * C6062) *
                         C26968 * C26969 * C26885 -
                     (C9202 * C602 + C9670 + C9670 + C9052 * C882 +
                      C9201 * C601 + C9671 + C9671 + C9051 * C881) *
                         C26968 * C26969 * C6325) *
                        C596 +
                    ((C9201 * C602 + C9672 + C9672 + C9051 * C882 +
                      C9202 * C3959 + C9673 + C9673 + C9052 * C4113) *
                         C26968 * C26969 * C6325 -
                     (C9202 * C14357 + C14588 + C14588 + C9052 * C14586 +
                      C9201 * C5844 + C14589 + C14589 + C9051 * C6062) *
                         C26968 * C26969 * C26885) *
                        C597) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C6325 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26885) *
              C26805 * C3516 +
          ((C1389 * C9097 + C1582 * C9051 + C3022 * C9098 + C3242 * C9052) *
               C26968 * C26885 -
           (C965 * C9052 + C772 * C9098 + C384 * C9051 + C231 * C9097) *
               C26968 * C6325) *
              C26805 * C3517 +
          ((C234 * C9097 + C385 * C9051 + C1956 * C9098 + C2120 * C9052) *
               C26968 * C6325 -
           ((C207 * C2935 + C26969 * C3237) * C9052 +
            (C207 * C2856 + C26969 * C3013) * C9098 + C2622 * C9051 +
            C2458 * C9097) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C207 * C87 + C26969 * C208) * C9097 +
            (C207 * C145 + C26969 * C369) * C9051 + C9538 * C9098 +
            C9732 * C9052) *
               C26968 * C6325 -
           (C11744 * C9052 + C11525 * C9098 +
            (C207 * C1294 + C26969 * C1570) * C9051 +
            (C207 * C1218 + C26969 * C1368) * C9097) *
               C26968 * C26885) *
              C595 +
          ((C11525 * C9097 + C11744 * C9051 + C14476 * C9098 + C14643 * C9052) *
               C26968 * C26885 -
           (C9733 * C9052 + C9541 * C9098 + C9732 * C9051 + C9538 * C9097) *
               C26968 * C6325) *
              C596 +
          ((C9541 * C9097 + C9733 * C9051 + C12528 * C9098 + C12647 * C9052) *
               C26968 * C6325 -
           ((C207 * C14417 + C26969 * C14639) * C9052 +
            (C207 * C14357 + C26969 * C14469) * C9098 + C14643 * C9051 +
            C14476 * C9097) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C6325 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26885) *
              C26805 * C3516 +
          ((((C9054 * C1217 + C26968 * C1223) * C207 +
             (C9054 * C1367 + C26968 * C1635) * C26969) *
                C9051 +
            (C11814 + C11820) * C9052) *
               C26885 -
           ((C9802 + C9790) * C9052 + ((C9054 * C209 + C26968 * C424) * C26969 +
                                       (C9054 * C88 + C26968 * C93) * C207) *
                                          C9051) *
               C6325) *
              C26805 * C3517 +
          ((((C9054 * C89 + C26968 * C94) * C207 +
             (C9054 * C210 + C26968 * C425) * C26969) *
                C9051 +
            (C10747 + C10751) * C9052) *
               C6325 -
           (((C9054 * C3013 + C26968 * C3311) * C26969 +
             (C9054 * C2856 + C26968 * C2859) * C207) *
                C9052 +
            ((C9054 * C1371 + C26968 * C1639) * C26969 +
             (C9054 * C1221 + C26968 * C1227) * C207) *
                C9051) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C207 +
             (C9054 * C208 + C26968 * C423) * C26969) *
                C9051 +
            (C9784 + C9800) * C9052) *
               C6325 -
           ((C11819 + C11813) * C9052 +
            ((C9054 * C1368 + C26968 * C1636) * C26969 +
             (C9054 * C1218 + C26968 * C1224) * C207) *
                C9051) *
               C26885) *
              C595 +
          (((C11813 + C11819) * C9051 + (C14695 + C14699) * C9052) * C26885 -
           ((C9801 + C9789) * C9052 + (C9800 + C9784) * C9051) * C6325) *
              C596 +
          (((C9789 + C9801) * C9051 + (C12683 + C12687) * C9052) * C6325 -
           (((C9054 * C14469 + C26968 * C14693) * C26969 +
             (C9054 * C14357 + C26968 * C14358) * C207) *
                C9052 +
            (C14699 + C14695) * C9051) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26885) *
              C26805 * C3516 +
          (((C9097 * C1217 + C9051 * C1293 + C9098 * C2855 + C9052 * C2934) *
                C207 +
            (C9097 * C1367 + C9051 * C1691 + C9098 * C3012 + C9052 * C3379) *
                C26969) *
               C26968 * C26885 -
           ((C9098 * C750 + C9052 * C1074 + C9097 * C209 + C9051 * C463) *
                C26969 +
            (C9098 * C600 + C9052 * C676 + C9097 * C88 + C9051 * C146) * C207) *
               C26968 * C6325) *
              C26805 * C3517 +
          (((C9097 * C89 + C9051 * C147 + C9098 * C604 + C9052 * C680) * C207 +
            (C9097 * C210 + C9051 * C464 + C9098 * C754 + C9052 * C1078) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C3013 + C9052 * C3380 + C9097 * C1371 + C9051 * C1695) *
                C26969 +
            (C9098 * C2856 + C9052 * C2935 + C9097 * C1221 + C9051 * C1297) *
                C207) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9097 * C87 + C9051 * C145 + C9098 * C601 + C9052 * C677) * C207 +
            (C9097 * C208 + C9051 * C462 + C9098 * C751 + C9052 * C1075) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C3011 + C9052 * C3378 + C9097 * C1368 + C9051 * C1692) *
                C26969 +
            (C9098 * C2854 + C9052 * C2933 + C9097 * C1218 + C9051 * C1294) *
                C207) *
               C26968 * C26885) *
              C595 +
          (((C9097 * C2854 + C9051 * C2933 + C9098 * C5844 + C9052 * C5902) *
                C207 +
            (C9097 * C3011 + C9051 * C3378 + C9098 * C5956 + C9052 * C6220) *
                C26969) *
               C26968 * C26885 -
           ((C9098 * C752 + C9052 * C1076 + C9097 * C751 + C9051 * C1075) *
                C26969 +
            (C9098 * C602 + C9052 * C678 + C9097 * C601 + C9051 * C677) *
                C207) *
               C26968 * C6325) *
              C596 +
          (((C9097 * C602 + C9051 * C678 + C9098 * C3959 + C9052 * C4001) *
                C207 +
            (C9097 * C752 + C9051 * C1076 + C9098 * C4039 + C9052 * C4223) *
                C26969) *
               C26968 * C6325 -
           ((C9098 * C14469 + C9052 * C14749 + C9097 * C5956 + C9051 * C6220) *
                C26969 +
            (C9098 * C14357 + C9052 * C14417 + C9097 * C5844 + C9051 * C5902) *
                C207) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C6325 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C26885) *
              C26805 * C3516 +
          ((C1778 * C9051 + C3463 * C9052) * C26968 * C26885 -
           (C1161 * C9052 + C540 * C9051) * C26968 * C6325) *
              C26805 * C3517 +
          ((C541 * C9051 + C2285 * C9052) * C26968 * C6325 -
           ((C516 * C2856 + C3460 + C3460 + C26969 * C3454) * C9052 +
            C2787 * C9051) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C516 * C87 + C523 + C523 + C26969 * C517) * C9051 +
            C9912 * C9052) *
               C26968 * C6325 -
           (C11957 * C9052 +
            (C516 * C1218 + C1767 + C1767 + C26969 * C1758) * C9051) *
               C26968 * C26885) *
              C595 +
          ((C11957 * C9051 + C14807 * C9052) * C26968 * C26885 -
           (C9913 * C9052 + C9912 * C9051) * C26968 * C6325) *
              C596 +
          ((C9913 * C9051 + C12763 * C9052) * C26968 * C6325 -
           ((C516 * C14357 + C14804 + C14804 + C26969 * C14800) * C9052 +
            C14807 * C9051) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26821 * C26933 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C26857) *
              C26959 +
          ((C9420 * C17559 + C11383 * C17560) * C26970 * C26821 * C26857 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26821 * C26933) *
              C26960 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
            (C9053 * C1221 + C10903 + C10903 + C26968 * C1233) * C17560) *
               C26970 * C26821 * C26933 -
           ((C9053 * C2856 + C10902 + C10902 + C26968 * C2862) * C17560 +
            C10435 * C17559) *
               C26970 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexy[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C144 * C87 + C26970 * C145) * C9054 +
                       (C144 * C92 + C26970 * C150) * C26968) *
                          C17559 +
                      (C18442 + C18443) * C17560) *
                         C26821 * C26933 -
                     (((C144 * C2857 + C26970 * C2936) * C26968 +
                       (C144 * C2854 + C26970 * C2933) * C9054) *
                          C17560 +
                      ((C144 * C607 + C26970 * C683) * C26968 +
                       (C144 * C601 + C26970 * C677) * C9054) *
                          C17559) *
                         C26821 * C26857) *
                        C26959 +
                    (((C698 * C9054 + C697 * C26968) * C17559 +
                      (C2944 * C9054 + C2945 * C26968) * C17560) *
                         C26821 * C26857 -
                     ((C18435 + C18434) * C17560 +
                      (C169 * C26968 + C168 * C9054) * C17559) *
                         C26821 * C26933) *
                        C26960 +
                    (((C171 * C9054 + C170 * C26968) * C17559 +
                      (C2400 * C9054 + C2401 * C26968) * C17560) *
                         C26821 * C26933 -
                     (((C144 * C2859 + C26970 * C2938) * C26968 +
                       (C144 * C2856 + C26970 * C2935) * C9054) *
                          C17560 +
                      (C1899 * C26968 + C1898 * C9054) * C17559) *
                         C26821 * C26857) *
                        C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26821 * C26933 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26821 * C26857) *
              C26959 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C9054 +
            (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                C26968) *
               C26970 * C26821 * C26857 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26821 * C26933) *
              C26960 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C9054 +
            (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
                C26968) *
               C26970 * C26821 * C26933 -
           ((C17631 * C2859 + C17560 * C3016 + C17630 * C610 + C17559 * C760) *
                C26968 +
            (C17631 * C2856 + C17560 * C3013 + C17630 * C604 + C17559 * C754) *
                C9054) *
               C26970 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C144 +
                       (C9054 * C145 + C26968 * C270) * C26970) *
                          C17559 +
                      (C18570 + C18571) * C17560) *
                         C26821 * C26933 -
                     ((C11602 * C26970 + C11603 * C144) * C17560 +
                      (C9613 * C26970 + C9612 * C144) * C17559) *
                         C26821 * C26857) *
                        C26959 +
                    (((C9616 * C144 + C9617 * C26970) * C17559 +
                      (C11604 * C144 + C11605 * C26970) * C17560) *
                         C26821 * C26857 -
                     ((C18575 + C18574) * C17560 +
                      ((C9054 * C146 + C26968 * C271) * C26970 +
                       (C9054 * C88 + C26968 * C93) * C144) *
                          C17559) *
                         C26821 * C26933) *
                        C26960 +
                    ((((C9054 * C89 + C26968 * C94) * C144 +
                       (C9054 * C147 + C26968 * C272) * C26970) *
                          C17559 +
                      ((C9054 * C1221 + C26968 * C1227) * C144 +
                       (C9054 * C1297 + C26968 * C1445) * C26970) *
                          C17560) *
                         C26821 * C26933 -
                     (((C9054 * C2935 + C26968 * C3091) * C26970 +
                       (C9054 * C2856 + C26968 * C2859) * C144) *
                          C17560 +
                      (C10594 * C26970 + C10593 * C144) * C17559) *
                         C26821 * C26857) *
                        C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26821 * C26933 -
           ((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C26968 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26821 * C26857) *
              C26959 +
          ((C901 * C26968 * C17559 + C3169 * C26968 * C17560) * C26821 *
               C26857 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C26821 * C26933) *
              C26960 +
          ((C334 * C26968 * C17559 + C2567 * C26968 * C17560) * C26821 *
               C26933 -
           ((C309 * C2856 + C3166 + C3166 + C26970 * C3160) * C26968 * C17560 +
            C2065 * C26968 * C17559) *
               C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26821 * C26933 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26821 * C26857) *
              C26959 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C144 +
            (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                C26970) *
               C26968 * C26821 * C26857 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26821 * C26933) *
              C26960 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C144 +
            (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
                C26970) *
               C26968 * C26821 * C26933 -
           ((C17631 * C2935 + C17560 * C3237 + C17630 * C680 + C17559 * C956) *
                C26970 +
            (C17631 * C2856 + C17560 * C3013 + C17630 * C604 + C17559 * C754) *
                C144) *
               C26968 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26821 * C26933 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C26821 * C26857) *
                        C26959 +
                    ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                      C11818 * C17560) *
                         C26970 * C26821 * C26857 -
                     (C18752 * C17560 + C18566 * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C26821 * C26933) *
                        C26960 +
                    (((C9054 * C89 + C26968 * C94) * C17630 +
                      (C9054 * C210 + C26968 * C425) * C17559 +
                      (C9054 * C1221 + C26968 * C1227) * C17631 +
                      (C9054 * C1371 + C26968 * C1639) * C17560) *
                         C26970 * C26821 * C26933 -
                     ((C9054 * C3013 + C26968 * C3311) * C17560 +
                      (C9054 * C2856 + C26968 * C2859) * C17631 +
                      C10750 * C17559 + C10593 * C17630) *
                         C26970 * C26821 * C26857) *
                        C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C26821 * C26933 -
           ((C144 * C3011 + C26970 * C3378) * C17560 +
            (C144 * C2854 + C26970 * C2933) * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C26821 * C26857) *
              C26959 +
          ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
               C26968 * C26821 * C26857 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26821 * C26933) *
              C26960 +
          ((C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
               C26968 * C26821 * C26933 -
           ((C144 * C3013 + C26970 * C3380) * C17560 +
            (C144 * C2856 + C26970 * C2935) * C17631 + C2227 * C17559 +
            C1898 * C17630) *
               C26968 * C26821 * C26857) *
              C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezz[30] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26821 * C26933 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26821 * C26857) *
                        C26959 +
                    ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                      C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                         C26970 * C26968 * C26821 * C26857 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26821 * C26933) *
                        C26960 +
                    ((C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                      C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                         C26970 * C26968 * C26821 * C26933 -
                     (C17837 * C2856 + C19318 + C19318 + C17560 * C3454 +
                      C17836 * C604 + C19319 + C19319 + C17559 * C1144) *
                         C26970 * C26968 * C26821 * C26857) *
                        C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
             C18372 * C17560) *
                C26970 * C26934 -
            (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
               C26933 +
           ((C11382 * C17559 + C12822 * C17560) * C26970 * C26885 -
            (C11382 * C17560 + C9418 * C17559) * C26970 * C26934) *
               C26857) *
              C598 +
          (((C18374 * C17559 + C18375 * C17560) * C26970 * C26885 -
            (C18374 * C17560 +
             (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
                C26970 * C26934) *
               C26933 +
           ((C9420 * C17559 + C11383 * C17560) * C26970 * C26934 -
            ((C9053 * C4312 + C9970 + C9970 + C26968 * C4316) * C17560 +
             C11383 * C17559) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C144 * C87 + C26970 * C145) * C9054 +
              (C144 * C92 + C26970 * C150) * C26968) *
                 C17559 +
             (C18442 + C18443) * C17560) *
                C26934 -
            ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) *
                C26885) *
               C26933 +
           (((C19932 + C19933) * C17559 +
             ((C144 * C4313 + C26970 * C4371) * C9054 +
              (C144 * C4315 + C26970 * C4373) * C26968) *
                 C17560) *
                C26885 -
            ((C19933 + C19932) * C17560 +
             ((C144 * C607 + C26970 * C683) * C26968 +
              (C144 * C601 + C26970 * C677) * C9054) *
                 C17559) *
                C26934) *
               C26857) *
              C598 +
          ((((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26885 -
            ((C18435 + C18434) * C17560 +
             (C169 * C26968 + C168 * C9054) * C17559) *
                C26934) *
               C26933 +
           (((C698 * C9054 + C697 * C26968) * C17559 +
             (C19928 + C19929) * C17560) *
                C26934 -
            (((C144 * C4314 + C26970 * C4372) * C26968 +
              (C144 * C4312 + C26970 * C4370) * C9054) *
                 C17560 +
             (C19929 + C19928) * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                 C9054 +
             (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                 C26968) *
                C26970 * C26934 -
            ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
              C17559 * C1374) *
                 C26968 +
             (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
              C17559 * C1368) *
                 C9054) *
                C26970 * C26885) *
               C26933 +
           (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
              C17560 * C4425) *
                 C9054 +
             (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
              C17560 * C4427) *
                 C26968) *
                C26970 * C26885 -
            ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                 C26968 +
             (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                 C9054) *
                C26970 * C26934) *
               C26857) *
              C598 +
          ((((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
              C17560 * C1370) *
                 C9054 +
             (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
              C17560 * C1376) *
                 C26968) *
                C26970 * C26885 -
            ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                 C26968 +
             (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                 C9054) *
                C26970 * C26934) *
               C26933 +
           (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                 C9054 +
             (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                 C26968) *
                C26970 * C26934 -
            ((C17631 * C4314 + C17560 * C4426 + C17630 * C2858 +
              C17559 * C3015) *
                 C26968 +
             (C17631 * C4312 + C17560 * C4424 + C17630 * C2855 +
              C17559 * C3012) *
                 C9054) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C9054 * C87 + C26968 * C92) * C144 +
              (C9054 * C145 + C26968 * C270) * C26970) *
                 C17559 +
             (C18570 + C18571) * C17560) *
                C26934 -
            ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) *
                C26885) *
               C26933 +
           (((C20066 + C20067) * C17559 +
             (C12991 * C144 + C12992 * C26970) * C17560) *
                C26885 -
            ((C20067 + C20066) * C17560 +
             (C9613 * C26970 + C9612 * C144) * C17559) *
                C26934) *
               C26857) *
              C598 +
          ((((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26885 -
            ((C18575 + C18574) * C17560 +
             ((C9054 * C146 + C26968 * C271) * C26970 +
              (C9054 * C88 + C26968 * C93) * C144) *
                 C17559) *
                C26934) *
               C26933 +
           (((C9616 * C144 + C9617 * C26970) * C17559 +
             (C20068 + C20069) * C17560) *
                C26934 -
            (((C9054 * C4370 + C26968 * C4478) * C26970 +
              (C9054 * C4312 + C26968 * C4314) * C144) *
                 C17560 +
             (C20069 + C20068) * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
             C18640 * C17560) *
                C26934 -
            (C18641 * C17560 + C18640 * C17559) * C26885) *
               C26933 +
           ((C20142 * C17559 + (C309 * C4313 + C4534 + C4534 + C26970 * C4531) *
                                   C26968 * C17560) *
                C26885 -
            (C20142 * C17560 +
             (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
                C26934) *
               C26857) *
              C598 +
          (((C18632 * C17559 + C18633 * C17560) * C26885 -
            (C18632 * C17560 + C333 * C26968 * C17559) * C26934) *
               C26933 +
           ((C901 * C26968 * C17559 + C20138 * C17560) * C26934 -
            ((C309 * C4312 + C4533 + C4533 + C26970 * C4530) * C26968 * C17560 +
             C20138 * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                 C144 +
             (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                 C26970) *
                C26968 * C26934 -
            ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
              C17559 * C1570) *
                 C26970 +
             (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
              C17559 * C1368) *
                 C144) *
                C26968 * C26885) *
               C26933 +
           (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
              C17560 * C4425) *
                 C144 +
             (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
              C17560 * C4585) *
                 C26970) *
                C26968 * C26885 -
            ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                 C26970 +
             (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                 C144) *
                C26968 * C26934) *
               C26857) *
              C598 +
          ((((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
              C17560 * C1370) *
                 C144 +
             (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
              C17560 * C1572) *
                 C26970) *
                C26968 * C26885 -
            ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                 C26970 +
             (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                 C144) *
                C26968 * C26934) *
               C26933 +
           (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                 C144 +
             (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                 C26970) *
                C26968 * C26934 -
            ((C17631 * C4370 + C17560 * C4584 + C17630 * C2934 +
              C17559 * C3236) *
                 C26970 +
             (C17631 * C4312 + C17560 * C4424 + C17630 * C2855 +
              C17559 * C3012) *
                 C144) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C17630 +
                       (C9054 * C208 + C26968 * C423) * C17559 +
                       C18562 * C17631 + C18750 * C17560) *
                          C26970 * C26934 -
                      (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                       C18562 * C17630) *
                          C26970 * C26885) *
                         C26933 +
                     ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
                       C13154 * C17560) *
                          C26970 * C26885 -
                      (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                       C9612 * C17630) *
                          C26970 * C26934) *
                         C26857) *
                        C598 +
                    (((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
                       C18753 * C17560) *
                          C26970 * C26885 -
                      (C18752 * C17560 + C18566 * C17631 +
                       (C9054 * C209 + C26968 * C424) * C17559 +
                       (C9054 * C88 + C26968 * C93) * C17630) *
                          C26970 * C26934) *
                         C26933 +
                     ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                       C11818 * C17560) *
                          C26970 * C26934 -
                      ((C9054 * C4424 + C26968 * C4636) * C17560 +
                       (C9054 * C4312 + C26968 * C4314) * C17631 +
                       C11818 * C17559 + C11604 * C17630) *
                          C26970 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C17630 +
             (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
             C18808 * C17560) *
                C26968 * C26934 -
            (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
             C18438 * C17630) *
                C26968 * C26885) *
               C26933 +
           ((C19930 * C17630 + C20343 * C17559 +
             (C144 * C4313 + C26970 * C4371) * C17631 +
             (C144 * C4425 + C26970 * C4689) * C17560) *
                C26968 * C26885 -
            (C20343 * C17560 + C19930 * C17631 +
             (C144 * C751 + C26970 * C1075) * C17559 +
             (C144 * C601 + C26970 * C677) * C17630) *
                C26968 * C26934) *
               C26857) *
              C598 +
          (((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 +
             C1705 * C17560) *
                C26968 * C26885 -
            (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
                C26968 * C26934) *
               C26933 +
           ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
                C26968 * C26934 -
            ((C144 * C4424 + C26970 * C4688) * C17560 +
             (C144 * C4312 + C26970 * C4370) * C17631 + C3385 * C17559 +
             C2944 * C17630) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                       C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                          C26970 * C26968 * C26934 -
                      (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                       C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                          C26970 * C26968 * C26885) *
                         C26933 +
                     ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                       C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                          C26970 * C26968 * C26885 -
                      (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                       C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                          C26970 * C26968 * C26934) *
                         C26857) *
                        C598 +
                    (((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                       C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                          C26970 * C26968 * C26885 -
                      (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                       C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                          C26970 * C26968 * C26934) *
                         C26933 +
                     ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                       C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                          C26970 * C26968 * C26934 -
                      (C17837 * C4312 + C20412 + C20412 + C17560 * C4740 +
                       C17836 * C2855 + C20413 + C20413 + C17559 * C3453) *
                          C26970 * C26968 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C17560) *
               C26970 * C26821 * C595 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C596 +
           (C9419 * C17559 + C14366 * C17560) * C26970 * C26821 * C597) *
              C598 +
          ((C9420 * C17559 + C11383 * C17560) * C26970 * C26821 * C596 -
           ((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26821 * C595 -
           ((C9053 * C5843 + C11377 + C11377 + C26968 * C5847) * C17560 +
            C9421 * C17559) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
           (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C17560) *
              C26970 * C26821 * C26805 * C79 -
          ((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C17560 +
           (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
              C26970 * C26821 * C26805 * C80 +
          ((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
           (C9053 * C1221 + C10903 + C10903 + C26968 * C1233) * C17560) *
              C26970 * C26821 * C26805 * C81 -
          ((C9053 * C2338 + C17562 + C17562 + C26968 * C2340) * C17560 +
           (C9053 * C90 + C9063 + C9063 + C26968 * C100) * C17559) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C1214 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C1215 +
           (C18373 * C17559 +
            (C9053 * C7216 + C15746 + C15746 + C26968 * C7220) * C17560) *
               C26970 * C1216) *
              C26805 * C598 +
          ((C18374 * C17559 + C18375 * C17560) * C26970 * C1215 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C1214 -
           ((C9053 * C7215 + C18363 + C18363 + C26968 * C7219) * C17560 +
            C18375 * C17559) *
               C26970 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (-std::pow(Pi, 2.5) * (((((C144 * C87 + C26970 * C145) * C9054 +
                                  (C144 * C92 + C26970 * C150) * C26968) *
                                     C17559 +
                                 ((C144 * C1218 + C26970 * C1294) * C9054 +
                                  (C144 * C1224 + C26970 * C1300) * C26968) *
                                     C17560) *
                                    C26821 * C595 -
                                (((C144 * C2857 + C26970 * C2936) * C26968 +
                                  (C144 * C2854 + C26970 * C2933) * C9054) *
                                     C17560 +
                                 ((C144 * C607 + C26970 * C683) * C26968 +
                                  (C144 * C601 + C26970 * C677) * C9054) *
                                     C17559) *
                                    C26821 * C596 +
                                (((C144 * C602 + C26970 * C678) * C9054 +
                                  (C144 * C608 + C26970 * C684) * C26968) *
                                     C17559 +
                                 ((C144 * C5844 + C26970 * C5902) * C9054 +
                                  (C144 * C5846 + C26970 * C5904) * C26968) *
                                     C17560) *
                                    C26821 * C597) *
                                   C598 +
                               (((C698 * C9054 + C697 * C26968) * C17559 +
                                 (C2944 * C9054 + C2945 * C26968) * C17560) *
                                    C26821 * C596 -
                                ((C1314 * C26968 + C1315 * C9054) * C17560 +
                                 (C169 * C26968 + C168 * C9054) * C17559) *
                                    C26821 * C595 -
                                (((C144 * C5845 + C26970 * C5903) * C26968 +
                                  (C144 * C5843 + C26970 * C5901) * C9054) *
                                     C17560 +
                                 (C700 * C26968 + C699 * C9054) * C17559) *
                                    C26821 * C597) *
                                   C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C144 * C87 + C26970 * C145) * C9054 +
                                (C144 * C92 + C26970 * C150) * C26968) *
                                   C17559 +
                               ((C144 * C1218 + C26970 * C1294) * C9054 +
                                (C144 * C1224 + C26970 * C1300) * C26968) *
                                   C17560) *
                                  C26821 * C26805 * C79 -
                              ((C1314 * C26968 + C1315 * C9054) * C17560 +
                               (C169 * C26968 + C168 * C9054) * C17559) *
                                  C26821 * C26805 * C80 +
                              ((C171 * C9054 + C170 * C26968) * C17559 +
                               (C2400 * C9054 + C2401 * C26968) * C17560) *
                                  C26821 * C26805 * C81 -
                              (((C144 * C2339 + C26970 * C2394) * C26968 +
                                (C144 * C2338 + C26970 * C2393) * C9054) *
                                   C17560 +
                               (C173 * C26968 + C172 * C9054) * C17559) *
                                  C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C1214 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C1215 +
           ((C18445 + C18444) * C17559 +
            ((C144 * C7216 + C26970 * C7258) * C9054 +
             (C144 * C7218 + C26970 * C7260) * C26968) *
                C17560) *
               C1216) *
              C26805 * C598 +
          (((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C1215 -
           ((C18435 + C18434) * C17560 +
            (C169 * C26968 + C168 * C9054) * C17559) *
               C1214 -
           (((C144 * C7217 + C26970 * C7259) * C26968 +
             (C144 * C7215 + C26970 * C7257) * C9054) *
                C17560 +
            (C18437 + C18436) * C17559) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26821 * C595 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26821 * C596 +
           ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C9054 +
            (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
                C26968) *
               C26970 * C26821 * C597) *
              C598 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C9054 +
            (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                C26968) *
               C26970 * C26821 * C596 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26821 * C595 -
           ((C17631 * C5845 + C17560 * C5957 + C17630 * C609 + C17559 * C759) *
                C26968 +
            (C17631 * C5843 + C17560 * C5955 + C17630 * C603 + C17559 * C753) *
                C9054) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C9054 +
           (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
               C26968) *
              C26970 * C26821 * C26805 * C79 -
          ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
               C26968 +
           (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
               C9054) *
              C26970 * C26821 * C26805 * C80 +
          ((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
               C9054 +
           (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
               C26968) *
              C26970 * C26821 * C26805 * C81 -
          ((C17631 * C2339 + C17560 * C2452 + C17630 * C95 + C17559 * C216) *
               C26968 +
           (C17631 * C2338 + C17560 * C2451 + C17630 * C90 + C17559 * C211) *
               C9054) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C1214 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C1215 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C9054 +
            (C17630 * C1225 + C17559 * C1375 + C17631 * C7218 +
             C17560 * C7298) *
                C26968) *
               C26970 * C1216) *
              C26805 * C598 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C9054 +
            (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
             C17560 * C1376) *
                C26968) *
               C26970 * C1215 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C1214 -
           ((C17631 * C7217 + C17560 * C7297 + C17630 * C1226 +
             C17559 * C1376) *
                C26968 +
            (C17631 * C7215 + C17560 * C7295 + C17630 * C1220 +
             C17559 * C1370) *
                C9054) *
               C26970 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (-std::pow(Pi, 2.5) * (((((C9054 * C87 + C26968 * C92) * C144 +
                                  (C9054 * C145 + C26968 * C270) * C26970) *
                                     C17559 +
                                 ((C9054 * C1218 + C26968 * C1224) * C144 +
                                  (C9054 * C1294 + C26968 * C1442) * C26970) *
                                     C17560) *
                                    C26821 * C595 -
                                ((C11602 * C26970 + C11603 * C144) * C17560 +
                                 (C9613 * C26970 + C9612 * C144) * C17559) *
                                    C26821 * C596 +
                                ((C9615 * C144 + C9614 * C26970) * C17559 +
                                 (C14535 * C144 + C14536 * C26970) * C17560) *
                                    C26821 * C597) *
                                   C598 +
                               (((C9616 * C144 + C9617 * C26970) * C17559 +
                                 (C11604 * C144 + C11605 * C26970) * C17560) *
                                    C26821 * C596 -
                                (((C9054 * C1293 + C26968 * C1441) * C26970 +
                                  (C9054 * C1217 + C26968 * C1223) * C144) *
                                     C17560 +
                                 ((C9054 * C146 + C26968 * C271) * C26970 +
                                  (C9054 * C88 + C26968 * C93) * C144) *
                                     C17559) *
                                    C26821 * C595 -
                                (((C9054 * C5901 + C26968 * C6009) * C26970 +
                                  (C9054 * C5843 + C26968 * C5845) * C144) *
                                     C17560 +
                                 (C9619 * C26970 + C9618 * C144) * C17559) *
                                    C26821 * C597) *
                                   C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9054 * C87 + C26968 * C92) * C144 +
                                (C9054 * C145 + C26968 * C270) * C26970) *
                                   C17559 +
                               ((C9054 * C1218 + C26968 * C1224) * C144 +
                                (C9054 * C1294 + C26968 * C1442) * C26970) *
                                   C17560) *
                                  C26821 * C26805 * C79 -
                              (((C9054 * C1293 + C26968 * C1441) * C26970 +
                                (C9054 * C1217 + C26968 * C1223) * C144) *
                                   C17560 +
                               ((C9054 * C146 + C26968 * C271) * C26970 +
                                (C9054 * C88 + C26968 * C93) * C144) *
                                   C17559) *
                                  C26821 * C26805 * C80 +
                              (((C9054 * C89 + C26968 * C94) * C144 +
                                (C9054 * C147 + C26968 * C272) * C26970) *
                                   C17559 +
                               ((C9054 * C1221 + C26968 * C1227) * C144 +
                                (C9054 * C1297 + C26968 * C1445) * C26970) *
                                   C17560) *
                                  C26821 * C26805 * C81 -
                              (((C9054 * C2393 + C26968 * C2509) * C26970 +
                                (C9054 * C2338 + C26968 * C2339) * C144) *
                                   C17560 +
                               ((C9054 * C148 + C26968 * C273) * C26970 +
                                (C9054 * C90 + C26968 * C95) * C144) *
                                   C17559) *
                                  C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C1214 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C1215 +
           ((C18573 + C18572) * C17559 +
            ((C9054 * C7216 + C26968 * C7218) * C144 +
             (C9054 * C7258 + C26968 * C7334) * C26970) *
                C17560) *
               C1216) *
              C26805 * C598 +
          (((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C1215 -
           ((C18575 + C18574) * C17560 +
            ((C9054 * C146 + C26968 * C271) * C26970 +
             (C9054 * C88 + C26968 * C93) * C144) *
                C17559) *
               C1214 -
           (((C9054 * C7257 + C26968 * C7333) * C26970 +
             (C9054 * C7215 + C26968 * C7217) * C144) *
                C17560 +
            (C18577 + C18576) * C17559) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C26968 * C17560) *
               C26821 * C595 -
           ((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C26968 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26821 * C596 +
           ((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
            (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C26968 * C17560) *
               C26821 * C597) *
              C598 +
          ((C901 * C26968 * C17559 + C3169 * C26968 * C17560) * C26821 * C596 -
           (C1518 * C26968 * C17560 + C333 * C26968 * C17559) * C26821 * C595 -
           ((C309 * C5843 + C6064 + C6064 + C26970 * C6061) * C26968 * C17560 +
            C902 * C26968 * C17559) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
           (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C26968 * C17560) *
              C26821 * C26805 * C79 -
          (C1518 * C26968 * C17560 + C333 * C26968 * C17559) * C26821 * C26805 *
              C80 +
          (C334 * C26968 * C17559 + C2567 * C26968 * C17560) * C26821 * C26805 *
              C81 -
          ((C309 * C2338 + C2564 + C2564 + C26970 * C2560) * C26968 * C17560 +
           C335 * C26968 * C17559) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C1214 -
           (C18641 * C17560 + C18640 * C17559) * C1215 +
           (C18641 * C17559 +
            (C309 * C7216 + C7373 + C7373 + C26970 * C7370) * C26968 * C17560) *
               C1216) *
              C26805 * C598 +
          ((C18632 * C17559 + C18633 * C17560) * C1215 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C1214 -
           ((C309 * C7215 + C7372 + C7372 + C26970 * C7369) * C26968 * C17560 +
            C18633 * C17559) *
               C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26821 * C595 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26821 * C596 +
           ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C144 +
            (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
                C26970) *
               C26968 * C26821 * C597) *
              C598 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C144 +
            (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                C26970) *
               C26968 * C26821 * C596 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26821 * C595 -
           ((C17631 * C5901 + C17560 * C6115 + C17630 * C679 + C17559 * C955) *
                C26970 +
            (C17631 * C5843 + C17560 * C5955 + C17630 * C603 + C17559 * C753) *
                C144) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C144 +
           (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
               C26970) *
              C26968 * C26821 * C26805 * C79 -
          ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
               C26970 +
           (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
               C144) *
              C26968 * C26821 * C26805 * C80 +
          ((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
               C144 +
           (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
               C26970) *
              C26968 * C26821 * C26805 * C81 -
          ((C17631 * C2393 + C17560 * C2617 + C17630 * C148 + C17559 * C372) *
               C26970 +
           (C17631 * C2338 + C17560 * C2451 + C17630 * C90 + C17559 * C211) *
               C144) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C1214 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C1215 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C144 +
            (C17630 * C1295 + C17559 * C1571 + C17631 * C7258 +
             C17560 * C7408) *
                C26970) *
               C26968 * C1216) *
              C26805 * C598 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C144 +
            (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
             C17560 * C1572) *
                C26970) *
               C26968 * C1215 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C1214 -
           ((C17631 * C7257 + C17560 * C7407 + C17630 * C1296 +
             C17559 * C1572) *
                C26970 +
            (C17631 * C7215 + C17560 * C7295 + C17630 * C1220 +
             C17559 * C1370) *
                C144) *
               C26968 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (-std::pow(Pi, 2.5) * ((((C9054 * C87 + C26968 * C92) * C17630 +
                                 (C9054 * C208 + C26968 * C423) * C17559 +
                                 (C9054 * C1218 + C26968 * C1224) * C17631 +
                                 (C9054 * C1368 + C26968 * C1636) * C17560) *
                                    C26970 * C26821 * C595 -
                                (C11817 * C17560 + C11603 * C17631 +
                                 C9796 * C17559 + C9612 * C17630) *
                                    C26970 * C26821 * C596 +
                                (C9615 * C17630 + C9797 * C17559 +
                                 C14535 * C17631 + C14698 * C17560) *
                                    C26970 * C26821 * C597) *
                                   C598 +
                               ((C9616 * C17630 + C9798 * C17559 +
                                 C11604 * C17631 + C11818 * C17560) *
                                    C26970 * C26821 * C596 -
                                ((C9054 * C1367 + C26968 * C1635) * C17560 +
                                 (C9054 * C1217 + C26968 * C1223) * C17631 +
                                 (C9054 * C209 + C26968 * C424) * C17559 +
                                 (C9054 * C88 + C26968 * C93) * C17630) *
                                    C26970 * C26821 * C595 -
                                ((C9054 * C5955 + C26968 * C6167) * C17560 +
                                 (C9054 * C5843 + C26968 * C5845) * C17631 +
                                 C9799 * C17559 + C9618 * C17630) *
                                    C26970 * C26821 * C597) *
                                   C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9054 * C87 + C26968 * C92) * C17630 +
                               (C9054 * C208 + C26968 * C423) * C17559 +
                               (C9054 * C1218 + C26968 * C1224) * C17631 +
                               (C9054 * C1368 + C26968 * C1636) * C17560) *
                                  C26970 * C26821 * C26805 * C79 -
                              ((C9054 * C1367 + C26968 * C1635) * C17560 +
                               (C9054 * C1217 + C26968 * C1223) * C17631 +
                               (C9054 * C209 + C26968 * C424) * C17559 +
                               (C9054 * C88 + C26968 * C93) * C17630) *
                                  C26970 * C26821 * C26805 * C80 +
                              ((C9054 * C89 + C26968 * C94) * C17630 +
                               (C9054 * C210 + C26968 * C425) * C17559 +
                               (C9054 * C1221 + C26968 * C1227) * C17631 +
                               (C9054 * C1371 + C26968 * C1639) * C17560) *
                                  C26970 * C26821 * C26805 * C81 -
                              ((C9054 * C2451 + C26968 * C2673) * C17560 +
                               (C9054 * C2338 + C26968 * C2339) * C17631 +
                               (C9054 * C211 + C26968 * C426) * C17559 +
                               (C9054 * C90 + C26968 * C95) * C17630) *
                                  C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C17630 +
            (C9054 * C208 + C26968 * C423) * C17559 + C18562 * C17631 +
            C18750 * C17560) *
               C26970 * C1214 -
           (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
            C18562 * C17630) *
               C26970 * C1215 +
           (C18565 * C17630 + C18751 * C17559 +
            (C9054 * C7216 + C26968 * C7218) * C17631 +
            (C9054 * C7296 + C26968 * C7444) * C17560) *
               C26970 * C1216) *
              C26805 * C598 +
          ((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
            C18753 * C17560) *
               C26970 * C1215 -
           (C18752 * C17560 + C18566 * C17631 +
            (C9054 * C209 + C26968 * C424) * C17559 +
            (C9054 * C88 + C26968 * C93) * C17630) *
               C26970 * C1214 -
           ((C9054 * C7295 + C26968 * C7443) * C17560 +
            (C9054 * C7215 + C26968 * C7217) * C17631 + C18753 * C17559 +
            C18568 * C17630) *
               C26970 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (-std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 +
            (C144 * C1218 + C26970 * C1294) * C17631 +
            (C144 * C1368 + C26970 * C1692) * C17560) *
               C26968 * C26821 * C595 -
           ((C144 * C3011 + C26970 * C3378) * C17560 +
            (C144 * C2854 + C26970 * C2933) * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C26821 * C596 +
           ((C144 * C602 + C26970 * C678) * C17630 +
            (C144 * C752 + C26970 * C1076) * C17559 +
            (C144 * C5844 + C26970 * C5902) * C17631 +
            (C144 * C5956 + C26970 * C6220) * C17560) *
               C26968 * C26821 * C597) *
              C598 +
          ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
               C26968 * C26821 * C596 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26821 * C595 -
           ((C144 * C5955 + C26970 * C6219) * C17560 +
            (C144 * C5843 + C26970 * C5901) * C17631 + C1088 * C17559 +
            C699 * C17630) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C17630 +
           (C144 * C208 + C26970 * C462) * C17559 +
           (C144 * C1218 + C26970 * C1294) * C17631 +
           (C144 * C1368 + C26970 * C1692) * C17560) *
              C26968 * C26821 * C26805 * C79 -
          (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
              C26968 * C26821 * C26805 * C80 +
          (C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
              C26968 * C26821 * C26805 * C81 -
          ((C144 * C2451 + C26970 * C2724) * C17560 +
           (C144 * C2338 + C26970 * C2393) * C17631 + C479 * C17559 +
           C172 * C17630) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C1214 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C1215 +
           (C18441 * C17630 + C18809 * C17559 +
            (C144 * C7216 + C26970 * C7258) * C17631 +
            (C144 * C7296 + C26970 * C7480) * C17560) *
               C26968 * C1216) *
              C26805 * C598 +
          ((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 + C1705 * C17560) *
               C26968 * C1215 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C1214 -
           ((C144 * C7295 + C26970 * C7479) * C17560 +
            (C144 * C7215 + C26970 * C7257) * C17631 + C1705 * C17559 +
            C1316 * C17630) *
               C26968 * C1216) *
              C26805 * C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezz[32] += (-std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26821 * C595 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26821 * C596 +
                     (C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                      C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                         C26970 * C26968 * C26821 * C597) *
                        C598 +
                    ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                      C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                         C26970 * C26968 * C26821 * C596 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26821 * C595 -
                     (C17837 * C5843 + C18303 + C18303 + C17560 * C6271 +
                      C17836 * C603 + C18304 + C18304 + C17559 * C1143) *
                         C26970 * C26968 * C26821 * C597) *
                        C26792)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                     C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                        C26970 * C26968 * C26821 * C26805 * C79 -
                    (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                     C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                        C26970 * C26968 * C26821 * C26805 * C80 +
                    (C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                     C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                        C26970 * C26968 * C26821 * C26805 * C81 -
                    (C17837 * C2338 + C17845 + C17845 + C17560 * C2780 +
                     C17836 * C90 + C17846 + C17846 + C17559 * C520) *
                        C26970 * C26968 * C26821 * C26805 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C1214 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C1215 +
                     (C17836 * C1219 + C18862 + C18862 + C17559 * C1759 +
                      C17837 * C7216 + C18863 + C18863 + C17560 * C7516) *
                         C26970 * C26968 * C1216) *
                        C26805 * C598 +
                    ((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                      C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                         C26970 * C26968 * C1215 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C1214 -
                     (C17837 * C7215 + C18866 + C18866 + C17560 * C7515 +
                      C17836 * C1220 + C18867 + C18867 + C17559 * C1760) *
                         C26970 * C26968 * C1216) *
                        C26805 * C26792)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26934 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
              C26805 * C26959 +
          ((C18374 * C17559 + C18375 * C17560) * C26970 * C26885 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26934) *
              C26805 * C26960 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
            C19375 * C17560) *
               C26970 * C26934 -
           ((C9053 * C1222 + C19372 + C19372 + C26968 * C1234) * C17560 +
            C19375 * C17559) *
               C26970 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C26934 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26885) *
              C26805 * C26959 +
          (((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26885 -
           ((C18435 + C18434) * C17560 +
            (C169 * C26968 + C168 * C9054) * C17559) *
               C26934) *
              C26805 * C26960 +
          (((C171 * C9054 + C170 * C26968) * C17559 +
            (C19426 + C19427) * C17560) *
               C26934 -
           (((C144 * C1228 + C26970 * C1304) * C26968 +
             (C144 * C1222 + C26970 * C1298) * C9054) *
                C17560 +
            (C19427 + C19426) * C17559) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26934 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26885) *
              C26805 * C26959 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C9054 +
            (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
             C17560 * C1376) *
                C26968) *
               C26970 * C26885 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26934) *
              C26805 * C26960 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C9054 +
            (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
                C26968) *
               C26970 * C26934 -
           ((C17631 * C1228 + C17560 * C1378 + C17630 * C1227 +
             C17559 * C1377) *
                C26968 +
            (C17631 * C1222 + C17560 * C1372 + C17630 * C1221 +
             C17559 * C1371) *
                C9054) *
               C26970 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C26934 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26885) *
              C26805 * C26959 +
          (((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26885 -
           ((C18575 + C18574) * C17560 +
            ((C9054 * C146 + C26968 * C271) * C26970 +
             (C9054 * C88 + C26968 * C93) * C144) *
                C17559) *
               C26934) *
              C26805 * C26960 +
          ((((C9054 * C89 + C26968 * C94) * C144 +
             (C9054 * C147 + C26968 * C272) * C26970) *
                C17559 +
            (C19534 + C19535) * C17560) *
               C26934 -
           (((C9054 * C1298 + C26968 * C1446) * C26970 +
             (C9054 * C1222 + C26968 * C1228) * C144) *
                C17560 +
            (C19535 + C19534) * C17559) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26934 -
           (C18641 * C17560 + C18640 * C17559) * C26885) *
              C26805 * C26959 +
          ((C18632 * C17559 + C18633 * C17560) * C26885 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C26934) *
              C26805 * C26960 +
          ((C334 * C26968 * C17559 + C19586 * C17560) * C26934 -
           ((C309 * C1222 + C1513 + C1513 + C26970 * C1502) * C26968 * C17560 +
            C19586 * C17559) *
               C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26934 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26885) *
              C26805 * C26959 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C144 +
            (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
             C17560 * C1572) *
                C26970) *
               C26968 * C26885 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26934) *
              C26805 * C26960 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C144 +
            (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
                C26970) *
               C26968 * C26934 -
           ((C17631 * C1298 + C17560 * C1574 + C17630 * C1297 +
             C17559 * C1573) *
                C26970 +
            (C17631 * C1222 + C17560 * C1372 + C17630 * C1221 +
             C17559 * C1371) *
                C144) *
               C26968 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26934 -
                     (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                      C18562 * C17630) *
                         C26970 * C26885) *
                        C26805 * C26959 +
                    ((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
                      C18753 * C17560) *
                         C26970 * C26885 -
                     (C18752 * C17560 + C18566 * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C26934) *
                        C26805 * C26960 +
                    (((C9054 * C89 + C26968 * C94) * C17630 +
                      (C9054 * C210 + C26968 * C425) * C17559 +
                      C19532 * C17631 + C19689 * C17560) *
                         C26970 * C26934 -
                     ((C9054 * C1372 + C26968 * C1640) * C17560 +
                      (C9054 * C1222 + C26968 * C1228) * C17631 +
                      C19689 * C17559 + C19532 * C17630) *
                         C26970 * C26885) *
                        C26805 * C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C26934 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C26885) *
              C26805 * C26959 +
          ((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 + C1705 * C17560) *
               C26968 * C26885 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26934) *
              C26805 * C26960 +
          ((C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
               C26968 * C26934 -
           ((C144 * C1372 + C26970 * C1696) * C17560 +
            (C144 * C1222 + C26970 * C1298) * C17631 + C2729 * C17559 +
            C2400 * C17630) *
               C26968 * C26885) *
              C26805 * C1835)) /
        (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26934 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26885) *
                        C26805 * C26959 +
                    ((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                      C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                         C26970 * C26968 * C26885 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26934) *
                        C26805 * C26960 +
                    ((C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                      C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                         C26970 * C26968 * C26934 -
                     (C17837 * C1222 + C19790 + C19790 + C17560 * C1762 +
                      C17836 * C1221 + C19791 + C19791 + C17559 * C1761) *
                         C26970 * C26968 * C26885) *
                        C26805 * C1835)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
           (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C17560) *
              C26970 * C26821 * C26805 * C79 -
          ((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C17560 +
           (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
              C26970 * C26821 * C26805 * C80 +
          ((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
           (C9053 * C1221 + C10903 + C10903 + C26968 * C1233) * C17560) *
              C26970 * C26821 * C26805 * C81 -
          ((C9053 * C2338 + C17562 + C17562 + C26968 * C2340) * C17560 +
           (C9053 * C90 + C9063 + C9063 + C26968 * C100) * C17559) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            (C9053 * C1218 + C9965 + C9965 + C26968 * C1230) * C17560) *
               C26970 * C26821 * C595 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C596 +
           (C9419 * C17559 + C14366 * C17560) * C26970 * C26821 * C597) *
              C598 +
          ((C9420 * C17559 + C11383 * C17560) * C26970 * C26821 * C596 -
           ((C9053 * C1217 + C9968 + C9968 + C26968 * C1229) * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26821 * C595 -
           ((C9053 * C5843 + C11377 + C11377 + C26968 * C5847) * C17560 +
            C9421 * C17559) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eexy[34] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C144 * C87 + C26970 * C145) * C9054 +
                      (C144 * C92 + C26970 * C150) * C26968) *
                         C17559 +
                     ((C144 * C1218 + C26970 * C1294) * C9054 +
                      (C144 * C1224 + C26970 * C1300) * C26968) *
                         C17560) *
                        C26821 * C26805 * C79 -
                    ((C1314 * C26968 + C1315 * C9054) * C17560 +
                     (C169 * C26968 + C168 * C9054) * C17559) *
                        C26821 * C26805 * C80 +
                    ((C171 * C9054 + C170 * C26968) * C17559 +
                     (C2400 * C9054 + C2401 * C26968) * C17560) *
                        C26821 * C26805 * C81 -
                    (((C144 * C2339 + C26970 * C2394) * C26968 +
                      (C144 * C2338 + C26970 * C2393) * C9054) *
                         C17560 +
                     (C173 * C26968 + C172 * C9054) * C17559) *
                        C26821 * C26805 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C144 * C87 + C26970 * C145) * C9054 +
                       (C144 * C92 + C26970 * C150) * C26968) *
                          C17559 +
                      ((C144 * C1218 + C26970 * C1294) * C9054 +
                       (C144 * C1224 + C26970 * C1300) * C26968) *
                          C17560) *
                         C26821 * C595 -
                     (((C144 * C2857 + C26970 * C2936) * C26968 +
                       (C144 * C2854 + C26970 * C2933) * C9054) *
                          C17560 +
                      ((C144 * C607 + C26970 * C683) * C26968 +
                       (C144 * C601 + C26970 * C677) * C9054) *
                          C17559) *
                         C26821 * C596 +
                     (((C144 * C602 + C26970 * C678) * C9054 +
                       (C144 * C608 + C26970 * C684) * C26968) *
                          C17559 +
                      ((C144 * C5844 + C26970 * C5902) * C9054 +
                       (C144 * C5846 + C26970 * C5904) * C26968) *
                          C17560) *
                         C26821 * C597) *
                        C598 +
                    (((C698 * C9054 + C697 * C26968) * C17559 +
                      (C2944 * C9054 + C2945 * C26968) * C17560) *
                         C26821 * C596 -
                     ((C1314 * C26968 + C1315 * C9054) * C17560 +
                      (C169 * C26968 + C168 * C9054) * C17559) *
                         C26821 * C595 -
                     (((C144 * C5845 + C26970 * C5903) * C26968 +
                       (C144 * C5843 + C26970 * C5901) * C9054) *
                          C17560 +
                      (C700 * C26968 + C699 * C9054) * C17559) *
                         C26821 * C597) *
                        C26792)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C9054 +
           (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
               C26968) *
              C26970 * C26821 * C26805 * C79 -
          ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
               C26968 +
           (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
               C9054) *
              C26970 * C26821 * C26805 * C80 +
          ((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
               C9054 +
           (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
               C26968) *
              C26970 * C26821 * C26805 * C81 -
          ((C17631 * C2339 + C17560 * C2452 + C17630 * C95 + C17559 * C216) *
               C26968 +
           (C17631 * C2338 + C17560 * C2451 + C17630 * C90 + C17559 * C211) *
               C9054) *
              C26970 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26821 * C595 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26821 * C596 +
           ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C9054 +
            (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
                C26968) *
               C26970 * C26821 * C597) *
              C598 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C9054 +
            (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                C26968) *
               C26970 * C26821 * C596 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26821 * C595 -
           ((C17631 * C5845 + C17560 * C5957 + C17630 * C609 + C17559 * C759) *
                C26968 +
            (C17631 * C5843 + C17560 * C5955 + C17630 * C603 + C17559 * C753) *
                C9054) *
               C26970 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[34] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C144 +
                      (C9054 * C145 + C26968 * C270) * C26970) *
                         C17559 +
                     ((C9054 * C1218 + C26968 * C1224) * C144 +
                      (C9054 * C1294 + C26968 * C1442) * C26970) *
                         C17560) *
                        C26821 * C26805 * C79 -
                    (((C9054 * C1293 + C26968 * C1441) * C26970 +
                      (C9054 * C1217 + C26968 * C1223) * C144) *
                         C17560 +
                     ((C9054 * C146 + C26968 * C271) * C26970 +
                      (C9054 * C88 + C26968 * C93) * C144) *
                         C17559) *
                        C26821 * C26805 * C80 +
                    (((C9054 * C89 + C26968 * C94) * C144 +
                      (C9054 * C147 + C26968 * C272) * C26970) *
                         C17559 +
                     ((C9054 * C1221 + C26968 * C1227) * C144 +
                      (C9054 * C1297 + C26968 * C1445) * C26970) *
                         C17560) *
                        C26821 * C26805 * C81 -
                    (((C9054 * C2393 + C26968 * C2509) * C26970 +
                      (C9054 * C2338 + C26968 * C2339) * C144) *
                         C17560 +
                     ((C9054 * C148 + C26968 * C273) * C26970 +
                      (C9054 * C90 + C26968 * C95) * C144) *
                         C17559) *
                        C26821 * C26805 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C144 +
                       (C9054 * C145 + C26968 * C270) * C26970) *
                          C17559 +
                      ((C9054 * C1218 + C26968 * C1224) * C144 +
                       (C9054 * C1294 + C26968 * C1442) * C26970) *
                          C17560) *
                         C26821 * C595 -
                     ((C11602 * C26970 + C11603 * C144) * C17560 +
                      (C9613 * C26970 + C9612 * C144) * C17559) *
                         C26821 * C596 +
                     ((C9615 * C144 + C9614 * C26970) * C17559 +
                      (C14535 * C144 + C14536 * C26970) * C17560) *
                         C26821 * C597) *
                        C598 +
                    (((C9616 * C144 + C9617 * C26970) * C17559 +
                      (C11604 * C144 + C11605 * C26970) * C17560) *
                         C26821 * C596 -
                     (((C9054 * C1293 + C26968 * C1441) * C26970 +
                       (C9054 * C1217 + C26968 * C1223) * C144) *
                          C17560 +
                      ((C9054 * C146 + C26968 * C271) * C26970 +
                       (C9054 * C88 + C26968 * C93) * C144) *
                          C17559) *
                         C26821 * C595 -
                     (((C9054 * C5901 + C26968 * C6009) * C26970 +
                       (C9054 * C5843 + C26968 * C5845) * C144) *
                          C17560 +
                      (C9619 * C26970 + C9618 * C144) * C17559) *
                         C26821 * C597) *
                        C26792)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
           (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C26968 * C17560) *
              C26821 * C26805 * C79 -
          (C1518 * C26968 * C17560 + C333 * C26968 * C17559) * C26821 * C26805 *
              C80 +
          (C334 * C26968 * C17559 + C2567 * C26968 * C17560) * C26821 * C26805 *
              C81 -
          ((C309 * C2338 + C2564 + C2564 + C26970 * C2560) * C26968 * C17560 +
           C335 * C26968 * C17559) *
              C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            (C309 * C1218 + C1507 + C1507 + C26970 * C1498) * C26968 * C17560) *
               C26821 * C595 -
           ((C309 * C2854 + C3162 + C3162 + C26970 * C3158) * C26968 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26821 * C596 +
           ((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
            (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C26968 * C17560) *
               C26821 * C597) *
              C598 +
          ((C901 * C26968 * C17559 + C3169 * C26968 * C17560) * C26821 * C596 -
           (C1518 * C26968 * C17560 + C333 * C26968 * C17559) * C26821 * C595 -
           ((C309 * C5843 + C6064 + C6064 + C26970 * C6061) * C26968 * C17560 +
            C902 * C26968 * C17559) *
               C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C144 +
           (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
               C26970) *
              C26968 * C26821 * C26805 * C79 -
          ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
               C26970 +
           (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
               C144) *
              C26968 * C26821 * C26805 * C80 +
          ((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
               C144 +
           (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
               C26970) *
              C26968 * C26821 * C26805 * C81 -
          ((C17631 * C2393 + C17560 * C2617 + C17630 * C148 + C17559 * C372) *
               C26970 +
           (C17631 * C2338 + C17560 * C2451 + C17630 * C90 + C17559 * C211) *
               C144) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26821 * C595 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26821 * C596 +
           ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C144 +
            (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
                C26970) *
               C26968 * C26821 * C597) *
              C598 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C144 +
            (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                C26970) *
               C26968 * C26821 * C596 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26821 * C595 -
           ((C17631 * C5901 + C17560 * C6115 + C17630 * C679 + C17559 * C955) *
                C26970 +
            (C17631 * C5843 + C17560 * C5955 + C17630 * C603 + C17559 * C753) *
                C144) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezx[34] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9054 * C87 + C26968 * C92) * C17630 +
                     (C9054 * C208 + C26968 * C423) * C17559 +
                     (C9054 * C1218 + C26968 * C1224) * C17631 +
                     (C9054 * C1368 + C26968 * C1636) * C17560) *
                        C26970 * C26821 * C26805 * C79 -
                    ((C9054 * C1367 + C26968 * C1635) * C17560 +
                     (C9054 * C1217 + C26968 * C1223) * C17631 +
                     (C9054 * C209 + C26968 * C424) * C17559 +
                     (C9054 * C88 + C26968 * C93) * C17630) *
                        C26970 * C26821 * C26805 * C80 +
                    ((C9054 * C89 + C26968 * C94) * C17630 +
                     (C9054 * C210 + C26968 * C425) * C17559 +
                     (C9054 * C1221 + C26968 * C1227) * C17631 +
                     (C9054 * C1371 + C26968 * C1639) * C17560) *
                        C26970 * C26821 * C26805 * C81 -
                    ((C9054 * C2451 + C26968 * C2673) * C17560 +
                     (C9054 * C2338 + C26968 * C2339) * C17631 +
                     (C9054 * C211 + C26968 * C426) * C17559 +
                     (C9054 * C90 + C26968 * C95) * C17630) *
                        C26970 * C26821 * C26805 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      (C9054 * C1218 + C26968 * C1224) * C17631 +
                      (C9054 * C1368 + C26968 * C1636) * C17560) *
                         C26970 * C26821 * C595 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C26821 * C596 +
                     (C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
                      C14698 * C17560) *
                         C26970 * C26821 * C597) *
                        C598 +
                    ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                      C11818 * C17560) *
                         C26970 * C26821 * C596 -
                     ((C9054 * C1367 + C26968 * C1635) * C17560 +
                      (C9054 * C1217 + C26968 * C1223) * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C26821 * C595 -
                     ((C9054 * C5955 + C26968 * C6167) * C17560 +
                      (C9054 * C5843 + C26968 * C5845) * C17631 +
                      C9799 * C17559 + C9618 * C17630) *
                         C26970 * C26821 * C597) *
                        C26792)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[34] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C17630 +
           (C144 * C208 + C26970 * C462) * C17559 +
           (C144 * C1218 + C26970 * C1294) * C17631 +
           (C144 * C1368 + C26970 * C1692) * C17560) *
              C26968 * C26821 * C26805 * C79 -
          (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
              C26968 * C26821 * C26805 * C80 +
          (C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
              C26968 * C26821 * C26805 * C81 -
          ((C144 * C2451 + C26970 * C2724) * C17560 +
           (C144 * C2338 + C26970 * C2393) * C17631 + C479 * C17559 +
           C172 * C17630) *
              C26968 * C26821 * C26805 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 +
            (C144 * C1218 + C26970 * C1294) * C17631 +
            (C144 * C1368 + C26970 * C1692) * C17560) *
               C26968 * C26821 * C595 -
           ((C144 * C3011 + C26970 * C3378) * C17560 +
            (C144 * C2854 + C26970 * C2933) * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C26821 * C596 +
           ((C144 * C602 + C26970 * C678) * C17630 +
            (C144 * C752 + C26970 * C1076) * C17559 +
            (C144 * C5844 + C26970 * C5902) * C17631 +
            (C144 * C5956 + C26970 * C6220) * C17560) *
               C26968 * C26821 * C597) *
              C598 +
          ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
               C26968 * C26821 * C596 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26821 * C595 -
           ((C144 * C5955 + C26970 * C6219) * C17560 +
            (C144 * C5843 + C26970 * C5901) * C17631 + C1088 * C17559 +
            C699 * C17630) *
               C26968 * C26821 * C597) *
              C26792)) /
            (p * q * std::sqrt(p + q));
    d2eezz[34] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                     C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                        C26970 * C26968 * C26821 * C26805 * C79 -
                    (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                     C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                        C26970 * C26968 * C26821 * C26805 * C80 +
                    (C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                     C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                        C26970 * C26968 * C26821 * C26805 * C81 -
                    (C17837 * C2338 + C17845 + C17845 + C17560 * C2780 +
                     C17836 * C90 + C17846 + C17846 + C17559 * C520) *
                        C26970 * C26968 * C26821 * C26805 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26821 * C595 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26821 * C596 +
                     (C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                      C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                         C26970 * C26968 * C26821 * C597) *
                        C598 +
                    ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                      C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                         C26970 * C26968 * C26821 * C596 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26821 * C595 -
                     (C17837 * C5843 + C18303 + C18303 + C17560 * C6271 +
                      C17836 * C603 + C18304 + C18304 + C17559 * C1143) *
                         C26970 * C26968 * C26821 * C597) *
                        C26792)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26821 * C26961 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C26962 +
           (C9419 * C17559 + C14366 * C17560) * C26970 * C26821 * C4796) *
              C26925 +
          ((C9420 * C17559 + C11383 * C17560) * C26970 * C26821 * C26962 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26821 * C26961 -
           ((C9053 * C5843 + C11377 + C11377 + C26968 * C5847) * C17560 +
            C9421 * C17559) *
               C26970 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C144 * C87 + C26970 * C145) * C9054 +
                       (C144 * C92 + C26970 * C150) * C26968) *
                          C17559 +
                      (C18442 + C18443) * C17560) *
                         C26821 * C26961 -
                     ((C19933 + C19932) * C17560 +
                      ((C144 * C607 + C26970 * C683) * C26968 +
                       (C144 * C601 + C26970 * C677) * C9054) *
                          C17559) *
                         C26821 * C26962 +
                     (((C144 * C602 + C26970 * C678) * C9054 +
                       (C144 * C608 + C26970 * C684) * C26968) *
                          C17559 +
                      ((C144 * C5844 + C26970 * C5902) * C9054 +
                       (C144 * C5846 + C26970 * C5904) * C26968) *
                          C17560) *
                         C26821 * C4796) *
                        C26925 +
                    (((C698 * C9054 + C697 * C26968) * C17559 +
                      (C19928 + C19929) * C17560) *
                         C26821 * C26962 -
                     ((C18435 + C18434) * C17560 +
                      (C169 * C26968 + C168 * C9054) * C17559) *
                         C26821 * C26961 -
                     (((C144 * C5845 + C26970 * C5903) * C26968 +
                       (C144 * C5843 + C26970 * C5901) * C9054) *
                          C17560 +
                      (C700 * C26968 + C699 * C9054) * C17559) *
                         C26821 * C4796) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26821 * C26961 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26821 * C26962 +
           ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C9054 +
            (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
                C26968) *
               C26970 * C26821 * C4796) *
              C26925 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C9054 +
            (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                C26968) *
               C26970 * C26821 * C26962 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26821 * C26961 -
           ((C17631 * C5845 + C17560 * C5957 + C17630 * C609 + C17559 * C759) *
                C26968 +
            (C17631 * C5843 + C17560 * C5955 + C17630 * C603 + C17559 * C753) *
                C9054) *
               C26970 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C144 +
                       (C9054 * C145 + C26968 * C270) * C26970) *
                          C17559 +
                      (C18570 + C18571) * C17560) *
                         C26821 * C26961 -
                     ((C20067 + C20066) * C17560 +
                      (C9613 * C26970 + C9612 * C144) * C17559) *
                         C26821 * C26962 +
                     ((C9615 * C144 + C9614 * C26970) * C17559 +
                      (C14535 * C144 + C14536 * C26970) * C17560) *
                         C26821 * C4796) *
                        C26925 +
                    (((C9616 * C144 + C9617 * C26970) * C17559 +
                      (C20068 + C20069) * C17560) *
                         C26821 * C26962 -
                     ((C18575 + C18574) * C17560 +
                      ((C9054 * C146 + C26968 * C271) * C26970 +
                       (C9054 * C88 + C26968 * C93) * C144) *
                          C17559) *
                         C26821 * C26961 -
                     (((C9054 * C5901 + C26968 * C6009) * C26970 +
                       (C9054 * C5843 + C26968 * C5845) * C144) *
                          C17560 +
                      (C9619 * C26970 + C9618 * C144) * C17559) *
                         C26821 * C4796) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26821 * C26961 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26821 * C26962 +
           ((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
            (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C26968 * C17560) *
               C26821 * C4796) *
              C26925 +
          ((C901 * C26968 * C17559 + C20138 * C17560) * C26821 * C26962 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C26821 * C26961 -
           ((C309 * C5843 + C6064 + C6064 + C26970 * C6061) * C26968 * C17560 +
            C902 * C26968 * C17559) *
               C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26821 * C26961 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26821 * C26962 +
           ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C144 +
            (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
                C26970) *
               C26968 * C26821 * C4796) *
              C26925 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C144 +
            (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                C26970) *
               C26968 * C26821 * C26962 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26821 * C26961 -
           ((C17631 * C5901 + C17560 * C6115 + C17630 * C679 + C17559 * C955) *
                C26970 +
            (C17631 * C5843 + C17560 * C5955 + C17630 * C603 + C17559 * C753) *
                C144) *
               C26968 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26821 * C26961 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C26821 * C26962 +
                     (C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
                      C14698 * C17560) *
                         C26970 * C26821 * C4796) *
                        C26925 +
                    ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                      C11818 * C17560) *
                         C26970 * C26821 * C26962 -
                     (C18752 * C17560 + C18566 * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C26821 * C26961 -
                     ((C9054 * C5955 + C26968 * C6167) * C17560 +
                      (C9054 * C5843 + C26968 * C5845) * C17631 +
                      C9799 * C17559 + C9618 * C17630) *
                         C26970 * C26821 * C4796) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C26821 * C26961 -
           (C20343 * C17560 + C19930 * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C26821 * C26962 +
           ((C144 * C602 + C26970 * C678) * C17630 +
            (C144 * C752 + C26970 * C1076) * C17559 +
            (C144 * C5844 + C26970 * C5902) * C17631 +
            (C144 * C5956 + C26970 * C6220) * C17560) *
               C26968 * C26821 * C4796) *
              C26925 +
          ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
               C26968 * C26821 * C26962 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26821 * C26961 -
           ((C144 * C5955 + C26970 * C6219) * C17560 +
            (C144 * C5843 + C26970 * C5901) * C17631 + C1088 * C17559 +
            C699 * C17630) *
               C26968 * C26821 * C4796) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26821 * C26961 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26821 * C26962 +
                     (C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                      C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                         C26970 * C26968 * C26821 * C4796) *
                        C26925 +
                    ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                      C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                         C26970 * C26968 * C26821 * C26962 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26821 * C26961 -
                     (C17837 * C5843 + C18303 + C18303 + C17560 * C6271 +
                      C17836 * C603 + C18304 + C18304 + C17559 * C1143) *
                         C26970 * C26968 * C26821 * C4796) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26934 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
              C26961 +
          ((C11382 * C17559 + C12822 * C17560) * C26970 * C26885 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26934) *
              C26962 +
          ((C9419 * C17559 + C14366 * C17560) * C26970 * C26934 -
           ((C9053 * C12813 + C12819 + C12819 + C26968 * C12815) * C17560 +
            C14366 * C17559) *
               C26970 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexy[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C26934 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26885) *
              C26961 +
          (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C26885 -
           ((C19933 + C19932) * C17560 +
            ((C144 * C607 + C26970 * C683) * C26968 +
             (C144 * C601 + C26970 * C677) * C9054) *
                C17559) *
               C26934) *
              C26962 +
          ((((C144 * C602 + C26970 * C678) * C9054 +
             (C144 * C608 + C26970 * C684) * C26968) *
                C17559 +
            (C22795 + C22796) * C17560) *
               C26934 -
           (((C144 * C12814 + C26970 * C12874) * C26968 +
             (C144 * C12813 + C26970 * C12873) * C9054) *
                C17560 +
            (C22796 + C22795) * C17559) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexz[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26934 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26885) *
              C26961 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C9054 +
            (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
             C17560 * C4427) *
                C26968) *
               C26970 * C26885 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26934) *
              C26962 +
          (((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C9054 +
            (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
                C26968) *
               C26970 * C26934 -
           ((C17631 * C12814 + C17560 * C12926 + C17630 * C5846 +
             C17559 * C5958) *
                C26968 +
            (C17631 * C12813 + C17560 * C12925 + C17630 * C5844 +
             C17559 * C5956) *
                C9054) *
               C26970 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyx[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C26934 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26885) *
              C26961 +
          (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C26885 -
           ((C20067 + C20066) * C17560 +
            (C9613 * C26970 + C9612 * C144) * C17559) *
               C26934) *
              C26962 +
          (((C9615 * C144 + C9614 * C26970) * C17559 +
            (C22897 + C22898) * C17560) *
               C26934 -
           (((C9054 * C12873 + C26968 * C12985) * C26970 +
             (C9054 * C12813 + C26968 * C12814) * C144) *
                C17560 +
            (C22898 + C22897) * C17559) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyy[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26934 -
           (C18641 * C17560 + C18640 * C17559) * C26885) *
              C26961 +
          ((C20142 * C17559 + C21439 * C17560) * C26885 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26934) *
              C26962 +
          (((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
            C22955 * C17560) *
               C26934 -
           ((C309 * C12813 + C22951 + C22951 + C26970 * C13042) * C26968 *
                C17560 +
            C22955 * C17559) *
               C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26934 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26885) *
              C26961 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C144 +
            (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
             C17560 * C4585) *
                C26970) *
               C26968 * C26885 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26934) *
              C26962 +
          (((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C144 +
            (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
                C26970) *
               C26968 * C26934 -
           ((C17631 * C12873 + C17560 * C13095 + C17630 * C5902 +
             C17559 * C6116) *
                C26970 +
            (C17631 * C12813 + C17560 * C12925 + C17630 * C5844 +
             C17559 * C5956) *
                C144) *
               C26968 * C26885) *
              C4796) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezx[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26934 -
                     (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                      C18562 * C17630) *
                         C26970 * C26885) *
                        C26961 +
                    ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
                      C13154 * C17560) *
                         C26970 * C26885 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C26934) *
                        C26962 +
                    ((C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
                      C14698 * C17560) *
                         C26970 * C26934 -
                     ((C9054 * C12925 + C26968 * C13149) * C17560 +
                      (C9054 * C12813 + C26968 * C12814) * C17631 +
                      C14698 * C17559 + C14535 * C17630) *
                         C26970 * C26885) *
                        C4796) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eezy[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C144 * C87 + C26970 * C145) * C17630 +
                      (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
                      C18808 * C17560) *
                         C26968 * C26934 -
                     (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
                      C18438 * C17630) *
                         C26968 * C26885) *
                        C26961 +
                    ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
                      C21592 * C17560) *
                         C26968 * C26885 -
                     (C20343 * C17560 + C19930 * C17631 +
                      (C144 * C751 + C26970 * C1075) * C17559 +
                      (C144 * C601 + C26970 * C677) * C17630) *
                         C26968 * C26934) *
                        C26962 +
                    (((C144 * C602 + C26970 * C678) * C17630 +
                      (C144 * C752 + C26970 * C1076) * C17559 +
                      C22793 * C17631 + C23108 * C17560) *
                         C26968 * C26934 -
                     ((C144 * C12925 + C26970 * C13205) * C17560 +
                      (C144 * C12813 + C26970 * C12873) * C17631 +
                      C23108 * C17559 + C22793 * C17630) *
                         C26968 * C26885) *
                        C4796) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eezz[36] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26934 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26885) *
                        C26961 +
                    ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                      C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                         C26970 * C26968 * C26885 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26934) *
                        C26962 +
                    ((C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                      C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                         C26970 * C26968 * C26934 -
                     (C17837 * C12813 + C23159 + C23159 + C17560 * C13256 +
                      C17836 * C5844 + C23160 + C23160 + C17559 * C6272) *
                         C26970 * C26968 * C26885) *
                        C4796) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (-std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
           C18372 * C17560) *
              C26970 * C26821 * C3953 -
          (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C3954 +
          (C9419 * C17559 + C14366 * C17560) * C26970 * C26821 * C3955 -
          ((C9053 * C14357 + C14363 + C14363 + C26968 * C14359) * C17560 +
           C12450 * C17559) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26821 * C3514 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C26857) *
              C3516 +
          ((C9420 * C17559 + C11383 * C17560) * C26970 * C26821 * C26857 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26821 * C3514) *
              C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
            C19375 * C17560) *
               C26970 * C26821 * C3514 -
           ((C9053 * C2856 + C10902 + C10902 + C26968 * C2862) * C17560 +
            C10435 * C17559) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C1214 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C1215 +
           (C18373 * C17559 +
            (C9053 * C7216 + C15746 + C15746 + C26968 * C7220) * C17560) *
               C26970 * C1216) *
              C3514 +
          ((C11382 * C17559 + C12822 * C17560) * C26970 * C1215 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C1214 -
           ((C9053 * C15741 + C15745 + C15745 + C26968 * C15743) * C17560 +
            C12822 * C17559) *
               C26970 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C9054 +
            (C144 * C92 + C26970 * C150) * C26968) *
               C17559 +
           (C18442 + C18443) * C17560) *
              C26821 * C3953 -
          ((C19933 + C19932) * C17560 +
           ((C144 * C607 + C26970 * C683) * C26968 +
            (C144 * C601 + C26970 * C677) * C9054) *
               C17559) *
              C26821 * C3954 +
          (((C144 * C602 + C26970 * C678) * C9054 +
            (C144 * C608 + C26970 * C684) * C26968) *
               C17559 +
           ((C144 * C5844 + C26970 * C5902) * C9054 +
            (C144 * C5846 + C26970 * C5904) * C26968) *
               C17560) *
              C26821 * C3955 -
          (((C144 * C14358 + C26970 * C14418) * C26968 +
            (C144 * C14357 + C26970 * C14417) * C9054) *
               C17560 +
           ((C144 * C3961 + C26970 * C4003) * C26968 +
            (C144 * C3959 + C26970 * C4001) * C9054) *
               C17559) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((((C144 * C87 + C26970 * C145) * C9054 +
                                 (C144 * C92 + C26970 * C150) * C26968) *
                                    C17559 +
                                (C18442 + C18443) * C17560) *
                                   C26821 * C3514 -
                               ((C19933 + C19932) * C17560 +
                                ((C144 * C607 + C26970 * C683) * C26968 +
                                 (C144 * C601 + C26970 * C677) * C9054) *
                                    C17559) *
                                   C26821 * C26857) *
                                  C3516 +
                              (((C698 * C9054 + C697 * C26968) * C17559 +
                                (C19928 + C19929) * C17560) *
                                   C26821 * C26857 -
                               ((C18435 + C18434) * C17560 +
                                (C169 * C26968 + C168 * C9054) * C17559) *
                                   C26821 * C3514) *
                                  C3517 +
                              (((C171 * C9054 + C170 * C26968) * C17559 +
                                (C19426 + C19427) * C17560) *
                                   C26821 * C3514 -
                               (((C144 * C2859 + C26970 * C2938) * C26968 +
                                 (C144 * C2856 + C26970 * C2935) * C9054) *
                                    C17560 +
                                (C1899 * C26968 + C1898 * C9054) * C17559) *
                                   C26821 * C26857) *
                                  C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C1214 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C1215 +
           ((C18445 + C18444) * C17559 +
            ((C144 * C7216 + C26970 * C7258) * C9054 +
             (C144 * C7218 + C26970 * C7260) * C26968) *
                C17560) *
               C1216) *
              C3514 +
          (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C1215 -
           ((C19933 + C19932) * C17560 +
            ((C144 * C607 + C26970 * C683) * C26968 +
             (C144 * C601 + C26970 * C677) * C9054) *
                C17559) *
               C1214 -
           (((C144 * C15742 + C26970 * C15781) * C26968 +
             (C144 * C15741 + C26970 * C15780) * C9054) *
                C17560 +
            (C21280 + C21279) * C17559) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C9054 +
           (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
               C26968) *
              C26970 * C26821 * C3953 -
          ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
               C26968 +
           (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
               C9054) *
              C26970 * C26821 * C3954 +
          ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
               C9054 +
           (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
               C26968) *
              C26970 * C26821 * C3955 -
          ((C17631 * C14358 + C17560 * C14470 + C17630 * C3961 +
            C17559 * C4041) *
               C26968 +
           (C17631 * C14357 + C17560 * C14469 + C17630 * C3959 +
            C17559 * C4039) *
               C9054) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26821 * C3514 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26821 * C26857) *
              C3516 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C9054 +
            (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                C26968) *
               C26970 * C26821 * C26857 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26821 * C3514) *
              C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C9054 +
            (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
                C26968) *
               C26970 * C26821 * C3514 -
           ((C17631 * C2859 + C17560 * C3016 + C17630 * C610 + C17559 * C760) *
                C26968 +
            (C17631 * C2856 + C17560 * C3013 + C17630 * C604 + C17559 * C754) *
                C9054) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C1214 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C1215 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C9054 +
            (C17630 * C1225 + C17559 * C1375 + C17631 * C7218 +
             C17560 * C7298) *
                C26968) *
               C26970 * C1216) *
              C3514 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C9054 +
            (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
             C17560 * C4427) *
                C26968) *
               C26970 * C1215 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C1214 -
           ((C17631 * C15742 + C17560 * C15817 + C17630 * C4315 +
             C17559 * C4427) *
                C26968 +
            (C17631 * C15741 + C17560 * C15816 + C17630 * C4313 +
             C17559 * C4425) *
                C9054) *
               C26970 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C144 +
            (C9054 * C145 + C26968 * C270) * C26970) *
               C17559 +
           (C18570 + C18571) * C17560) *
              C26821 * C3953 -
          ((C20067 + C20066) * C17560 +
           (C9613 * C26970 + C9612 * C144) * C17559) *
              C26821 * C3954 +
          ((C9615 * C144 + C9614 * C26970) * C17559 +
           (C14535 * C144 + C14536 * C26970) * C17560) *
              C26821 * C3955 -
          (((C9054 * C14417 + C26968 * C14529) * C26970 +
            (C9054 * C14357 + C26968 * C14358) * C144) *
               C17560 +
           (C12572 * C26970 + C12571 * C144) * C17559) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((((C9054 * C87 + C26968 * C92) * C144 +
                                 (C9054 * C145 + C26968 * C270) * C26970) *
                                    C17559 +
                                (C18570 + C18571) * C17560) *
                                   C26821 * C3514 -
                               ((C20067 + C20066) * C17560 +
                                (C9613 * C26970 + C9612 * C144) * C17559) *
                                   C26821 * C26857) *
                                  C3516 +
                              (((C9616 * C144 + C9617 * C26970) * C17559 +
                                (C20068 + C20069) * C17560) *
                                   C26821 * C26857 -
                               ((C18575 + C18574) * C17560 +
                                ((C9054 * C146 + C26968 * C271) * C26970 +
                                 (C9054 * C88 + C26968 * C93) * C144) *
                                    C17559) *
                                   C26821 * C3514) *
                                  C3517 +
                              ((((C9054 * C89 + C26968 * C94) * C144 +
                                 (C9054 * C147 + C26968 * C272) * C26970) *
                                    C17559 +
                                (C19534 + C19535) * C17560) *
                                   C26821 * C3514 -
                               (((C9054 * C2935 + C26968 * C3091) * C26970 +
                                 (C9054 * C2856 + C26968 * C2859) * C144) *
                                    C17560 +
                                (C10594 * C26970 + C10593 * C144) * C17559) *
                                   C26821 * C26857) *
                                  C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C1214 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C1215 +
           ((C18573 + C18572) * C17559 +
            ((C9054 * C7216 + C26968 * C7218) * C144 +
             (C9054 * C7258 + C26968 * C7334) * C26970) *
                C17560) *
               C1216) *
              C3514 +
          (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C1215 -
           ((C20067 + C20066) * C17560 +
            (C9613 * C26970 + C9612 * C144) * C17559) *
               C1214 -
           (((C9054 * C15780 + C26968 * C15852) * C26970 +
             (C9054 * C15741 + C26968 * C15742) * C144) *
                C17560 +
            (C21382 + C21381) * C17559) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
           C18640 * C17560) *
              C26821 * C3953 -
          (C20142 * C17560 +
           (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
              C26821 * C3954 +
          ((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
           (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C26968 * C17560) *
              C26821 * C3955 -
          ((C309 * C14357 + C21034 + C21034 + C26970 * C14586) * C26968 *
               C17560 +
           (C309 * C3959 + C4116 + C4116 + C26970 * C4113) * C26968 * C17559) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26821 * C3514 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26821 * C26857) *
              C3516 +
          ((C901 * C26968 * C17559 + C20138 * C17560) * C26821 * C26857 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C26821 * C3514) *
              C3517 +
          ((C334 * C26968 * C17559 + C19586 * C17560) * C26821 * C3514 -
           ((C309 * C2856 + C3166 + C3166 + C26970 * C3160) * C26968 * C17560 +
            C2065 * C26968 * C17559) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C1214 -
           (C18641 * C17560 + C18640 * C17559) * C1215 +
           (C18641 * C17559 +
            (C309 * C7216 + C7373 + C7373 + C26970 * C7370) * C26968 * C17560) *
               C1216) *
              C3514 +
          ((C20142 * C17559 + C21439 * C17560) * C1215 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C1214 -
           ((C309 * C15741 + C21435 + C21435 + C26970 * C15887) * C26968 *
                C17560 +
            C21439 * C17559) *
               C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C144 +
           (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
               C26970) *
              C26968 * C26821 * C3953 -
          ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
               C26970 +
           (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
               C144) *
              C26968 * C26821 * C3954 +
          ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
               C144 +
           (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
               C26970) *
              C26968 * C26821 * C3955 -
          ((C17631 * C14417 + C17560 * C14639 + C17630 * C4001 +
            C17559 * C4151) *
               C26970 +
           (C17631 * C14357 + C17560 * C14469 + C17630 * C3959 +
            C17559 * C4039) *
               C144) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26821 * C3514 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26821 * C26857) *
              C3516 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C144 +
            (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                C26970) *
               C26968 * C26821 * C26857 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26821 * C3514) *
              C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C144 +
            (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
                C26970) *
               C26968 * C26821 * C3514 -
           ((C17631 * C2935 + C17560 * C3237 + C17630 * C680 + C17559 * C956) *
                C26970 +
            (C17631 * C2856 + C17560 * C3013 + C17630 * C604 + C17559 * C754) *
                C144) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C1214 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C1215 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C144 +
            (C17630 * C1295 + C17559 * C1571 + C17631 * C7258 +
             C17560 * C7408) *
                C26970) *
               C26968 * C1216) *
              C3514 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C144 +
            (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
             C17560 * C4585) *
                C26970) *
               C26968 * C1215 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C1214 -
           ((C17631 * C15780 + C17560 * C15924 + C17630 * C4371 +
             C17559 * C4585) *
                C26970 +
            (C17631 * C15741 + C17560 * C15816 + C17630 * C4313 +
             C17559 * C4425) *
                C144) *
               C26968 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (-std::pow(Pi, 2.5) *
         (((C9054 * C87 + C26968 * C92) * C17630 +
           (C9054 * C208 + C26968 * C423) * C17559 + C18562 * C17631 +
           C18750 * C17560) *
              C26970 * C26821 * C3953 -
          (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
           C9612 * C17630) *
              C26970 * C26821 * C3954 +
          (C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
           C14698 * C17560) *
              C26970 * C26821 * C3955 -
          ((C9054 * C14469 + C26968 * C14693) * C17560 +
           (C9054 * C14357 + C26968 * C14358) * C17631 + C12686 * C17559 +
           C12571 * C17630) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9054 * C87 + C26968 * C92) * C17630 +
                                (C9054 * C208 + C26968 * C423) * C17559 +
                                C18562 * C17631 + C18750 * C17560) *
                                   C26970 * C26821 * C3514 -
                               (C11817 * C17560 + C11603 * C17631 +
                                C9796 * C17559 + C9612 * C17630) *
                                   C26970 * C26821 * C26857) *
                                  C3516 +
                              ((C9616 * C17630 + C9798 * C17559 +
                                C11604 * C17631 + C11818 * C17560) *
                                   C26970 * C26821 * C26857 -
                               (C18752 * C17560 + C18566 * C17631 +
                                (C9054 * C209 + C26968 * C424) * C17559 +
                                (C9054 * C88 + C26968 * C93) * C17630) *
                                   C26970 * C26821 * C3514) *
                                  C3517 +
                              (((C9054 * C89 + C26968 * C94) * C17630 +
                                (C9054 * C210 + C26968 * C425) * C17559 +
                                C19532 * C17631 + C19689 * C17560) *
                                   C26970 * C26821 * C3514 -
                               ((C9054 * C3013 + C26968 * C3311) * C17560 +
                                (C9054 * C2856 + C26968 * C2859) * C17631 +
                                C10750 * C17559 + C10593 * C17630) *
                                   C26970 * C26821 * C26857) *
                                  C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C17630 +
            (C9054 * C208 + C26968 * C423) * C17559 + C18562 * C17631 +
            C18750 * C17560) *
               C26970 * C1214 -
           (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
            C18562 * C17630) *
               C26970 * C1215 +
           (C18565 * C17630 + C18751 * C17559 +
            (C9054 * C7216 + C26968 * C7218) * C17631 +
            (C9054 * C7296 + C26968 * C7444) * C17560) *
               C26970 * C1216) *
              C3514 +
          ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
            C13154 * C17560) *
               C26970 * C1215 -
           (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
            C9612 * C17630) *
               C26970 * C1214 -
           ((C9054 * C15816 + C26968 * C15959) * C17560 +
            (C9054 * C15741 + C26968 * C15742) * C17631 + C13154 * C17559 +
            C12991 * C17630) *
               C26970 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C17630 +
           (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
           C18808 * C17560) *
              C26968 * C26821 * C3953 -
          (C20343 * C17560 + C19930 * C17631 +
           (C144 * C751 + C26970 * C1075) * C17559 +
           (C144 * C601 + C26970 * C677) * C17630) *
              C26968 * C26821 * C3954 +
          ((C144 * C602 + C26970 * C678) * C17630 +
           (C144 * C752 + C26970 * C1076) * C17559 +
           (C144 * C5844 + C26970 * C5902) * C17631 +
           (C144 * C5956 + C26970 * C6220) * C17560) *
              C26968 * C26821 * C3955 -
          ((C144 * C14469 + C26970 * C14749) * C17560 +
           (C144 * C14357 + C26970 * C14417) * C17631 +
           (C144 * C4039 + C26970 * C4223) * C17559 +
           (C144 * C3959 + C26970 * C4001) * C17630) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C26821 * C3514 -
           (C20343 * C17560 + C19930 * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C26821 * C26857) *
              C3516 +
          ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
               C26968 * C26821 * C26857 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26821 * C3514) *
              C3517 +
          ((C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
               C26968 * C26821 * C3514 -
           ((C144 * C3013 + C26970 * C3380) * C17560 +
            (C144 * C2856 + C26970 * C2935) * C17631 + C2227 * C17559 +
            C1898 * C17630) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C1214 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C1215 +
           (C18441 * C17630 + C18809 * C17559 +
            (C144 * C7216 + C26970 * C7258) * C17631 +
            (C144 * C7296 + C26970 * C7480) * C17560) *
               C26968 * C1216) *
              C3514 +
          ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
            C21592 * C17560) *
               C26968 * C1215 -
           (C20343 * C17560 + C19930 * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C1214 -
           ((C144 * C15816 + C26970 * C15994) * C17560 +
            (C144 * C15741 + C26970 * C15780) * C17631 + C21592 * C17559 +
            C21277 * C17630) *
               C26968 * C1216) *
              C26857) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[37] += (-std::pow(Pi, 2.5) *
                   ((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                     C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                        C26970 * C26968 * C26821 * C3953 -
                    (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                     C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                        C26970 * C26968 * C26821 * C3954 +
                    (C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                     C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                        C26970 * C26968 * C26821 * C3955 -
                    (C17837 * C14357 + C21171 + C21171 + C17560 * C14800 +
                     C17836 * C3959 + C21172 + C21172 + C17559 * C4259) *
                        C26970 * C26968 * C26821 * C3956) *
                   C26786) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26821 * C3514 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26821 * C26857) *
                        C3516 +
                    ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                      C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                         C26970 * C26968 * C26821 * C26857 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26821 * C3514) *
                        C3517 +
                    ((C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                      C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                         C26970 * C26968 * C26821 * C3514 -
                     (C17837 * C2856 + C19318 + C19318 + C17560 * C3454 +
                      C17836 * C604 + C19319 + C19319 + C17559 * C1144) *
                         C26970 * C26968 * C26821 * C26857) *
                        C3518)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C1214 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C1215 +
                     (C17836 * C1219 + C18862 + C18862 + C17559 * C1759 +
                      C17837 * C7216 + C18863 + C18863 + C17560 * C7516) *
                         C26970 * C26968 * C1216) *
                        C3514 +
                    ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                      C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                         C26970 * C26968 * C1215 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C1214 -
                     (C17837 * C15741 + C21643 + C21643 + C17560 * C16029 +
                      C17836 * C4313 + C21644 + C21644 + C17559 * C4741) *
                         C26970 * C26968 * C1216) *
                        C26857) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eexx[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
             C18372 * C17560) *
                C26970 * C26934 -
            (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
               C3514 +
           ((C11382 * C17559 + C12822 * C17560) * C26970 * C26885 -
            (C11382 * C17560 + C9418 * C17559) * C26970 * C26934) *
               C26857) *
              C26925 +
          (((C18374 * C17559 + C18375 * C17560) * C26970 * C26885 -
            (C18374 * C17560 +
             (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
                C26970 * C26934) *
               C3514 +
           ((C9420 * C17559 + C11383 * C17560) * C26970 * C26934 -
            ((C9053 * C4312 + C9970 + C9970 + C26968 * C4316) * C17560 +
             C11383 * C17559) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C144 * C87 + C26970 * C145) * C9054 +
              (C144 * C92 + C26970 * C150) * C26968) *
                 C17559 +
             (C18442 + C18443) * C17560) *
                C26934 -
            ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) *
                C26885) *
               C3514 +
           (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C26885 -
            ((C19933 + C19932) * C17560 +
             ((C144 * C607 + C26970 * C683) * C26968 +
              (C144 * C601 + C26970 * C677) * C9054) *
                 C17559) *
                C26934) *
               C26857) *
              C26925 +
          ((((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26885 -
            ((C18435 + C18434) * C17560 +
             (C169 * C26968 + C168 * C9054) * C17559) *
                C26934) *
               C3514 +
           (((C698 * C9054 + C697 * C26968) * C17559 +
             (C19928 + C19929) * C17560) *
                C26934 -
            (((C144 * C4314 + C26970 * C4372) * C26968 +
              (C144 * C4312 + C26970 * C4370) * C9054) *
                 C17560 +
             (C19929 + C19928) * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                 C9054 +
             (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                 C26968) *
                C26970 * C26934 -
            ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
              C17559 * C1374) *
                 C26968 +
             (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
              C17559 * C1368) *
                 C9054) *
                C26970 * C26885) *
               C3514 +
           (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
              C17560 * C4425) *
                 C9054 +
             (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
              C17560 * C4427) *
                 C26968) *
                C26970 * C26885 -
            ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                 C26968 +
             (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                 C9054) *
                C26970 * C26934) *
               C26857) *
              C26925 +
          ((((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
              C17560 * C1370) *
                 C9054 +
             (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
              C17560 * C1376) *
                 C26968) *
                C26970 * C26885 -
            ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                 C26968 +
             (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                 C9054) *
                C26970 * C26934) *
               C3514 +
           (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                 C9054 +
             (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                 C26968) *
                C26970 * C26934 -
            ((C17631 * C4314 + C17560 * C4426 + C17630 * C2858 +
              C17559 * C3015) *
                 C26968 +
             (C17631 * C4312 + C17560 * C4424 + C17630 * C2855 +
              C17559 * C3012) *
                 C9054) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C9054 * C87 + C26968 * C92) * C144 +
              (C9054 * C145 + C26968 * C270) * C26970) *
                 C17559 +
             (C18570 + C18571) * C17560) *
                C26934 -
            ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) *
                C26885) *
               C3514 +
           (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C26885 -
            ((C20067 + C20066) * C17560 +
             (C9613 * C26970 + C9612 * C144) * C17559) *
                C26934) *
               C26857) *
              C26925 +
          ((((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26885 -
            ((C18575 + C18574) * C17560 +
             ((C9054 * C146 + C26968 * C271) * C26970 +
              (C9054 * C88 + C26968 * C93) * C144) *
                 C17559) *
                C26934) *
               C3514 +
           (((C9616 * C144 + C9617 * C26970) * C17559 +
             (C20068 + C20069) * C17560) *
                C26934 -
            (((C9054 * C4370 + C26968 * C4478) * C26970 +
              (C9054 * C4312 + C26968 * C4314) * C144) *
                 C17560 +
             (C20069 + C20068) * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
             C18640 * C17560) *
                C26934 -
            (C18641 * C17560 + C18640 * C17559) * C26885) *
               C3514 +
           ((C20142 * C17559 + C21439 * C17560) * C26885 -
            (C20142 * C17560 +
             (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
                C26934) *
               C26857) *
              C26925 +
          (((C18632 * C17559 + C18633 * C17560) * C26885 -
            (C18632 * C17560 + C333 * C26968 * C17559) * C26934) *
               C3514 +
           ((C901 * C26968 * C17559 + C20138 * C17560) * C26934 -
            ((C309 * C4312 + C4533 + C4533 + C26970 * C4530) * C26968 * C17560 +
             C20138 * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                 C144 +
             (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                 C26970) *
                C26968 * C26934 -
            ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
              C17559 * C1570) *
                 C26970 +
             (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
              C17559 * C1368) *
                 C144) *
                C26968 * C26885) *
               C3514 +
           (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
              C17560 * C4425) *
                 C144 +
             (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
              C17560 * C4585) *
                 C26970) *
                C26968 * C26885 -
            ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                 C26970 +
             (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                 C144) *
                C26968 * C26934) *
               C26857) *
              C26925 +
          ((((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
              C17560 * C1370) *
                 C144 +
             (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
              C17560 * C1572) *
                 C26970) *
                C26968 * C26885 -
            ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                 C26970 +
             (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                 C144) *
                C26968 * C26934) *
               C3514 +
           (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                 C144 +
             (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                 C26970) *
                C26968 * C26934 -
            ((C17631 * C4370 + C17560 * C4584 + C17630 * C2934 +
              C17559 * C3236) *
                 C26970 +
             (C17631 * C4312 + C17560 * C4424 + C17630 * C2855 +
              C17559 * C3012) *
                 C144) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[38] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C17630 +
                       (C9054 * C208 + C26968 * C423) * C17559 +
                       C18562 * C17631 + C18750 * C17560) *
                          C26970 * C26934 -
                      (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                       C18562 * C17630) *
                          C26970 * C26885) *
                         C3514 +
                     ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
                       C13154 * C17560) *
                          C26970 * C26885 -
                      (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                       C9612 * C17630) *
                          C26970 * C26934) *
                         C26857) *
                        C26925 +
                    (((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
                       C18753 * C17560) *
                          C26970 * C26885 -
                      (C18752 * C17560 + C18566 * C17631 +
                       (C9054 * C209 + C26968 * C424) * C17559 +
                       (C9054 * C88 + C26968 * C93) * C17630) *
                          C26970 * C26934) *
                         C3514 +
                     ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                       C11818 * C17560) *
                          C26970 * C26934 -
                      ((C9054 * C4424 + C26968 * C4636) * C17560 +
                       (C9054 * C4312 + C26968 * C4314) * C17631 +
                       C11818 * C17559 + C11604 * C17630) *
                          C26970 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C17630 +
             (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
             C18808 * C17560) *
                C26968 * C26934 -
            (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
             C18438 * C17630) *
                C26968 * C26885) *
               C3514 +
           ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
             C21592 * C17560) *
                C26968 * C26885 -
            (C20343 * C17560 + C19930 * C17631 +
             (C144 * C751 + C26970 * C1075) * C17559 +
             (C144 * C601 + C26970 * C677) * C17630) *
                C26968 * C26934) *
               C26857) *
              C26925 +
          (((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 +
             C1705 * C17560) *
                C26968 * C26885 -
            (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
                C26968 * C26934) *
               C3514 +
           ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
                C26968 * C26934 -
            ((C144 * C4424 + C26970 * C4688) * C17560 +
             (C144 * C4312 + C26970 * C4370) * C17631 + C3385 * C17559 +
             C2944 * C17630) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[38] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                       C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                          C26970 * C26968 * C26934 -
                      (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                       C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                          C26970 * C26968 * C26885) *
                         C3514 +
                     ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                       C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                          C26970 * C26968 * C26885 -
                      (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                       C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                          C26970 * C26968 * C26934) *
                         C26857) *
                        C26925 +
                    (((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                       C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                          C26970 * C26968 * C26885 -
                      (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                       C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                          C26970 * C26968 * C26934) *
                         C3514 +
                     ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                       C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                          C26970 * C26968 * C26934 -
                      (C17837 * C4312 + C20412 + C20412 + C17560 * C4740 +
                       C17836 * C2855 + C20413 + C20413 + C17559 * C3453) *
                          C26970 * C26968 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26821 * C3514 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C26857) *
              C3516 +
          ((C9420 * C17559 + C11383 * C17560) * C26970 * C26821 * C26857 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26821 * C3514) *
              C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
            C19375 * C17560) *
               C26970 * C26821 * C3514 -
           ((C9053 * C2856 + C10902 + C10902 + C26968 * C2862) * C17560 +
            C10435 * C17559) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
           C18372 * C17560) *
              C26970 * C26821 * C3953 -
          (C11382 * C17560 + C9418 * C17559) * C26970 * C26821 * C3954 +
          (C9419 * C17559 + C14366 * C17560) * C26970 * C26821 * C3955 -
          ((C9053 * C14357 + C14363 + C14363 + C26968 * C14359) * C17560 +
           C12450 * C17559) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C144 * C87 + C26970 * C145) * C9054 +
                       (C144 * C92 + C26970 * C150) * C26968) *
                          C17559 +
                      (C18442 + C18443) * C17560) *
                         C26821 * C3514 -
                     ((C19933 + C19932) * C17560 +
                      ((C144 * C607 + C26970 * C683) * C26968 +
                       (C144 * C601 + C26970 * C677) * C9054) *
                          C17559) *
                         C26821 * C26857) *
                        C3516 +
                    (((C698 * C9054 + C697 * C26968) * C17559 +
                      (C19928 + C19929) * C17560) *
                         C26821 * C26857 -
                     ((C18435 + C18434) * C17560 +
                      (C169 * C26968 + C168 * C9054) * C17559) *
                         C26821 * C3514) *
                        C3517 +
                    (((C171 * C9054 + C170 * C26968) * C17559 +
                      (C19426 + C19427) * C17560) *
                         C26821 * C3514 -
                     (((C144 * C2859 + C26970 * C2938) * C26968 +
                       (C144 * C2856 + C26970 * C2935) * C9054) *
                          C17560 +
                      (C1899 * C26968 + C1898 * C9054) * C17559) *
                         C26821 * C26857) *
                        C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C144 * C87 + C26970 * C145) * C9054 +
                      (C144 * C92 + C26970 * C150) * C26968) *
                         C17559 +
                     (C18442 + C18443) * C17560) *
                        C26821 * C3953 -
                    ((C19933 + C19932) * C17560 +
                     ((C144 * C607 + C26970 * C683) * C26968 +
                      (C144 * C601 + C26970 * C677) * C9054) *
                         C17559) *
                        C26821 * C3954 +
                    (((C144 * C602 + C26970 * C678) * C9054 +
                      (C144 * C608 + C26970 * C684) * C26968) *
                         C17559 +
                     ((C144 * C5844 + C26970 * C5902) * C9054 +
                      (C144 * C5846 + C26970 * C5904) * C26968) *
                         C17560) *
                        C26821 * C3955 -
                    (((C144 * C14358 + C26970 * C14418) * C26968 +
                      (C144 * C14357 + C26970 * C14417) * C9054) *
                         C17560 +
                     ((C144 * C3961 + C26970 * C4003) * C26968 +
                      (C144 * C3959 + C26970 * C4001) * C9054) *
                         C17559) *
                        C26821 * C3956) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eexz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26821 * C3514 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26821 * C26857) *
              C3516 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C9054 +
            (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                C26968) *
               C26970 * C26821 * C26857 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26821 * C3514) *
              C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C9054 +
            (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
                C26968) *
               C26970 * C26821 * C3514 -
           ((C17631 * C2859 + C17560 * C3016 + C17630 * C610 + C17559 * C760) *
                C26968 +
            (C17631 * C2856 + C17560 * C3013 + C17630 * C604 + C17559 * C754) *
                C9054) *
               C26970 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C9054 +
           (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
               C26968) *
              C26970 * C26821 * C3953 -
          ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
               C26968 +
           (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
               C9054) *
              C26970 * C26821 * C3954 +
          ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
               C9054 +
           (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
               C26968) *
              C26970 * C26821 * C3955 -
          ((C17631 * C14358 + C17560 * C14470 + C17630 * C3961 +
            C17559 * C4041) *
               C26968 +
           (C17631 * C14357 + C17560 * C14469 + C17630 * C3959 +
            C17559 * C4039) *
               C9054) *
              C26970 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C144 +
                       (C9054 * C145 + C26968 * C270) * C26970) *
                          C17559 +
                      (C18570 + C18571) * C17560) *
                         C26821 * C3514 -
                     ((C20067 + C20066) * C17560 +
                      (C9613 * C26970 + C9612 * C144) * C17559) *
                         C26821 * C26857) *
                        C3516 +
                    (((C9616 * C144 + C9617 * C26970) * C17559 +
                      (C20068 + C20069) * C17560) *
                         C26821 * C26857 -
                     ((C18575 + C18574) * C17560 +
                      ((C9054 * C146 + C26968 * C271) * C26970 +
                       (C9054 * C88 + C26968 * C93) * C144) *
                          C17559) *
                         C26821 * C3514) *
                        C3517 +
                    ((((C9054 * C89 + C26968 * C94) * C144 +
                       (C9054 * C147 + C26968 * C272) * C26970) *
                          C17559 +
                      (C19534 + C19535) * C17560) *
                         C26821 * C3514 -
                     (((C9054 * C2935 + C26968 * C3091) * C26970 +
                       (C9054 * C2856 + C26968 * C2859) * C144) *
                          C17560 +
                      (C10594 * C26970 + C10593 * C144) * C17559) *
                         C26821 * C26857) *
                        C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C144 +
                      (C9054 * C145 + C26968 * C270) * C26970) *
                         C17559 +
                     (C18570 + C18571) * C17560) *
                        C26821 * C3953 -
                    ((C20067 + C20066) * C17560 +
                     (C9613 * C26970 + C9612 * C144) * C17559) *
                        C26821 * C3954 +
                    ((C9615 * C144 + C9614 * C26970) * C17559 +
                     (C14535 * C144 + C14536 * C26970) * C17560) *
                        C26821 * C3955 -
                    (((C9054 * C14417 + C26968 * C14529) * C26970 +
                      (C9054 * C14357 + C26968 * C14358) * C144) *
                         C17560 +
                     (C12572 * C26970 + C12571 * C144) * C17559) *
                        C26821 * C3956) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26821 * C3514 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26821 * C26857) *
              C3516 +
          ((C901 * C26968 * C17559 + C20138 * C17560) * C26821 * C26857 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C26821 * C3514) *
              C3517 +
          ((C334 * C26968 * C17559 + C19586 * C17560) * C26821 * C3514 -
           ((C309 * C2856 + C3166 + C3166 + C26970 * C3160) * C26968 * C17560 +
            C2065 * C26968 * C17559) *
               C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
           C18640 * C17560) *
              C26821 * C3953 -
          (C20142 * C17560 +
           (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
              C26821 * C3954 +
          ((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
           (C309 * C5844 + C6065 + C6065 + C26970 * C6062) * C26968 * C17560) *
              C26821 * C3955 -
          ((C309 * C14357 + C21034 + C21034 + C26970 * C14586) * C26968 *
               C17560 +
           (C309 * C3959 + C4116 + C4116 + C26970 * C4113) * C26968 * C17559) *
              C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26821 * C3514 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26821 * C26857) *
              C3516 +
          (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                C144 +
            (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                C26970) *
               C26968 * C26821 * C26857 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26821 * C3514) *
              C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C144 +
            (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
                C26970) *
               C26968 * C26821 * C3514 -
           ((C17631 * C2935 + C17560 * C3237 + C17630 * C680 + C17559 * C956) *
                C26970 +
            (C17631 * C2856 + C17560 * C3013 + C17630 * C604 + C17559 * C754) *
                C144) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C144 +
           (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
               C26970) *
              C26968 * C26821 * C3953 -
          ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
               C26970 +
           (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
               C144) *
              C26968 * C26821 * C3954 +
          ((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
               C144 +
           (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
               C26970) *
              C26968 * C26821 * C3955 -
          ((C17631 * C14417 + C17560 * C14639 + C17630 * C4001 +
            C17559 * C4151) *
               C26970 +
           (C17631 * C14357 + C17560 * C14469 + C17630 * C3959 +
            C17559 * C4039) *
               C144) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26821 * C3514 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C26821 * C26857) *
                        C3516 +
                    ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                      C11818 * C17560) *
                         C26970 * C26821 * C26857 -
                     (C18752 * C17560 + C18566 * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C26821 * C3514) *
                        C3517 +
                    (((C9054 * C89 + C26968 * C94) * C17630 +
                      (C9054 * C210 + C26968 * C425) * C17559 +
                      C19532 * C17631 + C19689 * C17560) *
                         C26970 * C26821 * C3514 -
                     ((C9054 * C3013 + C26968 * C3311) * C17560 +
                      (C9054 * C2856 + C26968 * C2859) * C17631 +
                      C10750 * C17559 + C10593 * C17630) *
                         C26970 * C26821 * C26857) *
                        C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9054 * C87 + C26968 * C92) * C17630 +
                     (C9054 * C208 + C26968 * C423) * C17559 + C18562 * C17631 +
                     C18750 * C17560) *
                        C26970 * C26821 * C3953 -
                    (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                     C9612 * C17630) *
                        C26970 * C26821 * C3954 +
                    (C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
                     C14698 * C17560) *
                        C26970 * C26821 * C3955 -
                    ((C9054 * C14469 + C26968 * C14693) * C17560 +
                     (C9054 * C14357 + C26968 * C14358) * C17631 +
                     C12686 * C17559 + C12571 * C17630) *
                        C26970 * C26821 * C3956) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eezy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C26821 * C3514 -
           (C20343 * C17560 + C19930 * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C26821 * C26857) *
              C3516 +
          ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
               C26968 * C26821 * C26857 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26821 * C3514) *
              C3517 +
          ((C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
               C26968 * C26821 * C3514 -
           ((C144 * C3013 + C26970 * C3380) * C17560 +
            (C144 * C2856 + C26970 * C2935) * C17631 + C2227 * C17559 +
            C1898 * C17630) *
               C26968 * C26821 * C26857) *
              C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C17630 +
           (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
           C18808 * C17560) *
              C26968 * C26821 * C3953 -
          (C20343 * C17560 + C19930 * C17631 +
           (C144 * C751 + C26970 * C1075) * C17559 +
           (C144 * C601 + C26970 * C677) * C17630) *
              C26968 * C26821 * C3954 +
          ((C144 * C602 + C26970 * C678) * C17630 +
           (C144 * C752 + C26970 * C1076) * C17559 +
           (C144 * C5844 + C26970 * C5902) * C17631 +
           (C144 * C5956 + C26970 * C6220) * C17560) *
              C26968 * C26821 * C3955 -
          ((C144 * C14469 + C26970 * C14749) * C17560 +
           (C144 * C14357 + C26970 * C14417) * C17631 +
           (C144 * C4039 + C26970 * C4223) * C17559 +
           (C144 * C3959 + C26970 * C4001) * C17630) *
              C26968 * C26821 * C3956) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26821 * C3514 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26821 * C26857) *
                        C3516 +
                    ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                      C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                         C26970 * C26968 * C26821 * C26857 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26821 * C3514) *
                        C3517 +
                    ((C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                      C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                         C26970 * C26968 * C26821 * C3514 -
                     (C17837 * C2856 + C19318 + C19318 + C17560 * C3454 +
                      C17836 * C604 + C19319 + C19319 + C17559 * C1144) *
                         C26970 * C26968 * C26821 * C26857) *
                        C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                     C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                        C26970 * C26968 * C26821 * C3953 -
                    (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                     C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                        C26970 * C26968 * C26821 * C3954 +
                    (C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                     C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                        C26970 * C26968 * C26821 * C3955 -
                    (C17837 * C14357 + C21171 + C21171 + C17560 * C14800 +
                     C17836 * C3959 + C21172 + C21172 + C17559 * C4259) *
                        C26970 * C26968 * C26821 * C3956) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
             C18372 * C17560) *
                C26970 * C6325 -
            (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
               C26933 +
           ((C11382 * C17559 + C12822 * C17560) * C26970 * C26885 -
            (C11382 * C17560 + C9418 * C17559) * C26970 * C6325) *
               C26857) *
              C26925 +
          (((C18374 * C17559 + C18375 * C17560) * C26970 * C26885 -
            (C18374 * C17560 +
             (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
                C26970 * C6325) *
               C26933 +
           ((C9420 * C17559 + C11383 * C17560) * C26970 * C6325 -
            ((C9053 * C4312 + C9970 + C9970 + C26968 * C4316) * C17560 +
             C11383 * C17559) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C144 * C87 + C26970 * C145) * C9054 +
              (C144 * C92 + C26970 * C150) * C26968) *
                 C17559 +
             (C18442 + C18443) * C17560) *
                C6325 -
            ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) *
                C26885) *
               C26933 +
           (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C26885 -
            ((C19933 + C19932) * C17560 +
             ((C144 * C607 + C26970 * C683) * C26968 +
              (C144 * C601 + C26970 * C677) * C9054) *
                 C17559) *
                C6325) *
               C26857) *
              C26925 +
          ((((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26885 -
            ((C18435 + C18434) * C17560 +
             (C169 * C26968 + C168 * C9054) * C17559) *
                C6325) *
               C26933 +
           (((C698 * C9054 + C697 * C26968) * C17559 +
             (C19928 + C19929) * C17560) *
                C6325 -
            (((C144 * C4314 + C26970 * C4372) * C26968 +
              (C144 * C4312 + C26970 * C4370) * C9054) *
                 C17560 +
             (C19929 + C19928) * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                 C9054 +
             (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                 C26968) *
                C26970 * C6325 -
            ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
              C17559 * C1374) *
                 C26968 +
             (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
              C17559 * C1368) *
                 C9054) *
                C26970 * C26885) *
               C26933 +
           (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
              C17560 * C4425) *
                 C9054 +
             (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
              C17560 * C4427) *
                 C26968) *
                C26970 * C26885 -
            ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                 C26968 +
             (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                 C9054) *
                C26970 * C6325) *
               C26857) *
              C26925 +
          ((((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
              C17560 * C1370) *
                 C9054 +
             (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
              C17560 * C1376) *
                 C26968) *
                C26970 * C26885 -
            ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                 C26968 +
             (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                 C9054) *
                C26970 * C6325) *
               C26933 +
           (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                 C9054 +
             (C17630 * C606 + C17559 * C756 + C17631 * C2858 + C17560 * C3015) *
                 C26968) *
                C26970 * C6325 -
            ((C17631 * C4314 + C17560 * C4426 + C17630 * C2858 +
              C17559 * C3015) *
                 C26968 +
             (C17631 * C4312 + C17560 * C4424 + C17630 * C2855 +
              C17559 * C3012) *
                 C9054) *
                C26970 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((((C9054 * C87 + C26968 * C92) * C144 +
              (C9054 * C145 + C26968 * C270) * C26970) *
                 C17559 +
             (C18570 + C18571) * C17560) *
                C6325 -
            ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) *
                C26885) *
               C26933 +
           (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C26885 -
            ((C20067 + C20066) * C17560 +
             (C9613 * C26970 + C9612 * C144) * C17559) *
                C6325) *
               C26857) *
              C26925 +
          ((((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26885 -
            ((C18575 + C18574) * C17560 +
             ((C9054 * C146 + C26968 * C271) * C26970 +
              (C9054 * C88 + C26968 * C93) * C144) *
                 C17559) *
                C6325) *
               C26933 +
           (((C9616 * C144 + C9617 * C26970) * C17559 +
             (C20068 + C20069) * C17560) *
                C6325 -
            (((C9054 * C4370 + C26968 * C4478) * C26970 +
              (C9054 * C4312 + C26968 * C4314) * C144) *
                 C17560 +
             (C20069 + C20068) * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
             C18640 * C17560) *
                C6325 -
            (C18641 * C17560 + C18640 * C17559) * C26885) *
               C26933 +
           ((C20142 * C17559 + C21439 * C17560) * C26885 -
            (C20142 * C17560 +
             (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
                C6325) *
               C26857) *
              C26925 +
          (((C18632 * C17559 + C18633 * C17560) * C26885 -
            (C18632 * C17560 + C333 * C26968 * C17559) * C6325) *
               C26933 +
           ((C901 * C26968 * C17559 + C20138 * C17560) * C6325 -
            ((C309 * C4312 + C4533 + C4533 + C26970 * C4530) * C26968 * C17560 +
             C20138 * C17559) *
                C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                 C144 +
             (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                 C26970) *
                C26968 * C6325 -
            ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
              C17559 * C1570) *
                 C26970 +
             (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
              C17559 * C1368) *
                 C144) *
                C26968 * C26885) *
               C26933 +
           (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
              C17560 * C4425) *
                 C144 +
             (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
              C17560 * C4585) *
                 C26970) *
                C26968 * C26885 -
            ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                 C26970 +
             (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                 C144) *
                C26968 * C6325) *
               C26857) *
              C26925 +
          ((((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
              C17560 * C1370) *
                 C144 +
             (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
              C17560 * C1572) *
                 C26970) *
                C26968 * C26885 -
            ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                 C26970 +
             (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                 C144) *
                C26968 * C6325) *
               C26933 +
           (((C17630 * C600 + C17559 * C750 + C17631 * C2855 + C17560 * C3012) *
                 C144 +
             (C17630 * C676 + C17559 * C952 + C17631 * C2934 + C17560 * C3236) *
                 C26970) *
                C26968 * C6325 -
            ((C17631 * C4370 + C17560 * C4584 + C17630 * C2934 +
              C17559 * C3236) *
                 C26970 +
             (C17631 * C4312 + C17560 * C4424 + C17630 * C2855 +
              C17559 * C3012) *
                 C144) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C9054 * C87 + C26968 * C92) * C17630 +
                       (C9054 * C208 + C26968 * C423) * C17559 +
                       C18562 * C17631 + C18750 * C17560) *
                          C26970 * C6325 -
                      (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                       C18562 * C17630) *
                          C26970 * C26885) *
                         C26933 +
                     ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
                       C13154 * C17560) *
                          C26970 * C26885 -
                      (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                       C9612 * C17630) *
                          C26970 * C6325) *
                         C26857) *
                        C26925 +
                    (((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
                       C18753 * C17560) *
                          C26970 * C26885 -
                      (C18752 * C17560 + C18566 * C17631 +
                       (C9054 * C209 + C26968 * C424) * C17559 +
                       (C9054 * C88 + C26968 * C93) * C17630) *
                          C26970 * C6325) *
                         C26933 +
                     ((C9616 * C17630 + C9798 * C17559 + C11604 * C17631 +
                       C11818 * C17560) *
                          C26970 * C6325 -
                      ((C9054 * C4424 + C26968 * C4636) * C17560 +
                       (C9054 * C4312 + C26968 * C4314) * C17631 +
                       C11818 * C17559 + C11604 * C17630) *
                          C26970 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C17630 +
             (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
             C18808 * C17560) *
                C26968 * C6325 -
            (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
             C18438 * C17630) *
                C26968 * C26885) *
               C26933 +
           ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
             C21592 * C17560) *
                C26968 * C26885 -
            (C20343 * C17560 + C19930 * C17631 +
             (C144 * C751 + C26970 * C1075) * C17559 +
             (C144 * C601 + C26970 * C677) * C17630) *
                C26968 * C6325) *
               C26857) *
              C26925 +
          (((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 +
             C1705 * C17560) *
                C26968 * C26885 -
            (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
                C26968 * C6325) *
               C26933 +
           ((C698 * C17630 + C1087 * C17559 + C2944 * C17631 + C3385 * C17560) *
                C26968 * C6325 -
            ((C144 * C4424 + C26970 * C4688) * C17560 +
             (C144 * C4312 + C26970 * C4370) * C17631 + C3385 * C17559 +
             C2944 * C17630) *
                C26968 * C26885) *
               C26857) *
              C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                       C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                          C26970 * C26968 * C6325 -
                      (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                       C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                          C26970 * C26968 * C26885) *
                         C26933 +
                     ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                       C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                          C26970 * C26968 * C26885 -
                      (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                       C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                          C26970 * C26968 * C6325) *
                         C26857) *
                        C26925 +
                    (((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                       C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                          C26970 * C26968 * C26885 -
                      (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                       C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                          C26970 * C26968 * C6325) *
                         C26933 +
                     ((C17836 * C600 + C18301 + C18301 + C17559 * C1140 +
                       C17837 * C2855 + C18302 + C18302 + C17560 * C3453) *
                          C26970 * C26968 * C6325 -
                      (C17837 * C4312 + C20412 + C20412 + C17560 * C4740 +
                       C17836 * C2855 + C20413 + C20413 + C17559 * C3453) *
                          C26970 * C26968 * C26885) *
                         C26857) *
                        C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26963 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26964 +
           (C18373 * C17559 + C24103 * C17560) * C26970 * C8165) *
              C26933 +
          ((C11382 * C17559 + C12822 * C17560) * C26970 * C26964 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C26963 -
           ((C9053 * C15741 + C15745 + C15745 + C26968 * C15743) * C17560 +
            C12822 * C17559) *
               C26970 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C26963 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26964 +
           ((C18445 + C18444) * C17559 + (C24146 + C24147) * C17560) * C8165) *
              C26933 +
          (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C26964 -
           ((C19933 + C19932) * C17560 +
            ((C144 * C607 + C26970 * C683) * C26968 +
             (C144 * C601 + C26970 * C677) * C9054) *
                C17559) *
               C26963 -
           (((C144 * C15742 + C26970 * C15781) * C26968 +
             (C144 * C15741 + C26970 * C15780) * C9054) *
                C17560 +
            (C21280 + C21279) * C17559) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eexz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26963 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26964 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C9054 +
            (C17630 * C1225 + C17559 * C1375 + C17631 * C7218 +
             C17560 * C7298) *
                C26968) *
               C26970 * C8165) *
              C26933 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C9054 +
            (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
             C17560 * C4427) *
                C26968) *
               C26970 * C26964 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C26963 -
           ((C17631 * C15742 + C17560 * C15817 + C17630 * C4315 +
             C17559 * C4427) *
                C26968 +
            (C17631 * C15741 + C17560 * C15816 + C17630 * C4313 +
             C17559 * C4425) *
                C9054) *
               C26970 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C26963 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26964 +
           ((C18573 + C18572) * C17559 + (C24225 + C24226) * C17560) * C8165) *
              C26933 +
          (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C26964 -
           ((C20067 + C20066) * C17560 +
            (C9613 * C26970 + C9612 * C144) * C17559) *
               C26963 -
           (((C9054 * C15780 + C26968 * C15852) * C26970 +
             (C9054 * C15741 + C26968 * C15742) * C144) *
                C17560 +
            (C21382 + C21381) * C17559) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26963 -
           (C18641 * C17560 + C18640 * C17559) * C26964 +
           (C18641 * C17559 + C24268 * C17560) * C8165) *
              C26933 +
          ((C20142 * C17559 + C21439 * C17560) * C26964 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C26963 -
           ((C309 * C15741 + C21435 + C21435 + C26970 * C15887) * C26968 *
                C17560 +
            C21439 * C17559) *
               C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eeyz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26963 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26964 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C144 +
            (C17630 * C1295 + C17559 * C1571 + C17631 * C7258 +
             C17560 * C7408) *
                C26970) *
               C26968 * C8165) *
              C26933 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C144 +
            (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
             C17560 * C4585) *
                C26970) *
               C26968 * C26964 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C26963 -
           ((C17631 * C15780 + C17560 * C15924 + C17630 * C4371 +
             C17559 * C4585) *
                C26970 +
            (C17631 * C15741 + C17560 * C15816 + C17630 * C4313 +
             C17559 * C4425) *
                C144) *
               C26968 * C8165) *
              C26857) *
         C26786) /
        (p * q * std::sqrt(p + q));
    d2eezx[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26963 -
                     (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                      C18562 * C17630) *
                         C26970 * C26964 +
                     (C18565 * C17630 + C18751 * C17559 + C24223 * C17631 +
                      C24341 * C17560) *
                         C26970 * C8165) *
                        C26933 +
                    ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
                      C13154 * C17560) *
                         C26970 * C26964 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C26963 -
                     ((C9054 * C15816 + C26968 * C15959) * C17560 +
                      (C9054 * C15741 + C26968 * C15742) * C17631 +
                      C13154 * C17559 + C12991 * C17630) *
                         C26970 * C8165) *
                        C26857) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eezy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C144 * C87 + C26970 * C145) * C17630 +
                      (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
                      C18808 * C17560) *
                         C26968 * C26963 -
                     (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
                      C18438 * C17630) *
                         C26968 * C26964 +
                     (C18441 * C17630 + C18809 * C17559 + C24144 * C17631 +
                      C24379 * C17560) *
                         C26968 * C8165) *
                        C26933 +
                    ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
                      C21592 * C17560) *
                         C26968 * C26964 -
                     (C20343 * C17560 + C19930 * C17631 +
                      (C144 * C751 + C26970 * C1075) * C17559 +
                      (C144 * C601 + C26970 * C677) * C17630) *
                         C26968 * C26963 -
                     ((C144 * C15816 + C26970 * C15994) * C17560 +
                      (C144 * C15741 + C26970 * C15780) * C17631 +
                      C21592 * C17559 + C21277 * C17630) *
                         C26968 * C8165) *
                        C26857) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eezz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26963 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26964 +
                     (C17836 * C1219 + C18862 + C18862 + C17559 * C1759 +
                      C17837 * C7216 + C18863 + C18863 + C17560 * C7516) *
                         C26970 * C26968 * C8165) *
                        C26933 +
                    ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                      C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                         C26970 * C26968 * C26964 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C26963 -
                     (C17837 * C15741 + C21643 + C21643 + C17560 * C16029 +
                      C17836 * C4313 + C21644 + C21644 + C17559 * C4741) *
                         C26970 * C26968 * C8165) *
                        C26857) *
                   C26786) /
                  (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C6325 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
              C595 +
          ((C11382 * C17559 + C12822 * C17560) * C26970 * C26885 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C6325) *
              C596 +
          ((C9419 * C17559 + C14366 * C17560) * C26970 * C6325 -
           ((C9053 * C12813 + C12819 + C12819 + C26968 * C12815) * C17560 +
            C14366 * C17559) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C6325 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
              C26805 * C3516 +
          ((C18374 * C17559 + C18375 * C17560) * C26970 * C26885 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C6325) *
              C26805 * C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
            C19375 * C17560) *
               C26970 * C6325 -
           ((C9053 * C1222 + C19372 + C19372 + C26968 * C1234) * C17560 +
            C19375 * C17559) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
           C18372 * C17560) *
              C26970 * C7211 -
          (C18373 * C17560 + C18372 * C17559) * C26970 * C7212 +
          (C18373 * C17559 + C24103 * C17560) * C26970 * C7213 -
          ((C9053 * C24094 + C24100 + C24100 + C26968 * C24096) * C17560 +
           C24103 * C17559) *
              C26970 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] +=
        (-std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C6325 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26885) *
              C595 +
          (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C26885 -
           ((C19933 + C19932) * C17560 +
            ((C144 * C607 + C26970 * C683) * C26968 +
             (C144 * C601 + C26970 * C677) * C9054) *
                C17559) *
               C6325) *
              C596 +
          ((((C144 * C602 + C26970 * C678) * C9054 +
             (C144 * C608 + C26970 * C684) * C26968) *
                C17559 +
            (C22795 + C22796) * C17560) *
               C6325 -
           (((C144 * C12814 + C26970 * C12874) * C26968 +
             (C144 * C12813 + C26970 * C12873) * C9054) *
                C17560 +
            (C22796 + C22795) * C17559) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C6325 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26885) *
              C26805 * C3516 +
          (((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26885 -
           ((C18435 + C18434) * C17560 +
            (C169 * C26968 + C168 * C9054) * C17559) *
               C6325) *
              C26805 * C3517 +
          (((C171 * C9054 + C170 * C26968) * C17559 +
            (C19426 + C19427) * C17560) *
               C6325 -
           (((C144 * C1228 + C26970 * C1304) * C26968 +
             (C144 * C1222 + C26970 * C1298) * C9054) *
                C17560 +
            (C19427 + C19426) * C17559) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C9054 +
            (C144 * C92 + C26970 * C150) * C26968) *
               C17559 +
           (C18442 + C18443) * C17560) *
              C7211 -
          ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C7212 +
          ((C18445 + C18444) * C17559 + (C24146 + C24147) * C17560) * C7213 -
          (((C144 * C24095 + C26970 * C24138) * C26968 +
            (C144 * C24094 + C26970 * C24137) * C9054) *
               C17560 +
           (C24147 + C24146) * C17559) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26885) *
              C595 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C9054 +
            (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
             C17560 * C4427) *
                C26968) *
               C26970 * C26885 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C6325) *
              C596 +
          (((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C9054 +
            (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C12814 + C17560 * C12926 + C17630 * C5846 +
             C17559 * C5958) *
                C26968 +
            (C17631 * C12813 + C17560 * C12925 + C17630 * C5844 +
             C17559 * C5956) *
                C9054) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26885) *
              C26805 * C3516 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C9054 +
            (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
             C17560 * C1376) *
                C26968) *
               C26970 * C26885 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C6325) *
              C26805 * C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C9054 +
            (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C1228 + C17560 * C1378 + C17630 * C1227 +
             C17559 * C1377) *
                C26968 +
            (C17631 * C1222 + C17560 * C1372 + C17630 * C1221 +
             C17559 * C1371) *
                C9054) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C9054 +
           (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
               C26968) *
              C26970 * C7211 -
          ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 + C17559 * C1374) *
               C26968 +
           (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 + C17559 * C1368) *
               C9054) *
              C26970 * C7212 +
          ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 + C17560 * C7296) *
               C9054 +
           (C17630 * C1225 + C17559 * C1375 + C17631 * C7218 + C17560 * C7298) *
               C26968) *
              C26970 * C7213 -
          ((C17631 * C24095 + C17560 * C24182 + C17630 * C7218 +
            C17559 * C7298) *
               C26968 +
           (C17631 * C24094 + C17560 * C24181 + C17630 * C7216 +
            C17559 * C7296) *
               C9054) *
              C26970 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[42] +=
        (-std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C6325 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26885) *
              C595 +
          (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C26885 -
           ((C20067 + C20066) * C17560 +
            (C9613 * C26970 + C9612 * C144) * C17559) *
               C6325) *
              C596 +
          (((C9615 * C144 + C9614 * C26970) * C17559 +
            (C22897 + C22898) * C17560) *
               C6325 -
           (((C9054 * C12873 + C26968 * C12985) * C26970 +
             (C9054 * C12813 + C26968 * C12814) * C144) *
                C17560 +
            (C22898 + C22897) * C17559) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C6325 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26885) *
              C26805 * C3516 +
          (((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26885 -
           ((C18575 + C18574) * C17560 +
            ((C9054 * C146 + C26968 * C271) * C26970 +
             (C9054 * C88 + C26968 * C93) * C144) *
                C17559) *
               C6325) *
              C26805 * C3517 +
          ((((C9054 * C89 + C26968 * C94) * C144 +
             (C9054 * C147 + C26968 * C272) * C26970) *
                C17559 +
            (C19534 + C19535) * C17560) *
               C6325 -
           (((C9054 * C1298 + C26968 * C1446) * C26970 +
             (C9054 * C1222 + C26968 * C1228) * C144) *
                C17560 +
            (C19535 + C19534) * C17559) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C144 +
            (C9054 * C145 + C26968 * C270) * C26970) *
               C17559 +
           (C18570 + C18571) * C17560) *
              C7211 -
          ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C7212 +
          ((C18573 + C18572) * C17559 + (C24225 + C24226) * C17560) * C7213 -
          (((C9054 * C24137 + C26968 * C24217) * C26970 +
            (C9054 * C24094 + C26968 * C24095) * C144) *
               C17560 +
           (C24226 + C24225) * C17559) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C6325 -
           (C18641 * C17560 + C18640 * C17559) * C26885) *
              C595 +
          ((C20142 * C17559 + C21439 * C17560) * C26885 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C6325) *
              C596 +
          (((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
            C22955 * C17560) *
               C6325 -
           ((C309 * C12813 + C22951 + C22951 + C26970 * C13042) * C26968 *
                C17560 +
            C22955 * C17559) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C6325 -
           (C18641 * C17560 + C18640 * C17559) * C26885) *
              C26805 * C3516 +
          ((C18632 * C17559 + C18633 * C17560) * C26885 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C6325) *
              C26805 * C3517 +
          ((C334 * C26968 * C17559 + C19586 * C17560) * C6325 -
           ((C309 * C1222 + C1513 + C1513 + C26970 * C1502) * C26968 * C17560 +
            C19586 * C17559) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
           C18640 * C17560) *
              C7211 -
          (C18641 * C17560 + C18640 * C17559) * C7212 +
          (C18641 * C17559 + C24268 * C17560) * C7213 -
          ((C309 * C24094 + C24264 + C24264 + C26970 * C24260) * C26968 *
               C17560 +
           C24268 * C17559) *
              C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26885) *
              C595 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C144 +
            (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
             C17560 * C4585) *
                C26970) *
               C26968 * C26885 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C6325) *
              C596 +
          (((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C144 +
            (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C12873 + C17560 * C13095 + C17630 * C5902 +
             C17559 * C6116) *
                C26970 +
            (C17631 * C12813 + C17560 * C12925 + C17630 * C5844 +
             C17559 * C5956) *
                C144) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26885) *
              C26805 * C3516 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C144 +
            (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
             C17560 * C1572) *
                C26970) *
               C26968 * C26885 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C6325) *
              C26805 * C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C144 +
            (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C1298 + C17560 * C1574 + C17630 * C1297 +
             C17559 * C1573) *
                C26970 +
            (C17631 * C1222 + C17560 * C1372 + C17630 * C1221 +
             C17559 * C1371) *
                C144) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
               C144 +
           (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
               C26970) *
              C26968 * C7211 -
          ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 + C17559 * C1570) *
               C26970 +
           (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 + C17559 * C1368) *
               C144) *
              C26968 * C7212 +
          ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 + C17560 * C7296) *
               C144 +
           (C17630 * C1295 + C17559 * C1571 + C17631 * C7258 + C17560 * C7408) *
               C26970) *
              C26968 * C7213 -
          ((C17631 * C24137 + C17560 * C24302 + C17630 * C7258 +
            C17559 * C7408) *
               C26970 +
           (C17631 * C24094 + C17560 * C24181 + C17630 * C7216 +
            C17559 * C7296) *
               C144) *
              C26968 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C9054 * C87 + C26968 * C92) * C17630 +
            (C9054 * C208 + C26968 * C423) * C17559 + C18562 * C17631 +
            C18750 * C17560) *
               C26970 * C6325 -
           (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
            C18562 * C17630) *
               C26970 * C26885) *
              C595 +
          ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
            C13154 * C17560) *
               C26970 * C26885 -
           (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
            C9612 * C17630) *
               C26970 * C6325) *
              C596 +
          ((C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
            C14698 * C17560) *
               C26970 * C6325 -
           ((C9054 * C12925 + C26968 * C13149) * C17560 +
            (C9054 * C12813 + C26968 * C12814) * C17631 + C14698 * C17559 +
            C14535 * C17630) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9054 * C87 + C26968 * C92) * C17630 +
                                (C9054 * C208 + C26968 * C423) * C17559 +
                                C18562 * C17631 + C18750 * C17560) *
                                   C26970 * C6325 -
                               (C18751 * C17560 + C18565 * C17631 +
                                C18750 * C17559 + C18562 * C17630) *
                                   C26970 * C26885) *
                                  C26805 * C3516 +
                              ((C18566 * C17630 + C18752 * C17559 +
                                C18568 * C17631 + C18753 * C17560) *
                                   C26970 * C26885 -
                               (C18752 * C17560 + C18566 * C17631 +
                                (C9054 * C209 + C26968 * C424) * C17559 +
                                (C9054 * C88 + C26968 * C93) * C17630) *
                                   C26970 * C6325) *
                                  C26805 * C3517 +
                              (((C9054 * C89 + C26968 * C94) * C17630 +
                                (C9054 * C210 + C26968 * C425) * C17559 +
                                C19532 * C17631 + C19689 * C17560) *
                                   C26970 * C6325 -
                               ((C9054 * C1372 + C26968 * C1640) * C17560 +
                                (C9054 * C1222 + C26968 * C1228) * C17631 +
                                C19689 * C17559 + C19532 * C17630) *
                                   C26970 * C26885) *
                                  C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9054 * C87 + C26968 * C92) * C17630 +
           (C9054 * C208 + C26968 * C423) * C17559 + C18562 * C17631 +
           C18750 * C17560) *
              C26970 * C7211 -
          (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
           C18562 * C17630) *
              C26970 * C7212 +
          (C18565 * C17630 + C18751 * C17559 + C24223 * C17631 +
           C24341 * C17560) *
              C26970 * C7213 -
          ((C9054 * C24181 + C26968 * C24337) * C17560 +
           (C9054 * C24094 + C26968 * C24095) * C17631 + C24341 * C17559 +
           C24223 * C17630) *
              C26970 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezy[42] +=
        (-std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C6325 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C26885) *
              C595 +
          ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
            C21592 * C17560) *
               C26968 * C26885 -
           (C20343 * C17560 + C19930 * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C6325) *
              C596 +
          (((C144 * C602 + C26970 * C678) * C17630 +
            (C144 * C752 + C26970 * C1076) * C17559 + C22793 * C17631 +
            C23108 * C17560) *
               C26968 * C6325 -
           ((C144 * C12925 + C26970 * C13205) * C17560 +
            (C144 * C12813 + C26970 * C12873) * C17631 + C23108 * C17559 +
            C22793 * C17630) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C6325 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C26885) *
              C26805 * C3516 +
          ((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 + C1705 * C17560) *
               C26968 * C26885 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C6325) *
              C26805 * C3517 +
          ((C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
               C26968 * C6325 -
           ((C144 * C1372 + C26970 * C1696) * C17560 +
            (C144 * C1222 + C26970 * C1298) * C17631 + C2729 * C17559 +
            C2400 * C17630) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C144 * C87 + C26970 * C145) * C17630 +
           (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
           C18808 * C17560) *
              C26968 * C7211 -
          (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
           C18438 * C17630) *
              C26968 * C7212 +
          (C18441 * C17630 + C18809 * C17559 + C24144 * C17631 +
           C24379 * C17560) *
              C26968 * C7213 -
          ((C144 * C24181 + C26970 * C24375) * C17560 +
           (C144 * C24094 + C26970 * C24137) * C17631 + C24379 * C17559 +
           C24144 * C17630) *
              C26968 * C7214) *
         C26805 * C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[42] += (-std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26885) *
                        C595 +
                    ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                      C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                         C26970 * C26968 * C26885 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C6325) *
                        C596 +
                    ((C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                      C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C12813 + C23159 + C23159 + C17560 * C13256 +
                      C17836 * C5844 + C23160 + C23160 + C17559 * C6272) *
                         C26970 * C26968 * C26885) *
                        C597) *
                   C26786) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26885) *
                        C26805 * C3516 +
                    ((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                      C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                         C26970 * C26968 * C26885 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C6325) *
                        C26805 * C3517 +
                    ((C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                      C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C1222 + C19790 + C19790 + C17560 * C1762 +
                      C17836 * C1221 + C19791 + C19791 + C17559 * C1761) *
                         C26970 * C26968 * C26885) *
                        C26805 * C3518)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                     C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                        C26970 * C26968 * C7211 -
                    (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                     C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                        C26970 * C26968 * C7212 +
                    (C17836 * C1219 + C18862 + C18862 + C17559 * C1759 +
                     C17837 * C7216 + C18863 + C18863 + C17560 * C7516) *
                        C26970 * C26968 * C7213 -
                    (C17837 * C24094 + C24415 + C24415 + C17560 * C24413 +
                     C17836 * C7216 + C24416 + C24416 + C17559 * C7516) *
                        C26970 * C26968 * C7214) *
                   C26805 * C26786) /
                      (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C26963 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26964 +
           (C18373 * C17559 + C24103 * C17560) * C26970 * C8165) *
              C26805 * C26925 +
          ((C18374 * C17559 + C18375 * C17560) * C26970 * C26964 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C26963 -
           ((C9053 * C7215 + C18363 + C18363 + C26968 * C7219) * C17560 +
            C18375 * C17559) *
               C26970 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexy[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C26963 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26964 +
           ((C18445 + C18444) * C17559 + (C24146 + C24147) * C17560) * C8165) *
              C26805 * C26925 +
          (((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26964 -
           ((C18435 + C18434) * C17560 +
            (C169 * C26968 + C168 * C9054) * C17559) *
               C26963 -
           (((C144 * C7217 + C26970 * C7259) * C26968 +
             (C144 * C7215 + C26970 * C7257) * C9054) *
                C17560 +
            (C18437 + C18436) * C17559) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eexz[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C26963 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26964 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C9054 +
            (C17630 * C1225 + C17559 * C1375 + C17631 * C7218 +
             C17560 * C7298) *
                C26968) *
               C26970 * C8165) *
              C26805 * C26925 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C9054 +
            (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
             C17560 * C1376) *
                C26968) *
               C26970 * C26964 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C26963 -
           ((C17631 * C7217 + C17560 * C7297 + C17630 * C1226 +
             C17559 * C1376) *
                C26968 +
            (C17631 * C7215 + C17560 * C7295 + C17630 * C1220 +
             C17559 * C1370) *
                C9054) *
               C26970 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C26963 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26964 +
           ((C18573 + C18572) * C17559 + (C24225 + C24226) * C17560) * C8165) *
              C26805 * C26925 +
          (((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26964 -
           ((C18575 + C18574) * C17560 +
            ((C9054 * C146 + C26968 * C271) * C26970 +
             (C9054 * C88 + C26968 * C93) * C144) *
                C17559) *
               C26963 -
           (((C9054 * C7257 + C26968 * C7333) * C26970 +
             (C9054 * C7215 + C26968 * C7217) * C144) *
                C17560 +
            (C18577 + C18576) * C17559) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C26963 -
           (C18641 * C17560 + C18640 * C17559) * C26964 +
           (C18641 * C17559 + C24268 * C17560) * C8165) *
              C26805 * C26925 +
          ((C18632 * C17559 + C18633 * C17560) * C26964 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C26963 -
           ((C309 * C7215 + C7372 + C7372 + C26970 * C7369) * C26968 * C17560 +
            C18633 * C17559) *
               C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C26963 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26964 +
           ((C17630 * C1219 + C17559 * C1369 + C17631 * C7216 +
             C17560 * C7296) *
                C144 +
            (C17630 * C1295 + C17559 * C1571 + C17631 * C7258 +
             C17560 * C7408) *
                C26970) *
               C26968 * C8165) *
              C26805 * C26925 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C144 +
            (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
             C17560 * C1572) *
                C26970) *
               C26968 * C26964 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C26963 -
           ((C17631 * C7257 + C17560 * C7407 + C17630 * C1296 +
             C17559 * C1572) *
                C26970 +
            (C17631 * C7215 + C17560 * C7295 + C17630 * C1220 +
             C17559 * C1370) *
                C144) *
               C26968 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezx[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C26963 -
                     (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                      C18562 * C17630) *
                         C26970 * C26964 +
                     (C18565 * C17630 + C18751 * C17559 + C24223 * C17631 +
                      C24341 * C17560) *
                         C26970 * C8165) *
                        C26805 * C26925 +
                    ((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
                      C18753 * C17560) *
                         C26970 * C26964 -
                     (C18752 * C17560 + C18566 * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C26963 -
                     ((C9054 * C7295 + C26968 * C7443) * C17560 +
                      (C9054 * C7215 + C26968 * C7217) * C17631 +
                      C18753 * C17559 + C18568 * C17630) *
                         C26970 * C8165) *
                        C26805 * C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[43] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C26963 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C26964 +
           (C18441 * C17630 + C18809 * C17559 + C24144 * C17631 +
            C24379 * C17560) *
               C26968 * C8165) *
              C26805 * C26925 +
          ((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 + C1705 * C17560) *
               C26968 * C26964 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C26963 -
           ((C144 * C7295 + C26970 * C7479) * C17560 +
            (C144 * C7215 + C26970 * C7257) * C17631 + C1705 * C17559 +
            C1316 * C17630) *
               C26968 * C8165) *
              C26805 * C26792)) /
        (p * q * std::sqrt(p + q));
    d2eezz[43] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C26963 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26964 +
                     (C17836 * C1219 + C18862 + C18862 + C17559 * C1759 +
                      C17837 * C7216 + C18863 + C18863 + C17560 * C7516) *
                         C26970 * C26968 * C8165) *
                        C26805 * C26925 +
                    ((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                      C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                         C26970 * C26968 * C26964 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C26963 -
                     (C17837 * C7215 + C18866 + C18866 + C17560 * C7515 +
                      C17836 * C1220 + C18867 + C18867 + C17559 * C1760) *
                         C26970 * C26968 * C8165) *
                        C26805 * C26792)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C6325 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
              C26805 * C3516 +
          ((C18374 * C17559 + C18375 * C17560) * C26970 * C26885 -
           (C18374 * C17560 +
            (C9053 * C88 + C9059 + C9059 + C26968 * C98) * C17559) *
               C26970 * C6325) *
              C26805 * C3517 +
          (((C9053 * C89 + C9060 + C9060 + C26968 * C99) * C17559 +
            C19375 * C17560) *
               C26970 * C6325 -
           ((C9053 * C1222 + C19372 + C19372 + C26968 * C1234) * C17560 +
            C19375 * C17559) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9053 * C87 + C9056 + C9056 + C26968 * C97) * C17559 +
            C18372 * C17560) *
               C26970 * C6325 -
           (C18373 * C17560 + C18372 * C17559) * C26970 * C26885) *
              C595 +
          ((C11382 * C17559 + C12822 * C17560) * C26970 * C26885 -
           (C11382 * C17560 + C9418 * C17559) * C26970 * C6325) *
              C596 +
          ((C9419 * C17559 + C14366 * C17560) * C26970 * C6325 -
           ((C9053 * C12813 + C12819 + C12819 + C26968 * C12815) * C17560 +
            C14366 * C17559) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C6325 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26885) *
              C26805 * C3516 +
          (((C18434 + C18435) * C17559 + (C18436 + C18437) * C17560) * C26885 -
           ((C18435 + C18434) * C17560 +
            (C169 * C26968 + C168 * C9054) * C17559) *
               C6325) *
              C26805 * C3517 +
          (((C171 * C9054 + C170 * C26968) * C17559 +
            (C19426 + C19427) * C17560) *
               C6325 -
           (((C144 * C1228 + C26970 * C1304) * C26968 +
             (C144 * C1222 + C26970 * C1298) * C9054) *
                C17560 +
            (C19427 + C19426) * C17559) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C144 * C87 + C26970 * C145) * C9054 +
             (C144 * C92 + C26970 * C150) * C26968) *
                C17559 +
            (C18442 + C18443) * C17560) *
               C6325 -
           ((C18444 + C18445) * C17560 + (C18443 + C18442) * C17559) * C26885) *
              C595 +
          (((C19932 + C19933) * C17559 + (C21279 + C21280) * C17560) * C26885 -
           ((C19933 + C19932) * C17560 +
            ((C144 * C607 + C26970 * C683) * C26968 +
             (C144 * C601 + C26970 * C677) * C9054) *
                C17559) *
               C6325) *
              C596 +
          ((((C144 * C602 + C26970 * C678) * C9054 +
             (C144 * C608 + C26970 * C684) * C26968) *
                C17559 +
            (C22795 + C22796) * C17560) *
               C6325 -
           (((C144 * C12814 + C26970 * C12874) * C26968 +
             (C144 * C12813 + C26970 * C12873) * C9054) *
                C17560 +
            (C22796 + C22795) * C17559) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eexz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26885) *
              C26805 * C3516 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C9054 +
            (C17630 * C1223 + C17559 * C1373 + C17631 * C1226 +
             C17560 * C1376) *
                C26968) *
               C26970 * C26885 -
           ((C17631 * C1223 + C17560 * C1373 + C17630 * C93 + C17559 * C214) *
                C26968 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C9054) *
               C26970 * C6325) *
              C26805 * C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C9054 +
            (C17630 * C94 + C17559 * C215 + C17631 * C1227 + C17560 * C1377) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C1228 + C17560 * C1378 + C17630 * C1227 +
             C17559 * C1377) *
                C26968 +
            (C17631 * C1222 + C17560 * C1372 + C17630 * C1221 +
             C17559 * C1371) *
                C9054) *
               C26970 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C9054 +
            (C17630 * C92 + C17559 * C213 + C17631 * C1224 + C17560 * C1374) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C1225 + C17560 * C1375 + C17630 * C1224 +
             C17559 * C1374) *
                C26968 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C9054) *
               C26970 * C26885) *
              C595 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C9054 +
            (C17630 * C2857 + C17559 * C3014 + C17631 * C4315 +
             C17560 * C4427) *
                C26968) *
               C26970 * C26885 -
           ((C17631 * C2857 + C17560 * C3014 + C17630 * C607 + C17559 * C757) *
                C26968 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C9054) *
               C26970 * C6325) *
              C596 +
          (((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C9054 +
            (C17630 * C608 + C17559 * C758 + C17631 * C5846 + C17560 * C5958) *
                C26968) *
               C26970 * C6325 -
           ((C17631 * C12814 + C17560 * C12926 + C17630 * C5846 +
             C17559 * C5958) *
                C26968 +
            (C17631 * C12813 + C17560 * C12925 + C17630 * C5844 +
             C17559 * C5956) *
                C9054) *
               C26970 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C6325 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26885) *
              C26805 * C3516 +
          (((C18574 + C18575) * C17559 + (C18576 + C18577) * C17560) * C26885 -
           ((C18575 + C18574) * C17560 +
            ((C9054 * C146 + C26968 * C271) * C26970 +
             (C9054 * C88 + C26968 * C93) * C144) *
                C17559) *
               C6325) *
              C26805 * C3517 +
          ((((C9054 * C89 + C26968 * C94) * C144 +
             (C9054 * C147 + C26968 * C272) * C26970) *
                C17559 +
            (C19534 + C19535) * C17560) *
               C6325 -
           (((C9054 * C1298 + C26968 * C1446) * C26970 +
             (C9054 * C1222 + C26968 * C1228) * C144) *
                C17560 +
            (C19535 + C19534) * C17559) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C9054 * C87 + C26968 * C92) * C144 +
             (C9054 * C145 + C26968 * C270) * C26970) *
                C17559 +
            (C18570 + C18571) * C17560) *
               C6325 -
           ((C18572 + C18573) * C17560 + (C18571 + C18570) * C17559) * C26885) *
              C595 +
          (((C20066 + C20067) * C17559 + (C21381 + C21382) * C17560) * C26885 -
           ((C20067 + C20066) * C17560 +
            (C9613 * C26970 + C9612 * C144) * C17559) *
               C6325) *
              C596 +
          (((C9615 * C144 + C9614 * C26970) * C17559 +
            (C22897 + C22898) * C17560) *
               C6325 -
           (((C9054 * C12873 + C26968 * C12985) * C26970 +
             (C9054 * C12813 + C26968 * C12814) * C144) *
                C17560 +
            (C22898 + C22897) * C17559) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C6325 -
           (C18641 * C17560 + C18640 * C17559) * C26885) *
              C26805 * C3516 +
          ((C18632 * C17559 + C18633 * C17560) * C26885 -
           (C18632 * C17560 + C333 * C26968 * C17559) * C6325) *
              C26805 * C3517 +
          ((C334 * C26968 * C17559 + C19586 * C17560) * C6325 -
           ((C309 * C1222 + C1513 + C1513 + C26970 * C1502) * C26968 * C17560 +
            C19586 * C17559) *
               C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C309 * C87 + C316 + C316 + C26970 * C310) * C26968 * C17559 +
            C18640 * C17560) *
               C6325 -
           (C18641 * C17560 + C18640 * C17559) * C26885) *
              C595 +
          ((C20142 * C17559 + C21439 * C17560) * C26885 -
           (C20142 * C17560 +
            (C309 * C601 + C890 + C890 + C26970 * C881) * C26968 * C17559) *
               C6325) *
              C596 +
          (((C309 * C602 + C891 + C891 + C26970 * C882) * C26968 * C17559 +
            C22955 * C17560) *
               C6325 -
           ((C309 * C12813 + C22951 + C22951 + C26970 * C13042) * C26968 *
                C17560 +
            C22955 * C17559) *
               C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eeyz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26885) *
              C26805 * C3516 +
          (((C17630 * C1217 + C17559 * C1367 + C17631 * C1220 +
             C17560 * C1370) *
                C144 +
            (C17630 * C1293 + C17559 * C1569 + C17631 * C1296 +
             C17560 * C1572) *
                C26970) *
               C26968 * C26885 -
           ((C17631 * C1293 + C17560 * C1569 + C17630 * C146 + C17559 * C370) *
                C26970 +
            (C17631 * C1217 + C17560 * C1367 + C17630 * C88 + C17559 * C209) *
                C144) *
               C26968 * C6325) *
              C26805 * C3517 +
          (((C17630 * C89 + C17559 * C210 + C17631 * C1221 + C17560 * C1371) *
                C144 +
            (C17630 * C147 + C17559 * C371 + C17631 * C1297 + C17560 * C1573) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C1298 + C17560 * C1574 + C17630 * C1297 +
             C17559 * C1573) *
                C26970 +
            (C17631 * C1222 + C17560 * C1372 + C17630 * C1221 +
             C17559 * C1371) *
                C144) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C17630 * C87 + C17559 * C208 + C17631 * C1218 + C17560 * C1368) *
                C144 +
            (C17630 * C145 + C17559 * C369 + C17631 * C1294 + C17560 * C1570) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C1295 + C17560 * C1571 + C17630 * C1294 +
             C17559 * C1570) *
                C26970 +
            (C17631 * C1219 + C17560 * C1369 + C17630 * C1218 +
             C17559 * C1368) *
                C144) *
               C26968 * C26885) *
              C595 +
          (((C17630 * C2854 + C17559 * C3011 + C17631 * C4313 +
             C17560 * C4425) *
                C144 +
            (C17630 * C2933 + C17559 * C3235 + C17631 * C4371 +
             C17560 * C4585) *
                C26970) *
               C26968 * C26885 -
           ((C17631 * C2933 + C17560 * C3235 + C17630 * C677 + C17559 * C953) *
                C26970 +
            (C17631 * C2854 + C17560 * C3011 + C17630 * C601 + C17559 * C751) *
                C144) *
               C26968 * C6325) *
              C596 +
          (((C17630 * C602 + C17559 * C752 + C17631 * C5844 + C17560 * C5956) *
                C144 +
            (C17630 * C678 + C17559 * C954 + C17631 * C5902 + C17560 * C6116) *
                C26970) *
               C26968 * C6325 -
           ((C17631 * C12873 + C17560 * C13095 + C17630 * C5902 +
             C17559 * C6116) *
                C26970 +
            (C17631 * C12813 + C17560 * C12925 + C17630 * C5844 +
             C17559 * C5956) *
                C144) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezx[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C6325 -
                     (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                      C18562 * C17630) *
                         C26970 * C26885) *
                        C26805 * C3516 +
                    ((C18566 * C17630 + C18752 * C17559 + C18568 * C17631 +
                      C18753 * C17560) *
                         C26970 * C26885 -
                     (C18752 * C17560 + C18566 * C17631 +
                      (C9054 * C209 + C26968 * C424) * C17559 +
                      (C9054 * C88 + C26968 * C93) * C17630) *
                         C26970 * C6325) *
                        C26805 * C3517 +
                    (((C9054 * C89 + C26968 * C94) * C17630 +
                      (C9054 * C210 + C26968 * C425) * C17559 +
                      C19532 * C17631 + C19689 * C17560) *
                         C26970 * C6325 -
                     ((C9054 * C1372 + C26968 * C1640) * C17560 +
                      (C9054 * C1222 + C26968 * C1228) * C17631 +
                      C19689 * C17559 + C19532 * C17630) *
                         C26970 * C26885) *
                        C26805 * C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9054 * C87 + C26968 * C92) * C17630 +
                      (C9054 * C208 + C26968 * C423) * C17559 +
                      C18562 * C17631 + C18750 * C17560) *
                         C26970 * C6325 -
                     (C18751 * C17560 + C18565 * C17631 + C18750 * C17559 +
                      C18562 * C17630) *
                         C26970 * C26885) *
                        C595 +
                    ((C11603 * C17630 + C11817 * C17559 + C12991 * C17631 +
                      C13154 * C17560) *
                         C26970 * C26885 -
                     (C11817 * C17560 + C11603 * C17631 + C9796 * C17559 +
                      C9612 * C17630) *
                         C26970 * C6325) *
                        C596 +
                    ((C9615 * C17630 + C9797 * C17559 + C14535 * C17631 +
                      C14698 * C17560) *
                         C26970 * C6325 -
                     ((C9054 * C12925 + C26968 * C13149) * C17560 +
                      (C9054 * C12813 + C26968 * C12814) * C17631 +
                      C14698 * C17559 + C14535 * C17630) *
                         C26970 * C26885) *
                        C597) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C6325 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C26885) *
              C26805 * C3516 +
          ((C1315 * C17630 + C1704 * C17559 + C1316 * C17631 + C1705 * C17560) *
               C26968 * C26885 -
           (C1704 * C17560 + C1315 * C17631 + C477 * C17559 + C168 * C17630) *
               C26968 * C6325) *
              C26805 * C3517 +
          ((C171 * C17630 + C478 * C17559 + C2400 * C17631 + C2729 * C17560) *
               C26968 * C6325 -
           ((C144 * C1372 + C26970 * C1696) * C17560 +
            (C144 * C1222 + C26970 * C1298) * C17631 + C2729 * C17559 +
            C2400 * C17630) *
               C26968 * C26885) *
              C26805 * C3518)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C144 * C87 + C26970 * C145) * C17630 +
            (C144 * C208 + C26970 * C462) * C17559 + C18438 * C17631 +
            C18808 * C17560) *
               C26968 * C6325 -
           (C18809 * C17560 + C18441 * C17631 + C18808 * C17559 +
            C18438 * C17630) *
               C26968 * C26885) *
              C595 +
          ((C19930 * C17630 + C20343 * C17559 + C21277 * C17631 +
            C21592 * C17560) *
               C26968 * C26885 -
           (C20343 * C17560 + C19930 * C17631 +
            (C144 * C751 + C26970 * C1075) * C17559 +
            (C144 * C601 + C26970 * C677) * C17630) *
               C26968 * C6325) *
              C596 +
          (((C144 * C602 + C26970 * C678) * C17630 +
            (C144 * C752 + C26970 * C1076) * C17559 + C22793 * C17631 +
            C23108 * C17560) *
               C26968 * C6325 -
           ((C144 * C12925 + C26970 * C13205) * C17560 +
            (C144 * C12813 + C26970 * C12873) * C17631 + C23108 * C17559 +
            C22793 * C17630) *
               C26968 * C26885) *
              C597) *
         C26786) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26885) *
                        C26805 * C3516 +
                    ((C17836 * C1217 + C18864 + C18864 + C17559 * C1757 +
                      C17837 * C1220 + C18865 + C18865 + C17560 * C1760) *
                         C26970 * C26968 * C26885 -
                     (C17837 * C1217 + C17841 + C17841 + C17560 * C1757 +
                      C17836 * C88 + C17842 + C17842 + C17559 * C518) *
                         C26970 * C26968 * C6325) *
                        C26805 * C3517 +
                    ((C17836 * C89 + C17843 + C17843 + C17559 * C519 +
                      C17837 * C1221 + C17844 + C17844 + C17560 * C1761) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C1222 + C19790 + C19790 + C17560 * C1762 +
                      C17836 * C1221 + C19791 + C19791 + C17559 * C1761) *
                         C26970 * C26968 * C26885) *
                        C26805 * C3518)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C17836 * C87 + C17839 + C17839 + C17559 * C517 +
                      C17837 * C1218 + C17840 + C17840 + C17560 * C1758) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C1219 + C18860 + C18860 + C17560 * C1759 +
                      C17836 * C1218 + C18861 + C18861 + C17559 * C1758) *
                         C26970 * C26968 * C26885) *
                        C595 +
                    ((C17836 * C2854 + C20410 + C20410 + C17559 * C3452 +
                      C17837 * C4313 + C20411 + C20411 + C17560 * C4741) *
                         C26970 * C26968 * C26885 -
                     (C17837 * C2854 + C18297 + C18297 + C17560 * C3452 +
                      C17836 * C601 + C18298 + C18298 + C17559 * C1141) *
                         C26970 * C26968 * C6325) *
                        C596 +
                    ((C17836 * C602 + C18299 + C18299 + C17559 * C1142 +
                      C17837 * C5844 + C18300 + C18300 + C17560 * C6272) *
                         C26970 * C26968 * C6325 -
                     (C17837 * C12813 + C23159 + C23159 + C17560 * C13256 +
                      C17836 * C5844 + C23160 + C23160 + C17559 * C6272) *
                         C26970 * C26968 * C26885) *
                        C597) *
                   C26786) /
                      (p * q * std::sqrt(p + q));
}
