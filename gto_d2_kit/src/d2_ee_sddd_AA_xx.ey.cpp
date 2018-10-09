/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sddd_AA_xx.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_0222_11_11(const double ae,
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
                                     double* const d2ee)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C29970 = ae * be;
    const double C29969 = xA - xB;
    const double C29968 = ae + be;
    const double C29967 = 0 * be;
    const double C30010 = p + q;
    const double C30009 = p * q;
    const double C30015 = xP - xQ;
    const double C30014 = bs[2];
    const double C30022 = std::pow(ae, 2);
    const double C30020 = bs[3];
    const double C30033 = bs[4];
    const double C30054 = bs[5];
    const double C30087 = bs[6];
    const double C30133 = bs[7];
    const double C30188 = yP - yQ;
    const double C30247 = zP - zQ;
    const double C119 = bs[0];
    const double C30713 = ce + de;
    const double C30712 = ce * de;
    const double C30711 = xC - xD;
    const double C30745 = yC - yD;
    const double C30763 = zC - zD;
    const double C30931 = yA - yB;
    const double C30943 = zA - zB;
    const double C29973 = 2 * C29970;
    const double C29972 = C29970 * C29969;
    const double C30692 = std::pow(C29969, 2);
    const double C30976 = C29969 * ae;
    const double C29971 = std::pow(C29968, 2);
    const double C30977 = 2 * C29968;
    const double C30011 = 2 * C30009;
    const double C30023 = C30015 * ae;
    const double C30019 = std::pow(C30015, 2);
    const double C30195 = std::pow(C30188, 2);
    const double C30254 = std::pow(C30247, 2);
    const double C30717 = 2 * C30713;
    const double C30716 = std::pow(C30713, 2);
    const double C30718 = C30711 * de;
    const double C30715 = C30711 * ce;
    const double C30714 = std::pow(C30711, 2);
    const double C30746 = std::pow(C30745, 2);
    const double C30805 = C30745 * de;
    const double C30803 = C30745 * ce;
    const double C30764 = std::pow(C30763, 2);
    const double C30847 = C30763 * de;
    const double C30845 = C30763 * ce;
    const double C30932 = std::pow(C30931, 2);
    const double C31008 = C30931 * ae;
    const double C30944 = std::pow(C30943, 2);
    const double C31009 = C30943 * ae;
    const double C30693 = C30692 * C29970;
    const double C29975 = 2 * C29971;
    const double C31012 = std::pow(C30977, -2);
    const double C31010 = std::pow(C30977, -1);
    const double C30013 = C30011 / C30010;
    const double C133 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C30011 / C30010, 2) -
          (bs[1] * C30011) / C30010) *
         std::pow(ae, 2)) /
        C29971;
    const double C120 = -(C30015 * bs[1] * C30011) / C30010;
    const double C273 = -(C30188 * bs[1] * C30011) / C30010;
    const double C434 = -(C30247 * bs[1] * C30011) / C30010;
    const double C30025 = C30020 * C30023;
    const double C30036 = C30033 * C30023;
    const double C30059 = C30054 * C30023;
    const double C30095 = C30087 * C30023;
    const double C30144 = C30133 * C30023;
    const double C126 = (-(bs[1] * C30023 * C30011) / C30010) / C29968;
    const double C30035 = C30019 * C30033;
    const double C30058 = C30019 * C30054;
    const double C30094 = C30019 * C30087;
    const double C30143 = C30019 * C30133;
    const double C30730 = std::pow(C30717, -1);
    const double C30985 = std::pow(C30717, -2);
    const double C30731 = 2 * C30716;
    const double C30989 = C30716 * C30717;
    const double C30988 = 4 * C30716;
    const double C30978 = std::pow(C30715, 2);
    const double C30719 = C30714 * C30712;
    const double C30747 = C30746 * C30712;
    const double C30990 = std::pow(C30803, 2);
    const double C30765 = C30764 * C30712;
    const double C30992 = std::pow(C30845, 2);
    const double C30933 = C30932 * C29970;
    const double C30945 = C30944 * C29970;
    const double C30694 = C30693 / C29968;
    const double C30016 = std::pow(C30013, 2);
    const double C30021 = -C30013;
    const double C30034 = std::pow(C30013, 4);
    const double C30088 = std::pow(C30013, 6);
    const double C31022 = 4 * C30989;
    const double C31021 = C30713 * C30988;
    const double C30720 = C30719 / C30713;
    const double C30748 = C30747 / C30713;
    const double C30766 = C30765 / C30713;
    const double C30934 = C30933 / C29968;
    const double C30946 = C30945 / C29968;
    const double C30695 = -C30694;
    const double C30018 = C30014 * C30016;
    const double C134 = (2 * ae * C30016 * C30014 * C30015 * ae +
                         C30015 *
                             (C30014 * C30016 + std::pow(C30015, 2) * bs[3] *
                                                    std::pow(-C30013, 3)) *
                             std::pow(ae, 2)) /
                        C29971;
    const double C127 = (C30015 * C30016 * C30014 * C30023) / C29968 -
                        (ae * bs[1] * C30011) / (C30010 * C29968);
    const double C283 = (C30188 * C30016 * C30014 * C30023) / C29968;
    const double C444 = (C30247 * C30016 * C30014 * C30023) / C29968;
    const double C30024 = std::pow(C30021, 3);
    const double C30055 = std::pow(C30021, 5);
    const double C30134 = std::pow(C30021, 7);
    const double C30040 = C30034 * C30036;
    const double C30039 = C30035 * C30034;
    const double C30053 = C30033 * C30034;
    const double C30100 = C30088 * C30095;
    const double C30099 = C30094 * C30088;
    const double C30132 = C30087 * C30088;
    const double C30721 = -C30720;
    const double C30749 = -C30748;
    const double C30767 = -C30766;
    const double C30935 = -C30934;
    const double C30947 = -C30946;
    const double C30696 = std::exp(C30695);
    const double C30026 = C30018 * ae;
    const double C121 = C30018 * C30019 - (bs[1] * C30011) / C30010;
    const double C272 = C30188 * C30015 * C30018;
    const double C274 = C30018 * C30195 - (bs[1] * C30011) / C30010;
    const double C433 = C30247 * C30015 * C30018;
    const double C435 = C30018 * C30254 - (bs[1] * C30011) / C30010;
    const double C842 = C30247 * C30188 * C30018;
    const double C30027 = C30024 * C30025;
    const double C30032 = C30020 * C30024;
    const double C293 =
        (C30188 * (C30018 + C30019 * C30020 * C30024) * C30022) / C29971;
    const double C454 =
        (C30247 * (C30018 + C30019 * C30020 * C30024) * C30022) / C29971;
    const double C30064 = C30055 * C30059;
    const double C30063 = C30058 * C30055;
    const double C30086 = C30054 * C30055;
    const double C30150 = C30134 * C30144;
    const double C30149 = C30143 * C30134;
    const double C30043 = C30015 * C30040;
    const double C30052 = ae * C30040;
    const double C30545 = C30188 * C30040;
    const double C30062 = C30053 * C30019;
    const double C30061 = C30015 * C30053;
    const double C30060 = C30053 * ae;
    const double C30648 = C30053 * C30195;
    const double C30651 = C30188 * C30053;
    const double C30672 = C30053 * C30254;
    const double C30675 = C30247 * C30053;
    const double C30104 = C30015 * C30100;
    const double C30131 = ae * C30100;
    const double C30229 = C30100 * C30195;
    const double C30288 = C30100 * C30254;
    const double C30307 = C30188 * C30100;
    const double C30326 = C30247 * C30100;
    const double C30147 = C30132 * C30019;
    const double C30146 = C30015 * C30132;
    const double C30145 = C30132 * ae;
    const double C30722 = std::exp(C30721);
    const double C30750 = std::exp(C30749);
    const double C30768 = std::exp(C30767);
    const double C30936 = std::exp(C30935);
    const double C30948 = std::exp(C30947);
    const double C29974 = C29972 * C30696;
    const double C31011 = C30696 * C30976;
    const double C101 =
        (C30696 * std::pow(C30976, 2)) / C29971 + C30696 / C30977;
    const double C103 = C31012 * C30696;
    const double C13236 = C31010 * C30696;
    const double C30028 = C30015 * C30027;
    const double C284 = (C30016 * C30014 * C30023 + C30027 * C30195) / C29968;
    const double C445 = (C30016 * C30014 * C30023 + C30027 * C30254) / C29968;
    const double C847 = (C30247 * C30188 * C30027) / C29968;
    const double C1058 =
        (2 * C30188 * C30027 + C30188 * (C30027 + C30040 * C30195)) / C29968;
    const double C1195 = (C30188 * C30027 + C30188 * C30040 * C30254) / C29968;
    const double C1198 = (C30247 * (C30027 + C30040 * C30195)) / C29968;
    const double C1890 =
        (2 * C30247 * C30027 + C30247 * (C30027 + C30040 * C30254)) / C29968;
    const double C30038 = C30015 * C30032;
    const double C30037 = C30032 * ae;
    const double C30042 = C30032 + C30039;
    const double C30642 = C30188 * C30032;
    const double C122 =
        2 * C30015 * C30018 + C30015 * (C30018 + C30032 * C30019);
    const double C271 = C30188 * (C30018 + C30032 * C30019);
    const double C432 = C30247 * (C30018 + C30032 * C30019);
    const double C1052 =
        2 * C30188 * C30018 + C30188 * (C30018 + C30032 * C30195);
    const double C1053 =
        3 * (C30018 + C30032 * C30195) +
        C30188 * (2 * C30188 * C30032 + C30188 * (C30032 + C30053 * C30195));
    const double C1186 = C30188 * C30018 + C30188 * C30032 * C30254;
    const double C1189 = C30247 * (C30018 + C30032 * C30195);
    const double C1190 =
        C30018 + C30032 * C30195 + (C30032 + C30053 * C30195) * C30254;
    const double C1580 =
        C30247 * (2 * C30188 * C30032 + C30188 * (C30032 + C30053 * C30195));
    const double C1884 =
        2 * C30247 * C30018 + C30247 * (C30018 + C30032 * C30254);
    const double C1885 =
        3 * (C30018 + C30032 * C30254) +
        C30247 * (2 * C30247 * C30032 + C30247 * (C30032 + C30053 * C30254));
    const double C4730 = C30696 * C293;
    const double C9222 = C30696 * C454;
    const double C30068 = C30015 * C30064;
    const double C30085 = ae * C30064;
    const double C30216 = C30188 * C30064;
    const double C30275 = C30247 * C30064;
    const double C30549 = C30064 * C30195;
    const double C30568 = C30064 * C30254;
    const double C1059 =
        (3 * (C30027 + C30040 * C30195) +
         C30188 * (2 * C30188 * C30040 + C30188 * (C30040 + C30064 * C30195))) /
        C29968;
    const double C1199 =
        (C30027 + C30040 * C30195 + (C30040 + C30064 * C30195) * C30254) /
        C29968;
    const double C1583 =
        (C30247 * (2 * C30188 * C30040 + C30188 * (C30040 + C30064 * C30195))) /
        C29968;
    const double C1891 =
        (3 * (C30027 + C30040 * C30254) +
         C30247 * (2 * C30247 * C30040 + C30247 * (C30040 + C30064 * C30254))) /
        C29968;
    const double C30067 = C30053 + C30063;
    const double C30098 = C30086 * C30019;
    const double C30097 = C30015 * C30086;
    const double C30096 = C30086 * ae;
    const double C30103 = C30086 + C30099;
    const double C30652 = C30086 * C30195;
    const double C30676 = C30086 * C30254;
    const double C30687 = C30188 * C30086;
    const double C30154 = C30015 * C30150;
    const double C30153 = C30132 + C30149;
    const double C30057 = 2 * C30052;
    const double C30066 = C30032 + C30062;
    const double C30065 = C30061 * ae;
    const double C30091 = 2 * C30061;
    const double C30644 = C30188 * C30061;
    const double C30649 = C30032 + C30648;
    const double C30653 = 2 * C30651;
    const double C30673 = C30032 + C30672;
    const double C30677 = 2 * C30675;
    const double C30142 = 2 * C30131;
    const double C30234 = C30064 + C30229;
    const double C30293 = C30064 + C30288;
    const double C30314 = ae * C30307;
    const double C30355 = C30247 * C30307;
    const double C30577 = C30307 * C30254;
    const double C30333 = ae * C30326;
    const double C30152 = C30086 + C30147;
    const double C30151 = C30146 * ae;
    const double C30724 = C30722 * C30715;
    const double C30723 = C30722 / C30717;
    const double C30733 = C30730 * C30722;
    const double C30981 = C30722 * C30718;
    const double C31019 = C30985 * C30722;
    const double C31013 = C30722 * C30978;
    const double C30804 = C30750 / C30717;
    const double C30806 = C30750 * C30803;
    const double C30813 = C30730 * C30750;
    const double C30996 = C30750 * C30805;
    const double C31025 = C30985 * C30750;
    const double C31023 = C30750 * C30990;
    const double C30846 = C30768 / C30717;
    const double C30848 = C30768 * C30845;
    const double C30855 = C30730 * C30768;
    const double C31002 = C30768 * C30847;
    const double C31028 = C30985 * C30768;
    const double C31026 = C30768 * C30992;
    const double C31042 = C30936 * C31008;
    const double C4598 =
        (C30936 * std::pow(C31008, 2)) / C29971 + C30936 / C30977;
    const double C4600 = C31012 * C30936;
    const double C13238 = C31010 * C30936;
    const double C31043 = C30948 * C31009;
    const double C8994 =
        (C30948 * std::pow(C31009, 2)) / C29971 + C30948 / C30977;
    const double C8996 = C31012 * C30948;
    const double C18992 = C31010 * C30948;
    const double C29976 = 2 * C29974;
    const double C118 = ((0 * ae) / C29968 - C29974 / C29971) / (2 * C29968) +
                        (0 * ae) / C29968;
    const double C13242 = (0 * ae) / C29968 - C29974 / C29971;
    const double C102 = (2 * C31010 * C31011) / C29968;
    const double C13235 = C31011 / C29968;
    const double C30029 = C30028 + C30026;
    const double C30041 = C30038 * ae;
    const double C275 = C30015 * C30018 + C30038 * C30195;
    const double C436 = C30015 * C30018 + C30038 * C30254;
    const double C843 = C30247 * C30188 * C30038;
    const double C1051 =
        2 * C30188 * C30038 + C30188 * (C30038 + C30061 * C30195);
    const double C1185 = C30188 * C30038 + C30188 * C30061 * C30254;
    const double C1188 = C30247 * (C30038 + C30061 * C30195);
    const double C1883 =
        2 * C30247 * C30038 + C30247 * (C30038 + C30061 * C30254);
    const double C30045 = C30043 + C30037;
    const double C30044 = C30042 * C30022;
    const double C2264 =
        2 * C30247 * C30642 + C30247 * (C30642 + C30188 * C30053 * C30254);
    const double C6306 =
        3 * (C30642 + C30651 * C30254) +
        C30247 * (2 * C30247 * C30651 +
                  C30247 * (C30651 + C30188 * C30086 * C30254));
    const double C30071 = C30068 + C30060;
    const double C30093 = 2 * C30085;
    const double C30221 = ae * C30216;
    const double C30552 = 2 * C30216;
    const double C2267 =
        (2 * C30247 * C30545 + C30247 * (C30545 + C30216 * C30254)) / C29968;
    const double C6309 =
        (3 * (C30545 + C30216 * C30254) +
         C30247 * (2 * C30247 * C30216 + C30247 * (C30216 + C30307 * C30254))) /
        C29968;
    const double C30280 = ae * C30275;
    const double C30571 = 2 * C30275;
    const double C30550 = C30040 + C30549;
    const double C30569 = C30040 + C30568;
    const double C30070 = C30067 * C30022;
    const double C30102 = C30053 + C30098;
    const double C30101 = C30097 * ae;
    const double C30138 = 2 * C30097;
    const double C30661 = C30097 * C30195;
    const double C30682 = C30188 * C30097;
    const double C30684 = C30097 * C30254;
    const double C1054 =
        3 * (C30038 + C30061 * C30195) +
        C30188 * (2 * C30188 * C30061 + C30188 * (C30061 + C30097 * C30195));
    const double C1191 =
        C30038 + C30061 * C30195 + (C30061 + C30097 * C30195) * C30254;
    const double C1581 =
        C30247 * (2 * C30188 * C30061 + C30188 * (C30061 + C30097 * C30195));
    const double C1886 =
        3 * (C30038 + C30061 * C30254) +
        C30247 * (2 * C30247 * C30061 + C30247 * (C30061 + C30097 * C30254));
    const double C30108 = C30104 + C30096;
    const double C30107 = C30103 * C30022;
    const double C30654 = C30053 + C30652;
    const double C30678 = C30053 + C30676;
    const double C30688 = C30687 * C30254;
    const double C30158 = C30154 + C30145;
    const double C30157 = C30153 * C30022;
    const double C30069 = C30066 * ae;
    const double C123 = 3 * (C30018 + C30032 * C30019) +
                        C30015 * (2 * C30038 + C30015 * C30066);
    const double C276 = C30018 + C30032 * C30019 + C30066 * C30195;
    const double C277 = C30188 * (2 * C30038 + C30015 * C30066);
    const double C437 = C30018 + C30032 * C30019 + C30066 * C30254;
    const double C438 = C30247 * (2 * C30038 + C30015 * C30066);
    const double C844 = C30247 * C30188 * C30066;
    const double C2265 =
        2 * C30247 * C30644 + C30247 * (C30644 + C30188 * C30097 * C30254);
    const double C5485 =
        4 * (2 * C30642 + C30188 * C30649) +
        C30188 * (3 * C30649 + C30188 * (2 * C30188 * C30053 +
                                         C30188 * (C30053 + C30086 * C30195)));
    const double C10534 =
        4 * (2 * C30247 * C30032 + C30247 * C30673) +
        C30247 * (3 * C30673 + C30247 * (2 * C30247 * C30053 +
                                         C30247 * (C30053 + C30086 * C30254)));
    const double C30239 = ae * C30234;
    const double C30553 = C30188 * C30234;
    const double C30298 = ae * C30293;
    const double C30572 = C30247 * C30293;
    const double C30320 = 2 * C30314;
    const double C30360 = ae * C30355;
    const double C30578 = C30216 + C30577;
    const double C30339 = 2 * C30333;
    const double C30156 = C30015 * C30152;
    const double C30155 = C30152 * ae;
    const double C30725 = C30724 * C30718;
    const double C30732 = C30724 / C30731;
    const double C30982 = C30730 * C30724;
    const double C30980 = C30724 / C30713;
    const double C268 = (C30722 * std::pow(C30718, 2)) / C30716 + C30723;
    const double C30734 = C30733 * C30718;
    const double C30986 = C30715 * C30733;
    const double C30984 = 2 * C30733;
    const double C31029 = C30733 / C30988;
    const double C112 = C30733 / C31022;
    const double C2745 = C30733 / C30717;
    const double C31015 = C30981 / C30713;
    const double C269 = (-2 * C30730 * C30981) / C30713;
    const double C31044 = C31013 / C30716;
    const double C976 = (C30750 * std::pow(C30805, 2)) / C30716 + C30804;
    const double C30807 = C30806 * C30805;
    const double C30812 = C30806 / C30731;
    const double C30994 = C30806 / C30713;
    const double C30991 = C30730 * C30806;
    const double C30814 = C30813 * C30805;
    const double C31000 = C30803 * C30813;
    const double C30999 = 2 * C30813;
    const double C31035 = C30813 / C30988;
    const double C1048 = C30813 / C31022;
    const double C2742 = C30813 / C30717;
    const double C31031 = C30996 / C30713;
    const double C977 = (-2 * C30730 * C30996) / C30713;
    const double C31049 = C31023 / C30716;
    const double C1702 = (C30768 * std::pow(C30847, 2)) / C30716 + C30846;
    const double C30849 = C30848 * C30847;
    const double C30854 = C30848 / C30731;
    const double C30995 = C30848 / C30713;
    const double C30993 = C30730 * C30848;
    const double C30856 = C30855 * C30847;
    const double C31006 = C30845 * C30855;
    const double C31005 = 2 * C30855;
    const double C31041 = C30855 / C30988;
    const double C1881 = C30855 / C31022;
    const double C3644 = C30855 / C30717;
    const double C31037 = C31002 / C30713;
    const double C1703 = (-2 * C30730 * C31002) / C30713;
    const double C31051 = C31026 / C30716;
    const double C4599 = (2 * C31010 * C31042) / C29968;
    const double C13237 = C31042 / C29968;
    const double C8995 = (2 * C31010 * C31043) / C29968;
    const double C18991 = C31043 / C29968;
    const double C29977 = C29969 * C29976;
    const double C4602 = -C29976 / C29968;
    const double C13245 = C13242 * C127;
    const double C13411 = C13235 * C293;
    const double C19289 = C13235 * C454;
    const double C30030 = ae * C30029;
    const double C128 =
        (C30016 * C30014 * C30023 + C30015 * C30029 + C30015 * C30018 * ae) /
        C29968;
    const double C282 = (C30188 * C30029) / C29968;
    const double C443 = (C30247 * C30029) / C29968;
    const double C30047 = ae * C30045;
    const double C30046 = C30015 * C30045;
    const double C30056 = 2 * C30045;
    const double C30189 = C30188 * C30045;
    const double C30248 = C30247 * C30045;
    const double C285 = (C30029 + C30045 * C30195) / C29968;
    const double C446 = (C30029 + C30045 * C30254) / C29968;
    const double C292 =
        (2 * ae * C30188 * C30027 + C30015 * C30188 * C30044) / C29971;
    const double C294 = ((C30018 + C30019 * C30020 * C30024) * C30022 +
                         C30044 * std::pow(C30188, 2)) /
                        C29971;
    const double C453 =
        (2 * ae * C30247 * C30027 + C30015 * C30247 * C30044) / C29971;
    const double C455 = ((C30018 + C30019 * C30020 * C30024) * C30022 +
                         C30044 * std::pow(C30247, 2)) /
                        C29971;
    const double C852 = (C30247 * C30188 * C30044) / C29971;
    const double C30074 = ae * C30071;
    const double C30073 = C30015 * C30071;
    const double C30090 = 2 * C30071;
    const double C30197 = C30071 * C30195;
    const double C30203 = C30188 * C30071;
    const double C30256 = C30071 * C30254;
    const double C30262 = C30247 * C30071;
    const double C30226 = 2 * C30221;
    const double C30285 = 2 * C30280;
    const double C5487 =
        (4 * (2 * C30545 + C30188 * C30550) +
         C30188 * (3 * C30550 + C30188 * (2 * C30216 + C30188 * C30234))) /
        C29968;
    const double C6308 =
        (2 * C30247 * C30550 + C30247 * (C30550 + C30234 * C30254)) / C29968;
    const double C6310 =
        (3 * (C30550 + C30234 * C30254) +
         C30247 * (2 * C30247 * C30234 +
                   C30247 * (C30234 + (C30100 + C30150 * C30195) * C30254))) /
        C29968;
    const double C10536 =
        (4 * (2 * C30247 * C30040 + C30247 * C30569) +
         C30247 * (3 * C30569 + C30247 * (2 * C30275 + C30247 * C30293))) /
        C29968;
    const double C30072 = C30015 * C30070;
    const double C30201 = C30188 * C30070;
    const double C30260 = C30247 * C30070;
    const double C295 = (2 * ae * (C30027 + C30040 * C30195) +
                         C30015 * (C30044 + C30070 * C30195)) /
                        C29971;
    const double C456 = (2 * ae * (C30027 + C30040 * C30254) +
                         C30015 * (C30044 + C30070 * C30254)) /
                        C29971;
    const double C1064 =
        (2 * C30188 * C30044 + C30188 * (C30044 + C30070 * C30195)) / C29971;
    const double C1207 = (C30247 * (C30044 + C30070 * C30195)) / C29971;
    const double C1896 =
        (2 * C30247 * C30044 + C30247 * (C30044 + C30070 * C30254)) / C29971;
    const double C30106 = C30015 * C30102;
    const double C30105 = C30102 * ae;
    const double C30139 = 3 * C30102;
    const double C30646 = C30188 * C30102;
    const double C1050 =
        2 * C30188 * C30066 + C30188 * (C30066 + C30102 * C30195);
    const double C1055 =
        3 * (C30066 + C30102 * C30195) +
        C30188 * (2 * C30188 * C30102 + C30188 * (C30102 + C30152 * C30195));
    const double C1184 = C30188 * C30066 + C30188 * C30102 * C30254;
    const double C1187 = C30247 * (C30066 + C30102 * C30195);
    const double C1192 =
        C30066 + C30102 * C30195 + (C30102 + C30152 * C30195) * C30254;
    const double C1582 =
        C30247 * (2 * C30188 * C30102 + C30188 * (C30102 + C30152 * C30195));
    const double C1882 =
        2 * C30247 * C30066 + C30247 * (C30066 + C30102 * C30254);
    const double C1887 =
        3 * (C30066 + C30102 * C30254) +
        C30247 * (2 * C30247 * C30102 + C30247 * (C30102 + C30152 * C30254));
    const double C30662 = C30061 + C30661;
    const double C10698 =
        3 * (C30644 + C30682 * C30254) +
        C30247 * (2 * C30247 * C30682 +
                  C30247 * (C30682 + C30188 * C30146 * C30254));
    const double C30685 = C30061 + C30684;
    const double C30113 = ae * C30108;
    const double C30111 = C30015 * C30108;
    const double C30137 = 2 * C30108;
    const double C30209 = C30108 * C30195;
    const double C30220 = C30188 * C30108;
    const double C30268 = C30108 * C30254;
    const double C30279 = C30247 * C30108;
    const double C30110 = C30015 * C30107;
    const double C30207 = C30107 * C30195;
    const double C30217 = C30188 * C30107;
    const double C30266 = C30107 * C30254;
    const double C30276 = C30247 * C30107;
    const double C30655 = C30188 * C30654;
    const double C6305 =
        2 * C30247 * C30649 + C30247 * (C30649 + C30654 * C30254);
    const double C6307 =
        3 * (C30649 + C30654 * C30254) +
        C30247 * (2 * C30247 * C30654 +
                  C30247 * (C30654 + (C30086 + C30132 * C30195) * C30254));
    const double C30679 = C30247 * C30678;
    const double C30689 = C30651 + C30688;
    const double C30164 = ae * C30158;
    const double C30161 = C30015 * C30158;
    const double C30233 = C30158 * C30195;
    const double C30292 = C30158 * C30254;
    const double C30312 = C30188 * C30158;
    const double C30331 = C30247 * C30158;
    const double C30160 = C30015 * C30157;
    const double C30230 = C30157 * C30195;
    const double C30289 = C30157 * C30254;
    const double C30308 = C30188 * C30157;
    const double C30327 = C30247 * C30157;
    const double C30244 = 2 * C30239;
    const double C30554 = C30552 + C30553;
    const double C30303 = 2 * C30298;
    const double C30573 = C30571 + C30572;
    const double C30365 = 2 * C30360;
    const double C10913 =
        (4 * (2 * C30247 * C30216 + C30247 * C30578) +
         C30247 * (3 * C30578 +
                   C30247 * (2 * C30355 +
                             C30247 * (C30307 + C30188 * C30150 * C30254)))) /
        C29968;
    const double C30159 = C30138 + C30156;
    const double C30726 = C30725 / C30716;
    const double C31016 = 2 * C30982;
    const double C30735 = C30734 / C30713;
    const double C31020 = C30986 / C30731;
    const double C31045 = C30980 - C31015;
    const double C2482 = -C31015;
    const double C31059 = C31044 + C30723;
    const double C30808 = C30807 / C30716;
    const double C31024 = 2 * C30991;
    const double C30815 = C30814 / C30713;
    const double C31034 = C31000 / C30731;
    const double C31053 = C30994 - C31031;
    const double C2374 = -C31031;
    const double C31062 = C31049 + C30804;
    const double C30850 = C30849 / C30716;
    const double C31027 = 2 * C30993;
    const double C30857 = C30856 / C30713;
    const double C31040 = C31006 / C30731;
    const double C31056 = C30995 - C31037;
    const double C3136 = -C31037;
    const double C31063 = C31051 + C30846;
    const double C29978 = C29977 / C29968;
    const double C4609 = C4602 * C127;
    const double C4606 = C4602 * C284;
    const double C4605 = C4602 * C283;
    const double C4604 = C4602 * C126;
    const double C4736 = C4602 * C1059;
    const double C4734 = C4602 * C1058;
    const double C4904 = C4602 * C1199;
    const double C4903 = C4602 * C1195;
    const double C4902 = C4602 * C445;
    const double C4901 = C4602 * C444;
    const double C4900 = C4602 * C847;
    const double C4899 = C4602 * C1198;
    const double C5279 = C4602 * C1583;
    const double C6319 = C4602 * C6309;
    const double C6318 = C4602 * C1891;
    const double C6317 = C4602 * C1890;
    const double C6316 = C4602 * C2267;
    const double C135 =
        ((C30018 + C30019 * C30020 * C30024) * C30022 + C30030 + C30030 +
         C30015 *
             (2 * ae * C30027 +
              C30015 *
                  (C30020 * C30024 + C30019 * bs[4] * std::pow(C30013, 4)) *
                  C30022)) /
        C29971;
    const double C143 = C118 * C128;
    const double C4610 = C4602 * C128;
    const double C13250 = C13242 * C128;
    const double C4608 = C4602 * C282;
    const double C13247 = C13242 * C282;
    const double C4905 = C4602 * C443;
    const double C13630 = C13242 * C443;
    const double C30048 = C30027 + C30046;
    const double C30190 = ae * C30189;
    const double C848 = (C30247 * C30189) / C29968;
    const double C30249 = ae * C30248;
    const double C4607 = C4602 * C285;
    const double C13415 = C13242 * C285;
    const double C4910 = C4602 * C446;
    const double C13633 = C13242 * C446;
    const double C4738 = C30696 * C292;
    const double C13423 = C13235 * C292;
    const double C13413 = C13236 * C292;
    const double C4732 = C30696 * C294;
    const double C13419 = C13235 * C294;
    const double C9228 = C30696 * C453;
    const double C19297 = C13235 * C453;
    const double C19291 = C13236 * C453;
    const double C9224 = C30696 * C455;
    const double C19295 = C13235 * C455;
    const double C5278 = C30696 * C852;
    const double C14125 = C13235 * C852;
    const double C30084 = C30070 + C30074;
    const double C30076 = C30040 + C30073;
    const double C30198 = C30045 + C30197;
    const double C30205 = ae * C30203;
    const double C30346 = C30247 * C30203;
    const double C30368 = 2 * C30203;
    const double C1194 = (C30189 + C30203 * C30254) / C29968;
    const double C30257 = C30045 + C30256;
    const double C30264 = ae * C30262;
    const double C30422 = 2 * C30262;
    const double C5495 = C4602 * C5487;
    const double C6315 = C4602 * C6308;
    const double C6320 = C4602 * C6310;
    const double C10544 = C4602 * C10536;
    const double C30075 = C30057 + C30072;
    const double C853 =
        (2 * ae * C30247 * C30188 * C30040 + C30015 * C30247 * C30201) / C29971;
    const double C1204 = (C30188 * C30044 + C30201 * C30254) / C29971;
    const double C4740 = C30696 * C295;
    const double C13428 = C13235 * C295;
    const double C13416 = C13236 * C295;
    const double C9230 = C30696 * C456;
    const double C19301 = C13235 * C456;
    const double C19293 = C13236 * C456;
    const double C4735 = C30696 * C1064;
    const double C14387 = C13235 * C1064;
    const double C5276 = C30696 * C1207;
    const double C14561 = C13235 * C1207;
    const double C9226 = C30696 * C1896;
    const double C21019 = C13235 * C1896;
    const double C30109 = C30091 + C30106;
    const double C2266 =
        2 * C30247 * C30646 + C30247 * (C30646 + C30188 * C30152 * C30254);
    const double C5749 =
        4 * (2 * C30644 + C30188 * C30662) +
        C30188 * (3 * C30662 + C30188 * (2 * C30188 * C30097 +
                                         C30188 * (C30097 + C30146 * C30195)));
    const double C5905 =
        C30247 * (3 * C30662 + C30188 * (2 * C30188 * C30097 +
                                         C30188 * (C30097 + C30146 * C30195)));
    const double C6466 =
        2 * C30644 + C30188 * C30662 +
        (2 * C30188 * C30097 + C30188 * (C30097 + C30146 * C30195)) * C30254;
    const double C6580 =
        2 * C30247 * C30662 +
        C30247 * (C30662 + (C30097 + C30146 * C30195) * C30254);
    const double C10805 =
        4 * (2 * C30247 * C30061 + C30247 * C30685) +
        C30247 * (3 * C30685 + C30247 * (2 * C30247 * C30097 +
                                         C30247 * (C30097 + C30146 * C30254)));
    const double C30130 = C30107 + C30113;
    const double C30115 = C30064 + C30111;
    const double C30212 = C30071 + C30209;
    const double C30225 = ae * C30220;
    const double C30351 = C30247 * C30220;
    const double C30378 = 2 * C30220;
    const double C30385 = C30220 * C30254;
    const double C30271 = C30071 + C30268;
    const double C30284 = ae * C30279;
    const double C30432 = 2 * C30279;
    const double C30114 = C30093 + C30110;
    const double C30210 = C30070 + C30207;
    const double C30222 = C30015 * C30217;
    const double C30349 = C30247 * C30217;
    const double C30402 = 2 * C30217;
    const double C1203 = (2 * ae * (C30188 * C30040 + C30216 * C30254) +
                          C30015 * (C30201 + C30217 * C30254)) /
                         C29971;
    const double C2270 =
        (2 * C30247 * C30201 + C30247 * (C30201 + C30217 * C30254)) / C29971;
    const double C30269 = C30070 + C30266;
    const double C30281 = C30015 * C30276;
    const double C30448 = 2 * C30276;
    const double C30656 = C30653 + C30655;
    const double C30680 = C30677 + C30679;
    const double C10912 =
        4 * (2 * C30247 * C30651 + C30247 * C30689) +
        C30247 * (3 * C30689 +
                  C30247 * (2 * C30247 * C30687 +
                            C30247 * (C30687 + C30188 * C30132 * C30254)));
    const double C30166 = C30100 + C30161;
    const double C30238 = C30108 + C30233;
    const double C30297 = C30108 + C30292;
    const double C30319 = ae * C30312;
    const double C30359 = C30247 * C30312;
    const double C30441 = C30312 * C30254;
    const double C30338 = ae * C30331;
    const double C30165 = C30142 + C30160;
    const double C30235 = C30107 + C30230;
    const double C30294 = C30107 + C30289;
    const double C30315 = C30015 * C30308;
    const double C30356 = C30247 * C30308;
    const double C30439 = C30308 * C30254;
    const double C30334 = C30015 * C30327;
    const double C5488 =
        (5 * (3 * C30550 + C30188 * C30554) +
         C30188 * (4 * C30554 +
                   C30188 * (3 * C30234 +
                             C30188 * (2 * C30307 +
                                       C30188 * (C30100 + C30150 * C30195))))) /
        C29968;
    const double C5618 =
        (2 * C30545 + C30188 * C30550 + C30554 * C30254) / C29968;
    const double C5619 = (C30247 * (3 * C30550 + C30188 * C30554)) / C29968;
    const double C5620 =
        (3 * C30550 + C30188 * C30554 +
         (3 * C30234 +
          C30188 * (2 * C30307 + C30188 * (C30100 + C30150 * C30195))) *
             C30254) /
        C29968;
    const double C6014 =
        (C30247 * (4 * C30554 +
                   C30188 * (3 * C30234 +
                             C30188 * (2 * C30307 +
                                       C30188 * (C30100 + C30150 * C30195))))) /
        C29968;
    const double C6685 =
        (2 * C30247 * C30554 +
         C30247 * (C30554 + (2 * C30307 + C30188 * (C30100 + C30150 * C30195)) *
                                C30254)) /
        C29968;
    const double C10537 =
        (5 * (3 * C30569 + C30247 * C30573) +
         C30247 * (4 * C30573 +
                   C30247 * (3 * C30293 +
                             C30247 * (2 * C30326 +
                                       C30247 * (C30100 + C30150 * C30254))))) /
        C29968;
    const double C10918 = C4602 * C10913;
    const double C30163 = C30015 * C30159;
    const double C30162 = C30159 * ae;
    const double C30727 = C30723 - C30726;
    const double C31046 = C31016 / C30713;
    const double C30736 = C30732 - C30735;
    const double C31060 = C31045 / C30717;
    const double C30809 = C30804 - C30808;
    const double C31050 = C31024 / C30713;
    const double C30816 = C30812 - C30815;
    const double C31064 = C31053 / C30717;
    const double C30851 = C30846 - C30850;
    const double C31052 = C31027 / C30713;
    const double C30858 = C30854 - C30857;
    const double C31066 = C31056 / C30717;
    const double C29979 = C30696 - C29978;
    const double C30049 = C30048 + C30041;
    const double C291 =
        (C30188 * C30044 + C30190 + C30190 +
         C30015 * (2 * ae * C30188 * C30040 + C30015 * C30188 * C30070)) /
        C29971;
    const double C4906 = C4602 * C848;
    const double C13628 = C13242 * C848;
    const double C452 =
        (C30247 * C30044 + C30249 + C30249 +
         C30015 * (2 * ae * C30247 * C30040 + C30015 * C30247 * C30070)) /
        C29971;
    const double C30092 = C30084 + C30074;
    const double C30077 = C30076 + C30065;
    const double C30199 = ae * C30198;
    const double C1057 = (2 * C30189 + C30188 * C30198) / C29968;
    const double C1197 = (C30247 * C30198) / C29968;
    const double C30347 = ae * C30346;
    const double C4909 = C4602 * C1194;
    const double C13635 = C13242 * C1194;
    const double C30258 = ae * C30257;
    const double C1889 = (2 * C30248 + C30247 * C30257) / C29968;
    const double C5281 = C30696 * C853;
    const double C14129 = C13235 * C853;
    const double C14123 = C13236 * C853;
    const double C5626 = C30696 * C1204;
    const double C14557 = C13235 * C1204;
    const double C30112 = C30109 * ae;
    const double C124 = 4 * (2 * C30038 + C30015 * C30066) +
                        C30015 * (3 * C30066 + C30015 * C30109);
    const double C278 = 2 * C30038 + C30015 * C30066 + C30109 * C30195;
    const double C279 = C30188 * (3 * C30066 + C30015 * C30109);
    const double C439 = 2 * C30038 + C30015 * C30066 + C30109 * C30254;
    const double C440 = C30247 * (3 * C30066 + C30015 * C30109);
    const double C845 = C30247 * C30188 * C30109;
    const double C1324 =
        2 * C30188 * C30109 + C30188 * (C30109 + C30159 * C30195);
    const double C1476 = C30247 * (C30109 + C30159 * C30195);
    const double C2052 = C30188 * C30109 + C30188 * C30159 * C30254;
    const double C2160 =
        2 * C30247 * C30109 + C30247 * (C30109 + C30159 * C30254);
    const double C30141 = C30130 + C30113;
    const double C30117 = C30115 + C30101;
    const double C30214 = ae * C30212;
    const double C30369 = C30188 * C30212;
    const double C30377 = 3 * C30212;
    const double C30391 = C30247 * C30212;
    const double C1200 = (C30198 + C30212 * C30254) / C29968;
    const double C30306 = C30217 + C30225;
    const double C30353 = ae * C30351;
    const double C30459 = 2 * C30351;
    const double C30386 = C30203 + C30385;
    const double C30273 = ae * C30271;
    const double C30423 = C30247 * C30271;
    const double C30431 = 3 * C30271;
    const double C30325 = C30276 + C30284;
    const double C30116 = C30015 * C30114;
    const double C30129 = 2 * C30114;
    const double C1063 =
        (2 * ae * (2 * C30188 * C30040 + C30188 * (C30040 + C30064 * C30195)) +
         C30015 * (2 * C30201 + C30188 * C30210)) /
        C29971;
    const double C1065 = (3 * (C30044 + C30070 * C30195) +
                          C30188 * (2 * C30201 + C30188 * C30210)) /
                         C29971;
    const double C1206 = (2 * ae * C30247 * (C30040 + C30064 * C30195) +
                          C30015 * C30247 * C30210) /
                         C29971;
    const double C1208 = (C30044 + C30070 * C30195 + C30210 * C30254) / C29971;
    const double C1586 = (C30247 * (2 * C30201 + C30188 * C30210)) / C29971;
    const double C30227 = C30226 + C30222;
    const double C6473 = C30696 * C1203;
    const double C14559 = C13236 * C1203;
    const double C15661 = C13235 * C1203;
    const double C6691 = C30696 * C2270;
    const double C15937 = C13235 * C2270;
    const double C1895 =
        (2 * ae * (2 * C30247 * C30040 + C30247 * (C30040 + C30064 * C30254)) +
         C30015 * (2 * C30260 + C30247 * C30269)) /
        C29971;
    const double C1897 = (3 * (C30044 + C30070 * C30254) +
                          C30247 * (2 * C30260 + C30247 * C30269)) /
                         C29971;
    const double C30286 = C30285 + C30281;
    const double C5486 =
        5 * (3 * C30649 + C30188 * C30656) +
        C30188 * (4 * C30656 +
                  C30188 * (3 * C30654 +
                            C30188 * (2 * C30188 * C30086 +
                                      C30188 * (C30086 + C30132 * C30195))));
    const double C5615 = 2 * C30642 + C30188 * C30649 + C30656 * C30254;
    const double C5616 = C30247 * (3 * C30649 + C30188 * C30656);
    const double C5617 =
        3 * C30649 + C30188 * C30656 +
        (3 * C30654 +
         C30188 * (2 * C30188 * C30086 + C30188 * (C30086 + C30132 * C30195))) *
            C30254;
    const double C6013 =
        C30247 * (4 * C30656 +
                  C30188 * (3 * C30654 +
                            C30188 * (2 * C30188 * C30086 +
                                      C30188 * (C30086 + C30132 * C30195))));
    const double C6684 =
        2 * C30247 * C30656 +
        C30247 * (C30656 +
                  (2 * C30188 * C30086 + C30188 * (C30086 + C30132 * C30195)) *
                      C30254);
    const double C10535 =
        5 * (3 * C30673 + C30247 * C30680) +
        C30247 * (4 * C30680 +
                  C30247 * (3 * C30678 +
                            C30247 * (2 * C30247 * C30086 +
                                      C30247 * (C30086 + C30132 * C30254))));
    const double C30169 = C30166 + C30151;
    const double C30243 = ae * C30238;
    const double C30379 = C30188 * C30238;
    const double C30398 = C30238 * C30254;
    const double C30413 = C30247 * C30238;
    const double C30302 = ae * C30297;
    const double C30433 = C30247 * C30297;
    const double C30364 = ae * C30359;
    const double C30444 = C30220 + C30441;
    const double C30168 = C30015 * C30165;
    const double C30240 = C30015 * C30235;
    const double C30403 = C30188 * C30235;
    const double C30411 = C30247 * C30235;
    const double C1066 =
        (2 * ae *
             (3 * (C30040 + C30064 * C30195) +
              C30188 * (2 * C30216 + C30188 * C30234)) +
         C30015 * (3 * C30210 + C30188 * (2 * C30217 + C30188 * C30235))) /
        C29971;
    const double C1209 =
        (2 * ae * (C30040 + C30064 * C30195 + C30234 * C30254) +
         C30015 * (C30210 + C30235 * C30254)) /
        C29971;
    const double C5907 =
        (2 * ae * C30247 *
             (3 * C30234 +
              C30188 * (2 * C30307 + C30188 * (C30100 + C30150 * C30195))) +
         C30015 * C30247 *
             (3 * C30235 +
              C30188 *
                  (2 * C30308 +
                   C30188 * (C30157 + (C30133 * C30134 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                          C30022 * C30195)))) /
        C29971;
    const double C6311 =
        (2 * C30247 * C30210 + C30247 * (C30210 + C30235 * C30254)) / C29971;
    const double C30299 = C30015 * C30294;
    const double C30449 = C30247 * C30294;
    const double C1898 =
        (2 * ae *
             (3 * (C30040 + C30064 * C30254) +
              C30247 * (2 * C30275 + C30247 * C30293)) +
         C30015 * (3 * C30269 + C30247 * (2 * C30276 + C30247 * C30294))) /
        C29971;
    const double C30321 = C30320 + C30315;
    const double C30361 = C30015 * C30356;
    const double C30442 = C30217 + C30439;
    const double C30340 = C30339 + C30334;
    const double C5497 = C4602 * C5488;
    const double C5632 = C4602 * C5618;
    const double C5634 = C4602 * C5619;
    const double C5635 = C4602 * C5620;
    const double C6019 = C4602 * C6014;
    const double C6692 = C4602 * C6685;
    const double C10546 = C4602 * C10537;
    const double C30167 = C30139 + C30163;
    const double C30979 = C30727 * C30715;
    const double C31018 = C30984 + C30727;
    const double C30987 = C30736 / C30717;
    const double C30983 = C30736 * C30715;
    const double C580 = C31060 - (C30727 * C30718) / C30713;
    const double C30997 = C30809 * C30803;
    const double C31033 = C30999 + C30809;
    const double C31001 = C30816 / C30717;
    const double C30998 = C30816 * C30803;
    const double C1318 = C31064 - (C30809 * C30805) / C30713;
    const double C31003 = C30851 * C30845;
    const double C31039 = C31005 + C30851;
    const double C31007 = C30858 / C30717;
    const double C31004 = C30858 * C30845;
    const double C2156 = C31066 - (C30851 * C30847) / C30713;
    const double C29980 = C29979 * C29973;
    const double C114 =
        (((0 - (C29969 * C29967) / C29968) * ae) / C29968 - (0 * be) / C29975) /
            (2 * C29968) +
        ((C29969 * ((C29979 * ae) / C29968 - C29967 / C29975) + C13235) * ae) /
            C29968 +
        (0 * ae) / C29968 - C29974 / C29971;
    const double C116 =
        ((C29979 * ae) / C29968 - C29967 / C29975) / (2 * C29968) +
        ((C29969 * ((0 * ae) / C29968 - C29974 / C29971) + C13236) * ae) /
            C29968;
    const double C13240 = (C29979 * ae) / C29968 - C29967 / C29975;
    const double C30050 = ae * C30049;
    const double C129 =
        (2 * C30029 + C30015 * C30049 + (C30018 + C30032 * C30019) * ae) /
        C29968;
    const double C281 = (C30188 * C30049) / C29968;
    const double C442 = (C30247 * C30049) / C29968;
    const double C4746 = C30696 * C291;
    const double C13435 = C13235 * C291;
    const double C13425 = C13236 * C291;
    const double C9235 = C30696 * C452;
    const double C19305 = C13235 * C452;
    const double C19299 = C13236 * C452;
    const double C30079 = ae * C30077;
    const double C30078 = C30015 * C30077;
    const double C30089 = 3 * C30077;
    const double C30202 = C30188 * C30077;
    const double C30261 = C30247 * C30077;
    const double C286 = (C30049 + C30077 * C30195) / C29968;
    const double C447 = (C30049 + C30077 * C30254) / C29968;
    const double C296 = (C30044 + C30070 * C30195 + C30199 + C30199 +
                         C30015 * (2 * ae * (C30040 + C30064 * C30195) +
                                   C30015 * (C30070 + C30107 * C30195))) /
                        C29971;
    const double C4742 = C4602 * C1057;
    const double C13421 = C13242 * C1057;
    const double C4907 = C4602 * C1197;
    const double C14127 = C13242 * C1197;
    const double C854 =
        (C30247 * C30201 + C30347 + C30347 +
         C30015 * (2 * ae * C30247 * C30216 + C30015 * C30247 * C30217)) /
        C29971;
    const double C457 = (C30044 + C30070 * C30254 + C30258 + C30258 +
                         C30015 * (2 * ae * (C30040 + C30064 * C30254) +
                                   C30015 * (C30070 + C30107 * C30254))) /
                        C29971;
    const double C6584 = C4602 * C1889;
    const double C15458 = C13242 * C1889;
    const double C30120 = ae * C30117;
    const double C30119 = C30015 * C30117;
    const double C30136 = 3 * C30117;
    const double C30208 = C30117 * C30195;
    const double C30219 = C30188 * C30117;
    const double C30267 = C30117 * C30254;
    const double C30278 = C30247 * C30117;
    const double C30370 = C30368 + C30369;
    const double C30392 = ae * C30391;
    const double C4908 = C4602 * C1200;
    const double C14565 = C13242 * C1200;
    const double C30313 = C30306 + C30225;
    const double C30387 = ae * C30386;
    const double C2268 = (2 * C30346 + C30247 * C30386) / C29968;
    const double C30424 = C30422 + C30423;
    const double C30332 = C30325 + C30284;
    const double C30118 = C30092 + C30116;
    const double C4743 = C30696 * C1063;
    const double C14389 = C13236 * C1063;
    const double C14725 = C13235 * C1063;
    const double C5493 = C30696 * C1065;
    const double C14395 = C13235 * C1065;
    const double C5283 = C30696 * C1206;
    const double C14563 = C13236 * C1206;
    const double C14931 = C13235 * C1206;
    const double C5628 = C30696 * C1208;
    const double C14569 = C13235 * C1208;
    const double C5630 = C30696 * C1586;
    const double C15073 = C13235 * C1586;
    const double C9232 = C30696 * C1895;
    const double C21021 = C13236 * C1895;
    const double C21367 = C13235 * C1895;
    const double C10542 = C30696 * C1897;
    const double C21025 = C13235 * C1897;
    const double C30173 = ae * C30169;
    const double C30172 = C30015 * C30169;
    const double C30232 = C30169 * C30195;
    const double C30291 = C30169 * C30254;
    const double C30311 = C30188 * C30169;
    const double C30330 = C30247 * C30169;
    const double C30380 = C30378 + C30379;
    const double C30399 = C30212 + C30398;
    const double C30415 = ae * C30413;
    const double C30434 = C30432 + C30433;
    const double C30446 = ae * C30444;
    const double C30460 = C30247 * C30444;
    const double C30171 = C30141 + C30168;
    const double C30245 = C30244 + C30240;
    const double C30407 = C30402 + C30403;
    const double C6313 =
        (3 * (C30210 + C30235 * C30254) +
         C30247 * (2 * C30411 +
                   C30247 * (C30235 +
                             (C30157 + (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195) *
                                 C30254))) /
        C29971;
    const double C6582 =
        (2 * ae *
             (2 * C30247 * C30234 +
              C30247 * (C30234 + (C30100 + C30150 * C30195) * C30254)) +
         C30015 * (2 * C30411 +
                   C30247 * (C30235 +
                             (C30157 + (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195) *
                                 C30254))) /
        C29971;
    const double C5754 = C30696 * C1066;
    const double C14392 = C13236 * C1066;
    const double C6471 = C30696 * C1209;
    const double C14566 = C13236 * C1209;
    const double C6689 = C30696 * C6311;
    const double C30304 = C30303 + C30299;
    const double C30453 = C30448 + C30449;
    const double C10810 = C30696 * C1898;
    const double C21023 = C13236 * C1898;
    const double C30322 = C30015 * C30321;
    const double C30366 = C30365 + C30361;
    const double C2271 =
        (2 * ae * (2 * C30247 * C30216 + C30247 * (C30216 + C30307 * C30254)) +
         C30015 * (2 * C30349 + C30247 * C30442)) /
        C29971;
    const double C6312 = (3 * (C30201 + C30217 * C30254) +
                          C30247 * (2 * C30349 + C30247 * C30442)) /
                         C29971;
    const double C10700 =
        (2 * ae *
             (3 * (C30216 + C30307 * C30254) +
              C30247 *
                  (2 * C30355 + C30247 * (C30307 + C30188 * C30150 * C30254))) +
         C30015 * (3 * C30442 +
                   C30247 * (2 * C30356 +
                             C30247 * (C30308 + C30188 *
                                                    (C30133 * C30134 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30022 * C30254)))) /
        C29971;
    const double C10914 =
        (4 * (2 * C30349 + C30247 * C30442) +
         C30247 * (3 * C30442 +
                   C30247 * (2 * C30356 +
                             C30247 * (C30308 + C30188 *
                                                    (C30133 * C30134 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30022 * C30254)))) /
        C29971;
    const double C30341 = C30015 * C30340;
    const double C30170 = C30167 * ae;
    const double C125 = 5 * (3 * C30066 + C30015 * C30109) +
                        C30015 * (4 * C30109 + C30015 * C30167);
    const double C280 = 3 * C30066 + C30015 * C30109 + C30167 * C30195;
    const double C441 = 3 * C30066 + C30015 * C30109 + C30167 * C30254;
    const double C584 = C30188 * (4 * C30109 + C30015 * C30167);
    const double C690 = C30247 * (4 * C30109 + C30015 * C30167);
    const double C846 = C30247 * C30188 * C30167;
    const double C31014 = C30979 / C30713;
    const double C31047 = C31018 / C30717;
    const double C31048 = C31020 + C30987;
    const double C582 = C30987 - C30734 / C30731;
    const double C31017 = C30983 / C30713;
    const double C31030 = C30997 / C30713;
    const double C31054 = C31033 / C30717;
    const double C31055 = C31034 + C31001;
    const double C1320 = C31001 - C30814 / C30731;
    const double C31032 = C30998 / C30713;
    const double C31036 = C31003 / C30713;
    const double C31057 = C31039 / C30717;
    const double C31058 = C31040 + C31007;
    const double C2158 = C31007 - C30856 / C30731;
    const double C31038 = C31004 / C30713;
    const double C29988 = C29969 * C29980;
    const double C113 =
        (ae * -2 * C29967) / (C29971 * 2 * C29968) +
        (((C29969 * ((-4 * C29974) / C29968 - (C29969 * C29980) / C29968) *
           ae) /
              C29968 +
          2 * ((C29979 * ae) / C29968 - C29967 / C29975)) *
         ae) /
            C29968 -
        C29980 / C29975;
    const double C117 = (-C29980 / C29968) / (4 * C29971);
    const double C4601 = -C29980 / C29968;
    const double C13241 = (-C29980 / C29968) / (2 * C29968);
    const double C147 = C114 * C128;
    const double C146 = C114 * C127;
    const double C141 = C114 * C126;
    const double C313 = C114 * C285;
    const double C308 = C114 * C282;
    const double C305 = C114 * C284;
    const double C304 = C114 * C283;
    const double C474 = C114 * C446;
    const double C469 = C114 * C443;
    const double C466 = C114 * C445;
    const double C465 = C114 * C444;
    const double C863 = C114 * C848;
    const double C858 = C114 * C847;
    const double C1072 = C114 * C1059;
    const double C1071 = C114 * C1058;
    const double C1218 = C114 * C1199;
    const double C1217 = C114 * C1198;
    const double C1214 = C114 * C1195;
    const double C1328 = C114 * C1057;
    const double C1480 = C114 * C1197;
    const double C1590 = C114 * C1583;
    const double C1904 = C114 * C1891;
    const double C1903 = C114 * C1890;
    const double C2056 = C114 * C1194;
    const double C2164 = C114 * C1889;
    const double C2274 = C114 * C2267;
    const double C145 = C116 * C128;
    const double C142 = C116 * C127;
    const double C306 = C116 * C285;
    const double C303 = C116 * C282;
    const double C467 = C116 * C446;
    const double C464 = C116 * C443;
    const double C859 = C116 * C848;
    const double C1070 = C116 * C1057;
    const double C1219 = C116 * C1200;
    const double C1216 = C116 * C1197;
    const double C1213 = C116 * C1194;
    const double C1902 = C116 * C1889;
    const double C13252 = C13240 * C128;
    const double C13251 = C13240 * C127;
    const double C13249 = C13240 * C282;
    const double C13246 = C13240 * C283;
    const double C13244 = C13240 * C126;
    const double C13433 = C13240 * C1057;
    const double C13427 = C13240 * C285;
    const double C13420 = C13240 * C1058;
    const double C13418 = C13240 * C284;
    const double C13643 = C13240 * C446;
    const double C13641 = C13240 * C1194;
    const double C13638 = C13240 * C848;
    const double C13636 = C13240 * C443;
    const double C13634 = C13240 * C1195;
    const double C13632 = C13240 * C445;
    const double C13631 = C13240 * C444;
    const double C13629 = C13240 * C847;
    const double C14133 = C13240 * C1197;
    const double C14126 = C13240 * C1198;
    const double C14396 = C13240 * C5487;
    const double C14394 = C13240 * C1059;
    const double C14572 = C13240 * C5618;
    const double C14571 = C13240 * C1583;
    const double C14568 = C13240 * C1199;
    const double C15074 = C13240 * C5619;
    const double C15462 = C13240 * C6309;
    const double C15460 = C13240 * C1891;
    const double C15459 = C13240 * C1890;
    const double C15457 = C13240 * C2267;
    const double C15662 = C13240 * C1200;
    const double C15800 = C13240 * C1889;
    const double C15938 = C13240 * C6308;
    const double C21026 = C13240 * C10536;
    const double C136 =
        (2 * (2 * ae * C30027 + C30015 * C30044) + C30050 + C30050 +
         C30015 * (C30044 + C30047 + C30047 +
                   C30015 * (2 * ae * C30040 +
                             C30015 *
                                 (C30033 * C30034 +
                                  C30019 * bs[5] * std::pow(C30021, 5)) *
                                 C30022))) /
        C29971;
    const double C152 = C114 * C129;
    const double C148 = C116 * C129;
    const double C144 = C118 * C129;
    const double C4615 = C4602 * C129;
    const double C13259 = C13240 * C129;
    const double C13253 = C13242 * C129;
    const double C316 = C114 * C281;
    const double C309 = C116 * C281;
    const double C302 = C118 * C281;
    const double C4611 = C4602 * C281;
    const double C13254 = C13240 * C281;
    const double C13248 = C13242 * C281;
    const double C477 = C114 * C442;
    const double C470 = C116 * C442;
    const double C463 = C118 * C442;
    const double C4913 = C4602 * C442;
    const double C13647 = C13240 * C442;
    const double C13637 = C13242 * C442;
    const double C30080 = C30056 + C30078;
    const double C30204 = ae * C30202;
    const double C849 = (C30247 * C30202) / C29968;
    const double C30263 = ae * C30261;
    const double C317 = C114 * C286;
    const double C312 = C116 * C286;
    const double C307 = C118 * C286;
    const double C4612 = C4602 * C286;
    const double C13442 = C13240 * C286;
    const double C13430 = C13242 * C286;
    const double C478 = C114 * C447;
    const double C473 = C116 * C447;
    const double C468 = C118 * C447;
    const double C4914 = C4602 * C447;
    const double C13648 = C13240 * C447;
    const double C13642 = C13242 * C447;
    const double C4748 = C30696 * C296;
    const double C13443 = C13235 * C296;
    const double C13431 = C13236 * C296;
    const double C5288 = C30696 * C854;
    const double C14137 = C13235 * C854;
    const double C14131 = C13236 * C854;
    const double C9237 = C30696 * C457;
    const double C19311 = C13235 * C457;
    const double C19303 = C13236 * C457;
    const double C30140 = C30129 + C30120;
    const double C30121 = C30090 + C30119;
    const double C30211 = C30077 + C30208;
    const double C30224 = ae * C30219;
    const double C30350 = C30247 * C30219;
    const double C30404 = 2 * C30219;
    const double C1193 = (C30202 + C30219 * C30254) / C29968;
    const double C30270 = C30077 + C30267;
    const double C30283 = ae * C30278;
    const double C30450 = 2 * C30278;
    const double C30371 = ae * C30370;
    const double C1060 = (3 * C30198 + C30188 * C30370) / C29968;
    const double C1584 = (C30247 * C30370) / C29968;
    const double C1205 =
        (C30247 * C30210 + C30392 + C30392 +
         C30015 * (2 * ae * C30247 * C30234 + C30015 * C30247 * C30235)) /
        C29971;
    const double C1202 = (C30201 + C30217 * C30254 + C30387 + C30387 +
                          C30015 * (2 * ae * (C30216 + C30307 * C30254) +
                                    C30015 * (C30217 + C30308 * C30254))) /
                         C29971;
    const double C2275 = C116 * C2268;
    const double C6585 = C4602 * C2268;
    const double C15456 = C13242 * C2268;
    const double C15802 = C13240 * C2268;
    const double C30425 = ae * C30424;
    const double C1892 = (3 * C30257 + C30247 * C30424) / C29968;
    const double C30175 = C30137 + C30172;
    const double C30237 = C30117 + C30232;
    const double C30296 = C30117 + C30291;
    const double C30318 = ae * C30311;
    const double C30358 = C30247 * C30311;
    const double C30440 = C30311 * C30254;
    const double C30337 = ae * C30330;
    const double C30381 = C30188 * C30380;
    const double C30406 = ae * C30380;
    const double C30419 = C30247 * C30380;
    const double C6467 = (C30370 + C30380 * C30254) / C29968;
    const double C30400 = ae * C30399;
    const double C6581 = (2 * C30391 + C30247 * C30399) / C29968;
    const double C30435 = C30247 * C30434;
    const double C30452 = ae * C30434;
    const double C30461 = C30459 + C30460;
    const double C30174 = C30015 * C30171;
    const double C1587 = (2 * ae * C30247 * (2 * C30216 + C30188 * C30234) +
                          C30015 * C30247 * C30407) /
                         C29971;
    const double C5489 = (4 * (2 * C30201 + C30188 * C30210) +
                          C30188 * (3 * C30210 + C30188 * C30407)) /
                         C29971;
    const double C5490 =
        (5 * (3 * C30210 + C30188 * C30407) +
         C30188 *
             (4 * C30407 +
              C30188 * (3 * C30235 +
                        C30188 * (2 * C30308 +
                                  C30188 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30195))))) /
        C29971;
    const double C5621 =
        (2 * C30201 + C30188 * C30210 + C30407 * C30254) / C29971;
    const double C5622 = (C30247 * (3 * C30210 + C30188 * C30407)) / C29971;
    const double C5623 =
        (3 * C30210 + C30188 * C30407 +
         (3 * C30235 +
          C30188 * (2 * C30308 +
                    C30188 * (C30157 + (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195))) *
             C30254) /
        C29971;
    const double C5751 =
        (2 * ae *
             (4 * (2 * C30216 + C30188 * C30234) +
              C30188 * (3 * C30234 +
                        C30188 * (2 * C30307 +
                                  C30188 * (C30100 + C30150 * C30195)))) +
         C30015 *
             (4 * C30407 +
              C30188 * (3 * C30235 +
                        C30188 * (2 * C30308 +
                                  C30188 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30195))))) /
        C29971;
    const double C6015 =
        (C30247 *
         (4 * C30407 +
          C30188 * (3 * C30235 +
                    C30188 * (2 * C30308 +
                              C30188 * (C30157 +
                                        (C30133 * C30134 +
                                         C30019 * bs[8] * std::pow(C30013, 8)) *
                                            C30022 * C30195))))) /
        C29971;
    const double C6468 =
        (2 * ae *
             (2 * C30216 + C30188 * C30234 +
              (2 * C30307 + C30188 * (C30100 + C30150 * C30195)) * C30254) +
         C30015 * (C30407 +
                   (2 * C30308 +
                    C30188 * (C30157 + (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195)) *
                       C30254)) /
        C29971;
    const double C6686 =
        (2 * C30247 * C30407 +
         C30247 * (C30407 +
                   (2 * C30308 +
                    C30188 * (C30157 + (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195)) *
                       C30254)) /
        C29971;
    const double C10538 = (4 * (2 * C30260 + C30247 * C30269) +
                           C30247 * (3 * C30269 + C30247 * C30453)) /
                          C29971;
    const double C10539 =
        (5 * (3 * C30269 + C30247 * C30453) +
         C30247 *
             (4 * C30453 +
              C30247 * (3 * C30294 +
                        C30247 * (2 * C30327 +
                                  C30247 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30254))))) /
        C29971;
    const double C10807 =
        (2 * ae *
             (4 * (2 * C30275 + C30247 * C30293) +
              C30247 * (3 * C30293 +
                        C30247 * (2 * C30326 +
                                  C30247 * (C30100 + C30150 * C30254)))) +
         C30015 *
             (4 * C30453 +
              C30247 * (3 * C30294 +
                        C30247 * (2 * C30327 +
                                  C30247 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30254))))) /
        C29971;
    const double C30323 = C30313 + C30322;
    const double C10703 = C30696 * C2271;
    const double C15935 = C13236 * C2271;
    const double C10917 = C30696 * C6312;
    const double C30342 = C30332 + C30341;
    const double C31068 = C31014 + C31060;
    const double C581 = C31047 - (C30736 * C30718) / C30713;
    const double C111 = C31048 / C30717 - C30734 / C31021;
    const double C31061 = C31017 + C31047;
    const double C31069 = C31030 + C31064;
    const double C1319 = C31054 - (C30816 * C30805) / C30713;
    const double C1047 = C31055 / C30717 - C30814 / C31021;
    const double C31065 = C31032 + C31054;
    const double C31070 = C31036 + C31066;
    const double C2157 = C31057 - (C30858 * C30847) / C30713;
    const double C1880 = C31058 / C30717 - C30856 / C31021;
    const double C31067 = C31038 + C31057;
    const double C115 =
        (((-4 * C29974) / C29968 - C29988 / C29968) * ae) / C29975 +
        ((2 * ((0 * ae) / C29968 - C29974 / C29971) - C29988 / C29975) * ae) /
            C29968;
    const double C13239 =
        (((-4 * C29974) / C29968 - C29988 / C29968) * ae) / C29968;
    const double C4749 = C4601 * C1050;
    const double C4747 = C4601 * C276;
    const double C4745 = C4601 * C271;
    const double C4741 = C4601 * C1051;
    const double C4739 = C4601 * C275;
    const double C4737 = C4601 * C272;
    const double C4733 = C4601 * C1052;
    const double C4731 = C4601 * C274;
    const double C4729 = C4601 * C273;
    const double C5017 = C4601 * C278;
    const double C5015 = C4601 * C277;
    const double C5287 = C4601 * C844;
    const double C5285 = C4601 * C1187;
    const double C5282 = C4601 * C1188;
    const double C5280 = C4601 * C843;
    const double C5277 = C4601 * C842;
    const double C5275 = C4601 * C1189;
    const double C5494 = C4601 * C5485;
    const double C5492 = C4601 * C1053;
    const double C5631 = C4601 * C5615;
    const double C5629 = C4601 * C1580;
    const double C5627 = C4601 * C1190;
    const double C5625 = C4601 * C1186;
    const double C5753 = C4601 * C1054;
    const double C5909 = C4601 * C1581;
    const double C6017 = C4601 * C5616;
    const double C6472 = C4601 * C1185;
    const double C6470 = C4601 * C1191;
    const double C6690 = C4601 * C2264;
    const double C6688 = C4601 * C6305;
    const double C9238 = C4601 * C1882;
    const double C9236 = C4601 * C437;
    const double C9234 = C4601 * C432;
    const double C9231 = C4601 * C1883;
    const double C9229 = C4601 * C436;
    const double C9227 = C4601 * C433;
    const double C9225 = C4601 * C1884;
    const double C9223 = C4601 * C435;
    const double C9221 = C4601 * C434;
    const double C9468 = C4601 * C439;
    const double C9466 = C4601 * C438;
    const double C9623 = C4601 * C1184;
    const double C10543 = C4601 * C10534;
    const double C10541 = C4601 * C1885;
    const double C10702 = C4601 * C2265;
    const double C10809 = C4601 * C1886;
    const double C10916 = C4601 * C6306;
    const double C24988 = C4601 * C845;
    const double C13438 = C13241 * C278;
    const double C13436 = C13241 * C277;
    const double C13429 = C13241 * C276;
    const double C13424 = C13241 * C271;
    const double C13414 = C13241 * C275;
    const double C13412 = C13241 * C272;
    const double C13784 = C13241 * C279;
    const double C14134 = C13241 * C845;
    const double C14130 = C13241 * C844;
    const double C14122 = C13241 * C843;
    const double C14390 = C13241 * C1054;
    const double C14388 = C13241 * C1051;
    const double C14564 = C13241 * C1191;
    const double C14562 = C13241 * C1188;
    const double C14558 = C13241 * C1185;
    const double C14722 = C13241 * C1050;
    const double C14928 = C13241 * C1187;
    const double C15070 = C13241 * C1581;
    const double C15658 = C13241 * C1184;
    const double C15934 = C13241 * C2265;
    const double C19308 = C13241 * C439;
    const double C19306 = C13241 * C438;
    const double C19302 = C13241 * C437;
    const double C19298 = C13241 * C432;
    const double C19292 = C13241 * C436;
    const double C19290 = C13241 * C433;
    const double C19612 = C13241 * C440;
    const double C21022 = C13241 * C1886;
    const double C21020 = C13241 * C1883;
    const double C21364 = C13241 * C1882;
    const double C30081 = C30080 + C30069;
    const double C297 =
        (2 * (2 * ae * C30188 * C30040 + C30015 * C30201) + C30204 + C30204 +
         C30015 *
             (C30201 + C30205 + C30205 +
              C30015 * (2 * ae * C30188 * C30064 + C30015 * C30188 * C30107))) /
        C29971;
    const double C864 = C114 * C849;
    const double C862 = C116 * C849;
    const double C860 = C118 * C849;
    const double C4912 = C4602 * C849;
    const double C13645 = C13240 * C849;
    const double C13639 = C13242 * C849;
    const double C458 =
        (2 * (2 * ae * C30247 * C30040 + C30015 * C30260) + C30263 + C30263 +
         C30015 *
             (C30260 + C30264 + C30264 +
              C30015 * (2 * ae * C30247 * C30064 + C30015 * C30247 * C30107))) /
        C29971;
    const double C30148 = C30140 + C30120;
    const double C30122 = C30121 + C30105;
    const double C30213 = ae * C30211;
    const double C1056 = (2 * C30202 + C30188 * C30211) / C29968;
    const double C1196 = (C30247 * C30211) / C29968;
    const double C30352 = ae * C30350;
    const double C1212 = C118 * C1193;
    const double C2057 = C116 * C1193;
    const double C4915 = C4602 * C1193;
    const double C13650 = C13240 * C1193;
    const double C13640 = C13242 * C1193;
    const double C30272 = ae * C30270;
    const double C1888 = (2 * C30261 + C30247 * C30270) / C29968;
    const double C1062 = (2 * C30201 + C30188 * C30210 + C30371 + C30371 +
                          C30015 * (2 * ae * (2 * C30216 + C30188 * C30234) +
                                    C30015 * (2 * C30217 + C30188 * C30235))) /
                         C29971;
    const double C1073 = C116 * C1060;
    const double C4744 = C4602 * C1060;
    const double C14391 = C13242 * C1060;
    const double C14726 = C13240 * C1060;
    const double C1591 = C116 * C1584;
    const double C5284 = C4602 * C1584;
    const double C14570 = C13242 * C1584;
    const double C14932 = C13240 * C1584;
    const double C5286 = C30696 * C1205;
    const double C14929 = C13236 * C1205;
    const double C9624 = C30696 * C1202;
    const double C15659 = C13236 * C1202;
    const double C1894 = (2 * C30260 + C30247 * C30269 + C30425 + C30425 +
                          C30015 * (2 * ae * (2 * C30275 + C30247 * C30293) +
                                    C30015 * (2 * C30276 + C30247 * C30294))) /
                         C29971;
    const double C1905 = C116 * C1892;
    const double C9233 = C4602 * C1892;
    const double C15461 = C13242 * C1892;
    const double C21368 = C13240 * C1892;
    const double C30177 = C30175 + C30155;
    const double C30242 = ae * C30237;
    const double C30405 = C30188 * C30237;
    const double C30412 = C30247 * C30237;
    const double C1201 = (C30211 + C30237 * C30254) / C29968;
    const double C30301 = ae * C30296;
    const double C30451 = C30247 * C30296;
    const double C30363 = ae * C30358;
    const double C30443 = C30219 + C30440;
    const double C30382 = C30377 + C30381;
    const double C30420 = ae * C30419;
    const double C6474 = C4602 * C6467;
    const double C14573 = C13242 * C6467;
    const double C1210 =
        (C30210 + C30235 * C30254 + C30400 + C30400 +
         C30015 * (2 * ae * (C30234 + (C30100 + C30150 * C30195) * C30254) +
                   C30015 * (C30235 +
                             (C30157 + (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195) *
                                 C30254))) /
        C29971;
    const double C6586 = C4602 * C6581;
    const double C15939 = C13242 * C6581;
    const double C30436 = C30431 + C30435;
    const double C30462 = ae * C30461;
    const double C10699 = (3 * C30386 + C30247 * C30461) / C29968;
    const double C5910 = C30696 * C1587;
    const double C15071 = C13236 * C1587;
    const double C5496 = C30696 * C5489;
    const double C5633 = C30696 * C5621;
    const double C6018 = C30696 * C5622;
    const double C10545 = C30696 * C10538;
    const double C108 =
        (C31059 + 2 * C30727) / C30717 - (C31068 * C30718) / C30713;
    const double C109 =
        (C31046 + 2 * C30736 + C31068) / C30717 - (C31061 * C30718) / C30713;
    const double C110 = (C31019 + C30733 / C30713 + C31061) / C30717 -
                        (C31048 * C30718) / C30713;
    const double C1044 =
        (C31062 + 2 * C30809) / C30717 - (C31069 * C30805) / C30713;
    const double C1045 =
        (C31050 + 2 * C30816 + C31069) / C30717 - (C31065 * C30805) / C30713;
    const double C1046 = (C31025 + C30813 / C30713 + C31065) / C30717 -
                         (C31055 * C30805) / C30713;
    const double C1877 =
        (C31063 + 2 * C30851) / C30717 - (C31070 * C30847) / C30713;
    const double C1878 =
        (C31052 + 2 * C30858 + C31070) / C30717 - (C31067 * C30847) / C30713;
    const double C1879 = (C31028 + C30855 / C30713 + C31067) / C30717 -
                         (C31058 * C30847) / C30713;
    const double C13441 = C13239 * C276;
    const double C13434 = C13239 * C271;
    const double C13426 = C13239 * C275;
    const double C13422 = C13239 * C272;
    const double C13417 = C13239 * C274;
    const double C13410 = C13239 * C273;
    const double C13782 = C13239 * C277;
    const double C14136 = C13239 * C844;
    const double C14128 = C13239 * C843;
    const double C14124 = C13239 * C842;
    const double C14393 = C13239 * C1053;
    const double C14386 = C13239 * C1052;
    const double C14567 = C13239 * C1190;
    const double C14560 = C13239 * C1189;
    const double C14556 = C13239 * C1186;
    const double C14724 = C13239 * C1051;
    const double C14930 = C13239 * C1188;
    const double C15072 = C13239 * C1580;
    const double C15660 = C13239 * C1185;
    const double C15936 = C13239 * C2264;
    const double C19310 = C13239 * C437;
    const double C19304 = C13239 * C432;
    const double C19300 = C13239 * C436;
    const double C19296 = C13239 * C433;
    const double C19294 = C13239 * C435;
    const double C19288 = C13239 * C434;
    const double C19610 = C13239 * C438;
    const double C21024 = C13239 * C1885;
    const double C21018 = C13239 * C1884;
    const double C21366 = C13239 * C1883;
    const double C4760 = C4747 + C4612;
    const double C4759 = C4745 + C4611;
    const double C4758 = C4741 + C4742;
    const double C4757 = C4739 + C4607;
    const double C4756 = C4737 + C4608;
    const double C4755 = C4733 + C4734;
    const double C4754 = C4731 + C4606;
    const double C4753 = C4729 + C4605;
    const double C5293 = C5282 + C4907;
    const double C5292 = C5280 + C4906;
    const double C5291 = C5277 + C4900;
    const double C5290 = C5275 + C4899;
    const double C5499 = C5494 + C5495;
    const double C5498 = C5492 + C4736;
    const double C5639 = C5631 + C5632;
    const double C5638 = C5629 + C5279;
    const double C5637 = C5627 + C4904;
    const double C5636 = C5625 + C4903;
    const double C6020 = C6017 + C5634;
    const double C6476 = C6472 + C4909;
    const double C6475 = C6470 + C4908;
    const double C6694 = C6690 + C6316;
    const double C6693 = C6688 + C6315;
    const double C9249 = C9236 + C4914;
    const double C9248 = C9234 + C4913;
    const double C9247 = C9231 + C6584;
    const double C9246 = C9229 + C4910;
    const double C9245 = C9227 + C4905;
    const double C9244 = C9225 + C6317;
    const double C9243 = C9223 + C4902;
    const double C9242 = C9221 + C4901;
    const double C10548 = C10543 + C10544;
    const double C10547 = C10541 + C6318;
    const double C10705 = C10702 + C6585;
    const double C10919 = C10916 + C6319;
    const double C13453 = C13429 + C13430;
    const double C13451 = C13424 + C13248;
    const double C13448 = C13414 + C13415;
    const double C13447 = C13412 + C13247;
    const double C14140 = C14122 + C13628;
    const double C14399 = C14388 + C13421;
    const double C14578 = C14564 + C14565;
    const double C14577 = C14562 + C14127;
    const double C14575 = C14558 + C13635;
    const double C15940 = C15934 + C15456;
    const double C19321 = C19302 + C13642;
    const double C19319 = C19298 + C13637;
    const double C19316 = C19292 + C13633;
    const double C19315 = C19290 + C13630;
    const double C21029 = C21020 + C15458;
    const double C30082 = ae * C30081;
    const double C130 =
        (3 * C30049 + C30015 * C30081 + (2 * C30038 + C30015 * C30066) * ae) /
        C29968;
    const double C287 = (C30188 * C30081) / C29968;
    const double C448 = (C30247 * C30081) / C29968;
    const double C5016 = C30696 * C297;
    const double C13437 = C13236 * C297;
    const double C13783 = C13235 * C297;
    const double C5295 = C5287 + C4912;
    const double C14143 = C14130 + C13639;
    const double C9467 = C30696 * C458;
    const double C19307 = C13236 * C458;
    const double C19611 = C13235 * C458;
    const double C30176 = C30148 + C30174;
    const double C30124 = ae * C30122;
    const double C30123 = C30015 * C30122;
    const double C30135 = 4 * C30122;
    const double C30218 = C30188 * C30122;
    const double C30277 = C30247 * C30122;
    const double C288 = (C30081 + C30122 * C30195) / C29968;
    const double C449 = (C30081 + C30122 * C30254) / C29968;
    const double C298 =
        (2 * (2 * ae * (C30040 + C30064 * C30195) + C30015 * C30210) + C30213 +
         C30213 +
         C30015 * (C30210 + C30214 + C30214 +
                   C30015 * (2 * ae * (C30064 + C30100 * C30195) +
                             C30015 * (C30107 + C30157 * C30195)))) /
        C29971;
    const double C1069 = C118 * C1056;
    const double C1329 = C116 * C1056;
    const double C4750 = C4602 * C1056;
    const double C13444 = C13240 * C1056;
    const double C13432 = C13242 * C1056;
    const double C1215 = C118 * C1196;
    const double C1481 = C116 * C1196;
    const double C4911 = C4602 * C1196;
    const double C14138 = C13240 * C1196;
    const double C14132 = C13242 * C1196;
    const double C855 =
        (2 * (2 * ae * C30247 * C30216 + C30015 * C30349) + C30352 + C30352 +
         C30015 *
             (C30349 + C30353 + C30353 +
              C30015 * (2 * ae * C30247 * C30307 + C30015 * C30247 * C30308))) /
        C29971;
    const double C9626 = C9623 + C4915;
    const double C15664 = C15658 + C13640;
    const double C459 =
        (2 * (2 * ae * (C30040 + C30064 * C30254) + C30015 * C30269) + C30272 +
         C30272 +
         C30015 * (C30269 + C30273 + C30273 +
                   C30015 * (2 * ae * (C30064 + C30100 * C30254) +
                             C30015 * (C30107 + C30157 * C30254)))) /
        C29971;
    const double C1901 = C118 * C1888;
    const double C2165 = C116 * C1888;
    const double C9239 = C4602 * C1888;
    const double C15801 = C13242 * C1888;
    const double C19312 = C13240 * C1888;
    const double C4751 = C30696 * C1062;
    const double C14723 = C13236 * C1062;
    const double C5756 = C5753 + C4744;
    const double C14400 = C14390 + C14391;
    const double C5912 = C5909 + C5284;
    const double C15076 = C15070 + C14570;
    const double C9240 = C30696 * C1894;
    const double C21365 = C13236 * C1894;
    const double C10812 = C10809 + C9233;
    const double C21030 = C21022 + C15461;
    const double C30179 = ae * C30177;
    const double C30178 = C30015 * C30177;
    const double C30231 = C30177 * C30195;
    const double C30290 = C30177 * C30254;
    const double C30310 = C30188 * C30177;
    const double C30329 = C30247 * C30177;
    const double C30408 = C30404 + C30405;
    const double C30414 = ae * C30412;
    const double C1220 = C118 * C1201;
    const double C4916 = C4602 * C1201;
    const double C15663 = C13242 * C1201;
    const double C30454 = C30450 + C30451;
    const double C30445 = ae * C30443;
    const double C2269 = (2 * C30350 + C30247 * C30443) / C29968;
    const double C30383 = ae * C30382;
    const double C5750 = (4 * C30370 + C30188 * C30382) / C29968;
    const double C5906 = (C30247 * C30382) / C29968;
    const double C1588 =
        (C30247 * C30407 + C30420 + C30420 +
         C30015 *
             (2 * ae * C30247 *
                  (2 * C30307 + C30188 * (C30100 + C30150 * C30195)) +
              C30015 * C30247 *
                  (2 * C30308 +
                   C30188 * (C30157 + (C30133 * C30134 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                          C30022 * C30195)))) /
        C29971;
    const double C30437 = ae * C30436;
    const double C10806 = (4 * C30424 + C30247 * C30436) / C29968;
    const double C2272 =
        (2 * C30349 + C30247 * C30442 + C30462 + C30462 +
         C30015 *
             (2 * ae *
                  (2 * C30355 + C30247 * (C30307 + C30188 * C30150 * C30254)) +
              C30015 * (2 * C30356 +
                        C30247 * (C30308 +
                                  C30188 *
                                      (C30133 * C30134 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                      C30022 * C30254)))) /
        C29971;
    const double C10704 = C4602 * C10699;
    const double C15463 = C13242 * C10699;
    const double C13457 = C13441 + C13442;
    const double C13454 = C13434 + C13254;
    const double C13452 = C13426 + C13427;
    const double C13450 = C13422 + C13249;
    const double C13449 = C13417 + C13418;
    const double C13446 = C13410 + C13246;
    const double C14145 = C14136 + C13645;
    const double C14142 = C14128 + C13638;
    const double C14141 = C14124 + C13629;
    const double C14401 = C14393 + C14394;
    const double C14398 = C14386 + C13420;
    const double C14579 = C14567 + C14568;
    const double C14576 = C14560 + C14126;
    const double C14574 = C14556 + C13634;
    const double C14729 = C14724 + C13433;
    const double C14935 = C14930 + C14133;
    const double C15077 = C15072 + C14571;
    const double C15665 = C15660 + C13641;
    const double C15941 = C15936 + C15457;
    const double C19325 = C19310 + C13648;
    const double C19322 = C19304 + C13647;
    const double C19320 = C19300 + C13643;
    const double C19318 = C19296 + C13636;
    const double C19317 = C19294 + C13632;
    const double C19314 = C19288 + C13631;
    const double C21031 = C21024 + C15460;
    const double C21028 = C21018 + C15459;
    const double C21371 = C21366 + C15800;
    const double C4769 = C4760 + C4612;
    const double C4768 = C4759 + C4611;
    const double C4767 = C4758 + C4742;
    const double C4766 = C4757 + C4607;
    const double C4765 = C4756 + C4608;
    const double C4764 = C4755 + C4734;
    const double C4763 = C4754 + C4606;
    const double C4762 = C4753 + C4605;
    const double C5299 = C5293 + C4907;
    const double C5298 = C5292 + C4906;
    const double C5297 = C5291 + C4900;
    const double C5296 = C5290 + C4899;
    const double C5501 = C5499 + C5495;
    const double C5500 = C5498 + C4736;
    const double C5643 = C5639 + C5632;
    const double C5642 = C5638 + C5279;
    const double C5641 = C5637 + C4904;
    const double C5640 = C5636 + C4903;
    const double C6021 = C6020 + C5634;
    const double C6478 = C6476 + C4909;
    const double C6477 = C6475 + C4908;
    const double C6696 = C6694 + C6316;
    const double C6695 = C6693 + C6315;
    const double C9258 = C9249 + C4914;
    const double C9257 = C9248 + C4913;
    const double C9256 = C9247 + C6584;
    const double C9255 = C9246 + C4910;
    const double C9254 = C9245 + C4905;
    const double C9253 = C9244 + C6317;
    const double C9252 = C9243 + C4902;
    const double C9251 = C9242 + C4901;
    const double C10550 = C10548 + C10544;
    const double C10549 = C10547 + C6318;
    const double C10706 = C10705 + C6585;
    const double C10920 = C10919 + C6319;
    const double C13465 = C13453 + C13430;
    const double C13463 = C13451 + C13248;
    const double C13460 = C13448 + C13415;
    const double C13459 = C13447 + C13247;
    const double C14146 = C14140 + C13628;
    const double C14403 = C14399 + C13421;
    const double C14584 = C14578 + C14565;
    const double C14583 = C14577 + C14127;
    const double C14581 = C14575 + C13635;
    const double C15942 = C15940 + C15456;
    const double C19333 = C19321 + C13642;
    const double C19331 = C19319 + C13637;
    const double C19328 = C19316 + C13633;
    const double C19327 = C19315 + C13630;
    const double C21033 = C21029 + C15458;
    const double C137 =
        (3 * (C30044 + C30047 + C30047 + C30015 * C30075) + C30082 + C30082 +
         C30015 *
             (2 * C30075 + C30079 + C30079 +
              C30015 * (C30070 + C30074 + C30074 +
                        C30015 * (2 * ae * C30064 +
                                  C30015 *
                                      (C30054 * C30055 +
                                       C30019 * bs[6] * std::pow(C30013, 6)) *
                                      C30022)))) /
        C29971;
    const double C153 = C114 * C130;
    const double C151 = C116 * C130;
    const double C149 = C118 * C130;
    const double C4616 = C4602 * C130;
    const double C13260 = C13240 * C130;
    const double C13258 = C13242 * C130;
    const double C315 = C116 * C287;
    const double C310 = C118 * C287;
    const double C588 = C114 * C287;
    const double C4614 = C4602 * C287;
    const double C13257 = C13240 * C287;
    const double C13255 = C13242 * C287;
    const double C476 = C116 * C448;
    const double C471 = C118 * C448;
    const double C694 = C114 * C448;
    const double C5126 = C4602 * C448;
    const double C13646 = C13242 * C448;
    const double C13924 = C13240 * C448;
    const double C5301 = C5295 + C4912;
    const double C14149 = C14143 + C13639;
    const double C30125 = C30089 + C30123;
    const double C30223 = ae * C30218;
    const double C850 = (C30247 * C30218) / C29968;
    const double C30282 = ae * C30277;
    const double C318 = C116 * C288;
    const double C311 = C118 * C288;
    const double C4613 = C4602 * C288;
    const double C13439 = C13242 * C288;
    const double C13786 = C13240 * C288;
    const double C479 = C116 * C449;
    const double C472 = C118 * C449;
    const double C8998 = C4602 * C449;
    const double C13649 = C13242 * C449;
    const double C19614 = C13240 * C449;
    const double C5018 = C30696 * C298;
    const double C13440 = C13236 * C298;
    const double C4761 = C4749 + C4750;
    const double C14728 = C14722 + C13432;
    const double C5294 = C5285 + C4911;
    const double C14934 = C14928 + C14132;
    const double C14135 = C13236 * C855;
    const double C24989 = C30696 * C855;
    const double C9627 = C9626 + C4915;
    const double C15666 = C15664 + C13640;
    const double C9469 = C30696 * C459;
    const double C19309 = C13236 * C459;
    const double C9250 = C9238 + C9239;
    const double C21370 = C21364 + C15801;
    const double C5757 = C5756 + C4744;
    const double C14404 = C14400 + C14391;
    const double C5913 = C5912 + C5284;
    const double C15078 = C15076 + C14570;
    const double C10813 = C10812 + C9233;
    const double C21034 = C21030 + C15461;
    const double C30180 = C30136 + C30178;
    const double C30236 = C30122 + C30231;
    const double C30295 = C30122 + C30290;
    const double C30317 = ae * C30310;
    const double C30357 = C30247 * C30310;
    const double C2053 = (C30218 + C30310 * C30254) / C29968;
    const double C30336 = ae * C30329;
    const double C30409 = ae * C30408;
    const double C1061 = (3 * C30211 + C30188 * C30408) / C29968;
    const double C1585 = (C30247 * C30408) / C29968;
    const double C1478 =
        (2 * (2 * ae * C30247 * C30234 + C30015 * C30411) + C30414 + C30414 +
         C30015 *
             (C30411 + C30415 + C30415 +
              C30015 * (2 * ae * C30247 * (C30100 + C30150 * C30195) +
                        C30015 * C30247 *
                            (C30157 + (C30133 * C30134 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                          C30022 * C30195)))) /
        C29971;
    const double C30455 = ae * C30454;
    const double C1893 = (3 * C30270 + C30247 * C30454) / C29968;
    const double C2054 =
        (2 * (2 * ae * (C30216 + C30307 * C30254) + C30015 * C30442) + C30445 +
         C30445 +
         C30015 * (C30442 + C30446 + C30446 +
                   C30015 * (2 * ae * (C30307 + C30188 * C30150 * C30254) +
                             C30015 * (C30308 + C30188 *
                                                    (C30133 * C30134 +
                                                     C30019 * bs[8] *
                                                         std::pow(C30013, 8)) *
                                                    C30022 * C30254)))) /
        C29971;
    const double C2276 = C118 * C2269;
    const double C9625 = C4602 * C2269;
    const double C15803 = C13242 * C2269;
    const double C1067 =
        (3 * C30210 + C30188 * (2 * C30217 + C30188 * C30235) + C30383 +
         C30383 +
         C30015 *
             (2 * ae *
                  (3 * C30234 +
                   C30188 *
                       (2 * C30307 + C30188 * (C30100 + C30150 * C30195))) +
              C30015 * (3 * C30235 +
                        C30188 * (2 * C30308 +
                                  C30188 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30195))))) /
        C29971;
    const double C5755 = C4602 * C5750;
    const double C14397 = C13242 * C5750;
    const double C5911 = C4602 * C5906;
    const double C15075 = C13242 * C5906;
    const double C1899 =
        (3 * C30269 + C30247 * (2 * C30276 + C30247 * C30294) + C30437 +
         C30437 +
         C30015 *
             (2 * ae *
                  (3 * C30293 +
                   C30247 *
                       (2 * C30326 + C30247 * (C30100 + C30150 * C30254))) +
              C30015 * (3 * C30294 +
                        C30247 * (2 * C30327 +
                                  C30247 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30254))))) /
        C29971;
    const double C10811 = C4602 * C10806;
    const double C21027 = C13242 * C10806;
    const double C13469 = C13457 + C13442;
    const double C13466 = C13454 + C13254;
    const double C13464 = C13452 + C13427;
    const double C13462 = C13450 + C13249;
    const double C13461 = C13449 + C13418;
    const double C13458 = C13446 + C13246;
    const double C14151 = C14145 + C13645;
    const double C14148 = C14142 + C13638;
    const double C14147 = C14141 + C13629;
    const double C14405 = C14401 + C14394;
    const double C14402 = C14398 + C13420;
    const double C14585 = C14579 + C14568;
    const double C14582 = C14576 + C14126;
    const double C14580 = C14574 + C13634;
    const double C14731 = C14729 + C13433;
    const double C14937 = C14935 + C14133;
    const double C15079 = C15077 + C14571;
    const double C15667 = C15665 + C13641;
    const double C15943 = C15941 + C15457;
    const double C19337 = C19325 + C13648;
    const double C19334 = C19322 + C13647;
    const double C19332 = C19320 + C13643;
    const double C19330 = C19318 + C13636;
    const double C19329 = C19317 + C13632;
    const double C19326 = C19314 + C13631;
    const double C21035 = C21031 + C15460;
    const double C21032 = C21028 + C15459;
    const double C21373 = C21371 + C15800;
    const double C4778 = C4769 + C4748;
    const double C4777 = C4768 + C4746;
    const double C4776 = C4767 + C4743;
    const double C4775 = C4766 + C4740;
    const double C4774 = C4765 + C4738;
    const double C4773 = C4764 + C4735;
    const double C4772 = C4763 + C4732;
    const double C4771 = C4762 + C4730;
    const double C5305 = C5299 + C5283;
    const double C5304 = C5298 + C5281;
    const double C5303 = C5297 + C5278;
    const double C5302 = C5296 + C5276;
    const double C5503 = C5501 + C5496;
    const double C5502 = C5500 + C5493;
    const double C5647 = C5643 + C5633;
    const double C5646 = C5642 + C5630;
    const double C5645 = C5641 + C5628;
    const double C5644 = C5640 + C5626;
    const double C6022 = C6021 + C6018;
    const double C6480 = C6478 + C6473;
    const double C6479 = C6477 + C6471;
    const double C6698 = C6696 + C6691;
    const double C6697 = C6695 + C6689;
    const double C9267 = C9258 + C9237;
    const double C9266 = C9257 + C9235;
    const double C9265 = C9256 + C9232;
    const double C9264 = C9255 + C9230;
    const double C9263 = C9254 + C9228;
    const double C9262 = C9253 + C9226;
    const double C9261 = C9252 + C9224;
    const double C9260 = C9251 + C9222;
    const double C10552 = C10550 + C10545;
    const double C10551 = C10549 + C10542;
    const double C10707 = C10706 + C10703;
    const double C10921 = C10920 + C10917;
    const double C13477 = C13465 + C13431;
    const double C13475 = C13463 + C13425;
    const double C13472 = C13460 + C13416;
    const double C13471 = C13459 + C13413;
    const double C14152 = C14146 + C14123;
    const double C14407 = C14403 + C14389;
    const double C14590 = C14584 + C14566;
    const double C14589 = C14583 + C14563;
    const double C14587 = C14581 + C14559;
    const double C15944 = C15942 + C15935;
    const double C19345 = C19333 + C19303;
    const double C19343 = C19331 + C19299;
    const double C19340 = C19328 + C19293;
    const double C19339 = C19327 + C19291;
    const double C21037 = C21033 + C21021;
    const double C5020 = C5015 + C4614;
    const double C13788 = C13782 + C13257;
    const double C13455 = C13436 + C13255;
    const double C9471 = C9466 + C5126;
    const double C19323 = C19306 + C13646;
    const double C19616 = C19610 + C13924;
    const double C5307 = C5301 + C5288;
    const double C14155 = C14149 + C14131;
    const double C30126 = C30125 + C30112;
    const double C299 =
        (3 * (C30201 + C30205 + C30205 + C30015 * C30227) + C30223 + C30223 +
         C30015 * (2 * C30227 + C30224 + C30224 +
                   C30015 * (C30217 + C30225 + C30225 +
                             C30015 * (2 * ae * C30188 * C30100 +
                                       C30015 * C30188 * C30157)))) /
        C29971;
    const double C865 = C116 * C850;
    const double C861 = C118 * C850;
    const double C5127 = C4602 * C850;
    const double C13644 = C13242 * C850;
    const double C13926 = C13240 * C850;
    const double C460 =
        (3 * (C30260 + C30264 + C30264 + C30015 * C30286) + C30282 + C30282 +
         C30015 * (2 * C30286 + C30283 + C30283 +
                   C30015 * (C30276 + C30284 + C30284 +
                             C30015 * (2 * ae * C30247 * C30100 +
                                       C30015 * C30247 * C30157)))) /
        C29971;
    const double C5021 = C5017 + C4613;
    const double C13456 = C13438 + C13439;
    const double C9472 = C9468 + C8998;
    const double C19324 = C19308 + C13649;
    const double C4770 = C4761 + C4750;
    const double C14730 = C14728 + C13432;
    const double C5300 = C5294 + C4911;
    const double C14936 = C14934 + C14132;
    const double C9628 = C9627 + C9624;
    const double C15668 = C15666 + C15659;
    const double C9259 = C9250 + C9239;
    const double C21372 = C21370 + C15801;
    const double C5758 = C5757 + C5754;
    const double C14408 = C14404 + C14392;
    const double C5914 = C5913 + C5910;
    const double C15080 = C15078 + C15071;
    const double C10814 = C10813 + C10810;
    const double C21038 = C21034 + C21023;
    const double C30181 = C30180 + C30162;
    const double C30241 = ae * C30236;
    const double C1325 = (2 * C30218 + C30188 * C30236) / C29968;
    const double C1477 = (C30247 * C30236) / C29968;
    const double C30300 = ae * C30295;
    const double C2161 = (2 * C30277 + C30247 * C30295) / C29968;
    const double C30362 = ae * C30357;
    const double C2058 = C118 * C2053;
    const double C9367 = C4602 * C2053;
    const double C13651 = C13242 * C2053;
    const double C1326 =
        (2 * (2 * ae * (2 * C30216 + C30188 * C30234) + C30015 * C30407) +
         C30409 + C30409 +
         C30015 *
             (C30407 + C30406 + C30406 +
              C30015 *
                  (2 * ae * (2 * C30307 + C30188 * (C30100 + C30150 * C30195)) +
                   C30015 * (2 * C30308 +
                             C30188 * (C30157 +
                                       (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30195))))) /
        C29971;
    const double C1074 = C118 * C1061;
    const double C4752 = C4602 * C1061;
    const double C14727 = C13242 * C1061;
    const double C1592 = C118 * C1585;
    const double C5289 = C4602 * C1585;
    const double C14933 = C13242 * C1585;
    const double C2162 =
        (2 * (2 * ae * (2 * C30275 + C30247 * C30293) + C30015 * C30453) +
         C30455 + C30455 +
         C30015 *
             (C30453 + C30452 + C30452 +
              C30015 *
                  (2 * ae * (2 * C30326 + C30247 * (C30100 + C30150 * C30254)) +
                   C30015 * (2 * C30327 +
                             C30247 * (C30157 +
                                       (C30133 * C30134 +
                                        C30019 * bs[8] * std::pow(C30013, 8)) *
                                           C30022 * C30254))))) /
        C29971;
    const double C1906 = C118 * C1893;
    const double C9241 = C4602 * C1893;
    const double C21369 = C13242 * C1893;
    const double C13481 = C13469 + C13443;
    const double C13478 = C13466 + C13435;
    const double C13476 = C13464 + C13428;
    const double C13474 = C13462 + C13423;
    const double C13473 = C13461 + C13419;
    const double C13470 = C13458 + C13411;
    const double C14157 = C14151 + C14137;
    const double C14154 = C14148 + C14129;
    const double C14153 = C14147 + C14125;
    const double C14409 = C14405 + C14395;
    const double C14406 = C14402 + C14387;
    const double C14591 = C14585 + C14569;
    const double C14588 = C14582 + C14561;
    const double C14586 = C14580 + C14557;
    const double C14733 = C14731 + C14725;
    const double C14939 = C14937 + C14931;
    const double C15081 = C15079 + C15073;
    const double C15669 = C15667 + C15661;
    const double C15945 = C15943 + C15937;
    const double C19349 = C19337 + C19311;
    const double C19346 = C19334 + C19305;
    const double C19344 = C19332 + C19301;
    const double C19342 = C19330 + C19297;
    const double C19341 = C19329 + C19295;
    const double C19338 = C19326 + C19289;
    const double C21039 = C21035 + C21025;
    const double C21036 = C21032 + C21019;
    const double C21375 = C21373 + C21367;
    const double C4787 = C4778 * C30948;
    const double C24710 = C4778 * C18991;
    const double C4786 = C4777 * C30948;
    const double C24707 = C4777 * C18991;
    const double C4785 = C4776 * C30948;
    const double C25839 = C4776 * C18991;
    const double C4784 = C4775 * C30948;
    const double C24705 = C4775 * C18991;
    const double C4783 = C4774 * C30948;
    const double C24703 = C4774 * C18991;
    const double C4782 = C4773 * C30948;
    const double C25552 = C4773 * C18991;
    const double C4781 = C4772 * C30948;
    const double C24702 = C4772 * C18991;
    const double C4780 = C4771 * C30948;
    const double C24699 = C4771 * C18991;
    const double C5311 = C5305 * C30948;
    const double C24706 = C5305 * C18992;
    const double C26035 = C5305 * C18991;
    const double C5310 = C5304 * C30948;
    const double C24704 = C5304 * C18992;
    const double C25320 = C5304 * C18991;
    const double C5309 = C5303 * C30948;
    const double C24700 = C5303 * C18992;
    const double C25319 = C5303 * C18991;
    const double C5308 = C5302 * C30948;
    const double C24701 = C5302 * C18992;
    const double C25704 = C5302 * C18991;
    const double C5505 = C5503 * C30948;
    const double C5504 = C5502 * C30948;
    const double C25555 = C5502 * C18991;
    const double C5651 = C5647 * C30948;
    const double C26166 = C5647 * C18992;
    const double C5650 = C5646 * C30948;
    const double C25553 = C5646 * C18992;
    const double C26167 = C5646 * C18991;
    const double C5649 = C5645 * C30948;
    const double C25707 = C5645 * C18991;
    const double C25705 = C5645 * C18992;
    const double C5648 = C5644 * C30948;
    const double C25318 = C5644 * C18992;
    const double C25702 = C5644 * C18991;
    const double C6023 = C6022 * C30948;
    const double C25554 = C6022 * C18992;
    const double C6482 = C6480 * C30948;
    const double C25321 = C6480 * C18992;
    const double C26737 = C6480 * C18991;
    const double C6481 = C6479 * C30948;
    const double C26034 = C6479 * C18992;
    const double C6700 = C6698 * C30948;
    const double C25703 = C6698 * C18992;
    const double C26999 = C6698 * C18991;
    const double C6699 = C6697 * C30948;
    const double C25706 = C6697 * C18992;
    const double C26736 = C10707 * C18992;
    const double C26998 = C10921 * C18992;
    const double C5022 = C5020 + C4614;
    const double C13790 = C13788 + C13257;
    const double C13467 = C13455 + C13255;
    const double C9473 = C9471 + C5126;
    const double C19335 = C19323 + C13646;
    const double C19618 = C19616 + C13924;
    const double C5313 = C5307 * C30948;
    const double C24708 = C5307 * C18992;
    const double C25323 = C5307 * C18991;
    const double C30127 = ae * C30126;
    const double C131 =
        (4 * C30081 + C30015 * C30126 + (3 * C30066 + C30015 * C30109) * ae) /
        C29968;
    const double C289 = (C30188 * C30126) / C29968;
    const double C450 = (C30247 * C30126) / C29968;
    const double C13785 = C13236 * C299;
    const double C24990 = C24988 + C5127;
    const double C14144 = C14134 + C13644;
    const double C19613 = C13236 * C460;
    const double C5023 = C5021 + C4613;
    const double C13468 = C13456 + C13439;
    const double C9474 = C9472 + C8998;
    const double C19336 = C19324 + C13649;
    const double C4779 = C4770 + C4751;
    const double C14732 = C14730 + C14723;
    const double C5306 = C5300 + C5286;
    const double C14938 = C14936 + C14929;
    const double C25322 = C9628 * C18992;
    const double C9268 = C9259 + C9240;
    const double C21374 = C21372 + C21365;
    const double C5759 = C5758 * C30948;
    const double C5915 = C5914 * C30948;
    const double C25838 = C5914 * C18992;
    const double C30183 = ae * C30181;
    const double C30182 = C30015 * C30181;
    const double C30309 = C30188 * C30181;
    const double C30328 = C30247 * C30181;
    const double C290 = (C30126 + C30181 * C30195) / C29968;
    const double C451 = (C30126 + C30181 * C30254) / C29968;
    const double C300 =
        (3 * (C30210 + C30214 + C30214 + C30015 * C30245) + C30241 + C30241 +
         C30015 *
             (2 * C30245 + C30242 + C30242 +
              C30015 * (C30235 + C30243 + C30243 +
                        C30015 * (2 * ae * (C30100 + C30150 * C30195) +
                                  C30015 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30195))))) /
        C29971;
    const double C1330 = C118 * C1325;
    const double C5019 = C4602 * C1325;
    const double C13445 = C13242 * C1325;
    const double C1482 = C118 * C1477;
    const double C5128 = C4602 * C1477;
    const double C14139 = C13242 * C1477;
    const double C461 =
        (3 * (C30269 + C30273 + C30273 + C30015 * C30304) + C30300 + C30300 +
         C30015 *
             (2 * C30304 + C30301 + C30301 +
              C30015 * (C30294 + C30302 + C30302 +
                        C30015 * (2 * ae * (C30100 + C30150 * C30254) +
                                  C30015 * (C30157 + (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                         C30022 * C30254))))) /
        C29971;
    const double C2166 = C118 * C2161;
    const double C9470 = C4602 * C2161;
    const double C19313 = C13242 * C2161;
    const double C856 =
        (3 * (C30349 + C30353 + C30353 + C30015 * C30366) + C30362 + C30362 +
         C30015 *
             (2 * C30366 + C30363 + C30363 +
              C30015 * (C30356 + C30364 + C30364 +
                        C30015 * (2 * ae * C30247 * C30188 * C30150 +
                                  C30015 * C30247 * C30188 *
                                      (C30133 * C30134 +
                                       C30019 * bs[8] * std::pow(C30013, 8)) *
                                      C30022)))) /
        C29971;
    const double C5024 = C5022 + C5016;
    const double C13792 = C13790 + C13783;
    const double C13479 = C13467 + C13437;
    const double C9475 = C9473 + C9467;
    const double C19347 = C19335 + C19307;
    const double C19620 = C19618 + C19611;
    const double C138 =
        (4 * (2 * C30075 + C30079 + C30079 + C30015 * C30118) + C30127 +
         C30127 +
         C30015 * (3 * C30118 + C30124 + C30124 +
                   C30015 * (2 * C30114 + C30120 + C30120 +
                             C30015 * (C30107 + C30113 + C30113 +
                                       C30015 * (2 * ae * C30100 +
                                                 C30015 *
                                                     (C30087 * C30088 +
                                                      C30019 * bs[7] *
                                                          std::pow(C30021, 7)) *
                                                     C30022))))) /
        C29971;
    const double C154 = C116 * C131;
    const double C150 = C118 * C131;
    const double C13261 = C13242 * C131;
    const double C314 = C118 * C289;
    const double C589 = C116 * C289;
    const double C4617 = C4602 * C289;
    const double C13262 = C13240 * C289;
    const double C13256 = C13242 * C289;
    const double C475 = C118 * C450;
    const double C695 = C116 * C450;
    const double C8999 = C4602 * C450;
    const double C13925 = C13242 * C450;
    const double C18994 = C13240 * C450;
    const double C24991 = C24990 + C5127;
    const double C14150 = C14144 + C13644;
    const double C5025 = C5023 + C5018;
    const double C13480 = C13468 + C13440;
    const double C9476 = C9474 + C9469;
    const double C19348 = C19336 + C19309;
    const double C4788 = C4779 * C30948;
    const double C5312 = C5306 * C30948;
    const double C24709 = C5306 * C18992;
    const double C30184 = C30135 + C30182;
    const double C30316 = ae * C30309;
    const double C851 = (C30247 * C30309) / C29968;
    const double C30335 = ae * C30328;
    const double C319 = C118 * C290;
    const double C4618 = C4602 * C290;
    const double C13787 = C13242 * C290;
    const double C480 = C118 * C451;
    const double C9000 = C4602 * C451;
    const double C19615 = C13242 * C451;
    const double C5026 = C5024 * C30948;
    const double C24987 = C5024 * C18991;
    const double C13789 = C13784 + C13256;
    const double C19617 = C19612 + C13925;
    const double C24992 = C24991 + C24989;
    const double C14156 = C14150 + C14135;
    const double C5027 = C5025 * C30948;
    const double C30185 = C30184 + C30170;
    const double C586 =
        (4 * (2 * C30227 + C30224 + C30224 + C30015 * C30323) + C30316 +
         C30316 +
         C30015 * (3 * C30323 + C30317 + C30317 +
                   C30015 * (2 * C30321 + C30318 + C30318 +
                             C30015 * (C30308 + C30319 + C30319 +
                                       C30015 * (2 * ae * C30188 * C30150 +
                                                 C30015 * C30188 *
                                                     (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                     C30022))))) /
        C29971;
    const double C866 = C118 * C851;
    const double C13927 = C13242 * C851;
    const double C24552 = C4602 * C851;
    const double C692 =
        (4 * (2 * C30286 + C30283 + C30283 + C30015 * C30342) + C30335 +
         C30335 +
         C30015 * (3 * C30342 + C30336 + C30336 +
                   C30015 * (2 * C30340 + C30337 + C30337 +
                             C30015 * (C30327 + C30338 + C30338 +
                                       C30015 * (2 * ae * C30247 * C30150 +
                                                 C30015 * C30247 *
                                                     (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                     C30022))))) /
        C29971;
    const double C13791 = C13789 + C13256;
    const double C19619 = C19617 + C13925;
    const double C24993 = C24992 * C18992;
    const double C30186 = ae * C30185;
    const double C132 =
        (5 * C30126 + C30015 * C30185 + (4 * C30109 + C30015 * C30167) * ae) /
        C29968;
    const double C585 = (C30188 * C30185) / C29968;
    const double C691 = (C30247 * C30185) / C29968;
    const double C13793 = C13791 + C13785;
    const double C19621 = C19619 + C19613;
    const double C139 =
        (5 * (3 * C30118 + C30124 + C30124 + C30015 * C30176) + C30186 +
         C30186 +
         C30015 *
             (4 * C30176 + C30183 + C30183 +
              C30015 *
                  (3 * C30171 + C30179 + C30179 +
                   C30015 * (2 * C30165 + C30173 + C30173 +
                             C30015 * (C30157 + C30164 + C30164 +
                                       C30015 * (2 * ae * C30150 +
                                                 C30015 *
                                                     (C30133 * C30134 +
                                                      C30019 * bs[8] *
                                                          std::pow(C30013, 8)) *
                                                     C30022)))))) /
        C29971;
    const double C155 = C118 * C132;
    const double C590 = C118 * C585;
    const double C13263 = C13242 * C585;
    const double C696 = C118 * C691;
    const double C18995 = C13242 * C691;
    d2ee[0] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C30809 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C30816 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C2742) *
                     C30727 +
                 (((C13474 + C13475) * C30948 * C13237 +
                   (C13476 + C13477) * C30948 * C13238) *
                      C30768 * C30816 -
                  ((C13475 + C13474) * C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C30809 -
                  ((C14732 + C14733) * C30948 * C13238 +
                   (C13477 + C13476) * C30948 * C13237) *
                      C30768 * C2742) *
                     C30736 +
                 (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C30948 * C13237 +
                   (C13478 + C13479) * C30948 * C13238) *
                      C30768 * C30809 -
                  ((C13480 + C13481) * C30948 * C13238 +
                   (C13479 + C13478) * C30948 * C13237) *
                      C30768 * C30816 +
                  ((C13481 + C13480) * C30948 * C13237 +
                   (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                    C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                       C30948 * C13238) *
                      C30768 * C2742) *
                     C2745)) /
               (p * q * std::sqrt(p + q));
    d2ee[1] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30995 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C30809 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30995) *
                      C30816 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C30995 -
                   ((C15080 + C15081) * C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C30855) *
                      C2742) *
                     C2482 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30995) *
                      C30809 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30995 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C30855) *
                      C30816 +
                  (((C14939 + C14938) * C30948 * C13237 +
                    (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                     C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                        C30948 * C13238) *
                       C30855 -
                   ((C14732 + C14733) * C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30995) *
                      C2742) *
                     C30733)) /
               (p * q * std::sqrt(p + q));
    d2ee[2] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C31069 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C31065 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C31055 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C30768 * C31035) *
                     C2482 +
                 (((C13474 + C13475) * C30948 * C13237 +
                   (C13476 + C13477) * C30948 * C13238) *
                      C30768 * C31065 -
                  ((C13475 + C13474) * C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C31069 -
                  ((C14732 + C14733) * C30948 * C13238 +
                   (C13477 + C13476) * C30948 * C13237) *
                      C30768 * C31055 +
                  ((C14733 + C14732) * C30948 * C13237 +
                   (C13239 * C1054 + C14726 + C14726 + C13235 * C1066 +
                    C13241 * C1055 + C14727 + C14727 + C13236 * C1067) *
                       C30948 * C13238) *
                      C30768 * C31035) *
                     C30733)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C2374 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C30813) *
                     C31068 +
                 (((C13474 + C13475) * C30948 * C13237 +
                   (C13476 + C13477) * C30948 * C13238) *
                      C30768 * C30813 -
                  ((C13475 + C13474) * C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C2374) *
                     C31061 +
                 (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C30948 * C13237 +
                   (C13478 + C13479) * C30948 * C13238) *
                      C30768 * C2374 -
                  ((C13480 + C13481) * C30948 * C13238 +
                   (C13479 + C13478) * C30948 * C13237) *
                      C30768 * C30813) *
                     C31048 +
                 (((C13792 + C13793) * C30948 * C13237 +
                   (C13239 * C278 + C13786 + C13786 + C13235 * C298 +
                    C13241 * C280 + C13787 + C13787 + C13236 * C300) *
                       C30948 * C13238) *
                      C30768 * C30813 -
                  ((C13793 + C13792) * C30948 * C13238 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C30948 * C13237) *
                      C30768 * C2374) *
                     C31029)) /
                   (p * q * std::sqrt(p + q)) +
               (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C31063 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C2374 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C31052 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C31063 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C31028) *
                      C30813) *
                     C2482 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C31052 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C31063 -
                   ((C15668 + C15669) * C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C31028) *
                      C2374 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C31063 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C31052 +
                   ((C15669 + C15668) * C30948 * C13237 +
                    (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                     C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                        C30948 * C13238) *
                       C31028) *
                      C30813) *
                     C30733)) /
                   (p * q * std::sqrt(p + q));
    d2ee[3] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30995 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C2374 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30995) *
                      C30813) *
                     C30727 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30995) *
                      C2374 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30995 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C30855) *
                      C30813) *
                     C30736 +
                 ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30995 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C2374 +
                  (((C14157 + C14156) * C30948 * C13237 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30995) *
                      C30813) *
                     C2745)) /
               (p * q * std::sqrt(p + q));
    d2ee[4] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C2374 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C30813) *
                     C31068 +
                 (((C13474 + C13475) * C30948 * C13237 +
                   (C13476 + C13477) * C30948 * C13238) *
                      C30768 * C30813 -
                  ((C13475 + C13474) * C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C2374) *
                     C31061 +
                 (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C30948 * C13237 +
                   (C13478 + C13479) * C30948 * C13238) *
                      C30768 * C2374 -
                  ((C13480 + C13481) * C30948 * C13238 +
                   (C13479 + C13478) * C30948 * C13237) *
                      C30768 * C30813) *
                     C31048 +
                 (((C13792 + C13793) * C30948 * C13237 +
                   (C13239 * C278 + C13786 + C13786 + C13235 * C298 +
                    C13241 * C280 + C13787 + C13787 + C13236 * C300) *
                       C30948 * C13238) *
                      C30768 * C30813 -
                  ((C13793 + C13792) * C30948 * C13238 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C30948 * C13237) *
                      C30768 * C2374) *
                     C31029)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C31069 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C31065 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C31055 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C30768 * C31035) *
                     C2482 +
                 (((C13474 + C13475) * C30948 * C13237 +
                   (C13476 + C13477) * C30948 * C13238) *
                      C30768 * C31065 -
                  ((C13475 + C13474) * C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C31069 -
                  ((C14732 + C14733) * C30948 * C13238 +
                   (C13477 + C13476) * C30948 * C13237) *
                      C30768 * C31055 +
                  ((C14733 + C14732) * C30948 * C13237 +
                   (C13239 * C1054 + C14726 + C14726 + C13235 * C1066 +
                    C13241 * C1055 + C14727 + C14727 + C13236 * C1067) *
                       C30948 * C13238) *
                      C30768 * C31035) *
                     C30733)) /
                   (p * q * std::sqrt(p + q));
    d2ee[5] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C3136 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C30809 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C3136) *
                      C30816 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C3136 -
                   ((C15080 + C15081) * C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C30855) *
                      C2742) *
                     C30980 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C3136) *
                      C30809 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C3136 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C30855) *
                      C30816 +
                  (((C14939 + C14938) * C30948 * C13237 +
                    (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                     C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                        C30948 * C13238) *
                       C30855 -
                   ((C14732 + C14733) * C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C3136) *
                      C2742) *
                     C30733)) /
               (p * q * std::sqrt(p + q));
    d2ee[6] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30851 -
                  ((C14152 + C14153) * C30948 * C13238 +
                   (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                    C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                       C30948 * C13237) *
                      C30858 +
                  ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                    C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                       C30948 * C13237 +
                   (C14586 + C14587) * C30948 * C13238) *
                      C3644) *
                     C30809 +
                 (((C14153 + C14152) * C30948 * C13237 +
                   (C14588 + C14589) * C30948 * C13238) *
                      C30858 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30851 -
                  ((C14590 + C14591) * C30948 * C13238 +
                   (C14587 + C14586) * C30948 * C13237) *
                      C3644) *
                     C30816 +
                 (((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30851 -
                  ((C15080 + C15081) * C30948 * C13238 +
                   (C14589 + C14588) * C30948 * C13237) *
                      C30858 +
                  ((C14591 + C14590) * C30948 * C13237 +
                   (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                    C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                       C30948 * C13238) *
                      C3644) *
                     C2742) *
                C30722) /
               (p * q * std::sqrt(p + q));
    d2ee[7] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C3136 -
                  ((C14152 + C14153) * C30948 * C13238 +
                   (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                    C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                       C30948 * C13237) *
                      C30855) *
                     C31069 +
                 (((C14153 + C14152) * C30948 * C13237 +
                   (C14588 + C14589) * C30948 * C13238) *
                      C30855 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C3136) *
                     C31065 +
                 (((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C3136 -
                  ((C15080 + C15081) * C30948 * C13238 +
                   (C14589 + C14588) * C30948 * C13237) *
                      C30855) *
                     C31055 +
                 (((C15081 + C15080) * C30948 * C13237 +
                   (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                    C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                       C30948 * C13238) *
                      C30855 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C3136) *
                     C31035) *
                C30722) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C3136 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C2374 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C3136) *
                      C30813) *
                     C31059 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C3136) *
                      C2374 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C3136 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C30855) *
                      C30813) *
                     C31046 +
                 ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C3136 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C2374 +
                  (((C14157 + C14156) * C30948 * C13237 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C3136) *
                      C30813) *
                     C31019)) /
                   (p * q * std::sqrt(p + q)) +
               (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C31070 -
                  ((C14152 + C14153) * C30948 * C13238 +
                   (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                    C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                       C30948 * C13237) *
                      C31067 +
                  ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                    C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                       C30948 * C13237 +
                   (C14586 + C14587) * C30948 * C13238) *
                      C31058 -
                  ((C15944 + C15945) * C30948 * C13238 +
                   (C13241 * C1883 + C15458 + C15458 + C13236 * C1895 +
                    C13239 * C1884 + C15459 + C15459 + C13235 * C1896) *
                       C30948 * C13237) *
                      C31041) *
                     C2374 +
                 (((C14153 + C14152) * C30948 * C13237 +
                   (C14588 + C14589) * C30948 * C13238) *
                      C31067 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C31070 -
                  ((C14590 + C14591) * C30948 * C13238 +
                   (C14587 + C14586) * C30948 * C13237) *
                      C31058 +
                  ((C15945 + C15944) * C30948 * C13237 +
                   (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
                    C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                       C30948 * C13238) *
                      C31041) *
                     C30813) *
                C30722) /
                   (p * q * std::sqrt(p + q));
    d2ee[8] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30851 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30858 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C3644) *
                      C2374 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30858 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30851 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C3644) *
                      C30813) *
                     C30980 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30858 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30851 -
                   ((C15668 + C15669) * C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C3644) *
                      C2374 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30851 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C30858 +
                   ((C15669 + C15668) * C30948 * C13237 +
                    (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                     C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                        C30948 * C13238) *
                       C3644) *
                      C30813) *
                     C30733)) /
               (p * q * std::sqrt(p + q));
    d2ee[9] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C3136 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C2374 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C3136) *
                      C30813) *
                     C31059 +
                 ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C3136) *
                      C2374 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C3136 -
                   ((C14938 + C14939) * C30948 * C13238 +
                    (C14155 + C14154) * C30948 * C13237) *
                       C30855) *
                      C30813) *
                     C31046 +
                 ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C3136 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C2374 +
                  (((C14157 + C14156) * C30948 * C13237 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C3136) *
                      C30813) *
                     C31019)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C3136 -
                  ((C14152 + C14153) * C30948 * C13238 +
                   (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                    C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                       C30948 * C13237) *
                      C30855) *
                     C31069 +
                 (((C14153 + C14152) * C30948 * C13237 +
                   (C14588 + C14589) * C30948 * C13238) *
                      C30855 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C3136) *
                     C31065 +
                 (((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C3136 -
                  ((C15080 + C15081) * C30948 * C13238 +
                   (C14589 + C14588) * C30948 * C13237) *
                      C30855) *
                     C31055 +
                 (((C15081 + C15080) * C30948 * C13237 +
                   (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                    C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                       C30948 * C13238) *
                      C30855 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C3136) *
                     C31035) *
                C30722) /
                   (p * q * std::sqrt(p + q));
    d2ee[10] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C1318 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C1319 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C30768 * C1320 -
                   ((C14408 + C14409) * C30948 * C13238 +
                    (C14407 + C14406) * C30948 * C13237) *
                       C30768 * C31035) *
                      C30980 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C1319 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C1318 -
                   ((C14732 + C14733) * C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C1320 +
                   ((C14733 + C14732) * C30948 * C13237 +
                    (C13239 * C1054 + C14726 + C14726 + C13235 * C1066 +
                     C13241 * C1055 + C14727 + C14727 + C13236 * C1067) *
                        C30948 * C13238) *
                       C30768 * C31035) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C30994 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C30813) *
                      C580 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C30813 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C30994) *
                      C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C30994 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C30813) *
                      C582 +
                  (((C13792 + C13793) * C30948 * C13237 +
                    (C13239 * C278 + C13786 + C13786 + C13235 * C298 +
                     C13241 * C280 + C13787 + C13787 + C13236 * C300) *
                        C30948 * C13238) *
                       C30768 * C30813 -
                   ((C13793 + C13792) * C30948 * C13238 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C30948 * C13237) *
                       C30768 * C30994) *
                      C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C1702 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C1703 +
                    ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                      C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                         C30948 * C13237 +
                     (C14586 + C14587) * C30948 * C13238) *
                        C31028) *
                       C30994 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C1703 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C1702 -
                    ((C14590 + C14591) * C30948 * C13238 +
                     (C14587 + C14586) * C30948 * C13237) *
                        C31028) *
                       C30813) *
                      C30980 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C1703 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C1702 -
                    ((C15668 + C15669) * C30948 * C13238 +
                     (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                      C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                         C30948 * C13237) *
                        C31028) *
                       C30994 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C1702 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C1703 +
                    ((C15669 + C15668) * C30948 * C13237 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C30948 * C13238) *
                        C31028) *
                       C30813) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[11] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30995 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C1318 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30995) *
                      C1319 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C30995 -
                   ((C15080 + C15081) * C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C30855) *
                      C1320 +
                  (((C15081 + C15080) * C30948 * C13237 +
                    (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                     C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                        C30948 * C13238) *
                       C30855 -
                   ((C14408 + C14409) * C30948 * C13238 +
                    (C14407 + C14406) * C30948 * C13237) *
                       C30995) *
                      C31035) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C30995 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C30994 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C13239 * C1189 + C14126 + C14126 + C13235 * C1207 +
                      C13241 * C1188 + C14127 + C14127 + C13236 * C1206) *
                         C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C30995) *
                       C30813) *
                      C268 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C30995) *
                       C30994 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C30995 -
                    ((C13241 * C1187 + C14132 + C14132 + C13236 * C1205 +
                      C13239 * C1188 + C14133 + C14133 + C13235 * C1206) *
                         C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C30813) *
                      C269 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C30948 * C13237 +
                     (C13478 + C13479) * C30948 * C13238) *
                        C30995 -
                    ((C14156 + C14157) * C30948 * C13238 +
                     (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                      C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                         C30948 * C13237) *
                        C30855) *
                       C30994 +
                   (((C14157 + C14156) * C30948 * C13237 +
                     (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                      C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                         C30948 * C13238) *
                        C30855 -
                    ((C13480 + C13481) * C30948 * C13238 +
                     (C13479 + C13478) * C30948 * C13237) *
                        C30995) *
                       C30813) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C2156 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C2157 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C2158 -
                   ((C15944 + C15945) * C30948 * C13238 +
                    (C13241 * C1883 + C15458 + C15458 + C13236 * C1895 +
                     C13239 * C1884 + C15459 + C15459 + C13235 * C1896) *
                        C30948 * C13237) *
                       C31041) *
                      C30994 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C2157 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C2156 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C2158 +
                   ((C15945 + C15944) * C30948 * C13237 +
                    (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
                     C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                        C30948 * C13238) *
                       C31041) *
                      C30813) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[12] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                     (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                        C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                           C30948 * C13237 +
                       (C13239 * C273 + C13246 + C13246 + C13235 * C293 +
                        C13241 * C272 + C13247 + C13247 + C13236 * C292) *
                           C30948 * C13238) *
                          C30768 * C30750 * C108 -
                      ((C13241 * C271 + C13248 + C13248 + C13236 * C291 +
                        C13239 * C272 + C13249 + C13249 + C13235 * C292) *
                           C30948 * C13238 +
                       (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                        C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                           C30948 * C13237) *
                          C30768 * C30750 * C109 +
                      ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                        C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                           C30948 * C13237 +
                       (C13239 * C271 + C13254 + C13254 + C13235 * C291 +
                        C13241 * C277 + C13255 + C13255 + C13236 * C297) *
                           C30948 * C13238) *
                          C30768 * C30750 * C110 -
                      ((C13241 * C279 + C13256 + C13256 + C13236 * C299 +
                        C13239 * C277 + C13257 + C13257 + C13235 * C297) *
                           C30948 * C13238 +
                       (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                        C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                           C30948 * C13237) *
                          C30768 * C30750 * C111 +
                      ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                        C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                           C30948 * C13237 +
                       (C13239 * C279 + C13262 + C13262 + C13235 * C299 +
                        C13241 * C584 + C13263 + C13263 + C13236 * C586) *
                           C30948 * C13238) *
                          C30768 * C30750 * C112) +
                 std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                     ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                         C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                            C30948 * C13237 +
                        (C13470 + C13471) * C30948 * C13238) *
                           C30768 * C31062 -
                       ((C13472 + C13473) * C30948 * C13238 +
                        (C13471 + C13470) * C30948 * C13237) *
                           C30768 * C31050 +
                       ((C13473 + C13472) * C30948 * C13237 +
                        (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                         C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                            C30948 * C13238) *
                           C30768 * C31025) *
                          C268 +
                      (((C13474 + C13475) * C30948 * C13237 +
                        (C13476 + C13477) * C30948 * C13238) *
                           C30768 * C31050 -
                       ((C13475 + C13474) * C30948 * C13238 +
                        (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                         C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                            C30948 * C13237) *
                           C30768 * C31062 -
                       ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                         C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                            C30948 * C13238 +
                        (C13477 + C13476) * C30948 * C13237) *
                           C30768 * C31025) *
                          C269 +
                      (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                         C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                            C30948 * C13237 +
                        (C13478 + C13479) * C30948 * C13238) *
                           C30768 * C31062 -
                       ((C13480 + C13481) * C30948 * C13238 +
                        (C13479 + C13478) * C30948 * C13237) *
                           C30768 * C31050 +
                       ((C13481 + C13480) * C30948 * C13237 +
                        (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                         C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                            C30948 * C13238) *
                           C30768 * C31025) *
                          C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C31063 -
                   ((C13241 * C843 + C13628 + C13628 + C13236 * C853 +
                     C13239 * C842 + C13629 + C13629 + C13235 * C852) *
                        C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C13239 * C1186 + C13634 + C13634 + C13235 * C1204 +
                     C13241 * C1185 + C13635 + C13635 + C13236 * C1203) *
                        C30948 * C13238) *
                       C31028) *
                      C30750 * C268 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C13239 * C843 + C13638 + C13638 + C13235 * C853 +
                     C13241 * C844 + C13639 + C13639 + C13236 * C854) *
                        C30948 * C13238) *
                       C31052 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C31063 -
                   ((C13241 * C1184 + C13640 + C13640 + C13236 * C1202 +
                     C13239 * C1185 + C13641 + C13641 + C13235 * C1203) *
                        C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C31028) *
                      C30750 * C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C31063 -
                   ((C13241 * C845 + C13644 + C13644 + C13236 * C855 +
                     C13239 * C844 + C13645 + C13645 + C13235 * C854) *
                        C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C437 + C13648 + C13648 + C13235 * C457 +
                     C13241 * C439 + C13649 + C13649 + C13236 * C459) *
                        C30948 * C13237 +
                    (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                     C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                        C30948 * C13238) *
                       C31028) *
                      C30750 * C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C977 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C976 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C1044 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C1045 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C1046 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C30768 * C1047 +
                  ((C14409 + C14408) * C30948 * C13237 +
                   (C13239 * C5485 + C14396 + C14396 + C13235 * C5489 +
                    C13241 * C5749 + C14397 + C14397 + C13236 * C5751) *
                       C30948 * C13238) *
                      C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C31063 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C976 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C31052 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C31063 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C31028) *
                      C977 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C31063 -
                   ((C13241 * C1581 + C14570 + C14570 + C13236 * C1587 +
                     C13239 * C1580 + C14571 + C14571 + C13235 * C1586) *
                        C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C31052 +
                   ((C14591 + C14590) * C30948 * C13237 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C30948 * C13238) *
                       C31028) *
                      C31025) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C1702 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C1703 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C30750 * C31059 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C1703 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C1702 -
                   ((C13241 * C1184 + C13640 + C13640 + C13236 * C1202 +
                     C13239 * C1185 + C13641 + C13641 + C13235 * C1203) *
                        C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C31028) *
                      C30750 * C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C1702 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C1703 +
                   ((C13239 * C437 + C13648 + C13648 + C13235 * C457 +
                     C13241 * C439 + C13649 + C13649 + C13236 * C459) *
                        C30948 * C13237 +
                    (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                     C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                        C30948 * C13238) *
                       C31028) *
                      C30750 * C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C1702 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C1703 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C31062 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C1703 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C1702 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C31028) *
                      C31050 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C1702 -
                   ((C15080 + C15081) * C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C1703 +
                   ((C14591 + C14590) * C30948 * C13237 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C30948 * C13238) *
                       C31028) *
                      C31025) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C1877 -
                  ((C14152 + C14153) * C30948 * C13238 +
                   (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                    C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                       C30948 * C13237) *
                      C1878 +
                  ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                    C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                       C30948 * C13237 +
                   (C14586 + C14587) * C30948 * C13238) *
                      C1879 -
                  ((C13241 * C2265 + C15456 + C15456 + C13236 * C2271 +
                    C13239 * C2264 + C15457 + C15457 + C13235 * C2270) *
                       C30948 * C13238 +
                   (C13241 * C1883 + C15458 + C15458 + C13236 * C1895 +
                    C13239 * C1884 + C15459 + C15459 + C13235 * C1896) *
                       C30948 * C13237) *
                      C1880 +
                  ((C13239 * C1885 + C15460 + C15460 + C13235 * C1897 +
                    C13241 * C1886 + C15461 + C15461 + C13236 * C1898) *
                       C30948 * C13237 +
                   (C13239 * C6306 + C15462 + C15462 + C13235 * C6312 +
                    C13241 * C10698 + C15463 + C15463 + C13236 * C10700) *
                       C30948 * C13238) *
                      C1881) *
                 C30750 * C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[13] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C30995 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C976 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C30995) *
                       C977 +
                   (((C13473 + C13472) * C30948 * C13237 +
                     (C14406 + C14407) * C30948 * C13238) *
                        C30995 -
                    ((C13241 * C1581 + C14570 + C14570 + C13236 * C1587 +
                      C13239 * C1580 + C14571 + C14571 + C13235 * C1586) *
                         C30948 * C13238 +
                     (C14589 + C14588) * C30948 * C13237) *
                        C30855) *
                       C31025) *
                      C30980 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C30995) *
                       C976 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C30995 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C977 +
                   (((C14939 + C14938) * C30948 * C13237 +
                     (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                      C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                         C30948 * C13238) *
                        C30855 -
                    ((C14732 + C14733) * C30948 * C13238 +
                     (C13477 + C13476) * C30948 * C13237) *
                        C30995) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30995 -
                   ((C13241 * C843 + C13628 + C13628 + C13236 * C853 +
                     C13239 * C842 + C13629 + C13629 + C13235 * C852) *
                        C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C580 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C13239 * C843 + C13638 + C13638 + C13235 * C853 +
                     C13241 * C844 + C13639 + C13639 + C13236 * C854) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30995) *
                      C30750 * C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30995 -
                   ((C13241 * C845 + C13644 + C13644 + C13236 * C855 +
                     C13239 * C844 + C13645 + C13645 + C13235 * C854) *
                        C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C582 +
                  (((C13239 * C438 + C13924 + C13924 + C13235 * C458 +
                     C13241 * C440 + C13925 + C13925 + C13236 * C460) *
                        C30948 * C13237 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13793 + C13792) * C30948 * C13238 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C30948 * C13237) *
                       C30995) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C2156 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C2157 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C2158 -
                   ((C13241 * C2265 + C15456 + C15456 + C13236 * C2271 +
                     C13239 * C2264 + C15457 + C15457 + C13235 * C2270) *
                        C30948 * C13238 +
                    (C13241 * C1883 + C15458 + C15458 + C13236 * C1895 +
                     C13239 * C1884 + C15459 + C15459 + C13235 * C1896) *
                        C30948 * C13237) *
                       C31041) *
                      C30750 * C30980 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C2157 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C2156 -
                   ((C15668 + C15669) * C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C2158 +
                   ((C13239 * C1883 + C15800 + C15800 + C13235 * C1895 +
                     C13241 * C1882 + C15801 + C15801 + C13236 * C1894) *
                        C30948 * C13237 +
                    (C13239 * C2265 + C15802 + C15802 + C13235 * C2271 +
                     C13241 * C2266 + C15803 + C15803 + C13236 * C2272) *
                        C30948 * C13238) *
                       C31041) *
                      C30750 * C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[14] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C31062 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C31050 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C268 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C31050 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C31062 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C31062 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C31050 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13239 * C273 + C13246 + C13246 + C13235 * C293 +
                    C13241 * C272 + C13247 + C13247 + C13236 * C292) *
                       C30948 * C13238) *
                      C30768 * C30750 * C108 -
                  ((C13241 * C271 + C13248 + C13248 + C13236 * C291 +
                    C13239 * C272 + C13249 + C13249 + C13235 * C292) *
                       C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C30750 * C109 +
                  ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C30948 * C13237 +
                   (C13239 * C271 + C13254 + C13254 + C13235 * C291 +
                    C13241 * C277 + C13255 + C13255 + C13236 * C297) *
                       C30948 * C13238) *
                      C30768 * C30750 * C110 -
                  ((C13241 * C279 + C13256 + C13256 + C13236 * C299 +
                    C13239 * C277 + C13257 + C13257 + C13235 * C297) *
                       C30948 * C13238 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C30948 * C13237) *
                      C30768 * C30750 * C111 +
                  ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                    C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                       C30948 * C13237 +
                   (C13239 * C279 + C13262 + C13262 + C13235 * C299 +
                    C13241 * C584 + C13263 + C13263 + C13236 * C586) *
                       C30948 * C13238) *
                      C30768 * C30750 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C977 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C976 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C1044 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C1045 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C1046 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C30768 * C1047 +
                  ((C14409 + C14408) * C30948 * C13237 +
                   (C13239 * C5485 + C14396 + C14396 + C13235 * C5489 +
                    C13241 * C5749 + C14397 + C14397 + C13236 * C5751) *
                       C30948 * C13238) *
                      C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C1702 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C1703 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C30750 * C31059 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C1703 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C1702 -
                   ((C13241 * C1184 + C13640 + C13640 + C13236 * C1202 +
                     C13239 * C1185 + C13641 + C13641 + C13235 * C1203) *
                        C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C31028) *
                      C30750 * C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C1702 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C1703 +
                   ((C13239 * C437 + C13648 + C13648 + C13235 * C457 +
                     C13241 * C439 + C13649 + C13649 + C13236 * C459) *
                        C30948 * C13237 +
                    (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                     C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                        C30948 * C13238) *
                       C31028) *
                      C30750 * C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C1702 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C1703 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C31062 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C1703 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C1702 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C31028) *
                      C31050 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C1702 -
                   ((C15080 + C15081) * C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C1703 +
                   ((C14591 + C14590) * C30948 * C13237 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C30948 * C13238) *
                       C31028) *
                      C31025) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[15] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C3136 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C30994 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C3136) *
                       C30813) *
                      C30727 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C3136) *
                       C30994 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C3136 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C30813) *
                      C30736 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C30948 * C13237 +
                     (C13478 + C13479) * C30948 * C13238) *
                        C3136 -
                    ((C14156 + C14157) * C30948 * C13238 +
                     (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                      C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                         C30948 * C13237) *
                        C30855) *
                       C30994 +
                   (((C14157 + C14156) * C30948 * C13237 +
                     (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                      C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                         C30948 * C13238) *
                        C30855 -
                    ((C13480 + C13481) * C30948 * C13238 +
                     (C13479 + C13478) * C30948 * C13237) *
                        C3136) *
                       C30813) *
                      C2745)) /
                (p * q * std::sqrt(p + q));
    d2ee[16] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C30851 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30858 +
                    ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                      C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                         C30948 * C13237 +
                     (C14586 + C14587) * C30948 * C13238) *
                        C3644) *
                       C30994 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C30858 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C30851 -
                    ((C14590 + C14591) * C30948 * C13238 +
                     (C14587 + C14586) * C30948 * C13237) *
                        C3644) *
                       C30813) *
                      C2482 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30858 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C30851 -
                    ((C15668 + C15669) * C30948 * C13238 +
                     (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                      C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                         C30948 * C13237) *
                        C3644) *
                       C30994 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C30851 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30858 +
                    ((C15669 + C15668) * C30948 * C13237 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C30948 * C13238) *
                        C3644) *
                       C30813) *
                      C30733)) /
                (p * q * std::sqrt(p + q));
    d2ee[17] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C3136 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C31062 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C3136) *
                       C31050 +
                   (((C13473 + C13472) * C30948 * C13237 +
                     (C14406 + C14407) * C30948 * C13238) *
                        C3136 -
                    ((C15080 + C15081) * C30948 * C13238 +
                     (C14589 + C14588) * C30948 * C13237) *
                        C30855) *
                       C31025) *
                      C2482 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C3136) *
                       C31062 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C3136 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C31050 +
                   (((C14939 + C14938) * C30948 * C13237 +
                     (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                      C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                         C30948 * C13238) *
                        C30855 -
                    ((C14732 + C14733) * C30948 * C13238 +
                     (C13477 + C13476) * C30948 * C13237) *
                        C3136) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C3136 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C31068 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C3136) *
                      C30750 * C31061 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C3136 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C31048 +
                  (((C13239 * C438 + C13924 + C13924 + C13235 * C458 +
                     C13241 * C440 + C13925 + C13925 + C13236 * C460) *
                        C30948 * C13237 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13793 + C13792) * C30948 * C13238 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C30948 * C13237) *
                       C3136) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C31070 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C31067 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31058 -
                   ((C15944 + C15945) * C30948 * C13238 +
                    (C13241 * C1883 + C15458 + C15458 + C13236 * C1895 +
                     C13239 * C1884 + C15459 + C15459 + C13235 * C1896) *
                        C30948 * C13237) *
                       C31041) *
                      C30750 * C2482 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C31067 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C31070 -
                   ((C15668 + C15669) * C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C31058 +
                   ((C13239 * C1883 + C15800 + C15800 + C13235 * C1895 +
                     C13241 * C1882 + C15801 + C15801 + C13236 * C1894) *
                        C30948 * C13237 +
                    (C13239 * C2265 + C15802 + C15802 + C13235 * C2271 +
                     C13241 * C2266 + C15803 + C15803 + C13236 * C2272) *
                        C30948 * C13238) *
                       C31041) *
                      C30750 * C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[18] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30851 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30858 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C3644) *
                      C30750 * C30727 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30858 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30851 -
                   ((C15668 + C15669) * C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C3644) *
                      C30750 * C30736 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30851 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30858 +
                   ((C13239 * C437 + C13648 + C13648 + C13235 * C457 +
                     C13241 * C439 + C13649 + C13649 + C13236 * C459) *
                        C30948 * C13237 +
                    (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                     C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                        C30948 * C13238) *
                       C3644) *
                      C30750 * C2745)) /
                (p * q * std::sqrt(p + q));
    d2ee[19] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C3136 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C31068 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C14154 + C14155) * C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C3136) *
                      C30750 * C31061 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C3136 -
                   ((C14156 + C14157) * C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C31048 +
                  (((C13239 * C438 + C13924 + C13924 + C13235 * C458 +
                     C13241 * C440 + C13925 + C13925 + C13236 * C460) *
                        C30948 * C13237 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13793 + C13792) * C30948 * C13238 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C30948 * C13237) *
                       C3136) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C3136 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C31062 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C3136) *
                       C31050 +
                   (((C13473 + C13472) * C30948 * C13237 +
                     (C14406 + C14407) * C30948 * C13238) *
                        C3136 -
                    ((C15080 + C15081) * C30948 * C13238 +
                     (C14589 + C14588) * C30948 * C13237) *
                        C30855) *
                       C31025) *
                      C2482 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C3136) *
                       C31062 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C3136 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C31050 +
                   (((C14939 + C14938) * C30948 * C13237 +
                     (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                      C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                         C30948 * C13238) *
                        C30855 -
                    ((C14732 + C14733) * C30948 * C13238 +
                     (C13477 + C13476) * C30948 * C13237) *
                        C3136) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[20] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C30994 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C30813) *
                      C580 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C30813 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C30994) *
                      C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C30994 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C30813) *
                      C582 +
                  (((C13792 + C13793) * C30948 * C13237 +
                    (C13239 * C278 + C13786 + C13786 + C13235 * C298 +
                     C13241 * C280 + C13787 + C13787 + C13236 * C300) *
                        C30948 * C13238) *
                       C30768 * C30813 -
                   ((C13793 + C13792) * C30948 * C13238 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C30948 * C13237) *
                       C30768 * C30994) *
                      C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C1318 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C1319 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C30768 * C1320 -
                   ((C14408 + C14409) * C30948 * C13238 +
                    (C14407 + C14406) * C30948 * C13237) *
                       C30768 * C31035) *
                      C30980 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C1319 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C1318 -
                   ((C14732 + C14733) * C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C1320 +
                   ((C14733 + C14732) * C30948 * C13237 +
                    (C13239 * C1054 + C14726 + C14726 + C13235 * C1066 +
                     C13241 * C1055 + C14727 + C14727 + C13236 * C1067) *
                        C30948 * C13238) *
                       C30768 * C31035) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[21] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C30995 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C30994 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C13239 * C1189 + C14126 + C14126 + C13235 * C1207 +
                      C13241 * C1188 + C14127 + C14127 + C13236 * C1206) *
                         C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C30995) *
                       C30813) *
                      C268 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C30995) *
                       C30994 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C30995 -
                    ((C13241 * C1187 + C14132 + C14132 + C13236 * C1205 +
                      C13239 * C1188 + C14133 + C14133 + C13235 * C1206) *
                         C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C30813) *
                      C269 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C30948 * C13237 +
                     (C13478 + C13479) * C30948 * C13238) *
                        C30995 -
                    ((C14156 + C14157) * C30948 * C13238 +
                     (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                      C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                         C30948 * C13237) *
                        C30855) *
                       C30994 +
                   (((C14157 + C14156) * C30948 * C13237 +
                     (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                      C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                         C30948 * C13238) *
                        C30855 -
                    ((C13480 + C13481) * C30948 * C13238 +
                     (C13479 + C13478) * C30948 * C13237) *
                        C30995) *
                       C30813) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30995 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C1318 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C30855 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30995) *
                      C1319 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C30995 -
                   ((C15080 + C15081) * C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C30855) *
                      C1320 +
                  (((C15081 + C15080) * C30948 * C13237 +
                    (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                     C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                        C30948 * C13238) *
                       C30855 -
                   ((C14408 + C14409) * C30948 * C13238 +
                    (C14407 + C14406) * C30948 * C13237) *
                       C30995) *
                      C31035) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[22] += (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C31062 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C31050 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C268 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C31050 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C31062 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C31062 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C31050 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13239 * C273 + C13246 + C13246 + C13235 * C293 +
                    C13241 * C272 + C13247 + C13247 + C13236 * C292) *
                       C30948 * C13238) *
                      C30768 * C30750 * C108 -
                  ((C13241 * C271 + C13248 + C13248 + C13236 * C291 +
                    C13239 * C272 + C13249 + C13249 + C13235 * C292) *
                       C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C30750 * C109 +
                  ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C30948 * C13237 +
                   (C13239 * C271 + C13254 + C13254 + C13235 * C291 +
                    C13241 * C277 + C13255 + C13255 + C13236 * C297) *
                       C30948 * C13238) *
                      C30768 * C30750 * C110 -
                  ((C13241 * C279 + C13256 + C13256 + C13236 * C299 +
                    C13239 * C277 + C13257 + C13257 + C13235 * C297) *
                       C30948 * C13238 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C30948 * C13237) *
                      C30768 * C30750 * C111 +
                  ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                    C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                       C30948 * C13237 +
                   (C13239 * C279 + C13262 + C13262 + C13235 * C299 +
                    C13241 * C584 + C13263 + C13263 + C13236 * C586) *
                       C30948 * C13238) *
                      C30768 * C30750 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C31063 -
                   ((C13241 * C843 + C13628 + C13628 + C13236 * C853 +
                     C13239 * C842 + C13629 + C13629 + C13235 * C852) *
                        C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C13239 * C1186 + C13634 + C13634 + C13235 * C1204 +
                     C13241 * C1185 + C13635 + C13635 + C13236 * C1203) *
                        C30948 * C13238) *
                       C31028) *
                      C30750 * C268 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C13239 * C843 + C13638 + C13638 + C13235 * C853 +
                     C13241 * C844 + C13639 + C13639 + C13236 * C854) *
                        C30948 * C13238) *
                       C31052 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C31063 -
                   ((C13241 * C1184 + C13640 + C13640 + C13236 * C1202 +
                     C13239 * C1185 + C13641 + C13641 + C13235 * C1203) *
                        C30948 * C13238 +
                    (C13241 * C437 + C13642 + C13642 + C13236 * C457 +
                     C13239 * C436 + C13643 + C13643 + C13235 * C456) *
                        C30948 * C13237) *
                       C31028) *
                      C30750 * C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C31063 -
                   ((C13241 * C845 + C13644 + C13644 + C13236 * C855 +
                     C13239 * C844 + C13645 + C13645 + C13235 * C854) *
                        C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C437 + C13648 + C13648 + C13235 * C457 +
                     C13241 * C439 + C13649 + C13649 + C13236 * C459) *
                        C30948 * C13237 +
                    (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                     C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                        C30948 * C13238) *
                       C31028) *
                      C30750 * C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C977 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C976 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C1044 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C1045 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C1046 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C30768 * C1047 +
                  ((C14409 + C14408) * C30948 * C13237 +
                   (C13239 * C5485 + C14396 + C14396 + C13235 * C5489 +
                    C13241 * C5749 + C14397 + C14397 + C13236 * C5751) *
                       C30948 * C13238) *
                      C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C31063 -
                   ((C14152 + C14153) * C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C31052 +
                   ((C13239 * C435 + C13632 + C13632 + C13235 * C455 +
                     C13241 * C436 + C13633 + C13633 + C13236 * C456) *
                        C30948 * C13237 +
                    (C14586 + C14587) * C30948 * C13238) *
                       C31028) *
                      C976 +
                  (((C14153 + C14152) * C30948 * C13237 +
                    (C14588 + C14589) * C30948 * C13238) *
                       C31052 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C31063 -
                   ((C14590 + C14591) * C30948 * C13238 +
                    (C14587 + C14586) * C30948 * C13237) *
                       C31028) *
                      C977 +
                  (((C13473 + C13472) * C30948 * C13237 +
                    (C14406 + C14407) * C30948 * C13238) *
                       C31063 -
                   ((C13241 * C1581 + C14570 + C14570 + C13236 * C1587 +
                     C13239 * C1580 + C14571 + C14571 + C13235 * C1586) *
                        C30948 * C13238 +
                    (C14589 + C14588) * C30948 * C13237) *
                       C31052 +
                   ((C14591 + C14590) * C30948 * C13237 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C30948 * C13238) *
                       C31028) *
                      C31025) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[23] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30995 -
                   ((C13241 * C843 + C13628 + C13628 + C13236 * C853 +
                     C13239 * C842 + C13629 + C13629 + C13235 * C852) *
                        C30948 * C13238 +
                    (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                     C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C580 +
                  (((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                     C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                        C30948 * C13237 +
                    (C13239 * C843 + C13638 + C13638 + C13235 * C853 +
                     C13241 * C844 + C13639 + C13639 + C13236 * C854) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30995) *
                      C30750 * C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30995 -
                   ((C13241 * C845 + C13644 + C13644 + C13236 * C855 +
                     C13239 * C844 + C13645 + C13645 + C13235 * C854) *
                        C30948 * C13238 +
                    (C13241 * C438 + C13646 + C13646 + C13236 * C458 +
                     C13239 * C432 + C13647 + C13647 + C13235 * C452) *
                        C30948 * C13237) *
                       C30855) *
                      C30750 * C582 +
                  (((C13239 * C438 + C13924 + C13924 + C13235 * C458 +
                     C13241 * C440 + C13925 + C13925 + C13236 * C460) *
                        C30948 * C13237 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C30948 * C13238) *
                       C30855 -
                   ((C13793 + C13792) * C30948 * C13238 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C30948 * C13237) *
                       C30995) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C30948 * C13237 +
                     (C13470 + C13471) * C30948 * C13238) *
                        C30995 -
                    ((C14152 + C14153) * C30948 * C13238 +
                     (C13241 * C433 + C13630 + C13630 + C13236 * C453 +
                      C13239 * C434 + C13631 + C13631 + C13235 * C454) *
                         C30948 * C13237) *
                        C30855) *
                       C976 +
                   (((C14153 + C14152) * C30948 * C13237 +
                     (C14588 + C14589) * C30948 * C13238) *
                        C30855 -
                    ((C13472 + C13473) * C30948 * C13238 +
                     (C13471 + C13470) * C30948 * C13237) *
                        C30995) *
                       C977 +
                   (((C13473 + C13472) * C30948 * C13237 +
                     (C14406 + C14407) * C30948 * C13238) *
                        C30995 -
                    ((C13241 * C1581 + C14570 + C14570 + C13236 * C1587 +
                      C13239 * C1580 + C14571 + C14571 + C13235 * C1586) *
                         C30948 * C13238 +
                     (C14589 + C14588) * C30948 * C13237) *
                        C30855) *
                       C31025) *
                      C30980 +
                  ((((C13239 * C433 + C13636 + C13636 + C13235 * C453 +
                      C13241 * C432 + C13637 + C13637 + C13236 * C452) *
                         C30948 * C13237 +
                     (C14154 + C14155) * C30948 * C13238) *
                        C30855 -
                    ((C13475 + C13474) * C30948 * C13238 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C30948 * C13237) *
                        C30995) *
                       C976 +
                   (((C13474 + C13475) * C30948 * C13237 +
                     (C13476 + C13477) * C30948 * C13238) *
                        C30995 -
                    ((C14938 + C14939) * C30948 * C13238 +
                     (C14155 + C14154) * C30948 * C13237) *
                        C30855) *
                       C977 +
                   (((C14939 + C14938) * C30948 * C13237 +
                     (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                      C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                         C30948 * C13238) *
                        C30855 -
                    ((C14732 + C14733) * C30948 * C13238 +
                     (C13477 + C13476) * C30948 * C13237) *
                        C30995) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[24] += (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13239 * C273 + C13246 + C13246 + C13235 * C293 +
                    C13241 * C272 + C13247 + C13247 + C13236 * C292) *
                       C30948 * C13238) *
                      C30768 * C30750 * C108 -
                  ((C13241 * C271 + C13248 + C13248 + C13236 * C291 +
                    C13239 * C272 + C13249 + C13249 + C13235 * C292) *
                       C30948 * C13238 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C30948 * C13237) *
                      C30768 * C30750 * C109 +
                  ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C30948 * C13237 +
                   (C13239 * C271 + C13254 + C13254 + C13235 * C291 +
                    C13241 * C277 + C13255 + C13255 + C13236 * C297) *
                       C30948 * C13238) *
                      C30768 * C30750 * C110 -
                  ((C13241 * C279 + C13256 + C13256 + C13236 * C299 +
                    C13239 * C277 + C13257 + C13257 + C13235 * C297) *
                       C30948 * C13238 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C30948 * C13237) *
                      C30768 * C30750 * C111 +
                  ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                    C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                       C30948 * C13237 +
                   (C13239 * C279 + C13262 + C13262 + C13235 * C299 +
                    C13241 * C584 + C13263 + C13263 + C13236 * C586) *
                       C30948 * C13238) *
                      C30768 * C30750 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C31062 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C31050 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C268 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C31050 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C31062 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C31062 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C31050 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C30948 * C13237 +
                    (C13470 + C13471) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13472 + C13473) * C30948 * C13238 +
                    (C13471 + C13470) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13473 + C13472) * C30948 * C13237 +
                    (C13239 * C1052 + C13420 + C13420 + C13235 * C1064 +
                     C13241 * C1051 + C13421 + C13421 + C13236 * C1063) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C30948 * C13237 +
                    (C13476 + C13477) * C30948 * C13238) *
                       C30768 * C977 -
                   ((C13475 + C13474) * C30948 * C13238 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C30948 * C13237) *
                       C30768 * C976 -
                   ((C13241 * C1050 + C13432 + C13432 + C13236 * C1062 +
                     C13239 * C1051 + C13433 + C13433 + C13235 * C1063) *
                        C30948 * C13238 +
                    (C13477 + C13476) * C30948 * C13237) *
                       C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C30948 * C13237 +
                    (C13478 + C13479) * C30948 * C13238) *
                       C30768 * C976 -
                   ((C13480 + C13481) * C30948 * C13238 +
                    (C13479 + C13478) * C30948 * C13237) *
                       C30768 * C977 +
                   ((C13481 + C13480) * C30948 * C13237 +
                    (C13239 * C1050 + C13444 + C13444 + C13235 * C1062 +
                     C13241 * C1324 + C13445 + C13445 + C13236 * C1326) *
                        C30948 * C13238) *
                       C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C30948 * C13237 +
                   (C13470 + C13471) * C30948 * C13238) *
                      C30768 * C1044 -
                  ((C13472 + C13473) * C30948 * C13238 +
                   (C13471 + C13470) * C30948 * C13237) *
                      C30768 * C1045 +
                  ((C13473 + C13472) * C30948 * C13237 +
                   (C14406 + C14407) * C30948 * C13238) *
                      C30768 * C1046 -
                  ((C14408 + C14409) * C30948 * C13238 +
                   (C14407 + C14406) * C30948 * C13237) *
                      C30768 * C1047 +
                  ((C14409 + C14408) * C30948 * C13237 +
                   (C13239 * C5485 + C14396 + C14396 + C13235 * C5489 +
                    C13241 * C5749 + C14397 + C14397 + C13236 * C5751) *
                       C30948 * C13238) *
                      C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C30809 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C30816 +
           ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
               C2742) *
              C30727 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C30816 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C30809 -
           ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C30768 *
               C2742) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C30809 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C30816 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C2742) *
              C2745)) /
        (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30995 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C30809 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                C30995) *
               C30816 +
           (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30995 -
            ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) *
                C30855) *
               C2742) *
              C2482 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30995) *
               C30809 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30995 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C30816 +
           (((C26035 + C26034) * C13237 +
             (C5914 * C18991 +
              (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C18992) *
                 C13238) *
                C30855 -
            ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) *
                C30995) *
               C2742) *
              C30733)) /
        (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C31069 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C31065 +
           ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
               C31055 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
               C31035) *
              C2482 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C31065 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C31069 -
           ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C30768 *
               C31055 +
           ((C25839 + C25838) * C13237 +
            (C5758 * C18991 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C18992) *
                C13238) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C2374 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C30813) *
              C31068 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C30813 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C2374) *
              C31061 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C2374 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C30813) *
              C31048 +
          (((C24987 + C24993) * C13237 +
            (C5025 * C18991 +
             (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C18992) *
                C13238) *
               C30768 * C30813 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C31063 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C31052 +
            ((C9261 * C18991 + C9262 * C18992) * C13237 +
             (C25702 + C25703) * C13238) *
                C31028) *
               C2374 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C31052 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C31063 -
            ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) *
                C31028) *
               C30813) *
              C2482 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C31052 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C31063 -
            ((C26736 + C26737) * C13238 +
             (C9265 * C18992 + C9264 * C18991) * C13237) *
                C31028) *
               C2374 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C31063 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) * C31052 +
            ((C26737 + C26736) * C13237 +
             (C6479 * C18991 +
              (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C18992) *
                 C13238) *
                C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30995 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C2374 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                C30995) *
               C30813) *
              C30727 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30995) *
               C2374 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30995 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C30813) *
              C30736 +
          (((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
              C9266 * C18992) *
                 C13237 +
             (C24707 + C24708) * C13238) *
                C30995 -
            ((C25322 + C25323) * C13238 +
             (C9267 * C18992 + C9266 * C18991) * C13237) *
                C30855) *
               C2374 +
           (((C25323 + C25322) * C13237 +
             (C5306 * C18991 +
              (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C18992) *
                 C13238) *
                C30855 -
            ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) *
                C30995) *
               C30813) *
              C2745)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C2374 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C30813) *
              C31068 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C30813 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C2374) *
              C31061 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C2374 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C30813) *
              C31048 +
          (((C24987 + C24993) * C13237 +
            (C5025 * C18991 +
             (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C18992) *
                C13238) *
               C30768 * C30813 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C31069 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C31065 +
           ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
               C31055 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
               C31035) *
              C2482 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C31065 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C31069 -
           ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C30768 *
               C31055 +
           ((C25839 + C25838) * C13237 +
            (C5758 * C18991 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C18992) *
                C13238) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[30] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C3136 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C30809 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
               C30816 +
           (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C3136 -
            ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) *
                C30855) *
               C2742) *
              C30980 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C3136) *
               C30809 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C3136 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C30816 +
           (((C26035 + C26034) * C13237 +
             (C5914 * C18991 +
              (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C18992) *
                 C13238) *
                C30855 -
            ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C3136) *
               C2742) *
              C30733)) /
        (p * q * std::sqrt(p + q));
    d2ee[31] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30851 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30858 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C3644) *
              C30809 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30858 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30851 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C3644) *
              C30816 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30851 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C30858 +
           ((C25707 + C25706) * C13237 +
            (C5647 * C18991 +
             (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C18992) *
                C13238) *
               C3644) *
              C2742) *
         C30722) /
        (p * q * std::sqrt(p + q));
    d2ee[32] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C3136 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C31069 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
              C31065 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C3136 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C30855) *
              C31055 +
          (((C26167 + C26166) * C13237 +
            (C6022 * C18991 +
             (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C18992) *
                C13238) *
               C30855 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C3136 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C2374 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
               C30813) *
              C31059 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C3136) *
               C2374 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C3136 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C30813) *
              C31046 +
          (((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
              C9266 * C18992) *
                 C13237 +
             (C24707 + C24708) * C13238) *
                C3136 -
            ((C25322 + C25323) * C13238 +
             (C9267 * C18992 + C9266 * C18991) * C13237) *
                C30855) *
               C2374 +
           (((C25323 + C25322) * C13237 +
             (C5306 * C18991 +
              (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C18992) *
                 C13238) *
                C30855 -
            ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C31070 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C31067 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31058 -
           ((C26998 + C26999) * C13238 +
            (C10551 * C18992 + C9262 * C18991) * C13237) *
               C31041) *
              C2374 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C31067 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C31070 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C31058 +
           ((C26999 + C26998) * C13237 +
            (C6697 * C18991 +
             (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C18992) *
                C13238) *
               C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[33] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30851 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30858 +
            ((C9261 * C18991 + C9262 * C18992) * C13237 +
             (C25702 + C25703) * C13238) *
                C3644) *
               C2374 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30858 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30851 -
            ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C3644) *
               C30813) *
              C30980 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30858 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30851 -
            ((C26736 + C26737) * C13238 +
             (C9265 * C18992 + C9264 * C18991) * C13237) *
                C3644) *
               C2374 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30851 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) * C30858 +
            ((C26737 + C26736) * C13237 +
             (C6479 * C18991 +
              (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C18992) *
                 C13238) *
                C3644) *
               C30813) *
              C30733)) /
        (p * q * std::sqrt(p + q));
    d2ee[34] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C3136 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C2374 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
               C30813) *
              C31059 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C3136) *
               C2374 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C3136 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C30813) *
              C31046 +
          (((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
              C9266 * C18992) *
                 C13237 +
             (C24707 + C24708) * C13238) *
                C3136 -
            ((C25322 + C25323) * C13238 +
             (C9267 * C18992 + C9266 * C18991) * C13237) *
                C30855) *
               C2374 +
           (((C25323 + C25322) * C13237 +
             (C5306 * C18991 +
              (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C18992) *
                 C13238) *
                C30855 -
            ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C3136 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C31069 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
              C31065 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C3136 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C30855) *
              C31055 +
          (((C26167 + C26166) * C13237 +
            (C6022 * C18991 +
             (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C18992) *
                C13238) *
               C30855 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C1318 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C1319 +
           ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
               C1320 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
               C31035) *
              C30980 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C1319 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C1318 -
           ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C30768 *
               C1320 +
           ((C25839 + C25838) * C13237 +
            (C5758 * C18991 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C18992) *
                C13238) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C30994 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C30813) *
              C580 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C30813 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C30994) *
              C581 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C30994 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C30813) *
              C582 +
          (((C24987 + C24993) * C13237 +
            (C5025 * C18991 +
             (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C18992) *
                C13238) *
               C30768 * C30813 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C1702 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C1703 +
            ((C9261 * C18991 + C9262 * C18992) * C13237 +
             (C25702 + C25703) * C13238) *
                C31028) *
               C30994 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C1703 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C1702 -
            ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) *
                C31028) *
               C30813) *
              C30980 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C1703 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C1702 -
            ((C26736 + C26737) * C13238 +
             (C9265 * C18992 + C9264 * C18991) * C13237) *
                C31028) *
               C30994 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C1702 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) * C1703 +
            ((C26737 + C26736) * C13237 +
             (C6479 * C18991 +
              (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C18992) *
                 C13238) *
                C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30995 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C1318 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30995) *
              C1319 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30995 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C30855) *
              C1320 +
          (((C26167 + C26166) * C13237 +
            (C6022 * C18991 +
             (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C18992) *
                C13238) *
               C30855 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30995 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C30994 +
           (((C25319 + C25318) * C13237 +
             (C5302 * C18991 + C5645 * C18992) * C13238) *
                C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                C30995) *
               C30813) *
              C268 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30995) *
               C30994 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30995 -
            ((C6479 * C18992 + C5305 * C18991) * C13238 +
             (C25321 + C25320) * C13237) *
                C30855) *
               C30813) *
              C269 +
          (((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
              C9266 * C18992) *
                 C13237 +
             (C24707 + C24708) * C13238) *
                C30995 -
            ((C25322 + C25323) * C13238 +
             (C9267 * C18992 + C9266 * C18991) * C13237) *
                C30855) *
               C30994 +
           (((C25323 + C25322) * C13237 +
             (C5306 * C18991 +
              (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C18992) *
                 C13238) *
                C30855 -
            ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) *
                C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C2156 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C2157 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C2158 -
           ((C26998 + C26999) * C13238 +
            (C10551 * C18992 + C9262 * C18991) * C13237) *
               C31041) *
              C30994 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C2157 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C2156 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C2158 +
           ((C26999 + C26998) * C13237 +
            (C6697 * C18991 +
             (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C18992) *
                C13238) *
               C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
                C9260 * C18992) *
                   C13237 +
               (C4771 * C18991 + C5303 * C18992) * C13238) *
                  C30768 * C30750 * C108 -
              ((C5304 * C18992 + C4774 * C18991) * C13238 +
               (C9263 * C18992 +
                (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                   C13237) *
                  C30768 * C30750 * C109 +
              (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
                C9266 * C18992) *
                   C13237 +
               (C4777 * C18991 + C5307 * C18992) * C13238) *
                  C30768 * C30750 * C110 -
              (((C4601 * C845 + C5127 + C5127 + C30696 * C855) * C18992 +
                C5024 * C18991) *
                   C13238 +
               (C9475 * C18992 +
                (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                   C13237) *
                  C30768 * C30750 * C111 +
              (((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C18991 +
                (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C18992) *
                   C13237 +
               ((C4601 * C279 + C4617 + C4617 + C30696 * C299) * C18991 +
                (C4601 * C846 + C24552 + C24552 + C30696 * C856) * C18992) *
                   C13238) *
                  C30768 * C30750 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
                 C9260 * C18992) *
                    C13237 +
                (C24699 + C24700) * C13238) *
                   C30768 * C31062 -
               ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                   C30768 * C31050 +
               ((C24702 + C24701) * C13237 +
                (C4773 * C18991 + C5646 * C18992) * C13238) *
                   C30768 * C31025) *
                  C268 +
              (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) *
                   C30768 * C31050 -
               ((C24704 + C24703) * C13238 +
                (C9263 * C18992 +
                 (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                    C13237) *
                   C30768 * C31062 -
               ((C5914 * C18992 + C4776 * C18991) * C13238 +
                (C24706 + C24705) * C13237) *
                   C30768 * C31025) *
                  C269 +
              ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
                 C9266 * C18992) *
                    C13237 +
                (C24707 + C24708) * C13238) *
                   C30768 * C31062 -
               ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) *
                   C30768 * C31050 +
               ((C24710 + C24709) * C13237 +
                (C4779 * C18991 +
                 (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                    C13238) *
                   C30768 * C31025) *
                  C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C31063 -
           ((C5644 * C18992 + C5303 * C18991) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C31052 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C5644 * C18991 + C6698 * C18992) * C13238) *
               C31028) *
              C30750 * C268 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C5304 * C18991 + C6480 * C18992) * C13238) *
               C31052 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C31063 -
           ((C10707 * C18992 + C6480 * C18991) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C31028) *
              C30750 * C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C31063 -
           ((C9628 * C18992 + C5307 * C18991) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C31052 +
           ((C9267 * C18991 + C9268 * C18992) * C13237 +
            (C9628 * C18991 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C18992) *
                C13238) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C976 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C977 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C31059 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C977 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C976 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C976 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C977 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C24699 + C24700) * C13238) *
              C30768 * C1044 -
          ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
              C1045 +
          ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
              C1046 -
          ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
              C1047 +
          ((C25555 + C25554) * C13237 +
           (C5503 * C18991 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C18992) *
               C13238) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C31063 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C31052 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31028) *
              C976 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C31052 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C31063 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C31028) *
              C977 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C31063 -
           ((C5647 * C18992 + C5646 * C18991) * C13238 +
            (C25705 + C25704) * C13237) *
               C31052 +
           ((C25707 + C25706) * C13237 +
            (C5647 * C18991 +
             (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C18992) *
                C13238) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C1702 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C1703 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31028) *
              C30750 * C31059 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C1703 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C1702 -
           ((C10707 * C18992 + C6480 * C18991) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C31028) *
              C30750 * C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C1702 -
           ((C25322 + C25323) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C1703 +
           ((C9267 * C18991 + C9268 * C18992) * C13237 +
            (C9628 * C18991 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C18992) *
                C13238) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C1702 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C1703 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31028) *
              C31062 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C1703 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C1702 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C31028) *
              C31050 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C1702 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C1703 +
           ((C25707 + C25706) * C13237 +
            (C5647 * C18991 +
             (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C18992) *
                C13238) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C24699 + C24700) * C13238) *
              C1877 -
          ((C25318 + C25319) * C13238 +
           (C9261 * C18992 + C9260 * C18991) * C13237) *
              C1878 +
          ((C9261 * C18991 + C9262 * C18992) * C13237 +
           (C25702 + C25703) * C13238) *
              C1879 -
          ((C10921 * C18992 + C6698 * C18991) * C13238 +
           (C10551 * C18992 + C9262 * C18991) * C13237) *
              C1880 +
          ((C10551 * C18991 + C10552 * C18992) * C13237 +
           (C10921 * C18991 +
            (C4601 * C10912 + C10918 + C10918 + C30696 * C10914) * C18992) *
               C13238) *
              C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30995 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C976 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                C30995) *
               C977 +
           (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30995 -
            ((C5647 * C18992 + C5646 * C18991) * C13238 +
             (C25705 + C25704) * C13237) *
                C30855) *
               C31025) *
              C30980 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30995) *
               C976 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30995 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C977 +
           (((C26035 + C26034) * C13237 +
             (C5914 * C18991 +
              (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C18992) *
                 C13238) *
                C30855 -
            ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) *
                C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30995 -
           ((C5644 * C18992 + C5303 * C18991) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C30750 * C580 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C5304 * C18991 + C6480 * C18992) * C13238) *
               C30855 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30995) *
              C30750 * C581 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30995 -
           ((C9628 * C18992 + C5307 * C18991) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C30855) *
              C30750 * C582 +
          (((C9475 * C18991 + C9476 * C18992) * C13237 +
            (C24992 * C18991 +
             (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C18992) *
                C13238) *
               C30855 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C2156 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C2157 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C2158 -
           ((C10921 * C18992 + C6698 * C18991) * C13238 +
            (C10551 * C18992 + C9262 * C18991) * C13237) *
               C31041) *
              C30750 * C30980 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C2157 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C2156 -
           ((C26736 + C26737) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C2158 +
           ((C9265 * C18991 + C10814 * C18992) * C13237 +
            (C10707 * C18991 +
             (C4601 * C10698 + C10704 + C10704 + C30696 * C10700) * C18992) *
                C13238) *
               C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C31062 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C31050 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C268 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C31050 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C31062 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C31062 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C31050 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C4771 * C18991 + C5303 * C18992) * C13238) *
              C30768 * C30750 * C108 -
          ((C5304 * C18992 + C4774 * C18991) * C13238 +
           (C9263 * C18992 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
               C13237) *
              C30768 * C30750 * C109 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
            C9266 * C18992) *
               C13237 +
           (C4777 * C18991 + C5307 * C18992) * C13238) *
              C30768 * C30750 * C110 -
          (((C4601 * C845 + C5127 + C5127 + C30696 * C855) * C18992 +
            C5024 * C18991) *
               C13238 +
           (C9475 * C18992 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
               C13237) *
              C30768 * C30750 * C111 +
          (((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C18991 +
            (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C18992) *
               C13237 +
           ((C4601 * C279 + C4617 + C4617 + C30696 * C299) * C18991 +
            (C4601 * C846 + C24552 + C24552 + C30696 * C856) * C18992) *
               C13238) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C976 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C977 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C31059 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C977 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C976 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C976 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C977 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C24699 + C24700) * C13238) *
              C30768 * C1044 -
          ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
              C1045 +
          ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
              C1046 -
          ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
              C1047 +
          ((C25555 + C25554) * C13237 +
           (C5503 * C18991 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C18992) *
               C13238) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C1702 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C1703 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31028) *
              C30750 * C31059 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C1703 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C1702 -
           ((C10707 * C18992 + C6480 * C18991) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C31028) *
              C30750 * C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C1702 -
           ((C25322 + C25323) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C1703 +
           ((C9267 * C18991 + C9268 * C18992) * C13237 +
            (C9628 * C18991 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C18992) *
                C13238) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C1702 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C1703 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31028) *
              C31062 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C1703 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C1702 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C31028) *
              C31050 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C1702 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C1703 +
           ((C25707 + C25706) * C13237 +
            (C5647 * C18991 +
             (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C18992) *
                C13238) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C3136 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C30994 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
               C30813) *
              C30727 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C3136) *
               C30994 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C3136 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C30813) *
              C30736 +
          (((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
              C9266 * C18992) *
                 C13237 +
             (C24707 + C24708) * C13238) *
                C3136 -
            ((C25322 + C25323) * C13238 +
             (C9267 * C18992 + C9266 * C18991) * C13237) *
                C30855) *
               C30994 +
           (((C25323 + C25322) * C13237 +
             (C5306 * C18991 +
              (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C18992) *
                 C13238) *
                C30855 -
            ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C3136) *
               C30813) *
              C2745)) /
        (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30851 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30858 +
            ((C9261 * C18991 + C9262 * C18992) * C13237 +
             (C25702 + C25703) * C13238) *
                C3644) *
               C30994 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30858 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30851 -
            ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C3644) *
               C30813) *
              C2482 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30858 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30851 -
            ((C26736 + C26737) * C13238 +
             (C9265 * C18992 + C9264 * C18991) * C13237) *
                C3644) *
               C30994 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30851 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) * C30858 +
            ((C26737 + C26736) * C13237 +
             (C6479 * C18991 +
              (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C18992) *
                 C13238) *
                C3644) *
               C30813) *
              C30733)) /
        (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C3136 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C31062 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
               C31050 +
           (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C3136 -
            ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) *
                C30855) *
               C31025) *
              C2482 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C3136) *
               C31062 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C3136 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C31050 +
           (((C26035 + C26034) * C13237 +
             (C5914 * C18991 +
              (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C18992) *
                 C13238) *
                C30855 -
            ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C3136 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C30750 * C31068 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C30855 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C3136) *
              C30750 * C31061 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C3136 -
           ((C25322 + C25323) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C30855) *
              C30750 * C31048 +
          (((C9475 * C18991 + C9476 * C18992) * C13237 +
            (C24992 * C18991 +
             (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C18992) *
                C13238) *
               C30855 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C31070 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C31067 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31058 -
           ((C26998 + C26999) * C13238 +
            (C10551 * C18992 + C9262 * C18991) * C13237) *
               C31041) *
              C30750 * C2482 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C31067 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C31070 -
           ((C26736 + C26737) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C31058 +
           ((C9265 * C18991 + C10814 * C18992) * C13237 +
            (C10707 * C18991 +
             (C4601 * C10698 + C10704 + C10704 + C30696 * C10700) * C18992) *
                C13238) *
               C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30851 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30858 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C3644) *
              C30750 * C30727 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C30858 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30851 -
           ((C26736 + C26737) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C3644) *
              C30750 * C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30851 -
           ((C25322 + C25323) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C30858 +
           ((C9267 * C18991 + C9268 * C18992) * C13237 +
            (C9628 * C18991 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C18992) *
                C13238) *
               C3644) *
              C30750 * C2745)) /
        (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C3136 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C30750 * C31068 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C25320 + C25321) * C13238) *
               C30855 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C3136) *
              C30750 * C31061 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C3136 -
           ((C25322 + C25323) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C30855) *
              C30750 * C31048 +
          (((C9475 * C18991 + C9476 * C18992) * C13237 +
            (C24992 * C18991 +
             (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C18992) *
                C13238) *
               C30855 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C3136 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C31062 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C3136) *
               C31050 +
           (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C3136 -
            ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) *
                C30855) *
               C31025) *
              C2482 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C3136) *
               C31062 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C3136 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C31050 +
           (((C26035 + C26034) * C13237 +
             (C5914 * C18991 +
              (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C18992) *
                 C13238) *
                C30855 -
            ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C30994 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C30813) *
              C580 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C30813 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C30994) *
              C581 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C30994 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C30813) *
              C582 +
          (((C24987 + C24993) * C13237 +
            (C5025 * C18991 +
             (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C18992) *
                C13238) *
               C30768 * C30813 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C1318 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C1319 +
           ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
               C1320 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
               C31035) *
              C30980 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C1319 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C1318 -
           ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) * C30768 *
               C1320 +
           ((C25839 + C25838) * C13237 +
            (C5758 * C18991 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C18992) *
                C13238) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30995 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C30994 +
           (((C25319 + C25318) * C13237 +
             (C5302 * C18991 + C5645 * C18992) * C13238) *
                C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                C30995) *
               C30813) *
              C268 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30995) *
               C30994 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30995 -
            ((C6479 * C18992 + C5305 * C18991) * C13238 +
             (C25321 + C25320) * C13237) *
                C30855) *
               C30813) *
              C269 +
          (((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
              C9266 * C18992) *
                 C13237 +
             (C24707 + C24708) * C13238) *
                C30995 -
            ((C25322 + C25323) * C13238 +
             (C9267 * C18992 + C9266 * C18991) * C13237) *
                C30855) *
               C30994 +
           (((C25323 + C25322) * C13237 +
             (C5306 * C18991 +
              (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C18992) *
                 C13238) *
                C30855 -
            ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) *
                C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30995 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C1318 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30995) *
              C1319 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30995 -
           ((C26166 + C26167) * C13238 + (C25705 + C25704) * C13237) * C30855) *
              C1320 +
          (((C26167 + C26166) * C13237 +
            (C6022 * C18991 +
             (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C18992) *
                C13238) *
               C30855 -
           ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C31062 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C31050 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C268 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C31050 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C31062 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C31062 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C31050 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C4771 * C18991 + C5303 * C18992) * C13238) *
              C30768 * C30750 * C108 -
          ((C5304 * C18992 + C4774 * C18991) * C13238 +
           (C9263 * C18992 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
               C13237) *
              C30768 * C30750 * C109 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
            C9266 * C18992) *
               C13237 +
           (C4777 * C18991 + C5307 * C18992) * C13238) *
              C30768 * C30750 * C110 -
          (((C4601 * C845 + C5127 + C5127 + C30696 * C855) * C18992 +
            C5024 * C18991) *
               C13238 +
           (C9475 * C18992 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
               C13237) *
              C30768 * C30750 * C111 +
          (((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C18991 +
            (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C18992) *
               C13237 +
           ((C4601 * C279 + C4617 + C4617 + C30696 * C299) * C18991 +
            (C4601 * C846 + C24552 + C24552 + C30696 * C856) * C18992) *
               C13238) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C31063 -
           ((C5644 * C18992 + C5303 * C18991) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C31052 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C5644 * C18991 + C6698 * C18992) * C13238) *
               C31028) *
              C30750 * C268 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C5304 * C18991 + C6480 * C18992) * C13238) *
               C31052 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C31063 -
           ((C10707 * C18992 + C6480 * C18991) * C13238 +
            (C9265 * C18992 + C9264 * C18991) * C13237) *
               C31028) *
              C30750 * C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C31063 -
           ((C9628 * C18992 + C5307 * C18991) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C31052 +
           ((C9267 * C18991 + C9268 * C18992) * C13237 +
            (C9628 * C18991 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C18992) *
                C13238) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C976 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C977 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C31059 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C977 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C976 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C976 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C977 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C24699 + C24700) * C13238) *
              C30768 * C1044 -
          ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
              C1045 +
          ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
              C1046 -
          ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
              C1047 +
          ((C25555 + C25554) * C13237 +
           (C5503 * C18991 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C18992) *
               C13238) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C31063 -
           ((C25318 + C25319) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C31052 +
           ((C9261 * C18991 + C9262 * C18992) * C13237 +
            (C25702 + C25703) * C13238) *
               C31028) *
              C976 +
          (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C31052 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C31063 -
           ((C25706 + C25707) * C13238 + (C25703 + C25702) * C13237) * C31028) *
              C977 +
          (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C31063 -
           ((C5647 * C18992 + C5646 * C18991) * C13238 +
            (C25705 + C25704) * C13237) *
               C31052 +
           ((C25707 + C25706) * C13237 +
            (C5647 * C18991 +
             (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C18992) *
                C13238) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30995 -
           ((C5644 * C18992 + C5303 * C18991) * C13238 +
            (C9261 * C18992 + C9260 * C18991) * C13237) *
               C30855) *
              C30750 * C580 +
          (((C9263 * C18991 + C9264 * C18992) * C13237 +
            (C5304 * C18991 + C6480 * C18992) * C13238) *
               C30855 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30995) *
              C30750 * C581 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30995 -
           ((C9628 * C18992 + C5307 * C18991) * C13238 +
            (C9267 * C18992 + C9266 * C18991) * C13237) *
               C30855) *
              C30750 * C582 +
          (((C9475 * C18991 + C9476 * C18992) * C13237 +
            (C24992 * C18991 +
             (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C18992) *
                C13238) *
               C30855 -
           ((C24993 + C24987) * C13238 +
            (C9475 * C18992 +
             (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
                C13237) *
               C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
              C9260 * C18992) *
                 C13237 +
             (C24699 + C24700) * C13238) *
                C30995 -
            ((C25318 + C25319) * C13238 +
             (C9261 * C18992 + C9260 * C18991) * C13237) *
                C30855) *
               C976 +
           (((C25319 + C25318) * C13237 + (C25704 + C25705) * C13238) * C30855 -
            ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) *
                C30995) *
               C977 +
           (((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30995 -
            ((C5647 * C18992 + C5646 * C18991) * C13238 +
             (C25705 + C25704) * C13237) *
                C30855) *
               C31025) *
              C30980 +
          ((((C9263 * C18991 + C9264 * C18992) * C13237 +
             (C25320 + C25321) * C13238) *
                C30855 -
            ((C24704 + C24703) * C13238 +
             (C9263 * C18992 +
              (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                 C13237) *
                C30995) *
               C976 +
           (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30995 -
            ((C26034 + C26035) * C13238 + (C25321 + C25320) * C13237) *
                C30855) *
               C977 +
           (((C26035 + C26034) * C13237 +
             (C5914 * C18991 +
              (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C18992) *
                 C13238) *
                C30855 -
            ((C25838 + C25839) * C13238 + (C24706 + C24705) * C13237) *
                C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C4771 * C18991 + C5303 * C18992) * C13238) *
              C30768 * C30750 * C108 -
          ((C5304 * C18992 + C4774 * C18991) * C13238 +
           (C9263 * C18992 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
               C13237) *
              C30768 * C30750 * C109 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
            C9266 * C18992) *
               C13237 +
           (C4777 * C18991 + C5307 * C18992) * C13238) *
              C30768 * C30750 * C110 -
          (((C4601 * C845 + C5127 + C5127 + C30696 * C855) * C18992 +
            C5024 * C18991) *
               C13238 +
           (C9475 * C18992 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C18991) *
               C13237) *
              C30768 * C30750 * C111 +
          (((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C18991 +
            (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C18992) *
               C13237 +
           ((C4601 * C279 + C4617 + C4617 + C30696 * C299) * C18991 +
            (C4601 * C846 + C24552 + C24552 + C30696 * C856) * C18992) *
               C13238) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C31062 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C31050 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C268 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C31050 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C31062 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C31062 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C31050 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
             C9260 * C18992) *
                C13237 +
            (C24699 + C24700) * C13238) *
               C30768 * C976 -
           ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
               C977 +
           ((C24702 + C24701) * C13237 +
            (C4773 * C18991 + C5646 * C18992) * C13238) *
               C30768 * C31025) *
              C31059 +
          (((C24703 + C24704) * C13237 + (C24705 + C24706) * C13238) * C30768 *
               C977 -
           ((C24704 + C24703) * C13238 +
            (C9263 * C18992 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C18991) *
                C13237) *
               C30768 * C976 -
           ((C5914 * C18992 + C4776 * C18991) * C13238 +
            (C24706 + C24705) * C13237) *
               C30768 * C31025) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C18991 +
             C9266 * C18992) *
                C13237 +
            (C24707 + C24708) * C13238) *
               C30768 * C976 -
           ((C24709 + C24710) * C13238 + (C24708 + C24707) * C13237) * C30768 *
               C977 +
           ((C24710 + C24709) * C13237 +
            (C4779 * C18991 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C18992) *
                C13238) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C18991 +
            C9260 * C18992) *
               C13237 +
           (C24699 + C24700) * C13238) *
              C30768 * C1044 -
          ((C24701 + C24702) * C13238 + (C24700 + C24699) * C13237) * C30768 *
              C1045 +
          ((C24702 + C24701) * C13237 + (C25552 + C25553) * C13238) * C30768 *
              C1046 -
          ((C25554 + C25555) * C13238 + (C25553 + C25552) * C13237) * C30768 *
              C1047 +
          ((C25555 + C25554) * C13237 +
           (C5503 * C18991 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C18992) *
               C13238) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C30809 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30816 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C2742) *
              C30727 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30816 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C30809 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C2742) *
              C30736 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C30809 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30816 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C2742) *
              C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C30809 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30816 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C2742) *
              C30727 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30816 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C30809 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C2742) *
              C30736 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C30809 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30816 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C2742) *
              C2745)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C30809 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C30816 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C2742) *
              C30727 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C30816 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C30809 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C2742) *
              C30736 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C30809 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C30816 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C2742) *
              C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30809 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30816 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C2742) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C30809 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30816 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30995) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30809 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30816 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C30995 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C2742) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C30809 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30816 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C30995) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30995 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C30809 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
               C30816 +
           ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30995 -
            (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
               C2742) *
              C2482 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30995) *
               C30809 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30995 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C30816 +
           ((C5305 * C8994 + C6479 * C8995 +
             (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C8996) *
                C30936 * C30855 -
            (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30995) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C2374 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C30813) *
                  C31068 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C30813 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C2374) *
                  C31061 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30768 * C2374 -
               (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                   C30948 * C30936 * C30768 * C30813) *
                  C31048 +
              ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
                C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
                   C30948 * C30936 * C30768 * C30813 -
               (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
                C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                   C30948 * C30936 * C30768 * C2374) *
                  C31029) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C31069 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C31065 +
               (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30768 * C31055 -
               (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 +
                C1070 + C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
                C101 * C1064) *
                   C30948 * C30936 * C30768 * C31035) *
                  C2482 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C31065 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C31069 -
               (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                   C30948 * C30936 * C30768 * C31055 +
               (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 +
                C1329 + C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
                C103 * C1326) *
                   C30948 * C30936 * C30768 * C31035) *
                  C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C31063 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C31052 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C31028) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C31052 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C31063 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C31028) *
               C30813) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C31052 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C31063 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C31028) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C31063 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C31052 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C2374 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C31068 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C2374) *
              C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C2374 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C31048 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31069 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31065 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C31055 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C2482 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31065 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31069 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C31055 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C31063 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C31052 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C31028) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31052 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31063 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
               C30813) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C31052 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C31063 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C31028) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C31063 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C31052 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C2374 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C30813) *
              C31068 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C30813 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C2374) *
              C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C2374 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C30813) *
              C31048 +
          ((C5024 * C8994 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C8995 +
            (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C8996) *
               C30936 * C30768 * C30813 -
           (C9476 * C8996 + C9475 * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C31069 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C31065 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31055 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
               C31035) *
              C2482 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C31065 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C31069 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31055 +
           (C4776 * C8994 + C5914 * C8995 +
            (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C8996) *
               C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C31063 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31052 +
            (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 *
                C31028) *
               C2374 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C31052 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C31063 -
            (C10921 * C8996 + C6698 * C8995 + C5644 * C8994) * C30936 *
                C31028) *
               C30813) *
              C2482 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C31052 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C31063 -
            (C10814 * C8996 + C9265 * C8995 + C9264 * C8994) * C30936 *
                C31028) *
               C2374 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C31063 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 * C31052 +
            (C6480 * C8994 + C10707 * C8995 +
             (C4601 * C10698 + C10704 + C10704 + C30696 * C10700) * C8996) *
                C30936 * C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30813) *
              C30727 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C30995 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30995) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30813) *
              C30727 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C30736 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C30995 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C30995) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30995 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C2374 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
               C30813) *
              C30727 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30995) *
               C2374 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30995 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C30813) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
             C9266 * C8995 + C9267 * C8996) *
                C30936 * C30995 -
            (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
               C2374 +
           ((C5307 * C8994 + C9628 * C8995 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C8996) *
                C30936 * C30855 -
            (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30995) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31069 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31065 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31055 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30768 * C31035) *
              C2482 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31065 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31069 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31055 +
           (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 + C1329 +
            C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
            C103 * C1326) *
               C30948 * C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C2374 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30813) *
              C31068 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C2374) *
              C31061 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C2374 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30813) *
              C31048 +
          ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
            C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C2374 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C31068 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C2374) *
              C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C2374 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C31048 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31069 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31065 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C31055 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C2482 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31065 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31069 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C31055 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C2374 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C30813) *
              C31068 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C30813 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C2374) *
              C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C2374 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C30813) *
              C31048 +
          ((C5024 * C8994 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C8995 +
            (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C8996) *
               C30936 * C30768 * C30813 -
           (C9476 * C8996 + C9475 * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C31069 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C31065 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31055 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
               C31035) *
              C2482 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C31065 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C31069 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31055 +
           (C4776 * C8994 + C5914 * C8995 +
            (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C8996) *
               C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30809 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30816 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C2742) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C30809 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30816 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C3136) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30809 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30816 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C3136 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C2742) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C30809 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30816 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C3136) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C3136 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C30809 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
               C30816 +
           ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C3136 -
            (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
               C2742) *
              C30980 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C3136) *
               C30809 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C3136 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C30816 +
           ((C5305 * C8994 + C6479 * C8995 +
             (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C8996) *
                C30936 * C30855 -
            (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C3136) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30851 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30858 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C3644) *
              C30809 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30858 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30851 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C3644) *
              C30816 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30851 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30858 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C3644) *
              C2742) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30851 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30858 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C3644) *
              C30809 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30858 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30851 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C3644) *
              C30816 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30851 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30858 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C3644) *
              C2742) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30851 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30858 +
           (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C3644) *
              C30809 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30858 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30851 -
           (C10921 * C8996 + C6698 * C8995 + C5644 * C8994) * C30936 * C3644) *
              C30816 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30851 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30858 +
           (C5645 * C8994 + C6697 * C8995 +
            (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C8996) *
               C30936 * C3644) *
              C2742) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                 C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                    C30948 * C30936 * C3136 -
                (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                 C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                    C30948 * C30936 * C30855) *
                   C2374 +
               ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                 C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                    C30948 * C30936 * C30855 -
                (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                 C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                    C30948 * C30936 * C3136) *
                   C30813) *
                  C31059 +
              (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                 C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                    C30948 * C30936 * C30855 -
                (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                 C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                    C30948 * C30936 * C3136) *
                   C2374 +
               ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                 C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                    C30948 * C30936 * C3136 -
                (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
                 C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                    C30948 * C30936 * C30855) *
                   C30813) *
                  C31046 +
              (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                 C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                    C30948 * C30936 * C3136 -
                (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
                 C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                    C30948 * C30936 * C30855) *
                   C2374 +
               ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
                 C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                    C30948 * C30936 * C30855 -
                (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                 C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                    C30948 * C30936 * C3136) *
                   C30813) *
                  C31019) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C3136 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C30855) *
                  C31069 +
              ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                   C30948 * C30936 * C30855 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C3136) *
                  C31065 +
              ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C3136 -
               (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
                C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
                C101 * C1207) *
                   C30948 * C30936 * C30855) *
                  C31055 +
              ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 +
                C1591 + C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
                C103 * C1588) *
                   C30948 * C30936 * C30855 -
               (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 +
                C1070 + C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
                C101 * C1064) *
                   C30948 * C30936 * C3136) *
                  C31035) *
             C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31070 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31067 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31058 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C2374 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C31067 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C31070 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31058 +
           (C113 * C2264 + C2274 + C2274 + C101 * C2270 + C115 * C2265 + C2275 +
            C2275 + C102 * C2271 + C117 * C2266 + C2276 + C2276 +
            C103 * C2272) *
               C30948 * C30936 * C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30813) *
              C31059 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C3136 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C31069 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
              C31065 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C31055 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31070 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31067 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31058 -
           (C6699 * C4600 + C6700 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C2374 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31067 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31070 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31058 +
           (C6700 * C4598 + C6699 * C4599 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C30948 * C4600) *
               C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C3136 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C2374 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
               C30813) *
              C31059 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C3136) *
               C2374 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C3136 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C30813) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
             C9266 * C8995 + C9267 * C8996) *
                C30936 * C3136 -
            (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
               C2374 +
           ((C5307 * C8994 + C9628 * C8995 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C8996) *
                C30936 * C30855 -
            (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C3136 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C31069 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
              C31065 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C3136 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
              C31055 +
          ((C5646 * C8994 + C5647 * C8995 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C8996) *
               C30936 * C30855 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C31070 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31067 +
           (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C31058 -
           (C10552 * C8996 + C10551 * C8995 + C9262 * C8994) * C30936 *
               C31041) *
              C2374 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C31067 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C31070 -
           (C10921 * C8996 + C6698 * C8995 + C5644 * C8994) * C30936 * C31058 +
           (C6698 * C8994 + C10921 * C8995 +
            (C4601 * C10912 + C10918 + C10918 + C30696 * C10914) * C8996) *
               C30936 * C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30851 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30858 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C3644) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30858 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30851 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C3644) *
               C30813) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30858 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30851 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C3644) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30851 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30858 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30851 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30858 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C3644) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30858 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30851 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C3644) *
               C30813) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30858 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30851 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C3644) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30851 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30858 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30851 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30858 +
            (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C3644) *
               C2374 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30858 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30851 -
            (C10921 * C8996 + C6698 * C8995 + C5644 * C8994) * C30936 * C3644) *
               C30813) *
              C30980 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30858 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30851 -
            (C10814 * C8996 + C9265 * C8995 + C9264 * C8994) * C30936 * C3644) *
               C2374 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30851 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 * C30858 +
            (C6480 * C8994 + C10707 * C8995 +
             (C4601 * C10698 + C10704 + C10704 + C30696 * C10700) * C8996) *
                C30936 * C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C3136 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C31069 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30855 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C3136) *
              C31065 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C3136 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30855) *
              C31055 +
          ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 + C1591 +
            C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
            C103 * C1588) *
               C30948 * C30936 * C30855 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30813) *
              C31059 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C31046 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C3136 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30813) *
              C31059 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C3136 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C31069 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
              C31065 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C31055 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C3136 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C2374 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
               C30813) *
              C31059 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C3136) *
               C2374 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C3136 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C30813) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
             C9266 * C8995 + C9267 * C8996) *
                C30936 * C3136 -
            (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
               C2374 +
           ((C5307 * C8994 + C9628 * C8995 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C8996) *
                C30936 * C30855 -
            (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C3136 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C31069 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
              C31065 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C3136 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
              C31055 +
          ((C5646 * C8994 + C5647 * C8995 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C8996) *
               C30936 * C30855 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C30994 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C30813) *
                  C580 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C30813 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C30994) *
                  C581 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30768 * C30994 -
               (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                   C30948 * C30936 * C30768 * C30813) *
                  C582 +
              ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
                C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
                   C30948 * C30936 * C30768 * C30813 -
               (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
                C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                   C30948 * C30936 * C30768 * C30994) *
                  C31029) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C1318 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C1319 +
               (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30768 * C1320 -
               (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 +
                C1070 + C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
                C101 * C1064) *
                   C30948 * C30936 * C30768 * C31035) *
                  C30980 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C1319 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C1318 -
               (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                   C30948 * C30936 * C30768 * C1320 +
               (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 +
                C1329 + C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
                C103 * C1326) *
                   C30948 * C30936 * C30768 * C31035) *
                  C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C1702 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C1703 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C31028) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C1703 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C1702 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C31028) *
               C30813) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C1703 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C1702 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C31028) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C1702 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C1703 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C30994 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C580 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C30994) *
              C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C30994 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C582 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C1318 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1319 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1320 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C30980 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C1319 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C1318 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C1320 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C1702 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C1703 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C31028) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C1703 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C1702 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
               C30813) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C1703 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C1702 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C31028) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C1702 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C1703 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C30994 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C30813) *
              C580 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C30813 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C30994) *
              C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C30994 -
           ((C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C8996 +
            C5307 * C8995 + C4777 * C8994) *
               C30936 * C30768 * C30813) *
              C582 +
          ((C5024 * C8994 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C8995 +
            (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C8996) *
               C30936 * C30768 * C30813 -
           ((C4601 * C439 + C8998 + C8998 + C30696 * C459) * C8996 +
            (C4601 * C438 + C5126 + C5126 + C30696 * C458) * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C1318 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C1319 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C1320 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
               C31035) *
              C30980 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C1319 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C1318 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C1320 +
           (C4776 * C8994 + C5914 * C8995 +
            (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C8996) *
               C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C1702 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C1703 +
            (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 *
                C31028) *
               C30994 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C1703 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C1702 -
            ((C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C8996 +
             C6698 * C8995 + C5644 * C8994) *
                C30936 * C31028) *
               C30813) *
              C30980 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C1703 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C1702 -
            ((C4601 * C1886 + C9233 + C9233 + C30696 * C1898) * C8996 +
             C9265 * C8995 + C9264 * C8994) *
                C30936 * C31028) *
               C30994 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C1702 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 * C1703 +
            (C6480 * C8994 + C10707 * C8995 +
             (C4601 * C10698 + C10704 + C10704 + C30696 * C10700) * C8996) *
                C30936 * C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                 C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                    C30948 * C30936 * C30995 -
                (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                 C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                    C30948 * C30936 * C30855) *
                   C30994 +
               ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                 C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                    C30948 * C30936 * C30855 -
                (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                 C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                    C30948 * C30936 * C30995) *
                   C30813) *
                  C268 +
              (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                 C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                    C30948 * C30936 * C30855 -
                (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                 C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                    C30948 * C30936 * C30995) *
                   C30994 +
               ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                 C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                    C30948 * C30936 * C30995 -
                (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
                 C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                    C30948 * C30936 * C30855) *
                   C30813) *
                  C269 +
              (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                 C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                    C30948 * C30936 * C30995 -
                (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
                 C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                    C30948 * C30936 * C30855) *
                   C30994 +
               ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
                 C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                    C30948 * C30936 * C30855 -
                (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                 C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                    C30948 * C30936 * C30995) *
                   C30813) *
                  C31019) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30995 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C30855) *
                  C1318 +
              ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                   C30948 * C30936 * C30855 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30995) *
                  C1319 +
              ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30995 -
               (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
                C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
                C101 * C1207) *
                   C30948 * C30936 * C30855) *
                  C1320 +
              ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 +
                C1591 + C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
                C103 * C1588) *
                   C30948 * C30936 * C30855 -
               (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 +
                C1070 + C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
                C101 * C1064) *
                   C30948 * C30936 * C30995) *
                  C31035) *
             C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C2156 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C2157 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C2158 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C30994 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C2157 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C2156 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C2158 +
           (C113 * C2264 + C2274 + C2274 + C101 * C2270 + C115 * C2265 + C2275 +
            C2275 + C102 * C2271 + C117 * C2266 + C2276 + C2276 +
            C103 * C2272) *
               C30948 * C30936 * C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 +
             (C4601 * C1580 + C5279 + C5279 + C30696 * C1586) * C30948 *
                 C4600) *
                C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30813) *
              C268 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            ((C4601 * C1581 + C5284 + C5284 + C30696 * C1587) * C30948 * C4600 +
             C5311 * C4599 + C5310 * C4598) *
                C30855) *
               C30813) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C30995 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C1318 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
              C1319 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C1320 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C2156 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C2157 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C2158 -
           (C6699 * C4600 + C6700 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C30994 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C2157 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C2156 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C2158 +
           (C6700 * C4598 + C6699 * C4599 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C30948 * C4600) *
               C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30995 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C30994 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
               C30813) *
              C268 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30995) *
               C30994 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30995 -
            ((C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C8996 +
             C6480 * C8995 + C5304 * C8994) *
                C30936 * C30855) *
               C30813) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
             C9266 * C8995 + C9267 * C8996) *
                C30936 * C30995 -
            (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
               C30994 +
           ((C5307 * C8994 + C9628 * C8995 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C8996) *
                C30936 * C30855 -
            (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30995 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C1318 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
              C1319 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30995 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
              C1320 +
          ((C5646 * C8994 + C5647 * C8995 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C8996) *
               C30936 * C30855 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C2156 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C2157 +
           (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C2158 -
           (C10552 * C8996 + C10551 * C8995 + C9262 * C8994) * C30936 *
               C31041) *
              C30994 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C2157 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C2156 -
           (C10921 * C8996 + C6698 * C8995 + C5644 * C8994) * C30936 * C2158 +
           (C6698 * C8994 + C10921 * C8995 +
            (C4601 * C10912 + C10918 + C10918 + C30696 * C10914) * C8996) *
               C30936 * C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
               C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                  C30948 * C30936 * C30768 * C30750 * C108 -
              (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
               C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                  C30948 * C30936 * C30768 * C30750 * C109 +
              (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
               C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                  C30948 * C30936 * C30768 * C30750 * C110 -
              (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
               C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                  C30948 * C30936 * C30768 * C30750 * C111 +
              (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 +
               C154 + C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
                  C30948 * C30936 * C30768 * C30750 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C31050 +
               (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30768 * C31025) *
                  C268 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C31050 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                   C30948 * C30936 * C30768 * C31025) *
                  C269 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                   C30948 * C30936 * C30768 * C31050 +
               (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
                C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
                   C30948 * C30936 * C30768 * C31025) *
                  C31019) +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C31063 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C31052 +
               (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
                C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                   C30948 * C30936 * C31028) *
                  C30750 * C268 +
              ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                   C30948 * C30936 * C31052 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C31063 -
               (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
                C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                   C30948 * C30936 * C31028) *
                  C30750 * C269 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C31063 -
               (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
                C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                   C30948 * C30936 * C31052 +
               (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
                C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
                   C30948 * C30936 * C31028) *
                  C30750 * C31019) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C976 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C977 +
               (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30768 * C31025) *
                  C31059 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C977 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C976 -
               (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                   C30948 * C30936 * C30768 * C31025) *
                  C31046 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30768 * C976 -
               (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                   C30948 * C30936 * C30768 * C977 +
               (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
                C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
                   C30948 * C30936 * C30768 * C31025) *
                  C31019) -
         0.25 * std::pow(Pi, 2.5) *
             ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
               C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                  C30948 * C30936 * C30768 * C1044 -
              (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
               C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                  C30948 * C30936 * C30768 * C1045 +
              (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
               C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                  C30948 * C30936 * C30768 * C1046 -
              (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 +
               C1070 + C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
               C101 * C1064) *
                  C30948 * C30936 * C30768 * C1047 +
              (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 +
               C1073 + C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 +
               C103 * C1067) *
                  C30948 * C30936 * C30768 * C1048) *
             C30722 +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C31063 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C31052 +
               (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
                C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                   C30948 * C30936 * C31028) *
                  C976 +
              ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                   C30948 * C30936 * C31052 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C31063 -
               (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
                C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
                C101 * C1204) *
                   C30948 * C30936 * C31028) *
                  C977 +
              ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C31063 -
               (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
                C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
                C101 * C1207) *
                   C30948 * C30936 * C31052 +
               (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 +
                C1219 + C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
                C103 * C1210) *
                   C30948 * C30936 * C31028) *
                  C31025) *
             C30722 +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C1702 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C1703 +
               (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
                C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                   C30948 * C30936 * C31028) *
                  C30750 * C31059 +
              ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                   C30948 * C30936 * C1703 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C1702 -
               (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
                C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                   C30948 * C30936 * C31028) *
                  C30750 * C31046 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C1702 -
               (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
                C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                   C30948 * C30936 * C1703 +
               (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
                C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
                   C30948 * C30936 * C31028) *
                  C30750 * C31019) +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C1702 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C1703 +
               (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
                C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                   C30948 * C30936 * C31028) *
                  C31062 +
              ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                   C30948 * C30936 * C1703 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C1702 -
               (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
                C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
                C101 * C1204) *
                   C30948 * C30936 * C31028) *
                  C31050 +
              ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C1702 -
               (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
                C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
                C101 * C1207) *
                   C30948 * C30936 * C1703 +
               (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 +
                C1219 + C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
                C103 * C1210) *
                   C30948 * C30936 * C31028) *
                  C31025) *
             C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C1877 -
          (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 + C464 +
           C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
              C30948 * C30936 * C1878 +
          (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 + C467 +
           C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
              C30948 * C30936 * C1879 -
          (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
           C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 + C101 * C1896) *
              C30948 * C30936 * C1880 +
          (C113 * C1885 + C1904 + C1904 + C101 * C1897 + C115 * C1886 + C1905 +
           C1905 + C102 * C1898 + C117 * C1887 + C1906 + C1906 + C103 * C1899) *
              C30948 * C30936 * C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            (C4601 * C1186 + C4903 + C4903 + C30696 * C1204) * C30948 * C4599 +
            (C4601 * C1190 + C4904 + C4904 + C30696 * C1208) * C30948 * C4600) *
               C31028) *
              C30750 * C268 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C31052 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C31063 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C31063 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C31052 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C976 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31052 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31063 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C977 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C31063 -
           ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
            C5650 * C4599 + C5308 * C4598) *
               C31052 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C30750 * C31059 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C1703 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C1702 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C1702 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C1703 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C31062 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C1703 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C1702 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C31050 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C1702 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C1703 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C1877 -
          (C5308 * C4600 + C5309 * C4599 +
           (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
              C1878 +
          ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
           C5648 * C4599 + C5649 * C4600) *
              C1879 -
          ((C4601 * C6305 + C6315 + C6315 + C30696 * C6311) * C30948 * C4600 +
           (C4601 * C2264 + C6316 + C6316 + C30696 * C2270) * C30948 * C4599 +
           (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
              C1880 +
          ((C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C30948 * C4598 +
           (C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C30948 * C4599 +
           (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C30948 * C4600) *
              C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
           (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
              C30936 * C30768 * C30750 * C108 -
          ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
           (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
              C30936 * C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
           (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
           (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
              C30936 * C30768 * C30750 * C110 -
          ((C4601 * C439 + C8998 + C8998 + C30696 * C459) * C8996 +
           (C4601 * C438 + C5126 + C5126 + C30696 * C458) * C8995 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
              C30936 * C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C8994 +
           (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C8995 +
           (C4601 * C441 + C9000 + C9000 + C30696 * C461) * C8996) *
              C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
            (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
               C30936 * C30768 * C31062 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C31050 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C268 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C31050 -
           ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
            (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C31062 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
            (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
               C30936 * C30768 * C31062 -
           ((C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C8996 +
            C5307 * C8995 + C4777 * C8994) *
               C30936 * C30768 * C31050 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C31063 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31052 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C30750 * C268 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C31052 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C31063 -
           ((C4601 * C1886 + C9233 + C9233 + C30696 * C1898) * C8996 +
            C9265 * C8995 + C9264 * C8994) *
               C30936 * C31028) *
              C30750 * C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C31063 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C31052 +
           (C9267 * C8994 + C9268 * C8995 +
            (C4601 * C1887 + C9241 + C9241 + C30696 * C1899) * C8996) *
               C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C976 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C977 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C31059 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C977 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C976 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C976 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C977 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           C9260 * C8995 + C9261 * C8996) *
              C30936 * C30768 * C1044 -
          (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
              C1045 +
          (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
              C1046 -
          (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
              C1047 +
          (C5502 * C8994 + C6022 * C8995 +
           (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C8996) *
              C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C31063 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31052 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C976 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C31052 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C31063 -
           ((C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C8996 +
            C6698 * C8995 + C5644 * C8994) *
               C30936 * C31028) *
              C977 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C31063 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C31052 +
           (C5645 * C8994 + C6697 * C8995 +
            (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C8996) *
               C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C1702 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C1703 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C30750 * C31059 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C1703 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C1702 -
           ((C4601 * C1886 + C9233 + C9233 + C30696 * C1898) * C8996 +
            C9265 * C8995 + C9264 * C8994) *
               C30936 * C31028) *
              C30750 * C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C1702 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C1703 +
           (C9267 * C8994 + C9268 * C8995 +
            (C4601 * C1887 + C9241 + C9241 + C30696 * C1899) * C8996) *
               C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C1702 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C1703 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C31062 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C1703 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C1702 -
           ((C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C8996 +
            C6698 * C8995 + C5644 * C8994) *
               C30936 * C31028) *
              C31050 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C1702 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C1703 +
           (C5645 * C8994 + C6697 * C8995 +
            (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C8996) *
               C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           C9260 * C8995 + C9261 * C8996) *
              C30936 * C1877 -
          (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C1878 +
          (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C1879 -
          (C10552 * C8996 + C10551 * C8995 + C9262 * C8994) * C30936 * C1880 +
          (C10551 * C8994 + C10552 * C8995 +
           (C4601 * C10535 + C10546 + C10546 + C30696 * C10539) * C8996) *
              C30936 * C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30995 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C30855) *
                  C30750 * C580 +
              ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                   C30948 * C30936 * C30855 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30995) *
                  C30750 * C581 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30995 -
               (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
                C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                   C30948 * C30936 * C30855) *
                  C30750 * C582 +
              ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
                C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
                   C30948 * C30936 * C30855 -
               (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
                C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                   C30948 * C30936 * C30995) *
                  C30750 * C31029) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                 C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                    C30948 * C30936 * C30995 -
                (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                 C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                    C30948 * C30936 * C30855) *
                   C976 +
               ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                 C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                    C30948 * C30936 * C30855 -
                (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                 C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                    C30948 * C30936 * C30995) *
                   C977 +
               ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                 C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                    C30948 * C30936 * C30995 -
                (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
                 C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
                 C101 * C1207) *
                    C30948 * C30936 * C30855) *
                   C31025) *
                  C30980 +
              (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                 C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                    C30948 * C30936 * C30855 -
                (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                 C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                    C30948 * C30936 * C30995) *
                   C976 +
               ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                 C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                    C30948 * C30936 * C30995 -
                (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
                 C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                    C30948 * C30936 * C30855) *
                   C977 +
               ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
                 C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
                 C103 * C1478) *
                    C30948 * C30936 * C30855 -
                (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                 C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                    C30948 * C30936 * C30995) *
                   C31025) *
                  C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C2156 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C2157 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C2158 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C30750 * C30980 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C2157 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C2156 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C2158 +
           (C113 * C1883 + C2164 + C2164 + C101 * C1895 + C115 * C1882 + C2165 +
            C2165 + C102 * C1894 + C117 * C2160 + C2166 + C2166 +
            C103 * C2162) *
               C30948 * C30936 * C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C580 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30995) *
              C30750 * C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30995 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C582 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C976 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C977 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
            ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
             C5650 * C4599 + C5308 * C4598) *
                C30855) *
               C31025) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C976 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C977 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C2156 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C2157 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C2158 -
           ((C4601 * C6305 + C6315 + C6315 + C30696 * C6311) * C30948 * C4600 +
            (C4601 * C2264 + C6316 + C6316 + C30696 * C2270) * C30948 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C30750 * C30980 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C2157 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C2156 -
           (C6481 * C4600 + C6482 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C2158 +
           ((C4601 * C1883 + C6584 + C6584 + C30696 * C1895) * C30948 * C4598 +
            (C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C30948 * C4599 +
            (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C30948 * C4600) *
               C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30995 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C30750 * C580 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30995) *
              C30750 * C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30995 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
              C30750 * C582 +
          ((C9475 * C8994 + C9476 * C8995 +
            (C4601 * C2160 + C9470 + C9470 + C30696 * C2162) * C8996) *
               C30936 * C30855 -
           (C9476 * C8996 + C9475 * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30995 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C976 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
               C977 +
           ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30995 -
            (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
               C31025) *
              C30980 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30995) *
               C976 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30995 -
            ((C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C8996 +
             C6480 * C8995 + C5304 * C8994) *
                C30936 * C30855) *
               C977 +
           ((C5305 * C8994 + C6479 * C8995 +
             (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C8996) *
                C30936 * C30855 -
            (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C2156 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C2157 +
           (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C2158 -
           (C10552 * C8996 + C10551 * C8995 + C9262 * C8994) * C30936 *
               C31041) *
              C30750 * C30980 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C2157 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C2156 -
           (C10814 * C8996 + C9265 * C8995 + C9264 * C8994) * C30936 * C2158 +
           (C9265 * C8994 + C10814 * C8995 +
            (C4601 * C10805 + C10811 + C10811 + C30696 * C10807) * C8996) *
               C30936 * C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C30750 * C108 -
          (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 + C145 +
           C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
              C30948 * C30936 * C30768 * C30750 * C109 +
          (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 + C148 +
           C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
              C30948 * C30936 * C30768 * C30750 * C110 -
          (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 + C151 +
           C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
              C30948 * C30936 * C30768 * C30750 * C111 +
          (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 + C154 +
           C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
              C30948 * C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C268 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31050 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C1702 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C1703 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C30750 * C31059 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C1703 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C1702 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31028) *
              C30750 * C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C1702 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C1703 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C1702 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C1703 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C31062 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C1703 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C1702 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31028) *
              C31050 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C1702 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C1703 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C30750 * C31059 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C1703 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C1702 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C1702 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C1703 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C31062 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C1703 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C1702 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C31050 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C1702 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C1703 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
           (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
              C30936 * C30768 * C30750 * C108 -
          ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
           (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
              C30936 * C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
           (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
           (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
              C30936 * C30768 * C30750 * C110 -
          ((C4601 * C439 + C8998 + C8998 + C30696 * C459) * C8996 +
           (C4601 * C438 + C5126 + C5126 + C30696 * C458) * C8995 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
              C30936 * C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C8994 +
           (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C8995 +
           (C4601 * C441 + C9000 + C9000 + C30696 * C461) * C8996) *
              C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
            (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
               C30936 * C30768 * C31062 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C31050 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C268 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C31050 -
           ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
            (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C31062 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
            (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
               C30936 * C30768 * C31062 -
           ((C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C8996 +
            C5307 * C8995 + C4777 * C8994) *
               C30936 * C30768 * C31050 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C976 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C977 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C31059 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C977 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C976 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C976 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C977 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           C9260 * C8995 + C9261 * C8996) *
              C30936 * C30768 * C1044 -
          (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
              C1045 +
          (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
              C1046 -
          (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
              C1047 +
          (C5502 * C8994 + C6022 * C8995 +
           (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C8996) *
              C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C1702 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C1703 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C30750 * C31059 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C1703 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C1702 -
           ((C4601 * C1886 + C9233 + C9233 + C30696 * C1898) * C8996 +
            C9265 * C8995 + C9264 * C8994) *
               C30936 * C31028) *
              C30750 * C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C1702 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C1703 +
           (C9267 * C8994 + C9268 * C8995 +
            (C4601 * C1887 + C9241 + C9241 + C30696 * C1899) * C8996) *
               C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C1702 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C1703 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C31062 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C1703 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C1702 -
           ((C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C8996 +
            C6698 * C8995 + C5644 * C8994) *
               C30936 * C31028) *
              C31050 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C1702 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C1703 +
           (C5645 * C8994 + C6697 * C8995 +
            (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C8996) *
               C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30813) *
              C30727 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C3136 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C3136) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30813) *
              C30727 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C30736 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C3136 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C3136) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C3136 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C30994 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
               C30813) *
              C30727 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C3136) *
               C30994 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C3136 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C30813) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
             C9266 * C8995 + C9267 * C8996) *
                C30936 * C3136 -
            (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
               C30994 +
           ((C5307 * C8994 + C9628 * C8995 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C8996) *
                C30936 * C30855 -
            (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C3136) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30851 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30858 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C3644) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30858 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30851 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C3644) *
               C30813) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30858 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30851 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C3644) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30851 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30858 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30851 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30858 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C3644) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30858 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30851 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C3644) *
               C30813) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30858 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30851 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C3644) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30851 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30858 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30851 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30858 +
            (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C3644) *
               C30994 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30858 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30851 -
            (C10921 * C8996 + C6698 * C8995 + C5644 * C8994) * C30936 * C3644) *
               C30813) *
              C2482 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30858 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30851 -
            (C10814 * C8996 + C9265 * C8995 + C9264 * C8994) * C30936 * C3644) *
               C30994 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30851 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 * C30858 +
            (C6480 * C8994 + C10707 * C8995 +
             (C4601 * C10698 + C10704 + C10704 + C30696 * C10700) * C8996) *
                C30936 * C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C3136 -
               (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                   C30948 * C30936 * C30855) *
                  C30750 * C31068 +
              ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                   C30948 * C30936 * C30855 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C3136) *
                  C30750 * C31061 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C3136 -
               (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
                C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                   C30948 * C30936 * C30855) *
                  C30750 * C31048 +
              ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
                C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
                   C30948 * C30936 * C30855 -
               (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
                C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                   C30948 * C30936 * C3136) *
                  C30750 * C31029) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                 C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                    C30948 * C30936 * C3136 -
                (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
                 C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                    C30948 * C30936 * C30855) *
                   C31062 +
               ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
                 C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                    C30948 * C30936 * C30855 -
                (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                 C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                    C30948 * C30936 * C3136) *
                   C31050 +
               ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                 C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                    C30948 * C30936 * C3136 -
                (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
                 C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
                 C101 * C1207) *
                    C30948 * C30936 * C30855) *
                   C31025) *
                  C2482 +
              (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
                 C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                    C30948 * C30936 * C30855 -
                (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                 C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                    C30948 * C30936 * C3136) *
                   C31062 +
               ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                 C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                    C30948 * C30936 * C3136 -
                (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
                 C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                    C30948 * C30936 * C30855) *
                   C31050 +
               ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
                 C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
                 C103 * C1478) *
                    C30948 * C30936 * C30855 -
                (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                 C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                    C30948 * C30936 * C3136) *
                   C31025) *
                  C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31070 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31067 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31058 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C30750 * C2482 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C31067 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C31070 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31058 +
           (C113 * C1883 + C2164 + C2164 + C101 * C1895 + C115 * C1882 + C2165 +
            C2165 + C102 * C1894 + C117 * C2160 + C2166 + C2166 +
            C103 * C2162) *
               C30948 * C30936 * C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C31068 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C3136) *
              C30750 * C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C3136 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C31048 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C31062 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C31050 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C31025) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C31062 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C31050 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31070 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31067 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31058 -
           (C6699 * C4600 + C6700 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C30750 * C2482 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C31067 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C31070 -
           (C6481 * C4600 + C6482 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31058 +
           ((C4601 * C1883 + C6584 + C6584 + C30696 * C1895) * C30948 * C4598 +
            (C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C30948 * C4599 +
            (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C30948 * C4600) *
               C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C3136 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C30750 * C31068 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C3136) *
              C30750 * C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C3136 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
              C30750 * C31048 +
          ((C9475 * C8994 + C9476 * C8995 +
            (C4601 * C2160 + C9470 + C9470 + C30696 * C2162) * C8996) *
               C30936 * C30855 -
           (C9476 * C8996 + C9475 * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C3136 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C31062 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
               C31050 +
           ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C3136 -
            (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
               C31025) *
              C2482 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C3136) *
               C31062 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C3136 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C31050 +
           ((C5305 * C8994 + C6479 * C8995 +
             (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C8996) *
                C30936 * C30855 -
            (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C31070 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31067 +
           (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C31058 -
           (C10552 * C8996 + C10551 * C8995 + C9262 * C8994) * C30936 *
               C31041) *
              C30750 * C2482 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C31067 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C31070 -
           (C10814 * C8996 + C9265 * C8995 + C9264 * C8994) * C30936 * C31058 +
           (C9265 * C8994 + C10814 * C8995 +
            (C4601 * C10805 + C10811 + C10811 + C30696 * C10807) * C8996) *
               C30936 * C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30851 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30858 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C3644) *
              C30750 * C30727 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C30858 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30851 -
           (C6481 * C4600 + C6482 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C3644) *
              C30750 * C30736 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30851 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30858 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C3644) *
              C30750 * C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30851 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30858 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C3644) *
              C30750 * C30727 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30858 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30851 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C3644) *
              C30750 * C30736 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30851 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30858 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C3644) *
              C30750 * C2745)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30851 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30858 +
           (C9261 * C8994 + C9262 * C8995 + C10551 * C8996) * C30936 * C3644) *
              C30750 * C30727 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30858 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30851 -
           (C10814 * C8996 + C9265 * C8995 + C9264 * C8994) * C30936 * C3644) *
              C30750 * C30736 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30851 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30858 +
           (C9267 * C8994 + C9268 * C8995 +
            (C4601 * C1887 + C9241 + C9241 + C30696 * C1899) * C8996) *
               C30936 * C3644) *
              C30750 * C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C31062 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C31050 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C3136 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C31025) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C31062 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C31050 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C3136 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C30750 * C31068 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30855 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C3136) *
              C30750 * C31061 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C3136 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30855) *
              C30750 * C31048 +
          ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
            C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
               C30948 * C30936 * C30855 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C31068 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C3136) *
              C30750 * C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C3136 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C31048 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C31062 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C31050 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C31025) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C31062 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C31050 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C3136 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C30750 * C31068 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C3136) *
              C30750 * C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C3136 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
              C30750 * C31048 +
          ((C9475 * C8994 + C9476 * C8995 +
            (C4601 * C2160 + C9470 + C9470 + C30696 * C2162) * C8996) *
               C30936 * C30855 -
           (C9476 * C8996 + C9475 * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C3136 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C31062 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C3136) *
               C31050 +
           ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C3136 -
            (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
               C31025) *
              C2482 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C3136) *
               C31062 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C3136 -
            (C10707 * C8996 + C6480 * C8995 + C5304 * C8994) * C30936 *
                C30855) *
               C31050 +
           ((C5305 * C8994 + C6479 * C8995 +
             (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C8996) *
                C30936 * C30855 -
            (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C1318 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C1319 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C1320 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30768 * C31035) *
              C30980 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C1319 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C1318 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C1320 +
           (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 + C1329 +
            C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
            C103 * C1326) *
               C30948 * C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C30994 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30813) *
              C580 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C30994) *
              C581 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C30994 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30813) *
              C582 +
          ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
            C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C30994 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C580 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C30994) *
              C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C30994 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C582 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C1318 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1319 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1320 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C30980 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C1319 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C1318 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C1320 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C30994 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C30813) *
              C580 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C30813 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C30994) *
              C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C30994 -
           ((C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C8996 +
            C5307 * C8995 + C4777 * C8994) *
               C30936 * C30768 * C30813) *
              C582 +
          ((C5024 * C8994 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C8995 +
            (C4601 * C2052 + C9367 + C9367 + C30696 * C2054) * C8996) *
               C30936 * C30768 * C30813 -
           ((C4601 * C439 + C8998 + C8998 + C30696 * C459) * C8996 +
            (C4601 * C438 + C5126 + C5126 + C30696 * C458) * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C1318 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C1319 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C1320 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
               C31035) *
              C30980 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C1319 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C1318 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C1320 +
           (C4776 * C8994 + C5914 * C8995 +
            (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C8996) *
               C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30995 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C1318 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30855 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30995) *
              C1319 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30995 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30855) *
              C1320 +
          ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 + C1591 +
            C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
            C103 * C1588) *
               C30948 * C30936 * C30855 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30813) *
              C268 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C269 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C30995 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 +
             (C4601 * C1580 + C5279 + C5279 + C30696 * C1586) * C30948 *
                 C4600) *
                C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30813) *
              C268 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            ((C4601 * C1581 + C5284 + C5284 + C30696 * C1587) * C30948 * C4600 +
             C5311 * C4599 + C5310 * C4598) *
                C30855) *
               C30813) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C30995 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C1318 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
              C1319 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C1320 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30995 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C30994 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
               C30813) *
              C268 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30995) *
               C30994 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30995 -
            ((C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C8996 +
             C6480 * C8995 + C5304 * C8994) *
                C30936 * C30855) *
               C30813) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
             C9266 * C8995 + C9267 * C8996) *
                C30936 * C30995 -
            (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
               C30994 +
           ((C5307 * C8994 + C9628 * C8995 +
             (C4601 * C2266 + C9625 + C9625 + C30696 * C2272) * C8996) *
                C30936 * C30855 -
            (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30995 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C1318 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
              C1319 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30995 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
              C1320 +
          ((C5646 * C8994 + C5647 * C8995 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C8996) *
               C30936 * C30855 -
           (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
               C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                  C30948 * C30936 * C30768 * C30750 * C108 -
              (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
               C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                  C30948 * C30936 * C30768 * C30750 * C109 +
              (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
               C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                  C30948 * C30936 * C30768 * C30750 * C110 -
              (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
               C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                  C30948 * C30936 * C30768 * C30750 * C111 +
              (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 +
               C154 + C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
                  C30948 * C30936 * C30768 * C30750 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C31050 +
               (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30768 * C31025) *
                  C268 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C31050 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                   C30948 * C30936 * C30768 * C31025) *
                  C269 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                   C30948 * C30936 * C30768 * C31050 +
               (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
                C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
                   C30948 * C30936 * C30768 * C31025) *
                  C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31063 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31052 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C30750 * C268 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C31052 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C31063 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31028) *
              C30750 * C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C31063 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C31052 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31063 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31052 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C976 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C31052 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C31063 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31028) *
              C977 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C31063 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C31052 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            (C4601 * C1186 + C4903 + C4903 + C30696 * C1204) * C30948 * C4599 +
            (C4601 * C1190 + C4904 + C4904 + C30696 * C1208) * C30948 * C4600) *
               C31028) *
              C30750 * C268 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C31052 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C31063 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C31063 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C31052 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C976 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31052 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31063 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C977 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C31063 -
           ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
            C5650 * C4599 + C5308 * C4598) *
               C31052 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
           (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
              C30936 * C30768 * C30750 * C108 -
          ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
           (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
              C30936 * C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
           (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
           (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
              C30936 * C30768 * C30750 * C110 -
          ((C4601 * C439 + C8998 + C8998 + C30696 * C459) * C8996 +
           (C4601 * C438 + C5126 + C5126 + C30696 * C458) * C8995 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
              C30936 * C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C8994 +
           (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C8995 +
           (C4601 * C441 + C9000 + C9000 + C30696 * C461) * C8996) *
              C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
            (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
               C30936 * C30768 * C31062 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C31050 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C268 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C31050 -
           ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
            (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C31062 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
            (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
               C30936 * C30768 * C31062 -
           ((C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C8996 +
            C5307 * C8995 + C4777 * C8994) *
               C30936 * C30768 * C31050 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C31063 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31052 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C30750 * C268 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C31052 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C31063 -
           ((C4601 * C1886 + C9233 + C9233 + C30696 * C1898) * C8996 +
            C9265 * C8995 + C9264 * C8994) *
               C30936 * C31028) *
              C30750 * C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C31063 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C31052 +
           (C9267 * C8994 + C9268 * C8995 +
            (C4601 * C1887 + C9241 + C9241 + C30696 * C1899) * C8996) *
               C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C976 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C977 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C31059 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C977 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C976 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C976 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C977 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           C9260 * C8995 + C9261 * C8996) *
              C30936 * C30768 * C1044 -
          (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
              C1045 +
          (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
              C1046 -
          (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
              C1047 +
          (C5502 * C8994 + C6022 * C8995 +
           (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C8996) *
              C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C31063 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C31052 +
           (C9261 * C8994 + C9262 * C8995 +
            (C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C8996) *
               C30936 * C31028) *
              C976 +
          ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C31052 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C31063 -
           ((C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C8996 +
            C6698 * C8995 + C5644 * C8994) *
               C30936 * C31028) *
              C977 +
          ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C31063 -
           (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C31052 +
           (C5645 * C8994 + C6697 * C8995 +
            (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C8996) *
               C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C976 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C977 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C30995 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C31025) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C976 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C977 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30995 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C30750 * C580 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30855 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30995) *
              C30750 * C581 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30995 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30855) *
              C30750 * C582 +
          ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
            C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
               C30948 * C30936 * C30855 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C580 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30995) *
              C30750 * C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30995 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C582 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C976 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C977 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
            ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
             C5650 * C4599 + C5308 * C4598) *
                C30855) *
               C31025) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C976 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C977 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30995 -
           (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
              C30750 * C580 +
          ((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30995) *
              C30750 * C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30995 -
           (C9268 * C8996 + C9267 * C8995 + C9266 * C8994) * C30936 * C30855) *
              C30750 * C582 +
          ((C9475 * C8994 + C9476 * C8995 +
            (C4601 * C2160 + C9470 + C9470 + C30696 * C2162) * C8996) *
               C30936 * C30855 -
           (C9476 * C8996 + C9475 * C8995 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
               C30936 * C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
             C9260 * C8995 + C9261 * C8996) *
                C30936 * C30995 -
            (C9262 * C8996 + C9261 * C8995 + C9260 * C8994) * C30936 * C30855) *
               C976 +
           ((C5303 * C8994 + C5644 * C8995 + C6698 * C8996) * C30936 * C30855 -
            (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30995) *
               C977 +
           ((C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30995 -
            (C6697 * C8996 + C5645 * C8995 + C5302 * C8994) * C30936 * C30855) *
               C31025) *
              C30980 +
          (((C9263 * C8994 + C9264 * C8995 + C9265 * C8996) * C30936 * C30855 -
            (C9264 * C8996 + C9263 * C8995 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
                C30936 * C30995) *
               C976 +
           ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30995 -
            ((C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C8996 +
             C6480 * C8995 + C5304 * C8994) *
                C30936 * C30855) *
               C977 +
           ((C5305 * C8994 + C6479 * C8995 +
             (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C8996) *
                C30936 * C30855 -
            (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C268 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31050 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C30750 * C108 -
          (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 + C145 +
           C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
              C30948 * C30936 * C30768 * C30750 * C109 +
          (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 + C148 +
           C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
              C30948 * C30936 * C30768 * C30750 * C110 -
          (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 + C151 +
           C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
              C30948 * C30936 * C30768 * C30750 * C111 +
          (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 + C154 +
           C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
              C30948 * C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
           (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
              C30936 * C30768 * C30750 * C108 -
          ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
           (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
              C30936 * C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
           (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
           (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
              C30936 * C30768 * C30750 * C110 -
          ((C4601 * C439 + C8998 + C8998 + C30696 * C459) * C8996 +
           (C4601 * C438 + C5126 + C5126 + C30696 * C458) * C8995 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C8994) *
              C30936 * C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C8994 +
           (C4601 * C440 + C8999 + C8999 + C30696 * C460) * C8995 +
           (C4601 * C441 + C9000 + C9000 + C30696 * C461) * C8996) *
              C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C8995 +
            (C4601 * C435 + C4902 + C4902 + C30696 * C455) * C8996) *
               C30936 * C30768 * C31062 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C31050 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C268 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C31050 -
           ((C4601 * C436 + C4910 + C4910 + C30696 * C456) * C8996 +
            (C4601 * C433 + C4905 + C4905 + C30696 * C453) * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C31062 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C8995 +
            (C4601 * C437 + C4914 + C4914 + C30696 * C457) * C8996) *
               C30936 * C30768 * C31062 -
           ((C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C8996 +
            C5307 * C8995 + C4777 * C8994) *
               C30936 * C30768 * C31050 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
            C9260 * C8995 + C9261 * C8996) *
               C30936 * C30768 * C976 -
           (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
               C977 +
           (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
               C31025) *
              C31059 +
          ((C4774 * C8994 + C5304 * C8995 + C6480 * C8996) * C30936 * C30768 *
               C977 -
           (C9264 * C8996 + C9263 * C8995 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C8994) *
               C30936 * C30768 * C976 -
           (C6479 * C8996 + C5305 * C8995 + C4775 * C8994) * C30936 * C30768 *
               C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C8994 +
            C9266 * C8995 + C9267 * C8996) *
               C30936 * C30768 * C976 -
           (C9628 * C8996 + C5307 * C8995 + C4777 * C8994) * C30936 * C30768 *
               C977 +
           (C4778 * C8994 + C5306 * C8995 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C8996) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C8994 +
           C9260 * C8995 + C9261 * C8996) *
              C30936 * C30768 * C1044 -
          (C5644 * C8996 + C5303 * C8995 + C4771 * C8994) * C30936 * C30768 *
              C1045 +
          (C4772 * C8994 + C5302 * C8995 + C5645 * C8996) * C30936 * C30768 *
              C1046 -
          (C5647 * C8996 + C5646 * C8995 + C4773 * C8994) * C30936 * C30768 *
              C1047 +
          (C5502 * C8994 + C6022 * C8995 +
           (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C8996) *
              C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[75] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C30809 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C30816 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C2742) *
                      C30727 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C30816 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C30809 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C2742) *
                      C30736 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C30809 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C30816 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C2742) *
                      C2745)) /
                (p * q * std::sqrt(p + q));
    d2ee[76] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30995 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C30809 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30995) *
                       C30816 +
                   (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                        C30936 * C30995 -
                    ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                        C30936 * C30855) *
                       C2742) *
                      C2482 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30995) *
                       C30809 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30995 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30816 +
                   (((C14939 + C14938) * C18991 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                        C30936 * C30995) *
                       C2742) *
                      C30733)) /
                (p * q * std::sqrt(p + q));
    d2ee[77] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C31069 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C31065 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31055 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C30768 * C31035) *
                      C2482 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C31065 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C31069 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31055 +
                   ((C14733 + C14732) * C18991 +
                    (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                     C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                        C18992) *
                       C30936 * C30768 * C31035) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C2374 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C30813) *
                      C31068 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C30813 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C2374) *
                      C31061 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C2374 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C30813) *
                      C31048 +
                  (((C13792 + C13793) * C18991 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C18992) *
                       C30936 * C30768 * C30813 -
                   ((C19621 + C19620) * C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C30768 * C2374) *
                      C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C31063 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C31052 +
                    ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                        C30936 * C31028) *
                       C2374 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C31052 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C31063 -
                    ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                        C30936 * C31028) *
                       C30813) *
                      C2482 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C31052 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C31063 -
                    ((C21374 + C21375) * C18992 + (C19345 + C19344) * C18991) *
                        C30936 * C31028) *
                       C2374 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C31063 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C31052 +
                    ((C15669 + C15668) * C18991 +
                     (C13239 * C2265 + C15802 + C15802 + C13235 * C2271 +
                      C13241 * C2266 + C15803 + C15803 + C13236 * C2272) *
                         C18992) *
                        C30936 * C31028) *
                       C30813) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[78] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30995 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C2374 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30995) *
                       C30813) *
                      C30727 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30995) *
                       C2374 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30995 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30813) *
                      C30736 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C18991 +
                     (C19346 + C19347) * C18992) *
                        C30936 * C30995 -
                    ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                        C30936 * C30855) *
                       C2374 +
                   (((C14157 + C14156) * C18991 +
                     (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                      C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                        C30936 * C30995) *
                       C30813) *
                      C2745)) /
                (p * q * std::sqrt(p + q));
    d2ee[79] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C2374 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C30813) *
                      C31068 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C30813 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C2374) *
                      C31061 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C2374 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C30813) *
                      C31048 +
                  (((C13792 + C13793) * C18991 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C18992) *
                       C30936 * C30768 * C30813 -
                   ((C19621 + C19620) * C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C30768 * C2374) *
                      C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C31069 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C31065 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31055 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C30768 * C31035) *
                      C2482 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C31065 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C31069 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31055 +
                   ((C14733 + C14732) * C18991 +
                    (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                     C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                        C18992) *
                       C30936 * C30768 * C31035) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[80] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C3136 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C30809 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C3136) *
                       C30816 +
                   (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                        C30936 * C3136 -
                    ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                        C30936 * C30855) *
                       C2742) *
                      C30980 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C3136) *
                       C30809 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C3136 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30816 +
                   (((C14939 + C14938) * C18991 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                        C30936 * C3136) *
                       C2742) *
                      C30733)) /
                (p * q * std::sqrt(p + q));
    d2ee[81] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30851 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30858 +
                   ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                       C30936 * C3644) *
                      C30809 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C30858 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30851 -
                   ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                       C30936 * C3644) *
                      C30816 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30851 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C30858 +
                   ((C14591 + C14590) * C18991 +
                    (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
                     C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                        C18992) *
                       C30936 * C3644) *
                      C2742) *
                 C30722) /
                (p * q * std::sqrt(p + q));
    d2ee[82] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C3136 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C31069 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C30855 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C3136) *
                      C31065 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C3136 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C30855) *
                      C31055 +
                  (((C15081 + C15080) * C18991 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C18992) *
                       C30936 * C30855 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C3136) *
                      C31035) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C3136 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C2374 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C3136) *
                       C30813) *
                      C31059 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C3136) *
                       C2374 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C3136 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30813) *
                      C31046 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C18991 +
                     (C19346 + C19347) * C18992) *
                        C30936 * C3136 -
                    ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                        C30936 * C30855) *
                       C2374 +
                   (((C14157 + C14156) * C18991 +
                     (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                      C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                        C30936 * C3136) *
                       C30813) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C31070 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C31067 +
                   ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                       C30936 * C31058 -
                   ((C21038 + C21039) * C18992 + (C21037 + C21036) * C18991) *
                       C30936 * C31041) *
                      C2374 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C31067 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C31070 -
                   ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                       C30936 * C31058 +
                   ((C15945 + C15944) * C18991 +
                    (C13239 * C6306 + C15462 + C15462 + C13235 * C6312 +
                     C13241 * C10698 + C15463 + C15463 + C13236 * C10700) *
                        C18992) *
                       C30936 * C31041) *
                      C30813) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[83] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30851 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30858 +
                    ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                        C30936 * C3644) *
                       C2374 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30858 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30851 -
                    ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                        C30936 * C3644) *
                       C30813) *
                      C30980 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30858 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30851 -
                    ((C21374 + C21375) * C18992 + (C19345 + C19344) * C18991) *
                        C30936 * C3644) *
                       C2374 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30851 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30858 +
                    ((C15669 + C15668) * C18991 +
                     (C13239 * C2265 + C15802 + C15802 + C13235 * C2271 +
                      C13241 * C2266 + C15803 + C15803 + C13236 * C2272) *
                         C18992) *
                        C30936 * C3644) *
                       C30813) *
                      C30733)) /
                (p * q * std::sqrt(p + q));
    d2ee[84] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C3136 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C2374 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C3136) *
                       C30813) *
                      C31059 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C3136) *
                       C2374 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C3136 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30813) *
                      C31046 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C18991 +
                     (C19346 + C19347) * C18992) *
                        C30936 * C3136 -
                    ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                        C30936 * C30855) *
                       C2374 +
                   (((C14157 + C14156) * C18991 +
                     (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                      C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                        C30936 * C3136) *
                       C30813) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C3136 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C31069 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C30855 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C3136) *
                      C31065 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C3136 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C30855) *
                      C31055 +
                  (((C15081 + C15080) * C18991 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C18992) *
                       C30936 * C30855 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C3136) *
                      C31035) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[85] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C1318 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C1319 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C1320 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C30768 * C31035) *
                      C30980 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C1319 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C1318 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C1320 +
                   ((C14733 + C14732) * C18991 +
                    (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                     C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                        C18992) *
                       C30936 * C30768 * C31035) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C30994 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C30813) *
                      C580 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C30813 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C30994) *
                      C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C30994 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C30813) *
                      C582 +
                  (((C13792 + C13793) * C18991 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C18992) *
                       C30936 * C30768 * C30813 -
                   ((C13241 * C440 + C13925 + C13925 + C13236 * C460 +
                     C13239 * C438 + C13924 + C13924 + C13235 * C458) *
                        C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C30768 * C30994) *
                      C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C1702 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C1703 +
                    ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                        C30936 * C31028) *
                       C30994 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C1703 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C1702 -
                    ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                        C30936 * C31028) *
                       C30813) *
                      C30980 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C1703 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C1702 -
                    ((C13241 * C1882 + C15801 + C15801 + C13236 * C1894 +
                      C13239 * C1883 + C15800 + C15800 + C13235 * C1895) *
                         C18992 +
                     (C19345 + C19344) * C18991) *
                        C30936 * C31028) *
                       C30994 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C1702 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C1703 +
                    ((C15669 + C15668) * C18991 +
                     (C13239 * C2265 + C15802 + C15802 + C13235 * C2271 +
                      C13241 * C2266 + C15803 + C15803 + C13236 * C2272) *
                         C18992) *
                        C30936 * C31028) *
                       C30813) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[86] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30995 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C1318 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C30855 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30995) *
                      C1319 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30995 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C30855) *
                      C1320 +
                  (((C15081 + C15080) * C18991 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C18992) *
                       C30936 * C30855 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C30995) *
                      C31035) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30995 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C30994 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30995) *
                       C30813) *
                      C268 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30995) *
                       C30994 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30995 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30813) *
                      C269 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C18991 +
                     (C19346 + C19347) * C18992) *
                        C30936 * C30995 -
                    ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                        C30936 * C30855) *
                       C30994 +
                   (((C14157 + C14156) * C18991 +
                     (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                      C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                        C30936 * C30995) *
                       C30813) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C2156 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C2157 +
                   ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                       C30936 * C2158 -
                   ((C21038 + C21039) * C18992 + (C21037 + C21036) * C18991) *
                       C30936 * C31041) *
                      C30994 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C2157 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C2156 -
                   ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                       C30936 * C2158 +
                   ((C15945 + C15944) * C18991 +
                    (C13239 * C6306 + C15462 + C15462 + C13235 * C6312 +
                     C13241 * C10698 + C15463 + C15463 + C13236 * C10700) *
                        C18992) *
                       C30936 * C31041) *
                      C30813) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                   C18991 +
               (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                   C18992) *
                  C30936 * C30768 * C30750 * C108 -
              ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                   C18992 +
               (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                   C18991) *
                  C30936 * C30768 * C30750 * C109 +
              ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                   C18991 +
               (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                   C18992) *
                  C30936 * C30768 * C30750 * C110 -
              ((C13241 * C440 + C13925 + C13925 + C13236 * C460 +
                C13239 * C438 + C13924 + C13924 + C13235 * C458) *
                   C18992 +
               (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                   C18991) *
                  C30936 * C30768 * C30750 * C111 +
              ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                   C18991 +
               (C13239 * C440 + C18994 + C18994 + C13235 * C460 +
                C13241 * C690 + C18995 + C18995 + C13236 * C692) *
                   C18992) *
                  C30936 * C30768 * C30750 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                 C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                    C18991 +
                (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                 C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                    C18992) *
                   C30936 * C30768 * C31062 -
               ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                   C30936 * C30768 * C31050 +
               ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                   C30936 * C30768 * C31025) *
                  C268 +
              (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                   C30936 * C30768 * C31050 -
               ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                 C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                    C18992 +
                (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                 C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                    C18991) *
                   C30936 * C30768 * C31062 -
               ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                   C30936 * C30768 * C31025) *
                  C269 +
              (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                 C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                    C18991 +
                (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                 C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                    C18992) *
                   C30936 * C30768 * C31062 -
               ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                   C30936 * C30768 * C31050 +
               ((C13481 + C13480) * C18991 +
                (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                 C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                    C18992) *
                   C30936 * C30768 * C31025) *
                  C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
             C13245 + C13245 + C13236 * C134) *
                C18991 +
            (C19338 + C19339) * C18992) *
               C30936 * C31063 -
           ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) * C30936 *
               C31052 +
           ((C19341 + C19340) * C18991 +
            (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
             C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                C18992) *
               C30936 * C31028) *
              C30750 * C268 +
          (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) * C30936 *
               C31052 -
           ((C19343 + C19342) * C18992 +
            (C13241 * C121 + C13250 + C13250 + C13236 * C135 + C13239 * C120 +
             C13251 + C13251 + C13235 * C134) *
                C18991) *
               C30936 * C31063 -
           ((C13241 * C1882 + C15801 + C15801 + C13236 * C1894 +
             C13239 * C1883 + C15800 + C15800 + C13235 * C1895) *
                C18992 +
            (C19345 + C19344) * C18991) *
               C30936 * C31028) *
              C30750 * C269 +
          (((C13239 * C121 + C13252 + C13252 + C13235 * C135 + C13241 * C122 +
             C13253 + C13253 + C13236 * C136) *
                C18991 +
            (C19346 + C19347) * C18992) *
               C30936 * C31063 -
           ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) * C30936 *
               C31052 +
           ((C19349 + C19348) * C18991 +
            (C13239 * C1882 + C19312 + C19312 + C13235 * C1894 +
             C13241 * C2160 + C19313 + C19313 + C13236 * C2162) *
                C18992) *
               C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
             C13245 + C13245 + C13236 * C134) *
                C18991 +
            (C19338 + C19339) * C18992) *
               C30936 * C30768 * C976 -
           ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) * C30936 *
               C30768 * C977 +
           ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) * C30936 *
               C30768 * C31025) *
              C31059 +
          (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) * C30936 *
               C30768 * C977 -
           ((C19343 + C19342) * C18992 +
            (C13241 * C121 + C13250 + C13250 + C13236 * C135 + C13239 * C120 +
             C13251 + C13251 + C13235 * C134) *
                C18991) *
               C30936 * C30768 * C976 -
           ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) * C30936 *
               C30768 * C31025) *
              C31046 +
          (((C13239 * C121 + C13252 + C13252 + C13235 * C135 + C13241 * C122 +
             C13253 + C13253 + C13236 * C136) *
                C18991 +
            (C19346 + C19347) * C18992) *
               C30936 * C30768 * C976 -
           ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) * C30936 *
               C30768 * C977 +
           ((C13481 + C13480) * C18991 +
            (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
             C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                C18992) *
               C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
            C13245 + C13245 + C13236 * C134) *
               C18991 +
           (C19338 + C19339) * C18992) *
              C30936 * C30768 * C1044 -
          ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) * C30936 *
              C30768 * C1045 +
          ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) * C30936 *
              C30768 * C1046 -
          ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) * C30936 *
              C30768 * C1047 +
          ((C14409 + C14408) * C18991 +
           (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 + C13241 * C5905 +
            C15075 + C15075 + C13236 * C5907) *
               C18992) *
              C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
             C13245 + C13245 + C13236 * C134) *
                C18991 +
            (C19338 + C19339) * C18992) *
               C30936 * C31063 -
           ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) * C30936 *
               C31052 +
           ((C19341 + C19340) * C18991 +
            (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
             C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                C18992) *
               C30936 * C31028) *
              C976 +
          (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) * C30936 *
               C31052 -
           ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) * C30936 *
               C31063 -
           ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) * C30936 *
               C31028) *
              C977 +
          (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) * C30936 *
               C31063 -
           ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) * C30936 *
               C31052 +
           ((C14591 + C14590) * C18991 +
            (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
             C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                C18992) *
               C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
             C13245 + C13245 + C13236 * C134) *
                C18991 +
            (C19338 + C19339) * C18992) *
               C30936 * C1702 -
           ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) * C30936 *
               C1703 +
           ((C19341 + C19340) * C18991 +
            (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
             C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                C18992) *
               C30936 * C31028) *
              C30750 * C31059 +
          (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) * C30936 *
               C1703 -
           ((C19343 + C19342) * C18992 +
            (C13241 * C121 + C13250 + C13250 + C13236 * C135 + C13239 * C120 +
             C13251 + C13251 + C13235 * C134) *
                C18991) *
               C30936 * C1702 -
           ((C13241 * C1882 + C15801 + C15801 + C13236 * C1894 +
             C13239 * C1883 + C15800 + C15800 + C13235 * C1895) *
                C18992 +
            (C19345 + C19344) * C18991) *
               C30936 * C31028) *
              C30750 * C31046 +
          (((C13239 * C121 + C13252 + C13252 + C13235 * C135 + C13241 * C122 +
             C13253 + C13253 + C13236 * C136) *
                C18991 +
            (C19346 + C19347) * C18992) *
               C30936 * C1702 -
           ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) * C30936 *
               C1703 +
           ((C19349 + C19348) * C18991 +
            (C13239 * C1882 + C19312 + C19312 + C13235 * C1894 +
             C13241 * C2160 + C19313 + C19313 + C13236 * C2162) *
                C18992) *
               C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
             C13245 + C13245 + C13236 * C134) *
                C18991 +
            (C19338 + C19339) * C18992) *
               C30936 * C1702 -
           ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) * C30936 *
               C1703 +
           ((C19341 + C19340) * C18991 +
            (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
             C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                C18992) *
               C30936 * C31028) *
              C31062 +
          (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) * C30936 *
               C1703 -
           ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) * C30936 *
               C1702 -
           ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) * C30936 *
               C31028) *
              C31050 +
          (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) * C30936 *
               C1702 -
           ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) * C30936 *
               C1703 +
           ((C14591 + C14590) * C18991 +
            (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
             C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                C18992) *
               C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13239 * C119 + C13244 + C13244 + C13235 * C133 + C13241 * C120 +
            C13245 + C13245 + C13236 * C134) *
               C18991 +
           (C19338 + C19339) * C18992) *
              C30936 * C1877 -
          ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) * C30936 *
              C1878 +
          ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) * C30936 *
              C1879 -
          ((C21038 + C21039) * C18992 + (C21037 + C21036) * C18991) * C30936 *
              C1880 +
          ((C21039 + C21038) * C18991 +
           (C13239 * C10534 + C21026 + C21026 + C13235 * C10538 +
            C13241 * C10805 + C21027 + C21027 + C13236 * C10807) *
               C18992) *
              C30936 * C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[88] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30995 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C976 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30995) *
                       C977 +
                   (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                        C30936 * C30995 -
                    ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                        C30936 * C30855) *
                       C31025) *
                      C30980 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30995) *
                       C976 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30995 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C977 +
                   (((C14939 + C14938) * C18991 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                        C30936 * C30995) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30995 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C30750 * C580 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C30855 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30995) *
                      C30750 * C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30995 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C30855) *
                      C30750 * C582 +
                  (((C19620 + C19621) * C18991 +
                    (C13239 * C439 + C19614 + C19614 + C13235 * C459 +
                     C13241 * C441 + C19615 + C19615 + C13236 * C461) *
                        C18992) *
                       C30936 * C30855 -
                   ((C19621 + C19620) * C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C30995) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C2156 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C2157 +
                   ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                       C30936 * C2158 -
                   ((C21038 + C21039) * C18992 + (C21037 + C21036) * C18991) *
                       C30936 * C31041) *
                      C30750 * C30980 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C2157 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C2156 -
                   ((C21374 + C21375) * C18992 + (C19345 + C19344) * C18991) *
                       C30936 * C2158 +
                   ((C21375 + C21374) * C18991 +
                    (C13239 * C1886 + C21368 + C21368 + C13235 * C1898 +
                     C13241 * C1887 + C21369 + C21369 + C13236 * C1899) *
                        C18992) *
                       C30936 * C31041) *
                      C30750 * C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[89] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                     C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                        C18992) *
                       C30936 * C30768 * C31062 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C31050 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31025) *
                      C268 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C31050 -
                   ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                     C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                        C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C31062 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31025) *
                      C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                     C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                        C18992) *
                       C30936 * C30768 * C31062 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C31050 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C18991 +
                   (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                    C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                       C18992) *
                      C30936 * C30768 * C30750 * C108 -
                  ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                    C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                       C18992 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C18991) *
                      C30936 * C30768 * C30750 * C109 +
                  ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C18991 +
                   (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                    C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                       C18992) *
                      C30936 * C30768 * C30750 * C110 -
                  ((C13241 * C440 + C13925 + C13925 + C13236 * C460 +
                    C13239 * C438 + C13924 + C13924 + C13235 * C458) *
                       C18992 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C18991) *
                      C30936 * C30768 * C30750 * C111 +
                  ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                    C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                       C18991 +
                   (C13239 * C440 + C18994 + C18994 + C13235 * C460 +
                    C13241 * C690 + C18995 + C18995 + C13236 * C692) *
                       C18992) *
                      C30936 * C30768 * C30750 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C976 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C977 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C977 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C976 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C976 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C977 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C18991 +
                   (C19338 + C19339) * C18992) *
                      C30936 * C30768 * C1044 -
                  ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                      C30936 * C30768 * C1045 +
                  ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                      C30936 * C30768 * C1046 -
                  ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                      C30936 * C30768 * C1047 +
                  ((C14409 + C14408) * C18991 +
                   (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                    C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                       C18992) *
                      C30936 * C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C1702 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C1703 +
                   ((C19341 + C19340) * C18991 +
                    (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
                     C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                        C18992) *
                       C30936 * C31028) *
                      C30750 * C31059 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C1703 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C1702 -
                   ((C13241 * C1882 + C15801 + C15801 + C13236 * C1894 +
                     C13239 * C1883 + C15800 + C15800 + C13235 * C1895) *
                        C18992 +
                    (C19345 + C19344) * C18991) *
                       C30936 * C31028) *
                      C30750 * C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C1702 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C1703 +
                   ((C19349 + C19348) * C18991 +
                    (C13239 * C1882 + C19312 + C19312 + C13235 * C1894 +
                     C13241 * C2160 + C19313 + C19313 + C13236 * C2162) *
                        C18992) *
                       C30936 * C31028) *
                      C30750 * C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C1702 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C1703 +
                   ((C19341 + C19340) * C18991 +
                    (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
                     C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                        C18992) *
                       C30936 * C31028) *
                      C31062 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C1703 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C1702 -
                   ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                       C30936 * C31028) *
                      C31050 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C1702 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C1703 +
                   ((C14591 + C14590) * C18991 +
                    (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
                     C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                        C18992) *
                       C30936 * C31028) *
                      C31025) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[90] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C3136 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C30994 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C3136) *
                       C30813) *
                      C30727 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C3136) *
                       C30994 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C3136 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30813) *
                      C30736 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C18991 +
                     (C19346 + C19347) * C18992) *
                        C30936 * C3136 -
                    ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                        C30936 * C30855) *
                       C30994 +
                   (((C14157 + C14156) * C18991 +
                     (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                      C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                        C30936 * C3136) *
                       C30813) *
                      C2745)) /
                (p * q * std::sqrt(p + q));
    d2ee[91] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30851 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30858 +
                    ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                        C30936 * C3644) *
                       C30994 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30858 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30851 -
                    ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                        C30936 * C3644) *
                       C30813) *
                      C2482 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30858 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30851 -
                    ((C21374 + C21375) * C18992 + (C19345 + C19344) * C18991) *
                        C30936 * C3644) *
                       C30994 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30851 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30858 +
                    ((C15669 + C15668) * C18991 +
                     (C13239 * C2265 + C15802 + C15802 + C13235 * C2271 +
                      C13241 * C2266 + C15803 + C15803 + C13236 * C2272) *
                         C18992) *
                        C30936 * C3644) *
                       C30813) *
                      C30733)) /
                (p * q * std::sqrt(p + q));
    d2ee[92] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C3136 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C31062 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C3136) *
                       C31050 +
                   (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                        C30936 * C3136 -
                    ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                        C30936 * C30855) *
                       C31025) *
                      C2482 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C3136) *
                       C31062 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C3136 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C31050 +
                   (((C14939 + C14938) * C18991 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                        C30936 * C3136) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C3136 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C30750 * C31068 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C30855 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C3136) *
                      C30750 * C31061 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C3136 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C30855) *
                      C30750 * C31048 +
                  (((C19620 + C19621) * C18991 +
                    (C13239 * C439 + C19614 + C19614 + C13235 * C459 +
                     C13241 * C441 + C19615 + C19615 + C13236 * C461) *
                        C18992) *
                       C30936 * C30855 -
                   ((C19621 + C19620) * C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C3136) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C31070 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C31067 +
                   ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                       C30936 * C31058 -
                   ((C21038 + C21039) * C18992 + (C21037 + C21036) * C18991) *
                       C30936 * C31041) *
                      C30750 * C2482 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C31067 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C31070 -
                   ((C21374 + C21375) * C18992 + (C19345 + C19344) * C18991) *
                       C30936 * C31058 +
                   ((C21375 + C21374) * C18991 +
                    (C13239 * C1886 + C21368 + C21368 + C13235 * C1898 +
                     C13241 * C1887 + C21369 + C21369 + C13236 * C1899) *
                        C18992) *
                       C30936 * C31041) *
                      C30750 * C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[93] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30851 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30858 +
                   ((C19341 + C19340) * C18991 + (C21036 + C21037) * C18992) *
                       C30936 * C3644) *
                      C30750 * C30727 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C30858 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30851 -
                   ((C21374 + C21375) * C18992 + (C19345 + C19344) * C18991) *
                       C30936 * C3644) *
                      C30750 * C30736 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30851 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C30858 +
                   ((C19349 + C19348) * C18991 +
                    (C13239 * C1882 + C19312 + C19312 + C13235 * C1894 +
                     C13241 * C2160 + C19313 + C19313 + C13236 * C2162) *
                        C18992) *
                       C30936 * C3644) *
                      C30750 * C2745)) /
                (p * q * std::sqrt(p + q));
    d2ee[94] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C3136 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C30750 * C31068 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C30855 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C3136) *
                      C30750 * C31061 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C3136 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C30855) *
                      C30750 * C31048 +
                  (((C19620 + C19621) * C18991 +
                    (C13239 * C439 + C19614 + C19614 + C13235 * C459 +
                     C13241 * C441 + C19615 + C19615 + C13236 * C461) *
                        C18992) *
                       C30936 * C30855 -
                   ((C19621 + C19620) * C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C3136) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C3136 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C31062 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C3136) *
                       C31050 +
                   (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                        C30936 * C3136 -
                    ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                        C30936 * C30855) *
                       C31025) *
                      C2482 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C3136) *
                       C31062 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C3136 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C31050 +
                   (((C14939 + C14938) * C18991 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                        C30936 * C3136) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[95] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C30994 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C30813) *
                      C580 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C30813 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C30994) *
                      C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C30994 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C30813) *
                      C582 +
                  (((C13792 + C13793) * C18991 +
                    (C13239 * C845 + C13926 + C13926 + C13235 * C855 +
                     C13241 * C846 + C13927 + C13927 + C13236 * C856) *
                        C18992) *
                       C30936 * C30768 * C30813 -
                   ((C13241 * C440 + C13925 + C13925 + C13236 * C460 +
                     C13239 * C438 + C13924 + C13924 + C13235 * C458) *
                        C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C30768 * C30994) *
                      C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C1318 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C1319 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C1320 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C30768 * C31035) *
                      C30980 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C1319 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C1318 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C1320 +
                   ((C14733 + C14732) * C18991 +
                    (C13239 * C1581 + C14932 + C14932 + C13235 * C1587 +
                     C13241 * C1582 + C14933 + C14933 + C13236 * C1588) *
                        C18992) *
                       C30936 * C30768 * C31035) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[96] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30995 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C30994 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30995) *
                       C30813) *
                      C268 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30995) *
                       C30994 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30995 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C30813) *
                      C269 +
                  ((((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                      C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                         C18991 +
                     (C19346 + C19347) * C18992) *
                        C30936 * C30995 -
                    ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                        C30936 * C30855) *
                       C30994 +
                   (((C14157 + C14156) * C18991 +
                     (C13239 * C1184 + C13650 + C13650 + C13235 * C1202 +
                      C13241 * C2052 + C13651 + C13651 + C13236 * C2054) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                        C30936 * C30995) *
                       C30813) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30995 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C1318 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C30855 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30995) *
                      C1319 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30995 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C30855) *
                      C1320 +
                  (((C15081 + C15080) * C18991 +
                    (C13239 * C5615 + C14572 + C14572 + C13235 * C5621 +
                     C13241 * C6466 + C14573 + C14573 + C13236 * C6468) *
                        C18992) *
                       C30936 * C30855 -
                   ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                       C30936 * C30995) *
                      C31035) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[97] += (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                     C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                        C18992) *
                       C30936 * C30768 * C31062 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C31050 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31025) *
                      C268 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C31050 -
                   ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                     C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                        C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C31062 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31025) *
                      C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                     C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                        C18992) *
                       C30936 * C30768 * C31062 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C31050 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C18991 +
                   (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                    C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                       C18992) *
                      C30936 * C30768 * C30750 * C108 -
                  ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                    C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                       C18992 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C18991) *
                      C30936 * C30768 * C30750 * C109 +
                  ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C18991 +
                   (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                    C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                       C18992) *
                      C30936 * C30768 * C30750 * C110 -
                  ((C13241 * C440 + C13925 + C13925 + C13236 * C460 +
                    C13239 * C438 + C13924 + C13924 + C13235 * C458) *
                       C18992 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C18991) *
                      C30936 * C30768 * C30750 * C111 +
                  ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                    C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                       C18991 +
                   (C13239 * C440 + C18994 + C18994 + C13235 * C460 +
                    C13241 * C690 + C18995 + C18995 + C13236 * C692) *
                       C18992) *
                      C30936 * C30768 * C30750 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C31063 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C31052 +
                   ((C19341 + C19340) * C18991 +
                    (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
                     C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                        C18992) *
                       C30936 * C31028) *
                      C30750 * C268 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C31052 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C31063 -
                   ((C13241 * C1882 + C15801 + C15801 + C13236 * C1894 +
                     C13239 * C1883 + C15800 + C15800 + C13235 * C1895) *
                        C18992 +
                    (C19345 + C19344) * C18991) *
                       C30936 * C31028) *
                      C30750 * C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C31063 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C31052 +
                   ((C19349 + C19348) * C18991 +
                    (C13239 * C1882 + C19312 + C19312 + C13235 * C1894 +
                     C13241 * C2160 + C19313 + C19313 + C13236 * C2162) *
                        C18992) *
                       C30936 * C31028) *
                      C30750 * C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C976 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C977 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C977 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C976 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C976 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C977 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C18991 +
                   (C19338 + C19339) * C18992) *
                      C30936 * C30768 * C1044 -
                  ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                      C30936 * C30768 * C1045 +
                  ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                      C30936 * C30768 * C1046 -
                  ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                      C30936 * C30768 * C1047 +
                  ((C14409 + C14408) * C18991 +
                   (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                    C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                       C18992) *
                      C30936 * C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C31063 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C31052 +
                   ((C19341 + C19340) * C18991 +
                    (C13239 * C1884 + C15459 + C15459 + C13235 * C1896 +
                     C13241 * C1883 + C15458 + C15458 + C13236 * C1895) *
                        C18992) *
                       C30936 * C31028) *
                      C976 +
                  (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                       C30936 * C31052 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C31063 -
                   ((C15944 + C15945) * C18992 + (C14587 + C14586) * C18991) *
                       C30936 * C31028) *
                      C977 +
                  (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C31063 -
                   ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                       C30936 * C31052 +
                   ((C14591 + C14590) * C18991 +
                    (C13239 * C6305 + C15938 + C15938 + C13235 * C6311 +
                     C13241 * C6580 + C15939 + C15939 + C13236 * C6582) *
                        C18992) *
                       C30936 * C31028) *
                      C31025) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[98] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30995 -
                   ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                       C30936 * C30855) *
                      C30750 * C580 +
                  (((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                       C30936 * C30855 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30995) *
                      C30750 * C581 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30995 -
                   ((C19348 + C19349) * C18992 + (C19347 + C19346) * C18991) *
                       C30936 * C30855) *
                      C30750 * C582 +
                  (((C19620 + C19621) * C18991 +
                    (C13239 * C439 + C19614 + C19614 + C13235 * C459 +
                     C13241 * C441 + C19615 + C19615 + C13236 * C461) *
                        C18992) *
                       C30936 * C30855 -
                   ((C19621 + C19620) * C18992 +
                    (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                     C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                        C18991) *
                       C30936 * C30995) *
                      C30750 * C31029)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                      C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                         C18991 +
                     (C19338 + C19339) * C18992) *
                        C30936 * C30995 -
                    ((C19340 + C19341) * C18992 + (C19339 + C19338) * C18991) *
                        C30936 * C30855) *
                       C976 +
                   (((C14153 + C14152) * C18991 + (C14586 + C14587) * C18992) *
                        C30936 * C30855 -
                    ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                        C30936 * C30995) *
                       C977 +
                   (((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                        C30936 * C30995 -
                    ((C14590 + C14591) * C18992 + (C14589 + C14588) * C18991) *
                        C30936 * C30855) *
                       C31025) *
                      C30980 +
                  ((((C19342 + C19343) * C18991 + (C19344 + C19345) * C18992) *
                        C30936 * C30855 -
                    ((C19343 + C19342) * C18992 +
                     (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                      C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                         C18991) *
                        C30936 * C30995) *
                       C976 +
                   (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                        C30936 * C30995 -
                    ((C15668 + C15669) * C18992 + (C14155 + C14154) * C18991) *
                        C30936 * C30855) *
                       C977 +
                   (((C14939 + C14938) * C18991 +
                     (C13239 * C1191 + C15662 + C15662 + C13235 * C1209 +
                      C13241 * C1192 + C15663 + C15663 + C13236 * C1210) *
                         C18992) *
                        C30936 * C30855 -
                    ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                        C30936 * C30995) *
                       C31025) *
                      C30733)) /
                    (p * q * std::sqrt(p + q));
    d2ee[99] += (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C18991 +
                   (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                    C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                       C18992) *
                      C30936 * C30768 * C30750 * C108 -
                  ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                    C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                       C18992 +
                   (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                    C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                       C18991) *
                      C30936 * C30768 * C30750 * C109 +
                  ((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                    C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                       C18991 +
                   (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                    C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                       C18992) *
                      C30936 * C30768 * C30750 * C110 -
                  ((C13241 * C440 + C13925 + C13925 + C13236 * C460 +
                    C13239 * C438 + C13924 + C13924 + C13235 * C458) *
                       C18992 +
                   (C13241 * C123 + C13258 + C13258 + C13236 * C137 +
                    C13239 * C122 + C13259 + C13259 + C13235 * C136) *
                       C18991) *
                      C30936 * C30768 * C30750 * C111 +
                  ((C13239 * C123 + C13260 + C13260 + C13235 * C137 +
                    C13241 * C124 + C13261 + C13261 + C13236 * C138) *
                       C18991 +
                   (C13239 * C440 + C18994 + C18994 + C13235 * C460 +
                    C13241 * C690 + C18995 + C18995 + C13236 * C692) *
                       C18992) *
                      C30936 * C30768 * C30750 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C13239 * C434 + C13631 + C13631 + C13235 * C454 +
                     C13241 * C433 + C13630 + C13630 + C13236 * C453) *
                        C18992) *
                       C30936 * C30768 * C31062 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C31050 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31025) *
                      C268 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C31050 -
                   ((C13241 * C432 + C13637 + C13637 + C13236 * C452 +
                     C13239 * C433 + C13636 + C13636 + C13235 * C453) *
                        C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C31062 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31025) *
                      C269 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C13239 * C432 + C13647 + C13647 + C13235 * C452 +
                     C13241 * C438 + C13646 + C13646 + C13236 * C458) *
                        C18992) *
                       C30936 * C30768 * C31062 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C31050 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                     C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                        C18991 +
                    (C19338 + C19339) * C18992) *
                       C30936 * C30768 * C976 -
                   ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                       C30936 * C30768 * C977 +
                   ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                       C30936 * C30768 * C31025) *
                      C31059 +
                  (((C13474 + C13475) * C18991 + (C14154 + C14155) * C18992) *
                       C30936 * C30768 * C977 -
                   ((C19343 + C19342) * C18992 +
                    (C13241 * C121 + C13250 + C13250 + C13236 * C135 +
                     C13239 * C120 + C13251 + C13251 + C13235 * C134) *
                        C18991) *
                       C30936 * C30768 * C976 -
                   ((C14938 + C14939) * C18992 + (C13477 + C13476) * C18991) *
                       C30936 * C30768 * C31025) *
                      C31046 +
                  (((C13239 * C121 + C13252 + C13252 + C13235 * C135 +
                     C13241 * C122 + C13253 + C13253 + C13236 * C136) *
                        C18991 +
                    (C19346 + C19347) * C18992) *
                       C30936 * C30768 * C976 -
                   ((C14156 + C14157) * C18992 + (C13479 + C13478) * C18991) *
                       C30936 * C30768 * C977 +
                   ((C13481 + C13480) * C18991 +
                    (C13239 * C1187 + C14138 + C14138 + C13235 * C1205 +
                     C13241 * C1476 + C14139 + C14139 + C13236 * C1478) *
                        C18992) *
                       C30936 * C30768 * C31025) *
                      C31019)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C13239 * C119 + C13244 + C13244 + C13235 * C133 +
                    C13241 * C120 + C13245 + C13245 + C13236 * C134) *
                       C18991 +
                   (C19338 + C19339) * C18992) *
                      C30936 * C30768 * C1044 -
                  ((C14152 + C14153) * C18992 + (C13471 + C13470) * C18991) *
                      C30936 * C30768 * C1045 +
                  ((C13473 + C13472) * C18991 + (C14588 + C14589) * C18992) *
                      C30936 * C30768 * C1046 -
                  ((C15080 + C15081) * C18992 + (C14407 + C14406) * C18991) *
                      C30936 * C30768 * C1047 +
                  ((C14409 + C14408) * C18991 +
                   (C13239 * C5616 + C15074 + C15074 + C13235 * C5622 +
                    C13241 * C5905 + C15075 + C15075 + C13236 * C5907) *
                       C18992) *
                      C30936 * C30768 * C1048) *
                 C30722) /
                    (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C30809 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30816 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C2742) *
              C30727 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30816 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C30809 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C2742) *
              C30736 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C30809 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30816 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C2742) *
              C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C30809 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30816 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C2742) *
              C30727 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30816 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C30809 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C2742) *
              C30736 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C30809 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30816 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C2742) *
              C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30809 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30816 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C30995 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C2742) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C30809 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30816 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C30995) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30809 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30816 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C2742) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C30809 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30816 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30995) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31069 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31065 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31055 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30768 * C31035) *
              C2482 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31065 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31069 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31055 +
           (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 + C1329 +
            C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
            C103 * C1326) *
               C30948 * C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C2374 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30813) *
              C31068 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C2374) *
              C31061 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C2374 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30813) *
              C31048 +
          ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
            C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C31063 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C31052 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C31028) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C31052 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C31063 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C31028) *
               C30813) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C31052 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C31063 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C31028) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C31063 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C31052 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C2374 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C31068 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C2374) *
              C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C2374 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C31048 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31069 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31065 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C31055 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C2482 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31065 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31069 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C31055 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C31063 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C31052 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C31028) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31052 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31063 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
               C30813) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C31052 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C31063 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C31028) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C31063 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C31052 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30813) *
              C30727 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C30736 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C30995 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C30995) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30813) *
              C30727 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C30995 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30995) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C2374 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30813) *
              C31068 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C2374) *
              C31061 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C2374 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30813) *
              C31048 +
          ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
            C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31069 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31065 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31055 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30768 * C31035) *
              C2482 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31065 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31069 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31055 +
           (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 + C1329 +
            C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
            C103 * C1326) *
               C30948 * C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C2374 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C31068 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C2374) *
              C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C2374 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C31048 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C2374) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31069 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31065 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C31055 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C2482 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31065 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31069 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C31055 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30809 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30816 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C3136 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C2742) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C30809 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30816 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C3136) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30809 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30816 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C2742) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C30809 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30816 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C3136) *
               C2742) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30851 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30858 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C3644) *
              C30809 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30858 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30851 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C3644) *
              C30816 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30851 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30858 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C3644) *
              C2742) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30851 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30858 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C3644) *
              C30809 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30858 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30851 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C3644) *
              C30816 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30851 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30858 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C3644) *
              C2742) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C3136 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C31069 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30855 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C3136) *
              C31065 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C3136 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30855) *
              C31055 +
          ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 + C1591 +
            C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
            C103 * C1588) *
               C30948 * C30936 * C30855 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30813) *
              C31059 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C31046 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C3136 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31070 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31067 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31058 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C2374 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C31067 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C31070 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31058 +
           (C113 * C2264 + C2274 + C2274 + C101 * C2270 + C115 * C2265 + C2275 +
            C2275 + C102 * C2271 + C117 * C2266 + C2276 + C2276 +
            C103 * C2272) *
               C30948 * C30936 * C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30813) *
              C31059 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C3136 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C31069 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
              C31065 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C31055 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31070 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31067 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31058 -
           (C6699 * C4600 + C6700 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C2374 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31067 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31070 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31058 +
           (C6700 * C4598 + C6699 * C4599 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C30948 * C4600) *
               C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30851 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30858 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C3644) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30858 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30851 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C3644) *
               C30813) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30858 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30851 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C3644) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30851 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30858 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30851 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30858 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C3644) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30858 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30851 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C3644) *
               C30813) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30858 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30851 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C3644) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30851 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30858 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30813) *
              C31059 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C2374 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C31046 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C3136 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C2374 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C3136 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C31069 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30855 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C3136) *
              C31065 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C3136 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30855) *
              C31055 +
          ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 + C1591 +
            C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
            C103 * C1588) *
               C30948 * C30936 * C30855 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30813) *
              C31059 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C2374 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C31046 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C3136 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C2374 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C3136) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C31069 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
              C31065 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C31055 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C3136) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C1318 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C1319 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C1320 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30768 * C31035) *
              C30980 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C1319 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C1318 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C1320 +
           (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 + C1329 +
            C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
            C103 * C1326) *
               C30948 * C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C30994 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30813) *
              C580 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C30994) *
              C581 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C30994 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30813) *
              C582 +
          ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
            C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C1702 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C1703 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C31028) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C1703 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C1702 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C31028) *
               C30813) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C1703 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C1702 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C31028) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C1702 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C1703 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C30994 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C580 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C30994) *
              C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C30994 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C582 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C1318 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1319 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1320 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C30980 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C1319 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C1318 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C1320 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C1702 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C1703 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C31028) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C1703 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C1702 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
               C30813) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C1703 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C1702 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C31028) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C1702 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C1703 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C31028) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30995 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C1318 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30855 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30995) *
              C1319 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30995 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30855) *
              C1320 +
          ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 + C1591 +
            C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
            C103 * C1588) *
               C30948 * C30936 * C30855 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30813) *
              C268 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C269 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C30995 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C2156 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C2157 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C2158 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C30994 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C2157 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C2156 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C2158 +
           (C113 * C2264 + C2274 + C2274 + C101 * C2270 + C115 * C2265 + C2275 +
            C2275 + C102 * C2271 + C117 * C2266 + C2276 + C2276 +
            C103 * C2272) *
               C30948 * C30936 * C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 +
             (C4601 * C1580 + C5279 + C5279 + C30696 * C1586) * C30948 *
                 C4600) *
                C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30813) *
              C268 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            ((C4601 * C1581 + C5284 + C5284 + C30696 * C1587) * C30948 * C4600 +
             C5311 * C4599 + C5310 * C4598) *
                C30855) *
               C30813) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C30995 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C1318 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
              C1319 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C1320 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C2156 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C2157 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C2158 -
           (C6699 * C4600 + C6700 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C30994 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C2157 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C2156 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C2158 +
           (C6700 * C4598 + C6699 * C4599 +
            (C4601 * C6684 + C6692 + C6692 + C30696 * C6686) * C30948 * C4600) *
               C31041) *
              C30813) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
               C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                  C30948 * C30936 * C30768 * C30750 * C108 -
              (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
               C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                  C30948 * C30936 * C30768 * C30750 * C109 +
              (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
               C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                  C30948 * C30936 * C30768 * C30750 * C110 -
              (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
               C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
                  C30948 * C30936 * C30768 * C30750 * C111 +
              (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 +
               C154 + C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
                  C30948 * C30936 * C30768 * C30750 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
                C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
                C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                   C30948 * C30936 * C30768 * C31050 +
               (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
                C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                   C30948 * C30936 * C30768 * C31025) *
                  C268 +
              ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
                C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                   C30948 * C30936 * C30768 * C31050 -
               (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
                C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
                C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                   C30948 * C30936 * C30768 * C31025) *
                  C269 +
              ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
                C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                   C30948 * C30936 * C30768 * C31062 -
               (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
                C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                   C30948 * C30936 * C30768 * C31050 +
               (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
                C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
                   C30948 * C30936 * C30768 * C31025) *
                  C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31063 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31052 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C30750 * C268 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C31052 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C31063 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31028) *
              C30750 * C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C31063 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C31052 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31063 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31052 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C976 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C31052 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C31063 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31028) *
              C977 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C31063 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C31052 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C1702 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C1703 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C30750 * C31059 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C1703 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C1702 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31028) *
              C30750 * C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C1702 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C1703 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C1702 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C1703 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C31062 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C1703 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C1702 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31028) *
              C31050 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C1702 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C1703 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C1877 -
          (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 + C464 +
           C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
              C30948 * C30936 * C1878 +
          (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 + C467 +
           C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
              C30948 * C30936 * C1879 -
          (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
           C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 + C101 * C1896) *
              C30948 * C30936 * C1880 +
          (C113 * C1885 + C1904 + C1904 + C101 * C1897 + C115 * C1886 + C1905 +
           C1905 + C102 * C1898 + C117 * C1887 + C1906 + C1906 + C103 * C1899) *
              C30948 * C30936 * C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            (C4601 * C1186 + C4903 + C4903 + C30696 * C1204) * C30948 * C4599 +
            (C4601 * C1190 + C4904 + C4904 + C30696 * C1208) * C30948 * C4600) *
               C31028) *
              C30750 * C268 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C31052 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C31063 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C31063 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C31052 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C976 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31052 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31063 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C977 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C31063 -
           ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
            C5650 * C4599 + C5308 * C4598) *
               C31052 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C30750 * C31059 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C1703 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C1702 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C1702 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C1703 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C31062 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C1703 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C1702 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C31050 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C1702 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C1703 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C1877 -
          (C5308 * C4600 + C5309 * C4599 +
           (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
              C1878 +
          ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
           C5648 * C4599 + C5649 * C4600) *
              C1879 -
          ((C4601 * C6305 + C6315 + C6315 + C30696 * C6311) * C30948 * C4600 +
           (C4601 * C2264 + C6316 + C6316 + C30696 * C2270) * C30948 * C4599 +
           (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
              C1880 +
          ((C4601 * C1885 + C6318 + C6318 + C30696 * C1897) * C30948 * C4598 +
           (C4601 * C6306 + C6319 + C6319 + C30696 * C6312) * C30948 * C4599 +
           (C4601 * C6307 + C6320 + C6320 + C30696 * C6313) * C30948 * C4600) *
              C1881) *
         C30750 * C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C976 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C977 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C30995 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C31025) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C976 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C977 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30995 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C30750 * C580 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30855 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30995) *
              C30750 * C581 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30995 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30855) *
              C30750 * C582 +
          ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
            C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
               C30948 * C30936 * C30855 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C2156 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C2157 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C2158 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C30750 * C30980 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C2157 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C2156 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C2158 +
           (C113 * C1883 + C2164 + C2164 + C101 * C1895 + C115 * C1882 + C2165 +
            C2165 + C102 * C1894 + C117 * C2160 + C2166 + C2166 +
            C103 * C2162) *
               C30948 * C30936 * C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C580 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30995) *
              C30750 * C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30995 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C582 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C976 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C977 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
            ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
             C5650 * C4599 + C5308 * C4598) *
                C30855) *
               C31025) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C976 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C977 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C2156 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C2157 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C2158 -
           ((C4601 * C6305 + C6315 + C6315 + C30696 * C6311) * C30948 * C4600 +
            (C4601 * C2264 + C6316 + C6316 + C30696 * C2270) * C30948 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C30750 * C30980 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C2157 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C2156 -
           (C6481 * C4600 + C6482 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C2158 +
           ((C4601 * C1883 + C6584 + C6584 + C30696 * C1895) * C30948 * C4598 +
            (C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C30948 * C4599 +
            (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C30948 * C4600) *
               C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C268 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31050 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C30750 * C108 -
          (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 + C145 +
           C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
              C30948 * C30936 * C30768 * C30750 * C109 +
          (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 + C148 +
           C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
              C30948 * C30936 * C30768 * C30750 * C110 -
          (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 + C151 +
           C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
              C30948 * C30936 * C30768 * C30750 * C111 +
          (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 + C154 +
           C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
              C30948 * C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C1702 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C1703 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C30750 * C31059 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C1703 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C1702 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31028) *
              C30750 * C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C1702 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C1703 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C1702 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C1703 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C31062 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C1703 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C1702 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31028) *
              C31050 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C1702 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C1703 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C30750 * C31059 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C1703 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C1702 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C1702 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C1703 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C1702 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C1703 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C31062 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C1703 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C1702 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C31050 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C1702 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C1703 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C30813) *
              C30727 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C30736 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C3136 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C3136) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C30813) *
              C30727 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C30813) *
              C30736 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C3136 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C3136) *
               C30813) *
              C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30851 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30858 +
            (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
             C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
                C30948 * C30936 * C3644) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30858 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30851 -
            (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 +
             C1213 + C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
             C101 * C1204) *
                C30948 * C30936 * C3644) *
               C30813) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30858 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30851 -
            (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
             C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
                C30948 * C30936 * C3644) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30851 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30858 +
            (C113 * C1185 + C2056 + C2056 + C101 * C1203 + C115 * C1184 +
             C2057 + C2057 + C102 * C1202 + C117 * C2052 + C2058 + C2058 +
             C103 * C2054) *
                C30948 * C30936 * C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30851 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30858 +
            ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
             C5648 * C4599 + C5649 * C4600) *
                C3644) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30858 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30851 -
            (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C3644) *
               C30813) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30858 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30851 -
            (C6481 * C4600 + C6482 * C4599 +
             (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
                C3644) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30851 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30858 +
            (C6482 * C4598 + C6481 * C4599 +
             (C4601 * C6466 + C6474 + C6474 + C30696 * C6468) * C30948 *
                 C4600) *
                C3644) *
               C30813) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C31062 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C31050 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C3136 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C31025) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C31062 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C31050 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C3136 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C30750 * C31068 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30855 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C3136) *
              C30750 * C31061 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C3136 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30855) *
              C30750 * C31048 +
          ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
            C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
               C30948 * C30936 * C30855 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31070 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31067 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31058 -
           (C117 * C1882 + C1901 + C1901 + C103 * C1894 + C115 * C1883 + C1902 +
            C1902 + C102 * C1895 + C113 * C1884 + C1903 + C1903 +
            C101 * C1896) *
               C30948 * C30936 * C31041) *
              C30750 * C2482 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C31067 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C31070 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31058 +
           (C113 * C1883 + C2164 + C2164 + C101 * C1895 + C115 * C1882 + C2165 +
            C2165 + C102 * C1894 + C117 * C2160 + C2166 + C2166 +
            C103 * C2162) *
               C30948 * C30936 * C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C31068 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C3136) *
              C30750 * C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C3136 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C31048 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C31062 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C31050 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C31025) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C31062 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C31050 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31070 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31067 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31058 -
           (C6699 * C4600 + C6700 * C4599 +
            (C4601 * C1884 + C6317 + C6317 + C30696 * C1896) * C30948 * C4598) *
               C31041) *
              C30750 * C2482 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C31067 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C31070 -
           (C6481 * C4600 + C6482 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31058 +
           ((C4601 * C1883 + C6584 + C6584 + C30696 * C1895) * C30948 * C4598 +
            (C4601 * C2265 + C6585 + C6585 + C30696 * C2271) * C30948 * C4599 +
            (C4601 * C6580 + C6586 + C6586 + C30696 * C6582) * C30948 * C4600) *
               C31041) *
              C30750 * C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30851 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30858 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C3644) *
              C30750 * C30727 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30858 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30851 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C3644) *
              C30750 * C30736 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30851 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30858 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C3644) *
              C30750 * C2745)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30851 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30858 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C3644) *
              C30750 * C30727 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C30858 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30851 -
           (C6481 * C4600 + C6482 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C3644) *
              C30750 * C30736 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30851 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30858 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C3644) *
              C30750 * C2745)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C3136 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C30750 * C31068 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30855 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C3136) *
              C30750 * C31061 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C3136 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30855) *
              C30750 * C31048 +
          ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
            C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
               C30948 * C30936 * C30855 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C3136 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C31062 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C3136) *
               C31050 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C3136 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C31025) *
              C2482 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C3136) *
               C31062 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C3136 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C31050 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C3136 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C31068 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            C5310 * C4599 + C5311 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C3136) *
              C30750 * C31061 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C3136 -
           (C5312 * C4600 + C5313 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C31048 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C3136) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C3136 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C31062 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C3136) *
               C31050 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C3136 -
            (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
               C31025) *
              C2482 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C3136) *
               C31062 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C3136 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C31050 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C3136) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C30994 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C30813) *
              C580 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C30994) *
              C581 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C30994 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C30813) *
              C582 +
          ((C113 * C277 + C588 + C588 + C101 * C297 + C115 * C279 + C589 +
            C589 + C102 * C299 + C117 * C584 + C590 + C590 + C103 * C586) *
               C30948 * C30936 * C30768 * C30813 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C1318 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C1319 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C1320 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30768 * C31035) *
              C30980 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C1319 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C1318 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C1320 +
           (C113 * C1051 + C1328 + C1328 + C101 * C1063 + C115 * C1050 + C1329 +
            C1329 + C102 * C1062 + C117 * C1324 + C1330 + C1330 +
            C103 * C1326) *
               C30948 * C30936 * C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C30994 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C30813) *
              C580 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C30813 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C30994) *
              C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C30994 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C30813) *
              C582 +
          ((C5026 * C4598 + C5027 * C4599 +
            (C4601 * C1324 + C5019 + C5019 + C30696 * C1326) * C30948 * C4600) *
               C30768 * C30813 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30768 * C30994) *
              C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C1318 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1319 +
           (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1320 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C31035) *
              C30980 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C1319 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C1318 -
           (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30768 * C1320 +
           (C4785 * C4598 + C5759 * C4599 +
            (C4601 * C5749 + C5755 + C5755 + C30696 * C5751) * C30948 * C4600) *
               C30768 * C31035) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C30813) *
              C268 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C30994 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C30813) *
              C269 +
          (((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
             C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
                C30948 * C30936 * C30995 -
            (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
             C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
                C30948 * C30936 * C30855) *
               C30994 +
           ((C113 * C844 + C864 + C864 + C101 * C854 + C115 * C845 + C865 +
             C865 + C102 * C855 + C117 * C846 + C866 + C866 + C103 * C856) *
                C30948 * C30936 * C30855 -
            (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
             C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
                C30948 * C30936 * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30995 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C1318 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C30855 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30995) *
              C1319 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30995 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C30855) *
              C1320 +
          ((C113 * C1580 + C1590 + C1590 + C101 * C1586 + C115 * C1581 + C1591 +
            C1591 + C102 * C1587 + C117 * C1582 + C1592 + C1592 +
            C103 * C1588) *
               C30948 * C30936 * C30855 -
           (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
            C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 +
            C101 * C1064) *
               C30948 * C30936 * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5309 * C4598 + C5308 * C4599 +
             (C4601 * C1580 + C5279 + C5279 + C30696 * C1586) * C30948 *
                 C4600) *
                C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C30813) *
              C268 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C30994 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            ((C4601 * C1581 + C5284 + C5284 + C30696 * C1587) * C30948 * C4600 +
             C5311 * C4599 + C5310 * C4598) *
                C30855) *
               C30813) *
              C269 +
          ((((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
             C4786 * C4599 + C4787 * C4600) *
                C30995 -
            (C5312 * C4600 + C5313 * C4599 +
             (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
                C30855) *
               C30994 +
           ((C5313 * C4598 + C5312 * C4599 +
             (C4601 * C1582 + C5289 + C5289 + C30696 * C1588) * C30948 *
                 C4600) *
                C30855 -
            (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30995) *
               C30813) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C1318 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
              C1319 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
           (C6023 * C4600 + C5650 * C4599 + C5308 * C4598) * C30855) *
              C1320 +
          ((C5650 * C4598 + C6023 * C4599 +
            (C4601 * C6013 + C6019 + C6019 + C30696 * C6015) * C30948 * C4600) *
               C30855 -
           (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30995) *
              C31035) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C268 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31050 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C30750 * C108 -
          (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 + C145 +
           C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
              C30948 * C30936 * C30768 * C30750 * C109 +
          (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 + C148 +
           C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
              C30948 * C30936 * C30768 * C30750 * C110 -
          (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 + C151 +
           C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
              C30948 * C30936 * C30768 * C30750 * C111 +
          (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 + C154 +
           C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
              C30948 * C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31063 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31052 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C30750 * C268 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C31052 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C31063 -
           (C117 * C439 + C472 + C472 + C103 * C459 + C115 * C437 + C473 +
            C473 + C102 * C457 + C113 * C436 + C474 + C474 + C101 * C456) *
               C30948 * C30936 * C31028) *
              C30750 * C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C31063 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C31052 +
           (C113 * C437 + C478 + C478 + C101 * C457 + C115 * C439 + C479 +
            C479 + C102 * C459 + C117 * C441 + C480 + C480 + C103 * C461) *
               C30948 * C30936 * C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C31063 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C31052 +
           (C113 * C435 + C466 + C466 + C101 * C455 + C115 * C436 + C467 +
            C467 + C102 * C456 + C117 * C437 + C468 + C468 + C103 * C457) *
               C30948 * C30936 * C31028) *
              C976 +
          ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
            C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
               C30948 * C30936 * C31052 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C31063 -
           (C117 * C1184 + C1212 + C1212 + C103 * C1202 + C115 * C1185 + C1213 +
            C1213 + C102 * C1203 + C113 * C1186 + C1214 + C1214 +
            C101 * C1204) *
               C30948 * C30936 * C31028) *
              C977 +
          ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C31063 -
           (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 + C1216 +
            C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
            C101 * C1207) *
               C30948 * C30936 * C31052 +
           (C113 * C1190 + C1218 + C1218 + C101 * C1208 + C115 * C1191 + C1219 +
            C1219 + C102 * C1209 + C117 * C1192 + C1220 + C1220 +
            C103 * C1210) *
               C30948 * C30936 * C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            (C4601 * C1186 + C4903 + C4903 + C30696 * C1204) * C30948 * C4599 +
            (C4601 * C1190 + C4904 + C4904 + C30696 * C1208) * C30948 * C4600) *
               C31028) *
              C30750 * C268 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C31052 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C31063 -
           ((C4601 * C1191 + C4908 + C4908 + C30696 * C1209) * C30948 * C4600 +
            (C4601 * C1185 + C4909 + C4909 + C30696 * C1203) * C30948 * C4599 +
            (C4601 * C436 + C4910 + C4910 + C30696 * C456) * C30948 * C4598) *
               C31028) *
              C30750 * C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C31063 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C31052 +
           ((C4601 * C437 + C4914 + C4914 + C30696 * C457) * C30948 * C4598 +
            (C4601 * C1184 + C4915 + C4915 + C30696 * C1202) * C30948 * C4599 +
            (C4601 * C1192 + C4916 + C4916 + C30696 * C1210) * C30948 * C4600) *
               C31028) *
              C30750 * C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C31063 -
           (C5308 * C4600 + C5309 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C31052 +
           ((C4601 * C435 + C4902 + C4902 + C30696 * C455) * C30948 * C4598 +
            C5648 * C4599 + C5649 * C4600) *
               C31028) *
              C976 +
          ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C31052 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C31063 -
           (C5651 * C4600 + C5649 * C4599 + C5648 * C4598) * C31028) *
              C977 +
          ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C31063 -
           ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
            C5650 * C4599 + C5308 * C4598) *
               C31052 +
           (C5649 * C4598 + C5651 * C4599 +
            (C4601 * C5617 + C5635 + C5635 + C30696 * C5623) * C30948 * C4600) *
               C31028) *
              C31025) *
         C30722) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30995 -
           (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
            C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
               C30948 * C30936 * C30855) *
              C30750 * C580 +
          ((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
            C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
               C30948 * C30936 * C30855 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30995) *
              C30750 * C581 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30995 -
           (C117 * C440 + C475 + C475 + C103 * C460 + C115 * C438 + C476 +
            C476 + C102 * C458 + C113 * C432 + C477 + C477 + C101 * C452) *
               C30948 * C30936 * C30855) *
              C30750 * C582 +
          ((C113 * C438 + C694 + C694 + C101 * C458 + C115 * C440 + C695 +
            C695 + C102 * C460 + C117 * C690 + C696 + C696 + C103 * C692) *
               C30948 * C30936 * C30855 -
           (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 +
            C151 + C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
               C30948 * C30936 * C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
             C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
                C30948 * C30936 * C30995 -
            (C117 * C432 + C463 + C463 + C103 * C452 + C115 * C433 + C464 +
             C464 + C102 * C453 + C113 * C434 + C465 + C465 + C101 * C454) *
                C30948 * C30936 * C30855) *
               C976 +
           ((C113 * C842 + C858 + C858 + C101 * C852 + C115 * C843 + C859 +
             C859 + C102 * C853 + C117 * C844 + C860 + C860 + C103 * C854) *
                C30948 * C30936 * C30855 -
            (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
             C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
                C30948 * C30936 * C30995) *
               C977 +
           ((C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
             C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
                C30948 * C30936 * C30995 -
            (C117 * C1187 + C1215 + C1215 + C103 * C1205 + C115 * C1188 +
             C1216 + C1216 + C102 * C1206 + C113 * C1189 + C1217 + C1217 +
             C101 * C1207) *
                C30948 * C30936 * C30855) *
               C31025) *
              C30980 +
          (((C113 * C433 + C469 + C469 + C101 * C453 + C115 * C432 + C470 +
             C470 + C102 * C452 + C117 * C438 + C471 + C471 + C103 * C458) *
                C30948 * C30936 * C30855 -
            (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
             C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
                C30948 * C30936 * C30995) *
               C976 +
           ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
             C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
                C30948 * C30936 * C30995 -
            (C117 * C845 + C861 + C861 + C103 * C855 + C115 * C844 + C862 +
             C862 + C102 * C854 + C113 * C843 + C863 + C863 + C101 * C853) *
                C30948 * C30936 * C30855) *
               C977 +
           ((C113 * C1188 + C1480 + C1480 + C101 * C1206 + C115 * C1187 +
             C1481 + C1481 + C102 * C1205 + C117 * C1476 + C1482 + C1482 +
             C103 * C1478) *
                C30948 * C30936 * C30855 -
            (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
             C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
                C30948 * C30936 * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30995 -
           ((C4601 * C1189 + C4899 + C4899 + C30696 * C1207) * C30948 * C4600 +
            (C4601 * C842 + C4900 + C4900 + C30696 * C852) * C30948 * C4599 +
            (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
               C30855) *
              C30750 * C580 +
          (((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
            (C4601 * C843 + C4906 + C4906 + C30696 * C853) * C30948 * C4599 +
            (C4601 * C1188 + C4907 + C4907 + C30696 * C1206) * C30948 * C4600) *
               C30855 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30995) *
              C30750 * C581 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30995 -
           ((C4601 * C1187 + C4911 + C4911 + C30696 * C1205) * C30948 * C4600 +
            (C4601 * C844 + C4912 + C4912 + C30696 * C854) * C30948 * C4599 +
            (C4601 * C432 + C4913 + C4913 + C30696 * C452) * C30948 * C4598) *
               C30855) *
              C30750 * C582 +
          (((C4601 * C438 + C5126 + C5126 + C30696 * C458) * C30948 * C4598 +
            (C4601 * C845 + C5127 + C5127 + C30696 * C855) * C30948 * C4599 +
            (C4601 * C1476 + C5128 + C5128 + C30696 * C1478) * C30948 * C4600) *
               C30855 -
           (C5027 * C4600 + C5026 * C4599 +
            (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
               C30995) *
              C30750 * C31029)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
             C4780 * C4599 + C4781 * C4600) *
                C30995 -
            (C5308 * C4600 + C5309 * C4599 +
             (C4601 * C434 + C4901 + C4901 + C30696 * C454) * C30948 * C4598) *
                C30855) *
               C976 +
           ((C5309 * C4598 + C5308 * C4599 + C5650 * C4600) * C30855 -
            (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30995) *
               C977 +
           ((C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30995 -
            ((C4601 * C5616 + C5634 + C5634 + C30696 * C5622) * C30948 * C4600 +
             C5650 * C4599 + C5308 * C4598) *
                C30855) *
               C31025) *
              C30980 +
          ((((C4601 * C433 + C4905 + C4905 + C30696 * C453) * C30948 * C4598 +
             C5310 * C4599 + C5311 * C4600) *
                C30855 -
            (C4784 * C4600 + C4783 * C4599 +
             (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
                C30995) *
               C976 +
           ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30995 -
            (C5915 * C4600 + C5311 * C4599 + C5310 * C4598) * C30855) *
               C977 +
           ((C5311 * C4598 + C5915 * C4599 +
             (C4601 * C5905 + C5911 + C5911 + C30696 * C5907) * C30948 *
                 C4600) *
                C30855 -
            (C5759 * C4600 + C4785 * C4599 + C4784 * C4598) * C30995) *
               C31025) *
              C30733)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C30750 * C108 -
          (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 + C145 +
           C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
              C30948 * C30936 * C30768 * C30750 * C109 +
          (C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 + C148 +
           C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
              C30948 * C30936 * C30768 * C30750 * C110 -
          (C117 * C124 + C150 + C150 + C103 * C138 + C115 * C123 + C151 + C151 +
           C102 * C137 + C113 * C122 + C152 + C152 + C101 * C136) *
              C30948 * C30936 * C30768 * C30750 * C111 +
          (C113 * C123 + C153 + C153 + C101 * C137 + C115 * C124 + C154 + C154 +
           C102 * C138 + C117 * C125 + C155 + C155 + C103 * C139) *
              C30948 * C30936 * C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C268 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C31050 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C269 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C31062 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C31050 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 +
            C142 + C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 +
            C303 + C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 +
            C306 + C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
               C30948 * C30936 * C30768 * C31025) *
              C31059 +
          ((C113 * C272 + C308 + C308 + C101 * C292 + C115 * C271 + C309 +
            C309 + C102 * C291 + C117 * C277 + C310 + C310 + C103 * C297) *
               C30948 * C30936 * C30768 * C977 -
           (C117 * C122 + C144 + C144 + C103 * C136 + C115 * C121 + C145 +
            C145 + C102 * C135 + C113 * C120 + C146 + C146 + C101 * C134) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C278 + C311 + C311 + C103 * C298 + C115 * C276 + C312 +
            C312 + C102 * C296 + C113 * C275 + C313 + C313 + C101 * C295) *
               C30948 * C30936 * C30768 * C31025) *
              C31046 +
          ((C113 * C121 + C147 + C147 + C101 * C135 + C115 * C122 + C148 +
            C148 + C102 * C136 + C117 * C123 + C149 + C149 + C103 * C137) *
               C30948 * C30936 * C30768 * C976 -
           (C117 * C279 + C314 + C314 + C103 * C299 + C115 * C277 + C315 +
            C315 + C102 * C297 + C113 * C271 + C316 + C316 + C101 * C291) *
               C30948 * C30936 * C30768 * C977 +
           (C113 * C276 + C317 + C317 + C101 * C296 + C115 * C278 + C318 +
            C318 + C102 * C298 + C117 * C280 + C319 + C319 + C103 * C300) *
               C30948 * C30936 * C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((C113 * C119 + C141 + C141 + C101 * C133 + C115 * C120 + C142 + C142 +
           C102 * C134 + C117 * C121 + C143 + C143 + C103 * C135) *
              C30948 * C30936 * C30768 * C1044 -
          (C117 * C271 + C302 + C302 + C103 * C291 + C115 * C272 + C303 + C303 +
           C102 * C292 + C113 * C273 + C304 + C304 + C101 * C293) *
              C30948 * C30936 * C30768 * C1045 +
          (C113 * C274 + C305 + C305 + C101 * C294 + C115 * C275 + C306 + C306 +
           C102 * C295 + C117 * C276 + C307 + C307 + C103 * C296) *
              C30948 * C30936 * C30768 * C1046 -
          (C117 * C1050 + C1069 + C1069 + C103 * C1062 + C115 * C1051 + C1070 +
           C1070 + C102 * C1063 + C113 * C1052 + C1071 + C1071 + C101 * C1064) *
              C30948 * C30936 * C30768 * C1047 +
          (C113 * C1053 + C1072 + C1072 + C101 * C1065 + C115 * C1054 + C1073 +
           C1073 + C102 * C1066 + C117 * C1055 + C1074 + C1074 + C103 * C1067) *
              C30948 * C30936 * C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           (C4601 * C273 + C4605 + C4605 + C30696 * C293) * C30948 * C4599 +
           (C4601 * C274 + C4606 + C4606 + C30696 * C294) * C30948 * C4600) *
              C30768 * C30750 * C108 -
          ((C4601 * C275 + C4607 + C4607 + C30696 * C295) * C30948 * C4600 +
           (C4601 * C272 + C4608 + C4608 + C30696 * C292) * C30948 * C4599 +
           (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
              C30768 * C30750 * C109 +
          ((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
           (C4601 * C271 + C4611 + C4611 + C30696 * C291) * C30948 * C4599 +
           (C4601 * C276 + C4612 + C4612 + C30696 * C296) * C30948 * C4600) *
              C30768 * C30750 * C110 -
          ((C4601 * C278 + C4613 + C4613 + C30696 * C298) * C30948 * C4600 +
           (C4601 * C277 + C4614 + C4614 + C30696 * C297) * C30948 * C4599 +
           (C4601 * C122 + C4615 + C4615 + C30696 * C136) * C30948 * C4598) *
              C30768 * C30750 * C111 +
          ((C4601 * C123 + C4616 + C4616 + C30696 * C137) * C30948 * C4598 +
           (C4601 * C279 + C4617 + C4617 + C30696 * C299) * C30948 * C4599 +
           (C4601 * C280 + C4618 + C4618 + C30696 * C300) * C30948 * C4600) *
              C30768 * C30750 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C31062 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C31050 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C268 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C31050 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C31062 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C269 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C31062 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C31050 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
            C4780 * C4599 + C4781 * C4600) *
               C30768 * C976 -
           (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C977 +
           (C4781 * C4598 + C4782 * C4599 +
            (C4601 * C1053 + C4736 + C4736 + C30696 * C1065) * C30948 * C4600) *
               C30768 * C31025) *
              C31059 +
          ((C4783 * C4598 + C4784 * C4599 + C4785 * C4600) * C30768 * C977 -
           (C4784 * C4600 + C4783 * C4599 +
            (C4601 * C120 + C4609 + C4609 + C30696 * C134) * C30948 * C4598) *
               C30768 * C976 -
           ((C4601 * C1054 + C4744 + C4744 + C30696 * C1066) * C30948 * C4600 +
            C4785 * C4599 + C4784 * C4598) *
               C30768 * C31025) *
              C31046 +
          (((C4601 * C121 + C4610 + C4610 + C30696 * C135) * C30948 * C4598 +
            C4786 * C4599 + C4787 * C4600) *
               C30768 * C976 -
           (C4788 * C4600 + C4787 * C4599 + C4786 * C4598) * C30768 * C977 +
           (C4787 * C4598 + C4788 * C4599 +
            (C4601 * C1055 + C4752 + C4752 + C30696 * C1067) * C30948 * C4600) *
               C30768 * C31025) *
              C31019)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C4601 * C119 + C4604 + C4604 + C30696 * C133) * C30948 * C4598 +
           C4780 * C4599 + C4781 * C4600) *
              C30768 * C1044 -
          (C4782 * C4600 + C4781 * C4599 + C4780 * C4598) * C30768 * C1045 +
          (C4781 * C4598 + C4782 * C4599 + C5504 * C4600) * C30768 * C1046 -
          (C5505 * C4600 + C5504 * C4599 + C4782 * C4598) * C30768 * C1047 +
          (C5504 * C4598 + C5505 * C4599 +
           (C4601 * C5486 + C5497 + C5497 + C30696 * C5490) * C30948 * C4600) *
              C30768 * C1048) *
         C30722) /
            (p * q * std::sqrt(p + q));
}
