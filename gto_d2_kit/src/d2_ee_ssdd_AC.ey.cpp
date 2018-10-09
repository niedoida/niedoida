/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ssdd_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0022_13(const double ae,
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
    const double C13534 = 0 * ce;
    const double C13533 = ce * de;
    const double C13532 = 0 * de;
    const double C13531 = 0 * de;
    const double C13530 = ce + de;
    const double C13529 = 0 * de;
    const double C13528 = xC - xD;
    const double C13589 = 0 * de;
    const double C13622 = 0 * de;
    const double C13621 = yC - yD;
    const double C13637 = 0 * de;
    const double C13636 = zC - zD;
    const double C13692 = 0 * ce;
    const double C13687 = 0 * de;
    const double C13686 = 0 * de;
    const double C13737 = 0 * de;
    const double C13783 = 0 * ce;
    const double C13778 = 0 * de;
    const double C13777 = 0 * de;
    const double C13828 = 0 * de;
    const double C13903 = p + q;
    const double C13902 = p * q;
    const double C13909 = ae + be;
    const double C13908 = xP - xQ;
    const double C13907 = bs[2];
    const double C13918 = ae * ce;
    const double C13914 = bs[3];
    const double C13927 = bs[4];
    const double C13948 = bs[5];
    const double C13985 = yP - yQ;
    const double C14015 = zP - zQ;
    const double C77 = bs[0];
    const double C15136 = ae * be;
    const double C13541 = C13534 / C13530;
    const double C13538 = C13532 / C13530;
    const double C13536 = 2 * C13530;
    const double C13535 = std::pow(C13530, 2);
    const double C13540 = C13533 * C13528;
    const double C13539 = C13528 * C13532;
    const double C13537 = C13528 * C13531;
    const double C14831 = C13528 * de;
    const double C14830 = C13528 * ce;
    const double C14829 = std::pow(C13528, 2);
    const double C13590 = C13589 / C13530;
    const double C13688 = C13622 / C13530;
    const double C13623 = C13533 * C13621;
    const double C13689 = C13621 * C13622;
    const double C14871 = std::pow(C13621, 2);
    const double C14925 = C13621 * de;
    const double C14923 = C13621 * ce;
    const double C13779 = C13637 / C13530;
    const double C13638 = C13533 * C13636;
    const double C13780 = C13636 * C13637;
    const double C14882 = std::pow(C13636, 2);
    const double C14965 = C13636 * de;
    const double C14963 = C13636 * ce;
    const double C13699 = C13692 / C13530;
    const double C13694 = C13621 * C13687;
    const double C13738 = C13737 / C13530;
    const double C13790 = C13783 / C13530;
    const double C13785 = C13636 * C13778;
    const double C13829 = C13828 / C13530;
    const double C13904 = 2 * C13902;
    const double C13911 = C13530 * C13909;
    const double C13919 = C13908 * ae;
    const double C13917 = std::pow(C13908, 2);
    const double C13915 = C13908 * ce;
    const double C13988 = C13908 * C13985;
    const double C13987 = C13985 * ce;
    const double C14047 = C13985 * C13908;
    const double C14046 = C13985 * ae;
    const double C14075 = std::pow(C13985, 2);
    const double C14018 = C13908 * C14015;
    const double C14017 = C14015 * ce;
    const double C14089 = C13985 * C14015;
    const double C14102 = C14015 * C13908;
    const double C14101 = C14015 * ae;
    const double C14130 = C14015 * C13985;
    const double C14142 = std::pow(C14015, 2);
    const double C61 = std::exp(-(std::pow(xA - xB, 2) * C15136) / C13909);
    const double C67 = std::exp(-(std::pow(yA - yB, 2) * C15136) / C13909);
    const double C68 = std::exp(-(std::pow(zA - zB, 2) * C15136) / C13909);
    const double C14843 = std::pow(C13536, -1);
    const double C15144 = std::pow(C13536, -2);
    const double C13542 = 2 * C13535;
    const double C15148 = C13535 * C13536;
    const double C15147 = 4 * C13535;
    const double C13544 = C13539 / C13530;
    const double C13543 = C13537 / C13530;
    const double C15137 = std::pow(C14830, 2);
    const double C14832 = C14829 * C13533;
    const double C13697 = C13689 / C13530;
    const double C14872 = C14871 * C13533;
    const double C15149 = std::pow(C14923, 2);
    const double C13788 = C13780 / C13530;
    const double C14883 = C14882 * C13533;
    const double C15151 = std::pow(C14963, 2);
    const double C13700 = C13694 / C13530;
    const double C13791 = C13785 / C13530;
    const double C13906 = C13904 / C13903;
    const double C92 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C13904 / C13903, 2) -
            (bs[1] * C13904) / C13903) *
           ae * ce) /
         C13530) /
        (ae + be);
    const double C78 = -(C13908 * bs[1] * C13904) / C13903;
    const double C385 = -(C13985 * bs[1] * C13904) / C13903;
    const double C829 = -(C14015 * bs[1] * C13904) / C13903;
    const double C13922 = C13914 * C13919;
    const double C13933 = C13927 * C13919;
    const double C13957 = C13948 * C13919;
    const double C82 = (-(bs[1] * C13919 * C13904) / C13903) / C13909;
    const double C13929 = C13917 * C13927;
    const double C13952 = C13917 * C13948;
    const double C13921 = C13914 * C13915;
    const double C13930 = C13927 * C13915;
    const double C13953 = C13948 * C13915;
    const double C83 = (bs[1] * C13915 * C13904) / (C13903 * C13530);
    const double C13990 = C13988 * ae;
    const double C13989 = C13914 * C13987;
    const double C13995 = C13927 * C13987;
    const double C14002 = C13948 * C13987;
    const double C120 = (bs[1] * C13987 * C13904) / (C13903 * C13530);
    const double C14049 = C14047 * ae;
    const double C14048 = C13914 * C14046;
    const double C14054 = C13927 * C14046;
    const double C14061 = C13948 * C14046;
    const double C186 = (-(bs[1] * C14046 * C13904) / C13903) / C13909;
    const double C14077 = C14075 * C13927;
    const double C14082 = C14075 * C13948;
    const double C14020 = C14018 * ae;
    const double C14019 = C13914 * C14017;
    const double C14025 = C13927 * C14017;
    const double C14032 = C13948 * C14017;
    const double C153 = (bs[1] * C14017 * C13904) / (C13903 * C13530);
    const double C14090 = C14089 * ae;
    const double C14104 = C14102 * ae;
    const double C14103 = C13914 * C14101;
    const double C14109 = C13927 * C14101;
    const double C14116 = C13948 * C14101;
    const double C273 = (-(bs[1] * C14101 * C13904) / C13903) / C13909;
    const double C14131 = C14130 * ae;
    const double C14144 = C14142 * C13927;
    const double C14149 = C14142 * C13948;
    const double C71 = -(2 * ae * be * (xA - xB) * C61) / (ae + be);
    const double C185 = -(2 * ae * be * (yA - yB) * C67) / (ae + be);
    const double C272 = -(2 * ae * be * (zA - zB) * C68) / (ae + be);
    const double C13551 = C13532 / C13542;
    const double C13548 = C13531 / C13542;
    const double C13547 = C13529 / C13542;
    const double C13691 = C13622 / C13542;
    const double C13696 = C13687 / C13542;
    const double C13695 = C13686 / C13542;
    const double C13782 = C13637 / C13542;
    const double C13787 = C13778 / C13542;
    const double C13786 = C13777 / C13542;
    const double C15176 = 4 * C15148;
    const double C15175 = C13530 * C15147;
    const double C13549 = 0 - C13544;
    const double C13546 = 0 - C13543;
    const double C14833 = C14832 / C13530;
    const double C13701 = 0 - C13697;
    const double C14873 = C14872 / C13530;
    const double C13792 = 0 - C13788;
    const double C14884 = C14883 / C13530;
    const double C13704 = 0 - C13700;
    const double C13795 = 0 - C13791;
    const double C13910 = std::pow(C13906, 2);
    const double C13913 = -C13906;
    const double C13928 = std::pow(C13906, 4);
    const double C13992 = C13990 * ce;
    const double C14051 = C14049 * ce;
    const double C14022 = C14020 * ce;
    const double C14091 = C14090 * ce;
    const double C14106 = C14104 * ce;
    const double C14132 = C14131 * ce;
    const double C13554 = C13549 * ce;
    const double C13553 = C13546 * ce;
    const double C14834 = -C14833;
    const double C13705 = C13701 * ce;
    const double C14874 = -C14873;
    const double C13796 = C13792 * ce;
    const double C14885 = -C14884;
    const double C13708 = C13704 * ce;
    const double C13799 = C13795 * ce;
    const double C13916 = C13907 * C13910;
    const double C93 =
        (-(C13910 * C13907 * C13908 * ae * ce) / C13530) / C13909 -
        (ae * C13910 * C13907 * C13908 * ce) / C13911 -
        (C13908 *
         (C13907 * C13910 +
          std::pow(C13908, 2) * bs[3] * std::pow(-C13906, 3)) *
         ae * ce) /
            C13911;
    const double C125 =
        (-(C13910 * C13907 * C13908 * (yP - yQ) * ae * ce) / C13530) / C13909;
    const double C158 =
        (-(C13910 * C13907 * C13908 * (zP - zQ) * ae * ce) / C13530) / C13909;
    const double C191 =
        (-(C13910 * C13907 * C13985 * C13908 * ae * ce) / C13530) / C13909;
    const double C218 =
        (-((std::pow(C13985, 2) * C13907 * C13910 - (bs[1] * C13904) / C13903) *
           C13918) /
         C13530) /
        C13909;
    const double C245 =
        (-(C13910 * C13907 * C13985 * C14015 * ae * ce) / C13530) / C13909;
    const double C278 =
        (-(C13910 * C13907 * C14015 * C13908 * ae * ce) / C13530) / C13909;
    const double C305 =
        (-(C13910 * C13907 * C14015 * C13985 * ae * ce) / C13530) / C13909;
    const double C332 =
        (-((std::pow(C14015, 2) * C13907 * C13910 - (bs[1] * C13904) / C13903) *
           C13918) /
         C13530) /
        C13909;
    const double C84 = (C13908 * C13910 * C13907 * C13919) / C13909 -
                       (ae * bs[1] * C13904) / (C13903 * C13909);
    const double C85 = (ce * bs[1] * C13904) / (C13903 * C13530) -
                       (C13908 * C13910 * C13907 * C13915) / C13530;
    const double C121 = -(C13908 * C13910 * C13907 * C13987) / C13530;
    const double C154 = -(C13908 * C13910 * C13907 * C14017) / C13530;
    const double C187 = (C13908 * C13910 * C13907 * C14046) / C13909;
    const double C274 = (C13908 * C13910 * C13907 * C14101) / C13909;
    const double C391 = -(C13985 * C13910 * C13907 * C13915) / C13530;
    const double C392 = (C13985 * C13910 * C13907 * C13919) / C13909;
    const double C449 = (ce * bs[1] * C13904) / (C13903 * C13530) -
                        (C13985 * C13910 * C13907 * C13987) / C13530;
    const double C499 = -(C13985 * C13910 * C13907 * C14017) / C13530;
    const double C550 = (C13985 * C13910 * C13907 * C14046) / C13909 -
                        (ae * bs[1] * C13904) / (C13903 * C13909);
    const double C688 = (C13985 * C13910 * C13907 * C14101) / C13909;
    const double C835 = -(C14015 * C13910 * C13907 * C13915) / C13530;
    const double C836 = (C14015 * C13910 * C13907 * C13919) / C13909;
    const double C891 = -(C14015 * C13910 * C13907 * C13987) / C13530;
    const double C943 = (ce * bs[1] * C13904) / (C13903 * C13530) -
                        (C14015 * C13910 * C13907 * C14017) / C13530;
    const double C994 = (C14015 * C13910 * C13907 * C14046) / C13909;
    const double C1132 = (C14015 * C13910 * C13907 * C14101) / C13909 -
                         (ae * bs[1] * C13904) / (C13903 * C13909);
    const double C13920 = std::pow(C13913, 3);
    const double C13949 = std::pow(C13913, 5);
    const double C13937 = C13928 * C13933;
    const double C13936 = C13928 * C13930;
    const double C13935 = C13929 * C13928;
    const double C13947 = C13927 * C13928;
    const double C13997 = C13928 * C13995;
    const double C14027 = C13928 * C14025;
    const double C14056 = C13928 * C14054;
    const double C14078 = C14077 * C13928;
    const double C14111 = C13928 * C14109;
    const double C14145 = C14144 * C13928;
    const double C13994 = C13927 * C13992;
    const double C14000 = C13948 * C13992;
    const double C14053 = C13927 * C14051;
    const double C14059 = C13948 * C14051;
    const double C14024 = C13927 * C14022;
    const double C14030 = C13948 * C14022;
    const double C14093 = C13927 * C14091;
    const double C14096 = C13948 * C14091;
    const double C14108 = C13927 * C14106;
    const double C14114 = C13948 * C14106;
    const double C14134 = C13927 * C14132;
    const double C14137 = C13948 * C14132;
    const double C13558 = C13554 / C13530;
    const double C13557 = C13553 / C13530;
    const double C14835 = std::exp(C14834);
    const double C13709 = C13705 / C13530;
    const double C14875 = std::exp(C14874);
    const double C13800 = C13796 / C13530;
    const double C14886 = std::exp(C14885);
    const double C13712 = C13708 / C13530;
    const double C13803 = C13799 / C13530;
    const double C79 = C13916 * C13917 - (bs[1] * C13904) / C13903;
    const double C384 = C13985 * C13908 * C13916;
    const double C387 = C13916 * C14075 - (bs[1] * C13904) / C13903;
    const double C828 = C14015 * C13908 * C13916;
    const double C831 = C13916 * C14142 - (bs[1] * C13904) / C13903;
    const double C1941 = C14015 * C13985 * C13916;
    const double C13924 = C13920 * C13922;
    const double C13923 = C13920 * C13921;
    const double C13926 = C13914 * C13920;
    const double C13991 = C13920 * C13989;
    const double C14021 = C13920 * C14019;
    const double C14050 = C13920 * C14048;
    const double C14105 = C13920 * C14103;
    const double C126 =
        (-(C13908 * C13920 * C13914 * C13908 * C13985 * ae * ce) / C13530) /
            C13909 -
        (ae * C13910 * C13907 * C13985 * ce) / C13911;
    const double C159 =
        (-(C13908 * C13920 * C13914 * C13908 * C14015 * ae * ce) / C13530) /
            C13909 -
        (ae * C13910 * C13907 * C14015 * ce) / C13911;
    const double C192 =
        (-(C13908 * C13920 * C13914 * C13985 * C13908 * ae * ce) / C13530) /
            C13909 -
        (C13910 * C13907 * C13985 * ae * ce) / C13911;
    const double C219 =
        (-(C13908 * (C13916 + std::pow(C13985, 2) * C13914 * C13920) * C13918) /
         C13530) /
        C13909;
    const double C246 =
        (-(C13908 * C13920 * C13914 * C13985 * C14015 * ae * ce) / C13530) /
        C13909;
    const double C247 =
        (-(C13928 * C13927 * C14091 * C13917) / C13530) / C13909 -
        (C13920 * C13914 * C14091) / C13911;
    const double C279 =
        (-(C13908 * C13920 * C13914 * C14015 * C13908 * ae * ce) / C13530) /
            C13909 -
        (C13910 * C13907 * C14015 * ae * ce) / C13911;
    const double C306 =
        (-(C13908 * C13920 * C13914 * C14015 * C13985 * ae * ce) / C13530) /
        C13909;
    const double C307 =
        (-(C13928 * C13927 * C14132 * C13917) / C13530) / C13909 -
        (C13920 * C13914 * C14132) / C13911;
    const double C333 =
        (-(C13908 * (C13916 + std::pow(C14015, 2) * C13914 * C13920) * C13918) /
         C13530) /
        C13909;
    const double C402 =
        (-(C13985 * (C13916 + C13917 * C13914 * C13920) * C13918) / C13530) /
        C13909;
    const double C455 =
        (-(C13985 * C13920 * C13914 * C13992) / C13530) / C13909 -
        (C13910 * C13907 * C13919 * ce) / C13911;
    const double C505 =
        (-(C13985 * C13920 * C13914 * C14022) / C13530) / C13909;
    const double C555 =
        (-(C13985 * C13920 * C13914 * C14051) / C13530) / C13909 -
        (ae * C13910 * C13907 * C13915) / C13911;
    const double C599 =
        (-(C13910 * C13907 * C14046 * ce) / C13530) / C13909 -
        (ae * C13910 * C13907 * C13987) / C13911 -
        (C13985 * (C13916 + C14075 * C13914 * C13920) * C13918) / C13911;
    const double C643 =
        (-(C13985 * C13920 * C13914 * C14091) / C13530) / C13909 -
        (ae * C13910 * C13907 * C14017) / C13911;
    const double C693 =
        (-(C13985 * C13920 * C13914 * C14106) / C13530) / C13909;
    const double C737 =
        (-(C13985 * C13920 * C13914 * C14132) / C13530) / C13909 -
        (C13910 * C13907 * C14101 * ce) / C13911;
    const double C781 =
        (-(C13985 * (C13916 + C14142 * C13914 * C13920) * C13918) / C13530) /
        C13909;
    const double C846 =
        (-(C14015 * (C13916 + C13917 * C13914 * C13920) * C13918) / C13530) /
        C13909;
    const double C897 =
        (-(C14015 * C13920 * C13914 * C13992) / C13530) / C13909;
    const double C949 =
        (-(C14015 * C13920 * C13914 * C14022) / C13530) / C13909 -
        (C13910 * C13907 * C13919 * ce) / C13911;
    const double C999 =
        (-(C14015 * C13920 * C13914 * C14051) / C13530) / C13909;
    const double C1044 =
        (-(C14015 * (C13916 + C14075 * C13914 * C13920) * C13918) / C13530) /
        C13909;
    const double C1087 =
        (-(C14015 * C13920 * C13914 * C14091) / C13530) / C13909 -
        (C13910 * C13907 * C14046 * ce) / C13911;
    const double C1137 =
        (-(C14015 * C13920 * C13914 * C14106) / C13530) / C13909 -
        (ae * C13910 * C13907 * C13915) / C13911;
    const double C1182 =
        (-(C14015 * C13920 * C13914 * C14132) / C13530) / C13909 -
        (ae * C13910 * C13907 * C13987) / C13911;
    const double C1225 =
        (-(C13910 * C13907 * C14101 * ce) / C13530) / C13909 -
        (ae * C13910 * C13907 * C14017) / C13911 -
        (C14015 * (C13916 + C14142 * C13914 * C13920) * C13918) / C13911;
    const double C13964 = C13949 * C13957;
    const double C13961 = C13949 * C13953;
    const double C13960 = C13952 * C13949;
    const double C14005 = C13949 * C14002;
    const double C14035 = C13949 * C14032;
    const double C14064 = C13949 * C14061;
    const double C14083 = C14082 * C13949;
    const double C14119 = C13949 * C14116;
    const double C14150 = C14149 * C13949;
    const double C13940 = C13908 * C13937;
    const double C13945 = C13937 * ce;
    const double C14312 = C13985 * C13937;
    const double C14466 = C14015 * C13937;
    const double C13939 = C13908 * C13936;
    const double C13946 = ae * C13936;
    const double C14325 = C13985 * C13936;
    const double C14485 = C14015 * C13936;
    const double C13958 = C13947 * ae;
    const double C13956 = C13947 * C13917;
    const double C13955 = C13908 * C13947;
    const double C13954 = C13947 * ce;
    const double C14344 = C13947 * C14075;
    const double C14343 = C13985 * C13947;
    const double C14514 = C13947 * C14142;
    const double C14513 = C14015 * C13947;
    const double C14001 = ae * C13997;
    const double C13999 = C13908 * C13997;
    const double C14334 = C13985 * C13997;
    const double C14495 = C14015 * C13997;
    const double C14031 = ae * C14027;
    const double C14029 = C13908 * C14027;
    const double C14364 = C13985 * C14027;
    const double C14504 = C14015 * C14027;
    const double C14060 = C14056 * ce;
    const double C14058 = C13908 * C14056;
    const double C14336 = C13985 * C14056;
    const double C14480 = C14015 * C14056;
    const double C14115 = C14111 * ce;
    const double C14113 = C13908 * C14111;
    const double C14376 = C13985 * C14111;
    const double C14506 = C14015 * C14111;
    const double C13996 = C13928 * C13994;
    const double C14003 = C13949 * C14000;
    const double C14055 = C13928 * C14053;
    const double C14062 = C13949 * C14059;
    const double C14026 = C13928 * C14024;
    const double C14033 = C13949 * C14030;
    const double C14094 = C13928 * C14093;
    const double C14097 = C13949 * C14096;
    const double C14110 = C13928 * C14108;
    const double C14117 = C13949 * C14114;
    const double C14135 = C13928 * C14134;
    const double C14138 = C13949 * C14137;
    const double C13562 = C13558 - C13548;
    const double C13561 = C13557 - C13547;
    const double C13545 = C13540 * C14835;
    const double C14837 = C14835 * C14830;
    const double C14836 = C14835 / C13536;
    const double C14845 = C14843 * C14835;
    const double C15140 = C14835 * C14831;
    const double C15173 = C15144 * C14835;
    const double C15167 = C14835 * C15137;
    const double C13713 = C13709 - C13696;
    const double C13624 = C13623 * C14875;
    const double C119 = -(2 * C13533 * (yC - yD) * C14875) / C13530;
    const double C14924 = C14875 / C13536;
    const double C14926 = C14875 * C14923;
    const double C14933 = C14843 * C14875;
    const double C15155 = C14875 * C14925;
    const double C15179 = C15144 * C14875;
    const double C15177 = C14875 * C15149;
    const double C13804 = C13800 - C13787;
    const double C13639 = C13638 * C14886;
    const double C152 = -(2 * C13533 * (zC - zD) * C14886) / C13530;
    const double C14964 = C14886 / C13536;
    const double C14966 = C14886 * C14963;
    const double C14973 = C14843 * C14886;
    const double C15161 = C14886 * C14965;
    const double C15182 = C15144 * C14886;
    const double C15180 = C14886 * C15151;
    const double C13716 = C13712 - C13695;
    const double C13807 = C13803 - C13786;
    const double C86 =
        (C13910 * C13907 * C13919 + C13908 * (C13908 * C13924 + C13916 * ae) +
         C13908 * C13916 * ae) /
        C13909;
    const double C390 = (C13985 * (C13908 * C13924 + C13916 * ae)) / C13909;
    const double C396 = (C13910 * C13907 * C13919 + C13924 * C14075) / C13909;
    const double C834 = (C14015 * (C13908 * C13924 + C13916 * ae)) / C13909;
    const double C840 = (C13910 * C13907 * C13919 + C13924 * C14142) / C13909;
    const double C1944 = (C14015 * C13985 * C13924) / C13909;
    const double C2775 =
        (2 * C13985 * C13924 + C13985 * (C13924 + C13937 * C14075)) / C13909;
    const double C3029 = (C14015 * (C13924 + C13937 * C14075)) / C13909;
    const double C5217 =
        (2 * C14015 * C13924 + C14015 * (C13924 + C13937 * C14142)) / C13909;
    const double C94 =
        (-(ae * (C13908 * C13923 + C13916 * ce)) / C13530) / C13909 -
        ((C13916 + C13917 * C13914 * C13920) * C13918) / C13911 -
        ((C13908 * C13924 + C13916 * ae) * ce) / C13911 +
        C13908 * ((-(C13924 * ce) / C13530) / C13909 - (ae * C13923) / C13911 -
                  (C13908 *
                   (C13914 * C13920 + C13917 * bs[4] * std::pow(C13906, 4)) *
                   C13918) /
                      C13911);
    const double C87 = -(C13908 * (C13908 * C13923 + C13916 * ce) +
                         C13910 * C13907 * C13915 + C13908 * C13916 * ce) /
                       C13530;
    const double C393 = -(C13985 * (C13908 * C13923 + C13916 * ce)) / C13530;
    const double C397 = -(C13923 * C14075 + C13910 * C13907 * C13915) / C13530;
    const double C837 = -(C14015 * (C13908 * C13923 + C13916 * ce)) / C13530;
    const double C841 = -(C13923 * C14142 + C13910 * C13907 * C13915) / C13530;
    const double C1945 = -(C14015 * C13985 * C13923) / C13530;
    const double C2774 = (-2 * C13985 * C13923) / C13530 -
                         (C13985 * (C13936 * C14075 + C13923)) / C13530;
    const double C3028 = -(C14015 * (C13936 * C14075 + C13923)) / C13530;
    const double C5216 = (-2 * C14015 * C13923) / C13530 -
                         (C14015 * (C13936 * C14142 + C13923)) / C13530;
    const double C13934 = C13926 * ae;
    const double C13932 = C13908 * C13926;
    const double C13931 = C13926 * ce;
    const double C13938 = C13926 + C13935;
    const double C14079 = C13926 + C14078;
    const double C14146 = C13926 + C14145;
    const double C14335 = C13985 * C13926;
    const double C14505 = C14015 * C13926;
    const double C220 =
        (-((C13926 + C14075 * C13927 * C13928) * C13918 * C13917) / C13530) /
            C13909 -
        ((C13916 + C14075 * C13914 * C13920) * C13918) / C13911;
    const double C334 =
        (-((C13926 + C14142 * C13927 * C13928) * C13918 * C13917) / C13530) /
            C13909 -
        ((C13916 + C14142 * C13914 * C13920) * C13918) / C13911;
    const double C80 =
        2 * C13908 * C13916 + C13908 * (C13916 + C13926 * C13917);
    const double C386 = C13985 * (C13916 + C13926 * C13917);
    const double C830 = C14015 * (C13916 + C13926 * C13917);
    const double C2772 =
        2 * C13985 * C13916 + C13985 * (C13916 + C13926 * C14075);
    const double C3024 = C14015 * (C13916 + C13926 * C14075);
    const double C5214 =
        2 * C14015 * C13916 + C14015 * (C13916 + C13926 * C14142);
    const double C127 =
        (-(ae * C13908 * C13991) / C13530) / C13909 -
        (C13920 * C13914 * C13992) / C13911 +
        C13908 * ((-(C13908 * C13928 * C13927 * C13992) / C13530) / C13909 -
                  (ae * C13991) / C13911);
    const double C122 = -(C13991 * C13917 + C13910 * C13907 * C13987) / C13530;
    const double C123 = (-2 * C13908 * C13991) / C13530 -
                        (C13908 * (C13997 * C13917 + C13991)) / C13530;
    const double C450 = -(C13985 * (C13985 * C13991 + C13916 * ce) +
                          C13910 * C13907 * C13987 + C13985 * C13916 * ce) /
                        C13530;
    const double C451 =
        -(C13985 * C13908 * C13991 + C13908 * C13916 * ce) / C13530;
    const double C453 = -(C13985 * (C13997 * C13917 + C13991) +
                          (C13916 + C13926 * C13917) * ce) /
                        C13530;
    const double C890 = -(C14015 * C13908 * C13991) / C13530;
    const double C892 = -(C14015 * (C13997 * C13917 + C13991)) / C13530;
    const double C893 = -(C13991 * C14142 + C13910 * C13907 * C13987) / C13530;
    const double C2003 = -(C14015 * (C13985 * C13991 + C13916 * ce)) / C13530;
    const double C5244 = (-2 * C14015 * C13991) / C13530 -
                         (C14015 * (C13997 * C14142 + C13991)) / C13530;
    const double C160 =
        (-(ae * C13908 * C14021) / C13530) / C13909 -
        (C13920 * C13914 * C14022) / C13911 +
        C13908 * ((-(C13908 * C13928 * C13927 * C14022) / C13530) / C13909 -
                  (ae * C14021) / C13911);
    const double C155 = -(C14021 * C13917 + C13910 * C13907 * C14017) / C13530;
    const double C156 = (-2 * C13908 * C14021) / C13530 -
                        (C13908 * (C14027 * C13917 + C14021)) / C13530;
    const double C500 = -(C14021 * C14075 + C13910 * C13907 * C14017) / C13530;
    const double C501 = -(C13985 * C13908 * C14021) / C13530;
    const double C503 = -(C13985 * (C14027 * C13917 + C14021)) / C13530;
    const double C944 = -(C14015 * (C14015 * C14021 + C13916 * ce) +
                          C13910 * C13907 * C14017 + C14015 * C13916 * ce) /
                        C13530;
    const double C945 =
        -(C14015 * C13908 * C14021 + C13908 * C13916 * ce) / C13530;
    const double C947 = -(C14015 * (C14027 * C13917 + C14021) +
                          (C13916 + C13926 * C13917) * ce) /
                        C13530;
    const double C2059 =
        -(C14015 * C13985 * C14021 + C13985 * C13916 * ce) / C13530;
    const double C2833 = (-2 * C13985 * C14021) / C13530 -
                         (C13985 * (C14027 * C14075 + C14021)) / C13530;
    const double C3118 = -(C14015 * (C14027 * C14075 + C14021) +
                           (C13916 + C13926 * C14075) * ce) /
                         C13530;
    const double C193 =
        (-(C13908 * C14050 * ce) / C13530) / C13909 -
        (C13920 * C13914 * C14051) / C13911 +
        C13908 * ((-(C13908 * C13928 * C13927 * C14051) / C13530) / C13909 -
                  (C14050 * ce) / C13911);
    const double C188 = (C13910 * C13907 * C14046 + C14050 * C13917) / C13909;
    const double C189 =
        (2 * C13908 * C14050 + C13908 * (C14050 + C14056 * C13917)) / C13909;
    const double C549 =
        (C13985 * C13908 * C14050 + C13908 * C13916 * ae) / C13909;
    const double C551 = (C13985 * (C14050 + C14056 * C13917) +
                         (C13916 + C13926 * C13917) * ae) /
                        C13909;
    const double C552 =
        (C13910 * C13907 * C14046 + C13985 * (C13985 * C14050 + C13916 * ae) +
         C13985 * C13916 * ae) /
        C13909;
    const double C993 = (C14015 * C13908 * C14050) / C13909;
    const double C995 = (C14015 * (C14050 + C14056 * C13917)) / C13909;
    const double C996 = (C13910 * C13907 * C14046 + C14050 * C14142) / C13909;
    const double C2115 = (C14015 * (C13985 * C14050 + C13916 * ae)) / C13909;
    const double C5301 =
        (2 * C14015 * C14050 + C14015 * (C14050 + C14056 * C14142)) / C13909;
    const double C280 =
        (-(C13908 * C14105 * ce) / C13530) / C13909 -
        (C13920 * C13914 * C14106) / C13911 +
        C13908 * ((-(C13908 * C13928 * C13927 * C14106) / C13530) / C13909 -
                  (C14105 * ce) / C13911);
    const double C275 = (C13910 * C13907 * C14101 + C14105 * C13917) / C13909;
    const double C276 =
        (2 * C13908 * C14105 + C13908 * (C14105 + C14111 * C13917)) / C13909;
    const double C687 = (C13985 * C13908 * C14105) / C13909;
    const double C689 = (C13985 * (C14105 + C14111 * C13917)) / C13909;
    const double C690 = (C13910 * C13907 * C14101 + C14105 * C14075) / C13909;
    const double C1131 =
        (C14015 * C13908 * C14105 + C13908 * C13916 * ae) / C13909;
    const double C1133 = (C14015 * (C14105 + C14111 * C13917) +
                          (C13916 + C13926 * C13917) * ae) /
                         C13909;
    const double C1134 =
        (C13910 * C13907 * C14101 + C14015 * (C14015 * C14105 + C13916 * ae) +
         C14015 * C13916 * ae) /
        C13909;
    const double C2277 =
        (C14015 * C13985 * C14105 + C13985 * C13916 * ae) / C13909;
    const double C2933 =
        (2 * C13985 * C14105 + C13985 * (C14105 + C14111 * C14075)) / C13909;
    const double C3288 = (C14015 * (C14105 + C14111 * C14075) +
                          (C13916 + C13926 * C14075) * ae) /
                         C13909;
    const double C13969 = C13908 * C13964;
    const double C14315 = C13964 * C14075;
    const double C14468 = C13964 * C14142;
    const double C14563 = C13985 * C13964;
    const double C13968 = C13908 * C13961;
    const double C14327 = C13961 * C14075;
    const double C14487 = C13961 * C14142;
    const double C14569 = C13985 * C13961;
    const double C13967 = C13947 + C13960;
    const double C14007 = C14005 * C13917;
    const double C14342 = C13985 * C14005;
    const double C14419 = C13908 * C14005;
    const double C14497 = C14005 * C14142;
    const double C14037 = C14035 * C13917;
    const double C14366 = C14035 * C14075;
    const double C14428 = C13908 * C14035;
    const double C14512 = C14015 * C14035;
    const double C14573 = C13985 * C14035;
    const double C14066 = C14064 * C13917;
    const double C14345 = C13985 * C14064;
    const double C14421 = C13908 * C14064;
    const double C14481 = C14064 * C14142;
    const double C14084 = C13947 + C14083;
    const double C14121 = C14119 * C13917;
    const double C14378 = C14119 * C14075;
    const double C14432 = C13908 * C14119;
    const double C14515 = C14015 * C14119;
    const double C14575 = C13985 * C14119;
    const double C14151 = C13947 + C14150;
    const double C13950 = C13945 / C13530;
    const double C14314 = C13945 / C13911;
    const double C3027 = (C13985 * C13924 + C14312 * C14142) / C13909;
    const double C13951 = C13946 / C13911;
    const double C3026 = -(C14325 * C14142 + C13985 * C13923) / C13530;
    const double C13963 = C13926 + C13956;
    const double C13965 = C13955 * ae;
    const double C13962 = C13955 * ce;
    const double C14420 = C13985 * C13955;
    const double C14555 = C14015 * C13955;
    const double C14350 = C13926 + C14344;
    const double C14352 = C14343 * ae;
    const double C14349 = C14343 * ce;
    const double C14574 = C14015 * C14343;
    const double C14520 = C13926 + C14514;
    const double C14522 = C14513 * ae;
    const double C14519 = C14513 * ce;
    const double C14004 = C14001 / C13911;
    const double C894 = -(C13999 * C14142 + C13908 * C13991) / C13530;
    const double C14034 = C14031 / C13911;
    const double C502 = -(C14029 * C14075 + C13908 * C14021) / C13530;
    const double C14063 = C14060 / C13911;
    const double C14340 = C14060 / C13530;
    const double C997 = (C13908 * C14050 + C14058 * C14142) / C13909;
    const double C14118 = C14115 / C13911;
    const double C14510 = C14115 / C13530;
    const double C691 = (C13908 * C14105 + C14113 * C14075) / C13909;
    const double C128 =
        2 * ((-(C13908 * C13996) / C13530) / C13909 - (ae * C13991) / C13911) -
        (ae * (C13997 * C13917 + C13991)) / C13911 +
        C13908 *
            ((-(ae * C13908 * C13997) / C13530) / C13909 - C13996 / C13911 +
             C13908 *
                 ((-(C13908 * C13949 * C13948 * C13992) / C13530) / C13909 -
                  (ae * C13997) / C13911));
    const double C456 = (-(C13985 * C13924 * ce) / C13530) / C13909 -
                        (C13920 * C13914 * C13992) / C13911 +
                        C13985 * ((-(C13985 * C13996) / C13530) / C13909 -
                                  (C13924 * ce) / C13911);
    const double C457 = C13985 * ((-(C13908 * C13996) / C13530) / C13909 -
                                  (ae * C13991) / C13911) -
                        ((C13908 * C13924 + C13916 * ae) * ce) / C13911;
    const double C896 = C14015 * ((-(C13908 * C13996) / C13530) / C13909 -
                                  (ae * C13991) / C13911);
    const double C899 = (-(C13996 * C14142) / C13530) / C13909 -
                        (C13920 * C13914 * C13992) / C13911;
    const double C2006 = C14015 * ((-(C13985 * C13996) / C13530) / C13909 -
                                   (C13924 * ce) / C13911);
    const double C14006 = C13908 * C14003;
    const double C14313 = C13985 * C14003;
    const double C2809 =
        2 * ((-(C13985 * C13996) / C13530) / C13909 - (C13924 * ce) / C13911) -
        ((C13924 + C13937 * C14075) * ce) / C13911 +
        C13985 *
            ((-(C13985 * C13937 * ce) / C13530) / C13909 - C13996 / C13911 +
             C13985 *
                 ((-(C13985 * C14003) / C13530) / C13909 - C13945 / C13911));
    const double C5246 =
        (-2 * C14015 * C13996) / C13911 +
        C14015 * ((-(C14003 * C14142) / C13530) / C13909 - C13996 / C13911);
    const double C5247 =
        3 * ((-(C14003 * C14142) / C13530) / C13909 - C13996 / C13911) +
        C14015 * ((-2 * C14015 * C14003) / C13911 +
                  C14015 * ((-(std::pow(C13906, 6) * bs[6] * C13992 * C14142) /
                             C13530) /
                                C13909 -
                            C14003 / C13911));
    const double C194 =
        2 * ((-(C13908 * C14055) / C13530) / C13909 - (C14050 * ce) / C13911) -
        ((C14050 + C14056 * C13917) * ce) / C13911 +
        C13908 *
            ((-(C13908 * C14056 * ce) / C13530) / C13909 - C14055 / C13911 +
             C13908 *
                 ((-(C13908 * C13949 * C13948 * C14051) / C13530) / C13909 -
                  (C14056 * ce) / C13911));
    const double C556 = C13985 * ((-(C13908 * C14055) / C13530) / C13909 -
                                  (C14050 * ce) / C13911) -
                        (ae * (C13908 * C13923 + C13916 * ce)) / C13911;
    const double C558 = (-(ae * C13985 * C13923) / C13530) / C13909 -
                        (C13920 * C13914 * C14051) / C13911 +
                        C13985 * ((-(C13985 * C14055) / C13530) / C13909 -
                                  (ae * C13923) / C13911);
    const double C1000 = C14015 * ((-(C13908 * C14055) / C13530) / C13909 -
                                   (C14050 * ce) / C13911);
    const double C1002 = (-(C14055 * C14142) / C13530) / C13909 -
                         (C13920 * C13914 * C14051) / C13911;
    const double C2118 = (-(C13985 * C14015 * C14055) / C13530) / C13909 -
                         (ae * C14015 * C13923) / C13911;
    const double C14065 = C13908 * C14062;
    const double C14326 = C13985 * C14062;
    const double C14448 = C14015 * C14062;
    const double C3164 =
        C13985 * ((-(C14062 * C14142) / C13530) / C13909 - C14055 / C13911) -
        (ae * (C13936 * C14142 + C13923)) / C13911;
    const double C3165 =
        (-(ae * C14015 * C14325) / C13530) / C13909 -
        (C14015 * C14055) / C13911 +
        C13985 * ((-(C13985 * C14015 * C14062) / C13530) / C13909 -
                  (ae * C14015 * C13936) / C13911);
    const double C3166 =
        (-(C14062 * C14142) / C13530) / C13909 - C14055 / C13911 -
        (ae * (C13985 * C13961 * C14142 + C14325)) / C13911 +
        C13985 * (C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14051 * C14142) /
                             C13530) /
                                C13909 -
                            C14062 / C13911) -
                  (ae * (C13961 * C14142 + C13936)) / C13911);
    const double C5303 =
        (-2 * C14015 * C14055) / C13911 +
        C14015 * ((-(C14062 * C14142) / C13530) / C13909 - C14055 / C13911);
    const double C161 =
        2 * ((-(C13908 * C14026) / C13530) / C13909 - (ae * C14021) / C13911) -
        (ae * (C14027 * C13917 + C14021)) / C13911 +
        C13908 *
            ((-(ae * C13908 * C14027) / C13530) / C13909 - C14026 / C13911 +
             C13908 *
                 ((-(C13908 * C13949 * C13948 * C14022) / C13530) / C13909 -
                  (ae * C14027) / C13911));
    const double C506 = (-(C14026 * C14075) / C13530) / C13909 -
                        (C13920 * C13914 * C14022) / C13911;
    const double C507 = C13985 * ((-(C13908 * C14026) / C13530) / C13909 -
                                  (ae * C14021) / C13911);
    const double C950 = (-(C14015 * C13924 * ce) / C13530) / C13909 -
                        (C13920 * C13914 * C14022) / C13911 +
                        C14015 * ((-(C14015 * C14026) / C13530) / C13909 -
                                  (C13924 * ce) / C13911);
    const double C951 = C14015 * ((-(C13908 * C14026) / C13530) / C13909 -
                                  (ae * C14021) / C13911) -
                        ((C13908 * C13924 + C13916 * ae) * ce) / C13911;
    const double C2062 = (-(C14015 * C13985 * C14026) / C13530) / C13909 -
                         (C13985 * C13924 * ce) / C13911;
    const double C14036 = C13908 * C14033;
    const double C14467 = C14015 * C14033;
    const double C14562 = C13985 * C14033;
    const double C2835 =
        (-2 * C13985 * C14026) / C13911 +
        C13985 * ((-(C14033 * C14075) / C13530) / C13909 - C14026 / C13911);
    const double C2836 =
        3 * ((-(C14033 * C14075) / C13530) / C13909 - C14026 / C13911) +
        C13985 * ((-2 * C13985 * C14033) / C13911 +
                  C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14022 * C14075) /
                             C13530) /
                                C13909 -
                            C14033 / C13911));
    const double C3120 =
        (-(C14015 * C14312 * ce) / C13530) / C13909 -
        (C13985 * C14026) / C13911 +
        C14015 * ((-(C14015 * C13985 * C14033) / C13530) / C13909 -
                  (C14312 * ce) / C13911);
    const double C3121 =
        C14015 * ((-(C14033 * C14075) / C13530) / C13909 - C14026 / C13911) -
        ((C13924 + C13937 * C14075) * ce) / C13911;
    const double C248 =
        (-2 * C13908 * C14094) / C13911 +
        C13908 * ((-(C13949 * C13948 * C14091 * C13917) / C13530) / C13909 -
                  C14094 / C13911);
    const double C644 = (-(ae * C13985 * C14021) / C13530) / C13909 -
                        (C13920 * C13914 * C14091) / C13911 +
                        C13985 * ((-(C13985 * C14094) / C13530) / C13909 -
                                  (ae * C14021) / C13911);
    const double C645 = (-(C13985 * C13908 * C14094) / C13530) / C13909 -
                        (ae * C13908 * C14021) / C13911;
    const double C1088 = (-(C14015 * C14050 * ce) / C13530) / C13909 -
                         (C13920 * C13914 * C14091) / C13911 +
                         C14015 * ((-(C14015 * C14094) / C13530) / C13909 -
                                   (C14050 * ce) / C13911);
    const double C1089 = (-(C14015 * C13908 * C14094) / C13530) / C13909 -
                         (C13908 * C14050 * ce) / C13911;
    const double C2224 = C13985 * ((-(C14015 * C14094) / C13530) / C13909 -
                                   (C14050 * ce) / C13911) -
                         (ae * (C14015 * C14021 + C13916 * ce)) / C13911;
    const double C14365 = C13985 * C14097;
    const double C14427 = C13908 * C14097;
    const double C14452 = C14015 * C14097;
    const double C249 =
        3 * ((-(C14097 * C13917) / C13530) / C13909 - C14094 / C13911) +
        C13908 * ((-2 * C13908 * C14097) / C13911 +
                  C13908 * ((-(std::pow(C13906, 6) * bs[6] * C14091 * C13917) /
                             C13530) /
                                C13909 -
                            C14097 / C13911));
    const double C646 =
        (-(ae * C13985 * C14029) / C13530) / C13909 -
        (C13908 * C14094) / C13911 +
        C13985 * ((-(C13985 * C13908 * C14097) / C13530) / C13909 -
                  (ae * C14029) / C13911);
    const double C647 =
        C13985 * ((-(C14097 * C13917) / C13530) / C13909 - C14094 / C13911) -
        (ae * (C14027 * C13917 + C14021)) / C13911;
    const double C1090 =
        (-(C14015 * C14058 * ce) / C13530) / C13909 -
        (C13908 * C14094) / C13911 +
        C14015 * ((-(C14015 * C13908 * C14097) / C13530) / C13909 -
                  (C14058 * ce) / C13911);
    const double C1091 =
        C14015 * ((-(C14097 * C13917) / C13530) / C13909 - C14094 / C13911) -
        ((C14050 + C14056 * C13917) * ce) / C13911;
    const double C281 =
        2 * ((-(C13908 * C14110) / C13530) / C13909 - (C14105 * ce) / C13911) -
        ((C14105 + C14111 * C13917) * ce) / C13911 +
        C13908 *
            ((-(C13908 * C14111 * ce) / C13530) / C13909 - C14110 / C13911 +
             C13908 *
                 ((-(C13908 * C13949 * C13948 * C14106) / C13530) / C13909 -
                  (C14111 * ce) / C13911));
    const double C694 = C13985 * ((-(C13908 * C14110) / C13530) / C13909 -
                                  (C14105 * ce) / C13911);
    const double C696 = (-(C14110 * C14075) / C13530) / C13909 -
                        (C13920 * C13914 * C14106) / C13911;
    const double C1138 = C14015 * ((-(C13908 * C14110) / C13530) / C13909 -
                                   (C14105 * ce) / C13911) -
                         (ae * (C13908 * C13923 + C13916 * ce)) / C13911;
    const double C1140 = (-(ae * C14015 * C13923) / C13530) / C13909 -
                         (C13920 * C13914 * C14106) / C13911 +
                         C14015 * ((-(C14015 * C14110) / C13530) / C13909 -
                                   (ae * C13923) / C13911);
    const double C2280 = (-(C14015 * C13985 * C14110) / C13530) / C13909 -
                         (ae * C13985 * C13923) / C13911;
    const double C14120 = C13908 * C14117;
    const double C14486 = C14015 * C14117;
    const double C14568 = C13985 * C14117;
    const double C2935 =
        (-2 * C13985 * C14110) / C13911 +
        C13985 * ((-(C14117 * C14075) / C13530) / C13909 - C14110 / C13911);
    const double C2936 =
        3 * ((-(C14117 * C14075) / C13530) / C13909 - C14110 / C13911) +
        C13985 * ((-2 * C13985 * C14117) / C13911 +
                  C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14106 * C14075) /
                             C13530) /
                                C13909 -
                            C14117 / C13911));
    const double C3290 =
        (-(ae * C14015 * C14325) / C13530) / C13909 -
        (C13985 * C14110) / C13911 +
        C14015 * ((-(C14015 * C13985 * C14117) / C13530) / C13909 -
                  (ae * C14325) / C13911);
    const double C3291 =
        C14015 * ((-(C14117 * C14075) / C13530) / C13909 - C14110 / C13911) -
        (ae * (C13936 * C14075 + C13923)) / C13911;
    const double C308 =
        (-2 * C13908 * C14135) / C13911 +
        C13908 * ((-(C13949 * C13948 * C14132 * C13917) / C13530) / C13909 -
                  C14135 / C13911);
    const double C738 = (-(C13985 * C14105 * ce) / C13530) / C13909 -
                        (C13920 * C13914 * C14132) / C13911 +
                        C13985 * ((-(C13985 * C14135) / C13530) / C13909 -
                                  (C14105 * ce) / C13911);
    const double C739 = (-(C13985 * C13908 * C14135) / C13530) / C13909 -
                        (C13908 * C14105 * ce) / C13911;
    const double C1181 = (-(C14015 * C13908 * C14135) / C13530) / C13909 -
                         (ae * C13908 * C13991) / C13911;
    const double C1184 = (-(ae * C14015 * C13991) / C13530) / C13909 -
                         (C13920 * C13914 * C14132) / C13911 +
                         C14015 * ((-(C14015 * C14135) / C13530) / C13909 -
                                   (ae * C13991) / C13911);
    const double C2333 = C14015 * ((-(C13985 * C14135) / C13530) / C13909 -
                                   (C14105 * ce) / C13911) -
                         (ae * (C13985 * C13991 + C13916 * ce)) / C13911;
    const double C14377 = C13985 * C14138;
    const double C14431 = C13908 * C14138;
    const double C14496 = C14015 * C14138;
    const double C309 =
        3 * ((-(C14138 * C13917) / C13530) / C13909 - C14135 / C13911) +
        C13908 * ((-2 * C13908 * C14138) / C13911 +
                  C13908 * ((-(std::pow(C13906, 6) * bs[6] * C14132 * C13917) /
                             C13530) /
                                C13909 -
                            C14138 / C13911));
    const double C740 =
        (-(C13985 * C14113 * ce) / C13530) / C13909 -
        (C13908 * C14135) / C13911 +
        C13985 * ((-(C13985 * C13908 * C14138) / C13530) / C13909 -
                  (C14113 * ce) / C13911);
    const double C741 =
        C13985 * ((-(C14138 * C13917) / C13530) / C13909 - C14135 / C13911) -
        ((C14105 + C14111 * C13917) * ce) / C13911;
    const double C1183 =
        C14015 * ((-(C14138 * C13917) / C13530) / C13909 - C14135 / C13911) -
        (ae * (C13997 * C13917 + C13991)) / C13911;
    const double C1185 =
        (-(ae * C14015 * C13999) / C13530) / C13909 -
        (C13908 * C14135) / C13911 +
        C14015 * ((-(C14015 * C13908 * C14138) / C13530) / C13909 -
                  (ae * C13999) / C13911);
    const double C13567 = C13562 / C13536;
    const double C13566 = C13528 * C13562;
    const double C13565 = C13561 + C13538;
    const double C13552 = C13545 / C13535;
    const double C13550 = 2 * C13545;
    const double C14838 = C14837 * C14831;
    const double C14844 = C14837 / C13542;
    const double C15141 = C14843 * C14837;
    const double C15139 = C14837 / C13530;
    const double C375 = (C14835 * std::pow(C14831, 2)) / C13535 + C14836;
    const double C14846 = C14845 * C14831;
    const double C15145 = C14830 * C14845;
    const double C15143 = 2 * C14845;
    const double C15183 = C14845 / C15147;
    const double C66 = C14845 / C15176;
    const double C7671 = C14845 / C13536;
    const double C15169 = C15140 / C13530;
    const double C376 = (-2 * C14843 * C15140) / C13530;
    const double C15196 = C15167 / C13535;
    const double C13718 = C13713 / C13536;
    const double C13717 = C13621 * C13713;
    const double C13669 = 2 * C13624;
    const double C13693 = C13624 / C13535;
    const double C448 =
        ((0 * ce) / C13530 - C13624 / C13535) / C13536 + (0 * ce) / C13530;
    const double C1313 =
        ((C14875 - (C13621 * 2 * C13624) / C13530) * ce) / C13530 -
        C13622 / C13542;
    const double C1314 = (0 * ce) / C13530 - C13624 / C13535;
    const double C2430 = (C14875 * std::pow(C14925, 2)) / C13535 + C14924;
    const double C14927 = C14926 * C14925;
    const double C14932 = C14926 / C13542;
    const double C15153 = C14926 / C13530;
    const double C15150 = C14843 * C14926;
    const double C447 =
        (((C14875 - (C13621 * 2 * C13624) / C13530) * ce) / C13530 -
         C13622 / C13542) /
            C13536 +
        ((C13621 * ((0 * ce) / C13530 - C13624 / C13535) + C14933) * ce) /
            C13530;
    const double C14934 = C14933 * C14925;
    const double C15159 = C14923 * C14933;
    const double C15158 = 2 * C14933;
    const double C15189 = C14933 / C15147;
    const double C2770 = C14933 / C15176;
    const double C7674 = C14933 / C13536;
    const double C15185 = C15155 / C13530;
    const double C2431 = (-2 * C14843 * C15155) / C13530;
    const double C15201 = C15177 / C13535;
    const double C13809 = C13804 / C13536;
    const double C13808 = C13636 * C13804;
    const double C13762 = 2 * C13639;
    const double C13784 = C13639 / C13535;
    const double C942 =
        ((0 * ce) / C13530 - C13639 / C13535) / C13536 + (0 * ce) / C13530;
    const double C1675 =
        ((C14886 - (C13636 * 2 * C13639) / C13530) * ce) / C13530 -
        C13637 / C13542;
    const double C1676 = (0 * ce) / C13530 - C13639 / C13535;
    const double C4535 = (C14886 * std::pow(C14965, 2)) / C13535 + C14964;
    const double C14967 = C14966 * C14965;
    const double C14972 = C14966 / C13542;
    const double C15154 = C14966 / C13530;
    const double C15152 = C14843 * C14966;
    const double C941 =
        (((C14886 - (C13636 * 2 * C13639) / C13530) * ce) / C13530 -
         C13637 / C13542) /
            C13536 +
        ((C13636 * ((0 * ce) / C13530 - C13639 / C13535) + C14973) * ce) /
            C13530;
    const double C14974 = C14973 * C14965;
    const double C15165 = C14963 * C14973;
    const double C15164 = 2 * C14973;
    const double C15195 = C14973 / C15147;
    const double C5213 = C14973 / C15176;
    const double C10449 = C14973 / C13536;
    const double C15191 = C15161 / C13530;
    const double C4536 = (-2 * C14843 * C15161) / C13530;
    const double C15203 = C15180 / C13535;
    const double C13722 = C13716 + C13688;
    const double C13813 = C13807 + C13779;
    const double C13943 = C13940 + C13934;
    const double C14338 = C14336 + C13934;
    const double C14508 = C14506 + C13934;
    const double C2225 =
        C13985 * ((-(C14015 * C13908 * C14097) / C13530) / C13909 -
                  (C14058 * ce) / C13911) -
        (ae * (C14015 * C14029 + C13932 * ce)) / C13911;
    const double C2334 =
        C14015 * ((-(C13985 * C13908 * C14138) / C13530) / C13909 -
                  (C14113 * ce) / C13911) -
        (ae * (C13985 * C13999 + C13932 * ce)) / C13911;
    const double C452 = -(C13985 * (C13985 * C13999 + C13932 * ce) +
                          C13908 * C13991 + C13985 * C13932 * ce) /
                        C13530;
    const double C553 =
        (C13908 * C14050 + C13985 * (C13985 * C14058 + C13932 * ae) +
         C13985 * C13932 * ae) /
        C13909;
    const double C946 = -(C14015 * (C14015 * C14029 + C13932 * ce) +
                          C13908 * C14021 + C14015 * C13932 * ce) /
                        C13530;
    const double C1135 =
        (C13908 * C14105 + C14015 * (C14015 * C14113 + C13932 * ae) +
         C14015 * C13932 * ae) /
        C13909;
    const double C2004 = -(C14015 * (C13985 * C13999 + C13932 * ce)) / C13530;
    const double C2060 =
        -(C14015 * C13985 * C14029 + C13985 * C13932 * ce) / C13530;
    const double C2116 = (C14015 * (C13985 * C14058 + C13932 * ae)) / C13909;
    const double C2278 =
        (C14015 * C13985 * C14113 + C13985 * C13932 * ae) / C13909;
    const double C388 = C13908 * C13916 + C13932 * C14075;
    const double C832 = C13908 * C13916 + C13932 * C14142;
    const double C1942 = C14015 * C13985 * C13932;
    const double C3417 =
        2 * C13985 * C13932 + C13985 * (C13932 + C13955 * C14075);
    const double C3759 = C14015 * (C13932 + C13955 * C14075);
    const double C5931 =
        2 * C14015 * C13932 + C14015 * (C13932 + C13955 * C14142);
    const double C13942 = C13939 + C13931;
    const double C14337 = C14334 + C13931;
    const double C14507 = C14504 + C13931;
    const double C13941 = C13938 * C13918;
    const double C14080 = C14079 * C13918;
    const double C14147 = C14146 * C13918;
    const double C3117 = -(C14015 * (C14015 * C14364 + C14335 * ce) +
                           C13985 * C14021 + C14015 * C14335 * ce) /
                         C13530;
    const double C3287 =
        (C13985 * C14105 + C14015 * (C14015 * C14376 + C14335 * ae) +
         C14015 * C14335 * ae) /
        C13909;
    const double C3023 = C13985 * C13916 + C14335 * C14142;
    const double C6257 =
        2 * C14015 * C14335 + C14015 * (C14335 + C14343 * C14142);
    const double C13973 = C13969 + C13958;
    const double C14317 = C13937 + C14315;
    const double C14470 = C13937 + C14468;
    const double C6258 =
        (2 * C14015 * C14312 + C14015 * (C14312 + C14563 * C14142)) / C13909;
    const double C13972 = C13968 + C13954;
    const double C14329 = C14327 + C13936;
    const double C14489 = C14487 + C13936;
    const double C6259 = (-2 * C14015 * C14325) / C13530 -
                         (C14015 * (C14569 * C14142 + C14325)) / C13530;
    const double C13971 = C13967 * C13918;
    const double C14009 = C14007 + C13997;
    const double C14348 = C14342 + C13954;
    const double C14422 = C13985 * C14419;
    const double C5969 = (-2 * C14015 * C13999) / C13530 -
                         (C14015 * (C14419 * C14142 + C13999)) / C13530;
    const double C14499 = C14497 + C13997;
    const double C14039 = C14037 + C14027;
    const double C14368 = C14366 + C14027;
    const double C14543 = C13985 * C14428;
    const double C14554 = C14015 * C14428;
    const double C3495 = (-2 * C13985 * C14029) / C13530 -
                         (C13985 * (C14428 * C14075 + C14029)) / C13530;
    const double C3865 = -(C14015 * (C14428 * C14075 + C14029) +
                           (C13932 + C13955 * C14075) * ce) /
                         C13530;
    const double C14518 = C14512 + C13954;
    const double C14576 = C14015 * C14573;
    const double C14068 = C14056 + C14066;
    const double C14351 = C14345 + C13958;
    const double C14423 = C13985 * C14421;
    const double C6045 =
        (2 * C14015 * C14058 + C14015 * (C14058 + C14421 * C14142)) / C13909;
    const double C14482 = C14056 + C14481;
    const double C14085 = C14084 * C13918;
    const double C14123 = C14111 + C14121;
    const double C14380 = C14111 + C14378;
    const double C14544 = C13985 * C14432;
    const double C14556 = C14015 * C14432;
    const double C3637 =
        (2 * C13985 * C14113 + C13985 * (C14113 + C14432 * C14075)) / C13909;
    const double C4071 = (C14015 * (C14113 + C14432 * C14075) +
                          (C13932 + C13955 * C14075) * ae) /
                         C13909;
    const double C14521 = C14515 + C13958;
    const double C14577 = C14015 * C14575;
    const double C14152 = C14151 * C13918;
    const double C13959 = -C13950;
    const double C5277 =
        2 * ((-(C14015 * C14026) / C13530) / C13909 - (C13924 * ce) / C13911) -
        ((C13924 + C13937 * C14142) * ce) / C13911 +
        C14015 *
            ((-(C14015 * C13937 * ce) / C13530) / C13909 - C14026 / C13911 +
             C14015 * ((-(C14015 * C14033) / C13530) / C13909 - C14314));
    const double C2861 =
        2 * ((-(C13985 * C14055) / C13530) / C13909 - (ae * C13923) / C13911) -
        (ae * (C13936 * C14075 + C13923)) / C13911 +
        C13985 *
            ((-(ae * C13985 * C13936) / C13530) / C13909 - C14055 / C13911 +
             C13985 * ((-(C13985 * C14062) / C13530) / C13909 - C13951));
    const double C5377 =
        2 * ((-(C14015 * C14110) / C13530) / C13909 - (ae * C13923) / C13911) -
        (ae * (C13936 * C14142 + C13923)) / C13911 +
        C14015 *
            ((-(ae * C14015 * C13936) / C13530) / C13909 - C14110 / C13911 +
             C14015 * ((-(C14015 * C14117) / C13530) / C13909 - C13951));
    const double C81 = 3 * (C13916 + C13926 * C13917) +
                       C13908 * (2 * C13932 + C13908 * C13963);
    const double C389 = C13916 + C13926 * C13917 + C13963 * C14075;
    const double C833 = C13916 + C13926 * C13917 + C13963 * C14142;
    const double C1275 = C13985 * (2 * C13932 + C13908 * C13963);
    const double C1601 = C14015 * (2 * C13932 + C13908 * C13963);
    const double C1943 = C14015 * C13985 * C13963;
    const double C5477 = C13985 * C13932 + C14420 * C14142;
    const double C2773 = 3 * (C13916 + C13926 * C14075) +
                         C13985 * (2 * C14335 + C13985 * C14350);
    const double C3025 = C13916 + C13926 * C14075 + C14350 * C14142;
    const double C4209 = C14015 * (2 * C14335 + C13985 * C14350);
    const double C5215 = 3 * (C13916 + C13926 * C14142) +
                         C14015 * (2 * C14505 + C14015 * C14520);
    const double C5401 =
        2 * ((-(C14015 * C14135) / C13530) / C13909 - (ae * C13991) / C13911) -
        (ae * (C13997 * C14142 + C13991)) / C13911 +
        C14015 *
            ((-(ae * C14015 * C13997) / C13530) / C13909 - C14135 / C13911 +
             C14015 * ((-(C14015 * C14138) / C13530) / C13909 - C14004));
    const double C2909 =
        2 * ((-(C13985 * C14094) / C13530) / C13909 - (ae * C14021) / C13911) -
        (ae * (C14027 * C14075 + C14021)) / C13911 +
        C13985 *
            ((-(ae * C13985 * C14027) / C13530) / C13909 - C14094 / C13911 +
             C13985 * ((-(C13985 * C14097) / C13530) / C13909 - C14034));
    const double C3246 =
        C13985 *
            ((-(C14015 * C14056 * ce) / C13530) / C13909 - C14094 / C13911 +
             C14015 * ((-(C14015 * C14097) / C13530) / C13909 - C14063)) -
        (ae * (C14015 * (C14015 * C14027 + C13931) + C14021 +
               C14015 * C13926 * ce)) /
            C13911;
    const double C3247 =
        (-(C14015 * C14094) / C13530) / C13909 - (C14050 * ce) / C13911 -
        (ae * (C14015 * C14364 + C14335 * ce)) / C13911 +
        C13985 * (C13985 * ((-(C14015 * C14097) / C13530) / C13909 - C14063) -
                  (ae * (C14015 * C14027 + C13931)) / C13911);
    const double C3248 =
        (-(C14015 * C14056 * ce) / C13530) / C13909 - C14094 / C13911 +
        C14015 * ((-(C14015 * C14097) / C13530) / C13909 - C14063) -
        (ae * (C14015 * (C14015 * C13985 * C14035 + C14349) + C14364 +
               C14015 * C14343 * ce)) /
            C13911 +
        C13985 *
            (C13985 *
                 ((-(C14015 * C14064 * ce) / C13530) / C13909 -
                  C14097 / C13911 +
                  C14015 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14091) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911)) -
             (ae * (C14015 * (C14015 * C14035 + C13954) + C14027 +
                    C14015 * C13947 * ce)) /
                 C13911);
    const double C14346 = -C14340;
    const double C2959 =
        2 * ((-(C13985 * C14135) / C13530) / C13909 - (C14105 * ce) / C13911) -
        ((C14105 + C14111 * C14075) * ce) / C13911 +
        C13985 *
            ((-(C13985 * C14111 * ce) / C13530) / C13909 - C14135 / C13911 +
             C13985 * ((-(C13985 * C14138) / C13530) / C13909 - C14118));
    const double C14516 = -C14510;
    const double C14008 = C14006 / C13530;
    const double C14316 = C14313 / C13530;
    const double C14067 = C14065 / C13530;
    const double C14328 = C14326 / C13530;
    const double C5304 =
        3 * ((-(C14062 * C14142) / C13530) / C13909 - C14055 / C13911) +
        C14015 * ((-2 * C14448) / C13911 +
                  C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14051 * C14142) /
                             C13530) /
                                C13909 -
                            C14062 / C13911));
    const double C14038 = C14036 / C13530;
    const double C14469 = C14467 / C13530;
    const double C6332 =
        2 * ((-(C14015 * C14562) / C13530) / C13909 - (C14312 * ce) / C13911) -
        ((C14312 + C14563 * C14142) * ce) / C13911 +
        C14015 *
            ((-(C14015 * C14563 * ce) / C13530) / C13909 - C14562 / C13911 +
             C14015 *
                 ((-(C14015 * C13985 * std::pow(C13906, 6) * bs[6] * C14022) /
                   C13530) /
                      C13909 -
                  (C14563 * ce) / C13911));
    const double C14367 = C14365 / C13530;
    const double C3602 =
        2 * ((-(C13985 * C14427) / C13530) / C13909 - (ae * C14029) / C13911) -
        (ae * (C14428 * C14075 + C14029)) / C13911 +
        C13985 *
            ((-(ae * C13985 * C14428) / C13530) / C13909 - C14427 / C13911 +
             C13985 *
                 ((-(C13985 * C13908 * std::pow(C13906, 6) * bs[6] * C14091) /
                   C13530) /
                      C13909 -
                  (ae * C14428) / C13911));
    const double C4020 =
        (-(C14015 * C14427) / C13530) / C13909 - (C14058 * ce) / C13911 -
        (ae * (C14015 * C13985 * C14428 + C14420 * ce)) / C13911 +
        C13985 *
            (C13985 *
                 ((-(C14015 * C13908 * std::pow(C13906, 6) * bs[6] * C14091) /
                   C13530) /
                      C13909 -
                  (C14421 * ce) / C13911) -
             (ae * (C14015 * C14428 + C13962)) / C13911);
    const double C5738 =
        C13985 *
            ((-(C14015 * C14421 * ce) / C13530) / C13909 - C14427 / C13911 +
             C14015 *
                 ((-(C14015 * C13908 * std::pow(C13906, 6) * bs[6] * C14091) /
                   C13530) /
                      C13909 -
                  (C14421 * ce) / C13911)) -
        (ae * (C14015 * (C14015 * C14428 + C13962) + C14029 +
               C14015 * C13955 * ce)) /
            C13911;
    const double C6116 =
        2 * ((-(C14015 * C14427) / C13530) / C13909 - (C14058 * ce) / C13911) -
        ((C14058 + C14421 * C14142) * ce) / C13911 +
        C14015 *
            ((-(C14015 * C14421 * ce) / C13530) / C13909 - C14427 / C13911 +
             C14015 *
                 ((-(C14015 * C13908 * std::pow(C13906, 6) * bs[6] * C14091) /
                   C13530) /
                      C13909 -
                  (C14421 * ce) / C13911));
    const double C14453 = C14452 / C13530;
    const double C14122 = C14120 / C13530;
    const double C14488 = C14486 / C13530;
    const double C6474 =
        2 * ((-(C14015 * C14568) / C13530) / C13909 - (ae * C14325) / C13911) -
        (ae * (C14569 * C14142 + C14325)) / C13911 +
        C14015 *
            ((-(ae * C14015 * C14569) / C13530) / C13909 - C14568 / C13911 +
             C14015 *
                 ((-(C14015 * C13985 * std::pow(C13906, 6) * bs[6] * C14106) /
                   C13530) /
                      C13909 -
                  (ae * C14569) / C13911));
    const double C14379 = C14377 / C13530;
    const double C3673 =
        2 * ((-(C13985 * C14431) / C13530) / C13909 - (C14113 * ce) / C13911) -
        ((C14113 + C14432 * C14075) * ce) / C13911 +
        C13985 *
            ((-(C13985 * C14432 * ce) / C13530) / C13909 - C14431 / C13911 +
             C13985 *
                 ((-(C13985 * C13908 * std::pow(C13906, 6) * bs[6] * C14132) /
                   C13530) /
                      C13909 -
                  (C14432 * ce) / C13911));
    const double C6187 =
        2 * ((-(C14015 * C14431) / C13530) / C13909 - (ae * C13999) / C13911) -
        (ae * (C14419 * C14142 + C13999)) / C13911 +
        C14015 *
            ((-(ae * C14015 * C14419) / C13530) / C13909 - C14431 / C13911 +
             C14015 *
                 ((-(C14015 * C13908 * std::pow(C13906, 6) * bs[6] * C14132) /
                   C13530) /
                      C13909 -
                  (ae * C14419) / C13911));
    const double C14498 = C14496 / C13530;
    const double C13571 = C13566 + 0;
    const double C13570 = C13565 / C13536;
    const double C13556 = C13541 - C13552;
    const double C13555 = C13528 * C13550;
    const double C383 =
        ((-C13550 / C13530) / C13536 - (0 * de) / C13530) / C13536 -
        (0 * de) / C13530;
    const double C2771 = -C13550 / C13530;
    const double C6904 = (-C13550 / C13530) / C13536 - (0 * de) / C13530;
    const double C14839 = C14838 / C13535;
    const double C15170 = 2 * C15141;
    const double C14847 = C14846 / C13530;
    const double C15174 = C15145 / C13542;
    const double C15197 = C15139 - C15169;
    const double C6897 = -C15169;
    const double C15211 = C15196 + C14836;
    const double C13723 = C13717 + 0;
    const double C13690 = C13621 * C13669;
    const double C2475 =
        ((-C13622 / C13530) / C13536 -
         ((C14875 - (C13621 * C13669) / C13530) * de) / C13530) /
            C13536 -
        ((C13621 * ((-C13669 / C13530) / C13536 - (0 * de) / C13530) + C14933) *
         de) /
            C13530;
    const double C2476 =
        ((-C13669 / C13530) / C13536 - (0 * de) / C13530) / C13536 -
        (0 * de) / C13530;
    const double C6624 = (-C13669 / C13530) / C13536 - (0 * de) / C13530;
    const double C13703 = C13699 - C13693;
    const double C14928 = C14927 / C13535;
    const double C446 =
        (((0 - (C13621 * C13622) / C13530) * ce) / C13530 - (0 * de) / C13542) /
            C13536 +
        ((C13621 * (((C14875 - (C13621 * 2 * C13624) / C13530) * ce) / C13530 -
                    C13622 / C13542) +
          C15153) *
         ce) /
            C13530 +
        (0 * ce) / C13530 - C13624 / C13535;
    const double C15178 = 2 * C15150;
    const double C14935 = C14934 / C13530;
    const double C15188 = C15159 / C13542;
    const double C15205 = C15153 - C15185;
    const double C6583 = -C15185;
    const double C15214 = C15201 + C14924;
    const double C13814 = C13808 + 0;
    const double C13781 = C13636 * C13762;
    const double C4615 =
        ((-C13637 / C13530) / C13536 -
         ((C14886 - (C13636 * C13762) / C13530) * de) / C13530) /
            C13536 -
        ((C13636 * ((-C13762 / C13530) / C13536 - (0 * de) / C13530) + C14973) *
         de) /
            C13530;
    const double C4616 =
        ((-C13762 / C13530) / C13536 - (0 * de) / C13530) / C13536 -
        (0 * de) / C13530;
    const double C8990 = (-C13762 / C13530) / C13536 - (0 * de) / C13530;
    const double C13794 = C13790 - C13784;
    const double C14968 = C14967 / C13535;
    const double C940 =
        (((0 - (C13636 * C13637) / C13530) * ce) / C13530 - (0 * de) / C13542) /
            C13536 +
        ((C13636 * (((C14886 - (C13636 * 2 * C13639) / C13530) * ce) / C13530 -
                    C13637 / C13542) +
          C15154) *
         ce) /
            C13530 +
        (0 * ce) / C13530 - C13639 / C13535;
    const double C15181 = 2 * C15152;
    const double C14975 = C14974 / C13530;
    const double C15194 = C15165 / C13542;
    const double C15208 = C15154 - C15191;
    const double C8919 = -C15191;
    const double C15215 = C15203 + C14964;
    const double C13726 = C13722 / C13536;
    const double C13817 = C13813 / C13536;
    const double C88 = (2 * (C13908 * C13924 + C13916 * ae) +
                        C13908 * (C13924 + C13908 * C13943 + C13932 * ae) +
                        (C13916 + C13926 * C13917) * ae) /
                       C13909;
    const double C394 =
        (C13985 * (C13924 + C13908 * C13943 + C13932 * ae)) / C13909;
    const double C398 =
        (C13908 * C13924 + C13916 * ae + C13943 * C14075) / C13909;
    const double C838 =
        (C14015 * (C13924 + C13908 * C13943 + C13932 * ae)) / C13909;
    const double C842 =
        (C13908 * C13924 + C13916 * ae + C13943 * C14142) / C13909;
    const double C1946 = (C14015 * C13985 * C13943) / C13909;
    const double C2859 = (2 * (C13985 * C14050 + C13916 * ae) +
                          C13985 * (C14050 + C13985 * C14338 + C14335 * ae) +
                          (C13916 + C13926 * C14075) * ae) /
                         C13909;
    const double C3161 =
        (C13985 * C14050 + C13916 * ae + C14338 * C14142) / C13909;
    const double C3162 =
        (C14015 * (C14050 + C13985 * C14338 + C14335 * ae)) / C13909;
    const double C5375 = (2 * (C14015 * C14105 + C13916 * ae) +
                          C14015 * (C14105 + C14015 * C14508 + C14505 * ae) +
                          (C13916 + C13926 * C14142) * ae) /
                         C13909;
    const double C89 =
        (-2 * (C13908 * C13923 + C13916 * ce)) / C13530 -
        (C13908 * (C13908 * C13942 + C13923 + C13932 * ce)) / C13530 -
        ((C13916 + C13926 * C13917) * ce) / C13530;
    const double C395 =
        -(C13985 * (C13908 * C13942 + C13923 + C13932 * ce)) / C13530;
    const double C399 =
        -(C13942 * C14075 + C13908 * C13923 + C13916 * ce) / C13530;
    const double C839 =
        -(C14015 * (C13908 * C13942 + C13923 + C13932 * ce)) / C13530;
    const double C843 =
        -(C13942 * C14142 + C13908 * C13923 + C13916 * ce) / C13530;
    const double C1947 = -(C14015 * C13985 * C13942) / C13530;
    const double C2807 =
        (-2 * (C13985 * C13991 + C13916 * ce)) / C13530 -
        (C13985 * (C13985 * C14337 + C13991 + C14335 * ce)) / C13530 -
        ((C13916 + C13926 * C14075) * ce) / C13530;
    const double C3073 =
        -(C14015 * (C13985 * C14337 + C13991 + C14335 * ce)) / C13530;
    const double C3074 =
        -(C14337 * C14142 + C13985 * C13991 + C13916 * ce) / C13530;
    const double C5275 =
        (-2 * (C14015 * C14021 + C13916 * ce)) / C13530 -
        (C14015 * (C14015 * C14507 + C14021 + C14505 * ce)) / C13530 -
        ((C13916 + C13926 * C14142) * ce) / C13530;
    const double C95 =
        2 * ((-(C13924 * ce) / C13530) / C13909 - (ae * C13923) / C13911 -
             (C13908 * C13941) / C13911) -
        (ae * (C13908 * C13942 + C13923 + C13932 * ce)) / C13911 -
        ((C13924 + C13908 * C13943 + C13932 * ae) * ce) / C13911 +
        C13908 *
            ((-(ae * C13942) / C13530) / C13909 - C13941 / C13911 -
             (C13943 * ce) / C13911 +
             C13908 *
                 ((-(C13937 * ce) / C13530) / C13909 - (ae * C13936) / C13911 -
                  (C13908 *
                   (C13927 * C13928 + C13917 * bs[5] * std::pow(C13913, 5)) *
                   C13918) /
                      C13911));
    const double C403 = (-(C13985 * C13924 * ce) / C13530) / C13909 -
                        (ae * C13985 * C13923) / C13911 -
                        (C13908 * C13985 * C13941) / C13911;
    const double C405 = (-(C13941 * C14075) / C13530) / C13909 -
                        ((C13916 + C13917 * C13914 * C13920) * C13918) / C13911;
    const double C847 = (-(C14015 * C13924 * ce) / C13530) / C13909 -
                        (ae * C14015 * C13923) / C13911 -
                        (C13908 * C14015 * C13941) / C13911;
    const double C849 = (-(C13941 * C14142) / C13530) / C13909 -
                        ((C13916 + C13917 * C13914 * C13920) * C13918) / C13911;
    const double C1950 = (-(C14015 * C13985 * C13941) / C13530) / C13909;
    const double C221 =
        (-2 * C13908 * C14080) / C13911 +
        C13908 * ((-((C13947 + C14075 * C13948 * C13949) * C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14080 / C13911);
    const double C600 =
        (-(ae * (C13985 * C13991 + C13916 * ce)) / C13530) / C13909 -
        ((C13916 + C14075 * C13914 * C13920) * C13918) / C13911 -
        ((C13985 * C14050 + C13916 * ae) * ce) / C13911 +
        C13985 * ((-(C14050 * ce) / C13530) / C13909 - (ae * C13991) / C13911 -
                  (C13985 * C14080) / C13911);
    const double C601 = (-(C13908 * C14050 * ce) / C13530) / C13909 -
                        (ae * C13908 * C13991) / C13911 -
                        (C13985 * C13908 * C14080) / C13911;
    const double C1043 = (-(C14015 * C13908 * C14080) / C13530) / C13909;
    const double C1046 =
        (-(C14080 * C14142) / C13530) / C13909 -
        ((C13916 + C14075 * C13914 * C13920) * C13918) / C13911;
    const double C2171 = (-(C14015 * C14050 * ce) / C13530) / C13909 -
                         (ae * C14015 * C13991) / C13911 -
                         (C13985 * C14015 * C14080) / C13911;
    const double C335 =
        (-2 * C13908 * C14147) / C13911 +
        C13908 * ((-((C13947 + C14142 * C13948 * C13949) * C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14147 / C13911);
    const double C782 = (-(C14147 * C14075) / C13530) / C13909 -
                        ((C13916 + C14142 * C13914 * C13920) * C13918) / C13911;
    const double C783 = (-(C13985 * C13908 * C14147) / C13530) / C13909;
    const double C1226 =
        (-(ae * (C14015 * C14021 + C13916 * ce)) / C13530) / C13909 -
        ((C13916 + C14142 * C13914 * C13920) * C13918) / C13911 -
        ((C14015 * C14105 + C13916 * ae) * ce) / C13911 +
        C14015 * ((-(C14105 * ce) / C13530) / C13909 - (ae * C14021) / C13911 -
                  (C14015 * C14147) / C13911);
    const double C1227 = (-(C13908 * C14105 * ce) / C13530) / C13909 -
                         (ae * C13908 * C14021) / C13911 -
                         (C14015 * C13908 * C14147) / C13911;
    const double C2386 = (-(C13985 * C14105 * ce) / C13530) / C13909 -
                         (ae * C13985 * C14021) / C13911 -
                         (C14015 * C13985 * C14147) / C13911;
    const double C13976 = C13908 * C13973;
    const double C14535 = C13985 * C13973;
    const double C3418 =
        (2 * C13985 * C13943 + C13985 * (C13943 + C13973 * C14075)) / C13909;
    const double C3760 = (C14015 * (C13943 + C13973 * C14075)) / C13909;
    const double C5932 =
        (2 * C14015 * C13943 + C14015 * (C13943 + C13973 * C14142)) / C13909;
    const double C3122 =
        (-(C14033 * C14075) / C13530) / C13909 - C14026 / C13911 -
        (C14015 * C14317 * ce) / C13911 +
        C14015 * (C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14022 * C14075) /
                             C13530) /
                                C13909 -
                            C14033 / C13911) -
                  (C14317 * ce) / C13911);
    const double C4284 =
        C14015 * ((-2 * C13985 * C14033) / C13911 +
                  C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14022 * C14075) /
                             C13530) /
                                C13909 -
                            C14033 / C13911)) -
        ((2 * C14312 + C13985 * C14317) * ce) / C13911;
    const double C2776 = (3 * (C13924 + C13937 * C14075) +
                          C13985 * (2 * C14312 + C13985 * C14317)) /
                         C13909;
    const double C3030 = (C13924 + C13937 * C14075 + C14317 * C14142) / C13909;
    const double C4210 = (C14015 * (2 * C14312 + C13985 * C14317)) / C13909;
    const double C5218 = (3 * (C13924 + C13937 * C14142) +
                          C14015 * (2 * C14466 + C14015 * C14470)) /
                         C13909;
    const double C13975 = C13908 * C13972;
    const double C14540 = C13985 * C13972;
    const double C3419 = (-2 * C13985 * C13942) / C13530 -
                         (C13985 * (C13972 * C14075 + C13942)) / C13530;
    const double C3761 = -(C14015 * (C13972 * C14075 + C13942)) / C13530;
    const double C5933 = (-2 * C14015 * C13942) / C13530 -
                         (C14015 * (C13972 * C14142 + C13942)) / C13530;
    const double C3292 =
        (-(C14117 * C14075) / C13530) / C13909 - C14110 / C13911 -
        (ae * C14015 * C14329) / C13911 +
        C14015 * (C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14106 * C14075) /
                             C13530) /
                                C13909 -
                            C14117 / C13911) -
                  (ae * C14329) / C13911);
    const double C4320 =
        2 * ((-(C13985 * C14448) / C13530) / C13909 -
             (ae * C14015 * C13936) / C13911) -
        (ae * C14015 * C14329) / C13911 +
        C13985 *
            ((-(ae * C14015 * C13985 * C13961) / C13530) / C13909 -
             C14448 / C13911 +
             C13985 *
                 ((-(C13985 * C14015 * std::pow(C13906, 6) * bs[6] * C14051) /
                   C13530) /
                      C13909 -
                  (ae * C14015 * C13961) / C13911));
    const double C4426 =
        (((-2 * C14325) / C13530 - (C13985 * C14329) / C13530) * ae) / C13909 +
        C14015 * ((-2 * C13985 * C14117) / C13911 +
                  C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14106 * C14075) /
                             C13530) /
                                C13909 -
                            C14117 / C13911));
    const double C2777 =
        (-3 * (C13936 * C14075 + C13923)) / C13530 +
        C13985 * ((-2 * C14325) / C13530 - (C13985 * C14329) / C13530);
    const double C3031 = -(C14329 * C14142 + C13936 * C14075 + C13923) / C13530;
    const double C4211 =
        C14015 * ((-2 * C14325) / C13530 - (C13985 * C14329) / C13530);
    const double C6368 =
        (((-2 * C14485) / C13530 - (C14015 * C14489) / C13530) * ae) / C13909 +
        C13985 * ((-2 * C14448) / C13911 +
                  C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14051 * C14142) /
                             C13530) /
                                C13909 -
                            C14062 / C13911));
    const double C5219 =
        (-3 * (C13936 * C14142 + C13923)) / C13530 +
        C14015 * ((-2 * C14485) / C13530 - (C14015 * C14489) / C13530);
    const double C13974 = C13908 * C13971;
    const double C14262 = C13985 * C13971;
    const double C14272 = C14015 * C13971;
    const double C404 = (-(ae * C13985 * C13942) / C13530) / C13909 -
                        (C13985 * C13941) / C13911 -
                        (C13985 * C13943 * ce) / C13911 +
                        C13908 * ((-(C13985 * C13937 * ce) / C13530) / C13909 -
                                  (ae * C13985 * C13936) / C13911 -
                                  (C13908 * C13985 * C13971) / C13911);
    const double C406 =
        (-((C13924 + C13937 * C14075) * ce) / C13530) / C13909 -
        (ae * (C13936 * C14075 + C13923)) / C13911 +
        C13908 * ((-(C13971 * C14075) / C13530) / C13909 - C13941 / C13911);
    const double C407 =
        (-(C13971 * C14075) / C13530) / C13909 - C13941 / C13911 -
        (ae * (C13972 * C14075 + C13942)) / C13911 -
        ((C13943 + C13973 * C14075) * ce) / C13911 +
        C13908 *
            ((-((C13937 + C13964 * C14075) * ce) / C13530) / C13909 -
             (ae * (C13961 * C14075 + C13936)) / C13911 +
             C13908 *
                 ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C13971 / C13911));
    const double C848 = (-(ae * C14015 * C13942) / C13530) / C13909 -
                        (C14015 * C13941) / C13911 -
                        (C14015 * C13943 * ce) / C13911 +
                        C13908 * ((-(C14015 * C13937 * ce) / C13530) / C13909 -
                                  (ae * C14015 * C13936) / C13911 -
                                  (C13908 * C14015 * C13971) / C13911);
    const double C850 =
        (-((C13924 + C13937 * C14142) * ce) / C13530) / C13909 -
        (ae * (C13936 * C14142 + C13923)) / C13911 +
        C13908 * ((-(C13971 * C14142) / C13530) / C13909 - C13941 / C13911);
    const double C851 =
        (-(C13971 * C14142) / C13530) / C13909 - C13941 / C13911 -
        (ae * (C13972 * C14142 + C13942)) / C13911 -
        ((C13943 + C13973 * C14142) * ce) / C13911 +
        C13908 *
            ((-((C13937 + C13964 * C14142) * ce) / C13530) / C13909 -
             (ae * (C13961 * C14142 + C13936)) / C13911 +
             C13908 *
                 ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C13971 / C13911));
    const double C2778 =
        (-2 * C13985 * C13941) / C13911 +
        C13985 * ((-(C13971 * C14075) / C13530) / C13909 - C13941 / C13911);
    const double C3033 =
        C14015 * ((-(C13971 * C14075) / C13530) / C13909 - C13941 / C13911);
    const double C3034 =
        (-(C13971 * C14075) / C13530) / C13909 - C13941 / C13911 +
        ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) * C13918 *
            C14075) /
          C13530) /
             C13909 -
         C13971 / C13911) *
            C14142;
    const double C3762 =
        (-(C14015 * C14317 * ce) / C13530) / C13909 -
        (ae * C14015 * C14329) / C13911 +
        C13908 * C14015 *
            ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                C13918 * C14075) /
              C13530) /
                 C13909 -
             C13971 / C13911);
    const double C5220 =
        (-2 * C14015 * C13941) / C13911 +
        C14015 * ((-(C13971 * C14142) / C13530) / C13909 - C13941 / C13911);
    const double C1186 =
        (-(C14138 * C13917) / C13530) / C13909 - C14135 / C13911 -
        (ae * C14015 * C14009) / C13911 +
        C14015 * (C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14132 * C13917) /
                             C13530) /
                                C13909 -
                            C14138 / C13911) -
                  (ae * C14009) / C13911);
    const double C1855 =
        (((-2 * C13999) / C13530 - (C13908 * C14009) / C13530) * ae) / C13909 +
        C14015 * ((-2 * C13908 * C14138) / C13911 +
                  C13908 * ((-(std::pow(C13906, 6) * bs[6] * C14132 * C13917) /
                             C13530) /
                                C13909 -
                            C14138 / C13911));
    const double C124 =
        (-3 * (C13997 * C13917 + C13991)) / C13530 +
        C13908 * ((-2 * C13999) / C13530 - (C13908 * C14009) / C13530);
    const double C454 = -(C13985 * (C13985 * C14009 + C13963 * ce) +
                          C13997 * C13917 + C13991 + C13985 * C13963 * ce) /
                        C13530;
    const double C895 = -(C14009 * C14142 + C13997 * C13917 + C13991) / C13530;
    const double C1315 =
        C13985 * ((-2 * C13999) / C13530 - (C13908 * C14009) / C13530) -
        ((2 * C13932 + C13908 * C13963) * ce) / C13530;
    const double C1639 =
        C14015 * ((-2 * C13999) / C13530 - (C13908 * C14009) / C13530);
    const double C2005 = -(C14015 * (C13985 * C14009 + C13963 * ce)) / C13530;
    const double C14354 = C13985 * C14348;
    const double C6295 = (-2 * C14015 * C14337) / C13530 -
                         (C14015 * (C14348 * C14142 + C14337)) / C13530;
    const double C14424 = C14422 + C13962;
    const double C5245 =
        (-3 * (C13997 * C14142 + C13991)) / C13530 +
        C14015 * ((-2 * C14495) / C13530 - (C14015 * C14499) / C13530);
    const double C648 =
        (-(C14097 * C13917) / C13530) / C13909 - C14094 / C13911 -
        (ae * C13985 * C14039) / C13911 +
        C13985 * (C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14091 * C13917) /
                             C13530) /
                                C13909 -
                            C14097 / C13911) -
                  (ae * C14039) / C13911);
    const double C1458 =
        (((-2 * C14029) / C13530 - (C13908 * C14039) / C13530) * ae) / C13909 +
        C13985 * ((-2 * C13908 * C14097) / C13911 +
                  C13908 * ((-(std::pow(C13906, 6) * bs[6] * C14091 * C13917) /
                             C13530) /
                                C13909 -
                            C14097 / C13911));
    const double C157 =
        (-3 * (C14027 * C13917 + C14021)) / C13530 +
        C13908 * ((-2 * C14029) / C13530 - (C13908 * C14039) / C13530);
    const double C504 = -(C14039 * C14075 + C14027 * C13917 + C14021) / C13530;
    const double C948 = -(C14015 * (C14015 * C14039 + C13963 * ce) +
                          C14027 * C13917 + C14021 + C14015 * C13963 * ce) /
                        C13530;
    const double C1351 =
        C13985 * ((-2 * C14029) / C13530 - (C13908 * C14039) / C13530);
    const double C1677 =
        C14015 * ((-2 * C14029) / C13530 - (C13908 * C14039) / C13530) -
        ((2 * C13932 + C13908 * C13963) * ce) / C13530;
    const double C2061 =
        -(C14015 * C13985 * C14039 + C13985 * C13963 * ce) / C13530;
    const double C2834 =
        (-3 * (C14027 * C14075 + C14021)) / C13530 +
        C13985 * ((-2 * C14364) / C13530 - (C13985 * C14368) / C13530);
    const double C3119 = -(C14015 * (C14015 * C14368 + C14350 * ce) +
                           C14027 * C14075 + C14021 + C14015 * C14350 * ce) /
                         C13530;
    const double C4283 =
        C14015 * ((-2 * C14364) / C13530 - (C13985 * C14368) / C13530) -
        ((2 * C14335 + C13985 * C14350) * ce) / C13530;
    const double C5583 = -(C14015 * (C14015 * C14543 + C14420 * ce) +
                           C13985 * C14029 + C14015 * C14420 * ce) /
                         C13530;
    const double C14557 = C14554 + C13962;
    const double C14524 = C14015 * C14518;
    const double C14578 = C14576 + C14349;
    const double C1092 =
        (-(C14097 * C13917) / C13530) / C13909 - C14094 / C13911 -
        (C14015 * C14068 * ce) / C13911 +
        C14015 * (C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14091 * C13917) /
                             C13530) /
                                C13909 -
                            C14097 / C13911) -
                  (C14068 * ce) / C13911);
    const double C1784 =
        C14015 * ((-2 * C13908 * C14097) / C13911 +
                  C13908 * ((-(std::pow(C13906, 6) * bs[6] * C14091 * C13917) /
                             C13530) /
                                C13909 -
                            C14097 / C13911)) -
        ((2 * C14058 + C13908 * C14068) * ce) / C13911;
    const double C2226 =
        C13985 * (C14015 * ((-(std::pow(C13906, 6) * bs[6] * C14091 * C13917) /
                             C13530) /
                                C13909 -
                            C14097 / C13911) -
                  (C14068 * ce) / C13911) -
        (ae * (C14015 * C14039 + C13963 * ce)) / C13911;
    const double C190 = (3 * (C14050 + C14056 * C13917) +
                         C13908 * (2 * C14058 + C13908 * C14068)) /
                        C13909;
    const double C554 =
        (C14050 + C14056 * C13917 + C13985 * (C13985 * C14068 + C13963 * ae) +
         C13985 * C13963 * ae) /
        C13909;
    const double C998 = (C14050 + C14056 * C13917 + C14068 * C14142) / C13909;
    const double C1387 = (C13985 * (2 * C14058 + C13908 * C14068) +
                          (2 * C13932 + C13908 * C13963) * ae) /
                         C13909;
    const double C1713 = (C14015 * (2 * C14058 + C13908 * C14068)) / C13909;
    const double C2117 = (C14015 * (C13985 * C14068 + C13963 * ae)) / C13909;
    const double C14355 = C13985 * C14351;
    const double C6367 =
        (2 * C14015 * C14338 + C14015 * (C14338 + C14351 * C14142)) / C13909;
    const double C14425 = C14423 + C13965;
    const double C5302 = (3 * (C14050 + C14056 * C14142) +
                          C14015 * (2 * C14480 + C14015 * C14482)) /
                         C13909;
    const double C14341 = C13985 * C14085;
    const double C14418 = C13908 * C14085;
    const double C14450 = C14015 * C14085;
    const double C222 =
        3 * ((-(C14085 * C13917) / C13530) / C13909 - C14080 / C13911) +
        C13908 *
            ((-2 * C13908 * C14085) / C13911 +
             C13908 *
                 ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14085 / C13911));
    const double C602 =
        (-(ae * (C13985 * C13999 + C13932 * ce)) / C13530) / C13909 -
        (C13908 * C14080) / C13911 -
        ((C13985 * C14058 + C13932 * ae) * ce) / C13911 +
        C13985 * ((-(C14058 * ce) / C13530) / C13909 - (ae * C13999) / C13911 -
                  (C13985 * C13908 * C14085) / C13911);
    const double C603 =
        (-((C14050 + C14056 * C13917) * ce) / C13530) / C13909 -
        (ae * (C13997 * C13917 + C13991)) / C13911 +
        C13985 * ((-(C14085 * C13917) / C13530) / C13909 - C14080 / C13911);
    const double C604 =
        (-(C14085 * C13917) / C13530) / C13909 - C14080 / C13911 -
        (ae * (C13985 * C14009 + C13963 * ce)) / C13911 -
        ((C13985 * C14068 + C13963 * ae) * ce) / C13911 +
        C13985 *
            ((-(C14068 * ce) / C13530) / C13909 - (ae * C14009) / C13911 +
             C13985 *
                 ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14085 / C13911));
    const double C1045 =
        C14015 * ((-(C14085 * C13917) / C13530) / C13909 - C14080 / C13911);
    const double C1047 = (-(C13908 * C14085 * C14142) / C13530) / C13909 -
                         (C13908 * C14080) / C13911;
    const double C1048 =
        (-(C14085 * C13917) / C13530) / C13909 - C14080 / C13911 +
        ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) * C13918 *
            C13917) /
          C13530) /
             C13909 -
         C14085 / C13911) *
            C14142;
    const double C1423 =
        (((-2 * C13999) / C13530 - (C13908 * C14009) / C13530) * ae) / C13909 -
        ((2 * C14058 + C13908 * C14068) * ce) / C13911 +
        C13985 *
            ((-2 * C13908 * C14085) / C13911 +
             C13908 *
                 ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14085 / C13911));
    const double C1749 =
        C14015 *
        ((-2 * C13908 * C14085) / C13911 +
         C13908 * ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                      C13918 * C13917) /
                    C13530) /
                       C13909 -
                   C14085 / C13911));
    const double C2172 = (-(C14015 * C14058 * ce) / C13530) / C13909 -
                         (ae * C14015 * C13999) / C13911 -
                         (C13985 * C14015 * C13908 * C14085) / C13911;
    const double C2173 =
        (-(C14015 * C14068 * ce) / C13530) / C13909 -
        (ae * C14015 * C14009) / C13911 +
        C13985 * C14015 *
            ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                C13918 * C13917) /
              C13530) /
                 C13909 -
             C14085 / C13911);
    const double C2885 =
        2 * ((-(C14050 * ce) / C13530) / C13909 - (ae * C13991) / C13911 -
             (C13985 * C14080) / C13911) -
        (ae * (C13985 * C14337 + C13991 + C14335 * ce)) / C13911 -
        ((C14050 + C13985 * C14338 + C14335 * ae) * ce) / C13911 +
        C13985 * ((-(ae * C14337) / C13530) / C13909 - C14080 / C13911 -
                  (C14338 * ce) / C13911 +
                  C13985 * ((-C14060 / C13530) / C13909 - C14004 -
                            (C13985 * C14085) / C13911));
    const double C3205 = (-(ae * C14015 * C14337) / C13530) / C13909 -
                         (C14015 * C14080) / C13911 -
                         (C14015 * C14338 * ce) / C13911 +
                         C13985 * ((-(C14015 * C14056 * ce) / C13530) / C13909 -
                                   (ae * C14015 * C13997) / C13911 -
                                   (C13985 * C14015 * C14085) / C13911);
    const double C3206 =
        (-((C14050 + C14056 * C14142) * ce) / C13530) / C13909 -
        (ae * (C13997 * C14142 + C13991)) / C13911 +
        C13985 * ((-(C14085 * C14142) / C13530) / C13909 - C14080 / C13911);
    const double C3207 =
        (-(C14085 * C14142) / C13530) / C13909 - C14080 / C13911 -
        (ae * (C14348 * C14142 + C14337)) / C13911 -
        ((C14338 + C14351 * C14142) * ce) / C13911 +
        C13985 *
            ((-((C14056 + C14064 * C14142) * ce) / C13530) / C13909 -
             (ae * (C14005 * C14142 + C13997)) / C13911 +
             C13985 *
                 ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14085 / C13911));
    const double C5327 =
        (-2 * C14015 * C14080) / C13911 +
        C14015 * ((-(C14085 * C14142) / C13530) / C13909 - C14080 / C13911);
    const double C742 =
        (-(C14138 * C13917) / C13530) / C13909 - C14135 / C13911 -
        (C13985 * C14123 * ce) / C13911 +
        C13985 * (C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14132 * C13917) /
                             C13530) /
                                C13909 -
                            C14138 / C13911) -
                  (C14123 * ce) / C13911);
    const double C1529 =
        C13985 * ((-2 * C13908 * C14138) / C13911 +
                  C13908 * ((-(std::pow(C13906, 6) * bs[6] * C14132 * C13917) /
                             C13530) /
                                C13909 -
                            C14138 / C13911)) -
        ((2 * C14113 + C13908 * C14123) * ce) / C13911;
    const double C2335 =
        C14015 * (C13985 * ((-(std::pow(C13906, 6) * bs[6] * C14132 * C13917) /
                             C13530) /
                                C13909 -
                            C14138 / C13911) -
                  (C14123 * ce) / C13911) -
        (ae * (C13985 * C14009 + C13963 * ce)) / C13911;
    const double C277 = (3 * (C14105 + C14111 * C13917) +
                         C13908 * (2 * C14113 + C13908 * C14123)) /
                        C13909;
    const double C692 = (C14105 + C14111 * C13917 + C14123 * C14075) / C13909;
    const double C1136 =
        (C14105 + C14111 * C13917 + C14015 * (C14015 * C14123 + C13963 * ae) +
         C14015 * C13963 * ae) /
        C13909;
    const double C1493 = (C13985 * (2 * C14113 + C13908 * C14123)) / C13909;
    const double C1819 = (C14015 * (2 * C14113 + C13908 * C14123) +
                          (2 * C13932 + C13908 * C13963) * ae) /
                         C13909;
    const double C2279 =
        (C14015 * C13985 * C14123 + C13985 * C13963 * ae) / C13909;
    const double C2934 = (3 * (C14105 + C14111 * C14075) +
                          C13985 * (2 * C14376 + C13985 * C14380)) /
                         C13909;
    const double C3289 =
        (C14105 + C14111 * C14075 + C14015 * (C14015 * C14380 + C14350 * ae) +
         C14015 * C14350 * ae) /
        C13909;
    const double C4425 = (C14015 * (2 * C14376 + C13985 * C14380) +
                          (2 * C14335 + C13985 * C14350) * ae) /
                         C13909;
    const double C5789 =
        (C13985 * C14113 + C14015 * (C14015 * C14544 + C14420 * ae) +
         C14015 * C14420 * ae) /
        C13909;
    const double C14558 = C14556 + C13965;
    const double C14525 = C14015 * C14521;
    const double C14579 = C14577 + C14352;
    const double C14434 = C13908 * C14152;
    const double C14511 = C14015 * C14152;
    const double C14572 = C13985 * C14152;
    const double C336 =
        3 * ((-(C14152 * C13917) / C13530) / C13909 - C14147 / C13911) +
        C13908 *
            ((-2 * C13908 * C14152) / C13911 +
             C13908 *
                 ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14152 / C13911));
    const double C784 = (-(C13908 * C14152 * C14075) / C13530) / C13909 -
                        (C13908 * C14147) / C13911;
    const double C785 =
        C13985 * ((-(C14152 * C13917) / C13530) / C13909 - C14147 / C13911);
    const double C786 =
        (-(C14152 * C13917) / C13530) / C13909 - C14147 / C13911 +
        ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) * C13918 *
            C13917) /
          C13530) /
             C13909 -
         C14152 / C13911) *
            C14075;
    const double C1228 =
        (-(ae * (C14015 * C14029 + C13932 * ce)) / C13530) / C13909 -
        (C13908 * C14147) / C13911 -
        ((C14015 * C14113 + C13932 * ae) * ce) / C13911 +
        C14015 * ((-(C14113 * ce) / C13530) / C13909 - (ae * C14029) / C13911 -
                  (C14015 * C13908 * C14152) / C13911);
    const double C1229 =
        (-((C14105 + C14111 * C13917) * ce) / C13530) / C13909 -
        (ae * (C14027 * C13917 + C14021)) / C13911 +
        C14015 * ((-(C14152 * C13917) / C13530) / C13909 - C14147 / C13911);
    const double C1230 =
        (-(C14152 * C13917) / C13530) / C13909 - C14147 / C13911 -
        (ae * (C14015 * C14039 + C13963 * ce)) / C13911 -
        ((C14015 * C14123 + C13963 * ae) * ce) / C13911 +
        C14015 *
            ((-(C14123 * ce) / C13530) / C13909 - (ae * C14039) / C13911 +
             C14015 *
                 ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14152 / C13911));
    const double C1564 =
        C13985 *
        ((-2 * C13908 * C14152) / C13911 +
         C13908 * ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                      C13918 * C13917) /
                    C13530) /
                       C13909 -
                   C14152 / C13911));
    const double C1890 =
        (((-2 * C14029) / C13530 - (C13908 * C14039) / C13530) * ae) / C13909 -
        ((2 * C14113 + C13908 * C14123) * ce) / C13911 +
        C14015 *
            ((-2 * C13908 * C14152) / C13911 +
             C13908 *
                 ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C13917) /
                   C13530) /
                      C13909 -
                  C14152 / C13911));
    const double C2387 = (-(C13985 * C14113 * ce) / C13530) / C13909 -
                         (ae * C13985 * C14029) / C13911 -
                         (C14015 * C13985 * C13908 * C14152) / C13911;
    const double C2388 =
        (-(C13985 * C14123 * ce) / C13530) / C13909 -
        (ae * C13985 * C14039) / C13911 +
        C14015 * C13985 *
            ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                C13918 * C13917) /
              C13530) /
                 C13909 -
             C14152 / C13911);
    const double C2983 =
        (-2 * C13985 * C14147) / C13911 +
        C13985 * ((-(C14152 * C14075) / C13530) / C13909 - C14147 / C13911);
    const double C2984 =
        3 * ((-(C14152 * C14075) / C13530) / C13909 - C14147 / C13911) +
        C13985 *
            ((-2 * C13985 * C14152) / C13911 +
             C13985 *
                 ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C14152 / C13911));
    const double C3372 =
        (-(ae * (C14015 * C14364 + C14335 * ce)) / C13530) / C13909 -
        (C13985 * C14147) / C13911 -
        ((C14015 * C14376 + C14335 * ae) * ce) / C13911 +
        C14015 * ((-(C14376 * ce) / C13530) / C13909 - (ae * C14364) / C13911 -
                  (C14015 * C13985 * C14152) / C13911);
    const double C3373 =
        (-((C14105 + C14111 * C14075) * ce) / C13530) / C13909 -
        (ae * (C14027 * C14075 + C14021)) / C13911 +
        C14015 * ((-(C14152 * C14075) / C13530) / C13909 - C14147 / C13911);
    const double C3374 =
        (-(C14152 * C14075) / C13530) / C13909 - C14147 / C13911 -
        (ae * (C14015 * C14368 + C14350 * ce)) / C13911 -
        ((C14015 * C14380 + C14350 * ae) * ce) / C13911 +
        C14015 *
            ((-(C14380 * ce) / C13530) / C13909 - (ae * C14368) / C13911 +
             C14015 *
                 ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C14152 / C13911));
    const double C4496 =
        (((-2 * C14364) / C13530 - (C13985 * C14368) / C13530) * ae) / C13909 -
        ((2 * C14376 + C13985 * C14380) * ce) / C13911 +
        C14015 *
            ((-2 * C13985 * C14152) / C13911 +
             C13985 *
                 ((-((C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C14152 / C13911));
    const double C5425 =
        2 * ((-(C14105 * ce) / C13530) / C13909 - (ae * C14021) / C13911 -
             (C14015 * C14147) / C13911) -
        (ae * (C14015 * C14507 + C14021 + C14505 * ce)) / C13911 -
        ((C14105 + C14015 * C14508 + C14505 * ae) * ce) / C13911 +
        C14015 * ((-(ae * C14507) / C13530) / C13909 - C14147 / C13911 -
                  (C14508 * ce) / C13911 +
                  C14015 * ((-C14115 / C13530) / C13909 - C14034 -
                            (C14015 * C14152) / C13911));
    const double C13966 = C13959 / C13909;
    const double C14353 = C14346 / C13909;
    const double C14523 = C14516 / C13909;
    const double C14010 = -C14008;
    const double C14318 = -C14316;
    const double C14069 = -C14067;
    const double C14330 = -C14328;
    const double C14040 = -C14038;
    const double C14471 = -C14469;
    const double C14369 = -C14367;
    const double C14454 = -C14453;
    const double C14124 = -C14122;
    const double C14490 = -C14488;
    const double C14381 = -C14379;
    const double C14500 = -C14498;
    const double C13574 = C13571 * de;
    const double C13560 = C13528 * C13556;
    const double C13588 = C13556 / C13536;
    const double C13559 = C13555 / C13530;
    const double C14840 = C14836 - C14839;
    const double C15198 = C15170 / C13530;
    const double C14848 = C14844 - C14847;
    const double C15212 = C15197 / C13536;
    const double C13727 = C13723 * de;
    const double C13698 = C13690 / C13530;
    const double C13707 = C13621 * C13703;
    const double C13736 = C13703 / C13536;
    const double C14929 = C14924 - C14928;
    const double C15202 = C15178 / C13530;
    const double C14936 = C14932 - C14935;
    const double C15216 = C15205 / C13536;
    const double C2474 =
        ((-(0 * de) / C13530) / C13536 -
         ((0 - (C13621 * C13622) / C13530) * de) / C13530) /
            C13536 -
        ((C13621 * ((-C13622 / C13530) / C13536 -
                    ((C14875 - (C13621 * C13669) / C13530) * de) / C13530) +
          C6583) *
         de) /
            C13530 +
        (-C13669 / C13530) / C13536 - (0 * de) / C13530;
    const double C13818 = C13814 * de;
    const double C13789 = C13781 / C13530;
    const double C13798 = C13636 * C13794;
    const double C13827 = C13794 / C13536;
    const double C14969 = C14964 - C14968;
    const double C15204 = C15181 / C13530;
    const double C14976 = C14972 - C14975;
    const double C15218 = C15208 / C13536;
    const double C4614 =
        ((-(0 * de) / C13530) / C13536 -
         ((0 - (C13636 * C13637) / C13530) * de) / C13530) /
            C13536 -
        ((C13636 * ((-C13637 / C13530) / C13536 -
                    ((C14886 - (C13636 * C13762) / C13530) * de) / C13530) +
          C8919) *
         de) /
            C13530 +
        (-C13762 / C13530) / C13536 - (0 * de) / C13530;
    const double C13979 = C13937 + C13976;
    const double C5478 = (C13985 * C13943 + C14535 * C14142) / C13909;
    const double C13978 = C13975 + C13936;
    const double C5479 = -(C14540 * C14142 + C13985 * C13942) / C13530;
    const double C13977 = C13974 / C13911;
    const double C1951 = (-(C14015 * C13985 * C13937 * ce) / C13530) / C13909 -
                         (ae * C14015 * C13985 * C13936) / C13911 -
                         (C13908 * C14015 * C14262) / C13911;
    const double C1952 =
        (-(ae * C14015 * C13985 * C13972) / C13530) / C13909 -
        (C14015 * C14262) / C13911 - (C14015 * C13985 * C13973 * ce) / C13911 +
        C13908 * ((-(C14015 * C13985 * C13964 * ce) / C13530) / C13909 -
                  (ae * C14015 * C13985 * C13961) / C13911 -
                  (C13908 * C14015 * C13985 *
                   (C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911);
    const double C2779 =
        3 * ((-(C13971 * C14075) / C13530) / C13909 - C13941 / C13911) +
        C13985 *
            ((-2 * C14262) / C13911 +
             C13985 *
                 ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C13971 / C13911));
    const double C3032 =
        (-(C14262 * C14142) / C13530) / C13909 - (C13985 * C13941) / C13911;
    const double C3420 =
        (((-2 * C14325) / C13530 - (C13985 * C14329) / C13530) * ae) / C13909 -
        ((2 * C14312 + C13985 * C14317) * ce) / C13911 +
        C13908 *
            ((-2 * C14262) / C13911 +
             C13985 *
                 ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C13971 / C13911));
    const double C4212 =
        C14015 *
        ((-2 * C14262) / C13911 +
         C13985 * ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                      C13918 * C14075) /
                    C13530) /
                       C13909 -
                   C13971 / C13911));
    const double C5480 =
        (-((C14312 + C13985 * C13964 * C14142) * ce) / C13530) / C13909 -
        (ae * (C13985 * C13961 * C14142 + C14325)) / C13911 +
        C13908 * ((-(C13985 *
                     (C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14262 / C13911);
    const double C6260 =
        (-2 * C14015 * C14262) / C13911 +
        C14015 * ((-(C13985 *
                     (C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14262 / C13911);
    const double C5221 =
        3 * ((-(C13971 * C14142) / C13530) / C13909 - C13941 / C13911) +
        C14015 *
            ((-2 * C14272) / C13911 +
             C14015 *
                 ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C13971 / C13911));
    const double C5934 =
        (((-2 * C14485) / C13530 - (C14015 * C14489) / C13530) * ae) / C13909 -
        ((2 * C14466 + C14015 * C14470) * ce) / C13911 +
        C13908 *
            ((-2 * C14272) / C13911 +
             C14015 *
                 ((-((C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C13971 / C13911));
    const double C14357 = C14354 + C13997;
    const double C4123 =
        C14015 *
            ((-(C13985 * C14432 * ce) / C13530) / C13909 - C14431 / C13911 +
             C13985 *
                 ((-(C13985 * C13908 * std::pow(C13906, 6) * bs[6] * C14132) /
                   C13530) /
                      C13909 -
                  (C14432 * ce) / C13911)) -
        (ae * (C13985 * C14424 + C13999 + C14420 * ce)) / C13911;
    const double C5841 =
        (-(C13985 * C14431) / C13530) / C13909 - (C14113 * ce) / C13911 -
        (ae * C14015 * C14424) / C13911 +
        C14015 *
            (C14015 *
                 ((-(C13985 * C13908 * std::pow(C13906, 6) * bs[6] * C14132) /
                   C13530) /
                      C13909 -
                  (C14432 * ce) / C13911) -
             (ae * C14424) / C13911);
    const double C3459 =
        (-2 * (C13985 * C13999 + C13932 * ce)) / C13530 -
        (C13985 * (C13985 * C14424 + C13999 + C14420 * ce)) / C13530 -
        ((C13932 + C13955 * C14075) * ce) / C13530;
    const double C3813 =
        -(C14015 * (C13985 * C14424 + C13999 + C14420 * ce)) / C13530;
    const double C5531 =
        -(C14424 * C14142 + C13985 * C13999 + C13932 * ce) / C13530;
    const double C6009 =
        (-2 * (C14015 * C14029 + C13932 * ce)) / C13530 -
        (C14015 * (C14015 * C14557 + C14029 + C14555 * ce)) / C13530 -
        ((C13932 + C13955 * C14142) * ce) / C13530;
    const double C14527 = C14524 + C14027;
    const double C6331 =
        (-2 * (C14015 * C14364 + C14335 * ce)) / C13530 -
        (C14015 * (C14015 * C14578 + C14364 + C14574 * ce)) / C13530 -
        ((C14335 + C14343 * C14142) * ce) / C13530;
    const double C14358 = C14056 + C14355;
    const double C3531 = (2 * (C13985 * C14058 + C13932 * ae) +
                          C13985 * (C14058 + C13985 * C14425 + C14420 * ae) +
                          (C13932 + C13955 * C14075) * ae) /
                         C13909;
    const double C3917 =
        (C14015 * (C14058 + C13985 * C14425 + C14420 * ae)) / C13909;
    const double C5635 =
        (C13985 * C14058 + C13932 * ae + C14425 * C14142) / C13909;
    const double C14347 = C14341 / C13911;
    const double C3567 =
        2 * ((-(C14058 * ce) / C13530) / C13909 - (ae * C13999) / C13911 -
             (C13985 * C14418) / C13911) -
        (ae * (C13985 * C14424 + C13999 + C14420 * ce)) / C13911 -
        ((C14058 + C13985 * C14425 + C14420 * ae) * ce) / C13911 +
        C13985 *
            ((-(ae * C14424) / C13530) / C13909 - C14418 / C13911 -
             (C14425 * ce) / C13911 +
             C13985 *
                 ((-(C14421 * ce) / C13530) / C13909 - (ae * C14419) / C13911 -
                  (C13985 * C13908 *
                   (C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911));
    const double C3969 =
        (-(ae * C14015 * C14424) / C13530) / C13909 -
        (C14015 * C14418) / C13911 - (C14015 * C14425 * ce) / C13911 +
        C13985 * ((-(C14015 * C14421 * ce) / C13530) / C13909 -
                  (ae * C14015 * C14419) / C13911 -
                  (C13985 * C14015 * C13908 *
                   (C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911);
    const double C5687 =
        (-((C14058 + C14421 * C14142) * ce) / C13530) / C13909 -
        (ae * (C14419 * C14142 + C13999)) / C13911 +
        C13985 * ((-(C13908 *
                     (C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14418 / C13911);
    const double C6081 =
        (-2 * C14015 * C14418) / C13911 +
        C14015 * ((-(C13908 *
                     (C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14418 / C13911);
    const double C5328 =
        3 * ((-(C14085 * C14142) / C13530) / C13909 - C14080 / C13911) +
        C14015 *
            ((-2 * C14450) / C13911 +
             C14015 *
                 ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14085 / C13911));
    const double C6403 =
        (((-2 * C14495) / C13530 - (C14015 * C14499) / C13530) * ae) / C13909 -
        ((2 * C14480 + C14015 * C14482) * ce) / C13911 +
        C13985 *
            ((-2 * C14450) / C13911 +
             C14015 *
                 ((-((C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14142) /
                   C13530) /
                      C13909 -
                  C14085 / C13911));
    const double C6151 = (2 * (C14015 * C14113 + C13932 * ae) +
                          C14015 * (C14113 + C14015 * C14558 + C14555 * ae) +
                          (C13932 + C13955 * C14142) * ae) /
                         C13909;
    const double C14528 = C14111 + C14525;
    const double C6473 = (2 * (C14015 * C14376 + C14335 * ae) +
                          C14015 * (C14376 + C14015 * C14579 + C14574 * ae) +
                          (C14335 + C14343 * C14142) * ae) /
                         C13909;
    const double C3708 =
        (-2 * C13985 * C14434) / C13911 +
        C13985 * ((-(C13908 *
                     (C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C14434 / C13911);
    const double C4174 =
        (-((C14113 + C14432 * C14075) * ce) / C13530) / C13909 -
        (ae * (C14428 * C14075 + C14029)) / C13911 +
        C14015 * ((-(C13908 *
                     (C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                     C13918 * C14075) /
                   C13530) /
                      C13909 -
                  C14434 / C13911);
    const double C5892 =
        (-(ae * (C14015 * C14543 + C14420 * ce)) / C13530) / C13909 -
        (C13985 * C14434) / C13911 -
        ((C14015 * C14544 + C14420 * ae) * ce) / C13911 +
        C14015 * ((-(C14544 * ce) / C13530) / C13909 - (ae * C14543) / C13911 -
                  (C14015 * C13985 * C13908 *
                   (C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911);
    const double C6222 =
        2 * ((-(C14113 * ce) / C13530) / C13909 - (ae * C14029) / C13911 -
             (C14015 * C14434) / C13911) -
        (ae * (C14015 * C14557 + C14029 + C14555 * ce)) / C13911 -
        ((C14113 + C14015 * C14558 + C14555 * ae) * ce) / C13911 +
        C14015 *
            ((-(ae * C14557) / C13530) / C13909 - C14434 / C13911 -
             (C14558 * ce) / C13911 +
             C14015 *
                 ((-(C14432 * ce) / C13530) / C13909 - (ae * C14428) / C13911 -
                  (C14015 * C13908 *
                   (C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911));
    const double C14517 = C14511 / C13911;
    const double C6544 =
        2 * ((-(C14376 * ce) / C13530) / C13909 - (ae * C14364) / C13911 -
             (C14015 * C14572) / C13911) -
        (ae * (C14015 * C14578 + C14364 + C14574 * ce)) / C13911 -
        ((C14376 + C14015 * C14579 + C14574 * ae) * ce) / C13911 +
        C14015 *
            ((-(ae * C14578) / C13530) / C13909 - C14572 / C13911 -
             (C14579 * ce) / C13911 +
             C14015 *
                 ((-(C14575 * ce) / C13530) / C13909 - (ae * C14573) / C13911 -
                  (C14015 * C13985 *
                   (C13948 * C13949 + C14142 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911));
    const double C13970 = C13966 - C13951;
    const double C14356 = C14353 - C14004;
    const double C14526 = C14523 - C14034;
    const double C14011 = C14010 / C13909;
    const double C14319 = C14318 / C13909;
    const double C14070 = C14069 / C13909;
    const double C14331 = C14330 / C13909;
    const double C14041 = C14040 / C13909;
    const double C14472 = C14471 / C13909;
    const double C14370 = C14369 / C13909;
    const double C14455 = C14454 / C13909;
    const double C14125 = C14124 / C13909;
    const double C14491 = C14490 / C13909;
    const double C14382 = C14381 / C13909;
    const double C14501 = C14500 / C13909;
    const double C13576 = C13574 / C13530;
    const double C13564 = C13560 + C14845;
    const double C13591 = C13588 - C13590;
    const double C2435 = C13588 + (0 * ce) / C13530;
    const double C13563 = C14835 - C13559;
    const double C15138 = C14840 * C14830;
    const double C15172 = C15143 + C14840;
    const double C15146 = C14848 / C13536;
    const double C15142 = C14848 * C14830;
    const double C1265 = C15212 - (C14840 * C14831) / C13530;
    const double C13729 = C13727 / C13530;
    const double C13702 = C14875 - C13698;
    const double C13711 = C13707 + C14933;
    const double C13739 = C13736 - C13738;
    const double C15156 = C14929 * C14923;
    const double C15187 = C15158 + C14929;
    const double C15160 = C14936 / C13536;
    const double C15157 = C14936 * C14923;
    const double C3411 = C15216 - (C14929 * C14925) / C13530;
    const double C13820 = C13818 / C13530;
    const double C13793 = C14886 - C13789;
    const double C13802 = C13798 + C14973;
    const double C13830 = C13827 - C13829;
    const double C15162 = C14969 * C14963;
    const double C15193 = C15164 + C14969;
    const double C15166 = C14976 / C13536;
    const double C15163 = C14976 * C14963;
    const double C5927 = C15218 - (C14969 * C14965) / C13530;
    const double C13982 = C13979 + C13965;
    const double C13981 = C13978 + C13962;
    const double C14360 = C14357 + C14349;
    const double C14530 = C14527 + C14519;
    const double C14361 = C14358 + C14352;
    const double C14531 = C14528 + C14522;
    const double C13980 = C13970 - C13977;
    const double C14359 = C14356 - C14347;
    const double C14529 = C14526 - C14517;
    const double C14012 = C14011 - C14004;
    const double C14320 = C14319 - C14314;
    const double C14071 = C14070 - C14063;
    const double C14332 = C14331 - C13951;
    const double C14042 = C14041 - C14034;
    const double C14473 = C14472 - C14314;
    const double C14371 = C14370 - C14034;
    const double C14456 = C14455 - C14063;
    const double C14126 = C14125 - C14118;
    const double C14492 = C14491 - C13951;
    const double C14383 = C14382 - C14118;
    const double C14502 = C14501 - C14004;
    const double C13579 = C13570 - C13576;
    const double C13569 = C13564 * de;
    const double C76 =
        (C13591 / C13536 + (0 * ce) / C13530) / C13536 - (0 * de) / C13530;
    const double C1274 = C13591 / C13536 - (0 * de) / C13530;
    const double C6588 = C13591 / C13536 + (0 * ce) / C13530;
    const double C13568 = C13563 * ce;
    const double C381 =
        ((-C13531 / C13530) / C13536 - (C13549 * de) / C13530) / C13536 -
        ((C13528 * ((-C13538) / C13536 - (C13563 * de) / C13530) + C6897) *
         de) /
            C13530 +
        (-C13550 / C13530) / C13536 - (0 * de) / C13530;
    const double C382 =
        ((-C13538) / C13536 - (C13563 * de) / C13530) / C13536 -
        ((C13528 * ((-C13550 / C13530) / C13536 - (0 * de) / C13530) + C14845) *
         de) /
            C13530;
    const double C6903 = (-C13538) / C13536 - (C13563 * de) / C13530;
    const double C15168 = C15138 / C13530;
    const double C15199 = C15172 / C13536;
    const double C15200 = C15174 + C15146;
    const double C1267 = C15146 - C14846 / C13542;
    const double C15171 = C15142 / C13530;
    const double C13731 = C13726 - C13729;
    const double C13706 = C13702 * ce;
    const double C6623 = (-C13688) / C13536 - (C13702 * de) / C13530;
    const double C13715 = C13711 * de;
    const double C2806 =
        (C13739 / C13536 + (0 * ce) / C13530) / C13536 - (0 * de) / C13530;
    const double C3458 = C13739 / C13536 - (0 * de) / C13530;
    const double C6942 = C13739 / C13536 + (0 * ce) / C13530;
    const double C15184 = C15156 / C13530;
    const double C15206 = C15187 / C13536;
    const double C15207 = C15188 + C15160;
    const double C3413 = C15160 - C14934 / C13542;
    const double C15186 = C15157 / C13530;
    const double C13822 = C13817 - C13820;
    const double C13797 = C13793 * ce;
    const double C8989 = (-C13779) / C13536 - (C13793 * de) / C13530;
    const double C13806 = C13802 * de;
    const double C5274 =
        (C13830 / C13536 + (0 * ce) / C13530) / C13536 - (0 * de) / C13530;
    const double C6008 = C13830 / C13536 - (0 * de) / C13530;
    const double C9754 = C13830 / C13536 + (0 * ce) / C13530;
    const double C15190 = C15162 / C13530;
    const double C15209 = C15193 / C13536;
    const double C15210 = C15194 + C15166;
    const double C5929 = C15166 - C14974 / C13542;
    const double C15192 = C15163 / C13530;
    const double C2008 =
        C14015 *
        (C13985 *
             ((-(ae * C13908 * C14005) / C13530) / C13909 - C14003 / C13911 +
              C13908 *
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (ae * C14005) / C13911)) -
         (C13982 * ce) / C13911);
    const double C2064 =
        C14015 * C13985 *
            ((-(ae * C13908 * C14035) / C13530) / C13909 - C14033 / C13911 +
             C13908 *
                 ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) / C13530) /
                      C13909 -
                  (ae * C14035) / C13911)) -
        (C13985 * C13982 * ce) / C13911;
    const double C90 = (3 * (C13924 + C13908 * C13943 + C13932 * ae) +
                        C13908 * (2 * C13943 + C13908 * C13982 + C13963 * ae) +
                        (2 * C13932 + C13908 * C13963) * ae) /
                       C13909;
    const double C400 =
        (C13924 + C13908 * C13943 + C13932 * ae + C13982 * C14075) / C13909;
    const double C844 =
        (C13924 + C13908 * C13943 + C13932 * ae + C13982 * C14142) / C13909;
    const double C1276 =
        (C13985 * (2 * C13943 + C13908 * C13982 + C13963 * ae)) / C13909;
    const double C1602 =
        (C14015 * (2 * C13943 + C13908 * C13982 + C13963 * ae)) / C13909;
    const double C1948 = (C14015 * C13985 * C13982) / C13909;
    const double C1278 =
        2 * ((-(C13985 * C13937 * ce) / C13530) / C13909 -
             (ae * C13985 * C13936) / C13911 - (C13908 * C14262) / C13911) -
        (ae * C13985 * C13981) / C13911 - (C13985 * C13982 * ce) / C13911 +
        C13908 *
            ((-(ae * C13985 * C13972) / C13530) / C13909 - C14262 / C13911 -
             (C13985 * C13973 * ce) / C13911 +
             C13908 *
                 ((-(C13985 * C13964 * ce) / C13530) / C13909 -
                  (ae * C13985 * C13961) / C13911 -
                  (C13908 * C13985 *
                   (C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911));
    const double C1604 =
        2 * ((-(C14015 * C13937 * ce) / C13530) / C13909 -
             (ae * C14015 * C13936) / C13911 - (C13908 * C14272) / C13911) -
        (ae * C14015 * C13981) / C13911 - (C14015 * C13982 * ce) / C13911 +
        C13908 *
            ((-(ae * C14015 * C13972) / C13530) / C13909 - C14272 / C13911 -
             (C14015 * C13973 * ce) / C13911 +
             C13908 *
                 ((-(C14015 * C13964 * ce) / C13530) / C13909 -
                  (ae * C14015 * C13961) / C13911 -
                  (C13908 * C14015 *
                   (C13948 * C13949 + C13917 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911));
    const double C2120 =
        C13985 * C14015 *
            ((-(C13908 * C14064 * ce) / C13530) / C13909 - C14062 / C13911 +
             C13908 *
                 ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) / C13530) /
                      C13909 -
                  (C14064 * ce) / C13911)) -
        (ae * C14015 * C13981) / C13911;
    const double C2282 =
        C14015 * C13985 *
            ((-(C13908 * C14119 * ce) / C13530) / C13909 - C14117 / C13911 +
             C13908 *
                 ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) / C13530) /
                      C13909 -
                  (C14119 * ce) / C13911)) -
        (ae * C13985 * C13981) / C13911;
    const double C91 =
        (-3 * (C13908 * C13942 + C13923 + C13932 * ce)) / C13530 +
        C13908 * ((-2 * C13942) / C13530 - (C13908 * C13981) / C13530 -
                  (C13963 * ce) / C13530) -
        ((2 * C13932 + C13908 * C13963) * ce) / C13530;
    const double C401 =
        -(C13981 * C14075 + C13908 * C13942 + C13923 + C13932 * ce) / C13530;
    const double C845 =
        -(C13981 * C14142 + C13908 * C13942 + C13923 + C13932 * ce) / C13530;
    const double C1277 =
        C13985 * ((-2 * C13942) / C13530 - (C13908 * C13981) / C13530 -
                  (C13963 * ce) / C13530);
    const double C1603 =
        C14015 * ((-2 * C13942) / C13530 - (C13908 * C13981) / C13530 -
                  (C13963 * ce) / C13530);
    const double C1949 = -(C14015 * C13985 * C13981) / C13530;
    const double C2808 =
        (-3 * (C13985 * C14337 + C13991 + C14335 * ce)) / C13530 +
        C13985 * ((-2 * C14337) / C13530 - (C13985 * C14360) / C13530 -
                  (C14350 * ce) / C13530) -
        ((2 * C14335 + C13985 * C14350) * ce) / C13530;
    const double C3075 =
        -(C14360 * C14142 + C13985 * C14337 + C13991 + C14335 * ce) / C13530;
    const double C4247 =
        C14015 * ((-2 * C14337) / C13530 - (C13985 * C14360) / C13530 -
                  (C14350 * ce) / C13530);
    const double C5276 =
        (-3 * (C14015 * C14507 + C14021 + C14505 * ce)) / C13530 +
        C14015 * ((-2 * C14507) / C13530 - (C14015 * C14530) / C13530 -
                  (C14520 * ce) / C13530) -
        ((2 * C14505 + C14015 * C14520) * ce) / C13530;
    const double C4355 =
        2 * ((-(C14015 * C14056 * ce) / C13530) / C13909 -
             (ae * C14015 * C13997) / C13911 - (C13985 * C14450) / C13911) -
        (ae * C14015 * C14360) / C13911 - (C14015 * C14361 * ce) / C13911 +
        C13985 *
            ((-(ae * C14015 * C14348) / C13530) / C13909 - C14450 / C13911 -
             (C14015 * C14351 * ce) / C13911 +
             C13985 *
                 ((-(C14015 * C14064 * ce) / C13530) / C13909 -
                  (ae * C14015 * C14005) / C13911 -
                  (C13985 * C14015 *
                   (C13948 * C13949 + C14075 * bs[6] * std::pow(C13906, 6)) *
                   C13918) /
                      C13911));
    const double C2860 =
        (3 * (C14050 + C13985 * C14338 + C14335 * ae) +
         C13985 * (2 * C14338 + C13985 * C14361 + C14350 * ae) +
         (2 * C14335 + C13985 * C14350) * ae) /
        C13909;
    const double C3163 =
        (C14050 + C13985 * C14338 + C14335 * ae + C14361 * C14142) / C13909;
    const double C4319 =
        (C14015 * (2 * C14338 + C13985 * C14361 + C14350 * ae)) / C13909;
    const double C5376 =
        (3 * (C14105 + C14015 * C14508 + C14505 * ae) +
         C14015 * (2 * C14508 + C14015 * C14531 + C14520 * ae) +
         (2 * C14505 + C14015 * C14520) * ae) /
        C13909;
    const double C96 =
        3 * ((-(ae * C13942) / C13530) / C13909 - C13941 / C13911 -
             (C13943 * ce) / C13911 + C13908 * C13980) +
        (((-2 * C13942) / C13530 - (C13908 * C13981) / C13530 -
          (C13963 * ce) / C13530) *
         ae) /
            C13909 -
        ((2 * C13943 + C13908 * C13982 + C13963 * ae) * ce) / C13911 +
        C13908 * (2 * C13980 - (ae * C13981) / C13911 - (C13982 * ce) / C13911 +
                  C13908 * ((-(ae * C13972) / C13530) / C13909 -
                            C13971 / C13911 - (C13973 * ce) / C13911 +
                            C13908 * ((-(C13964 * ce) / C13530) / C13909 -
                                      (ae * C13961) / C13911 -
                                      (C13908 *
                                       (C13948 * C13949 +
                                        C13917 * bs[6] * std::pow(C13906, 6)) *
                                       C13918) /
                                          C13911)));
    const double C2886 =
        3 * ((-(ae * C14337) / C13530) / C13909 - C14080 / C13911 -
             (C14338 * ce) / C13911 + C13985 * C14359) +
        (((-2 * C14337) / C13530 - (C13985 * C14360) / C13530 -
          (C14350 * ce) / C13530) *
         ae) /
            C13909 -
        ((2 * C14338 + C13985 * C14361 + C14350 * ae) * ce) / C13911 +
        C13985 * (2 * C14359 - (ae * C14360) / C13911 - (C14361 * ce) / C13911 +
                  C13985 * ((-(ae * C14348) / C13530) / C13909 -
                            C14085 / C13911 - (C14351 * ce) / C13911 +
                            C13985 * ((-(C14064 * ce) / C13530) / C13909 -
                                      (ae * C14005) / C13911 -
                                      (C13985 *
                                       (C13948 * C13949 +
                                        C14075 * bs[6] * std::pow(C13906, 6)) *
                                       C13918) /
                                          C13911)));
    const double C5426 =
        3 * ((-(ae * C14507) / C13530) / C13909 - C14147 / C13911 -
             (C14508 * ce) / C13911 + C14015 * C14529) +
        (((-2 * C14507) / C13530 - (C14015 * C14530) / C13530 -
          (C14520 * ce) / C13530) *
         ae) /
            C13909 -
        ((2 * C14508 + C14015 * C14531 + C14520 * ae) * ce) / C13911 +
        C14015 * (2 * C14529 - (ae * C14530) / C13911 - (C14531 * ce) / C13911 +
                  C14015 * ((-(ae * C14518) / C13530) / C13909 -
                            C14152 / C13911 - (C14521 * ce) / C13911 +
                            C14015 * ((-(C14119 * ce) / C13530) / C13909 -
                                      (ae * C14035) / C13911 -
                                      (C14015 *
                                       (C13948 * C13949 +
                                        C14142 * bs[6] * std::pow(C13906, 6)) *
                                       C13918) /
                                          C13911)));
    const double C129 =
        3 * ((-(ae * C13999) / C13530) / C13909 - C13996 / C13911 +
             C13908 * C14012) +
        (((-2 * C13999) / C13530 - (C13908 * C14009) / C13530) * ae) / C13909 +
        C13908 *
            (2 * C14012 - (ae * C14009) / C13911 +
             C13908 *
                 ((-(ae * C13908 * C14005) / C13530) / C13909 -
                  C14003 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) /
                             C13530) /
                                C13909 -
                            (ae * C14005) / C13911)));
    const double C458 = (-(C13908 * C13996) / C13530) / C13909 -
                        (ae * C13991) / C13911 -
                        (C13985 * C13943 * ce) / C13911 +
                        C13985 * (C13985 * C14012 - (C13943 * ce) / C13911);
    const double C459 =
        C13985 * ((-(ae * C13999) / C13530) / C13909 - C13996 / C13911 +
                  C13908 * C14012) -
        ((C13924 + C13908 * C13943 + C13932 * ae) * ce) / C13911;
    const double C460 =
        (-(ae * C13999) / C13530) / C13909 - C13996 / C13911 + C13908 * C14012 -
        (C13985 * C13982 * ce) / C13911 +
        C13985 *
            (C13985 *
                 ((-(ae * C13908 * C14005) / C13530) / C13909 -
                  C14003 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) /
                             C13530) /
                                C13909 -
                            (ae * C14005) / C13911)) -
             (C13982 * ce) / C13911);
    const double C898 = C14015 * ((-(ae * C13999) / C13530) / C13909 -
                                  C13996 / C13911 + C13908 * C14012);
    const double C900 = (-(C13908 * C13996) / C13530) / C13909 -
                        (ae * C13991) / C13911 + C14012 * C14142;
    const double C901 =
        (-(ae * C13999) / C13530) / C13909 - C13996 / C13911 + C13908 * C14012 +
        ((-(ae * C13908 * C14005) / C13530) / C13909 - C14003 / C13911 +
         C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (ae * C14005) / C13911)) *
            C14142;
    const double C1316 =
        C13985 *
            (2 * C14012 - (ae * C14009) / C13911 +
             C13908 *
                 ((-(ae * C13908 * C14005) / C13530) / C13909 -
                  C14003 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) /
                             C13530) /
                                C13909 -
                            (ae * C14005) / C13911))) -
        ((2 * C13943 + C13908 * C13982 + C13963 * ae) * ce) / C13911;
    const double C1640 =
        C14015 *
        (2 * C14012 - (ae * C14009) / C13911 +
         C13908 *
             ((-(ae * C13908 * C14005) / C13530) / C13909 - C14003 / C13911 +
              C13908 *
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (ae * C14005) / C13911)));
    const double C2007 = C14015 * (C13985 * C14012 - (C13943 * ce) / C13911);
    const double C3460 =
        2 * (C13985 * C14012 - (C13943 * ce) / C13911) -
        ((C13943 + C13973 * C14075) * ce) / C13911 +
        C13985 *
            (C14012 - (C13985 * C13973 * ce) / C13911 +
             C13985 *
                 (C13985 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) /
                             C13530) /
                                C13909 -
                            (ae * C14005) / C13911) -
                  (C13973 * ce) / C13911));
    const double C3814 =
        C14015 *
        (C14012 - (C13985 * C13973 * ce) / C13911 +
         C13985 * (C13985 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) /
                              C13530) /
                                 C13909 -
                             (ae * C14005) / C13911) -
                   (C13973 * ce) / C13911));
    const double C5532 =
        C13985 * C14012 - (C13943 * ce) / C13911 +
        (C13985 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (ae * C14005) / C13911) -
         (C13973 * ce) / C13911) *
            C14142;
    const double C5970 =
        2 * C14015 * C14012 +
        C14015 * (C14012 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (ae * C14005) / C13911) *
                      C14142);
    const double C2810 =
        3 * ((-(C14312 * ce) / C13530) / C13909 - C13996 / C13911 +
             C13985 * C14320) -
        ((2 * C14312 + C13985 * C14317) * ce) / C13911 +
        C13985 *
            (2 * C14320 - (C14317 * ce) / C13911 +
             C13985 *
                 ((-(C13985 * C13964 * ce) / C13530) / C13909 -
                  C14003 / C13911 +
                  C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C13992) /
                             C13530) /
                                C13909 -
                            (C13964 * ce) / C13911)));
    const double C3076 = C14015 * ((-(C14312 * ce) / C13530) / C13909 -
                                   C13996 / C13911 + C13985 * C14320);
    const double C3077 = (-(C13985 * C13996) / C13530) / C13909 -
                         (C13924 * ce) / C13911 + C14320 * C14142;
    const double C3078 =
        (-(C14312 * ce) / C13530) / C13909 - C13996 / C13911 + C13985 * C14320 +
        ((-(C13985 * C13964 * ce) / C13530) / C13909 - C14003 / C13911 +
         C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (C13964 * ce) / C13911)) *
            C14142;
    const double C4248 =
        C14015 *
        (2 * C14320 - (C14317 * ce) / C13911 +
         C13985 *
             ((-(C13985 * C13964 * ce) / C13530) / C13909 - C14003 / C13911 +
              C13985 *
                  ((-(C13985 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (C13964 * ce) / C13911)));
    const double C6296 =
        2 * C14015 * C14320 +
        C14015 * (C14320 +
                  ((-(C13985 * std::pow(C13906, 6) * bs[6] * C13992) / C13530) /
                       C13909 -
                   (C13964 * ce) / C13911) *
                      C14142);
    const double C195 =
        3 * ((-(C14058 * ce) / C13530) / C13909 - C14055 / C13911 +
             C13908 * C14071) -
        ((2 * C14058 + C13908 * C14068) * ce) / C13911 +
        C13908 *
            (2 * C14071 - (C14068 * ce) / C13911 +
             C13908 *
                 ((-(C13908 * C14064 * ce) / C13530) / C13909 -
                  C14062 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911)));
    const double C557 =
        C13985 * ((-(C14058 * ce) / C13530) / C13909 - C14055 / C13911 +
                  C13908 * C14071) -
        (ae * (C13908 * C13942 + C13923 + C13932 * ce)) / C13911;
    const double C559 = (-(C13908 * C14055) / C13530) / C13909 -
                        (C14050 * ce) / C13911 -
                        (ae * C13985 * C13942) / C13911 +
                        C13985 * (C13985 * C14071 - (ae * C13942) / C13911);
    const double C560 =
        (-(C14058 * ce) / C13530) / C13909 - C14055 / C13911 + C13908 * C14071 -
        (ae * C13985 * C13981) / C13911 +
        C13985 *
            (C13985 *
                 ((-(C13908 * C14064 * ce) / C13530) / C13909 -
                  C14062 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911)) -
             (ae * C13981) / C13911);
    const double C1001 = C14015 * ((-(C14058 * ce) / C13530) / C13909 -
                                   C14055 / C13911 + C13908 * C14071);
    const double C1003 = (-(C13908 * C14055) / C13530) / C13909 -
                         (C14050 * ce) / C13911 + C14071 * C14142;
    const double C1004 =
        (-(C14058 * ce) / C13530) / C13909 - C14055 / C13911 + C13908 * C14071 +
        ((-(C13908 * C14064 * ce) / C13530) / C13909 - C14062 / C13911 +
         C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) / C13530) /
                       C13909 -
                   (C14064 * ce) / C13911)) *
            C14142;
    const double C1388 =
        (((-2 * C13942) / C13530 - (C13908 * C13981) / C13530 -
          (C13963 * ce) / C13530) *
         ae) /
            C13909 +
        C13985 *
            (2 * C14071 - (C14068 * ce) / C13911 +
             C13908 *
                 ((-(C13908 * C14064 * ce) / C13530) / C13909 -
                  C14062 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911)));
    const double C1714 =
        C14015 *
        (2 * C14071 - (C14068 * ce) / C13911 +
         C13908 *
             ((-(C13908 * C14064 * ce) / C13530) / C13909 - C14062 / C13911 +
              C13908 *
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) / C13530) /
                       C13909 -
                   (C14064 * ce) / C13911)));
    const double C2119 =
        C13985 * C14015 * C14071 - (ae * C14015 * C13942) / C13911;
    const double C3532 =
        2 * (C13985 * C14071 - (ae * C13942) / C13911) -
        (ae * (C13972 * C14075 + C13942)) / C13911 +
        C13985 *
            (C14071 - (ae * C13985 * C13972) / C13911 +
             C13985 *
                 (C13985 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911) -
                  (ae * C13972) / C13911));
    const double C3918 =
        C14015 * C14071 - (ae * C14015 * C13985 * C13972) / C13911 +
        C13985 *
            (C13985 * C14015 *
                 ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) / C13530) /
                      C13909 -
                  (C14064 * ce) / C13911) -
             (ae * C14015 * C13972) / C13911);
    const double C5636 =
        C13985 * (C14071 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) / C13530) /
                       C13909 -
                   (C14064 * ce) / C13911) *
                      C14142) -
        (ae * (C13972 * C14142 + C13942)) / C13911;
    const double C6046 =
        2 * C14015 * C14071 +
        C14015 * (C14071 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14051) / C13530) /
                       C13909 -
                   (C14064 * ce) / C13911) *
                      C14142);
    const double C2862 =
        3 * ((-(ae * C14325) / C13530) / C13909 - C14055 / C13911 +
             C13985 * C14332) +
        (((-2 * C14325) / C13530 - (C13985 * C14329) / C13530) * ae) / C13909 +
        C13985 *
            (2 * C14332 - (ae * C14329) / C13911 +
             C13985 *
                 ((-(ae * C13985 * C13961) / C13530) / C13909 -
                  C14062 / C13911 +
                  C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C14051) /
                             C13530) /
                                C13909 -
                            (ae * C13961) / C13911)));
    const double C162 =
        3 * ((-(ae * C14029) / C13530) / C13909 - C14026 / C13911 +
             C13908 * C14042) +
        (((-2 * C14029) / C13530 - (C13908 * C14039) / C13530) * ae) / C13909 +
        C13908 *
            (2 * C14042 - (ae * C14039) / C13911 +
             C13908 *
                 ((-(ae * C13908 * C14035) / C13530) / C13909 -
                  C14033 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) /
                             C13530) /
                                C13909 -
                            (ae * C14035) / C13911)));
    const double C508 = (-(C13908 * C14026) / C13530) / C13909 -
                        (ae * C14021) / C13911 + C14042 * C14075;
    const double C509 = C13985 * ((-(ae * C14029) / C13530) / C13909 -
                                  C14026 / C13911 + C13908 * C14042);
    const double C510 =
        (-(ae * C14029) / C13530) / C13909 - C14026 / C13911 + C13908 * C14042 +
        ((-(ae * C13908 * C14035) / C13530) / C13909 - C14033 / C13911 +
         C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) / C13530) /
                       C13909 -
                   (ae * C14035) / C13911)) *
            C14075;
    const double C952 = (-(C13908 * C14026) / C13530) / C13909 -
                        (ae * C14021) / C13911 -
                        (C14015 * C13943 * ce) / C13911 +
                        C14015 * (C14015 * C14042 - (C13943 * ce) / C13911);
    const double C953 =
        C14015 * ((-(ae * C14029) / C13530) / C13909 - C14026 / C13911 +
                  C13908 * C14042) -
        ((C13924 + C13908 * C13943 + C13932 * ae) * ce) / C13911;
    const double C954 =
        (-(ae * C14029) / C13530) / C13909 - C14026 / C13911 + C13908 * C14042 -
        (C14015 * C13982 * ce) / C13911 +
        C14015 *
            (C14015 *
                 ((-(ae * C13908 * C14035) / C13530) / C13909 -
                  C14033 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) /
                             C13530) /
                                C13909 -
                            (ae * C14035) / C13911)) -
             (C13982 * ce) / C13911);
    const double C1352 =
        C13985 *
        (2 * C14042 - (ae * C14039) / C13911 +
         C13908 *
             ((-(ae * C13908 * C14035) / C13530) / C13909 - C14033 / C13911 +
              C13908 *
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) / C13530) /
                       C13909 -
                   (ae * C14035) / C13911)));
    const double C1678 =
        C14015 *
            (2 * C14042 - (ae * C14039) / C13911 +
             C13908 *
                 ((-(ae * C13908 * C14035) / C13530) / C13909 -
                  C14033 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) /
                             C13530) /
                                C13909 -
                            (ae * C14035) / C13911))) -
        ((2 * C13943 + C13908 * C13982 + C13963 * ae) * ce) / C13911;
    const double C2063 =
        C14015 * C13985 * C14042 - (C13985 * C13943 * ce) / C13911;
    const double C3496 =
        2 * C13985 * C14042 +
        C13985 * (C14042 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) / C13530) /
                       C13909 -
                   (ae * C14035) / C13911) *
                      C14075);
    const double C3866 =
        C14015 * (C14042 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) / C13530) /
                       C13909 -
                   (ae * C14035) / C13911) *
                      C14075) -
        ((C13943 + C13973 * C14075) * ce) / C13911;
    const double C5584 =
        C13985 * C14042 - (C14015 * C14535 * ce) / C13911 +
        C14015 *
            (C14015 * C13985 *
                 ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) / C13530) /
                      C13909 -
                  (ae * C14035) / C13911) -
             (C14535 * ce) / C13911);
    const double C6010 =
        2 * (C14015 * C14042 - (C13943 * ce) / C13911) -
        ((C13943 + C13973 * C14142) * ce) / C13911 +
        C14015 *
            (C14042 - (C14015 * C13973 * ce) / C13911 +
             C14015 *
                 (C14015 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14022) /
                             C13530) /
                                C13909 -
                            (ae * C14035) / C13911) -
                  (C13973 * ce) / C13911));
    const double C5278 =
        3 * ((-(C14466 * ce) / C13530) / C13909 - C14026 / C13911 +
             C14015 * C14473) -
        ((2 * C14466 + C14015 * C14470) * ce) / C13911 +
        C14015 *
            (2 * C14473 - (C14470 * ce) / C13911 +
             C14015 *
                 ((-(C14015 * C13964 * ce) / C13530) / C13909 -
                  C14033 / C13911 +
                  C14015 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14022) /
                             C13530) /
                                C13909 -
                            (C13964 * ce) / C13911)));
    const double C2910 =
        3 * ((-(ae * C14364) / C13530) / C13909 - C14094 / C13911 +
             C13985 * C14371) +
        (((-2 * C14364) / C13530 - (C13985 * C14368) / C13530) * ae) / C13909 +
        C13985 *
            (2 * C14371 - (ae * C14368) / C13911 +
             C13985 *
                 ((-(ae * C13985 * C14035) / C13530) / C13909 -
                  C14097 / C13911 +
                  C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C14091) /
                             C13530) /
                                C13909 -
                            (ae * C14035) / C13911)));
    const double C4390 =
        2 * (C13985 * C14456 - (ae * (C14015 * C14027 + C13931)) / C13911) -
        (ae * (C14015 * C14368 + C14350 * ce)) / C13911 +
        C13985 *
            (C14456 - (ae * (C14015 * C13985 * C14035 + C14349)) / C13911 +
             C13985 *
                 (C13985 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14091) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911) -
                  (ae * (C14015 * C14035 + C13954)) / C13911));
    const double C5351 =
        2 * ((-(C14015 * C14094) / C13530) / C13909 - (C14050 * ce) / C13911) -
        ((C14050 + C14056 * C14142) * ce) / C13911 +
        C14015 * ((-(C14015 * C14056 * ce) / C13530) / C13909 -
                  C14094 / C13911 + C14015 * C14456);
    const double C5352 =
        3 * ((-(C14480 * ce) / C13530) / C13909 - C14094 / C13911 +
             C14015 * C14456) -
        ((2 * C14480 + C14015 * C14482) * ce) / C13911 +
        C14015 *
            (2 * C14456 - (C14482 * ce) / C13911 +
             C14015 *
                 ((-(C14015 * C14064 * ce) / C13530) / C13909 -
                  C14097 / C13911 +
                  C14015 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14091) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911)));
    const double C6438 =
        (((-2 * C14507) / C13530 - (C14015 * C14530) / C13530 -
          (C14520 * ce) / C13530) *
         ae) /
            C13909 +
        C13985 *
            (2 * C14456 - (C14482 * ce) / C13911 +
             C14015 *
                 ((-(C14015 * C14064 * ce) / C13530) / C13909 -
                  C14097 / C13911 +
                  C14015 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14091) /
                             C13530) /
                                C13909 -
                            (C14064 * ce) / C13911)));
    const double C282 =
        3 * ((-(C14113 * ce) / C13530) / C13909 - C14110 / C13911 +
             C13908 * C14126) -
        ((2 * C14113 + C13908 * C14123) * ce) / C13911 +
        C13908 *
            (2 * C14126 - (C14123 * ce) / C13911 +
             C13908 *
                 ((-(C13908 * C14119 * ce) / C13530) / C13909 -
                  C14117 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911)));
    const double C695 = C13985 * ((-(C14113 * ce) / C13530) / C13909 -
                                  C14110 / C13911 + C13908 * C14126);
    const double C697 = (-(C13908 * C14110) / C13530) / C13909 -
                        (C14105 * ce) / C13911 + C14126 * C14075;
    const double C698 =
        (-(C14113 * ce) / C13530) / C13909 - C14110 / C13911 + C13908 * C14126 +
        ((-(C13908 * C14119 * ce) / C13530) / C13909 - C14117 / C13911 +
         C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) / C13530) /
                       C13909 -
                   (C14119 * ce) / C13911)) *
            C14075;
    const double C1139 =
        C14015 * ((-(C14113 * ce) / C13530) / C13909 - C14110 / C13911 +
                  C13908 * C14126) -
        (ae * (C13908 * C13942 + C13923 + C13932 * ce)) / C13911;
    const double C1141 = (-(C13908 * C14110) / C13530) / C13909 -
                         (C14105 * ce) / C13911 -
                         (ae * C14015 * C13942) / C13911 +
                         C14015 * (C14015 * C14126 - (ae * C13942) / C13911);
    const double C1142 =
        (-(C14113 * ce) / C13530) / C13909 - C14110 / C13911 + C13908 * C14126 -
        (ae * C14015 * C13981) / C13911 +
        C14015 *
            (C14015 *
                 ((-(C13908 * C14119 * ce) / C13530) / C13909 -
                  C14117 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911)) -
             (ae * C13981) / C13911);
    const double C1494 =
        C13985 *
        (2 * C14126 - (C14123 * ce) / C13911 +
         C13908 *
             ((-(C13908 * C14119 * ce) / C13530) / C13909 - C14117 / C13911 +
              C13908 *
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) / C13530) /
                       C13909 -
                   (C14119 * ce) / C13911)));
    const double C1820 =
        (((-2 * C13942) / C13530 - (C13908 * C13981) / C13530 -
          (C13963 * ce) / C13530) *
         ae) /
            C13909 +
        C14015 *
            (2 * C14126 - (C14123 * ce) / C13911 +
             C13908 *
                 ((-(C13908 * C14119 * ce) / C13530) / C13909 -
                  C14117 / C13911 +
                  C13908 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911)));
    const double C2281 =
        C14015 * C13985 * C14126 - (ae * C13985 * C13942) / C13911;
    const double C3638 =
        2 * C13985 * C14126 +
        C13985 * (C14126 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) / C13530) /
                       C13909 -
                   (C14119 * ce) / C13911) *
                      C14075);
    const double C4072 =
        C14015 * (C14126 +
                  ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) / C13530) /
                       C13909 -
                   (C14119 * ce) / C13911) *
                      C14075) -
        (ae * (C13972 * C14075 + C13942)) / C13911;
    const double C5790 =
        C13985 * C14126 - (ae * C14015 * C14540) / C13911 +
        C14015 *
            (C14015 * C13985 *
                 ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) / C13530) /
                      C13909 -
                  (C14119 * ce) / C13911) -
             (ae * C14540) / C13911);
    const double C6152 =
        2 * (C14015 * C14126 - (ae * C13942) / C13911) -
        (ae * (C13972 * C14142 + C13942)) / C13911 +
        C14015 *
            (C14126 - (ae * C14015 * C13972) / C13911 +
             C14015 *
                 (C14015 * ((-(C13908 * std::pow(C13906, 6) * bs[6] * C14106) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911) -
                  (ae * C13972) / C13911));
    const double C5378 =
        3 * ((-(ae * C14485) / C13530) / C13909 - C14110 / C13911 +
             C14015 * C14492) +
        (((-2 * C14485) / C13530 - (C14015 * C14489) / C13530) * ae) / C13909 +
        C14015 *
            (2 * C14492 - (ae * C14489) / C13911 +
             C14015 *
                 ((-(ae * C14015 * C13961) / C13530) / C13909 -
                  C14117 / C13911 +
                  C14015 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14106) /
                             C13530) /
                                C13909 -
                            (ae * C13961) / C13911)));
    const double C2960 =
        3 * ((-(C14376 * ce) / C13530) / C13909 - C14135 / C13911 +
             C13985 * C14383) -
        ((2 * C14376 + C13985 * C14380) * ce) / C13911 +
        C13985 *
            (2 * C14383 - (C14380 * ce) / C13911 +
             C13985 *
                 ((-(C13985 * C14119 * ce) / C13530) / C13909 -
                  C14138 / C13911 +
                  C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C14132) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911)));
    const double C3331 =
        C14015 * ((-(C14376 * ce) / C13530) / C13909 - C14135 / C13911 +
                  C13985 * C14383) -
        (ae * (C13985 * C14337 + C13991 + C14335 * ce)) / C13911;
    const double C3332 = (-(C13985 * C14135) / C13530) / C13909 -
                         (C14105 * ce) / C13911 -
                         (ae * C14015 * C14337) / C13911 +
                         C14015 * (C14015 * C14383 - (ae * C14337) / C13911);
    const double C3333 =
        (-(C14376 * ce) / C13530) / C13909 - C14135 / C13911 + C13985 * C14383 -
        (ae * C14015 * C14360) / C13911 +
        C14015 *
            (C14015 *
                 ((-(C13985 * C14119 * ce) / C13530) / C13909 -
                  C14138 / C13911 +
                  C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C14132) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911)) -
             (ae * C14360) / C13911);
    const double C4461 =
        (((-2 * C14337) / C13530 - (C13985 * C14360) / C13530 -
          (C14350 * ce) / C13530) *
         ae) /
            C13909 +
        C14015 *
            (2 * C14383 - (C14380 * ce) / C13911 +
             C13985 *
                 ((-(C13985 * C14119 * ce) / C13530) / C13909 -
                  C14138 / C13911 +
                  C13985 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C14132) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911)));
    const double C6509 =
        2 * (C14015 * C14383 - (ae * C14337) / C13911) -
        (ae * (C14348 * C14142 + C14337)) / C13911 +
        C14015 *
            (C14383 - (ae * C14015 * C14348) / C13911 +
             C14015 *
                 (C14015 * ((-(C13985 * std::pow(C13906, 6) * bs[6] * C14132) /
                             C13530) /
                                C13909 -
                            (C14119 * ce) / C13911) -
                  (ae * C14348) / C13911));
    const double C5402 =
        3 * ((-(ae * C14495) / C13530) / C13909 - C14135 / C13911 +
             C14015 * C14502) +
        (((-2 * C14495) / C13530 - (C14015 * C14499) / C13530) * ae) / C13909 +
        C14015 *
            (2 * C14502 - (ae * C14499) / C13911 +
             C14015 *
                 ((-(ae * C14015 * C14005) / C13530) / C13909 -
                  C14138 / C13911 +
                  C14015 * ((-(C14015 * std::pow(C13906, 6) * bs[6] * C14132) /
                             C13530) /
                                C13909 -
                            (ae * C14005) / C13911)));
    const double C13573 = C13569 / C13530;
    const double C13572 = C13568 / C13530;
    const double C15220 = C15168 + C15212;
    const double C1266 = C15199 - (C14848 * C14831) / C13530;
    const double C65 = C15200 / C13536 - C14846 / C15175;
    const double C15213 = C15171 + C15199;
    const double C13710 = C13706 / C13530;
    const double C13721 = C13715 / C13530;
    const double C15221 = C15184 + C15216;
    const double C3412 = C15206 - (C14936 * C14925) / C13530;
    const double C2769 = C15207 / C13536 - C14934 / C15175;
    const double C15217 = C15186 + C15206;
    const double C13801 = C13797 / C13530;
    const double C13812 = C13806 / C13530;
    const double C15222 = C15190 + C15218;
    const double C5928 = C15209 - (C14976 * C14965) / C13530;
    const double C5212 = C15210 / C13536 - C14974 / C15175;
    const double C15219 = C15192 + C15209;
    const double C13575 = C13572 - C13551;
    const double C62 =
        (C15211 + 2 * C14840) / C13536 - (C15220 * C14831) / C13530;
    const double C63 =
        (C15198 + 2 * C14848 + C15220) / C13536 - (C15213 * C14831) / C13530;
    const double C64 = (C15173 + C14845 / C13530 + C15213) / C13536 -
                       (C15200 * C14831) / C13530;
    const double C13714 = C13710 - C13691;
    const double C2766 =
        (C15214 + 2 * C14929) / C13536 - (C15221 * C14925) / C13530;
    const double C2767 =
        (C15202 + 2 * C14936 + C15221) / C13536 - (C15217 * C14925) / C13530;
    const double C2768 = (C15179 + C14933 / C13530 + C15217) / C13536 -
                         (C15207 * C14925) / C13530;
    const double C13805 = C13801 - C13782;
    const double C5209 =
        (C15215 + 2 * C14969) / C13536 - (C15222 * C14965) / C13530;
    const double C5210 =
        (C15204 + 2 * C14976 + C15222) / C13536 - (C15219 * C14965) / C13530;
    const double C5211 = (C15182 + C14973 / C13530 + C15219) / C13536 -
                         (C15210 * C14965) / C13530;
    const double C13578 = C13575 / C13536;
    const double C13577 = C13528 * C13575;
    const double C13720 = C13714 / C13536;
    const double C13719 = C13621 * C13714;
    const double C13811 = C13805 / C13536;
    const double C13810 = C13636 * C13805;
    const double C13581 = C13578 - C13573;
    const double C2434 = C13578 + (C13564 * ce) / C13530;
    const double C13580 = C13577 + C15139;
    const double C13725 = C13720 - C13721;
    const double C13724 = C13719 + C15153;
    const double C13816 = C13811 - C13812;
    const double C13815 = C13810 + C15154;
    const double C75 =
        (C13581 / C13536 + ((C13528 * C13591 + C7671) * ce) / C13530) / C13536 -
        ((C13528 * (C13591 / C13536 + (0 * ce) / C13530) + C15183) * de) /
            C13530;
    const double C1273 =
        C13581 / C13536 - ((C13528 * C13591 + C7671) * de) / C13530;
    const double C6587 =
        C13581 / C13536 + ((C13528 * C13591 + C7671) * ce) / C13530;
    const double C13582 = C13580 * de;
    const double C2433 = C13567 + (C13580 * ce) / C13530 + C13556;
    const double C2805 =
        (C13725 / C13536 + ((C13621 * C13739 + C7674) * ce) / C13530) / C13536 -
        ((C13621 * (C13739 / C13536 + (0 * ce) / C13530) + C15189) * de) /
            C13530;
    const double C3457 =
        C13725 / C13536 - ((C13621 * C13739 + C7674) * de) / C13530;
    const double C6941 =
        C13725 / C13536 + ((C13621 * C13739 + C7674) * ce) / C13530;
    const double C13728 = C13724 * de;
    const double C5273 =
        (C13816 / C13536 + ((C13636 * C13830 + C10449) * ce) / C13530) /
            C13536 -
        ((C13636 * (C13830 / C13536 + (0 * ce) / C13530) + C15195) * de) /
            C13530;
    const double C6007 =
        C13816 / C13536 - ((C13636 * C13830 + C10449) * de) / C13530;
    const double C9753 =
        C13816 / C13536 + ((C13636 * C13830 + C10449) * ce) / C13530;
    const double C13819 = C13815 * de;
    const double C13583 = C13582 / C13530;
    const double C13730 = C13728 / C13530;
    const double C13821 = C13819 / C13530;
    const double C13584 = C13567 - C13583;
    const double C13732 = C13718 - C13730;
    const double C13823 = C13809 - C13821;
    const double C13585 = C13584 + C13556;
    const double C13733 = C13732 + C13703;
    const double C13824 = C13823 + C13794;
    const double C72 =
        (((((0 - (C13528 * C13529) / C13530) * ce) / C13530 -
           (0 * de) / C13542 + (2 * C13531) / C13530) /
              C13536 -
          ((C13528 * C13565 + 0) * de) / C13530 + C13548 - C13558) /
             C13536 +
         ((C13528 * C13579 + 0) * ce) / C13530) /
            C13536 -
        ((C13528 * (C13579 / C13536 +
                    ((C13528 * C13585 + C14840) * ce) / C13530 + C13581) +
          C15220) *
         de) /
            C13530 +
        C13585 / C13536 + ((C13528 * C13581 + C14848) * ce) / C13530 +
        2 * (C13556 / C13536 - (0 * de) / C13530);
    const double C73 =
        (C13579 / C13536 + ((C13528 * C13585 + C14840) * ce) / C13530 +
         C13581) /
            C13536 -
        ((C13528 * (C13585 / C13536 +
                    ((C13528 * C13581 + C14848) * ce) / C13530 + 2 * C13591) +
          C15213) *
         de) /
            C13530 +
        2 * (C13581 / C13536 + ((C13528 * C13591 + C7671) * ce) / C13530);
    const double C74 =
        (C13585 / C13536 + ((C13528 * C13581 + C14848) * ce) / C13530 +
         2 * C13591) /
            C13536 -
        ((C13528 *
              (C13581 / C13536 + ((C13528 * C13591 + C7671) * ce) / C13530) +
          C15200) *
         de) /
            C13530 +
        3 * (C13591 / C13536 + (0 * ce) / C13530);
    const double C1271 =
        C13579 / C13536 - ((C13528 * C13585 + C14840) * de) / C13530 + C13581;
    const double C1272 = C13585 / C13536 -
                         ((C13528 * C13581 + C14848) * de) / C13530 +
                         2 * C13591;
    const double C6585 =
        C13579 / C13536 + ((C13528 * C13585 + C14840) * ce) / C13530 + C13581;
    const double C6586 = C13585 / C13536 +
                         ((C13528 * C13581 + C14848) * ce) / C13530 +
                         2 * C13591;
    const double C2802 =
        (((((0 - (C13621 * C13686) / C13530) * ce) / C13530 -
           (0 * de) / C13542 + (2 * C13687) / C13530) /
              C13536 -
          ((C13621 * C13722 + 0) * de) / C13530 + C13696 - C13709) /
             C13536 +
         ((C13621 * C13731 + 0) * ce) / C13530) /
            C13536 -
        ((C13621 * (C13731 / C13536 +
                    ((C13621 * C13733 + C14929) * ce) / C13530 + C13725) +
          C15221) *
         de) /
            C13530 +
        C13733 / C13536 + ((C13621 * C13725 + C14936) * ce) / C13530 +
        2 * (C13703 / C13536 - (0 * de) / C13530);
    const double C2803 =
        (C13731 / C13536 + ((C13621 * C13733 + C14929) * ce) / C13530 +
         C13725) /
            C13536 -
        ((C13621 * (C13733 / C13536 +
                    ((C13621 * C13725 + C14936) * ce) / C13530 + 2 * C13739) +
          C15217) *
         de) /
            C13530 +
        2 * (C13725 / C13536 + ((C13621 * C13739 + C7674) * ce) / C13530);
    const double C2804 =
        (C13733 / C13536 + ((C13621 * C13725 + C14936) * ce) / C13530 +
         2 * C13739) /
            C13536 -
        ((C13621 *
              (C13725 / C13536 + ((C13621 * C13739 + C7674) * ce) / C13530) +
          C15207) *
         de) /
            C13530 +
        3 * (C13739 / C13536 + (0 * ce) / C13530);
    const double C3455 =
        C13731 / C13536 - ((C13621 * C13733 + C14929) * de) / C13530 + C13725;
    const double C3456 = C13733 / C13536 -
                         ((C13621 * C13725 + C14936) * de) / C13530 +
                         2 * C13739;
    const double C6939 =
        C13731 / C13536 + ((C13621 * C13733 + C14929) * ce) / C13530 + C13725;
    const double C6940 = C13733 / C13536 +
                         ((C13621 * C13725 + C14936) * ce) / C13530 +
                         2 * C13739;
    const double C5270 =
        (((((0 - (C13636 * C13777) / C13530) * ce) / C13530 -
           (0 * de) / C13542 + (2 * C13778) / C13530) /
              C13536 -
          ((C13636 * C13813 + 0) * de) / C13530 + C13787 - C13800) /
             C13536 +
         ((C13636 * C13822 + 0) * ce) / C13530) /
            C13536 -
        ((C13636 * (C13822 / C13536 +
                    ((C13636 * C13824 + C14969) * ce) / C13530 + C13816) +
          C15222) *
         de) /
            C13530 +
        C13824 / C13536 + ((C13636 * C13816 + C14976) * ce) / C13530 +
        2 * (C13794 / C13536 - (0 * de) / C13530);
    const double C5271 =
        (C13822 / C13536 + ((C13636 * C13824 + C14969) * ce) / C13530 +
         C13816) /
            C13536 -
        ((C13636 * (C13824 / C13536 +
                    ((C13636 * C13816 + C14976) * ce) / C13530 + 2 * C13830) +
          C15219) *
         de) /
            C13530 +
        2 * (C13816 / C13536 + ((C13636 * C13830 + C10449) * ce) / C13530);
    const double C5272 =
        (C13824 / C13536 + ((C13636 * C13816 + C14976) * ce) / C13530 +
         2 * C13830) /
            C13536 -
        ((C13636 *
              (C13816 / C13536 + ((C13636 * C13830 + C10449) * ce) / C13530) +
          C15210) *
         de) /
            C13530 +
        3 * (C13830 / C13536 + (0 * ce) / C13530);
    const double C6005 =
        C13822 / C13536 - ((C13636 * C13824 + C14969) * de) / C13530 + C13816;
    const double C6006 = C13824 / C13536 -
                         ((C13636 * C13816 + C14976) * de) / C13530 +
                         2 * C13830;
    const double C9751 =
        C13822 / C13536 + ((C13636 * C13824 + C14969) * ce) / C13530 + C13816;
    const double C9752 = C13824 / C13536 +
                         ((C13636 * C13816 + C14976) * ce) / C13530 +
                         2 * C13830;
    d2eexx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C13585 + (C71 * C83 + C61 * C92) * C14840 -
           (C71 * C78 + C61 * C84) * C13581 - (C71 * C85 + C61 * C93) * C14848 +
           (C71 * C79 + C61 * C86) * C13591 + (C71 * C87 + C61 * C94) * C7671) *
              C67 * C68 * C14886 * C14929 +
          ((C71 * C384 + C61 * C390) * C13581 -
           ((C71 * C391 + C61 * C402) * C14840 +
            (C71 * C385 + C61 * C392) * C13585) +
           (C71 * C393 + C61 * C403) * C14848 -
           (C71 * C386 + C61 * C394) * C13591 -
           (C71 * C395 + C61 * C404) * C7671) *
              C67 * C68 * C14886 * C14936 +
          ((C71 * C387 + C61 * C396) * C13585 +
           (C71 * C397 + C61 * C405) * C14840 -
           (C71 * C388 + C61 * C398) * C13581 -
           (C71 * C399 + C61 * C406) * C14848 +
           (C71 * C389 + C61 * C400) * C13591 +
           (C71 * C401 + C61 * C407) * C7671) *
              C67 * C68 * C14886 * C7674)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C77 + C61 * C82) * C13733 +
                    (C71 * C120 + C61 * C125) * C14929 -
                    (C71 * C385 + C61 * C392) * C13725 -
                    (C71 * C449 + C61 * C455) * C14936 +
                    (C71 * C387 + C61 * C396) * C13739 +
                    (C71 * C450 + C61 * C456) * C7674) *
                       C67 * C68 * C14840 +
                   ((C71 * C384 + C61 * C390) * C13725 -
                    ((C71 * C121 + C61 * C126) * C14929 +
                     (C71 * C78 + C61 * C84) * C13733) +
                    (C71 * C451 + C61 * C457) * C14936 -
                    (C71 * C388 + C61 * C398) * C13739 -
                    (C71 * C452 + C61 * C458) * C7674) *
                       C67 * C68 * C14848 +
                   ((C71 * C79 + C61 * C86) * C13733 +
                    (C71 * C122 + C61 * C127) * C14929 -
                    (C71 * C386 + C61 * C394) * C13725 -
                    (C71 * C453 + C61 * C459) * C14936 +
                    (C71 * C389 + C61 * C400) * C13739 +
                    (C71 * C454 + C61 * C460) * C7674) *
                       C67 * C68 * C7671) *
                  C14886) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C14929 -
                    ((C71 * C499 + C61 * C505) * C14886 +
                     (C71 * C385 + C61 * C392) * C152) *
                        C67 * C68 * C14936 +
                    ((C71 * C387 + C61 * C396) * C152 +
                     (C71 * C500 + C61 * C506) * C14886) *
                        C67 * C68 * C7674) *
                       C14840 +
                   (((C71 * C384 + C61 * C390) * C152 +
                     (C71 * C501 + C61 * C507) * C14886) *
                        C67 * C68 * C14936 -
                    ((C71 * C154 + C61 * C159) * C14886 +
                     (C71 * C78 + C61 * C84) * C152) *
                        C67 * C68 * C14929 -
                    ((C71 * C502 + C61 * C508) * C14886 +
                     (C71 * C388 + C61 * C398) * C152) *
                        C67 * C68 * C7674) *
                       C14848 +
                   (((C71 * C79 + C61 * C86) * C152 +
                     (C71 * C155 + C61 * C160) * C14886) *
                        C67 * C68 * C14929 -
                    ((C71 * C503 + C61 * C509) * C14886 +
                     (C71 * C386 + C61 * C394) * C152) *
                        C67 * C68 * C14936 +
                    ((C71 * C389 + C61 * C400) * C152 +
                     (C71 * C504 + C61 * C510) * C14886) *
                        C67 * C68 * C7674) *
                       C7671)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C13585 +
                    (C185 * C83 + C67 * C191) * C14840 -
                    (C185 * C78 + C67 * C187) * C13581 -
                    (C185 * C85 + C67 * C192) * C14848 +
                    (C185 * C79 + C67 * C188) * C13591 +
                    (C185 * C87 + C67 * C193) * C7671) *
                       C68 * C61 * C14886 * C14929 +
                   ((C185 * C384 + C67 * C549) * C13581 -
                    ((C185 * C391 + C67 * C555) * C14840 +
                     (C185 * C385 + C67 * C550) * C13585) +
                    (C185 * C393 + C67 * C556) * C14848 -
                    (C185 * C386 + C67 * C551) * C13591 -
                    (C185 * C395 + C67 * C557) * C7671) *
                       C68 * C61 * C14886 * C14936 +
                   ((C185 * C387 + C67 * C552) * C13585 +
                    (C185 * C397 + C67 * C558) * C14840 -
                    (C185 * C388 + C67 * C553) * C13581 -
                    (C185 * C399 + C67 * C559) * C14848 +
                    (C185 * C389 + C67 * C554) * C13591 +
                    (C185 * C401 + C67 * C560) * C7671) *
                       C68 * C61 * C14886 * C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C13733 +
                    (C185 * C120 + C67 * C218) * C14929 -
                    (C185 * C385 + C67 * C550) * C13725 -
                    (C185 * C449 + C67 * C599) * C14936 +
                    (C185 * C387 + C67 * C552) * C13739 +
                    (C185 * C450 + C67 * C600) * C7674) *
                       C68 * C61 * C14840 +
                   ((C185 * C384 + C67 * C549) * C13725 -
                    ((C185 * C121 + C67 * C219) * C14929 +
                     (C185 * C78 + C67 * C187) * C13733) +
                    (C185 * C451 + C67 * C601) * C14936 -
                    (C185 * C388 + C67 * C553) * C13739 -
                    (C185 * C452 + C67 * C602) * C7674) *
                       C68 * C61 * C14848 +
                   ((C185 * C79 + C67 * C188) * C13733 +
                    (C185 * C122 + C67 * C220) * C14929 -
                    (C185 * C386 + C67 * C551) * C13725 -
                    (C185 * C453 + C67 * C603) * C14936 +
                    (C185 * C389 + C67 * C554) * C13739 +
                    (C185 * C454 + C67 * C604) * C7674) *
                       C68 * C61 * C7671) *
                  C14886) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C14929 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C14936 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C7674) *
                       C14840 +
                   (((C185 * C384 + C67 * C549) * C152 +
                     (C185 * C501 + C67 * C645) * C14886) *
                        C68 * C61 * C14936 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C14929 -
                    ((C185 * C502 + C67 * C646) * C14886 +
                     (C185 * C388 + C67 * C553) * C152) *
                        C68 * C61 * C7674) *
                       C14848 +
                   (((C185 * C79 + C67 * C188) * C152 +
                     (C185 * C155 + C67 * C247) * C14886) *
                        C68 * C61 * C14929 -
                    ((C185 * C503 + C67 * C647) * C14886 +
                     (C185 * C386 + C67 * C551) * C152) *
                        C68 * C61 * C14936 +
                    ((C185 * C389 + C67 * C554) * C152 +
                     (C185 * C504 + C67 * C648) * C14886) *
                        C68 * C61 * C7674) *
                       C7671)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C13585 +
                    (C272 * C83 + C68 * C278) * C14840 -
                    (C272 * C78 + C68 * C274) * C13581 -
                    (C272 * C85 + C68 * C279) * C14848 +
                    (C272 * C79 + C68 * C275) * C13591 +
                    (C272 * C87 + C68 * C280) * C7671) *
                       C61 * C67 * C14886 * C14929 +
                   ((C272 * C384 + C68 * C687) * C13581 -
                    ((C272 * C391 + C68 * C693) * C14840 +
                     (C272 * C385 + C68 * C688) * C13585) +
                    (C272 * C393 + C68 * C694) * C14848 -
                    (C272 * C386 + C68 * C689) * C13591 -
                    (C272 * C395 + C68 * C695) * C7671) *
                       C61 * C67 * C14886 * C14936 +
                   ((C272 * C387 + C68 * C690) * C13585 +
                    (C272 * C397 + C68 * C696) * C14840 -
                    (C272 * C388 + C68 * C691) * C13581 -
                    (C272 * C399 + C68 * C697) * C14848 +
                    (C272 * C389 + C68 * C692) * C13591 +
                    (C272 * C401 + C68 * C698) * C7671) *
                       C61 * C67 * C14886 * C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C13733 +
                    (C272 * C120 + C68 * C305) * C14929 -
                    (C272 * C385 + C68 * C688) * C13725 -
                    (C272 * C449 + C68 * C737) * C14936 +
                    (C272 * C387 + C68 * C690) * C13739 +
                    (C272 * C450 + C68 * C738) * C7674) *
                       C61 * C67 * C14840 +
                   ((C272 * C384 + C68 * C687) * C13725 -
                    ((C272 * C121 + C68 * C306) * C14929 +
                     (C272 * C78 + C68 * C274) * C13733) +
                    (C272 * C451 + C68 * C739) * C14936 -
                    (C272 * C388 + C68 * C691) * C13739 -
                    (C272 * C452 + C68 * C740) * C7674) *
                       C61 * C67 * C14848 +
                   ((C272 * C79 + C68 * C275) * C13733 +
                    (C272 * C122 + C68 * C307) * C14929 -
                    (C272 * C386 + C68 * C689) * C13725 -
                    (C272 * C453 + C68 * C741) * C14936 +
                    (C272 * C389 + C68 * C692) * C13739 +
                    (C272 * C454 + C68 * C742) * C7674) *
                       C61 * C67 * C7671) *
                  C14886) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C14929 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C14936 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C7674) *
                       C14840 +
                   (((C272 * C384 + C68 * C687) * C152 +
                     (C272 * C501 + C68 * C783) * C14886) *
                        C61 * C67 * C14936 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C14929 -
                    ((C272 * C502 + C68 * C784) * C14886 +
                     (C272 * C388 + C68 * C691) * C152) *
                        C61 * C67 * C7674) *
                       C14848 +
                   (((C272 * C79 + C68 * C275) * C152 +
                     (C272 * C155 + C68 * C334) * C14886) *
                        C61 * C67 * C14929 -
                    ((C272 * C503 + C68 * C785) * C14886 +
                     (C272 * C386 + C68 * C689) * C152) *
                        C61 * C67 * C14936 +
                    ((C272 * C389 + C68 * C692) * C152 +
                     (C272 * C504 + C68 * C786) * C14886) *
                        C61 * C67 * C7674) *
                       C7671)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
            (C71 * C78 + C61 * C84) * C6904 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C828 + C61 * C834) * C6904 -
            ((C71 * C835 + C61 * C846) * C6897 +
             (C71 * C829 + C61 * C836) * C6903) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C14973) *
              C14929 +
          (((C71 * C384 + C61 * C390) * C6904 -
            ((C71 * C391 + C61 * C402) * C6897 +
             (C71 * C385 + C61 * C392) * C6903) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C1941 + C61 * C1944) * C6903 +
            (C71 * C1945 + C61 * C1950) * C6897 -
            (C71 * C1942 + C61 * C1946) * C6904 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C14973) *
              C14936 +
          (((C71 * C387 + C61 * C396) * C6903 +
            (C71 * C397 + C61 * C405) * C6897 -
            (C71 * C388 + C61 * C398) * C6904 -
            (C71 * C399 + C61 * C406) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C3759 + C61 * C3760) * C6904 -
            ((C71 * C3028 + C61 * C3033) * C6897 +
             (C71 * C3024 + C61 * C3029) * C6903) +
            (C71 * C3761 + C61 * C3762) * C14845) *
               C67 * C68 * C14973) *
              C7674)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C13733 +
                     (C71 * C120 + C61 * C125) * C14929 -
                     (C71 * C385 + C61 * C392) * C13725 -
                     (C71 * C449 + C61 * C455) * C14936 +
                     (C71 * C387 + C61 * C396) * C13739 +
                     (C71 * C450 + C61 * C456) * C7674) *
                        C67 * C68 * C6897 +
                    ((C71 * C384 + C61 * C390) * C13725 -
                     ((C71 * C121 + C61 * C126) * C14929 +
                      (C71 * C78 + C61 * C84) * C13733) +
                     (C71 * C451 + C61 * C457) * C14936 -
                     (C71 * C388 + C61 * C398) * C13739 -
                     (C71 * C452 + C61 * C458) * C7674) *
                        C67 * C68 * C14845) *
                       C15154 +
                   (((C71 * C1941 + C61 * C1944) * C13725 -
                     ((C71 * C891 + C61 * C897) * C14929 +
                      (C71 * C829 + C61 * C836) * C13733) +
                     (C71 * C2003 + C61 * C2006) * C14936 -
                     (C71 * C3024 + C61 * C3029) * C13739 -
                     (C71 * C3073 + C61 * C3076) * C7674) *
                        C67 * C68 * C6897 +
                    ((C71 * C828 + C61 * C834) * C13733 +
                     (C71 * C890 + C61 * C896) * C14929 -
                     (C71 * C1942 + C61 * C1946) * C13725 -
                     (C71 * C2004 + C61 * C2007) * C14936 +
                     (C71 * C3759 + C61 * C3760) * C13739 +
                     (C71 * C3813 + C61 * C3814) * C7674) *
                        C67 * C68 * C14845) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C1675 +
                     (C71 * C153 + C61 * C158) * C15154 -
                     (C71 * C829 + C61 * C836) * C1676 -
                     (C71 * C943 + C61 * C949) * C14973) *
                        C67 * C68 * C14929 +
                    ((C71 * C1941 + C61 * C1944) * C1676 -
                     ((C71 * C499 + C61 * C505) * C15154 +
                      (C71 * C385 + C61 * C392) * C1675) +
                     (C71 * C2059 + C61 * C2062) * C14973) *
                        C67 * C68 * C14936 +
                    ((C71 * C387 + C61 * C396) * C1675 +
                     (C71 * C500 + C61 * C506) * C15154 -
                     (C71 * C3024 + C61 * C3029) * C1676 -
                     (C71 * C3118 + C61 * C3121) * C14973) *
                        C67 * C68 * C7674) *
                       C6897 +
                   (((C71 * C828 + C61 * C834) * C1676 -
                     ((C71 * C154 + C61 * C159) * C15154 +
                      (C71 * C78 + C61 * C84) * C1675) +
                     (C71 * C945 + C61 * C951) * C14973) *
                        C67 * C68 * C14929 +
                    ((C71 * C384 + C61 * C390) * C1675 +
                     (C71 * C501 + C61 * C507) * C15154 -
                     (C71 * C1942 + C61 * C1946) * C1676 -
                     (C71 * C2060 + C61 * C2063) * C14973) *
                        C67 * C68 * C14936 +
                    ((C71 * C3759 + C61 * C3760) * C1676 -
                     ((C71 * C502 + C61 * C508) * C15154 +
                      (C71 * C388 + C61 * C398) * C1675) +
                     (C71 * C3865 + C61 * C3866) * C14973) *
                        C67 * C68 * C7674) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6903 +
                     (C185 * C83 + C67 * C191) * C6897 -
                     (C185 * C78 + C67 * C187) * C6904 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C15154 +
                    ((C185 * C828 + C67 * C993) * C6904 -
                     ((C185 * C835 + C67 * C999) * C6897 +
                      (C185 * C829 + C67 * C994) * C6903) +
                     (C185 * C837 + C67 * C1000) * C14845) *
                        C68 * C61 * C14973) *
                       C14929 +
                   (((C185 * C384 + C67 * C549) * C6904 -
                     ((C185 * C391 + C67 * C555) * C6897 +
                      (C185 * C385 + C67 * C550) * C6903) +
                     (C185 * C393 + C67 * C556) * C14845) *
                        C68 * C61 * C15154 +
                    ((C185 * C1941 + C67 * C2115) * C6903 +
                     (C185 * C1945 + C67 * C2118) * C6897 -
                     (C185 * C1942 + C67 * C2116) * C6904 -
                     (C185 * C1947 + C67 * C2119) * C14845) *
                        C68 * C61 * C14973) *
                       C14936 +
                   (((C185 * C387 + C67 * C552) * C6903 +
                     (C185 * C397 + C67 * C558) * C6897 -
                     (C185 * C388 + C67 * C553) * C6904 -
                     (C185 * C399 + C67 * C559) * C14845) *
                        C68 * C61 * C15154 +
                    ((C185 * C3759 + C67 * C3917) * C6904 -
                     ((C185 * C3028 + C67 * C3165) * C6897 +
                      (C185 * C3024 + C67 * C3162) * C6903) +
                     (C185 * C3761 + C67 * C3918) * C14845) *
                        C68 * C61 * C14973) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C13733 +
                     (C185 * C120 + C67 * C218) * C14929 -
                     (C185 * C385 + C67 * C550) * C13725 -
                     (C185 * C449 + C67 * C599) * C14936 +
                     (C185 * C387 + C67 * C552) * C13739 +
                     (C185 * C450 + C67 * C600) * C7674) *
                        C68 * C61 * C6897 +
                    ((C185 * C384 + C67 * C549) * C13725 -
                     ((C185 * C121 + C67 * C219) * C14929 +
                      (C185 * C78 + C67 * C187) * C13733) +
                     (C185 * C451 + C67 * C601) * C14936 -
                     (C185 * C388 + C67 * C553) * C13739 -
                     (C185 * C452 + C67 * C602) * C7674) *
                        C68 * C61 * C14845) *
                       C15154 +
                   (((C185 * C1941 + C67 * C2115) * C13725 -
                     ((C185 * C891 + C67 * C1044) * C14929 +
                      (C185 * C829 + C67 * C994) * C13733) +
                     (C185 * C2003 + C67 * C2171) * C14936 -
                     (C185 * C3024 + C67 * C3162) * C13739 -
                     (C185 * C3073 + C67 * C3205) * C7674) *
                        C68 * C61 * C6897 +
                    ((C185 * C828 + C67 * C993) * C13733 +
                     (C185 * C890 + C67 * C1043) * C14929 -
                     (C185 * C1942 + C67 * C2116) * C13725 -
                     (C185 * C2004 + C67 * C2172) * C14936 +
                     (C185 * C3759 + C67 * C3917) * C13739 +
                     (C185 * C3813 + C67 * C3969) * C7674) *
                        C68 * C61 * C14845) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C1675 +
                     (C185 * C153 + C67 * C245) * C15154 -
                     (C185 * C829 + C67 * C994) * C1676 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C14929 +
                    ((C185 * C1941 + C67 * C2115) * C1676 -
                     ((C185 * C499 + C67 * C643) * C15154 +
                      (C185 * C385 + C67 * C550) * C1675) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C14936 +
                    ((C185 * C387 + C67 * C552) * C1675 +
                     (C185 * C500 + C67 * C644) * C15154 -
                     (C185 * C3024 + C67 * C3162) * C1676 -
                     (C185 * C3118 + C67 * C3247) * C14973) *
                        C68 * C61 * C7674) *
                       C6897 +
                   (((C185 * C828 + C67 * C993) * C1676 -
                     ((C185 * C154 + C67 * C246) * C15154 +
                      (C185 * C78 + C67 * C187) * C1675) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C14929 +
                    ((C185 * C384 + C67 * C549) * C1675 +
                     (C185 * C501 + C67 * C645) * C15154 -
                     (C185 * C1942 + C67 * C2116) * C1676 -
                     (C185 * C2060 + C67 * C2225) * C14973) *
                        C68 * C61 * C14936 +
                    ((C185 * C3759 + C67 * C3917) * C1676 -
                     ((C185 * C502 + C67 * C646) * C15154 +
                      (C185 * C388 + C67 * C553) * C1675) +
                     (C185 * C3865 + C67 * C4020) * C14973) *
                        C68 * C61 * C7674) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6903 +
                     (C272 * C83 + C68 * C278) * C6897 -
                     (C272 * C78 + C68 * C274) * C6904 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C15154 +
                    ((C272 * C828 + C68 * C1131) * C6904 -
                     ((C272 * C835 + C68 * C1137) * C6897 +
                      (C272 * C829 + C68 * C1132) * C6903) +
                     (C272 * C837 + C68 * C1138) * C14845) *
                        C61 * C67 * C14973) *
                       C14929 +
                   (((C272 * C384 + C68 * C687) * C6904 -
                     ((C272 * C391 + C68 * C693) * C6897 +
                      (C272 * C385 + C68 * C688) * C6903) +
                     (C272 * C393 + C68 * C694) * C14845) *
                        C61 * C67 * C15154 +
                    ((C272 * C1941 + C68 * C2277) * C6903 +
                     (C272 * C1945 + C68 * C2280) * C6897 -
                     (C272 * C1942 + C68 * C2278) * C6904 -
                     (C272 * C1947 + C68 * C2281) * C14845) *
                        C61 * C67 * C14973) *
                       C14936 +
                   (((C272 * C387 + C68 * C690) * C6903 +
                     (C272 * C397 + C68 * C696) * C6897 -
                     (C272 * C388 + C68 * C691) * C6904 -
                     (C272 * C399 + C68 * C697) * C14845) *
                        C61 * C67 * C15154 +
                    ((C272 * C3759 + C68 * C4071) * C6904 -
                     ((C272 * C3028 + C68 * C3291) * C6897 +
                      (C272 * C3024 + C68 * C3288) * C6903) +
                     (C272 * C3761 + C68 * C4072) * C14845) *
                        C61 * C67 * C14973) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C13733 +
                     (C272 * C120 + C68 * C305) * C14929 -
                     (C272 * C385 + C68 * C688) * C13725 -
                     (C272 * C449 + C68 * C737) * C14936 +
                     (C272 * C387 + C68 * C690) * C13739 +
                     (C272 * C450 + C68 * C738) * C7674) *
                        C61 * C67 * C6897 +
                    ((C272 * C384 + C68 * C687) * C13725 -
                     ((C272 * C121 + C68 * C306) * C14929 +
                      (C272 * C78 + C68 * C274) * C13733) +
                     (C272 * C451 + C68 * C739) * C14936 -
                     (C272 * C388 + C68 * C691) * C13739 -
                     (C272 * C452 + C68 * C740) * C7674) *
                        C61 * C67 * C14845) *
                       C15154 +
                   (((C272 * C1941 + C68 * C2277) * C13725 -
                     ((C272 * C891 + C68 * C1182) * C14929 +
                      (C272 * C829 + C68 * C1132) * C13733) +
                     (C272 * C2003 + C68 * C2333) * C14936 -
                     (C272 * C3024 + C68 * C3288) * C13739 -
                     (C272 * C3073 + C68 * C3331) * C7674) *
                        C61 * C67 * C6897 +
                    ((C272 * C828 + C68 * C1131) * C13733 +
                     (C272 * C890 + C68 * C1181) * C14929 -
                     (C272 * C1942 + C68 * C2278) * C13725 -
                     (C272 * C2004 + C68 * C2334) * C14936 +
                     (C272 * C3759 + C68 * C4071) * C13739 +
                     (C272 * C3813 + C68 * C4123) * C7674) *
                        C61 * C67 * C14845) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C1675 +
                     (C272 * C153 + C68 * C332) * C15154 -
                     (C272 * C829 + C68 * C1132) * C1676 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C14929 +
                    ((C272 * C1941 + C68 * C2277) * C1676 -
                     ((C272 * C499 + C68 * C781) * C15154 +
                      (C272 * C385 + C68 * C688) * C1675) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C14936 +
                    ((C272 * C387 + C68 * C690) * C1675 +
                     (C272 * C500 + C68 * C782) * C15154 -
                     (C272 * C3024 + C68 * C3288) * C1676 -
                     (C272 * C3118 + C68 * C3373) * C14973) *
                        C61 * C67 * C7674) *
                       C6897 +
                   (((C272 * C828 + C68 * C1131) * C1676 -
                     ((C272 * C154 + C68 * C333) * C15154 +
                      (C272 * C78 + C68 * C274) * C1675) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C14929 +
                    ((C272 * C384 + C68 * C687) * C1675 +
                     (C272 * C501 + C68 * C783) * C15154 -
                     (C272 * C1942 + C68 * C2278) * C1676 -
                     (C272 * C2060 + C68 * C2387) * C14973) *
                        C61 * C67 * C14936 +
                    ((C272 * C3759 + C68 * C4071) * C1676 -
                     ((C272 * C502 + C68 * C784) * C15154 +
                      (C272 * C388 + C68 * C691) * C1675) +
                     (C272 * C3865 + C68 * C4174) * C14973) *
                        C61 * C67 * C7674) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
           (C71 * C78 + C61 * C84) * C6904 - (C71 * C85 + C61 * C93) * C14845) *
              C67 * C68 * C14886 * C15221 +
          ((C71 * C384 + C61 * C390) * C6904 -
           ((C71 * C391 + C61 * C402) * C6897 +
            (C71 * C385 + C61 * C392) * C6903) +
           (C71 * C393 + C61 * C403) * C14845) *
              C67 * C68 * C14886 * C15217 +
          ((C71 * C387 + C61 * C396) * C6903 +
           (C71 * C397 + C61 * C405) * C6897 -
           (C71 * C388 + C61 * C398) * C6904 -
           (C71 * C399 + C61 * C406) * C14845) *
              C67 * C68 * C14886 * C15207 +
          ((C71 * C3417 + C61 * C3418) * C6904 -
           ((C71 * C2774 + C61 * C2778) * C6897 +
            (C71 * C2772 + C61 * C2775) * C6903) +
           (C71 * C3419 + C61 * C3420) * C14845) *
              C67 * C68 * C14886 * C15189)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6585 + (C71 * C83 + C61 * C92) * C15220 -
           (C71 * C78 + C61 * C84) * C6586 - (C71 * C85 + C61 * C93) * C15213 +
           (C71 * C79 + C61 * C86) * C6587 + (C71 * C87 + C61 * C94) * C15200 -
           (C71 * C80 + C61 * C88) * C6588 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C14886 * C6583 +
          ((C71 * C384 + C61 * C390) * C6586 -
           ((C71 * C391 + C61 * C402) * C15220 +
            (C71 * C385 + C61 * C392) * C6585) +
           (C71 * C393 + C61 * C403) * C15213 -
           (C71 * C386 + C61 * C394) * C6587 -
           (C71 * C395 + C61 * C404) * C15200 +
           (C71 * C1275 + C61 * C1276) * C6588 +
           (C71 * C1277 + C61 * C1278) * C15183) *
              C67 * C68 * C14886 * C14933)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
            (C71 * C78 + C61 * C84) * C6904 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C15215 +
           ((C71 * C828 + C61 * C834) * C6904 -
            ((C71 * C835 + C61 * C846) * C6897 +
             (C71 * C829 + C61 * C836) * C6903) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C15204 +
           ((C71 * C831 + C61 * C840) * C6903 +
            (C71 * C841 + C61 * C849) * C6897 -
            (C71 * C832 + C61 * C842) * C6904 -
            (C71 * C843 + C61 * C850) * C14845) *
               C67 * C68 * C15182) *
              C6583 +
          (((C71 * C384 + C61 * C390) * C6904 -
            ((C71 * C391 + C61 * C402) * C6897 +
             (C71 * C385 + C61 * C392) * C6903) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C15215 +
           ((C71 * C1941 + C61 * C1944) * C6903 +
            (C71 * C1945 + C61 * C1950) * C6897 -
            (C71 * C1942 + C61 * C1946) * C6904 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C15204 +
           ((C71 * C5477 + C61 * C5478) * C6904 -
            ((C71 * C3026 + C61 * C3032) * C6897 +
             (C71 * C3023 + C61 * C3027) * C6903) +
            (C71 * C5479 + C61 * C5480) * C14845) *
               C67 * C68 * C15182) *
              C14933)) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6939 +
           (C71 * C120 + C61 * C125) * C15221 -
           (C71 * C385 + C61 * C392) * C6940 -
           (C71 * C449 + C61 * C455) * C15217 +
           (C71 * C387 + C61 * C396) * C6941 +
           (C71 * C450 + C61 * C456) * C15207 -
           (C71 * C2772 + C61 * C2775) * C6942 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C6897 +
          ((C71 * C384 + C61 * C390) * C6940 -
           ((C71 * C121 + C61 * C126) * C15221 +
            (C71 * C78 + C61 * C84) * C6939) +
           (C71 * C451 + C61 * C457) * C15217 -
           (C71 * C388 + C61 * C398) * C6941 -
           (C71 * C452 + C61 * C458) * C15207 +
           (C71 * C3417 + C61 * C3418) * C6942 +
           (C71 * C3459 + C61 * C3460) * C15189) *
              C67 * C68 * C14845) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6623 + (C71 * C120 + C61 * C125) * C6583 -
           (C71 * C385 + C61 * C392) * C6624 -
           (C71 * C449 + C61 * C455) * C14933) *
              C67 * C68 * C15220 +
          ((C71 * C384 + C61 * C390) * C6624 -
           ((C71 * C121 + C61 * C126) * C6583 +
            (C71 * C78 + C61 * C84) * C6623) +
           (C71 * C451 + C61 * C457) * C14933) *
              C67 * C68 * C15213 +
          ((C71 * C79 + C61 * C86) * C6623 + (C71 * C122 + C61 * C127) * C6583 -
           (C71 * C386 + C61 * C394) * C6624 -
           (C71 * C453 + C61 * C459) * C14933) *
              C67 * C68 * C15200 +
          ((C71 * C1275 + C61 * C1276) * C6624 -
           ((C71 * C123 + C61 * C128) * C6583 +
            (C71 * C80 + C61 * C88) * C6623) +
           (C71 * C1315 + C61 * C1316) * C14933) *
              C67 * C68 * C15183) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6623 +
            (C71 * C120 + C61 * C125) * C6583 -
            (C71 * C385 + C61 * C392) * C6624 -
            (C71 * C449 + C61 * C455) * C14933) *
               C67 * C68 * C6897 +
           ((C71 * C384 + C61 * C390) * C6624 -
            ((C71 * C121 + C61 * C126) * C6583 +
             (C71 * C78 + C61 * C84) * C6623) +
            (C71 * C451 + C61 * C457) * C14933) *
               C67 * C68 * C14845) *
              C15215 +
          (((C71 * C1941 + C61 * C1944) * C6624 -
            ((C71 * C891 + C61 * C897) * C6583 +
             (C71 * C829 + C61 * C836) * C6623) +
            (C71 * C2003 + C61 * C2006) * C14933) *
               C67 * C68 * C6897 +
           ((C71 * C828 + C61 * C834) * C6623 +
            (C71 * C890 + C61 * C896) * C6583 -
            (C71 * C1942 + C61 * C1946) * C6624 -
            (C71 * C2004 + C61 * C2007) * C14933) *
               C67 * C68 * C14845) *
              C15204 +
          (((C71 * C831 + C61 * C840) * C6623 +
            (C71 * C893 + C61 * C899) * C6583 -
            (C71 * C3023 + C61 * C3027) * C6624 -
            (C71 * C3074 + C61 * C3077) * C14933) *
               C67 * C68 * C6897 +
           ((C71 * C5477 + C61 * C5478) * C6624 -
            ((C71 * C894 + C61 * C900) * C6583 +
             (C71 * C832 + C61 * C842) * C6623) +
            (C71 * C5531 + C61 * C5532) * C14933) *
               C67 * C68 * C14845) *
              C15182)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C15221 -
                    ((C71 * C499 + C61 * C505) * C14886 +
                     (C71 * C385 + C61 * C392) * C152) *
                        C67 * C68 * C15217 +
                    ((C71 * C387 + C61 * C396) * C152 +
                     (C71 * C500 + C61 * C506) * C14886) *
                        C67 * C68 * C15207 -
                    ((C71 * C2833 + C61 * C2835) * C14886 +
                     (C71 * C2772 + C61 * C2775) * C152) *
                        C67 * C68 * C15189) *
                       C6897 +
                   (((C71 * C384 + C61 * C390) * C152 +
                     (C71 * C501 + C61 * C507) * C14886) *
                        C67 * C68 * C15217 -
                    ((C71 * C154 + C61 * C159) * C14886 +
                     (C71 * C78 + C61 * C84) * C152) *
                        C67 * C68 * C15221 -
                    ((C71 * C502 + C61 * C508) * C14886 +
                     (C71 * C388 + C61 * C398) * C152) *
                        C67 * C68 * C15207 +
                    ((C71 * C3417 + C61 * C3418) * C152 +
                     (C71 * C3495 + C61 * C3496) * C14886) *
                        C67 * C68 * C15189) *
                       C14845)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C6583 -
                    ((C71 * C499 + C61 * C505) * C14886 +
                     (C71 * C385 + C61 * C392) * C152) *
                        C67 * C68 * C14933) *
                       C15220 +
                   (((C71 * C384 + C61 * C390) * C152 +
                     (C71 * C501 + C61 * C507) * C14886) *
                        C67 * C68 * C14933 -
                    ((C71 * C154 + C61 * C159) * C14886 +
                     (C71 * C78 + C61 * C84) * C152) *
                        C67 * C68 * C6583) *
                       C15213 +
                   (((C71 * C79 + C61 * C86) * C152 +
                     (C71 * C155 + C61 * C160) * C14886) *
                        C67 * C68 * C6583 -
                    ((C71 * C503 + C61 * C509) * C14886 +
                     (C71 * C386 + C61 * C394) * C152) *
                        C67 * C68 * C14933) *
                       C15200 +
                   (((C71 * C1275 + C61 * C1276) * C152 +
                     (C71 * C1351 + C61 * C1352) * C14886) *
                        C67 * C68 * C14933 -
                    ((C71 * C156 + C61 * C161) * C14886 +
                     (C71 * C80 + C61 * C88) * C152) *
                        C67 * C68 * C6583) *
                       C15183)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C940 +
                     (C71 * C153 + C61 * C158) * C15215 -
                     (C71 * C829 + C61 * C836) * C941 -
                     (C71 * C943 + C61 * C949) * C15204 +
                     (C71 * C831 + C61 * C840) * C942 +
                     (C71 * C944 + C61 * C950) * C15182) *
                        C67 * C68 * C6583 +
                    ((C71 * C1941 + C61 * C1944) * C941 -
                     ((C71 * C499 + C61 * C505) * C15215 +
                      (C71 * C385 + C61 * C392) * C940) +
                     (C71 * C2059 + C61 * C2062) * C15204 -
                     (C71 * C3023 + C61 * C3027) * C942 -
                     (C71 * C3117 + C61 * C3120) * C15182) *
                        C67 * C68 * C14933) *
                       C6897 +
                   (((C71 * C828 + C61 * C834) * C941 -
                     ((C71 * C154 + C61 * C159) * C15215 +
                      (C71 * C78 + C61 * C84) * C940) +
                     (C71 * C945 + C61 * C951) * C15204 -
                     (C71 * C832 + C61 * C842) * C942 -
                     (C71 * C946 + C61 * C952) * C15182) *
                        C67 * C68 * C6583 +
                    ((C71 * C384 + C61 * C390) * C940 +
                     (C71 * C501 + C61 * C507) * C15215 -
                     (C71 * C1942 + C61 * C1946) * C941 -
                     (C71 * C2060 + C61 * C2063) * C15204 +
                     (C71 * C5477 + C61 * C5478) * C942 +
                     (C71 * C5583 + C61 * C5584) * C15182) *
                        C67 * C68 * C14933) *
                       C14845)) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6903 +
                    (C185 * C83 + C67 * C191) * C6897 -
                    (C185 * C78 + C67 * C187) * C6904 -
                    (C185 * C85 + C67 * C192) * C14845) *
                       C68 * C61 * C14886 * C15221 +
                   ((C185 * C384 + C67 * C549) * C6904 -
                    ((C185 * C391 + C67 * C555) * C6897 +
                     (C185 * C385 + C67 * C550) * C6903) +
                    (C185 * C393 + C67 * C556) * C14845) *
                       C68 * C61 * C14886 * C15217 +
                   ((C185 * C387 + C67 * C552) * C6903 +
                    (C185 * C397 + C67 * C558) * C6897 -
                    (C185 * C388 + C67 * C553) * C6904 -
                    (C185 * C399 + C67 * C559) * C14845) *
                       C68 * C61 * C14886 * C15207 +
                   ((C185 * C3417 + C67 * C3531) * C6904 -
                    ((C185 * C2774 + C67 * C2861) * C6897 +
                     (C185 * C2772 + C67 * C2859) * C6903) +
                    (C185 * C3419 + C67 * C3532) * C14845) *
                       C68 * C61 * C14886 * C15189)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6585 +
                    (C185 * C83 + C67 * C191) * C15220 -
                    (C185 * C78 + C67 * C187) * C6586 -
                    (C185 * C85 + C67 * C192) * C15213 +
                    (C185 * C79 + C67 * C188) * C6587 +
                    (C185 * C87 + C67 * C193) * C15200 -
                    (C185 * C80 + C67 * C189) * C6588 -
                    (C185 * C89 + C67 * C194) * C15183) *
                       C68 * C61 * C14886 * C6583 +
                   ((C185 * C384 + C67 * C549) * C6586 -
                    ((C185 * C391 + C67 * C555) * C15220 +
                     (C185 * C385 + C67 * C550) * C6585) +
                    (C185 * C393 + C67 * C556) * C15213 -
                    (C185 * C386 + C67 * C551) * C6587 -
                    (C185 * C395 + C67 * C557) * C15200 +
                    (C185 * C1275 + C67 * C1387) * C6588 +
                    (C185 * C1277 + C67 * C1388) * C15183) *
                       C68 * C61 * C14886 * C14933)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6903 +
                     (C185 * C83 + C67 * C191) * C6897 -
                     (C185 * C78 + C67 * C187) * C6904 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C15215 +
                    ((C185 * C828 + C67 * C993) * C6904 -
                     ((C185 * C835 + C67 * C999) * C6897 +
                      (C185 * C829 + C67 * C994) * C6903) +
                     (C185 * C837 + C67 * C1000) * C14845) *
                        C68 * C61 * C15204 +
                    ((C185 * C831 + C67 * C996) * C6903 +
                     (C185 * C841 + C67 * C1002) * C6897 -
                     (C185 * C832 + C67 * C997) * C6904 -
                     (C185 * C843 + C67 * C1003) * C14845) *
                        C68 * C61 * C15182) *
                       C6583 +
                   (((C185 * C384 + C67 * C549) * C6904 -
                     ((C185 * C391 + C67 * C555) * C6897 +
                      (C185 * C385 + C67 * C550) * C6903) +
                     (C185 * C393 + C67 * C556) * C14845) *
                        C68 * C61 * C15215 +
                    ((C185 * C1941 + C67 * C2115) * C6903 +
                     (C185 * C1945 + C67 * C2118) * C6897 -
                     (C185 * C1942 + C67 * C2116) * C6904 -
                     (C185 * C1947 + C67 * C2119) * C14845) *
                        C68 * C61 * C15204 +
                    ((C185 * C5477 + C67 * C5635) * C6904 -
                     ((C185 * C3026 + C67 * C3164) * C6897 +
                      (C185 * C3023 + C67 * C3161) * C6903) +
                     (C185 * C5479 + C67 * C5636) * C14845) *
                        C68 * C61 * C15182) *
                       C14933)) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6939 +
                    (C185 * C120 + C67 * C218) * C15221 -
                    (C185 * C385 + C67 * C550) * C6940 -
                    (C185 * C449 + C67 * C599) * C15217 +
                    (C185 * C387 + C67 * C552) * C6941 +
                    (C185 * C450 + C67 * C600) * C15207 -
                    (C185 * C2772 + C67 * C2859) * C6942 -
                    (C185 * C2807 + C67 * C2885) * C15189) *
                       C68 * C61 * C6897 +
                   ((C185 * C384 + C67 * C549) * C6940 -
                    ((C185 * C121 + C67 * C219) * C15221 +
                     (C185 * C78 + C67 * C187) * C6939) +
                    (C185 * C451 + C67 * C601) * C15217 -
                    (C185 * C388 + C67 * C553) * C6941 -
                    (C185 * C452 + C67 * C602) * C15207 +
                    (C185 * C3417 + C67 * C3531) * C6942 +
                    (C185 * C3459 + C67 * C3567) * C15189) *
                       C68 * C61 * C14845) *
                  C14886) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6623 +
                    (C185 * C120 + C67 * C218) * C6583 -
                    (C185 * C385 + C67 * C550) * C6624 -
                    (C185 * C449 + C67 * C599) * C14933) *
                       C68 * C61 * C15220 +
                   ((C185 * C384 + C67 * C549) * C6624 -
                    ((C185 * C121 + C67 * C219) * C6583 +
                     (C185 * C78 + C67 * C187) * C6623) +
                    (C185 * C451 + C67 * C601) * C14933) *
                       C68 * C61 * C15213 +
                   ((C185 * C79 + C67 * C188) * C6623 +
                    (C185 * C122 + C67 * C220) * C6583 -
                    (C185 * C386 + C67 * C551) * C6624 -
                    (C185 * C453 + C67 * C603) * C14933) *
                       C68 * C61 * C15200 +
                   ((C185 * C1275 + C67 * C1387) * C6624 -
                    ((C185 * C123 + C67 * C221) * C6583 +
                     (C185 * C80 + C67 * C189) * C6623) +
                    (C185 * C1315 + C67 * C1423) * C14933) *
                       C68 * C61 * C15183) *
                  C14886) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6623 +
                     (C185 * C120 + C67 * C218) * C6583 -
                     (C185 * C385 + C67 * C550) * C6624 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C6897 +
                    ((C185 * C384 + C67 * C549) * C6624 -
                     ((C185 * C121 + C67 * C219) * C6583 +
                      (C185 * C78 + C67 * C187) * C6623) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C14845) *
                       C15215 +
                   (((C185 * C1941 + C67 * C2115) * C6624 -
                     ((C185 * C891 + C67 * C1044) * C6583 +
                      (C185 * C829 + C67 * C994) * C6623) +
                     (C185 * C2003 + C67 * C2171) * C14933) *
                        C68 * C61 * C6897 +
                    ((C185 * C828 + C67 * C993) * C6623 +
                     (C185 * C890 + C67 * C1043) * C6583 -
                     (C185 * C1942 + C67 * C2116) * C6624 -
                     (C185 * C2004 + C67 * C2172) * C14933) *
                        C68 * C61 * C14845) *
                       C15204 +
                   (((C185 * C831 + C67 * C996) * C6623 +
                     (C185 * C893 + C67 * C1046) * C6583 -
                     (C185 * C3023 + C67 * C3161) * C6624 -
                     (C185 * C3074 + C67 * C3206) * C14933) *
                        C68 * C61 * C6897 +
                    ((C185 * C5477 + C67 * C5635) * C6624 -
                     ((C185 * C894 + C67 * C1047) * C6583 +
                      (C185 * C832 + C67 * C997) * C6623) +
                     (C185 * C5531 + C67 * C5687) * C14933) *
                        C68 * C61 * C14845) *
                       C15182)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C15221 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C15217 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C15207 -
                    ((C185 * C2833 + C67 * C2909) * C14886 +
                     (C185 * C2772 + C67 * C2859) * C152) *
                        C68 * C61 * C15189) *
                       C6897 +
                   (((C185 * C384 + C67 * C549) * C152 +
                     (C185 * C501 + C67 * C645) * C14886) *
                        C68 * C61 * C15217 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C15221 -
                    ((C185 * C502 + C67 * C646) * C14886 +
                     (C185 * C388 + C67 * C553) * C152) *
                        C68 * C61 * C15207 +
                    ((C185 * C3417 + C67 * C3531) * C152 +
                     (C185 * C3495 + C67 * C3602) * C14886) *
                        C68 * C61 * C15189) *
                       C14845)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C6583 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C14933) *
                       C15220 +
                   (((C185 * C384 + C67 * C549) * C152 +
                     (C185 * C501 + C67 * C645) * C14886) *
                        C68 * C61 * C14933 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C6583) *
                       C15213 +
                   (((C185 * C79 + C67 * C188) * C152 +
                     (C185 * C155 + C67 * C247) * C14886) *
                        C68 * C61 * C6583 -
                    ((C185 * C503 + C67 * C647) * C14886 +
                     (C185 * C386 + C67 * C551) * C152) *
                        C68 * C61 * C14933) *
                       C15200 +
                   (((C185 * C1275 + C67 * C1387) * C152 +
                     (C185 * C1351 + C67 * C1458) * C14886) *
                        C68 * C61 * C14933 -
                    ((C185 * C156 + C67 * C248) * C14886 +
                     (C185 * C80 + C67 * C189) * C152) *
                        C68 * C61 * C6583) *
                       C15183)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C940 +
                     (C185 * C153 + C67 * C245) * C15215 -
                     (C185 * C829 + C67 * C994) * C941 -
                     (C185 * C943 + C67 * C1087) * C15204 +
                     (C185 * C831 + C67 * C996) * C942 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C6583 +
                    ((C185 * C1941 + C67 * C2115) * C941 -
                     ((C185 * C499 + C67 * C643) * C15215 +
                      (C185 * C385 + C67 * C550) * C940) +
                     (C185 * C2059 + C67 * C2224) * C15204 -
                     (C185 * C3023 + C67 * C3161) * C942 -
                     (C185 * C3117 + C67 * C3246) * C15182) *
                        C68 * C61 * C14933) *
                       C6897 +
                   (((C185 * C828 + C67 * C993) * C941 -
                     ((C185 * C154 + C67 * C246) * C15215 +
                      (C185 * C78 + C67 * C187) * C940) +
                     (C185 * C945 + C67 * C1089) * C15204 -
                     (C185 * C832 + C67 * C997) * C942 -
                     (C185 * C946 + C67 * C1090) * C15182) *
                        C68 * C61 * C6583 +
                    ((C185 * C384 + C67 * C549) * C940 +
                     (C185 * C501 + C67 * C645) * C15215 -
                     (C185 * C1942 + C67 * C2116) * C941 -
                     (C185 * C2060 + C67 * C2225) * C15204 +
                     (C185 * C5477 + C67 * C5635) * C942 +
                     (C185 * C5583 + C67 * C5738) * C15182) *
                        C68 * C61 * C14933) *
                       C14845)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6903 +
                    (C272 * C83 + C68 * C278) * C6897 -
                    (C272 * C78 + C68 * C274) * C6904 -
                    (C272 * C85 + C68 * C279) * C14845) *
                       C61 * C67 * C14886 * C15221 +
                   ((C272 * C384 + C68 * C687) * C6904 -
                    ((C272 * C391 + C68 * C693) * C6897 +
                     (C272 * C385 + C68 * C688) * C6903) +
                    (C272 * C393 + C68 * C694) * C14845) *
                       C61 * C67 * C14886 * C15217 +
                   ((C272 * C387 + C68 * C690) * C6903 +
                    (C272 * C397 + C68 * C696) * C6897 -
                    (C272 * C388 + C68 * C691) * C6904 -
                    (C272 * C399 + C68 * C697) * C14845) *
                       C61 * C67 * C14886 * C15207 +
                   ((C272 * C3417 + C68 * C3637) * C6904 -
                    ((C272 * C2774 + C68 * C2935) * C6897 +
                     (C272 * C2772 + C68 * C2933) * C6903) +
                    (C272 * C3419 + C68 * C3638) * C14845) *
                       C61 * C67 * C14886 * C15189)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6585 +
                    (C272 * C83 + C68 * C278) * C15220 -
                    (C272 * C78 + C68 * C274) * C6586 -
                    (C272 * C85 + C68 * C279) * C15213 +
                    (C272 * C79 + C68 * C275) * C6587 +
                    (C272 * C87 + C68 * C280) * C15200 -
                    (C272 * C80 + C68 * C276) * C6588 -
                    (C272 * C89 + C68 * C281) * C15183) *
                       C61 * C67 * C14886 * C6583 +
                   ((C272 * C384 + C68 * C687) * C6586 -
                    ((C272 * C391 + C68 * C693) * C15220 +
                     (C272 * C385 + C68 * C688) * C6585) +
                    (C272 * C393 + C68 * C694) * C15213 -
                    (C272 * C386 + C68 * C689) * C6587 -
                    (C272 * C395 + C68 * C695) * C15200 +
                    (C272 * C1275 + C68 * C1493) * C6588 +
                    (C272 * C1277 + C68 * C1494) * C15183) *
                       C61 * C67 * C14886 * C14933)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6903 +
                     (C272 * C83 + C68 * C278) * C6897 -
                     (C272 * C78 + C68 * C274) * C6904 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C15215 +
                    ((C272 * C828 + C68 * C1131) * C6904 -
                     ((C272 * C835 + C68 * C1137) * C6897 +
                      (C272 * C829 + C68 * C1132) * C6903) +
                     (C272 * C837 + C68 * C1138) * C14845) *
                        C61 * C67 * C15204 +
                    ((C272 * C831 + C68 * C1134) * C6903 +
                     (C272 * C841 + C68 * C1140) * C6897 -
                     (C272 * C832 + C68 * C1135) * C6904 -
                     (C272 * C843 + C68 * C1141) * C14845) *
                        C61 * C67 * C15182) *
                       C6583 +
                   (((C272 * C384 + C68 * C687) * C6904 -
                     ((C272 * C391 + C68 * C693) * C6897 +
                      (C272 * C385 + C68 * C688) * C6903) +
                     (C272 * C393 + C68 * C694) * C14845) *
                        C61 * C67 * C15215 +
                    ((C272 * C1941 + C68 * C2277) * C6903 +
                     (C272 * C1945 + C68 * C2280) * C6897 -
                     (C272 * C1942 + C68 * C2278) * C6904 -
                     (C272 * C1947 + C68 * C2281) * C14845) *
                        C61 * C67 * C15204 +
                    ((C272 * C5477 + C68 * C5789) * C6904 -
                     ((C272 * C3026 + C68 * C3290) * C6897 +
                      (C272 * C3023 + C68 * C3287) * C6903) +
                     (C272 * C5479 + C68 * C5790) * C14845) *
                        C61 * C67 * C15182) *
                       C14933)) /
                     (p * q * std::sqrt(p + q));
    d2eezy[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6939 +
                    (C272 * C120 + C68 * C305) * C15221 -
                    (C272 * C385 + C68 * C688) * C6940 -
                    (C272 * C449 + C68 * C737) * C15217 +
                    (C272 * C387 + C68 * C690) * C6941 +
                    (C272 * C450 + C68 * C738) * C15207 -
                    (C272 * C2772 + C68 * C2933) * C6942 -
                    (C272 * C2807 + C68 * C2959) * C15189) *
                       C61 * C67 * C6897 +
                   ((C272 * C384 + C68 * C687) * C6940 -
                    ((C272 * C121 + C68 * C306) * C15221 +
                     (C272 * C78 + C68 * C274) * C6939) +
                    (C272 * C451 + C68 * C739) * C15217 -
                    (C272 * C388 + C68 * C691) * C6941 -
                    (C272 * C452 + C68 * C740) * C15207 +
                    (C272 * C3417 + C68 * C3637) * C6942 +
                    (C272 * C3459 + C68 * C3673) * C15189) *
                       C61 * C67 * C14845) *
                  C14886) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6623 +
                    (C272 * C120 + C68 * C305) * C6583 -
                    (C272 * C385 + C68 * C688) * C6624 -
                    (C272 * C449 + C68 * C737) * C14933) *
                       C61 * C67 * C15220 +
                   ((C272 * C384 + C68 * C687) * C6624 -
                    ((C272 * C121 + C68 * C306) * C6583 +
                     (C272 * C78 + C68 * C274) * C6623) +
                    (C272 * C451 + C68 * C739) * C14933) *
                       C61 * C67 * C15213 +
                   ((C272 * C79 + C68 * C275) * C6623 +
                    (C272 * C122 + C68 * C307) * C6583 -
                    (C272 * C386 + C68 * C689) * C6624 -
                    (C272 * C453 + C68 * C741) * C14933) *
                       C61 * C67 * C15200 +
                   ((C272 * C1275 + C68 * C1493) * C6624 -
                    ((C272 * C123 + C68 * C308) * C6583 +
                     (C272 * C80 + C68 * C276) * C6623) +
                    (C272 * C1315 + C68 * C1529) * C14933) *
                       C61 * C67 * C15183) *
                  C14886) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6623 +
                     (C272 * C120 + C68 * C305) * C6583 -
                     (C272 * C385 + C68 * C688) * C6624 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C6897 +
                    ((C272 * C384 + C68 * C687) * C6624 -
                     ((C272 * C121 + C68 * C306) * C6583 +
                      (C272 * C78 + C68 * C274) * C6623) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C14845) *
                       C15215 +
                   (((C272 * C1941 + C68 * C2277) * C6624 -
                     ((C272 * C891 + C68 * C1182) * C6583 +
                      (C272 * C829 + C68 * C1132) * C6623) +
                     (C272 * C2003 + C68 * C2333) * C14933) *
                        C61 * C67 * C6897 +
                    ((C272 * C828 + C68 * C1131) * C6623 +
                     (C272 * C890 + C68 * C1181) * C6583 -
                     (C272 * C1942 + C68 * C2278) * C6624 -
                     (C272 * C2004 + C68 * C2334) * C14933) *
                        C61 * C67 * C14845) *
                       C15204 +
                   (((C272 * C831 + C68 * C1134) * C6623 +
                     (C272 * C893 + C68 * C1184) * C6583 -
                     (C272 * C3023 + C68 * C3287) * C6624 -
                     (C272 * C3074 + C68 * C3332) * C14933) *
                        C61 * C67 * C6897 +
                    ((C272 * C5477 + C68 * C5789) * C6624 -
                     ((C272 * C894 + C68 * C1185) * C6583 +
                      (C272 * C832 + C68 * C1135) * C6623) +
                     (C272 * C5531 + C68 * C5841) * C14933) *
                        C61 * C67 * C14845) *
                       C15182)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C15221 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C15217 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C15207 -
                    ((C272 * C2833 + C68 * C2983) * C14886 +
                     (C272 * C2772 + C68 * C2933) * C152) *
                        C61 * C67 * C15189) *
                       C6897 +
                   (((C272 * C384 + C68 * C687) * C152 +
                     (C272 * C501 + C68 * C783) * C14886) *
                        C61 * C67 * C15217 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C15221 -
                    ((C272 * C502 + C68 * C784) * C14886 +
                     (C272 * C388 + C68 * C691) * C152) *
                        C61 * C67 * C15207 +
                    ((C272 * C3417 + C68 * C3637) * C152 +
                     (C272 * C3495 + C68 * C3708) * C14886) *
                        C61 * C67 * C15189) *
                       C14845)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C6583 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C14933) *
                       C15220 +
                   (((C272 * C384 + C68 * C687) * C152 +
                     (C272 * C501 + C68 * C783) * C14886) *
                        C61 * C67 * C14933 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C6583) *
                       C15213 +
                   (((C272 * C79 + C68 * C275) * C152 +
                     (C272 * C155 + C68 * C334) * C14886) *
                        C61 * C67 * C6583 -
                    ((C272 * C503 + C68 * C785) * C14886 +
                     (C272 * C386 + C68 * C689) * C152) *
                        C61 * C67 * C14933) *
                       C15200 +
                   (((C272 * C1275 + C68 * C1493) * C152 +
                     (C272 * C1351 + C68 * C1564) * C14886) *
                        C61 * C67 * C14933 -
                    ((C272 * C156 + C68 * C335) * C14886 +
                     (C272 * C80 + C68 * C276) * C152) *
                        C61 * C67 * C6583) *
                       C15183)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C940 +
                     (C272 * C153 + C68 * C332) * C15215 -
                     (C272 * C829 + C68 * C1132) * C941 -
                     (C272 * C943 + C68 * C1225) * C15204 +
                     (C272 * C831 + C68 * C1134) * C942 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C6583 +
                    ((C272 * C1941 + C68 * C2277) * C941 -
                     ((C272 * C499 + C68 * C781) * C15215 +
                      (C272 * C385 + C68 * C688) * C940) +
                     (C272 * C2059 + C68 * C2386) * C15204 -
                     (C272 * C3023 + C68 * C3287) * C942 -
                     (C272 * C3117 + C68 * C3372) * C15182) *
                        C61 * C67 * C14933) *
                       C6897 +
                   (((C272 * C828 + C68 * C1131) * C941 -
                     ((C272 * C154 + C68 * C333) * C15215 +
                      (C272 * C78 + C68 * C274) * C940) +
                     (C272 * C945 + C68 * C1227) * C15204 -
                     (C272 * C832 + C68 * C1135) * C942 -
                     (C272 * C946 + C68 * C1228) * C15182) *
                        C61 * C67 * C6583 +
                    ((C272 * C384 + C68 * C687) * C940 +
                     (C272 * C501 + C68 * C783) * C15215 -
                     (C272 * C1942 + C68 * C2278) * C941 -
                     (C272 * C2060 + C68 * C2387) * C15204 +
                     (C272 * C5477 + C68 * C5789) * C942 +
                     (C272 * C5583 + C68 * C5892) * C15182) *
                        C61 * C67 * C14933) *
                       C14845)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C13585 +
                     (C71 * C83 + C61 * C92) * C14840 -
                     (C71 * C78 + C61 * C84) * C13581 -
                     (C71 * C85 + C61 * C93) * C14848 +
                     (C71 * C79 + C61 * C86) * C13591 +
                     (C71 * C87 + C61 * C94) * C7671) *
                        C67 * C68 * C15154 +
                    ((C71 * C828 + C61 * C834) * C13581 -
                     ((C71 * C835 + C61 * C846) * C14840 +
                      (C71 * C829 + C61 * C836) * C13585) +
                     (C71 * C837 + C61 * C847) * C14848 -
                     (C71 * C830 + C61 * C838) * C13591 -
                     (C71 * C839 + C61 * C848) * C7671) *
                        C67 * C68 * C14973) *
                       C6583 +
                   (((C71 * C384 + C61 * C390) * C13581 -
                     ((C71 * C391 + C61 * C402) * C14840 +
                      (C71 * C385 + C61 * C392) * C13585) +
                     (C71 * C393 + C61 * C403) * C14848 -
                     (C71 * C386 + C61 * C394) * C13591 -
                     (C71 * C395 + C61 * C404) * C7671) *
                        C67 * C68 * C15154 +
                    ((C71 * C1941 + C61 * C1944) * C13585 +
                     (C71 * C1945 + C61 * C1950) * C14840 -
                     (C71 * C1942 + C61 * C1946) * C13581 -
                     (C71 * C1947 + C61 * C1951) * C14848 +
                     (C71 * C1943 + C61 * C1948) * C13591 +
                     (C71 * C1949 + C61 * C1952) * C7671) *
                        C67 * C68 * C14973) *
                       C14933)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C6623 +
                     (C71 * C120 + C61 * C125) * C6583 -
                     (C71 * C385 + C61 * C392) * C6624 -
                     (C71 * C449 + C61 * C455) * C14933) *
                        C67 * C68 * C14840 +
                    ((C71 * C384 + C61 * C390) * C6624 -
                     ((C71 * C121 + C61 * C126) * C6583 +
                      (C71 * C78 + C61 * C84) * C6623) +
                     (C71 * C451 + C61 * C457) * C14933) *
                        C67 * C68 * C14848 +
                    ((C71 * C79 + C61 * C86) * C6623 +
                     (C71 * C122 + C61 * C127) * C6583 -
                     (C71 * C386 + C61 * C394) * C6624 -
                     (C71 * C453 + C61 * C459) * C14933) *
                        C67 * C68 * C7671) *
                       C15154 +
                   (((C71 * C1941 + C61 * C1944) * C6624 -
                     ((C71 * C891 + C61 * C897) * C6583 +
                      (C71 * C829 + C61 * C836) * C6623) +
                     (C71 * C2003 + C61 * C2006) * C14933) *
                        C67 * C68 * C14840 +
                    ((C71 * C828 + C61 * C834) * C6623 +
                     (C71 * C890 + C61 * C896) * C6583 -
                     (C71 * C1942 + C61 * C1946) * C6624 -
                     (C71 * C2004 + C61 * C2007) * C14933) *
                        C67 * C68 * C14848 +
                    ((C71 * C1943 + C61 * C1948) * C6624 -
                     ((C71 * C892 + C61 * C898) * C6583 +
                      (C71 * C830 + C61 * C838) * C6623) +
                     (C71 * C2005 + C61 * C2008) * C14933) *
                        C67 * C68 * C7671) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C1675 +
                     (C71 * C153 + C61 * C158) * C15154 -
                     (C71 * C829 + C61 * C836) * C1676 -
                     (C71 * C943 + C61 * C949) * C14973) *
                        C67 * C68 * C6583 +
                    ((C71 * C1941 + C61 * C1944) * C1676 -
                     ((C71 * C499 + C61 * C505) * C15154 +
                      (C71 * C385 + C61 * C392) * C1675) +
                     (C71 * C2059 + C61 * C2062) * C14973) *
                        C67 * C68 * C14933) *
                       C14840 +
                   (((C71 * C828 + C61 * C834) * C1676 -
                     ((C71 * C154 + C61 * C159) * C15154 +
                      (C71 * C78 + C61 * C84) * C1675) +
                     (C71 * C945 + C61 * C951) * C14973) *
                        C67 * C68 * C6583 +
                    ((C71 * C384 + C61 * C390) * C1675 +
                     (C71 * C501 + C61 * C507) * C15154 -
                     (C71 * C1942 + C61 * C1946) * C1676 -
                     (C71 * C2060 + C61 * C2063) * C14973) *
                        C67 * C68 * C14933) *
                       C14848 +
                   (((C71 * C79 + C61 * C86) * C1675 +
                     (C71 * C155 + C61 * C160) * C15154 -
                     (C71 * C830 + C61 * C838) * C1676 -
                     (C71 * C947 + C61 * C953) * C14973) *
                        C67 * C68 * C6583 +
                    ((C71 * C1943 + C61 * C1948) * C1676 -
                     ((C71 * C503 + C61 * C509) * C15154 +
                      (C71 * C386 + C61 * C394) * C1675) +
                     (C71 * C2061 + C61 * C2064) * C14973) *
                        C67 * C68 * C14933) *
                       C7671)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C13585 +
                     (C185 * C83 + C67 * C191) * C14840 -
                     (C185 * C78 + C67 * C187) * C13581 -
                     (C185 * C85 + C67 * C192) * C14848 +
                     (C185 * C79 + C67 * C188) * C13591 +
                     (C185 * C87 + C67 * C193) * C7671) *
                        C68 * C61 * C15154 +
                    ((C185 * C828 + C67 * C993) * C13581 -
                     ((C185 * C835 + C67 * C999) * C14840 +
                      (C185 * C829 + C67 * C994) * C13585) +
                     (C185 * C837 + C67 * C1000) * C14848 -
                     (C185 * C830 + C67 * C995) * C13591 -
                     (C185 * C839 + C67 * C1001) * C7671) *
                        C68 * C61 * C14973) *
                       C6583 +
                   (((C185 * C384 + C67 * C549) * C13581 -
                     ((C185 * C391 + C67 * C555) * C14840 +
                      (C185 * C385 + C67 * C550) * C13585) +
                     (C185 * C393 + C67 * C556) * C14848 -
                     (C185 * C386 + C67 * C551) * C13591 -
                     (C185 * C395 + C67 * C557) * C7671) *
                        C68 * C61 * C15154 +
                    ((C185 * C1941 + C67 * C2115) * C13585 +
                     (C185 * C1945 + C67 * C2118) * C14840 -
                     (C185 * C1942 + C67 * C2116) * C13581 -
                     (C185 * C1947 + C67 * C2119) * C14848 +
                     (C185 * C1943 + C67 * C2117) * C13591 +
                     (C185 * C1949 + C67 * C2120) * C7671) *
                        C68 * C61 * C14973) *
                       C14933)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6623 +
                     (C185 * C120 + C67 * C218) * C6583 -
                     (C185 * C385 + C67 * C550) * C6624 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C14840 +
                    ((C185 * C384 + C67 * C549) * C6624 -
                     ((C185 * C121 + C67 * C219) * C6583 +
                      (C185 * C78 + C67 * C187) * C6623) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C14848 +
                    ((C185 * C79 + C67 * C188) * C6623 +
                     (C185 * C122 + C67 * C220) * C6583 -
                     (C185 * C386 + C67 * C551) * C6624 -
                     (C185 * C453 + C67 * C603) * C14933) *
                        C68 * C61 * C7671) *
                       C15154 +
                   (((C185 * C1941 + C67 * C2115) * C6624 -
                     ((C185 * C891 + C67 * C1044) * C6583 +
                      (C185 * C829 + C67 * C994) * C6623) +
                     (C185 * C2003 + C67 * C2171) * C14933) *
                        C68 * C61 * C14840 +
                    ((C185 * C828 + C67 * C993) * C6623 +
                     (C185 * C890 + C67 * C1043) * C6583 -
                     (C185 * C1942 + C67 * C2116) * C6624 -
                     (C185 * C2004 + C67 * C2172) * C14933) *
                        C68 * C61 * C14848 +
                    ((C185 * C1943 + C67 * C2117) * C6624 -
                     ((C185 * C892 + C67 * C1045) * C6583 +
                      (C185 * C830 + C67 * C995) * C6623) +
                     (C185 * C2005 + C67 * C2173) * C14933) *
                        C68 * C61 * C7671) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C1675 +
                     (C185 * C153 + C67 * C245) * C15154 -
                     (C185 * C829 + C67 * C994) * C1676 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C1941 + C67 * C2115) * C1676 -
                     ((C185 * C499 + C67 * C643) * C15154 +
                      (C185 * C385 + C67 * C550) * C1675) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C14933) *
                       C14840 +
                   (((C185 * C828 + C67 * C993) * C1676 -
                     ((C185 * C154 + C67 * C246) * C15154 +
                      (C185 * C78 + C67 * C187) * C1675) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C384 + C67 * C549) * C1675 +
                     (C185 * C501 + C67 * C645) * C15154 -
                     (C185 * C1942 + C67 * C2116) * C1676 -
                     (C185 * C2060 + C67 * C2225) * C14973) *
                        C68 * C61 * C14933) *
                       C14848 +
                   (((C185 * C79 + C67 * C188) * C1675 +
                     (C185 * C155 + C67 * C247) * C15154 -
                     (C185 * C830 + C67 * C995) * C1676 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C1943 + C67 * C2117) * C1676 -
                     ((C185 * C503 + C67 * C647) * C15154 +
                      (C185 * C386 + C67 * C551) * C1675) +
                     (C185 * C2061 + C67 * C2226) * C14973) *
                        C68 * C61 * C14933) *
                       C7671)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C13585 +
                     (C272 * C83 + C68 * C278) * C14840 -
                     (C272 * C78 + C68 * C274) * C13581 -
                     (C272 * C85 + C68 * C279) * C14848 +
                     (C272 * C79 + C68 * C275) * C13591 +
                     (C272 * C87 + C68 * C280) * C7671) *
                        C61 * C67 * C15154 +
                    ((C272 * C828 + C68 * C1131) * C13581 -
                     ((C272 * C835 + C68 * C1137) * C14840 +
                      (C272 * C829 + C68 * C1132) * C13585) +
                     (C272 * C837 + C68 * C1138) * C14848 -
                     (C272 * C830 + C68 * C1133) * C13591 -
                     (C272 * C839 + C68 * C1139) * C7671) *
                        C61 * C67 * C14973) *
                       C6583 +
                   (((C272 * C384 + C68 * C687) * C13581 -
                     ((C272 * C391 + C68 * C693) * C14840 +
                      (C272 * C385 + C68 * C688) * C13585) +
                     (C272 * C393 + C68 * C694) * C14848 -
                     (C272 * C386 + C68 * C689) * C13591 -
                     (C272 * C395 + C68 * C695) * C7671) *
                        C61 * C67 * C15154 +
                    ((C272 * C1941 + C68 * C2277) * C13585 +
                     (C272 * C1945 + C68 * C2280) * C14840 -
                     (C272 * C1942 + C68 * C2278) * C13581 -
                     (C272 * C1947 + C68 * C2281) * C14848 +
                     (C272 * C1943 + C68 * C2279) * C13591 +
                     (C272 * C1949 + C68 * C2282) * C7671) *
                        C61 * C67 * C14973) *
                       C14933)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6623 +
                     (C272 * C120 + C68 * C305) * C6583 -
                     (C272 * C385 + C68 * C688) * C6624 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C14840 +
                    ((C272 * C384 + C68 * C687) * C6624 -
                     ((C272 * C121 + C68 * C306) * C6583 +
                      (C272 * C78 + C68 * C274) * C6623) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C14848 +
                    ((C272 * C79 + C68 * C275) * C6623 +
                     (C272 * C122 + C68 * C307) * C6583 -
                     (C272 * C386 + C68 * C689) * C6624 -
                     (C272 * C453 + C68 * C741) * C14933) *
                        C61 * C67 * C7671) *
                       C15154 +
                   (((C272 * C1941 + C68 * C2277) * C6624 -
                     ((C272 * C891 + C68 * C1182) * C6583 +
                      (C272 * C829 + C68 * C1132) * C6623) +
                     (C272 * C2003 + C68 * C2333) * C14933) *
                        C61 * C67 * C14840 +
                    ((C272 * C828 + C68 * C1131) * C6623 +
                     (C272 * C890 + C68 * C1181) * C6583 -
                     (C272 * C1942 + C68 * C2278) * C6624 -
                     (C272 * C2004 + C68 * C2334) * C14933) *
                        C61 * C67 * C14848 +
                    ((C272 * C1943 + C68 * C2279) * C6624 -
                     ((C272 * C892 + C68 * C1183) * C6583 +
                      (C272 * C830 + C68 * C1133) * C6623) +
                     (C272 * C2005 + C68 * C2335) * C14933) *
                        C61 * C67 * C7671) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C1675 +
                     (C272 * C153 + C68 * C332) * C15154 -
                     (C272 * C829 + C68 * C1132) * C1676 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C1941 + C68 * C2277) * C1676 -
                     ((C272 * C499 + C68 * C781) * C15154 +
                      (C272 * C385 + C68 * C688) * C1675) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C14933) *
                       C14840 +
                   (((C272 * C828 + C68 * C1131) * C1676 -
                     ((C272 * C154 + C68 * C333) * C15154 +
                      (C272 * C78 + C68 * C274) * C1675) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C384 + C68 * C687) * C1675 +
                     (C272 * C501 + C68 * C783) * C15154 -
                     (C272 * C1942 + C68 * C2278) * C1676 -
                     (C272 * C2060 + C68 * C2387) * C14973) *
                        C61 * C67 * C14933) *
                       C14848 +
                   (((C272 * C79 + C68 * C275) * C1675 +
                     (C272 * C155 + C68 * C334) * C15154 -
                     (C272 * C830 + C68 * C1133) * C1676 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C1943 + C68 * C2279) * C1676 -
                     ((C272 * C503 + C68 * C785) * C15154 +
                      (C272 * C386 + C68 * C689) * C1675) +
                     (C272 * C2061 + C68 * C2388) * C14973) *
                        C61 * C67 * C14933) *
                       C7671)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6585 + (C71 * C83 + C61 * C92) * C15220 -
           (C71 * C78 + C61 * C84) * C6586 - (C71 * C85 + C61 * C93) * C15213 +
           (C71 * C79 + C61 * C86) * C6587 + (C71 * C87 + C61 * C94) * C15200 -
           (C71 * C80 + C61 * C88) * C6588 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C14886 * C6583 +
          ((C71 * C384 + C61 * C390) * C6586 -
           ((C71 * C391 + C61 * C402) * C15220 +
            (C71 * C385 + C61 * C392) * C6585) +
           (C71 * C393 + C61 * C403) * C15213 -
           (C71 * C386 + C61 * C394) * C6587 -
           (C71 * C395 + C61 * C404) * C15200 +
           (C71 * C1275 + C61 * C1276) * C6588 +
           (C71 * C1277 + C61 * C1278) * C15183) *
              C67 * C68 * C14886 * C14933)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
           (C71 * C78 + C61 * C84) * C6904 - (C71 * C85 + C61 * C93) * C14845) *
              C67 * C68 * C14886 * C15221 +
          ((C71 * C384 + C61 * C390) * C6904 -
           ((C71 * C391 + C61 * C402) * C6897 +
            (C71 * C385 + C61 * C392) * C6903) +
           (C71 * C393 + C61 * C403) * C14845) *
              C67 * C68 * C14886 * C15217 +
          ((C71 * C387 + C61 * C396) * C6903 +
           (C71 * C397 + C61 * C405) * C6897 -
           (C71 * C388 + C61 * C398) * C6904 -
           (C71 * C399 + C61 * C406) * C14845) *
              C67 * C68 * C14886 * C15207 +
          ((C71 * C3417 + C61 * C3418) * C6904 -
           ((C71 * C2774 + C61 * C2778) * C6897 +
            (C71 * C2772 + C61 * C2775) * C6903) +
           (C71 * C3419 + C61 * C3420) * C14845) *
              C67 * C68 * C14886 * C15189)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6623 + (C71 * C120 + C61 * C125) * C6583 -
           (C71 * C385 + C61 * C392) * C6624 -
           (C71 * C449 + C61 * C455) * C14933) *
              C67 * C68 * C15220 +
          ((C71 * C384 + C61 * C390) * C6624 -
           ((C71 * C121 + C61 * C126) * C6583 +
            (C71 * C78 + C61 * C84) * C6623) +
           (C71 * C451 + C61 * C457) * C14933) *
              C67 * C68 * C15213 +
          ((C71 * C79 + C61 * C86) * C6623 + (C71 * C122 + C61 * C127) * C6583 -
           (C71 * C386 + C61 * C394) * C6624 -
           (C71 * C453 + C61 * C459) * C14933) *
              C67 * C68 * C15200 +
          ((C71 * C1275 + C61 * C1276) * C6624 -
           ((C71 * C123 + C61 * C128) * C6583 +
            (C71 * C80 + C61 * C88) * C6623) +
           (C71 * C1315 + C61 * C1316) * C14933) *
              C67 * C68 * C15183) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6939 +
           (C71 * C120 + C61 * C125) * C15221 -
           (C71 * C385 + C61 * C392) * C6940 -
           (C71 * C449 + C61 * C455) * C15217 +
           (C71 * C387 + C61 * C396) * C6941 +
           (C71 * C450 + C61 * C456) * C15207 -
           (C71 * C2772 + C61 * C2775) * C6942 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C6897 +
          ((C71 * C384 + C61 * C390) * C6940 -
           ((C71 * C121 + C61 * C126) * C15221 +
            (C71 * C78 + C61 * C84) * C6939) +
           (C71 * C451 + C61 * C457) * C15217 -
           (C71 * C388 + C61 * C398) * C6941 -
           (C71 * C452 + C61 * C458) * C15207 +
           (C71 * C3417 + C61 * C3418) * C6942 +
           (C71 * C3459 + C61 * C3460) * C15189) *
              C67 * C68 * C14845) *
         C14886) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C6583 -
                    ((C71 * C499 + C61 * C505) * C14886 +
                     (C71 * C385 + C61 * C392) * C152) *
                        C67 * C68 * C14933) *
                       C15220 +
                   (((C71 * C384 + C61 * C390) * C152 +
                     (C71 * C501 + C61 * C507) * C14886) *
                        C67 * C68 * C14933 -
                    ((C71 * C154 + C61 * C159) * C14886 +
                     (C71 * C78 + C61 * C84) * C152) *
                        C67 * C68 * C6583) *
                       C15213 +
                   (((C71 * C79 + C61 * C86) * C152 +
                     (C71 * C155 + C61 * C160) * C14886) *
                        C67 * C68 * C6583 -
                    ((C71 * C503 + C61 * C509) * C14886 +
                     (C71 * C386 + C61 * C394) * C152) *
                        C67 * C68 * C14933) *
                       C15200 +
                   (((C71 * C1275 + C61 * C1276) * C152 +
                     (C71 * C1351 + C61 * C1352) * C14886) *
                        C67 * C68 * C14933 -
                    ((C71 * C156 + C61 * C161) * C14886 +
                     (C71 * C80 + C61 * C88) * C152) *
                        C67 * C68 * C6583) *
                       C15183)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C15221 -
                    ((C71 * C499 + C61 * C505) * C14886 +
                     (C71 * C385 + C61 * C392) * C152) *
                        C67 * C68 * C15217 +
                    ((C71 * C387 + C61 * C396) * C152 +
                     (C71 * C500 + C61 * C506) * C14886) *
                        C67 * C68 * C15207 -
                    ((C71 * C2833 + C61 * C2835) * C14886 +
                     (C71 * C2772 + C61 * C2775) * C152) *
                        C67 * C68 * C15189) *
                       C6897 +
                   (((C71 * C384 + C61 * C390) * C152 +
                     (C71 * C501 + C61 * C507) * C14886) *
                        C67 * C68 * C15217 -
                    ((C71 * C154 + C61 * C159) * C14886 +
                     (C71 * C78 + C61 * C84) * C152) *
                        C67 * C68 * C15221 -
                    ((C71 * C502 + C61 * C508) * C14886 +
                     (C71 * C388 + C61 * C398) * C152) *
                        C67 * C68 * C15207 +
                    ((C71 * C3417 + C61 * C3418) * C152 +
                     (C71 * C3495 + C61 * C3496) * C14886) *
                        C67 * C68 * C15189) *
                       C14845)) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6585 +
                    (C185 * C83 + C67 * C191) * C15220 -
                    (C185 * C78 + C67 * C187) * C6586 -
                    (C185 * C85 + C67 * C192) * C15213 +
                    (C185 * C79 + C67 * C188) * C6587 +
                    (C185 * C87 + C67 * C193) * C15200 -
                    (C185 * C80 + C67 * C189) * C6588 -
                    (C185 * C89 + C67 * C194) * C15183) *
                       C68 * C61 * C14886 * C6583 +
                   ((C185 * C384 + C67 * C549) * C6586 -
                    ((C185 * C391 + C67 * C555) * C15220 +
                     (C185 * C385 + C67 * C550) * C6585) +
                    (C185 * C393 + C67 * C556) * C15213 -
                    (C185 * C386 + C67 * C551) * C6587 -
                    (C185 * C395 + C67 * C557) * C15200 +
                    (C185 * C1275 + C67 * C1387) * C6588 +
                    (C185 * C1277 + C67 * C1388) * C15183) *
                       C68 * C61 * C14886 * C14933)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6903 +
                    (C185 * C83 + C67 * C191) * C6897 -
                    (C185 * C78 + C67 * C187) * C6904 -
                    (C185 * C85 + C67 * C192) * C14845) *
                       C68 * C61 * C14886 * C15221 +
                   ((C185 * C384 + C67 * C549) * C6904 -
                    ((C185 * C391 + C67 * C555) * C6897 +
                     (C185 * C385 + C67 * C550) * C6903) +
                    (C185 * C393 + C67 * C556) * C14845) *
                       C68 * C61 * C14886 * C15217 +
                   ((C185 * C387 + C67 * C552) * C6903 +
                    (C185 * C397 + C67 * C558) * C6897 -
                    (C185 * C388 + C67 * C553) * C6904 -
                    (C185 * C399 + C67 * C559) * C14845) *
                       C68 * C61 * C14886 * C15207 +
                   ((C185 * C3417 + C67 * C3531) * C6904 -
                    ((C185 * C2774 + C67 * C2861) * C6897 +
                     (C185 * C2772 + C67 * C2859) * C6903) +
                    (C185 * C3419 + C67 * C3532) * C14845) *
                       C68 * C61 * C14886 * C15189)) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6623 +
                    (C185 * C120 + C67 * C218) * C6583 -
                    (C185 * C385 + C67 * C550) * C6624 -
                    (C185 * C449 + C67 * C599) * C14933) *
                       C68 * C61 * C15220 +
                   ((C185 * C384 + C67 * C549) * C6624 -
                    ((C185 * C121 + C67 * C219) * C6583 +
                     (C185 * C78 + C67 * C187) * C6623) +
                    (C185 * C451 + C67 * C601) * C14933) *
                       C68 * C61 * C15213 +
                   ((C185 * C79 + C67 * C188) * C6623 +
                    (C185 * C122 + C67 * C220) * C6583 -
                    (C185 * C386 + C67 * C551) * C6624 -
                    (C185 * C453 + C67 * C603) * C14933) *
                       C68 * C61 * C15200 +
                   ((C185 * C1275 + C67 * C1387) * C6624 -
                    ((C185 * C123 + C67 * C221) * C6583 +
                     (C185 * C80 + C67 * C189) * C6623) +
                    (C185 * C1315 + C67 * C1423) * C14933) *
                       C68 * C61 * C15183) *
                  C14886) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6939 +
                    (C185 * C120 + C67 * C218) * C15221 -
                    (C185 * C385 + C67 * C550) * C6940 -
                    (C185 * C449 + C67 * C599) * C15217 +
                    (C185 * C387 + C67 * C552) * C6941 +
                    (C185 * C450 + C67 * C600) * C15207 -
                    (C185 * C2772 + C67 * C2859) * C6942 -
                    (C185 * C2807 + C67 * C2885) * C15189) *
                       C68 * C61 * C6897 +
                   ((C185 * C384 + C67 * C549) * C6940 -
                    ((C185 * C121 + C67 * C219) * C15221 +
                     (C185 * C78 + C67 * C187) * C6939) +
                    (C185 * C451 + C67 * C601) * C15217 -
                    (C185 * C388 + C67 * C553) * C6941 -
                    (C185 * C452 + C67 * C602) * C15207 +
                    (C185 * C3417 + C67 * C3531) * C6942 +
                    (C185 * C3459 + C67 * C3567) * C15189) *
                       C68 * C61 * C14845) *
                  C14886) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C6583 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C14933) *
                       C15220 +
                   (((C185 * C384 + C67 * C549) * C152 +
                     (C185 * C501 + C67 * C645) * C14886) *
                        C68 * C61 * C14933 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C6583) *
                       C15213 +
                   (((C185 * C79 + C67 * C188) * C152 +
                     (C185 * C155 + C67 * C247) * C14886) *
                        C68 * C61 * C6583 -
                    ((C185 * C503 + C67 * C647) * C14886 +
                     (C185 * C386 + C67 * C551) * C152) *
                        C68 * C61 * C14933) *
                       C15200 +
                   (((C185 * C1275 + C67 * C1387) * C152 +
                     (C185 * C1351 + C67 * C1458) * C14886) *
                        C68 * C61 * C14933 -
                    ((C185 * C156 + C67 * C248) * C14886 +
                     (C185 * C80 + C67 * C189) * C152) *
                        C68 * C61 * C6583) *
                       C15183)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C15221 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C15217 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C15207 -
                    ((C185 * C2833 + C67 * C2909) * C14886 +
                     (C185 * C2772 + C67 * C2859) * C152) *
                        C68 * C61 * C15189) *
                       C6897 +
                   (((C185 * C384 + C67 * C549) * C152 +
                     (C185 * C501 + C67 * C645) * C14886) *
                        C68 * C61 * C15217 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C15221 -
                    ((C185 * C502 + C67 * C646) * C14886 +
                     (C185 * C388 + C67 * C553) * C152) *
                        C68 * C61 * C15207 +
                    ((C185 * C3417 + C67 * C3531) * C152 +
                     (C185 * C3495 + C67 * C3602) * C14886) *
                        C68 * C61 * C15189) *
                       C14845)) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6585 +
                    (C272 * C83 + C68 * C278) * C15220 -
                    (C272 * C78 + C68 * C274) * C6586 -
                    (C272 * C85 + C68 * C279) * C15213 +
                    (C272 * C79 + C68 * C275) * C6587 +
                    (C272 * C87 + C68 * C280) * C15200 -
                    (C272 * C80 + C68 * C276) * C6588 -
                    (C272 * C89 + C68 * C281) * C15183) *
                       C61 * C67 * C14886 * C6583 +
                   ((C272 * C384 + C68 * C687) * C6586 -
                    ((C272 * C391 + C68 * C693) * C15220 +
                     (C272 * C385 + C68 * C688) * C6585) +
                    (C272 * C393 + C68 * C694) * C15213 -
                    (C272 * C386 + C68 * C689) * C6587 -
                    (C272 * C395 + C68 * C695) * C15200 +
                    (C272 * C1275 + C68 * C1493) * C6588 +
                    (C272 * C1277 + C68 * C1494) * C15183) *
                       C61 * C67 * C14886 * C14933)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6903 +
                    (C272 * C83 + C68 * C278) * C6897 -
                    (C272 * C78 + C68 * C274) * C6904 -
                    (C272 * C85 + C68 * C279) * C14845) *
                       C61 * C67 * C14886 * C15221 +
                   ((C272 * C384 + C68 * C687) * C6904 -
                    ((C272 * C391 + C68 * C693) * C6897 +
                     (C272 * C385 + C68 * C688) * C6903) +
                    (C272 * C393 + C68 * C694) * C14845) *
                       C61 * C67 * C14886 * C15217 +
                   ((C272 * C387 + C68 * C690) * C6903 +
                    (C272 * C397 + C68 * C696) * C6897 -
                    (C272 * C388 + C68 * C691) * C6904 -
                    (C272 * C399 + C68 * C697) * C14845) *
                       C61 * C67 * C14886 * C15207 +
                   ((C272 * C3417 + C68 * C3637) * C6904 -
                    ((C272 * C2774 + C68 * C2935) * C6897 +
                     (C272 * C2772 + C68 * C2933) * C6903) +
                    (C272 * C3419 + C68 * C3638) * C14845) *
                       C61 * C67 * C14886 * C15189)) /
                     (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6623 +
                    (C272 * C120 + C68 * C305) * C6583 -
                    (C272 * C385 + C68 * C688) * C6624 -
                    (C272 * C449 + C68 * C737) * C14933) *
                       C61 * C67 * C15220 +
                   ((C272 * C384 + C68 * C687) * C6624 -
                    ((C272 * C121 + C68 * C306) * C6583 +
                     (C272 * C78 + C68 * C274) * C6623) +
                    (C272 * C451 + C68 * C739) * C14933) *
                       C61 * C67 * C15213 +
                   ((C272 * C79 + C68 * C275) * C6623 +
                    (C272 * C122 + C68 * C307) * C6583 -
                    (C272 * C386 + C68 * C689) * C6624 -
                    (C272 * C453 + C68 * C741) * C14933) *
                       C61 * C67 * C15200 +
                   ((C272 * C1275 + C68 * C1493) * C6624 -
                    ((C272 * C123 + C68 * C308) * C6583 +
                     (C272 * C80 + C68 * C276) * C6623) +
                    (C272 * C1315 + C68 * C1529) * C14933) *
                       C61 * C67 * C15183) *
                  C14886) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6939 +
                    (C272 * C120 + C68 * C305) * C15221 -
                    (C272 * C385 + C68 * C688) * C6940 -
                    (C272 * C449 + C68 * C737) * C15217 +
                    (C272 * C387 + C68 * C690) * C6941 +
                    (C272 * C450 + C68 * C738) * C15207 -
                    (C272 * C2772 + C68 * C2933) * C6942 -
                    (C272 * C2807 + C68 * C2959) * C15189) *
                       C61 * C67 * C6897 +
                   ((C272 * C384 + C68 * C687) * C6940 -
                    ((C272 * C121 + C68 * C306) * C15221 +
                     (C272 * C78 + C68 * C274) * C6939) +
                    (C272 * C451 + C68 * C739) * C15217 -
                    (C272 * C388 + C68 * C691) * C6941 -
                    (C272 * C452 + C68 * C740) * C15207 +
                    (C272 * C3417 + C68 * C3637) * C6942 +
                    (C272 * C3459 + C68 * C3673) * C15189) *
                       C61 * C67 * C14845) *
                  C14886) /
                     (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C6583 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C14933) *
                       C15220 +
                   (((C272 * C384 + C68 * C687) * C152 +
                     (C272 * C501 + C68 * C783) * C14886) *
                        C61 * C67 * C14933 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C6583) *
                       C15213 +
                   (((C272 * C79 + C68 * C275) * C152 +
                     (C272 * C155 + C68 * C334) * C14886) *
                        C61 * C67 * C6583 -
                    ((C272 * C503 + C68 * C785) * C14886 +
                     (C272 * C386 + C68 * C689) * C152) *
                        C61 * C67 * C14933) *
                       C15200 +
                   (((C272 * C1275 + C68 * C1493) * C152 +
                     (C272 * C1351 + C68 * C1564) * C14886) *
                        C61 * C67 * C14933 -
                    ((C272 * C156 + C68 * C335) * C14886 +
                     (C272 * C80 + C68 * C276) * C152) *
                        C61 * C67 * C6583) *
                       C15183)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C15221 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C15217 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C15207 -
                    ((C272 * C2833 + C68 * C2983) * C14886 +
                     (C272 * C2772 + C68 * C2933) * C152) *
                        C61 * C67 * C15189) *
                       C6897 +
                   (((C272 * C384 + C68 * C687) * C152 +
                     (C272 * C501 + C68 * C783) * C14886) *
                        C61 * C67 * C15217 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C15221 -
                    ((C272 * C502 + C68 * C784) * C14886 +
                     (C272 * C388 + C68 * C691) * C152) *
                        C61 * C67 * C15207 +
                    ((C272 * C3417 + C68 * C3637) * C152 +
                     (C272 * C3495 + C68 * C3708) * C14886) *
                        C61 * C67 * C15189) *
                       C14845)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C13575 +
                     (C71 * C83 + C61 * C92) * C15139 -
                     (C71 * C78 + C61 * C84) * C13556 -
                     (C71 * C85 + C61 * C93) * C14845) *
                        C67 * C68 * C8919 +
                    ((C71 * C828 + C61 * C834) * C13556 -
                     ((C71 * C835 + C61 * C846) * C15139 +
                      (C71 * C829 + C61 * C836) * C13575) +
                     (C71 * C837 + C61 * C847) * C14845) *
                        C67 * C68 * C14973) *
                       C14929 +
                   (((C71 * C384 + C61 * C390) * C13556 -
                     ((C71 * C391 + C61 * C402) * C15139 +
                      (C71 * C385 + C61 * C392) * C13575) +
                     (C71 * C393 + C61 * C403) * C14845) *
                        C67 * C68 * C8919 +
                    ((C71 * C1941 + C61 * C1944) * C13575 +
                     (C71 * C1945 + C61 * C1950) * C15139 -
                     (C71 * C1942 + C61 * C1946) * C13556 -
                     (C71 * C1947 + C61 * C1951) * C14845) *
                        C67 * C68 * C14973) *
                       C14936 +
                   (((C71 * C387 + C61 * C396) * C13575 +
                     (C71 * C397 + C61 * C405) * C15139 -
                     (C71 * C388 + C61 * C398) * C13556 -
                     (C71 * C399 + C61 * C406) * C14845) *
                        C67 * C68 * C8919 +
                    ((C71 * C3759 + C61 * C3760) * C13556 -
                     ((C71 * C3028 + C61 * C3033) * C15139 +
                      (C71 * C3024 + C61 * C3029) * C13575) +
                     (C71 * C3761 + C61 * C3762) * C14845) *
                        C67 * C68 * C14973) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C13733 +
                     (C71 * C120 + C61 * C125) * C14929 -
                     (C71 * C385 + C61 * C392) * C13725 -
                     (C71 * C449 + C61 * C455) * C14936 +
                     (C71 * C387 + C61 * C396) * C13739 +
                     (C71 * C450 + C61 * C456) * C7674) *
                        C67 * C68 * C15139 +
                    ((C71 * C384 + C61 * C390) * C13725 -
                     ((C71 * C121 + C61 * C126) * C14929 +
                      (C71 * C78 + C61 * C84) * C13733) +
                     (C71 * C451 + C61 * C457) * C14936 -
                     (C71 * C388 + C61 * C398) * C13739 -
                     (C71 * C452 + C61 * C458) * C7674) *
                        C67 * C68 * C14845) *
                       C8919 +
                   (((C71 * C1941 + C61 * C1944) * C13725 -
                     ((C71 * C891 + C61 * C897) * C14929 +
                      (C71 * C829 + C61 * C836) * C13733) +
                     (C71 * C2003 + C61 * C2006) * C14936 -
                     (C71 * C3024 + C61 * C3029) * C13739 -
                     (C71 * C3073 + C61 * C3076) * C7674) *
                        C67 * C68 * C15139 +
                    ((C71 * C828 + C61 * C834) * C13733 +
                     (C71 * C890 + C61 * C896) * C14929 -
                     (C71 * C1942 + C61 * C1946) * C13725 -
                     (C71 * C2004 + C61 * C2007) * C14936 +
                     (C71 * C3759 + C61 * C3760) * C13739 +
                     (C71 * C3813 + C61 * C3814) * C7674) *
                        C67 * C68 * C14845) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C8989 +
                     (C71 * C153 + C61 * C158) * C8919 -
                     (C71 * C829 + C61 * C836) * C8990 -
                     (C71 * C943 + C61 * C949) * C14973) *
                        C67 * C68 * C14929 +
                    ((C71 * C1941 + C61 * C1944) * C8990 -
                     ((C71 * C499 + C61 * C505) * C8919 +
                      (C71 * C385 + C61 * C392) * C8989) +
                     (C71 * C2059 + C61 * C2062) * C14973) *
                        C67 * C68 * C14936 +
                    ((C71 * C387 + C61 * C396) * C8989 +
                     (C71 * C500 + C61 * C506) * C8919 -
                     (C71 * C3024 + C61 * C3029) * C8990 -
                     (C71 * C3118 + C61 * C3121) * C14973) *
                        C67 * C68 * C7674) *
                       C15139 +
                   (((C71 * C828 + C61 * C834) * C8990 -
                     ((C71 * C154 + C61 * C159) * C8919 +
                      (C71 * C78 + C61 * C84) * C8989) +
                     (C71 * C945 + C61 * C951) * C14973) *
                        C67 * C68 * C14929 +
                    ((C71 * C384 + C61 * C390) * C8989 +
                     (C71 * C501 + C61 * C507) * C8919 -
                     (C71 * C1942 + C61 * C1946) * C8990 -
                     (C71 * C2060 + C61 * C2063) * C14973) *
                        C67 * C68 * C14936 +
                    ((C71 * C3759 + C61 * C3760) * C8990 -
                     ((C71 * C502 + C61 * C508) * C8919 +
                      (C71 * C388 + C61 * C398) * C8989) +
                     (C71 * C3865 + C61 * C3866) * C14973) *
                        C67 * C68 * C7674) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C13575 +
                     (C185 * C83 + C67 * C191) * C15139 -
                     (C185 * C78 + C67 * C187) * C13556 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C8919 +
                    ((C185 * C828 + C67 * C993) * C13556 -
                     ((C185 * C835 + C67 * C999) * C15139 +
                      (C185 * C829 + C67 * C994) * C13575) +
                     (C185 * C837 + C67 * C1000) * C14845) *
                        C68 * C61 * C14973) *
                       C14929 +
                   (((C185 * C384 + C67 * C549) * C13556 -
                     ((C185 * C391 + C67 * C555) * C15139 +
                      (C185 * C385 + C67 * C550) * C13575) +
                     (C185 * C393 + C67 * C556) * C14845) *
                        C68 * C61 * C8919 +
                    ((C185 * C1941 + C67 * C2115) * C13575 +
                     (C185 * C1945 + C67 * C2118) * C15139 -
                     (C185 * C1942 + C67 * C2116) * C13556 -
                     (C185 * C1947 + C67 * C2119) * C14845) *
                        C68 * C61 * C14973) *
                       C14936 +
                   (((C185 * C387 + C67 * C552) * C13575 +
                     (C185 * C397 + C67 * C558) * C15139 -
                     (C185 * C388 + C67 * C553) * C13556 -
                     (C185 * C399 + C67 * C559) * C14845) *
                        C68 * C61 * C8919 +
                    ((C185 * C3759 + C67 * C3917) * C13556 -
                     ((C185 * C3028 + C67 * C3165) * C15139 +
                      (C185 * C3024 + C67 * C3162) * C13575) +
                     (C185 * C3761 + C67 * C3918) * C14845) *
                        C68 * C61 * C14973) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C13733 +
                     (C185 * C120 + C67 * C218) * C14929 -
                     (C185 * C385 + C67 * C550) * C13725 -
                     (C185 * C449 + C67 * C599) * C14936 +
                     (C185 * C387 + C67 * C552) * C13739 +
                     (C185 * C450 + C67 * C600) * C7674) *
                        C68 * C61 * C15139 +
                    ((C185 * C384 + C67 * C549) * C13725 -
                     ((C185 * C121 + C67 * C219) * C14929 +
                      (C185 * C78 + C67 * C187) * C13733) +
                     (C185 * C451 + C67 * C601) * C14936 -
                     (C185 * C388 + C67 * C553) * C13739 -
                     (C185 * C452 + C67 * C602) * C7674) *
                        C68 * C61 * C14845) *
                       C8919 +
                   (((C185 * C1941 + C67 * C2115) * C13725 -
                     ((C185 * C891 + C67 * C1044) * C14929 +
                      (C185 * C829 + C67 * C994) * C13733) +
                     (C185 * C2003 + C67 * C2171) * C14936 -
                     (C185 * C3024 + C67 * C3162) * C13739 -
                     (C185 * C3073 + C67 * C3205) * C7674) *
                        C68 * C61 * C15139 +
                    ((C185 * C828 + C67 * C993) * C13733 +
                     (C185 * C890 + C67 * C1043) * C14929 -
                     (C185 * C1942 + C67 * C2116) * C13725 -
                     (C185 * C2004 + C67 * C2172) * C14936 +
                     (C185 * C3759 + C67 * C3917) * C13739 +
                     (C185 * C3813 + C67 * C3969) * C7674) *
                        C68 * C61 * C14845) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C8989 +
                     (C185 * C153 + C67 * C245) * C8919 -
                     (C185 * C829 + C67 * C994) * C8990 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C14929 +
                    ((C185 * C1941 + C67 * C2115) * C8990 -
                     ((C185 * C499 + C67 * C643) * C8919 +
                      (C185 * C385 + C67 * C550) * C8989) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C14936 +
                    ((C185 * C387 + C67 * C552) * C8989 +
                     (C185 * C500 + C67 * C644) * C8919 -
                     (C185 * C3024 + C67 * C3162) * C8990 -
                     (C185 * C3118 + C67 * C3247) * C14973) *
                        C68 * C61 * C7674) *
                       C15139 +
                   (((C185 * C828 + C67 * C993) * C8990 -
                     ((C185 * C154 + C67 * C246) * C8919 +
                      (C185 * C78 + C67 * C187) * C8989) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C14929 +
                    ((C185 * C384 + C67 * C549) * C8989 +
                     (C185 * C501 + C67 * C645) * C8919 -
                     (C185 * C1942 + C67 * C2116) * C8990 -
                     (C185 * C2060 + C67 * C2225) * C14973) *
                        C68 * C61 * C14936 +
                    ((C185 * C3759 + C67 * C3917) * C8990 -
                     ((C185 * C502 + C67 * C646) * C8919 +
                      (C185 * C388 + C67 * C553) * C8989) +
                     (C185 * C3865 + C67 * C4020) * C14973) *
                        C68 * C61 * C7674) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C13575 +
                     (C272 * C83 + C68 * C278) * C15139 -
                     (C272 * C78 + C68 * C274) * C13556 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C8919 +
                    ((C272 * C828 + C68 * C1131) * C13556 -
                     ((C272 * C835 + C68 * C1137) * C15139 +
                      (C272 * C829 + C68 * C1132) * C13575) +
                     (C272 * C837 + C68 * C1138) * C14845) *
                        C61 * C67 * C14973) *
                       C14929 +
                   (((C272 * C384 + C68 * C687) * C13556 -
                     ((C272 * C391 + C68 * C693) * C15139 +
                      (C272 * C385 + C68 * C688) * C13575) +
                     (C272 * C393 + C68 * C694) * C14845) *
                        C61 * C67 * C8919 +
                    ((C272 * C1941 + C68 * C2277) * C13575 +
                     (C272 * C1945 + C68 * C2280) * C15139 -
                     (C272 * C1942 + C68 * C2278) * C13556 -
                     (C272 * C1947 + C68 * C2281) * C14845) *
                        C61 * C67 * C14973) *
                       C14936 +
                   (((C272 * C387 + C68 * C690) * C13575 +
                     (C272 * C397 + C68 * C696) * C15139 -
                     (C272 * C388 + C68 * C691) * C13556 -
                     (C272 * C399 + C68 * C697) * C14845) *
                        C61 * C67 * C8919 +
                    ((C272 * C3759 + C68 * C4071) * C13556 -
                     ((C272 * C3028 + C68 * C3291) * C15139 +
                      (C272 * C3024 + C68 * C3288) * C13575) +
                     (C272 * C3761 + C68 * C4072) * C14845) *
                        C61 * C67 * C14973) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C13733 +
                     (C272 * C120 + C68 * C305) * C14929 -
                     (C272 * C385 + C68 * C688) * C13725 -
                     (C272 * C449 + C68 * C737) * C14936 +
                     (C272 * C387 + C68 * C690) * C13739 +
                     (C272 * C450 + C68 * C738) * C7674) *
                        C61 * C67 * C15139 +
                    ((C272 * C384 + C68 * C687) * C13725 -
                     ((C272 * C121 + C68 * C306) * C14929 +
                      (C272 * C78 + C68 * C274) * C13733) +
                     (C272 * C451 + C68 * C739) * C14936 -
                     (C272 * C388 + C68 * C691) * C13739 -
                     (C272 * C452 + C68 * C740) * C7674) *
                        C61 * C67 * C14845) *
                       C8919 +
                   (((C272 * C1941 + C68 * C2277) * C13725 -
                     ((C272 * C891 + C68 * C1182) * C14929 +
                      (C272 * C829 + C68 * C1132) * C13733) +
                     (C272 * C2003 + C68 * C2333) * C14936 -
                     (C272 * C3024 + C68 * C3288) * C13739 -
                     (C272 * C3073 + C68 * C3331) * C7674) *
                        C61 * C67 * C15139 +
                    ((C272 * C828 + C68 * C1131) * C13733 +
                     (C272 * C890 + C68 * C1181) * C14929 -
                     (C272 * C1942 + C68 * C2278) * C13725 -
                     (C272 * C2004 + C68 * C2334) * C14936 +
                     (C272 * C3759 + C68 * C4071) * C13739 +
                     (C272 * C3813 + C68 * C4123) * C7674) *
                        C61 * C67 * C14845) *
                       C14973)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C8989 +
                     (C272 * C153 + C68 * C332) * C8919 -
                     (C272 * C829 + C68 * C1132) * C8990 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C14929 +
                    ((C272 * C1941 + C68 * C2277) * C8990 -
                     ((C272 * C499 + C68 * C781) * C8919 +
                      (C272 * C385 + C68 * C688) * C8989) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C14936 +
                    ((C272 * C387 + C68 * C690) * C8989 +
                     (C272 * C500 + C68 * C782) * C8919 -
                     (C272 * C3024 + C68 * C3288) * C8990 -
                     (C272 * C3118 + C68 * C3373) * C14973) *
                        C61 * C67 * C7674) *
                       C15139 +
                   (((C272 * C828 + C68 * C1131) * C8990 -
                     ((C272 * C154 + C68 * C333) * C8919 +
                      (C272 * C78 + C68 * C274) * C8989) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C14929 +
                    ((C272 * C384 + C68 * C687) * C8989 +
                     (C272 * C501 + C68 * C783) * C8919 -
                     (C272 * C1942 + C68 * C2278) * C8990 -
                     (C272 * C2060 + C68 * C2387) * C14973) *
                        C61 * C67 * C14936 +
                    ((C272 * C3759 + C68 * C4071) * C8990 -
                     ((C272 * C502 + C68 * C784) * C8919 +
                      (C272 * C388 + C68 * C691) * C8989) +
                     (C272 * C3865 + C68 * C4174) * C14973) *
                        C61 * C67 * C7674) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C2771 +
                     (C71 * C83 + C61 * C92) * C14835) *
                        C67 * C68 * C14969 -
                    ((C71 * C835 + C61 * C846) * C14835 +
                     (C71 * C829 + C61 * C836) * C2771) *
                        C67 * C68 * C14976 +
                    ((C71 * C831 + C61 * C840) * C2771 +
                     (C71 * C841 + C61 * C849) * C14835) *
                        C67 * C68 * C10449) *
                       C14929 +
                   (((C71 * C1941 + C61 * C1944) * C2771 +
                     (C71 * C1945 + C61 * C1950) * C14835) *
                        C67 * C68 * C14976 -
                    ((C71 * C391 + C61 * C402) * C14835 +
                     (C71 * C385 + C61 * C392) * C2771) *
                        C67 * C68 * C14969 -
                    ((C71 * C3026 + C61 * C3032) * C14835 +
                     (C71 * C3023 + C61 * C3027) * C2771) *
                        C67 * C68 * C10449) *
                       C14936 +
                   (((C71 * C387 + C61 * C396) * C2771 +
                     (C71 * C397 + C61 * C405) * C14835) *
                        C67 * C68 * C14969 -
                    ((C71 * C3028 + C61 * C3033) * C14835 +
                     (C71 * C3024 + C61 * C3029) * C2771) *
                        C67 * C68 * C14976 +
                    ((C71 * C3025 + C61 * C3030) * C2771 +
                     (C71 * C3031 + C61 * C3034) * C14835) *
                        C67 * C68 * C10449) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C77 + C61 * C82) * C13733 +
                    (C71 * C120 + C61 * C125) * C14929 -
                    (C71 * C385 + C61 * C392) * C13725 -
                    (C71 * C449 + C61 * C455) * C14936 +
                    (C71 * C387 + C61 * C396) * C13739 +
                    (C71 * C450 + C61 * C456) * C7674) *
                       C67 * C68 * C14835 * C14969 +
                   ((C71 * C1941 + C61 * C1944) * C13725 -
                    ((C71 * C891 + C61 * C897) * C14929 +
                     (C71 * C829 + C61 * C836) * C13733) +
                    (C71 * C2003 + C61 * C2006) * C14936 -
                    (C71 * C3024 + C61 * C3029) * C13739 -
                    (C71 * C3073 + C61 * C3076) * C7674) *
                       C67 * C68 * C14835 * C14976 +
                   ((C71 * C831 + C61 * C840) * C13733 +
                    (C71 * C893 + C61 * C899) * C14929 -
                    (C71 * C3023 + C61 * C3027) * C13725 -
                    (C71 * C3074 + C61 * C3077) * C14936 +
                    (C71 * C3025 + C61 * C3030) * C13739 +
                    (C71 * C3075 + C61 * C3078) * C7674) *
                       C67 * C68 * C14835 * C10449)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C77 + C61 * C82) * C13824 +
                    (C71 * C153 + C61 * C158) * C14969 -
                    (C71 * C829 + C61 * C836) * C13816 -
                    (C71 * C943 + C61 * C949) * C14976 +
                    (C71 * C831 + C61 * C840) * C13830 +
                    (C71 * C944 + C61 * C950) * C10449) *
                       C67 * C68 * C14929 +
                   ((C71 * C1941 + C61 * C1944) * C13816 -
                    ((C71 * C499 + C61 * C505) * C14969 +
                     (C71 * C385 + C61 * C392) * C13824) +
                    (C71 * C2059 + C61 * C2062) * C14976 -
                    (C71 * C3023 + C61 * C3027) * C13830 -
                    (C71 * C3117 + C61 * C3120) * C10449) *
                       C67 * C68 * C14936 +
                   ((C71 * C387 + C61 * C396) * C13824 +
                    (C71 * C500 + C61 * C506) * C14969 -
                    (C71 * C3024 + C61 * C3029) * C13816 -
                    (C71 * C3118 + C61 * C3121) * C14976 +
                    (C71 * C3025 + C61 * C3030) * C13830 +
                    (C71 * C3119 + C61 * C3122) * C10449) *
                       C67 * C68 * C7674) *
                  C14835) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C2771 +
                     (C185 * C83 + C67 * C191) * C14835) *
                        C68 * C61 * C14969 -
                    ((C185 * C835 + C67 * C999) * C14835 +
                     (C185 * C829 + C67 * C994) * C2771) *
                        C68 * C61 * C14976 +
                    ((C185 * C831 + C67 * C996) * C2771 +
                     (C185 * C841 + C67 * C1002) * C14835) *
                        C68 * C61 * C10449) *
                       C14929 +
                   (((C185 * C1941 + C67 * C2115) * C2771 +
                     (C185 * C1945 + C67 * C2118) * C14835) *
                        C68 * C61 * C14976 -
                    ((C185 * C391 + C67 * C555) * C14835 +
                     (C185 * C385 + C67 * C550) * C2771) *
                        C68 * C61 * C14969 -
                    ((C185 * C3026 + C67 * C3164) * C14835 +
                     (C185 * C3023 + C67 * C3161) * C2771) *
                        C68 * C61 * C10449) *
                       C14936 +
                   (((C185 * C387 + C67 * C552) * C2771 +
                     (C185 * C397 + C67 * C558) * C14835) *
                        C68 * C61 * C14969 -
                    ((C185 * C3028 + C67 * C3165) * C14835 +
                     (C185 * C3024 + C67 * C3162) * C2771) *
                        C68 * C61 * C14976 +
                    ((C185 * C3025 + C67 * C3163) * C2771 +
                     (C185 * C3031 + C67 * C3166) * C14835) *
                        C68 * C61 * C10449) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C13733 +
                    (C185 * C120 + C67 * C218) * C14929 -
                    (C185 * C385 + C67 * C550) * C13725 -
                    (C185 * C449 + C67 * C599) * C14936 +
                    (C185 * C387 + C67 * C552) * C13739 +
                    (C185 * C450 + C67 * C600) * C7674) *
                       C68 * C61 * C14835 * C14969 +
                   ((C185 * C1941 + C67 * C2115) * C13725 -
                    ((C185 * C891 + C67 * C1044) * C14929 +
                     (C185 * C829 + C67 * C994) * C13733) +
                    (C185 * C2003 + C67 * C2171) * C14936 -
                    (C185 * C3024 + C67 * C3162) * C13739 -
                    (C185 * C3073 + C67 * C3205) * C7674) *
                       C68 * C61 * C14835 * C14976 +
                   ((C185 * C831 + C67 * C996) * C13733 +
                    (C185 * C893 + C67 * C1046) * C14929 -
                    (C185 * C3023 + C67 * C3161) * C13725 -
                    (C185 * C3074 + C67 * C3206) * C14936 +
                    (C185 * C3025 + C67 * C3163) * C13739 +
                    (C185 * C3075 + C67 * C3207) * C7674) *
                       C68 * C61 * C14835 * C10449)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C13824 +
                    (C185 * C153 + C67 * C245) * C14969 -
                    (C185 * C829 + C67 * C994) * C13816 -
                    (C185 * C943 + C67 * C1087) * C14976 +
                    (C185 * C831 + C67 * C996) * C13830 +
                    (C185 * C944 + C67 * C1088) * C10449) *
                       C68 * C61 * C14929 +
                   ((C185 * C1941 + C67 * C2115) * C13816 -
                    ((C185 * C499 + C67 * C643) * C14969 +
                     (C185 * C385 + C67 * C550) * C13824) +
                    (C185 * C2059 + C67 * C2224) * C14976 -
                    (C185 * C3023 + C67 * C3161) * C13830 -
                    (C185 * C3117 + C67 * C3246) * C10449) *
                       C68 * C61 * C14936 +
                   ((C185 * C387 + C67 * C552) * C13824 +
                    (C185 * C500 + C67 * C644) * C14969 -
                    (C185 * C3024 + C67 * C3162) * C13816 -
                    (C185 * C3118 + C67 * C3247) * C14976 +
                    (C185 * C3025 + C67 * C3163) * C13830 +
                    (C185 * C3119 + C67 * C3248) * C10449) *
                       C68 * C61 * C7674) *
                  C14835) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C2771 +
                     (C272 * C83 + C68 * C278) * C14835) *
                        C61 * C67 * C14969 -
                    ((C272 * C835 + C68 * C1137) * C14835 +
                     (C272 * C829 + C68 * C1132) * C2771) *
                        C61 * C67 * C14976 +
                    ((C272 * C831 + C68 * C1134) * C2771 +
                     (C272 * C841 + C68 * C1140) * C14835) *
                        C61 * C67 * C10449) *
                       C14929 +
                   (((C272 * C1941 + C68 * C2277) * C2771 +
                     (C272 * C1945 + C68 * C2280) * C14835) *
                        C61 * C67 * C14976 -
                    ((C272 * C391 + C68 * C693) * C14835 +
                     (C272 * C385 + C68 * C688) * C2771) *
                        C61 * C67 * C14969 -
                    ((C272 * C3026 + C68 * C3290) * C14835 +
                     (C272 * C3023 + C68 * C3287) * C2771) *
                        C61 * C67 * C10449) *
                       C14936 +
                   (((C272 * C387 + C68 * C690) * C2771 +
                     (C272 * C397 + C68 * C696) * C14835) *
                        C61 * C67 * C14969 -
                    ((C272 * C3028 + C68 * C3291) * C14835 +
                     (C272 * C3024 + C68 * C3288) * C2771) *
                        C61 * C67 * C14976 +
                    ((C272 * C3025 + C68 * C3289) * C2771 +
                     (C272 * C3031 + C68 * C3292) * C14835) *
                        C61 * C67 * C10449) *
                       C7674)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C13733 +
                    (C272 * C120 + C68 * C305) * C14929 -
                    (C272 * C385 + C68 * C688) * C13725 -
                    (C272 * C449 + C68 * C737) * C14936 +
                    (C272 * C387 + C68 * C690) * C13739 +
                    (C272 * C450 + C68 * C738) * C7674) *
                       C61 * C67 * C14835 * C14969 +
                   ((C272 * C1941 + C68 * C2277) * C13725 -
                    ((C272 * C891 + C68 * C1182) * C14929 +
                     (C272 * C829 + C68 * C1132) * C13733) +
                    (C272 * C2003 + C68 * C2333) * C14936 -
                    (C272 * C3024 + C68 * C3288) * C13739 -
                    (C272 * C3073 + C68 * C3331) * C7674) *
                       C61 * C67 * C14835 * C14976 +
                   ((C272 * C831 + C68 * C1134) * C13733 +
                    (C272 * C893 + C68 * C1184) * C14929 -
                    (C272 * C3023 + C68 * C3287) * C13725 -
                    (C272 * C3074 + C68 * C3332) * C14936 +
                    (C272 * C3025 + C68 * C3289) * C13739 +
                    (C272 * C3075 + C68 * C3333) * C7674) *
                       C61 * C67 * C14835 * C10449)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C13824 +
                    (C272 * C153 + C68 * C332) * C14969 -
                    (C272 * C829 + C68 * C1132) * C13816 -
                    (C272 * C943 + C68 * C1225) * C14976 +
                    (C272 * C831 + C68 * C1134) * C13830 +
                    (C272 * C944 + C68 * C1226) * C10449) *
                       C61 * C67 * C14929 +
                   ((C272 * C1941 + C68 * C2277) * C13816 -
                    ((C272 * C499 + C68 * C781) * C14969 +
                     (C272 * C385 + C68 * C688) * C13824) +
                    (C272 * C2059 + C68 * C2386) * C14976 -
                    (C272 * C3023 + C68 * C3287) * C13830 -
                    (C272 * C3117 + C68 * C3372) * C10449) *
                       C61 * C67 * C14936 +
                   ((C272 * C387 + C68 * C690) * C13824 +
                    (C272 * C500 + C68 * C782) * C14969 -
                    (C272 * C3024 + C68 * C3288) * C13816 -
                    (C272 * C3118 + C68 * C3373) * C14976 +
                    (C272 * C3025 + C68 * C3289) * C13830 +
                    (C272 * C3119 + C68 * C3374) * C10449) *
                       C61 * C67 * C7674) *
                  C14835) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C8919 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C14973) *
              C15221 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C8919) *
              C15217 +
          (((C71 * C387 + C61 * C396) * C2771 +
            (C71 * C397 + C61 * C405) * C14835) *
               C67 * C68 * C8919 -
           ((C71 * C3028 + C61 * C3033) * C14835 +
            (C71 * C3024 + C61 * C3029) * C2771) *
               C67 * C68 * C14973) *
              C15207 +
          (((C71 * C4209 + C61 * C4210) * C2771 +
            (C71 * C4211 + C61 * C4212) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C2774 + C61 * C2778) * C14835 +
            (C71 * C2772 + C61 * C2775) * C2771) *
               C67 * C68 * C8919) *
              C15189)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
            (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
            (C71 * C79 + C61 * C86) * C2435 +
            (C71 * C87 + C61 * C94) * C15173) *
               C67 * C68 * C8919 +
           ((C71 * C828 + C61 * C834) * C2434 -
            ((C71 * C835 + C61 * C846) * C15211 +
             (C71 * C829 + C61 * C836) * C2433) +
            (C71 * C837 + C61 * C847) * C15198 -
            (C71 * C830 + C61 * C838) * C2435 -
            (C71 * C839 + C61 * C848) * C15173) *
               C67 * C68 * C14973) *
              C6583 +
          (((C71 * C384 + C61 * C390) * C2434 -
            ((C71 * C391 + C61 * C402) * C15211 +
             (C71 * C385 + C61 * C392) * C2433) +
            (C71 * C393 + C61 * C403) * C15198 -
            (C71 * C386 + C61 * C394) * C2435 -
            (C71 * C395 + C61 * C404) * C15173) *
               C67 * C68 * C8919 +
           ((C71 * C1941 + C61 * C1944) * C2433 +
            (C71 * C1945 + C61 * C1950) * C15211 -
            (C71 * C1942 + C61 * C1946) * C2434 -
            (C71 * C1947 + C61 * C1951) * C15198 +
            (C71 * C1943 + C61 * C1948) * C2435 +
            (C71 * C1949 + C61 * C1952) * C15173) *
               C67 * C68 * C14973) *
              C14933)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C15222 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C15219 +
           ((C71 * C831 + C61 * C840) * C2771 +
            (C71 * C841 + C61 * C849) * C14835) *
               C67 * C68 * C15210 -
           ((C71 * C5216 + C61 * C5220) * C14835 +
            (C71 * C5214 + C61 * C5217) * C2771) *
               C67 * C68 * C15195) *
              C6583 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C15219 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C15222 -
           ((C71 * C3026 + C61 * C3032) * C14835 +
            (C71 * C3023 + C61 * C3027) * C2771) *
               C67 * C68 * C15210 +
           ((C71 * C6257 + C61 * C6258) * C2771 +
            (C71 * C6259 + C61 * C6260) * C14835) *
               C67 * C68 * C15195) *
              C14933)) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6939 +
           (C71 * C120 + C61 * C125) * C15221 -
           (C71 * C385 + C61 * C392) * C6940 -
           (C71 * C449 + C61 * C455) * C15217 +
           (C71 * C387 + C61 * C396) * C6941 +
           (C71 * C450 + C61 * C456) * C15207 -
           (C71 * C2772 + C61 * C2775) * C6942 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C14835 * C8919 +
          ((C71 * C1941 + C61 * C1944) * C6940 -
           ((C71 * C891 + C61 * C897) * C15221 +
            (C71 * C829 + C61 * C836) * C6939) +
           (C71 * C2003 + C61 * C2006) * C15217 -
           (C71 * C3024 + C61 * C3029) * C6941 -
           (C71 * C3073 + C61 * C3076) * C15207 +
           (C71 * C4209 + C61 * C4210) * C6942 +
           (C71 * C4247 + C61 * C4248) * C15189) *
              C67 * C68 * C14835 * C14973)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6623 +
            (C71 * C120 + C61 * C125) * C6583 -
            (C71 * C385 + C61 * C392) * C6624 -
            (C71 * C449 + C61 * C455) * C14933) *
               C67 * C68 * C15211 +
           ((C71 * C384 + C61 * C390) * C6624 -
            ((C71 * C121 + C61 * C126) * C6583 +
             (C71 * C78 + C61 * C84) * C6623) +
            (C71 * C451 + C61 * C457) * C14933) *
               C67 * C68 * C15198 +
           ((C71 * C79 + C61 * C86) * C6623 +
            (C71 * C122 + C61 * C127) * C6583 -
            (C71 * C386 + C61 * C394) * C6624 -
            (C71 * C453 + C61 * C459) * C14933) *
               C67 * C68 * C15173) *
              C8919 +
          (((C71 * C1941 + C61 * C1944) * C6624 -
            ((C71 * C891 + C61 * C897) * C6583 +
             (C71 * C829 + C61 * C836) * C6623) +
            (C71 * C2003 + C61 * C2006) * C14933) *
               C67 * C68 * C15211 +
           ((C71 * C828 + C61 * C834) * C6623 +
            (C71 * C890 + C61 * C896) * C6583 -
            (C71 * C1942 + C61 * C1946) * C6624 -
            (C71 * C2004 + C61 * C2007) * C14933) *
               C67 * C68 * C15198 +
           ((C71 * C1943 + C61 * C1948) * C6624 -
            ((C71 * C892 + C61 * C898) * C6583 +
             (C71 * C830 + C61 * C838) * C6623) +
            (C71 * C2005 + C61 * C2008) * C14933) *
               C67 * C68 * C15173) *
              C14973)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6623 + (C71 * C120 + C61 * C125) * C6583 -
           (C71 * C385 + C61 * C392) * C6624 -
           (C71 * C449 + C61 * C455) * C14933) *
              C67 * C68 * C14835 * C15222 +
          ((C71 * C1941 + C61 * C1944) * C6624 -
           ((C71 * C891 + C61 * C897) * C6583 +
            (C71 * C829 + C61 * C836) * C6623) +
           (C71 * C2003 + C61 * C2006) * C14933) *
              C67 * C68 * C14835 * C15219 +
          ((C71 * C831 + C61 * C840) * C6623 +
           (C71 * C893 + C61 * C899) * C6583 -
           (C71 * C3023 + C61 * C3027) * C6624 -
           (C71 * C3074 + C61 * C3077) * C14933) *
              C67 * C68 * C14835 * C15210 +
          ((C71 * C6257 + C61 * C6258) * C6624 -
           ((C71 * C5244 + C61 * C5246) * C6583 +
            (C71 * C5214 + C61 * C5217) * C6623) +
           (C71 * C6295 + C61 * C6296) * C14933) *
              C67 * C68 * C14835 * C15195)) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C8989 + (C71 * C153 + C61 * C158) * C8919 -
           (C71 * C829 + C61 * C836) * C8990 -
           (C71 * C943 + C61 * C949) * C14973) *
              C67 * C68 * C15221 +
          ((C71 * C1941 + C61 * C1944) * C8990 -
           ((C71 * C499 + C61 * C505) * C8919 +
            (C71 * C385 + C61 * C392) * C8989) +
           (C71 * C2059 + C61 * C2062) * C14973) *
              C67 * C68 * C15217 +
          ((C71 * C387 + C61 * C396) * C8989 +
           (C71 * C500 + C61 * C506) * C8919 -
           (C71 * C3024 + C61 * C3029) * C8990 -
           (C71 * C3118 + C61 * C3121) * C14973) *
              C67 * C68 * C15207 +
          ((C71 * C4209 + C61 * C4210) * C8990 -
           ((C71 * C2833 + C61 * C2835) * C8919 +
            (C71 * C2772 + C61 * C2775) * C8989) +
           (C71 * C4283 + C61 * C4284) * C14973) *
              C67 * C68 * C15189) *
         C14835) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C8989 +
            (C71 * C153 + C61 * C158) * C8919 -
            (C71 * C829 + C61 * C836) * C8990 -
            (C71 * C943 + C61 * C949) * C14973) *
               C67 * C68 * C6583 +
           ((C71 * C1941 + C61 * C1944) * C8990 -
            ((C71 * C499 + C61 * C505) * C8919 +
             (C71 * C385 + C61 * C392) * C8989) +
            (C71 * C2059 + C61 * C2062) * C14973) *
               C67 * C68 * C14933) *
              C15211 +
          (((C71 * C828 + C61 * C834) * C8990 -
            ((C71 * C154 + C61 * C159) * C8919 +
             (C71 * C78 + C61 * C84) * C8989) +
            (C71 * C945 + C61 * C951) * C14973) *
               C67 * C68 * C6583 +
           ((C71 * C384 + C61 * C390) * C8989 +
            (C71 * C501 + C61 * C507) * C8919 -
            (C71 * C1942 + C61 * C1946) * C8990 -
            (C71 * C2060 + C61 * C2063) * C14973) *
               C67 * C68 * C14933) *
              C15198 +
          (((C71 * C79 + C61 * C86) * C8989 +
            (C71 * C155 + C61 * C160) * C8919 -
            (C71 * C830 + C61 * C838) * C8990 -
            (C71 * C947 + C61 * C953) * C14973) *
               C67 * C68 * C6583 +
           ((C71 * C1943 + C61 * C1948) * C8990 -
            ((C71 * C503 + C61 * C509) * C8919 +
             (C71 * C386 + C61 * C394) * C8989) +
            (C71 * C2061 + C61 * C2064) * C14973) *
               C67 * C68 * C14933) *
              C15173)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C9751 +
           (C71 * C153 + C61 * C158) * C15222 -
           (C71 * C829 + C61 * C836) * C9752 -
           (C71 * C943 + C61 * C949) * C15219 +
           (C71 * C831 + C61 * C840) * C9753 +
           (C71 * C944 + C61 * C950) * C15210 -
           (C71 * C5214 + C61 * C5217) * C9754 -
           (C71 * C5275 + C61 * C5277) * C15195) *
              C67 * C68 * C6583 +
          ((C71 * C1941 + C61 * C1944) * C9752 -
           ((C71 * C499 + C61 * C505) * C15222 +
            (C71 * C385 + C61 * C392) * C9751) +
           (C71 * C2059 + C61 * C2062) * C15219 -
           (C71 * C3023 + C61 * C3027) * C9753 -
           (C71 * C3117 + C61 * C3120) * C15210 +
           (C71 * C6257 + C61 * C6258) * C9754 +
           (C71 * C6331 + C61 * C6332) * C15195) *
              C67 * C68 * C14933) *
         C14835) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C2771 +
                     (C185 * C83 + C67 * C191) * C14835) *
                        C68 * C61 * C8919 -
                    ((C185 * C835 + C67 * C999) * C14835 +
                     (C185 * C829 + C67 * C994) * C2771) *
                        C68 * C61 * C14973) *
                       C15221 +
                   (((C185 * C1941 + C67 * C2115) * C2771 +
                     (C185 * C1945 + C67 * C2118) * C14835) *
                        C68 * C61 * C14973 -
                    ((C185 * C391 + C67 * C555) * C14835 +
                     (C185 * C385 + C67 * C550) * C2771) *
                        C68 * C61 * C8919) *
                       C15217 +
                   (((C185 * C387 + C67 * C552) * C2771 +
                     (C185 * C397 + C67 * C558) * C14835) *
                        C68 * C61 * C8919 -
                    ((C185 * C3028 + C67 * C3165) * C14835 +
                     (C185 * C3024 + C67 * C3162) * C2771) *
                        C68 * C61 * C14973) *
                       C15207 +
                   (((C185 * C4209 + C67 * C4319) * C2771 +
                     (C185 * C4211 + C67 * C4320) * C14835) *
                        C68 * C61 * C14973 -
                    ((C185 * C2774 + C67 * C2861) * C14835 +
                     (C185 * C2772 + C67 * C2859) * C2771) *
                        C68 * C61 * C8919) *
                       C15189)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C2433 +
                     (C185 * C83 + C67 * C191) * C15211 -
                     (C185 * C78 + C67 * C187) * C2434 -
                     (C185 * C85 + C67 * C192) * C15198 +
                     (C185 * C79 + C67 * C188) * C2435 +
                     (C185 * C87 + C67 * C193) * C15173) *
                        C68 * C61 * C8919 +
                    ((C185 * C828 + C67 * C993) * C2434 -
                     ((C185 * C835 + C67 * C999) * C15211 +
                      (C185 * C829 + C67 * C994) * C2433) +
                     (C185 * C837 + C67 * C1000) * C15198 -
                     (C185 * C830 + C67 * C995) * C2435 -
                     (C185 * C839 + C67 * C1001) * C15173) *
                        C68 * C61 * C14973) *
                       C6583 +
                   (((C185 * C384 + C67 * C549) * C2434 -
                     ((C185 * C391 + C67 * C555) * C15211 +
                      (C185 * C385 + C67 * C550) * C2433) +
                     (C185 * C393 + C67 * C556) * C15198 -
                     (C185 * C386 + C67 * C551) * C2435 -
                     (C185 * C395 + C67 * C557) * C15173) *
                        C68 * C61 * C8919 +
                    ((C185 * C1941 + C67 * C2115) * C2433 +
                     (C185 * C1945 + C67 * C2118) * C15211 -
                     (C185 * C1942 + C67 * C2116) * C2434 -
                     (C185 * C1947 + C67 * C2119) * C15198 +
                     (C185 * C1943 + C67 * C2117) * C2435 +
                     (C185 * C1949 + C67 * C2120) * C15173) *
                        C68 * C61 * C14973) *
                       C14933)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C2771 +
                     (C185 * C83 + C67 * C191) * C14835) *
                        C68 * C61 * C15222 -
                    ((C185 * C835 + C67 * C999) * C14835 +
                     (C185 * C829 + C67 * C994) * C2771) *
                        C68 * C61 * C15219 +
                    ((C185 * C831 + C67 * C996) * C2771 +
                     (C185 * C841 + C67 * C1002) * C14835) *
                        C68 * C61 * C15210 -
                    ((C185 * C5216 + C67 * C5303) * C14835 +
                     (C185 * C5214 + C67 * C5301) * C2771) *
                        C68 * C61 * C15195) *
                       C6583 +
                   (((C185 * C1941 + C67 * C2115) * C2771 +
                     (C185 * C1945 + C67 * C2118) * C14835) *
                        C68 * C61 * C15219 -
                    ((C185 * C391 + C67 * C555) * C14835 +
                     (C185 * C385 + C67 * C550) * C2771) *
                        C68 * C61 * C15222 -
                    ((C185 * C3026 + C67 * C3164) * C14835 +
                     (C185 * C3023 + C67 * C3161) * C2771) *
                        C68 * C61 * C15210 +
                    ((C185 * C6257 + C67 * C6367) * C2771 +
                     (C185 * C6259 + C67 * C6368) * C14835) *
                        C68 * C61 * C15195) *
                       C14933)) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6939 +
                    (C185 * C120 + C67 * C218) * C15221 -
                    (C185 * C385 + C67 * C550) * C6940 -
                    (C185 * C449 + C67 * C599) * C15217 +
                    (C185 * C387 + C67 * C552) * C6941 +
                    (C185 * C450 + C67 * C600) * C15207 -
                    (C185 * C2772 + C67 * C2859) * C6942 -
                    (C185 * C2807 + C67 * C2885) * C15189) *
                       C68 * C61 * C14835 * C8919 +
                   ((C185 * C1941 + C67 * C2115) * C6940 -
                    ((C185 * C891 + C67 * C1044) * C15221 +
                     (C185 * C829 + C67 * C994) * C6939) +
                    (C185 * C2003 + C67 * C2171) * C15217 -
                    (C185 * C3024 + C67 * C3162) * C6941 -
                    (C185 * C3073 + C67 * C3205) * C15207 +
                    (C185 * C4209 + C67 * C4319) * C6942 +
                    (C185 * C4247 + C67 * C4355) * C15189) *
                       C68 * C61 * C14835 * C14973)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6623 +
                     (C185 * C120 + C67 * C218) * C6583 -
                     (C185 * C385 + C67 * C550) * C6624 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C15211 +
                    ((C185 * C384 + C67 * C549) * C6624 -
                     ((C185 * C121 + C67 * C219) * C6583 +
                      (C185 * C78 + C67 * C187) * C6623) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C15198 +
                    ((C185 * C79 + C67 * C188) * C6623 +
                     (C185 * C122 + C67 * C220) * C6583 -
                     (C185 * C386 + C67 * C551) * C6624 -
                     (C185 * C453 + C67 * C603) * C14933) *
                        C68 * C61 * C15173) *
                       C8919 +
                   (((C185 * C1941 + C67 * C2115) * C6624 -
                     ((C185 * C891 + C67 * C1044) * C6583 +
                      (C185 * C829 + C67 * C994) * C6623) +
                     (C185 * C2003 + C67 * C2171) * C14933) *
                        C68 * C61 * C15211 +
                    ((C185 * C828 + C67 * C993) * C6623 +
                     (C185 * C890 + C67 * C1043) * C6583 -
                     (C185 * C1942 + C67 * C2116) * C6624 -
                     (C185 * C2004 + C67 * C2172) * C14933) *
                        C68 * C61 * C15198 +
                    ((C185 * C1943 + C67 * C2117) * C6624 -
                     ((C185 * C892 + C67 * C1045) * C6583 +
                      (C185 * C830 + C67 * C995) * C6623) +
                     (C185 * C2005 + C67 * C2173) * C14933) *
                        C68 * C61 * C15173) *
                       C14973)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6623 +
                    (C185 * C120 + C67 * C218) * C6583 -
                    (C185 * C385 + C67 * C550) * C6624 -
                    (C185 * C449 + C67 * C599) * C14933) *
                       C68 * C61 * C14835 * C15222 +
                   ((C185 * C1941 + C67 * C2115) * C6624 -
                    ((C185 * C891 + C67 * C1044) * C6583 +
                     (C185 * C829 + C67 * C994) * C6623) +
                    (C185 * C2003 + C67 * C2171) * C14933) *
                       C68 * C61 * C14835 * C15219 +
                   ((C185 * C831 + C67 * C996) * C6623 +
                    (C185 * C893 + C67 * C1046) * C6583 -
                    (C185 * C3023 + C67 * C3161) * C6624 -
                    (C185 * C3074 + C67 * C3206) * C14933) *
                       C68 * C61 * C14835 * C15210 +
                   ((C185 * C6257 + C67 * C6367) * C6624 -
                    ((C185 * C5244 + C67 * C5327) * C6583 +
                     (C185 * C5214 + C67 * C5301) * C6623) +
                    (C185 * C6295 + C67 * C6403) * C14933) *
                       C68 * C61 * C14835 * C15195)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C8989 +
                    (C185 * C153 + C67 * C245) * C8919 -
                    (C185 * C829 + C67 * C994) * C8990 -
                    (C185 * C943 + C67 * C1087) * C14973) *
                       C68 * C61 * C15221 +
                   ((C185 * C1941 + C67 * C2115) * C8990 -
                    ((C185 * C499 + C67 * C643) * C8919 +
                     (C185 * C385 + C67 * C550) * C8989) +
                    (C185 * C2059 + C67 * C2224) * C14973) *
                       C68 * C61 * C15217 +
                   ((C185 * C387 + C67 * C552) * C8989 +
                    (C185 * C500 + C67 * C644) * C8919 -
                    (C185 * C3024 + C67 * C3162) * C8990 -
                    (C185 * C3118 + C67 * C3247) * C14973) *
                       C68 * C61 * C15207 +
                   ((C185 * C4209 + C67 * C4319) * C8990 -
                    ((C185 * C2833 + C67 * C2909) * C8919 +
                     (C185 * C2772 + C67 * C2859) * C8989) +
                    (C185 * C4283 + C67 * C4390) * C14973) *
                       C68 * C61 * C15189) *
                  C14835) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C8989 +
                     (C185 * C153 + C67 * C245) * C8919 -
                     (C185 * C829 + C67 * C994) * C8990 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C1941 + C67 * C2115) * C8990 -
                     ((C185 * C499 + C67 * C643) * C8919 +
                      (C185 * C385 + C67 * C550) * C8989) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C14933) *
                       C15211 +
                   (((C185 * C828 + C67 * C993) * C8990 -
                     ((C185 * C154 + C67 * C246) * C8919 +
                      (C185 * C78 + C67 * C187) * C8989) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C384 + C67 * C549) * C8989 +
                     (C185 * C501 + C67 * C645) * C8919 -
                     (C185 * C1942 + C67 * C2116) * C8990 -
                     (C185 * C2060 + C67 * C2225) * C14973) *
                        C68 * C61 * C14933) *
                       C15198 +
                   (((C185 * C79 + C67 * C188) * C8989 +
                     (C185 * C155 + C67 * C247) * C8919 -
                     (C185 * C830 + C67 * C995) * C8990 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C1943 + C67 * C2117) * C8990 -
                     ((C185 * C503 + C67 * C647) * C8919 +
                      (C185 * C386 + C67 * C551) * C8989) +
                     (C185 * C2061 + C67 * C2226) * C14973) *
                        C68 * C61 * C14933) *
                       C15173)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C9751 +
                    (C185 * C153 + C67 * C245) * C15222 -
                    (C185 * C829 + C67 * C994) * C9752 -
                    (C185 * C943 + C67 * C1087) * C15219 +
                    (C185 * C831 + C67 * C996) * C9753 +
                    (C185 * C944 + C67 * C1088) * C15210 -
                    (C185 * C5214 + C67 * C5301) * C9754 -
                    (C185 * C5275 + C67 * C5351) * C15195) *
                       C68 * C61 * C6583 +
                   ((C185 * C1941 + C67 * C2115) * C9752 -
                    ((C185 * C499 + C67 * C643) * C15222 +
                     (C185 * C385 + C67 * C550) * C9751) +
                    (C185 * C2059 + C67 * C2224) * C15219 -
                    (C185 * C3023 + C67 * C3161) * C9753 -
                    (C185 * C3117 + C67 * C3246) * C15210 +
                    (C185 * C6257 + C67 * C6367) * C9754 +
                    (C185 * C6331 + C67 * C6438) * C15195) *
                       C68 * C61 * C14933) *
                  C14835) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C2771 +
                     (C272 * C83 + C68 * C278) * C14835) *
                        C61 * C67 * C8919 -
                    ((C272 * C835 + C68 * C1137) * C14835 +
                     (C272 * C829 + C68 * C1132) * C2771) *
                        C61 * C67 * C14973) *
                       C15221 +
                   (((C272 * C1941 + C68 * C2277) * C2771 +
                     (C272 * C1945 + C68 * C2280) * C14835) *
                        C61 * C67 * C14973 -
                    ((C272 * C391 + C68 * C693) * C14835 +
                     (C272 * C385 + C68 * C688) * C2771) *
                        C61 * C67 * C8919) *
                       C15217 +
                   (((C272 * C387 + C68 * C690) * C2771 +
                     (C272 * C397 + C68 * C696) * C14835) *
                        C61 * C67 * C8919 -
                    ((C272 * C3028 + C68 * C3291) * C14835 +
                     (C272 * C3024 + C68 * C3288) * C2771) *
                        C61 * C67 * C14973) *
                       C15207 +
                   (((C272 * C4209 + C68 * C4425) * C2771 +
                     (C272 * C4211 + C68 * C4426) * C14835) *
                        C61 * C67 * C14973 -
                    ((C272 * C2774 + C68 * C2935) * C14835 +
                     (C272 * C2772 + C68 * C2933) * C2771) *
                        C61 * C67 * C8919) *
                       C15189)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C2433 +
                     (C272 * C83 + C68 * C278) * C15211 -
                     (C272 * C78 + C68 * C274) * C2434 -
                     (C272 * C85 + C68 * C279) * C15198 +
                     (C272 * C79 + C68 * C275) * C2435 +
                     (C272 * C87 + C68 * C280) * C15173) *
                        C61 * C67 * C8919 +
                    ((C272 * C828 + C68 * C1131) * C2434 -
                     ((C272 * C835 + C68 * C1137) * C15211 +
                      (C272 * C829 + C68 * C1132) * C2433) +
                     (C272 * C837 + C68 * C1138) * C15198 -
                     (C272 * C830 + C68 * C1133) * C2435 -
                     (C272 * C839 + C68 * C1139) * C15173) *
                        C61 * C67 * C14973) *
                       C6583 +
                   (((C272 * C384 + C68 * C687) * C2434 -
                     ((C272 * C391 + C68 * C693) * C15211 +
                      (C272 * C385 + C68 * C688) * C2433) +
                     (C272 * C393 + C68 * C694) * C15198 -
                     (C272 * C386 + C68 * C689) * C2435 -
                     (C272 * C395 + C68 * C695) * C15173) *
                        C61 * C67 * C8919 +
                    ((C272 * C1941 + C68 * C2277) * C2433 +
                     (C272 * C1945 + C68 * C2280) * C15211 -
                     (C272 * C1942 + C68 * C2278) * C2434 -
                     (C272 * C1947 + C68 * C2281) * C15198 +
                     (C272 * C1943 + C68 * C2279) * C2435 +
                     (C272 * C1949 + C68 * C2282) * C15173) *
                        C61 * C67 * C14973) *
                       C14933)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C2771 +
                     (C272 * C83 + C68 * C278) * C14835) *
                        C61 * C67 * C15222 -
                    ((C272 * C835 + C68 * C1137) * C14835 +
                     (C272 * C829 + C68 * C1132) * C2771) *
                        C61 * C67 * C15219 +
                    ((C272 * C831 + C68 * C1134) * C2771 +
                     (C272 * C841 + C68 * C1140) * C14835) *
                        C61 * C67 * C15210 -
                    ((C272 * C5216 + C68 * C5377) * C14835 +
                     (C272 * C5214 + C68 * C5375) * C2771) *
                        C61 * C67 * C15195) *
                       C6583 +
                   (((C272 * C1941 + C68 * C2277) * C2771 +
                     (C272 * C1945 + C68 * C2280) * C14835) *
                        C61 * C67 * C15219 -
                    ((C272 * C391 + C68 * C693) * C14835 +
                     (C272 * C385 + C68 * C688) * C2771) *
                        C61 * C67 * C15222 -
                    ((C272 * C3026 + C68 * C3290) * C14835 +
                     (C272 * C3023 + C68 * C3287) * C2771) *
                        C61 * C67 * C15210 +
                    ((C272 * C6257 + C68 * C6473) * C2771 +
                     (C272 * C6259 + C68 * C6474) * C14835) *
                        C61 * C67 * C15195) *
                       C14933)) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6939 +
                    (C272 * C120 + C68 * C305) * C15221 -
                    (C272 * C385 + C68 * C688) * C6940 -
                    (C272 * C449 + C68 * C737) * C15217 +
                    (C272 * C387 + C68 * C690) * C6941 +
                    (C272 * C450 + C68 * C738) * C15207 -
                    (C272 * C2772 + C68 * C2933) * C6942 -
                    (C272 * C2807 + C68 * C2959) * C15189) *
                       C61 * C67 * C14835 * C8919 +
                   ((C272 * C1941 + C68 * C2277) * C6940 -
                    ((C272 * C891 + C68 * C1182) * C15221 +
                     (C272 * C829 + C68 * C1132) * C6939) +
                    (C272 * C2003 + C68 * C2333) * C15217 -
                    (C272 * C3024 + C68 * C3288) * C6941 -
                    (C272 * C3073 + C68 * C3331) * C15207 +
                    (C272 * C4209 + C68 * C4425) * C6942 +
                    (C272 * C4247 + C68 * C4461) * C15189) *
                       C61 * C67 * C14835 * C14973)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6623 +
                     (C272 * C120 + C68 * C305) * C6583 -
                     (C272 * C385 + C68 * C688) * C6624 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C15211 +
                    ((C272 * C384 + C68 * C687) * C6624 -
                     ((C272 * C121 + C68 * C306) * C6583 +
                      (C272 * C78 + C68 * C274) * C6623) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C15198 +
                    ((C272 * C79 + C68 * C275) * C6623 +
                     (C272 * C122 + C68 * C307) * C6583 -
                     (C272 * C386 + C68 * C689) * C6624 -
                     (C272 * C453 + C68 * C741) * C14933) *
                        C61 * C67 * C15173) *
                       C8919 +
                   (((C272 * C1941 + C68 * C2277) * C6624 -
                     ((C272 * C891 + C68 * C1182) * C6583 +
                      (C272 * C829 + C68 * C1132) * C6623) +
                     (C272 * C2003 + C68 * C2333) * C14933) *
                        C61 * C67 * C15211 +
                    ((C272 * C828 + C68 * C1131) * C6623 +
                     (C272 * C890 + C68 * C1181) * C6583 -
                     (C272 * C1942 + C68 * C2278) * C6624 -
                     (C272 * C2004 + C68 * C2334) * C14933) *
                        C61 * C67 * C15198 +
                    ((C272 * C1943 + C68 * C2279) * C6624 -
                     ((C272 * C892 + C68 * C1183) * C6583 +
                      (C272 * C830 + C68 * C1133) * C6623) +
                     (C272 * C2005 + C68 * C2335) * C14933) *
                        C61 * C67 * C15173) *
                       C14973)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6623 +
                    (C272 * C120 + C68 * C305) * C6583 -
                    (C272 * C385 + C68 * C688) * C6624 -
                    (C272 * C449 + C68 * C737) * C14933) *
                       C61 * C67 * C14835 * C15222 +
                   ((C272 * C1941 + C68 * C2277) * C6624 -
                    ((C272 * C891 + C68 * C1182) * C6583 +
                     (C272 * C829 + C68 * C1132) * C6623) +
                    (C272 * C2003 + C68 * C2333) * C14933) *
                       C61 * C67 * C14835 * C15219 +
                   ((C272 * C831 + C68 * C1134) * C6623 +
                    (C272 * C893 + C68 * C1184) * C6583 -
                    (C272 * C3023 + C68 * C3287) * C6624 -
                    (C272 * C3074 + C68 * C3332) * C14933) *
                       C61 * C67 * C14835 * C15210 +
                   ((C272 * C6257 + C68 * C6473) * C6624 -
                    ((C272 * C5244 + C68 * C5401) * C6583 +
                     (C272 * C5214 + C68 * C5375) * C6623) +
                    (C272 * C6295 + C68 * C6509) * C14933) *
                       C61 * C67 * C14835 * C15195)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C8989 +
                    (C272 * C153 + C68 * C332) * C8919 -
                    (C272 * C829 + C68 * C1132) * C8990 -
                    (C272 * C943 + C68 * C1225) * C14973) *
                       C61 * C67 * C15221 +
                   ((C272 * C1941 + C68 * C2277) * C8990 -
                    ((C272 * C499 + C68 * C781) * C8919 +
                     (C272 * C385 + C68 * C688) * C8989) +
                    (C272 * C2059 + C68 * C2386) * C14973) *
                       C61 * C67 * C15217 +
                   ((C272 * C387 + C68 * C690) * C8989 +
                    (C272 * C500 + C68 * C782) * C8919 -
                    (C272 * C3024 + C68 * C3288) * C8990 -
                    (C272 * C3118 + C68 * C3373) * C14973) *
                       C61 * C67 * C15207 +
                   ((C272 * C4209 + C68 * C4425) * C8990 -
                    ((C272 * C2833 + C68 * C2983) * C8919 +
                     (C272 * C2772 + C68 * C2933) * C8989) +
                    (C272 * C4283 + C68 * C4496) * C14973) *
                       C61 * C67 * C15189) *
                  C14835) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C8989 +
                     (C272 * C153 + C68 * C332) * C8919 -
                     (C272 * C829 + C68 * C1132) * C8990 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C1941 + C68 * C2277) * C8990 -
                     ((C272 * C499 + C68 * C781) * C8919 +
                      (C272 * C385 + C68 * C688) * C8989) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C14933) *
                       C15211 +
                   (((C272 * C828 + C68 * C1131) * C8990 -
                     ((C272 * C154 + C68 * C333) * C8919 +
                      (C272 * C78 + C68 * C274) * C8989) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C384 + C68 * C687) * C8989 +
                     (C272 * C501 + C68 * C783) * C8919 -
                     (C272 * C1942 + C68 * C2278) * C8990 -
                     (C272 * C2060 + C68 * C2387) * C14973) *
                        C61 * C67 * C14933) *
                       C15198 +
                   (((C272 * C79 + C68 * C275) * C8989 +
                     (C272 * C155 + C68 * C334) * C8919 -
                     (C272 * C830 + C68 * C1133) * C8990 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C1943 + C68 * C2279) * C8990 -
                     ((C272 * C503 + C68 * C785) * C8919 +
                      (C272 * C386 + C68 * C689) * C8989) +
                     (C272 * C2061 + C68 * C2388) * C14973) *
                        C61 * C67 * C14933) *
                       C15173)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C9751 +
                    (C272 * C153 + C68 * C332) * C15222 -
                    (C272 * C829 + C68 * C1132) * C9752 -
                    (C272 * C943 + C68 * C1225) * C15219 +
                    (C272 * C831 + C68 * C1134) * C9753 +
                    (C272 * C944 + C68 * C1226) * C15210 -
                    (C272 * C5214 + C68 * C5375) * C9754 -
                    (C272 * C5275 + C68 * C5425) * C15195) *
                       C61 * C67 * C6583 +
                   ((C272 * C1941 + C68 * C2277) * C9752 -
                    ((C272 * C499 + C68 * C781) * C15222 +
                     (C272 * C385 + C68 * C688) * C9751) +
                    (C272 * C2059 + C68 * C2386) * C15219 -
                    (C272 * C3023 + C68 * C3287) * C9753 -
                    (C272 * C3117 + C68 * C3372) * C15210 +
                    (C272 * C6257 + C68 * C6473) * C9754 +
                    (C272 * C6331 + C68 * C6544) * C15195) *
                       C61 * C67 * C14933) *
                  C14835) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C13575 +
                     (C71 * C83 + C61 * C92) * C15139 -
                     (C71 * C78 + C61 * C84) * C13556 -
                     (C71 * C85 + C61 * C93) * C14845) *
                        C67 * C68 * C14969 +
                    ((C71 * C828 + C61 * C834) * C13556 -
                     ((C71 * C835 + C61 * C846) * C15139 +
                      (C71 * C829 + C61 * C836) * C13575) +
                     (C71 * C837 + C61 * C847) * C14845) *
                        C67 * C68 * C14976 +
                    ((C71 * C831 + C61 * C840) * C13575 +
                     (C71 * C841 + C61 * C849) * C15139 -
                     (C71 * C832 + C61 * C842) * C13556 -
                     (C71 * C843 + C61 * C850) * C14845) *
                        C67 * C68 * C10449) *
                       C6583 +
                   (((C71 * C384 + C61 * C390) * C13556 -
                     ((C71 * C391 + C61 * C402) * C15139 +
                      (C71 * C385 + C61 * C392) * C13575) +
                     (C71 * C393 + C61 * C403) * C14845) *
                        C67 * C68 * C14969 +
                    ((C71 * C1941 + C61 * C1944) * C13575 +
                     (C71 * C1945 + C61 * C1950) * C15139 -
                     (C71 * C1942 + C61 * C1946) * C13556 -
                     (C71 * C1947 + C61 * C1951) * C14845) *
                        C67 * C68 * C14976 +
                    ((C71 * C5477 + C61 * C5478) * C13556 -
                     ((C71 * C3026 + C61 * C3032) * C15139 +
                      (C71 * C3023 + C61 * C3027) * C13575) +
                     (C71 * C5479 + C61 * C5480) * C14845) *
                        C67 * C68 * C10449) *
                       C14933)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C6623 +
                     (C71 * C120 + C61 * C125) * C6583 -
                     (C71 * C385 + C61 * C392) * C6624 -
                     (C71 * C449 + C61 * C455) * C14933) *
                        C67 * C68 * C15139 +
                    ((C71 * C384 + C61 * C390) * C6624 -
                     ((C71 * C121 + C61 * C126) * C6583 +
                      (C71 * C78 + C61 * C84) * C6623) +
                     (C71 * C451 + C61 * C457) * C14933) *
                        C67 * C68 * C14845) *
                       C14969 +
                   (((C71 * C1941 + C61 * C1944) * C6624 -
                     ((C71 * C891 + C61 * C897) * C6583 +
                      (C71 * C829 + C61 * C836) * C6623) +
                     (C71 * C2003 + C61 * C2006) * C14933) *
                        C67 * C68 * C15139 +
                    ((C71 * C828 + C61 * C834) * C6623 +
                     (C71 * C890 + C61 * C896) * C6583 -
                     (C71 * C1942 + C61 * C1946) * C6624 -
                     (C71 * C2004 + C61 * C2007) * C14933) *
                        C67 * C68 * C14845) *
                       C14976 +
                   (((C71 * C831 + C61 * C840) * C6623 +
                     (C71 * C893 + C61 * C899) * C6583 -
                     (C71 * C3023 + C61 * C3027) * C6624 -
                     (C71 * C3074 + C61 * C3077) * C14933) *
                        C67 * C68 * C15139 +
                    ((C71 * C5477 + C61 * C5478) * C6624 -
                     ((C71 * C894 + C61 * C900) * C6583 +
                      (C71 * C832 + C61 * C842) * C6623) +
                     (C71 * C5531 + C61 * C5532) * C14933) *
                        C67 * C68 * C14845) *
                       C10449)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C13824 +
                     (C71 * C153 + C61 * C158) * C14969 -
                     (C71 * C829 + C61 * C836) * C13816 -
                     (C71 * C943 + C61 * C949) * C14976 +
                     (C71 * C831 + C61 * C840) * C13830 +
                     (C71 * C944 + C61 * C950) * C10449) *
                        C67 * C68 * C6583 +
                    ((C71 * C1941 + C61 * C1944) * C13816 -
                     ((C71 * C499 + C61 * C505) * C14969 +
                      (C71 * C385 + C61 * C392) * C13824) +
                     (C71 * C2059 + C61 * C2062) * C14976 -
                     (C71 * C3023 + C61 * C3027) * C13830 -
                     (C71 * C3117 + C61 * C3120) * C10449) *
                        C67 * C68 * C14933) *
                       C15139 +
                   (((C71 * C828 + C61 * C834) * C13816 -
                     ((C71 * C154 + C61 * C159) * C14969 +
                      (C71 * C78 + C61 * C84) * C13824) +
                     (C71 * C945 + C61 * C951) * C14976 -
                     (C71 * C832 + C61 * C842) * C13830 -
                     (C71 * C946 + C61 * C952) * C10449) *
                        C67 * C68 * C6583 +
                    ((C71 * C384 + C61 * C390) * C13824 +
                     (C71 * C501 + C61 * C507) * C14969 -
                     (C71 * C1942 + C61 * C1946) * C13816 -
                     (C71 * C2060 + C61 * C2063) * C14976 +
                     (C71 * C5477 + C61 * C5478) * C13830 +
                     (C71 * C5583 + C61 * C5584) * C10449) *
                        C67 * C68 * C14933) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C13575 +
                     (C185 * C83 + C67 * C191) * C15139 -
                     (C185 * C78 + C67 * C187) * C13556 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C14969 +
                    ((C185 * C828 + C67 * C993) * C13556 -
                     ((C185 * C835 + C67 * C999) * C15139 +
                      (C185 * C829 + C67 * C994) * C13575) +
                     (C185 * C837 + C67 * C1000) * C14845) *
                        C68 * C61 * C14976 +
                    ((C185 * C831 + C67 * C996) * C13575 +
                     (C185 * C841 + C67 * C1002) * C15139 -
                     (C185 * C832 + C67 * C997) * C13556 -
                     (C185 * C843 + C67 * C1003) * C14845) *
                        C68 * C61 * C10449) *
                       C6583 +
                   (((C185 * C384 + C67 * C549) * C13556 -
                     ((C185 * C391 + C67 * C555) * C15139 +
                      (C185 * C385 + C67 * C550) * C13575) +
                     (C185 * C393 + C67 * C556) * C14845) *
                        C68 * C61 * C14969 +
                    ((C185 * C1941 + C67 * C2115) * C13575 +
                     (C185 * C1945 + C67 * C2118) * C15139 -
                     (C185 * C1942 + C67 * C2116) * C13556 -
                     (C185 * C1947 + C67 * C2119) * C14845) *
                        C68 * C61 * C14976 +
                    ((C185 * C5477 + C67 * C5635) * C13556 -
                     ((C185 * C3026 + C67 * C3164) * C15139 +
                      (C185 * C3023 + C67 * C3161) * C13575) +
                     (C185 * C5479 + C67 * C5636) * C14845) *
                        C68 * C61 * C10449) *
                       C14933)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6623 +
                     (C185 * C120 + C67 * C218) * C6583 -
                     (C185 * C385 + C67 * C550) * C6624 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C15139 +
                    ((C185 * C384 + C67 * C549) * C6624 -
                     ((C185 * C121 + C67 * C219) * C6583 +
                      (C185 * C78 + C67 * C187) * C6623) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C14845) *
                       C14969 +
                   (((C185 * C1941 + C67 * C2115) * C6624 -
                     ((C185 * C891 + C67 * C1044) * C6583 +
                      (C185 * C829 + C67 * C994) * C6623) +
                     (C185 * C2003 + C67 * C2171) * C14933) *
                        C68 * C61 * C15139 +
                    ((C185 * C828 + C67 * C993) * C6623 +
                     (C185 * C890 + C67 * C1043) * C6583 -
                     (C185 * C1942 + C67 * C2116) * C6624 -
                     (C185 * C2004 + C67 * C2172) * C14933) *
                        C68 * C61 * C14845) *
                       C14976 +
                   (((C185 * C831 + C67 * C996) * C6623 +
                     (C185 * C893 + C67 * C1046) * C6583 -
                     (C185 * C3023 + C67 * C3161) * C6624 -
                     (C185 * C3074 + C67 * C3206) * C14933) *
                        C68 * C61 * C15139 +
                    ((C185 * C5477 + C67 * C5635) * C6624 -
                     ((C185 * C894 + C67 * C1047) * C6583 +
                      (C185 * C832 + C67 * C997) * C6623) +
                     (C185 * C5531 + C67 * C5687) * C14933) *
                        C68 * C61 * C14845) *
                       C10449)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C13824 +
                     (C185 * C153 + C67 * C245) * C14969 -
                     (C185 * C829 + C67 * C994) * C13816 -
                     (C185 * C943 + C67 * C1087) * C14976 +
                     (C185 * C831 + C67 * C996) * C13830 +
                     (C185 * C944 + C67 * C1088) * C10449) *
                        C68 * C61 * C6583 +
                    ((C185 * C1941 + C67 * C2115) * C13816 -
                     ((C185 * C499 + C67 * C643) * C14969 +
                      (C185 * C385 + C67 * C550) * C13824) +
                     (C185 * C2059 + C67 * C2224) * C14976 -
                     (C185 * C3023 + C67 * C3161) * C13830 -
                     (C185 * C3117 + C67 * C3246) * C10449) *
                        C68 * C61 * C14933) *
                       C15139 +
                   (((C185 * C828 + C67 * C993) * C13816 -
                     ((C185 * C154 + C67 * C246) * C14969 +
                      (C185 * C78 + C67 * C187) * C13824) +
                     (C185 * C945 + C67 * C1089) * C14976 -
                     (C185 * C832 + C67 * C997) * C13830 -
                     (C185 * C946 + C67 * C1090) * C10449) *
                        C68 * C61 * C6583 +
                    ((C185 * C384 + C67 * C549) * C13824 +
                     (C185 * C501 + C67 * C645) * C14969 -
                     (C185 * C1942 + C67 * C2116) * C13816 -
                     (C185 * C2060 + C67 * C2225) * C14976 +
                     (C185 * C5477 + C67 * C5635) * C13830 +
                     (C185 * C5583 + C67 * C5738) * C10449) *
                        C68 * C61 * C14933) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C13575 +
                     (C272 * C83 + C68 * C278) * C15139 -
                     (C272 * C78 + C68 * C274) * C13556 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C14969 +
                    ((C272 * C828 + C68 * C1131) * C13556 -
                     ((C272 * C835 + C68 * C1137) * C15139 +
                      (C272 * C829 + C68 * C1132) * C13575) +
                     (C272 * C837 + C68 * C1138) * C14845) *
                        C61 * C67 * C14976 +
                    ((C272 * C831 + C68 * C1134) * C13575 +
                     (C272 * C841 + C68 * C1140) * C15139 -
                     (C272 * C832 + C68 * C1135) * C13556 -
                     (C272 * C843 + C68 * C1141) * C14845) *
                        C61 * C67 * C10449) *
                       C6583 +
                   (((C272 * C384 + C68 * C687) * C13556 -
                     ((C272 * C391 + C68 * C693) * C15139 +
                      (C272 * C385 + C68 * C688) * C13575) +
                     (C272 * C393 + C68 * C694) * C14845) *
                        C61 * C67 * C14969 +
                    ((C272 * C1941 + C68 * C2277) * C13575 +
                     (C272 * C1945 + C68 * C2280) * C15139 -
                     (C272 * C1942 + C68 * C2278) * C13556 -
                     (C272 * C1947 + C68 * C2281) * C14845) *
                        C61 * C67 * C14976 +
                    ((C272 * C5477 + C68 * C5789) * C13556 -
                     ((C272 * C3026 + C68 * C3290) * C15139 +
                      (C272 * C3023 + C68 * C3287) * C13575) +
                     (C272 * C5479 + C68 * C5790) * C14845) *
                        C61 * C67 * C10449) *
                       C14933)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6623 +
                     (C272 * C120 + C68 * C305) * C6583 -
                     (C272 * C385 + C68 * C688) * C6624 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C15139 +
                    ((C272 * C384 + C68 * C687) * C6624 -
                     ((C272 * C121 + C68 * C306) * C6583 +
                      (C272 * C78 + C68 * C274) * C6623) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C14845) *
                       C14969 +
                   (((C272 * C1941 + C68 * C2277) * C6624 -
                     ((C272 * C891 + C68 * C1182) * C6583 +
                      (C272 * C829 + C68 * C1132) * C6623) +
                     (C272 * C2003 + C68 * C2333) * C14933) *
                        C61 * C67 * C15139 +
                    ((C272 * C828 + C68 * C1131) * C6623 +
                     (C272 * C890 + C68 * C1181) * C6583 -
                     (C272 * C1942 + C68 * C2278) * C6624 -
                     (C272 * C2004 + C68 * C2334) * C14933) *
                        C61 * C67 * C14845) *
                       C14976 +
                   (((C272 * C831 + C68 * C1134) * C6623 +
                     (C272 * C893 + C68 * C1184) * C6583 -
                     (C272 * C3023 + C68 * C3287) * C6624 -
                     (C272 * C3074 + C68 * C3332) * C14933) *
                        C61 * C67 * C15139 +
                    ((C272 * C5477 + C68 * C5789) * C6624 -
                     ((C272 * C894 + C68 * C1185) * C6583 +
                      (C272 * C832 + C68 * C1135) * C6623) +
                     (C272 * C5531 + C68 * C5841) * C14933) *
                        C61 * C67 * C14845) *
                       C10449)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C13824 +
                     (C272 * C153 + C68 * C332) * C14969 -
                     (C272 * C829 + C68 * C1132) * C13816 -
                     (C272 * C943 + C68 * C1225) * C14976 +
                     (C272 * C831 + C68 * C1134) * C13830 +
                     (C272 * C944 + C68 * C1226) * C10449) *
                        C61 * C67 * C6583 +
                    ((C272 * C1941 + C68 * C2277) * C13816 -
                     ((C272 * C499 + C68 * C781) * C14969 +
                      (C272 * C385 + C68 * C688) * C13824) +
                     (C272 * C2059 + C68 * C2386) * C14976 -
                     (C272 * C3023 + C68 * C3287) * C13830 -
                     (C272 * C3117 + C68 * C3372) * C10449) *
                        C61 * C67 * C14933) *
                       C15139 +
                   (((C272 * C828 + C68 * C1131) * C13816 -
                     ((C272 * C154 + C68 * C333) * C14969 +
                      (C272 * C78 + C68 * C274) * C13824) +
                     (C272 * C945 + C68 * C1227) * C14976 -
                     (C272 * C832 + C68 * C1135) * C13830 -
                     (C272 * C946 + C68 * C1228) * C10449) *
                        C61 * C67 * C6583 +
                    ((C272 * C384 + C68 * C687) * C13824 +
                     (C272 * C501 + C68 * C783) * C14969 -
                     (C272 * C1942 + C68 * C2278) * C13816 -
                     (C272 * C2060 + C68 * C2387) * C14976 +
                     (C272 * C5477 + C68 * C5789) * C13830 +
                     (C272 * C5583 + C68 * C5892) * C10449) *
                        C61 * C67 * C14933) *
                       C14845)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
            (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
            (C71 * C79 + C61 * C86) * C2435 +
            (C71 * C87 + C61 * C94) * C15173) *
               C67 * C68 * C8919 +
           ((C71 * C828 + C61 * C834) * C2434 -
            ((C71 * C835 + C61 * C846) * C15211 +
             (C71 * C829 + C61 * C836) * C2433) +
            (C71 * C837 + C61 * C847) * C15198 -
            (C71 * C830 + C61 * C838) * C2435 -
            (C71 * C839 + C61 * C848) * C15173) *
               C67 * C68 * C14973) *
              C6583 +
          (((C71 * C384 + C61 * C390) * C2434 -
            ((C71 * C391 + C61 * C402) * C15211 +
             (C71 * C385 + C61 * C392) * C2433) +
            (C71 * C393 + C61 * C403) * C15198 -
            (C71 * C386 + C61 * C394) * C2435 -
            (C71 * C395 + C61 * C404) * C15173) *
               C67 * C68 * C8919 +
           ((C71 * C1941 + C61 * C1944) * C2433 +
            (C71 * C1945 + C61 * C1950) * C15211 -
            (C71 * C1942 + C61 * C1946) * C2434 -
            (C71 * C1947 + C61 * C1951) * C15198 +
            (C71 * C1943 + C61 * C1948) * C2435 +
            (C71 * C1949 + C61 * C1952) * C15173) *
               C67 * C68 * C14973) *
              C14933)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C8919 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C14973) *
              C15221 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C8919) *
              C15217 +
          (((C71 * C387 + C61 * C396) * C2771 +
            (C71 * C397 + C61 * C405) * C14835) *
               C67 * C68 * C8919 -
           ((C71 * C3028 + C61 * C3033) * C14835 +
            (C71 * C3024 + C61 * C3029) * C2771) *
               C67 * C68 * C14973) *
              C15207 +
          (((C71 * C4209 + C61 * C4210) * C2771 +
            (C71 * C4211 + C61 * C4212) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C2774 + C61 * C2778) * C14835 +
            (C71 * C2772 + C61 * C2775) * C2771) *
               C67 * C68 * C8919) *
              C15189)) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C71 * C77 + C61 * C82) * C6623 +
                     (C71 * C120 + C61 * C125) * C6583 -
                     (C71 * C385 + C61 * C392) * C6624 -
                     (C71 * C449 + C61 * C455) * C14933) *
                        C67 * C68 * C15211 +
                    ((C71 * C384 + C61 * C390) * C6624 -
                     ((C71 * C121 + C61 * C126) * C6583 +
                      (C71 * C78 + C61 * C84) * C6623) +
                     (C71 * C451 + C61 * C457) * C14933) *
                        C67 * C68 * C15198 +
                    ((C71 * C79 + C61 * C86) * C6623 +
                     (C71 * C122 + C61 * C127) * C6583 -
                     (C71 * C386 + C61 * C394) * C6624 -
                     (C71 * C453 + C61 * C459) * C14933) *
                        C67 * C68 * C15173) *
                       C8919 +
                   (((C71 * C1941 + C61 * C1944) * C6624 -
                     ((C71 * C891 + C61 * C897) * C6583 +
                      (C71 * C829 + C61 * C836) * C6623) +
                     (C71 * C2003 + C61 * C2006) * C14933) *
                        C67 * C68 * C15211 +
                    ((C71 * C828 + C61 * C834) * C6623 +
                     (C71 * C890 + C61 * C896) * C6583 -
                     (C71 * C1942 + C61 * C1946) * C6624 -
                     (C71 * C2004 + C61 * C2007) * C14933) *
                        C67 * C68 * C15198 +
                    ((C71 * C1943 + C61 * C1948) * C6624 -
                     ((C71 * C892 + C61 * C898) * C6583 +
                      (C71 * C830 + C61 * C838) * C6623) +
                     (C71 * C2005 + C61 * C2008) * C14933) *
                        C67 * C68 * C15173) *
                       C14973)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C71 * C77 + C61 * C82) * C6939 +
                    (C71 * C120 + C61 * C125) * C15221 -
                    (C71 * C385 + C61 * C392) * C6940 -
                    (C71 * C449 + C61 * C455) * C15217 +
                    (C71 * C387 + C61 * C396) * C6941 +
                    (C71 * C450 + C61 * C456) * C15207 -
                    (C71 * C2772 + C61 * C2775) * C6942 -
                    (C71 * C2807 + C61 * C2809) * C15189) *
                       C67 * C68 * C14835 * C8919 +
                   ((C71 * C1941 + C61 * C1944) * C6940 -
                    ((C71 * C891 + C61 * C897) * C15221 +
                     (C71 * C829 + C61 * C836) * C6939) +
                    (C71 * C2003 + C61 * C2006) * C15217 -
                    (C71 * C3024 + C61 * C3029) * C6941 -
                    (C71 * C3073 + C61 * C3076) * C15207 +
                    (C71 * C4209 + C61 * C4210) * C6942 +
                    (C71 * C4247 + C61 * C4248) * C15189) *
                       C67 * C68 * C14835 * C14973)) /
                     (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C8989 +
            (C71 * C153 + C61 * C158) * C8919 -
            (C71 * C829 + C61 * C836) * C8990 -
            (C71 * C943 + C61 * C949) * C14973) *
               C67 * C68 * C6583 +
           ((C71 * C1941 + C61 * C1944) * C8990 -
            ((C71 * C499 + C61 * C505) * C8919 +
             (C71 * C385 + C61 * C392) * C8989) +
            (C71 * C2059 + C61 * C2062) * C14973) *
               C67 * C68 * C14933) *
              C15211 +
          (((C71 * C828 + C61 * C834) * C8990 -
            ((C71 * C154 + C61 * C159) * C8919 +
             (C71 * C78 + C61 * C84) * C8989) +
            (C71 * C945 + C61 * C951) * C14973) *
               C67 * C68 * C6583 +
           ((C71 * C384 + C61 * C390) * C8989 +
            (C71 * C501 + C61 * C507) * C8919 -
            (C71 * C1942 + C61 * C1946) * C8990 -
            (C71 * C2060 + C61 * C2063) * C14973) *
               C67 * C68 * C14933) *
              C15198 +
          (((C71 * C79 + C61 * C86) * C8989 +
            (C71 * C155 + C61 * C160) * C8919 -
            (C71 * C830 + C61 * C838) * C8990 -
            (C71 * C947 + C61 * C953) * C14973) *
               C67 * C68 * C6583 +
           ((C71 * C1943 + C61 * C1948) * C8990 -
            ((C71 * C503 + C61 * C509) * C8919 +
             (C71 * C386 + C61 * C394) * C8989) +
            (C71 * C2061 + C61 * C2064) * C14973) *
               C67 * C68 * C14933) *
              C15173)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C8989 + (C71 * C153 + C61 * C158) * C8919 -
           (C71 * C829 + C61 * C836) * C8990 -
           (C71 * C943 + C61 * C949) * C14973) *
              C67 * C68 * C15221 +
          ((C71 * C1941 + C61 * C1944) * C8990 -
           ((C71 * C499 + C61 * C505) * C8919 +
            (C71 * C385 + C61 * C392) * C8989) +
           (C71 * C2059 + C61 * C2062) * C14973) *
              C67 * C68 * C15217 +
          ((C71 * C387 + C61 * C396) * C8989 +
           (C71 * C500 + C61 * C506) * C8919 -
           (C71 * C3024 + C61 * C3029) * C8990 -
           (C71 * C3118 + C61 * C3121) * C14973) *
              C67 * C68 * C15207 +
          ((C71 * C4209 + C61 * C4210) * C8990 -
           ((C71 * C2833 + C61 * C2835) * C8919 +
            (C71 * C2772 + C61 * C2775) * C8989) +
           (C71 * C4283 + C61 * C4284) * C14973) *
              C67 * C68 * C15189) *
         C14835) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C2433 +
                     (C185 * C83 + C67 * C191) * C15211 -
                     (C185 * C78 + C67 * C187) * C2434 -
                     (C185 * C85 + C67 * C192) * C15198 +
                     (C185 * C79 + C67 * C188) * C2435 +
                     (C185 * C87 + C67 * C193) * C15173) *
                        C68 * C61 * C8919 +
                    ((C185 * C828 + C67 * C993) * C2434 -
                     ((C185 * C835 + C67 * C999) * C15211 +
                      (C185 * C829 + C67 * C994) * C2433) +
                     (C185 * C837 + C67 * C1000) * C15198 -
                     (C185 * C830 + C67 * C995) * C2435 -
                     (C185 * C839 + C67 * C1001) * C15173) *
                        C68 * C61 * C14973) *
                       C6583 +
                   (((C185 * C384 + C67 * C549) * C2434 -
                     ((C185 * C391 + C67 * C555) * C15211 +
                      (C185 * C385 + C67 * C550) * C2433) +
                     (C185 * C393 + C67 * C556) * C15198 -
                     (C185 * C386 + C67 * C551) * C2435 -
                     (C185 * C395 + C67 * C557) * C15173) *
                        C68 * C61 * C8919 +
                    ((C185 * C1941 + C67 * C2115) * C2433 +
                     (C185 * C1945 + C67 * C2118) * C15211 -
                     (C185 * C1942 + C67 * C2116) * C2434 -
                     (C185 * C1947 + C67 * C2119) * C15198 +
                     (C185 * C1943 + C67 * C2117) * C2435 +
                     (C185 * C1949 + C67 * C2120) * C15173) *
                        C68 * C61 * C14973) *
                       C14933)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C2771 +
                     (C185 * C83 + C67 * C191) * C14835) *
                        C68 * C61 * C8919 -
                    ((C185 * C835 + C67 * C999) * C14835 +
                     (C185 * C829 + C67 * C994) * C2771) *
                        C68 * C61 * C14973) *
                       C15221 +
                   (((C185 * C1941 + C67 * C2115) * C2771 +
                     (C185 * C1945 + C67 * C2118) * C14835) *
                        C68 * C61 * C14973 -
                    ((C185 * C391 + C67 * C555) * C14835 +
                     (C185 * C385 + C67 * C550) * C2771) *
                        C68 * C61 * C8919) *
                       C15217 +
                   (((C185 * C387 + C67 * C552) * C2771 +
                     (C185 * C397 + C67 * C558) * C14835) *
                        C68 * C61 * C8919 -
                    ((C185 * C3028 + C67 * C3165) * C14835 +
                     (C185 * C3024 + C67 * C3162) * C2771) *
                        C68 * C61 * C14973) *
                       C15207 +
                   (((C185 * C4209 + C67 * C4319) * C2771 +
                     (C185 * C4211 + C67 * C4320) * C14835) *
                        C68 * C61 * C14973 -
                    ((C185 * C2774 + C67 * C2861) * C14835 +
                     (C185 * C2772 + C67 * C2859) * C2771) *
                        C68 * C61 * C8919) *
                       C15189)) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C6623 +
                     (C185 * C120 + C67 * C218) * C6583 -
                     (C185 * C385 + C67 * C550) * C6624 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C15211 +
                    ((C185 * C384 + C67 * C549) * C6624 -
                     ((C185 * C121 + C67 * C219) * C6583 +
                      (C185 * C78 + C67 * C187) * C6623) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C15198 +
                    ((C185 * C79 + C67 * C188) * C6623 +
                     (C185 * C122 + C67 * C220) * C6583 -
                     (C185 * C386 + C67 * C551) * C6624 -
                     (C185 * C453 + C67 * C603) * C14933) *
                        C68 * C61 * C15173) *
                       C8919 +
                   (((C185 * C1941 + C67 * C2115) * C6624 -
                     ((C185 * C891 + C67 * C1044) * C6583 +
                      (C185 * C829 + C67 * C994) * C6623) +
                     (C185 * C2003 + C67 * C2171) * C14933) *
                        C68 * C61 * C15211 +
                    ((C185 * C828 + C67 * C993) * C6623 +
                     (C185 * C890 + C67 * C1043) * C6583 -
                     (C185 * C1942 + C67 * C2116) * C6624 -
                     (C185 * C2004 + C67 * C2172) * C14933) *
                        C68 * C61 * C15198 +
                    ((C185 * C1943 + C67 * C2117) * C6624 -
                     ((C185 * C892 + C67 * C1045) * C6583 +
                      (C185 * C830 + C67 * C995) * C6623) +
                     (C185 * C2005 + C67 * C2173) * C14933) *
                        C68 * C61 * C15173) *
                       C14973)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C6939 +
                    (C185 * C120 + C67 * C218) * C15221 -
                    (C185 * C385 + C67 * C550) * C6940 -
                    (C185 * C449 + C67 * C599) * C15217 +
                    (C185 * C387 + C67 * C552) * C6941 +
                    (C185 * C450 + C67 * C600) * C15207 -
                    (C185 * C2772 + C67 * C2859) * C6942 -
                    (C185 * C2807 + C67 * C2885) * C15189) *
                       C68 * C61 * C14835 * C8919 +
                   ((C185 * C1941 + C67 * C2115) * C6940 -
                    ((C185 * C891 + C67 * C1044) * C15221 +
                     (C185 * C829 + C67 * C994) * C6939) +
                    (C185 * C2003 + C67 * C2171) * C15217 -
                    (C185 * C3024 + C67 * C3162) * C6941 -
                    (C185 * C3073 + C67 * C3205) * C15207 +
                    (C185 * C4209 + C67 * C4319) * C6942 +
                    (C185 * C4247 + C67 * C4355) * C15189) *
                       C68 * C61 * C14835 * C14973)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C185 * C77 + C67 * C186) * C8989 +
                     (C185 * C153 + C67 * C245) * C8919 -
                     (C185 * C829 + C67 * C994) * C8990 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C1941 + C67 * C2115) * C8990 -
                     ((C185 * C499 + C67 * C643) * C8919 +
                      (C185 * C385 + C67 * C550) * C8989) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C14933) *
                       C15211 +
                   (((C185 * C828 + C67 * C993) * C8990 -
                     ((C185 * C154 + C67 * C246) * C8919 +
                      (C185 * C78 + C67 * C187) * C8989) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C384 + C67 * C549) * C8989 +
                     (C185 * C501 + C67 * C645) * C8919 -
                     (C185 * C1942 + C67 * C2116) * C8990 -
                     (C185 * C2060 + C67 * C2225) * C14973) *
                        C68 * C61 * C14933) *
                       C15198 +
                   (((C185 * C79 + C67 * C188) * C8989 +
                     (C185 * C155 + C67 * C247) * C8919 -
                     (C185 * C830 + C67 * C995) * C8990 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C6583 +
                    ((C185 * C1943 + C67 * C2117) * C8990 -
                     ((C185 * C503 + C67 * C647) * C8919 +
                      (C185 * C386 + C67 * C551) * C8989) +
                     (C185 * C2061 + C67 * C2226) * C14973) *
                        C68 * C61 * C14933) *
                       C15173)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C185 * C77 + C67 * C186) * C8989 +
                    (C185 * C153 + C67 * C245) * C8919 -
                    (C185 * C829 + C67 * C994) * C8990 -
                    (C185 * C943 + C67 * C1087) * C14973) *
                       C68 * C61 * C15221 +
                   ((C185 * C1941 + C67 * C2115) * C8990 -
                    ((C185 * C499 + C67 * C643) * C8919 +
                     (C185 * C385 + C67 * C550) * C8989) +
                    (C185 * C2059 + C67 * C2224) * C14973) *
                       C68 * C61 * C15217 +
                   ((C185 * C387 + C67 * C552) * C8989 +
                    (C185 * C500 + C67 * C644) * C8919 -
                    (C185 * C3024 + C67 * C3162) * C8990 -
                    (C185 * C3118 + C67 * C3247) * C14973) *
                       C68 * C61 * C15207 +
                   ((C185 * C4209 + C67 * C4319) * C8990 -
                    ((C185 * C2833 + C67 * C2909) * C8919 +
                     (C185 * C2772 + C67 * C2859) * C8989) +
                    (C185 * C4283 + C67 * C4390) * C14973) *
                       C68 * C61 * C15189) *
                  C14835) /
                     (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C2433 +
                     (C272 * C83 + C68 * C278) * C15211 -
                     (C272 * C78 + C68 * C274) * C2434 -
                     (C272 * C85 + C68 * C279) * C15198 +
                     (C272 * C79 + C68 * C275) * C2435 +
                     (C272 * C87 + C68 * C280) * C15173) *
                        C61 * C67 * C8919 +
                    ((C272 * C828 + C68 * C1131) * C2434 -
                     ((C272 * C835 + C68 * C1137) * C15211 +
                      (C272 * C829 + C68 * C1132) * C2433) +
                     (C272 * C837 + C68 * C1138) * C15198 -
                     (C272 * C830 + C68 * C1133) * C2435 -
                     (C272 * C839 + C68 * C1139) * C15173) *
                        C61 * C67 * C14973) *
                       C6583 +
                   (((C272 * C384 + C68 * C687) * C2434 -
                     ((C272 * C391 + C68 * C693) * C15211 +
                      (C272 * C385 + C68 * C688) * C2433) +
                     (C272 * C393 + C68 * C694) * C15198 -
                     (C272 * C386 + C68 * C689) * C2435 -
                     (C272 * C395 + C68 * C695) * C15173) *
                        C61 * C67 * C8919 +
                    ((C272 * C1941 + C68 * C2277) * C2433 +
                     (C272 * C1945 + C68 * C2280) * C15211 -
                     (C272 * C1942 + C68 * C2278) * C2434 -
                     (C272 * C1947 + C68 * C2281) * C15198 +
                     (C272 * C1943 + C68 * C2279) * C2435 +
                     (C272 * C1949 + C68 * C2282) * C15173) *
                        C61 * C67 * C14973) *
                       C14933)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C2771 +
                     (C272 * C83 + C68 * C278) * C14835) *
                        C61 * C67 * C8919 -
                    ((C272 * C835 + C68 * C1137) * C14835 +
                     (C272 * C829 + C68 * C1132) * C2771) *
                        C61 * C67 * C14973) *
                       C15221 +
                   (((C272 * C1941 + C68 * C2277) * C2771 +
                     (C272 * C1945 + C68 * C2280) * C14835) *
                        C61 * C67 * C14973 -
                    ((C272 * C391 + C68 * C693) * C14835 +
                     (C272 * C385 + C68 * C688) * C2771) *
                        C61 * C67 * C8919) *
                       C15217 +
                   (((C272 * C387 + C68 * C690) * C2771 +
                     (C272 * C397 + C68 * C696) * C14835) *
                        C61 * C67 * C8919 -
                    ((C272 * C3028 + C68 * C3291) * C14835 +
                     (C272 * C3024 + C68 * C3288) * C2771) *
                        C61 * C67 * C14973) *
                       C15207 +
                   (((C272 * C4209 + C68 * C4425) * C2771 +
                     (C272 * C4211 + C68 * C4426) * C14835) *
                        C61 * C67 * C14973 -
                    ((C272 * C2774 + C68 * C2935) * C14835 +
                     (C272 * C2772 + C68 * C2933) * C2771) *
                        C61 * C67 * C8919) *
                       C15189)) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C6623 +
                     (C272 * C120 + C68 * C305) * C6583 -
                     (C272 * C385 + C68 * C688) * C6624 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C15211 +
                    ((C272 * C384 + C68 * C687) * C6624 -
                     ((C272 * C121 + C68 * C306) * C6583 +
                      (C272 * C78 + C68 * C274) * C6623) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C15198 +
                    ((C272 * C79 + C68 * C275) * C6623 +
                     (C272 * C122 + C68 * C307) * C6583 -
                     (C272 * C386 + C68 * C689) * C6624 -
                     (C272 * C453 + C68 * C741) * C14933) *
                        C61 * C67 * C15173) *
                       C8919 +
                   (((C272 * C1941 + C68 * C2277) * C6624 -
                     ((C272 * C891 + C68 * C1182) * C6583 +
                      (C272 * C829 + C68 * C1132) * C6623) +
                     (C272 * C2003 + C68 * C2333) * C14933) *
                        C61 * C67 * C15211 +
                    ((C272 * C828 + C68 * C1131) * C6623 +
                     (C272 * C890 + C68 * C1181) * C6583 -
                     (C272 * C1942 + C68 * C2278) * C6624 -
                     (C272 * C2004 + C68 * C2334) * C14933) *
                        C61 * C67 * C15198 +
                    ((C272 * C1943 + C68 * C2279) * C6624 -
                     ((C272 * C892 + C68 * C1183) * C6583 +
                      (C272 * C830 + C68 * C1133) * C6623) +
                     (C272 * C2005 + C68 * C2335) * C14933) *
                        C61 * C67 * C15173) *
                       C14973)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C6939 +
                    (C272 * C120 + C68 * C305) * C15221 -
                    (C272 * C385 + C68 * C688) * C6940 -
                    (C272 * C449 + C68 * C737) * C15217 +
                    (C272 * C387 + C68 * C690) * C6941 +
                    (C272 * C450 + C68 * C738) * C15207 -
                    (C272 * C2772 + C68 * C2933) * C6942 -
                    (C272 * C2807 + C68 * C2959) * C15189) *
                       C61 * C67 * C14835 * C8919 +
                   ((C272 * C1941 + C68 * C2277) * C6940 -
                    ((C272 * C891 + C68 * C1182) * C15221 +
                     (C272 * C829 + C68 * C1132) * C6939) +
                    (C272 * C2003 + C68 * C2333) * C15217 -
                    (C272 * C3024 + C68 * C3288) * C6941 -
                    (C272 * C3073 + C68 * C3331) * C15207 +
                    (C272 * C4209 + C68 * C4425) * C6942 +
                    (C272 * C4247 + C68 * C4461) * C15189) *
                       C61 * C67 * C14835 * C14973)) /
                     (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C272 * C77 + C68 * C273) * C8989 +
                     (C272 * C153 + C68 * C332) * C8919 -
                     (C272 * C829 + C68 * C1132) * C8990 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C1941 + C68 * C2277) * C8990 -
                     ((C272 * C499 + C68 * C781) * C8919 +
                      (C272 * C385 + C68 * C688) * C8989) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C14933) *
                       C15211 +
                   (((C272 * C828 + C68 * C1131) * C8990 -
                     ((C272 * C154 + C68 * C333) * C8919 +
                      (C272 * C78 + C68 * C274) * C8989) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C384 + C68 * C687) * C8989 +
                     (C272 * C501 + C68 * C783) * C8919 -
                     (C272 * C1942 + C68 * C2278) * C8990 -
                     (C272 * C2060 + C68 * C2387) * C14973) *
                        C61 * C67 * C14933) *
                       C15198 +
                   (((C272 * C79 + C68 * C275) * C8989 +
                     (C272 * C155 + C68 * C334) * C8919 -
                     (C272 * C830 + C68 * C1133) * C8990 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C6583 +
                    ((C272 * C1943 + C68 * C2279) * C8990 -
                     ((C272 * C503 + C68 * C785) * C8919 +
                      (C272 * C386 + C68 * C689) * C8989) +
                     (C272 * C2061 + C68 * C2388) * C14973) *
                        C61 * C67 * C14933) *
                       C15173)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C272 * C77 + C68 * C273) * C8989 +
                    (C272 * C153 + C68 * C332) * C8919 -
                    (C272 * C829 + C68 * C1132) * C8990 -
                    (C272 * C943 + C68 * C1225) * C14973) *
                       C61 * C67 * C15221 +
                   ((C272 * C1941 + C68 * C2277) * C8990 -
                    ((C272 * C499 + C68 * C781) * C8919 +
                     (C272 * C385 + C68 * C688) * C8989) +
                    (C272 * C2059 + C68 * C2386) * C14973) *
                       C61 * C67 * C15217 +
                   ((C272 * C387 + C68 * C690) * C8989 +
                    (C272 * C500 + C68 * C782) * C8919 -
                    (C272 * C3024 + C68 * C3288) * C8990 -
                    (C272 * C3118 + C68 * C3373) * C14973) *
                       C61 * C67 * C15207 +
                   ((C272 * C4209 + C68 * C4425) * C8990 -
                    ((C272 * C2833 + C68 * C2983) * C8919 +
                     (C272 * C2772 + C68 * C2933) * C8989) +
                    (C272 * C4283 + C68 * C4496) * C14973) *
                       C61 * C67 * C15189) *
                  C14835) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C13575 + (C71 * C83 + C61 * C92) * C15139 -
           (C71 * C78 + C61 * C84) * C13556 -
           (C71 * C85 + C61 * C93) * C14845) *
              C67 * C68 * C14886 * C3411 +
          ((C71 * C384 + C61 * C390) * C13556 -
           ((C71 * C391 + C61 * C402) * C15139 +
            (C71 * C385 + C61 * C392) * C13575) +
           (C71 * C393 + C61 * C403) * C14845) *
              C67 * C68 * C14886 * C3412 +
          ((C71 * C387 + C61 * C396) * C13575 +
           (C71 * C397 + C61 * C405) * C15139 -
           (C71 * C388 + C61 * C398) * C13556 -
           (C71 * C399 + C61 * C406) * C14845) *
              C67 * C68 * C14886 * C3413 +
          ((C71 * C3417 + C61 * C3418) * C13556 -
           ((C71 * C2774 + C61 * C2778) * C15139 +
            (C71 * C2772 + C61 * C2775) * C13575) +
           (C71 * C3419 + C61 * C3420) * C14845) *
              C67 * C68 * C14886 * C15189)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1271 + (C71 * C83 + C61 * C92) * C1265 -
           (C71 * C78 + C61 * C84) * C1272 - (C71 * C85 + C61 * C93) * C1266 +
           (C71 * C79 + C61 * C86) * C1273 + (C71 * C87 + C61 * C94) * C1267 -
           (C71 * C80 + C61 * C88) * C1274 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C14886 * C15153 +
          ((C71 * C384 + C61 * C390) * C1272 -
           ((C71 * C391 + C61 * C402) * C1265 +
            (C71 * C385 + C61 * C392) * C1271) +
           (C71 * C393 + C61 * C403) * C1266 -
           (C71 * C386 + C61 * C394) * C1273 -
           (C71 * C395 + C61 * C404) * C1267 +
           (C71 * C1275 + C61 * C1276) * C1274 +
           (C71 * C1277 + C61 * C1278) * C15183) *
              C67 * C68 * C14886 * C14933)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C13575 +
            (C71 * C83 + C61 * C92) * C15139 -
            (C71 * C78 + C61 * C84) * C13556 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C4535 +
           ((C71 * C828 + C61 * C834) * C13556 -
            ((C71 * C835 + C61 * C846) * C15139 +
             (C71 * C829 + C61 * C836) * C13575) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C4536 +
           ((C71 * C831 + C61 * C840) * C13575 +
            (C71 * C841 + C61 * C849) * C15139 -
            (C71 * C832 + C61 * C842) * C13556 -
            (C71 * C843 + C61 * C850) * C14845) *
               C67 * C68 * C15182) *
              C15153 +
          (((C71 * C384 + C61 * C390) * C13556 -
            ((C71 * C391 + C61 * C402) * C15139 +
             (C71 * C385 + C61 * C392) * C13575) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C4535 +
           ((C71 * C1941 + C61 * C1944) * C13575 +
            (C71 * C1945 + C61 * C1950) * C15139 -
            (C71 * C1942 + C61 * C1946) * C13556 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C4536 +
           ((C71 * C5477 + C61 * C5478) * C13556 -
            ((C71 * C3026 + C61 * C3032) * C15139 +
             (C71 * C3023 + C61 * C3027) * C13575) +
            (C71 * C5479 + C61 * C5480) * C14845) *
               C67 * C68 * C15182) *
              C14933)) /
            (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C3455 + (C71 * C120 + C61 * C125) * C3411 -
           (C71 * C385 + C61 * C392) * C3456 -
           (C71 * C449 + C61 * C455) * C3412 +
           (C71 * C387 + C61 * C396) * C3457 +
           (C71 * C450 + C61 * C456) * C3413 -
           (C71 * C2772 + C61 * C2775) * C3458 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C15139 +
          ((C71 * C384 + C61 * C390) * C3456 -
           ((C71 * C121 + C61 * C126) * C3411 +
            (C71 * C78 + C61 * C84) * C3455) +
           (C71 * C451 + C61 * C457) * C3412 -
           (C71 * C388 + C61 * C398) * C3457 -
           (C71 * C452 + C61 * C458) * C3413 +
           (C71 * C3417 + C61 * C3418) * C3458 +
           (C71 * C3459 + C61 * C3460) * C15189) *
              C67 * C68 * C14845) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1313 +
           (C71 * C120 + C61 * C125) * C15153 -
           (C71 * C385 + C61 * C392) * C1314 -
           (C71 * C449 + C61 * C455) * C14933) *
              C67 * C68 * C1265 +
          ((C71 * C384 + C61 * C390) * C1314 -
           ((C71 * C121 + C61 * C126) * C15153 +
            (C71 * C78 + C61 * C84) * C1313) +
           (C71 * C451 + C61 * C457) * C14933) *
              C67 * C68 * C1266 +
          ((C71 * C79 + C61 * C86) * C1313 +
           (C71 * C122 + C61 * C127) * C15153 -
           (C71 * C386 + C61 * C394) * C1314 -
           (C71 * C453 + C61 * C459) * C14933) *
              C67 * C68 * C1267 +
          ((C71 * C1275 + C61 * C1276) * C1314 -
           ((C71 * C123 + C61 * C128) * C15153 +
            (C71 * C80 + C61 * C88) * C1313) +
           (C71 * C1315 + C61 * C1316) * C14933) *
              C67 * C68 * C15183) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C1313 +
            (C71 * C120 + C61 * C125) * C15153 -
            (C71 * C385 + C61 * C392) * C1314 -
            (C71 * C449 + C61 * C455) * C14933) *
               C67 * C68 * C15139 +
           ((C71 * C384 + C61 * C390) * C1314 -
            ((C71 * C121 + C61 * C126) * C15153 +
             (C71 * C78 + C61 * C84) * C1313) +
            (C71 * C451 + C61 * C457) * C14933) *
               C67 * C68 * C14845) *
              C4535 +
          (((C71 * C1941 + C61 * C1944) * C1314 -
            ((C71 * C891 + C61 * C897) * C15153 +
             (C71 * C829 + C61 * C836) * C1313) +
            (C71 * C2003 + C61 * C2006) * C14933) *
               C67 * C68 * C15139 +
           ((C71 * C828 + C61 * C834) * C1313 +
            (C71 * C890 + C61 * C896) * C15153 -
            (C71 * C1942 + C61 * C1946) * C1314 -
            (C71 * C2004 + C61 * C2007) * C14933) *
               C67 * C68 * C14845) *
              C4536 +
          (((C71 * C831 + C61 * C840) * C1313 +
            (C71 * C893 + C61 * C899) * C15153 -
            (C71 * C3023 + C61 * C3027) * C1314 -
            (C71 * C3074 + C61 * C3077) * C14933) *
               C67 * C68 * C15139 +
           ((C71 * C5477 + C61 * C5478) * C1314 -
            ((C71 * C894 + C61 * C900) * C15153 +
             (C71 * C832 + C61 * C842) * C1313) +
            (C71 * C5531 + C61 * C5532) * C14933) *
               C67 * C68 * C14845) *
              C15182)) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C152 +
                      (C71 * C153 + C61 * C158) * C14886) *
                         C67 * C68 * C3411 -
                     ((C71 * C499 + C61 * C505) * C14886 +
                      (C71 * C385 + C61 * C392) * C152) *
                         C67 * C68 * C3412 +
                     ((C71 * C387 + C61 * C396) * C152 +
                      (C71 * C500 + C61 * C506) * C14886) *
                         C67 * C68 * C3413 -
                     ((C71 * C2833 + C61 * C2835) * C14886 +
                      (C71 * C2772 + C61 * C2775) * C152) *
                         C67 * C68 * C15189) *
                        C15139 +
                    (((C71 * C384 + C61 * C390) * C152 +
                      (C71 * C501 + C61 * C507) * C14886) *
                         C67 * C68 * C3412 -
                     ((C71 * C154 + C61 * C159) * C14886 +
                      (C71 * C78 + C61 * C84) * C152) *
                         C67 * C68 * C3411 -
                     ((C71 * C502 + C61 * C508) * C14886 +
                      (C71 * C388 + C61 * C398) * C152) *
                         C67 * C68 * C3413 +
                     ((C71 * C3417 + C61 * C3418) * C152 +
                      (C71 * C3495 + C61 * C3496) * C14886) *
                         C67 * C68 * C15189) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C152 +
                      (C71 * C153 + C61 * C158) * C14886) *
                         C67 * C68 * C15153 -
                     ((C71 * C499 + C61 * C505) * C14886 +
                      (C71 * C385 + C61 * C392) * C152) *
                         C67 * C68 * C14933) *
                        C1265 +
                    (((C71 * C384 + C61 * C390) * C152 +
                      (C71 * C501 + C61 * C507) * C14886) *
                         C67 * C68 * C14933 -
                     ((C71 * C154 + C61 * C159) * C14886 +
                      (C71 * C78 + C61 * C84) * C152) *
                         C67 * C68 * C15153) *
                        C1266 +
                    (((C71 * C79 + C61 * C86) * C152 +
                      (C71 * C155 + C61 * C160) * C14886) *
                         C67 * C68 * C15153 -
                     ((C71 * C503 + C61 * C509) * C14886 +
                      (C71 * C386 + C61 * C394) * C152) *
                         C67 * C68 * C14933) *
                        C1267 +
                    (((C71 * C1275 + C61 * C1276) * C152 +
                      (C71 * C1351 + C61 * C1352) * C14886) *
                         C67 * C68 * C14933 -
                     ((C71 * C156 + C61 * C161) * C14886 +
                      (C71 * C80 + C61 * C88) * C152) *
                         C67 * C68 * C15153) *
                        C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C4614 +
                      (C71 * C153 + C61 * C158) * C4535 -
                      (C71 * C829 + C61 * C836) * C4615 -
                      (C71 * C943 + C61 * C949) * C4536 +
                      (C71 * C831 + C61 * C840) * C4616 +
                      (C71 * C944 + C61 * C950) * C15182) *
                         C67 * C68 * C15153 +
                     ((C71 * C1941 + C61 * C1944) * C4615 -
                      ((C71 * C499 + C61 * C505) * C4535 +
                       (C71 * C385 + C61 * C392) * C4614) +
                      (C71 * C2059 + C61 * C2062) * C4536 -
                      (C71 * C3023 + C61 * C3027) * C4616 -
                      (C71 * C3117 + C61 * C3120) * C15182) *
                         C67 * C68 * C14933) *
                        C15139 +
                    (((C71 * C828 + C61 * C834) * C4615 -
                      ((C71 * C154 + C61 * C159) * C4535 +
                       (C71 * C78 + C61 * C84) * C4614) +
                      (C71 * C945 + C61 * C951) * C4536 -
                      (C71 * C832 + C61 * C842) * C4616 -
                      (C71 * C946 + C61 * C952) * C15182) *
                         C67 * C68 * C15153 +
                     ((C71 * C384 + C61 * C390) * C4614 +
                      (C71 * C501 + C61 * C507) * C4535 -
                      (C71 * C1942 + C61 * C1946) * C4615 -
                      (C71 * C2060 + C61 * C2063) * C4536 +
                      (C71 * C5477 + C61 * C5478) * C4616 +
                      (C71 * C5583 + C61 * C5584) * C15182) *
                         C67 * C68 * C14933) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C13575 +
                     (C185 * C83 + C67 * C191) * C15139 -
                     (C185 * C78 + C67 * C187) * C13556 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C14886 * C3411 +
                    ((C185 * C384 + C67 * C549) * C13556 -
                     ((C185 * C391 + C67 * C555) * C15139 +
                      (C185 * C385 + C67 * C550) * C13575) +
                     (C185 * C393 + C67 * C556) * C14845) *
                        C68 * C61 * C14886 * C3412 +
                    ((C185 * C387 + C67 * C552) * C13575 +
                     (C185 * C397 + C67 * C558) * C15139 -
                     (C185 * C388 + C67 * C553) * C13556 -
                     (C185 * C399 + C67 * C559) * C14845) *
                        C68 * C61 * C14886 * C3413 +
                    ((C185 * C3417 + C67 * C3531) * C13556 -
                     ((C185 * C2774 + C67 * C2861) * C15139 +
                      (C185 * C2772 + C67 * C2859) * C13575) +
                     (C185 * C3419 + C67 * C3532) * C14845) *
                        C68 * C61 * C14886 * C15189)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1271 +
                     (C185 * C83 + C67 * C191) * C1265 -
                     (C185 * C78 + C67 * C187) * C1272 -
                     (C185 * C85 + C67 * C192) * C1266 +
                     (C185 * C79 + C67 * C188) * C1273 +
                     (C185 * C87 + C67 * C193) * C1267 -
                     (C185 * C80 + C67 * C189) * C1274 -
                     (C185 * C89 + C67 * C194) * C15183) *
                        C68 * C61 * C14886 * C15153 +
                    ((C185 * C384 + C67 * C549) * C1272 -
                     ((C185 * C391 + C67 * C555) * C1265 +
                      (C185 * C385 + C67 * C550) * C1271) +
                     (C185 * C393 + C67 * C556) * C1266 -
                     (C185 * C386 + C67 * C551) * C1273 -
                     (C185 * C395 + C67 * C557) * C1267 +
                     (C185 * C1275 + C67 * C1387) * C1274 +
                     (C185 * C1277 + C67 * C1388) * C15183) *
                        C68 * C61 * C14886 * C14933)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C13575 +
                      (C185 * C83 + C67 * C191) * C15139 -
                      (C185 * C78 + C67 * C187) * C13556 -
                      (C185 * C85 + C67 * C192) * C14845) *
                         C68 * C61 * C4535 +
                     ((C185 * C828 + C67 * C993) * C13556 -
                      ((C185 * C835 + C67 * C999) * C15139 +
                       (C185 * C829 + C67 * C994) * C13575) +
                      (C185 * C837 + C67 * C1000) * C14845) *
                         C68 * C61 * C4536 +
                     ((C185 * C831 + C67 * C996) * C13575 +
                      (C185 * C841 + C67 * C1002) * C15139 -
                      (C185 * C832 + C67 * C997) * C13556 -
                      (C185 * C843 + C67 * C1003) * C14845) *
                         C68 * C61 * C15182) *
                        C15153 +
                    (((C185 * C384 + C67 * C549) * C13556 -
                      ((C185 * C391 + C67 * C555) * C15139 +
                       (C185 * C385 + C67 * C550) * C13575) +
                      (C185 * C393 + C67 * C556) * C14845) *
                         C68 * C61 * C4535 +
                     ((C185 * C1941 + C67 * C2115) * C13575 +
                      (C185 * C1945 + C67 * C2118) * C15139 -
                      (C185 * C1942 + C67 * C2116) * C13556 -
                      (C185 * C1947 + C67 * C2119) * C14845) *
                         C68 * C61 * C4536 +
                     ((C185 * C5477 + C67 * C5635) * C13556 -
                      ((C185 * C3026 + C67 * C3164) * C15139 +
                       (C185 * C3023 + C67 * C3161) * C13575) +
                      (C185 * C5479 + C67 * C5636) * C14845) *
                         C68 * C61 * C15182) *
                        C14933)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C3455 +
                     (C185 * C120 + C67 * C218) * C3411 -
                     (C185 * C385 + C67 * C550) * C3456 -
                     (C185 * C449 + C67 * C599) * C3412 +
                     (C185 * C387 + C67 * C552) * C3457 +
                     (C185 * C450 + C67 * C600) * C3413 -
                     (C185 * C2772 + C67 * C2859) * C3458 -
                     (C185 * C2807 + C67 * C2885) * C15189) *
                        C68 * C61 * C15139 +
                    ((C185 * C384 + C67 * C549) * C3456 -
                     ((C185 * C121 + C67 * C219) * C3411 +
                      (C185 * C78 + C67 * C187) * C3455) +
                     (C185 * C451 + C67 * C601) * C3412 -
                     (C185 * C388 + C67 * C553) * C3457 -
                     (C185 * C452 + C67 * C602) * C3413 +
                     (C185 * C3417 + C67 * C3531) * C3458 +
                     (C185 * C3459 + C67 * C3567) * C15189) *
                        C68 * C61 * C14845) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1313 +
                     (C185 * C120 + C67 * C218) * C15153 -
                     (C185 * C385 + C67 * C550) * C1314 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C1265 +
                    ((C185 * C384 + C67 * C549) * C1314 -
                     ((C185 * C121 + C67 * C219) * C15153 +
                      (C185 * C78 + C67 * C187) * C1313) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C1266 +
                    ((C185 * C79 + C67 * C188) * C1313 +
                     (C185 * C122 + C67 * C220) * C15153 -
                     (C185 * C386 + C67 * C551) * C1314 -
                     (C185 * C453 + C67 * C603) * C14933) *
                        C68 * C61 * C1267 +
                    ((C185 * C1275 + C67 * C1387) * C1314 -
                     ((C185 * C123 + C67 * C221) * C15153 +
                      (C185 * C80 + C67 * C189) * C1313) +
                     (C185 * C1315 + C67 * C1423) * C14933) *
                        C68 * C61 * C15183) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1313 +
                      (C185 * C120 + C67 * C218) * C15153 -
                      (C185 * C385 + C67 * C550) * C1314 -
                      (C185 * C449 + C67 * C599) * C14933) *
                         C68 * C61 * C15139 +
                     ((C185 * C384 + C67 * C549) * C1314 -
                      ((C185 * C121 + C67 * C219) * C15153 +
                       (C185 * C78 + C67 * C187) * C1313) +
                      (C185 * C451 + C67 * C601) * C14933) *
                         C68 * C61 * C14845) *
                        C4535 +
                    (((C185 * C1941 + C67 * C2115) * C1314 -
                      ((C185 * C891 + C67 * C1044) * C15153 +
                       (C185 * C829 + C67 * C994) * C1313) +
                      (C185 * C2003 + C67 * C2171) * C14933) *
                         C68 * C61 * C15139 +
                     ((C185 * C828 + C67 * C993) * C1313 +
                      (C185 * C890 + C67 * C1043) * C15153 -
                      (C185 * C1942 + C67 * C2116) * C1314 -
                      (C185 * C2004 + C67 * C2172) * C14933) *
                         C68 * C61 * C14845) *
                        C4536 +
                    (((C185 * C831 + C67 * C996) * C1313 +
                      (C185 * C893 + C67 * C1046) * C15153 -
                      (C185 * C3023 + C67 * C3161) * C1314 -
                      (C185 * C3074 + C67 * C3206) * C14933) *
                         C68 * C61 * C15139 +
                     ((C185 * C5477 + C67 * C5635) * C1314 -
                      ((C185 * C894 + C67 * C1047) * C15153 +
                       (C185 * C832 + C67 * C997) * C1313) +
                      (C185 * C5531 + C67 * C5687) * C14933) *
                         C68 * C61 * C14845) *
                        C15182)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C3411 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C3412 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C3413 -
                     ((C185 * C2833 + C67 * C2909) * C14886 +
                      (C185 * C2772 + C67 * C2859) * C152) *
                         C68 * C61 * C15189) *
                        C15139 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C3412 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C3411 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C3413 +
                     ((C185 * C3417 + C67 * C3531) * C152 +
                      (C185 * C3495 + C67 * C3602) * C14886) *
                         C68 * C61 * C15189) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C15153 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C14933) *
                        C1265 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C14933 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C15153) *
                        C1266 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C15153 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C14933) *
                        C1267 +
                    (((C185 * C1275 + C67 * C1387) * C152 +
                      (C185 * C1351 + C67 * C1458) * C14886) *
                         C68 * C61 * C14933 -
                     ((C185 * C156 + C67 * C248) * C14886 +
                      (C185 * C80 + C67 * C189) * C152) *
                         C68 * C61 * C15153) *
                        C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C4614 +
                      (C185 * C153 + C67 * C245) * C4535 -
                      (C185 * C829 + C67 * C994) * C4615 -
                      (C185 * C943 + C67 * C1087) * C4536 +
                      (C185 * C831 + C67 * C996) * C4616 +
                      (C185 * C944 + C67 * C1088) * C15182) *
                         C68 * C61 * C15153 +
                     ((C185 * C1941 + C67 * C2115) * C4615 -
                      ((C185 * C499 + C67 * C643) * C4535 +
                       (C185 * C385 + C67 * C550) * C4614) +
                      (C185 * C2059 + C67 * C2224) * C4536 -
                      (C185 * C3023 + C67 * C3161) * C4616 -
                      (C185 * C3117 + C67 * C3246) * C15182) *
                         C68 * C61 * C14933) *
                        C15139 +
                    (((C185 * C828 + C67 * C993) * C4615 -
                      ((C185 * C154 + C67 * C246) * C4535 +
                       (C185 * C78 + C67 * C187) * C4614) +
                      (C185 * C945 + C67 * C1089) * C4536 -
                      (C185 * C832 + C67 * C997) * C4616 -
                      (C185 * C946 + C67 * C1090) * C15182) *
                         C68 * C61 * C15153 +
                     ((C185 * C384 + C67 * C549) * C4614 +
                      (C185 * C501 + C67 * C645) * C4535 -
                      (C185 * C1942 + C67 * C2116) * C4615 -
                      (C185 * C2060 + C67 * C2225) * C4536 +
                      (C185 * C5477 + C67 * C5635) * C4616 +
                      (C185 * C5583 + C67 * C5738) * C15182) *
                         C68 * C61 * C14933) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C13575 +
                     (C272 * C83 + C68 * C278) * C15139 -
                     (C272 * C78 + C68 * C274) * C13556 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C14886 * C3411 +
                    ((C272 * C384 + C68 * C687) * C13556 -
                     ((C272 * C391 + C68 * C693) * C15139 +
                      (C272 * C385 + C68 * C688) * C13575) +
                     (C272 * C393 + C68 * C694) * C14845) *
                        C61 * C67 * C14886 * C3412 +
                    ((C272 * C387 + C68 * C690) * C13575 +
                     (C272 * C397 + C68 * C696) * C15139 -
                     (C272 * C388 + C68 * C691) * C13556 -
                     (C272 * C399 + C68 * C697) * C14845) *
                        C61 * C67 * C14886 * C3413 +
                    ((C272 * C3417 + C68 * C3637) * C13556 -
                     ((C272 * C2774 + C68 * C2935) * C15139 +
                      (C272 * C2772 + C68 * C2933) * C13575) +
                     (C272 * C3419 + C68 * C3638) * C14845) *
                        C61 * C67 * C14886 * C15189)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1271 +
                     (C272 * C83 + C68 * C278) * C1265 -
                     (C272 * C78 + C68 * C274) * C1272 -
                     (C272 * C85 + C68 * C279) * C1266 +
                     (C272 * C79 + C68 * C275) * C1273 +
                     (C272 * C87 + C68 * C280) * C1267 -
                     (C272 * C80 + C68 * C276) * C1274 -
                     (C272 * C89 + C68 * C281) * C15183) *
                        C61 * C67 * C14886 * C15153 +
                    ((C272 * C384 + C68 * C687) * C1272 -
                     ((C272 * C391 + C68 * C693) * C1265 +
                      (C272 * C385 + C68 * C688) * C1271) +
                     (C272 * C393 + C68 * C694) * C1266 -
                     (C272 * C386 + C68 * C689) * C1273 -
                     (C272 * C395 + C68 * C695) * C1267 +
                     (C272 * C1275 + C68 * C1493) * C1274 +
                     (C272 * C1277 + C68 * C1494) * C15183) *
                        C61 * C67 * C14886 * C14933)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C13575 +
                      (C272 * C83 + C68 * C278) * C15139 -
                      (C272 * C78 + C68 * C274) * C13556 -
                      (C272 * C85 + C68 * C279) * C14845) *
                         C61 * C67 * C4535 +
                     ((C272 * C828 + C68 * C1131) * C13556 -
                      ((C272 * C835 + C68 * C1137) * C15139 +
                       (C272 * C829 + C68 * C1132) * C13575) +
                      (C272 * C837 + C68 * C1138) * C14845) *
                         C61 * C67 * C4536 +
                     ((C272 * C831 + C68 * C1134) * C13575 +
                      (C272 * C841 + C68 * C1140) * C15139 -
                      (C272 * C832 + C68 * C1135) * C13556 -
                      (C272 * C843 + C68 * C1141) * C14845) *
                         C61 * C67 * C15182) *
                        C15153 +
                    (((C272 * C384 + C68 * C687) * C13556 -
                      ((C272 * C391 + C68 * C693) * C15139 +
                       (C272 * C385 + C68 * C688) * C13575) +
                      (C272 * C393 + C68 * C694) * C14845) *
                         C61 * C67 * C4535 +
                     ((C272 * C1941 + C68 * C2277) * C13575 +
                      (C272 * C1945 + C68 * C2280) * C15139 -
                      (C272 * C1942 + C68 * C2278) * C13556 -
                      (C272 * C1947 + C68 * C2281) * C14845) *
                         C61 * C67 * C4536 +
                     ((C272 * C5477 + C68 * C5789) * C13556 -
                      ((C272 * C3026 + C68 * C3290) * C15139 +
                       (C272 * C3023 + C68 * C3287) * C13575) +
                      (C272 * C5479 + C68 * C5790) * C14845) *
                         C61 * C67 * C15182) *
                        C14933)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C3455 +
                     (C272 * C120 + C68 * C305) * C3411 -
                     (C272 * C385 + C68 * C688) * C3456 -
                     (C272 * C449 + C68 * C737) * C3412 +
                     (C272 * C387 + C68 * C690) * C3457 +
                     (C272 * C450 + C68 * C738) * C3413 -
                     (C272 * C2772 + C68 * C2933) * C3458 -
                     (C272 * C2807 + C68 * C2959) * C15189) *
                        C61 * C67 * C15139 +
                    ((C272 * C384 + C68 * C687) * C3456 -
                     ((C272 * C121 + C68 * C306) * C3411 +
                      (C272 * C78 + C68 * C274) * C3455) +
                     (C272 * C451 + C68 * C739) * C3412 -
                     (C272 * C388 + C68 * C691) * C3457 -
                     (C272 * C452 + C68 * C740) * C3413 +
                     (C272 * C3417 + C68 * C3637) * C3458 +
                     (C272 * C3459 + C68 * C3673) * C15189) *
                        C61 * C67 * C14845) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1313 +
                     (C272 * C120 + C68 * C305) * C15153 -
                     (C272 * C385 + C68 * C688) * C1314 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C1265 +
                    ((C272 * C384 + C68 * C687) * C1314 -
                     ((C272 * C121 + C68 * C306) * C15153 +
                      (C272 * C78 + C68 * C274) * C1313) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C1266 +
                    ((C272 * C79 + C68 * C275) * C1313 +
                     (C272 * C122 + C68 * C307) * C15153 -
                     (C272 * C386 + C68 * C689) * C1314 -
                     (C272 * C453 + C68 * C741) * C14933) *
                        C61 * C67 * C1267 +
                    ((C272 * C1275 + C68 * C1493) * C1314 -
                     ((C272 * C123 + C68 * C308) * C15153 +
                      (C272 * C80 + C68 * C276) * C1313) +
                     (C272 * C1315 + C68 * C1529) * C14933) *
                        C61 * C67 * C15183) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1313 +
                      (C272 * C120 + C68 * C305) * C15153 -
                      (C272 * C385 + C68 * C688) * C1314 -
                      (C272 * C449 + C68 * C737) * C14933) *
                         C61 * C67 * C15139 +
                     ((C272 * C384 + C68 * C687) * C1314 -
                      ((C272 * C121 + C68 * C306) * C15153 +
                       (C272 * C78 + C68 * C274) * C1313) +
                      (C272 * C451 + C68 * C739) * C14933) *
                         C61 * C67 * C14845) *
                        C4535 +
                    (((C272 * C1941 + C68 * C2277) * C1314 -
                      ((C272 * C891 + C68 * C1182) * C15153 +
                       (C272 * C829 + C68 * C1132) * C1313) +
                      (C272 * C2003 + C68 * C2333) * C14933) *
                         C61 * C67 * C15139 +
                     ((C272 * C828 + C68 * C1131) * C1313 +
                      (C272 * C890 + C68 * C1181) * C15153 -
                      (C272 * C1942 + C68 * C2278) * C1314 -
                      (C272 * C2004 + C68 * C2334) * C14933) *
                         C61 * C67 * C14845) *
                        C4536 +
                    (((C272 * C831 + C68 * C1134) * C1313 +
                      (C272 * C893 + C68 * C1184) * C15153 -
                      (C272 * C3023 + C68 * C3287) * C1314 -
                      (C272 * C3074 + C68 * C3332) * C14933) *
                         C61 * C67 * C15139 +
                     ((C272 * C5477 + C68 * C5789) * C1314 -
                      ((C272 * C894 + C68 * C1185) * C15153 +
                       (C272 * C832 + C68 * C1135) * C1313) +
                      (C272 * C5531 + C68 * C5841) * C14933) *
                         C61 * C67 * C14845) *
                        C15182)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C3411 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C3412 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C3413 -
                     ((C272 * C2833 + C68 * C2983) * C14886 +
                      (C272 * C2772 + C68 * C2933) * C152) *
                         C61 * C67 * C15189) *
                        C15139 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C3412 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C3411 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C3413 +
                     ((C272 * C3417 + C68 * C3637) * C152 +
                      (C272 * C3495 + C68 * C3708) * C14886) *
                         C61 * C67 * C15189) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C15153 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C14933) *
                        C1265 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C14933 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C15153) *
                        C1266 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C15153 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C14933) *
                        C1267 +
                    (((C272 * C1275 + C68 * C1493) * C152 +
                      (C272 * C1351 + C68 * C1564) * C14886) *
                         C61 * C67 * C14933 -
                     ((C272 * C156 + C68 * C335) * C14886 +
                      (C272 * C80 + C68 * C276) * C152) *
                         C61 * C67 * C15153) *
                        C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C4614 +
                      (C272 * C153 + C68 * C332) * C4535 -
                      (C272 * C829 + C68 * C1132) * C4615 -
                      (C272 * C943 + C68 * C1225) * C4536 +
                      (C272 * C831 + C68 * C1134) * C4616 +
                      (C272 * C944 + C68 * C1226) * C15182) *
                         C61 * C67 * C15153 +
                     ((C272 * C1941 + C68 * C2277) * C4615 -
                      ((C272 * C499 + C68 * C781) * C4535 +
                       (C272 * C385 + C68 * C688) * C4614) +
                      (C272 * C2059 + C68 * C2386) * C4536 -
                      (C272 * C3023 + C68 * C3287) * C4616 -
                      (C272 * C3117 + C68 * C3372) * C15182) *
                         C61 * C67 * C14933) *
                        C15139 +
                    (((C272 * C828 + C68 * C1131) * C4615 -
                      ((C272 * C154 + C68 * C333) * C4535 +
                       (C272 * C78 + C68 * C274) * C4614) +
                      (C272 * C945 + C68 * C1227) * C4536 -
                      (C272 * C832 + C68 * C1135) * C4616 -
                      (C272 * C946 + C68 * C1228) * C15182) *
                         C61 * C67 * C15153 +
                     ((C272 * C384 + C68 * C687) * C4614 +
                      (C272 * C501 + C68 * C783) * C4535 -
                      (C272 * C1942 + C68 * C2278) * C4615 -
                      (C272 * C2060 + C68 * C2387) * C4536 +
                      (C272 * C5477 + C68 * C5789) * C4616 +
                      (C272 * C5583 + C68 * C5892) * C15182) *
                         C61 * C67 * C14933) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C15154 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C14973) *
              C3411 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C15154) *
              C3412 +
          (((C71 * C387 + C61 * C396) * C2771 +
            (C71 * C397 + C61 * C405) * C14835) *
               C67 * C68 * C15154 -
           ((C71 * C3028 + C61 * C3033) * C14835 +
            (C71 * C3024 + C61 * C3029) * C2771) *
               C67 * C68 * C14973) *
              C3413 +
          (((C71 * C4209 + C61 * C4210) * C2771 +
            (C71 * C4211 + C61 * C4212) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C2774 + C61 * C2778) * C14835 +
            (C71 * C2772 + C61 * C2775) * C2771) *
               C67 * C68 * C15154) *
              C15189)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
            (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
            (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
               C67 * C68 * C15154 +
           ((C71 * C828 + C61 * C834) * C382 -
            ((C71 * C835 + C61 * C846) * C375 +
             (C71 * C829 + C61 * C836) * C381) +
            (C71 * C837 + C61 * C847) * C376 -
            (C71 * C830 + C61 * C838) * C383 -
            (C71 * C839 + C61 * C848) * C15173) *
               C67 * C68 * C14973) *
              C15153 +
          (((C71 * C384 + C61 * C390) * C382 -
            ((C71 * C391 + C61 * C402) * C375 +
             (C71 * C385 + C61 * C392) * C381) +
            (C71 * C393 + C61 * C403) * C376 -
            (C71 * C386 + C61 * C394) * C383 -
            (C71 * C395 + C61 * C404) * C15173) *
               C67 * C68 * C15154 +
           ((C71 * C1941 + C61 * C1944) * C381 +
            (C71 * C1945 + C61 * C1950) * C375 -
            (C71 * C1942 + C61 * C1946) * C382 -
            (C71 * C1947 + C61 * C1951) * C376 +
            (C71 * C1943 + C61 * C1948) * C383 +
            (C71 * C1949 + C61 * C1952) * C15173) *
               C67 * C68 * C14973) *
              C14933)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C5927 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C5928 +
           ((C71 * C831 + C61 * C840) * C2771 +
            (C71 * C841 + C61 * C849) * C14835) *
               C67 * C68 * C5929 -
           ((C71 * C5216 + C61 * C5220) * C14835 +
            (C71 * C5214 + C61 * C5217) * C2771) *
               C67 * C68 * C15195) *
              C15153 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C5928 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C5927 -
           ((C71 * C3026 + C61 * C3032) * C14835 +
            (C71 * C3023 + C61 * C3027) * C2771) *
               C67 * C68 * C5929 +
           ((C71 * C6257 + C61 * C6258) * C2771 +
            (C71 * C6259 + C61 * C6260) * C14835) *
               C67 * C68 * C15195) *
              C14933)) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C3455 + (C71 * C120 + C61 * C125) * C3411 -
           (C71 * C385 + C61 * C392) * C3456 -
           (C71 * C449 + C61 * C455) * C3412 +
           (C71 * C387 + C61 * C396) * C3457 +
           (C71 * C450 + C61 * C456) * C3413 -
           (C71 * C2772 + C61 * C2775) * C3458 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C14835 * C15154 +
          ((C71 * C1941 + C61 * C1944) * C3456 -
           ((C71 * C891 + C61 * C897) * C3411 +
            (C71 * C829 + C61 * C836) * C3455) +
           (C71 * C2003 + C61 * C2006) * C3412 -
           (C71 * C3024 + C61 * C3029) * C3457 -
           (C71 * C3073 + C61 * C3076) * C3413 +
           (C71 * C4209 + C61 * C4210) * C3458 +
           (C71 * C4247 + C61 * C4248) * C15189) *
              C67 * C68 * C14835 * C14973)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C1313 +
            (C71 * C120 + C61 * C125) * C15153 -
            (C71 * C385 + C61 * C392) * C1314 -
            (C71 * C449 + C61 * C455) * C14933) *
               C67 * C68 * C375 +
           ((C71 * C384 + C61 * C390) * C1314 -
            ((C71 * C121 + C61 * C126) * C15153 +
             (C71 * C78 + C61 * C84) * C1313) +
            (C71 * C451 + C61 * C457) * C14933) *
               C67 * C68 * C376 +
           ((C71 * C79 + C61 * C86) * C1313 +
            (C71 * C122 + C61 * C127) * C15153 -
            (C71 * C386 + C61 * C394) * C1314 -
            (C71 * C453 + C61 * C459) * C14933) *
               C67 * C68 * C15173) *
              C15154 +
          (((C71 * C1941 + C61 * C1944) * C1314 -
            ((C71 * C891 + C61 * C897) * C15153 +
             (C71 * C829 + C61 * C836) * C1313) +
            (C71 * C2003 + C61 * C2006) * C14933) *
               C67 * C68 * C375 +
           ((C71 * C828 + C61 * C834) * C1313 +
            (C71 * C890 + C61 * C896) * C15153 -
            (C71 * C1942 + C61 * C1946) * C1314 -
            (C71 * C2004 + C61 * C2007) * C14933) *
               C67 * C68 * C376 +
           ((C71 * C1943 + C61 * C1948) * C1314 -
            ((C71 * C892 + C61 * C898) * C15153 +
             (C71 * C830 + C61 * C838) * C1313) +
            (C71 * C2005 + C61 * C2008) * C14933) *
               C67 * C68 * C15173) *
              C14973)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1313 +
           (C71 * C120 + C61 * C125) * C15153 -
           (C71 * C385 + C61 * C392) * C1314 -
           (C71 * C449 + C61 * C455) * C14933) *
              C67 * C68 * C14835 * C5927 +
          ((C71 * C1941 + C61 * C1944) * C1314 -
           ((C71 * C891 + C61 * C897) * C15153 +
            (C71 * C829 + C61 * C836) * C1313) +
           (C71 * C2003 + C61 * C2006) * C14933) *
              C67 * C68 * C14835 * C5928 +
          ((C71 * C831 + C61 * C840) * C1313 +
           (C71 * C893 + C61 * C899) * C15153 -
           (C71 * C3023 + C61 * C3027) * C1314 -
           (C71 * C3074 + C61 * C3077) * C14933) *
              C67 * C68 * C14835 * C5929 +
          ((C71 * C6257 + C61 * C6258) * C1314 -
           ((C71 * C5244 + C61 * C5246) * C15153 +
            (C71 * C5214 + C61 * C5217) * C1313) +
           (C71 * C6295 + C61 * C6296) * C14933) *
              C67 * C68 * C14835 * C15195)) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1675 +
           (C71 * C153 + C61 * C158) * C15154 -
           (C71 * C829 + C61 * C836) * C1676 -
           (C71 * C943 + C61 * C949) * C14973) *
              C67 * C68 * C3411 +
          ((C71 * C1941 + C61 * C1944) * C1676 -
           ((C71 * C499 + C61 * C505) * C15154 +
            (C71 * C385 + C61 * C392) * C1675) +
           (C71 * C2059 + C61 * C2062) * C14973) *
              C67 * C68 * C3412 +
          ((C71 * C387 + C61 * C396) * C1675 +
           (C71 * C500 + C61 * C506) * C15154 -
           (C71 * C3024 + C61 * C3029) * C1676 -
           (C71 * C3118 + C61 * C3121) * C14973) *
              C67 * C68 * C3413 +
          ((C71 * C4209 + C61 * C4210) * C1676 -
           ((C71 * C2833 + C61 * C2835) * C15154 +
            (C71 * C2772 + C61 * C2775) * C1675) +
           (C71 * C4283 + C61 * C4284) * C14973) *
              C67 * C68 * C15189) *
         C14835) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C1675 +
            (C71 * C153 + C61 * C158) * C15154 -
            (C71 * C829 + C61 * C836) * C1676 -
            (C71 * C943 + C61 * C949) * C14973) *
               C67 * C68 * C15153 +
           ((C71 * C1941 + C61 * C1944) * C1676 -
            ((C71 * C499 + C61 * C505) * C15154 +
             (C71 * C385 + C61 * C392) * C1675) +
            (C71 * C2059 + C61 * C2062) * C14973) *
               C67 * C68 * C14933) *
              C375 +
          (((C71 * C828 + C61 * C834) * C1676 -
            ((C71 * C154 + C61 * C159) * C15154 +
             (C71 * C78 + C61 * C84) * C1675) +
            (C71 * C945 + C61 * C951) * C14973) *
               C67 * C68 * C15153 +
           ((C71 * C384 + C61 * C390) * C1675 +
            (C71 * C501 + C61 * C507) * C15154 -
            (C71 * C1942 + C61 * C1946) * C1676 -
            (C71 * C2060 + C61 * C2063) * C14973) *
               C67 * C68 * C14933) *
              C376 +
          (((C71 * C79 + C61 * C86) * C1675 +
            (C71 * C155 + C61 * C160) * C15154 -
            (C71 * C830 + C61 * C838) * C1676 -
            (C71 * C947 + C61 * C953) * C14973) *
               C67 * C68 * C15153 +
           ((C71 * C1943 + C61 * C1948) * C1676 -
            ((C71 * C503 + C61 * C509) * C15154 +
             (C71 * C386 + C61 * C394) * C1675) +
            (C71 * C2061 + C61 * C2064) * C14973) *
               C67 * C68 * C14933) *
              C15173)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6005 + (C71 * C153 + C61 * C158) * C5927 -
           (C71 * C829 + C61 * C836) * C6006 -
           (C71 * C943 + C61 * C949) * C5928 +
           (C71 * C831 + C61 * C840) * C6007 +
           (C71 * C944 + C61 * C950) * C5929 -
           (C71 * C5214 + C61 * C5217) * C6008 -
           (C71 * C5275 + C61 * C5277) * C15195) *
              C67 * C68 * C15153 +
          ((C71 * C1941 + C61 * C1944) * C6006 -
           ((C71 * C499 + C61 * C505) * C5927 +
            (C71 * C385 + C61 * C392) * C6005) +
           (C71 * C2059 + C61 * C2062) * C5928 -
           (C71 * C3023 + C61 * C3027) * C6007 -
           (C71 * C3117 + C61 * C3120) * C5929 +
           (C71 * C6257 + C61 * C6258) * C6008 +
           (C71 * C6331 + C61 * C6332) * C15195) *
              C67 * C68 * C14933) *
         C14835) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C2771 +
                      (C185 * C83 + C67 * C191) * C14835) *
                         C68 * C61 * C15154 -
                     ((C185 * C835 + C67 * C999) * C14835 +
                      (C185 * C829 + C67 * C994) * C2771) *
                         C68 * C61 * C14973) *
                        C3411 +
                    (((C185 * C1941 + C67 * C2115) * C2771 +
                      (C185 * C1945 + C67 * C2118) * C14835) *
                         C68 * C61 * C14973 -
                     ((C185 * C391 + C67 * C555) * C14835 +
                      (C185 * C385 + C67 * C550) * C2771) *
                         C68 * C61 * C15154) *
                        C3412 +
                    (((C185 * C387 + C67 * C552) * C2771 +
                      (C185 * C397 + C67 * C558) * C14835) *
                         C68 * C61 * C15154 -
                     ((C185 * C3028 + C67 * C3165) * C14835 +
                      (C185 * C3024 + C67 * C3162) * C2771) *
                         C68 * C61 * C14973) *
                        C3413 +
                    (((C185 * C4209 + C67 * C4319) * C2771 +
                      (C185 * C4211 + C67 * C4320) * C14835) *
                         C68 * C61 * C14973 -
                     ((C185 * C2774 + C67 * C2861) * C14835 +
                      (C185 * C2772 + C67 * C2859) * C2771) *
                         C68 * C61 * C15154) *
                        C15189)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C381 +
                      (C185 * C83 + C67 * C191) * C375 -
                      (C185 * C78 + C67 * C187) * C382 -
                      (C185 * C85 + C67 * C192) * C376 +
                      (C185 * C79 + C67 * C188) * C383 +
                      (C185 * C87 + C67 * C193) * C15173) *
                         C68 * C61 * C15154 +
                     ((C185 * C828 + C67 * C993) * C382 -
                      ((C185 * C835 + C67 * C999) * C375 +
                       (C185 * C829 + C67 * C994) * C381) +
                      (C185 * C837 + C67 * C1000) * C376 -
                      (C185 * C830 + C67 * C995) * C383 -
                      (C185 * C839 + C67 * C1001) * C15173) *
                         C68 * C61 * C14973) *
                        C15153 +
                    (((C185 * C384 + C67 * C549) * C382 -
                      ((C185 * C391 + C67 * C555) * C375 +
                       (C185 * C385 + C67 * C550) * C381) +
                      (C185 * C393 + C67 * C556) * C376 -
                      (C185 * C386 + C67 * C551) * C383 -
                      (C185 * C395 + C67 * C557) * C15173) *
                         C68 * C61 * C15154 +
                     ((C185 * C1941 + C67 * C2115) * C381 +
                      (C185 * C1945 + C67 * C2118) * C375 -
                      (C185 * C1942 + C67 * C2116) * C382 -
                      (C185 * C1947 + C67 * C2119) * C376 +
                      (C185 * C1943 + C67 * C2117) * C383 +
                      (C185 * C1949 + C67 * C2120) * C15173) *
                         C68 * C61 * C14973) *
                        C14933)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C2771 +
                      (C185 * C83 + C67 * C191) * C14835) *
                         C68 * C61 * C5927 -
                     ((C185 * C835 + C67 * C999) * C14835 +
                      (C185 * C829 + C67 * C994) * C2771) *
                         C68 * C61 * C5928 +
                     ((C185 * C831 + C67 * C996) * C2771 +
                      (C185 * C841 + C67 * C1002) * C14835) *
                         C68 * C61 * C5929 -
                     ((C185 * C5216 + C67 * C5303) * C14835 +
                      (C185 * C5214 + C67 * C5301) * C2771) *
                         C68 * C61 * C15195) *
                        C15153 +
                    (((C185 * C1941 + C67 * C2115) * C2771 +
                      (C185 * C1945 + C67 * C2118) * C14835) *
                         C68 * C61 * C5928 -
                     ((C185 * C391 + C67 * C555) * C14835 +
                      (C185 * C385 + C67 * C550) * C2771) *
                         C68 * C61 * C5927 -
                     ((C185 * C3026 + C67 * C3164) * C14835 +
                      (C185 * C3023 + C67 * C3161) * C2771) *
                         C68 * C61 * C5929 +
                     ((C185 * C6257 + C67 * C6367) * C2771 +
                      (C185 * C6259 + C67 * C6368) * C14835) *
                         C68 * C61 * C15195) *
                        C14933)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C3455 +
                     (C185 * C120 + C67 * C218) * C3411 -
                     (C185 * C385 + C67 * C550) * C3456 -
                     (C185 * C449 + C67 * C599) * C3412 +
                     (C185 * C387 + C67 * C552) * C3457 +
                     (C185 * C450 + C67 * C600) * C3413 -
                     (C185 * C2772 + C67 * C2859) * C3458 -
                     (C185 * C2807 + C67 * C2885) * C15189) *
                        C68 * C61 * C14835 * C15154 +
                    ((C185 * C1941 + C67 * C2115) * C3456 -
                     ((C185 * C891 + C67 * C1044) * C3411 +
                      (C185 * C829 + C67 * C994) * C3455) +
                     (C185 * C2003 + C67 * C2171) * C3412 -
                     (C185 * C3024 + C67 * C3162) * C3457 -
                     (C185 * C3073 + C67 * C3205) * C3413 +
                     (C185 * C4209 + C67 * C4319) * C3458 +
                     (C185 * C4247 + C67 * C4355) * C15189) *
                        C68 * C61 * C14835 * C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1313 +
                      (C185 * C120 + C67 * C218) * C15153 -
                      (C185 * C385 + C67 * C550) * C1314 -
                      (C185 * C449 + C67 * C599) * C14933) *
                         C68 * C61 * C375 +
                     ((C185 * C384 + C67 * C549) * C1314 -
                      ((C185 * C121 + C67 * C219) * C15153 +
                       (C185 * C78 + C67 * C187) * C1313) +
                      (C185 * C451 + C67 * C601) * C14933) *
                         C68 * C61 * C376 +
                     ((C185 * C79 + C67 * C188) * C1313 +
                      (C185 * C122 + C67 * C220) * C15153 -
                      (C185 * C386 + C67 * C551) * C1314 -
                      (C185 * C453 + C67 * C603) * C14933) *
                         C68 * C61 * C15173) *
                        C15154 +
                    (((C185 * C1941 + C67 * C2115) * C1314 -
                      ((C185 * C891 + C67 * C1044) * C15153 +
                       (C185 * C829 + C67 * C994) * C1313) +
                      (C185 * C2003 + C67 * C2171) * C14933) *
                         C68 * C61 * C375 +
                     ((C185 * C828 + C67 * C993) * C1313 +
                      (C185 * C890 + C67 * C1043) * C15153 -
                      (C185 * C1942 + C67 * C2116) * C1314 -
                      (C185 * C2004 + C67 * C2172) * C14933) *
                         C68 * C61 * C376 +
                     ((C185 * C1943 + C67 * C2117) * C1314 -
                      ((C185 * C892 + C67 * C1045) * C15153 +
                       (C185 * C830 + C67 * C995) * C1313) +
                      (C185 * C2005 + C67 * C2173) * C14933) *
                         C68 * C61 * C15173) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1313 +
                     (C185 * C120 + C67 * C218) * C15153 -
                     (C185 * C385 + C67 * C550) * C1314 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C14835 * C5927 +
                    ((C185 * C1941 + C67 * C2115) * C1314 -
                     ((C185 * C891 + C67 * C1044) * C15153 +
                      (C185 * C829 + C67 * C994) * C1313) +
                     (C185 * C2003 + C67 * C2171) * C14933) *
                        C68 * C61 * C14835 * C5928 +
                    ((C185 * C831 + C67 * C996) * C1313 +
                     (C185 * C893 + C67 * C1046) * C15153 -
                     (C185 * C3023 + C67 * C3161) * C1314 -
                     (C185 * C3074 + C67 * C3206) * C14933) *
                        C68 * C61 * C14835 * C5929 +
                    ((C185 * C6257 + C67 * C6367) * C1314 -
                     ((C185 * C5244 + C67 * C5327) * C15153 +
                      (C185 * C5214 + C67 * C5301) * C1313) +
                     (C185 * C6295 + C67 * C6403) * C14933) *
                        C68 * C61 * C14835 * C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1675 +
                     (C185 * C153 + C67 * C245) * C15154 -
                     (C185 * C829 + C67 * C994) * C1676 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C3411 +
                    ((C185 * C1941 + C67 * C2115) * C1676 -
                     ((C185 * C499 + C67 * C643) * C15154 +
                      (C185 * C385 + C67 * C550) * C1675) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C3412 +
                    ((C185 * C387 + C67 * C552) * C1675 +
                     (C185 * C500 + C67 * C644) * C15154 -
                     (C185 * C3024 + C67 * C3162) * C1676 -
                     (C185 * C3118 + C67 * C3247) * C14973) *
                        C68 * C61 * C3413 +
                    ((C185 * C4209 + C67 * C4319) * C1676 -
                     ((C185 * C2833 + C67 * C2909) * C15154 +
                      (C185 * C2772 + C67 * C2859) * C1675) +
                     (C185 * C4283 + C67 * C4390) * C14973) *
                        C68 * C61 * C15189) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1675 +
                      (C185 * C153 + C67 * C245) * C15154 -
                      (C185 * C829 + C67 * C994) * C1676 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C1941 + C67 * C2115) * C1676 -
                      ((C185 * C499 + C67 * C643) * C15154 +
                       (C185 * C385 + C67 * C550) * C1675) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C14933) *
                        C375 +
                    (((C185 * C828 + C67 * C993) * C1676 -
                      ((C185 * C154 + C67 * C246) * C15154 +
                       (C185 * C78 + C67 * C187) * C1675) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C384 + C67 * C549) * C1675 +
                      (C185 * C501 + C67 * C645) * C15154 -
                      (C185 * C1942 + C67 * C2116) * C1676 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C14933) *
                        C376 +
                    (((C185 * C79 + C67 * C188) * C1675 +
                      (C185 * C155 + C67 * C247) * C15154 -
                      (C185 * C830 + C67 * C995) * C1676 -
                      (C185 * C947 + C67 * C1091) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C1943 + C67 * C2117) * C1676 -
                      ((C185 * C503 + C67 * C647) * C15154 +
                       (C185 * C386 + C67 * C551) * C1675) +
                      (C185 * C2061 + C67 * C2226) * C14973) *
                         C68 * C61 * C14933) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C6005 +
                     (C185 * C153 + C67 * C245) * C5927 -
                     (C185 * C829 + C67 * C994) * C6006 -
                     (C185 * C943 + C67 * C1087) * C5928 +
                     (C185 * C831 + C67 * C996) * C6007 +
                     (C185 * C944 + C67 * C1088) * C5929 -
                     (C185 * C5214 + C67 * C5301) * C6008 -
                     (C185 * C5275 + C67 * C5351) * C15195) *
                        C68 * C61 * C15153 +
                    ((C185 * C1941 + C67 * C2115) * C6006 -
                     ((C185 * C499 + C67 * C643) * C5927 +
                      (C185 * C385 + C67 * C550) * C6005) +
                     (C185 * C2059 + C67 * C2224) * C5928 -
                     (C185 * C3023 + C67 * C3161) * C6007 -
                     (C185 * C3117 + C67 * C3246) * C5929 +
                     (C185 * C6257 + C67 * C6367) * C6008 +
                     (C185 * C6331 + C67 * C6438) * C15195) *
                        C68 * C61 * C14933) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eezx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C2771 +
                      (C272 * C83 + C68 * C278) * C14835) *
                         C61 * C67 * C15154 -
                     ((C272 * C835 + C68 * C1137) * C14835 +
                      (C272 * C829 + C68 * C1132) * C2771) *
                         C61 * C67 * C14973) *
                        C3411 +
                    (((C272 * C1941 + C68 * C2277) * C2771 +
                      (C272 * C1945 + C68 * C2280) * C14835) *
                         C61 * C67 * C14973 -
                     ((C272 * C391 + C68 * C693) * C14835 +
                      (C272 * C385 + C68 * C688) * C2771) *
                         C61 * C67 * C15154) *
                        C3412 +
                    (((C272 * C387 + C68 * C690) * C2771 +
                      (C272 * C397 + C68 * C696) * C14835) *
                         C61 * C67 * C15154 -
                     ((C272 * C3028 + C68 * C3291) * C14835 +
                      (C272 * C3024 + C68 * C3288) * C2771) *
                         C61 * C67 * C14973) *
                        C3413 +
                    (((C272 * C4209 + C68 * C4425) * C2771 +
                      (C272 * C4211 + C68 * C4426) * C14835) *
                         C61 * C67 * C14973 -
                     ((C272 * C2774 + C68 * C2935) * C14835 +
                      (C272 * C2772 + C68 * C2933) * C2771) *
                         C61 * C67 * C15154) *
                        C15189)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C381 +
                      (C272 * C83 + C68 * C278) * C375 -
                      (C272 * C78 + C68 * C274) * C382 -
                      (C272 * C85 + C68 * C279) * C376 +
                      (C272 * C79 + C68 * C275) * C383 +
                      (C272 * C87 + C68 * C280) * C15173) *
                         C61 * C67 * C15154 +
                     ((C272 * C828 + C68 * C1131) * C382 -
                      ((C272 * C835 + C68 * C1137) * C375 +
                       (C272 * C829 + C68 * C1132) * C381) +
                      (C272 * C837 + C68 * C1138) * C376 -
                      (C272 * C830 + C68 * C1133) * C383 -
                      (C272 * C839 + C68 * C1139) * C15173) *
                         C61 * C67 * C14973) *
                        C15153 +
                    (((C272 * C384 + C68 * C687) * C382 -
                      ((C272 * C391 + C68 * C693) * C375 +
                       (C272 * C385 + C68 * C688) * C381) +
                      (C272 * C393 + C68 * C694) * C376 -
                      (C272 * C386 + C68 * C689) * C383 -
                      (C272 * C395 + C68 * C695) * C15173) *
                         C61 * C67 * C15154 +
                     ((C272 * C1941 + C68 * C2277) * C381 +
                      (C272 * C1945 + C68 * C2280) * C375 -
                      (C272 * C1942 + C68 * C2278) * C382 -
                      (C272 * C1947 + C68 * C2281) * C376 +
                      (C272 * C1943 + C68 * C2279) * C383 +
                      (C272 * C1949 + C68 * C2282) * C15173) *
                         C61 * C67 * C14973) *
                        C14933)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C2771 +
                      (C272 * C83 + C68 * C278) * C14835) *
                         C61 * C67 * C5927 -
                     ((C272 * C835 + C68 * C1137) * C14835 +
                      (C272 * C829 + C68 * C1132) * C2771) *
                         C61 * C67 * C5928 +
                     ((C272 * C831 + C68 * C1134) * C2771 +
                      (C272 * C841 + C68 * C1140) * C14835) *
                         C61 * C67 * C5929 -
                     ((C272 * C5216 + C68 * C5377) * C14835 +
                      (C272 * C5214 + C68 * C5375) * C2771) *
                         C61 * C67 * C15195) *
                        C15153 +
                    (((C272 * C1941 + C68 * C2277) * C2771 +
                      (C272 * C1945 + C68 * C2280) * C14835) *
                         C61 * C67 * C5928 -
                     ((C272 * C391 + C68 * C693) * C14835 +
                      (C272 * C385 + C68 * C688) * C2771) *
                         C61 * C67 * C5927 -
                     ((C272 * C3026 + C68 * C3290) * C14835 +
                      (C272 * C3023 + C68 * C3287) * C2771) *
                         C61 * C67 * C5929 +
                     ((C272 * C6257 + C68 * C6473) * C2771 +
                      (C272 * C6259 + C68 * C6474) * C14835) *
                         C61 * C67 * C15195) *
                        C14933)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C3455 +
                     (C272 * C120 + C68 * C305) * C3411 -
                     (C272 * C385 + C68 * C688) * C3456 -
                     (C272 * C449 + C68 * C737) * C3412 +
                     (C272 * C387 + C68 * C690) * C3457 +
                     (C272 * C450 + C68 * C738) * C3413 -
                     (C272 * C2772 + C68 * C2933) * C3458 -
                     (C272 * C2807 + C68 * C2959) * C15189) *
                        C61 * C67 * C14835 * C15154 +
                    ((C272 * C1941 + C68 * C2277) * C3456 -
                     ((C272 * C891 + C68 * C1182) * C3411 +
                      (C272 * C829 + C68 * C1132) * C3455) +
                     (C272 * C2003 + C68 * C2333) * C3412 -
                     (C272 * C3024 + C68 * C3288) * C3457 -
                     (C272 * C3073 + C68 * C3331) * C3413 +
                     (C272 * C4209 + C68 * C4425) * C3458 +
                     (C272 * C4247 + C68 * C4461) * C15189) *
                        C61 * C67 * C14835 * C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1313 +
                      (C272 * C120 + C68 * C305) * C15153 -
                      (C272 * C385 + C68 * C688) * C1314 -
                      (C272 * C449 + C68 * C737) * C14933) *
                         C61 * C67 * C375 +
                     ((C272 * C384 + C68 * C687) * C1314 -
                      ((C272 * C121 + C68 * C306) * C15153 +
                       (C272 * C78 + C68 * C274) * C1313) +
                      (C272 * C451 + C68 * C739) * C14933) *
                         C61 * C67 * C376 +
                     ((C272 * C79 + C68 * C275) * C1313 +
                      (C272 * C122 + C68 * C307) * C15153 -
                      (C272 * C386 + C68 * C689) * C1314 -
                      (C272 * C453 + C68 * C741) * C14933) *
                         C61 * C67 * C15173) *
                        C15154 +
                    (((C272 * C1941 + C68 * C2277) * C1314 -
                      ((C272 * C891 + C68 * C1182) * C15153 +
                       (C272 * C829 + C68 * C1132) * C1313) +
                      (C272 * C2003 + C68 * C2333) * C14933) *
                         C61 * C67 * C375 +
                     ((C272 * C828 + C68 * C1131) * C1313 +
                      (C272 * C890 + C68 * C1181) * C15153 -
                      (C272 * C1942 + C68 * C2278) * C1314 -
                      (C272 * C2004 + C68 * C2334) * C14933) *
                         C61 * C67 * C376 +
                     ((C272 * C1943 + C68 * C2279) * C1314 -
                      ((C272 * C892 + C68 * C1183) * C15153 +
                       (C272 * C830 + C68 * C1133) * C1313) +
                      (C272 * C2005 + C68 * C2335) * C14933) *
                         C61 * C67 * C15173) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1313 +
                     (C272 * C120 + C68 * C305) * C15153 -
                     (C272 * C385 + C68 * C688) * C1314 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C14835 * C5927 +
                    ((C272 * C1941 + C68 * C2277) * C1314 -
                     ((C272 * C891 + C68 * C1182) * C15153 +
                      (C272 * C829 + C68 * C1132) * C1313) +
                     (C272 * C2003 + C68 * C2333) * C14933) *
                        C61 * C67 * C14835 * C5928 +
                    ((C272 * C831 + C68 * C1134) * C1313 +
                     (C272 * C893 + C68 * C1184) * C15153 -
                     (C272 * C3023 + C68 * C3287) * C1314 -
                     (C272 * C3074 + C68 * C3332) * C14933) *
                        C61 * C67 * C14835 * C5929 +
                    ((C272 * C6257 + C68 * C6473) * C1314 -
                     ((C272 * C5244 + C68 * C5401) * C15153 +
                      (C272 * C5214 + C68 * C5375) * C1313) +
                     (C272 * C6295 + C68 * C6509) * C14933) *
                        C61 * C67 * C14835 * C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1675 +
                     (C272 * C153 + C68 * C332) * C15154 -
                     (C272 * C829 + C68 * C1132) * C1676 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C3411 +
                    ((C272 * C1941 + C68 * C2277) * C1676 -
                     ((C272 * C499 + C68 * C781) * C15154 +
                      (C272 * C385 + C68 * C688) * C1675) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C3412 +
                    ((C272 * C387 + C68 * C690) * C1675 +
                     (C272 * C500 + C68 * C782) * C15154 -
                     (C272 * C3024 + C68 * C3288) * C1676 -
                     (C272 * C3118 + C68 * C3373) * C14973) *
                        C61 * C67 * C3413 +
                    ((C272 * C4209 + C68 * C4425) * C1676 -
                     ((C272 * C2833 + C68 * C2983) * C15154 +
                      (C272 * C2772 + C68 * C2933) * C1675) +
                     (C272 * C4283 + C68 * C4496) * C14973) *
                        C61 * C67 * C15189) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1675 +
                      (C272 * C153 + C68 * C332) * C15154 -
                      (C272 * C829 + C68 * C1132) * C1676 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C1941 + C68 * C2277) * C1676 -
                      ((C272 * C499 + C68 * C781) * C15154 +
                       (C272 * C385 + C68 * C688) * C1675) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C14933) *
                        C375 +
                    (((C272 * C828 + C68 * C1131) * C1676 -
                      ((C272 * C154 + C68 * C333) * C15154 +
                       (C272 * C78 + C68 * C274) * C1675) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C384 + C68 * C687) * C1675 +
                      (C272 * C501 + C68 * C783) * C15154 -
                      (C272 * C1942 + C68 * C2278) * C1676 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C14933) *
                        C376 +
                    (((C272 * C79 + C68 * C275) * C1675 +
                      (C272 * C155 + C68 * C334) * C15154 -
                      (C272 * C830 + C68 * C1133) * C1676 -
                      (C272 * C947 + C68 * C1229) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C1943 + C68 * C2279) * C1676 -
                      ((C272 * C503 + C68 * C785) * C15154 +
                       (C272 * C386 + C68 * C689) * C1675) +
                      (C272 * C2061 + C68 * C2388) * C14973) *
                         C61 * C67 * C14933) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C6005 +
                     (C272 * C153 + C68 * C332) * C5927 -
                     (C272 * C829 + C68 * C1132) * C6006 -
                     (C272 * C943 + C68 * C1225) * C5928 +
                     (C272 * C831 + C68 * C1134) * C6007 +
                     (C272 * C944 + C68 * C1226) * C5929 -
                     (C272 * C5214 + C68 * C5375) * C6008 -
                     (C272 * C5275 + C68 * C5425) * C15195) *
                        C61 * C67 * C15153 +
                    ((C272 * C1941 + C68 * C2277) * C6006 -
                     ((C272 * C499 + C68 * C781) * C5927 +
                      (C272 * C385 + C68 * C688) * C6005) +
                     (C272 * C2059 + C68 * C2386) * C5928 -
                     (C272 * C3023 + C68 * C3287) * C6007 -
                     (C272 * C3117 + C68 * C3372) * C5929 +
                     (C272 * C6257 + C68 * C6473) * C6008 +
                     (C272 * C6331 + C68 * C6544) * C15195) *
                        C61 * C67 * C14933) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C71 * C77 + C61 * C82) * C72 + (C71 * C83 + C61 * C92) * C62 -
              (C71 * C78 + C61 * C84) * C73 - (C71 * C85 + C61 * C93) * C63 +
              (C71 * C79 + C61 * C86) * C74 + (C71 * C87 + C61 * C94) * C64 -
              (C71 * C80 + C61 * C88) * C75 - (C71 * C89 + C61 * C95) * C65 +
              (C71 * C81 + C61 * C90) * C76 + (C71 * C91 + C61 * C96) * C66) *
             C67 * C68 * C14886 * C14875 +
         0.5 * std::pow(Pi, 2.5) *
             (((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
               (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
               (C71 * C79 + C61 * C86) * C383 +
               (C71 * C87 + C61 * C94) * C15173) *
                  C67 * C68 * C14886 * C15214 +
              ((C71 * C384 + C61 * C390) * C382 -
               ((C71 * C391 + C61 * C402) * C375 +
                (C71 * C385 + C61 * C392) * C381) +
               (C71 * C393 + C61 * C403) * C376 -
               (C71 * C386 + C61 * C394) * C383 -
               (C71 * C395 + C61 * C404) * C15173) *
                  C67 * C68 * C14886 * C15202 +
              ((C71 * C387 + C61 * C396) * C381 +
               (C71 * C397 + C61 * C405) * C375 -
               (C71 * C388 + C61 * C398) * C382 -
               (C71 * C399 + C61 * C406) * C376 +
               (C71 * C389 + C61 * C400) * C383 +
               (C71 * C401 + C61 * C407) * C15173) *
                  C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
           (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
           (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C15215 +
          ((C71 * C828 + C61 * C834) * C382 -
           ((C71 * C835 + C61 * C846) * C375 +
            (C71 * C829 + C61 * C836) * C381) +
           (C71 * C837 + C61 * C847) * C376 - (C71 * C830 + C61 * C838) * C383 -
           (C71 * C839 + C61 * C848) * C15173) *
              C67 * C68 * C15204 +
          ((C71 * C831 + C61 * C840) * C381 + (C71 * C841 + C61 * C849) * C375 -
           (C71 * C832 + C61 * C842) * C382 - (C71 * C843 + C61 * C850) * C376 +
           (C71 * C833 + C61 * C844) * C383 +
           (C71 * C845 + C61 * C851) * C15173) *
              C67 * C68 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
           (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
           (C71 * C79 + C61 * C86) * C2435 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C2430 +
          ((C71 * C384 + C61 * C390) * C2434 -
           ((C71 * C391 + C61 * C402) * C15211 +
            (C71 * C385 + C61 * C392) * C2433) +
           (C71 * C393 + C61 * C403) * C15198 -
           (C71 * C386 + C61 * C394) * C2435 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C2431 +
          ((C71 * C387 + C61 * C396) * C2433 +
           (C71 * C397 + C61 * C405) * C15211 -
           (C71 * C388 + C61 * C398) * C2434 -
           (C71 * C399 + C61 * C406) * C15198 +
           (C71 * C389 + C61 * C400) * C2435 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2771 + (C71 * C83 + C61 * C92) * C14835) *
              C67 * C68 * C14886 * C2766 -
          ((C71 * C391 + C61 * C402) * C14835 +
           (C71 * C385 + C61 * C392) * C2771) *
              C67 * C68 * C14886 * C2767 +
          ((C71 * C387 + C61 * C396) * C2771 +
           (C71 * C397 + C61 * C405) * C14835) *
              C67 * C68 * C14886 * C2768 -
          ((C71 * C2774 + C61 * C2778) * C14835 +
           (C71 * C2772 + C61 * C2775) * C2771) *
              C67 * C68 * C14886 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C2771 +
           (C71 * C2777 + C61 * C2779) * C14835) *
              C67 * C68 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C71 * C77 + C61 * C82) * C2771 +
                                (C71 * C83 + C61 * C92) * C14835) *
                                   C67 * C68 * C15215 -
                               ((C71 * C835 + C61 * C846) * C14835 +
                                (C71 * C829 + C61 * C836) * C2771) *
                                   C67 * C68 * C15204 +
                               ((C71 * C831 + C61 * C840) * C2771 +
                                (C71 * C841 + C61 * C849) * C14835) *
                                   C67 * C68 * C15182) *
                                  C2430 +
                              (((C71 * C1941 + C61 * C1944) * C2771 +
                                (C71 * C1945 + C61 * C1950) * C14835) *
                                   C67 * C68 * C15204 -
                               ((C71 * C391 + C61 * C402) * C14835 +
                                (C71 * C385 + C61 * C392) * C2771) *
                                   C67 * C68 * C15215 -
                               ((C71 * C3026 + C61 * C3032) * C14835 +
                                (C71 * C3023 + C61 * C3027) * C2771) *
                                   C67 * C68 * C15182) *
                                  C2431 +
                              (((C71 * C387 + C61 * C396) * C2771 +
                                (C71 * C397 + C61 * C405) * C14835) *
                                   C67 * C68 * C15215 -
                               ((C71 * C3028 + C61 * C3033) * C14835 +
                                (C71 * C3024 + C61 * C3029) * C2771) *
                                   C67 * C68 * C15204 +
                               ((C71 * C3025 + C61 * C3030) * C2771 +
                                (C71 * C3031 + C61 * C3034) * C14835) *
                                   C67 * C68 * C15182) *
                                  C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
           (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
           (C71 * C79 + C61 * C86) * C2435 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C4535 +
          ((C71 * C828 + C61 * C834) * C2434 -
           ((C71 * C835 + C61 * C846) * C15211 +
            (C71 * C829 + C61 * C836) * C2433) +
           (C71 * C837 + C61 * C847) * C15198 -
           (C71 * C830 + C61 * C838) * C2435 -
           (C71 * C839 + C61 * C848) * C15173) *
              C67 * C68 * C4536 +
          ((C71 * C831 + C61 * C840) * C2433 +
           (C71 * C841 + C61 * C849) * C15211 -
           (C71 * C832 + C61 * C842) * C2434 -
           (C71 * C843 + C61 * C850) * C15198 +
           (C71 * C833 + C61 * C844) * C2435 +
           (C71 * C845 + C61 * C851) * C15173) *
              C67 * C68 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C71 * C77 + C61 * C82) * C2771 +
                                (C71 * C83 + C61 * C92) * C14835) *
                                   C67 * C68 * C4535 -
                               ((C71 * C835 + C61 * C846) * C14835 +
                                (C71 * C829 + C61 * C836) * C2771) *
                                   C67 * C68 * C4536 +
                               ((C71 * C831 + C61 * C840) * C2771 +
                                (C71 * C841 + C61 * C849) * C14835) *
                                   C67 * C68 * C15182) *
                                  C15214 +
                              (((C71 * C1941 + C61 * C1944) * C2771 +
                                (C71 * C1945 + C61 * C1950) * C14835) *
                                   C67 * C68 * C4536 -
                               ((C71 * C391 + C61 * C402) * C14835 +
                                (C71 * C385 + C61 * C392) * C2771) *
                                   C67 * C68 * C4535 -
                               ((C71 * C3026 + C61 * C3032) * C14835 +
                                (C71 * C3023 + C61 * C3027) * C2771) *
                                   C67 * C68 * C15182) *
                                  C15202 +
                              (((C71 * C387 + C61 * C396) * C2771 +
                                (C71 * C397 + C61 * C405) * C14835) *
                                   C67 * C68 * C4535 -
                               ((C71 * C3028 + C61 * C3033) * C14835 +
                                (C71 * C3024 + C61 * C3029) * C2771) *
                                   C67 * C68 * C4536 +
                               ((C71 * C3025 + C61 * C3030) * C2771 +
                                (C71 * C3031 + C61 * C3034) * C14835) *
                                   C67 * C68 * C15182) *
                                  C15179)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2771 + (C71 * C83 + C61 * C92) * C14835) *
              C67 * C68 * C5209 -
          ((C71 * C835 + C61 * C846) * C14835 +
           (C71 * C829 + C61 * C836) * C2771) *
              C67 * C68 * C5210 +
          ((C71 * C831 + C61 * C840) * C2771 +
           (C71 * C841 + C61 * C849) * C14835) *
              C67 * C68 * C5211 -
          ((C71 * C5216 + C61 * C5220) * C14835 +
           (C71 * C5214 + C61 * C5217) * C2771) *
              C67 * C68 * C5212 +
          ((C71 * C5215 + C61 * C5218) * C2771 +
           (C71 * C5219 + C61 * C5221) * C14835) *
              C67 * C68 * C5213) *
         C14875) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C71 * C77 + C61 * C82) * C119 +
               (C71 * C120 + C61 * C125) * C14875) *
                  C67 * C68 * C62 -
              ((C71 * C121 + C61 * C126) * C14875 +
               (C71 * C78 + C61 * C84) * C119) *
                  C67 * C68 * C63 +
              ((C71 * C79 + C61 * C86) * C119 +
               (C71 * C122 + C61 * C127) * C14875) *
                  C67 * C68 * C64 -
              ((C71 * C123 + C61 * C128) * C14875 +
               (C71 * C80 + C61 * C88) * C119) *
                  C67 * C68 * C65 +
              ((C71 * C81 + C61 * C90) * C119 +
               (C71 * C124 + C61 * C129) * C14875) *
                  C67 * C68 * C66) *
             C14886 +
         0.5 * std::pow(Pi, 2.5) *
             (((C71 * C77 + C61 * C82) * C446 +
               (C71 * C120 + C61 * C125) * C15214 -
               (C71 * C385 + C61 * C392) * C447 -
               (C71 * C449 + C61 * C455) * C15202 +
               (C71 * C387 + C61 * C396) * C448 +
               (C71 * C450 + C61 * C456) * C15179) *
                  C67 * C68 * C375 +
              ((C71 * C384 + C61 * C390) * C447 -
               ((C71 * C121 + C61 * C126) * C15214 +
                (C71 * C78 + C61 * C84) * C446) +
               (C71 * C451 + C61 * C457) * C15202 -
               (C71 * C388 + C61 * C398) * C448 -
               (C71 * C452 + C61 * C458) * C15179) *
                  C67 * C68 * C376 +
              ((C71 * C79 + C61 * C86) * C446 +
               (C71 * C122 + C61 * C127) * C15214 -
               (C71 * C386 + C61 * C394) * C447 -
               (C71 * C453 + C61 * C459) * C15202 +
               (C71 * C389 + C61 * C400) * C448 +
               (C71 * C454 + C61 * C460) * C15179) *
                  C67 * C68 * C15173) *
             C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C71 * C77 + C61 * C82) * C119 +
                                (C71 * C120 + C61 * C125) * C14875) *
                                   C67 * C68 * C375 -
                               ((C71 * C121 + C61 * C126) * C14875 +
                                (C71 * C78 + C61 * C84) * C119) *
                                   C67 * C68 * C376 +
                               ((C71 * C79 + C61 * C86) * C119 +
                                (C71 * C122 + C61 * C127) * C14875) *
                                   C67 * C68 * C15173) *
                                  C15215 +
                              (((C71 * C828 + C61 * C834) * C119 +
                                (C71 * C890 + C61 * C896) * C14875) *
                                   C67 * C68 * C376 -
                               ((C71 * C891 + C61 * C897) * C14875 +
                                (C71 * C829 + C61 * C836) * C119) *
                                   C67 * C68 * C375 -
                               ((C71 * C892 + C61 * C898) * C14875 +
                                (C71 * C830 + C61 * C838) * C119) *
                                   C67 * C68 * C15173) *
                                  C15204 +
                              (((C71 * C831 + C61 * C840) * C119 +
                                (C71 * C893 + C61 * C899) * C14875) *
                                   C67 * C68 * C375 -
                               ((C71 * C894 + C61 * C900) * C14875 +
                                (C71 * C832 + C61 * C842) * C119) *
                                   C67 * C68 * C376 +
                               ((C71 * C833 + C61 * C844) * C119 +
                                (C71 * C895 + C61 * C901) * C14875) *
                                   C67 * C68 * C15173) *
                                  C15182)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2474 + (C71 * C120 + C61 * C125) * C2430 -
           (C71 * C385 + C61 * C392) * C2475 -
           (C71 * C449 + C61 * C455) * C2431 +
           (C71 * C387 + C61 * C396) * C2476 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C15211 +
          ((C71 * C384 + C61 * C390) * C2475 -
           ((C71 * C121 + C61 * C126) * C2430 +
            (C71 * C78 + C61 * C84) * C2474) +
           (C71 * C451 + C61 * C457) * C2431 -
           (C71 * C388 + C61 * C398) * C2476 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C15198 +
          ((C71 * C79 + C61 * C86) * C2474 + (C71 * C122 + C61 * C127) * C2430 -
           (C71 * C386 + C61 * C394) * C2475 -
           (C71 * C453 + C61 * C459) * C2431 +
           (C71 * C389 + C61 * C400) * C2476 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C2802 + (C71 * C120 + C61 * C125) * C2766 -
          (C71 * C385 + C61 * C392) * C2803 -
          (C71 * C449 + C61 * C455) * C2767 +
          (C71 * C387 + C61 * C396) * C2804 +
          (C71 * C450 + C61 * C456) * C2768 -
          (C71 * C2772 + C61 * C2775) * C2805 -
          (C71 * C2807 + C61 * C2809) * C2769 +
          (C71 * C2773 + C61 * C2776) * C2806 +
          (C71 * C2808 + C61 * C2810) * C2770) *
         C67 * C68 * C14835 * C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2474 + (C71 * C120 + C61 * C125) * C2430 -
           (C71 * C385 + C61 * C392) * C2475 -
           (C71 * C449 + C61 * C455) * C2431 +
           (C71 * C387 + C61 * C396) * C2476 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C14835 * C15215 +
          ((C71 * C1941 + C61 * C1944) * C2475 -
           ((C71 * C891 + C61 * C897) * C2430 +
            (C71 * C829 + C61 * C836) * C2474) +
           (C71 * C2003 + C61 * C2006) * C2431 -
           (C71 * C3024 + C61 * C3029) * C2476 -
           (C71 * C3073 + C61 * C3076) * C15179) *
              C67 * C68 * C14835 * C15204 +
          ((C71 * C831 + C61 * C840) * C2474 +
           (C71 * C893 + C61 * C899) * C2430 -
           (C71 * C3023 + C61 * C3027) * C2475 -
           (C71 * C3074 + C61 * C3077) * C2431 +
           (C71 * C3025 + C61 * C3030) * C2476 +
           (C71 * C3075 + C61 * C3078) * C15179) *
              C67 * C68 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C71 * C77 + C61 * C82) * C119 +
                                (C71 * C120 + C61 * C125) * C14875) *
                                   C67 * C68 * C15211 -
                               ((C71 * C121 + C61 * C126) * C14875 +
                                (C71 * C78 + C61 * C84) * C119) *
                                   C67 * C68 * C15198 +
                               ((C71 * C79 + C61 * C86) * C119 +
                                (C71 * C122 + C61 * C127) * C14875) *
                                   C67 * C68 * C15173) *
                                  C4535 +
                              (((C71 * C828 + C61 * C834) * C119 +
                                (C71 * C890 + C61 * C896) * C14875) *
                                   C67 * C68 * C15198 -
                               ((C71 * C891 + C61 * C897) * C14875 +
                                (C71 * C829 + C61 * C836) * C119) *
                                   C67 * C68 * C15211 -
                               ((C71 * C892 + C61 * C898) * C14875 +
                                (C71 * C830 + C61 * C838) * C119) *
                                   C67 * C68 * C15173) *
                                  C4536 +
                              (((C71 * C831 + C61 * C840) * C119 +
                                (C71 * C893 + C61 * C899) * C14875) *
                                   C67 * C68 * C15211 -
                               ((C71 * C894 + C61 * C900) * C14875 +
                                (C71 * C832 + C61 * C842) * C119) *
                                   C67 * C68 * C15198 +
                               ((C71 * C833 + C61 * C844) * C119 +
                                (C71 * C895 + C61 * C901) * C14875) *
                                   C67 * C68 * C15173) *
                                  C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C446 + (C71 * C120 + C61 * C125) * C15214 -
           (C71 * C385 + C61 * C392) * C447 -
           (C71 * C449 + C61 * C455) * C15202 +
           (C71 * C387 + C61 * C396) * C448 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C14835 * C4535 +
          ((C71 * C1941 + C61 * C1944) * C447 -
           ((C71 * C891 + C61 * C897) * C15214 +
            (C71 * C829 + C61 * C836) * C446) +
           (C71 * C2003 + C61 * C2006) * C15202 -
           (C71 * C3024 + C61 * C3029) * C448 -
           (C71 * C3073 + C61 * C3076) * C15179) *
              C67 * C68 * C14835 * C4536 +
          ((C71 * C831 + C61 * C840) * C446 +
           (C71 * C893 + C61 * C899) * C15214 -
           (C71 * C3023 + C61 * C3027) * C447 -
           (C71 * C3074 + C61 * C3077) * C15202 +
           (C71 * C3025 + C61 * C3030) * C448 +
           (C71 * C3075 + C61 * C3078) * C15179) *
              C67 * C68 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C119 +
           (C71 * C120 + C61 * C125) * C14875) *
              C67 * C68 * C14835 * C5209 -
          ((C71 * C891 + C61 * C897) * C14875 +
           (C71 * C829 + C61 * C836) * C119) *
              C67 * C68 * C14835 * C5210 +
          ((C71 * C831 + C61 * C840) * C119 +
           (C71 * C893 + C61 * C899) * C14875) *
              C67 * C68 * C14835 * C5211 -
          ((C71 * C5244 + C61 * C5246) * C14875 +
           (C71 * C5214 + C61 * C5217) * C119) *
              C67 * C68 * C14835 * C5212 +
          ((C71 * C5215 + C61 * C5218) * C119 +
           (C71 * C5245 + C61 * C5247) * C14875) *
              C67 * C68 * C14835 * C5213)) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C71 * C77 + C61 * C82) * C152 +
               (C71 * C153 + C61 * C158) * C14886) *
                  C67 * C68 * C14875 * C62 -
              ((C71 * C154 + C61 * C159) * C14886 +
               (C71 * C78 + C61 * C84) * C152) *
                  C67 * C68 * C14875 * C63 +
              ((C71 * C79 + C61 * C86) * C152 +
               (C71 * C155 + C61 * C160) * C14886) *
                  C67 * C68 * C14875 * C64 -
              ((C71 * C156 + C61 * C161) * C14886 +
               (C71 * C80 + C61 * C88) * C152) *
                  C67 * C68 * C14875 * C65 +
              ((C71 * C81 + C61 * C90) * C152 +
               (C71 * C157 + C61 * C162) * C14886) *
                  C67 * C68 * C14875 * C66) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C71 * C77 + C61 * C82) * C152 +
                (C71 * C153 + C61 * C158) * C14886) *
                   C67 * C68 * C15214 -
               ((C71 * C499 + C61 * C505) * C14886 +
                (C71 * C385 + C61 * C392) * C152) *
                   C67 * C68 * C15202 +
               ((C71 * C387 + C61 * C396) * C152 +
                (C71 * C500 + C61 * C506) * C14886) *
                   C67 * C68 * C15179) *
                  C375 +
              (((C71 * C384 + C61 * C390) * C152 +
                (C71 * C501 + C61 * C507) * C14886) *
                   C67 * C68 * C15202 -
               ((C71 * C154 + C61 * C159) * C14886 +
                (C71 * C78 + C61 * C84) * C152) *
                   C67 * C68 * C15214 -
               ((C71 * C502 + C61 * C508) * C14886 +
                (C71 * C388 + C61 * C398) * C152) *
                   C67 * C68 * C15179) *
                  C376 +
              (((C71 * C79 + C61 * C86) * C152 +
                (C71 * C155 + C61 * C160) * C14886) *
                   C67 * C68 * C15214 -
               ((C71 * C503 + C61 * C509) * C14886 +
                (C71 * C386 + C61 * C394) * C152) *
                   C67 * C68 * C15202 +
               ((C71 * C389 + C61 * C400) * C152 +
                (C71 * C504 + C61 * C510) * C14886) *
                   C67 * C68 * C15179) *
                  C15173)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C940 + (C71 * C153 + C61 * C158) * C15215 -
           (C71 * C829 + C61 * C836) * C941 -
           (C71 * C943 + C61 * C949) * C15204 +
           (C71 * C831 + C61 * C840) * C942 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C14875 * C375 +
          ((C71 * C828 + C61 * C834) * C941 -
           ((C71 * C154 + C61 * C159) * C15215 +
            (C71 * C78 + C61 * C84) * C940) +
           (C71 * C945 + C61 * C951) * C15204 -
           (C71 * C832 + C61 * C842) * C942 -
           (C71 * C946 + C61 * C952) * C15182) *
              C67 * C68 * C14875 * C376 +
          ((C71 * C79 + C61 * C86) * C940 + (C71 * C155 + C61 * C160) * C15215 -
           (C71 * C830 + C61 * C838) * C941 -
           (C71 * C947 + C61 * C953) * C15204 +
           (C71 * C833 + C61 * C844) * C942 +
           (C71 * C948 + C61 * C954) * C15182) *
              C67 * C68 * C14875 * C15173)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C152 +
            (C71 * C153 + C61 * C158) * C14886) *
               C67 * C68 * C2430 -
           ((C71 * C499 + C61 * C505) * C14886 +
            (C71 * C385 + C61 * C392) * C152) *
               C67 * C68 * C2431 +
           ((C71 * C387 + C61 * C396) * C152 +
            (C71 * C500 + C61 * C506) * C14886) *
               C67 * C68 * C15179) *
              C15211 +
          (((C71 * C384 + C61 * C390) * C152 +
            (C71 * C501 + C61 * C507) * C14886) *
               C67 * C68 * C2431 -
           ((C71 * C154 + C61 * C159) * C14886 +
            (C71 * C78 + C61 * C84) * C152) *
               C67 * C68 * C2430 -
           ((C71 * C502 + C61 * C508) * C14886 +
            (C71 * C388 + C61 * C398) * C152) *
               C67 * C68 * C15179) *
              C15198 +
          (((C71 * C79 + C61 * C86) * C152 +
            (C71 * C155 + C61 * C160) * C14886) *
               C67 * C68 * C2430 -
           ((C71 * C503 + C61 * C509) * C14886 +
            (C71 * C386 + C61 * C394) * C152) *
               C67 * C68 * C2431 +
           ((C71 * C389 + C61 * C400) * C152 +
            (C71 * C504 + C61 * C510) * C14886) *
               C67 * C68 * C15179) *
              C15173)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C152 +
           (C71 * C153 + C61 * C158) * C14886) *
              C67 * C68 * C2766 -
          ((C71 * C499 + C61 * C505) * C14886 +
           (C71 * C385 + C61 * C392) * C152) *
              C67 * C68 * C2767 +
          ((C71 * C387 + C61 * C396) * C152 +
           (C71 * C500 + C61 * C506) * C14886) *
              C67 * C68 * C2768 -
          ((C71 * C2833 + C61 * C2835) * C14886 +
           (C71 * C2772 + C61 * C2775) * C152) *
              C67 * C68 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C152 +
           (C71 * C2834 + C61 * C2836) * C14886) *
              C67 * C68 * C2770) *
         C14835) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C940 + (C71 * C153 + C61 * C158) * C15215 -
           (C71 * C829 + C61 * C836) * C941 -
           (C71 * C943 + C61 * C949) * C15204 +
           (C71 * C831 + C61 * C840) * C942 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C2430 +
          ((C71 * C1941 + C61 * C1944) * C941 -
           ((C71 * C499 + C61 * C505) * C15215 +
            (C71 * C385 + C61 * C392) * C940) +
           (C71 * C2059 + C61 * C2062) * C15204 -
           (C71 * C3023 + C61 * C3027) * C942 -
           (C71 * C3117 + C61 * C3120) * C15182) *
              C67 * C68 * C2431 +
          ((C71 * C387 + C61 * C396) * C940 +
           (C71 * C500 + C61 * C506) * C15215 -
           (C71 * C3024 + C61 * C3029) * C941 -
           (C71 * C3118 + C61 * C3121) * C15204 +
           (C71 * C3025 + C61 * C3030) * C942 +
           (C71 * C3119 + C61 * C3122) * C15182) *
              C67 * C68 * C15179) *
         C14835) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C4614 + (C71 * C153 + C61 * C158) * C4535 -
           (C71 * C829 + C61 * C836) * C4615 -
           (C71 * C943 + C61 * C949) * C4536 +
           (C71 * C831 + C61 * C840) * C4616 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C14875 * C15211 +
          ((C71 * C828 + C61 * C834) * C4615 -
           ((C71 * C154 + C61 * C159) * C4535 +
            (C71 * C78 + C61 * C84) * C4614) +
           (C71 * C945 + C61 * C951) * C4536 -
           (C71 * C832 + C61 * C842) * C4616 -
           (C71 * C946 + C61 * C952) * C15182) *
              C67 * C68 * C14875 * C15198 +
          ((C71 * C79 + C61 * C86) * C4614 + (C71 * C155 + C61 * C160) * C4535 -
           (C71 * C830 + C61 * C838) * C4615 -
           (C71 * C947 + C61 * C953) * C4536 +
           (C71 * C833 + C61 * C844) * C4616 +
           (C71 * C948 + C61 * C954) * C15182) *
              C67 * C68 * C14875 * C15173)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C4614 + (C71 * C153 + C61 * C158) * C4535 -
           (C71 * C829 + C61 * C836) * C4615 -
           (C71 * C943 + C61 * C949) * C4536 +
           (C71 * C831 + C61 * C840) * C4616 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C15214 +
          ((C71 * C1941 + C61 * C1944) * C4615 -
           ((C71 * C499 + C61 * C505) * C4535 +
            (C71 * C385 + C61 * C392) * C4614) +
           (C71 * C2059 + C61 * C2062) * C4536 -
           (C71 * C3023 + C61 * C3027) * C4616 -
           (C71 * C3117 + C61 * C3120) * C15182) *
              C67 * C68 * C15202 +
          ((C71 * C387 + C61 * C396) * C4614 +
           (C71 * C500 + C61 * C506) * C4535 -
           (C71 * C3024 + C61 * C3029) * C4615 -
           (C71 * C3118 + C61 * C3121) * C4536 +
           (C71 * C3025 + C61 * C3030) * C4616 +
           (C71 * C3119 + C61 * C3122) * C15182) *
              C67 * C68 * C15179) *
         C14835) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C5270 + (C71 * C153 + C61 * C158) * C5209 -
          (C71 * C829 + C61 * C836) * C5271 -
          (C71 * C943 + C61 * C949) * C5210 +
          (C71 * C831 + C61 * C840) * C5272 +
          (C71 * C944 + C61 * C950) * C5211 -
          (C71 * C5214 + C61 * C5217) * C5273 -
          (C71 * C5275 + C61 * C5277) * C5212 +
          (C71 * C5215 + C61 * C5218) * C5274 +
          (C71 * C5276 + C61 * C5278) * C5213) *
         C67 * C68 * C14875 * C14835) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C185 * C77 + C67 * C186) * C72 +
              (C185 * C83 + C67 * C191) * C62 -
              (C185 * C78 + C67 * C187) * C73 -
              (C185 * C85 + C67 * C192) * C63 +
              (C185 * C79 + C67 * C188) * C74 +
              (C185 * C87 + C67 * C193) * C64 -
              (C185 * C80 + C67 * C189) * C75 -
              (C185 * C89 + C67 * C194) * C65 +
              (C185 * C81 + C67 * C190) * C76 +
              (C185 * C91 + C67 * C195) * C66) *
             C68 * C61 * C14886 * C14875 +
         0.5 * std::pow(Pi, 2.5) *
             (((C185 * C77 + C67 * C186) * C381 +
               (C185 * C83 + C67 * C191) * C375 -
               (C185 * C78 + C67 * C187) * C382 -
               (C185 * C85 + C67 * C192) * C376 +
               (C185 * C79 + C67 * C188) * C383 +
               (C185 * C87 + C67 * C193) * C15173) *
                  C68 * C61 * C14886 * C15214 +
              ((C185 * C384 + C67 * C549) * C382 -
               ((C185 * C391 + C67 * C555) * C375 +
                (C185 * C385 + C67 * C550) * C381) +
               (C185 * C393 + C67 * C556) * C376 -
               (C185 * C386 + C67 * C551) * C383 -
               (C185 * C395 + C67 * C557) * C15173) *
                  C68 * C61 * C14886 * C15202 +
              ((C185 * C387 + C67 * C552) * C381 +
               (C185 * C397 + C67 * C558) * C375 -
               (C185 * C388 + C67 * C553) * C382 -
               (C185 * C399 + C67 * C559) * C376 +
               (C185 * C389 + C67 * C554) * C383 +
               (C185 * C401 + C67 * C560) * C15173) *
                  C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C381 + (C185 * C83 + C67 * C191) * C375 -
           (C185 * C78 + C67 * C187) * C382 - (C185 * C85 + C67 * C192) * C376 +
           (C185 * C79 + C67 * C188) * C383 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C15215 +
          ((C185 * C828 + C67 * C993) * C382 -
           ((C185 * C835 + C67 * C999) * C375 +
            (C185 * C829 + C67 * C994) * C381) +
           (C185 * C837 + C67 * C1000) * C376 -
           (C185 * C830 + C67 * C995) * C383 -
           (C185 * C839 + C67 * C1001) * C15173) *
              C68 * C61 * C15204 +
          ((C185 * C831 + C67 * C996) * C381 +
           (C185 * C841 + C67 * C1002) * C375 -
           (C185 * C832 + C67 * C997) * C382 -
           (C185 * C843 + C67 * C1003) * C376 +
           (C185 * C833 + C67 * C998) * C383 +
           (C185 * C845 + C67 * C1004) * C15173) *
              C68 * C61 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2433 +
           (C185 * C83 + C67 * C191) * C15211 -
           (C185 * C78 + C67 * C187) * C2434 -
           (C185 * C85 + C67 * C192) * C15198 +
           (C185 * C79 + C67 * C188) * C2435 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C2430 +
          ((C185 * C384 + C67 * C549) * C2434 -
           ((C185 * C391 + C67 * C555) * C15211 +
            (C185 * C385 + C67 * C550) * C2433) +
           (C185 * C393 + C67 * C556) * C15198 -
           (C185 * C386 + C67 * C551) * C2435 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C2431 +
          ((C185 * C387 + C67 * C552) * C2433 +
           (C185 * C397 + C67 * C558) * C15211 -
           (C185 * C388 + C67 * C553) * C2434 -
           (C185 * C399 + C67 * C559) * C15198 +
           (C185 * C389 + C67 * C554) * C2435 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2771 +
           (C185 * C83 + C67 * C191) * C14835) *
              C68 * C61 * C14886 * C2766 -
          ((C185 * C391 + C67 * C555) * C14835 +
           (C185 * C385 + C67 * C550) * C2771) *
              C68 * C61 * C14886 * C2767 +
          ((C185 * C387 + C67 * C552) * C2771 +
           (C185 * C397 + C67 * C558) * C14835) *
              C68 * C61 * C14886 * C2768 -
          ((C185 * C2774 + C67 * C2861) * C14835 +
           (C185 * C2772 + C67 * C2859) * C2771) *
              C68 * C61 * C14886 * C2769 +
          ((C185 * C2773 + C67 * C2860) * C2771 +
           (C185 * C2777 + C67 * C2862) * C14835) *
              C68 * C61 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C185 * C77 + C67 * C186) * C2771 +
                                (C185 * C83 + C67 * C191) * C14835) *
                                   C68 * C61 * C15215 -
                               ((C185 * C835 + C67 * C999) * C14835 +
                                (C185 * C829 + C67 * C994) * C2771) *
                                   C68 * C61 * C15204 +
                               ((C185 * C831 + C67 * C996) * C2771 +
                                (C185 * C841 + C67 * C1002) * C14835) *
                                   C68 * C61 * C15182) *
                                  C2430 +
                              (((C185 * C1941 + C67 * C2115) * C2771 +
                                (C185 * C1945 + C67 * C2118) * C14835) *
                                   C68 * C61 * C15204 -
                               ((C185 * C391 + C67 * C555) * C14835 +
                                (C185 * C385 + C67 * C550) * C2771) *
                                   C68 * C61 * C15215 -
                               ((C185 * C3026 + C67 * C3164) * C14835 +
                                (C185 * C3023 + C67 * C3161) * C2771) *
                                   C68 * C61 * C15182) *
                                  C2431 +
                              (((C185 * C387 + C67 * C552) * C2771 +
                                (C185 * C397 + C67 * C558) * C14835) *
                                   C68 * C61 * C15215 -
                               ((C185 * C3028 + C67 * C3165) * C14835 +
                                (C185 * C3024 + C67 * C3162) * C2771) *
                                   C68 * C61 * C15204 +
                               ((C185 * C3025 + C67 * C3163) * C2771 +
                                (C185 * C3031 + C67 * C3166) * C14835) *
                                   C68 * C61 * C15182) *
                                  C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2433 +
           (C185 * C83 + C67 * C191) * C15211 -
           (C185 * C78 + C67 * C187) * C2434 -
           (C185 * C85 + C67 * C192) * C15198 +
           (C185 * C79 + C67 * C188) * C2435 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C4535 +
          ((C185 * C828 + C67 * C993) * C2434 -
           ((C185 * C835 + C67 * C999) * C15211 +
            (C185 * C829 + C67 * C994) * C2433) +
           (C185 * C837 + C67 * C1000) * C15198 -
           (C185 * C830 + C67 * C995) * C2435 -
           (C185 * C839 + C67 * C1001) * C15173) *
              C68 * C61 * C4536 +
          ((C185 * C831 + C67 * C996) * C2433 +
           (C185 * C841 + C67 * C1002) * C15211 -
           (C185 * C832 + C67 * C997) * C2434 -
           (C185 * C843 + C67 * C1003) * C15198 +
           (C185 * C833 + C67 * C998) * C2435 +
           (C185 * C845 + C67 * C1004) * C15173) *
              C68 * C61 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C185 * C77 + C67 * C186) * C2771 +
                                (C185 * C83 + C67 * C191) * C14835) *
                                   C68 * C61 * C4535 -
                               ((C185 * C835 + C67 * C999) * C14835 +
                                (C185 * C829 + C67 * C994) * C2771) *
                                   C68 * C61 * C4536 +
                               ((C185 * C831 + C67 * C996) * C2771 +
                                (C185 * C841 + C67 * C1002) * C14835) *
                                   C68 * C61 * C15182) *
                                  C15214 +
                              (((C185 * C1941 + C67 * C2115) * C2771 +
                                (C185 * C1945 + C67 * C2118) * C14835) *
                                   C68 * C61 * C4536 -
                               ((C185 * C391 + C67 * C555) * C14835 +
                                (C185 * C385 + C67 * C550) * C2771) *
                                   C68 * C61 * C4535 -
                               ((C185 * C3026 + C67 * C3164) * C14835 +
                                (C185 * C3023 + C67 * C3161) * C2771) *
                                   C68 * C61 * C15182) *
                                  C15202 +
                              (((C185 * C387 + C67 * C552) * C2771 +
                                (C185 * C397 + C67 * C558) * C14835) *
                                   C68 * C61 * C4535 -
                               ((C185 * C3028 + C67 * C3165) * C14835 +
                                (C185 * C3024 + C67 * C3162) * C2771) *
                                   C68 * C61 * C4536 +
                               ((C185 * C3025 + C67 * C3163) * C2771 +
                                (C185 * C3031 + C67 * C3166) * C14835) *
                                   C68 * C61 * C15182) *
                                  C15179)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2771 +
           (C185 * C83 + C67 * C191) * C14835) *
              C68 * C61 * C5209 -
          ((C185 * C835 + C67 * C999) * C14835 +
           (C185 * C829 + C67 * C994) * C2771) *
              C68 * C61 * C5210 +
          ((C185 * C831 + C67 * C996) * C2771 +
           (C185 * C841 + C67 * C1002) * C14835) *
              C68 * C61 * C5211 -
          ((C185 * C5216 + C67 * C5303) * C14835 +
           (C185 * C5214 + C67 * C5301) * C2771) *
              C68 * C61 * C5212 +
          ((C185 * C5215 + C67 * C5302) * C2771 +
           (C185 * C5219 + C67 * C5304) * C14835) *
              C68 * C61 * C5213) *
         C14875) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C185 * C77 + C67 * C186) * C119 +
               (C185 * C120 + C67 * C218) * C14875) *
                  C68 * C61 * C62 -
              ((C185 * C121 + C67 * C219) * C14875 +
               (C185 * C78 + C67 * C187) * C119) *
                  C68 * C61 * C63 +
              ((C185 * C79 + C67 * C188) * C119 +
               (C185 * C122 + C67 * C220) * C14875) *
                  C68 * C61 * C64 -
              ((C185 * C123 + C67 * C221) * C14875 +
               (C185 * C80 + C67 * C189) * C119) *
                  C68 * C61 * C65 +
              ((C185 * C81 + C67 * C190) * C119 +
               (C185 * C124 + C67 * C222) * C14875) *
                  C68 * C61 * C66) *
             C14886 +
         0.5 * std::pow(Pi, 2.5) *
             (((C185 * C77 + C67 * C186) * C446 +
               (C185 * C120 + C67 * C218) * C15214 -
               (C185 * C385 + C67 * C550) * C447 -
               (C185 * C449 + C67 * C599) * C15202 +
               (C185 * C387 + C67 * C552) * C448 +
               (C185 * C450 + C67 * C600) * C15179) *
                  C68 * C61 * C375 +
              ((C185 * C384 + C67 * C549) * C447 -
               ((C185 * C121 + C67 * C219) * C15214 +
                (C185 * C78 + C67 * C187) * C446) +
               (C185 * C451 + C67 * C601) * C15202 -
               (C185 * C388 + C67 * C553) * C448 -
               (C185 * C452 + C67 * C602) * C15179) *
                  C68 * C61 * C376 +
              ((C185 * C79 + C67 * C188) * C446 +
               (C185 * C122 + C67 * C220) * C15214 -
               (C185 * C386 + C67 * C551) * C447 -
               (C185 * C453 + C67 * C603) * C15202 +
               (C185 * C389 + C67 * C554) * C448 +
               (C185 * C454 + C67 * C604) * C15179) *
                  C68 * C61 * C15173) *
             C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C185 * C77 + C67 * C186) * C119 +
                                (C185 * C120 + C67 * C218) * C14875) *
                                   C68 * C61 * C375 -
                               ((C185 * C121 + C67 * C219) * C14875 +
                                (C185 * C78 + C67 * C187) * C119) *
                                   C68 * C61 * C376 +
                               ((C185 * C79 + C67 * C188) * C119 +
                                (C185 * C122 + C67 * C220) * C14875) *
                                   C68 * C61 * C15173) *
                                  C15215 +
                              (((C185 * C828 + C67 * C993) * C119 +
                                (C185 * C890 + C67 * C1043) * C14875) *
                                   C68 * C61 * C376 -
                               ((C185 * C891 + C67 * C1044) * C14875 +
                                (C185 * C829 + C67 * C994) * C119) *
                                   C68 * C61 * C375 -
                               ((C185 * C892 + C67 * C1045) * C14875 +
                                (C185 * C830 + C67 * C995) * C119) *
                                   C68 * C61 * C15173) *
                                  C15204 +
                              (((C185 * C831 + C67 * C996) * C119 +
                                (C185 * C893 + C67 * C1046) * C14875) *
                                   C68 * C61 * C375 -
                               ((C185 * C894 + C67 * C1047) * C14875 +
                                (C185 * C832 + C67 * C997) * C119) *
                                   C68 * C61 * C376 +
                               ((C185 * C833 + C67 * C998) * C119 +
                                (C185 * C895 + C67 * C1048) * C14875) *
                                   C68 * C61 * C15173) *
                                  C15182)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2474 +
           (C185 * C120 + C67 * C218) * C2430 -
           (C185 * C385 + C67 * C550) * C2475 -
           (C185 * C449 + C67 * C599) * C2431 +
           (C185 * C387 + C67 * C552) * C2476 +
           (C185 * C450 + C67 * C600) * C15179) *
              C68 * C61 * C15211 +
          ((C185 * C384 + C67 * C549) * C2475 -
           ((C185 * C121 + C67 * C219) * C2430 +
            (C185 * C78 + C67 * C187) * C2474) +
           (C185 * C451 + C67 * C601) * C2431 -
           (C185 * C388 + C67 * C553) * C2476 -
           (C185 * C452 + C67 * C602) * C15179) *
              C68 * C61 * C15198 +
          ((C185 * C79 + C67 * C188) * C2474 +
           (C185 * C122 + C67 * C220) * C2430 -
           (C185 * C386 + C67 * C551) * C2475 -
           (C185 * C453 + C67 * C603) * C2431 +
           (C185 * C389 + C67 * C554) * C2476 +
           (C185 * C454 + C67 * C604) * C15179) *
              C68 * C61 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C185 * C77 + C67 * C186) * C2802 +
          (C185 * C120 + C67 * C218) * C2766 -
          (C185 * C385 + C67 * C550) * C2803 -
          (C185 * C449 + C67 * C599) * C2767 +
          (C185 * C387 + C67 * C552) * C2804 +
          (C185 * C450 + C67 * C600) * C2768 -
          (C185 * C2772 + C67 * C2859) * C2805 -
          (C185 * C2807 + C67 * C2885) * C2769 +
          (C185 * C2773 + C67 * C2860) * C2806 +
          (C185 * C2808 + C67 * C2886) * C2770) *
         C68 * C61 * C14835 * C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C185 * C77 + C67 * C186) * C2474 +
                               (C185 * C120 + C67 * C218) * C2430 -
                               (C185 * C385 + C67 * C550) * C2475 -
                               (C185 * C449 + C67 * C599) * C2431 +
                               (C185 * C387 + C67 * C552) * C2476 +
                               (C185 * C450 + C67 * C600) * C15179) *
                                  C68 * C61 * C14835 * C15215 +
                              ((C185 * C1941 + C67 * C2115) * C2475 -
                               ((C185 * C891 + C67 * C1044) * C2430 +
                                (C185 * C829 + C67 * C994) * C2474) +
                               (C185 * C2003 + C67 * C2171) * C2431 -
                               (C185 * C3024 + C67 * C3162) * C2476 -
                               (C185 * C3073 + C67 * C3205) * C15179) *
                                  C68 * C61 * C14835 * C15204 +
                              ((C185 * C831 + C67 * C996) * C2474 +
                               (C185 * C893 + C67 * C1046) * C2430 -
                               (C185 * C3023 + C67 * C3161) * C2475 -
                               (C185 * C3074 + C67 * C3206) * C2431 +
                               (C185 * C3025 + C67 * C3163) * C2476 +
                               (C185 * C3075 + C67 * C3207) * C15179) *
                                  C68 * C61 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C185 * C77 + C67 * C186) * C119 +
                                (C185 * C120 + C67 * C218) * C14875) *
                                   C68 * C61 * C15211 -
                               ((C185 * C121 + C67 * C219) * C14875 +
                                (C185 * C78 + C67 * C187) * C119) *
                                   C68 * C61 * C15198 +
                               ((C185 * C79 + C67 * C188) * C119 +
                                (C185 * C122 + C67 * C220) * C14875) *
                                   C68 * C61 * C15173) *
                                  C4535 +
                              (((C185 * C828 + C67 * C993) * C119 +
                                (C185 * C890 + C67 * C1043) * C14875) *
                                   C68 * C61 * C15198 -
                               ((C185 * C891 + C67 * C1044) * C14875 +
                                (C185 * C829 + C67 * C994) * C119) *
                                   C68 * C61 * C15211 -
                               ((C185 * C892 + C67 * C1045) * C14875 +
                                (C185 * C830 + C67 * C995) * C119) *
                                   C68 * C61 * C15173) *
                                  C4536 +
                              (((C185 * C831 + C67 * C996) * C119 +
                                (C185 * C893 + C67 * C1046) * C14875) *
                                   C68 * C61 * C15211 -
                               ((C185 * C894 + C67 * C1047) * C14875 +
                                (C185 * C832 + C67 * C997) * C119) *
                                   C68 * C61 * C15198 +
                               ((C185 * C833 + C67 * C998) * C119 +
                                (C185 * C895 + C67 * C1048) * C14875) *
                                   C68 * C61 * C15173) *
                                  C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C185 * C77 + C67 * C186) * C446 +
                               (C185 * C120 + C67 * C218) * C15214 -
                               (C185 * C385 + C67 * C550) * C447 -
                               (C185 * C449 + C67 * C599) * C15202 +
                               (C185 * C387 + C67 * C552) * C448 +
                               (C185 * C450 + C67 * C600) * C15179) *
                                  C68 * C61 * C14835 * C4535 +
                              ((C185 * C1941 + C67 * C2115) * C447 -
                               ((C185 * C891 + C67 * C1044) * C15214 +
                                (C185 * C829 + C67 * C994) * C446) +
                               (C185 * C2003 + C67 * C2171) * C15202 -
                               (C185 * C3024 + C67 * C3162) * C448 -
                               (C185 * C3073 + C67 * C3205) * C15179) *
                                  C68 * C61 * C14835 * C4536 +
                              ((C185 * C831 + C67 * C996) * C446 +
                               (C185 * C893 + C67 * C1046) * C15214 -
                               (C185 * C3023 + C67 * C3161) * C447 -
                               (C185 * C3074 + C67 * C3206) * C15202 +
                               (C185 * C3025 + C67 * C3163) * C448 +
                               (C185 * C3075 + C67 * C3207) * C15179) *
                                  C68 * C61 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C119 +
           (C185 * C120 + C67 * C218) * C14875) *
              C68 * C61 * C14835 * C5209 -
          ((C185 * C891 + C67 * C1044) * C14875 +
           (C185 * C829 + C67 * C994) * C119) *
              C68 * C61 * C14835 * C5210 +
          ((C185 * C831 + C67 * C996) * C119 +
           (C185 * C893 + C67 * C1046) * C14875) *
              C68 * C61 * C14835 * C5211 -
          ((C185 * C5244 + C67 * C5327) * C14875 +
           (C185 * C5214 + C67 * C5301) * C119) *
              C68 * C61 * C14835 * C5212 +
          ((C185 * C5215 + C67 * C5302) * C119 +
           (C185 * C5245 + C67 * C5328) * C14875) *
              C68 * C61 * C14835 * C5213)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C185 * C77 + C67 * C186) * C152 +
                         (C185 * C153 + C67 * C245) * C14886) *
                            C68 * C61 * C14875 * C62 -
                        ((C185 * C154 + C67 * C246) * C14886 +
                         (C185 * C78 + C67 * C187) * C152) *
                            C68 * C61 * C14875 * C63 +
                        ((C185 * C79 + C67 * C188) * C152 +
                         (C185 * C155 + C67 * C247) * C14886) *
                            C68 * C61 * C14875 * C64 -
                        ((C185 * C156 + C67 * C248) * C14886 +
                         (C185 * C80 + C67 * C189) * C152) *
                            C68 * C61 * C14875 * C65 +
                        ((C185 * C81 + C67 * C190) * C152 +
                         (C185 * C157 + C67 * C249) * C14886) *
                            C68 * C61 * C14875 * C66) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C185 * C77 + C67 * C186) * C152 +
                          (C185 * C153 + C67 * C245) * C14886) *
                             C68 * C61 * C15214 -
                         ((C185 * C499 + C67 * C643) * C14886 +
                          (C185 * C385 + C67 * C550) * C152) *
                             C68 * C61 * C15202 +
                         ((C185 * C387 + C67 * C552) * C152 +
                          (C185 * C500 + C67 * C644) * C14886) *
                             C68 * C61 * C15179) *
                            C375 +
                        (((C185 * C384 + C67 * C549) * C152 +
                          (C185 * C501 + C67 * C645) * C14886) *
                             C68 * C61 * C15202 -
                         ((C185 * C154 + C67 * C246) * C14886 +
                          (C185 * C78 + C67 * C187) * C152) *
                             C68 * C61 * C15214 -
                         ((C185 * C502 + C67 * C646) * C14886 +
                          (C185 * C388 + C67 * C553) * C152) *
                             C68 * C61 * C15179) *
                            C376 +
                        (((C185 * C79 + C67 * C188) * C152 +
                          (C185 * C155 + C67 * C247) * C14886) *
                             C68 * C61 * C15214 -
                         ((C185 * C503 + C67 * C647) * C14886 +
                          (C185 * C386 + C67 * C551) * C152) *
                             C68 * C61 * C15202 +
                         ((C185 * C389 + C67 * C554) * C152 +
                          (C185 * C504 + C67 * C648) * C14886) *
                             C68 * C61 * C15179) *
                            C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * (((C185 * C77 + C67 * C186) * C940 +
                                         (C185 * C153 + C67 * C245) * C15215 -
                                         (C185 * C829 + C67 * C994) * C941 -
                                         (C185 * C943 + C67 * C1087) * C15204 +
                                         (C185 * C831 + C67 * C996) * C942 +
                                         (C185 * C944 + C67 * C1088) * C15182) *
                                            C68 * C61 * C14875 * C375 +
                                        ((C185 * C828 + C67 * C993) * C941 -
                                         ((C185 * C154 + C67 * C246) * C15215 +
                                          (C185 * C78 + C67 * C187) * C940) +
                                         (C185 * C945 + C67 * C1089) * C15204 -
                                         (C185 * C832 + C67 * C997) * C942 -
                                         (C185 * C946 + C67 * C1090) * C15182) *
                                            C68 * C61 * C14875 * C376 +
                                        ((C185 * C79 + C67 * C188) * C940 +
                                         (C185 * C155 + C67 * C247) * C15215 -
                                         (C185 * C830 + C67 * C995) * C941 -
                                         (C185 * C947 + C67 * C1091) * C15204 +
                                         (C185 * C833 + C67 * C998) * C942 +
                                         (C185 * C948 + C67 * C1092) * C15182) *
                                            C68 * C61 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C15211 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C2431 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C2430 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C15198 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C2766 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C2767 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C2768 -
                    ((C185 * C2833 + C67 * C2909) * C14886 +
                     (C185 * C2772 + C67 * C2859) * C152) *
                        C68 * C61 * C2769 +
                    ((C185 * C2773 + C67 * C2860) * C152 +
                     (C185 * C2834 + C67 * C2910) * C14886) *
                        C68 * C61 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C940 +
                     (C185 * C153 + C67 * C245) * C15215 -
                     (C185 * C829 + C67 * C994) * C941 -
                     (C185 * C943 + C67 * C1087) * C15204 +
                     (C185 * C831 + C67 * C996) * C942 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C2430 +
                    ((C185 * C1941 + C67 * C2115) * C941 -
                     ((C185 * C499 + C67 * C643) * C15215 +
                      (C185 * C385 + C67 * C550) * C940) +
                     (C185 * C2059 + C67 * C2224) * C15204 -
                     (C185 * C3023 + C67 * C3161) * C942 -
                     (C185 * C3117 + C67 * C3246) * C15182) *
                        C68 * C61 * C2431 +
                    ((C185 * C387 + C67 * C552) * C940 +
                     (C185 * C500 + C67 * C644) * C15215 -
                     (C185 * C3024 + C67 * C3162) * C941 -
                     (C185 * C3118 + C67 * C3247) * C15204 +
                     (C185 * C3025 + C67 * C3163) * C942 +
                     (C185 * C3119 + C67 * C3248) * C15182) *
                        C68 * C61 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * (((C185 * C77 + C67 * C186) * C4614 +
                                         (C185 * C153 + C67 * C245) * C4535 -
                                         (C185 * C829 + C67 * C994) * C4615 -
                                         (C185 * C943 + C67 * C1087) * C4536 +
                                         (C185 * C831 + C67 * C996) * C4616 +
                                         (C185 * C944 + C67 * C1088) * C15182) *
                                            C68 * C61 * C14875 * C15211 +
                                        ((C185 * C828 + C67 * C993) * C4615 -
                                         ((C185 * C154 + C67 * C246) * C4535 +
                                          (C185 * C78 + C67 * C187) * C4614) +
                                         (C185 * C945 + C67 * C1089) * C4536 -
                                         (C185 * C832 + C67 * C997) * C4616 -
                                         (C185 * C946 + C67 * C1090) * C15182) *
                                            C68 * C61 * C14875 * C15198 +
                                        ((C185 * C79 + C67 * C188) * C4614 +
                                         (C185 * C155 + C67 * C247) * C4535 -
                                         (C185 * C830 + C67 * C995) * C4615 -
                                         (C185 * C947 + C67 * C1091) * C4536 +
                                         (C185 * C833 + C67 * C998) * C4616 +
                                         (C185 * C948 + C67 * C1092) * C15182) *
                                            C68 * C61 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C4614 +
                     (C185 * C153 + C67 * C245) * C4535 -
                     (C185 * C829 + C67 * C994) * C4615 -
                     (C185 * C943 + C67 * C1087) * C4536 +
                     (C185 * C831 + C67 * C996) * C4616 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C15214 +
                    ((C185 * C1941 + C67 * C2115) * C4615 -
                     ((C185 * C499 + C67 * C643) * C4535 +
                      (C185 * C385 + C67 * C550) * C4614) +
                     (C185 * C2059 + C67 * C2224) * C4536 -
                     (C185 * C3023 + C67 * C3161) * C4616 -
                     (C185 * C3117 + C67 * C3246) * C15182) *
                        C68 * C61 * C15202 +
                    ((C185 * C387 + C67 * C552) * C4614 +
                     (C185 * C500 + C67 * C644) * C4535 -
                     (C185 * C3024 + C67 * C3162) * C4615 -
                     (C185 * C3118 + C67 * C3247) * C4536 +
                     (C185 * C3025 + C67 * C3163) * C4616 +
                     (C185 * C3119 + C67 * C3248) * C15182) *
                        C68 * C61 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C185 * C77 + C67 * C186) * C5270 +
                    (C185 * C153 + C67 * C245) * C5209 -
                    (C185 * C829 + C67 * C994) * C5271 -
                    (C185 * C943 + C67 * C1087) * C5210 +
                    (C185 * C831 + C67 * C996) * C5272 +
                    (C185 * C944 + C67 * C1088) * C5211 -
                    (C185 * C5214 + C67 * C5301) * C5273 -
                    (C185 * C5275 + C67 * C5351) * C5212 +
                    (C185 * C5215 + C67 * C5302) * C5274 +
                    (C185 * C5276 + C67 * C5352) * C5213) *
                   C68 * C61 * C14875 * C14835) /
                      (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C272 * C77 + C68 * C273) * C72 +
              (C272 * C83 + C68 * C278) * C62 -
              (C272 * C78 + C68 * C274) * C73 -
              (C272 * C85 + C68 * C279) * C63 +
              (C272 * C79 + C68 * C275) * C74 +
              (C272 * C87 + C68 * C280) * C64 -
              (C272 * C80 + C68 * C276) * C75 -
              (C272 * C89 + C68 * C281) * C65 +
              (C272 * C81 + C68 * C277) * C76 +
              (C272 * C91 + C68 * C282) * C66) *
             C61 * C67 * C14886 * C14875 +
         0.5 * std::pow(Pi, 2.5) *
             (((C272 * C77 + C68 * C273) * C381 +
               (C272 * C83 + C68 * C278) * C375 -
               (C272 * C78 + C68 * C274) * C382 -
               (C272 * C85 + C68 * C279) * C376 +
               (C272 * C79 + C68 * C275) * C383 +
               (C272 * C87 + C68 * C280) * C15173) *
                  C61 * C67 * C14886 * C15214 +
              ((C272 * C384 + C68 * C687) * C382 -
               ((C272 * C391 + C68 * C693) * C375 +
                (C272 * C385 + C68 * C688) * C381) +
               (C272 * C393 + C68 * C694) * C376 -
               (C272 * C386 + C68 * C689) * C383 -
               (C272 * C395 + C68 * C695) * C15173) *
                  C61 * C67 * C14886 * C15202 +
              ((C272 * C387 + C68 * C690) * C381 +
               (C272 * C397 + C68 * C696) * C375 -
               (C272 * C388 + C68 * C691) * C382 -
               (C272 * C399 + C68 * C697) * C376 +
               (C272 * C389 + C68 * C692) * C383 +
               (C272 * C401 + C68 * C698) * C15173) *
                  C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C381 + (C272 * C83 + C68 * C278) * C375 -
           (C272 * C78 + C68 * C274) * C382 - (C272 * C85 + C68 * C279) * C376 +
           (C272 * C79 + C68 * C275) * C383 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C15215 +
          ((C272 * C828 + C68 * C1131) * C382 -
           ((C272 * C835 + C68 * C1137) * C375 +
            (C272 * C829 + C68 * C1132) * C381) +
           (C272 * C837 + C68 * C1138) * C376 -
           (C272 * C830 + C68 * C1133) * C383 -
           (C272 * C839 + C68 * C1139) * C15173) *
              C61 * C67 * C15204 +
          ((C272 * C831 + C68 * C1134) * C381 +
           (C272 * C841 + C68 * C1140) * C375 -
           (C272 * C832 + C68 * C1135) * C382 -
           (C272 * C843 + C68 * C1141) * C376 +
           (C272 * C833 + C68 * C1136) * C383 +
           (C272 * C845 + C68 * C1142) * C15173) *
              C61 * C67 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2433 +
           (C272 * C83 + C68 * C278) * C15211 -
           (C272 * C78 + C68 * C274) * C2434 -
           (C272 * C85 + C68 * C279) * C15198 +
           (C272 * C79 + C68 * C275) * C2435 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C2430 +
          ((C272 * C384 + C68 * C687) * C2434 -
           ((C272 * C391 + C68 * C693) * C15211 +
            (C272 * C385 + C68 * C688) * C2433) +
           (C272 * C393 + C68 * C694) * C15198 -
           (C272 * C386 + C68 * C689) * C2435 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C2431 +
          ((C272 * C387 + C68 * C690) * C2433 +
           (C272 * C397 + C68 * C696) * C15211 -
           (C272 * C388 + C68 * C691) * C2434 -
           (C272 * C399 + C68 * C697) * C15198 +
           (C272 * C389 + C68 * C692) * C2435 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2771 +
           (C272 * C83 + C68 * C278) * C14835) *
              C61 * C67 * C14886 * C2766 -
          ((C272 * C391 + C68 * C693) * C14835 +
           (C272 * C385 + C68 * C688) * C2771) *
              C61 * C67 * C14886 * C2767 +
          ((C272 * C387 + C68 * C690) * C2771 +
           (C272 * C397 + C68 * C696) * C14835) *
              C61 * C67 * C14886 * C2768 -
          ((C272 * C2774 + C68 * C2935) * C14835 +
           (C272 * C2772 + C68 * C2933) * C2771) *
              C61 * C67 * C14886 * C2769 +
          ((C272 * C2773 + C68 * C2934) * C2771 +
           (C272 * C2777 + C68 * C2936) * C14835) *
              C61 * C67 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C272 * C77 + C68 * C273) * C2771 +
                                (C272 * C83 + C68 * C278) * C14835) *
                                   C61 * C67 * C15215 -
                               ((C272 * C835 + C68 * C1137) * C14835 +
                                (C272 * C829 + C68 * C1132) * C2771) *
                                   C61 * C67 * C15204 +
                               ((C272 * C831 + C68 * C1134) * C2771 +
                                (C272 * C841 + C68 * C1140) * C14835) *
                                   C61 * C67 * C15182) *
                                  C2430 +
                              (((C272 * C1941 + C68 * C2277) * C2771 +
                                (C272 * C1945 + C68 * C2280) * C14835) *
                                   C61 * C67 * C15204 -
                               ((C272 * C391 + C68 * C693) * C14835 +
                                (C272 * C385 + C68 * C688) * C2771) *
                                   C61 * C67 * C15215 -
                               ((C272 * C3026 + C68 * C3290) * C14835 +
                                (C272 * C3023 + C68 * C3287) * C2771) *
                                   C61 * C67 * C15182) *
                                  C2431 +
                              (((C272 * C387 + C68 * C690) * C2771 +
                                (C272 * C397 + C68 * C696) * C14835) *
                                   C61 * C67 * C15215 -
                               ((C272 * C3028 + C68 * C3291) * C14835 +
                                (C272 * C3024 + C68 * C3288) * C2771) *
                                   C61 * C67 * C15204 +
                               ((C272 * C3025 + C68 * C3289) * C2771 +
                                (C272 * C3031 + C68 * C3292) * C14835) *
                                   C61 * C67 * C15182) *
                                  C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2433 +
           (C272 * C83 + C68 * C278) * C15211 -
           (C272 * C78 + C68 * C274) * C2434 -
           (C272 * C85 + C68 * C279) * C15198 +
           (C272 * C79 + C68 * C275) * C2435 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C4535 +
          ((C272 * C828 + C68 * C1131) * C2434 -
           ((C272 * C835 + C68 * C1137) * C15211 +
            (C272 * C829 + C68 * C1132) * C2433) +
           (C272 * C837 + C68 * C1138) * C15198 -
           (C272 * C830 + C68 * C1133) * C2435 -
           (C272 * C839 + C68 * C1139) * C15173) *
              C61 * C67 * C4536 +
          ((C272 * C831 + C68 * C1134) * C2433 +
           (C272 * C841 + C68 * C1140) * C15211 -
           (C272 * C832 + C68 * C1135) * C2434 -
           (C272 * C843 + C68 * C1141) * C15198 +
           (C272 * C833 + C68 * C1136) * C2435 +
           (C272 * C845 + C68 * C1142) * C15173) *
              C61 * C67 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C272 * C77 + C68 * C273) * C2771 +
                                (C272 * C83 + C68 * C278) * C14835) *
                                   C61 * C67 * C4535 -
                               ((C272 * C835 + C68 * C1137) * C14835 +
                                (C272 * C829 + C68 * C1132) * C2771) *
                                   C61 * C67 * C4536 +
                               ((C272 * C831 + C68 * C1134) * C2771 +
                                (C272 * C841 + C68 * C1140) * C14835) *
                                   C61 * C67 * C15182) *
                                  C15214 +
                              (((C272 * C1941 + C68 * C2277) * C2771 +
                                (C272 * C1945 + C68 * C2280) * C14835) *
                                   C61 * C67 * C4536 -
                               ((C272 * C391 + C68 * C693) * C14835 +
                                (C272 * C385 + C68 * C688) * C2771) *
                                   C61 * C67 * C4535 -
                               ((C272 * C3026 + C68 * C3290) * C14835 +
                                (C272 * C3023 + C68 * C3287) * C2771) *
                                   C61 * C67 * C15182) *
                                  C15202 +
                              (((C272 * C387 + C68 * C690) * C2771 +
                                (C272 * C397 + C68 * C696) * C14835) *
                                   C61 * C67 * C4535 -
                               ((C272 * C3028 + C68 * C3291) * C14835 +
                                (C272 * C3024 + C68 * C3288) * C2771) *
                                   C61 * C67 * C4536 +
                               ((C272 * C3025 + C68 * C3289) * C2771 +
                                (C272 * C3031 + C68 * C3292) * C14835) *
                                   C61 * C67 * C15182) *
                                  C15179)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2771 +
           (C272 * C83 + C68 * C278) * C14835) *
              C61 * C67 * C5209 -
          ((C272 * C835 + C68 * C1137) * C14835 +
           (C272 * C829 + C68 * C1132) * C2771) *
              C61 * C67 * C5210 +
          ((C272 * C831 + C68 * C1134) * C2771 +
           (C272 * C841 + C68 * C1140) * C14835) *
              C61 * C67 * C5211 -
          ((C272 * C5216 + C68 * C5377) * C14835 +
           (C272 * C5214 + C68 * C5375) * C2771) *
              C61 * C67 * C5212 +
          ((C272 * C5215 + C68 * C5376) * C2771 +
           (C272 * C5219 + C68 * C5378) * C14835) *
              C61 * C67 * C5213) *
         C14875) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C272 * C77 + C68 * C273) * C119 +
               (C272 * C120 + C68 * C305) * C14875) *
                  C61 * C67 * C62 -
              ((C272 * C121 + C68 * C306) * C14875 +
               (C272 * C78 + C68 * C274) * C119) *
                  C61 * C67 * C63 +
              ((C272 * C79 + C68 * C275) * C119 +
               (C272 * C122 + C68 * C307) * C14875) *
                  C61 * C67 * C64 -
              ((C272 * C123 + C68 * C308) * C14875 +
               (C272 * C80 + C68 * C276) * C119) *
                  C61 * C67 * C65 +
              ((C272 * C81 + C68 * C277) * C119 +
               (C272 * C124 + C68 * C309) * C14875) *
                  C61 * C67 * C66) *
             C14886 +
         0.5 * std::pow(Pi, 2.5) *
             (((C272 * C77 + C68 * C273) * C446 +
               (C272 * C120 + C68 * C305) * C15214 -
               (C272 * C385 + C68 * C688) * C447 -
               (C272 * C449 + C68 * C737) * C15202 +
               (C272 * C387 + C68 * C690) * C448 +
               (C272 * C450 + C68 * C738) * C15179) *
                  C61 * C67 * C375 +
              ((C272 * C384 + C68 * C687) * C447 -
               ((C272 * C121 + C68 * C306) * C15214 +
                (C272 * C78 + C68 * C274) * C446) +
               (C272 * C451 + C68 * C739) * C15202 -
               (C272 * C388 + C68 * C691) * C448 -
               (C272 * C452 + C68 * C740) * C15179) *
                  C61 * C67 * C376 +
              ((C272 * C79 + C68 * C275) * C446 +
               (C272 * C122 + C68 * C307) * C15214 -
               (C272 * C386 + C68 * C689) * C447 -
               (C272 * C453 + C68 * C741) * C15202 +
               (C272 * C389 + C68 * C692) * C448 +
               (C272 * C454 + C68 * C742) * C15179) *
                  C61 * C67 * C15173) *
             C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C272 * C77 + C68 * C273) * C119 +
                                (C272 * C120 + C68 * C305) * C14875) *
                                   C61 * C67 * C375 -
                               ((C272 * C121 + C68 * C306) * C14875 +
                                (C272 * C78 + C68 * C274) * C119) *
                                   C61 * C67 * C376 +
                               ((C272 * C79 + C68 * C275) * C119 +
                                (C272 * C122 + C68 * C307) * C14875) *
                                   C61 * C67 * C15173) *
                                  C15215 +
                              (((C272 * C828 + C68 * C1131) * C119 +
                                (C272 * C890 + C68 * C1181) * C14875) *
                                   C61 * C67 * C376 -
                               ((C272 * C891 + C68 * C1182) * C14875 +
                                (C272 * C829 + C68 * C1132) * C119) *
                                   C61 * C67 * C375 -
                               ((C272 * C892 + C68 * C1183) * C14875 +
                                (C272 * C830 + C68 * C1133) * C119) *
                                   C61 * C67 * C15173) *
                                  C15204 +
                              (((C272 * C831 + C68 * C1134) * C119 +
                                (C272 * C893 + C68 * C1184) * C14875) *
                                   C61 * C67 * C375 -
                               ((C272 * C894 + C68 * C1185) * C14875 +
                                (C272 * C832 + C68 * C1135) * C119) *
                                   C61 * C67 * C376 +
                               ((C272 * C833 + C68 * C1136) * C119 +
                                (C272 * C895 + C68 * C1186) * C14875) *
                                   C61 * C67 * C15173) *
                                  C15182)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2474 +
           (C272 * C120 + C68 * C305) * C2430 -
           (C272 * C385 + C68 * C688) * C2475 -
           (C272 * C449 + C68 * C737) * C2431 +
           (C272 * C387 + C68 * C690) * C2476 +
           (C272 * C450 + C68 * C738) * C15179) *
              C61 * C67 * C15211 +
          ((C272 * C384 + C68 * C687) * C2475 -
           ((C272 * C121 + C68 * C306) * C2430 +
            (C272 * C78 + C68 * C274) * C2474) +
           (C272 * C451 + C68 * C739) * C2431 -
           (C272 * C388 + C68 * C691) * C2476 -
           (C272 * C452 + C68 * C740) * C15179) *
              C61 * C67 * C15198 +
          ((C272 * C79 + C68 * C275) * C2474 +
           (C272 * C122 + C68 * C307) * C2430 -
           (C272 * C386 + C68 * C689) * C2475 -
           (C272 * C453 + C68 * C741) * C2431 +
           (C272 * C389 + C68 * C692) * C2476 +
           (C272 * C454 + C68 * C742) * C15179) *
              C61 * C67 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C272 * C77 + C68 * C273) * C2802 +
          (C272 * C120 + C68 * C305) * C2766 -
          (C272 * C385 + C68 * C688) * C2803 -
          (C272 * C449 + C68 * C737) * C2767 +
          (C272 * C387 + C68 * C690) * C2804 +
          (C272 * C450 + C68 * C738) * C2768 -
          (C272 * C2772 + C68 * C2933) * C2805 -
          (C272 * C2807 + C68 * C2959) * C2769 +
          (C272 * C2773 + C68 * C2934) * C2806 +
          (C272 * C2808 + C68 * C2960) * C2770) *
         C61 * C67 * C14835 * C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C272 * C77 + C68 * C273) * C2474 +
                               (C272 * C120 + C68 * C305) * C2430 -
                               (C272 * C385 + C68 * C688) * C2475 -
                               (C272 * C449 + C68 * C737) * C2431 +
                               (C272 * C387 + C68 * C690) * C2476 +
                               (C272 * C450 + C68 * C738) * C15179) *
                                  C61 * C67 * C14835 * C15215 +
                              ((C272 * C1941 + C68 * C2277) * C2475 -
                               ((C272 * C891 + C68 * C1182) * C2430 +
                                (C272 * C829 + C68 * C1132) * C2474) +
                               (C272 * C2003 + C68 * C2333) * C2431 -
                               (C272 * C3024 + C68 * C3288) * C2476 -
                               (C272 * C3073 + C68 * C3331) * C15179) *
                                  C61 * C67 * C14835 * C15204 +
                              ((C272 * C831 + C68 * C1134) * C2474 +
                               (C272 * C893 + C68 * C1184) * C2430 -
                               (C272 * C3023 + C68 * C3287) * C2475 -
                               (C272 * C3074 + C68 * C3332) * C2431 +
                               (C272 * C3025 + C68 * C3289) * C2476 +
                               (C272 * C3075 + C68 * C3333) * C15179) *
                                  C61 * C67 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C272 * C77 + C68 * C273) * C119 +
                                (C272 * C120 + C68 * C305) * C14875) *
                                   C61 * C67 * C15211 -
                               ((C272 * C121 + C68 * C306) * C14875 +
                                (C272 * C78 + C68 * C274) * C119) *
                                   C61 * C67 * C15198 +
                               ((C272 * C79 + C68 * C275) * C119 +
                                (C272 * C122 + C68 * C307) * C14875) *
                                   C61 * C67 * C15173) *
                                  C4535 +
                              (((C272 * C828 + C68 * C1131) * C119 +
                                (C272 * C890 + C68 * C1181) * C14875) *
                                   C61 * C67 * C15198 -
                               ((C272 * C891 + C68 * C1182) * C14875 +
                                (C272 * C829 + C68 * C1132) * C119) *
                                   C61 * C67 * C15211 -
                               ((C272 * C892 + C68 * C1183) * C14875 +
                                (C272 * C830 + C68 * C1133) * C119) *
                                   C61 * C67 * C15173) *
                                  C4536 +
                              (((C272 * C831 + C68 * C1134) * C119 +
                                (C272 * C893 + C68 * C1184) * C14875) *
                                   C61 * C67 * C15211 -
                               ((C272 * C894 + C68 * C1185) * C14875 +
                                (C272 * C832 + C68 * C1135) * C119) *
                                   C61 * C67 * C15198 +
                               ((C272 * C833 + C68 * C1136) * C119 +
                                (C272 * C895 + C68 * C1186) * C14875) *
                                   C61 * C67 * C15173) *
                                  C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C272 * C77 + C68 * C273) * C446 +
                               (C272 * C120 + C68 * C305) * C15214 -
                               (C272 * C385 + C68 * C688) * C447 -
                               (C272 * C449 + C68 * C737) * C15202 +
                               (C272 * C387 + C68 * C690) * C448 +
                               (C272 * C450 + C68 * C738) * C15179) *
                                  C61 * C67 * C14835 * C4535 +
                              ((C272 * C1941 + C68 * C2277) * C447 -
                               ((C272 * C891 + C68 * C1182) * C15214 +
                                (C272 * C829 + C68 * C1132) * C446) +
                               (C272 * C2003 + C68 * C2333) * C15202 -
                               (C272 * C3024 + C68 * C3288) * C448 -
                               (C272 * C3073 + C68 * C3331) * C15179) *
                                  C61 * C67 * C14835 * C4536 +
                              ((C272 * C831 + C68 * C1134) * C446 +
                               (C272 * C893 + C68 * C1184) * C15214 -
                               (C272 * C3023 + C68 * C3287) * C447 -
                               (C272 * C3074 + C68 * C3332) * C15202 +
                               (C272 * C3025 + C68 * C3289) * C448 +
                               (C272 * C3075 + C68 * C3333) * C15179) *
                                  C61 * C67 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C119 +
           (C272 * C120 + C68 * C305) * C14875) *
              C61 * C67 * C14835 * C5209 -
          ((C272 * C891 + C68 * C1182) * C14875 +
           (C272 * C829 + C68 * C1132) * C119) *
              C61 * C67 * C14835 * C5210 +
          ((C272 * C831 + C68 * C1134) * C119 +
           (C272 * C893 + C68 * C1184) * C14875) *
              C61 * C67 * C14835 * C5211 -
          ((C272 * C5244 + C68 * C5401) * C14875 +
           (C272 * C5214 + C68 * C5375) * C119) *
              C61 * C67 * C14835 * C5212 +
          ((C272 * C5215 + C68 * C5376) * C119 +
           (C272 * C5245 + C68 * C5402) * C14875) *
              C61 * C67 * C14835 * C5213)) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C272 * C77 + C68 * C273) * C152 +
                         (C272 * C153 + C68 * C332) * C14886) *
                            C61 * C67 * C14875 * C62 -
                        ((C272 * C154 + C68 * C333) * C14886 +
                         (C272 * C78 + C68 * C274) * C152) *
                            C61 * C67 * C14875 * C63 +
                        ((C272 * C79 + C68 * C275) * C152 +
                         (C272 * C155 + C68 * C334) * C14886) *
                            C61 * C67 * C14875 * C64 -
                        ((C272 * C156 + C68 * C335) * C14886 +
                         (C272 * C80 + C68 * C276) * C152) *
                            C61 * C67 * C14875 * C65 +
                        ((C272 * C81 + C68 * C277) * C152 +
                         (C272 * C157 + C68 * C336) * C14886) *
                            C61 * C67 * C14875 * C66) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C272 * C77 + C68 * C273) * C152 +
                          (C272 * C153 + C68 * C332) * C14886) *
                             C61 * C67 * C15214 -
                         ((C272 * C499 + C68 * C781) * C14886 +
                          (C272 * C385 + C68 * C688) * C152) *
                             C61 * C67 * C15202 +
                         ((C272 * C387 + C68 * C690) * C152 +
                          (C272 * C500 + C68 * C782) * C14886) *
                             C61 * C67 * C15179) *
                            C375 +
                        (((C272 * C384 + C68 * C687) * C152 +
                          (C272 * C501 + C68 * C783) * C14886) *
                             C61 * C67 * C15202 -
                         ((C272 * C154 + C68 * C333) * C14886 +
                          (C272 * C78 + C68 * C274) * C152) *
                             C61 * C67 * C15214 -
                         ((C272 * C502 + C68 * C784) * C14886 +
                          (C272 * C388 + C68 * C691) * C152) *
                             C61 * C67 * C15179) *
                            C376 +
                        (((C272 * C79 + C68 * C275) * C152 +
                          (C272 * C155 + C68 * C334) * C14886) *
                             C61 * C67 * C15214 -
                         ((C272 * C503 + C68 * C785) * C14886 +
                          (C272 * C386 + C68 * C689) * C152) *
                             C61 * C67 * C15202 +
                         ((C272 * C389 + C68 * C692) * C152 +
                          (C272 * C504 + C68 * C786) * C14886) *
                             C61 * C67 * C15179) *
                            C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * (((C272 * C77 + C68 * C273) * C940 +
                                         (C272 * C153 + C68 * C332) * C15215 -
                                         (C272 * C829 + C68 * C1132) * C941 -
                                         (C272 * C943 + C68 * C1225) * C15204 +
                                         (C272 * C831 + C68 * C1134) * C942 +
                                         (C272 * C944 + C68 * C1226) * C15182) *
                                            C61 * C67 * C14875 * C375 +
                                        ((C272 * C828 + C68 * C1131) * C941 -
                                         ((C272 * C154 + C68 * C333) * C15215 +
                                          (C272 * C78 + C68 * C274) * C940) +
                                         (C272 * C945 + C68 * C1227) * C15204 -
                                         (C272 * C832 + C68 * C1135) * C942 -
                                         (C272 * C946 + C68 * C1228) * C15182) *
                                            C61 * C67 * C14875 * C376 +
                                        ((C272 * C79 + C68 * C275) * C940 +
                                         (C272 * C155 + C68 * C334) * C15215 -
                                         (C272 * C830 + C68 * C1133) * C941 -
                                         (C272 * C947 + C68 * C1229) * C15204 +
                                         (C272 * C833 + C68 * C1136) * C942 +
                                         (C272 * C948 + C68 * C1230) * C15182) *
                                            C61 * C67 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C15211 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C2431 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C2430 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C15198 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C2766 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C2767 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C2768 -
                    ((C272 * C2833 + C68 * C2983) * C14886 +
                     (C272 * C2772 + C68 * C2933) * C152) *
                        C61 * C67 * C2769 +
                    ((C272 * C2773 + C68 * C2934) * C152 +
                     (C272 * C2834 + C68 * C2984) * C14886) *
                        C61 * C67 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C940 +
                     (C272 * C153 + C68 * C332) * C15215 -
                     (C272 * C829 + C68 * C1132) * C941 -
                     (C272 * C943 + C68 * C1225) * C15204 +
                     (C272 * C831 + C68 * C1134) * C942 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C2430 +
                    ((C272 * C1941 + C68 * C2277) * C941 -
                     ((C272 * C499 + C68 * C781) * C15215 +
                      (C272 * C385 + C68 * C688) * C940) +
                     (C272 * C2059 + C68 * C2386) * C15204 -
                     (C272 * C3023 + C68 * C3287) * C942 -
                     (C272 * C3117 + C68 * C3372) * C15182) *
                        C61 * C67 * C2431 +
                    ((C272 * C387 + C68 * C690) * C940 +
                     (C272 * C500 + C68 * C782) * C15215 -
                     (C272 * C3024 + C68 * C3288) * C941 -
                     (C272 * C3118 + C68 * C3373) * C15204 +
                     (C272 * C3025 + C68 * C3289) * C942 +
                     (C272 * C3119 + C68 * C3374) * C15182) *
                        C61 * C67 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) * (((C272 * C77 + C68 * C273) * C4614 +
                                         (C272 * C153 + C68 * C332) * C4535 -
                                         (C272 * C829 + C68 * C1132) * C4615 -
                                         (C272 * C943 + C68 * C1225) * C4536 +
                                         (C272 * C831 + C68 * C1134) * C4616 +
                                         (C272 * C944 + C68 * C1226) * C15182) *
                                            C61 * C67 * C14875 * C15211 +
                                        ((C272 * C828 + C68 * C1131) * C4615 -
                                         ((C272 * C154 + C68 * C333) * C4535 +
                                          (C272 * C78 + C68 * C274) * C4614) +
                                         (C272 * C945 + C68 * C1227) * C4536 -
                                         (C272 * C832 + C68 * C1135) * C4616 -
                                         (C272 * C946 + C68 * C1228) * C15182) *
                                            C61 * C67 * C14875 * C15198 +
                                        ((C272 * C79 + C68 * C275) * C4614 +
                                         (C272 * C155 + C68 * C334) * C4535 -
                                         (C272 * C830 + C68 * C1133) * C4615 -
                                         (C272 * C947 + C68 * C1229) * C4536 +
                                         (C272 * C833 + C68 * C1136) * C4616 +
                                         (C272 * C948 + C68 * C1230) * C15182) *
                                            C61 * C67 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C4614 +
                     (C272 * C153 + C68 * C332) * C4535 -
                     (C272 * C829 + C68 * C1132) * C4615 -
                     (C272 * C943 + C68 * C1225) * C4536 +
                     (C272 * C831 + C68 * C1134) * C4616 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C15214 +
                    ((C272 * C1941 + C68 * C2277) * C4615 -
                     ((C272 * C499 + C68 * C781) * C4535 +
                      (C272 * C385 + C68 * C688) * C4614) +
                     (C272 * C2059 + C68 * C2386) * C4536 -
                     (C272 * C3023 + C68 * C3287) * C4616 -
                     (C272 * C3117 + C68 * C3372) * C15182) *
                        C61 * C67 * C15202 +
                    ((C272 * C387 + C68 * C690) * C4614 +
                     (C272 * C500 + C68 * C782) * C4535 -
                     (C272 * C3024 + C68 * C3288) * C4615 -
                     (C272 * C3118 + C68 * C3373) * C4536 +
                     (C272 * C3025 + C68 * C3289) * C4616 +
                     (C272 * C3119 + C68 * C3374) * C15182) *
                        C61 * C67 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C272 * C77 + C68 * C273) * C5270 +
                    (C272 * C153 + C68 * C332) * C5209 -
                    (C272 * C829 + C68 * C1132) * C5271 -
                    (C272 * C943 + C68 * C1225) * C5210 +
                    (C272 * C831 + C68 * C1134) * C5272 +
                    (C272 * C944 + C68 * C1226) * C5211 -
                    (C272 * C5214 + C68 * C5375) * C5273 -
                    (C272 * C5275 + C68 * C5425) * C5212 +
                    (C272 * C5215 + C68 * C5376) * C5274 +
                    (C272 * C5276 + C68 * C5426) * C5213) *
                   C61 * C67 * C14875 * C14835) /
                      (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C13575 +
            (C71 * C83 + C61 * C92) * C15139 -
            (C71 * C78 + C61 * C84) * C13556 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C828 + C61 * C834) * C13556 -
            ((C71 * C835 + C61 * C846) * C15139 +
             (C71 * C829 + C61 * C836) * C13575) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C14973) *
              C2430 +
          (((C71 * C384 + C61 * C390) * C13556 -
            ((C71 * C391 + C61 * C402) * C15139 +
             (C71 * C385 + C61 * C392) * C13575) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C1941 + C61 * C1944) * C13575 +
            (C71 * C1945 + C61 * C1950) * C15139 -
            (C71 * C1942 + C61 * C1946) * C13556 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C14973) *
              C2431 +
          (((C71 * C387 + C61 * C396) * C13575 +
            (C71 * C397 + C61 * C405) * C15139 -
            (C71 * C388 + C61 * C398) * C13556 -
            (C71 * C399 + C61 * C406) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C3759 + C61 * C3760) * C13556 -
            ((C71 * C3028 + C61 * C3033) * C15139 +
             (C71 * C3024 + C61 * C3029) * C13575) +
            (C71 * C3761 + C61 * C3762) * C14845) *
               C67 * C68 * C14973) *
              C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1271 + (C71 * C83 + C61 * C92) * C1265 -
           (C71 * C78 + C61 * C84) * C1272 - (C71 * C85 + C61 * C93) * C1266 +
           (C71 * C79 + C61 * C86) * C1273 + (C71 * C87 + C61 * C94) * C1267 -
           (C71 * C80 + C61 * C88) * C1274 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C15154 +
          ((C71 * C828 + C61 * C834) * C1272 -
           ((C71 * C835 + C61 * C846) * C1265 +
            (C71 * C829 + C61 * C836) * C1271) +
           (C71 * C837 + C61 * C847) * C1266 -
           (C71 * C830 + C61 * C838) * C1273 -
           (C71 * C839 + C61 * C848) * C1267 +
           (C71 * C1601 + C61 * C1602) * C1274 +
           (C71 * C1603 + C61 * C1604) * C15183) *
              C67 * C68 * C14973) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C13575 + (C71 * C83 + C61 * C92) * C15139 -
           (C71 * C78 + C61 * C84) * C13556 -
           (C71 * C85 + C61 * C93) * C14845) *
              C67 * C68 * C5927 +
          ((C71 * C828 + C61 * C834) * C13556 -
           ((C71 * C835 + C61 * C846) * C15139 +
            (C71 * C829 + C61 * C836) * C13575) +
           (C71 * C837 + C61 * C847) * C14845) *
              C67 * C68 * C5928 +
          ((C71 * C831 + C61 * C840) * C13575 +
           (C71 * C841 + C61 * C849) * C15139 -
           (C71 * C832 + C61 * C842) * C13556 -
           (C71 * C843 + C61 * C850) * C14845) *
              C67 * C68 * C5929 +
          ((C71 * C5931 + C61 * C5932) * C13556 -
           ((C71 * C5216 + C61 * C5220) * C15139 +
            (C71 * C5214 + C61 * C5217) * C13575) +
           (C71 * C5933 + C61 * C5934) * C14845) *
              C67 * C68 * C15195) *
         C14875) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C2474 +
                      (C71 * C120 + C61 * C125) * C2430 -
                      (C71 * C385 + C61 * C392) * C2475 -
                      (C71 * C449 + C61 * C455) * C2431 +
                      (C71 * C387 + C61 * C396) * C2476 +
                      (C71 * C450 + C61 * C456) * C15179) *
                         C67 * C68 * C15139 +
                     ((C71 * C384 + C61 * C390) * C2475 -
                      ((C71 * C121 + C61 * C126) * C2430 +
                       (C71 * C78 + C61 * C84) * C2474) +
                      (C71 * C451 + C61 * C457) * C2431 -
                      (C71 * C388 + C61 * C398) * C2476 -
                      (C71 * C452 + C61 * C458) * C15179) *
                         C67 * C68 * C14845) *
                        C15154 +
                    (((C71 * C1941 + C61 * C1944) * C2475 -
                      ((C71 * C891 + C61 * C897) * C2430 +
                       (C71 * C829 + C61 * C836) * C2474) +
                      (C71 * C2003 + C61 * C2006) * C2431 -
                      (C71 * C3024 + C61 * C3029) * C2476 -
                      (C71 * C3073 + C61 * C3076) * C15179) *
                         C67 * C68 * C15139 +
                     ((C71 * C828 + C61 * C834) * C2474 +
                      (C71 * C890 + C61 * C896) * C2430 -
                      (C71 * C1942 + C61 * C1946) * C2475 -
                      (C71 * C2004 + C61 * C2007) * C2431 +
                      (C71 * C3759 + C61 * C3760) * C2476 +
                      (C71 * C3813 + C61 * C3814) * C15179) *
                         C67 * C68 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C1265 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C1266 +
                     ((C71 * C79 + C61 * C86) * C119 +
                      (C71 * C122 + C61 * C127) * C14875) *
                         C67 * C68 * C1267 -
                     ((C71 * C123 + C61 * C128) * C14875 +
                      (C71 * C80 + C61 * C88) * C119) *
                         C67 * C68 * C15183) *
                        C15154 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C1266 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C1265 -
                     ((C71 * C892 + C61 * C898) * C14875 +
                      (C71 * C830 + C61 * C838) * C119) *
                         C67 * C68 * C1267 +
                     ((C71 * C1601 + C61 * C1602) * C119 +
                      (C71 * C1639 + C61 * C1640) * C14875) *
                         C67 * C68 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C15139 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C14845) *
                        C5927 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C14845 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C15139) *
                        C5928 +
                    (((C71 * C831 + C61 * C840) * C119 +
                      (C71 * C893 + C61 * C899) * C14875) *
                         C67 * C68 * C15139 -
                     ((C71 * C894 + C61 * C900) * C14875 +
                      (C71 * C832 + C61 * C842) * C119) *
                         C67 * C68 * C14845) *
                        C5929 +
                    (((C71 * C5931 + C61 * C5932) * C119 +
                      (C71 * C5969 + C61 * C5970) * C14875) *
                         C67 * C68 * C14845 -
                     ((C71 * C5244 + C61 * C5246) * C14875 +
                      (C71 * C5214 + C61 * C5217) * C119) *
                         C67 * C68 * C15139) *
                        C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C1675 +
            (C71 * C153 + C61 * C158) * C15154 -
            (C71 * C829 + C61 * C836) * C1676 -
            (C71 * C943 + C61 * C949) * C14973) *
               C67 * C68 * C2430 +
           ((C71 * C1941 + C61 * C1944) * C1676 -
            ((C71 * C499 + C61 * C505) * C15154 +
             (C71 * C385 + C61 * C392) * C1675) +
            (C71 * C2059 + C61 * C2062) * C14973) *
               C67 * C68 * C2431 +
           ((C71 * C387 + C61 * C396) * C1675 +
            (C71 * C500 + C61 * C506) * C15154 -
            (C71 * C3024 + C61 * C3029) * C1676 -
            (C71 * C3118 + C61 * C3121) * C14973) *
               C67 * C68 * C15179) *
              C15139 +
          (((C71 * C828 + C61 * C834) * C1676 -
            ((C71 * C154 + C61 * C159) * C15154 +
             (C71 * C78 + C61 * C84) * C1675) +
            (C71 * C945 + C61 * C951) * C14973) *
               C67 * C68 * C2430 +
           ((C71 * C384 + C61 * C390) * C1675 +
            (C71 * C501 + C61 * C507) * C15154 -
            (C71 * C1942 + C61 * C1946) * C1676 -
            (C71 * C2060 + C61 * C2063) * C14973) *
               C67 * C68 * C2431 +
           ((C71 * C3759 + C61 * C3760) * C1676 -
            ((C71 * C502 + C61 * C508) * C15154 +
             (C71 * C388 + C61 * C398) * C1675) +
            (C71 * C3865 + C61 * C3866) * C14973) *
               C67 * C68 * C15179) *
              C14845)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1675 +
           (C71 * C153 + C61 * C158) * C15154 -
           (C71 * C829 + C61 * C836) * C1676 -
           (C71 * C943 + C61 * C949) * C14973) *
              C67 * C68 * C14875 * C1265 +
          ((C71 * C828 + C61 * C834) * C1676 -
           ((C71 * C154 + C61 * C159) * C15154 +
            (C71 * C78 + C61 * C84) * C1675) +
           (C71 * C945 + C61 * C951) * C14973) *
              C67 * C68 * C14875 * C1266 +
          ((C71 * C79 + C61 * C86) * C1675 +
           (C71 * C155 + C61 * C160) * C15154 -
           (C71 * C830 + C61 * C838) * C1676 -
           (C71 * C947 + C61 * C953) * C14973) *
              C67 * C68 * C14875 * C1267 +
          ((C71 * C1601 + C61 * C1602) * C1676 -
           ((C71 * C156 + C61 * C161) * C15154 +
            (C71 * C80 + C61 * C88) * C1675) +
           (C71 * C1677 + C61 * C1678) * C14973) *
              C67 * C68 * C14875 * C15183)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6005 + (C71 * C153 + C61 * C158) * C5927 -
           (C71 * C829 + C61 * C836) * C6006 -
           (C71 * C943 + C61 * C949) * C5928 +
           (C71 * C831 + C61 * C840) * C6007 +
           (C71 * C944 + C61 * C950) * C5929 -
           (C71 * C5214 + C61 * C5217) * C6008 -
           (C71 * C5275 + C61 * C5277) * C15195) *
              C67 * C68 * C14875 * C15139 +
          ((C71 * C828 + C61 * C834) * C6006 -
           ((C71 * C154 + C61 * C159) * C5927 +
            (C71 * C78 + C61 * C84) * C6005) +
           (C71 * C945 + C61 * C951) * C5928 -
           (C71 * C832 + C61 * C842) * C6007 -
           (C71 * C946 + C61 * C952) * C5929 +
           (C71 * C5931 + C61 * C5932) * C6008 +
           (C71 * C6009 + C61 * C6010) * C15195) *
              C67 * C68 * C14875 * C14845)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C13575 +
                      (C185 * C83 + C67 * C191) * C15139 -
                      (C185 * C78 + C67 * C187) * C13556 -
                      (C185 * C85 + C67 * C192) * C14845) *
                         C68 * C61 * C15154 +
                     ((C185 * C828 + C67 * C993) * C13556 -
                      ((C185 * C835 + C67 * C999) * C15139 +
                       (C185 * C829 + C67 * C994) * C13575) +
                      (C185 * C837 + C67 * C1000) * C14845) *
                         C68 * C61 * C14973) *
                        C2430 +
                    (((C185 * C384 + C67 * C549) * C13556 -
                      ((C185 * C391 + C67 * C555) * C15139 +
                       (C185 * C385 + C67 * C550) * C13575) +
                      (C185 * C393 + C67 * C556) * C14845) *
                         C68 * C61 * C15154 +
                     ((C185 * C1941 + C67 * C2115) * C13575 +
                      (C185 * C1945 + C67 * C2118) * C15139 -
                      (C185 * C1942 + C67 * C2116) * C13556 -
                      (C185 * C1947 + C67 * C2119) * C14845) *
                         C68 * C61 * C14973) *
                        C2431 +
                    (((C185 * C387 + C67 * C552) * C13575 +
                      (C185 * C397 + C67 * C558) * C15139 -
                      (C185 * C388 + C67 * C553) * C13556 -
                      (C185 * C399 + C67 * C559) * C14845) *
                         C68 * C61 * C15154 +
                     ((C185 * C3759 + C67 * C3917) * C13556 -
                      ((C185 * C3028 + C67 * C3165) * C15139 +
                       (C185 * C3024 + C67 * C3162) * C13575) +
                      (C185 * C3761 + C67 * C3918) * C14845) *
                         C68 * C61 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1271 +
                     (C185 * C83 + C67 * C191) * C1265 -
                     (C185 * C78 + C67 * C187) * C1272 -
                     (C185 * C85 + C67 * C192) * C1266 +
                     (C185 * C79 + C67 * C188) * C1273 +
                     (C185 * C87 + C67 * C193) * C1267 -
                     (C185 * C80 + C67 * C189) * C1274 -
                     (C185 * C89 + C67 * C194) * C15183) *
                        C68 * C61 * C15154 +
                    ((C185 * C828 + C67 * C993) * C1272 -
                     ((C185 * C835 + C67 * C999) * C1265 +
                      (C185 * C829 + C67 * C994) * C1271) +
                     (C185 * C837 + C67 * C1000) * C1266 -
                     (C185 * C830 + C67 * C995) * C1273 -
                     (C185 * C839 + C67 * C1001) * C1267 +
                     (C185 * C1601 + C67 * C1713) * C1274 +
                     (C185 * C1603 + C67 * C1714) * C15183) *
                        C68 * C61 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C13575 +
                     (C185 * C83 + C67 * C191) * C15139 -
                     (C185 * C78 + C67 * C187) * C13556 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C5927 +
                    ((C185 * C828 + C67 * C993) * C13556 -
                     ((C185 * C835 + C67 * C999) * C15139 +
                      (C185 * C829 + C67 * C994) * C13575) +
                     (C185 * C837 + C67 * C1000) * C14845) *
                        C68 * C61 * C5928 +
                    ((C185 * C831 + C67 * C996) * C13575 +
                     (C185 * C841 + C67 * C1002) * C15139 -
                     (C185 * C832 + C67 * C997) * C13556 -
                     (C185 * C843 + C67 * C1003) * C14845) *
                        C68 * C61 * C5929 +
                    ((C185 * C5931 + C67 * C6045) * C13556 -
                     ((C185 * C5216 + C67 * C5303) * C15139 +
                      (C185 * C5214 + C67 * C5301) * C13575) +
                     (C185 * C5933 + C67 * C6046) * C14845) *
                        C68 * C61 * C15195) *
                   C14875) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C2474 +
                      (C185 * C120 + C67 * C218) * C2430 -
                      (C185 * C385 + C67 * C550) * C2475 -
                      (C185 * C449 + C67 * C599) * C2431 +
                      (C185 * C387 + C67 * C552) * C2476 +
                      (C185 * C450 + C67 * C600) * C15179) *
                         C68 * C61 * C15139 +
                     ((C185 * C384 + C67 * C549) * C2475 -
                      ((C185 * C121 + C67 * C219) * C2430 +
                       (C185 * C78 + C67 * C187) * C2474) +
                      (C185 * C451 + C67 * C601) * C2431 -
                      (C185 * C388 + C67 * C553) * C2476 -
                      (C185 * C452 + C67 * C602) * C15179) *
                         C68 * C61 * C14845) *
                        C15154 +
                    (((C185 * C1941 + C67 * C2115) * C2475 -
                      ((C185 * C891 + C67 * C1044) * C2430 +
                       (C185 * C829 + C67 * C994) * C2474) +
                      (C185 * C2003 + C67 * C2171) * C2431 -
                      (C185 * C3024 + C67 * C3162) * C2476 -
                      (C185 * C3073 + C67 * C3205) * C15179) *
                         C68 * C61 * C15139 +
                     ((C185 * C828 + C67 * C993) * C2474 +
                      (C185 * C890 + C67 * C1043) * C2430 -
                      (C185 * C1942 + C67 * C2116) * C2475 -
                      (C185 * C2004 + C67 * C2172) * C2431 +
                      (C185 * C3759 + C67 * C3917) * C2476 +
                      (C185 * C3813 + C67 * C3969) * C15179) *
                         C68 * C61 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C1265 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C1266 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C1267 -
                     ((C185 * C123 + C67 * C221) * C14875 +
                      (C185 * C80 + C67 * C189) * C119) *
                         C68 * C61 * C15183) *
                        C15154 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C1266 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C1265 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C1267 +
                     ((C185 * C1601 + C67 * C1713) * C119 +
                      (C185 * C1639 + C67 * C1749) * C14875) *
                         C68 * C61 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C15139 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C14845) *
                        C5927 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C14845 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C15139) *
                        C5928 +
                    (((C185 * C831 + C67 * C996) * C119 +
                      (C185 * C893 + C67 * C1046) * C14875) *
                         C68 * C61 * C15139 -
                     ((C185 * C894 + C67 * C1047) * C14875 +
                      (C185 * C832 + C67 * C997) * C119) *
                         C68 * C61 * C14845) *
                        C5929 +
                    (((C185 * C5931 + C67 * C6045) * C119 +
                      (C185 * C5969 + C67 * C6081) * C14875) *
                         C68 * C61 * C14845 -
                     ((C185 * C5244 + C67 * C5327) * C14875 +
                      (C185 * C5214 + C67 * C5301) * C119) *
                         C68 * C61 * C15139) *
                        C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1675 +
                      (C185 * C153 + C67 * C245) * C15154 -
                      (C185 * C829 + C67 * C994) * C1676 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C2430 +
                     ((C185 * C1941 + C67 * C2115) * C1676 -
                      ((C185 * C499 + C67 * C643) * C15154 +
                       (C185 * C385 + C67 * C550) * C1675) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C2431 +
                     ((C185 * C387 + C67 * C552) * C1675 +
                      (C185 * C500 + C67 * C644) * C15154 -
                      (C185 * C3024 + C67 * C3162) * C1676 -
                      (C185 * C3118 + C67 * C3247) * C14973) *
                         C68 * C61 * C15179) *
                        C15139 +
                    (((C185 * C828 + C67 * C993) * C1676 -
                      ((C185 * C154 + C67 * C246) * C15154 +
                       (C185 * C78 + C67 * C187) * C1675) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C2430 +
                     ((C185 * C384 + C67 * C549) * C1675 +
                      (C185 * C501 + C67 * C645) * C15154 -
                      (C185 * C1942 + C67 * C2116) * C1676 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C2431 +
                     ((C185 * C3759 + C67 * C3917) * C1676 -
                      ((C185 * C502 + C67 * C646) * C15154 +
                       (C185 * C388 + C67 * C553) * C1675) +
                      (C185 * C3865 + C67 * C4020) * C14973) *
                         C68 * C61 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1675 +
                     (C185 * C153 + C67 * C245) * C15154 -
                     (C185 * C829 + C67 * C994) * C1676 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C14875 * C1265 +
                    ((C185 * C828 + C67 * C993) * C1676 -
                     ((C185 * C154 + C67 * C246) * C15154 +
                      (C185 * C78 + C67 * C187) * C1675) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C14875 * C1266 +
                    ((C185 * C79 + C67 * C188) * C1675 +
                     (C185 * C155 + C67 * C247) * C15154 -
                     (C185 * C830 + C67 * C995) * C1676 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C14875 * C1267 +
                    ((C185 * C1601 + C67 * C1713) * C1676 -
                     ((C185 * C156 + C67 * C248) * C15154 +
                      (C185 * C80 + C67 * C189) * C1675) +
                     (C185 * C1677 + C67 * C1784) * C14973) *
                        C68 * C61 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C6005 +
                     (C185 * C153 + C67 * C245) * C5927 -
                     (C185 * C829 + C67 * C994) * C6006 -
                     (C185 * C943 + C67 * C1087) * C5928 +
                     (C185 * C831 + C67 * C996) * C6007 +
                     (C185 * C944 + C67 * C1088) * C5929 -
                     (C185 * C5214 + C67 * C5301) * C6008 -
                     (C185 * C5275 + C67 * C5351) * C15195) *
                        C68 * C61 * C14875 * C15139 +
                    ((C185 * C828 + C67 * C993) * C6006 -
                     ((C185 * C154 + C67 * C246) * C5927 +
                      (C185 * C78 + C67 * C187) * C6005) +
                     (C185 * C945 + C67 * C1089) * C5928 -
                     (C185 * C832 + C67 * C997) * C6007 -
                     (C185 * C946 + C67 * C1090) * C5929 +
                     (C185 * C5931 + C67 * C6045) * C6008 +
                     (C185 * C6009 + C67 * C6116) * C15195) *
                        C68 * C61 * C14875 * C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C13575 +
                      (C272 * C83 + C68 * C278) * C15139 -
                      (C272 * C78 + C68 * C274) * C13556 -
                      (C272 * C85 + C68 * C279) * C14845) *
                         C61 * C67 * C15154 +
                     ((C272 * C828 + C68 * C1131) * C13556 -
                      ((C272 * C835 + C68 * C1137) * C15139 +
                       (C272 * C829 + C68 * C1132) * C13575) +
                      (C272 * C837 + C68 * C1138) * C14845) *
                         C61 * C67 * C14973) *
                        C2430 +
                    (((C272 * C384 + C68 * C687) * C13556 -
                      ((C272 * C391 + C68 * C693) * C15139 +
                       (C272 * C385 + C68 * C688) * C13575) +
                      (C272 * C393 + C68 * C694) * C14845) *
                         C61 * C67 * C15154 +
                     ((C272 * C1941 + C68 * C2277) * C13575 +
                      (C272 * C1945 + C68 * C2280) * C15139 -
                      (C272 * C1942 + C68 * C2278) * C13556 -
                      (C272 * C1947 + C68 * C2281) * C14845) *
                         C61 * C67 * C14973) *
                        C2431 +
                    (((C272 * C387 + C68 * C690) * C13575 +
                      (C272 * C397 + C68 * C696) * C15139 -
                      (C272 * C388 + C68 * C691) * C13556 -
                      (C272 * C399 + C68 * C697) * C14845) *
                         C61 * C67 * C15154 +
                     ((C272 * C3759 + C68 * C4071) * C13556 -
                      ((C272 * C3028 + C68 * C3291) * C15139 +
                       (C272 * C3024 + C68 * C3288) * C13575) +
                      (C272 * C3761 + C68 * C4072) * C14845) *
                         C61 * C67 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1271 +
                     (C272 * C83 + C68 * C278) * C1265 -
                     (C272 * C78 + C68 * C274) * C1272 -
                     (C272 * C85 + C68 * C279) * C1266 +
                     (C272 * C79 + C68 * C275) * C1273 +
                     (C272 * C87 + C68 * C280) * C1267 -
                     (C272 * C80 + C68 * C276) * C1274 -
                     (C272 * C89 + C68 * C281) * C15183) *
                        C61 * C67 * C15154 +
                    ((C272 * C828 + C68 * C1131) * C1272 -
                     ((C272 * C835 + C68 * C1137) * C1265 +
                      (C272 * C829 + C68 * C1132) * C1271) +
                     (C272 * C837 + C68 * C1138) * C1266 -
                     (C272 * C830 + C68 * C1133) * C1273 -
                     (C272 * C839 + C68 * C1139) * C1267 +
                     (C272 * C1601 + C68 * C1819) * C1274 +
                     (C272 * C1603 + C68 * C1820) * C15183) *
                        C61 * C67 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C13575 +
                     (C272 * C83 + C68 * C278) * C15139 -
                     (C272 * C78 + C68 * C274) * C13556 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C5927 +
                    ((C272 * C828 + C68 * C1131) * C13556 -
                     ((C272 * C835 + C68 * C1137) * C15139 +
                      (C272 * C829 + C68 * C1132) * C13575) +
                     (C272 * C837 + C68 * C1138) * C14845) *
                        C61 * C67 * C5928 +
                    ((C272 * C831 + C68 * C1134) * C13575 +
                     (C272 * C841 + C68 * C1140) * C15139 -
                     (C272 * C832 + C68 * C1135) * C13556 -
                     (C272 * C843 + C68 * C1141) * C14845) *
                        C61 * C67 * C5929 +
                    ((C272 * C5931 + C68 * C6151) * C13556 -
                     ((C272 * C5216 + C68 * C5377) * C15139 +
                      (C272 * C5214 + C68 * C5375) * C13575) +
                     (C272 * C5933 + C68 * C6152) * C14845) *
                        C61 * C67 * C15195) *
                   C14875) /
                      (p * q * std::sqrt(p + q));
    d2eezy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C2474 +
                      (C272 * C120 + C68 * C305) * C2430 -
                      (C272 * C385 + C68 * C688) * C2475 -
                      (C272 * C449 + C68 * C737) * C2431 +
                      (C272 * C387 + C68 * C690) * C2476 +
                      (C272 * C450 + C68 * C738) * C15179) *
                         C61 * C67 * C15139 +
                     ((C272 * C384 + C68 * C687) * C2475 -
                      ((C272 * C121 + C68 * C306) * C2430 +
                       (C272 * C78 + C68 * C274) * C2474) +
                      (C272 * C451 + C68 * C739) * C2431 -
                      (C272 * C388 + C68 * C691) * C2476 -
                      (C272 * C452 + C68 * C740) * C15179) *
                         C61 * C67 * C14845) *
                        C15154 +
                    (((C272 * C1941 + C68 * C2277) * C2475 -
                      ((C272 * C891 + C68 * C1182) * C2430 +
                       (C272 * C829 + C68 * C1132) * C2474) +
                      (C272 * C2003 + C68 * C2333) * C2431 -
                      (C272 * C3024 + C68 * C3288) * C2476 -
                      (C272 * C3073 + C68 * C3331) * C15179) *
                         C61 * C67 * C15139 +
                     ((C272 * C828 + C68 * C1131) * C2474 +
                      (C272 * C890 + C68 * C1181) * C2430 -
                      (C272 * C1942 + C68 * C2278) * C2475 -
                      (C272 * C2004 + C68 * C2334) * C2431 +
                      (C272 * C3759 + C68 * C4071) * C2476 +
                      (C272 * C3813 + C68 * C4123) * C15179) *
                         C61 * C67 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C1265 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C1266 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C1267 -
                     ((C272 * C123 + C68 * C308) * C14875 +
                      (C272 * C80 + C68 * C276) * C119) *
                         C61 * C67 * C15183) *
                        C15154 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C1266 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C1265 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C1267 +
                     ((C272 * C1601 + C68 * C1819) * C119 +
                      (C272 * C1639 + C68 * C1855) * C14875) *
                         C61 * C67 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C15139 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C14845) *
                        C5927 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C14845 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C15139) *
                        C5928 +
                    (((C272 * C831 + C68 * C1134) * C119 +
                      (C272 * C893 + C68 * C1184) * C14875) *
                         C61 * C67 * C15139 -
                     ((C272 * C894 + C68 * C1185) * C14875 +
                      (C272 * C832 + C68 * C1135) * C119) *
                         C61 * C67 * C14845) *
                        C5929 +
                    (((C272 * C5931 + C68 * C6151) * C119 +
                      (C272 * C5969 + C68 * C6187) * C14875) *
                         C61 * C67 * C14845 -
                     ((C272 * C5244 + C68 * C5401) * C14875 +
                      (C272 * C5214 + C68 * C5375) * C119) *
                         C61 * C67 * C15139) *
                        C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1675 +
                      (C272 * C153 + C68 * C332) * C15154 -
                      (C272 * C829 + C68 * C1132) * C1676 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C2430 +
                     ((C272 * C1941 + C68 * C2277) * C1676 -
                      ((C272 * C499 + C68 * C781) * C15154 +
                       (C272 * C385 + C68 * C688) * C1675) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C2431 +
                     ((C272 * C387 + C68 * C690) * C1675 +
                      (C272 * C500 + C68 * C782) * C15154 -
                      (C272 * C3024 + C68 * C3288) * C1676 -
                      (C272 * C3118 + C68 * C3373) * C14973) *
                         C61 * C67 * C15179) *
                        C15139 +
                    (((C272 * C828 + C68 * C1131) * C1676 -
                      ((C272 * C154 + C68 * C333) * C15154 +
                       (C272 * C78 + C68 * C274) * C1675) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C2430 +
                     ((C272 * C384 + C68 * C687) * C1675 +
                      (C272 * C501 + C68 * C783) * C15154 -
                      (C272 * C1942 + C68 * C2278) * C1676 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C2431 +
                     ((C272 * C3759 + C68 * C4071) * C1676 -
                      ((C272 * C502 + C68 * C784) * C15154 +
                       (C272 * C388 + C68 * C691) * C1675) +
                      (C272 * C3865 + C68 * C4174) * C14973) *
                         C61 * C67 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1675 +
                     (C272 * C153 + C68 * C332) * C15154 -
                     (C272 * C829 + C68 * C1132) * C1676 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C14875 * C1265 +
                    ((C272 * C828 + C68 * C1131) * C1676 -
                     ((C272 * C154 + C68 * C333) * C15154 +
                      (C272 * C78 + C68 * C274) * C1675) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C14875 * C1266 +
                    ((C272 * C79 + C68 * C275) * C1675 +
                     (C272 * C155 + C68 * C334) * C15154 -
                     (C272 * C830 + C68 * C1133) * C1676 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C14875 * C1267 +
                    ((C272 * C1601 + C68 * C1819) * C1676 -
                     ((C272 * C156 + C68 * C335) * C15154 +
                      (C272 * C80 + C68 * C276) * C1675) +
                     (C272 * C1677 + C68 * C1890) * C14973) *
                        C61 * C67 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C6005 +
                     (C272 * C153 + C68 * C332) * C5927 -
                     (C272 * C829 + C68 * C1132) * C6006 -
                     (C272 * C943 + C68 * C1225) * C5928 +
                     (C272 * C831 + C68 * C1134) * C6007 +
                     (C272 * C944 + C68 * C1226) * C5929 -
                     (C272 * C5214 + C68 * C5375) * C6008 -
                     (C272 * C5275 + C68 * C5425) * C15195) *
                        C61 * C67 * C14875 * C15139 +
                    ((C272 * C828 + C68 * C1131) * C6006 -
                     ((C272 * C154 + C68 * C333) * C5927 +
                      (C272 * C78 + C68 * C274) * C6005) +
                     (C272 * C945 + C68 * C1227) * C5928 -
                     (C272 * C832 + C68 * C1135) * C6007 -
                     (C272 * C946 + C68 * C1228) * C5929 +
                     (C272 * C5931 + C68 * C6151) * C6008 +
                     (C272 * C6009 + C68 * C6222) * C15195) *
                        C61 * C67 * C14875 * C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
           (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
           (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C15214 +
          ((C71 * C384 + C61 * C390) * C382 -
           ((C71 * C391 + C61 * C402) * C375 +
            (C71 * C385 + C61 * C392) * C381) +
           (C71 * C393 + C61 * C403) * C376 - (C71 * C386 + C61 * C394) * C383 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C15202 +
          ((C71 * C387 + C61 * C396) * C381 + (C71 * C397 + C61 * C405) * C375 -
           (C71 * C388 + C61 * C398) * C382 - (C71 * C399 + C61 * C406) * C376 +
           (C71 * C389 + C61 * C400) * C383 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C72 + (C71 * C83 + C61 * C92) * C62 -
          (C71 * C78 + C61 * C84) * C73 - (C71 * C85 + C61 * C93) * C63 +
          (C71 * C79 + C61 * C86) * C74 + (C71 * C87 + C61 * C94) * C64 -
          (C71 * C80 + C61 * C88) * C75 - (C71 * C89 + C61 * C95) * C65 +
          (C71 * C81 + C61 * C90) * C76 + (C71 * C91 + C61 * C96) * C66) *
         C67 * C68 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
           (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
           (C71 * C79 + C61 * C86) * C2435 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C2430 +
          ((C71 * C384 + C61 * C390) * C2434 -
           ((C71 * C391 + C61 * C402) * C15211 +
            (C71 * C385 + C61 * C392) * C2433) +
           (C71 * C393 + C61 * C403) * C15198 -
           (C71 * C386 + C61 * C394) * C2435 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C2431 +
          ((C71 * C387 + C61 * C396) * C2433 +
           (C71 * C397 + C61 * C405) * C15211 -
           (C71 * C388 + C61 * C398) * C2434 -
           (C71 * C399 + C61 * C406) * C15198 +
           (C71 * C389 + C61 * C400) * C2435 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2771 + (C71 * C83 + C61 * C92) * C14835) *
              C67 * C68 * C14886 * C2766 -
          ((C71 * C391 + C61 * C402) * C14835 +
           (C71 * C385 + C61 * C392) * C2771) *
              C67 * C68 * C14886 * C2767 +
          ((C71 * C387 + C61 * C396) * C2771 +
           (C71 * C397 + C61 * C405) * C14835) *
              C67 * C68 * C14886 * C2768 -
          ((C71 * C2774 + C61 * C2778) * C14835 +
           (C71 * C2772 + C61 * C2775) * C2771) *
              C67 * C68 * C14886 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C2771 +
           (C71 * C2777 + C61 * C2779) * C14835) *
              C67 * C68 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
           (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
           (C71 * C79 + C61 * C86) * C2435 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C4535 +
          ((C71 * C828 + C61 * C834) * C2434 -
           ((C71 * C835 + C61 * C846) * C15211 +
            (C71 * C829 + C61 * C836) * C2433) +
           (C71 * C837 + C61 * C847) * C15198 -
           (C71 * C830 + C61 * C838) * C2435 -
           (C71 * C839 + C61 * C848) * C15173) *
              C67 * C68 * C4536 +
          ((C71 * C831 + C61 * C840) * C2433 +
           (C71 * C841 + C61 * C849) * C15211 -
           (C71 * C832 + C61 * C842) * C2434 -
           (C71 * C843 + C61 * C850) * C15198 +
           (C71 * C833 + C61 * C844) * C2435 +
           (C71 * C845 + C61 * C851) * C15173) *
              C67 * C68 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C4535 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C4536 +
           ((C71 * C831 + C61 * C840) * C2771 +
            (C71 * C841 + C61 * C849) * C14835) *
               C67 * C68 * C15182) *
              C15214 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C4536 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C4535 -
           ((C71 * C3026 + C61 * C3032) * C14835 +
            (C71 * C3023 + C61 * C3027) * C2771) *
               C67 * C68 * C15182) *
              C15202 +
          (((C71 * C387 + C61 * C396) * C2771 +
            (C71 * C397 + C61 * C405) * C14835) *
               C67 * C68 * C4535 -
           ((C71 * C3028 + C61 * C3033) * C14835 +
            (C71 * C3024 + C61 * C3029) * C2771) *
               C67 * C68 * C4536 +
           ((C71 * C3025 + C61 * C3030) * C2771 +
            (C71 * C3031 + C61 * C3034) * C14835) *
               C67 * C68 * C15182) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C446 + (C71 * C120 + C61 * C125) * C15214 -
           (C71 * C385 + C61 * C392) * C447 -
           (C71 * C449 + C61 * C455) * C15202 +
           (C71 * C387 + C61 * C396) * C448 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C375 +
          ((C71 * C384 + C61 * C390) * C447 -
           ((C71 * C121 + C61 * C126) * C15214 +
            (C71 * C78 + C61 * C84) * C446) +
           (C71 * C451 + C61 * C457) * C15202 -
           (C71 * C388 + C61 * C398) * C448 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C376 +
          ((C71 * C79 + C61 * C86) * C446 + (C71 * C122 + C61 * C127) * C15214 -
           (C71 * C386 + C61 * C394) * C447 -
           (C71 * C453 + C61 * C459) * C15202 +
           (C71 * C389 + C61 * C400) * C448 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C119 +
           (C71 * C120 + C61 * C125) * C14875) *
              C67 * C68 * C62 -
          ((C71 * C121 + C61 * C126) * C14875 +
           (C71 * C78 + C61 * C84) * C119) *
              C67 * C68 * C63 +
          ((C71 * C79 + C61 * C86) * C119 +
           (C71 * C122 + C61 * C127) * C14875) *
              C67 * C68 * C64 -
          ((C71 * C123 + C61 * C128) * C14875 +
           (C71 * C80 + C61 * C88) * C119) *
              C67 * C68 * C65 +
          ((C71 * C81 + C61 * C90) * C119 +
           (C71 * C124 + C61 * C129) * C14875) *
              C67 * C68 * C66) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2474 + (C71 * C120 + C61 * C125) * C2430 -
           (C71 * C385 + C61 * C392) * C2475 -
           (C71 * C449 + C61 * C455) * C2431 +
           (C71 * C387 + C61 * C396) * C2476 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C15211 +
          ((C71 * C384 + C61 * C390) * C2475 -
           ((C71 * C121 + C61 * C126) * C2430 +
            (C71 * C78 + C61 * C84) * C2474) +
           (C71 * C451 + C61 * C457) * C2431 -
           (C71 * C388 + C61 * C398) * C2476 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C15198 +
          ((C71 * C79 + C61 * C86) * C2474 + (C71 * C122 + C61 * C127) * C2430 -
           (C71 * C386 + C61 * C394) * C2475 -
           (C71 * C453 + C61 * C459) * C2431 +
           (C71 * C389 + C61 * C400) * C2476 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C2802 + (C71 * C120 + C61 * C125) * C2766 -
          (C71 * C385 + C61 * C392) * C2803 -
          (C71 * C449 + C61 * C455) * C2767 +
          (C71 * C387 + C61 * C396) * C2804 +
          (C71 * C450 + C61 * C456) * C2768 -
          (C71 * C2772 + C61 * C2775) * C2805 -
          (C71 * C2807 + C61 * C2809) * C2769 +
          (C71 * C2773 + C61 * C2776) * C2806 +
          (C71 * C2808 + C61 * C2810) * C2770) *
         C67 * C68 * C14835 * C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C119 +
            (C71 * C120 + C61 * C125) * C14875) *
               C67 * C68 * C15211 -
           ((C71 * C121 + C61 * C126) * C14875 +
            (C71 * C78 + C61 * C84) * C119) *
               C67 * C68 * C15198 +
           ((C71 * C79 + C61 * C86) * C119 +
            (C71 * C122 + C61 * C127) * C14875) *
               C67 * C68 * C15173) *
              C4535 +
          (((C71 * C828 + C61 * C834) * C119 +
            (C71 * C890 + C61 * C896) * C14875) *
               C67 * C68 * C15198 -
           ((C71 * C891 + C61 * C897) * C14875 +
            (C71 * C829 + C61 * C836) * C119) *
               C67 * C68 * C15211 -
           ((C71 * C892 + C61 * C898) * C14875 +
            (C71 * C830 + C61 * C838) * C119) *
               C67 * C68 * C15173) *
              C4536 +
          (((C71 * C831 + C61 * C840) * C119 +
            (C71 * C893 + C61 * C899) * C14875) *
               C67 * C68 * C15211 -
           ((C71 * C894 + C61 * C900) * C14875 +
            (C71 * C832 + C61 * C842) * C119) *
               C67 * C68 * C15198 +
           ((C71 * C833 + C61 * C844) * C119 +
            (C71 * C895 + C61 * C901) * C14875) *
               C67 * C68 * C15173) *
              C15182)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C446 + (C71 * C120 + C61 * C125) * C15214 -
           (C71 * C385 + C61 * C392) * C447 -
           (C71 * C449 + C61 * C455) * C15202 +
           (C71 * C387 + C61 * C396) * C448 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C14835 * C4535 +
          ((C71 * C1941 + C61 * C1944) * C447 -
           ((C71 * C891 + C61 * C897) * C15214 +
            (C71 * C829 + C61 * C836) * C446) +
           (C71 * C2003 + C61 * C2006) * C15202 -
           (C71 * C3024 + C61 * C3029) * C448 -
           (C71 * C3073 + C61 * C3076) * C15179) *
              C67 * C68 * C14835 * C4536 +
          ((C71 * C831 + C61 * C840) * C446 +
           (C71 * C893 + C61 * C899) * C15214 -
           (C71 * C3023 + C61 * C3027) * C447 -
           (C71 * C3074 + C61 * C3077) * C15202 +
           (C71 * C3025 + C61 * C3030) * C448 +
           (C71 * C3075 + C61 * C3078) * C15179) *
              C67 * C68 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C152 +
            (C71 * C153 + C61 * C158) * C14886) *
               C67 * C68 * C15214 -
           ((C71 * C499 + C61 * C505) * C14886 +
            (C71 * C385 + C61 * C392) * C152) *
               C67 * C68 * C15202 +
           ((C71 * C387 + C61 * C396) * C152 +
            (C71 * C500 + C61 * C506) * C14886) *
               C67 * C68 * C15179) *
              C375 +
          (((C71 * C384 + C61 * C390) * C152 +
            (C71 * C501 + C61 * C507) * C14886) *
               C67 * C68 * C15202 -
           ((C71 * C154 + C61 * C159) * C14886 +
            (C71 * C78 + C61 * C84) * C152) *
               C67 * C68 * C15214 -
           ((C71 * C502 + C61 * C508) * C14886 +
            (C71 * C388 + C61 * C398) * C152) *
               C67 * C68 * C15179) *
              C376 +
          (((C71 * C79 + C61 * C86) * C152 +
            (C71 * C155 + C61 * C160) * C14886) *
               C67 * C68 * C15214 -
           ((C71 * C503 + C61 * C509) * C14886 +
            (C71 * C386 + C61 * C394) * C152) *
               C67 * C68 * C15202 +
           ((C71 * C389 + C61 * C400) * C152 +
            (C71 * C504 + C61 * C510) * C14886) *
               C67 * C68 * C15179) *
              C15173)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C152 +
           (C71 * C153 + C61 * C158) * C14886) *
              C67 * C68 * C14875 * C62 -
          ((C71 * C154 + C61 * C159) * C14886 +
           (C71 * C78 + C61 * C84) * C152) *
              C67 * C68 * C14875 * C63 +
          ((C71 * C79 + C61 * C86) * C152 +
           (C71 * C155 + C61 * C160) * C14886) *
              C67 * C68 * C14875 * C64 -
          ((C71 * C156 + C61 * C161) * C14886 +
           (C71 * C80 + C61 * C88) * C152) *
              C67 * C68 * C14875 * C65 +
          ((C71 * C81 + C61 * C90) * C152 +
           (C71 * C157 + C61 * C162) * C14886) *
              C67 * C68 * C14875 * C66)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C152 +
            (C71 * C153 + C61 * C158) * C14886) *
               C67 * C68 * C2430 -
           ((C71 * C499 + C61 * C505) * C14886 +
            (C71 * C385 + C61 * C392) * C152) *
               C67 * C68 * C2431 +
           ((C71 * C387 + C61 * C396) * C152 +
            (C71 * C500 + C61 * C506) * C14886) *
               C67 * C68 * C15179) *
              C15211 +
          (((C71 * C384 + C61 * C390) * C152 +
            (C71 * C501 + C61 * C507) * C14886) *
               C67 * C68 * C2431 -
           ((C71 * C154 + C61 * C159) * C14886 +
            (C71 * C78 + C61 * C84) * C152) *
               C67 * C68 * C2430 -
           ((C71 * C502 + C61 * C508) * C14886 +
            (C71 * C388 + C61 * C398) * C152) *
               C67 * C68 * C15179) *
              C15198 +
          (((C71 * C79 + C61 * C86) * C152 +
            (C71 * C155 + C61 * C160) * C14886) *
               C67 * C68 * C2430 -
           ((C71 * C503 + C61 * C509) * C14886 +
            (C71 * C386 + C61 * C394) * C152) *
               C67 * C68 * C2431 +
           ((C71 * C389 + C61 * C400) * C152 +
            (C71 * C504 + C61 * C510) * C14886) *
               C67 * C68 * C15179) *
              C15173)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C152 +
           (C71 * C153 + C61 * C158) * C14886) *
              C67 * C68 * C2766 -
          ((C71 * C499 + C61 * C505) * C14886 +
           (C71 * C385 + C61 * C392) * C152) *
              C67 * C68 * C2767 +
          ((C71 * C387 + C61 * C396) * C152 +
           (C71 * C500 + C61 * C506) * C14886) *
              C67 * C68 * C2768 -
          ((C71 * C2833 + C61 * C2835) * C14886 +
           (C71 * C2772 + C61 * C2775) * C152) *
              C67 * C68 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C152 +
           (C71 * C2834 + C61 * C2836) * C14886) *
              C67 * C68 * C2770) *
         C14835) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C4614 + (C71 * C153 + C61 * C158) * C4535 -
           (C71 * C829 + C61 * C836) * C4615 -
           (C71 * C943 + C61 * C949) * C4536 +
           (C71 * C831 + C61 * C840) * C4616 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C14875 * C15211 +
          ((C71 * C828 + C61 * C834) * C4615 -
           ((C71 * C154 + C61 * C159) * C4535 +
            (C71 * C78 + C61 * C84) * C4614) +
           (C71 * C945 + C61 * C951) * C4536 -
           (C71 * C832 + C61 * C842) * C4616 -
           (C71 * C946 + C61 * C952) * C15182) *
              C67 * C68 * C14875 * C15198 +
          ((C71 * C79 + C61 * C86) * C4614 + (C71 * C155 + C61 * C160) * C4535 -
           (C71 * C830 + C61 * C838) * C4615 -
           (C71 * C947 + C61 * C953) * C4536 +
           (C71 * C833 + C61 * C844) * C4616 +
           (C71 * C948 + C61 * C954) * C15182) *
              C67 * C68 * C14875 * C15173)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C4614 + (C71 * C153 + C61 * C158) * C4535 -
           (C71 * C829 + C61 * C836) * C4615 -
           (C71 * C943 + C61 * C949) * C4536 +
           (C71 * C831 + C61 * C840) * C4616 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C15214 +
          ((C71 * C1941 + C61 * C1944) * C4615 -
           ((C71 * C499 + C61 * C505) * C4535 +
            (C71 * C385 + C61 * C392) * C4614) +
           (C71 * C2059 + C61 * C2062) * C4536 -
           (C71 * C3023 + C61 * C3027) * C4616 -
           (C71 * C3117 + C61 * C3120) * C15182) *
              C67 * C68 * C15202 +
          ((C71 * C387 + C61 * C396) * C4614 +
           (C71 * C500 + C61 * C506) * C4535 -
           (C71 * C3024 + C61 * C3029) * C4615 -
           (C71 * C3118 + C61 * C3121) * C4536 +
           (C71 * C3025 + C61 * C3030) * C4616 +
           (C71 * C3119 + C61 * C3122) * C15182) *
              C67 * C68 * C15179) *
         C14835) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C381 + (C185 * C83 + C67 * C191) * C375 -
           (C185 * C78 + C67 * C187) * C382 - (C185 * C85 + C67 * C192) * C376 +
           (C185 * C79 + C67 * C188) * C383 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C15214 +
          ((C185 * C384 + C67 * C549) * C382 -
           ((C185 * C391 + C67 * C555) * C375 +
            (C185 * C385 + C67 * C550) * C381) +
           (C185 * C393 + C67 * C556) * C376 -
           (C185 * C386 + C67 * C551) * C383 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C15202 +
          ((C185 * C387 + C67 * C552) * C381 +
           (C185 * C397 + C67 * C558) * C375 -
           (C185 * C388 + C67 * C553) * C382 -
           (C185 * C399 + C67 * C559) * C376 +
           (C185 * C389 + C67 * C554) * C383 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C185 * C77 + C67 * C186) * C72 + (C185 * C83 + C67 * C191) * C62 -
          (C185 * C78 + C67 * C187) * C73 - (C185 * C85 + C67 * C192) * C63 +
          (C185 * C79 + C67 * C188) * C74 + (C185 * C87 + C67 * C193) * C64 -
          (C185 * C80 + C67 * C189) * C75 - (C185 * C89 + C67 * C194) * C65 +
          (C185 * C81 + C67 * C190) * C76 + (C185 * C91 + C67 * C195) * C66) *
         C68 * C61 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2433 +
           (C185 * C83 + C67 * C191) * C15211 -
           (C185 * C78 + C67 * C187) * C2434 -
           (C185 * C85 + C67 * C192) * C15198 +
           (C185 * C79 + C67 * C188) * C2435 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C2430 +
          ((C185 * C384 + C67 * C549) * C2434 -
           ((C185 * C391 + C67 * C555) * C15211 +
            (C185 * C385 + C67 * C550) * C2433) +
           (C185 * C393 + C67 * C556) * C15198 -
           (C185 * C386 + C67 * C551) * C2435 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C2431 +
          ((C185 * C387 + C67 * C552) * C2433 +
           (C185 * C397 + C67 * C558) * C15211 -
           (C185 * C388 + C67 * C553) * C2434 -
           (C185 * C399 + C67 * C559) * C15198 +
           (C185 * C389 + C67 * C554) * C2435 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2771 +
           (C185 * C83 + C67 * C191) * C14835) *
              C68 * C61 * C14886 * C2766 -
          ((C185 * C391 + C67 * C555) * C14835 +
           (C185 * C385 + C67 * C550) * C2771) *
              C68 * C61 * C14886 * C2767 +
          ((C185 * C387 + C67 * C552) * C2771 +
           (C185 * C397 + C67 * C558) * C14835) *
              C68 * C61 * C14886 * C2768 -
          ((C185 * C2774 + C67 * C2861) * C14835 +
           (C185 * C2772 + C67 * C2859) * C2771) *
              C68 * C61 * C14886 * C2769 +
          ((C185 * C2773 + C67 * C2860) * C2771 +
           (C185 * C2777 + C67 * C2862) * C14835) *
              C68 * C61 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2433 +
           (C185 * C83 + C67 * C191) * C15211 -
           (C185 * C78 + C67 * C187) * C2434 -
           (C185 * C85 + C67 * C192) * C15198 +
           (C185 * C79 + C67 * C188) * C2435 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C4535 +
          ((C185 * C828 + C67 * C993) * C2434 -
           ((C185 * C835 + C67 * C999) * C15211 +
            (C185 * C829 + C67 * C994) * C2433) +
           (C185 * C837 + C67 * C1000) * C15198 -
           (C185 * C830 + C67 * C995) * C2435 -
           (C185 * C839 + C67 * C1001) * C15173) *
              C68 * C61 * C4536 +
          ((C185 * C831 + C67 * C996) * C2433 +
           (C185 * C841 + C67 * C1002) * C15211 -
           (C185 * C832 + C67 * C997) * C2434 -
           (C185 * C843 + C67 * C1003) * C15198 +
           (C185 * C833 + C67 * C998) * C2435 +
           (C185 * C845 + C67 * C1004) * C15173) *
              C68 * C61 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C185 * C77 + C67 * C186) * C2771 +
            (C185 * C83 + C67 * C191) * C14835) *
               C68 * C61 * C4535 -
           ((C185 * C835 + C67 * C999) * C14835 +
            (C185 * C829 + C67 * C994) * C2771) *
               C68 * C61 * C4536 +
           ((C185 * C831 + C67 * C996) * C2771 +
            (C185 * C841 + C67 * C1002) * C14835) *
               C68 * C61 * C15182) *
              C15214 +
          (((C185 * C1941 + C67 * C2115) * C2771 +
            (C185 * C1945 + C67 * C2118) * C14835) *
               C68 * C61 * C4536 -
           ((C185 * C391 + C67 * C555) * C14835 +
            (C185 * C385 + C67 * C550) * C2771) *
               C68 * C61 * C4535 -
           ((C185 * C3026 + C67 * C3164) * C14835 +
            (C185 * C3023 + C67 * C3161) * C2771) *
               C68 * C61 * C15182) *
              C15202 +
          (((C185 * C387 + C67 * C552) * C2771 +
            (C185 * C397 + C67 * C558) * C14835) *
               C68 * C61 * C4535 -
           ((C185 * C3028 + C67 * C3165) * C14835 +
            (C185 * C3024 + C67 * C3162) * C2771) *
               C68 * C61 * C4536 +
           ((C185 * C3025 + C67 * C3163) * C2771 +
            (C185 * C3031 + C67 * C3166) * C14835) *
               C68 * C61 * C15182) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C446 +
                     (C185 * C120 + C67 * C218) * C15214 -
                     (C185 * C385 + C67 * C550) * C447 -
                     (C185 * C449 + C67 * C599) * C15202 +
                     (C185 * C387 + C67 * C552) * C448 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C375 +
                    ((C185 * C384 + C67 * C549) * C447 -
                     ((C185 * C121 + C67 * C219) * C15214 +
                      (C185 * C78 + C67 * C187) * C446) +
                     (C185 * C451 + C67 * C601) * C15202 -
                     (C185 * C388 + C67 * C553) * C448 -
                     (C185 * C452 + C67 * C602) * C15179) *
                        C68 * C61 * C376 +
                    ((C185 * C79 + C67 * C188) * C446 +
                     (C185 * C122 + C67 * C220) * C15214 -
                     (C185 * C386 + C67 * C551) * C447 -
                     (C185 * C453 + C67 * C603) * C15202 +
                     (C185 * C389 + C67 * C554) * C448 +
                     (C185 * C454 + C67 * C604) * C15179) *
                        C68 * C61 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C119 +
                     (C185 * C120 + C67 * C218) * C14875) *
                        C68 * C61 * C62 -
                    ((C185 * C121 + C67 * C219) * C14875 +
                     (C185 * C78 + C67 * C187) * C119) *
                        C68 * C61 * C63 +
                    ((C185 * C79 + C67 * C188) * C119 +
                     (C185 * C122 + C67 * C220) * C14875) *
                        C68 * C61 * C64 -
                    ((C185 * C123 + C67 * C221) * C14875 +
                     (C185 * C80 + C67 * C189) * C119) *
                        C68 * C61 * C65 +
                    ((C185 * C81 + C67 * C190) * C119 +
                     (C185 * C124 + C67 * C222) * C14875) *
                        C68 * C61 * C66) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C2474 +
                     (C185 * C120 + C67 * C218) * C2430 -
                     (C185 * C385 + C67 * C550) * C2475 -
                     (C185 * C449 + C67 * C599) * C2431 +
                     (C185 * C387 + C67 * C552) * C2476 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C15211 +
                    ((C185 * C384 + C67 * C549) * C2475 -
                     ((C185 * C121 + C67 * C219) * C2430 +
                      (C185 * C78 + C67 * C187) * C2474) +
                     (C185 * C451 + C67 * C601) * C2431 -
                     (C185 * C388 + C67 * C553) * C2476 -
                     (C185 * C452 + C67 * C602) * C15179) *
                        C68 * C61 * C15198 +
                    ((C185 * C79 + C67 * C188) * C2474 +
                     (C185 * C122 + C67 * C220) * C2430 -
                     (C185 * C386 + C67 * C551) * C2475 -
                     (C185 * C453 + C67 * C603) * C2431 +
                     (C185 * C389 + C67 * C554) * C2476 +
                     (C185 * C454 + C67 * C604) * C15179) *
                        C68 * C61 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C185 * C77 + C67 * C186) * C2802 +
                    (C185 * C120 + C67 * C218) * C2766 -
                    (C185 * C385 + C67 * C550) * C2803 -
                    (C185 * C449 + C67 * C599) * C2767 +
                    (C185 * C387 + C67 * C552) * C2804 +
                    (C185 * C450 + C67 * C600) * C2768 -
                    (C185 * C2772 + C67 * C2859) * C2805 -
                    (C185 * C2807 + C67 * C2885) * C2769 +
                    (C185 * C2773 + C67 * C2860) * C2806 +
                    (C185 * C2808 + C67 * C2886) * C2770) *
                   C68 * C61 * C14835 * C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C15211 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C15198 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C15173) *
                        C4535 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C15198 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C15211 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C15173) *
                        C4536 +
                    (((C185 * C831 + C67 * C996) * C119 +
                      (C185 * C893 + C67 * C1046) * C14875) *
                         C68 * C61 * C15211 -
                     ((C185 * C894 + C67 * C1047) * C14875 +
                      (C185 * C832 + C67 * C997) * C119) *
                         C68 * C61 * C15198 +
                     ((C185 * C833 + C67 * C998) * C119 +
                      (C185 * C895 + C67 * C1048) * C14875) *
                         C68 * C61 * C15173) *
                        C15182)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C446 +
                     (C185 * C120 + C67 * C218) * C15214 -
                     (C185 * C385 + C67 * C550) * C447 -
                     (C185 * C449 + C67 * C599) * C15202 +
                     (C185 * C387 + C67 * C552) * C448 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C14835 * C4535 +
                    ((C185 * C1941 + C67 * C2115) * C447 -
                     ((C185 * C891 + C67 * C1044) * C15214 +
                      (C185 * C829 + C67 * C994) * C446) +
                     (C185 * C2003 + C67 * C2171) * C15202 -
                     (C185 * C3024 + C67 * C3162) * C448 -
                     (C185 * C3073 + C67 * C3205) * C15179) *
                        C68 * C61 * C14835 * C4536 +
                    ((C185 * C831 + C67 * C996) * C446 +
                     (C185 * C893 + C67 * C1046) * C15214 -
                     (C185 * C3023 + C67 * C3161) * C447 -
                     (C185 * C3074 + C67 * C3206) * C15202 +
                     (C185 * C3025 + C67 * C3163) * C448 +
                     (C185 * C3075 + C67 * C3207) * C15179) *
                        C68 * C61 * C14835 * C15182)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C15214 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C15202 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C375 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C15202 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C15214 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C376 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C15214 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C15202 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C14875 * C62 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C14875 * C63 +
                    ((C185 * C79 + C67 * C188) * C152 +
                     (C185 * C155 + C67 * C247) * C14886) *
                        C68 * C61 * C14875 * C64 -
                    ((C185 * C156 + C67 * C248) * C14886 +
                     (C185 * C80 + C67 * C189) * C152) *
                        C68 * C61 * C14875 * C65 +
                    ((C185 * C81 + C67 * C190) * C152 +
                     (C185 * C157 + C67 * C249) * C14886) *
                        C68 * C61 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C15211 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C2431 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C2430 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C15198 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C2766 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C2767 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C2768 -
                    ((C185 * C2833 + C67 * C2909) * C14886 +
                     (C185 * C2772 + C67 * C2859) * C152) *
                        C68 * C61 * C2769 +
                    ((C185 * C2773 + C67 * C2860) * C152 +
                     (C185 * C2834 + C67 * C2910) * C14886) *
                        C68 * C61 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C4614 +
                     (C185 * C153 + C67 * C245) * C4535 -
                     (C185 * C829 + C67 * C994) * C4615 -
                     (C185 * C943 + C67 * C1087) * C4536 +
                     (C185 * C831 + C67 * C996) * C4616 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C14875 * C15211 +
                    ((C185 * C828 + C67 * C993) * C4615 -
                     ((C185 * C154 + C67 * C246) * C4535 +
                      (C185 * C78 + C67 * C187) * C4614) +
                     (C185 * C945 + C67 * C1089) * C4536 -
                     (C185 * C832 + C67 * C997) * C4616 -
                     (C185 * C946 + C67 * C1090) * C15182) *
                        C68 * C61 * C14875 * C15198 +
                    ((C185 * C79 + C67 * C188) * C4614 +
                     (C185 * C155 + C67 * C247) * C4535 -
                     (C185 * C830 + C67 * C995) * C4615 -
                     (C185 * C947 + C67 * C1091) * C4536 +
                     (C185 * C833 + C67 * C998) * C4616 +
                     (C185 * C948 + C67 * C1092) * C15182) *
                        C68 * C61 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C4614 +
                     (C185 * C153 + C67 * C245) * C4535 -
                     (C185 * C829 + C67 * C994) * C4615 -
                     (C185 * C943 + C67 * C1087) * C4536 +
                     (C185 * C831 + C67 * C996) * C4616 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C15214 +
                    ((C185 * C1941 + C67 * C2115) * C4615 -
                     ((C185 * C499 + C67 * C643) * C4535 +
                      (C185 * C385 + C67 * C550) * C4614) +
                     (C185 * C2059 + C67 * C2224) * C4536 -
                     (C185 * C3023 + C67 * C3161) * C4616 -
                     (C185 * C3117 + C67 * C3246) * C15182) *
                        C68 * C61 * C15202 +
                    ((C185 * C387 + C67 * C552) * C4614 +
                     (C185 * C500 + C67 * C644) * C4535 -
                     (C185 * C3024 + C67 * C3162) * C4615 -
                     (C185 * C3118 + C67 * C3247) * C4536 +
                     (C185 * C3025 + C67 * C3163) * C4616 +
                     (C185 * C3119 + C67 * C3248) * C15182) *
                        C68 * C61 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C381 + (C272 * C83 + C68 * C278) * C375 -
           (C272 * C78 + C68 * C274) * C382 - (C272 * C85 + C68 * C279) * C376 +
           (C272 * C79 + C68 * C275) * C383 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C15214 +
          ((C272 * C384 + C68 * C687) * C382 -
           ((C272 * C391 + C68 * C693) * C375 +
            (C272 * C385 + C68 * C688) * C381) +
           (C272 * C393 + C68 * C694) * C376 -
           (C272 * C386 + C68 * C689) * C383 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C15202 +
          ((C272 * C387 + C68 * C690) * C381 +
           (C272 * C397 + C68 * C696) * C375 -
           (C272 * C388 + C68 * C691) * C382 -
           (C272 * C399 + C68 * C697) * C376 +
           (C272 * C389 + C68 * C692) * C383 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C272 * C77 + C68 * C273) * C72 + (C272 * C83 + C68 * C278) * C62 -
          (C272 * C78 + C68 * C274) * C73 - (C272 * C85 + C68 * C279) * C63 +
          (C272 * C79 + C68 * C275) * C74 + (C272 * C87 + C68 * C280) * C64 -
          (C272 * C80 + C68 * C276) * C75 - (C272 * C89 + C68 * C281) * C65 +
          (C272 * C81 + C68 * C277) * C76 + (C272 * C91 + C68 * C282) * C66) *
         C61 * C67 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2433 +
           (C272 * C83 + C68 * C278) * C15211 -
           (C272 * C78 + C68 * C274) * C2434 -
           (C272 * C85 + C68 * C279) * C15198 +
           (C272 * C79 + C68 * C275) * C2435 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C2430 +
          ((C272 * C384 + C68 * C687) * C2434 -
           ((C272 * C391 + C68 * C693) * C15211 +
            (C272 * C385 + C68 * C688) * C2433) +
           (C272 * C393 + C68 * C694) * C15198 -
           (C272 * C386 + C68 * C689) * C2435 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C2431 +
          ((C272 * C387 + C68 * C690) * C2433 +
           (C272 * C397 + C68 * C696) * C15211 -
           (C272 * C388 + C68 * C691) * C2434 -
           (C272 * C399 + C68 * C697) * C15198 +
           (C272 * C389 + C68 * C692) * C2435 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2771 +
           (C272 * C83 + C68 * C278) * C14835) *
              C61 * C67 * C14886 * C2766 -
          ((C272 * C391 + C68 * C693) * C14835 +
           (C272 * C385 + C68 * C688) * C2771) *
              C61 * C67 * C14886 * C2767 +
          ((C272 * C387 + C68 * C690) * C2771 +
           (C272 * C397 + C68 * C696) * C14835) *
              C61 * C67 * C14886 * C2768 -
          ((C272 * C2774 + C68 * C2935) * C14835 +
           (C272 * C2772 + C68 * C2933) * C2771) *
              C61 * C67 * C14886 * C2769 +
          ((C272 * C2773 + C68 * C2934) * C2771 +
           (C272 * C2777 + C68 * C2936) * C14835) *
              C61 * C67 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2433 +
           (C272 * C83 + C68 * C278) * C15211 -
           (C272 * C78 + C68 * C274) * C2434 -
           (C272 * C85 + C68 * C279) * C15198 +
           (C272 * C79 + C68 * C275) * C2435 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C4535 +
          ((C272 * C828 + C68 * C1131) * C2434 -
           ((C272 * C835 + C68 * C1137) * C15211 +
            (C272 * C829 + C68 * C1132) * C2433) +
           (C272 * C837 + C68 * C1138) * C15198 -
           (C272 * C830 + C68 * C1133) * C2435 -
           (C272 * C839 + C68 * C1139) * C15173) *
              C61 * C67 * C4536 +
          ((C272 * C831 + C68 * C1134) * C2433 +
           (C272 * C841 + C68 * C1140) * C15211 -
           (C272 * C832 + C68 * C1135) * C2434 -
           (C272 * C843 + C68 * C1141) * C15198 +
           (C272 * C833 + C68 * C1136) * C2435 +
           (C272 * C845 + C68 * C1142) * C15173) *
              C61 * C67 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C272 * C77 + C68 * C273) * C2771 +
            (C272 * C83 + C68 * C278) * C14835) *
               C61 * C67 * C4535 -
           ((C272 * C835 + C68 * C1137) * C14835 +
            (C272 * C829 + C68 * C1132) * C2771) *
               C61 * C67 * C4536 +
           ((C272 * C831 + C68 * C1134) * C2771 +
            (C272 * C841 + C68 * C1140) * C14835) *
               C61 * C67 * C15182) *
              C15214 +
          (((C272 * C1941 + C68 * C2277) * C2771 +
            (C272 * C1945 + C68 * C2280) * C14835) *
               C61 * C67 * C4536 -
           ((C272 * C391 + C68 * C693) * C14835 +
            (C272 * C385 + C68 * C688) * C2771) *
               C61 * C67 * C4535 -
           ((C272 * C3026 + C68 * C3290) * C14835 +
            (C272 * C3023 + C68 * C3287) * C2771) *
               C61 * C67 * C15182) *
              C15202 +
          (((C272 * C387 + C68 * C690) * C2771 +
            (C272 * C397 + C68 * C696) * C14835) *
               C61 * C67 * C4535 -
           ((C272 * C3028 + C68 * C3291) * C14835 +
            (C272 * C3024 + C68 * C3288) * C2771) *
               C61 * C67 * C4536 +
           ((C272 * C3025 + C68 * C3289) * C2771 +
            (C272 * C3031 + C68 * C3292) * C14835) *
               C61 * C67 * C15182) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C446 +
                     (C272 * C120 + C68 * C305) * C15214 -
                     (C272 * C385 + C68 * C688) * C447 -
                     (C272 * C449 + C68 * C737) * C15202 +
                     (C272 * C387 + C68 * C690) * C448 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C375 +
                    ((C272 * C384 + C68 * C687) * C447 -
                     ((C272 * C121 + C68 * C306) * C15214 +
                      (C272 * C78 + C68 * C274) * C446) +
                     (C272 * C451 + C68 * C739) * C15202 -
                     (C272 * C388 + C68 * C691) * C448 -
                     (C272 * C452 + C68 * C740) * C15179) *
                        C61 * C67 * C376 +
                    ((C272 * C79 + C68 * C275) * C446 +
                     (C272 * C122 + C68 * C307) * C15214 -
                     (C272 * C386 + C68 * C689) * C447 -
                     (C272 * C453 + C68 * C741) * C15202 +
                     (C272 * C389 + C68 * C692) * C448 +
                     (C272 * C454 + C68 * C742) * C15179) *
                        C61 * C67 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C119 +
                     (C272 * C120 + C68 * C305) * C14875) *
                        C61 * C67 * C62 -
                    ((C272 * C121 + C68 * C306) * C14875 +
                     (C272 * C78 + C68 * C274) * C119) *
                        C61 * C67 * C63 +
                    ((C272 * C79 + C68 * C275) * C119 +
                     (C272 * C122 + C68 * C307) * C14875) *
                        C61 * C67 * C64 -
                    ((C272 * C123 + C68 * C308) * C14875 +
                     (C272 * C80 + C68 * C276) * C119) *
                        C61 * C67 * C65 +
                    ((C272 * C81 + C68 * C277) * C119 +
                     (C272 * C124 + C68 * C309) * C14875) *
                        C61 * C67 * C66) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C2474 +
                     (C272 * C120 + C68 * C305) * C2430 -
                     (C272 * C385 + C68 * C688) * C2475 -
                     (C272 * C449 + C68 * C737) * C2431 +
                     (C272 * C387 + C68 * C690) * C2476 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C15211 +
                    ((C272 * C384 + C68 * C687) * C2475 -
                     ((C272 * C121 + C68 * C306) * C2430 +
                      (C272 * C78 + C68 * C274) * C2474) +
                     (C272 * C451 + C68 * C739) * C2431 -
                     (C272 * C388 + C68 * C691) * C2476 -
                     (C272 * C452 + C68 * C740) * C15179) *
                        C61 * C67 * C15198 +
                    ((C272 * C79 + C68 * C275) * C2474 +
                     (C272 * C122 + C68 * C307) * C2430 -
                     (C272 * C386 + C68 * C689) * C2475 -
                     (C272 * C453 + C68 * C741) * C2431 +
                     (C272 * C389 + C68 * C692) * C2476 +
                     (C272 * C454 + C68 * C742) * C15179) *
                        C61 * C67 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C272 * C77 + C68 * C273) * C2802 +
                    (C272 * C120 + C68 * C305) * C2766 -
                    (C272 * C385 + C68 * C688) * C2803 -
                    (C272 * C449 + C68 * C737) * C2767 +
                    (C272 * C387 + C68 * C690) * C2804 +
                    (C272 * C450 + C68 * C738) * C2768 -
                    (C272 * C2772 + C68 * C2933) * C2805 -
                    (C272 * C2807 + C68 * C2959) * C2769 +
                    (C272 * C2773 + C68 * C2934) * C2806 +
                    (C272 * C2808 + C68 * C2960) * C2770) *
                   C61 * C67 * C14835 * C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C15211 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C15198 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C15173) *
                        C4535 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C15198 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C15211 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C15173) *
                        C4536 +
                    (((C272 * C831 + C68 * C1134) * C119 +
                      (C272 * C893 + C68 * C1184) * C14875) *
                         C61 * C67 * C15211 -
                     ((C272 * C894 + C68 * C1185) * C14875 +
                      (C272 * C832 + C68 * C1135) * C119) *
                         C61 * C67 * C15198 +
                     ((C272 * C833 + C68 * C1136) * C119 +
                      (C272 * C895 + C68 * C1186) * C14875) *
                         C61 * C67 * C15173) *
                        C15182)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C446 +
                     (C272 * C120 + C68 * C305) * C15214 -
                     (C272 * C385 + C68 * C688) * C447 -
                     (C272 * C449 + C68 * C737) * C15202 +
                     (C272 * C387 + C68 * C690) * C448 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C14835 * C4535 +
                    ((C272 * C1941 + C68 * C2277) * C447 -
                     ((C272 * C891 + C68 * C1182) * C15214 +
                      (C272 * C829 + C68 * C1132) * C446) +
                     (C272 * C2003 + C68 * C2333) * C15202 -
                     (C272 * C3024 + C68 * C3288) * C448 -
                     (C272 * C3073 + C68 * C3331) * C15179) *
                        C61 * C67 * C14835 * C4536 +
                    ((C272 * C831 + C68 * C1134) * C446 +
                     (C272 * C893 + C68 * C1184) * C15214 -
                     (C272 * C3023 + C68 * C3287) * C447 -
                     (C272 * C3074 + C68 * C3332) * C15202 +
                     (C272 * C3025 + C68 * C3289) * C448 +
                     (C272 * C3075 + C68 * C3333) * C15179) *
                        C61 * C67 * C14835 * C15182)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C15214 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C15202 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C375 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C15202 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C15214 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C376 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C15214 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C15202 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C14875 * C62 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C14875 * C63 +
                    ((C272 * C79 + C68 * C275) * C152 +
                     (C272 * C155 + C68 * C334) * C14886) *
                        C61 * C67 * C14875 * C64 -
                    ((C272 * C156 + C68 * C335) * C14886 +
                     (C272 * C80 + C68 * C276) * C152) *
                        C61 * C67 * C14875 * C65 +
                    ((C272 * C81 + C68 * C277) * C152 +
                     (C272 * C157 + C68 * C336) * C14886) *
                        C61 * C67 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C15211 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C2431 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C2430 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C15198 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C2766 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C2767 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C2768 -
                    ((C272 * C2833 + C68 * C2983) * C14886 +
                     (C272 * C2772 + C68 * C2933) * C152) *
                        C61 * C67 * C2769 +
                    ((C272 * C2773 + C68 * C2934) * C152 +
                     (C272 * C2834 + C68 * C2984) * C14886) *
                        C61 * C67 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C4614 +
                     (C272 * C153 + C68 * C332) * C4535 -
                     (C272 * C829 + C68 * C1132) * C4615 -
                     (C272 * C943 + C68 * C1225) * C4536 +
                     (C272 * C831 + C68 * C1134) * C4616 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C14875 * C15211 +
                    ((C272 * C828 + C68 * C1131) * C4615 -
                     ((C272 * C154 + C68 * C333) * C4535 +
                      (C272 * C78 + C68 * C274) * C4614) +
                     (C272 * C945 + C68 * C1227) * C4536 -
                     (C272 * C832 + C68 * C1135) * C4616 -
                     (C272 * C946 + C68 * C1228) * C15182) *
                        C61 * C67 * C14875 * C15198 +
                    ((C272 * C79 + C68 * C275) * C4614 +
                     (C272 * C155 + C68 * C334) * C4535 -
                     (C272 * C830 + C68 * C1133) * C4615 -
                     (C272 * C947 + C68 * C1229) * C4536 +
                     (C272 * C833 + C68 * C1136) * C4616 +
                     (C272 * C948 + C68 * C1230) * C15182) *
                        C61 * C67 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C4614 +
                     (C272 * C153 + C68 * C332) * C4535 -
                     (C272 * C829 + C68 * C1132) * C4615 -
                     (C272 * C943 + C68 * C1225) * C4536 +
                     (C272 * C831 + C68 * C1134) * C4616 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C15214 +
                    ((C272 * C1941 + C68 * C2277) * C4615 -
                     ((C272 * C499 + C68 * C781) * C4535 +
                      (C272 * C385 + C68 * C688) * C4614) +
                     (C272 * C2059 + C68 * C2386) * C4536 -
                     (C272 * C3023 + C68 * C3287) * C4616 -
                     (C272 * C3117 + C68 * C3372) * C15182) *
                        C61 * C67 * C15202 +
                    ((C272 * C387 + C68 * C690) * C4614 +
                     (C272 * C500 + C68 * C782) * C4535 -
                     (C272 * C3024 + C68 * C3288) * C4615 -
                     (C272 * C3118 + C68 * C3373) * C4536 +
                     (C272 * C3025 + C68 * C3289) * C4616 +
                     (C272 * C3119 + C68 * C3374) * C15182) *
                        C61 * C67 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eexx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C13585 +
                      (C71 * C83 + C61 * C92) * C14840 -
                      (C71 * C78 + C61 * C84) * C13581 -
                      (C71 * C85 + C61 * C93) * C14848 +
                      (C71 * C79 + C61 * C86) * C13591 +
                      (C71 * C87 + C61 * C94) * C7671) *
                         C67 * C68 * C8919 +
                     ((C71 * C828 + C61 * C834) * C13581 -
                      ((C71 * C835 + C61 * C846) * C14840 +
                       (C71 * C829 + C61 * C836) * C13585) +
                      (C71 * C837 + C61 * C847) * C14848 -
                      (C71 * C830 + C61 * C838) * C13591 -
                      (C71 * C839 + C61 * C848) * C7671) *
                         C67 * C68 * C14973) *
                        C15153 +
                    (((C71 * C384 + C61 * C390) * C13581 -
                      ((C71 * C391 + C61 * C402) * C14840 +
                       (C71 * C385 + C61 * C392) * C13585) +
                      (C71 * C393 + C61 * C403) * C14848 -
                      (C71 * C386 + C61 * C394) * C13591 -
                      (C71 * C395 + C61 * C404) * C7671) *
                         C67 * C68 * C8919 +
                     ((C71 * C1941 + C61 * C1944) * C13585 +
                      (C71 * C1945 + C61 * C1950) * C14840 -
                      (C71 * C1942 + C61 * C1946) * C13581 -
                      (C71 * C1947 + C61 * C1951) * C14848 +
                      (C71 * C1943 + C61 * C1948) * C13591 +
                      (C71 * C1949 + C61 * C1952) * C7671) *
                         C67 * C68 * C14973) *
                        C14933)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C1313 +
                      (C71 * C120 + C61 * C125) * C15153 -
                      (C71 * C385 + C61 * C392) * C1314 -
                      (C71 * C449 + C61 * C455) * C14933) *
                         C67 * C68 * C14840 +
                     ((C71 * C384 + C61 * C390) * C1314 -
                      ((C71 * C121 + C61 * C126) * C15153 +
                       (C71 * C78 + C61 * C84) * C1313) +
                      (C71 * C451 + C61 * C457) * C14933) *
                         C67 * C68 * C14848 +
                     ((C71 * C79 + C61 * C86) * C1313 +
                      (C71 * C122 + C61 * C127) * C15153 -
                      (C71 * C386 + C61 * C394) * C1314 -
                      (C71 * C453 + C61 * C459) * C14933) *
                         C67 * C68 * C7671) *
                        C8919 +
                    (((C71 * C1941 + C61 * C1944) * C1314 -
                      ((C71 * C891 + C61 * C897) * C15153 +
                       (C71 * C829 + C61 * C836) * C1313) +
                      (C71 * C2003 + C61 * C2006) * C14933) *
                         C67 * C68 * C14840 +
                     ((C71 * C828 + C61 * C834) * C1313 +
                      (C71 * C890 + C61 * C896) * C15153 -
                      (C71 * C1942 + C61 * C1946) * C1314 -
                      (C71 * C2004 + C61 * C2007) * C14933) *
                         C67 * C68 * C14848 +
                     ((C71 * C1943 + C61 * C1948) * C1314 -
                      ((C71 * C892 + C61 * C898) * C15153 +
                       (C71 * C830 + C61 * C838) * C1313) +
                      (C71 * C2005 + C61 * C2008) * C14933) *
                         C67 * C68 * C7671) *
                        C14973)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C8989 +
                      (C71 * C153 + C61 * C158) * C8919 -
                      (C71 * C829 + C61 * C836) * C8990 -
                      (C71 * C943 + C61 * C949) * C14973) *
                         C67 * C68 * C15153 +
                     ((C71 * C1941 + C61 * C1944) * C8990 -
                      ((C71 * C499 + C61 * C505) * C8919 +
                       (C71 * C385 + C61 * C392) * C8989) +
                      (C71 * C2059 + C61 * C2062) * C14973) *
                         C67 * C68 * C14933) *
                        C14840 +
                    (((C71 * C828 + C61 * C834) * C8990 -
                      ((C71 * C154 + C61 * C159) * C8919 +
                       (C71 * C78 + C61 * C84) * C8989) +
                      (C71 * C945 + C61 * C951) * C14973) *
                         C67 * C68 * C15153 +
                     ((C71 * C384 + C61 * C390) * C8989 +
                      (C71 * C501 + C61 * C507) * C8919 -
                      (C71 * C1942 + C61 * C1946) * C8990 -
                      (C71 * C2060 + C61 * C2063) * C14973) *
                         C67 * C68 * C14933) *
                        C14848 +
                    (((C71 * C79 + C61 * C86) * C8989 +
                      (C71 * C155 + C61 * C160) * C8919 -
                      (C71 * C830 + C61 * C838) * C8990 -
                      (C71 * C947 + C61 * C953) * C14973) *
                         C67 * C68 * C15153 +
                     ((C71 * C1943 + C61 * C1948) * C8990 -
                      ((C71 * C503 + C61 * C509) * C8919 +
                       (C71 * C386 + C61 * C394) * C8989) +
                      (C71 * C2061 + C61 * C2064) * C14973) *
                         C67 * C68 * C14933) *
                        C7671)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C13585 +
                      (C185 * C83 + C67 * C191) * C14840 -
                      (C185 * C78 + C67 * C187) * C13581 -
                      (C185 * C85 + C67 * C192) * C14848 +
                      (C185 * C79 + C67 * C188) * C13591 +
                      (C185 * C87 + C67 * C193) * C7671) *
                         C68 * C61 * C8919 +
                     ((C185 * C828 + C67 * C993) * C13581 -
                      ((C185 * C835 + C67 * C999) * C14840 +
                       (C185 * C829 + C67 * C994) * C13585) +
                      (C185 * C837 + C67 * C1000) * C14848 -
                      (C185 * C830 + C67 * C995) * C13591 -
                      (C185 * C839 + C67 * C1001) * C7671) *
                         C68 * C61 * C14973) *
                        C15153 +
                    (((C185 * C384 + C67 * C549) * C13581 -
                      ((C185 * C391 + C67 * C555) * C14840 +
                       (C185 * C385 + C67 * C550) * C13585) +
                      (C185 * C393 + C67 * C556) * C14848 -
                      (C185 * C386 + C67 * C551) * C13591 -
                      (C185 * C395 + C67 * C557) * C7671) *
                         C68 * C61 * C8919 +
                     ((C185 * C1941 + C67 * C2115) * C13585 +
                      (C185 * C1945 + C67 * C2118) * C14840 -
                      (C185 * C1942 + C67 * C2116) * C13581 -
                      (C185 * C1947 + C67 * C2119) * C14848 +
                      (C185 * C1943 + C67 * C2117) * C13591 +
                      (C185 * C1949 + C67 * C2120) * C7671) *
                         C68 * C61 * C14973) *
                        C14933)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1313 +
                      (C185 * C120 + C67 * C218) * C15153 -
                      (C185 * C385 + C67 * C550) * C1314 -
                      (C185 * C449 + C67 * C599) * C14933) *
                         C68 * C61 * C14840 +
                     ((C185 * C384 + C67 * C549) * C1314 -
                      ((C185 * C121 + C67 * C219) * C15153 +
                       (C185 * C78 + C67 * C187) * C1313) +
                      (C185 * C451 + C67 * C601) * C14933) *
                         C68 * C61 * C14848 +
                     ((C185 * C79 + C67 * C188) * C1313 +
                      (C185 * C122 + C67 * C220) * C15153 -
                      (C185 * C386 + C67 * C551) * C1314 -
                      (C185 * C453 + C67 * C603) * C14933) *
                         C68 * C61 * C7671) *
                        C8919 +
                    (((C185 * C1941 + C67 * C2115) * C1314 -
                      ((C185 * C891 + C67 * C1044) * C15153 +
                       (C185 * C829 + C67 * C994) * C1313) +
                      (C185 * C2003 + C67 * C2171) * C14933) *
                         C68 * C61 * C14840 +
                     ((C185 * C828 + C67 * C993) * C1313 +
                      (C185 * C890 + C67 * C1043) * C15153 -
                      (C185 * C1942 + C67 * C2116) * C1314 -
                      (C185 * C2004 + C67 * C2172) * C14933) *
                         C68 * C61 * C14848 +
                     ((C185 * C1943 + C67 * C2117) * C1314 -
                      ((C185 * C892 + C67 * C1045) * C15153 +
                       (C185 * C830 + C67 * C995) * C1313) +
                      (C185 * C2005 + C67 * C2173) * C14933) *
                         C68 * C61 * C7671) *
                        C14973)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C8989 +
                      (C185 * C153 + C67 * C245) * C8919 -
                      (C185 * C829 + C67 * C994) * C8990 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C1941 + C67 * C2115) * C8990 -
                      ((C185 * C499 + C67 * C643) * C8919 +
                       (C185 * C385 + C67 * C550) * C8989) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C14933) *
                        C14840 +
                    (((C185 * C828 + C67 * C993) * C8990 -
                      ((C185 * C154 + C67 * C246) * C8919 +
                       (C185 * C78 + C67 * C187) * C8989) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C384 + C67 * C549) * C8989 +
                      (C185 * C501 + C67 * C645) * C8919 -
                      (C185 * C1942 + C67 * C2116) * C8990 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C14933) *
                        C14848 +
                    (((C185 * C79 + C67 * C188) * C8989 +
                      (C185 * C155 + C67 * C247) * C8919 -
                      (C185 * C830 + C67 * C995) * C8990 -
                      (C185 * C947 + C67 * C1091) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C1943 + C67 * C2117) * C8990 -
                      ((C185 * C503 + C67 * C647) * C8919 +
                       (C185 * C386 + C67 * C551) * C8989) +
                      (C185 * C2061 + C67 * C2226) * C14973) *
                         C68 * C61 * C14933) *
                        C7671)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C13585 +
                      (C272 * C83 + C68 * C278) * C14840 -
                      (C272 * C78 + C68 * C274) * C13581 -
                      (C272 * C85 + C68 * C279) * C14848 +
                      (C272 * C79 + C68 * C275) * C13591 +
                      (C272 * C87 + C68 * C280) * C7671) *
                         C61 * C67 * C8919 +
                     ((C272 * C828 + C68 * C1131) * C13581 -
                      ((C272 * C835 + C68 * C1137) * C14840 +
                       (C272 * C829 + C68 * C1132) * C13585) +
                      (C272 * C837 + C68 * C1138) * C14848 -
                      (C272 * C830 + C68 * C1133) * C13591 -
                      (C272 * C839 + C68 * C1139) * C7671) *
                         C61 * C67 * C14973) *
                        C15153 +
                    (((C272 * C384 + C68 * C687) * C13581 -
                      ((C272 * C391 + C68 * C693) * C14840 +
                       (C272 * C385 + C68 * C688) * C13585) +
                      (C272 * C393 + C68 * C694) * C14848 -
                      (C272 * C386 + C68 * C689) * C13591 -
                      (C272 * C395 + C68 * C695) * C7671) *
                         C61 * C67 * C8919 +
                     ((C272 * C1941 + C68 * C2277) * C13585 +
                      (C272 * C1945 + C68 * C2280) * C14840 -
                      (C272 * C1942 + C68 * C2278) * C13581 -
                      (C272 * C1947 + C68 * C2281) * C14848 +
                      (C272 * C1943 + C68 * C2279) * C13591 +
                      (C272 * C1949 + C68 * C2282) * C7671) *
                         C61 * C67 * C14973) *
                        C14933)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1313 +
                      (C272 * C120 + C68 * C305) * C15153 -
                      (C272 * C385 + C68 * C688) * C1314 -
                      (C272 * C449 + C68 * C737) * C14933) *
                         C61 * C67 * C14840 +
                     ((C272 * C384 + C68 * C687) * C1314 -
                      ((C272 * C121 + C68 * C306) * C15153 +
                       (C272 * C78 + C68 * C274) * C1313) +
                      (C272 * C451 + C68 * C739) * C14933) *
                         C61 * C67 * C14848 +
                     ((C272 * C79 + C68 * C275) * C1313 +
                      (C272 * C122 + C68 * C307) * C15153 -
                      (C272 * C386 + C68 * C689) * C1314 -
                      (C272 * C453 + C68 * C741) * C14933) *
                         C61 * C67 * C7671) *
                        C8919 +
                    (((C272 * C1941 + C68 * C2277) * C1314 -
                      ((C272 * C891 + C68 * C1182) * C15153 +
                       (C272 * C829 + C68 * C1132) * C1313) +
                      (C272 * C2003 + C68 * C2333) * C14933) *
                         C61 * C67 * C14840 +
                     ((C272 * C828 + C68 * C1131) * C1313 +
                      (C272 * C890 + C68 * C1181) * C15153 -
                      (C272 * C1942 + C68 * C2278) * C1314 -
                      (C272 * C2004 + C68 * C2334) * C14933) *
                         C61 * C67 * C14848 +
                     ((C272 * C1943 + C68 * C2279) * C1314 -
                      ((C272 * C892 + C68 * C1183) * C15153 +
                       (C272 * C830 + C68 * C1133) * C1313) +
                      (C272 * C2005 + C68 * C2335) * C14933) *
                         C61 * C67 * C7671) *
                        C14973)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C8989 +
                      (C272 * C153 + C68 * C332) * C8919 -
                      (C272 * C829 + C68 * C1132) * C8990 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C1941 + C68 * C2277) * C8990 -
                      ((C272 * C499 + C68 * C781) * C8919 +
                       (C272 * C385 + C68 * C688) * C8989) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C14933) *
                        C14840 +
                    (((C272 * C828 + C68 * C1131) * C8990 -
                      ((C272 * C154 + C68 * C333) * C8919 +
                       (C272 * C78 + C68 * C274) * C8989) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C384 + C68 * C687) * C8989 +
                      (C272 * C501 + C68 * C783) * C8919 -
                      (C272 * C1942 + C68 * C2278) * C8990 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C14933) *
                        C14848 +
                    (((C272 * C79 + C68 * C275) * C8989 +
                      (C272 * C155 + C68 * C334) * C8919 -
                      (C272 * C830 + C68 * C1133) * C8990 -
                      (C272 * C947 + C68 * C1229) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C1943 + C68 * C2279) * C8990 -
                      ((C272 * C503 + C68 * C785) * C8919 +
                       (C272 * C386 + C68 * C689) * C8989) +
                      (C272 * C2061 + C68 * C2388) * C14973) *
                         C61 * C67 * C14933) *
                        C7671)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
            (C71 * C78 + C61 * C84) * C6904 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C14969 +
           ((C71 * C828 + C61 * C834) * C6904 -
            ((C71 * C835 + C61 * C846) * C6897 +
             (C71 * C829 + C61 * C836) * C6903) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C14976 +
           ((C71 * C831 + C61 * C840) * C6903 +
            (C71 * C841 + C61 * C849) * C6897 -
            (C71 * C832 + C61 * C842) * C6904 -
            (C71 * C843 + C61 * C850) * C14845) *
               C67 * C68 * C10449) *
              C15153 +
          (((C71 * C384 + C61 * C390) * C6904 -
            ((C71 * C391 + C61 * C402) * C6897 +
             (C71 * C385 + C61 * C392) * C6903) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C14969 +
           ((C71 * C1941 + C61 * C1944) * C6903 +
            (C71 * C1945 + C61 * C1950) * C6897 -
            (C71 * C1942 + C61 * C1946) * C6904 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C14976 +
           ((C71 * C5477 + C61 * C5478) * C6904 -
            ((C71 * C3026 + C61 * C3032) * C6897 +
             (C71 * C3023 + C61 * C3027) * C6903) +
            (C71 * C5479 + C61 * C5480) * C14845) *
               C67 * C68 * C10449) *
              C14933)) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C1313 +
                      (C71 * C120 + C61 * C125) * C15153 -
                      (C71 * C385 + C61 * C392) * C1314 -
                      (C71 * C449 + C61 * C455) * C14933) *
                         C67 * C68 * C6897 +
                     ((C71 * C384 + C61 * C390) * C1314 -
                      ((C71 * C121 + C61 * C126) * C15153 +
                       (C71 * C78 + C61 * C84) * C1313) +
                      (C71 * C451 + C61 * C457) * C14933) *
                         C67 * C68 * C14845) *
                        C14969 +
                    (((C71 * C1941 + C61 * C1944) * C1314 -
                      ((C71 * C891 + C61 * C897) * C15153 +
                       (C71 * C829 + C61 * C836) * C1313) +
                      (C71 * C2003 + C61 * C2006) * C14933) *
                         C67 * C68 * C6897 +
                     ((C71 * C828 + C61 * C834) * C1313 +
                      (C71 * C890 + C61 * C896) * C15153 -
                      (C71 * C1942 + C61 * C1946) * C1314 -
                      (C71 * C2004 + C61 * C2007) * C14933) *
                         C67 * C68 * C14845) *
                        C14976 +
                    (((C71 * C831 + C61 * C840) * C1313 +
                      (C71 * C893 + C61 * C899) * C15153 -
                      (C71 * C3023 + C61 * C3027) * C1314 -
                      (C71 * C3074 + C61 * C3077) * C14933) *
                         C67 * C68 * C6897 +
                     ((C71 * C5477 + C61 * C5478) * C1314 -
                      ((C71 * C894 + C61 * C900) * C15153 +
                       (C71 * C832 + C61 * C842) * C1313) +
                      (C71 * C5531 + C61 * C5532) * C14933) *
                         C67 * C68 * C14845) *
                        C10449)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C13824 +
                      (C71 * C153 + C61 * C158) * C14969 -
                      (C71 * C829 + C61 * C836) * C13816 -
                      (C71 * C943 + C61 * C949) * C14976 +
                      (C71 * C831 + C61 * C840) * C13830 +
                      (C71 * C944 + C61 * C950) * C10449) *
                         C67 * C68 * C15153 +
                     ((C71 * C1941 + C61 * C1944) * C13816 -
                      ((C71 * C499 + C61 * C505) * C14969 +
                       (C71 * C385 + C61 * C392) * C13824) +
                      (C71 * C2059 + C61 * C2062) * C14976 -
                      (C71 * C3023 + C61 * C3027) * C13830 -
                      (C71 * C3117 + C61 * C3120) * C10449) *
                         C67 * C68 * C14933) *
                        C6897 +
                    (((C71 * C828 + C61 * C834) * C13816 -
                      ((C71 * C154 + C61 * C159) * C14969 +
                       (C71 * C78 + C61 * C84) * C13824) +
                      (C71 * C945 + C61 * C951) * C14976 -
                      (C71 * C832 + C61 * C842) * C13830 -
                      (C71 * C946 + C61 * C952) * C10449) *
                         C67 * C68 * C15153 +
                     ((C71 * C384 + C61 * C390) * C13824 +
                      (C71 * C501 + C61 * C507) * C14969 -
                      (C71 * C1942 + C61 * C1946) * C13816 -
                      (C71 * C2060 + C61 * C2063) * C14976 +
                      (C71 * C5477 + C61 * C5478) * C13830 +
                      (C71 * C5583 + C61 * C5584) * C10449) *
                         C67 * C68 * C14933) *
                        C14845)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C6903 +
                      (C185 * C83 + C67 * C191) * C6897 -
                      (C185 * C78 + C67 * C187) * C6904 -
                      (C185 * C85 + C67 * C192) * C14845) *
                         C68 * C61 * C14969 +
                     ((C185 * C828 + C67 * C993) * C6904 -
                      ((C185 * C835 + C67 * C999) * C6897 +
                       (C185 * C829 + C67 * C994) * C6903) +
                      (C185 * C837 + C67 * C1000) * C14845) *
                         C68 * C61 * C14976 +
                     ((C185 * C831 + C67 * C996) * C6903 +
                      (C185 * C841 + C67 * C1002) * C6897 -
                      (C185 * C832 + C67 * C997) * C6904 -
                      (C185 * C843 + C67 * C1003) * C14845) *
                         C68 * C61 * C10449) *
                        C15153 +
                    (((C185 * C384 + C67 * C549) * C6904 -
                      ((C185 * C391 + C67 * C555) * C6897 +
                       (C185 * C385 + C67 * C550) * C6903) +
                      (C185 * C393 + C67 * C556) * C14845) *
                         C68 * C61 * C14969 +
                     ((C185 * C1941 + C67 * C2115) * C6903 +
                      (C185 * C1945 + C67 * C2118) * C6897 -
                      (C185 * C1942 + C67 * C2116) * C6904 -
                      (C185 * C1947 + C67 * C2119) * C14845) *
                         C68 * C61 * C14976 +
                     ((C185 * C5477 + C67 * C5635) * C6904 -
                      ((C185 * C3026 + C67 * C3164) * C6897 +
                       (C185 * C3023 + C67 * C3161) * C6903) +
                      (C185 * C5479 + C67 * C5636) * C14845) *
                         C68 * C61 * C10449) *
                        C14933)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1313 +
                      (C185 * C120 + C67 * C218) * C15153 -
                      (C185 * C385 + C67 * C550) * C1314 -
                      (C185 * C449 + C67 * C599) * C14933) *
                         C68 * C61 * C6897 +
                     ((C185 * C384 + C67 * C549) * C1314 -
                      ((C185 * C121 + C67 * C219) * C15153 +
                       (C185 * C78 + C67 * C187) * C1313) +
                      (C185 * C451 + C67 * C601) * C14933) *
                         C68 * C61 * C14845) *
                        C14969 +
                    (((C185 * C1941 + C67 * C2115) * C1314 -
                      ((C185 * C891 + C67 * C1044) * C15153 +
                       (C185 * C829 + C67 * C994) * C1313) +
                      (C185 * C2003 + C67 * C2171) * C14933) *
                         C68 * C61 * C6897 +
                     ((C185 * C828 + C67 * C993) * C1313 +
                      (C185 * C890 + C67 * C1043) * C15153 -
                      (C185 * C1942 + C67 * C2116) * C1314 -
                      (C185 * C2004 + C67 * C2172) * C14933) *
                         C68 * C61 * C14845) *
                        C14976 +
                    (((C185 * C831 + C67 * C996) * C1313 +
                      (C185 * C893 + C67 * C1046) * C15153 -
                      (C185 * C3023 + C67 * C3161) * C1314 -
                      (C185 * C3074 + C67 * C3206) * C14933) *
                         C68 * C61 * C6897 +
                     ((C185 * C5477 + C67 * C5635) * C1314 -
                      ((C185 * C894 + C67 * C1047) * C15153 +
                       (C185 * C832 + C67 * C997) * C1313) +
                      (C185 * C5531 + C67 * C5687) * C14933) *
                         C68 * C61 * C14845) *
                        C10449)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C13824 +
                      (C185 * C153 + C67 * C245) * C14969 -
                      (C185 * C829 + C67 * C994) * C13816 -
                      (C185 * C943 + C67 * C1087) * C14976 +
                      (C185 * C831 + C67 * C996) * C13830 +
                      (C185 * C944 + C67 * C1088) * C10449) *
                         C68 * C61 * C15153 +
                     ((C185 * C1941 + C67 * C2115) * C13816 -
                      ((C185 * C499 + C67 * C643) * C14969 +
                       (C185 * C385 + C67 * C550) * C13824) +
                      (C185 * C2059 + C67 * C2224) * C14976 -
                      (C185 * C3023 + C67 * C3161) * C13830 -
                      (C185 * C3117 + C67 * C3246) * C10449) *
                         C68 * C61 * C14933) *
                        C6897 +
                    (((C185 * C828 + C67 * C993) * C13816 -
                      ((C185 * C154 + C67 * C246) * C14969 +
                       (C185 * C78 + C67 * C187) * C13824) +
                      (C185 * C945 + C67 * C1089) * C14976 -
                      (C185 * C832 + C67 * C997) * C13830 -
                      (C185 * C946 + C67 * C1090) * C10449) *
                         C68 * C61 * C15153 +
                     ((C185 * C384 + C67 * C549) * C13824 +
                      (C185 * C501 + C67 * C645) * C14969 -
                      (C185 * C1942 + C67 * C2116) * C13816 -
                      (C185 * C2060 + C67 * C2225) * C14976 +
                      (C185 * C5477 + C67 * C5635) * C13830 +
                      (C185 * C5583 + C67 * C5738) * C10449) *
                         C68 * C61 * C14933) *
                        C14845)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C6903 +
                      (C272 * C83 + C68 * C278) * C6897 -
                      (C272 * C78 + C68 * C274) * C6904 -
                      (C272 * C85 + C68 * C279) * C14845) *
                         C61 * C67 * C14969 +
                     ((C272 * C828 + C68 * C1131) * C6904 -
                      ((C272 * C835 + C68 * C1137) * C6897 +
                       (C272 * C829 + C68 * C1132) * C6903) +
                      (C272 * C837 + C68 * C1138) * C14845) *
                         C61 * C67 * C14976 +
                     ((C272 * C831 + C68 * C1134) * C6903 +
                      (C272 * C841 + C68 * C1140) * C6897 -
                      (C272 * C832 + C68 * C1135) * C6904 -
                      (C272 * C843 + C68 * C1141) * C14845) *
                         C61 * C67 * C10449) *
                        C15153 +
                    (((C272 * C384 + C68 * C687) * C6904 -
                      ((C272 * C391 + C68 * C693) * C6897 +
                       (C272 * C385 + C68 * C688) * C6903) +
                      (C272 * C393 + C68 * C694) * C14845) *
                         C61 * C67 * C14969 +
                     ((C272 * C1941 + C68 * C2277) * C6903 +
                      (C272 * C1945 + C68 * C2280) * C6897 -
                      (C272 * C1942 + C68 * C2278) * C6904 -
                      (C272 * C1947 + C68 * C2281) * C14845) *
                         C61 * C67 * C14976 +
                     ((C272 * C5477 + C68 * C5789) * C6904 -
                      ((C272 * C3026 + C68 * C3290) * C6897 +
                       (C272 * C3023 + C68 * C3287) * C6903) +
                      (C272 * C5479 + C68 * C5790) * C14845) *
                         C61 * C67 * C10449) *
                        C14933)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1313 +
                      (C272 * C120 + C68 * C305) * C15153 -
                      (C272 * C385 + C68 * C688) * C1314 -
                      (C272 * C449 + C68 * C737) * C14933) *
                         C61 * C67 * C6897 +
                     ((C272 * C384 + C68 * C687) * C1314 -
                      ((C272 * C121 + C68 * C306) * C15153 +
                       (C272 * C78 + C68 * C274) * C1313) +
                      (C272 * C451 + C68 * C739) * C14933) *
                         C61 * C67 * C14845) *
                        C14969 +
                    (((C272 * C1941 + C68 * C2277) * C1314 -
                      ((C272 * C891 + C68 * C1182) * C15153 +
                       (C272 * C829 + C68 * C1132) * C1313) +
                      (C272 * C2003 + C68 * C2333) * C14933) *
                         C61 * C67 * C6897 +
                     ((C272 * C828 + C68 * C1131) * C1313 +
                      (C272 * C890 + C68 * C1181) * C15153 -
                      (C272 * C1942 + C68 * C2278) * C1314 -
                      (C272 * C2004 + C68 * C2334) * C14933) *
                         C61 * C67 * C14845) *
                        C14976 +
                    (((C272 * C831 + C68 * C1134) * C1313 +
                      (C272 * C893 + C68 * C1184) * C15153 -
                      (C272 * C3023 + C68 * C3287) * C1314 -
                      (C272 * C3074 + C68 * C3332) * C14933) *
                         C61 * C67 * C6897 +
                     ((C272 * C5477 + C68 * C5789) * C1314 -
                      ((C272 * C894 + C68 * C1185) * C15153 +
                       (C272 * C832 + C68 * C1135) * C1313) +
                      (C272 * C5531 + C68 * C5841) * C14933) *
                         C61 * C67 * C14845) *
                        C10449)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C13824 +
                      (C272 * C153 + C68 * C332) * C14969 -
                      (C272 * C829 + C68 * C1132) * C13816 -
                      (C272 * C943 + C68 * C1225) * C14976 +
                      (C272 * C831 + C68 * C1134) * C13830 +
                      (C272 * C944 + C68 * C1226) * C10449) *
                         C61 * C67 * C15153 +
                     ((C272 * C1941 + C68 * C2277) * C13816 -
                      ((C272 * C499 + C68 * C781) * C14969 +
                       (C272 * C385 + C68 * C688) * C13824) +
                      (C272 * C2059 + C68 * C2386) * C14976 -
                      (C272 * C3023 + C68 * C3287) * C13830 -
                      (C272 * C3117 + C68 * C3372) * C10449) *
                         C61 * C67 * C14933) *
                        C6897 +
                    (((C272 * C828 + C68 * C1131) * C13816 -
                      ((C272 * C154 + C68 * C333) * C14969 +
                       (C272 * C78 + C68 * C274) * C13824) +
                      (C272 * C945 + C68 * C1227) * C14976 -
                      (C272 * C832 + C68 * C1135) * C13830 -
                      (C272 * C946 + C68 * C1228) * C10449) *
                         C61 * C67 * C15153 +
                     ((C272 * C384 + C68 * C687) * C13824 +
                      (C272 * C501 + C68 * C783) * C14969 -
                      (C272 * C1942 + C68 * C2278) * C13816 -
                      (C272 * C2060 + C68 * C2387) * C14976 +
                      (C272 * C5477 + C68 * C5789) * C13830 +
                      (C272 * C5583 + C68 * C5892) * C10449) *
                         C61 * C67 * C14933) *
                        C14845)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
            (C71 * C78 + C61 * C84) * C6904 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C8919 +
           ((C71 * C828 + C61 * C834) * C6904 -
            ((C71 * C835 + C61 * C846) * C6897 +
             (C71 * C829 + C61 * C836) * C6903) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C14973) *
              C15214 +
          (((C71 * C384 + C61 * C390) * C6904 -
            ((C71 * C391 + C61 * C402) * C6897 +
             (C71 * C385 + C61 * C392) * C6903) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C8919 +
           ((C71 * C1941 + C61 * C1944) * C6903 +
            (C71 * C1945 + C61 * C1950) * C6897 -
            (C71 * C1942 + C61 * C1946) * C6904 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C14973) *
              C15202 +
          (((C71 * C387 + C61 * C396) * C6903 +
            (C71 * C397 + C61 * C405) * C6897 -
            (C71 * C388 + C61 * C398) * C6904 -
            (C71 * C399 + C61 * C406) * C14845) *
               C67 * C68 * C8919 +
           ((C71 * C3759 + C61 * C3760) * C6904 -
            ((C71 * C3028 + C61 * C3033) * C6897 +
             (C71 * C3024 + C61 * C3029) * C6903) +
            (C71 * C3761 + C61 * C3762) * C14845) *
               C67 * C68 * C14973) *
              C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6585 + (C71 * C83 + C61 * C92) * C15220 -
           (C71 * C78 + C61 * C84) * C6586 - (C71 * C85 + C61 * C93) * C15213 +
           (C71 * C79 + C61 * C86) * C6587 + (C71 * C87 + C61 * C94) * C15200 -
           (C71 * C80 + C61 * C88) * C6588 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C8919 +
          ((C71 * C828 + C61 * C834) * C6586 -
           ((C71 * C835 + C61 * C846) * C15220 +
            (C71 * C829 + C61 * C836) * C6585) +
           (C71 * C837 + C61 * C847) * C15213 -
           (C71 * C830 + C61 * C838) * C6587 -
           (C71 * C839 + C61 * C848) * C15200 +
           (C71 * C1601 + C61 * C1602) * C6588 +
           (C71 * C1603 + C61 * C1604) * C15183) *
              C67 * C68 * C14973) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
           (C71 * C78 + C61 * C84) * C6904 - (C71 * C85 + C61 * C93) * C14845) *
              C67 * C68 * C15222 +
          ((C71 * C828 + C61 * C834) * C6904 -
           ((C71 * C835 + C61 * C846) * C6897 +
            (C71 * C829 + C61 * C836) * C6903) +
           (C71 * C837 + C61 * C847) * C14845) *
              C67 * C68 * C15219 +
          ((C71 * C831 + C61 * C840) * C6903 +
           (C71 * C841 + C61 * C849) * C6897 -
           (C71 * C832 + C61 * C842) * C6904 -
           (C71 * C843 + C61 * C850) * C14845) *
              C67 * C68 * C15210 +
          ((C71 * C5931 + C61 * C5932) * C6904 -
           ((C71 * C5216 + C61 * C5220) * C6897 +
            (C71 * C5214 + C61 * C5217) * C6903) +
           (C71 * C5933 + C61 * C5934) * C14845) *
              C67 * C68 * C15195) *
         C14875) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C446 +
                      (C71 * C120 + C61 * C125) * C15214 -
                      (C71 * C385 + C61 * C392) * C447 -
                      (C71 * C449 + C61 * C455) * C15202 +
                      (C71 * C387 + C61 * C396) * C448 +
                      (C71 * C450 + C61 * C456) * C15179) *
                         C67 * C68 * C6897 +
                     ((C71 * C384 + C61 * C390) * C447 -
                      ((C71 * C121 + C61 * C126) * C15214 +
                       (C71 * C78 + C61 * C84) * C446) +
                      (C71 * C451 + C61 * C457) * C15202 -
                      (C71 * C388 + C61 * C398) * C448 -
                      (C71 * C452 + C61 * C458) * C15179) *
                         C67 * C68 * C14845) *
                        C8919 +
                    (((C71 * C1941 + C61 * C1944) * C447 -
                      ((C71 * C891 + C61 * C897) * C15214 +
                       (C71 * C829 + C61 * C836) * C446) +
                      (C71 * C2003 + C61 * C2006) * C15202 -
                      (C71 * C3024 + C61 * C3029) * C448 -
                      (C71 * C3073 + C61 * C3076) * C15179) *
                         C67 * C68 * C6897 +
                     ((C71 * C828 + C61 * C834) * C446 +
                      (C71 * C890 + C61 * C896) * C15214 -
                      (C71 * C1942 + C61 * C1946) * C447 -
                      (C71 * C2004 + C61 * C2007) * C15202 +
                      (C71 * C3759 + C61 * C3760) * C448 +
                      (C71 * C3813 + C61 * C3814) * C15179) *
                         C67 * C68 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C15220 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C15213 +
                     ((C71 * C79 + C61 * C86) * C119 +
                      (C71 * C122 + C61 * C127) * C14875) *
                         C67 * C68 * C15200 -
                     ((C71 * C123 + C61 * C128) * C14875 +
                      (C71 * C80 + C61 * C88) * C119) *
                         C67 * C68 * C15183) *
                        C8919 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C15213 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C15220 -
                     ((C71 * C892 + C61 * C898) * C14875 +
                      (C71 * C830 + C61 * C838) * C119) *
                         C67 * C68 * C15200 +
                     ((C71 * C1601 + C61 * C1602) * C119 +
                      (C71 * C1639 + C61 * C1640) * C14875) *
                         C67 * C68 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C6897 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C14845) *
                        C15222 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C14845 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C6897) *
                        C15219 +
                    (((C71 * C831 + C61 * C840) * C119 +
                      (C71 * C893 + C61 * C899) * C14875) *
                         C67 * C68 * C6897 -
                     ((C71 * C894 + C61 * C900) * C14875 +
                      (C71 * C832 + C61 * C842) * C119) *
                         C67 * C68 * C14845) *
                        C15210 +
                    (((C71 * C5931 + C61 * C5932) * C119 +
                      (C71 * C5969 + C61 * C5970) * C14875) *
                         C67 * C68 * C14845 -
                     ((C71 * C5244 + C61 * C5246) * C14875 +
                      (C71 * C5214 + C61 * C5217) * C119) *
                         C67 * C68 * C6897) *
                        C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C8989 +
            (C71 * C153 + C61 * C158) * C8919 -
            (C71 * C829 + C61 * C836) * C8990 -
            (C71 * C943 + C61 * C949) * C14973) *
               C67 * C68 * C15214 +
           ((C71 * C1941 + C61 * C1944) * C8990 -
            ((C71 * C499 + C61 * C505) * C8919 +
             (C71 * C385 + C61 * C392) * C8989) +
            (C71 * C2059 + C61 * C2062) * C14973) *
               C67 * C68 * C15202 +
           ((C71 * C387 + C61 * C396) * C8989 +
            (C71 * C500 + C61 * C506) * C8919 -
            (C71 * C3024 + C61 * C3029) * C8990 -
            (C71 * C3118 + C61 * C3121) * C14973) *
               C67 * C68 * C15179) *
              C6897 +
          (((C71 * C828 + C61 * C834) * C8990 -
            ((C71 * C154 + C61 * C159) * C8919 +
             (C71 * C78 + C61 * C84) * C8989) +
            (C71 * C945 + C61 * C951) * C14973) *
               C67 * C68 * C15214 +
           ((C71 * C384 + C61 * C390) * C8989 +
            (C71 * C501 + C61 * C507) * C8919 -
            (C71 * C1942 + C61 * C1946) * C8990 -
            (C71 * C2060 + C61 * C2063) * C14973) *
               C67 * C68 * C15202 +
           ((C71 * C3759 + C61 * C3760) * C8990 -
            ((C71 * C502 + C61 * C508) * C8919 +
             (C71 * C388 + C61 * C398) * C8989) +
            (C71 * C3865 + C61 * C3866) * C14973) *
               C67 * C68 * C15179) *
              C14845)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C8989 + (C71 * C153 + C61 * C158) * C8919 -
           (C71 * C829 + C61 * C836) * C8990 -
           (C71 * C943 + C61 * C949) * C14973) *
              C67 * C68 * C14875 * C15220 +
          ((C71 * C828 + C61 * C834) * C8990 -
           ((C71 * C154 + C61 * C159) * C8919 +
            (C71 * C78 + C61 * C84) * C8989) +
           (C71 * C945 + C61 * C951) * C14973) *
              C67 * C68 * C14875 * C15213 +
          ((C71 * C79 + C61 * C86) * C8989 + (C71 * C155 + C61 * C160) * C8919 -
           (C71 * C830 + C61 * C838) * C8990 -
           (C71 * C947 + C61 * C953) * C14973) *
              C67 * C68 * C14875 * C15200 +
          ((C71 * C1601 + C61 * C1602) * C8990 -
           ((C71 * C156 + C61 * C161) * C8919 +
            (C71 * C80 + C61 * C88) * C8989) +
           (C71 * C1677 + C61 * C1678) * C14973) *
              C67 * C68 * C14875 * C15183)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C9751 +
           (C71 * C153 + C61 * C158) * C15222 -
           (C71 * C829 + C61 * C836) * C9752 -
           (C71 * C943 + C61 * C949) * C15219 +
           (C71 * C831 + C61 * C840) * C9753 +
           (C71 * C944 + C61 * C950) * C15210 -
           (C71 * C5214 + C61 * C5217) * C9754 -
           (C71 * C5275 + C61 * C5277) * C15195) *
              C67 * C68 * C14875 * C6897 +
          ((C71 * C828 + C61 * C834) * C9752 -
           ((C71 * C154 + C61 * C159) * C15222 +
            (C71 * C78 + C61 * C84) * C9751) +
           (C71 * C945 + C61 * C951) * C15219 -
           (C71 * C832 + C61 * C842) * C9753 -
           (C71 * C946 + C61 * C952) * C15210 +
           (C71 * C5931 + C61 * C5932) * C9754 +
           (C71 * C6009 + C61 * C6010) * C15195) *
              C67 * C68 * C14875 * C14845)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C6903 +
                      (C185 * C83 + C67 * C191) * C6897 -
                      (C185 * C78 + C67 * C187) * C6904 -
                      (C185 * C85 + C67 * C192) * C14845) *
                         C68 * C61 * C8919 +
                     ((C185 * C828 + C67 * C993) * C6904 -
                      ((C185 * C835 + C67 * C999) * C6897 +
                       (C185 * C829 + C67 * C994) * C6903) +
                      (C185 * C837 + C67 * C1000) * C14845) *
                         C68 * C61 * C14973) *
                        C15214 +
                    (((C185 * C384 + C67 * C549) * C6904 -
                      ((C185 * C391 + C67 * C555) * C6897 +
                       (C185 * C385 + C67 * C550) * C6903) +
                      (C185 * C393 + C67 * C556) * C14845) *
                         C68 * C61 * C8919 +
                     ((C185 * C1941 + C67 * C2115) * C6903 +
                      (C185 * C1945 + C67 * C2118) * C6897 -
                      (C185 * C1942 + C67 * C2116) * C6904 -
                      (C185 * C1947 + C67 * C2119) * C14845) *
                         C68 * C61 * C14973) *
                        C15202 +
                    (((C185 * C387 + C67 * C552) * C6903 +
                      (C185 * C397 + C67 * C558) * C6897 -
                      (C185 * C388 + C67 * C553) * C6904 -
                      (C185 * C399 + C67 * C559) * C14845) *
                         C68 * C61 * C8919 +
                     ((C185 * C3759 + C67 * C3917) * C6904 -
                      ((C185 * C3028 + C67 * C3165) * C6897 +
                       (C185 * C3024 + C67 * C3162) * C6903) +
                      (C185 * C3761 + C67 * C3918) * C14845) *
                         C68 * C61 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C6585 +
                     (C185 * C83 + C67 * C191) * C15220 -
                     (C185 * C78 + C67 * C187) * C6586 -
                     (C185 * C85 + C67 * C192) * C15213 +
                     (C185 * C79 + C67 * C188) * C6587 +
                     (C185 * C87 + C67 * C193) * C15200 -
                     (C185 * C80 + C67 * C189) * C6588 -
                     (C185 * C89 + C67 * C194) * C15183) *
                        C68 * C61 * C8919 +
                    ((C185 * C828 + C67 * C993) * C6586 -
                     ((C185 * C835 + C67 * C999) * C15220 +
                      (C185 * C829 + C67 * C994) * C6585) +
                     (C185 * C837 + C67 * C1000) * C15213 -
                     (C185 * C830 + C67 * C995) * C6587 -
                     (C185 * C839 + C67 * C1001) * C15200 +
                     (C185 * C1601 + C67 * C1713) * C6588 +
                     (C185 * C1603 + C67 * C1714) * C15183) *
                        C68 * C61 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C6903 +
                     (C185 * C83 + C67 * C191) * C6897 -
                     (C185 * C78 + C67 * C187) * C6904 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C15222 +
                    ((C185 * C828 + C67 * C993) * C6904 -
                     ((C185 * C835 + C67 * C999) * C6897 +
                      (C185 * C829 + C67 * C994) * C6903) +
                     (C185 * C837 + C67 * C1000) * C14845) *
                        C68 * C61 * C15219 +
                    ((C185 * C831 + C67 * C996) * C6903 +
                     (C185 * C841 + C67 * C1002) * C6897 -
                     (C185 * C832 + C67 * C997) * C6904 -
                     (C185 * C843 + C67 * C1003) * C14845) *
                        C68 * C61 * C15210 +
                    ((C185 * C5931 + C67 * C6045) * C6904 -
                     ((C185 * C5216 + C67 * C5303) * C6897 +
                      (C185 * C5214 + C67 * C5301) * C6903) +
                     (C185 * C5933 + C67 * C6046) * C14845) *
                        C68 * C61 * C15195) *
                   C14875) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C446 +
                      (C185 * C120 + C67 * C218) * C15214 -
                      (C185 * C385 + C67 * C550) * C447 -
                      (C185 * C449 + C67 * C599) * C15202 +
                      (C185 * C387 + C67 * C552) * C448 +
                      (C185 * C450 + C67 * C600) * C15179) *
                         C68 * C61 * C6897 +
                     ((C185 * C384 + C67 * C549) * C447 -
                      ((C185 * C121 + C67 * C219) * C15214 +
                       (C185 * C78 + C67 * C187) * C446) +
                      (C185 * C451 + C67 * C601) * C15202 -
                      (C185 * C388 + C67 * C553) * C448 -
                      (C185 * C452 + C67 * C602) * C15179) *
                         C68 * C61 * C14845) *
                        C8919 +
                    (((C185 * C1941 + C67 * C2115) * C447 -
                      ((C185 * C891 + C67 * C1044) * C15214 +
                       (C185 * C829 + C67 * C994) * C446) +
                      (C185 * C2003 + C67 * C2171) * C15202 -
                      (C185 * C3024 + C67 * C3162) * C448 -
                      (C185 * C3073 + C67 * C3205) * C15179) *
                         C68 * C61 * C6897 +
                     ((C185 * C828 + C67 * C993) * C446 +
                      (C185 * C890 + C67 * C1043) * C15214 -
                      (C185 * C1942 + C67 * C2116) * C447 -
                      (C185 * C2004 + C67 * C2172) * C15202 +
                      (C185 * C3759 + C67 * C3917) * C448 +
                      (C185 * C3813 + C67 * C3969) * C15179) *
                         C68 * C61 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C15220 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C15213 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C15200 -
                     ((C185 * C123 + C67 * C221) * C14875 +
                      (C185 * C80 + C67 * C189) * C119) *
                         C68 * C61 * C15183) *
                        C8919 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C15213 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C15220 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C15200 +
                     ((C185 * C1601 + C67 * C1713) * C119 +
                      (C185 * C1639 + C67 * C1749) * C14875) *
                         C68 * C61 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C6897 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C14845) *
                        C15222 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C14845 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C6897) *
                        C15219 +
                    (((C185 * C831 + C67 * C996) * C119 +
                      (C185 * C893 + C67 * C1046) * C14875) *
                         C68 * C61 * C6897 -
                     ((C185 * C894 + C67 * C1047) * C14875 +
                      (C185 * C832 + C67 * C997) * C119) *
                         C68 * C61 * C14845) *
                        C15210 +
                    (((C185 * C5931 + C67 * C6045) * C119 +
                      (C185 * C5969 + C67 * C6081) * C14875) *
                         C68 * C61 * C14845 -
                     ((C185 * C5244 + C67 * C5327) * C14875 +
                      (C185 * C5214 + C67 * C5301) * C119) *
                         C68 * C61 * C6897) *
                        C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C8989 +
                      (C185 * C153 + C67 * C245) * C8919 -
                      (C185 * C829 + C67 * C994) * C8990 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C15214 +
                     ((C185 * C1941 + C67 * C2115) * C8990 -
                      ((C185 * C499 + C67 * C643) * C8919 +
                       (C185 * C385 + C67 * C550) * C8989) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C15202 +
                     ((C185 * C387 + C67 * C552) * C8989 +
                      (C185 * C500 + C67 * C644) * C8919 -
                      (C185 * C3024 + C67 * C3162) * C8990 -
                      (C185 * C3118 + C67 * C3247) * C14973) *
                         C68 * C61 * C15179) *
                        C6897 +
                    (((C185 * C828 + C67 * C993) * C8990 -
                      ((C185 * C154 + C67 * C246) * C8919 +
                       (C185 * C78 + C67 * C187) * C8989) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C15214 +
                     ((C185 * C384 + C67 * C549) * C8989 +
                      (C185 * C501 + C67 * C645) * C8919 -
                      (C185 * C1942 + C67 * C2116) * C8990 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C15202 +
                     ((C185 * C3759 + C67 * C3917) * C8990 -
                      ((C185 * C502 + C67 * C646) * C8919 +
                       (C185 * C388 + C67 * C553) * C8989) +
                      (C185 * C3865 + C67 * C4020) * C14973) *
                         C68 * C61 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C8989 +
                     (C185 * C153 + C67 * C245) * C8919 -
                     (C185 * C829 + C67 * C994) * C8990 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C14875 * C15220 +
                    ((C185 * C828 + C67 * C993) * C8990 -
                     ((C185 * C154 + C67 * C246) * C8919 +
                      (C185 * C78 + C67 * C187) * C8989) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C14875 * C15213 +
                    ((C185 * C79 + C67 * C188) * C8989 +
                     (C185 * C155 + C67 * C247) * C8919 -
                     (C185 * C830 + C67 * C995) * C8990 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C14875 * C15200 +
                    ((C185 * C1601 + C67 * C1713) * C8990 -
                     ((C185 * C156 + C67 * C248) * C8919 +
                      (C185 * C80 + C67 * C189) * C8989) +
                     (C185 * C1677 + C67 * C1784) * C14973) *
                        C68 * C61 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C9751 +
                     (C185 * C153 + C67 * C245) * C15222 -
                     (C185 * C829 + C67 * C994) * C9752 -
                     (C185 * C943 + C67 * C1087) * C15219 +
                     (C185 * C831 + C67 * C996) * C9753 +
                     (C185 * C944 + C67 * C1088) * C15210 -
                     (C185 * C5214 + C67 * C5301) * C9754 -
                     (C185 * C5275 + C67 * C5351) * C15195) *
                        C68 * C61 * C14875 * C6897 +
                    ((C185 * C828 + C67 * C993) * C9752 -
                     ((C185 * C154 + C67 * C246) * C15222 +
                      (C185 * C78 + C67 * C187) * C9751) +
                     (C185 * C945 + C67 * C1089) * C15219 -
                     (C185 * C832 + C67 * C997) * C9753 -
                     (C185 * C946 + C67 * C1090) * C15210 +
                     (C185 * C5931 + C67 * C6045) * C9754 +
                     (C185 * C6009 + C67 * C6116) * C15195) *
                        C68 * C61 * C14875 * C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C6903 +
                      (C272 * C83 + C68 * C278) * C6897 -
                      (C272 * C78 + C68 * C274) * C6904 -
                      (C272 * C85 + C68 * C279) * C14845) *
                         C61 * C67 * C8919 +
                     ((C272 * C828 + C68 * C1131) * C6904 -
                      ((C272 * C835 + C68 * C1137) * C6897 +
                       (C272 * C829 + C68 * C1132) * C6903) +
                      (C272 * C837 + C68 * C1138) * C14845) *
                         C61 * C67 * C14973) *
                        C15214 +
                    (((C272 * C384 + C68 * C687) * C6904 -
                      ((C272 * C391 + C68 * C693) * C6897 +
                       (C272 * C385 + C68 * C688) * C6903) +
                      (C272 * C393 + C68 * C694) * C14845) *
                         C61 * C67 * C8919 +
                     ((C272 * C1941 + C68 * C2277) * C6903 +
                      (C272 * C1945 + C68 * C2280) * C6897 -
                      (C272 * C1942 + C68 * C2278) * C6904 -
                      (C272 * C1947 + C68 * C2281) * C14845) *
                         C61 * C67 * C14973) *
                        C15202 +
                    (((C272 * C387 + C68 * C690) * C6903 +
                      (C272 * C397 + C68 * C696) * C6897 -
                      (C272 * C388 + C68 * C691) * C6904 -
                      (C272 * C399 + C68 * C697) * C14845) *
                         C61 * C67 * C8919 +
                     ((C272 * C3759 + C68 * C4071) * C6904 -
                      ((C272 * C3028 + C68 * C3291) * C6897 +
                       (C272 * C3024 + C68 * C3288) * C6903) +
                      (C272 * C3761 + C68 * C4072) * C14845) *
                         C61 * C67 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C6585 +
                     (C272 * C83 + C68 * C278) * C15220 -
                     (C272 * C78 + C68 * C274) * C6586 -
                     (C272 * C85 + C68 * C279) * C15213 +
                     (C272 * C79 + C68 * C275) * C6587 +
                     (C272 * C87 + C68 * C280) * C15200 -
                     (C272 * C80 + C68 * C276) * C6588 -
                     (C272 * C89 + C68 * C281) * C15183) *
                        C61 * C67 * C8919 +
                    ((C272 * C828 + C68 * C1131) * C6586 -
                     ((C272 * C835 + C68 * C1137) * C15220 +
                      (C272 * C829 + C68 * C1132) * C6585) +
                     (C272 * C837 + C68 * C1138) * C15213 -
                     (C272 * C830 + C68 * C1133) * C6587 -
                     (C272 * C839 + C68 * C1139) * C15200 +
                     (C272 * C1601 + C68 * C1819) * C6588 +
                     (C272 * C1603 + C68 * C1820) * C15183) *
                        C61 * C67 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C6903 +
                     (C272 * C83 + C68 * C278) * C6897 -
                     (C272 * C78 + C68 * C274) * C6904 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C15222 +
                    ((C272 * C828 + C68 * C1131) * C6904 -
                     ((C272 * C835 + C68 * C1137) * C6897 +
                      (C272 * C829 + C68 * C1132) * C6903) +
                     (C272 * C837 + C68 * C1138) * C14845) *
                        C61 * C67 * C15219 +
                    ((C272 * C831 + C68 * C1134) * C6903 +
                     (C272 * C841 + C68 * C1140) * C6897 -
                     (C272 * C832 + C68 * C1135) * C6904 -
                     (C272 * C843 + C68 * C1141) * C14845) *
                        C61 * C67 * C15210 +
                    ((C272 * C5931 + C68 * C6151) * C6904 -
                     ((C272 * C5216 + C68 * C5377) * C6897 +
                      (C272 * C5214 + C68 * C5375) * C6903) +
                     (C272 * C5933 + C68 * C6152) * C14845) *
                        C61 * C67 * C15195) *
                   C14875) /
                      (p * q * std::sqrt(p + q));
    d2eezy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C446 +
                      (C272 * C120 + C68 * C305) * C15214 -
                      (C272 * C385 + C68 * C688) * C447 -
                      (C272 * C449 + C68 * C737) * C15202 +
                      (C272 * C387 + C68 * C690) * C448 +
                      (C272 * C450 + C68 * C738) * C15179) *
                         C61 * C67 * C6897 +
                     ((C272 * C384 + C68 * C687) * C447 -
                      ((C272 * C121 + C68 * C306) * C15214 +
                       (C272 * C78 + C68 * C274) * C446) +
                      (C272 * C451 + C68 * C739) * C15202 -
                      (C272 * C388 + C68 * C691) * C448 -
                      (C272 * C452 + C68 * C740) * C15179) *
                         C61 * C67 * C14845) *
                        C8919 +
                    (((C272 * C1941 + C68 * C2277) * C447 -
                      ((C272 * C891 + C68 * C1182) * C15214 +
                       (C272 * C829 + C68 * C1132) * C446) +
                      (C272 * C2003 + C68 * C2333) * C15202 -
                      (C272 * C3024 + C68 * C3288) * C448 -
                      (C272 * C3073 + C68 * C3331) * C15179) *
                         C61 * C67 * C6897 +
                     ((C272 * C828 + C68 * C1131) * C446 +
                      (C272 * C890 + C68 * C1181) * C15214 -
                      (C272 * C1942 + C68 * C2278) * C447 -
                      (C272 * C2004 + C68 * C2334) * C15202 +
                      (C272 * C3759 + C68 * C4071) * C448 +
                      (C272 * C3813 + C68 * C4123) * C15179) *
                         C61 * C67 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C15220 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C15213 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C15200 -
                     ((C272 * C123 + C68 * C308) * C14875 +
                      (C272 * C80 + C68 * C276) * C119) *
                         C61 * C67 * C15183) *
                        C8919 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C15213 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C15220 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C15200 +
                     ((C272 * C1601 + C68 * C1819) * C119 +
                      (C272 * C1639 + C68 * C1855) * C14875) *
                         C61 * C67 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C6897 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C14845) *
                        C15222 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C14845 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C6897) *
                        C15219 +
                    (((C272 * C831 + C68 * C1134) * C119 +
                      (C272 * C893 + C68 * C1184) * C14875) *
                         C61 * C67 * C6897 -
                     ((C272 * C894 + C68 * C1185) * C14875 +
                      (C272 * C832 + C68 * C1135) * C119) *
                         C61 * C67 * C14845) *
                        C15210 +
                    (((C272 * C5931 + C68 * C6151) * C119 +
                      (C272 * C5969 + C68 * C6187) * C14875) *
                         C61 * C67 * C14845 -
                     ((C272 * C5244 + C68 * C5401) * C14875 +
                      (C272 * C5214 + C68 * C5375) * C119) *
                         C61 * C67 * C6897) *
                        C15195)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C8989 +
                      (C272 * C153 + C68 * C332) * C8919 -
                      (C272 * C829 + C68 * C1132) * C8990 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C15214 +
                     ((C272 * C1941 + C68 * C2277) * C8990 -
                      ((C272 * C499 + C68 * C781) * C8919 +
                       (C272 * C385 + C68 * C688) * C8989) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C15202 +
                     ((C272 * C387 + C68 * C690) * C8989 +
                      (C272 * C500 + C68 * C782) * C8919 -
                      (C272 * C3024 + C68 * C3288) * C8990 -
                      (C272 * C3118 + C68 * C3373) * C14973) *
                         C61 * C67 * C15179) *
                        C6897 +
                    (((C272 * C828 + C68 * C1131) * C8990 -
                      ((C272 * C154 + C68 * C333) * C8919 +
                       (C272 * C78 + C68 * C274) * C8989) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C15214 +
                     ((C272 * C384 + C68 * C687) * C8989 +
                      (C272 * C501 + C68 * C783) * C8919 -
                      (C272 * C1942 + C68 * C2278) * C8990 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C15202 +
                     ((C272 * C3759 + C68 * C4071) * C8990 -
                      ((C272 * C502 + C68 * C784) * C8919 +
                       (C272 * C388 + C68 * C691) * C8989) +
                      (C272 * C3865 + C68 * C4174) * C14973) *
                         C61 * C67 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C8989 +
                     (C272 * C153 + C68 * C332) * C8919 -
                     (C272 * C829 + C68 * C1132) * C8990 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C14875 * C15220 +
                    ((C272 * C828 + C68 * C1131) * C8990 -
                     ((C272 * C154 + C68 * C333) * C8919 +
                      (C272 * C78 + C68 * C274) * C8989) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C14875 * C15213 +
                    ((C272 * C79 + C68 * C275) * C8989 +
                     (C272 * C155 + C68 * C334) * C8919 -
                     (C272 * C830 + C68 * C1133) * C8990 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C14875 * C15200 +
                    ((C272 * C1601 + C68 * C1819) * C8990 -
                     ((C272 * C156 + C68 * C335) * C8919 +
                      (C272 * C80 + C68 * C276) * C8989) +
                     (C272 * C1677 + C68 * C1890) * C14973) *
                        C61 * C67 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C9751 +
                     (C272 * C153 + C68 * C332) * C15222 -
                     (C272 * C829 + C68 * C1132) * C9752 -
                     (C272 * C943 + C68 * C1225) * C15219 +
                     (C272 * C831 + C68 * C1134) * C9753 +
                     (C272 * C944 + C68 * C1226) * C15210 -
                     (C272 * C5214 + C68 * C5375) * C9754 -
                     (C272 * C5275 + C68 * C5425) * C15195) *
                        C61 * C67 * C14875 * C6897 +
                    ((C272 * C828 + C68 * C1131) * C9752 -
                     ((C272 * C154 + C68 * C333) * C15222 +
                      (C272 * C78 + C68 * C274) * C9751) +
                     (C272 * C945 + C68 * C1227) * C15219 -
                     (C272 * C832 + C68 * C1135) * C9753 -
                     (C272 * C946 + C68 * C1228) * C15210 +
                     (C272 * C5931 + C68 * C6151) * C9754 +
                     (C272 * C6009 + C68 * C6222) * C15195) *
                        C61 * C67 * C14875 * C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C13585 + (C71 * C83 + C61 * C92) * C14840 -
           (C71 * C78 + C61 * C84) * C13581 - (C71 * C85 + C61 * C93) * C14848 +
           (C71 * C79 + C61 * C86) * C13591 + (C71 * C87 + C61 * C94) * C7671) *
              C67 * C68 * C14969 +
          ((C71 * C828 + C61 * C834) * C13581 -
           ((C71 * C835 + C61 * C846) * C14840 +
            (C71 * C829 + C61 * C836) * C13585) +
           (C71 * C837 + C61 * C847) * C14848 -
           (C71 * C830 + C61 * C838) * C13591 -
           (C71 * C839 + C61 * C848) * C7671) *
              C67 * C68 * C14976 +
          ((C71 * C831 + C61 * C840) * C13585 +
           (C71 * C841 + C61 * C849) * C14840 -
           (C71 * C832 + C61 * C842) * C13581 -
           (C71 * C843 + C61 * C850) * C14848 +
           (C71 * C833 + C61 * C844) * C13591 +
           (C71 * C845 + C61 * C851) * C7671) *
              C67 * C68 * C10449) *
         C14875) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C14840 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C14848 +
                     ((C71 * C79 + C61 * C86) * C119 +
                      (C71 * C122 + C61 * C127) * C14875) *
                         C67 * C68 * C7671) *
                        C14969 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C14848 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C14840 -
                     ((C71 * C892 + C61 * C898) * C14875 +
                      (C71 * C830 + C61 * C838) * C119) *
                         C67 * C68 * C7671) *
                        C14976 +
                    (((C71 * C831 + C61 * C840) * C119 +
                      (C71 * C893 + C61 * C899) * C14875) *
                         C67 * C68 * C14840 -
                     ((C71 * C894 + C61 * C900) * C14875 +
                      (C71 * C832 + C61 * C842) * C119) *
                         C67 * C68 * C14848 +
                     ((C71 * C833 + C61 * C844) * C119 +
                      (C71 * C895 + C61 * C901) * C14875) *
                         C67 * C68 * C7671) *
                        C10449)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C77 + C61 * C82) * C13824 +
                     (C71 * C153 + C61 * C158) * C14969 -
                     (C71 * C829 + C61 * C836) * C13816 -
                     (C71 * C943 + C61 * C949) * C14976 +
                     (C71 * C831 + C61 * C840) * C13830 +
                     (C71 * C944 + C61 * C950) * C10449) *
                        C67 * C68 * C14875 * C14840 +
                    ((C71 * C828 + C61 * C834) * C13816 -
                     ((C71 * C154 + C61 * C159) * C14969 +
                      (C71 * C78 + C61 * C84) * C13824) +
                     (C71 * C945 + C61 * C951) * C14976 -
                     (C71 * C832 + C61 * C842) * C13830 -
                     (C71 * C946 + C61 * C952) * C10449) *
                        C67 * C68 * C14875 * C14848 +
                    ((C71 * C79 + C61 * C86) * C13824 +
                     (C71 * C155 + C61 * C160) * C14969 -
                     (C71 * C830 + C61 * C838) * C13816 -
                     (C71 * C947 + C61 * C953) * C14976 +
                     (C71 * C833 + C61 * C844) * C13830 +
                     (C71 * C948 + C61 * C954) * C10449) *
                        C67 * C68 * C14875 * C7671)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C13585 +
                     (C185 * C83 + C67 * C191) * C14840 -
                     (C185 * C78 + C67 * C187) * C13581 -
                     (C185 * C85 + C67 * C192) * C14848 +
                     (C185 * C79 + C67 * C188) * C13591 +
                     (C185 * C87 + C67 * C193) * C7671) *
                        C68 * C61 * C14969 +
                    ((C185 * C828 + C67 * C993) * C13581 -
                     ((C185 * C835 + C67 * C999) * C14840 +
                      (C185 * C829 + C67 * C994) * C13585) +
                     (C185 * C837 + C67 * C1000) * C14848 -
                     (C185 * C830 + C67 * C995) * C13591 -
                     (C185 * C839 + C67 * C1001) * C7671) *
                        C68 * C61 * C14976 +
                    ((C185 * C831 + C67 * C996) * C13585 +
                     (C185 * C841 + C67 * C1002) * C14840 -
                     (C185 * C832 + C67 * C997) * C13581 -
                     (C185 * C843 + C67 * C1003) * C14848 +
                     (C185 * C833 + C67 * C998) * C13591 +
                     (C185 * C845 + C67 * C1004) * C7671) *
                        C68 * C61 * C10449) *
                   C14875) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C14840 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C14848 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C7671) *
                        C14969 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C14848 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C14840 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C7671) *
                        C14976 +
                    (((C185 * C831 + C67 * C996) * C119 +
                      (C185 * C893 + C67 * C1046) * C14875) *
                         C68 * C61 * C14840 -
                     ((C185 * C894 + C67 * C1047) * C14875 +
                      (C185 * C832 + C67 * C997) * C119) *
                         C68 * C61 * C14848 +
                     ((C185 * C833 + C67 * C998) * C119 +
                      (C185 * C895 + C67 * C1048) * C14875) *
                         C68 * C61 * C7671) *
                        C10449)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C13824 +
                     (C185 * C153 + C67 * C245) * C14969 -
                     (C185 * C829 + C67 * C994) * C13816 -
                     (C185 * C943 + C67 * C1087) * C14976 +
                     (C185 * C831 + C67 * C996) * C13830 +
                     (C185 * C944 + C67 * C1088) * C10449) *
                        C68 * C61 * C14875 * C14840 +
                    ((C185 * C828 + C67 * C993) * C13816 -
                     ((C185 * C154 + C67 * C246) * C14969 +
                      (C185 * C78 + C67 * C187) * C13824) +
                     (C185 * C945 + C67 * C1089) * C14976 -
                     (C185 * C832 + C67 * C997) * C13830 -
                     (C185 * C946 + C67 * C1090) * C10449) *
                        C68 * C61 * C14875 * C14848 +
                    ((C185 * C79 + C67 * C188) * C13824 +
                     (C185 * C155 + C67 * C247) * C14969 -
                     (C185 * C830 + C67 * C995) * C13816 -
                     (C185 * C947 + C67 * C1091) * C14976 +
                     (C185 * C833 + C67 * C998) * C13830 +
                     (C185 * C948 + C67 * C1092) * C10449) *
                        C68 * C61 * C14875 * C7671)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C13585 +
                     (C272 * C83 + C68 * C278) * C14840 -
                     (C272 * C78 + C68 * C274) * C13581 -
                     (C272 * C85 + C68 * C279) * C14848 +
                     (C272 * C79 + C68 * C275) * C13591 +
                     (C272 * C87 + C68 * C280) * C7671) *
                        C61 * C67 * C14969 +
                    ((C272 * C828 + C68 * C1131) * C13581 -
                     ((C272 * C835 + C68 * C1137) * C14840 +
                      (C272 * C829 + C68 * C1132) * C13585) +
                     (C272 * C837 + C68 * C1138) * C14848 -
                     (C272 * C830 + C68 * C1133) * C13591 -
                     (C272 * C839 + C68 * C1139) * C7671) *
                        C61 * C67 * C14976 +
                    ((C272 * C831 + C68 * C1134) * C13585 +
                     (C272 * C841 + C68 * C1140) * C14840 -
                     (C272 * C832 + C68 * C1135) * C13581 -
                     (C272 * C843 + C68 * C1141) * C14848 +
                     (C272 * C833 + C68 * C1136) * C13591 +
                     (C272 * C845 + C68 * C1142) * C7671) *
                        C61 * C67 * C10449) *
                   C14875) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C14840 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C14848 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C7671) *
                        C14969 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C14848 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C14840 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C7671) *
                        C14976 +
                    (((C272 * C831 + C68 * C1134) * C119 +
                      (C272 * C893 + C68 * C1184) * C14875) *
                         C61 * C67 * C14840 -
                     ((C272 * C894 + C68 * C1185) * C14875 +
                      (C272 * C832 + C68 * C1135) * C119) *
                         C61 * C67 * C14848 +
                     ((C272 * C833 + C68 * C1136) * C119 +
                      (C272 * C895 + C68 * C1186) * C14875) *
                         C61 * C67 * C7671) *
                        C10449)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C13824 +
                     (C272 * C153 + C68 * C332) * C14969 -
                     (C272 * C829 + C68 * C1132) * C13816 -
                     (C272 * C943 + C68 * C1225) * C14976 +
                     (C272 * C831 + C68 * C1134) * C13830 +
                     (C272 * C944 + C68 * C1226) * C10449) *
                        C61 * C67 * C14875 * C14840 +
                    ((C272 * C828 + C68 * C1131) * C13816 -
                     ((C272 * C154 + C68 * C333) * C14969 +
                      (C272 * C78 + C68 * C274) * C13824) +
                     (C272 * C945 + C68 * C1227) * C14976 -
                     (C272 * C832 + C68 * C1135) * C13830 -
                     (C272 * C946 + C68 * C1228) * C10449) *
                        C61 * C67 * C14875 * C14848 +
                    ((C272 * C79 + C68 * C275) * C13824 +
                     (C272 * C155 + C68 * C334) * C14969 -
                     (C272 * C830 + C68 * C1133) * C13816 -
                     (C272 * C947 + C68 * C1229) * C14976 +
                     (C272 * C833 + C68 * C1136) * C13830 +
                     (C272 * C948 + C68 * C1230) * C10449) *
                        C61 * C67 * C14875 * C7671)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C6585 + (C71 * C83 + C61 * C92) * C15220 -
           (C71 * C78 + C61 * C84) * C6586 - (C71 * C85 + C61 * C93) * C15213 +
           (C71 * C79 + C61 * C86) * C6587 + (C71 * C87 + C61 * C94) * C15200 -
           (C71 * C80 + C61 * C88) * C6588 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C8919 +
          ((C71 * C828 + C61 * C834) * C6586 -
           ((C71 * C835 + C61 * C846) * C15220 +
            (C71 * C829 + C61 * C836) * C6585) +
           (C71 * C837 + C61 * C847) * C15213 -
           (C71 * C830 + C61 * C838) * C6587 -
           (C71 * C839 + C61 * C848) * C15200 +
           (C71 * C1601 + C61 * C1602) * C6588 +
           (C71 * C1603 + C61 * C1604) * C15183) *
              C67 * C68 * C14973) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C6903 + (C71 * C83 + C61 * C92) * C6897 -
            (C71 * C78 + C61 * C84) * C6904 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C8919 +
           ((C71 * C828 + C61 * C834) * C6904 -
            ((C71 * C835 + C61 * C846) * C6897 +
             (C71 * C829 + C61 * C836) * C6903) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C14973) *
              C15214 +
          (((C71 * C384 + C61 * C390) * C6904 -
            ((C71 * C391 + C61 * C402) * C6897 +
             (C71 * C385 + C61 * C392) * C6903) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C8919 +
           ((C71 * C1941 + C61 * C1944) * C6903 +
            (C71 * C1945 + C61 * C1950) * C6897 -
            (C71 * C1942 + C61 * C1946) * C6904 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C14973) *
              C15202 +
          (((C71 * C387 + C61 * C396) * C6903 +
            (C71 * C397 + C61 * C405) * C6897 -
            (C71 * C388 + C61 * C398) * C6904 -
            (C71 * C399 + C61 * C406) * C14845) *
               C67 * C68 * C8919 +
           ((C71 * C3759 + C61 * C3760) * C6904 -
            ((C71 * C3028 + C61 * C3033) * C6897 +
             (C71 * C3024 + C61 * C3029) * C6903) +
            (C71 * C3761 + C61 * C3762) * C14845) *
               C67 * C68 * C14973) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C15220 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C15213 +
                     ((C71 * C79 + C61 * C86) * C119 +
                      (C71 * C122 + C61 * C127) * C14875) *
                         C67 * C68 * C15200 -
                     ((C71 * C123 + C61 * C128) * C14875 +
                      (C71 * C80 + C61 * C88) * C119) *
                         C67 * C68 * C15183) *
                        C8919 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C15213 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C15220 -
                     ((C71 * C892 + C61 * C898) * C14875 +
                      (C71 * C830 + C61 * C838) * C119) *
                         C67 * C68 * C15200 +
                     ((C71 * C1601 + C61 * C1602) * C119 +
                      (C71 * C1639 + C61 * C1640) * C14875) *
                         C67 * C68 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C446 +
                      (C71 * C120 + C61 * C125) * C15214 -
                      (C71 * C385 + C61 * C392) * C447 -
                      (C71 * C449 + C61 * C455) * C15202 +
                      (C71 * C387 + C61 * C396) * C448 +
                      (C71 * C450 + C61 * C456) * C15179) *
                         C67 * C68 * C6897 +
                     ((C71 * C384 + C61 * C390) * C447 -
                      ((C71 * C121 + C61 * C126) * C15214 +
                       (C71 * C78 + C61 * C84) * C446) +
                      (C71 * C451 + C61 * C457) * C15202 -
                      (C71 * C388 + C61 * C398) * C448 -
                      (C71 * C452 + C61 * C458) * C15179) *
                         C67 * C68 * C14845) *
                        C8919 +
                    (((C71 * C1941 + C61 * C1944) * C447 -
                      ((C71 * C891 + C61 * C897) * C15214 +
                       (C71 * C829 + C61 * C836) * C446) +
                      (C71 * C2003 + C61 * C2006) * C15202 -
                      (C71 * C3024 + C61 * C3029) * C448 -
                      (C71 * C3073 + C61 * C3076) * C15179) *
                         C67 * C68 * C6897 +
                     ((C71 * C828 + C61 * C834) * C446 +
                      (C71 * C890 + C61 * C896) * C15214 -
                      (C71 * C1942 + C61 * C1946) * C447 -
                      (C71 * C2004 + C61 * C2007) * C15202 +
                      (C71 * C3759 + C61 * C3760) * C448 +
                      (C71 * C3813 + C61 * C3814) * C15179) *
                         C67 * C68 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C8989 + (C71 * C153 + C61 * C158) * C8919 -
           (C71 * C829 + C61 * C836) * C8990 -
           (C71 * C943 + C61 * C949) * C14973) *
              C67 * C68 * C14875 * C15220 +
          ((C71 * C828 + C61 * C834) * C8990 -
           ((C71 * C154 + C61 * C159) * C8919 +
            (C71 * C78 + C61 * C84) * C8989) +
           (C71 * C945 + C61 * C951) * C14973) *
              C67 * C68 * C14875 * C15213 +
          ((C71 * C79 + C61 * C86) * C8989 + (C71 * C155 + C61 * C160) * C8919 -
           (C71 * C830 + C61 * C838) * C8990 -
           (C71 * C947 + C61 * C953) * C14973) *
              C67 * C68 * C14875 * C15200 +
          ((C71 * C1601 + C61 * C1602) * C8990 -
           ((C71 * C156 + C61 * C161) * C8919 +
            (C71 * C80 + C61 * C88) * C8989) +
           (C71 * C1677 + C61 * C1678) * C14973) *
              C67 * C68 * C14875 * C15183)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C8989 +
            (C71 * C153 + C61 * C158) * C8919 -
            (C71 * C829 + C61 * C836) * C8990 -
            (C71 * C943 + C61 * C949) * C14973) *
               C67 * C68 * C15214 +
           ((C71 * C1941 + C61 * C1944) * C8990 -
            ((C71 * C499 + C61 * C505) * C8919 +
             (C71 * C385 + C61 * C392) * C8989) +
            (C71 * C2059 + C61 * C2062) * C14973) *
               C67 * C68 * C15202 +
           ((C71 * C387 + C61 * C396) * C8989 +
            (C71 * C500 + C61 * C506) * C8919 -
            (C71 * C3024 + C61 * C3029) * C8990 -
            (C71 * C3118 + C61 * C3121) * C14973) *
               C67 * C68 * C15179) *
              C6897 +
          (((C71 * C828 + C61 * C834) * C8990 -
            ((C71 * C154 + C61 * C159) * C8919 +
             (C71 * C78 + C61 * C84) * C8989) +
            (C71 * C945 + C61 * C951) * C14973) *
               C67 * C68 * C15214 +
           ((C71 * C384 + C61 * C390) * C8989 +
            (C71 * C501 + C61 * C507) * C8919 -
            (C71 * C1942 + C61 * C1946) * C8990 -
            (C71 * C2060 + C61 * C2063) * C14973) *
               C67 * C68 * C15202 +
           ((C71 * C3759 + C61 * C3760) * C8990 -
            ((C71 * C502 + C61 * C508) * C8919 +
             (C71 * C388 + C61 * C398) * C8989) +
            (C71 * C3865 + C61 * C3866) * C14973) *
               C67 * C68 * C15179) *
              C14845)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C6585 +
                     (C185 * C83 + C67 * C191) * C15220 -
                     (C185 * C78 + C67 * C187) * C6586 -
                     (C185 * C85 + C67 * C192) * C15213 +
                     (C185 * C79 + C67 * C188) * C6587 +
                     (C185 * C87 + C67 * C193) * C15200 -
                     (C185 * C80 + C67 * C189) * C6588 -
                     (C185 * C89 + C67 * C194) * C15183) *
                        C68 * C61 * C8919 +
                    ((C185 * C828 + C67 * C993) * C6586 -
                     ((C185 * C835 + C67 * C999) * C15220 +
                      (C185 * C829 + C67 * C994) * C6585) +
                     (C185 * C837 + C67 * C1000) * C15213 -
                     (C185 * C830 + C67 * C995) * C6587 -
                     (C185 * C839 + C67 * C1001) * C15200 +
                     (C185 * C1601 + C67 * C1713) * C6588 +
                     (C185 * C1603 + C67 * C1714) * C15183) *
                        C68 * C61 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C6903 +
                      (C185 * C83 + C67 * C191) * C6897 -
                      (C185 * C78 + C67 * C187) * C6904 -
                      (C185 * C85 + C67 * C192) * C14845) *
                         C68 * C61 * C8919 +
                     ((C185 * C828 + C67 * C993) * C6904 -
                      ((C185 * C835 + C67 * C999) * C6897 +
                       (C185 * C829 + C67 * C994) * C6903) +
                      (C185 * C837 + C67 * C1000) * C14845) *
                         C68 * C61 * C14973) *
                        C15214 +
                    (((C185 * C384 + C67 * C549) * C6904 -
                      ((C185 * C391 + C67 * C555) * C6897 +
                       (C185 * C385 + C67 * C550) * C6903) +
                      (C185 * C393 + C67 * C556) * C14845) *
                         C68 * C61 * C8919 +
                     ((C185 * C1941 + C67 * C2115) * C6903 +
                      (C185 * C1945 + C67 * C2118) * C6897 -
                      (C185 * C1942 + C67 * C2116) * C6904 -
                      (C185 * C1947 + C67 * C2119) * C14845) *
                         C68 * C61 * C14973) *
                        C15202 +
                    (((C185 * C387 + C67 * C552) * C6903 +
                      (C185 * C397 + C67 * C558) * C6897 -
                      (C185 * C388 + C67 * C553) * C6904 -
                      (C185 * C399 + C67 * C559) * C14845) *
                         C68 * C61 * C8919 +
                     ((C185 * C3759 + C67 * C3917) * C6904 -
                      ((C185 * C3028 + C67 * C3165) * C6897 +
                       (C185 * C3024 + C67 * C3162) * C6903) +
                      (C185 * C3761 + C67 * C3918) * C14845) *
                         C68 * C61 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C15220 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C15213 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C15200 -
                     ((C185 * C123 + C67 * C221) * C14875 +
                      (C185 * C80 + C67 * C189) * C119) *
                         C68 * C61 * C15183) *
                        C8919 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C15213 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C15220 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C15200 +
                     ((C185 * C1601 + C67 * C1713) * C119 +
                      (C185 * C1639 + C67 * C1749) * C14875) *
                         C68 * C61 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C446 +
                      (C185 * C120 + C67 * C218) * C15214 -
                      (C185 * C385 + C67 * C550) * C447 -
                      (C185 * C449 + C67 * C599) * C15202 +
                      (C185 * C387 + C67 * C552) * C448 +
                      (C185 * C450 + C67 * C600) * C15179) *
                         C68 * C61 * C6897 +
                     ((C185 * C384 + C67 * C549) * C447 -
                      ((C185 * C121 + C67 * C219) * C15214 +
                       (C185 * C78 + C67 * C187) * C446) +
                      (C185 * C451 + C67 * C601) * C15202 -
                      (C185 * C388 + C67 * C553) * C448 -
                      (C185 * C452 + C67 * C602) * C15179) *
                         C68 * C61 * C14845) *
                        C8919 +
                    (((C185 * C1941 + C67 * C2115) * C447 -
                      ((C185 * C891 + C67 * C1044) * C15214 +
                       (C185 * C829 + C67 * C994) * C446) +
                      (C185 * C2003 + C67 * C2171) * C15202 -
                      (C185 * C3024 + C67 * C3162) * C448 -
                      (C185 * C3073 + C67 * C3205) * C15179) *
                         C68 * C61 * C6897 +
                     ((C185 * C828 + C67 * C993) * C446 +
                      (C185 * C890 + C67 * C1043) * C15214 -
                      (C185 * C1942 + C67 * C2116) * C447 -
                      (C185 * C2004 + C67 * C2172) * C15202 +
                      (C185 * C3759 + C67 * C3917) * C448 +
                      (C185 * C3813 + C67 * C3969) * C15179) *
                         C68 * C61 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C8989 +
                     (C185 * C153 + C67 * C245) * C8919 -
                     (C185 * C829 + C67 * C994) * C8990 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C14875 * C15220 +
                    ((C185 * C828 + C67 * C993) * C8990 -
                     ((C185 * C154 + C67 * C246) * C8919 +
                      (C185 * C78 + C67 * C187) * C8989) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C14875 * C15213 +
                    ((C185 * C79 + C67 * C188) * C8989 +
                     (C185 * C155 + C67 * C247) * C8919 -
                     (C185 * C830 + C67 * C995) * C8990 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C14875 * C15200 +
                    ((C185 * C1601 + C67 * C1713) * C8990 -
                     ((C185 * C156 + C67 * C248) * C8919 +
                      (C185 * C80 + C67 * C189) * C8989) +
                     (C185 * C1677 + C67 * C1784) * C14973) *
                        C68 * C61 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C8989 +
                      (C185 * C153 + C67 * C245) * C8919 -
                      (C185 * C829 + C67 * C994) * C8990 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C15214 +
                     ((C185 * C1941 + C67 * C2115) * C8990 -
                      ((C185 * C499 + C67 * C643) * C8919 +
                       (C185 * C385 + C67 * C550) * C8989) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C15202 +
                     ((C185 * C387 + C67 * C552) * C8989 +
                      (C185 * C500 + C67 * C644) * C8919 -
                      (C185 * C3024 + C67 * C3162) * C8990 -
                      (C185 * C3118 + C67 * C3247) * C14973) *
                         C68 * C61 * C15179) *
                        C6897 +
                    (((C185 * C828 + C67 * C993) * C8990 -
                      ((C185 * C154 + C67 * C246) * C8919 +
                       (C185 * C78 + C67 * C187) * C8989) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C15214 +
                     ((C185 * C384 + C67 * C549) * C8989 +
                      (C185 * C501 + C67 * C645) * C8919 -
                      (C185 * C1942 + C67 * C2116) * C8990 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C15202 +
                     ((C185 * C3759 + C67 * C3917) * C8990 -
                      ((C185 * C502 + C67 * C646) * C8919 +
                       (C185 * C388 + C67 * C553) * C8989) +
                      (C185 * C3865 + C67 * C4020) * C14973) *
                         C68 * C61 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C6585 +
                     (C272 * C83 + C68 * C278) * C15220 -
                     (C272 * C78 + C68 * C274) * C6586 -
                     (C272 * C85 + C68 * C279) * C15213 +
                     (C272 * C79 + C68 * C275) * C6587 +
                     (C272 * C87 + C68 * C280) * C15200 -
                     (C272 * C80 + C68 * C276) * C6588 -
                     (C272 * C89 + C68 * C281) * C15183) *
                        C61 * C67 * C8919 +
                    ((C272 * C828 + C68 * C1131) * C6586 -
                     ((C272 * C835 + C68 * C1137) * C15220 +
                      (C272 * C829 + C68 * C1132) * C6585) +
                     (C272 * C837 + C68 * C1138) * C15213 -
                     (C272 * C830 + C68 * C1133) * C6587 -
                     (C272 * C839 + C68 * C1139) * C15200 +
                     (C272 * C1601 + C68 * C1819) * C6588 +
                     (C272 * C1603 + C68 * C1820) * C15183) *
                        C61 * C67 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C6903 +
                      (C272 * C83 + C68 * C278) * C6897 -
                      (C272 * C78 + C68 * C274) * C6904 -
                      (C272 * C85 + C68 * C279) * C14845) *
                         C61 * C67 * C8919 +
                     ((C272 * C828 + C68 * C1131) * C6904 -
                      ((C272 * C835 + C68 * C1137) * C6897 +
                       (C272 * C829 + C68 * C1132) * C6903) +
                      (C272 * C837 + C68 * C1138) * C14845) *
                         C61 * C67 * C14973) *
                        C15214 +
                    (((C272 * C384 + C68 * C687) * C6904 -
                      ((C272 * C391 + C68 * C693) * C6897 +
                       (C272 * C385 + C68 * C688) * C6903) +
                      (C272 * C393 + C68 * C694) * C14845) *
                         C61 * C67 * C8919 +
                     ((C272 * C1941 + C68 * C2277) * C6903 +
                      (C272 * C1945 + C68 * C2280) * C6897 -
                      (C272 * C1942 + C68 * C2278) * C6904 -
                      (C272 * C1947 + C68 * C2281) * C14845) *
                         C61 * C67 * C14973) *
                        C15202 +
                    (((C272 * C387 + C68 * C690) * C6903 +
                      (C272 * C397 + C68 * C696) * C6897 -
                      (C272 * C388 + C68 * C691) * C6904 -
                      (C272 * C399 + C68 * C697) * C14845) *
                         C61 * C67 * C8919 +
                     ((C272 * C3759 + C68 * C4071) * C6904 -
                      ((C272 * C3028 + C68 * C3291) * C6897 +
                       (C272 * C3024 + C68 * C3288) * C6903) +
                      (C272 * C3761 + C68 * C4072) * C14845) *
                         C61 * C67 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C15220 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C15213 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C15200 -
                     ((C272 * C123 + C68 * C308) * C14875 +
                      (C272 * C80 + C68 * C276) * C119) *
                         C61 * C67 * C15183) *
                        C8919 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C15213 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C15220 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C15200 +
                     ((C272 * C1601 + C68 * C1819) * C119 +
                      (C272 * C1639 + C68 * C1855) * C14875) *
                         C61 * C67 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C446 +
                      (C272 * C120 + C68 * C305) * C15214 -
                      (C272 * C385 + C68 * C688) * C447 -
                      (C272 * C449 + C68 * C737) * C15202 +
                      (C272 * C387 + C68 * C690) * C448 +
                      (C272 * C450 + C68 * C738) * C15179) *
                         C61 * C67 * C6897 +
                     ((C272 * C384 + C68 * C687) * C447 -
                      ((C272 * C121 + C68 * C306) * C15214 +
                       (C272 * C78 + C68 * C274) * C446) +
                      (C272 * C451 + C68 * C739) * C15202 -
                      (C272 * C388 + C68 * C691) * C448 -
                      (C272 * C452 + C68 * C740) * C15179) *
                         C61 * C67 * C14845) *
                        C8919 +
                    (((C272 * C1941 + C68 * C2277) * C447 -
                      ((C272 * C891 + C68 * C1182) * C15214 +
                       (C272 * C829 + C68 * C1132) * C446) +
                      (C272 * C2003 + C68 * C2333) * C15202 -
                      (C272 * C3024 + C68 * C3288) * C448 -
                      (C272 * C3073 + C68 * C3331) * C15179) *
                         C61 * C67 * C6897 +
                     ((C272 * C828 + C68 * C1131) * C446 +
                      (C272 * C890 + C68 * C1181) * C15214 -
                      (C272 * C1942 + C68 * C2278) * C447 -
                      (C272 * C2004 + C68 * C2334) * C15202 +
                      (C272 * C3759 + C68 * C4071) * C448 +
                      (C272 * C3813 + C68 * C4123) * C15179) *
                         C61 * C67 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C8989 +
                     (C272 * C153 + C68 * C332) * C8919 -
                     (C272 * C829 + C68 * C1132) * C8990 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C14875 * C15220 +
                    ((C272 * C828 + C68 * C1131) * C8990 -
                     ((C272 * C154 + C68 * C333) * C8919 +
                      (C272 * C78 + C68 * C274) * C8989) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C14875 * C15213 +
                    ((C272 * C79 + C68 * C275) * C8989 +
                     (C272 * C155 + C68 * C334) * C8919 -
                     (C272 * C830 + C68 * C1133) * C8990 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C14875 * C15200 +
                    ((C272 * C1601 + C68 * C1819) * C8990 -
                     ((C272 * C156 + C68 * C335) * C8919 +
                      (C272 * C80 + C68 * C276) * C8989) +
                     (C272 * C1677 + C68 * C1890) * C14973) *
                        C61 * C67 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C8989 +
                      (C272 * C153 + C68 * C332) * C8919 -
                      (C272 * C829 + C68 * C1132) * C8990 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C15214 +
                     ((C272 * C1941 + C68 * C2277) * C8990 -
                      ((C272 * C499 + C68 * C781) * C8919 +
                       (C272 * C385 + C68 * C688) * C8989) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C15202 +
                     ((C272 * C387 + C68 * C690) * C8989 +
                      (C272 * C500 + C68 * C782) * C8919 -
                      (C272 * C3024 + C68 * C3288) * C8990 -
                      (C272 * C3118 + C68 * C3373) * C14973) *
                         C61 * C67 * C15179) *
                        C6897 +
                    (((C272 * C828 + C68 * C1131) * C8990 -
                      ((C272 * C154 + C68 * C333) * C8919 +
                       (C272 * C78 + C68 * C274) * C8989) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C15214 +
                     ((C272 * C384 + C68 * C687) * C8989 +
                      (C272 * C501 + C68 * C783) * C8919 -
                      (C272 * C1942 + C68 * C2278) * C8990 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C15202 +
                     ((C272 * C3759 + C68 * C4071) * C8990 -
                      ((C272 * C502 + C68 * C784) * C8919 +
                       (C272 * C388 + C68 * C691) * C8989) +
                      (C272 * C3865 + C68 * C4174) * C14973) *
                         C61 * C67 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1271 + (C71 * C83 + C61 * C92) * C1265 -
           (C71 * C78 + C61 * C84) * C1272 - (C71 * C85 + C61 * C93) * C1266 +
           (C71 * C79 + C61 * C86) * C1273 + (C71 * C87 + C61 * C94) * C1267 -
           (C71 * C80 + C61 * C88) * C1274 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C14886 * C15153 +
          ((C71 * C384 + C61 * C390) * C1272 -
           ((C71 * C391 + C61 * C402) * C1265 +
            (C71 * C385 + C61 * C392) * C1271) +
           (C71 * C393 + C61 * C403) * C1266 -
           (C71 * C386 + C61 * C394) * C1273 -
           (C71 * C395 + C61 * C404) * C1267 +
           (C71 * C1275 + C61 * C1276) * C1274 +
           (C71 * C1277 + C61 * C1278) * C15183) *
              C67 * C68 * C14886 * C14933)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C13575 + (C71 * C83 + C61 * C92) * C15139 -
           (C71 * C78 + C61 * C84) * C13556 -
           (C71 * C85 + C61 * C93) * C14845) *
              C67 * C68 * C14886 * C3411 +
          ((C71 * C384 + C61 * C390) * C13556 -
           ((C71 * C391 + C61 * C402) * C15139 +
            (C71 * C385 + C61 * C392) * C13575) +
           (C71 * C393 + C61 * C403) * C14845) *
              C67 * C68 * C14886 * C3412 +
          ((C71 * C387 + C61 * C396) * C13575 +
           (C71 * C397 + C61 * C405) * C15139 -
           (C71 * C388 + C61 * C398) * C13556 -
           (C71 * C399 + C61 * C406) * C14845) *
              C67 * C68 * C14886 * C3413 +
          ((C71 * C3417 + C61 * C3418) * C13556 -
           ((C71 * C2774 + C61 * C2778) * C15139 +
            (C71 * C2772 + C61 * C2775) * C13575) +
           (C71 * C3419 + C61 * C3420) * C14845) *
              C67 * C68 * C14886 * C15189)) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1313 +
           (C71 * C120 + C61 * C125) * C15153 -
           (C71 * C385 + C61 * C392) * C1314 -
           (C71 * C449 + C61 * C455) * C14933) *
              C67 * C68 * C1265 +
          ((C71 * C384 + C61 * C390) * C1314 -
           ((C71 * C121 + C61 * C126) * C15153 +
            (C71 * C78 + C61 * C84) * C1313) +
           (C71 * C451 + C61 * C457) * C14933) *
              C67 * C68 * C1266 +
          ((C71 * C79 + C61 * C86) * C1313 +
           (C71 * C122 + C61 * C127) * C15153 -
           (C71 * C386 + C61 * C394) * C1314 -
           (C71 * C453 + C61 * C459) * C14933) *
              C67 * C68 * C1267 +
          ((C71 * C1275 + C61 * C1276) * C1314 -
           ((C71 * C123 + C61 * C128) * C15153 +
            (C71 * C80 + C61 * C88) * C1313) +
           (C71 * C1315 + C61 * C1316) * C14933) *
              C67 * C68 * C15183) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C3455 + (C71 * C120 + C61 * C125) * C3411 -
           (C71 * C385 + C61 * C392) * C3456 -
           (C71 * C449 + C61 * C455) * C3412 +
           (C71 * C387 + C61 * C396) * C3457 +
           (C71 * C450 + C61 * C456) * C3413 -
           (C71 * C2772 + C61 * C2775) * C3458 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C15139 +
          ((C71 * C384 + C61 * C390) * C3456 -
           ((C71 * C121 + C61 * C126) * C3411 +
            (C71 * C78 + C61 * C84) * C3455) +
           (C71 * C451 + C61 * C457) * C3412 -
           (C71 * C388 + C61 * C398) * C3457 -
           (C71 * C452 + C61 * C458) * C3413 +
           (C71 * C3417 + C61 * C3418) * C3458 +
           (C71 * C3459 + C61 * C3460) * C15189) *
              C67 * C68 * C14845) *
         C14886) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C152 +
                      (C71 * C153 + C61 * C158) * C14886) *
                         C67 * C68 * C15153 -
                     ((C71 * C499 + C61 * C505) * C14886 +
                      (C71 * C385 + C61 * C392) * C152) *
                         C67 * C68 * C14933) *
                        C1265 +
                    (((C71 * C384 + C61 * C390) * C152 +
                      (C71 * C501 + C61 * C507) * C14886) *
                         C67 * C68 * C14933 -
                     ((C71 * C154 + C61 * C159) * C14886 +
                      (C71 * C78 + C61 * C84) * C152) *
                         C67 * C68 * C15153) *
                        C1266 +
                    (((C71 * C79 + C61 * C86) * C152 +
                      (C71 * C155 + C61 * C160) * C14886) *
                         C67 * C68 * C15153 -
                     ((C71 * C503 + C61 * C509) * C14886 +
                      (C71 * C386 + C61 * C394) * C152) *
                         C67 * C68 * C14933) *
                        C1267 +
                    (((C71 * C1275 + C61 * C1276) * C152 +
                      (C71 * C1351 + C61 * C1352) * C14886) *
                         C67 * C68 * C14933 -
                     ((C71 * C156 + C61 * C161) * C14886 +
                      (C71 * C80 + C61 * C88) * C152) *
                         C67 * C68 * C15153) *
                        C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C152 +
                      (C71 * C153 + C61 * C158) * C14886) *
                         C67 * C68 * C3411 -
                     ((C71 * C499 + C61 * C505) * C14886 +
                      (C71 * C385 + C61 * C392) * C152) *
                         C67 * C68 * C3412 +
                     ((C71 * C387 + C61 * C396) * C152 +
                      (C71 * C500 + C61 * C506) * C14886) *
                         C67 * C68 * C3413 -
                     ((C71 * C2833 + C61 * C2835) * C14886 +
                      (C71 * C2772 + C61 * C2775) * C152) *
                         C67 * C68 * C15189) *
                        C15139 +
                    (((C71 * C384 + C61 * C390) * C152 +
                      (C71 * C501 + C61 * C507) * C14886) *
                         C67 * C68 * C3412 -
                     ((C71 * C154 + C61 * C159) * C14886 +
                      (C71 * C78 + C61 * C84) * C152) *
                         C67 * C68 * C3411 -
                     ((C71 * C502 + C61 * C508) * C14886 +
                      (C71 * C388 + C61 * C398) * C152) *
                         C67 * C68 * C3413 +
                     ((C71 * C3417 + C61 * C3418) * C152 +
                      (C71 * C3495 + C61 * C3496) * C14886) *
                         C67 * C68 * C15189) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1271 +
                     (C185 * C83 + C67 * C191) * C1265 -
                     (C185 * C78 + C67 * C187) * C1272 -
                     (C185 * C85 + C67 * C192) * C1266 +
                     (C185 * C79 + C67 * C188) * C1273 +
                     (C185 * C87 + C67 * C193) * C1267 -
                     (C185 * C80 + C67 * C189) * C1274 -
                     (C185 * C89 + C67 * C194) * C15183) *
                        C68 * C61 * C14886 * C15153 +
                    ((C185 * C384 + C67 * C549) * C1272 -
                     ((C185 * C391 + C67 * C555) * C1265 +
                      (C185 * C385 + C67 * C550) * C1271) +
                     (C185 * C393 + C67 * C556) * C1266 -
                     (C185 * C386 + C67 * C551) * C1273 -
                     (C185 * C395 + C67 * C557) * C1267 +
                     (C185 * C1275 + C67 * C1387) * C1274 +
                     (C185 * C1277 + C67 * C1388) * C15183) *
                        C68 * C61 * C14886 * C14933)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C13575 +
                     (C185 * C83 + C67 * C191) * C15139 -
                     (C185 * C78 + C67 * C187) * C13556 -
                     (C185 * C85 + C67 * C192) * C14845) *
                        C68 * C61 * C14886 * C3411 +
                    ((C185 * C384 + C67 * C549) * C13556 -
                     ((C185 * C391 + C67 * C555) * C15139 +
                      (C185 * C385 + C67 * C550) * C13575) +
                     (C185 * C393 + C67 * C556) * C14845) *
                        C68 * C61 * C14886 * C3412 +
                    ((C185 * C387 + C67 * C552) * C13575 +
                     (C185 * C397 + C67 * C558) * C15139 -
                     (C185 * C388 + C67 * C553) * C13556 -
                     (C185 * C399 + C67 * C559) * C14845) *
                        C68 * C61 * C14886 * C3413 +
                    ((C185 * C3417 + C67 * C3531) * C13556 -
                     ((C185 * C2774 + C67 * C2861) * C15139 +
                      (C185 * C2772 + C67 * C2859) * C13575) +
                     (C185 * C3419 + C67 * C3532) * C14845) *
                        C68 * C61 * C14886 * C15189)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1313 +
                     (C185 * C120 + C67 * C218) * C15153 -
                     (C185 * C385 + C67 * C550) * C1314 -
                     (C185 * C449 + C67 * C599) * C14933) *
                        C68 * C61 * C1265 +
                    ((C185 * C384 + C67 * C549) * C1314 -
                     ((C185 * C121 + C67 * C219) * C15153 +
                      (C185 * C78 + C67 * C187) * C1313) +
                     (C185 * C451 + C67 * C601) * C14933) *
                        C68 * C61 * C1266 +
                    ((C185 * C79 + C67 * C188) * C1313 +
                     (C185 * C122 + C67 * C220) * C15153 -
                     (C185 * C386 + C67 * C551) * C1314 -
                     (C185 * C453 + C67 * C603) * C14933) *
                        C68 * C61 * C1267 +
                    ((C185 * C1275 + C67 * C1387) * C1314 -
                     ((C185 * C123 + C67 * C221) * C15153 +
                      (C185 * C80 + C67 * C189) * C1313) +
                     (C185 * C1315 + C67 * C1423) * C14933) *
                        C68 * C61 * C15183) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C3455 +
                     (C185 * C120 + C67 * C218) * C3411 -
                     (C185 * C385 + C67 * C550) * C3456 -
                     (C185 * C449 + C67 * C599) * C3412 +
                     (C185 * C387 + C67 * C552) * C3457 +
                     (C185 * C450 + C67 * C600) * C3413 -
                     (C185 * C2772 + C67 * C2859) * C3458 -
                     (C185 * C2807 + C67 * C2885) * C15189) *
                        C68 * C61 * C15139 +
                    ((C185 * C384 + C67 * C549) * C3456 -
                     ((C185 * C121 + C67 * C219) * C3411 +
                      (C185 * C78 + C67 * C187) * C3455) +
                     (C185 * C451 + C67 * C601) * C3412 -
                     (C185 * C388 + C67 * C553) * C3457 -
                     (C185 * C452 + C67 * C602) * C3413 +
                     (C185 * C3417 + C67 * C3531) * C3458 +
                     (C185 * C3459 + C67 * C3567) * C15189) *
                        C68 * C61 * C14845) *
                   C14886) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C15153 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C14933) *
                        C1265 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C14933 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C15153) *
                        C1266 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C15153 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C14933) *
                        C1267 +
                    (((C185 * C1275 + C67 * C1387) * C152 +
                      (C185 * C1351 + C67 * C1458) * C14886) *
                         C68 * C61 * C14933 -
                     ((C185 * C156 + C67 * C248) * C14886 +
                      (C185 * C80 + C67 * C189) * C152) *
                         C68 * C61 * C15153) *
                        C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C3411 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C3412 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C3413 -
                     ((C185 * C2833 + C67 * C2909) * C14886 +
                      (C185 * C2772 + C67 * C2859) * C152) *
                         C68 * C61 * C15189) *
                        C15139 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C3412 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C3411 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C3413 +
                     ((C185 * C3417 + C67 * C3531) * C152 +
                      (C185 * C3495 + C67 * C3602) * C14886) *
                         C68 * C61 * C15189) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1271 +
                     (C272 * C83 + C68 * C278) * C1265 -
                     (C272 * C78 + C68 * C274) * C1272 -
                     (C272 * C85 + C68 * C279) * C1266 +
                     (C272 * C79 + C68 * C275) * C1273 +
                     (C272 * C87 + C68 * C280) * C1267 -
                     (C272 * C80 + C68 * C276) * C1274 -
                     (C272 * C89 + C68 * C281) * C15183) *
                        C61 * C67 * C14886 * C15153 +
                    ((C272 * C384 + C68 * C687) * C1272 -
                     ((C272 * C391 + C68 * C693) * C1265 +
                      (C272 * C385 + C68 * C688) * C1271) +
                     (C272 * C393 + C68 * C694) * C1266 -
                     (C272 * C386 + C68 * C689) * C1273 -
                     (C272 * C395 + C68 * C695) * C1267 +
                     (C272 * C1275 + C68 * C1493) * C1274 +
                     (C272 * C1277 + C68 * C1494) * C15183) *
                        C61 * C67 * C14886 * C14933)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C13575 +
                     (C272 * C83 + C68 * C278) * C15139 -
                     (C272 * C78 + C68 * C274) * C13556 -
                     (C272 * C85 + C68 * C279) * C14845) *
                        C61 * C67 * C14886 * C3411 +
                    ((C272 * C384 + C68 * C687) * C13556 -
                     ((C272 * C391 + C68 * C693) * C15139 +
                      (C272 * C385 + C68 * C688) * C13575) +
                     (C272 * C393 + C68 * C694) * C14845) *
                        C61 * C67 * C14886 * C3412 +
                    ((C272 * C387 + C68 * C690) * C13575 +
                     (C272 * C397 + C68 * C696) * C15139 -
                     (C272 * C388 + C68 * C691) * C13556 -
                     (C272 * C399 + C68 * C697) * C14845) *
                        C61 * C67 * C14886 * C3413 +
                    ((C272 * C3417 + C68 * C3637) * C13556 -
                     ((C272 * C2774 + C68 * C2935) * C15139 +
                      (C272 * C2772 + C68 * C2933) * C13575) +
                     (C272 * C3419 + C68 * C3638) * C14845) *
                        C61 * C67 * C14886 * C15189)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1313 +
                     (C272 * C120 + C68 * C305) * C15153 -
                     (C272 * C385 + C68 * C688) * C1314 -
                     (C272 * C449 + C68 * C737) * C14933) *
                        C61 * C67 * C1265 +
                    ((C272 * C384 + C68 * C687) * C1314 -
                     ((C272 * C121 + C68 * C306) * C15153 +
                      (C272 * C78 + C68 * C274) * C1313) +
                     (C272 * C451 + C68 * C739) * C14933) *
                        C61 * C67 * C1266 +
                    ((C272 * C79 + C68 * C275) * C1313 +
                     (C272 * C122 + C68 * C307) * C15153 -
                     (C272 * C386 + C68 * C689) * C1314 -
                     (C272 * C453 + C68 * C741) * C14933) *
                        C61 * C67 * C1267 +
                    ((C272 * C1275 + C68 * C1493) * C1314 -
                     ((C272 * C123 + C68 * C308) * C15153 +
                      (C272 * C80 + C68 * C276) * C1313) +
                     (C272 * C1315 + C68 * C1529) * C14933) *
                        C61 * C67 * C15183) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C3455 +
                     (C272 * C120 + C68 * C305) * C3411 -
                     (C272 * C385 + C68 * C688) * C3456 -
                     (C272 * C449 + C68 * C737) * C3412 +
                     (C272 * C387 + C68 * C690) * C3457 +
                     (C272 * C450 + C68 * C738) * C3413 -
                     (C272 * C2772 + C68 * C2933) * C3458 -
                     (C272 * C2807 + C68 * C2959) * C15189) *
                        C61 * C67 * C15139 +
                    ((C272 * C384 + C68 * C687) * C3456 -
                     ((C272 * C121 + C68 * C306) * C3411 +
                      (C272 * C78 + C68 * C274) * C3455) +
                     (C272 * C451 + C68 * C739) * C3412 -
                     (C272 * C388 + C68 * C691) * C3457 -
                     (C272 * C452 + C68 * C740) * C3413 +
                     (C272 * C3417 + C68 * C3637) * C3458 +
                     (C272 * C3459 + C68 * C3673) * C15189) *
                        C61 * C67 * C14845) *
                   C14886) /
                      (p * q * std::sqrt(p + q));
    d2eezz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C15153 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C14933) *
                        C1265 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C14933 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C15153) *
                        C1266 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C15153 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C14933) *
                        C1267 +
                    (((C272 * C1275 + C68 * C1493) * C152 +
                      (C272 * C1351 + C68 * C1564) * C14886) *
                         C61 * C67 * C14933 -
                     ((C272 * C156 + C68 * C335) * C14886 +
                      (C272 * C80 + C68 * C276) * C152) *
                         C61 * C67 * C15153) *
                        C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C3411 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C3412 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C3413 -
                     ((C272 * C2833 + C68 * C2983) * C14886 +
                      (C272 * C2772 + C68 * C2933) * C152) *
                         C61 * C67 * C15189) *
                        C15139 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C3412 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C3411 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C3413 +
                     ((C272 * C3417 + C68 * C3637) * C152 +
                      (C272 * C3495 + C68 * C3708) * C14886) *
                         C61 * C67 * C15189) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
            (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
            (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
               C67 * C68 * C15154 +
           ((C71 * C828 + C61 * C834) * C382 -
            ((C71 * C835 + C61 * C846) * C375 +
             (C71 * C829 + C61 * C836) * C381) +
            (C71 * C837 + C61 * C847) * C376 -
            (C71 * C830 + C61 * C838) * C383 -
            (C71 * C839 + C61 * C848) * C15173) *
               C67 * C68 * C14973) *
              C15153 +
          (((C71 * C384 + C61 * C390) * C382 -
            ((C71 * C391 + C61 * C402) * C375 +
             (C71 * C385 + C61 * C392) * C381) +
            (C71 * C393 + C61 * C403) * C376 -
            (C71 * C386 + C61 * C394) * C383 -
            (C71 * C395 + C61 * C404) * C15173) *
               C67 * C68 * C15154 +
           ((C71 * C1941 + C61 * C1944) * C381 +
            (C71 * C1945 + C61 * C1950) * C375 -
            (C71 * C1942 + C61 * C1946) * C382 -
            (C71 * C1947 + C61 * C1951) * C376 +
            (C71 * C1943 + C61 * C1948) * C383 +
            (C71 * C1949 + C61 * C1952) * C15173) *
               C67 * C68 * C14973) *
              C14933)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C15154 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C14973) *
              C3411 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C15154) *
              C3412 +
          (((C71 * C387 + C61 * C396) * C2771 +
            (C71 * C397 + C61 * C405) * C14835) *
               C67 * C68 * C15154 -
           ((C71 * C3028 + C61 * C3033) * C14835 +
            (C71 * C3024 + C61 * C3029) * C2771) *
               C67 * C68 * C14973) *
              C3413 +
          (((C71 * C4209 + C61 * C4210) * C2771 +
            (C71 * C4211 + C61 * C4212) * C14835) *
               C67 * C68 * C14973 -
           ((C71 * C2774 + C61 * C2778) * C14835 +
            (C71 * C2772 + C61 * C2775) * C2771) *
               C67 * C68 * C15154) *
              C15189)) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C1313 +
            (C71 * C120 + C61 * C125) * C15153 -
            (C71 * C385 + C61 * C392) * C1314 -
            (C71 * C449 + C61 * C455) * C14933) *
               C67 * C68 * C375 +
           ((C71 * C384 + C61 * C390) * C1314 -
            ((C71 * C121 + C61 * C126) * C15153 +
             (C71 * C78 + C61 * C84) * C1313) +
            (C71 * C451 + C61 * C457) * C14933) *
               C67 * C68 * C376 +
           ((C71 * C79 + C61 * C86) * C1313 +
            (C71 * C122 + C61 * C127) * C15153 -
            (C71 * C386 + C61 * C394) * C1314 -
            (C71 * C453 + C61 * C459) * C14933) *
               C67 * C68 * C15173) *
              C15154 +
          (((C71 * C1941 + C61 * C1944) * C1314 -
            ((C71 * C891 + C61 * C897) * C15153 +
             (C71 * C829 + C61 * C836) * C1313) +
            (C71 * C2003 + C61 * C2006) * C14933) *
               C67 * C68 * C375 +
           ((C71 * C828 + C61 * C834) * C1313 +
            (C71 * C890 + C61 * C896) * C15153 -
            (C71 * C1942 + C61 * C1946) * C1314 -
            (C71 * C2004 + C61 * C2007) * C14933) *
               C67 * C68 * C376 +
           ((C71 * C1943 + C61 * C1948) * C1314 -
            ((C71 * C892 + C61 * C898) * C15153 +
             (C71 * C830 + C61 * C838) * C1313) +
            (C71 * C2005 + C61 * C2008) * C14933) *
               C67 * C68 * C15173) *
              C14973)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C3455 + (C71 * C120 + C61 * C125) * C3411 -
           (C71 * C385 + C61 * C392) * C3456 -
           (C71 * C449 + C61 * C455) * C3412 +
           (C71 * C387 + C61 * C396) * C3457 +
           (C71 * C450 + C61 * C456) * C3413 -
           (C71 * C2772 + C61 * C2775) * C3458 -
           (C71 * C2807 + C61 * C2809) * C15189) *
              C67 * C68 * C14835 * C15154 +
          ((C71 * C1941 + C61 * C1944) * C3456 -
           ((C71 * C891 + C61 * C897) * C3411 +
            (C71 * C829 + C61 * C836) * C3455) +
           (C71 * C2003 + C61 * C2006) * C3412 -
           (C71 * C3024 + C61 * C3029) * C3457 -
           (C71 * C3073 + C61 * C3076) * C3413 +
           (C71 * C4209 + C61 * C4210) * C3458 +
           (C71 * C4247 + C61 * C4248) * C15189) *
              C67 * C68 * C14835 * C14973)) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C1675 +
                      (C71 * C153 + C61 * C158) * C15154 -
                      (C71 * C829 + C61 * C836) * C1676 -
                      (C71 * C943 + C61 * C949) * C14973) *
                         C67 * C68 * C15153 +
                     ((C71 * C1941 + C61 * C1944) * C1676 -
                      ((C71 * C499 + C61 * C505) * C15154 +
                       (C71 * C385 + C61 * C392) * C1675) +
                      (C71 * C2059 + C61 * C2062) * C14973) *
                         C67 * C68 * C14933) *
                        C375 +
                    (((C71 * C828 + C61 * C834) * C1676 -
                      ((C71 * C154 + C61 * C159) * C15154 +
                       (C71 * C78 + C61 * C84) * C1675) +
                      (C71 * C945 + C61 * C951) * C14973) *
                         C67 * C68 * C15153 +
                     ((C71 * C384 + C61 * C390) * C1675 +
                      (C71 * C501 + C61 * C507) * C15154 -
                      (C71 * C1942 + C61 * C1946) * C1676 -
                      (C71 * C2060 + C61 * C2063) * C14973) *
                         C67 * C68 * C14933) *
                        C376 +
                    (((C71 * C79 + C61 * C86) * C1675 +
                      (C71 * C155 + C61 * C160) * C15154 -
                      (C71 * C830 + C61 * C838) * C1676 -
                      (C71 * C947 + C61 * C953) * C14973) *
                         C67 * C68 * C15153 +
                     ((C71 * C1943 + C61 * C1948) * C1676 -
                      ((C71 * C503 + C61 * C509) * C15154 +
                       (C71 * C386 + C61 * C394) * C1675) +
                      (C71 * C2061 + C61 * C2064) * C14973) *
                         C67 * C68 * C14933) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C77 + C61 * C82) * C1675 +
                     (C71 * C153 + C61 * C158) * C15154 -
                     (C71 * C829 + C61 * C836) * C1676 -
                     (C71 * C943 + C61 * C949) * C14973) *
                        C67 * C68 * C3411 +
                    ((C71 * C1941 + C61 * C1944) * C1676 -
                     ((C71 * C499 + C61 * C505) * C15154 +
                      (C71 * C385 + C61 * C392) * C1675) +
                     (C71 * C2059 + C61 * C2062) * C14973) *
                        C67 * C68 * C3412 +
                    ((C71 * C387 + C61 * C396) * C1675 +
                     (C71 * C500 + C61 * C506) * C15154 -
                     (C71 * C3024 + C61 * C3029) * C1676 -
                     (C71 * C3118 + C61 * C3121) * C14973) *
                        C67 * C68 * C3413 +
                    ((C71 * C4209 + C61 * C4210) * C1676 -
                     ((C71 * C2833 + C61 * C2835) * C15154 +
                      (C71 * C2772 + C61 * C2775) * C1675) +
                     (C71 * C4283 + C61 * C4284) * C14973) *
                        C67 * C68 * C15189) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C381 +
                      (C185 * C83 + C67 * C191) * C375 -
                      (C185 * C78 + C67 * C187) * C382 -
                      (C185 * C85 + C67 * C192) * C376 +
                      (C185 * C79 + C67 * C188) * C383 +
                      (C185 * C87 + C67 * C193) * C15173) *
                         C68 * C61 * C15154 +
                     ((C185 * C828 + C67 * C993) * C382 -
                      ((C185 * C835 + C67 * C999) * C375 +
                       (C185 * C829 + C67 * C994) * C381) +
                      (C185 * C837 + C67 * C1000) * C376 -
                      (C185 * C830 + C67 * C995) * C383 -
                      (C185 * C839 + C67 * C1001) * C15173) *
                         C68 * C61 * C14973) *
                        C15153 +
                    (((C185 * C384 + C67 * C549) * C382 -
                      ((C185 * C391 + C67 * C555) * C375 +
                       (C185 * C385 + C67 * C550) * C381) +
                      (C185 * C393 + C67 * C556) * C376 -
                      (C185 * C386 + C67 * C551) * C383 -
                      (C185 * C395 + C67 * C557) * C15173) *
                         C68 * C61 * C15154 +
                     ((C185 * C1941 + C67 * C2115) * C381 +
                      (C185 * C1945 + C67 * C2118) * C375 -
                      (C185 * C1942 + C67 * C2116) * C382 -
                      (C185 * C1947 + C67 * C2119) * C376 +
                      (C185 * C1943 + C67 * C2117) * C383 +
                      (C185 * C1949 + C67 * C2120) * C15173) *
                         C68 * C61 * C14973) *
                        C14933)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C2771 +
                      (C185 * C83 + C67 * C191) * C14835) *
                         C68 * C61 * C15154 -
                     ((C185 * C835 + C67 * C999) * C14835 +
                      (C185 * C829 + C67 * C994) * C2771) *
                         C68 * C61 * C14973) *
                        C3411 +
                    (((C185 * C1941 + C67 * C2115) * C2771 +
                      (C185 * C1945 + C67 * C2118) * C14835) *
                         C68 * C61 * C14973 -
                     ((C185 * C391 + C67 * C555) * C14835 +
                      (C185 * C385 + C67 * C550) * C2771) *
                         C68 * C61 * C15154) *
                        C3412 +
                    (((C185 * C387 + C67 * C552) * C2771 +
                      (C185 * C397 + C67 * C558) * C14835) *
                         C68 * C61 * C15154 -
                     ((C185 * C3028 + C67 * C3165) * C14835 +
                      (C185 * C3024 + C67 * C3162) * C2771) *
                         C68 * C61 * C14973) *
                        C3413 +
                    (((C185 * C4209 + C67 * C4319) * C2771 +
                      (C185 * C4211 + C67 * C4320) * C14835) *
                         C68 * C61 * C14973 -
                     ((C185 * C2774 + C67 * C2861) * C14835 +
                      (C185 * C2772 + C67 * C2859) * C2771) *
                         C68 * C61 * C15154) *
                        C15189)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1313 +
                      (C185 * C120 + C67 * C218) * C15153 -
                      (C185 * C385 + C67 * C550) * C1314 -
                      (C185 * C449 + C67 * C599) * C14933) *
                         C68 * C61 * C375 +
                     ((C185 * C384 + C67 * C549) * C1314 -
                      ((C185 * C121 + C67 * C219) * C15153 +
                       (C185 * C78 + C67 * C187) * C1313) +
                      (C185 * C451 + C67 * C601) * C14933) *
                         C68 * C61 * C376 +
                     ((C185 * C79 + C67 * C188) * C1313 +
                      (C185 * C122 + C67 * C220) * C15153 -
                      (C185 * C386 + C67 * C551) * C1314 -
                      (C185 * C453 + C67 * C603) * C14933) *
                         C68 * C61 * C15173) *
                        C15154 +
                    (((C185 * C1941 + C67 * C2115) * C1314 -
                      ((C185 * C891 + C67 * C1044) * C15153 +
                       (C185 * C829 + C67 * C994) * C1313) +
                      (C185 * C2003 + C67 * C2171) * C14933) *
                         C68 * C61 * C375 +
                     ((C185 * C828 + C67 * C993) * C1313 +
                      (C185 * C890 + C67 * C1043) * C15153 -
                      (C185 * C1942 + C67 * C2116) * C1314 -
                      (C185 * C2004 + C67 * C2172) * C14933) *
                         C68 * C61 * C376 +
                     ((C185 * C1943 + C67 * C2117) * C1314 -
                      ((C185 * C892 + C67 * C1045) * C15153 +
                       (C185 * C830 + C67 * C995) * C1313) +
                      (C185 * C2005 + C67 * C2173) * C14933) *
                         C68 * C61 * C15173) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C3455 +
                     (C185 * C120 + C67 * C218) * C3411 -
                     (C185 * C385 + C67 * C550) * C3456 -
                     (C185 * C449 + C67 * C599) * C3412 +
                     (C185 * C387 + C67 * C552) * C3457 +
                     (C185 * C450 + C67 * C600) * C3413 -
                     (C185 * C2772 + C67 * C2859) * C3458 -
                     (C185 * C2807 + C67 * C2885) * C15189) *
                        C68 * C61 * C14835 * C15154 +
                    ((C185 * C1941 + C67 * C2115) * C3456 -
                     ((C185 * C891 + C67 * C1044) * C3411 +
                      (C185 * C829 + C67 * C994) * C3455) +
                     (C185 * C2003 + C67 * C2171) * C3412 -
                     (C185 * C3024 + C67 * C3162) * C3457 -
                     (C185 * C3073 + C67 * C3205) * C3413 +
                     (C185 * C4209 + C67 * C4319) * C3458 +
                     (C185 * C4247 + C67 * C4355) * C15189) *
                        C68 * C61 * C14835 * C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1675 +
                      (C185 * C153 + C67 * C245) * C15154 -
                      (C185 * C829 + C67 * C994) * C1676 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C1941 + C67 * C2115) * C1676 -
                      ((C185 * C499 + C67 * C643) * C15154 +
                       (C185 * C385 + C67 * C550) * C1675) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C14933) *
                        C375 +
                    (((C185 * C828 + C67 * C993) * C1676 -
                      ((C185 * C154 + C67 * C246) * C15154 +
                       (C185 * C78 + C67 * C187) * C1675) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C384 + C67 * C549) * C1675 +
                      (C185 * C501 + C67 * C645) * C15154 -
                      (C185 * C1942 + C67 * C2116) * C1676 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C14933) *
                        C376 +
                    (((C185 * C79 + C67 * C188) * C1675 +
                      (C185 * C155 + C67 * C247) * C15154 -
                      (C185 * C830 + C67 * C995) * C1676 -
                      (C185 * C947 + C67 * C1091) * C14973) *
                         C68 * C61 * C15153 +
                     ((C185 * C1943 + C67 * C2117) * C1676 -
                      ((C185 * C503 + C67 * C647) * C15154 +
                       (C185 * C386 + C67 * C551) * C1675) +
                      (C185 * C2061 + C67 * C2226) * C14973) *
                         C68 * C61 * C14933) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1675 +
                     (C185 * C153 + C67 * C245) * C15154 -
                     (C185 * C829 + C67 * C994) * C1676 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C3411 +
                    ((C185 * C1941 + C67 * C2115) * C1676 -
                     ((C185 * C499 + C67 * C643) * C15154 +
                      (C185 * C385 + C67 * C550) * C1675) +
                     (C185 * C2059 + C67 * C2224) * C14973) *
                        C68 * C61 * C3412 +
                    ((C185 * C387 + C67 * C552) * C1675 +
                     (C185 * C500 + C67 * C644) * C15154 -
                     (C185 * C3024 + C67 * C3162) * C1676 -
                     (C185 * C3118 + C67 * C3247) * C14973) *
                        C68 * C61 * C3413 +
                    ((C185 * C4209 + C67 * C4319) * C1676 -
                     ((C185 * C2833 + C67 * C2909) * C15154 +
                      (C185 * C2772 + C67 * C2859) * C1675) +
                     (C185 * C4283 + C67 * C4390) * C14973) *
                        C68 * C61 * C15189) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eezx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C381 +
                      (C272 * C83 + C68 * C278) * C375 -
                      (C272 * C78 + C68 * C274) * C382 -
                      (C272 * C85 + C68 * C279) * C376 +
                      (C272 * C79 + C68 * C275) * C383 +
                      (C272 * C87 + C68 * C280) * C15173) *
                         C61 * C67 * C15154 +
                     ((C272 * C828 + C68 * C1131) * C382 -
                      ((C272 * C835 + C68 * C1137) * C375 +
                       (C272 * C829 + C68 * C1132) * C381) +
                      (C272 * C837 + C68 * C1138) * C376 -
                      (C272 * C830 + C68 * C1133) * C383 -
                      (C272 * C839 + C68 * C1139) * C15173) *
                         C61 * C67 * C14973) *
                        C15153 +
                    (((C272 * C384 + C68 * C687) * C382 -
                      ((C272 * C391 + C68 * C693) * C375 +
                       (C272 * C385 + C68 * C688) * C381) +
                      (C272 * C393 + C68 * C694) * C376 -
                      (C272 * C386 + C68 * C689) * C383 -
                      (C272 * C395 + C68 * C695) * C15173) *
                         C61 * C67 * C15154 +
                     ((C272 * C1941 + C68 * C2277) * C381 +
                      (C272 * C1945 + C68 * C2280) * C375 -
                      (C272 * C1942 + C68 * C2278) * C382 -
                      (C272 * C1947 + C68 * C2281) * C376 +
                      (C272 * C1943 + C68 * C2279) * C383 +
                      (C272 * C1949 + C68 * C2282) * C15173) *
                         C61 * C67 * C14973) *
                        C14933)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C2771 +
                      (C272 * C83 + C68 * C278) * C14835) *
                         C61 * C67 * C15154 -
                     ((C272 * C835 + C68 * C1137) * C14835 +
                      (C272 * C829 + C68 * C1132) * C2771) *
                         C61 * C67 * C14973) *
                        C3411 +
                    (((C272 * C1941 + C68 * C2277) * C2771 +
                      (C272 * C1945 + C68 * C2280) * C14835) *
                         C61 * C67 * C14973 -
                     ((C272 * C391 + C68 * C693) * C14835 +
                      (C272 * C385 + C68 * C688) * C2771) *
                         C61 * C67 * C15154) *
                        C3412 +
                    (((C272 * C387 + C68 * C690) * C2771 +
                      (C272 * C397 + C68 * C696) * C14835) *
                         C61 * C67 * C15154 -
                     ((C272 * C3028 + C68 * C3291) * C14835 +
                      (C272 * C3024 + C68 * C3288) * C2771) *
                         C61 * C67 * C14973) *
                        C3413 +
                    (((C272 * C4209 + C68 * C4425) * C2771 +
                      (C272 * C4211 + C68 * C4426) * C14835) *
                         C61 * C67 * C14973 -
                     ((C272 * C2774 + C68 * C2935) * C14835 +
                      (C272 * C2772 + C68 * C2933) * C2771) *
                         C61 * C67 * C15154) *
                        C15189)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1313 +
                      (C272 * C120 + C68 * C305) * C15153 -
                      (C272 * C385 + C68 * C688) * C1314 -
                      (C272 * C449 + C68 * C737) * C14933) *
                         C61 * C67 * C375 +
                     ((C272 * C384 + C68 * C687) * C1314 -
                      ((C272 * C121 + C68 * C306) * C15153 +
                       (C272 * C78 + C68 * C274) * C1313) +
                      (C272 * C451 + C68 * C739) * C14933) *
                         C61 * C67 * C376 +
                     ((C272 * C79 + C68 * C275) * C1313 +
                      (C272 * C122 + C68 * C307) * C15153 -
                      (C272 * C386 + C68 * C689) * C1314 -
                      (C272 * C453 + C68 * C741) * C14933) *
                         C61 * C67 * C15173) *
                        C15154 +
                    (((C272 * C1941 + C68 * C2277) * C1314 -
                      ((C272 * C891 + C68 * C1182) * C15153 +
                       (C272 * C829 + C68 * C1132) * C1313) +
                      (C272 * C2003 + C68 * C2333) * C14933) *
                         C61 * C67 * C375 +
                     ((C272 * C828 + C68 * C1131) * C1313 +
                      (C272 * C890 + C68 * C1181) * C15153 -
                      (C272 * C1942 + C68 * C2278) * C1314 -
                      (C272 * C2004 + C68 * C2334) * C14933) *
                         C61 * C67 * C376 +
                     ((C272 * C1943 + C68 * C2279) * C1314 -
                      ((C272 * C892 + C68 * C1183) * C15153 +
                       (C272 * C830 + C68 * C1133) * C1313) +
                      (C272 * C2005 + C68 * C2335) * C14933) *
                         C61 * C67 * C15173) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C3455 +
                     (C272 * C120 + C68 * C305) * C3411 -
                     (C272 * C385 + C68 * C688) * C3456 -
                     (C272 * C449 + C68 * C737) * C3412 +
                     (C272 * C387 + C68 * C690) * C3457 +
                     (C272 * C450 + C68 * C738) * C3413 -
                     (C272 * C2772 + C68 * C2933) * C3458 -
                     (C272 * C2807 + C68 * C2959) * C15189) *
                        C61 * C67 * C14835 * C15154 +
                    ((C272 * C1941 + C68 * C2277) * C3456 -
                     ((C272 * C891 + C68 * C1182) * C3411 +
                      (C272 * C829 + C68 * C1132) * C3455) +
                     (C272 * C2003 + C68 * C2333) * C3412 -
                     (C272 * C3024 + C68 * C3288) * C3457 -
                     (C272 * C3073 + C68 * C3331) * C3413 +
                     (C272 * C4209 + C68 * C4425) * C3458 +
                     (C272 * C4247 + C68 * C4461) * C15189) *
                        C61 * C67 * C14835 * C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1675 +
                      (C272 * C153 + C68 * C332) * C15154 -
                      (C272 * C829 + C68 * C1132) * C1676 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C1941 + C68 * C2277) * C1676 -
                      ((C272 * C499 + C68 * C781) * C15154 +
                       (C272 * C385 + C68 * C688) * C1675) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C14933) *
                        C375 +
                    (((C272 * C828 + C68 * C1131) * C1676 -
                      ((C272 * C154 + C68 * C333) * C15154 +
                       (C272 * C78 + C68 * C274) * C1675) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C384 + C68 * C687) * C1675 +
                      (C272 * C501 + C68 * C783) * C15154 -
                      (C272 * C1942 + C68 * C2278) * C1676 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C14933) *
                        C376 +
                    (((C272 * C79 + C68 * C275) * C1675 +
                      (C272 * C155 + C68 * C334) * C15154 -
                      (C272 * C830 + C68 * C1133) * C1676 -
                      (C272 * C947 + C68 * C1229) * C14973) *
                         C61 * C67 * C15153 +
                     ((C272 * C1943 + C68 * C2279) * C1676 -
                      ((C272 * C503 + C68 * C785) * C15154 +
                       (C272 * C386 + C68 * C689) * C1675) +
                      (C272 * C2061 + C68 * C2388) * C14973) *
                         C61 * C67 * C14933) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1675 +
                     (C272 * C153 + C68 * C332) * C15154 -
                     (C272 * C829 + C68 * C1132) * C1676 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C3411 +
                    ((C272 * C1941 + C68 * C2277) * C1676 -
                     ((C272 * C499 + C68 * C781) * C15154 +
                      (C272 * C385 + C68 * C688) * C1675) +
                     (C272 * C2059 + C68 * C2386) * C14973) *
                        C61 * C67 * C3412 +
                    ((C272 * C387 + C68 * C690) * C1675 +
                     (C272 * C500 + C68 * C782) * C15154 -
                     (C272 * C3024 + C68 * C3288) * C1676 -
                     (C272 * C3118 + C68 * C3373) * C14973) *
                        C61 * C67 * C3413 +
                    ((C272 * C4209 + C68 * C4425) * C1676 -
                     ((C272 * C2833 + C68 * C2983) * C15154 +
                      (C272 * C2772 + C68 * C2933) * C1675) +
                     (C272 * C4283 + C68 * C4496) * C14973) *
                        C61 * C67 * C15189) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
           (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
           (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C15214 +
          ((C71 * C384 + C61 * C390) * C382 -
           ((C71 * C391 + C61 * C402) * C375 +
            (C71 * C385 + C61 * C392) * C381) +
           (C71 * C393 + C61 * C403) * C376 - (C71 * C386 + C61 * C394) * C383 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C15202 +
          ((C71 * C387 + C61 * C396) * C381 + (C71 * C397 + C61 * C405) * C375 -
           (C71 * C388 + C61 * C398) * C382 - (C71 * C399 + C61 * C406) * C376 +
           (C71 * C389 + C61 * C400) * C383 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C72 + (C71 * C83 + C61 * C92) * C62 -
          (C71 * C78 + C61 * C84) * C73 - (C71 * C85 + C61 * C93) * C63 +
          (C71 * C79 + C61 * C86) * C74 + (C71 * C87 + C61 * C94) * C64 -
          (C71 * C80 + C61 * C88) * C75 - (C71 * C89 + C61 * C95) * C65 +
          (C71 * C81 + C61 * C90) * C76 + (C71 * C91 + C61 * C96) * C66) *
         C67 * C68 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
           (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
           (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C15215 +
          ((C71 * C828 + C61 * C834) * C382 -
           ((C71 * C835 + C61 * C846) * C375 +
            (C71 * C829 + C61 * C836) * C381) +
           (C71 * C837 + C61 * C847) * C376 - (C71 * C830 + C61 * C838) * C383 -
           (C71 * C839 + C61 * C848) * C15173) *
              C67 * C68 * C15204 +
          ((C71 * C831 + C61 * C840) * C381 + (C71 * C841 + C61 * C849) * C375 -
           (C71 * C832 + C61 * C842) * C382 - (C71 * C843 + C61 * C850) * C376 +
           (C71 * C833 + C61 * C844) * C383 +
           (C71 * C845 + C61 * C851) * C15173) *
              C67 * C68 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
           (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
           (C71 * C79 + C61 * C86) * C2435 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C2430 +
          ((C71 * C384 + C61 * C390) * C2434 -
           ((C71 * C391 + C61 * C402) * C15211 +
            (C71 * C385 + C61 * C392) * C2433) +
           (C71 * C393 + C61 * C403) * C15198 -
           (C71 * C386 + C61 * C394) * C2435 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C2431 +
          ((C71 * C387 + C61 * C396) * C2433 +
           (C71 * C397 + C61 * C405) * C15211 -
           (C71 * C388 + C61 * C398) * C2434 -
           (C71 * C399 + C61 * C406) * C15198 +
           (C71 * C389 + C61 * C400) * C2435 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2771 + (C71 * C83 + C61 * C92) * C14835) *
              C67 * C68 * C14886 * C2766 -
          ((C71 * C391 + C61 * C402) * C14835 +
           (C71 * C385 + C61 * C392) * C2771) *
              C67 * C68 * C14886 * C2767 +
          ((C71 * C387 + C61 * C396) * C2771 +
           (C71 * C397 + C61 * C405) * C14835) *
              C67 * C68 * C14886 * C2768 -
          ((C71 * C2774 + C61 * C2778) * C14835 +
           (C71 * C2772 + C61 * C2775) * C2771) *
              C67 * C68 * C14886 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C2771 +
           (C71 * C2777 + C61 * C2779) * C14835) *
              C67 * C68 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C2771 +
            (C71 * C83 + C61 * C92) * C14835) *
               C67 * C68 * C15215 -
           ((C71 * C835 + C61 * C846) * C14835 +
            (C71 * C829 + C61 * C836) * C2771) *
               C67 * C68 * C15204 +
           ((C71 * C831 + C61 * C840) * C2771 +
            (C71 * C841 + C61 * C849) * C14835) *
               C67 * C68 * C15182) *
              C2430 +
          (((C71 * C1941 + C61 * C1944) * C2771 +
            (C71 * C1945 + C61 * C1950) * C14835) *
               C67 * C68 * C15204 -
           ((C71 * C391 + C61 * C402) * C14835 +
            (C71 * C385 + C61 * C392) * C2771) *
               C67 * C68 * C15215 -
           ((C71 * C3026 + C61 * C3032) * C14835 +
            (C71 * C3023 + C61 * C3027) * C2771) *
               C67 * C68 * C15182) *
              C2431 +
          (((C71 * C387 + C61 * C396) * C2771 +
            (C71 * C397 + C61 * C405) * C14835) *
               C67 * C68 * C15215 -
           ((C71 * C3028 + C61 * C3033) * C14835 +
            (C71 * C3024 + C61 * C3029) * C2771) *
               C67 * C68 * C15204 +
           ((C71 * C3025 + C61 * C3030) * C2771 +
            (C71 * C3031 + C61 * C3034) * C14835) *
               C67 * C68 * C15182) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C446 + (C71 * C120 + C61 * C125) * C15214 -
           (C71 * C385 + C61 * C392) * C447 -
           (C71 * C449 + C61 * C455) * C15202 +
           (C71 * C387 + C61 * C396) * C448 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C375 +
          ((C71 * C384 + C61 * C390) * C447 -
           ((C71 * C121 + C61 * C126) * C15214 +
            (C71 * C78 + C61 * C84) * C446) +
           (C71 * C451 + C61 * C457) * C15202 -
           (C71 * C388 + C61 * C398) * C448 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C376 +
          ((C71 * C79 + C61 * C86) * C446 + (C71 * C122 + C61 * C127) * C15214 -
           (C71 * C386 + C61 * C394) * C447 -
           (C71 * C453 + C61 * C459) * C15202 +
           (C71 * C389 + C61 * C400) * C448 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C119 +
           (C71 * C120 + C61 * C125) * C14875) *
              C67 * C68 * C62 -
          ((C71 * C121 + C61 * C126) * C14875 +
           (C71 * C78 + C61 * C84) * C119) *
              C67 * C68 * C63 +
          ((C71 * C79 + C61 * C86) * C119 +
           (C71 * C122 + C61 * C127) * C14875) *
              C67 * C68 * C64 -
          ((C71 * C123 + C61 * C128) * C14875 +
           (C71 * C80 + C61 * C88) * C119) *
              C67 * C68 * C65 +
          ((C71 * C81 + C61 * C90) * C119 +
           (C71 * C124 + C61 * C129) * C14875) *
              C67 * C68 * C66) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C119 +
            (C71 * C120 + C61 * C125) * C14875) *
               C67 * C68 * C375 -
           ((C71 * C121 + C61 * C126) * C14875 +
            (C71 * C78 + C61 * C84) * C119) *
               C67 * C68 * C376 +
           ((C71 * C79 + C61 * C86) * C119 +
            (C71 * C122 + C61 * C127) * C14875) *
               C67 * C68 * C15173) *
              C15215 +
          (((C71 * C828 + C61 * C834) * C119 +
            (C71 * C890 + C61 * C896) * C14875) *
               C67 * C68 * C376 -
           ((C71 * C891 + C61 * C897) * C14875 +
            (C71 * C829 + C61 * C836) * C119) *
               C67 * C68 * C375 -
           ((C71 * C892 + C61 * C898) * C14875 +
            (C71 * C830 + C61 * C838) * C119) *
               C67 * C68 * C15173) *
              C15204 +
          (((C71 * C831 + C61 * C840) * C119 +
            (C71 * C893 + C61 * C899) * C14875) *
               C67 * C68 * C375 -
           ((C71 * C894 + C61 * C900) * C14875 +
            (C71 * C832 + C61 * C842) * C119) *
               C67 * C68 * C376 +
           ((C71 * C833 + C61 * C844) * C119 +
            (C71 * C895 + C61 * C901) * C14875) *
               C67 * C68 * C15173) *
              C15182)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2474 + (C71 * C120 + C61 * C125) * C2430 -
           (C71 * C385 + C61 * C392) * C2475 -
           (C71 * C449 + C61 * C455) * C2431 +
           (C71 * C387 + C61 * C396) * C2476 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C15211 +
          ((C71 * C384 + C61 * C390) * C2475 -
           ((C71 * C121 + C61 * C126) * C2430 +
            (C71 * C78 + C61 * C84) * C2474) +
           (C71 * C451 + C61 * C457) * C2431 -
           (C71 * C388 + C61 * C398) * C2476 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C15198 +
          ((C71 * C79 + C61 * C86) * C2474 + (C71 * C122 + C61 * C127) * C2430 -
           (C71 * C386 + C61 * C394) * C2475 -
           (C71 * C453 + C61 * C459) * C2431 +
           (C71 * C389 + C61 * C400) * C2476 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C2802 + (C71 * C120 + C61 * C125) * C2766 -
          (C71 * C385 + C61 * C392) * C2803 -
          (C71 * C449 + C61 * C455) * C2767 +
          (C71 * C387 + C61 * C396) * C2804 +
          (C71 * C450 + C61 * C456) * C2768 -
          (C71 * C2772 + C61 * C2775) * C2805 -
          (C71 * C2807 + C61 * C2809) * C2769 +
          (C71 * C2773 + C61 * C2776) * C2806 +
          (C71 * C2808 + C61 * C2810) * C2770) *
         C67 * C68 * C14835 * C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2474 + (C71 * C120 + C61 * C125) * C2430 -
           (C71 * C385 + C61 * C392) * C2475 -
           (C71 * C449 + C61 * C455) * C2431 +
           (C71 * C387 + C61 * C396) * C2476 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C14835 * C15215 +
          ((C71 * C1941 + C61 * C1944) * C2475 -
           ((C71 * C891 + C61 * C897) * C2430 +
            (C71 * C829 + C61 * C836) * C2474) +
           (C71 * C2003 + C61 * C2006) * C2431 -
           (C71 * C3024 + C61 * C3029) * C2476 -
           (C71 * C3073 + C61 * C3076) * C15179) *
              C67 * C68 * C14835 * C15204 +
          ((C71 * C831 + C61 * C840) * C2474 +
           (C71 * C893 + C61 * C899) * C2430 -
           (C71 * C3023 + C61 * C3027) * C2475 -
           (C71 * C3074 + C61 * C3077) * C2431 +
           (C71 * C3025 + C61 * C3030) * C2476 +
           (C71 * C3075 + C61 * C3078) * C15179) *
              C67 * C68 * C14835 * C15182)) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C152 +
            (C71 * C153 + C61 * C158) * C14886) *
               C67 * C68 * C15214 -
           ((C71 * C499 + C61 * C505) * C14886 +
            (C71 * C385 + C61 * C392) * C152) *
               C67 * C68 * C15202 +
           ((C71 * C387 + C61 * C396) * C152 +
            (C71 * C500 + C61 * C506) * C14886) *
               C67 * C68 * C15179) *
              C375 +
          (((C71 * C384 + C61 * C390) * C152 +
            (C71 * C501 + C61 * C507) * C14886) *
               C67 * C68 * C15202 -
           ((C71 * C154 + C61 * C159) * C14886 +
            (C71 * C78 + C61 * C84) * C152) *
               C67 * C68 * C15214 -
           ((C71 * C502 + C61 * C508) * C14886 +
            (C71 * C388 + C61 * C398) * C152) *
               C67 * C68 * C15179) *
              C376 +
          (((C71 * C79 + C61 * C86) * C152 +
            (C71 * C155 + C61 * C160) * C14886) *
               C67 * C68 * C15214 -
           ((C71 * C503 + C61 * C509) * C14886 +
            (C71 * C386 + C61 * C394) * C152) *
               C67 * C68 * C15202 +
           ((C71 * C389 + C61 * C400) * C152 +
            (C71 * C504 + C61 * C510) * C14886) *
               C67 * C68 * C15179) *
              C15173)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C152 +
           (C71 * C153 + C61 * C158) * C14886) *
              C67 * C68 * C14875 * C62 -
          ((C71 * C154 + C61 * C159) * C14886 +
           (C71 * C78 + C61 * C84) * C152) *
              C67 * C68 * C14875 * C63 +
          ((C71 * C79 + C61 * C86) * C152 +
           (C71 * C155 + C61 * C160) * C14886) *
              C67 * C68 * C14875 * C64 -
          ((C71 * C156 + C61 * C161) * C14886 +
           (C71 * C80 + C61 * C88) * C152) *
              C67 * C68 * C14875 * C65 +
          ((C71 * C81 + C61 * C90) * C152 +
           (C71 * C157 + C61 * C162) * C14886) *
              C67 * C68 * C14875 * C66)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C940 + (C71 * C153 + C61 * C158) * C15215 -
           (C71 * C829 + C61 * C836) * C941 -
           (C71 * C943 + C61 * C949) * C15204 +
           (C71 * C831 + C61 * C840) * C942 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C14875 * C375 +
          ((C71 * C828 + C61 * C834) * C941 -
           ((C71 * C154 + C61 * C159) * C15215 +
            (C71 * C78 + C61 * C84) * C940) +
           (C71 * C945 + C61 * C951) * C15204 -
           (C71 * C832 + C61 * C842) * C942 -
           (C71 * C946 + C61 * C952) * C15182) *
              C67 * C68 * C14875 * C376 +
          ((C71 * C79 + C61 * C86) * C940 + (C71 * C155 + C61 * C160) * C15215 -
           (C71 * C830 + C61 * C838) * C941 -
           (C71 * C947 + C61 * C953) * C15204 +
           (C71 * C833 + C61 * C844) * C942 +
           (C71 * C948 + C61 * C954) * C15182) *
              C67 * C68 * C14875 * C15173)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C152 +
            (C71 * C153 + C61 * C158) * C14886) *
               C67 * C68 * C2430 -
           ((C71 * C499 + C61 * C505) * C14886 +
            (C71 * C385 + C61 * C392) * C152) *
               C67 * C68 * C2431 +
           ((C71 * C387 + C61 * C396) * C152 +
            (C71 * C500 + C61 * C506) * C14886) *
               C67 * C68 * C15179) *
              C15211 +
          (((C71 * C384 + C61 * C390) * C152 +
            (C71 * C501 + C61 * C507) * C14886) *
               C67 * C68 * C2431 -
           ((C71 * C154 + C61 * C159) * C14886 +
            (C71 * C78 + C61 * C84) * C152) *
               C67 * C68 * C2430 -
           ((C71 * C502 + C61 * C508) * C14886 +
            (C71 * C388 + C61 * C398) * C152) *
               C67 * C68 * C15179) *
              C15198 +
          (((C71 * C79 + C61 * C86) * C152 +
            (C71 * C155 + C61 * C160) * C14886) *
               C67 * C68 * C2430 -
           ((C71 * C503 + C61 * C509) * C14886 +
            (C71 * C386 + C61 * C394) * C152) *
               C67 * C68 * C2431 +
           ((C71 * C389 + C61 * C400) * C152 +
            (C71 * C504 + C61 * C510) * C14886) *
               C67 * C68 * C15179) *
              C15173)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C152 +
           (C71 * C153 + C61 * C158) * C14886) *
              C67 * C68 * C2766 -
          ((C71 * C499 + C61 * C505) * C14886 +
           (C71 * C385 + C61 * C392) * C152) *
              C67 * C68 * C2767 +
          ((C71 * C387 + C61 * C396) * C152 +
           (C71 * C500 + C61 * C506) * C14886) *
              C67 * C68 * C2768 -
          ((C71 * C2833 + C61 * C2835) * C14886 +
           (C71 * C2772 + C61 * C2775) * C152) *
              C67 * C68 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C152 +
           (C71 * C2834 + C61 * C2836) * C14886) *
              C67 * C68 * C2770) *
         C14835) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C940 + (C71 * C153 + C61 * C158) * C15215 -
           (C71 * C829 + C61 * C836) * C941 -
           (C71 * C943 + C61 * C949) * C15204 +
           (C71 * C831 + C61 * C840) * C942 +
           (C71 * C944 + C61 * C950) * C15182) *
              C67 * C68 * C2430 +
          ((C71 * C1941 + C61 * C1944) * C941 -
           ((C71 * C499 + C61 * C505) * C15215 +
            (C71 * C385 + C61 * C392) * C940) +
           (C71 * C2059 + C61 * C2062) * C15204 -
           (C71 * C3023 + C61 * C3027) * C942 -
           (C71 * C3117 + C61 * C3120) * C15182) *
              C67 * C68 * C2431 +
          ((C71 * C387 + C61 * C396) * C940 +
           (C71 * C500 + C61 * C506) * C15215 -
           (C71 * C3024 + C61 * C3029) * C941 -
           (C71 * C3118 + C61 * C3121) * C15204 +
           (C71 * C3025 + C61 * C3030) * C942 +
           (C71 * C3119 + C61 * C3122) * C15182) *
              C67 * C68 * C15179) *
         C14835) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C381 + (C185 * C83 + C67 * C191) * C375 -
           (C185 * C78 + C67 * C187) * C382 - (C185 * C85 + C67 * C192) * C376 +
           (C185 * C79 + C67 * C188) * C383 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C15214 +
          ((C185 * C384 + C67 * C549) * C382 -
           ((C185 * C391 + C67 * C555) * C375 +
            (C185 * C385 + C67 * C550) * C381) +
           (C185 * C393 + C67 * C556) * C376 -
           (C185 * C386 + C67 * C551) * C383 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C15202 +
          ((C185 * C387 + C67 * C552) * C381 +
           (C185 * C397 + C67 * C558) * C375 -
           (C185 * C388 + C67 * C553) * C382 -
           (C185 * C399 + C67 * C559) * C376 +
           (C185 * C389 + C67 * C554) * C383 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C185 * C77 + C67 * C186) * C72 + (C185 * C83 + C67 * C191) * C62 -
          (C185 * C78 + C67 * C187) * C73 - (C185 * C85 + C67 * C192) * C63 +
          (C185 * C79 + C67 * C188) * C74 + (C185 * C87 + C67 * C193) * C64 -
          (C185 * C80 + C67 * C189) * C75 - (C185 * C89 + C67 * C194) * C65 +
          (C185 * C81 + C67 * C190) * C76 + (C185 * C91 + C67 * C195) * C66) *
         C68 * C61 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C381 + (C185 * C83 + C67 * C191) * C375 -
           (C185 * C78 + C67 * C187) * C382 - (C185 * C85 + C67 * C192) * C376 +
           (C185 * C79 + C67 * C188) * C383 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C15215 +
          ((C185 * C828 + C67 * C993) * C382 -
           ((C185 * C835 + C67 * C999) * C375 +
            (C185 * C829 + C67 * C994) * C381) +
           (C185 * C837 + C67 * C1000) * C376 -
           (C185 * C830 + C67 * C995) * C383 -
           (C185 * C839 + C67 * C1001) * C15173) *
              C68 * C61 * C15204 +
          ((C185 * C831 + C67 * C996) * C381 +
           (C185 * C841 + C67 * C1002) * C375 -
           (C185 * C832 + C67 * C997) * C382 -
           (C185 * C843 + C67 * C1003) * C376 +
           (C185 * C833 + C67 * C998) * C383 +
           (C185 * C845 + C67 * C1004) * C15173) *
              C68 * C61 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2433 +
           (C185 * C83 + C67 * C191) * C15211 -
           (C185 * C78 + C67 * C187) * C2434 -
           (C185 * C85 + C67 * C192) * C15198 +
           (C185 * C79 + C67 * C188) * C2435 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C2430 +
          ((C185 * C384 + C67 * C549) * C2434 -
           ((C185 * C391 + C67 * C555) * C15211 +
            (C185 * C385 + C67 * C550) * C2433) +
           (C185 * C393 + C67 * C556) * C15198 -
           (C185 * C386 + C67 * C551) * C2435 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C2431 +
          ((C185 * C387 + C67 * C552) * C2433 +
           (C185 * C397 + C67 * C558) * C15211 -
           (C185 * C388 + C67 * C553) * C2434 -
           (C185 * C399 + C67 * C559) * C15198 +
           (C185 * C389 + C67 * C554) * C2435 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2771 +
           (C185 * C83 + C67 * C191) * C14835) *
              C68 * C61 * C14886 * C2766 -
          ((C185 * C391 + C67 * C555) * C14835 +
           (C185 * C385 + C67 * C550) * C2771) *
              C68 * C61 * C14886 * C2767 +
          ((C185 * C387 + C67 * C552) * C2771 +
           (C185 * C397 + C67 * C558) * C14835) *
              C68 * C61 * C14886 * C2768 -
          ((C185 * C2774 + C67 * C2861) * C14835 +
           (C185 * C2772 + C67 * C2859) * C2771) *
              C68 * C61 * C14886 * C2769 +
          ((C185 * C2773 + C67 * C2860) * C2771 +
           (C185 * C2777 + C67 * C2862) * C14835) *
              C68 * C61 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C185 * C77 + C67 * C186) * C2771 +
            (C185 * C83 + C67 * C191) * C14835) *
               C68 * C61 * C15215 -
           ((C185 * C835 + C67 * C999) * C14835 +
            (C185 * C829 + C67 * C994) * C2771) *
               C68 * C61 * C15204 +
           ((C185 * C831 + C67 * C996) * C2771 +
            (C185 * C841 + C67 * C1002) * C14835) *
               C68 * C61 * C15182) *
              C2430 +
          (((C185 * C1941 + C67 * C2115) * C2771 +
            (C185 * C1945 + C67 * C2118) * C14835) *
               C68 * C61 * C15204 -
           ((C185 * C391 + C67 * C555) * C14835 +
            (C185 * C385 + C67 * C550) * C2771) *
               C68 * C61 * C15215 -
           ((C185 * C3026 + C67 * C3164) * C14835 +
            (C185 * C3023 + C67 * C3161) * C2771) *
               C68 * C61 * C15182) *
              C2431 +
          (((C185 * C387 + C67 * C552) * C2771 +
            (C185 * C397 + C67 * C558) * C14835) *
               C68 * C61 * C15215 -
           ((C185 * C3028 + C67 * C3165) * C14835 +
            (C185 * C3024 + C67 * C3162) * C2771) *
               C68 * C61 * C15204 +
           ((C185 * C3025 + C67 * C3163) * C2771 +
            (C185 * C3031 + C67 * C3166) * C14835) *
               C68 * C61 * C15182) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C446 +
                     (C185 * C120 + C67 * C218) * C15214 -
                     (C185 * C385 + C67 * C550) * C447 -
                     (C185 * C449 + C67 * C599) * C15202 +
                     (C185 * C387 + C67 * C552) * C448 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C375 +
                    ((C185 * C384 + C67 * C549) * C447 -
                     ((C185 * C121 + C67 * C219) * C15214 +
                      (C185 * C78 + C67 * C187) * C446) +
                     (C185 * C451 + C67 * C601) * C15202 -
                     (C185 * C388 + C67 * C553) * C448 -
                     (C185 * C452 + C67 * C602) * C15179) *
                        C68 * C61 * C376 +
                    ((C185 * C79 + C67 * C188) * C446 +
                     (C185 * C122 + C67 * C220) * C15214 -
                     (C185 * C386 + C67 * C551) * C447 -
                     (C185 * C453 + C67 * C603) * C15202 +
                     (C185 * C389 + C67 * C554) * C448 +
                     (C185 * C454 + C67 * C604) * C15179) *
                        C68 * C61 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C119 +
                     (C185 * C120 + C67 * C218) * C14875) *
                        C68 * C61 * C62 -
                    ((C185 * C121 + C67 * C219) * C14875 +
                     (C185 * C78 + C67 * C187) * C119) *
                        C68 * C61 * C63 +
                    ((C185 * C79 + C67 * C188) * C119 +
                     (C185 * C122 + C67 * C220) * C14875) *
                        C68 * C61 * C64 -
                    ((C185 * C123 + C67 * C221) * C14875 +
                     (C185 * C80 + C67 * C189) * C119) *
                        C68 * C61 * C65 +
                    ((C185 * C81 + C67 * C190) * C119 +
                     (C185 * C124 + C67 * C222) * C14875) *
                        C68 * C61 * C66) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C375 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C376 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C15173) *
                        C15215 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C376 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C375 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C15173) *
                        C15204 +
                    (((C185 * C831 + C67 * C996) * C119 +
                      (C185 * C893 + C67 * C1046) * C14875) *
                         C68 * C61 * C375 -
                     ((C185 * C894 + C67 * C1047) * C14875 +
                      (C185 * C832 + C67 * C997) * C119) *
                         C68 * C61 * C376 +
                     ((C185 * C833 + C67 * C998) * C119 +
                      (C185 * C895 + C67 * C1048) * C14875) *
                         C68 * C61 * C15173) *
                        C15182)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C2474 +
                     (C185 * C120 + C67 * C218) * C2430 -
                     (C185 * C385 + C67 * C550) * C2475 -
                     (C185 * C449 + C67 * C599) * C2431 +
                     (C185 * C387 + C67 * C552) * C2476 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C15211 +
                    ((C185 * C384 + C67 * C549) * C2475 -
                     ((C185 * C121 + C67 * C219) * C2430 +
                      (C185 * C78 + C67 * C187) * C2474) +
                     (C185 * C451 + C67 * C601) * C2431 -
                     (C185 * C388 + C67 * C553) * C2476 -
                     (C185 * C452 + C67 * C602) * C15179) *
                        C68 * C61 * C15198 +
                    ((C185 * C79 + C67 * C188) * C2474 +
                     (C185 * C122 + C67 * C220) * C2430 -
                     (C185 * C386 + C67 * C551) * C2475 -
                     (C185 * C453 + C67 * C603) * C2431 +
                     (C185 * C389 + C67 * C554) * C2476 +
                     (C185 * C454 + C67 * C604) * C15179) *
                        C68 * C61 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C185 * C77 + C67 * C186) * C2802 +
                    (C185 * C120 + C67 * C218) * C2766 -
                    (C185 * C385 + C67 * C550) * C2803 -
                    (C185 * C449 + C67 * C599) * C2767 +
                    (C185 * C387 + C67 * C552) * C2804 +
                    (C185 * C450 + C67 * C600) * C2768 -
                    (C185 * C2772 + C67 * C2859) * C2805 -
                    (C185 * C2807 + C67 * C2885) * C2769 +
                    (C185 * C2773 + C67 * C2860) * C2806 +
                    (C185 * C2808 + C67 * C2886) * C2770) *
                   C68 * C61 * C14835 * C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C2474 +
                     (C185 * C120 + C67 * C218) * C2430 -
                     (C185 * C385 + C67 * C550) * C2475 -
                     (C185 * C449 + C67 * C599) * C2431 +
                     (C185 * C387 + C67 * C552) * C2476 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C14835 * C15215 +
                    ((C185 * C1941 + C67 * C2115) * C2475 -
                     ((C185 * C891 + C67 * C1044) * C2430 +
                      (C185 * C829 + C67 * C994) * C2474) +
                     (C185 * C2003 + C67 * C2171) * C2431 -
                     (C185 * C3024 + C67 * C3162) * C2476 -
                     (C185 * C3073 + C67 * C3205) * C15179) *
                        C68 * C61 * C14835 * C15204 +
                    ((C185 * C831 + C67 * C996) * C2474 +
                     (C185 * C893 + C67 * C1046) * C2430 -
                     (C185 * C3023 + C67 * C3161) * C2475 -
                     (C185 * C3074 + C67 * C3206) * C2431 +
                     (C185 * C3025 + C67 * C3163) * C2476 +
                     (C185 * C3075 + C67 * C3207) * C15179) *
                        C68 * C61 * C14835 * C15182)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C15214 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C15202 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C375 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C15202 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C15214 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C376 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C15214 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C15202 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C14875 * C62 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C14875 * C63 +
                    ((C185 * C79 + C67 * C188) * C152 +
                     (C185 * C155 + C67 * C247) * C14886) *
                        C68 * C61 * C14875 * C64 -
                    ((C185 * C156 + C67 * C248) * C14886 +
                     (C185 * C80 + C67 * C189) * C152) *
                        C68 * C61 * C14875 * C65 +
                    ((C185 * C81 + C67 * C190) * C152 +
                     (C185 * C157 + C67 * C249) * C14886) *
                        C68 * C61 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C940 +
                     (C185 * C153 + C67 * C245) * C15215 -
                     (C185 * C829 + C67 * C994) * C941 -
                     (C185 * C943 + C67 * C1087) * C15204 +
                     (C185 * C831 + C67 * C996) * C942 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C14875 * C375 +
                    ((C185 * C828 + C67 * C993) * C941 -
                     ((C185 * C154 + C67 * C246) * C15215 +
                      (C185 * C78 + C67 * C187) * C940) +
                     (C185 * C945 + C67 * C1089) * C15204 -
                     (C185 * C832 + C67 * C997) * C942 -
                     (C185 * C946 + C67 * C1090) * C15182) *
                        C68 * C61 * C14875 * C376 +
                    ((C185 * C79 + C67 * C188) * C940 +
                     (C185 * C155 + C67 * C247) * C15215 -
                     (C185 * C830 + C67 * C995) * C941 -
                     (C185 * C947 + C67 * C1091) * C15204 +
                     (C185 * C833 + C67 * C998) * C942 +
                     (C185 * C948 + C67 * C1092) * C15182) *
                        C68 * C61 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C15211 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C2431 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C2430 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C15198 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C2766 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C2767 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C2768 -
                    ((C185 * C2833 + C67 * C2909) * C14886 +
                     (C185 * C2772 + C67 * C2859) * C152) *
                        C68 * C61 * C2769 +
                    ((C185 * C2773 + C67 * C2860) * C152 +
                     (C185 * C2834 + C67 * C2910) * C14886) *
                        C68 * C61 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C940 +
                     (C185 * C153 + C67 * C245) * C15215 -
                     (C185 * C829 + C67 * C994) * C941 -
                     (C185 * C943 + C67 * C1087) * C15204 +
                     (C185 * C831 + C67 * C996) * C942 +
                     (C185 * C944 + C67 * C1088) * C15182) *
                        C68 * C61 * C2430 +
                    ((C185 * C1941 + C67 * C2115) * C941 -
                     ((C185 * C499 + C67 * C643) * C15215 +
                      (C185 * C385 + C67 * C550) * C940) +
                     (C185 * C2059 + C67 * C2224) * C15204 -
                     (C185 * C3023 + C67 * C3161) * C942 -
                     (C185 * C3117 + C67 * C3246) * C15182) *
                        C68 * C61 * C2431 +
                    ((C185 * C387 + C67 * C552) * C940 +
                     (C185 * C500 + C67 * C644) * C15215 -
                     (C185 * C3024 + C67 * C3162) * C941 -
                     (C185 * C3118 + C67 * C3247) * C15204 +
                     (C185 * C3025 + C67 * C3163) * C942 +
                     (C185 * C3119 + C67 * C3248) * C15182) *
                        C68 * C61 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C381 + (C272 * C83 + C68 * C278) * C375 -
           (C272 * C78 + C68 * C274) * C382 - (C272 * C85 + C68 * C279) * C376 +
           (C272 * C79 + C68 * C275) * C383 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C15214 +
          ((C272 * C384 + C68 * C687) * C382 -
           ((C272 * C391 + C68 * C693) * C375 +
            (C272 * C385 + C68 * C688) * C381) +
           (C272 * C393 + C68 * C694) * C376 -
           (C272 * C386 + C68 * C689) * C383 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C15202 +
          ((C272 * C387 + C68 * C690) * C381 +
           (C272 * C397 + C68 * C696) * C375 -
           (C272 * C388 + C68 * C691) * C382 -
           (C272 * C399 + C68 * C697) * C376 +
           (C272 * C389 + C68 * C692) * C383 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C272 * C77 + C68 * C273) * C72 + (C272 * C83 + C68 * C278) * C62 -
          (C272 * C78 + C68 * C274) * C73 - (C272 * C85 + C68 * C279) * C63 +
          (C272 * C79 + C68 * C275) * C74 + (C272 * C87 + C68 * C280) * C64 -
          (C272 * C80 + C68 * C276) * C75 - (C272 * C89 + C68 * C281) * C65 +
          (C272 * C81 + C68 * C277) * C76 + (C272 * C91 + C68 * C282) * C66) *
         C61 * C67 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C381 + (C272 * C83 + C68 * C278) * C375 -
           (C272 * C78 + C68 * C274) * C382 - (C272 * C85 + C68 * C279) * C376 +
           (C272 * C79 + C68 * C275) * C383 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C15215 +
          ((C272 * C828 + C68 * C1131) * C382 -
           ((C272 * C835 + C68 * C1137) * C375 +
            (C272 * C829 + C68 * C1132) * C381) +
           (C272 * C837 + C68 * C1138) * C376 -
           (C272 * C830 + C68 * C1133) * C383 -
           (C272 * C839 + C68 * C1139) * C15173) *
              C61 * C67 * C15204 +
          ((C272 * C831 + C68 * C1134) * C381 +
           (C272 * C841 + C68 * C1140) * C375 -
           (C272 * C832 + C68 * C1135) * C382 -
           (C272 * C843 + C68 * C1141) * C376 +
           (C272 * C833 + C68 * C1136) * C383 +
           (C272 * C845 + C68 * C1142) * C15173) *
              C61 * C67 * C15182) *
         C14875) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2433 +
           (C272 * C83 + C68 * C278) * C15211 -
           (C272 * C78 + C68 * C274) * C2434 -
           (C272 * C85 + C68 * C279) * C15198 +
           (C272 * C79 + C68 * C275) * C2435 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C2430 +
          ((C272 * C384 + C68 * C687) * C2434 -
           ((C272 * C391 + C68 * C693) * C15211 +
            (C272 * C385 + C68 * C688) * C2433) +
           (C272 * C393 + C68 * C694) * C15198 -
           (C272 * C386 + C68 * C689) * C2435 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C2431 +
          ((C272 * C387 + C68 * C690) * C2433 +
           (C272 * C397 + C68 * C696) * C15211 -
           (C272 * C388 + C68 * C691) * C2434 -
           (C272 * C399 + C68 * C697) * C15198 +
           (C272 * C389 + C68 * C692) * C2435 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2771 +
           (C272 * C83 + C68 * C278) * C14835) *
              C61 * C67 * C14886 * C2766 -
          ((C272 * C391 + C68 * C693) * C14835 +
           (C272 * C385 + C68 * C688) * C2771) *
              C61 * C67 * C14886 * C2767 +
          ((C272 * C387 + C68 * C690) * C2771 +
           (C272 * C397 + C68 * C696) * C14835) *
              C61 * C67 * C14886 * C2768 -
          ((C272 * C2774 + C68 * C2935) * C14835 +
           (C272 * C2772 + C68 * C2933) * C2771) *
              C61 * C67 * C14886 * C2769 +
          ((C272 * C2773 + C68 * C2934) * C2771 +
           (C272 * C2777 + C68 * C2936) * C14835) *
              C61 * C67 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C272 * C77 + C68 * C273) * C2771 +
            (C272 * C83 + C68 * C278) * C14835) *
               C61 * C67 * C15215 -
           ((C272 * C835 + C68 * C1137) * C14835 +
            (C272 * C829 + C68 * C1132) * C2771) *
               C61 * C67 * C15204 +
           ((C272 * C831 + C68 * C1134) * C2771 +
            (C272 * C841 + C68 * C1140) * C14835) *
               C61 * C67 * C15182) *
              C2430 +
          (((C272 * C1941 + C68 * C2277) * C2771 +
            (C272 * C1945 + C68 * C2280) * C14835) *
               C61 * C67 * C15204 -
           ((C272 * C391 + C68 * C693) * C14835 +
            (C272 * C385 + C68 * C688) * C2771) *
               C61 * C67 * C15215 -
           ((C272 * C3026 + C68 * C3290) * C14835 +
            (C272 * C3023 + C68 * C3287) * C2771) *
               C61 * C67 * C15182) *
              C2431 +
          (((C272 * C387 + C68 * C690) * C2771 +
            (C272 * C397 + C68 * C696) * C14835) *
               C61 * C67 * C15215 -
           ((C272 * C3028 + C68 * C3291) * C14835 +
            (C272 * C3024 + C68 * C3288) * C2771) *
               C61 * C67 * C15204 +
           ((C272 * C3025 + C68 * C3289) * C2771 +
            (C272 * C3031 + C68 * C3292) * C14835) *
               C61 * C67 * C15182) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C446 +
                     (C272 * C120 + C68 * C305) * C15214 -
                     (C272 * C385 + C68 * C688) * C447 -
                     (C272 * C449 + C68 * C737) * C15202 +
                     (C272 * C387 + C68 * C690) * C448 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C375 +
                    ((C272 * C384 + C68 * C687) * C447 -
                     ((C272 * C121 + C68 * C306) * C15214 +
                      (C272 * C78 + C68 * C274) * C446) +
                     (C272 * C451 + C68 * C739) * C15202 -
                     (C272 * C388 + C68 * C691) * C448 -
                     (C272 * C452 + C68 * C740) * C15179) *
                        C61 * C67 * C376 +
                    ((C272 * C79 + C68 * C275) * C446 +
                     (C272 * C122 + C68 * C307) * C15214 -
                     (C272 * C386 + C68 * C689) * C447 -
                     (C272 * C453 + C68 * C741) * C15202 +
                     (C272 * C389 + C68 * C692) * C448 +
                     (C272 * C454 + C68 * C742) * C15179) *
                        C61 * C67 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C119 +
                     (C272 * C120 + C68 * C305) * C14875) *
                        C61 * C67 * C62 -
                    ((C272 * C121 + C68 * C306) * C14875 +
                     (C272 * C78 + C68 * C274) * C119) *
                        C61 * C67 * C63 +
                    ((C272 * C79 + C68 * C275) * C119 +
                     (C272 * C122 + C68 * C307) * C14875) *
                        C61 * C67 * C64 -
                    ((C272 * C123 + C68 * C308) * C14875 +
                     (C272 * C80 + C68 * C276) * C119) *
                        C61 * C67 * C65 +
                    ((C272 * C81 + C68 * C277) * C119 +
                     (C272 * C124 + C68 * C309) * C14875) *
                        C61 * C67 * C66) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C375 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C376 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C15173) *
                        C15215 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C376 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C375 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C15173) *
                        C15204 +
                    (((C272 * C831 + C68 * C1134) * C119 +
                      (C272 * C893 + C68 * C1184) * C14875) *
                         C61 * C67 * C375 -
                     ((C272 * C894 + C68 * C1185) * C14875 +
                      (C272 * C832 + C68 * C1135) * C119) *
                         C61 * C67 * C376 +
                     ((C272 * C833 + C68 * C1136) * C119 +
                      (C272 * C895 + C68 * C1186) * C14875) *
                         C61 * C67 * C15173) *
                        C15182)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C2474 +
                     (C272 * C120 + C68 * C305) * C2430 -
                     (C272 * C385 + C68 * C688) * C2475 -
                     (C272 * C449 + C68 * C737) * C2431 +
                     (C272 * C387 + C68 * C690) * C2476 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C15211 +
                    ((C272 * C384 + C68 * C687) * C2475 -
                     ((C272 * C121 + C68 * C306) * C2430 +
                      (C272 * C78 + C68 * C274) * C2474) +
                     (C272 * C451 + C68 * C739) * C2431 -
                     (C272 * C388 + C68 * C691) * C2476 -
                     (C272 * C452 + C68 * C740) * C15179) *
                        C61 * C67 * C15198 +
                    ((C272 * C79 + C68 * C275) * C2474 +
                     (C272 * C122 + C68 * C307) * C2430 -
                     (C272 * C386 + C68 * C689) * C2475 -
                     (C272 * C453 + C68 * C741) * C2431 +
                     (C272 * C389 + C68 * C692) * C2476 +
                     (C272 * C454 + C68 * C742) * C15179) *
                        C61 * C67 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C272 * C77 + C68 * C273) * C2802 +
                    (C272 * C120 + C68 * C305) * C2766 -
                    (C272 * C385 + C68 * C688) * C2803 -
                    (C272 * C449 + C68 * C737) * C2767 +
                    (C272 * C387 + C68 * C690) * C2804 +
                    (C272 * C450 + C68 * C738) * C2768 -
                    (C272 * C2772 + C68 * C2933) * C2805 -
                    (C272 * C2807 + C68 * C2959) * C2769 +
                    (C272 * C2773 + C68 * C2934) * C2806 +
                    (C272 * C2808 + C68 * C2960) * C2770) *
                   C61 * C67 * C14835 * C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C2474 +
                     (C272 * C120 + C68 * C305) * C2430 -
                     (C272 * C385 + C68 * C688) * C2475 -
                     (C272 * C449 + C68 * C737) * C2431 +
                     (C272 * C387 + C68 * C690) * C2476 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C14835 * C15215 +
                    ((C272 * C1941 + C68 * C2277) * C2475 -
                     ((C272 * C891 + C68 * C1182) * C2430 +
                      (C272 * C829 + C68 * C1132) * C2474) +
                     (C272 * C2003 + C68 * C2333) * C2431 -
                     (C272 * C3024 + C68 * C3288) * C2476 -
                     (C272 * C3073 + C68 * C3331) * C15179) *
                        C61 * C67 * C14835 * C15204 +
                    ((C272 * C831 + C68 * C1134) * C2474 +
                     (C272 * C893 + C68 * C1184) * C2430 -
                     (C272 * C3023 + C68 * C3287) * C2475 -
                     (C272 * C3074 + C68 * C3332) * C2431 +
                     (C272 * C3025 + C68 * C3289) * C2476 +
                     (C272 * C3075 + C68 * C3333) * C15179) *
                        C61 * C67 * C14835 * C15182)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C15214 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C15202 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C375 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C15202 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C15214 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C376 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C15214 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C15202 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C14875 * C62 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C14875 * C63 +
                    ((C272 * C79 + C68 * C275) * C152 +
                     (C272 * C155 + C68 * C334) * C14886) *
                        C61 * C67 * C14875 * C64 -
                    ((C272 * C156 + C68 * C335) * C14886 +
                     (C272 * C80 + C68 * C276) * C152) *
                        C61 * C67 * C14875 * C65 +
                    ((C272 * C81 + C68 * C277) * C152 +
                     (C272 * C157 + C68 * C336) * C14886) *
                        C61 * C67 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C940 +
                     (C272 * C153 + C68 * C332) * C15215 -
                     (C272 * C829 + C68 * C1132) * C941 -
                     (C272 * C943 + C68 * C1225) * C15204 +
                     (C272 * C831 + C68 * C1134) * C942 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C14875 * C375 +
                    ((C272 * C828 + C68 * C1131) * C941 -
                     ((C272 * C154 + C68 * C333) * C15215 +
                      (C272 * C78 + C68 * C274) * C940) +
                     (C272 * C945 + C68 * C1227) * C15204 -
                     (C272 * C832 + C68 * C1135) * C942 -
                     (C272 * C946 + C68 * C1228) * C15182) *
                        C61 * C67 * C14875 * C376 +
                    ((C272 * C79 + C68 * C275) * C940 +
                     (C272 * C155 + C68 * C334) * C15215 -
                     (C272 * C830 + C68 * C1133) * C941 -
                     (C272 * C947 + C68 * C1229) * C15204 +
                     (C272 * C833 + C68 * C1136) * C942 +
                     (C272 * C948 + C68 * C1230) * C15182) *
                        C61 * C67 * C14875 * C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C15211 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C2431 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C2430 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C15198 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C2766 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C2767 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C2768 -
                    ((C272 * C2833 + C68 * C2983) * C14886 +
                     (C272 * C2772 + C68 * C2933) * C152) *
                        C61 * C67 * C2769 +
                    ((C272 * C2773 + C68 * C2934) * C152 +
                     (C272 * C2834 + C68 * C2984) * C14886) *
                        C61 * C67 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C940 +
                     (C272 * C153 + C68 * C332) * C15215 -
                     (C272 * C829 + C68 * C1132) * C941 -
                     (C272 * C943 + C68 * C1225) * C15204 +
                     (C272 * C831 + C68 * C1134) * C942 +
                     (C272 * C944 + C68 * C1226) * C15182) *
                        C61 * C67 * C2430 +
                    ((C272 * C1941 + C68 * C2277) * C941 -
                     ((C272 * C499 + C68 * C781) * C15215 +
                      (C272 * C385 + C68 * C688) * C940) +
                     (C272 * C2059 + C68 * C2386) * C15204 -
                     (C272 * C3023 + C68 * C3287) * C942 -
                     (C272 * C3117 + C68 * C3372) * C15182) *
                        C61 * C67 * C2431 +
                    ((C272 * C387 + C68 * C690) * C940 +
                     (C272 * C500 + C68 * C782) * C15215 -
                     (C272 * C3024 + C68 * C3288) * C941 -
                     (C272 * C3118 + C68 * C3373) * C15204 +
                     (C272 * C3025 + C68 * C3289) * C942 +
                     (C272 * C3119 + C68 * C3374) * C15182) *
                        C61 * C67 * C15179) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C1271 + (C71 * C83 + C61 * C92) * C1265 -
           (C71 * C78 + C61 * C84) * C1272 - (C71 * C85 + C61 * C93) * C1266 +
           (C71 * C79 + C61 * C86) * C1273 + (C71 * C87 + C61 * C94) * C1267 -
           (C71 * C80 + C61 * C88) * C1274 - (C71 * C89 + C61 * C95) * C15183) *
              C67 * C68 * C15154 +
          ((C71 * C828 + C61 * C834) * C1272 -
           ((C71 * C835 + C61 * C846) * C1265 +
            (C71 * C829 + C61 * C836) * C1271) +
           (C71 * C837 + C61 * C847) * C1266 -
           (C71 * C830 + C61 * C838) * C1273 -
           (C71 * C839 + C61 * C848) * C1267 +
           (C71 * C1601 + C61 * C1602) * C1274 +
           (C71 * C1603 + C61 * C1604) * C15183) *
              C67 * C68 * C14973) *
         C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C71 * C77 + C61 * C82) * C13575 +
            (C71 * C83 + C61 * C92) * C15139 -
            (C71 * C78 + C61 * C84) * C13556 -
            (C71 * C85 + C61 * C93) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C828 + C61 * C834) * C13556 -
            ((C71 * C835 + C61 * C846) * C15139 +
             (C71 * C829 + C61 * C836) * C13575) +
            (C71 * C837 + C61 * C847) * C14845) *
               C67 * C68 * C14973) *
              C2430 +
          (((C71 * C384 + C61 * C390) * C13556 -
            ((C71 * C391 + C61 * C402) * C15139 +
             (C71 * C385 + C61 * C392) * C13575) +
            (C71 * C393 + C61 * C403) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C1941 + C61 * C1944) * C13575 +
            (C71 * C1945 + C61 * C1950) * C15139 -
            (C71 * C1942 + C61 * C1946) * C13556 -
            (C71 * C1947 + C61 * C1951) * C14845) *
               C67 * C68 * C14973) *
              C2431 +
          (((C71 * C387 + C61 * C396) * C13575 +
            (C71 * C397 + C61 * C405) * C15139 -
            (C71 * C388 + C61 * C398) * C13556 -
            (C71 * C399 + C61 * C406) * C14845) *
               C67 * C68 * C15154 +
           ((C71 * C3759 + C61 * C3760) * C13556 -
            ((C71 * C3028 + C61 * C3033) * C15139 +
             (C71 * C3024 + C61 * C3029) * C13575) +
            (C71 * C3761 + C61 * C3762) * C14845) *
               C67 * C68 * C14973) *
              C15179)) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C119 +
                      (C71 * C120 + C61 * C125) * C14875) *
                         C67 * C68 * C1265 -
                     ((C71 * C121 + C61 * C126) * C14875 +
                      (C71 * C78 + C61 * C84) * C119) *
                         C67 * C68 * C1266 +
                     ((C71 * C79 + C61 * C86) * C119 +
                      (C71 * C122 + C61 * C127) * C14875) *
                         C67 * C68 * C1267 -
                     ((C71 * C123 + C61 * C128) * C14875 +
                      (C71 * C80 + C61 * C88) * C119) *
                         C67 * C68 * C15183) *
                        C15154 +
                    (((C71 * C828 + C61 * C834) * C119 +
                      (C71 * C890 + C61 * C896) * C14875) *
                         C67 * C68 * C1266 -
                     ((C71 * C891 + C61 * C897) * C14875 +
                      (C71 * C829 + C61 * C836) * C119) *
                         C67 * C68 * C1265 -
                     ((C71 * C892 + C61 * C898) * C14875 +
                      (C71 * C830 + C61 * C838) * C119) *
                         C67 * C68 * C1267 +
                     ((C71 * C1601 + C61 * C1602) * C119 +
                      (C71 * C1639 + C61 * C1640) * C14875) *
                         C67 * C68 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C2474 +
                      (C71 * C120 + C61 * C125) * C2430 -
                      (C71 * C385 + C61 * C392) * C2475 -
                      (C71 * C449 + C61 * C455) * C2431 +
                      (C71 * C387 + C61 * C396) * C2476 +
                      (C71 * C450 + C61 * C456) * C15179) *
                         C67 * C68 * C15139 +
                     ((C71 * C384 + C61 * C390) * C2475 -
                      ((C71 * C121 + C61 * C126) * C2430 +
                       (C71 * C78 + C61 * C84) * C2474) +
                      (C71 * C451 + C61 * C457) * C2431 -
                      (C71 * C388 + C61 * C398) * C2476 -
                      (C71 * C452 + C61 * C458) * C15179) *
                         C67 * C68 * C14845) *
                        C15154 +
                    (((C71 * C1941 + C61 * C1944) * C2475 -
                      ((C71 * C891 + C61 * C897) * C2430 +
                       (C71 * C829 + C61 * C836) * C2474) +
                      (C71 * C2003 + C61 * C2006) * C2431 -
                      (C71 * C3024 + C61 * C3029) * C2476 -
                      (C71 * C3073 + C61 * C3076) * C15179) *
                         C67 * C68 * C15139 +
                     ((C71 * C828 + C61 * C834) * C2474 +
                      (C71 * C890 + C61 * C896) * C2430 -
                      (C71 * C1942 + C61 * C1946) * C2475 -
                      (C71 * C2004 + C61 * C2007) * C2431 +
                      (C71 * C3759 + C61 * C3760) * C2476 +
                      (C71 * C3813 + C61 * C3814) * C15179) *
                         C67 * C68 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C77 + C61 * C82) * C1675 +
                     (C71 * C153 + C61 * C158) * C15154 -
                     (C71 * C829 + C61 * C836) * C1676 -
                     (C71 * C943 + C61 * C949) * C14973) *
                        C67 * C68 * C14875 * C1265 +
                    ((C71 * C828 + C61 * C834) * C1676 -
                     ((C71 * C154 + C61 * C159) * C15154 +
                      (C71 * C78 + C61 * C84) * C1675) +
                     (C71 * C945 + C61 * C951) * C14973) *
                        C67 * C68 * C14875 * C1266 +
                    ((C71 * C79 + C61 * C86) * C1675 +
                     (C71 * C155 + C61 * C160) * C15154 -
                     (C71 * C830 + C61 * C838) * C1676 -
                     (C71 * C947 + C61 * C953) * C14973) *
                        C67 * C68 * C14875 * C1267 +
                    ((C71 * C1601 + C61 * C1602) * C1676 -
                     ((C71 * C156 + C61 * C161) * C15154 +
                      (C71 * C80 + C61 * C88) * C1675) +
                     (C71 * C1677 + C61 * C1678) * C14973) *
                        C67 * C68 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C1675 +
                      (C71 * C153 + C61 * C158) * C15154 -
                      (C71 * C829 + C61 * C836) * C1676 -
                      (C71 * C943 + C61 * C949) * C14973) *
                         C67 * C68 * C2430 +
                     ((C71 * C1941 + C61 * C1944) * C1676 -
                      ((C71 * C499 + C61 * C505) * C15154 +
                       (C71 * C385 + C61 * C392) * C1675) +
                      (C71 * C2059 + C61 * C2062) * C14973) *
                         C67 * C68 * C2431 +
                     ((C71 * C387 + C61 * C396) * C1675 +
                      (C71 * C500 + C61 * C506) * C15154 -
                      (C71 * C3024 + C61 * C3029) * C1676 -
                      (C71 * C3118 + C61 * C3121) * C14973) *
                         C67 * C68 * C15179) *
                        C15139 +
                    (((C71 * C828 + C61 * C834) * C1676 -
                      ((C71 * C154 + C61 * C159) * C15154 +
                       (C71 * C78 + C61 * C84) * C1675) +
                      (C71 * C945 + C61 * C951) * C14973) *
                         C67 * C68 * C2430 +
                     ((C71 * C384 + C61 * C390) * C1675 +
                      (C71 * C501 + C61 * C507) * C15154 -
                      (C71 * C1942 + C61 * C1946) * C1676 -
                      (C71 * C2060 + C61 * C2063) * C14973) *
                         C67 * C68 * C2431 +
                     ((C71 * C3759 + C61 * C3760) * C1676 -
                      ((C71 * C502 + C61 * C508) * C15154 +
                       (C71 * C388 + C61 * C398) * C1675) +
                      (C71 * C3865 + C61 * C3866) * C14973) *
                         C67 * C68 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1271 +
                     (C185 * C83 + C67 * C191) * C1265 -
                     (C185 * C78 + C67 * C187) * C1272 -
                     (C185 * C85 + C67 * C192) * C1266 +
                     (C185 * C79 + C67 * C188) * C1273 +
                     (C185 * C87 + C67 * C193) * C1267 -
                     (C185 * C80 + C67 * C189) * C1274 -
                     (C185 * C89 + C67 * C194) * C15183) *
                        C68 * C61 * C15154 +
                    ((C185 * C828 + C67 * C993) * C1272 -
                     ((C185 * C835 + C67 * C999) * C1265 +
                      (C185 * C829 + C67 * C994) * C1271) +
                     (C185 * C837 + C67 * C1000) * C1266 -
                     (C185 * C830 + C67 * C995) * C1273 -
                     (C185 * C839 + C67 * C1001) * C1267 +
                     (C185 * C1601 + C67 * C1713) * C1274 +
                     (C185 * C1603 + C67 * C1714) * C15183) *
                        C68 * C61 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C13575 +
                      (C185 * C83 + C67 * C191) * C15139 -
                      (C185 * C78 + C67 * C187) * C13556 -
                      (C185 * C85 + C67 * C192) * C14845) *
                         C68 * C61 * C15154 +
                     ((C185 * C828 + C67 * C993) * C13556 -
                      ((C185 * C835 + C67 * C999) * C15139 +
                       (C185 * C829 + C67 * C994) * C13575) +
                      (C185 * C837 + C67 * C1000) * C14845) *
                         C68 * C61 * C14973) *
                        C2430 +
                    (((C185 * C384 + C67 * C549) * C13556 -
                      ((C185 * C391 + C67 * C555) * C15139 +
                       (C185 * C385 + C67 * C550) * C13575) +
                      (C185 * C393 + C67 * C556) * C14845) *
                         C68 * C61 * C15154 +
                     ((C185 * C1941 + C67 * C2115) * C13575 +
                      (C185 * C1945 + C67 * C2118) * C15139 -
                      (C185 * C1942 + C67 * C2116) * C13556 -
                      (C185 * C1947 + C67 * C2119) * C14845) *
                         C68 * C61 * C14973) *
                        C2431 +
                    (((C185 * C387 + C67 * C552) * C13575 +
                      (C185 * C397 + C67 * C558) * C15139 -
                      (C185 * C388 + C67 * C553) * C13556 -
                      (C185 * C399 + C67 * C559) * C14845) *
                         C68 * C61 * C15154 +
                     ((C185 * C3759 + C67 * C3917) * C13556 -
                      ((C185 * C3028 + C67 * C3165) * C15139 +
                       (C185 * C3024 + C67 * C3162) * C13575) +
                      (C185 * C3761 + C67 * C3918) * C14845) *
                         C68 * C61 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C119 +
                      (C185 * C120 + C67 * C218) * C14875) *
                         C68 * C61 * C1265 -
                     ((C185 * C121 + C67 * C219) * C14875 +
                      (C185 * C78 + C67 * C187) * C119) *
                         C68 * C61 * C1266 +
                     ((C185 * C79 + C67 * C188) * C119 +
                      (C185 * C122 + C67 * C220) * C14875) *
                         C68 * C61 * C1267 -
                     ((C185 * C123 + C67 * C221) * C14875 +
                      (C185 * C80 + C67 * C189) * C119) *
                         C68 * C61 * C15183) *
                        C15154 +
                    (((C185 * C828 + C67 * C993) * C119 +
                      (C185 * C890 + C67 * C1043) * C14875) *
                         C68 * C61 * C1266 -
                     ((C185 * C891 + C67 * C1044) * C14875 +
                      (C185 * C829 + C67 * C994) * C119) *
                         C68 * C61 * C1265 -
                     ((C185 * C892 + C67 * C1045) * C14875 +
                      (C185 * C830 + C67 * C995) * C119) *
                         C68 * C61 * C1267 +
                     ((C185 * C1601 + C67 * C1713) * C119 +
                      (C185 * C1639 + C67 * C1749) * C14875) *
                         C68 * C61 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C2474 +
                      (C185 * C120 + C67 * C218) * C2430 -
                      (C185 * C385 + C67 * C550) * C2475 -
                      (C185 * C449 + C67 * C599) * C2431 +
                      (C185 * C387 + C67 * C552) * C2476 +
                      (C185 * C450 + C67 * C600) * C15179) *
                         C68 * C61 * C15139 +
                     ((C185 * C384 + C67 * C549) * C2475 -
                      ((C185 * C121 + C67 * C219) * C2430 +
                       (C185 * C78 + C67 * C187) * C2474) +
                      (C185 * C451 + C67 * C601) * C2431 -
                      (C185 * C388 + C67 * C553) * C2476 -
                      (C185 * C452 + C67 * C602) * C15179) *
                         C68 * C61 * C14845) *
                        C15154 +
                    (((C185 * C1941 + C67 * C2115) * C2475 -
                      ((C185 * C891 + C67 * C1044) * C2430 +
                       (C185 * C829 + C67 * C994) * C2474) +
                      (C185 * C2003 + C67 * C2171) * C2431 -
                      (C185 * C3024 + C67 * C3162) * C2476 -
                      (C185 * C3073 + C67 * C3205) * C15179) *
                         C68 * C61 * C15139 +
                     ((C185 * C828 + C67 * C993) * C2474 +
                      (C185 * C890 + C67 * C1043) * C2430 -
                      (C185 * C1942 + C67 * C2116) * C2475 -
                      (C185 * C2004 + C67 * C2172) * C2431 +
                      (C185 * C3759 + C67 * C3917) * C2476 +
                      (C185 * C3813 + C67 * C3969) * C15179) *
                         C68 * C61 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C1675 +
                     (C185 * C153 + C67 * C245) * C15154 -
                     (C185 * C829 + C67 * C994) * C1676 -
                     (C185 * C943 + C67 * C1087) * C14973) *
                        C68 * C61 * C14875 * C1265 +
                    ((C185 * C828 + C67 * C993) * C1676 -
                     ((C185 * C154 + C67 * C246) * C15154 +
                      (C185 * C78 + C67 * C187) * C1675) +
                     (C185 * C945 + C67 * C1089) * C14973) *
                        C68 * C61 * C14875 * C1266 +
                    ((C185 * C79 + C67 * C188) * C1675 +
                     (C185 * C155 + C67 * C247) * C15154 -
                     (C185 * C830 + C67 * C995) * C1676 -
                     (C185 * C947 + C67 * C1091) * C14973) *
                        C68 * C61 * C14875 * C1267 +
                    ((C185 * C1601 + C67 * C1713) * C1676 -
                     ((C185 * C156 + C67 * C248) * C15154 +
                      (C185 * C80 + C67 * C189) * C1675) +
                     (C185 * C1677 + C67 * C1784) * C14973) *
                        C68 * C61 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C1675 +
                      (C185 * C153 + C67 * C245) * C15154 -
                      (C185 * C829 + C67 * C994) * C1676 -
                      (C185 * C943 + C67 * C1087) * C14973) *
                         C68 * C61 * C2430 +
                     ((C185 * C1941 + C67 * C2115) * C1676 -
                      ((C185 * C499 + C67 * C643) * C15154 +
                       (C185 * C385 + C67 * C550) * C1675) +
                      (C185 * C2059 + C67 * C2224) * C14973) *
                         C68 * C61 * C2431 +
                     ((C185 * C387 + C67 * C552) * C1675 +
                      (C185 * C500 + C67 * C644) * C15154 -
                      (C185 * C3024 + C67 * C3162) * C1676 -
                      (C185 * C3118 + C67 * C3247) * C14973) *
                         C68 * C61 * C15179) *
                        C15139 +
                    (((C185 * C828 + C67 * C993) * C1676 -
                      ((C185 * C154 + C67 * C246) * C15154 +
                       (C185 * C78 + C67 * C187) * C1675) +
                      (C185 * C945 + C67 * C1089) * C14973) *
                         C68 * C61 * C2430 +
                     ((C185 * C384 + C67 * C549) * C1675 +
                      (C185 * C501 + C67 * C645) * C15154 -
                      (C185 * C1942 + C67 * C2116) * C1676 -
                      (C185 * C2060 + C67 * C2225) * C14973) *
                         C68 * C61 * C2431 +
                     ((C185 * C3759 + C67 * C3917) * C1676 -
                      ((C185 * C502 + C67 * C646) * C15154 +
                       (C185 * C388 + C67 * C553) * C1675) +
                      (C185 * C3865 + C67 * C4020) * C14973) *
                         C68 * C61 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1271 +
                     (C272 * C83 + C68 * C278) * C1265 -
                     (C272 * C78 + C68 * C274) * C1272 -
                     (C272 * C85 + C68 * C279) * C1266 +
                     (C272 * C79 + C68 * C275) * C1273 +
                     (C272 * C87 + C68 * C280) * C1267 -
                     (C272 * C80 + C68 * C276) * C1274 -
                     (C272 * C89 + C68 * C281) * C15183) *
                        C61 * C67 * C15154 +
                    ((C272 * C828 + C68 * C1131) * C1272 -
                     ((C272 * C835 + C68 * C1137) * C1265 +
                      (C272 * C829 + C68 * C1132) * C1271) +
                     (C272 * C837 + C68 * C1138) * C1266 -
                     (C272 * C830 + C68 * C1133) * C1273 -
                     (C272 * C839 + C68 * C1139) * C1267 +
                     (C272 * C1601 + C68 * C1819) * C1274 +
                     (C272 * C1603 + C68 * C1820) * C15183) *
                        C61 * C67 * C14973) *
                   C14875) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C13575 +
                      (C272 * C83 + C68 * C278) * C15139 -
                      (C272 * C78 + C68 * C274) * C13556 -
                      (C272 * C85 + C68 * C279) * C14845) *
                         C61 * C67 * C15154 +
                     ((C272 * C828 + C68 * C1131) * C13556 -
                      ((C272 * C835 + C68 * C1137) * C15139 +
                       (C272 * C829 + C68 * C1132) * C13575) +
                      (C272 * C837 + C68 * C1138) * C14845) *
                         C61 * C67 * C14973) *
                        C2430 +
                    (((C272 * C384 + C68 * C687) * C13556 -
                      ((C272 * C391 + C68 * C693) * C15139 +
                       (C272 * C385 + C68 * C688) * C13575) +
                      (C272 * C393 + C68 * C694) * C14845) *
                         C61 * C67 * C15154 +
                     ((C272 * C1941 + C68 * C2277) * C13575 +
                      (C272 * C1945 + C68 * C2280) * C15139 -
                      (C272 * C1942 + C68 * C2278) * C13556 -
                      (C272 * C1947 + C68 * C2281) * C14845) *
                         C61 * C67 * C14973) *
                        C2431 +
                    (((C272 * C387 + C68 * C690) * C13575 +
                      (C272 * C397 + C68 * C696) * C15139 -
                      (C272 * C388 + C68 * C691) * C13556 -
                      (C272 * C399 + C68 * C697) * C14845) *
                         C61 * C67 * C15154 +
                     ((C272 * C3759 + C68 * C4071) * C13556 -
                      ((C272 * C3028 + C68 * C3291) * C15139 +
                       (C272 * C3024 + C68 * C3288) * C13575) +
                      (C272 * C3761 + C68 * C4072) * C14845) *
                         C61 * C67 * C14973) *
                        C15179)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C119 +
                      (C272 * C120 + C68 * C305) * C14875) *
                         C61 * C67 * C1265 -
                     ((C272 * C121 + C68 * C306) * C14875 +
                      (C272 * C78 + C68 * C274) * C119) *
                         C61 * C67 * C1266 +
                     ((C272 * C79 + C68 * C275) * C119 +
                      (C272 * C122 + C68 * C307) * C14875) *
                         C61 * C67 * C1267 -
                     ((C272 * C123 + C68 * C308) * C14875 +
                      (C272 * C80 + C68 * C276) * C119) *
                         C61 * C67 * C15183) *
                        C15154 +
                    (((C272 * C828 + C68 * C1131) * C119 +
                      (C272 * C890 + C68 * C1181) * C14875) *
                         C61 * C67 * C1266 -
                     ((C272 * C891 + C68 * C1182) * C14875 +
                      (C272 * C829 + C68 * C1132) * C119) *
                         C61 * C67 * C1265 -
                     ((C272 * C892 + C68 * C1183) * C14875 +
                      (C272 * C830 + C68 * C1133) * C119) *
                         C61 * C67 * C1267 +
                     ((C272 * C1601 + C68 * C1819) * C119 +
                      (C272 * C1639 + C68 * C1855) * C14875) *
                         C61 * C67 * C15183) *
                        C14973)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C2474 +
                      (C272 * C120 + C68 * C305) * C2430 -
                      (C272 * C385 + C68 * C688) * C2475 -
                      (C272 * C449 + C68 * C737) * C2431 +
                      (C272 * C387 + C68 * C690) * C2476 +
                      (C272 * C450 + C68 * C738) * C15179) *
                         C61 * C67 * C15139 +
                     ((C272 * C384 + C68 * C687) * C2475 -
                      ((C272 * C121 + C68 * C306) * C2430 +
                       (C272 * C78 + C68 * C274) * C2474) +
                      (C272 * C451 + C68 * C739) * C2431 -
                      (C272 * C388 + C68 * C691) * C2476 -
                      (C272 * C452 + C68 * C740) * C15179) *
                         C61 * C67 * C14845) *
                        C15154 +
                    (((C272 * C1941 + C68 * C2277) * C2475 -
                      ((C272 * C891 + C68 * C1182) * C2430 +
                       (C272 * C829 + C68 * C1132) * C2474) +
                      (C272 * C2003 + C68 * C2333) * C2431 -
                      (C272 * C3024 + C68 * C3288) * C2476 -
                      (C272 * C3073 + C68 * C3331) * C15179) *
                         C61 * C67 * C15139 +
                     ((C272 * C828 + C68 * C1131) * C2474 +
                      (C272 * C890 + C68 * C1181) * C2430 -
                      (C272 * C1942 + C68 * C2278) * C2475 -
                      (C272 * C2004 + C68 * C2334) * C2431 +
                      (C272 * C3759 + C68 * C4071) * C2476 +
                      (C272 * C3813 + C68 * C4123) * C15179) *
                         C61 * C67 * C14845) *
                        C14973)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C1675 +
                     (C272 * C153 + C68 * C332) * C15154 -
                     (C272 * C829 + C68 * C1132) * C1676 -
                     (C272 * C943 + C68 * C1225) * C14973) *
                        C61 * C67 * C14875 * C1265 +
                    ((C272 * C828 + C68 * C1131) * C1676 -
                     ((C272 * C154 + C68 * C333) * C15154 +
                      (C272 * C78 + C68 * C274) * C1675) +
                     (C272 * C945 + C68 * C1227) * C14973) *
                        C61 * C67 * C14875 * C1266 +
                    ((C272 * C79 + C68 * C275) * C1675 +
                     (C272 * C155 + C68 * C334) * C15154 -
                     (C272 * C830 + C68 * C1133) * C1676 -
                     (C272 * C947 + C68 * C1229) * C14973) *
                        C61 * C67 * C14875 * C1267 +
                    ((C272 * C1601 + C68 * C1819) * C1676 -
                     ((C272 * C156 + C68 * C335) * C15154 +
                      (C272 * C80 + C68 * C276) * C1675) +
                     (C272 * C1677 + C68 * C1890) * C14973) *
                        C61 * C67 * C14875 * C15183)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C1675 +
                      (C272 * C153 + C68 * C332) * C15154 -
                      (C272 * C829 + C68 * C1132) * C1676 -
                      (C272 * C943 + C68 * C1225) * C14973) *
                         C61 * C67 * C2430 +
                     ((C272 * C1941 + C68 * C2277) * C1676 -
                      ((C272 * C499 + C68 * C781) * C15154 +
                       (C272 * C385 + C68 * C688) * C1675) +
                      (C272 * C2059 + C68 * C2386) * C14973) *
                         C61 * C67 * C2431 +
                     ((C272 * C387 + C68 * C690) * C1675 +
                      (C272 * C500 + C68 * C782) * C15154 -
                      (C272 * C3024 + C68 * C3288) * C1676 -
                      (C272 * C3118 + C68 * C3373) * C14973) *
                         C61 * C67 * C15179) *
                        C15139 +
                    (((C272 * C828 + C68 * C1131) * C1676 -
                      ((C272 * C154 + C68 * C333) * C15154 +
                       (C272 * C78 + C68 * C274) * C1675) +
                      (C272 * C945 + C68 * C1227) * C14973) *
                         C61 * C67 * C2430 +
                     ((C272 * C384 + C68 * C687) * C1675 +
                      (C272 * C501 + C68 * C783) * C15154 -
                      (C272 * C1942 + C68 * C2278) * C1676 -
                      (C272 * C2060 + C68 * C2387) * C14973) *
                         C61 * C67 * C2431 +
                     ((C272 * C3759 + C68 * C4071) * C1676 -
                      ((C272 * C502 + C68 * C784) * C15154 +
                       (C272 * C388 + C68 * C691) * C1675) +
                      (C272 * C3865 + C68 * C4174) * C14973) *
                         C61 * C67 * C15179) *
                        C14845)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C72 + (C71 * C83 + C61 * C92) * C62 -
          (C71 * C78 + C61 * C84) * C73 - (C71 * C85 + C61 * C93) * C63 +
          (C71 * C79 + C61 * C86) * C74 + (C71 * C87 + C61 * C94) * C64 -
          (C71 * C80 + C61 * C88) * C75 - (C71 * C89 + C61 * C95) * C65 +
          (C71 * C81 + C61 * C90) * C76 + (C71 * C91 + C61 * C96) * C66) *
         C67 * C68 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C381 + (C71 * C83 + C61 * C92) * C375 -
           (C71 * C78 + C61 * C84) * C382 - (C71 * C85 + C61 * C93) * C376 +
           (C71 * C79 + C61 * C86) * C383 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C15214 +
          ((C71 * C384 + C61 * C390) * C382 -
           ((C71 * C391 + C61 * C402) * C375 +
            (C71 * C385 + C61 * C392) * C381) +
           (C71 * C393 + C61 * C403) * C376 - (C71 * C386 + C61 * C394) * C383 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C15202 +
          ((C71 * C387 + C61 * C396) * C381 + (C71 * C397 + C61 * C405) * C375 -
           (C71 * C388 + C61 * C398) * C382 - (C71 * C399 + C61 * C406) * C376 +
           (C71 * C389 + C61 * C400) * C383 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2433 + (C71 * C83 + C61 * C92) * C15211 -
           (C71 * C78 + C61 * C84) * C2434 - (C71 * C85 + C61 * C93) * C15198 +
           (C71 * C79 + C61 * C86) * C2435 + (C71 * C87 + C61 * C94) * C15173) *
              C67 * C68 * C14886 * C2430 +
          ((C71 * C384 + C61 * C390) * C2434 -
           ((C71 * C391 + C61 * C402) * C15211 +
            (C71 * C385 + C61 * C392) * C2433) +
           (C71 * C393 + C61 * C403) * C15198 -
           (C71 * C386 + C61 * C394) * C2435 -
           (C71 * C395 + C61 * C404) * C15173) *
              C67 * C68 * C14886 * C2431 +
          ((C71 * C387 + C61 * C396) * C2433 +
           (C71 * C397 + C61 * C405) * C15211 -
           (C71 * C388 + C61 * C398) * C2434 -
           (C71 * C399 + C61 * C406) * C15198 +
           (C71 * C389 + C61 * C400) * C2435 +
           (C71 * C401 + C61 * C407) * C15173) *
              C67 * C68 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2771 + (C71 * C83 + C61 * C92) * C14835) *
              C67 * C68 * C14886 * C2766 -
          ((C71 * C391 + C61 * C402) * C14835 +
           (C71 * C385 + C61 * C392) * C2771) *
              C67 * C68 * C14886 * C2767 +
          ((C71 * C387 + C61 * C396) * C2771 +
           (C71 * C397 + C61 * C405) * C14835) *
              C67 * C68 * C14886 * C2768 -
          ((C71 * C2774 + C61 * C2778) * C14835 +
           (C71 * C2772 + C61 * C2775) * C2771) *
              C67 * C68 * C14886 * C2769 +
          ((C71 * C2773 + C61 * C2776) * C2771 +
           (C71 * C2777 + C61 * C2779) * C14835) *
              C67 * C68 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C119 +
           (C71 * C120 + C61 * C125) * C14875) *
              C67 * C68 * C62 -
          ((C71 * C121 + C61 * C126) * C14875 +
           (C71 * C78 + C61 * C84) * C119) *
              C67 * C68 * C63 +
          ((C71 * C79 + C61 * C86) * C119 +
           (C71 * C122 + C61 * C127) * C14875) *
              C67 * C68 * C64 -
          ((C71 * C123 + C61 * C128) * C14875 +
           (C71 * C80 + C61 * C88) * C119) *
              C67 * C68 * C65 +
          ((C71 * C81 + C61 * C90) * C119 +
           (C71 * C124 + C61 * C129) * C14875) *
              C67 * C68 * C66) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C446 + (C71 * C120 + C61 * C125) * C15214 -
           (C71 * C385 + C61 * C392) * C447 -
           (C71 * C449 + C61 * C455) * C15202 +
           (C71 * C387 + C61 * C396) * C448 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C375 +
          ((C71 * C384 + C61 * C390) * C447 -
           ((C71 * C121 + C61 * C126) * C15214 +
            (C71 * C78 + C61 * C84) * C446) +
           (C71 * C451 + C61 * C457) * C15202 -
           (C71 * C388 + C61 * C398) * C448 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C376 +
          ((C71 * C79 + C61 * C86) * C446 + (C71 * C122 + C61 * C127) * C15214 -
           (C71 * C386 + C61 * C394) * C447 -
           (C71 * C453 + C61 * C459) * C15202 +
           (C71 * C389 + C61 * C400) * C448 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C71 * C77 + C61 * C82) * C2474 + (C71 * C120 + C61 * C125) * C2430 -
           (C71 * C385 + C61 * C392) * C2475 -
           (C71 * C449 + C61 * C455) * C2431 +
           (C71 * C387 + C61 * C396) * C2476 +
           (C71 * C450 + C61 * C456) * C15179) *
              C67 * C68 * C15211 +
          ((C71 * C384 + C61 * C390) * C2475 -
           ((C71 * C121 + C61 * C126) * C2430 +
            (C71 * C78 + C61 * C84) * C2474) +
           (C71 * C451 + C61 * C457) * C2431 -
           (C71 * C388 + C61 * C398) * C2476 -
           (C71 * C452 + C61 * C458) * C15179) *
              C67 * C68 * C15198 +
          ((C71 * C79 + C61 * C86) * C2474 + (C71 * C122 + C61 * C127) * C2430 -
           (C71 * C386 + C61 * C394) * C2475 -
           (C71 * C453 + C61 * C459) * C2431 +
           (C71 * C389 + C61 * C400) * C2476 +
           (C71 * C454 + C61 * C460) * C15179) *
              C67 * C68 * C15173) *
         C14886) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C71 * C77 + C61 * C82) * C2802 + (C71 * C120 + C61 * C125) * C2766 -
          (C71 * C385 + C61 * C392) * C2803 -
          (C71 * C449 + C61 * C455) * C2767 +
          (C71 * C387 + C61 * C396) * C2804 +
          (C71 * C450 + C61 * C456) * C2768 -
          (C71 * C2772 + C61 * C2775) * C2805 -
          (C71 * C2807 + C61 * C2809) * C2769 +
          (C71 * C2773 + C61 * C2776) * C2806 +
          (C71 * C2808 + C61 * C2810) * C2770) *
         C67 * C68 * C14835 * C14886) /
            (p * q * std::sqrt(p + q));
    d2eexz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C14875 * C62 -
                    ((C71 * C154 + C61 * C159) * C14886 +
                     (C71 * C78 + C61 * C84) * C152) *
                        C67 * C68 * C14875 * C63 +
                    ((C71 * C79 + C61 * C86) * C152 +
                     (C71 * C155 + C61 * C160) * C14886) *
                        C67 * C68 * C14875 * C64 -
                    ((C71 * C156 + C61 * C161) * C14886 +
                     (C71 * C80 + C61 * C88) * C152) *
                        C67 * C68 * C14875 * C65 +
                    ((C71 * C81 + C61 * C90) * C152 +
                     (C71 * C157 + C61 * C162) * C14886) *
                        C67 * C68 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C152 +
                      (C71 * C153 + C61 * C158) * C14886) *
                         C67 * C68 * C15214 -
                     ((C71 * C499 + C61 * C505) * C14886 +
                      (C71 * C385 + C61 * C392) * C152) *
                         C67 * C68 * C15202 +
                     ((C71 * C387 + C61 * C396) * C152 +
                      (C71 * C500 + C61 * C506) * C14886) *
                         C67 * C68 * C15179) *
                        C375 +
                    (((C71 * C384 + C61 * C390) * C152 +
                      (C71 * C501 + C61 * C507) * C14886) *
                         C67 * C68 * C15202 -
                     ((C71 * C154 + C61 * C159) * C14886 +
                      (C71 * C78 + C61 * C84) * C152) *
                         C67 * C68 * C15214 -
                     ((C71 * C502 + C61 * C508) * C14886 +
                      (C71 * C388 + C61 * C398) * C152) *
                         C67 * C68 * C15179) *
                        C376 +
                    (((C71 * C79 + C61 * C86) * C152 +
                      (C71 * C155 + C61 * C160) * C14886) *
                         C67 * C68 * C15214 -
                     ((C71 * C503 + C61 * C509) * C14886 +
                      (C71 * C386 + C61 * C394) * C152) *
                         C67 * C68 * C15202 +
                     ((C71 * C389 + C61 * C400) * C152 +
                      (C71 * C504 + C61 * C510) * C14886) *
                         C67 * C68 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C71 * C77 + C61 * C82) * C152 +
                      (C71 * C153 + C61 * C158) * C14886) *
                         C67 * C68 * C2430 -
                     ((C71 * C499 + C61 * C505) * C14886 +
                      (C71 * C385 + C61 * C392) * C152) *
                         C67 * C68 * C2431 +
                     ((C71 * C387 + C61 * C396) * C152 +
                      (C71 * C500 + C61 * C506) * C14886) *
                         C67 * C68 * C15179) *
                        C15211 +
                    (((C71 * C384 + C61 * C390) * C152 +
                      (C71 * C501 + C61 * C507) * C14886) *
                         C67 * C68 * C2431 -
                     ((C71 * C154 + C61 * C159) * C14886 +
                      (C71 * C78 + C61 * C84) * C152) *
                         C67 * C68 * C2430 -
                     ((C71 * C502 + C61 * C508) * C14886 +
                      (C71 * C388 + C61 * C398) * C152) *
                         C67 * C68 * C15179) *
                        C15198 +
                    (((C71 * C79 + C61 * C86) * C152 +
                      (C71 * C155 + C61 * C160) * C14886) *
                         C67 * C68 * C2430 -
                     ((C71 * C503 + C61 * C509) * C14886 +
                      (C71 * C386 + C61 * C394) * C152) *
                         C67 * C68 * C2431 +
                     ((C71 * C389 + C61 * C400) * C152 +
                      (C71 * C504 + C61 * C510) * C14886) *
                         C67 * C68 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C71 * C77 + C61 * C82) * C152 +
                     (C71 * C153 + C61 * C158) * C14886) *
                        C67 * C68 * C2766 -
                    ((C71 * C499 + C61 * C505) * C14886 +
                     (C71 * C385 + C61 * C392) * C152) *
                        C67 * C68 * C2767 +
                    ((C71 * C387 + C61 * C396) * C152 +
                     (C71 * C500 + C61 * C506) * C14886) *
                        C67 * C68 * C2768 -
                    ((C71 * C2833 + C61 * C2835) * C14886 +
                     (C71 * C2772 + C61 * C2775) * C152) *
                        C67 * C68 * C2769 +
                    ((C71 * C2773 + C61 * C2776) * C152 +
                     (C71 * C2834 + C61 * C2836) * C14886) *
                        C67 * C68 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C185 * C77 + C67 * C186) * C72 + (C185 * C83 + C67 * C191) * C62 -
          (C185 * C78 + C67 * C187) * C73 - (C185 * C85 + C67 * C192) * C63 +
          (C185 * C79 + C67 * C188) * C74 + (C185 * C87 + C67 * C193) * C64 -
          (C185 * C80 + C67 * C189) * C75 - (C185 * C89 + C67 * C194) * C65 +
          (C185 * C81 + C67 * C190) * C76 + (C185 * C91 + C67 * C195) * C66) *
         C68 * C61 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C381 + (C185 * C83 + C67 * C191) * C375 -
           (C185 * C78 + C67 * C187) * C382 - (C185 * C85 + C67 * C192) * C376 +
           (C185 * C79 + C67 * C188) * C383 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C15214 +
          ((C185 * C384 + C67 * C549) * C382 -
           ((C185 * C391 + C67 * C555) * C375 +
            (C185 * C385 + C67 * C550) * C381) +
           (C185 * C393 + C67 * C556) * C376 -
           (C185 * C386 + C67 * C551) * C383 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C15202 +
          ((C185 * C387 + C67 * C552) * C381 +
           (C185 * C397 + C67 * C558) * C375 -
           (C185 * C388 + C67 * C553) * C382 -
           (C185 * C399 + C67 * C559) * C376 +
           (C185 * C389 + C67 * C554) * C383 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2433 +
           (C185 * C83 + C67 * C191) * C15211 -
           (C185 * C78 + C67 * C187) * C2434 -
           (C185 * C85 + C67 * C192) * C15198 +
           (C185 * C79 + C67 * C188) * C2435 +
           (C185 * C87 + C67 * C193) * C15173) *
              C68 * C61 * C14886 * C2430 +
          ((C185 * C384 + C67 * C549) * C2434 -
           ((C185 * C391 + C67 * C555) * C15211 +
            (C185 * C385 + C67 * C550) * C2433) +
           (C185 * C393 + C67 * C556) * C15198 -
           (C185 * C386 + C67 * C551) * C2435 -
           (C185 * C395 + C67 * C557) * C15173) *
              C68 * C61 * C14886 * C2431 +
          ((C185 * C387 + C67 * C552) * C2433 +
           (C185 * C397 + C67 * C558) * C15211 -
           (C185 * C388 + C67 * C553) * C2434 -
           (C185 * C399 + C67 * C559) * C15198 +
           (C185 * C389 + C67 * C554) * C2435 +
           (C185 * C401 + C67 * C560) * C15173) *
              C68 * C61 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C185 * C77 + C67 * C186) * C2771 +
           (C185 * C83 + C67 * C191) * C14835) *
              C68 * C61 * C14886 * C2766 -
          ((C185 * C391 + C67 * C555) * C14835 +
           (C185 * C385 + C67 * C550) * C2771) *
              C68 * C61 * C14886 * C2767 +
          ((C185 * C387 + C67 * C552) * C2771 +
           (C185 * C397 + C67 * C558) * C14835) *
              C68 * C61 * C14886 * C2768 -
          ((C185 * C2774 + C67 * C2861) * C14835 +
           (C185 * C2772 + C67 * C2859) * C2771) *
              C68 * C61 * C14886 * C2769 +
          ((C185 * C2773 + C67 * C2860) * C2771 +
           (C185 * C2777 + C67 * C2862) * C14835) *
              C68 * C61 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C119 +
                     (C185 * C120 + C67 * C218) * C14875) *
                        C68 * C61 * C62 -
                    ((C185 * C121 + C67 * C219) * C14875 +
                     (C185 * C78 + C67 * C187) * C119) *
                        C68 * C61 * C63 +
                    ((C185 * C79 + C67 * C188) * C119 +
                     (C185 * C122 + C67 * C220) * C14875) *
                        C68 * C61 * C64 -
                    ((C185 * C123 + C67 * C221) * C14875 +
                     (C185 * C80 + C67 * C189) * C119) *
                        C68 * C61 * C65 +
                    ((C185 * C81 + C67 * C190) * C119 +
                     (C185 * C124 + C67 * C222) * C14875) *
                        C68 * C61 * C66) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C446 +
                     (C185 * C120 + C67 * C218) * C15214 -
                     (C185 * C385 + C67 * C550) * C447 -
                     (C185 * C449 + C67 * C599) * C15202 +
                     (C185 * C387 + C67 * C552) * C448 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C375 +
                    ((C185 * C384 + C67 * C549) * C447 -
                     ((C185 * C121 + C67 * C219) * C15214 +
                      (C185 * C78 + C67 * C187) * C446) +
                     (C185 * C451 + C67 * C601) * C15202 -
                     (C185 * C388 + C67 * C553) * C448 -
                     (C185 * C452 + C67 * C602) * C15179) *
                        C68 * C61 * C376 +
                    ((C185 * C79 + C67 * C188) * C446 +
                     (C185 * C122 + C67 * C220) * C15214 -
                     (C185 * C386 + C67 * C551) * C447 -
                     (C185 * C453 + C67 * C603) * C15202 +
                     (C185 * C389 + C67 * C554) * C448 +
                     (C185 * C454 + C67 * C604) * C15179) *
                        C68 * C61 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C2474 +
                     (C185 * C120 + C67 * C218) * C2430 -
                     (C185 * C385 + C67 * C550) * C2475 -
                     (C185 * C449 + C67 * C599) * C2431 +
                     (C185 * C387 + C67 * C552) * C2476 +
                     (C185 * C450 + C67 * C600) * C15179) *
                        C68 * C61 * C15211 +
                    ((C185 * C384 + C67 * C549) * C2475 -
                     ((C185 * C121 + C67 * C219) * C2430 +
                      (C185 * C78 + C67 * C187) * C2474) +
                     (C185 * C451 + C67 * C601) * C2431 -
                     (C185 * C388 + C67 * C553) * C2476 -
                     (C185 * C452 + C67 * C602) * C15179) *
                        C68 * C61 * C15198 +
                    ((C185 * C79 + C67 * C188) * C2474 +
                     (C185 * C122 + C67 * C220) * C2430 -
                     (C185 * C386 + C67 * C551) * C2475 -
                     (C185 * C453 + C67 * C603) * C2431 +
                     (C185 * C389 + C67 * C554) * C2476 +
                     (C185 * C454 + C67 * C604) * C15179) *
                        C68 * C61 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C185 * C77 + C67 * C186) * C2802 +
                    (C185 * C120 + C67 * C218) * C2766 -
                    (C185 * C385 + C67 * C550) * C2803 -
                    (C185 * C449 + C67 * C599) * C2767 +
                    (C185 * C387 + C67 * C552) * C2804 +
                    (C185 * C450 + C67 * C600) * C2768 -
                    (C185 * C2772 + C67 * C2859) * C2805 -
                    (C185 * C2807 + C67 * C2885) * C2769 +
                    (C185 * C2773 + C67 * C2860) * C2806 +
                    (C185 * C2808 + C67 * C2886) * C2770) *
                   C68 * C61 * C14835 * C14886) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C14875 * C62 -
                    ((C185 * C154 + C67 * C246) * C14886 +
                     (C185 * C78 + C67 * C187) * C152) *
                        C68 * C61 * C14875 * C63 +
                    ((C185 * C79 + C67 * C188) * C152 +
                     (C185 * C155 + C67 * C247) * C14886) *
                        C68 * C61 * C14875 * C64 -
                    ((C185 * C156 + C67 * C248) * C14886 +
                     (C185 * C80 + C67 * C189) * C152) *
                        C68 * C61 * C14875 * C65 +
                    ((C185 * C81 + C67 * C190) * C152 +
                     (C185 * C157 + C67 * C249) * C14886) *
                        C68 * C61 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C15214 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C15202 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C375 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C15202 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C15214 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C376 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C15214 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C15202 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C185 * C77 + C67 * C186) * C152 +
                      (C185 * C153 + C67 * C245) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C499 + C67 * C643) * C14886 +
                      (C185 * C385 + C67 * C550) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C387 + C67 * C552) * C152 +
                      (C185 * C500 + C67 * C644) * C14886) *
                         C68 * C61 * C15179) *
                        C15211 +
                    (((C185 * C384 + C67 * C549) * C152 +
                      (C185 * C501 + C67 * C645) * C14886) *
                         C68 * C61 * C2431 -
                     ((C185 * C154 + C67 * C246) * C14886 +
                      (C185 * C78 + C67 * C187) * C152) *
                         C68 * C61 * C2430 -
                     ((C185 * C502 + C67 * C646) * C14886 +
                      (C185 * C388 + C67 * C553) * C152) *
                         C68 * C61 * C15179) *
                        C15198 +
                    (((C185 * C79 + C67 * C188) * C152 +
                      (C185 * C155 + C67 * C247) * C14886) *
                         C68 * C61 * C2430 -
                     ((C185 * C503 + C67 * C647) * C14886 +
                      (C185 * C386 + C67 * C551) * C152) *
                         C68 * C61 * C2431 +
                     ((C185 * C389 + C67 * C554) * C152 +
                      (C185 * C504 + C67 * C648) * C14886) *
                         C68 * C61 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C185 * C77 + C67 * C186) * C152 +
                     (C185 * C153 + C67 * C245) * C14886) *
                        C68 * C61 * C2766 -
                    ((C185 * C499 + C67 * C643) * C14886 +
                     (C185 * C385 + C67 * C550) * C152) *
                        C68 * C61 * C2767 +
                    ((C185 * C387 + C67 * C552) * C152 +
                     (C185 * C500 + C67 * C644) * C14886) *
                        C68 * C61 * C2768 -
                    ((C185 * C2833 + C67 * C2909) * C14886 +
                     (C185 * C2772 + C67 * C2859) * C152) *
                        C68 * C61 * C2769 +
                    ((C185 * C2773 + C67 * C2860) * C152 +
                     (C185 * C2834 + C67 * C2910) * C14886) *
                        C68 * C61 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C272 * C77 + C68 * C273) * C72 + (C272 * C83 + C68 * C278) * C62 -
          (C272 * C78 + C68 * C274) * C73 - (C272 * C85 + C68 * C279) * C63 +
          (C272 * C79 + C68 * C275) * C74 + (C272 * C87 + C68 * C280) * C64 -
          (C272 * C80 + C68 * C276) * C75 - (C272 * C89 + C68 * C281) * C65 +
          (C272 * C81 + C68 * C277) * C76 + (C272 * C91 + C68 * C282) * C66) *
         C61 * C67 * C14886 * C14875) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C381 + (C272 * C83 + C68 * C278) * C375 -
           (C272 * C78 + C68 * C274) * C382 - (C272 * C85 + C68 * C279) * C376 +
           (C272 * C79 + C68 * C275) * C383 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C15214 +
          ((C272 * C384 + C68 * C687) * C382 -
           ((C272 * C391 + C68 * C693) * C375 +
            (C272 * C385 + C68 * C688) * C381) +
           (C272 * C393 + C68 * C694) * C376 -
           (C272 * C386 + C68 * C689) * C383 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C15202 +
          ((C272 * C387 + C68 * C690) * C381 +
           (C272 * C397 + C68 * C696) * C375 -
           (C272 * C388 + C68 * C691) * C382 -
           (C272 * C399 + C68 * C697) * C376 +
           (C272 * C389 + C68 * C692) * C383 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2433 +
           (C272 * C83 + C68 * C278) * C15211 -
           (C272 * C78 + C68 * C274) * C2434 -
           (C272 * C85 + C68 * C279) * C15198 +
           (C272 * C79 + C68 * C275) * C2435 +
           (C272 * C87 + C68 * C280) * C15173) *
              C61 * C67 * C14886 * C2430 +
          ((C272 * C384 + C68 * C687) * C2434 -
           ((C272 * C391 + C68 * C693) * C15211 +
            (C272 * C385 + C68 * C688) * C2433) +
           (C272 * C393 + C68 * C694) * C15198 -
           (C272 * C386 + C68 * C689) * C2435 -
           (C272 * C395 + C68 * C695) * C15173) *
              C61 * C67 * C14886 * C2431 +
          ((C272 * C387 + C68 * C690) * C2433 +
           (C272 * C397 + C68 * C696) * C15211 -
           (C272 * C388 + C68 * C691) * C2434 -
           (C272 * C399 + C68 * C697) * C15198 +
           (C272 * C389 + C68 * C692) * C2435 +
           (C272 * C401 + C68 * C698) * C15173) *
              C61 * C67 * C14886 * C15179)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C272 * C77 + C68 * C273) * C2771 +
           (C272 * C83 + C68 * C278) * C14835) *
              C61 * C67 * C14886 * C2766 -
          ((C272 * C391 + C68 * C693) * C14835 +
           (C272 * C385 + C68 * C688) * C2771) *
              C61 * C67 * C14886 * C2767 +
          ((C272 * C387 + C68 * C690) * C2771 +
           (C272 * C397 + C68 * C696) * C14835) *
              C61 * C67 * C14886 * C2768 -
          ((C272 * C2774 + C68 * C2935) * C14835 +
           (C272 * C2772 + C68 * C2933) * C2771) *
              C61 * C67 * C14886 * C2769 +
          ((C272 * C2773 + C68 * C2934) * C2771 +
           (C272 * C2777 + C68 * C2936) * C14835) *
              C61 * C67 * C14886 * C2770)) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C119 +
                     (C272 * C120 + C68 * C305) * C14875) *
                        C61 * C67 * C62 -
                    ((C272 * C121 + C68 * C306) * C14875 +
                     (C272 * C78 + C68 * C274) * C119) *
                        C61 * C67 * C63 +
                    ((C272 * C79 + C68 * C275) * C119 +
                     (C272 * C122 + C68 * C307) * C14875) *
                        C61 * C67 * C64 -
                    ((C272 * C123 + C68 * C308) * C14875 +
                     (C272 * C80 + C68 * C276) * C119) *
                        C61 * C67 * C65 +
                    ((C272 * C81 + C68 * C277) * C119 +
                     (C272 * C124 + C68 * C309) * C14875) *
                        C61 * C67 * C66) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C446 +
                     (C272 * C120 + C68 * C305) * C15214 -
                     (C272 * C385 + C68 * C688) * C447 -
                     (C272 * C449 + C68 * C737) * C15202 +
                     (C272 * C387 + C68 * C690) * C448 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C375 +
                    ((C272 * C384 + C68 * C687) * C447 -
                     ((C272 * C121 + C68 * C306) * C15214 +
                      (C272 * C78 + C68 * C274) * C446) +
                     (C272 * C451 + C68 * C739) * C15202 -
                     (C272 * C388 + C68 * C691) * C448 -
                     (C272 * C452 + C68 * C740) * C15179) *
                        C61 * C67 * C376 +
                    ((C272 * C79 + C68 * C275) * C446 +
                     (C272 * C122 + C68 * C307) * C15214 -
                     (C272 * C386 + C68 * C689) * C447 -
                     (C272 * C453 + C68 * C741) * C15202 +
                     (C272 * C389 + C68 * C692) * C448 +
                     (C272 * C454 + C68 * C742) * C15179) *
                        C61 * C67 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C2474 +
                     (C272 * C120 + C68 * C305) * C2430 -
                     (C272 * C385 + C68 * C688) * C2475 -
                     (C272 * C449 + C68 * C737) * C2431 +
                     (C272 * C387 + C68 * C690) * C2476 +
                     (C272 * C450 + C68 * C738) * C15179) *
                        C61 * C67 * C15211 +
                    ((C272 * C384 + C68 * C687) * C2475 -
                     ((C272 * C121 + C68 * C306) * C2430 +
                      (C272 * C78 + C68 * C274) * C2474) +
                     (C272 * C451 + C68 * C739) * C2431 -
                     (C272 * C388 + C68 * C691) * C2476 -
                     (C272 * C452 + C68 * C740) * C15179) *
                        C61 * C67 * C15198 +
                    ((C272 * C79 + C68 * C275) * C2474 +
                     (C272 * C122 + C68 * C307) * C2430 -
                     (C272 * C386 + C68 * C689) * C2475 -
                     (C272 * C453 + C68 * C741) * C2431 +
                     (C272 * C389 + C68 * C692) * C2476 +
                     (C272 * C454 + C68 * C742) * C15179) *
                        C61 * C67 * C15173) *
                   C14886) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C272 * C77 + C68 * C273) * C2802 +
                    (C272 * C120 + C68 * C305) * C2766 -
                    (C272 * C385 + C68 * C688) * C2803 -
                    (C272 * C449 + C68 * C737) * C2767 +
                    (C272 * C387 + C68 * C690) * C2804 +
                    (C272 * C450 + C68 * C738) * C2768 -
                    (C272 * C2772 + C68 * C2933) * C2805 -
                    (C272 * C2807 + C68 * C2959) * C2769 +
                    (C272 * C2773 + C68 * C2934) * C2806 +
                    (C272 * C2808 + C68 * C2960) * C2770) *
                   C61 * C67 * C14835 * C14886) /
                      (p * q * std::sqrt(p + q));
    d2eezz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C14875 * C62 -
                    ((C272 * C154 + C68 * C333) * C14886 +
                     (C272 * C78 + C68 * C274) * C152) *
                        C61 * C67 * C14875 * C63 +
                    ((C272 * C79 + C68 * C275) * C152 +
                     (C272 * C155 + C68 * C334) * C14886) *
                        C61 * C67 * C14875 * C64 -
                    ((C272 * C156 + C68 * C335) * C14886 +
                     (C272 * C80 + C68 * C276) * C152) *
                        C61 * C67 * C14875 * C65 +
                    ((C272 * C81 + C68 * C277) * C152 +
                     (C272 * C157 + C68 * C336) * C14886) *
                        C61 * C67 * C14875 * C66)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C15214 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C15202 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C375 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C15202 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C15214 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C376 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C15214 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C15202 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C272 * C77 + C68 * C273) * C152 +
                      (C272 * C153 + C68 * C332) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C499 + C68 * C781) * C14886 +
                      (C272 * C385 + C68 * C688) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C387 + C68 * C690) * C152 +
                      (C272 * C500 + C68 * C782) * C14886) *
                         C61 * C67 * C15179) *
                        C15211 +
                    (((C272 * C384 + C68 * C687) * C152 +
                      (C272 * C501 + C68 * C783) * C14886) *
                         C61 * C67 * C2431 -
                     ((C272 * C154 + C68 * C333) * C14886 +
                      (C272 * C78 + C68 * C274) * C152) *
                         C61 * C67 * C2430 -
                     ((C272 * C502 + C68 * C784) * C14886 +
                      (C272 * C388 + C68 * C691) * C152) *
                         C61 * C67 * C15179) *
                        C15198 +
                    (((C272 * C79 + C68 * C275) * C152 +
                      (C272 * C155 + C68 * C334) * C14886) *
                         C61 * C67 * C2430 -
                     ((C272 * C503 + C68 * C785) * C14886 +
                      (C272 * C386 + C68 * C689) * C152) *
                         C61 * C67 * C2431 +
                     ((C272 * C389 + C68 * C692) * C152 +
                      (C272 * C504 + C68 * C786) * C14886) *
                         C61 * C67 * C15179) *
                        C15173)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C272 * C77 + C68 * C273) * C152 +
                     (C272 * C153 + C68 * C332) * C14886) *
                        C61 * C67 * C2766 -
                    ((C272 * C499 + C68 * C781) * C14886 +
                     (C272 * C385 + C68 * C688) * C152) *
                        C61 * C67 * C2767 +
                    ((C272 * C387 + C68 * C690) * C152 +
                     (C272 * C500 + C68 * C782) * C14886) *
                        C61 * C67 * C2768 -
                    ((C272 * C2833 + C68 * C2983) * C14886 +
                     (C272 * C2772 + C68 * C2933) * C152) *
                        C61 * C67 * C2769 +
                    ((C272 * C2773 + C68 * C2934) * C152 +
                     (C272 * C2834 + C68 * C2984) * C14886) *
                        C61 * C67 * C2770) *
                   C14835) /
                      (p * q * std::sqrt(p + q));
}
