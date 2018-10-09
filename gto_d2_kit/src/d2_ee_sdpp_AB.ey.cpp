/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdpp_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0211_12(const double ae,
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
    const double C27798 = ae * be;
    const double C27797 = ae + be;
    const double C27796 = 0 * be;
    const double C27795 = xA - xB;
    const double C27827 = yA - yB;
    const double C27830 = zA - zB;
    const double C27841 = 0 * be;
    const double C27867 = 0 * be;
    const double C27913 = p + q;
    const double C27912 = p * q;
    const double C27918 = xP - xQ;
    const double C27917 = bs[2];
    const double C27923 = bs[3];
    const double C27934 = bs[4];
    const double C27955 = bs[5];
    const double C27987 = yP - yQ;
    const double C28013 = zP - zQ;
    const double C93 = bs[0];
    const double C28801 = ce + de;
    const double C28800 = ce * de;
    const double C28799 = xC - xD;
    const double C28814 = yC - yD;
    const double C28823 = zC - zD;
    const double C27806 = 2 * C27798;
    const double C27799 = std::pow(C27797, 2);
    const double C28930 = 2 * C27797;
    const double C27800 = C27798 * C27795;
    const double C28780 = std::pow(C27795, 2);
    const double C28929 = C27795 * ae;
    const double C27842 = C27798 * C27827;
    const double C28866 = std::pow(C27827, 2);
    const double C28939 = C27827 * ae;
    const double C27868 = C27798 * C27830;
    const double C28877 = std::pow(C27830, 2);
    const double C28940 = C27830 * ae;
    const double C27914 = 2 * C27912;
    const double C27926 = C27918 * ae;
    const double C27925 = C27918 * be;
    const double C27922 = std::pow(C27918, 2);
    const double C27990 = C27987 * be;
    const double C27989 = C27918 * C27987;
    const double C28041 = C27987 * ae;
    const double C28040 = C27987 * C27918;
    const double C28065 = std::pow(C27987, 2);
    const double C28016 = C28013 * be;
    const double C28015 = C27918 * C28013;
    const double C28079 = C27987 * C28013;
    const double C28092 = C28013 * ae;
    const double C28091 = C28013 * C27918;
    const double C28116 = C28013 * C27987;
    const double C28128 = std::pow(C28013, 2);
    const double C28811 = 2 * C28801;
    const double C28933 = std::pow(C28801, 2);
    const double C28802 = std::pow(C28799, 2);
    const double C28932 = C28799 * de;
    const double C28931 = C28799 * ce;
    const double C28836 = std::pow(C28814, 2);
    const double C28937 = C28814 * de;
    const double C28935 = C28814 * ce;
    const double C28853 = std::pow(C28823, 2);
    const double C28938 = C28823 * de;
    const double C28936 = C28823 * ce;
    const double C27801 = 2 * C27799;
    const double C28943 = std::pow(C28930, -2);
    const double C28941 = std::pow(C28930, -1);
    const double C28781 = C28780 * C27798;
    const double C28867 = C28866 * C27798;
    const double C28878 = C28877 * C27798;
    const double C27916 = C27914 / C27913;
    const double C108 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C27914 / C27913, 2) -
          (bs[1] * C27914) / C27913) *
         C27798) /
        C27799;
    const double C94 = -(C27918 * bs[1] * C27914) / C27913;
    const double C630 = -(C27987 * bs[1] * C27914) / C27913;
    const double C1200 = -(C28013 * bs[1] * C27914) / C27913;
    const double C27929 = C27923 * C27926;
    const double C27940 = C27934 * C27926;
    const double C27963 = C27955 * C27926;
    const double C99 = (-(bs[1] * C27926 * C27914) / C27913) / C27797;
    const double C27928 = C27923 * C27925;
    const double C27937 = C27934 * C27925;
    const double C27959 = C27955 * C27925;
    const double C98 = (-(bs[1] * C27925 * C27914) / C27913) / C27797;
    const double C27936 = C27922 * C27934;
    const double C27958 = C27922 * C27955;
    const double C27992 = C27923 * C27990;
    const double C27997 = C27934 * C27990;
    const double C28004 = C27955 * C27990;
    const double C152 = (-(bs[1] * C27990 * C27914) / C27913) / C27797;
    const double C27991 = C27989 * ae;
    const double C28043 = C27923 * C28041;
    const double C28048 = C27934 * C28041;
    const double C28055 = C27955 * C28041;
    const double C277 = (-(bs[1] * C28041 * C27914) / C27913) / C27797;
    const double C28042 = C28040 * ae;
    const double C28067 = C28065 * C27934;
    const double C28072 = C28065 * C27955;
    const double C28018 = C27923 * C28016;
    const double C28023 = C27934 * C28016;
    const double C28030 = C27955 * C28016;
    const double C215 = (-(bs[1] * C28016 * C27914) / C27913) / C27797;
    const double C28017 = C28015 * ae;
    const double C28080 = C28079 * ae;
    const double C28094 = C27923 * C28092;
    const double C28099 = C27934 * C28092;
    const double C28106 = C27955 * C28092;
    const double C443 = (-(bs[1] * C28092 * C27914) / C27913) / C27797;
    const double C28093 = C28091 * ae;
    const double C28117 = C28116 * ae;
    const double C28130 = C28128 * C27934;
    const double C28135 = C28128 * C27955;
    const double C28934 = std::pow(C28811, -1);
    const double C28945 = 2 * C28933;
    const double C28803 = C28802 * C28800;
    const double C28837 = C28836 * C28800;
    const double C28854 = C28853 * C28800;
    const double C28782 = C28781 / C27797;
    const double C28868 = C28867 / C27797;
    const double C28879 = C28878 / C27797;
    const double C27919 = std::pow(C27916, 2);
    const double C27924 = -C27916;
    const double C27935 = std::pow(C27916, 4);
    const double C27993 = C27991 * be;
    const double C28044 = C28042 * be;
    const double C28019 = C28017 * be;
    const double C28081 = C28080 * be;
    const double C28095 = C28093 * be;
    const double C28118 = C28117 * be;
    const double C28804 = C28803 / C28801;
    const double C28838 = C28837 / C28801;
    const double C28855 = C28854 / C28801;
    const double C28783 = -C28782;
    const double C28869 = -C28868;
    const double C28880 = -C28879;
    const double C27921 = C27917 * C27919;
    const double C109 = (ae * C27919 * C27917 * C27918 * be +
                         be * C27919 * C27917 * C27918 * ae +
                         C27918 *
                             (C27917 * C27919 + std::pow(C27918, 2) * bs[3] *
                                                    std::pow(-C27916, 3)) *
                             C27798) /
                        C27799;
    const double C157 =
        (C27919 * C27917 * C27918 * (yP - yQ) * ae * be) / C27799;
    const double C220 =
        (C27919 * C27917 * C27918 * (zP - zQ) * ae * be) / C27799;
    const double C282 = (C27919 * C27917 * C27987 * C27918 * ae * be) / C27799;
    const double C326 =
        ((std::pow(C27987, 2) * C27917 * C27919 - (bs[1] * C27914) / C27913) *
         C27798) /
        C27799;
    const double C390 = (C27919 * C27917 * C27987 * C28013 * ae * be) / C27799;
    const double C448 = (C27919 * C27917 * C28013 * C27918 * ae * be) / C27799;
    const double C491 = (C27919 * C27917 * C28013 * C27987 * ae * be) / C27799;
    const double C545 =
        ((std::pow(C28013, 2) * C27917 * C27919 - (bs[1] * C27914) / C27913) *
         C27798) /
        C27799;
    const double C100 = (C27918 * C27919 * C27917 * C27925) / C27797 -
                        (be * bs[1] * C27914) / (C27913 * C27797);
    const double C101 = (C27918 * C27919 * C27917 * C27926) / C27797 -
                        (ae * bs[1] * C27914) / (C27913 * C27797);
    const double C153 = (C27918 * C27919 * C27917 * C27990) / C27797;
    const double C216 = (C27918 * C27919 * C27917 * C28016) / C27797;
    const double C278 = (C27918 * C27919 * C27917 * C28041) / C27797;
    const double C444 = (C27918 * C27919 * C27917 * C28092) / C27797;
    const double C636 = (C27987 * C27919 * C27917 * C27925) / C27797;
    const double C637 = (C27987 * C27919 * C27917 * C27926) / C27797;
    const double C694 = (C27987 * C27919 * C27917 * C27990) / C27797 -
                        (be * bs[1] * C27914) / (C27913 * C27797);
    const double C760 = (C27987 * C27919 * C27917 * C28016) / C27797;
    const double C826 = (C27987 * C27919 * C27917 * C28041) / C27797 -
                        (ae * bs[1] * C27914) / (C27913 * C27797);
    const double C1010 = (C27987 * C27919 * C27917 * C28092) / C27797;
    const double C1206 = (C28013 * C27919 * C27917 * C27925) / C27797;
    const double C1207 = (C28013 * C27919 * C27917 * C27926) / C27797;
    const double C1264 = (C28013 * C27919 * C27917 * C27990) / C27797;
    const double C1330 = (C28013 * C27919 * C27917 * C28016) / C27797 -
                         (be * bs[1] * C27914) / (C27913 * C27797);
    const double C1396 = (C28013 * C27919 * C27917 * C28041) / C27797;
    const double C1580 = (C28013 * C27919 * C27917 * C28092) / C27797 -
                         (ae * bs[1] * C27914) / (C27913 * C27797);
    const double C27927 = std::pow(C27924, 3);
    const double C27956 = std::pow(C27924, 5);
    const double C27944 = C27935 * C27940;
    const double C27943 = C27935 * C27937;
    const double C27942 = C27936 * C27935;
    const double C27954 = C27934 * C27935;
    const double C27999 = C27935 * C27997;
    const double C28025 = C27935 * C28023;
    const double C28050 = C27935 * C28048;
    const double C28068 = C28067 * C27935;
    const double C28101 = C27935 * C28099;
    const double C28131 = C28130 * C27935;
    const double C27996 = C27934 * C27993;
    const double C28003 = C27955 * C27993;
    const double C28047 = C27934 * C28044;
    const double C28054 = C27955 * C28044;
    const double C28022 = C27934 * C28019;
    const double C28029 = C27955 * C28019;
    const double C28083 = C27934 * C28081;
    const double C28086 = C27955 * C28081;
    const double C28098 = C27934 * C28095;
    const double C28105 = C27955 * C28095;
    const double C28120 = C27934 * C28118;
    const double C28123 = C27955 * C28118;
    const double C28805 = -C28804;
    const double C28839 = -C28838;
    const double C28856 = -C28855;
    const double C28784 = std::exp(C28783);
    const double C28870 = std::exp(C28869);
    const double C28881 = std::exp(C28880);
    const double C95 = C27921 * C27922 - (bs[1] * C27914) / C27913;
    const double C629 = C27987 * C27918 * C27921;
    const double C1199 = C28013 * C27918 * C27921;
    const double C2212 = C27921 * C28065 - (bs[1] * C27914) / C27913;
    const double C2614 = C28013 * C27987 * C27921;
    const double C4005 = C27921 * C28128 - (bs[1] * C27914) / C27913;
    const double C27931 = C27927 * C27929;
    const double C27930 = C27927 * C27928;
    const double C27933 = C27923 * C27927;
    const double C27994 = C27927 * C27992;
    const double C28020 = C27927 * C28018;
    const double C28045 = C27927 * C28043;
    const double C28096 = C27927 * C28094;
    const double C158 = (ae * C27919 * C27917 * C27987 * be +
                         C27918 * C27927 * C27923 * C27918 * C27987 * ae * be) /
                        C27799;
    const double C221 = (ae * C27919 * C27917 * C28013 * be +
                         C27918 * C27927 * C27923 * C27918 * C28013 * ae * be) /
                        C27799;
    const double C283 = (be * C27919 * C27917 * C27987 * ae +
                         C27918 * C27927 * C27923 * C27987 * C27918 * ae * be) /
                        C27799;
    const double C327 =
        (C27918 * (C27921 + std::pow(C27987, 2) * C27923 * C27927) * C27798) /
        C27799;
    const double C391 =
        (C27918 * C27927 * C27923 * C27987 * C28013 * ae * be) / C27799;
    const double C392 =
        (C27927 * C27923 * C28081 + C27935 * C27934 * C28081 * C27922) / C27799;
    const double C449 = (be * C27919 * C27917 * C28013 * ae +
                         C27918 * C27927 * C27923 * C28013 * C27918 * ae * be) /
                        C27799;
    const double C492 =
        (C27918 * C27927 * C27923 * C28013 * C27987 * ae * be) / C27799;
    const double C493 =
        (C27927 * C27923 * C28118 + C27935 * C27934 * C28118 * C27922) / C27799;
    const double C546 =
        (C27918 * (C27921 + std::pow(C28013, 2) * C27923 * C27927) * C27798) /
        C27799;
    const double C642 =
        (C27987 * (C27921 + C27922 * C27923 * C27927) * C27798) / C27799;
    const double C698 =
        (be * C27919 * C27917 * C27926 + C27987 * C27927 * C27923 * C27993) /
        C27799;
    const double C764 = (C27987 * C27927 * C27923 * C28019) / C27799;
    const double C830 =
        (ae * C27919 * C27917 * C27925 + C27987 * C27927 * C27923 * C28044) /
        C27799;
    const double C886 =
        (ae * C27919 * C27917 * C27990 + be * C27919 * C27917 * C28041 +
         C27987 * (C27921 + C28065 * C27923 * C27927) * C27798) /
        C27799;
    const double C952 =
        (ae * C27919 * C27917 * C28016 + C27987 * C27927 * C27923 * C28081) /
        C27799;
    const double C1014 = (C27987 * C27927 * C27923 * C28095) / C27799;
    const double C1068 =
        (be * C27919 * C27917 * C28092 + C27987 * C27927 * C27923 * C28118) /
        C27799;
    const double C1128 =
        (C27987 * (C27921 + C28128 * C27923 * C27927) * C27798) / C27799;
    const double C1212 =
        (C28013 * (C27921 + C27922 * C27923 * C27927) * C27798) / C27799;
    const double C1268 = (C28013 * C27927 * C27923 * C27993) / C27799;
    const double C1334 =
        (be * C27919 * C27917 * C27926 + C28013 * C27927 * C27923 * C28019) /
        C27799;
    const double C1400 = (C28013 * C27927 * C27923 * C28044) / C27799;
    const double C1456 =
        (C28013 * (C27921 + C28065 * C27923 * C27927) * C27798) / C27799;
    const double C1522 =
        (be * C27919 * C27917 * C28041 + C28013 * C27927 * C27923 * C28081) /
        C27799;
    const double C1584 =
        (ae * C27919 * C27917 * C27925 + C28013 * C27927 * C27923 * C28095) /
        C27799;
    const double C1638 =
        (ae * C27919 * C27917 * C27990 + C28013 * C27927 * C27923 * C28118) /
        C27799;
    const double C1698 =
        (ae * C27919 * C27917 * C28016 + be * C27919 * C27917 * C28092 +
         C28013 * (C27921 + C28128 * C27923 * C27927) * C27798) /
        C27799;
    const double C27969 = C27956 * C27963;
    const double C27966 = C27956 * C27959;
    const double C27965 = C27958 * C27956;
    const double C28006 = C27956 * C28004;
    const double C28032 = C27956 * C28030;
    const double C28057 = C27956 * C28055;
    const double C28073 = C28072 * C27956;
    const double C28108 = C27956 * C28106;
    const double C28136 = C28135 * C27956;
    const double C27947 = C27918 * C27944;
    const double C27953 = be * C27944;
    const double C28350 = C27987 * C27944;
    const double C28491 = C28013 * C27944;
    const double C27946 = C27918 * C27943;
    const double C27952 = ae * C27943;
    const double C28357 = C27987 * C27943;
    const double C28503 = C28013 * C27943;
    const double C27964 = C27954 * ae;
    const double C27962 = C27954 * C27922;
    const double C27961 = C27918 * C27954;
    const double C27960 = C27954 * be;
    const double C28367 = C27954 * C28065;
    const double C28366 = C27987 * C27954;
    const double C28519 = C27954 * C28128;
    const double C28518 = C28013 * C27954;
    const double C28002 = ae * C27999;
    const double C28001 = C27918 * C27999;
    const double C28303 = C27987 * C27999;
    const double C28509 = C28013 * C27999;
    const double C28028 = ae * C28025;
    const double C28027 = C27918 * C28025;
    const double C28382 = C27987 * C28025;
    const double C28456 = C28013 * C28025;
    const double C28053 = be * C28050;
    const double C28052 = C27918 * C28050;
    const double C28305 = C27987 * C28050;
    const double C28499 = C28013 * C28050;
    const double C28104 = be * C28101;
    const double C28103 = C27918 * C28101;
    const double C28389 = C27987 * C28101;
    const double C28458 = C28013 * C28101;
    const double C27998 = C27935 * C27996;
    const double C28005 = C27956 * C28003;
    const double C28049 = C27935 * C28047;
    const double C28056 = C27956 * C28054;
    const double C28024 = C27935 * C28022;
    const double C28031 = C27956 * C28029;
    const double C28084 = C27935 * C28083;
    const double C28087 = C27956 * C28086;
    const double C28100 = C27935 * C28098;
    const double C28107 = C27956 * C28105;
    const double C28121 = C27935 * C28120;
    const double C28124 = C27956 * C28123;
    const double C28806 = std::exp(C28805);
    const double C28840 = std::exp(C28839);
    const double C28857 = std::exp(C28856);
    const double C4976 = C28784 * C636;
    const double C9489 = C28784 * C1206;
    const double C27802 = C27800 * C28784;
    const double C28942 = C28784 * C28929;
    const double C77 =
        (C28784 * std::pow(C28929, 2)) / C27799 + C28784 / C28930;
    const double C79 = C28943 * C28784;
    const double C12452 = C28941 * C28784;
    const double C163 = C28870 * C153;
    const double C9369 = C28870 * C1264;
    const double C27843 = C27842 * C28870;
    const double C151 = -(2 * C27798 * (yA - yB) * C28870) / C27797;
    const double C325 =
        -((C28870 - (C27827 * 2 * C27798 * C27827 * C28870) / C27797) *
          C27806) /
        C27797;
    const double C28951 = C28870 * C28939;
    const double C4396 =
        (C28870 * std::pow(C28939, 2)) / C27799 + C28870 / C28930;
    const double C4398 = C28943 * C28870;
    const double C12454 = C28941 * C28870;
    const double C226 = C28881 * C216;
    const double C4910 = C28881 * C760;
    const double C27869 = C27868 * C28881;
    const double C214 = -(2 * C27798 * (zA - zB) * C28881) / C27797;
    const double C544 =
        -((C28881 - (C27830 * 2 * C27798 * C27830 * C28881) / C27797) *
          C27806) /
        C27797;
    const double C28952 = C28881 * C28940;
    const double C8449 =
        (C28881 * std::pow(C28940, 2)) / C27799 + C28881 / C28930;
    const double C8451 = C28943 * C28881;
    const double C17613 = C28941 * C28881;
    const double C103 =
        (C27919 * C27917 * C27926 + C27918 * (C27918 * C27931 + C27921 * ae) +
         C27918 * C27921 * ae) /
        C27797;
    const double C635 = (C27987 * (C27918 * C27931 + C27921 * ae)) / C27797;
    const double C1205 = (C28013 * (C27918 * C27931 + C27921 * ae)) / C27797;
    const double C2216 = (C27919 * C27917 * C27926 + C27931 * C28065) / C27797;
    const double C2618 = (C28013 * C27987 * C27931) / C27797;
    const double C4009 = (C27919 * C27917 * C27926 + C27931 * C28128) / C27797;
    const double C4764 =
        (2 * C27987 * C27931 + C27987 * (C27931 + C27944 * C28065)) / C27797;
    const double C5341 = (C28013 * (C27931 + C27944 * C28065)) / C27797;
    const double C9281 =
        (2 * C28013 * C27931 + C28013 * (C27931 + C27944 * C28128)) / C27797;
    const double C110 =
        ((C27921 + C27922 * C27923 * C27927) * C27798 +
         ae * (C27918 * C27930 + C27921 * be) +
         be * (C27918 * C27931 + C27921 * ae) +
         C27918 *
             (ae * C27930 + be * C27931 +
              C27918 *
                  (C27923 * C27927 + C27922 * bs[4] * std::pow(C27916, 4)) *
                  C27798)) /
        C27799;
    const double C102 =
        (C27919 * C27917 * C27925 + C27918 * (C27918 * C27930 + C27921 * be) +
         C27918 * C27921 * be) /
        C27797;
    const double C634 = (C27987 * (C27918 * C27930 + C27921 * be)) / C27797;
    const double C1204 = (C28013 * (C27918 * C27930 + C27921 * be)) / C27797;
    const double C2215 = (C27919 * C27917 * C27925 + C27930 * C28065) / C27797;
    const double C2617 = (C28013 * C27987 * C27930) / C27797;
    const double C4008 = (C27919 * C27917 * C27925 + C27930 * C28128) / C27797;
    const double C4763 =
        (2 * C27987 * C27930 + C27987 * (C27930 + C27943 * C28065)) / C27797;
    const double C5340 = (C28013 * (C27930 + C27943 * C28065)) / C27797;
    const double C9280 =
        (2 * C28013 * C27930 + C28013 * (C27930 + C27943 * C28128)) / C27797;
    const double C27941 = C27933 * ae;
    const double C27939 = C27918 * C27933;
    const double C27938 = C27933 * be;
    const double C27945 = C27933 + C27942;
    const double C28069 = C27933 + C28068;
    const double C28132 = C27933 + C28131;
    const double C28304 = C27987 * C27933;
    const double C28457 = C28013 * C27933;
    const double C328 =
        ((C27921 + C28065 * C27923 * C27927) * C27798 +
         (C27933 + C28065 * C27934 * C27935) * C27798 * C27922) /
        C27799;
    const double C547 =
        ((C27921 + C28128 * C27923 * C27927) * C27798 +
         (C27933 + C28128 * C27934 * C27935) * C27798 * C27922) /
        C27799;
    const double C96 =
        2 * C27918 * C27921 + C27918 * (C27921 + C27933 * C27922);
    const double C628 = C27987 * (C27921 + C27933 * C27922);
    const double C1198 = C28013 * (C27921 + C27933 * C27922);
    const double C4761 =
        2 * C27987 * C27921 + C27987 * (C27921 + C27933 * C28065);
    const double C5338 = C28013 * (C27921 + C27933 * C28065);
    const double C9278 =
        2 * C28013 * C27921 + C28013 * (C27921 + C27933 * C28128);
    const double C159 =
        (C27927 * C27923 * C27993 + ae * C27918 * C27994 +
         C27918 * (ae * C27994 + C27918 * C27935 * C27934 * C27993)) /
        C27799;
    const double C154 = (C27919 * C27917 * C27990 + C27994 * C27922) / C27797;
    const double C155 =
        (2 * C27918 * C27994 + C27918 * (C27994 + C27999 * C27922)) / C27797;
    const double C695 =
        (C27987 * C27918 * C27994 + C27918 * C27921 * be) / C27797;
    const double C696 = (C27987 * (C27994 + C27999 * C27922) +
                         (C27921 + C27933 * C27922) * be) /
                        C27797;
    const double C1265 = (C28013 * C27918 * C27994) / C27797;
    const double C1266 = (C28013 * (C27994 + C27999 * C27922)) / C27797;
    const double C2262 =
        (C27919 * C27917 * C27990 + C27987 * (C27987 * C27994 + C27921 * be) +
         C27987 * C27921 * be) /
        C27797;
    const double C2676 = (C28013 * (C27987 * C27994 + C27921 * be)) / C27797;
    const double C4055 = (C27919 * C27917 * C27990 + C27994 * C28128) / C27797;
    const double C9364 =
        (2 * C28013 * C27994 + C28013 * (C27994 + C27999 * C28128)) / C27797;
    const double C222 =
        (C27927 * C27923 * C28019 + ae * C27918 * C28020 +
         C27918 * (ae * C28020 + C27918 * C27935 * C27934 * C28019)) /
        C27799;
    const double C217 = (C27919 * C27917 * C28016 + C28020 * C27922) / C27797;
    const double C218 =
        (2 * C27918 * C28020 + C27918 * (C28020 + C28025 * C27922)) / C27797;
    const double C761 = (C27987 * C27918 * C28020) / C27797;
    const double C762 = (C27987 * (C28020 + C28025 * C27922)) / C27797;
    const double C1331 =
        (C28013 * C27918 * C28020 + C27918 * C27921 * be) / C27797;
    const double C1332 = (C28013 * (C28020 + C28025 * C27922) +
                          (C27921 + C27933 * C27922) * be) /
                         C27797;
    const double C2306 = (C27919 * C27917 * C28016 + C28020 * C28065) / C27797;
    const double C2732 =
        (C28013 * C27987 * C28020 + C27987 * C27921 * be) / C27797;
    const double C4099 =
        (C27919 * C27917 * C28016 + C28013 * (C28013 * C28020 + C27921 * be) +
         C28013 * C27921 * be) /
        C27797;
    const double C4905 =
        (2 * C27987 * C28020 + C27987 * (C28020 + C28025 * C28065)) / C27797;
    const double C5450 = (C28013 * (C28020 + C28025 * C28065) +
                          (C27921 + C27933 * C28065) * be) /
                         C27797;
    const double C284 =
        (C27927 * C27923 * C28044 + be * C27918 * C28045 +
         C27918 * (be * C28045 + C27918 * C27935 * C27934 * C28044)) /
        C27799;
    const double C279 = (C27919 * C27917 * C28041 + C28045 * C27922) / C27797;
    const double C280 =
        (2 * C27918 * C28045 + C27918 * (C28045 + C28050 * C27922)) / C27797;
    const double C827 =
        (C27987 * C27918 * C28045 + C27918 * C27921 * ae) / C27797;
    const double C828 = (C27987 * (C28045 + C28050 * C27922) +
                         (C27921 + C27933 * C27922) * ae) /
                        C27797;
    const double C1397 = (C28013 * C27918 * C28045) / C27797;
    const double C1398 = (C28013 * (C28045 + C28050 * C27922)) / C27797;
    const double C2350 =
        (C27919 * C27917 * C28041 + C27987 * (C27987 * C28045 + C27921 * ae) +
         C27987 * C27921 * ae) /
        C27797;
    const double C2788 = (C28013 * (C27987 * C28045 + C27921 * ae)) / C27797;
    const double C4143 = (C27919 * C27917 * C28041 + C28045 * C28128) / C27797;
    const double C9484 =
        (2 * C28013 * C28045 + C28013 * (C28045 + C28050 * C28128)) / C27797;
    const double C450 =
        (C27927 * C27923 * C28095 + be * C27918 * C28096 +
         C27918 * (be * C28096 + C27918 * C27935 * C27934 * C28095)) /
        C27799;
    const double C445 = (C27919 * C27917 * C28092 + C28096 * C27922) / C27797;
    const double C446 =
        (2 * C27918 * C28096 + C27918 * (C28096 + C28101 * C27922)) / C27797;
    const double C1011 = (C27987 * C27918 * C28096) / C27797;
    const double C1012 = (C27987 * (C28096 + C28101 * C27922)) / C27797;
    const double C1581 =
        (C28013 * C27918 * C28096 + C27918 * C27921 * ae) / C27797;
    const double C1582 = (C28013 * (C28096 + C28101 * C27922) +
                          (C27921 + C27933 * C27922) * ae) /
                         C27797;
    const double C2476 = (C27919 * C27917 * C28092 + C28096 * C28065) / C27797;
    const double C2950 =
        (C28013 * C27987 * C28096 + C27987 * C27921 * ae) / C27797;
    const double C4269 =
        (C27919 * C27917 * C28092 + C28013 * (C28013 * C28096 + C27921 * ae) +
         C28013 * C27921 * ae) /
        C27797;
    const double C5151 =
        (2 * C27987 * C28096 + C27987 * (C28096 + C28101 * C28065)) / C27797;
    const double C5662 = (C28013 * (C28096 + C28101 * C28065) +
                          (C27921 + C27933 * C28065) * ae) /
                         C27797;
    const double C165 = C28870 * C158;
    const double C228 = C28881 * C221;
    const double C335 = C28870 * C327;
    const double C396 = C28881 * C391;
    const double C399 = C28881 * C392;
    const double C497 = C28870 * C492;
    const double C500 = C28870 * C493;
    const double C554 = C28881 * C546;
    const double C4773 = C28784 * C642;
    const double C4912 = C28881 * C764;
    const double C4978 = C28784 * C830;
    const double C5096 = C28881 * C952;
    const double C5156 = C28784 * C1014;
    const double C5271 = C28881 * C1128;
    const double C9290 = C28784 * C1212;
    const double C9371 = C28870 * C1268;
    const double C9491 = C28784 * C1400;
    const double C9560 = C28870 * C1456;
    const double C9688 = C28784 * C1584;
    const double C9748 = C28870 * C1638;
    const double C27973 = C27918 * C27969;
    const double C28352 = C27969 * C28065;
    const double C28471 = C27987 * C27969;
    const double C28493 = C27969 * C28128;
    const double C27972 = C27918 * C27966;
    const double C28359 = C27966 * C28065;
    const double C28477 = C27987 * C27966;
    const double C28505 = C27966 * C28128;
    const double C27971 = C27954 + C27965;
    const double C28008 = C28006 * C27922;
    const double C28310 = C27918 * C28006;
    const double C28365 = C27987 * C28006;
    const double C28511 = C28006 * C28128;
    const double C28034 = C28032 * C27922;
    const double C28320 = C27918 * C28032;
    const double C28384 = C28032 * C28065;
    const double C28481 = C27987 * C28032;
    const double C28517 = C28013 * C28032;
    const double C28059 = C28057 * C27922;
    const double C28312 = C27918 * C28057;
    const double C28368 = C27987 * C28057;
    const double C28500 = C28057 * C28128;
    const double C28074 = C27954 + C28073;
    const double C28110 = C28108 * C27922;
    const double C28326 = C27918 * C28108;
    const double C28391 = C28108 * C28065;
    const double C28483 = C27987 * C28108;
    const double C28520 = C28013 * C28108;
    const double C28137 = C27954 + C28136;
    const double C8078 = (C27987 * C27931 + C28350 * C28128) / C27797;
    const double C27957 = C27952 + C27953;
    const double C8077 = (C27987 * C27930 + C28357 * C28128) / C27797;
    const double C27968 = C27933 + C27962;
    const double C27970 = C27961 * ae;
    const double C27967 = C27961 * be;
    const double C28311 = C27987 * C27961;
    const double C28463 = C28013 * C27961;
    const double C28372 = C27933 + C28367;
    const double C28374 = C28366 * ae;
    const double C28371 = C28366 * be;
    const double C28482 = C28013 * C28366;
    const double C28524 = C27933 + C28519;
    const double C28526 = C28518 * ae;
    const double C28523 = C28518 * be;
    const double C4056 = (C27918 * C27994 + C28001 * C28128) / C27797;
    const double C2307 = (C27918 * C28020 + C28027 * C28065) / C27797;
    const double C28363 = C28002 + C28053;
    const double C4144 = (C27918 * C28045 + C28052 * C28128) / C27797;
    const double C28515 = C28028 + C28104;
    const double C2477 = (C27918 * C28096 + C28103 * C28065) / C27797;
    const double C160 =
        (2 * (ae * C27994 + C27918 * C27998) + ae * (C27994 + C27999 * C27922) +
         C27918 *
             (C27998 + ae * C27918 * C27999 +
              C27918 * (ae * C27999 + C27918 * C27956 * C27955 * C27993))) /
        C27799;
    const double C699 = (be * (C27918 * C27931 + C27921 * ae) +
                         C27987 * (ae * C27994 + C27918 * C27998)) /
                        C27799;
    const double C1269 = (C28013 * (ae * C27994 + C27918 * C27998)) / C27799;
    const double C2265 = (C27927 * C27923 * C27993 + be * C27987 * C27931 +
                          C27987 * (be * C27931 + C27987 * C27998)) /
                         C27799;
    const double C2679 = (C28013 * (be * C27931 + C27987 * C27998)) / C27799;
    const double C4058 = (C27927 * C27923 * C27993 + C27998 * C28128) / C27799;
    const double C28007 = C27918 * C28005;
    const double C28351 = C27987 * C28005;
    const double C4853 =
        (2 * (be * C27931 + C27987 * C27998) + be * (C27931 + C27944 * C28065) +
         C27987 * (C27998 + be * C27987 * C27944 +
                   C27987 * (C27953 + C27987 * C28005))) /
        C27799;
    const double C5398 = (C28013 * (C27998 + be * C27987 * C27944 +
                                    C27987 * (C27953 + C27987 * C28005))) /
                         C27799;
    const double C9366 =
        (2 * C28013 * C27998 + C28013 * (C27998 + C28005 * C28128)) / C27799;
    const double C12092 =
        (3 * (C27998 + C28005 * C28128) +
         C28013 * (2 * C28013 * C28005 +
                   C28013 * (C28005 +
                             std::pow(C27916, 6) * bs[6] * C27993 * C28128))) /
        C27799;
    const double C285 =
        (2 * (be * C28045 + C27918 * C28049) + be * (C28045 + C28050 * C27922) +
         C27918 *
             (C28049 + be * C27918 * C28050 +
              C27918 * (be * C28050 + C27918 * C27956 * C27955 * C28044))) /
        C27799;
    const double C831 = (ae * (C27918 * C27930 + C27921 * be) +
                         C27987 * (be * C28045 + C27918 * C28049)) /
                        C27799;
    const double C1401 = (C28013 * (be * C28045 + C27918 * C28049)) / C27799;
    const double C2353 = (C27927 * C27923 * C28044 + ae * C27987 * C27930 +
                          C27987 * (ae * C27930 + C27987 * C28049)) /
                         C27799;
    const double C2791 =
        (ae * C28013 * C27930 + C27987 * C28013 * C28049) / C27799;
    const double C4146 = (C27927 * C27923 * C28044 + C28049 * C28128) / C27799;
    const double C28058 = C27918 * C28056;
    const double C28358 = C27987 * C28056;
    const double C28399 = C28013 * C28056;
    const double C4973 =
        (2 * (ae * C27930 + C27987 * C28049) + ae * (C27930 + C27943 * C28065) +
         C27987 * (C28049 + ae * C27987 * C27943 +
                   C27987 * (C27952 + C27987 * C28056))) /
        C27799;
    const double C5506 =
        (C28013 * C28049 + ae * C28013 * C27987 * C27943 +
         C27987 * (ae * C28013 * C27943 + C27987 * C28013 * C28056)) /
        C27799;
    const double C8207 = (ae * (C27930 + C27943 * C28128) +
                          C27987 * (C28049 + C28056 * C28128)) /
                         C27799;
    const double C8208 =
        (C28049 + C28056 * C28128 + ae * (C28357 + C27987 * C27966 * C28128) +
         C27987 * (ae * (C27943 + C27966 * C28128) +
                   C27987 * (C28056 +
                             std::pow(C27916, 6) * bs[6] * C28044 * C28128))) /
        C27799;
    const double C9486 =
        (2 * C28013 * C28049 + C28013 * (C28049 + C28056 * C28128)) / C27799;
    const double C223 =
        (2 * (ae * C28020 + C27918 * C28024) + ae * (C28020 + C28025 * C27922) +
         C27918 *
             (C28024 + ae * C27918 * C28025 +
              C27918 * (ae * C28025 + C27918 * C27956 * C27955 * C28019))) /
        C27799;
    const double C765 = (C27987 * (ae * C28020 + C27918 * C28024)) / C27799;
    const double C1335 = (be * (C27918 * C27931 + C27921 * ae) +
                          C28013 * (ae * C28020 + C27918 * C28024)) /
                         C27799;
    const double C2309 = (C27927 * C27923 * C28019 + C28024 * C28065) / C27799;
    const double C2735 =
        (be * C27987 * C27931 + C28013 * C27987 * C28024) / C27799;
    const double C4102 = (C27927 * C27923 * C28019 + be * C28013 * C27931 +
                          C28013 * (be * C27931 + C28013 * C28024)) /
                         C27799;
    const double C28033 = C27918 * C28031;
    const double C28470 = C27987 * C28031;
    const double C28492 = C28013 * C28031;
    const double C4907 =
        (2 * C27987 * C28024 + C27987 * (C28024 + C28031 * C28065)) / C27799;
    const double C5452 = (be * (C27931 + C27944 * C28065) +
                          C28013 * (C28024 + C28031 * C28065)) /
                         C27799;
    const double C6349 =
        (3 * (C28024 + C28031 * C28065) +
         C27987 * (2 * C27987 * C28031 +
                   C27987 * (C28031 +
                             std::pow(C27916, 6) * bs[6] * C28019 * C28065))) /
        C27799;
    const double C8165 = (C27987 * C28024 + be * C28013 * C28350 +
                          C28013 * (be * C28350 + C28013 * C27987 * C28031)) /
                         C27799;
    const double C9432 =
        (2 * (be * C27931 + C28013 * C28024) + be * (C27931 + C27944 * C28128) +
         C28013 * (C28024 + be * C28013 * C27944 +
                   C28013 * (C27953 + C28013 * C28031))) /
        C27799;
    const double C393 =
        (2 * C27918 * C28084 +
         C27918 * (C28084 + C27956 * C27955 * C28081 * C27922)) /
        C27799;
    const double C953 =
        (ae * C27918 * C28020 + C27987 * C27918 * C28084) / C27799;
    const double C1523 =
        (be * C27918 * C28045 + C28013 * C27918 * C28084) / C27799;
    const double C2435 = (C27927 * C27923 * C28081 + ae * C27987 * C28020 +
                          C27987 * (ae * C28020 + C27987 * C28084)) /
                         C27799;
    const double C2897 = (ae * (C28013 * C28020 + C27921 * be) +
                          C27987 * (be * C28045 + C28013 * C28084)) /
                         C27799;
    const double C4228 = (C27927 * C27923 * C28081 + be * C28013 * C28045 +
                          C28013 * (be * C28045 + C28013 * C28084)) /
                         C27799;
    const double C28319 = C27918 * C28087;
    const double C28383 = C27987 * C28087;
    const double C28403 = C28013 * C28087;
    const double C394 =
        (3 * (C28084 + C28087 * C27922) +
         C27918 * (2 * C27918 * C28087 +
                   C27918 * (C28087 +
                             std::pow(C27916, 6) * bs[6] * C28081 * C27922))) /
        C27799;
    const double C954 = (ae * (C28020 + C28025 * C27922) +
                         C27987 * (C28084 + C28087 * C27922)) /
                        C27799;
    const double C1524 = (be * (C28045 + C28050 * C27922) +
                          C28013 * (C28084 + C28087 * C27922)) /
                         C27799;
    const double C2436 = (C27918 * C28084 + ae * C27987 * C28027 +
                          C27987 * (ae * C28027 + C27987 * C27918 * C28087)) /
                         C27799;
    const double C4229 = (C27918 * C28084 + be * C28013 * C28052 +
                          C28013 * (be * C28052 + C28013 * C27918 * C28087)) /
                         C27799;
    const double C5093 =
        (2 * (ae * C28020 + C27987 * C28084) + ae * (C28020 + C28025 * C28065) +
         C27987 * (C28084 + ae * C27987 * C28025 +
                   C27987 * (C28028 + C27987 * C28087))) /
        C27799;
    const double C451 =
        (2 * (be * C28096 + C27918 * C28100) + be * (C28096 + C28101 * C27922) +
         C27918 *
             (C28100 + be * C27918 * C28101 +
              C27918 * (be * C28101 + C27918 * C27956 * C27955 * C28095))) /
        C27799;
    const double C1015 = (C27987 * (be * C28096 + C27918 * C28100)) / C27799;
    const double C1585 = (ae * (C27918 * C27930 + C27921 * be) +
                          C28013 * (be * C28096 + C27918 * C28100)) /
                         C27799;
    const double C2479 = (C27927 * C27923 * C28095 + C28100 * C28065) / C27799;
    const double C2953 =
        (ae * C27987 * C27930 + C28013 * C27987 * C28100) / C27799;
    const double C4272 = (C27927 * C27923 * C28095 + ae * C28013 * C27930 +
                          C28013 * (ae * C27930 + C28013 * C28100)) /
                         C27799;
    const double C28109 = C27918 * C28107;
    const double C28476 = C27987 * C28107;
    const double C28504 = C28013 * C28107;
    const double C5153 =
        (2 * C27987 * C28100 + C27987 * (C28100 + C28107 * C28065)) / C27799;
    const double C5664 = (ae * (C27930 + C27943 * C28065) +
                          C28013 * (C28100 + C28107 * C28065)) /
                         C27799;
    const double C6525 =
        (3 * (C28100 + C28107 * C28065) +
         C27987 * (2 * C27987 * C28107 +
                   C27987 * (C28107 +
                             std::pow(C27916, 6) * bs[6] * C28095 * C28065))) /
        C27799;
    const double C8329 = (C27987 * C28100 + ae * C28013 * C28357 +
                          C28013 * (ae * C28357 + C28013 * C27987 * C28107)) /
                         C27799;
    const double C9685 =
        (2 * (ae * C27930 + C28013 * C28100) + ae * (C27930 + C27943 * C28128) +
         C28013 * (C28100 + ae * C28013 * C27943 +
                   C28013 * (C27952 + C28013 * C28107))) /
        C27799;
    const double C494 =
        (2 * C27918 * C28121 +
         C27918 * (C28121 + C27956 * C27955 * C28118 * C27922)) /
        C27799;
    const double C1069 =
        (be * C27918 * C28096 + C27987 * C27918 * C28121) / C27799;
    const double C1639 =
        (ae * C27918 * C27994 + C28013 * C27918 * C28121) / C27799;
    const double C2520 = (C27927 * C27923 * C28118 + be * C27987 * C28096 +
                          C27987 * (be * C28096 + C27987 * C28121)) /
                         C27799;
    const double C3006 = (ae * (C27987 * C27994 + C27921 * be) +
                          C28013 * (be * C28096 + C27987 * C28121)) /
                         C27799;
    const double C4313 = (C27927 * C27923 * C28118 + ae * C28013 * C27994 +
                          C28013 * (ae * C27994 + C28013 * C28121)) /
                         C27799;
    const double C28325 = C27918 * C28124;
    const double C28390 = C27987 * C28124;
    const double C28510 = C28013 * C28124;
    const double C495 =
        (3 * (C28121 + C28124 * C27922) +
         C27918 * (2 * C27918 * C28124 +
                   C27918 * (C28124 +
                             std::pow(C27916, 6) * bs[6] * C28118 * C27922))) /
        C27799;
    const double C1070 = (be * (C28096 + C28101 * C27922) +
                          C27987 * (C28121 + C28124 * C27922)) /
                         C27799;
    const double C1640 = (ae * (C27994 + C27999 * C27922) +
                          C28013 * (C28121 + C28124 * C27922)) /
                         C27799;
    const double C2521 = (C27918 * C28121 + be * C27987 * C28103 +
                          C27987 * (be * C28103 + C27987 * C27918 * C28124)) /
                         C27799;
    const double C4314 = (C27918 * C28121 + ae * C28013 * C28001 +
                          C28013 * (ae * C28001 + C28013 * C27918 * C28124)) /
                         C27799;
    const double C5213 =
        (2 * (be * C28096 + C27987 * C28121) + be * (C28096 + C28101 * C28065) +
         C27987 * (C28121 + be * C27987 * C28101 +
                   C27987 * (C28104 + C27987 * C28124))) /
        C27799;
    const double C9745 =
        (2 * (ae * C27994 + C28013 * C28121) + ae * (C27994 + C27999 * C28128) +
         C28013 * (C28121 + ae * C28013 * C27999 +
                   C28013 * (C28002 + C28013 * C28124))) /
        C27799;
    const double C28946 = C28934 * C28806;
    const double C28944 = C28806 * C28931;
    const double C626 = -(C28806 * C28932) / C28801;
    const double C28948 = C28934 * C28840;
    const double C28947 = C28840 * C28935;
    const double C1766 = -(C28840 * C28937) / C28801;
    const double C28950 = C28934 * C28857;
    const double C28949 = C28857 * C28936;
    const double C3112 = -(C28857 * C28938) / C28801;
    const double C27805 = 2 * C27802;
    const double C91 = ((0 * ae) / C27797 - C27802 / C27799) / (2 * C27797) +
                       (0 * ae) / C27797;
    const double C12457 = (0 * ae) / C27797 - C27802 / C27799;
    const double C78 = (2 * C28941 * C28942) / C27797;
    const double C12451 = C28942 / C27797;
    const double C27851 = 2 * C27843;
    const double C4441 = ((0 * ae) / C27797 - C27843 / C27799) / (2 * C27797) +
                         (0 * ae) / C27797;
    const double C12510 = (0 * ae) / C27797 - C27843 / C27799;
    const double C168 = C151 * C95;
    const double C166 = C151 * C101;
    const double C164 = C151 * C94;
    const double C334 = C151 * C278;
    const double C332 = C151 * C153;
    const double C498 = C151 * C444;
    const double C703 = C151 * C629;
    const double C1273 = C151 * C1199;
    const double C9374 = C151 * C4005;
    const double C9372 = C151 * C1207;
    const double C9370 = C151 * C1200;
    const double C9559 = C151 * C1396;
    const double C9557 = C151 * C1264;
    const double C9749 = C151 * C1580;
    const double C10711 = C151 * C2614;
    const double C337 = C325 * C95;
    const double C333 = C325 * C94;
    const double C894 = C325 * C629;
    const double C1464 = C325 * C1199;
    const double C9562 = C325 * C4005;
    const double C9558 = C325 * C1200;
    const double C10879 = C325 * C2614;
    const double C4397 = (2 * C28941 * C28951) / C27797;
    const double C12453 = C28951 / C27797;
    const double C4440 =
        (((C28870 - (C27827 * 2 * C27843) / C27797) * ae) / C27797 -
         C27841 / C27801) /
            (2 * C27797) +
        ((C27827 * ((0 * ae) / C27797 - C27843 / C27799) + C12454) * ae) /
            C27797;
    const double C27877 = 2 * C27869;
    const double C8530 = ((0 * ae) / C27797 - C27869 / C27799) / (2 * C27797) +
                         (0 * ae) / C27797;
    const double C17715 = (0 * ae) / C27797 - C27869 / C27799;
    const double C231 = C214 * C95;
    const double C229 = C214 * C101;
    const double C227 = C214 * C94;
    const double C397 = C214 * C278;
    const double C553 = C214 * C444;
    const double C551 = C214 * C216;
    const double C769 = C214 * C629;
    const double C1339 = C214 * C1199;
    const double C4915 = C214 * C2212;
    const double C4913 = C214 * C637;
    const double C4911 = C214 * C630;
    const double C5097 = C214 * C826;
    const double C5270 = C214 * C1010;
    const double C5268 = C214 * C760;
    const double C6792 = C214 * C2614;
    const double C556 = C544 * C95;
    const double C552 = C544 * C94;
    const double C1136 = C544 * C629;
    const double C1706 = C544 * C1199;
    const double C5273 = C544 * C2212;
    const double C5269 = C544 * C630;
    const double C7129 = C544 * C2614;
    const double C8450 = (2 * C28941 * C28952) / C27797;
    const double C17612 = C28952 / C27797;
    const double C8529 =
        (((C28881 - (C27830 * 2 * C27869) / C27797) * ae) / C27797 -
         C27867 / C27801) /
            (2 * C27797) +
        ((C27830 * ((0 * ae) / C27797 - C27869 / C27799) + C17613) * ae) /
            C27797;
    const double C170 = C151 * C103;
    const double C233 = C214 * C103;
    const double C705 = C151 * C635;
    const double C771 = C214 * C635;
    const double C1275 = C151 * C1205;
    const double C1341 = C214 * C1205;
    const double C4917 = C214 * C2216;
    const double C6794 = C214 * C2618;
    const double C10713 = C151 * C2618;
    const double C9376 = C151 * C4009;
    const double C6355 = C214 * C4764;
    const double C6798 = C214 * C5341;
    const double C12098 = C151 * C9281;
    const double C4985 = C28784 * C634;
    const double C13226 = C12452 * C634;
    const double C9498 = C28784 * C1204;
    const double C19010 = C12452 * C1204;
    const double C4980 = C28784 * C2215;
    const double C6853 = C28784 * C2617;
    const double C9493 = C28784 * C4008;
    const double C6403 = C28784 * C4763;
    const double C6857 = C28784 * C5340;
    const double C12186 = C28784 * C9280;
    const double C27950 = C27947 + C27941;
    const double C28307 = C28305 + C27941;
    const double C28460 = C28458 + C27941;
    const double C2898 = (ae * (C28013 * C28027 + C27939 * be) +
                          C27987 * (be * C28052 + C28013 * C27918 * C28087)) /
                         C27799;
    const double C3007 = (ae * (C27987 * C28001 + C27939 * be) +
                          C28013 * (be * C28103 + C27987 * C27918 * C28124)) /
                         C27799;
    const double C2263 =
        (C27918 * C27994 + C27987 * (C27987 * C28001 + C27939 * be) +
         C27987 * C27939 * be) /
        C27797;
    const double C2351 =
        (C27918 * C28045 + C27987 * (C27987 * C28052 + C27939 * ae) +
         C27987 * C27939 * ae) /
        C27797;
    const double C2677 = (C28013 * (C27987 * C28001 + C27939 * be)) / C27797;
    const double C2733 =
        (C28013 * C27987 * C28027 + C27987 * C27939 * be) / C27797;
    const double C2789 = (C28013 * (C27987 * C28052 + C27939 * ae)) / C27797;
    const double C2951 =
        (C28013 * C27987 * C28103 + C27987 * C27939 * ae) / C27797;
    const double C4100 =
        (C27918 * C28020 + C28013 * (C28013 * C28027 + C27939 * be) +
         C28013 * C27939 * be) /
        C27797;
    const double C4270 =
        (C27918 * C28096 + C28013 * (C28013 * C28103 + C27939 * ae) +
         C28013 * C27939 * ae) /
        C27797;
    const double C2213 = C27918 * C27921 + C27939 * C28065;
    const double C2615 = C28013 * C27987 * C27939;
    const double C4006 = C27918 * C27921 + C27939 * C28128;
    const double C4762 =
        2 * C27987 * C27939 + C27987 * (C27939 + C27961 * C28065);
    const double C5339 = C28013 * (C27939 + C27961 * C28065);
    const double C9279 =
        2 * C28013 * C27939 + C28013 * (C27939 + C27961 * C28128);
    const double C27949 = C27946 + C27938;
    const double C28306 = C28303 + C27938;
    const double C28459 = C28456 + C27938;
    const double C27948 = C27945 * C27798;
    const double C28070 = C28069 * C27798;
    const double C28133 = C28132 * C27798;
    const double C5610 = (be * C28045 + C28013 * C28084 +
                          ae * (C28013 * C27987 * C28025 + C28304 * be) +
                          C27987 * (ae * (C28013 * C28025 + C27938) +
                                    C27987 * (C28053 + C28013 * C28087))) /
                         C27799;
    const double C8163 =
        (C27987 * C28020 + C28013 * (C28013 * C28382 + C28304 * be) +
         C28013 * C28304 * be) /
        C27797;
    const double C8327 =
        (C27987 * C28096 + C28013 * (C28013 * C28389 + C28304 * ae) +
         C28013 * C28304 * ae) /
        C27797;
    const double C8075 = C27987 * C27921 + C28304 * C28128;
    const double C10647 =
        2 * C28013 * C28304 + C28013 * (C28304 + C28366 * C28128);
    const double C339 = C28870 * C328;
    const double C558 = C28881 * C547;
    const double C171 = C151 * C96;
    const double C234 = C214 * C96;
    const double C341 = C325 * C96;
    const double C560 = C544 * C96;
    const double C707 = C151 * C628;
    const double C773 = C214 * C628;
    const double C890 = C325 * C628;
    const double C1132 = C544 * C628;
    const double C1277 = C151 * C1198;
    const double C1343 = C214 * C1198;
    const double C1460 = C325 * C1198;
    const double C1702 = C544 * C1198;
    const double C6353 = C214 * C4761;
    const double C6612 = C544 * C4761;
    const double C6796 = C214 * C5338;
    const double C7125 = C544 * C5338;
    const double C12096 = C151 * C9278;
    const double C12232 = C325 * C9278;
    const double C169 = C28870 * C159;
    const double C167 = C28870 * C154;
    const double C336 = C151 * C154;
    const double C172 = C28870 * C155;
    const double C340 = C151 * C155;
    const double C704 = C28870 * C695;
    const double C893 = C151 * C695;
    const double C12514 = C12454 * C695;
    const double C708 = C28870 * C696;
    const double C889 = C151 * C696;
    const double C12523 = C12454 * C696;
    const double C1274 = C28870 * C1265;
    const double C1463 = C151 * C1265;
    const double C1278 = C28870 * C1266;
    const double C1459 = C151 * C1266;
    const double C10712 = C28870 * C2676;
    const double C10878 = C151 * C2676;
    const double C23913 = C12454 * C2676;
    const double C9373 = C28870 * C4055;
    const double C9561 = C151 * C4055;
    const double C12097 = C28870 * C9364;
    const double C12231 = C151 * C9364;
    const double C232 = C28881 * C222;
    const double C230 = C28881 * C217;
    const double C555 = C214 * C217;
    const double C235 = C28881 * C218;
    const double C559 = C214 * C218;
    const double C770 = C28881 * C761;
    const double C1135 = C214 * C761;
    const double C774 = C28881 * C762;
    const double C1131 = C214 * C762;
    const double C1340 = C28881 * C1331;
    const double C1705 = C214 * C1331;
    const double C17719 = C17613 * C1331;
    const double C1344 = C28881 * C1332;
    const double C1701 = C214 * C1332;
    const double C17728 = C17613 * C1332;
    const double C4914 = C28881 * C2306;
    const double C5272 = C214 * C2306;
    const double C6793 = C28881 * C2732;
    const double C7128 = C214 * C2732;
    const double C23353 = C17613 * C2732;
    const double C6354 = C28881 * C4905;
    const double C6611 = C214 * C4905;
    const double C6797 = C28881 * C5450;
    const double C7124 = C214 * C5450;
    const double C25148 = C17613 * C5450;
    const double C338 = C151 * C279;
    const double C400 = C214 * C279;
    const double C342 = C151 * C280;
    const double C401 = C214 * C280;
    const double C895 = C151 * C827;
    const double C957 = C214 * C827;
    const double C891 = C151 * C828;
    const double C959 = C214 * C828;
    const double C1465 = C151 * C1397;
    const double C1527 = C214 * C1397;
    const double C1461 = C151 * C1398;
    const double C1529 = C214 * C1398;
    const double C5099 = C214 * C2350;
    const double C6962 = C214 * C2788;
    const double C10880 = C151 * C2788;
    const double C9563 = C151 * C4143;
    const double C12233 = C151 * C9484;
    const double C501 = C151 * C445;
    const double C557 = C214 * C445;
    const double C502 = C151 * C446;
    const double C561 = C214 * C446;
    const double C1073 = C151 * C1011;
    const double C1137 = C214 * C1011;
    const double C1075 = C151 * C1012;
    const double C1133 = C214 * C1012;
    const double C1643 = C151 * C1581;
    const double C1707 = C214 * C1581;
    const double C1645 = C151 * C1582;
    const double C1703 = C214 * C1582;
    const double C5274 = C214 * C2476;
    const double C7130 = C214 * C2950;
    const double C11050 = C151 * C2950;
    const double C9751 = C151 * C4269;
    const double C6613 = C214 * C5151;
    const double C7126 = C214 * C5662;
    const double C27976 = C27973 + C27964;
    const double C28354 = C27944 + C28352;
    const double C10649 =
        (2 * C28013 * C28350 + C28013 * (C28350 + C28471 * C28128)) / C27797;
    const double C28495 = C27944 + C28493;
    const double C27975 = C27972 + C27960;
    const double C28361 = C27943 + C28359;
    const double C10648 =
        (2 * C28013 * C28357 + C28013 * (C28357 + C28477 * C28128)) / C27797;
    const double C28507 = C27943 + C28505;
    const double C27974 = C27971 * C27798;
    const double C28010 = C27999 + C28008;
    const double C28313 = C27987 * C28310;
    const double C9365 =
        (2 * C28013 * C28001 + C28013 * (C28001 + C28310 * C28128)) / C27797;
    const double C28370 = C28365 + C27960;
    const double C28513 = C27999 + C28511;
    const double C28036 = C28025 + C28034;
    const double C28437 = C27987 * C28320;
    const double C28462 = C28013 * C28320;
    const double C4906 =
        (2 * C27987 * C28027 + C27987 * (C28027 + C28320 * C28065)) / C27797;
    const double C5451 = (C28013 * (C28027 + C28320 * C28065) +
                          (C27939 + C27961 * C28065) * be) /
                         C27797;
    const double C28386 = C28025 + C28384;
    const double C28484 = C28013 * C28481;
    const double C28522 = C28517 + C27960;
    const double C28061 = C28050 + C28059;
    const double C28314 = C27987 * C28312;
    const double C9485 =
        (2 * C28013 * C28052 + C28013 * (C28052 + C28312 * C28128)) / C27797;
    const double C28373 = C28368 + C27964;
    const double C28501 = C28050 + C28500;
    const double C28075 = C28074 * C27798;
    const double C28112 = C28101 + C28110;
    const double C28438 = C27987 * C28326;
    const double C28464 = C28013 * C28326;
    const double C5152 =
        (2 * C27987 * C28103 + C27987 * (C28103 + C28326 * C28065)) / C27797;
    const double C5663 = (C28013 * (C28103 + C28326 * C28065) +
                          (C27939 + C27961 * C28065) * ae) /
                         C27797;
    const double C28393 = C28101 + C28391;
    const double C28485 = C28013 * C28483;
    const double C28525 = C28520 + C27964;
    const double C28138 = C28137 * C27798;
    const double C10717 = C151 * C8078;
    const double C10824 = C28784 * C8077;
    const double C97 = 3 * (C27921 + C27933 * C27922) +
                       C27918 * (2 * C27939 + C27918 * C27968);
    const double C631 = C27987 * (2 * C27939 + C27918 * C27968);
    const double C1201 = C28013 * (2 * C27939 + C27918 * C27968);
    const double C2214 = C27921 + C27933 * C27922 + C27968 * C28065;
    const double C2616 = C28013 * C27987 * C27968;
    const double C4007 = C27921 + C27933 * C27922 + C27968 * C28128;
    const double C8812 = C27987 * C27939 + C28311 * C28128;
    const double C6258 = 3 * (C27921 + C27933 * C28065) +
                         C27987 * (2 * C28304 + C27987 * C28372);
    const double C6667 = C28013 * (2 * C28304 + C27987 * C28372);
    const double C8076 = C27921 + C27933 * C28065 + C28372 * C28128;
    const double C12042 = 3 * (C27921 + C27933 * C28128) +
                          C28013 * (2 * C28457 + C28013 * C28524);
    const double C9378 = C28870 * C4056;
    const double C9566 = C151 * C4056;
    const double C4919 = C28881 * C2307;
    const double C5276 = C214 * C2307;
    const double C9568 = C151 * C4144;
    const double C5278 = C214 * C2477;
    const double C174 = C28870 * C160;
    const double C706 = C28870 * C699;
    const double C12518 = C12454 * C699;
    const double C1276 = C28870 * C1269;
    const double C10714 = C28870 * C2679;
    const double C23917 = C12454 * C2679;
    const double C9375 = C28870 * C4058;
    const double C28009 = C28002 + C28007;
    const double C28353 = C27953 + C28351;
    const double C25612 = C12454 * C5398;
    const double C12099 = C28870 * C9366;
    const double C4987 = C28784 * C831;
    const double C13230 = C12452 * C831;
    const double C9500 = C28784 * C1401;
    const double C19014 = C12452 * C1401;
    const double C4982 = C28784 * C2353;
    const double C6855 = C28784 * C2791;
    const double C9495 = C28784 * C4146;
    const double C28060 = C28053 + C28058;
    const double C28360 = C27952 + C28358;
    const double C10821 =
        (ae * (2 * C28013 * C27943 + C28013 * (C27943 + C27966 * C28128)) +
         C27987 * (2 * C28399 + C28013 * (C28056 + std::pow(C27916, 6) * bs[6] *
                                                       C28044 * C28128))) /
        C27799;
    const double C12181 =
        (3 * (C28049 + C28056 * C28128) +
         C28013 * (2 * C28399 + C28013 * (C28056 + std::pow(C27916, 6) * bs[6] *
                                                       C28044 * C28128))) /
        C27799;
    const double C6405 = C28784 * C4973;
    const double C6859 = C28784 * C5506;
    const double C10826 = C28784 * C8207;
    const double C12188 = C28784 * C9486;
    const double C237 = C28881 * C223;
    const double C772 = C28881 * C765;
    const double C1342 = C28881 * C1335;
    const double C17723 = C17613 * C1335;
    const double C4916 = C28881 * C2309;
    const double C6795 = C28881 * C2735;
    const double C23357 = C17613 * C2735;
    const double C28035 = C28028 + C28033;
    const double C10769 =
        (2 * (be * C28350 + C28013 * C28470) + be * (C28350 + C28471 * C28128) +
         C28013 *
             (C28470 + be * C28013 * C28471 +
              C28013 * (be * C28471 + C28013 * C27987 * std::pow(C27916, 6) *
                                          bs[6] * C28019))) /
        C27799;
    const double C28494 = C27953 + C28492;
    const double C6356 = C28881 * C4907;
    const double C6799 = C28881 * C5452;
    const double C25152 = C17613 * C5452;
    const double C25686 = C17613 * C8165;
    const double C402 = C28881 * C393;
    const double C958 = C28881 * C953;
    const double C1528 = C28881 * C1523;
    const double C17885 = C17613 * C1523;
    const double C5098 = C28881 * C2435;
    const double C6963 = C28881 * C2897;
    const double C23563 = C17613 * C2897;
    const double C5094 =
        (2 * (ae * C28027 + C27987 * C28319) + ae * (C28027 + C28320 * C28065) +
         C27987 *
             (C28319 + ae * C27987 * C28320 +
              C27987 * (ae * C28320 + C27987 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28081))) /
        C27799;
    const double C5611 =
        (be * C28052 + C28013 * C28319 +
         ae * (C28013 * C27987 * C28320 + C28311 * be) +
         C27987 *
             (ae * (C28013 * C28320 + C27967) +
              C27987 * (be * C28312 + C28013 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28081))) /
        C27799;
    const double C9073 =
        (ae * (C28027 + C28013 * (C28013 * C28320 + C27967) +
               C28013 * C27961 * be) +
         C27987 *
             (C28319 + be * C28013 * C28312 +
              C28013 * (be * C28312 + C28013 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28081))) /
        C27799;
    const double C9632 =
        (2 * (be * C28052 + C28013 * C28319) + be * (C28052 + C28312 * C28128) +
         C28013 *
             (C28319 + be * C28013 * C28312 +
              C28013 * (be * C28312 + C28013 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28081))) /
        C27799;
    const double C28385 = C28028 + C28383;
    const double C28404 = C28053 + C28403;
    const double C960 = C28881 * C954;
    const double C1530 = C28881 * C1524;
    const double C17890 = C17613 * C1524;
    const double C5101 = C28881 * C2436;
    const double C19163 = C17613 * C4229;
    const double C6486 = C28881 * C5093;
    const double C5161 = C28784 * C1015;
    const double C13456 = C12452 * C1015;
    const double C9693 = C28784 * C1585;
    const double C19232 = C12452 * C1585;
    const double C5158 = C28784 * C2479;
    const double C7019 = C28784 * C2953;
    const double C9690 = C28784 * C4272;
    const double C28111 = C28104 + C28109;
    const double C10995 =
        (2 * (ae * C28357 + C28013 * C28476) + ae * (C28357 + C28477 * C28128) +
         C28013 *
             (C28476 + ae * C28013 * C28477 +
              C28013 * (ae * C28477 + C28013 * C27987 * std::pow(C27916, 6) *
                                          bs[6] * C28095))) /
        C27799;
    const double C28506 = C27952 + C28504;
    const double C6530 = C28784 * C5153;
    const double C7021 = C28784 * C5664;
    const double C10998 = C28784 * C8329;
    const double C12320 = C28784 * C9685;
    const double C503 = C28870 * C494;
    const double C1074 = C28870 * C1069;
    const double C12860 = C12454 * C1069;
    const double C1644 = C28870 * C1639;
    const double C11051 = C28870 * C3006;
    const double C24331 = C12454 * C3006;
    const double C9750 = C28870 * C4313;
    const double C5214 =
        (2 * (be * C28103 + C27987 * C28325) + be * (C28103 + C28326 * C28065) +
         C27987 *
             (C28325 + be * C27987 * C28326 +
              C27987 * (be * C28326 + C27987 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28118))) /
        C27799;
    const double C9746 =
        (2 * (ae * C28001 + C28013 * C28325) + ae * (C28001 + C28310 * C28128) +
         C28013 *
             (C28325 + ae * C28013 * C28310 +
              C28013 * (ae * C28310 + C28013 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28118))) /
        C27799;
    const double C28392 = C28104 + C28390;
    const double C28512 = C28002 + C28510;
    const double C1076 = C28870 * C1070;
    const double C12865 = C12454 * C1070;
    const double C1646 = C28870 * C1640;
    const double C13531 = C12454 * C2521;
    const double C9753 = C28870 * C4314;
    const double C12362 = C28870 * C9745;
    const double C86 = C28946 / C28811;
    const double C84 = C28806 / C28811 - (C28944 * C28932) / C28933;
    const double C85 = C28944 / C28945 - (C28946 * C28932) / C28801;
    const double C1768 = C28944 / C28801;
    const double C2210 = C28948 / C28811;
    const double C624 = C28947 / C28801;
    const double C2208 = C28840 / C28811 - (C28947 * C28937) / C28933;
    const double C2209 = C28947 / C28945 - (C28948 * C28937) / C28801;
    const double C4004 = C28950 / C28811;
    const double C1196 = C28949 / C28801;
    const double C4002 = C28857 / C28811 - (C28949 * C28938) / C28933;
    const double C4003 = C28949 / C28945 - (C28950 * C28938) / C28801;
    const double C27807 = C27795 * C27805;
    const double C4399 = -C27805 / C27797;
    const double C12992 = C12457 * C635;
    const double C12990 = C12457 * C634;
    const double C13238 = C12457 * C828;
    const double C13234 = C12457 * C628;
    const double C13231 = C12457 * C827;
    const double C13227 = C12457 * C629;
    const double C13460 = C12457 * C1012;
    const double C13457 = C12457 * C1011;
    const double C15203 = C12457 * C2477;
    const double C18776 = C12457 * C1205;
    const double C18774 = C12457 * C1204;
    const double C19022 = C12457 * C1398;
    const double C19018 = C12457 * C1198;
    const double C19015 = C12457 * C1397;
    const double C19011 = C12457 * C1199;
    const double C19236 = C12457 * C1582;
    const double C19233 = C12457 * C1581;
    const double C22434 = C12457 * C4144;
    const double C12989 = C12451 * C642;
    const double C13237 = C12451 * C831;
    const double C13233 = C12451 * C634;
    const double C13228 = C12451 * C830;
    const double C13224 = C12451 * C636;
    const double C13459 = C12451 * C1015;
    const double C13454 = C12451 * C1014;
    const double C15048 = C12451 * C2353;
    const double C15044 = C12451 * C2215;
    const double C15202 = C12451 * C2479;
    const double C15588 = C12451 * C2791;
    const double C15584 = C12451 * C2617;
    const double C15790 = C12451 * C2953;
    const double C18773 = C12451 * C1212;
    const double C19021 = C12451 * C1401;
    const double C19017 = C12451 * C1204;
    const double C19012 = C12451 * C1400;
    const double C19008 = C12451 * C1206;
    const double C19235 = C12451 * C1585;
    const double C19230 = C12451 * C1584;
    const double C22433 = C12451 * C4146;
    const double C22429 = C12451 * C4008;
    const double C22589 = C12451 * C4272;
    const double C87 =
        (((0 - (C27795 * C27796) / C27797) * ae) / C27797 - (0 * be) / C27801) /
            (2 * C27797) +
        ((C27795 * (((C28784 - (C27795 * 2 * C27802) / C27797) * ae) / C27797 -
                    C27796 / C27801) +
          C12451) *
         ae) /
            C27797 +
        (0 * ae) / C27797 - C27802 / C27799;
    const double C27852 = C27827 * C27851;
    const double C12522 = C12510 * C628;
    const double C12519 = C12510 * C635;
    const double C12515 = C12510 * C629;
    const double C12690 = C12510 * C828;
    const double C12688 = C12510 * C696;
    const double C12686 = C12510 * C827;
    const double C12684 = C12510 * C695;
    const double C12864 = C12510 * C1012;
    const double C12861 = C12510 * C1011;
    const double C13530 = C12510 * C2477;
    const double C23918 = C12510 * C2618;
    const double C23914 = C12510 * C2614;
    const double C24123 = C12510 * C2788;
    const double C24121 = C12510 * C2676;
    const double C24332 = C12510 * C2950;
    const double C25611 = C12510 * C5341;
    const double C25607 = C12510 * C5338;
    const double C26043 = C12510 * C5662;
    const double C27419 = C12510 * C8078;
    const double C344 = C332 - C333;
    const double C9570 = C9557 - C9558;
    const double C12525 = C12453 * C159;
    const double C12521 = C12453 * C154;
    const double C12516 = C12453 * C158;
    const double C12512 = C12453 * C153;
    const double C12695 = C12453 * C328;
    const double C12683 = C12453 * C327;
    const double C12863 = C12453 * C493;
    const double C12858 = C12453 * C492;
    const double C13085 = C12453 * C699;
    const double C13081 = C12453 * C695;
    const double C13529 = C12453 * C1069;
    const double C13737 = C12453 * C1269;
    const double C13733 = C12453 * C1265;
    const double C14157 = C12453 * C1639;
    const double C23915 = C12453 * C1268;
    const double C23911 = C12453 * C1264;
    const double C24120 = C12453 * C1456;
    const double C24329 = C12453 * C1638;
    const double C25610 = C12453 * C2679;
    const double C25606 = C12453 * C2676;
    const double C26042 = C12453 * C3006;
    const double C27418 = C12453 * C4058;
    const double C27414 = C12453 * C4055;
    const double C27736 = C12453 * C4313;
    const double C4439 =
        (((0 - (C27827 * C27841) / C27797) * ae) / C27797 - (0 * be) / C27801) /
            (2 * C27797) +
        ((C27827 * (((C28870 - (C27827 * 2 * C27843) / C27797) * ae) / C27797 -
                    C27841 / C27801) +
          C12453) *
         ae) /
            C27797 +
        (0 * ae) / C27797 - C27843 / C27799;
    const double C27878 = C27830 * C27877;
    const double C17727 = C17715 * C1198;
    const double C17724 = C17715 * C1205;
    const double C17720 = C17715 * C1199;
    const double C17889 = C17715 * C1398;
    const double C17886 = C17715 * C1397;
    const double C18053 = C17715 * C1582;
    const double C18051 = C17715 * C1332;
    const double C18049 = C17715 * C1581;
    const double C18047 = C17715 * C1331;
    const double C19162 = C17715 * C4144;
    const double C23358 = C17715 * C2618;
    const double C23354 = C17715 * C2614;
    const double C23564 = C17715 * C2788;
    const double C23771 = C17715 * C2950;
    const double C23769 = C17715 * C2732;
    const double C25151 = C17715 * C5341;
    const double C25147 = C17715 * C5338;
    const double C25459 = C17715 * C5662;
    const double C25457 = C17715 * C5450;
    const double C25685 = C17715 * C8078;
    const double C563 = C551 - C552;
    const double C5280 = C5268 - C5269;
    const double C17730 = C17612 * C222;
    const double C17726 = C17612 * C217;
    const double C17721 = C17612 * C221;
    const double C17717 = C17612 * C216;
    const double C17888 = C17612 * C392;
    const double C17883 = C17612 * C391;
    const double C18058 = C17612 * C547;
    const double C18046 = C17612 * C546;
    const double C18278 = C17612 * C765;
    const double C18274 = C17612 * C761;
    const double C18487 = C17612 * C953;
    const double C18939 = C17612 * C1335;
    const double C18935 = C17612 * C1331;
    const double C19161 = C17612 * C1523;
    const double C23355 = C17612 * C764;
    const double C23351 = C17612 * C760;
    const double C23561 = C17612 * C952;
    const double C23768 = C17612 * C1128;
    const double C25150 = C17612 * C2309;
    const double C25146 = C17612 * C2306;
    const double C25304 = C17612 * C2435;
    const double C25684 = C17612 * C2735;
    const double C25680 = C17612 * C2732;
    const double C25904 = C17612 * C2897;
    const double C8528 =
        (((0 - (C27830 * C27867) / C27797) * ae) / C27797 - (0 * be) / C27801) /
            (2 * C27797) +
        ((C27830 * (((C28881 - (C27830 * 2 * C27869) / C27797) * ae) / C27797 -
                    C27867 / C27801) +
          C17612) *
         ae) /
            C27797 +
        (0 * ae) / C27797 - C27869 / C27799;
    const double C105 = (2 * (C27918 * C27931 + C27921 * ae) +
                         C27918 * (C27931 + C27918 * C27950 + C27939 * ae) +
                         (C27921 + C27933 * C27922) * ae) /
                        C27797;
    const double C633 =
        (C27987 * (C27931 + C27918 * C27950 + C27939 * ae)) / C27797;
    const double C1203 =
        (C28013 * (C27931 + C27918 * C27950 + C27939 * ae)) / C27797;
    const double C2218 =
        (C27918 * C27931 + C27921 * ae + C27950 * C28065) / C27797;
    const double C2620 = (C28013 * C27987 * C27950) / C27797;
    const double C4011 =
        (C27918 * C27931 + C27921 * ae + C27950 * C28128) / C27797;
    const double C4971 = (2 * (C27987 * C28045 + C27921 * ae) +
                          C27987 * (C28045 + C27987 * C28307 + C28304 * ae) +
                          (C27921 + C27933 * C28065) * ae) /
                         C27797;
    const double C5504 =
        (C28013 * (C28045 + C27987 * C28307 + C28304 * ae)) / C27797;
    const double C8205 =
        (C27987 * C28045 + C27921 * ae + C28307 * C28128) / C27797;
    const double C9683 = (2 * (C28013 * C28096 + C27921 * ae) +
                          C28013 * (C28096 + C28013 * C28460 + C28457 * ae) +
                          (C27921 + C27933 * C28128) * ae) /
                         C27797;
    const double C14023 = C28881 * C2898;
    const double C18489 = C17613 * C2898;
    const double C14159 = C12454 * C3007;
    const double C18623 = C28870 * C3007;
    const double C13083 = C12454 * C2263;
    const double C13306 = C12510 * C2263;
    const double C5100 = C214 * C2351;
    const double C13308 = C12510 * C2351;
    const double C15049 = C12457 * C2351;
    const double C13735 = C12454 * C2677;
    const double C13942 = C12510 * C2677;
    const double C18204 = C28870 * C2677;
    const double C18413 = C151 * C2677;
    const double C13807 = C28881 * C2733;
    const double C14226 = C214 * C2733;
    const double C18276 = C17613 * C2733;
    const double C18690 = C17715 * C2733;
    const double C13944 = C12510 * C2789;
    const double C14022 = C214 * C2789;
    const double C15589 = C12457 * C2789;
    const double C18415 = C151 * C2789;
    const double C18488 = C17715 * C2789;
    const double C14158 = C12510 * C2951;
    const double C14228 = C214 * C2951;
    const double C15791 = C12457 * C2951;
    const double C18622 = C151 * C2951;
    const double C18692 = C17715 * C2951;
    const double C18937 = C17613 * C4100;
    const double C19372 = C17715 * C4100;
    const double C9752 = C151 * C4270;
    const double C19374 = C17715 * C4270;
    const double C22590 = C12457 * C4270;
    const double C4918 = C214 * C2213;
    const double C5277 = C544 * C2213;
    const double C13082 = C12510 * C2213;
    const double C15045 = C12457 * C2213;
    const double C13734 = C12510 * C2615;
    const double C13806 = C214 * C2615;
    const double C14227 = C544 * C2615;
    const double C15585 = C12457 * C2615;
    const double C18203 = C151 * C2615;
    const double C18275 = C17715 * C2615;
    const double C18414 = C325 * C2615;
    const double C9377 = C151 * C4006;
    const double C9567 = C325 * C4006;
    const double C18936 = C17715 * C4006;
    const double C22430 = C12457 * C4006;
    const double C104 = (2 * (C27918 * C27930 + C27921 * be) +
                         C27918 * (C27930 + C27918 * C27949 + C27939 * be) +
                         (C27921 + C27933 * C27922) * be) /
                        C27797;
    const double C632 =
        (C27987 * (C27930 + C27918 * C27949 + C27939 * be)) / C27797;
    const double C1202 =
        (C28013 * (C27930 + C27918 * C27949 + C27939 * be)) / C27797;
    const double C2217 =
        (C27918 * C27930 + C27921 * be + C27949 * C28065) / C27797;
    const double C2619 = (C28013 * C27987 * C27949) / C27797;
    const double C4010 =
        (C27918 * C27930 + C27921 * be + C27949 * C28128) / C27797;
    const double C5716 = (ae * (C27994 + C27987 * C28306 + C28304 * be) +
                          C28013 * (C28121 + be * C27987 * C28101 +
                                    C27987 * (C28104 + C27987 * C28124))) /
                         C27799;
    const double C4851 = (2 * (C27987 * C27994 + C27921 * be) +
                          C27987 * (C27994 + C27987 * C28306 + C28304 * be) +
                          (C27921 + C27933 * C28065) * be) /
                         C27797;
    const double C5396 =
        (C28013 * (C27994 + C27987 * C28306 + C28304 * be)) / C27797;
    const double C8121 =
        (C27987 * C27994 + C27921 * be + C28306 * C28128) / C27797;
    const double C9430 = (2 * (C28013 * C28020 + C27921 * be) +
                          C28013 * (C28020 + C28013 * C28459 + C28457 * be) +
                          (C27921 + C27933 * C28128) * be) /
                         C27797;
    const double C111 =
        (2 * (ae * C27930 + be * C27931 + C27918 * C27948) +
         ae * (C27930 + C27918 * C27949 + C27939 * be) +
         be * (C27931 + C27918 * C27950 + C27939 * ae) +
         C27918 * (C27948 + ae * C27949 + be * C27950 +
                   C27918 * (ae * C27943 + be * C27944 +
                             C27918 *
                                 (C27934 * C27935 +
                                  C27922 * bs[5] * std::pow(C27924, 5)) *
                                 C27798))) /
        C27799;
    const double C641 = (ae * C27987 * C27930 + be * C27987 * C27931 +
                         C27918 * C27987 * C27948) /
                        C27799;
    const double C1211 = (ae * C28013 * C27930 + be * C28013 * C27931 +
                          C27918 * C28013 * C27948) /
                         C27799;
    const double C2221 =
        ((C27921 + C27922 * C27923 * C27927) * C27798 + C27948 * C28065) /
        C27799;
    const double C2623 = (C28013 * C27987 * C27948) / C27799;
    const double C4014 =
        ((C27921 + C27922 * C27923 * C27927) * C27798 + C27948 * C28128) /
        C27799;
    const double C329 =
        (2 * C27918 * C28070 +
         C27918 *
             (C28070 + (C27954 + C28065 * C27955 * C27956) * C27798 * C27922)) /
        C27799;
    const double C885 = (ae * C27918 * C27994 + be * C27918 * C28045 +
                         C27987 * C27918 * C28070) /
                        C27799;
    const double C1455 = (C28013 * C27918 * C28070) / C27799;
    const double C2394 =
        ((C27921 + C28065 * C27923 * C27927) * C27798 +
         ae * (C27987 * C27994 + C27921 * be) +
         be * (C27987 * C28045 + C27921 * ae) +
         C27987 * (ae * C27994 + be * C28045 + C27987 * C28070)) /
        C27799;
    const double C2844 = (ae * C28013 * C27994 + be * C28013 * C28045 +
                          C27987 * C28013 * C28070) /
                         C27799;
    const double C4187 =
        ((C27921 + C28065 * C27923 * C27927) * C27798 + C28070 * C28128) /
        C27799;
    const double C548 =
        (2 * C27918 * C28133 +
         C27918 *
             (C28133 + (C27954 + C28128 * C27955 * C27956) * C27798 * C27922)) /
        C27799;
    const double C1127 = (C27987 * C27918 * C28133) / C27799;
    const double C1697 = (ae * C27918 * C28020 + be * C27918 * C28096 +
                          C28013 * C27918 * C28133) /
                         C27799;
    const double C2561 =
        ((C27921 + C28128 * C27923 * C27927) * C27798 + C28133 * C28065) /
        C27799;
    const double C3059 = (ae * C27987 * C28020 + be * C27987 * C28096 +
                          C28013 * C27987 * C28133) /
                         C27799;
    const double C4354 =
        ((C27921 + C28128 * C27923 * C27927) * C27798 +
         ae * (C28013 * C28020 + C27921 * be) +
         be * (C28013 * C28096 + C27921 * ae) +
         C28013 * (ae * C28020 + be * C28096 + C28013 * C28133)) /
        C27799;
    const double C6965 = C28881 * C5610;
    const double C25306 = C17613 * C5610;
    const double C25682 = C17613 * C8163;
    const double C26111 = C17715 * C8163;
    const double C11052 = C151 * C8327;
    const double C26113 = C17715 * C8327;
    const double C27737 = C12510 * C8327;
    const double C10715 = C151 * C8075;
    const double C10883 = C325 * C8075;
    const double C25681 = C17715 * C8075;
    const double C27415 = C12510 * C8075;
    const double C176 = C169 - C170;
    const double C175 = C167 - C168;
    const double C345 = C336 - C337;
    const double C346 = C340 - C341;
    const double C898 = C893 - C894;
    const double C897 = C889 - C890;
    const double C18866 = C1273 - C1274;
    const double C18864 = C1274 - C1273;
    const double C1468 = C1463 - C1464;
    const double C1467 = C1459 - C1460;
    const double C10886 = C10878 - C10879;
    const double C12094 = C9373 - C9374;
    const double C9571 = C9561 - C9562;
    const double C12235 = C12231 - C12232;
    const double C239 = C232 - C233;
    const double C238 = C230 - C231;
    const double C564 = C555 - C556;
    const double C565 = C559 - C560;
    const double C13156 = C769 - C770;
    const double C13154 = C770 - C769;
    const double C1140 = C1135 - C1136;
    const double C1139 = C1131 - C1132;
    const double C1710 = C1705 - C1706;
    const double C1709 = C1701 - C1702;
    const double C6351 = C4914 - C4915;
    const double C5281 = C5272 - C5273;
    const double C7133 = C7128 - C7129;
    const double C6615 = C6611 - C6612;
    const double C7132 = C7124 - C7125;
    const double C403 = C399 - C400;
    const double C504 = C500 - C501;
    const double C27979 = C27918 * C27976;
    const double C28429 = C27987 * C27976;
    const double C4766 =
        (2 * C27987 * C27950 + C27987 * (C27950 + C27976 * C28065)) / C27797;
    const double C5343 = (C28013 * (C27950 + C27976 * C28065)) / C27797;
    const double C9283 =
        (2 * C28013 * C27950 + C28013 * (C27950 + C27976 * C28128)) / C27797;
    const double C6790 =
        (be * (2 * C28350 + C27987 * C28354) +
         C28013 * (2 * C27987 * C28031 +
                   C27987 * (C28031 +
                             std::pow(C27916, 6) * bs[6] * C28019 * C28065))) /
        C27799;
    const double C8166 =
        (C28024 + C28031 * C28065 + be * C28013 * C28354 +
         C28013 *
             (be * C28354 + C28013 * (C28031 + std::pow(C27916, 6) * bs[6] *
                                                   C28019 * C28065))) /
        C27799;
    const double C6260 = (3 * (C27931 + C27944 * C28065) +
                          C27987 * (2 * C28350 + C27987 * C28354)) /
                         C27797;
    const double C6669 = (C28013 * (2 * C28350 + C27987 * C28354)) / C27797;
    const double C8080 = (C27931 + C27944 * C28065 + C28354 * C28128) / C27797;
    const double C12044 = (3 * (C27931 + C27944 * C28128) +
                           C28013 * (2 * C28491 + C28013 * C28495)) /
                          C27797;
    const double C27978 = C27918 * C27975;
    const double C28434 = C27987 * C27975;
    const double C4765 =
        (2 * C27987 * C27949 + C27987 * (C27949 + C27975 * C28065)) / C27797;
    const double C5342 = (C28013 * (C27949 + C27975 * C28065)) / C27797;
    const double C9282 =
        (2 * C28013 * C27949 + C28013 * (C27949 + C27975 * C28128)) / C27797;
    const double C6850 =
        (2 * (ae * C28013 * C27943 + C27987 * C28399) + ae * C28013 * C28361 +
         C27987 * (C28399 + ae * C28013 * C27987 * C27966 +
                   C27987 * (ae * C28013 * C27966 + C27987 * C28013 *
                                                        std::pow(C27916, 6) *
                                                        bs[6] * C28044))) /
        C27799;
    const double C7016 =
        (ae * (2 * C28357 + C27987 * C28361) +
         C28013 * (2 * C27987 * C28107 +
                   C27987 * (C28107 +
                             std::pow(C27916, 6) * bs[6] * C28095 * C28065))) /
        C27799;
    const double C8330 =
        (C28100 + C28107 * C28065 + ae * C28013 * C28361 +
         C28013 *
             (ae * C28361 + C28013 * (C28107 + std::pow(C27916, 6) * bs[6] *
                                                   C28095 * C28065))) /
        C27799;
    const double C6259 = (3 * (C27930 + C27943 * C28065) +
                          C27987 * (2 * C28357 + C27987 * C28361)) /
                         C27797;
    const double C6668 = (C28013 * (2 * C28357 + C27987 * C28361)) / C27797;
    const double C8079 = (C27930 + C27943 * C28065 + C28361 * C28128) / C27797;
    const double C12043 = (3 * (C27930 + C27943 * C28128) +
                           C28013 * (2 * C28503 + C28013 * C28507)) /
                          C27797;
    const double C27977 = C27918 * C27974;
    const double C28143 = C27987 * C27974;
    const double C28180 = C28013 * C27974;
    const double C640 =
        (C27987 * C27948 + ae * C27987 * C27949 + be * C27987 * C27950 +
         C27918 * (ae * C27987 * C27943 + be * C27987 * C27944 +
                   C27918 * C27987 * C27974)) /
        C27799;
    const double C1210 =
        (C28013 * C27948 + ae * C28013 * C27949 + be * C28013 * C27950 +
         C27918 * (ae * C28013 * C27943 + be * C28013 * C27944 +
                   C27918 * C28013 * C27974)) /
        C27799;
    const double C2222 =
        (ae * (C27930 + C27943 * C28065) + be * (C27931 + C27944 * C28065) +
         C27918 * (C27948 + C27974 * C28065)) /
        C27799;
    const double C2223 =
        (C27948 + C27974 * C28065 + ae * (C27949 + C27975 * C28065) +
         be * (C27950 + C27976 * C28065) +
         C27918 * (ae * (C27943 + C27966 * C28065) +
                   be * (C27944 + C27969 * C28065) +
                   C27918 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C4015 =
        (ae * (C27930 + C27943 * C28128) + be * (C27931 + C27944 * C28128) +
         C27918 * (C27948 + C27974 * C28128)) /
        C27799;
    const double C4016 =
        (C27948 + C27974 * C28128 + ae * (C27949 + C27975 * C28128) +
         be * (C27950 + C27976 * C28128) +
         C27918 * (ae * (C27943 + C27966 * C28128) +
                   be * (C27944 + C27969 * C28128) +
                   C27918 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28128))) /
        C27799;
    const double C4767 =
        (2 * C27987 * C27948 + C27987 * (C27948 + C27974 * C28065)) / C27799;
    const double C5344 = (C28013 * (C27948 + C27974 * C28065)) / C27799;
    const double C5345 = (ae * C28013 * (C27943 + C27966 * C28065) +
                          be * C28013 * (C27944 + C27969 * C28065) +
                          C27918 * C28013 *
                              (C27974 + (C27955 * C27956 +
                                         C27922 * bs[6] * std::pow(C27916, 6)) *
                                            C27798 * C28065)) /
                         C27799;
    const double C8082 =
        (C27948 + C27974 * C28065 +
         (C27974 + (C27955 * C27956 + C27922 * bs[6] * std::pow(C27916, 6)) *
                       C27798 * C28065) *
             C28128) /
        C27799;
    const double C9284 =
        (2 * C28013 * C27948 + C28013 * (C27948 + C27974 * C28128)) / C27799;
    const double C1641 =
        (ae * (2 * C28001 + C27918 * C28010) +
         C28013 * (2 * C27918 * C28124 +
                   C27918 * (C28124 +
                             std::pow(C27916, 6) * bs[6] * C28118 * C27922))) /
        C27799;
    const double C4315 =
        (C28121 + C28124 * C27922 + ae * C28013 * C28010 +
         C28013 *
             (ae * C28010 + C28013 * (C28124 + std::pow(C27916, 6) * bs[6] *
                                                   C28118 * C27922))) /
        C27799;
    const double C156 = (3 * (C27994 + C27999 * C27922) +
                         C27918 * (2 * C28001 + C27918 * C28010)) /
                        C27797;
    const double C697 = (C27987 * (2 * C28001 + C27918 * C28010) +
                         (2 * C27939 + C27918 * C27968) * be) /
                        C27797;
    const double C1267 = (C28013 * (2 * C28001 + C27918 * C28010)) / C27797;
    const double C2264 =
        (C27994 + C27999 * C27922 + C27987 * (C27987 * C28010 + C27968 * be) +
         C27987 * C27968 * be) /
        C27797;
    const double C2678 = (C28013 * (C27987 * C28010 + C27968 * be)) / C27797;
    const double C4057 = (C27994 + C27999 * C27922 + C28010 * C28128) / C27797;
    const double C28315 = C28313 + C27967;
    const double C28375 = C27987 * C28370;
    const double C10708 =
        (2 * C28013 * C28306 + C28013 * (C28306 + C28370 * C28128)) / C27797;
    const double C12091 = (3 * (C27994 + C27999 * C28128) +
                           C28013 * (2 * C28509 + C28013 * C28513)) /
                          C27797;
    const double C955 =
        (ae * (2 * C28027 + C27918 * C28036) +
         C27987 * (2 * C27918 * C28087 +
                   C27918 * (C28087 +
                             std::pow(C27916, 6) * bs[6] * C28081 * C27922))) /
        C27799;
    const double C2437 =
        (C28084 + C28087 * C27922 + ae * C27987 * C28036 +
         C27987 *
             (ae * C28036 + C27987 * (C28087 + std::pow(C27916, 6) * bs[6] *
                                                   C28081 * C27922))) /
        C27799;
    const double C219 = (3 * (C28020 + C28025 * C27922) +
                         C27918 * (2 * C28027 + C27918 * C28036)) /
                        C27797;
    const double C763 = (C27987 * (2 * C28027 + C27918 * C28036)) / C27797;
    const double C1333 = (C28013 * (2 * C28027 + C27918 * C28036) +
                          (2 * C27939 + C27918 * C27968) * be) /
                         C27797;
    const double C2308 = (C28020 + C28025 * C27922 + C28036 * C28065) / C27797;
    const double C2734 =
        (C28013 * C27987 * C28036 + C27987 * C27968 * be) / C27797;
    const double C4101 =
        (C28020 + C28025 * C27922 + C28013 * (C28013 * C28036 + C27968 * be) +
         C28013 * C27968 * be) /
        C27797;
    const double C8918 =
        (C27987 * C28027 + C28013 * (C28013 * C28437 + C28311 * be) +
         C28013 * C28311 * be) /
        C27797;
    const double C28465 = C28462 + C27967;
    const double C6348 = (3 * (C28020 + C28025 * C28065) +
                          C27987 * (2 * C28382 + C27987 * C28386)) /
                         C27797;
    const double C6789 = (C28013 * (2 * C28382 + C27987 * C28386) +
                          (2 * C28304 + C27987 * C28372) * be) /
                         C27797;
    const double C8164 =
        (C28020 + C28025 * C28065 + C28013 * (C28013 * C28386 + C28372 * be) +
         C28013 * C28372 * be) /
        C27797;
    const double C28486 = C28484 + C28371;
    const double C28527 = C28013 * C28522;
    const double C1525 =
        (be * (2 * C28052 + C27918 * C28061) +
         C28013 * (2 * C27918 * C28087 +
                   C27918 * (C28087 +
                             std::pow(C27916, 6) * bs[6] * C28081 * C27922))) /
        C27799;
    const double C2899 =
        (ae * (C28013 * C28036 + C27968 * be) +
         C27987 *
             (be * C28061 + C28013 * (C28087 + std::pow(C27916, 6) * bs[6] *
                                                   C28081 * C27922))) /
        C27799;
    const double C4230 =
        (C28084 + C28087 * C27922 + be * C28013 * C28061 +
         C28013 *
             (be * C28061 + C28013 * (C28087 + std::pow(C27916, 6) * bs[6] *
                                                   C28081 * C27922))) /
        C27799;
    const double C281 = (3 * (C28045 + C28050 * C27922) +
                         C27918 * (2 * C28052 + C27918 * C28061)) /
                        C27797;
    const double C829 = (C27987 * (2 * C28052 + C27918 * C28061) +
                         (2 * C27939 + C27918 * C27968) * ae) /
                        C27797;
    const double C1399 = (C28013 * (2 * C28052 + C27918 * C28061)) / C27797;
    const double C2352 =
        (C28045 + C28050 * C27922 + C27987 * (C27987 * C28061 + C27968 * ae) +
         C27987 * C27968 * ae) /
        C27797;
    const double C2790 = (C28013 * (C27987 * C28061 + C27968 * ae)) / C27797;
    const double C4145 = (C28045 + C28050 * C27922 + C28061 * C28128) / C27797;
    const double C28316 = C28314 + C27970;
    const double C28376 = C27987 * C28373;
    const double C10820 =
        (2 * C28013 * C28307 + C28013 * (C28307 + C28373 * C28128)) / C27797;
    const double C12180 = (3 * (C28045 + C28050 * C28128) +
                           C28013 * (2 * C28499 + C28013 * C28501)) /
                          C27797;
    const double C28309 = C27918 * C28075;
    const double C28364 = C27987 * C28075;
    const double C28401 = C28013 * C28075;
    const double C330 =
        (3 * (C28070 + C28075 * C27922) +
         C27918 * (2 * C27918 * C28075 +
                   C27918 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C884 =
        (ae * (C27994 + C27999 * C27922) + be * (C28045 + C28050 * C27922) +
         C27987 * (C28070 + C28075 * C27922)) /
        C27799;
    const double C887 =
        (ae * (2 * C28001 + C27918 * C28010) +
         be * (2 * C28052 + C27918 * C28061) +
         C27987 * (2 * C27918 * C28075 +
                   C27918 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C1454 = (C28013 * (C28070 + C28075 * C27922)) / C27799;
    const double C1457 =
        (C28013 * (2 * C27918 * C28075 +
                   C27918 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C2395 =
        (C27918 * C28070 + ae * (C27987 * C28001 + C27939 * be) +
         be * (C27987 * C28052 + C27939 * ae) +
         C27987 * (ae * C28001 + be * C28052 + C27987 * C27918 * C28075)) /
        C27799;
    const double C2396 =
        (C28070 + C28075 * C27922 + ae * (C27987 * C28010 + C27968 * be) +
         be * (C27987 * C28061 + C27968 * ae) +
         C27987 * (ae * C28010 + be * C28061 +
                   C27987 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C2845 = (ae * C28013 * C28001 + be * C28013 * C28052 +
                          C27987 * C28013 * C27918 * C28075) /
                         C27799;
    const double C2846 = (ae * C28013 * C28010 + be * C28013 * C28061 +
                          C27987 * C28013 *
                              (C28075 + (C27955 * C27956 +
                                         C28065 * bs[6] * std::pow(C27916, 6)) *
                                            C27798 * C27922)) /
                         C27799;
    const double C4188 = (C27918 * C28070 + C27918 * C28075 * C28128) / C27799;
    const double C4189 =
        (C28070 + C28075 * C27922 +
         (C28075 + (C27955 * C27956 + C28065 * bs[6] * std::pow(C27916, 6)) *
                       C27798 * C27922) *
             C28128) /
        C27799;
    const double C5041 =
        (2 * (ae * C27994 + be * C28045 + C27987 * C28070) +
         ae * (C27994 + C27987 * C28306 + C28304 * be) +
         be * (C28045 + C27987 * C28307 + C28304 * ae) +
         C27987 * (C28070 + ae * C28306 + be * C28307 +
                   C27987 * (C28002 + C28053 + C27987 * C28075))) /
        C27799;
    const double C5558 =
        (C28013 * C28070 + ae * C28013 * C28306 + be * C28013 * C28307 +
         C27987 * (ae * C28013 * C27999 + be * C28013 * C28050 +
                   C27987 * C28013 * C28075)) /
        C27799;
    const double C8247 =
        (ae * (C27994 + C27999 * C28128) + be * (C28045 + C28050 * C28128) +
         C27987 * (C28070 + C28075 * C28128)) /
        C27799;
    const double C8248 =
        (C28070 + C28075 * C28128 + ae * (C28306 + C28370 * C28128) +
         be * (C28307 + C28373 * C28128) +
         C27987 * (ae * (C27999 + C28006 * C28128) +
                   be * (C28050 + C28057 * C28128) +
                   C27987 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28128))) /
        C27799;
    const double C9554 =
        (2 * C28013 * C28070 + C28013 * (C28070 + C28075 * C28128)) / C27799;
    const double C1071 =
        (be * (2 * C28103 + C27918 * C28112) +
         C27987 * (2 * C27918 * C28124 +
                   C27918 * (C28124 +
                             std::pow(C27916, 6) * bs[6] * C28118 * C27922))) /
        C27799;
    const double C2522 =
        (C28121 + C28124 * C27922 + be * C27987 * C28112 +
         C27987 *
             (be * C28112 + C27987 * (C28124 + std::pow(C27916, 6) * bs[6] *
                                                   C28118 * C27922))) /
        C27799;
    const double C3008 =
        (ae * (C27987 * C28010 + C27968 * be) +
         C28013 *
             (be * C28112 + C27987 * (C28124 + std::pow(C27916, 6) * bs[6] *
                                                   C28118 * C27922))) /
        C27799;
    const double C447 = (3 * (C28096 + C28101 * C27922) +
                         C27918 * (2 * C28103 + C27918 * C28112)) /
                        C27797;
    const double C1013 = (C27987 * (2 * C28103 + C27918 * C28112)) / C27797;
    const double C1583 = (C28013 * (2 * C28103 + C27918 * C28112) +
                          (2 * C27939 + C27918 * C27968) * ae) /
                         C27797;
    const double C2478 = (C28096 + C28101 * C27922 + C28112 * C28065) / C27797;
    const double C2952 =
        (C28013 * C27987 * C28112 + C27987 * C27968 * ae) / C27797;
    const double C4271 =
        (C28096 + C28101 * C27922 + C28013 * (C28013 * C28112 + C27968 * ae) +
         C28013 * C27968 * ae) /
        C27797;
    const double C9124 =
        (C27987 * C28103 + C28013 * (C28013 * C28438 + C28311 * ae) +
         C28013 * C28311 * ae) /
        C27797;
    const double C28466 = C28464 + C27970;
    const double C6524 = (3 * (C28096 + C28101 * C28065) +
                          C27987 * (2 * C28389 + C27987 * C28393)) /
                         C27797;
    const double C7015 = (C28013 * (2 * C28389 + C27987 * C28393) +
                          (2 * C28304 + C27987 * C28372) * ae) /
                         C27797;
    const double C8328 =
        (C28096 + C28101 * C28065 + C28013 * (C28013 * C28393 + C28372 * ae) +
         C28013 * C28372 * ae) /
        C27797;
    const double C28487 = C28485 + C28374;
    const double C28528 = C28013 * C28525;
    const double C28329 = C27918 * C28138;
    const double C28480 = C27987 * C28138;
    const double C28516 = C28013 * C28138;
    const double C549 =
        (3 * (C28133 + C28138 * C27922) +
         C27918 * (2 * C27918 * C28138 +
                   C27918 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C1126 = (C27987 * (C28133 + C28138 * C27922)) / C27799;
    const double C1129 =
        (C27987 * (2 * C27918 * C28138 +
                   C27918 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C1696 =
        (ae * (C28020 + C28025 * C27922) + be * (C28096 + C28101 * C27922) +
         C28013 * (C28133 + C28138 * C27922)) /
        C27799;
    const double C1699 =
        (ae * (2 * C28027 + C27918 * C28036) +
         be * (2 * C28103 + C27918 * C28112) +
         C28013 * (2 * C27918 * C28138 +
                   C27918 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C2562 = (C27918 * C28133 + C27918 * C28138 * C28065) / C27799;
    const double C2563 =
        (C28133 + C28138 * C27922 +
         (C28138 + (C27955 * C27956 + C28128 * bs[6] * std::pow(C27916, 6)) *
                       C27798 * C27922) *
             C28065) /
        C27799;
    const double C3060 = (ae * C27987 * C28027 + be * C27987 * C28103 +
                          C28013 * C27987 * C27918 * C28138) /
                         C27799;
    const double C3061 = (ae * C27987 * C28036 + be * C27987 * C28112 +
                          C28013 * C27987 *
                              (C28138 + (C27955 * C27956 +
                                         C28128 * bs[6] * std::pow(C27916, 6)) *
                                            C27798 * C27922)) /
                         C27799;
    const double C4355 =
        (C27918 * C28133 + ae * (C28013 * C28027 + C27939 * be) +
         be * (C28013 * C28103 + C27939 * ae) +
         C28013 * (ae * C28027 + be * C28103 + C28013 * C27918 * C28138)) /
        C27799;
    const double C4356 =
        (C28133 + C28138 * C27922 + ae * (C28013 * C28036 + C27968 * be) +
         be * (C28013 * C28112 + C27968 * ae) +
         C28013 * (ae * C28036 + be * C28112 +
                   C28013 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C27922))) /
        C27799;
    const double C5265 =
        (2 * C27987 * C28133 + C27987 * (C28133 + C28138 * C28065)) / C27799;
    const double C5768 =
        (ae * (C28020 + C28025 * C28065) + be * (C28096 + C28101 * C28065) +
         C28013 * (C28133 + C28138 * C28065)) /
        C27799;
    const double C6609 =
        (3 * (C28133 + C28138 * C28065) +
         C27987 * (2 * C27987 * C28138 +
                   C27987 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C7122 =
        (ae * (2 * C28382 + C27987 * C28386) +
         be * (2 * C28389 + C27987 * C28393) +
         C28013 * (2 * C27987 * C28138 +
                   C27987 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C8409 =
        (C27987 * C28133 + ae * (C28013 * C28382 + C28304 * be) +
         be * (C28013 * C28389 + C28304 * ae) +
         C28013 * (ae * C28382 + be * C28389 + C28013 * C27987 * C28138)) /
        C27799;
    const double C8410 =
        (C28133 + C28138 * C28065 + ae * (C28013 * C28386 + C28372 * be) +
         be * (C28013 * C28393 + C28372 * ae) +
         C28013 * (ae * C28386 + be * C28393 +
                   C28013 * (C28138 + (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C9803 =
        (2 * (ae * C28020 + be * C28096 + C28013 * C28133) +
         ae * (C28020 + C28013 * C28459 + C28457 * be) +
         be * (C28096 + C28013 * C28460 + C28457 * ae) +
         C28013 * (C28133 + ae * C28459 + be * C28460 +
                   C28013 * (C28028 + C28104 + C28013 * C28138))) /
        C27799;
    const double C18867 = C1275 - C1276;
    const double C18865 = C1276 - C1275;
    const double C12095 = C9375 - C9376;
    const double C161 =
        (3 * (C27998 + ae * C28001 + C27918 * C28009) +
         ae * (2 * C28001 + C27918 * C28010) +
         C27918 *
             (2 * C28009 + ae * C28010 +
              C27918 * (C28005 + ae * C27918 * C28006 +
                        C27918 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C27993)))) /
        C27799;
    const double C700 = (be * (C27931 + C27918 * C27950 + C27939 * ae) +
                         C27987 * (C27998 + ae * C28001 + C27918 * C28009)) /
                        C27799;
    const double C1270 =
        (C28013 * (C27998 + ae * C28001 + C27918 * C28009)) / C27799;
    const double C1271 =
        (C28013 *
         (2 * C28009 + ae * C28010 +
          C27918 * (C28005 + ae * C27918 * C28006 +
                    C27918 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                bs[6] * C27993)))) /
        C27799;
    const double C2266 = (ae * C27994 + C27918 * C27998 + be * C27987 * C27950 +
                          C27987 * (be * C27950 + C27987 * C28009)) /
                         C27799;
    const double C2680 = (C28013 * (be * C27950 + C27987 * C28009)) / C27799;
    const double C4059 =
        (ae * C27994 + C27918 * C27998 + C28009 * C28128) / C27799;
    const double C4060 =
        (C27998 + ae * C28001 + C27918 * C28009 +
         (C28005 + ae * C27918 * C28006 +
          C27918 *
              (ae * C28006 + C27918 * std::pow(C27916, 6) * bs[6] * C27993)) *
             C28128) /
        C27799;
    const double C4854 =
        (2 * (be * C27950 + C27987 * C28009) + be * (C27950 + C27976 * C28065) +
         C27987 *
             (C28009 + be * C27987 * C27976 +
              C27987 * (be * C27976 +
                        C27987 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C27993)))) /
        C27799;
    const double C5399 =
        (C28013 *
         (C28009 + be * C27987 * C27976 +
          C27987 * (be * C27976 +
                    C27987 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                bs[6] * C27993)))) /
        C27799;
    const double C8867 =
        (be * C27950 + C27987 * C28009 +
         (be * C27976 + C27987 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C27993)) *
             C28128) /
        C27799;
    const double C9367 =
        (2 * C28013 * C28009 +
         C28013 * (C28009 + (ae * C28006 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C27993) *
                                C28128)) /
        C27799;
    const double C6309 =
        (3 * (C27998 + be * C28350 + C27987 * C28353) +
         be * (2 * C28350 + C27987 * C28354) +
         C27987 *
             (2 * C28353 + be * C28354 +
              C27987 * (C28005 + be * C27987 * C27969 +
                        C27987 * (be * C27969 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C27993)))) /
        C27799;
    const double C6738 =
        (C28013 *
         (2 * C28353 + be * C28354 +
          C27987 * (C28005 + be * C27987 * C27969 +
                    C27987 * (be * C27969 + C27987 * std::pow(C27916, 6) *
                                                bs[6] * C27993)))) /
        C27799;
    const double C8123 =
        (be * C27931 + C27987 * C27998 + C28353 * C28128) / C27799;
    const double C8124 =
        (C27998 + be * C28350 + C27987 * C28353 +
         (C28005 + be * C27987 * C27969 +
          C27987 *
              (be * C27969 + C27987 * std::pow(C27916, 6) * bs[6] * C27993)) *
             C28128) /
        C27799;
    const double C10709 =
        (2 * C28013 * C28353 +
         C28013 * (C28353 + (be * C27969 +
                             C27987 * std::pow(C27916, 6) * bs[6] * C27993) *
                                C28128)) /
        C27799;
    const double C286 =
        (3 * (C28049 + be * C28052 + C27918 * C28060) +
         be * (2 * C28052 + C27918 * C28061) +
         C27918 *
             (2 * C28060 + be * C28061 +
              C27918 * (C28056 + be * C27918 * C28057 +
                        C27918 * (be * C28057 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28044)))) /
        C27799;
    const double C832 = (ae * (C27930 + C27918 * C27949 + C27939 * be) +
                         C27987 * (C28049 + be * C28052 + C27918 * C28060)) /
                        C27799;
    const double C1402 =
        (C28013 * (C28049 + be * C28052 + C27918 * C28060)) / C27799;
    const double C1403 =
        (C28013 *
         (2 * C28060 + be * C28061 +
          C27918 * (C28056 + be * C27918 * C28057 +
                    C27918 * (be * C28057 + C27918 * std::pow(C27916, 6) *
                                                bs[6] * C28044)))) /
        C27799;
    const double C2354 = (be * C28045 + C27918 * C28049 + ae * C27987 * C27949 +
                          C27987 * (ae * C27949 + C27987 * C28060)) /
                         C27799;
    const double C2792 =
        (ae * C28013 * C27949 + C27987 * C28013 * C28060) / C27799;
    const double C4147 =
        (be * C28045 + C27918 * C28049 + C28060 * C28128) / C27799;
    const double C4148 =
        (C28049 + be * C28052 + C27918 * C28060 +
         (C28056 + be * C27918 * C28057 +
          C27918 *
              (be * C28057 + C27918 * std::pow(C27916, 6) * bs[6] * C28044)) *
             C28128) /
        C27799;
    const double C4974 =
        (2 * (ae * C27949 + C27987 * C28060) + ae * (C27949 + C27975 * C28065) +
         C27987 *
             (C28060 + ae * C27987 * C27975 +
              C27987 * (ae * C27975 +
                        C27987 * (be * C28057 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28044)))) /
        C27799;
    const double C5507 =
        (C28013 * C28060 + ae * C28013 * C27987 * C27975 +
         C27987 * (ae * C28013 * C27975 +
                   C27987 * C28013 *
                       (be * C28057 +
                        C27918 * std::pow(C27916, 6) * bs[6] * C28044))) /
        C27799;
    const double C8971 =
        (ae * (C27949 + C27975 * C28128) +
         C27987 * (C28060 + (be * C28057 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C28044) *
                                C28128)) /
        C27799;
    const double C9487 =
        (2 * C28013 * C28060 +
         C28013 * (C28060 + (be * C28057 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C28044) *
                                C28128)) /
        C27799;
    const double C6398 =
        (3 * (C28049 + ae * C28357 + C27987 * C28360) +
         ae * (2 * C28357 + C27987 * C28361) +
         C27987 *
             (2 * C28360 + ae * C28361 +
              C27987 * (C28056 + ae * C27987 * C27966 +
                        C27987 * (ae * C27966 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C28044)))) /
        C27799;
    const double C13157 = C771 - C772;
    const double C13155 = C772 - C771;
    const double C6352 = C4916 - C4917;
    const double C224 =
        (3 * (C28024 + ae * C28027 + C27918 * C28035) +
         ae * (2 * C28027 + C27918 * C28036) +
         C27918 *
             (2 * C28035 + ae * C28036 +
              C27918 * (C28031 + ae * C27918 * C28032 +
                        C27918 * (ae * C28032 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28019)))) /
        C27799;
    const double C766 =
        (C27987 * (C28024 + ae * C28027 + C27918 * C28035)) / C27799;
    const double C767 =
        (C27987 *
         (2 * C28035 + ae * C28036 +
          C27918 * (C28031 + ae * C27918 * C28032 +
                    C27918 * (ae * C28032 + C27918 * std::pow(C27916, 6) *
                                                bs[6] * C28019)))) /
        C27799;
    const double C1336 = (be * (C27931 + C27918 * C27950 + C27939 * ae) +
                          C28013 * (C28024 + ae * C28027 + C27918 * C28035)) /
                         C27799;
    const double C2310 =
        (ae * C28020 + C27918 * C28024 + C28035 * C28065) / C27799;
    const double C2311 =
        (C28024 + ae * C28027 + C27918 * C28035 +
         (C28031 + ae * C27918 * C28032 +
          C27918 *
              (ae * C28032 + C27918 * std::pow(C27916, 6) * bs[6] * C28019)) *
             C28065) /
        C27799;
    const double C2736 =
        (be * C27987 * C27950 + C28013 * C27987 * C28035) / C27799;
    const double C4103 = (ae * C28020 + C27918 * C28024 + be * C28013 * C27950 +
                          C28013 * (be * C27950 + C28013 * C28035)) /
                         C27799;
    const double C4908 =
        (2 * C27987 * C28035 +
         C27987 * (C28035 + (ae * C28032 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C28019) *
                                C28065)) /
        C27799;
    const double C5453 =
        (be * (C27950 + C27976 * C28065) +
         C28013 * (C28035 + (ae * C28032 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C28019) *
                                C28065)) /
        C27799;
    const double C9433 =
        (2 * (be * C27950 + C28013 * C28035) + be * (C27950 + C27976 * C28128) +
         C28013 *
             (C28035 + be * C28013 * C27976 +
              C28013 * (be * C27976 +
                        C28013 * (ae * C28032 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28019)))) /
        C27799;
    const double C12141 =
        (3 * (C28024 + be * C28491 + C28013 * C28494) +
         be * (2 * C28491 + C28013 * C28495) +
         C28013 *
             (2 * C28494 + be * C28495 +
              C28013 * (C28031 + be * C28013 * C27969 +
                        C28013 * (be * C27969 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28019)))) /
        C27799;
    const double C13387 = C957 - C958;
    const double C13386 = C958 - C957;
    const double C6484 = C5098 - C5099;
    const double C6482 =
        (3 * (C28084 + ae * C28382 + C27987 * C28385) +
         ae * (2 * C28382 + C27987 * C28386) +
         C27987 *
             (2 * C28385 + ae * C28386 +
              C27987 * (C28087 + ae * C27987 * C28032 +
                        C27987 * (ae * C28032 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C28081)))) /
        C27799;
    const double C6960 =
        (2 * (ae * (C28013 * C28025 + C27938) + C27987 * C28404) +
         ae * (C28013 * C28386 + C28372 * be) +
         C27987 *
             (C28404 + ae * (C28013 * C27987 * C28032 + C28371) +
              C27987 * (ae * (C28013 * C28032 + C27960) +
                        C27987 * (be * C28057 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28081)))) /
        C27799;
    const double C8287 =
        (ae * (C28020 + C28013 * (C28013 * C28025 + C27938) +
               C28013 * C27933 * be) +
         C27987 * (C28084 + be * C28013 * C28050 + C28013 * C28404)) /
        C27799;
    const double C8288 =
        (C28084 + be * C28013 * C28050 + C28013 * C28404 +
         ae * (C28382 + C28013 * (C28013 * C27987 * C28032 + C28371) +
               C28013 * C28366 * be) +
         C27987 *
             (ae * (C28025 + C28013 * (C28013 * C28032 + C27960) +
                    C28013 * C27954 * be) +
              C27987 * (C28087 + be * C28013 * C28057 +
                        C28013 * (be * C28057 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28081)))) /
        C27799;
    const double C9631 =
        (2 * (be * C28045 + C28013 * C28084) + be * (C28045 + C28050 * C28128) +
         C28013 * (C28084 + be * C28013 * C28050 + C28013 * C28404)) /
        C27799;
    const double C10943 =
        (ae * (2 * C28459 +
               C28013 * (C28025 + C28013 * (C28013 * C28032 + C27960) +
                         C28013 * C27954 * be) +
               (C27933 + C27954 * C28128) * be) +
         C27987 *
             (2 * C28404 + be * (C28050 + C28057 * C28128) +
              C28013 * (C28087 + be * C28013 * C28057 +
                        C28013 * (be * C28057 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28081)))) /
        C27799;
    const double C12276 =
        (3 * (C28084 + be * C28499 + C28013 * C28404) +
         be * (2 * C28499 + C28013 * C28501) +
         C28013 *
             (2 * C28404 + be * C28501 +
              C28013 * (C28087 + be * C28013 * C28057 +
                        C28013 * (be * C28057 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28081)))) /
        C27799;
    const double C452 =
        (3 * (C28100 + be * C28103 + C27918 * C28111) +
         be * (2 * C28103 + C27918 * C28112) +
         C27918 *
             (2 * C28111 + be * C28112 +
              C27918 * (C28107 + be * C27918 * C28108 +
                        C27918 * (be * C28108 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28095)))) /
        C27799;
    const double C1016 =
        (C27987 * (C28100 + be * C28103 + C27918 * C28111)) / C27799;
    const double C1017 =
        (C27987 *
         (2 * C28111 + be * C28112 +
          C27918 * (C28107 + be * C27918 * C28108 +
                    C27918 * (be * C28108 + C27918 * std::pow(C27916, 6) *
                                                bs[6] * C28095)))) /
        C27799;
    const double C1586 = (ae * (C27930 + C27918 * C27949 + C27939 * be) +
                          C28013 * (C28100 + be * C28103 + C27918 * C28111)) /
                         C27799;
    const double C2480 =
        (be * C28096 + C27918 * C28100 + C28111 * C28065) / C27799;
    const double C2481 =
        (C28100 + be * C28103 + C27918 * C28111 +
         (C28107 + be * C27918 * C28108 +
          C27918 *
              (be * C28108 + C27918 * std::pow(C27916, 6) * bs[6] * C28095)) *
             C28065) /
        C27799;
    const double C2954 =
        (ae * C27987 * C27949 + C28013 * C27987 * C28111) / C27799;
    const double C4273 = (be * C28096 + C27918 * C28100 + ae * C28013 * C27949 +
                          C28013 * (ae * C27949 + C28013 * C28111)) /
                         C27799;
    const double C5154 =
        (2 * C27987 * C28111 +
         C27987 * (C28111 + (be * C28108 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C28095) *
                                C28065)) /
        C27799;
    const double C5665 =
        (ae * (C27949 + C27975 * C28065) +
         C28013 * (C28111 + (be * C28108 +
                             C27918 * std::pow(C27916, 6) * bs[6] * C28095) *
                                C28065)) /
        C27799;
    const double C9686 =
        (2 * (ae * C27949 + C28013 * C28111) + ae * (C27949 + C27975 * C28128) +
         C28013 *
             (C28111 + ae * C28013 * C27975 +
              C28013 * (ae * C27975 +
                        C28013 * (be * C28108 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28095)))) /
        C27799;
    const double C12316 =
        (3 * (C28100 + ae * C28503 + C28013 * C28506) +
         ae * (2 * C28503 + C28013 * C28507) +
         C28013 *
             (2 * C28506 + ae * C28507 +
              C28013 * (C28107 + ae * C28013 * C27966 +
                        C28013 * (ae * C27966 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28095)))) /
        C27799;
    const double C19305 = C1643 - C1644;
    const double C19304 = C1644 - C1643;
    const double C12360 = C9750 - C9751;
    const double C6570 =
        (3 * (C28121 + be * C28389 + C27987 * C28392) +
         be * (2 * C28389 + C27987 * C28393) +
         C27987 *
             (2 * C28392 + be * C28393 +
              C27987 * (C28124 + be * C27987 * C28108 +
                        C27987 * (be * C28108 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C28118)))) /
        C27799;
    const double C8369 = (be * C28096 + C27987 * C28121 + ae * C28013 * C28306 +
                          C28013 * (ae * C28306 + C28013 * C28392)) /
                         C27799;
    const double C11048 =
        (2 * (ae * C28306 + C28013 * C28392) + ae * (C28306 + C28370 * C28128) +
         C28013 *
             (C28392 + ae * C28013 * C28370 +
              C28013 * (ae * C28370 +
                        C28013 * (be * C28108 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C28118)))) /
        C27799;
    const double C12358 =
        (3 * (C28121 + ae * C28509 + C28013 * C28512) +
         ae * (2 * C28509 + C28013 * C28513) +
         C28013 *
             (2 * C28512 + ae * C28513 +
              C28013 * (C28124 + ae * C28013 * C28006 +
                        C28013 * (ae * C28006 + C28013 * std::pow(C27916, 6) *
                                                    bs[6] * C28118)))) /
        C27799;
    const double C27808 = C27807 / C27797;
    const double C4780 = C4399 * C635;
    const double C4778 = C4399 * C634;
    const double C4776 = C4399 * C2216;
    const double C4774 = C4399 * C2215;
    const double C4772 = C4399 * C637;
    const double C4770 = C4399 * C636;
    const double C4990 = C4399 * C2351;
    const double C4988 = C4399 * C2213;
    const double C4986 = C4399 * C827;
    const double C4984 = C4399 * C629;
    const double C4983 = C4399 * C2350;
    const double C4981 = C4399 * C2212;
    const double C4979 = C4399 * C826;
    const double C4977 = C4399 * C630;
    const double C5162 = C4399 * C2477;
    const double C5160 = C4399 * C1011;
    const double C5159 = C4399 * C2476;
    const double C5157 = C4399 * C1010;
    const double C6265 = C4399 * C4764;
    const double C6263 = C4399 * C4763;
    const double C6402 = C4399 * C4761;
    const double C6529 = C4399 * C5151;
    const double C6678 = C4399 * C2618;
    const double C6676 = C4399 * C2617;
    const double C6674 = C4399 * C5341;
    const double C6672 = C4399 * C5340;
    const double C6856 = C4399 * C5338;
    const double C6854 = C4399 * C2788;
    const double C6852 = C4399 * C2614;
    const double C7020 = C4399 * C5662;
    const double C7018 = C4399 * C2950;
    const double C9297 = C4399 * C1205;
    const double C9295 = C4399 * C1204;
    const double C9293 = C4399 * C4009;
    const double C9291 = C4399 * C4008;
    const double C9289 = C4399 * C1207;
    const double C9287 = C4399 * C1206;
    const double C9503 = C4399 * C4144;
    const double C9501 = C4399 * C4006;
    const double C9499 = C4399 * C1397;
    const double C9497 = C4399 * C1199;
    const double C9496 = C4399 * C4143;
    const double C9494 = C4399 * C4005;
    const double C9492 = C4399 * C1396;
    const double C9490 = C4399 * C1200;
    const double C9694 = C4399 * C4270;
    const double C9692 = C4399 * C1581;
    const double C9691 = C4399 * C4269;
    const double C9689 = C4399 * C1580;
    const double C10654 = C4399 * C8078;
    const double C10652 = C4399 * C8077;
    const double C10823 = C4399 * C8075;
    const double C10997 = C4399 * C8327;
    const double C12049 = C4399 * C9281;
    const double C12047 = C4399 * C9280;
    const double C12187 = C4399 * C9484;
    const double C12185 = C4399 * C9278;
    const double C23427 = C4399 * C2789;
    const double C23425 = C4399 * C2615;
    const double C23631 = C4399 * C2951;
    const double C27853 = C27852 / C27797;
    const double C347 = C344 - C334;
    const double C9573 = C9570 - C9559;
    const double C27879 = C27878 / C27797;
    const double C566 = C563 - C553;
    const double C5283 = C5280 - C5270;
    const double C173 = C151 * C105;
    const double C236 = C214 * C105;
    const double C709 = C151 * C633;
    const double C775 = C214 * C633;
    const double C12526 = C12510 * C633;
    const double C13000 = C12457 * C633;
    const double C1279 = C151 * C1203;
    const double C1345 = C214 * C1203;
    const double C17731 = C17715 * C1203;
    const double C18784 = C12457 * C1203;
    const double C4784 = C4399 * C2218;
    const double C4920 = C214 * C2218;
    const double C13086 = C12510 * C2218;
    const double C14881 = C12457 * C2218;
    const double C13738 = C12510 * C2620;
    const double C13808 = C214 * C2620;
    const double C15373 = C12457 * C2620;
    const double C18205 = C151 * C2620;
    const double C18279 = C17715 * C2620;
    const double C23213 = C4399 * C2620;
    const double C9301 = C4399 * C4011;
    const double C9379 = C151 * C4011;
    const double C18940 = C17715 * C4011;
    const double C22266 = C12457 * C4011;
    const double C6404 = C4399 * C4971;
    const double C6485 = C214 * C4971;
    const double C6858 = C4399 * C5504;
    const double C6964 = C214 * C5504;
    const double C25305 = C17715 * C5504;
    const double C25829 = C12510 * C5504;
    const double C10825 = C4399 * C8205;
    const double C10884 = C151 * C8205;
    const double C25905 = C17715 * C8205;
    const double C27573 = C12510 * C8205;
    const double C12319 = C4399 * C9683;
    const double C12361 = C151 * C9683;
    const double C5282 = C5276 - C5277;
    const double C14231 = C14226 - C14227;
    const double C18417 = C18413 - C18414;
    const double C9572 = C9566 - C9567;
    const double C12998 = C12457 * C632;
    const double C13235 = C12452 * C632;
    const double C18782 = C12457 * C1202;
    const double C19019 = C12452 * C1202;
    const double C4782 = C4399 * C2217;
    const double C4989 = C28784 * C2217;
    const double C14879 = C12457 * C2217;
    const double C15046 = C12452 * C2217;
    const double C15371 = C12457 * C2619;
    const double C15586 = C12452 * C2619;
    const double C23211 = C4399 * C2619;
    const double C23426 = C28784 * C2619;
    const double C9299 = C4399 * C4010;
    const double C9502 = C28784 * C4010;
    const double C22264 = C12457 * C4010;
    const double C22431 = C12452 * C4010;
    const double C26044 = C12454 * C5716;
    const double C25608 = C12454 * C5396;
    const double C25827 = C12510 * C5396;
    const double C10716 = C28870 * C8121;
    const double C10882 = C151 * C8121;
    const double C27416 = C12454 * C8121;
    const double C27571 = C12510 * C8121;
    const double C4781 = C28784 * C641;
    const double C12997 = C12451 * C641;
    const double C12993 = C12452 * C641;
    const double C9298 = C28784 * C1211;
    const double C18781 = C12451 * C1211;
    const double C18777 = C12452 * C1211;
    const double C4777 = C28784 * C2221;
    const double C14886 = C12451 * C2221;
    const double C6679 = C28784 * C2623;
    const double C15378 = C12451 * C2623;
    const double C9294 = C28784 * C4014;
    const double C22271 = C12451 * C4014;
    const double C343 = C28870 * C329;
    const double C896 = C28870 * C885;
    const double C12687 = C12454 * C885;
    const double C13313 = C12453 * C885;
    const double C1466 = C28870 * C1455;
    const double C13949 = C12453 * C1455;
    const double C10881 = C28870 * C2844;
    const double C24124 = C12454 * C2844;
    const double C25826 = C12453 * C2844;
    const double C9564 = C28870 * C4187;
    const double C27578 = C12453 * C4187;
    const double C562 = C28881 * C548;
    const double C1138 = C28881 * C1127;
    const double C18697 = C17612 * C1127;
    const double C1708 = C28881 * C1697;
    const double C18050 = C17613 * C1697;
    const double C19379 = C17612 * C1697;
    const double C5275 = C28881 * C2561;
    const double C25464 = C17612 * C2561;
    const double C7131 = C28881 * C3059;
    const double C23772 = C17613 * C3059;
    const double C26118 = C17612 * C3059;
    const double C499 = C175 * C214;
    const double C348 = C345 - C338;
    const double C349 = C346 - C342;
    const double C900 = C898 - C895;
    const double C899 = C897 - C891;
    const double C1470 = C1468 - C1465;
    const double C1469 = C1467 - C1461;
    const double C10888 = C10886 - C10880;
    const double C12100 = C12094 * C4399;
    const double C9574 = C9571 - C9563;
    const double C12236 = C12235 - C12233;
    const double C398 = C238 * C151;
    const double C567 = C564 - C557;
    const double C568 = C565 - C561;
    const double C1142 = C1140 - C1137;
    const double C1141 = C1139 - C1133;
    const double C1712 = C1710 - C1707;
    const double C1711 = C1709 - C1703;
    const double C6357 = C6351 * C4399;
    const double C5284 = C5281 - C5274;
    const double C7135 = C7133 - C7130;
    const double C6616 = C6615 - C6613;
    const double C7134 = C7132 - C7126;
    const double C404 = C403 * C28870;
    const double C505 = C504 * C28881;
    const double C27982 = C27944 + C27979;
    const double C8919 =
        (C27987 * C28035 + be * C28013 * C28429 +
         C28013 *
             (be * C28429 + C28013 * C27987 *
                                (ae * C28032 + C27918 * std::pow(C27916, 6) *
                                                   bs[6] * C28019))) /
        C27799;
    const double C8814 = (C27987 * C27950 + C28429 * C28128) / C27797;
    const double C27981 = C27943 + C27978;
    const double C9125 =
        (C27987 * C28111 + ae * C28013 * C28434 +
         C28013 *
             (ae * C28434 + C28013 * C27987 *
                                (be * C28108 + C27918 * std::pow(C27916, 6) *
                                                   bs[6] * C28095))) /
        C27799;
    const double C8813 = (C27987 * C27949 + C28434 * C28128) / C27797;
    const double C27980 = C27957 + C27977;
    const double C2624 =
        (ae * C28013 * C27987 * C27943 + be * C28013 * C27987 * C27944 +
         C27918 * C28013 * C28143) /
        C27799;
    const double C2625 =
        (C28013 * C28143 + ae * C28013 * C27987 * C27975 +
         be * C28013 * C27987 * C27976 +
         C27918 *
             (ae * C28013 * C27987 * C27966 + be * C28013 * C27987 * C27969 +
              C27918 * C28013 * C27987 *
                  (C27955 * C27956 + C27922 * bs[6] * std::pow(C27916, 6)) *
                  C27798)) /
        C27799;
    const double C4768 =
        (ae * (2 * C27987 * C27943 + C27987 * (C27943 + C27966 * C28065)) +
         be * (2 * C27987 * C27944 + C27987 * (C27944 + C27969 * C28065)) +
         C27918 * (2 * C28143 +
                   C27987 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C6261 =
        (3 * (C27948 + C27974 * C28065) +
         C27987 * (2 * C28143 +
                   C27987 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C6670 =
        (C28013 * (2 * C28143 +
                   C27987 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28065))) /
        C27799;
    const double C8081 = (C27987 * C27948 + C28143 * C28128) / C27799;
    const double C8815 =
        (ae * (C28357 + C27987 * C27966 * C28128) +
         be * (C28350 + C27987 * C27969 * C28128) +
         C27918 * (C28143 + C27987 *
                                (C27955 * C27956 +
                                 C27922 * bs[6] * std::pow(C27916, 6)) *
                                C27798 * C28128)) /
        C27799;
    const double C10650 =
        (2 * C28013 * C28143 +
         C28013 * (C28143 + C27987 *
                                (C27955 * C27956 +
                                 C27922 * bs[6] * std::pow(C27916, 6)) *
                                C27798 * C28128)) /
        C27799;
    const double C9285 =
        (ae * (2 * C28013 * C27943 + C28013 * (C27943 + C27966 * C28128)) +
         be * (2 * C28013 * C27944 + C28013 * (C27944 + C27969 * C28128)) +
         C27918 * (2 * C28180 +
                   C28013 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28128))) /
        C27799;
    const double C12045 =
        (3 * (C27948 + C27974 * C28128) +
         C28013 * (2 * C28180 +
                   C28013 * (C27974 + (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28128))) /
        C27799;
    const double C13001 = C12452 * C640;
    const double C18785 = C12452 * C1210;
    const double C4785 = C28784 * C2222;
    const double C14882 = C12452 * C2222;
    const double C9302 = C28784 * C4015;
    const double C22267 = C12452 * C4015;
    const double C6266 = C28784 * C4767;
    const double C6675 = C28784 * C5344;
    const double C12050 = C28784 * C9284;
    const double C5717 =
        (ae * (C28001 + C27987 * C28315 + C28311 * be) +
         C28013 *
             (C28325 + be * C27987 * C28326 +
              C27987 * (be * C28326 + C27987 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28118))) /
        C27799;
    const double C9176 =
        (be * C28103 + C27987 * C28325 + ae * C28013 * C28315 +
         C28013 *
             (ae * C28315 +
              C28013 * (be * C28326 + C27987 * C27918 * std::pow(C27916, 6) *
                                          bs[6] * C28118))) /
        C27799;
    const double C4852 = (2 * (C27987 * C28001 + C27939 * be) +
                          C27987 * (C28001 + C27987 * C28315 + C28311 * be) +
                          (C27939 + C27961 * C28065) * be) /
                         C27797;
    const double C5397 =
        (C28013 * (C28001 + C27987 * C28315 + C28311 * be)) / C27797;
    const double C8866 =
        (C27987 * C28001 + C27939 * be + C28315 * C28128) / C27797;
    const double C28377 = C27999 + C28375;
    const double C9431 = (2 * (C28013 * C28027 + C27939 * be) +
                          C28013 * (C28027 + C28013 * C28465 + C28463 * be) +
                          (C27939 + C27961 * C28128) * be) /
                         C27797;
    const double C10768 = (2 * (C28013 * C28382 + C28304 * be) +
                           C28013 * (C28382 + C28013 * C28486 + C28482 * be) +
                           (C28304 + C28366 * C28128) * be) /
                          C27797;
    const double C28529 = C28025 + C28527;
    const double C4972 = (2 * (C27987 * C28052 + C27939 * ae) +
                          C27987 * (C28052 + C27987 * C28316 + C28311 * ae) +
                          (C27939 + C27961 * C28065) * ae) /
                         C27797;
    const double C5505 =
        (C28013 * (C28052 + C27987 * C28316 + C28311 * ae)) / C27797;
    const double C8970 =
        (C27987 * C28052 + C27939 * ae + C28316 * C28128) / C27797;
    const double C28378 = C28050 + C28376;
    const double C5042 =
        (2 * (ae * C28001 + be * C28052 + C27987 * C28309) +
         ae * (C28001 + C27987 * C28315 + C28311 * be) +
         be * (C28052 + C27987 * C28316 + C28311 * ae) +
         C27987 * (C28309 + ae * C28315 + be * C28316 +
                   C27987 * (ae * C28310 + be * C28312 +
                             C27987 * C27918 *
                                 (C27955 * C27956 +
                                  C28065 * bs[6] * std::pow(C27916, 6)) *
                                 C27798))) /
        C27799;
    const double C5559 =
        (C28013 * C28309 + ae * C28013 * C28315 + be * C28013 * C28316 +
         C27987 *
             (ae * C28013 * C28310 + be * C28013 * C28312 +
              C27987 * C28013 * C27918 *
                  (C27955 * C27956 + C28065 * bs[6] * std::pow(C27916, 6)) *
                  C27798)) /
        C27799;
    const double C9022 =
        (ae * (C28001 + C28310 * C28128) + be * (C28052 + C28312 * C28128) +
         C27987 * (C28309 + C27918 *
                                (C27955 * C27956 +
                                 C28065 * bs[6] * std::pow(C27916, 6)) *
                                C27798 * C28128)) /
        C27799;
    const double C9555 =
        (2 * C28013 * C28309 +
         C28013 * (C28309 + C27918 *
                                (C27955 * C27956 +
                                 C28065 * bs[6] * std::pow(C27916, 6)) *
                                C27798 * C28128)) /
        C27799;
    const double C28369 = C28363 + C28364;
    const double C10876 =
        (ae * (2 * C28013 * C27999 + C28013 * (C27999 + C28006 * C28128)) +
         be * (2 * C28013 * C28050 + C28013 * (C28050 + C28057 * C28128)) +
         C27987 * (2 * C28401 +
                   C28013 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28128))) /
        C27799;
    const double C12229 =
        (3 * (C28070 + C28075 * C28128) +
         C28013 * (2 * C28401 +
                   C28013 * (C28075 + (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                          C27798 * C28128))) /
        C27799;
    const double C892 = C28870 * C884;
    const double C12691 = C12454 * C884;
    const double C1462 = C28870 * C1454;
    const double C13309 = C12454 * C2395;
    const double C13945 = C12454 * C2845;
    const double C18416 = C28870 * C2845;
    const double C9569 = C28870 * C4188;
    const double C25830 = C12454 * C5558;
    const double C10885 = C28870 * C8247;
    const double C27574 = C12454 * C8247;
    const double C12234 = C28870 * C9554;
    const double C9684 = (2 * (C28013 * C28103 + C27939 * ae) +
                          C28013 * (C28103 + C28013 * C28466 + C28463 * ae) +
                          (C27939 + C27961 * C28128) * ae) /
                         C27797;
    const double C10994 = (2 * (C28013 * C28389 + C28304 * ae) +
                           C28013 * (C28389 + C28013 * C28487 + C28482 * ae) +
                           (C28304 + C28366 * C28128) * ae) /
                          C27797;
    const double C28530 = C28101 + C28528;
    const double C5266 =
        (2 * C27987 * C28329 +
         C27987 * (C28329 + C27918 *
                                (C27955 * C27956 +
                                 C28128 * bs[6] * std::pow(C27916, 6)) *
                                C27798 * C28065)) /
        C27799;
    const double C5769 =
        (ae * (C28027 + C28320 * C28065) + be * (C28103 + C28326 * C28065) +
         C28013 * (C28329 + C27918 *
                                (C27955 * C27956 +
                                 C28128 * bs[6] * std::pow(C27916, 6)) *
                                C27798 * C28065)) /
        C27799;
    const double C9227 =
        (C27987 * C28329 + ae * (C28013 * C28437 + C28311 * be) +
         be * (C28013 * C28438 + C28311 * ae) +
         C28013 *
             (ae * C28437 + be * C28438 +
              C28013 * C27987 * C27918 *
                  (C27955 * C27956 + C28128 * bs[6] * std::pow(C27916, 6)) *
                  C27798)) /
        C27799;
    const double C9804 =
        (2 * (ae * C28027 + be * C28103 + C28013 * C28329) +
         ae * (C28027 + C28013 * C28465 + C28463 * be) +
         be * (C28103 + C28013 * C28466 + C28463 * ae) +
         C28013 * (C28329 + ae * C28465 + be * C28466 +
                   C28013 * (ae * C28320 + be * C28326 +
                             C28013 * C27918 *
                                 (C27955 * C27956 +
                                  C28128 * bs[6] * std::pow(C27916, 6)) *
                                 C27798))) /
        C27799;
    const double C11103 =
        (2 * (ae * C28382 + be * C28389 + C28013 * C28480) +
         ae * (C28382 + C28013 * C28486 + C28482 * be) +
         be * (C28389 + C28013 * C28487 + C28482 * ae) +
         C28013 * (C28480 + ae * C28486 + be * C28487 +
                   C28013 * (ae * C28481 + be * C28483 +
                             C28013 * C27987 *
                                 (C27955 * C27956 +
                                  C28128 * bs[6] * std::pow(C27916, 6)) *
                                 C27798))) /
        C27799;
    const double C28521 = C28515 + C28516;
    const double C1134 = C28881 * C1126;
    const double C1704 = C28881 * C1696;
    const double C18054 = C17613 * C1696;
    const double C5279 = C28881 * C2562;
    const double C14229 = C28881 * C3060;
    const double C18693 = C17613 * C3060;
    const double C19375 = C17613 * C4355;
    const double C6614 = C28881 * C5265;
    const double C7127 = C28881 * C5768;
    const double C25460 = C17613 * C5768;
    const double C26114 = C17613 * C8409;
    const double C12101 = C12095 * C28784;
    const double C710 = C28870 * C700;
    const double C12527 = C12454 * C700;
    const double C1280 = C28870 * C1270;
    const double C13087 = C12454 * C2266;
    const double C13739 = C12454 * C2680;
    const double C18206 = C28870 * C2680;
    const double C9380 = C28870 * C4059;
    const double C10718 = C28870 * C8123;
    const double C27420 = C12454 * C8123;
    const double C13239 = C12452 * C832;
    const double C19023 = C12452 * C1402;
    const double C4991 = C28784 * C2354;
    const double C15050 = C12452 * C2354;
    const double C15590 = C12452 * C2792;
    const double C23428 = C28784 * C2792;
    const double C9504 = C28784 * C4147;
    const double C22435 = C12452 * C4147;
    const double C6358 = C6352 * C28784;
    const double C776 = C28881 * C766;
    const double C1346 = C28881 * C1336;
    const double C17732 = C17613 * C1336;
    const double C4921 = C28881 * C2310;
    const double C13809 = C28881 * C2736;
    const double C18280 = C17613 * C2736;
    const double C18941 = C17613 * C4103;
    const double C25906 = C17613 * C8287;
    const double C13461 = C12452 * C1016;
    const double C19237 = C12452 * C1586;
    const double C5163 = C28784 * C2480;
    const double C15204 = C12452 * C2480;
    const double C15792 = C12452 * C2954;
    const double C23632 = C28784 * C2954;
    const double C9695 = C28784 * C4273;
    const double C22591 = C12452 * C4273;
    const double C11053 = C28870 * C8369;
    const double C27738 = C12454 * C8369;
    const double C27809 = C28784 - C27808;
    const double C6401 = C4982 - C4983;
    const double C6400 = C4980 - C4981;
    const double C6528 = C5158 - C5159;
    const double C25756 = C6854 - C6855;
    const double C25754 = C6855 - C6854;
    const double C25755 = C6852 - C6853;
    const double C25753 = C6853 - C6852;
    const double C25974 = C7018 - C7019;
    const double C25973 = C7019 - C7018;
    const double C12184 = C9495 - C9496;
    const double C12183 = C9493 - C9494;
    const double C12318 = C9690 - C9691;
    const double C27854 = C28870 - C27853;
    const double C350 = C347 + C335;
    const double C9576 = C9573 + C9560;
    const double C27880 = C28881 - C27879;
    const double C569 = C566 + C554;
    const double C5286 = C5283 + C5271;
    const double C5285 = C5282 - C5278;
    const double C14232 = C14231 - C14228;
    const double C18418 = C18417 - C18415;
    const double C9575 = C9572 - C9568;
    const double C10887 = C10882 - C10883;
    const double C351 = C348 + C339;
    const double C352 = C349 + C343;
    const double C902 = C900 + C896;
    const double C1472 = C1470 + C1466;
    const double C10890 = C10888 + C10881;
    const double C9577 = C9574 + C9564;
    const double C570 = C567 + C558;
    const double C571 = C568 + C562;
    const double C1144 = C1142 + C1138;
    const double C1714 = C1712 + C1708;
    const double C5287 = C5284 + C5275;
    const double C7137 = C7135 + C7131;
    const double C405 = C398 + C404;
    const double C506 = C499 + C505;
    const double C27984 = C27982 + C27970;
    const double C27983 = C27981 + C27967;
    const double C15374 = C12452 * C2624;
    const double C23214 = C28784 * C2624;
    const double C10655 = C28784 * C8081;
    const double C28379 = C28377 + C28371;
    const double C28531 = C28529 + C28523;
    const double C28380 = C28378 + C28374;
    const double C901 = C899 + C892;
    const double C1471 = C1469 + C1462;
    const double C12237 = C12236 + C12234;
    const double C28532 = C28530 + C28526;
    const double C1143 = C1141 + C1134;
    const double C1713 = C1711 + C1704;
    const double C6617 = C6616 + C6614;
    const double C7136 = C7134 + C7127;
    const double C12102 = C12100 + C12101;
    const double C6359 = C6357 + C6358;
    const double C27810 = C27809 * C27806;
    const double C89 =
        ((C27809 * ae) / C27797 - C27796 / C27801) / (2 * C27797) +
        ((C27795 * ((0 * ae) / C27797 - C27802 / C27799) + C12452) * ae) /
            C27797;
    const double C12455 = (C27809 * ae) / C27797 - C27796 / C27801;
    const double C6527 = C6400 * C214;
    const double C6531 = C6528 * C28881;
    const double C12190 = C12184 * C28870;
    const double C12189 = C12183 * C151;
    const double C27855 = C27854 * C27806;
    const double C12509 = (C27854 * ae) / C27797 - C27841 / C27801;
    const double C9579 = C9576 * C28784;
    const double C19090 = C9576 * C12451;
    const double C27881 = C27880 * C27806;
    const double C17714 = (C27880 * ae) / C27797 - C27867 / C27801;
    const double C572 = C569 * C28870;
    const double C12916 = C569 * C12453;
    const double C5288 = C5285 + C5279;
    const double C14233 = C14232 + C14229;
    const double C18419 = C18418 + C18416;
    const double C9578 = C9575 + C9569;
    const double C10889 = C10887 - C10884;
    const double C9565 = C1472 * C28784;
    const double C19092 = C1472 * C12451;
    const double C19091 = C1472 * C12452;
    const double C10892 = C10890 * C28784;
    const double C20760 = C10890 * C12451;
    const double C9580 = C9577 * C28784;
    const double C22487 = C9577 * C12451;
    const double C573 = C570 * C28870;
    const double C12919 = C570 * C12453;
    const double C574 = C571 * C28870;
    const double C1146 = C1144 * C28870;
    const double C12917 = C1144 * C12454;
    const double C13599 = C1144 * C12453;
    const double C1716 = C1714 * C28870;
    const double C14230 = C1714 * C12453;
    const double C701 =
        (be * (2 * C27950 + C27918 * C27984 + C27968 * ae) +
         C27987 *
             (2 * C28009 + ae * C28010 +
              C27918 * (C28005 + ae * C27918 * C28006 +
                        C27918 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C27993)))) /
        C27799;
    const double C1337 =
        (be * (2 * C27950 + C27918 * C27984 + C27968 * ae) +
         C28013 *
             (2 * C28035 + ae * C28036 +
              C27918 * (C28031 + ae * C27918 * C28032 +
                        C27918 * (ae * C28032 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28019)))) /
        C27799;
    const double C2267 =
        (C27998 + ae * C28001 + C27918 * C28009 + be * C27987 * C27984 +
         C27987 *
             (be * C27984 +
              C27987 * (C28005 + ae * C27918 * C28006 +
                        C27918 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C27993)))) /
        C27799;
    const double C2681 =
        (C28013 *
         (be * C27984 +
          C27987 * (C28005 + ae * C27918 * C28006 +
                    C27918 * (ae * C28006 + C27918 * std::pow(C27916, 6) *
                                                bs[6] * C27993)))) /
        C27799;
    const double C2737 =
        (be * C27987 * C27984 +
         C28013 * C27987 *
             (C28031 + ae * C27918 * C28032 +
              C27918 * (ae * C28032 +
                        C27918 * std::pow(C27916, 6) * bs[6] * C28019))) /
        C27799;
    const double C4104 =
        (C28024 + ae * C28027 + C27918 * C28035 + be * C28013 * C27984 +
         C28013 *
             (be * C27984 +
              C28013 * (C28031 + ae * C27918 * C28032 +
                        C27918 * (ae * C28032 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28019)))) /
        C27799;
    const double C107 = (3 * (C27931 + C27918 * C27950 + C27939 * ae) +
                         C27918 * (2 * C27950 + C27918 * C27984 + C27968 * ae) +
                         (2 * C27939 + C27918 * C27968) * ae) /
                        C27797;
    const double C639 =
        (C27987 * (2 * C27950 + C27918 * C27984 + C27968 * ae)) / C27797;
    const double C1209 =
        (C28013 * (2 * C27950 + C27918 * C27984 + C27968 * ae)) / C27797;
    const double C2220 =
        (C27931 + C27918 * C27950 + C27939 * ae + C27984 * C28065) / C27797;
    const double C2622 = (C28013 * C27987 * C27984) / C27797;
    const double C4013 =
        (C27931 + C27918 * C27950 + C27939 * ae + C27984 * C28128) / C27797;
    const double C112 =
        (3 * (C27948 + ae * C27949 + be * C27950 + C27918 * C27980) +
         ae * (2 * C27949 + C27918 * C27983 + C27968 * be) +
         be * (2 * C27950 + C27918 * C27984 + C27968 * ae) +
         C27918 *
             (2 * C27980 + ae * C27983 + be * C27984 +
              C27918 * (C27974 + ae * C27975 + be * C27976 +
                        C27918 * (ae * C27966 + be * C27969 +
                                  C27918 *
                                      (C27955 * C27956 +
                                       C27922 * bs[6] * std::pow(C27916, 6)) *
                                      C27798)))) /
        C27799;
    const double C643 =
        (2 * (ae * C27987 * C27943 + be * C27987 * C27944 + C27918 * C28143) +
         ae * C27987 * C27983 + be * C27987 * C27984 +
         C27918 * (C28143 + ae * C27987 * C27975 + be * C27987 * C27976 +
                   C27918 * (ae * C27987 * C27966 + be * C27987 * C27969 +
                             C27918 * C27987 *
                                 (C27955 * C27956 +
                                  C27922 * bs[6] * std::pow(C27916, 6)) *
                                 C27798))) /
        C27799;
    const double C833 =
        (ae * (2 * C27949 + C27918 * C27983 + C27968 * be) +
         C27987 *
             (2 * C28060 + be * C28061 +
              C27918 * (C28056 + be * C27918 * C28057 +
                        C27918 * (be * C28057 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28044)))) /
        C27799;
    const double C1213 =
        (2 * (ae * C28013 * C27943 + be * C28013 * C27944 + C27918 * C28180) +
         ae * C28013 * C27983 + be * C28013 * C27984 +
         C27918 * (C28180 + ae * C28013 * C27975 + be * C28013 * C27976 +
                   C27918 * (ae * C28013 * C27966 + be * C28013 * C27969 +
                             C27918 * C28013 *
                                 (C27955 * C27956 +
                                  C27922 * bs[6] * std::pow(C27916, 6)) *
                                 C27798))) /
        C27799;
    const double C1587 =
        (ae * (2 * C27949 + C27918 * C27983 + C27968 * be) +
         C28013 *
             (2 * C28111 + be * C28112 +
              C27918 * (C28107 + be * C27918 * C28108 +
                        C27918 * (be * C28108 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28095)))) /
        C27799;
    const double C2355 =
        (C28049 + be * C28052 + C27918 * C28060 + ae * C27987 * C27983 +
         C27987 *
             (ae * C27983 +
              C27987 * (C28056 + be * C27918 * C28057 +
                        C27918 * (be * C28057 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28044)))) /
        C27799;
    const double C2793 =
        (ae * C28013 * C27983 +
         C27987 * C28013 *
             (C28056 + be * C27918 * C28057 +
              C27918 * (be * C28057 +
                        C27918 * std::pow(C27916, 6) * bs[6] * C28044))) /
        C27799;
    const double C2955 =
        (ae * C27987 * C27983 +
         C28013 * C27987 *
             (C28107 + be * C27918 * C28108 +
              C27918 * (be * C28108 +
                        C27918 * std::pow(C27916, 6) * bs[6] * C28095))) /
        C27799;
    const double C4274 =
        (C28100 + be * C28103 + C27918 * C28111 + ae * C28013 * C27983 +
         C28013 *
             (ae * C27983 +
              C28013 * (C28107 + be * C27918 * C28108 +
                        C27918 * (be * C28108 + C27918 * std::pow(C27916, 6) *
                                                    bs[6] * C28095)))) /
        C27799;
    const double C106 = (3 * (C27930 + C27918 * C27949 + C27939 * be) +
                         C27918 * (2 * C27949 + C27918 * C27983 + C27968 * be) +
                         (2 * C27939 + C27918 * C27968) * be) /
                        C27797;
    const double C638 =
        (C27987 * (2 * C27949 + C27918 * C27983 + C27968 * be)) / C27797;
    const double C1208 =
        (C28013 * (2 * C27949 + C27918 * C27983 + C27968 * be)) / C27797;
    const double C2219 =
        (C27930 + C27918 * C27949 + C27939 * be + C27983 * C28065) / C27797;
    const double C2621 = (C28013 * C27987 * C27983) / C27797;
    const double C4012 =
        (C27930 + C27918 * C27949 + C27939 * be + C27983 * C28128) / C27797;
    const double C7071 =
        (ae * (2 * C28306 + C27987 * C28379 + C28372 * be) +
         C28013 *
             (2 * C28392 + be * C28393 +
              C27987 * (C28124 + be * C27987 * C28108 +
                        C27987 * (be * C28108 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C28118)))) /
        C27799;
    const double C8370 =
        (C28121 + be * C28389 + C27987 * C28392 + ae * C28013 * C28379 +
         C28013 *
             (ae * C28379 +
              C28013 * (C28124 + be * C27987 * C28108 +
                        C27987 * (be * C28108 + C27987 * std::pow(C27916, 6) *
                                                    bs[6] * C28118)))) /
        C27799;
    const double C6308 =
        (3 * (C27994 + C27987 * C28306 + C28304 * be) +
         C27987 * (2 * C28306 + C27987 * C28379 + C28372 * be) +
         (2 * C28304 + C27987 * C28372) * be) /
        C27797;
    const double C6737 =
        (C28013 * (2 * C28306 + C27987 * C28379 + C28372 * be)) / C27797;
    const double C8122 =
        (C27994 + C27987 * C28306 + C28304 * be + C28379 * C28128) / C27797;
    const double C12140 =
        (3 * (C28020 + C28013 * C28459 + C28457 * be) +
         C28013 * (2 * C28459 + C28013 * C28531 + C28524 * be) +
         (2 * C28457 + C28013 * C28524) * be) /
        C27797;
    const double C6443 =
        (3 * (C28070 + ae * C28306 + be * C28307 + C27987 * C28369) +
         ae * (2 * C28306 + C27987 * C28379 + C28372 * be) +
         be * (2 * C28307 + C27987 * C28380 + C28372 * ae) +
         C27987 *
             (2 * C28369 + ae * C28379 + be * C28380 +
              C27987 * (C28075 + ae * C28370 + be * C28373 +
                        C27987 * (ae * C28006 + be * C28057 +
                                  C27987 *
                                      (C27955 * C27956 +
                                       C28065 * bs[6] * std::pow(C27916, 6)) *
                                      C27798)))) /
        C27799;
    const double C6909 =
        (2 * (ae * C28013 * C27999 + be * C28013 * C28050 + C27987 * C28401) +
         ae * C28013 * C28379 + be * C28013 * C28380 +
         C27987 * (C28401 + ae * C28013 * C28370 + be * C28013 * C28373 +
                   C27987 * (ae * C28013 * C28006 + be * C28013 * C28057 +
                             C27987 * C28013 *
                                 (C27955 * C27956 +
                                  C28065 * bs[6] * std::pow(C27916, 6)) *
                                 C27798))) /
        C27799;
    const double C6397 =
        (3 * (C28045 + C27987 * C28307 + C28304 * ae) +
         C27987 * (2 * C28307 + C27987 * C28380 + C28372 * ae) +
         (2 * C28304 + C27987 * C28372) * ae) /
        C27797;
    const double C6849 =
        (C28013 * (2 * C28307 + C27987 * C28380 + C28372 * ae)) / C27797;
    const double C8206 =
        (C28045 + C27987 * C28307 + C28304 * ae + C28380 * C28128) / C27797;
    const double C19093 = C1471 * C12452;
    const double C12238 = C12237 * C28784;
    const double C12400 =
        (3 * (C28133 + ae * C28459 + be * C28460 + C28013 * C28521) +
         ae * (2 * C28459 + C28013 * C28531 + C28524 * be) +
         be * (2 * C28460 + C28013 * C28532 + C28524 * ae) +
         C28013 *
             (2 * C28521 + ae * C28531 + be * C28532 +
              C28013 * (C28138 + ae * C28522 + be * C28525 +
                        C28013 * (ae * C28032 + be * C28108 +
                                  C28013 *
                                      (C27955 * C27956 +
                                       C28128 * bs[6] * std::pow(C27916, 6)) *
                                      C27798)))) /
        C27799;
    const double C12315 =
        (3 * (C28096 + C28013 * C28460 + C28457 * ae) +
         C28013 * (2 * C28460 + C28013 * C28532 + C28524 * ae) +
         (2 * C28457 + C28013 * C28524) * ae) /
        C27797;
    const double C1145 = C1143 * C28870;
    const double C12918 = C1143 * C12454;
    const double C1715 = C1713 * C28870;
    const double C27815 = C27795 * C27810;
    const double C88 =
        (ae * -2 * C27796) / (C27799 * 2 * C27797) +
        (((C27795 * ((-4 * C27802) / C27797 - (C27795 * C27810) / C27797) *
           ae) /
              C27797 +
          2 * ((C27809 * ae) / C27797 - C27796 / C27801)) *
         ae) /
            C27797 -
        C27810 / C27801;
    const double C92 = (-C27810 / C27797) / (4 * C27799);
    const double C4400 = -C27810 / C27797;
    const double C12458 = (-C27810 / C27797) / (2 * C27797);
    const double C12996 = C12455 * C635;
    const double C12994 = C12455 * C634;
    const double C12988 = C12455 * C637;
    const double C12986 = C12455 * C636;
    const double C13236 = C12455 * C827;
    const double C13232 = C12455 * C629;
    const double C13229 = C12455 * C826;
    const double C13225 = C12455 * C630;
    const double C13458 = C12455 * C1011;
    const double C13455 = C12455 * C1010;
    const double C14885 = C12455 * C2216;
    const double C14883 = C12455 * C2215;
    const double C15047 = C12455 * C2350;
    const double C15043 = C12455 * C2212;
    const double C15201 = C12455 * C2476;
    const double C15377 = C12455 * C2618;
    const double C15375 = C12455 * C2617;
    const double C15587 = C12455 * C2788;
    const double C15583 = C12455 * C2614;
    const double C15789 = C12455 * C2950;
    const double C18780 = C12455 * C1205;
    const double C18778 = C12455 * C1204;
    const double C18772 = C12455 * C1207;
    const double C18770 = C12455 * C1206;
    const double C19020 = C12455 * C1397;
    const double C19016 = C12455 * C1199;
    const double C19013 = C12455 * C1396;
    const double C19009 = C12455 * C1200;
    const double C19234 = C12455 * C1581;
    const double C19231 = C12455 * C1580;
    const double C22270 = C12455 * C4009;
    const double C22268 = C12455 * C4008;
    const double C22432 = C12455 * C4143;
    const double C22428 = C12455 * C4005;
    const double C22588 = C12455 * C4269;
    const double C6532 = C6527 + C6531;
    const double C12191 = C12189 + C12190;
    const double C27858 = C27827 * C27855;
    const double C4556 =
        (ae * -2 * C27841) / (C27799 * 2 * C27797) +
        (((C27827 * ((-4 * C27843) / C27797 - (C27827 * C27855) / C27797) *
           ae) /
              C27797 +
          2 * ((C27854 * ae) / C27797 - C27841 / C27801)) *
         ae) /
            C27797 -
        C27855 / C27801;
    const double C4558 = (-C27855 / C27797) / (4 * C27799);
    const double C12678 = (-C27855 / C27797) / (2 * C27797);
    const double C12524 = C12509 * C103;
    const double C12520 = C12509 * C95;
    const double C12517 = C12509 * C101;
    const double C12513 = C12509 * C94;
    const double C12694 = C12509 * C279;
    const double C12692 = C12509 * C154;
    const double C12682 = C12509 * C278;
    const double C12680 = C12509 * C153;
    const double C12862 = C12509 * C445;
    const double C12859 = C12509 * C444;
    const double C13084 = C12509 * C635;
    const double C13080 = C12509 * C629;
    const double C13312 = C12509 * C827;
    const double C13310 = C12509 * C695;
    const double C13528 = C12509 * C1011;
    const double C13736 = C12509 * C1205;
    const double C13732 = C12509 * C1199;
    const double C13948 = C12509 * C1397;
    const double C13946 = C12509 * C1265;
    const double C14156 = C12509 * C1581;
    const double C23916 = C12509 * C1207;
    const double C23912 = C12509 * C1200;
    const double C24119 = C12509 * C1396;
    const double C24117 = C12509 * C1264;
    const double C24330 = C12509 * C1580;
    const double C25609 = C12509 * C2618;
    const double C25605 = C12509 * C2614;
    const double C25825 = C12509 * C2788;
    const double C25823 = C12509 * C2676;
    const double C26041 = C12509 * C2950;
    const double C27417 = C12509 * C4009;
    const double C27413 = C12509 * C4005;
    const double C27577 = C12509 * C4143;
    const double C27575 = C12509 * C4055;
    const double C27735 = C12509 * C4269;
    const double C27884 = C27830 * C27881;
    const double C8759 =
        (ae * -2 * C27867) / (C27799 * 2 * C27797) +
        (((C27830 * ((-4 * C27869) / C27797 - (C27830 * C27881) / C27797) *
           ae) /
              C27797 +
          2 * ((C27880 * ae) / C27797 - C27867 / C27801)) *
         ae) /
            C27797 -
        C27881 / C27801;
    const double C8761 = (-C27881 / C27797) / (4 * C27799);
    const double C18041 = (-C27881 / C27797) / (2 * C27797);
    const double C17729 = C17714 * C103;
    const double C17725 = C17714 * C95;
    const double C17722 = C17714 * C101;
    const double C17718 = C17714 * C94;
    const double C17887 = C17714 * C279;
    const double C17884 = C17714 * C278;
    const double C18057 = C17714 * C445;
    const double C18055 = C17714 * C217;
    const double C18045 = C17714 * C444;
    const double C18043 = C17714 * C216;
    const double C18277 = C17714 * C635;
    const double C18273 = C17714 * C629;
    const double C18486 = C17714 * C827;
    const double C18696 = C17714 * C1011;
    const double C18694 = C17714 * C761;
    const double C18938 = C17714 * C1205;
    const double C18934 = C17714 * C1199;
    const double C19160 = C17714 * C1397;
    const double C19378 = C17714 * C1581;
    const double C19376 = C17714 * C1331;
    const double C23356 = C17714 * C637;
    const double C23352 = C17714 * C630;
    const double C23562 = C17714 * C826;
    const double C23767 = C17714 * C1010;
    const double C23765 = C17714 * C760;
    const double C25149 = C17714 * C2216;
    const double C25145 = C17714 * C2212;
    const double C25303 = C17714 * C2350;
    const double C25463 = C17714 * C2476;
    const double C25461 = C17714 * C2306;
    const double C25683 = C17714 * C2618;
    const double C25679 = C17714 * C2614;
    const double C25903 = C17714 * C2788;
    const double C26117 = C17714 * C2950;
    const double C26115 = C17714 * C2732;
    const double C13598 = C5288 * C12454;
    const double C14234 = C14233 * C12454;
    const double C20761 = C18419 * C12452;
    const double C9581 = C9578 * C28784;
    const double C22486 = C9578 * C12452;
    const double C10891 = C10889 + C10885;
    const double C90 =
        (((-4 * C27802) / C27797 - C27815 / C27797) * ae) / C27801 +
        ((2 * ((0 * ae) / C27797 - C27802 / C27799) - C27815 / C27801) * ae) /
            C27797;
    const double C12456 =
        (((-4 * C27802) / C27797 - C27815 / C27797) * ae) / C27797;
    const double C4783 = C4400 * C2213;
    const double C4779 = C4400 * C629;
    const double C4775 = C4400 * C2212;
    const double C4771 = C4400 * C630;
    const double C6264 = C4400 * C4761;
    const double C6677 = C4400 * C2614;
    const double C6673 = C4400 * C5338;
    const double C9300 = C4400 * C4006;
    const double C9296 = C4400 * C1199;
    const double C9292 = C4400 * C4005;
    const double C9288 = C4400 * C1200;
    const double C10653 = C4400 * C8075;
    const double C12048 = C4400 * C9278;
    const double C23212 = C4400 * C2615;
    const double C12999 = C12458 * C628;
    const double C12991 = C12458 * C629;
    const double C14880 = C12458 * C2213;
    const double C15372 = C12458 * C2615;
    const double C18783 = C12458 * C1198;
    const double C18775 = C12458 * C1199;
    const double C22265 = C12458 * C4006;
    const double C4557 =
        (((-4 * C27843) / C27797 - C27858 / C27797) * ae) / C27801 +
        ((2 * ((0 * ae) / C27797 - C27843 / C27799) - C27858 / C27801) * ae) /
            C27797;
    const double C12677 =
        (((-4 * C27843) / C27797 - C27858 / C27797) * ae) / C27797;
    const double C12689 = C12678 * C628;
    const double C12685 = C12678 * C629;
    const double C13307 = C12678 * C2213;
    const double C13943 = C12678 * C2615;
    const double C24122 = C12678 * C2614;
    const double C25828 = C12678 * C5338;
    const double C27572 = C12678 * C8075;
    const double C8760 =
        (((-4 * C27869) / C27797 - C27884 / C27797) * ae) / C27801 +
        ((2 * ((0 * ae) / C27797 - C27869 / C27799) - C27884 / C27801) * ae) /
            C27797;
    const double C18040 =
        (((-4 * C27869) / C27797 - C27884 / C27797) * ae) / C27797;
    const double C18052 = C18041 * C1198;
    const double C18048 = C18041 * C1199;
    const double C18691 = C18041 * C2615;
    const double C19373 = C18041 * C4006;
    const double C23770 = C18041 * C2614;
    const double C25458 = C18041 * C5338;
    const double C26112 = C18041 * C8075;
    const double C10893 = C10891 * C28784;
    const double C12995 = C12456 * C629;
    const double C12987 = C12456 * C630;
    const double C14884 = C12456 * C2212;
    const double C15376 = C12456 * C2614;
    const double C18779 = C12456 * C1199;
    const double C18771 = C12456 * C1200;
    const double C22269 = C12456 * C4005;
    const double C4789 = C4782 - C4783;
    const double C4788 = C4778 - C4779;
    const double C4787 = C4774 - C4775;
    const double C4786 = C4770 - C4771;
    const double C6267 = C6263 - C6264;
    const double C6681 = C6676 - C6677;
    const double C6680 = C6672 - C6673;
    const double C9306 = C9299 - C9300;
    const double C9305 = C9295 - C9296;
    const double C9304 = C9291 - C9292;
    const double C9303 = C9287 - C9288;
    const double C10656 = C10652 - C10653;
    const double C12051 = C12047 - C12048;
    const double C23215 = C23211 - C23212;
    const double C13005 = C12998 - C12999;
    const double C13003 = C12990 - C12991;
    const double C14887 = C14879 - C14880;
    const double C15379 = C15371 - C15372;
    const double C18789 = C18782 - C18783;
    const double C18787 = C18774 - C18775;
    const double C22272 = C22264 - C22265;
    const double C12693 = C12677 * C95;
    const double C12681 = C12677 * C94;
    const double C13311 = C12677 * C629;
    const double C13947 = C12677 * C1199;
    const double C24118 = C12677 * C1200;
    const double C25824 = C12677 * C2614;
    const double C27576 = C12677 * C4005;
    const double C12698 = C12688 - C12689;
    const double C12697 = C12684 - C12685;
    const double C13314 = C13306 - C13307;
    const double C13950 = C13942 - C13943;
    const double C24126 = C24121 - C24122;
    const double C25832 = C25827 - C25828;
    const double C27579 = C27571 - C27572;
    const double C18056 = C18040 * C95;
    const double C18044 = C18040 * C94;
    const double C18695 = C18040 * C629;
    const double C19377 = C18040 * C1199;
    const double C23766 = C18040 * C630;
    const double C25462 = C18040 * C2212;
    const double C26116 = C18040 * C2614;
    const double C18061 = C18051 - C18052;
    const double C18060 = C18047 - C18048;
    const double C18698 = C18690 - C18691;
    const double C19380 = C19372 - C19373;
    const double C23774 = C23769 - C23770;
    const double C25465 = C25457 - C25458;
    const double C26119 = C26111 - C26112;
    const double C13004 = C12994 - C12995;
    const double C13002 = C12986 - C12987;
    const double C14888 = C14883 - C14884;
    const double C15380 = C15375 - C15376;
    const double C18788 = C18778 - C18779;
    const double C18786 = C18770 - C18771;
    const double C22273 = C22268 - C22269;
    const double C4793 = C4789 - C4784;
    const double C4792 = C4788 - C4780;
    const double C4791 = C4787 - C4776;
    const double C4790 = C4786 - C4772;
    const double C6268 = C6267 - C6265;
    const double C6683 = C6681 - C6678;
    const double C6682 = C6680 - C6674;
    const double C9310 = C9306 - C9301;
    const double C9309 = C9305 - C9297;
    const double C9308 = C9304 - C9293;
    const double C9307 = C9303 - C9289;
    const double C10657 = C10656 - C10654;
    const double C12052 = C12051 - C12049;
    const double C23216 = C23215 - C23213;
    const double C13009 = C13005 - C13000;
    const double C13007 = C13003 - C12992;
    const double C14889 = C14887 - C14881;
    const double C15381 = C15379 - C15373;
    const double C18793 = C18789 - C18784;
    const double C18791 = C18787 - C18776;
    const double C22274 = C22272 - C22266;
    const double C12699 = C12692 - C12693;
    const double C12696 = C12680 - C12681;
    const double C13315 = C13310 - C13311;
    const double C13951 = C13946 - C13947;
    const double C24125 = C24117 - C24118;
    const double C25831 = C25823 - C25824;
    const double C27580 = C27575 - C27576;
    const double C12702 = C12698 - C12690;
    const double C12701 = C12697 - C12686;
    const double C13316 = C13314 - C13308;
    const double C13952 = C13950 - C13944;
    const double C24128 = C24126 - C24123;
    const double C25834 = C25832 - C25829;
    const double C27581 = C27579 - C27573;
    const double C18062 = C18055 - C18056;
    const double C18059 = C18043 - C18044;
    const double C18699 = C18694 - C18695;
    const double C19381 = C19376 - C19377;
    const double C23773 = C23765 - C23766;
    const double C25466 = C25461 - C25462;
    const double C26120 = C26115 - C26116;
    const double C18065 = C18061 - C18053;
    const double C18064 = C18060 - C18049;
    const double C18700 = C18698 - C18692;
    const double C19382 = C19380 - C19374;
    const double C23776 = C23774 - C23771;
    const double C25467 = C25465 - C25459;
    const double C26121 = C26119 - C26113;
    const double C13008 = C13004 - C12996;
    const double C13006 = C13002 - C12988;
    const double C14890 = C14888 - C14885;
    const double C15382 = C15380 - C15377;
    const double C18792 = C18788 - C18780;
    const double C18790 = C18786 - C18772;
    const double C22275 = C22273 - C22270;
    const double C4797 = C4793 + C4785;
    const double C4796 = C4792 + C4781;
    const double C4795 = C4791 + C4777;
    const double C4794 = C4790 + C4773;
    const double C6269 = C6268 + C6266;
    const double C6685 = C6683 + C6679;
    const double C6684 = C6682 + C6675;
    const double C9314 = C9310 + C9302;
    const double C9313 = C9309 + C9298;
    const double C9312 = C9308 + C9294;
    const double C9311 = C9307 + C9290;
    const double C10658 = C10657 + C10655;
    const double C12053 = C12052 + C12050;
    const double C23217 = C23216 + C23214;
    const double C13013 = C13009 + C13001;
    const double C13011 = C13007 + C12993;
    const double C14891 = C14889 + C14882;
    const double C15383 = C15381 + C15374;
    const double C18797 = C18793 + C18785;
    const double C18795 = C18791 + C18777;
    const double C22276 = C22274 + C22267;
    const double C12703 = C12699 - C12694;
    const double C12700 = C12696 - C12682;
    const double C13317 = C13315 - C13312;
    const double C13953 = C13951 - C13948;
    const double C24127 = C24125 - C24119;
    const double C25833 = C25831 - C25825;
    const double C27582 = C27580 - C27577;
    const double C12706 = C12702 + C12691;
    const double C12705 = C12701 + C12687;
    const double C13318 = C13316 + C13309;
    const double C13954 = C13952 + C13945;
    const double C24130 = C24128 + C24124;
    const double C25836 = C25834 + C25830;
    const double C27583 = C27581 + C27574;
    const double C18066 = C18062 - C18057;
    const double C18063 = C18059 - C18045;
    const double C18701 = C18699 - C18696;
    const double C19383 = C19381 - C19378;
    const double C23775 = C23773 - C23767;
    const double C25468 = C25466 - C25463;
    const double C26122 = C26120 - C26117;
    const double C18069 = C18065 + C18054;
    const double C18068 = C18064 + C18050;
    const double C18702 = C18700 + C18693;
    const double C19384 = C19382 + C19375;
    const double C23778 = C23776 + C23772;
    const double C25469 = C25467 + C25460;
    const double C26123 = C26121 + C26114;
    const double C13012 = C13008 + C12997;
    const double C13010 = C13006 + C12989;
    const double C14892 = C14890 + C14886;
    const double C15384 = C15382 + C15378;
    const double C18796 = C18792 + C18781;
    const double C18794 = C18790 + C18773;
    const double C22277 = C22275 + C22271;
    const double C4801 = C4797 * C28881;
    const double C4800 = C4796 * C28881;
    const double C23210 = C4796 * C17612;
    const double C4799 = C4795 * C28881;
    const double C25044 = C4795 * C17612;
    const double C4798 = C4794 * C28881;
    const double C23208 = C4794 * C17612;
    const double C6270 = C6269 * C28881;
    const double C6687 = C6685 * C28881;
    const double C23209 = C6685 * C17613;
    const double C25538 = C6685 * C17612;
    const double C6686 = C6684 * C28881;
    const double C25043 = C6684 * C17613;
    const double C25537 = C10658 * C17613;
    const double C23218 = C23217 * C17613;
    const double C12707 = C12703 + C12695;
    const double C12704 = C12700 + C12683;
    const double C13319 = C13317 + C13313;
    const double C13955 = C13953 + C13949;
    const double C24129 = C24127 + C24120;
    const double C25835 = C25833 + C25826;
    const double C27584 = C27582 + C27578;
    const double C18070 = C18066 + C18058;
    const double C18067 = C18063 + C18046;
    const double C18703 = C18701 + C18697;
    const double C19385 = C19383 + C19379;
    const double C23777 = C23775 + C23768;
    const double C25470 = C25468 + C25464;
    const double C26124 = C26122 + C26118;
    d2eexx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
            C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
               C28881 * C12453 +
           (C12455 * C636 - C12456 * C630 - C12455 * C637 + C12451 * C642 +
            C12457 * C634 - C12458 * C629 - C12457 * C635 + C12452 * C641) *
               C28881 * C12454) *
              C28857 * C28840 * C84 -
          ((C12457 * C632 - C12458 * C628 - C12457 * C633 + C12452 * C640 +
            C12455 * C634 - C12456 * C629 - C12455 * C635 + C12451 * C641) *
               C28881 * C12454 +
           (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
            C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
               C28881 * C12453) *
              C28857 * C28840 * C85 +
          ((C12455 * C102 - C12456 * C95 - C12455 * C103 + C12451 * C110 +
            C12457 * C104 - C12458 * C96 - C12457 * C105 + C12452 * C111) *
               C28881 * C12453 +
           (C12455 * C632 - C12456 * C628 - C12455 * C633 + C12451 * C640 +
            C12457 * C638 - C12458 * C631 - C12457 * C639 + C12452 * C643) *
               C28881 * C12454) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
               C12455 +
           (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
               C12451 +
           (C12512 - C12513 + C12514 - C12515) * C12457 +
           (C12516 - C12517 + C12518 - C12519) * C12452) *
              C28881 * C28857 * C28840 * C84 +
          ((C12513 - C12512 + C12515 - C12514) * C12455 +
           (C12517 - C12516 + C12519 - C12518) * C12451 +
           (C12520 - C12521 + C12522 - C12523) * C12457 +
           (C12524 - C12525 + C12526 - C12527) * C12452) *
              C28881 * C28857 * C28840 * C85 +
          ((C12521 - C12520 + C12523 - C12522) * C12455 +
           (C12525 - C12524 + C12527 - C12526) * C12451 +
           (C12453 * C155 - C12509 * C96 + C12454 * C697 - C12510 * C631) *
               C12457 +
           (C12453 * C160 - C12509 * C105 + C12454 * C701 - C12510 * C639) *
               C12452) *
              C28881 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28881 * C215 - C214 * C93) * C12455 +
                     (C28881 * C220 - C214 * C99) * C12451 +
                     (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                        C12453 +
                    ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                     (C770 - C769) * C12457 + (C772 - C771) * C12452) *
                        C12454) *
                       C28857 * C28840 * C84 +
                   (((C227 - C226) * C12455 + (C229 - C228) * C12451 +
                     (C231 - C230) * C12457 + (C233 - C232) * C12452) *
                        C12453 +
                    ((C769 - C770) * C12455 + (C771 - C772) * C12451 +
                     (C773 - C774) * C12457 + (C775 - C776) * C12452) *
                        C12454) *
                       C28857 * C28840 * C85 +
                   ((C238 * C12455 + C239 * C12451 + (C235 - C234) * C12457 +
                     (C237 - C236) * C12452) *
                        C12453 +
                    ((C774 - C773) * C12455 + (C776 - C775) * C12451 +
                     (C28881 * C763 - C214 * C631) * C12457 +
                     (C28881 * C767 - C214 * C639) * C12452) *
                        C12454) *
                       C28857 * C28840 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
               C12509 +
           (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
               C12453 +
           (C12451 * C636 - C12455 * C630 + C12452 * C634 - C12457 * C629) *
               C12510 +
           (C12451 * C830 - C12455 * C826 + C12452 * C831 - C12457 * C827) *
               C12454) *
              C28881 * C28857 * C28840 * C84 +
          ((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
               C12509 +
           (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
               C12453 +
           (C12455 * C629 - C12451 * C634 + C12457 * C628 - C12452 * C632) *
               C12510 +
           (C12455 * C827 - C12451 * C831 + C12457 * C828 - C12452 * C832) *
               C12454) *
              C28881 * C28857 * C28840 * C85 +
          ((C12451 * C102 - C12455 * C95 + C12452 * C104 - C12457 * C96) *
               C12509 +
           (C12451 * C284 - C12455 * C279 + C12452 * C285 - C12457 * C280) *
               C12453 +
           (C12451 * C632 - C12455 * C628 + C12452 * C638 - C12457 * C631) *
               C12510 +
           (C12451 * C832 - C12455 * C828 + C12452 * C833 - C12457 * C829) *
               C12454) *
              C28881 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
            C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
               C12451 +
           (C12704 + C12705) * C12452) *
              C28881 * C28857 * C28840 * C84 -
          ((C12706 + C12707) * C12452 + (C12705 + C12704) * C12451) * C28881 *
              C28857 * C28840 * C85 +
          ((C12707 + C12706) * C12451 +
           (C12509 * C155 - C12677 * C96 - C12509 * C280 + C12453 * C329 +
            C12510 * C697 - C12678 * C631 - C12510 * C829 + C12454 * C887) *
               C12452) *
              C28881 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28881 * C215 - C214 * C93) * C12509 +
                     (C28881 * C390 - C214 * C277) * C12453 +
                     (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                        C12451 +
                    ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                     (C770 - C769) * C12510 + (C958 - C957) * C12454) *
                        C12452) *
                       C28857 * C28840 * C84 +
                   (((C227 - C226) * C12509 + (C397 - C396) * C12453 +
                     (C769 - C770) * C12510 + (C957 - C958) * C12454) *
                        C12451 +
                    ((C231 - C230) * C12509 + (C400 - C399) * C12453 +
                     (C773 - C774) * C12510 + (C959 - C960) * C12454) *
                        C12452) *
                       C28857 * C28840 * C85 +
                   ((C238 * C12509 + C403 * C12453 + (C774 - C773) * C12510 +
                     (C960 - C959) * C12454) *
                        C12451 +
                    ((C235 - C234) * C12509 + (C402 - C401) * C12453 +
                     (C28881 * C763 - C214 * C631) * C12510 +
                     (C28881 * C955 - C214 * C829) * C12454) *
                        C12452) *
                       C28857 * C28840 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C214 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C28881) *
               C12453 +
           ((C12451 * C636 - C12455 * C630 + C12452 * C634 - C12457 * C629) *
                C214 +
            (C12451 * C1014 - C12455 * C1010 + C12452 * C1015 -
             C12457 * C1011) *
                C28881) *
               C12454) *
              C28857 * C28840 * C84 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C214 +
            (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                C28881) *
               C12453 +
           ((C12455 * C629 - C12451 * C634 + C12457 * C628 - C12452 * C632) *
                C214 +
            (C12455 * C1011 - C12451 * C1015 + C12457 * C1012 -
             C12452 * C1016) *
                C28881) *
               C12454) *
              C28857 * C28840 * C85 +
          (((C12451 * C102 - C12455 * C95 + C12452 * C104 - C12457 * C96) *
                C214 +
            (C12451 * C450 - C12455 * C445 + C12452 * C451 - C12457 * C446) *
                C28881) *
               C12453 +
           ((C12451 * C632 - C12455 * C628 + C12452 * C638 - C12457 * C631) *
                C214 +
            (C12451 * C1016 - C12455 * C1012 + C12452 * C1017 -
             C12457 * C1013) *
                C28881) *
               C12454) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C214 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C28881) *
               C12451 +
           ((C12512 - C12513 + C12514 - C12515) * C214 +
            (C12858 - C12859 + C12860 - C12861) * C28881) *
               C12452) *
              C28857 * C28840 * C84 +
          (((C12513 - C12512 + C12515 - C12514) * C214 +
            (C12859 - C12858 + C12861 - C12860) * C28881) *
               C12451 +
           ((C12520 - C12521 + C12522 - C12523) * C214 +
            (C12862 - C12863 + C12864 - C12865) * C28881) *
               C12452) *
              C28857 * C28840 * C85 +
          (((C12521 - C12520 + C12523 - C12522) * C214 +
            (C12863 - C12862 + C12865 - C12864) * C28881) *
               C12451 +
           ((C12453 * C155 - C12509 * C96 + C12454 * C697 - C12510 * C631) *
                C214 +
            (C12453 * C494 - C12509 * C446 + C12454 * C1071 - C12510 * C1013) *
                C28881) *
               C12452) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
            C5286 * C12454) *
               C12451 +
           (C12916 + C12917) * C12452) *
              C28857 * C28840 * C84 -
          ((C12918 + C12919) * C12452 + (C12917 + C12916) * C12451) * C28857 *
              C28840 * C85 +
          ((C12919 + C12918) * C12451 +
           (C571 * C12453 +
            (C214 * C763 - C544 * C631 - C214 * C1013 + C28881 * C1129) *
                C12454) *
               C12452) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C28881 * C12453 +
            (C13010 + C13011) * C28881 * C12454) *
               C28857 * C624 -
           ((C12457 * C2217 - C12458 * C2213 - C12457 * C2218 + C12452 * C2222 +
             C12455 * C2215 - C12456 * C2212 - C12455 * C2216 +
             C12451 * C2221) *
                C28881 * C12454 +
            (C13011 + C13010) * C28881 * C12453) *
               C28857 * C28948) *
              C626 +
          (((C13012 + C13013) * C28881 * C12453 +
            (C12455 * C2217 - C12456 * C2213 - C12455 * C2218 + C12451 * C2222 +
             C12457 * C2219 - C12458 * C2214 - C12457 * C2220 +
             C12452 * C2223) *
                C28881 * C12454) *
               C28857 * C28948 -
           ((C13013 + C13012) * C28881 * C12454 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C28881 * C12453) *
               C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C12455 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C12451 +
            (C12512 - C12513 + C12514 - C12515) * C12457 +
            (C12516 - C12517 + C12518 - C12519) * C12452) *
               C28881 * C28857 * C624 +
           ((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C12455 +
            (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                C12451 +
            (C13080 - C13081 + C13082 - C13083) * C12457 +
            (C13084 - C13085 + C13086 - C13087) * C12452) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C12513 - C12512 + C12515 - C12514) * C12455 +
            (C12517 - C12516 + C12519 - C12518) * C12451 +
            (C12520 - C12521 + C12522 - C12523) * C12457 +
            (C12524 - C12525 + C12526 - C12527) * C12452) *
               C28881 * C28857 * C624 +
           ((C13081 - C13080 + C13083 - C13082) * C12455 +
            (C13085 - C13084 + C13087 - C13086) * C12451 +
            (C12453 * C696 - C12509 * C628 + C12454 * C2264 - C12510 * C2214) *
                C12457 +
            (C12453 * C700 - C12509 * C633 + C12454 * C2267 - C12510 * C2220) *
                C12452) *
               C28881 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12455 +
                      (C28881 * C220 - C214 * C99) * C12451 +
                      (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                         C12453 +
                     ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                      C13154 * C12457 + C13155 * C12452) *
                         C12454) *
                        C28857 * C624 +
                    (((C4911 - C4910) * C12455 + (C4913 - C4912) * C12451 +
                      C13156 * C12457 + C13157 * C12452) *
                         C12453 +
                     ((C4915 - C4914) * C12455 + (C4917 - C4916) * C12451 +
                      (C4918 - C4919) * C12457 + (C4920 - C4921) * C12452) *
                         C12454) *
                        C28857 * C28948) *
                       C626 +
                   ((((C227 - C226) * C12455 + (C229 - C228) * C12451 +
                      (C231 - C230) * C12457 + (C233 - C232) * C12452) *
                         C12453 +
                     (C13156 * C12455 + C13157 * C12451 +
                      (C773 - C774) * C12457 + (C775 - C776) * C12452) *
                         C12454) *
                        C28857 * C624 +
                    ((C13154 * C12455 + C13155 * C12451 +
                      (C774 - C773) * C12457 + (C776 - C775) * C12452) *
                         C12453 +
                     ((C4919 - C4918) * C12455 + (C4921 - C4920) * C12451 +
                      (C28881 * C2308 - C214 * C2214) * C12457 +
                      (C28881 * C2311 - C214 * C2220) * C12452) *
                         C12454) *
                        C28857 * C28948) *
                       C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C12509 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C12453 +
            (C13224 - C13225 + C13226 - C13227) * C12510 +
            (C13228 - C13229 + C13230 - C13231) * C12454) *
               C28881 * C28857 * C624 +
           ((C13225 - C13224 + C13227 - C13226) * C12509 +
            (C13229 - C13228 + C13231 - C13230) * C12453 +
            (C12455 * C2212 - C12451 * C2215 + C12457 * C2213 -
             C12452 * C2217) *
                C12510 +
            (C12455 * C2350 - C12451 * C2353 + C12457 * C2351 -
             C12452 * C2354) *
                C12454) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C12509 +
            (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                C12453 +
            (C13232 - C13233 + C13234 - C13235) * C12510 +
            (C13236 - C13237 + C13238 - C13239) * C12454) *
               C28881 * C28857 * C624 +
           ((C13233 - C13232 + C13235 - C13234) * C12509 +
            (C13237 - C13236 + C13239 - C13238) * C12453 +
            (C12451 * C2217 - C12455 * C2213 + C12452 * C2219 -
             C12457 * C2214) *
                C12510 +
            (C12451 * C2354 - C12455 * C2351 + C12452 * C2355 -
             C12457 * C2352) *
                C12454) *
               C28881 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C12451 +
            (C12704 + C12705) * C12452) *
               C28881 * C28857 * C624 -
           ((C13318 + C13319) * C12452 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C12451) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C13319 + C13318) * C12451 +
            (C12509 * C696 - C12677 * C628 - C12509 * C828 + C12453 * C884 +
             C12510 * C2264 - C12678 * C2214 - C12510 * C2352 +
             C12454 * C2396) *
                C12452) *
               C28881 * C28857 * C28948 -
           ((C12706 + C12707) * C12452 + (C12705 + C12704) * C12451) * C28881 *
               C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12509 +
                      (C28881 * C390 - C214 * C277) * C12453 +
                      (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                         C12451 +
                     ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                      C13154 * C12510 + C13386 * C12454) *
                         C12452) *
                        C28857 * C624 +
                    (((C4911 - C4910) * C12509 + (C5097 - C5096) * C12453 +
                      (C4915 - C4914) * C12510 + (C5099 - C5098) * C12454) *
                         C12451 +
                     (C13156 * C12509 + C13387 * C12453 +
                      (C4918 - C4919) * C12510 + (C5100 - C5101) * C12454) *
                         C12452) *
                        C28857 * C28948) *
                       C626 +
                   ((((C227 - C226) * C12509 + (C397 - C396) * C12453 +
                      C13156 * C12510 + C13387 * C12454) *
                         C12451 +
                     ((C231 - C230) * C12509 + (C400 - C399) * C12453 +
                      (C773 - C774) * C12510 + (C959 - C960) * C12454) *
                         C12452) *
                        C28857 * C624 +
                    ((C13154 * C12509 + C13386 * C12453 +
                      (C4919 - C4918) * C12510 + (C5101 - C5100) * C12454) *
                         C12451 +
                     ((C774 - C773) * C12509 + (C960 - C959) * C12453 +
                      (C28881 * C2308 - C214 * C2214) * C12510 +
                      (C28881 * C2437 - C214 * C2352) * C12454) *
                         C12452) *
                        C28857 * C28948) *
                       C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C214 +
             (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                 C28881) *
                C12453 +
            ((C13224 - C13225 + C13226 - C13227) * C214 +
             (C13454 - C13455 + C13456 - C13457) * C28881) *
                C12454) *
               C28857 * C624 +
           (((C13225 - C13224 + C13227 - C13226) * C214 +
             (C13455 - C13454 + C13457 - C13456) * C28881) *
                C12453 +
            ((C12455 * C2212 - C12451 * C2215 + C12457 * C2213 -
              C12452 * C2217) *
                 C214 +
             (C12455 * C2476 - C12451 * C2479 + C12457 * C2477 -
              C12452 * C2480) *
                 C28881) *
                C12454) *
               C28857 * C28948) *
              C626 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C214 +
             (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                 C28881) *
                C12453 +
            ((C13232 - C13233 + C13234 - C13235) * C214 +
             (C13458 - C13459 + C13460 - C13461) * C28881) *
                C12454) *
               C28857 * C624 +
           (((C13233 - C13232 + C13235 - C13234) * C214 +
             (C13459 - C13458 + C13461 - C13460) * C28881) *
                C12453 +
            ((C12451 * C2217 - C12455 * C2213 + C12452 * C2219 -
              C12457 * C2214) *
                 C214 +
             (C12451 * C2480 - C12455 * C2477 + C12452 * C2481 -
              C12457 * C2478) *
                 C28881) *
                C12454) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C214 +
             (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                 C28881) *
                C12451 +
            ((C12512 - C12513 + C12514 - C12515) * C214 +
             (C12858 - C12859 + C12860 - C12861) * C28881) *
                C12452) *
               C28857 * C624 +
           (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C214 +
             (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
              C12454 * C2520) *
                 C28881) *
                C12451 +
            ((C13080 - C13081 + C13082 - C13083) * C214 +
             (C13528 - C13529 + C13530 - C13531) * C28881) *
                C12452) *
               C28857 * C28948) *
              C626 +
          ((((C12513 - C12512 + C12515 - C12514) * C214 +
             (C12859 - C12858 + C12861 - C12860) * C28881) *
                C12451 +
            ((C12520 - C12521 + C12522 - C12523) * C214 +
             (C12862 - C12863 + C12864 - C12865) * C28881) *
                C12452) *
               C28857 * C624 +
           (((C13081 - C13080 + C13083 - C13082) * C214 +
             (C13529 - C13528 + C13531 - C13530) * C28881) *
                C12451 +
            ((C12453 * C696 - C12509 * C628 + C12454 * C2264 - C12510 * C2214) *
                 C214 +
             (C12453 * C1070 - C12509 * C1012 + C12454 * C2522 -
              C12510 * C2478) *
                 C28881) *
                C12452) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
             C5286 * C12454) *
                C12451 +
            (C12916 + C12917) * C12452) *
               C28857 * C624 -
           ((C13598 + C13599) * C12452 +
            (C5287 * C12454 + C5286 * C12453) * C12451) *
               C28857 * C28948) *
              C626 +
          (((C13599 + C13598) * C12451 +
            (C1143 * C12453 +
             (C214 * C2308 - C544 * C2214 - C214 * C2478 + C28881 * C2563) *
                 C12454) *
                C12452) *
               C28857 * C28948 -
           ((C12918 + C12919) * C12452 + (C12917 + C12916) * C12451) * C28857 *
               C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C28881 * C12453 +
            (C13010 + C13011) * C28881 * C12454) *
               C1196 -
           ((C12457 * C2619 - C12458 * C2615 - C12457 * C2620 + C12452 * C2624 +
             C12455 * C2617 - C12456 * C2614 - C12455 * C2618 +
             C12451 * C2623) *
                C28881 * C12454 +
            (C12457 * C1204 - C12458 * C1199 - C12457 * C1205 + C12452 * C1211 +
             C12455 * C1206 - C12456 * C1200 - C12455 * C1207 +
             C12451 * C1212) *
                C28881 * C12453) *
               C28950) *
              C28840 * C626 +
          (((C12455 * C1204 - C12456 * C1199 - C12455 * C1205 + C12451 * C1211 +
             C12457 * C1202 - C12458 * C1198 - C12457 * C1203 +
             C12452 * C1210) *
                C28881 * C12453 +
            (C12455 * C2619 - C12456 * C2615 - C12455 * C2620 + C12451 * C2624 +
             C12457 * C2621 - C12458 * C2616 - C12457 * C2622 +
             C12452 * C2625) *
                C28881 * C12454) *
               C28950 -
           ((C13013 + C13012) * C28881 * C12454 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C28881 * C12453) *
               C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C12455 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C12451 +
            (C12512 - C12513 + C12514 - C12515) * C12457 +
            (C12516 - C12517 + C12518 - C12519) * C12452) *
               C28881 * C1196 +
           ((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
             C12454 * C2676) *
                C12455 +
            (C12509 * C1207 - C12453 * C1268 + C12510 * C2618 -
             C12454 * C2679) *
                C12451 +
            (C13732 - C13733 + C13734 - C13735) * C12457 +
            (C13736 - C13737 + C13738 - C13739) * C12452) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C12513 - C12512 + C12515 - C12514) * C12455 +
            (C12517 - C12516 + C12519 - C12518) * C12451 +
            (C12520 - C12521 + C12522 - C12523) * C12457 +
            (C12524 - C12525 + C12526 - C12527) * C12452) *
               C28881 * C1196 +
           ((C13733 - C13732 + C13735 - C13734) * C12455 +
            (C13737 - C13736 + C13739 - C13738) * C12451 +
            (C12453 * C1266 - C12509 * C1198 + C12454 * C2678 -
             C12510 * C2616) *
                C12457 +
            (C12453 * C1270 - C12509 * C1203 + C12454 * C2681 -
             C12510 * C2622) *
                C12452) *
               C28881 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12455 +
                      (C28881 * C220 - C214 * C99) * C12451 +
                      (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                         C12453 +
                     ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                      C13154 * C12457 + C13155 * C12452) *
                         C12454) *
                        C1196 +
                    (((C214 * C1200 - C28881 * C1330) * C12455 +
                      (C214 * C1207 - C28881 * C1334) * C12451 +
                      (C1339 - C1340) * C12457 + (C1341 - C1342) * C12452) *
                         C12453 +
                     ((C6792 - C6793) * C12455 + (C6794 - C6795) * C12451 +
                      (C13806 - C13807) * C12457 + (C13808 - C13809) * C12452) *
                         C12454) *
                        C28950) *
                       C28840 * C626 +
                   ((((C227 - C226) * C12455 + (C229 - C228) * C12451 +
                      (C231 - C230) * C12457 + (C233 - C232) * C12452) *
                         C12453 +
                     (C13156 * C12455 + C13157 * C12451 +
                      (C773 - C774) * C12457 + (C775 - C776) * C12452) *
                         C12454) *
                        C1196 +
                    (((C1340 - C1339) * C12455 + (C1342 - C1341) * C12451 +
                      (C1344 - C1343) * C12457 + (C1346 - C1345) * C12452) *
                         C12453 +
                     ((C13807 - C13806) * C12455 + (C13809 - C13808) * C12451 +
                      (C28881 * C2734 - C214 * C2616) * C12457 +
                      (C28881 * C2737 - C214 * C2622) * C12452) *
                         C12454) *
                        C28950) *
                       C28840 * C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C12509 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C12453 +
            (C13224 - C13225 + C13226 - C13227) * C12510 +
            (C13228 - C13229 + C13230 - C13231) * C12454) *
               C28881 * C1196 +
           ((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
             C12452 * C1204) *
                C12509 +
            (C12455 * C1396 - C12451 * C1400 + C12457 * C1397 -
             C12452 * C1401) *
                C12453 +
            (C12455 * C2614 - C12451 * C2617 + C12457 * C2615 -
             C12452 * C2619) *
                C12510 +
            (C12455 * C2788 - C12451 * C2791 + C12457 * C2789 -
             C12452 * C2792) *
                C12454) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C12509 +
            (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                C12453 +
            (C13232 - C13233 + C13234 - C13235) * C12510 +
            (C13236 - C13237 + C13238 - C13239) * C12454) *
               C28881 * C1196 +
           ((C12451 * C1204 - C12455 * C1199 + C12452 * C1202 -
             C12457 * C1198) *
                C12509 +
            (C12451 * C1401 - C12455 * C1397 + C12452 * C1402 -
             C12457 * C1398) *
                C12453 +
            (C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
             C12457 * C2616) *
                C12510 +
            (C12451 * C2792 - C12455 * C2789 + C12452 * C2793 -
             C12457 * C2790) *
                C12454) *
               C28881 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C12451 +
            (C12704 + C12705) * C12452) *
               C28881 * C1196 -
           ((C13954 + C13955) * C12452 +
            (C12510 * C2676 - C12678 * C2614 - C12510 * C2788 + C12454 * C2844 +
             C12509 * C1264 - C12677 * C1200 - C12509 * C1396 +
             C12453 * C1456) *
                C12451) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C13955 + C13954) * C12451 +
            (C12509 * C1266 - C12677 * C1198 - C12509 * C1398 + C12453 * C1454 +
             C12510 * C2678 - C12678 * C2616 - C12510 * C2790 +
             C12454 * C2846) *
                C12452) *
               C28881 * C28950 -
           ((C12706 + C12707) * C12452 + (C12705 + C12704) * C12451) * C28881 *
               C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12509 +
                      (C28881 * C390 - C214 * C277) * C12453 +
                      (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                         C12451 +
                     ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                      C13154 * C12510 + C13386 * C12454) *
                         C12452) *
                        C1196 +
                    (((C214 * C1200 - C28881 * C1330) * C12509 +
                      (C214 * C1396 - C28881 * C1522) * C12453 +
                      (C6792 - C6793) * C12510 + (C6962 - C6963) * C12454) *
                         C12451 +
                     ((C1339 - C1340) * C12509 + (C1527 - C1528) * C12453 +
                      (C13806 - C13807) * C12510 + (C14022 - C14023) * C12454) *
                         C12452) *
                        C28950) *
                       C28840 * C626 +
                   ((((C227 - C226) * C12509 + (C397 - C396) * C12453 +
                      C13156 * C12510 + C13387 * C12454) *
                         C12451 +
                     ((C231 - C230) * C12509 + (C400 - C399) * C12453 +
                      (C773 - C774) * C12510 + (C959 - C960) * C12454) *
                         C12452) *
                        C1196 +
                    (((C1340 - C1339) * C12509 + (C1528 - C1527) * C12453 +
                      (C13807 - C13806) * C12510 + (C14023 - C14022) * C12454) *
                         C12451 +
                     ((C1344 - C1343) * C12509 + (C1530 - C1529) * C12453 +
                      (C28881 * C2734 - C214 * C2616) * C12510 +
                      (C28881 * C2899 - C214 * C2790) * C12454) *
                         C12452) *
                        C28950) *
                       C28840 * C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C214 +
             (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                 C28881) *
                C12453 +
            ((C13224 - C13225 + C13226 - C13227) * C214 +
             (C13454 - C13455 + C13456 - C13457) * C28881) *
                C12454) *
               C1196 +
           (((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
              C12452 * C1204) *
                 C214 +
             (C12455 * C1580 - C12451 * C1584 + C12457 * C1581 -
              C12452 * C1585) *
                 C28881) *
                C12453 +
            ((C12455 * C2614 - C12451 * C2617 + C12457 * C2615 -
              C12452 * C2619) *
                 C214 +
             (C12455 * C2950 - C12451 * C2953 + C12457 * C2951 -
              C12452 * C2954) *
                 C28881) *
                C12454) *
               C28950) *
              C28840 * C626 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C214 +
             (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                 C28881) *
                C12453 +
            ((C13232 - C13233 + C13234 - C13235) * C214 +
             (C13458 - C13459 + C13460 - C13461) * C28881) *
                C12454) *
               C1196 +
           (((C12451 * C1204 - C12455 * C1199 + C12452 * C1202 -
              C12457 * C1198) *
                 C214 +
             (C12451 * C1585 - C12455 * C1581 + C12452 * C1586 -
              C12457 * C1582) *
                 C28881) *
                C12453 +
            ((C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
              C12457 * C2616) *
                 C214 +
             (C12451 * C2954 - C12455 * C2951 + C12452 * C2955 -
              C12457 * C2952) *
                 C28881) *
                C12454) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C214 +
             (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                 C28881) *
                C12451 +
            ((C12512 - C12513 + C12514 - C12515) * C214 +
             (C12858 - C12859 + C12860 - C12861) * C28881) *
                C12452) *
               C1196 +
           (((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
              C12454 * C2676) *
                 C214 +
             (C12509 * C1580 - C12453 * C1638 + C12510 * C2950 -
              C12454 * C3006) *
                 C28881) *
                C12451 +
            ((C13732 - C13733 + C13734 - C13735) * C214 +
             (C14156 - C14157 + C14158 - C14159) * C28881) *
                C12452) *
               C28950) *
              C28840 * C626 +
          ((((C12513 - C12512 + C12515 - C12514) * C214 +
             (C12859 - C12858 + C12861 - C12860) * C28881) *
                C12451 +
            ((C12520 - C12521 + C12522 - C12523) * C214 +
             (C12862 - C12863 + C12864 - C12865) * C28881) *
                C12452) *
               C1196 +
           (((C13733 - C13732 + C13735 - C13734) * C214 +
             (C14157 - C14156 + C14159 - C14158) * C28881) *
                C12451 +
            ((C12453 * C1266 - C12509 * C1198 + C12454 * C2678 -
              C12510 * C2616) *
                 C214 +
             (C12453 * C1640 - C12509 * C1582 + C12454 * C3008 -
              C12510 * C2952) *
                 C28881) *
                C12452) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
             C5286 * C12454) *
                C12451 +
            (C12916 + C12917) * C12452) *
               C1196 -
           ((C14234 + C14230) * C12452 +
            (C7137 * C12454 +
             (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                 C12453) *
                C12451) *
               C28950) *
              C28840 * C626 +
          (((C14230 + C14234) * C12451 +
            (C1713 * C12453 +
             (C214 * C2734 - C544 * C2616 - C214 * C2952 + C28881 * C3061) *
                 C12454) *
                C12452) *
               C28950 -
           ((C12918 + C12919) * C12452 + (C12917 + C12916) * C12451) * C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C28881 * C12453 +
            (C13010 + C13011) * C28881 * C12454) *
               C28857 * C1766 -
           ((C12457 * C2217 - C12458 * C2213 - C12457 * C2218 + C12452 * C2222 +
             C12455 * C2215 - C12456 * C2212 - C12455 * C2216 +
             C12451 * C2221) *
                C28881 * C12454 +
            (C13011 + C13010) * C28881 * C12453) *
               C28857 * C28948) *
              C1768 +
          (((C13012 + C13013) * C28881 * C12453 +
            (C12455 * C2217 - C12456 * C2213 - C12455 * C2218 + C12451 * C2222 +
             C12457 * C2219 - C12458 * C2214 - C12457 * C2220 +
             C12452 * C2223) *
                C28881 * C12454) *
               C28857 * C28948 -
           ((C13013 + C13012) * C28881 * C12454 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C28881 * C12453) *
               C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C12455 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C12451 +
            (C12512 - C12513 + C12514 - C12515) * C12457 +
            (C12516 - C12517 + C12518 - C12519) * C12452) *
               C28881 * C28857 * C1766 +
           ((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C12455 +
            (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                C12451 +
            (C13080 - C13081 + C13082 - C13083) * C12457 +
            (C13084 - C13085 + C13086 - C13087) * C12452) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C12513 - C12512 + C12515 - C12514) * C12455 +
            (C12517 - C12516 + C12519 - C12518) * C12451 +
            (C12520 - C12521 + C12522 - C12523) * C12457 +
            (C12524 - C12525 + C12526 - C12527) * C12452) *
               C28881 * C28857 * C1766 +
           ((C13081 - C13080 + C13083 - C13082) * C12455 +
            (C13085 - C13084 + C13087 - C13086) * C12451 +
            (C12453 * C696 - C12509 * C628 + C12454 * C2264 - C12510 * C2214) *
                C12457 +
            (C12453 * C700 - C12509 * C633 + C12454 * C2267 - C12510 * C2220) *
                C12452) *
               C28881 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12455 +
                      (C28881 * C220 - C214 * C99) * C12451 +
                      (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                         C12453 +
                     ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                      C13154 * C12457 + C13155 * C12452) *
                         C12454) *
                        C28857 * C1766 +
                    (((C4911 - C4910) * C12455 + (C4913 - C4912) * C12451 +
                      C13156 * C12457 + C13157 * C12452) *
                         C12453 +
                     ((C4915 - C4914) * C12455 + (C4917 - C4916) * C12451 +
                      (C4918 - C4919) * C12457 + (C4920 - C4921) * C12452) *
                         C12454) *
                        C28857 * C28948) *
                       C1768 +
                   ((((C227 - C226) * C12455 + (C229 - C228) * C12451 +
                      (C231 - C230) * C12457 + (C233 - C232) * C12452) *
                         C12453 +
                     (C13156 * C12455 + C13157 * C12451 +
                      (C773 - C774) * C12457 + (C775 - C776) * C12452) *
                         C12454) *
                        C28857 * C1766 +
                    ((C13154 * C12455 + C13155 * C12451 +
                      (C774 - C773) * C12457 + (C776 - C775) * C12452) *
                         C12453 +
                     ((C4919 - C4918) * C12455 + (C4921 - C4920) * C12451 +
                      (C28881 * C2308 - C214 * C2214) * C12457 +
                      (C28881 * C2311 - C214 * C2220) * C12452) *
                         C12454) *
                        C28857 * C28948) *
                       C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C12509 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C12453 +
            (C13224 - C13225 + C13226 - C13227) * C12510 +
            (C13228 - C13229 + C13230 - C13231) * C12454) *
               C28881 * C28857 * C1766 +
           ((C13225 - C13224 + C13227 - C13226) * C12509 +
            (C13229 - C13228 + C13231 - C13230) * C12453 +
            (C12455 * C2212 - C12451 * C2215 + C12457 * C2213 -
             C12452 * C2217) *
                C12510 +
            (C12455 * C2350 - C12451 * C2353 + C12457 * C2351 -
             C12452 * C2354) *
                C12454) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C12509 +
            (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                C12453 +
            (C13232 - C13233 + C13234 - C13235) * C12510 +
            (C13236 - C13237 + C13238 - C13239) * C12454) *
               C28881 * C28857 * C1766 +
           ((C13233 - C13232 + C13235 - C13234) * C12509 +
            (C13237 - C13236 + C13239 - C13238) * C12453 +
            (C12451 * C2217 - C12455 * C2213 + C12452 * C2219 -
             C12457 * C2214) *
                C12510 +
            (C12451 * C2354 - C12455 * C2351 + C12452 * C2355 -
             C12457 * C2352) *
                C12454) *
               C28881 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C12451 +
            (C12704 + C12705) * C12452) *
               C28881 * C28857 * C1766 -
           ((C13318 + C13319) * C12452 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C12451) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C13319 + C13318) * C12451 +
            (C12509 * C696 - C12677 * C628 - C12509 * C828 + C12453 * C884 +
             C12510 * C2264 - C12678 * C2214 - C12510 * C2352 +
             C12454 * C2396) *
                C12452) *
               C28881 * C28857 * C28948 -
           ((C12706 + C12707) * C12452 + (C12705 + C12704) * C12451) * C28881 *
               C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12509 +
                      (C28881 * C390 - C214 * C277) * C12453 +
                      (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                         C12451 +
                     ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                      C13154 * C12510 + C13386 * C12454) *
                         C12452) *
                        C28857 * C1766 +
                    (((C4911 - C4910) * C12509 + (C5097 - C5096) * C12453 +
                      (C4915 - C4914) * C12510 + (C5099 - C5098) * C12454) *
                         C12451 +
                     (C13156 * C12509 + C13387 * C12453 +
                      (C4918 - C4919) * C12510 + (C5100 - C5101) * C12454) *
                         C12452) *
                        C28857 * C28948) *
                       C1768 +
                   ((((C227 - C226) * C12509 + (C397 - C396) * C12453 +
                      C13156 * C12510 + C13387 * C12454) *
                         C12451 +
                     ((C231 - C230) * C12509 + (C400 - C399) * C12453 +
                      (C773 - C774) * C12510 + (C959 - C960) * C12454) *
                         C12452) *
                        C28857 * C1766 +
                    ((C13154 * C12509 + C13386 * C12453 +
                      (C4919 - C4918) * C12510 + (C5101 - C5100) * C12454) *
                         C12451 +
                     ((C774 - C773) * C12509 + (C960 - C959) * C12453 +
                      (C28881 * C2308 - C214 * C2214) * C12510 +
                      (C28881 * C2437 - C214 * C2352) * C12454) *
                         C12452) *
                        C28857 * C28948) *
                       C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C214 +
             (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                 C28881) *
                C12453 +
            ((C13224 - C13225 + C13226 - C13227) * C214 +
             (C13454 - C13455 + C13456 - C13457) * C28881) *
                C12454) *
               C28857 * C1766 +
           (((C13225 - C13224 + C13227 - C13226) * C214 +
             (C13455 - C13454 + C13457 - C13456) * C28881) *
                C12453 +
            ((C12455 * C2212 - C12451 * C2215 + C12457 * C2213 -
              C12452 * C2217) *
                 C214 +
             (C12455 * C2476 - C12451 * C2479 + C12457 * C2477 -
              C12452 * C2480) *
                 C28881) *
                C12454) *
               C28857 * C28948) *
              C1768 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C214 +
             (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                 C28881) *
                C12453 +
            ((C13232 - C13233 + C13234 - C13235) * C214 +
             (C13458 - C13459 + C13460 - C13461) * C28881) *
                C12454) *
               C28857 * C1766 +
           (((C13233 - C13232 + C13235 - C13234) * C214 +
             (C13459 - C13458 + C13461 - C13460) * C28881) *
                C12453 +
            ((C12451 * C2217 - C12455 * C2213 + C12452 * C2219 -
              C12457 * C2214) *
                 C214 +
             (C12451 * C2480 - C12455 * C2477 + C12452 * C2481 -
              C12457 * C2478) *
                 C28881) *
                C12454) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C214 +
             (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                 C28881) *
                C12451 +
            ((C12512 - C12513 + C12514 - C12515) * C214 +
             (C12858 - C12859 + C12860 - C12861) * C28881) *
                C12452) *
               C28857 * C1766 +
           (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C214 +
             (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
              C12454 * C2520) *
                 C28881) *
                C12451 +
            ((C13080 - C13081 + C13082 - C13083) * C214 +
             (C13528 - C13529 + C13530 - C13531) * C28881) *
                C12452) *
               C28857 * C28948) *
              C1768 +
          ((((C12513 - C12512 + C12515 - C12514) * C214 +
             (C12859 - C12858 + C12861 - C12860) * C28881) *
                C12451 +
            ((C12520 - C12521 + C12522 - C12523) * C214 +
             (C12862 - C12863 + C12864 - C12865) * C28881) *
                C12452) *
               C28857 * C1766 +
           (((C13081 - C13080 + C13083 - C13082) * C214 +
             (C13529 - C13528 + C13531 - C13530) * C28881) *
                C12451 +
            ((C12453 * C696 - C12509 * C628 + C12454 * C2264 - C12510 * C2214) *
                 C214 +
             (C12453 * C1070 - C12509 * C1012 + C12454 * C2522 -
              C12510 * C2478) *
                 C28881) *
                C12452) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
             C5286 * C12454) *
                C12451 +
            (C12916 + C12917) * C12452) *
               C28857 * C1766 -
           ((C13598 + C13599) * C12452 +
            (C5287 * C12454 + C5286 * C12453) * C12451) *
               C28857 * C28948) *
              C1768 +
          (((C13599 + C13598) * C12451 +
            (C1143 * C12453 +
             (C214 * C2308 - C544 * C2214 - C214 * C2478 + C28881 * C2563) *
                 C12454) *
                C12452) *
               C28857 * C28948 -
           ((C12918 + C12919) * C12452 + (C12917 + C12916) * C12451) * C28857 *
               C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
            C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
               C28881 * C12453 +
           (C13010 + C13011) * C28881 * C12454) *
              C28857 * C2208 -
          ((C14891 + C14892) * C28881 * C12454 +
           (C13011 + C13010) * C28881 * C12453) *
              C28857 * C2209 +
          ((C14892 + C14891) * C28881 * C12453 +
           (C12455 * C4763 - C12456 * C4761 - C12455 * C4764 + C12451 * C4767 +
            C12457 * C4765 - C12458 * C4762 - C12457 * C4766 + C12452 * C4768) *
               C28881 * C12454) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
               C12455 +
           (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
               C12451 +
           (C12512 - C12513 + C12514 - C12515) * C12457 +
           (C12516 - C12517 + C12518 - C12519) * C12452) *
              C28881 * C28857 * C2208 +
          ((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
               C12455 +
           (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
               C12451 +
           (C13080 - C13081 + C13082 - C13083) * C12457 +
           (C13084 - C13085 + C13086 - C13087) * C12452) *
              C28881 * C28857 * C2209 +
          ((C12453 * C2262 - C12509 * C2212 + C12454 * C4851 - C12510 * C4761) *
               C12455 +
           (C12453 * C2265 - C12509 * C2216 + C12454 * C4853 - C12510 * C4764) *
               C12451 +
           (C12453 * C2263 - C12509 * C2213 + C12454 * C4852 - C12510 * C4762) *
               C12457 +
           (C12453 * C2266 - C12509 * C2218 + C12454 * C4854 - C12510 * C4766) *
               C12452) *
              C28881 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28881 * C215 - C214 * C93) * C12455 +
                     (C28881 * C220 - C214 * C99) * C12451 +
                     (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                        C12453 +
                    ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                     C13154 * C12457 + C13155 * C12452) *
                        C12454) *
                       C28857 * C2208 +
                   (((C4911 - C4910) * C12455 + (C4913 - C4912) * C12451 +
                     C13156 * C12457 + C13157 * C12452) *
                        C12453 +
                    ((C4915 - C4914) * C12455 + (C4917 - C4916) * C12451 +
                     (C4918 - C4919) * C12457 + (C4920 - C4921) * C12452) *
                        C12454) *
                       C28857 * C2209 +
                   ((C6351 * C12455 + C6352 * C12451 +
                     (C4919 - C4918) * C12457 + (C4921 - C4920) * C12452) *
                        C12453 +
                    ((C6354 - C6353) * C12455 + (C6356 - C6355) * C12451 +
                     (C28881 * C4906 - C214 * C4762) * C12457 +
                     (C28881 * C4908 - C214 * C4766) * C12452) *
                        C12454) *
                       C28857 * C2210) *
                  C28806) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
               C12509 +
           (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
               C12453 +
           (C13224 - C13225 + C13226 - C13227) * C12510 +
           (C13228 - C13229 + C13230 - C13231) * C12454) *
              C28881 * C28857 * C2208 +
          ((C13225 - C13224 + C13227 - C13226) * C12509 +
           (C13229 - C13228 + C13231 - C13230) * C12453 +
           (C15043 - C15044 + C15045 - C15046) * C12510 +
           (C15047 - C15048 + C15049 - C15050) * C12454) *
              C28881 * C28857 * C2209 +
          ((C15044 - C15043 + C15046 - C15045) * C12509 +
           (C15048 - C15047 + C15050 - C15049) * C12453 +
           (C12451 * C4763 - C12455 * C4761 + C12452 * C4765 - C12457 * C4762) *
               C12510 +
           (C12451 * C4973 - C12455 * C4971 + C12452 * C4974 - C12457 * C4972) *
               C12454) *
              C28881 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
            C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
               C12451 +
           (C12704 + C12705) * C12452) *
              C28881 * C28857 * C2208 -
          ((C13318 + C13319) * C12452 +
           (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
            C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
               C12451) *
              C28881 * C28857 * C2209 +
          ((C12509 * C2262 - C12677 * C2212 - C12509 * C2350 + C12453 * C2394 +
            C12510 * C4851 - C12678 * C4761 - C12510 * C4971 + C12454 * C5041) *
               C12451 +
           (C12509 * C2263 - C12677 * C2213 - C12509 * C2351 + C12453 * C2395 +
            C12510 * C4852 - C12678 * C4762 - C12510 * C4972 + C12454 * C5042) *
               C12452) *
              C28881 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28881 * C215 - C214 * C93) * C12509 +
                     (C28881 * C390 - C214 * C277) * C12453 +
                     (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                        C12451 +
                    ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                     C13154 * C12510 + C13386 * C12454) *
                        C12452) *
                       C28857 * C2208 +
                   (((C4911 - C4910) * C12509 + (C5097 - C5096) * C12453 +
                     (C4915 - C4914) * C12510 + (C5099 - C5098) * C12454) *
                        C12451 +
                    (C13156 * C12509 + C13387 * C12453 +
                     (C4918 - C4919) * C12510 + (C5100 - C5101) * C12454) *
                        C12452) *
                       C28857 * C2209 +
                   ((C6351 * C12509 + C6484 * C12453 +
                     (C6354 - C6353) * C12510 + (C6486 - C6485) * C12454) *
                        C12451 +
                    ((C4919 - C4918) * C12509 + (C5101 - C5100) * C12453 +
                     (C28881 * C4906 - C214 * C4762) * C12510 +
                     (C28881 * C5094 - C214 * C4972) * C12454) *
                        C12452) *
                       C28857 * C2210) *
                  C28806) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C214 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C28881) *
               C12453 +
           ((C13224 - C13225 + C13226 - C13227) * C214 +
            (C13454 - C13455 + C13456 - C13457) * C28881) *
               C12454) *
              C28857 * C2208 +
          (((C13225 - C13224 + C13227 - C13226) * C214 +
            (C13455 - C13454 + C13457 - C13456) * C28881) *
               C12453 +
           ((C15043 - C15044 + C15045 - C15046) * C214 +
            (C15201 - C15202 + C15203 - C15204) * C28881) *
               C12454) *
              C28857 * C2209 +
          (((C15044 - C15043 + C15046 - C15045) * C214 +
            (C15202 - C15201 + C15204 - C15203) * C28881) *
               C12453 +
           ((C12451 * C4763 - C12455 * C4761 + C12452 * C4765 -
             C12457 * C4762) *
                C214 +
            (C12451 * C5153 - C12455 * C5151 + C12452 * C5154 -
             C12457 * C5152) *
                C28881) *
               C12454) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C214 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C28881) *
               C12451 +
           ((C12512 - C12513 + C12514 - C12515) * C214 +
            (C12858 - C12859 + C12860 - C12861) * C28881) *
               C12452) *
              C28857 * C2208 +
          (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C214 +
            (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
             C12454 * C2520) *
                C28881) *
               C12451 +
           ((C13080 - C13081 + C13082 - C13083) * C214 +
            (C13528 - C13529 + C13530 - C13531) * C28881) *
               C12452) *
              C28857 * C2209 +
          (((C12453 * C2262 - C12509 * C2212 + C12454 * C4851 -
             C12510 * C4761) *
                C214 +
            (C12453 * C2520 - C12509 * C2476 + C12454 * C5213 -
             C12510 * C5151) *
                C28881) *
               C12451 +
           ((C12453 * C2263 - C12509 * C2213 + C12454 * C4852 -
             C12510 * C4762) *
                C214 +
            (C12453 * C2521 - C12509 * C2477 + C12454 * C5214 -
             C12510 * C5152) *
                C28881) *
               C12452) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
            C5286 * C12454) *
               C12451 +
           (C12916 + C12917) * C12452) *
              C28857 * C2208 -
          ((C13598 + C13599) * C12452 +
           (C5287 * C12454 + C5286 * C12453) * C12451) *
              C28857 * C2209 +
          ((C5287 * C12453 + C6617 * C12454) * C12451 +
           (C5288 * C12453 +
            (C214 * C4906 - C544 * C4762 - C214 * C5152 + C28881 * C5266) *
                C12454) *
               C12452) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C28881 * C12453 +
            (C13010 + C13011) * C28881 * C12454) *
               C1196 -
           ((C15383 + C15384) * C28881 * C12454 +
            (C12457 * C1204 - C12458 * C1199 - C12457 * C1205 + C12452 * C1211 +
             C12455 * C1206 - C12456 * C1200 - C12455 * C1207 +
             C12451 * C1212) *
                C28881 * C12453) *
               C28950) *
              C1766 +
          (((C15384 + C15383) * C28881 * C12453 +
            (C12455 * C5340 - C12456 * C5338 - C12455 * C5341 + C12451 * C5344 +
             C12457 * C5342 - C12458 * C5339 - C12457 * C5343 +
             C12452 * C5345) *
                C28881 * C12454) *
               C28950 -
           ((C14891 + C14892) * C28881 * C12454 +
            (C13011 + C13010) * C28881 * C12453) *
               C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C12455 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C12451 +
            (C12512 - C12513 + C12514 - C12515) * C12457 +
            (C12516 - C12517 + C12518 - C12519) * C12452) *
               C28881 * C1196 +
           ((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
             C12454 * C2676) *
                C12455 +
            (C12509 * C1207 - C12453 * C1268 + C12510 * C2618 -
             C12454 * C2679) *
                C12451 +
            (C13732 - C13733 + C13734 - C13735) * C12457 +
            (C13736 - C13737 + C13738 - C13739) * C12452) *
               C28881 * C28950) *
              C1766 +
          (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C12455 +
            (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                C12451 +
            (C13080 - C13081 + C13082 - C13083) * C12457 +
            (C13084 - C13085 + C13086 - C13087) * C12452) *
               C28881 * C1196 +
           ((C12453 * C2676 - C12509 * C2614 + C12454 * C5396 -
             C12510 * C5338) *
                C12455 +
            (C12453 * C2679 - C12509 * C2618 + C12454 * C5398 -
             C12510 * C5341) *
                C12451 +
            (C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
             C12510 * C5339) *
                C12457 +
            (C12453 * C2680 - C12509 * C2620 + C12454 * C5399 -
             C12510 * C5343) *
                C12452) *
               C28881 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12455 +
                      (C28881 * C220 - C214 * C99) * C12451 +
                      (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                         C12453 +
                     ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                      C13154 * C12457 + C13155 * C12452) *
                         C12454) *
                        C1196 +
                    (((C214 * C1200 - C28881 * C1330) * C12455 +
                      (C214 * C1207 - C28881 * C1334) * C12451 +
                      (C1339 - C1340) * C12457 + (C1341 - C1342) * C12452) *
                         C12453 +
                     ((C6792 - C6793) * C12455 + (C6794 - C6795) * C12451 +
                      (C13806 - C13807) * C12457 + (C13808 - C13809) * C12452) *
                         C12454) *
                        C28950) *
                       C1766 +
                   ((((C4911 - C4910) * C12455 + (C4913 - C4912) * C12451 +
                      C13156 * C12457 + C13157 * C12452) *
                         C12453 +
                     ((C4915 - C4914) * C12455 + (C4917 - C4916) * C12451 +
                      (C4918 - C4919) * C12457 + (C4920 - C4921) * C12452) *
                         C12454) *
                        C1196 +
                    (((C6793 - C6792) * C12455 + (C6795 - C6794) * C12451 +
                      (C13807 - C13806) * C12457 + (C13809 - C13808) * C12452) *
                         C12453 +
                     ((C6797 - C6796) * C12455 + (C6799 - C6798) * C12451 +
                      (C28881 * C5451 - C214 * C5339) * C12457 +
                      (C28881 * C5453 - C214 * C5343) * C12452) *
                         C12454) *
                        C28950) *
                       C28948) *
                  C28806) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C12509 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C12453 +
            (C13224 - C13225 + C13226 - C13227) * C12510 +
            (C13228 - C13229 + C13230 - C13231) * C12454) *
               C28881 * C1196 +
           ((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
             C12452 * C1204) *
                C12509 +
            (C12455 * C1396 - C12451 * C1400 + C12457 * C1397 -
             C12452 * C1401) *
                C12453 +
            (C15583 - C15584 + C15585 - C15586) * C12510 +
            (C15587 - C15588 + C15589 - C15590) * C12454) *
               C28881 * C28950) *
              C1766 +
          (((C13225 - C13224 + C13227 - C13226) * C12509 +
            (C13229 - C13228 + C13231 - C13230) * C12453 +
            (C15043 - C15044 + C15045 - C15046) * C12510 +
            (C15047 - C15048 + C15049 - C15050) * C12454) *
               C28881 * C1196 +
           ((C15584 - C15583 + C15586 - C15585) * C12509 +
            (C15588 - C15587 + C15590 - C15589) * C12453 +
            (C12451 * C5340 - C12455 * C5338 + C12452 * C5342 -
             C12457 * C5339) *
                C12510 +
            (C12451 * C5506 - C12455 * C5504 + C12452 * C5507 -
             C12457 * C5505) *
                C12454) *
               C28881 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C12451 +
            (C12704 + C12705) * C12452) *
               C28881 * C1196 -
           ((C13954 + C13955) * C12452 +
            (C12510 * C2676 - C12678 * C2614 - C12510 * C2788 + C12454 * C2844 +
             C12509 * C1264 - C12677 * C1200 - C12509 * C1396 +
             C12453 * C1456) *
                C12451) *
               C28881 * C28950) *
              C1766 +
          (((C12509 * C2676 - C12677 * C2614 - C12509 * C2788 + C12453 * C2844 +
             C12510 * C5396 - C12678 * C5338 - C12510 * C5504 +
             C12454 * C5558) *
                C12451 +
            (C12509 * C2677 - C12677 * C2615 - C12509 * C2789 + C12453 * C2845 +
             C12510 * C5397 - C12678 * C5339 - C12510 * C5505 +
             C12454 * C5559) *
                C12452) *
               C28881 * C28950 -
           ((C13318 + C13319) * C12452 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C12451) *
               C28881 * C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12509 +
                      (C28881 * C390 - C214 * C277) * C12453 +
                      (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                         C12451 +
                     ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                      C13154 * C12510 + C13386 * C12454) *
                         C12452) *
                        C1196 +
                    (((C214 * C1200 - C28881 * C1330) * C12509 +
                      (C214 * C1396 - C28881 * C1522) * C12453 +
                      (C6792 - C6793) * C12510 + (C6962 - C6963) * C12454) *
                         C12451 +
                     ((C1339 - C1340) * C12509 + (C1527 - C1528) * C12453 +
                      (C13806 - C13807) * C12510 + (C14022 - C14023) * C12454) *
                         C12452) *
                        C28950) *
                       C1766 +
                   ((((C4911 - C4910) * C12509 + (C5097 - C5096) * C12453 +
                      (C4915 - C4914) * C12510 + (C5099 - C5098) * C12454) *
                         C12451 +
                     (C13156 * C12509 + C13387 * C12453 +
                      (C4918 - C4919) * C12510 + (C5100 - C5101) * C12454) *
                         C12452) *
                        C1196 +
                    (((C6793 - C6792) * C12509 + (C6963 - C6962) * C12453 +
                      (C6797 - C6796) * C12510 + (C6965 - C6964) * C12454) *
                         C12451 +
                     ((C13807 - C13806) * C12509 + (C14023 - C14022) * C12453 +
                      (C28881 * C5451 - C214 * C5339) * C12510 +
                      (C28881 * C5611 - C214 * C5505) * C12454) *
                         C12452) *
                        C28950) *
                       C28948) *
                  C28806) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C214 +
             (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                 C28881) *
                C12453 +
            ((C13224 - C13225 + C13226 - C13227) * C214 +
             (C13454 - C13455 + C13456 - C13457) * C28881) *
                C12454) *
               C1196 +
           (((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
              C12452 * C1204) *
                 C214 +
             (C12455 * C1580 - C12451 * C1584 + C12457 * C1581 -
              C12452 * C1585) *
                 C28881) *
                C12453 +
            ((C15583 - C15584 + C15585 - C15586) * C214 +
             (C15789 - C15790 + C15791 - C15792) * C28881) *
                C12454) *
               C28950) *
              C1766 +
          ((((C13225 - C13224 + C13227 - C13226) * C214 +
             (C13455 - C13454 + C13457 - C13456) * C28881) *
                C12453 +
            ((C15043 - C15044 + C15045 - C15046) * C214 +
             (C15201 - C15202 + C15203 - C15204) * C28881) *
                C12454) *
               C1196 +
           (((C15584 - C15583 + C15586 - C15585) * C214 +
             (C15790 - C15789 + C15792 - C15791) * C28881) *
                C12453 +
            ((C12451 * C5340 - C12455 * C5338 + C12452 * C5342 -
              C12457 * C5339) *
                 C214 +
             (C12451 * C5664 - C12455 * C5662 + C12452 * C5665 -
              C12457 * C5663) *
                 C28881) *
                C12454) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C214 +
             (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                 C28881) *
                C12451 +
            ((C12512 - C12513 + C12514 - C12515) * C214 +
             (C12858 - C12859 + C12860 - C12861) * C28881) *
                C12452) *
               C1196 +
           (((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
              C12454 * C2676) *
                 C214 +
             (C12509 * C1580 - C12453 * C1638 + C12510 * C2950 -
              C12454 * C3006) *
                 C28881) *
                C12451 +
            ((C13732 - C13733 + C13734 - C13735) * C214 +
             (C14156 - C14157 + C14158 - C14159) * C28881) *
                C12452) *
               C28950) *
              C1766 +
          ((((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C214 +
             (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
              C12454 * C2520) *
                 C28881) *
                C12451 +
            ((C13080 - C13081 + C13082 - C13083) * C214 +
             (C13528 - C13529 + C13530 - C13531) * C28881) *
                C12452) *
               C1196 +
           (((C12453 * C2676 - C12509 * C2614 + C12454 * C5396 -
              C12510 * C5338) *
                 C214 +
             (C12453 * C3006 - C12509 * C2950 + C12454 * C5716 -
              C12510 * C5662) *
                 C28881) *
                C12451 +
            ((C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
              C12510 * C5339) *
                 C214 +
             (C12453 * C3007 - C12509 * C2951 + C12454 * C5717 -
              C12510 * C5663) *
                 C28881) *
                C12452) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
             C5286 * C12454) *
                C12451 +
            (C12916 + C12917) * C12452) *
               C1196 -
           ((C14234 + C14230) * C12452 +
            (C7137 * C12454 +
             (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                 C12453) *
                C12451) *
               C28950) *
              C1766 +
          (((C7137 * C12453 + C7136 * C12454) * C12451 +
            (C14233 * C12453 +
             (C214 * C5451 - C544 * C5339 - C214 * C5663 + C28881 * C5769) *
                 C12454) *
                C12452) *
               C28950 -
           ((C13598 + C13599) * C12452 +
            (C5287 * C12454 + C5286 * C12453) * C12451) *
               C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C28881 * C12453 +
            (C13010 + C13011) * C28881 * C12454) *
               C3112 -
           ((C15383 + C15384) * C28881 * C12454 +
            (C12457 * C1204 - C12458 * C1199 - C12457 * C1205 + C12452 * C1211 +
             C12455 * C1206 - C12456 * C1200 - C12455 * C1207 +
             C12451 * C1212) *
                C28881 * C12453) *
               C28950) *
              C28840 * C1768 +
          (((C12455 * C1204 - C12456 * C1199 - C12455 * C1205 + C12451 * C1211 +
             C12457 * C1202 - C12458 * C1198 - C12457 * C1203 +
             C12452 * C1210) *
                C28881 * C12453 +
            (C12455 * C2619 - C12456 * C2615 - C12455 * C2620 + C12451 * C2624 +
             C12457 * C2621 - C12458 * C2616 - C12457 * C2622 +
             C12452 * C2625) *
                C28881 * C12454) *
               C28950 -
           ((C13013 + C13012) * C28881 * C12454 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C28881 * C12453) *
               C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C12455 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C12451 +
            (C12512 - C12513 + C12514 - C12515) * C12457 +
            (C12516 - C12517 + C12518 - C12519) * C12452) *
               C28881 * C3112 +
           ((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
             C12454 * C2676) *
                C12455 +
            (C12509 * C1207 - C12453 * C1268 + C12510 * C2618 -
             C12454 * C2679) *
                C12451 +
            (C13732 - C13733 + C13734 - C13735) * C12457 +
            (C13736 - C13737 + C13738 - C13739) * C12452) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C12513 - C12512 + C12515 - C12514) * C12455 +
            (C12517 - C12516 + C12519 - C12518) * C12451 +
            (C12520 - C12521 + C12522 - C12523) * C12457 +
            (C12524 - C12525 + C12526 - C12527) * C12452) *
               C28881 * C3112 +
           ((C13733 - C13732 + C13735 - C13734) * C12455 +
            (C13737 - C13736 + C13739 - C13738) * C12451 +
            (C12453 * C1266 - C12509 * C1198 + C12454 * C2678 -
             C12510 * C2616) *
                C12457 +
            (C12453 * C1270 - C12509 * C1203 + C12454 * C2681 -
             C12510 * C2622) *
                C12452) *
               C28881 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12455 +
                      (C28881 * C220 - C214 * C99) * C12451 +
                      (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                         C12453 +
                     ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                      C13154 * C12457 + C13155 * C12452) *
                         C12454) *
                        C3112 +
                    (((C214 * C1200 - C28881 * C1330) * C12455 +
                      (C214 * C1207 - C28881 * C1334) * C12451 +
                      (C1339 - C1340) * C12457 + (C1341 - C1342) * C12452) *
                         C12453 +
                     ((C6792 - C6793) * C12455 + (C6794 - C6795) * C12451 +
                      (C13806 - C13807) * C12457 + (C13808 - C13809) * C12452) *
                         C12454) *
                        C28950) *
                       C28840 * C1768 +
                   ((((C227 - C226) * C12455 + (C229 - C228) * C12451 +
                      (C231 - C230) * C12457 + (C233 - C232) * C12452) *
                         C12453 +
                     (C13156 * C12455 + C13157 * C12451 +
                      (C773 - C774) * C12457 + (C775 - C776) * C12452) *
                         C12454) *
                        C3112 +
                    (((C1340 - C1339) * C12455 + (C1342 - C1341) * C12451 +
                      (C1344 - C1343) * C12457 + (C1346 - C1345) * C12452) *
                         C12453 +
                     ((C13807 - C13806) * C12455 + (C13809 - C13808) * C12451 +
                      (C28881 * C2734 - C214 * C2616) * C12457 +
                      (C28881 * C2737 - C214 * C2622) * C12452) *
                         C12454) *
                        C28950) *
                       C28840 * C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C12509 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C12453 +
            (C13224 - C13225 + C13226 - C13227) * C12510 +
            (C13228 - C13229 + C13230 - C13231) * C12454) *
               C28881 * C3112 +
           ((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
             C12452 * C1204) *
                C12509 +
            (C12455 * C1396 - C12451 * C1400 + C12457 * C1397 -
             C12452 * C1401) *
                C12453 +
            (C15583 - C15584 + C15585 - C15586) * C12510 +
            (C15587 - C15588 + C15589 - C15590) * C12454) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C12509 +
            (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                C12453 +
            (C13232 - C13233 + C13234 - C13235) * C12510 +
            (C13236 - C13237 + C13238 - C13239) * C12454) *
               C28881 * C3112 +
           ((C12451 * C1204 - C12455 * C1199 + C12452 * C1202 -
             C12457 * C1198) *
                C12509 +
            (C12451 * C1401 - C12455 * C1397 + C12452 * C1402 -
             C12457 * C1398) *
                C12453 +
            (C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
             C12457 * C2616) *
                C12510 +
            (C12451 * C2792 - C12455 * C2789 + C12452 * C2793 -
             C12457 * C2790) *
                C12454) *
               C28881 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C12451 +
            (C12704 + C12705) * C12452) *
               C28881 * C3112 -
           ((C13954 + C13955) * C12452 +
            (C12510 * C2676 - C12678 * C2614 - C12510 * C2788 + C12454 * C2844 +
             C12509 * C1264 - C12677 * C1200 - C12509 * C1396 +
             C12453 * C1456) *
                C12451) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C13955 + C13954) * C12451 +
            (C12509 * C1266 - C12677 * C1198 - C12509 * C1398 + C12453 * C1454 +
             C12510 * C2678 - C12678 * C2616 - C12510 * C2790 +
             C12454 * C2846) *
                C12452) *
               C28881 * C28950 -
           ((C12706 + C12707) * C12452 + (C12705 + C12704) * C12451) * C28881 *
               C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12509 +
                      (C28881 * C390 - C214 * C277) * C12453 +
                      (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                         C12451 +
                     ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                      C13154 * C12510 + C13386 * C12454) *
                         C12452) *
                        C3112 +
                    (((C214 * C1200 - C28881 * C1330) * C12509 +
                      (C214 * C1396 - C28881 * C1522) * C12453 +
                      (C6792 - C6793) * C12510 + (C6962 - C6963) * C12454) *
                         C12451 +
                     ((C1339 - C1340) * C12509 + (C1527 - C1528) * C12453 +
                      (C13806 - C13807) * C12510 + (C14022 - C14023) * C12454) *
                         C12452) *
                        C28950) *
                       C28840 * C1768 +
                   ((((C227 - C226) * C12509 + (C397 - C396) * C12453 +
                      C13156 * C12510 + C13387 * C12454) *
                         C12451 +
                     ((C231 - C230) * C12509 + (C400 - C399) * C12453 +
                      (C773 - C774) * C12510 + (C959 - C960) * C12454) *
                         C12452) *
                        C3112 +
                    (((C1340 - C1339) * C12509 + (C1528 - C1527) * C12453 +
                      (C13807 - C13806) * C12510 + (C14023 - C14022) * C12454) *
                         C12451 +
                     ((C1344 - C1343) * C12509 + (C1530 - C1529) * C12453 +
                      (C28881 * C2734 - C214 * C2616) * C12510 +
                      (C28881 * C2899 - C214 * C2790) * C12454) *
                         C12452) *
                        C28950) *
                       C28840 * C28946)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C214 +
             (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                 C28881) *
                C12453 +
            ((C13224 - C13225 + C13226 - C13227) * C214 +
             (C13454 - C13455 + C13456 - C13457) * C28881) *
                C12454) *
               C3112 +
           (((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
              C12452 * C1204) *
                 C214 +
             (C12455 * C1580 - C12451 * C1584 + C12457 * C1581 -
              C12452 * C1585) *
                 C28881) *
                C12453 +
            ((C15583 - C15584 + C15585 - C15586) * C214 +
             (C15789 - C15790 + C15791 - C15792) * C28881) *
                C12454) *
               C28950) *
              C28840 * C1768 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C214 +
             (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                 C28881) *
                C12453 +
            ((C13232 - C13233 + C13234 - C13235) * C214 +
             (C13458 - C13459 + C13460 - C13461) * C28881) *
                C12454) *
               C3112 +
           (((C12451 * C1204 - C12455 * C1199 + C12452 * C1202 -
              C12457 * C1198) *
                 C214 +
             (C12451 * C1585 - C12455 * C1581 + C12452 * C1586 -
              C12457 * C1582) *
                 C28881) *
                C12453 +
            ((C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
              C12457 * C2616) *
                 C214 +
             (C12451 * C2954 - C12455 * C2951 + C12452 * C2955 -
              C12457 * C2952) *
                 C28881) *
                C12454) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C214 +
             (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                 C28881) *
                C12451 +
            ((C12512 - C12513 + C12514 - C12515) * C214 +
             (C12858 - C12859 + C12860 - C12861) * C28881) *
                C12452) *
               C3112 +
           (((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
              C12454 * C2676) *
                 C214 +
             (C12509 * C1580 - C12453 * C1638 + C12510 * C2950 -
              C12454 * C3006) *
                 C28881) *
                C12451 +
            ((C13732 - C13733 + C13734 - C13735) * C214 +
             (C14156 - C14157 + C14158 - C14159) * C28881) *
                C12452) *
               C28950) *
              C28840 * C1768 +
          ((((C12513 - C12512 + C12515 - C12514) * C214 +
             (C12859 - C12858 + C12861 - C12860) * C28881) *
                C12451 +
            ((C12520 - C12521 + C12522 - C12523) * C214 +
             (C12862 - C12863 + C12864 - C12865) * C28881) *
                C12452) *
               C3112 +
           (((C13733 - C13732 + C13735 - C13734) * C214 +
             (C14157 - C14156 + C14159 - C14158) * C28881) *
                C12451 +
            ((C12453 * C1266 - C12509 * C1198 + C12454 * C2678 -
              C12510 * C2616) *
                 C214 +
             (C12453 * C1640 - C12509 * C1582 + C12454 * C3008 -
              C12510 * C2952) *
                 C28881) *
                C12452) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
             C5286 * C12454) *
                C12451 +
            (C12916 + C12917) * C12452) *
               C3112 -
           ((C14234 + C14230) * C12452 +
            (C7137 * C12454 +
             (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                 C12453) *
                C12451) *
               C28950) *
              C28840 * C1768 +
          (((C14230 + C14234) * C12451 +
            (C1713 * C12453 +
             (C214 * C2734 - C544 * C2616 - C214 * C2952 + C28881 * C3061) *
                 C12454) *
                C12452) *
               C28950 -
           ((C12918 + C12919) * C12452 + (C12917 + C12916) * C12451) * C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C28881 * C12453 +
            (C13010 + C13011) * C28881 * C12454) *
               C3112 -
           ((C15383 + C15384) * C28881 * C12454 +
            (C12457 * C1204 - C12458 * C1199 - C12457 * C1205 + C12452 * C1211 +
             C12455 * C1206 - C12456 * C1200 - C12455 * C1207 +
             C12451 * C1212) *
                C28881 * C12453) *
               C28950) *
              C624 +
          (((C15384 + C15383) * C28881 * C12453 +
            (C12455 * C5340 - C12456 * C5338 - C12455 * C5341 + C12451 * C5344 +
             C12457 * C5342 - C12458 * C5339 - C12457 * C5343 +
             C12452 * C5345) *
                C28881 * C12454) *
               C28950 -
           ((C14891 + C14892) * C28881 * C12454 +
            (C13011 + C13010) * C28881 * C12453) *
               C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C12455 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C12451 +
            (C12512 - C12513 + C12514 - C12515) * C12457 +
            (C12516 - C12517 + C12518 - C12519) * C12452) *
               C28881 * C3112 +
           ((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
             C12454 * C2676) *
                C12455 +
            (C12509 * C1207 - C12453 * C1268 + C12510 * C2618 -
             C12454 * C2679) *
                C12451 +
            (C13732 - C13733 + C13734 - C13735) * C12457 +
            (C13736 - C13737 + C13738 - C13739) * C12452) *
               C28881 * C28950) *
              C624 +
          (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C12455 +
            (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                C12451 +
            (C13080 - C13081 + C13082 - C13083) * C12457 +
            (C13084 - C13085 + C13086 - C13087) * C12452) *
               C28881 * C3112 +
           ((C12453 * C2676 - C12509 * C2614 + C12454 * C5396 -
             C12510 * C5338) *
                C12455 +
            (C12453 * C2679 - C12509 * C2618 + C12454 * C5398 -
             C12510 * C5341) *
                C12451 +
            (C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
             C12510 * C5339) *
                C12457 +
            (C12453 * C2680 - C12509 * C2620 + C12454 * C5399 -
             C12510 * C5343) *
                C12452) *
               C28881 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12455 +
                      (C28881 * C220 - C214 * C99) * C12451 +
                      (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                         C12453 +
                     ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                      C13154 * C12457 + C13155 * C12452) *
                         C12454) *
                        C3112 +
                    (((C214 * C1200 - C28881 * C1330) * C12455 +
                      (C214 * C1207 - C28881 * C1334) * C12451 +
                      (C1339 - C1340) * C12457 + (C1341 - C1342) * C12452) *
                         C12453 +
                     ((C6792 - C6793) * C12455 + (C6794 - C6795) * C12451 +
                      (C13806 - C13807) * C12457 + (C13808 - C13809) * C12452) *
                         C12454) *
                        C28950) *
                       C624 +
                   ((((C4911 - C4910) * C12455 + (C4913 - C4912) * C12451 +
                      C13156 * C12457 + C13157 * C12452) *
                         C12453 +
                     ((C4915 - C4914) * C12455 + (C4917 - C4916) * C12451 +
                      (C4918 - C4919) * C12457 + (C4920 - C4921) * C12452) *
                         C12454) *
                        C3112 +
                    (((C6793 - C6792) * C12455 + (C6795 - C6794) * C12451 +
                      (C13807 - C13806) * C12457 + (C13809 - C13808) * C12452) *
                         C12453 +
                     ((C6797 - C6796) * C12455 + (C6799 - C6798) * C12451 +
                      (C28881 * C5451 - C214 * C5339) * C12457 +
                      (C28881 * C5453 - C214 * C5343) * C12452) *
                         C12454) *
                        C28950) *
                       C28948) *
                  C28806) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C12509 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C12453 +
            (C13224 - C13225 + C13226 - C13227) * C12510 +
            (C13228 - C13229 + C13230 - C13231) * C12454) *
               C28881 * C3112 +
           ((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
             C12452 * C1204) *
                C12509 +
            (C12455 * C1396 - C12451 * C1400 + C12457 * C1397 -
             C12452 * C1401) *
                C12453 +
            (C15583 - C15584 + C15585 - C15586) * C12510 +
            (C15587 - C15588 + C15589 - C15590) * C12454) *
               C28881 * C28950) *
              C624 +
          (((C13225 - C13224 + C13227 - C13226) * C12509 +
            (C13229 - C13228 + C13231 - C13230) * C12453 +
            (C15043 - C15044 + C15045 - C15046) * C12510 +
            (C15047 - C15048 + C15049 - C15050) * C12454) *
               C28881 * C3112 +
           ((C15584 - C15583 + C15586 - C15585) * C12509 +
            (C15588 - C15587 + C15590 - C15589) * C12453 +
            (C12451 * C5340 - C12455 * C5338 + C12452 * C5342 -
             C12457 * C5339) *
                C12510 +
            (C12451 * C5506 - C12455 * C5504 + C12452 * C5507 -
             C12457 * C5505) *
                C12454) *
               C28881 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C12451 +
            (C12704 + C12705) * C12452) *
               C28881 * C3112 -
           ((C13954 + C13955) * C12452 +
            (C12510 * C2676 - C12678 * C2614 - C12510 * C2788 + C12454 * C2844 +
             C12509 * C1264 - C12677 * C1200 - C12509 * C1396 +
             C12453 * C1456) *
                C12451) *
               C28881 * C28950) *
              C624 +
          (((C12509 * C2676 - C12677 * C2614 - C12509 * C2788 + C12453 * C2844 +
             C12510 * C5396 - C12678 * C5338 - C12510 * C5504 +
             C12454 * C5558) *
                C12451 +
            (C12509 * C2677 - C12677 * C2615 - C12509 * C2789 + C12453 * C2845 +
             C12510 * C5397 - C12678 * C5339 - C12510 * C5505 +
             C12454 * C5559) *
                C12452) *
               C28881 * C28950 -
           ((C13318 + C13319) * C12452 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C12451) *
               C28881 * C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C28881 * C215 - C214 * C93) * C12509 +
                      (C28881 * C390 - C214 * C277) * C12453 +
                      (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                         C12451 +
                     ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                      C13154 * C12510 + C13386 * C12454) *
                         C12452) *
                        C3112 +
                    (((C214 * C1200 - C28881 * C1330) * C12509 +
                      (C214 * C1396 - C28881 * C1522) * C12453 +
                      (C6792 - C6793) * C12510 + (C6962 - C6963) * C12454) *
                         C12451 +
                     ((C1339 - C1340) * C12509 + (C1527 - C1528) * C12453 +
                      (C13806 - C13807) * C12510 + (C14022 - C14023) * C12454) *
                         C12452) *
                        C28950) *
                       C624 +
                   ((((C4911 - C4910) * C12509 + (C5097 - C5096) * C12453 +
                      (C4915 - C4914) * C12510 + (C5099 - C5098) * C12454) *
                         C12451 +
                     (C13156 * C12509 + C13387 * C12453 +
                      (C4918 - C4919) * C12510 + (C5100 - C5101) * C12454) *
                         C12452) *
                        C3112 +
                    (((C6793 - C6792) * C12509 + (C6963 - C6962) * C12453 +
                      (C6797 - C6796) * C12510 + (C6965 - C6964) * C12454) *
                         C12451 +
                     ((C13807 - C13806) * C12509 + (C14023 - C14022) * C12453 +
                      (C28881 * C5451 - C214 * C5339) * C12510 +
                      (C28881 * C5611 - C214 * C5505) * C12454) *
                         C12452) *
                        C28950) *
                       C28948) *
                  C28806) /
                 (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C214 +
             (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                 C28881) *
                C12453 +
            ((C13224 - C13225 + C13226 - C13227) * C214 +
             (C13454 - C13455 + C13456 - C13457) * C28881) *
                C12454) *
               C3112 +
           (((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
              C12452 * C1204) *
                 C214 +
             (C12455 * C1580 - C12451 * C1584 + C12457 * C1581 -
              C12452 * C1585) *
                 C28881) *
                C12453 +
            ((C15583 - C15584 + C15585 - C15586) * C214 +
             (C15789 - C15790 + C15791 - C15792) * C28881) *
                C12454) *
               C28950) *
              C624 +
          ((((C13225 - C13224 + C13227 - C13226) * C214 +
             (C13455 - C13454 + C13457 - C13456) * C28881) *
                C12453 +
            ((C15043 - C15044 + C15045 - C15046) * C214 +
             (C15201 - C15202 + C15203 - C15204) * C28881) *
                C12454) *
               C3112 +
           (((C15584 - C15583 + C15586 - C15585) * C214 +
             (C15790 - C15789 + C15792 - C15791) * C28881) *
                C12453 +
            ((C12451 * C5340 - C12455 * C5338 + C12452 * C5342 -
              C12457 * C5339) *
                 C214 +
             (C12451 * C5664 - C12455 * C5662 + C12452 * C5665 -
              C12457 * C5663) *
                 C28881) *
                C12454) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C214 +
             (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                 C28881) *
                C12451 +
            ((C12512 - C12513 + C12514 - C12515) * C214 +
             (C12858 - C12859 + C12860 - C12861) * C28881) *
                C12452) *
               C3112 +
           (((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
              C12454 * C2676) *
                 C214 +
             (C12509 * C1580 - C12453 * C1638 + C12510 * C2950 -
              C12454 * C3006) *
                 C28881) *
                C12451 +
            ((C13732 - C13733 + C13734 - C13735) * C214 +
             (C14156 - C14157 + C14158 - C14159) * C28881) *
                C12452) *
               C28950) *
              C624 +
          ((((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C214 +
             (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
              C12454 * C2520) *
                 C28881) *
                C12451 +
            ((C13080 - C13081 + C13082 - C13083) * C214 +
             (C13528 - C13529 + C13530 - C13531) * C28881) *
                C12452) *
               C3112 +
           (((C12453 * C2676 - C12509 * C2614 + C12454 * C5396 -
              C12510 * C5338) *
                 C214 +
             (C12453 * C3006 - C12509 * C2950 + C12454 * C5716 -
              C12510 * C5662) *
                 C28881) *
                C12451 +
            ((C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
              C12510 * C5339) *
                 C214 +
             (C12453 * C3007 - C12509 * C2951 + C12454 * C5717 -
              C12510 * C5663) *
                 C28881) *
                C12452) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
             C5286 * C12454) *
                C12451 +
            (C12916 + C12917) * C12452) *
               C3112 -
           ((C14234 + C14230) * C12452 +
            (C7137 * C12454 +
             (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                 C12453) *
                C12451) *
               C28950) *
              C624 +
          (((C7137 * C12453 + C7136 * C12454) * C12451 +
            (C14233 * C12453 +
             (C214 * C5451 - C544 * C5339 - C214 * C5663 + C28881 * C5769) *
                 C12454) *
                C12452) *
               C28950 -
           ((C13598 + C13599) * C12452 +
            (C5287 * C12454 + C5286 * C12453) * C12451) *
               C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
            C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
               C28881 * C12453 +
           (C13010 + C13011) * C28881 * C12454) *
              C4002 -
          ((C15383 + C15384) * C28881 * C12454 +
           (C12457 * C1204 - C12458 * C1199 - C12457 * C1205 + C12452 * C1211 +
            C12455 * C1206 - C12456 * C1200 - C12455 * C1207 + C12451 * C1212) *
               C28881 * C12453) *
              C4003 +
          ((C12455 * C4008 - C12456 * C4005 - C12455 * C4009 + C12451 * C4014 +
            C12457 * C4010 - C12458 * C4006 - C12457 * C4011 + C12452 * C4015) *
               C28881 * C12453 +
           (C12455 * C8077 - C12456 * C8075 - C12455 * C8078 + C12451 * C8081 +
            C12457 * C8813 - C12458 * C8812 - C12457 * C8814 + C12452 * C8815) *
               C28881 * C12454) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
               C12455 +
           (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
               C12451 +
           (C12512 - C12513 + C12514 - C12515) * C12457 +
           (C12516 - C12517 + C12518 - C12519) * C12452) *
              C28881 * C4002 +
          ((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 - C12454 * C2676) *
               C12455 +
           (C12509 * C1207 - C12453 * C1268 + C12510 * C2618 - C12454 * C2679) *
               C12451 +
           (C13732 - C13733 + C13734 - C13735) * C12457 +
           (C13736 - C13737 + C13738 - C13739) * C12452) *
              C28881 * C4003 +
          ((C12453 * C4055 - C12509 * C4005 + C12454 * C8121 - C12510 * C8075) *
               C12455 +
           (C12453 * C4058 - C12509 * C4009 + C12454 * C8123 - C12510 * C8078) *
               C12451 +
           (C12453 * C4056 - C12509 * C4006 + C12454 * C8866 - C12510 * C8812) *
               C12457 +
           (C12453 * C4059 - C12509 * C4011 + C12454 * C8867 - C12510 * C8814) *
               C12452) *
              C28881 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28881 * C215 - C214 * C93) * C12455 +
                     (C28881 * C220 - C214 * C99) * C12451 +
                     (C226 - C227) * C12457 + (C228 - C229) * C12452) *
                        C12453 +
                    ((C4910 - C4911) * C12455 + (C4912 - C4913) * C12451 +
                     C13154 * C12457 + C13155 * C12452) *
                        C12454) *
                       C4002 +
                   (((C214 * C1200 - C28881 * C1330) * C12455 +
                     (C214 * C1207 - C28881 * C1334) * C12451 +
                     (C1339 - C1340) * C12457 + (C1341 - C1342) * C12452) *
                        C12453 +
                    ((C6792 - C6793) * C12455 + (C6794 - C6795) * C12451 +
                     (C13806 - C13807) * C12457 + (C13808 - C13809) * C12452) *
                        C12454) *
                       C4003 +
                   (((C28881 * C4099 - C214 * C4005) * C12455 +
                     (C28881 * C4102 - C214 * C4009) * C12451 +
                     (C28881 * C4100 - C214 * C4006) * C12457 +
                     (C28881 * C4103 - C214 * C4011) * C12452) *
                        C12453 +
                    ((C28881 * C8163 - C214 * C8075) * C12455 +
                     (C28881 * C8165 - C214 * C8078) * C12451 +
                     (C28881 * C8918 - C214 * C8812) * C12457 +
                     (C28881 * C8919 - C214 * C8814) * C12452) *
                        C12454) *
                       C4004) *
                  C28840 * C28806) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
               C12509 +
           (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
               C12453 +
           (C13224 - C13225 + C13226 - C13227) * C12510 +
           (C13228 - C13229 + C13230 - C13231) * C12454) *
              C28881 * C4002 +
          ((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 - C12452 * C1204) *
               C12509 +
           (C12455 * C1396 - C12451 * C1400 + C12457 * C1397 - C12452 * C1401) *
               C12453 +
           (C15583 - C15584 + C15585 - C15586) * C12510 +
           (C15587 - C15588 + C15589 - C15590) * C12454) *
              C28881 * C4003 +
          ((C12451 * C4008 - C12455 * C4005 + C12452 * C4010 - C12457 * C4006) *
               C12509 +
           (C12451 * C4146 - C12455 * C4143 + C12452 * C4147 - C12457 * C4144) *
               C12453 +
           (C12451 * C8077 - C12455 * C8075 + C12452 * C8813 - C12457 * C8812) *
               C12510 +
           (C12451 * C8207 - C12455 * C8205 + C12452 * C8971 - C12457 * C8970) *
               C12454) *
              C28881 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
            C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
               C12451 +
           (C12704 + C12705) * C12452) *
              C28881 * C4002 -
          ((C13954 + C13955) * C12452 +
           (C12510 * C2676 - C12678 * C2614 - C12510 * C2788 + C12454 * C2844 +
            C12509 * C1264 - C12677 * C1200 - C12509 * C1396 + C12453 * C1456) *
               C12451) *
              C28881 * C4003 +
          ((C12509 * C4055 - C12677 * C4005 - C12509 * C4143 + C12453 * C4187 +
            C12510 * C8121 - C12678 * C8075 - C12510 * C8205 + C12454 * C8247) *
               C12451 +
           (C12509 * C4056 - C12677 * C4006 - C12509 * C4144 + C12453 * C4188 +
            C12510 * C8866 - C12678 * C8812 - C12510 * C8970 + C12454 * C9022) *
               C12452) *
              C28881 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28881 * C215 - C214 * C93) * C12509 +
                     (C28881 * C390 - C214 * C277) * C12453 +
                     (C4910 - C4911) * C12510 + (C5096 - C5097) * C12454) *
                        C12451 +
                    ((C226 - C227) * C12509 + (C396 - C397) * C12453 +
                     C13154 * C12510 + C13386 * C12454) *
                        C12452) *
                       C4002 +
                   (((C214 * C1200 - C28881 * C1330) * C12509 +
                     (C214 * C1396 - C28881 * C1522) * C12453 +
                     (C6792 - C6793) * C12510 + (C6962 - C6963) * C12454) *
                        C12451 +
                    ((C1339 - C1340) * C12509 + (C1527 - C1528) * C12453 +
                     (C13806 - C13807) * C12510 + (C14022 - C14023) * C12454) *
                        C12452) *
                       C4003 +
                   (((C28881 * C4099 - C214 * C4005) * C12509 +
                     (C28881 * C4228 - C214 * C4143) * C12453 +
                     (C28881 * C8163 - C214 * C8075) * C12510 +
                     (C28881 * C8287 - C214 * C8205) * C12454) *
                        C12451 +
                    ((C28881 * C4100 - C214 * C4006) * C12509 +
                     (C28881 * C4229 - C214 * C4144) * C12453 +
                     (C28881 * C8918 - C214 * C8812) * C12510 +
                     (C28881 * C9073 - C214 * C8970) * C12454) *
                        C12452) *
                       C4004) *
                  C28840 * C28806) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C214 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C28881) *
               C12453 +
           ((C13224 - C13225 + C13226 - C13227) * C214 +
            (C13454 - C13455 + C13456 - C13457) * C28881) *
               C12454) *
              C4002 +
          (((C12455 * C1200 - C12451 * C1206 + C12457 * C1199 -
             C12452 * C1204) *
                C214 +
            (C12455 * C1580 - C12451 * C1584 + C12457 * C1581 -
             C12452 * C1585) *
                C28881) *
               C12453 +
           ((C15583 - C15584 + C15585 - C15586) * C214 +
            (C15789 - C15790 + C15791 - C15792) * C28881) *
               C12454) *
              C4003 +
          (((C12451 * C4008 - C12455 * C4005 + C12452 * C4010 -
             C12457 * C4006) *
                C214 +
            (C12451 * C4272 - C12455 * C4269 + C12452 * C4273 -
             C12457 * C4270) *
                C28881) *
               C12453 +
           ((C12451 * C8077 - C12455 * C8075 + C12452 * C8813 -
             C12457 * C8812) *
                C214 +
            (C12451 * C8329 - C12455 * C8327 + C12452 * C9125 -
             C12457 * C9124) *
                C28881) *
               C12454) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C214 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C28881) *
               C12451 +
           ((C12512 - C12513 + C12514 - C12515) * C214 +
            (C12858 - C12859 + C12860 - C12861) * C28881) *
               C12452) *
              C4002 +
          (((C12509 * C1200 - C12453 * C1264 + C12510 * C2614 -
             C12454 * C2676) *
                C214 +
            (C12509 * C1580 - C12453 * C1638 + C12510 * C2950 -
             C12454 * C3006) *
                C28881) *
               C12451 +
           ((C13732 - C13733 + C13734 - C13735) * C214 +
            (C14156 - C14157 + C14158 - C14159) * C28881) *
               C12452) *
              C4003 +
          (((C12453 * C4055 - C12509 * C4005 + C12454 * C8121 -
             C12510 * C8075) *
                C214 +
            (C12453 * C4313 - C12509 * C4269 + C12454 * C8369 -
             C12510 * C8327) *
                C28881) *
               C12451 +
           ((C12453 * C4056 - C12509 * C4006 + C12454 * C8866 -
             C12510 * C8812) *
                C214 +
            (C12453 * C4314 - C12509 * C4270 + C12454 * C9176 -
             C12510 * C9124) *
                C28881) *
               C12452) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C12453 +
            C5286 * C12454) *
               C12451 +
           (C12916 + C12917) * C12452) *
              C4002 -
          ((C14234 + C14230) * C12452 +
           (C7137 * C12454 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C12453) *
               C12451) *
              C4003 +
          (((C214 * C4099 - C544 * C4005 - C214 * C4269 + C28881 * C4354) *
                C12453 +
            (C214 * C8163 - C544 * C8075 - C214 * C8327 + C28881 * C8409) *
                C12454) *
               C12451 +
           ((C214 * C4100 - C544 * C4006 - C214 * C4270 + C28881 * C4355) *
                C12453 +
            (C214 * C8918 - C544 * C8812 - C214 * C9124 + C28881 * C9227) *
                C12454) *
               C12452) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C17612 +
            C9311 * C17613) *
               C12453 +
           (C4794 * C17612 + C6685 * C17613) * C12454) *
              C28857 * C28840 * C84 -
          (((C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C17613 +
            C4796 * C17612) *
               C12454 +
           (C9313 * C17613 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C17612) *
               C12453) *
              C28857 * C28840 * C85 +
          (((C4399 * C102 - C4400 * C95 - C4399 * C103 + C28784 * C110) *
                C17612 +
            (C4399 * C1202 - C4400 * C1198 - C4399 * C1203 + C28784 * C1210) *
                C17613) *
               C12453 +
           ((C4399 * C632 - C4400 * C628 - C4399 * C633 + C28784 * C640) *
                C17612 +
            (C4399 * C2621 - C4400 * C2616 - C4399 * C2622 + C28784 * C2625) *
                C17613) *
               C12454) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C4399 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C28784) *
               C17612 +
           ((C12453 * C1264 - C12509 * C1200 + C12454 * C2676 -
             C12510 * C2614) *
                C4399 +
            (C12453 * C1268 - C12509 * C1207 + C12454 * C2679 -
             C12510 * C2618) *
                C28784) *
               C17613) *
              C28857 * C28840 * C84 +
          (((C12513 - C12512 + C12515 - C12514) * C4399 +
            (C12517 - C12516 + C12519 - C12518) * C28784) *
               C17612 +
           ((C13732 - C13733 + C13734 - C13735) * C4399 +
            (C13736 - C13737 + C13738 - C13739) * C28784) *
               C17613) *
              C28857 * C28840 * C85 +
          (((C12521 - C12520 + C12523 - C12522) * C4399 +
            (C12525 - C12524 + C12527 - C12526) * C28784) *
               C17612 +
           ((C12453 * C1266 - C12509 * C1198 + C12454 * C2678 -
             C12510 * C2616) *
                C4399 +
            (C12453 * C1270 - C12509 * C1203 + C12454 * C2681 -
             C12510 * C2622) *
                C28784) *
               C17613) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C4399 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C28784) *
               C12453 +
           ((C17612 * C760 - C17714 * C630 + C17613 * C2732 - C17715 * C2614) *
                C4399 +
            (C17612 * C764 - C17714 * C637 + C17613 * C2735 - C17715 * C2618) *
                C28784) *
               C12454) *
              C28857 * C28840 * C84 +
          (((C17718 - C17717 + C17720 - C17719) * C4399 +
            (C17722 - C17721 + C17724 - C17723) * C28784) *
               C12453 +
           ((C18273 - C18274 + C18275 - C18276) * C4399 +
            (C18277 - C18278 + C18279 - C18280) * C28784) *
               C12454) *
              C28857 * C28840 * C85 +
          (((C17726 - C17725 + C17728 - C17727) * C4399 +
            (C17730 - C17729 + C17732 - C17731) * C28784) *
               C12453 +
           ((C17612 * C762 - C17714 * C628 + C17613 * C2734 - C17715 * C2616) *
                C4399 +
            (C17612 * C766 - C17714 * C633 + C17613 * C2737 - C17715 * C2622) *
                C28784) *
               C12454) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28784 * C98 - C4399 * C93) * C12509 +
                     (C28784 * C282 - C4399 * C277) * C12453 +
                     (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                        C17612 +
                    ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
                     (C6853 - C6852) * C12510 + (C6855 - C6854) * C12454) *
                        C17613) *
                       C28857 * C28840 * C84 +
                   (((C4399 * C94 - C28784 * C100) * C12509 +
                     (C4399 * C278 - C28784 * C283) * C12453 +
                     (C4984 - C4985) * C12510 + (C4986 - C4987) * C12454) *
                        C17612 +
                    ((C9497 - C9498) * C12509 + (C9499 - C9500) * C12453 +
                     (C4399 * C2615 - C28784 * C2619) * C12510 +
                     (C4399 * C2789 - C28784 * C2792) * C12454) *
                        C17613) *
                       C28857 * C28840 * C85 +
                   (((C28784 * C102 - C4399 * C95) * C12509 +
                     (C28784 * C284 - C4399 * C279) * C12453 +
                     (C28784 * C632 - C4399 * C628) * C12510 +
                     (C28784 * C832 - C4399 * C828) * C12454) *
                        C17612 +
                    ((C28784 * C1202 - C4399 * C1198) * C12509 +
                     (C28784 * C1402 - C4399 * C1398) * C12453 +
                     (C28784 * C2621 - C4399 * C2616) * C12510 +
                     (C28784 * C2793 - C4399 * C2790) * C12454) *
                        C17613) *
                       C28857 * C28840 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
            C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
               C28784 * C17612 +
           (C12509 * C1264 - C12677 * C1200 - C12509 * C1396 + C12453 * C1456 +
            C12510 * C2676 - C12678 * C2614 - C12510 * C2788 + C12454 * C2844) *
               C28784 * C17613) *
              C28857 * C28840 * C84 -
          ((C13954 + C13955) * C28784 * C17613 +
           (C12705 + C12704) * C28784 * C17612) *
              C28857 * C28840 * C85 +
          ((C12707 + C12706) * C28784 * C17612 +
           (C12509 * C1266 - C12677 * C1198 - C12509 * C1398 + C12453 * C1454 +
            C12510 * C2678 - C12678 * C2616 - C12510 * C2790 + C12454 * C2846) *
               C28784 * C17613) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
               C12509 +
           (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
               C12453 +
           (C17612 * C760 - C17714 * C630 + C17613 * C2732 - C17715 * C2614) *
               C12510 +
           (C17612 * C952 - C17714 * C826 + C17613 * C2897 - C17715 * C2788) *
               C12454) *
              C28784 * C28857 * C28840 * C84 +
          ((C17718 - C17717 + C17720 - C17719) * C12509 +
           (C17884 - C17883 + C17886 - C17885) * C12453 +
           (C18273 - C18274 + C18275 - C18276) * C12510 +
           (C18486 - C18487 + C18488 - C18489) * C12454) *
              C28784 * C28857 * C28840 * C85 +
          ((C17726 - C17725 + C17728 - C17727) * C12509 +
           (C17888 - C17887 + C17890 - C17889) * C12453 +
           (C17612 * C762 - C17714 * C628 + C17613 * C2734 - C17715 * C2616) *
               C12510 +
           (C17612 * C954 - C17714 * C828 + C17613 * C2899 - C17715 * C2790) *
               C12454) *
              C28784 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C28784 * C98 - C4399 * C93) * C17714 +
                     (C28784 * C448 - C4399 * C443) * C17612 +
                     (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                        C12453 +
                    ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
                     (C6853 - C6852) * C17715 + (C7019 - C7018) * C17613) *
                        C12454) *
                       C28857 * C28840 * C84 +
                   (((C4399 * C94 - C28784 * C100) * C17714 +
                     (C4399 * C444 - C28784 * C449) * C17612 +
                     (C9497 - C9498) * C17715 + (C9692 - C9693) * C17613) *
                        C12453 +
                    ((C4984 - C4985) * C17714 + (C5160 - C5161) * C17612 +
                     (C4399 * C2615 - C28784 * C2619) * C17715 +
                     (C4399 * C2951 - C28784 * C2954) * C17613) *
                        C12454) *
                       C28857 * C28840 * C85 +
                   (((C28784 * C102 - C4399 * C95) * C17714 +
                     (C28784 * C450 - C4399 * C445) * C17612 +
                     (C28784 * C1202 - C4399 * C1198) * C17715 +
                     (C28784 * C1586 - C4399 * C1582) * C17613) *
                        C12453 +
                    ((C28784 * C632 - C4399 * C628) * C17714 +
                     (C28784 * C1016 - C4399 * C1012) * C17612 +
                     (C28784 * C2621 - C4399 * C2616) * C17715 +
                     (C28784 * C2955 - C4399 * C2952) * C17613) *
                        C12454) *
                       C28857 * C28840 * C86)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
               C17714 +
           (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
               C17612 +
           (C12453 * C1264 - C12509 * C1200 + C12454 * C2676 - C12510 * C2614) *
               C17715 +
           (C12453 * C1638 - C12509 * C1580 + C12454 * C3006 - C12510 * C2950) *
               C17613) *
              C28784 * C28857 * C28840 * C84 +
          ((C12513 - C12512 + C12515 - C12514) * C17714 +
           (C12859 - C12858 + C12861 - C12860) * C17612 +
           (C13732 - C13733 + C13734 - C13735) * C17715 +
           (C14156 - C14157 + C14158 - C14159) * C17613) *
              C28784 * C28857 * C28840 * C85 +
          ((C12521 - C12520 + C12523 - C12522) * C17714 +
           (C12863 - C12862 + C12865 - C12864) * C17612 +
           (C12453 * C1266 - C12509 * C1198 + C12454 * C2678 - C12510 * C2616) *
               C17715 +
           (C12453 * C1640 - C12509 * C1582 + C12454 * C3008 - C12510 * C2952) *
               C17613) *
              C28784 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
            C17715 * C1330 - C18041 * C1200 - C17715 * C1580 + C17613 * C1698) *
               C12453 +
           (C17714 * C760 - C18040 * C630 - C17714 * C1010 + C17612 * C1128 +
            C17715 * C2732 - C18041 * C2614 - C17715 * C2950 + C17613 * C3059) *
               C12454) *
              C28784 * C28857 * C28840 * C84 -
          ((C18702 + C18703) * C12454 + (C18068 + C18067) * C12453) * C28784 *
              C28857 * C28840 * C85 +
          ((C18070 + C18069) * C12453 +
           (C17714 * C762 - C18040 * C628 - C17714 * C1012 + C17612 * C1126 +
            C17715 * C2734 - C18041 * C2616 - C17715 * C2952 + C17613 * C3061) *
               C12454) *
              C28784 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) *
                 C17612 +
             C9311 * C17613) *
                C12453 +
            (C23208 + C23209) * C12454) *
               C28857 * C624 -
           ((C6684 * C17613 + C4795 * C17612) * C12454 +
            (C23209 + C23208) * C12453) *
               C28857 * C28948) *
              C626 +
          (((C23210 + C23218) * C12453 +
            (C4797 * C17612 +
             (C4399 * C5342 - C4400 * C5339 - C4399 * C5343 + C28784 * C5345) *
                 C17613) *
                C12454) *
               C28857 * C28948 -
           ((C23218 + C23210) * C12454 +
            (C9313 * C17613 +
             (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                 C17612) *
                C12453) *
               C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C4399 +
             (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                 C28784) *
                C17612 +
            ((C12453 * C1264 - C12509 * C1200 + C12454 * C2676 -
              C12510 * C2614) *
                 C4399 +
             (C12453 * C1268 - C12509 * C1207 + C12454 * C2679 -
              C12510 * C2618) *
                 C28784) *
                C17613) *
               C28857 * C624 +
           (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C4399 +
             (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                 C28784) *
                C17612 +
            ((C12509 * C2614 - C12453 * C2676 + C12510 * C5338 -
              C12454 * C5396) *
                 C4399 +
             (C12509 * C2618 - C12453 * C2679 + C12510 * C5341 -
              C12454 * C5398) *
                 C28784) *
                C17613) *
               C28857 * C28948) *
              C626 +
          ((((C12513 - C12512 + C12515 - C12514) * C4399 +
             (C12517 - C12516 + C12519 - C12518) * C28784) *
                C17612 +
            ((C13732 - C13733 + C13734 - C13735) * C4399 +
             (C13736 - C13737 + C13738 - C13739) * C28784) *
                C17613) *
               C28857 * C624 +
           (((C13081 - C13080 + C13083 - C13082) * C4399 +
             (C13085 - C13084 + C13087 - C13086) * C28784) *
                C17612 +
            ((C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
              C12510 * C5339) *
                 C4399 +
             (C12453 * C2680 - C12509 * C2620 + C12454 * C5399 -
              C12510 * C5343) *
                 C28784) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C4399 +
             (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                 C28784) *
                C12453 +
            ((C23351 - C23352 + C23353 - C23354) * C4399 +
             (C23355 - C23356 + C23357 - C23358) * C28784) *
                C12454) *
               C28857 * C624 +
           (((C23352 - C23351 + C23354 - C23353) * C4399 +
             (C23356 - C23355 + C23358 - C23357) * C28784) *
                C12453 +
            ((C17714 * C2212 - C17612 * C2306 + C17715 * C5338 -
              C17613 * C5450) *
                 C4399 +
             (C17714 * C2216 - C17612 * C2309 + C17715 * C5341 -
              C17613 * C5452) *
                 C28784) *
                C12454) *
               C28857 * C28948) *
              C626 +
          ((((C17718 - C17717 + C17720 - C17719) * C4399 +
             (C17722 - C17721 + C17724 - C17723) * C28784) *
                C12453 +
            ((C18273 - C18274 + C18275 - C18276) * C4399 +
             (C18277 - C18278 + C18279 - C18280) * C28784) *
                C12454) *
               C28857 * C624 +
           (((C18274 - C18273 + C18276 - C18275) * C4399 +
             (C18278 - C18277 + C18280 - C18279) * C28784) *
                C12453 +
            ((C17612 * C2307 - C17714 * C2213 + C17613 * C5451 -
              C17715 * C5339) *
                 C4399 +
             (C17612 * C2310 - C17714 * C2218 + C17613 * C5453 -
              C17715 * C5343) *
                 C28784) *
                C12454) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C12509 +
             (C28784 * C282 - C4399 * C277) * C12453 +
             (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                C17612 +
            ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
             (C6853 - C6852) * C12510 + (C6855 - C6854) * C12454) *
                C17613) *
               C28857 * C624 +
           (((C4977 - C4976) * C12509 + (C4979 - C4978) * C12453 +
             (C4981 - C4980) * C12510 + (C4983 - C4982) * C12454) *
                C17612 +
            ((C6852 - C6853) * C12509 + (C6854 - C6855) * C12453 +
             (C6856 - C6857) * C12510 + (C6858 - C6859) * C12454) *
                C17613) *
               C28857 * C28948) *
              C626 +
          ((((C4399 * C94 - C28784 * C100) * C12509 +
             (C4399 * C278 - C28784 * C283) * C12453 +
             (C4984 - C4985) * C12510 + (C4986 - C4987) * C12454) *
                C17612 +
            ((C9497 - C9498) * C12509 + (C9499 - C9500) * C12453 +
             (C23425 - C23426) * C12510 + (C23427 - C23428) * C12454) *
                C17613) *
               C28857 * C624 +
           (((C4985 - C4984) * C12509 + (C4987 - C4986) * C12453 +
             (C4989 - C4988) * C12510 + (C4991 - C4990) * C12454) *
                C17612 +
            ((C23426 - C23425) * C12509 + (C23428 - C23427) * C12453 +
             (C28784 * C5342 - C4399 * C5339) * C12510 +
             (C28784 * C5507 - C4399 * C5505) * C12454) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C28784 * C17612 +
            (C12509 * C1264 - C12677 * C1200 - C12509 * C1396 + C12453 * C1456 +
             C12510 * C2676 - C12678 * C2614 - C12510 * C2788 +
             C12454 * C2844) *
                C28784 * C17613) *
               C28857 * C624 -
           ((C12510 * C5396 - C12678 * C5338 - C12510 * C5504 + C12454 * C5558 +
             C12509 * C2676 - C12677 * C2614 - C12509 * C2788 +
             C12453 * C2844) *
                C28784 * C17613 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C28784 * C17612) *
               C28857 * C28948) *
              C626 +
          (((C13319 + C13318) * C28784 * C17612 +
            (C12509 * C2677 - C12677 * C2615 - C12509 * C2789 + C12453 * C2845 +
             C12510 * C5397 - C12678 * C5339 - C12510 * C5505 +
             C12454 * C5559) *
                C28784 * C17613) *
               C28857 * C28948 -
           ((C13954 + C13955) * C28784 * C17613 +
            (C12705 + C12704) * C28784 * C17612) *
               C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12509 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C12453 +
            (C23351 - C23352 + C23353 - C23354) * C12510 +
            (C23561 - C23562 + C23563 - C23564) * C12454) *
               C28784 * C28857 * C624 +
           ((C23352 - C23351 + C23354 - C23353) * C12509 +
            (C23562 - C23561 + C23564 - C23563) * C12453 +
            (C17714 * C2212 - C17612 * C2306 + C17715 * C5338 -
             C17613 * C5450) *
                C12510 +
            (C17714 * C2350 - C17612 * C2435 + C17715 * C5504 -
             C17613 * C5610) *
                C12454) *
               C28784 * C28857 * C28948) *
              C626 +
          (((C17718 - C17717 + C17720 - C17719) * C12509 +
            (C17884 - C17883 + C17886 - C17885) * C12453 +
            (C18273 - C18274 + C18275 - C18276) * C12510 +
            (C18486 - C18487 + C18488 - C18489) * C12454) *
               C28784 * C28857 * C624 +
           ((C18274 - C18273 + C18276 - C18275) * C12509 +
            (C18487 - C18486 + C18489 - C18488) * C12453 +
            (C17612 * C2307 - C17714 * C2213 + C17613 * C5451 -
             C17715 * C5339) *
                C12510 +
            (C17612 * C2436 - C17714 * C2351 + C17613 * C5611 -
             C17715 * C5505) *
                C12454) *
               C28784 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C17714 +
             (C28784 * C448 - C4399 * C443) * C17612 +
             (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                C12453 +
            ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
             (C6853 - C6852) * C17715 + (C7019 - C7018) * C17613) *
                C12454) *
               C28857 * C624 +
           (((C4977 - C4976) * C17714 + (C5157 - C5156) * C17612 +
             (C6852 - C6853) * C17715 + (C7018 - C7019) * C17613) *
                C12453 +
            ((C4981 - C4980) * C17714 + (C5159 - C5158) * C17612 +
             (C6856 - C6857) * C17715 + (C7020 - C7021) * C17613) *
                C12454) *
               C28857 * C28948) *
              C626 +
          ((((C4399 * C94 - C28784 * C100) * C17714 +
             (C4399 * C444 - C28784 * C449) * C17612 +
             (C9497 - C9498) * C17715 + (C9692 - C9693) * C17613) *
                C12453 +
            ((C4984 - C4985) * C17714 + (C5160 - C5161) * C17612 +
             (C23425 - C23426) * C17715 + (C23631 - C23632) * C17613) *
                C12454) *
               C28857 * C624 +
           (((C4985 - C4984) * C17714 + (C5161 - C5160) * C17612 +
             (C23426 - C23425) * C17715 + (C23632 - C23631) * C17613) *
                C12453 +
            ((C4989 - C4988) * C17714 + (C5163 - C5162) * C17612 +
             (C28784 * C5342 - C4399 * C5339) * C17715 +
             (C28784 * C5665 - C4399 * C5663) * C17613) *
                C12454) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C17714 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C17612 +
            (C12453 * C1264 - C12509 * C1200 + C12454 * C2676 -
             C12510 * C2614) *
                C17715 +
            (C12453 * C1638 - C12509 * C1580 + C12454 * C3006 -
             C12510 * C2950) *
                C17613) *
               C28784 * C28857 * C624 +
           ((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C17714 +
            (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
             C12454 * C2520) *
                C17612 +
            (C12509 * C2614 - C12453 * C2676 + C12510 * C5338 -
             C12454 * C5396) *
                C17715 +
            (C12509 * C2950 - C12453 * C3006 + C12510 * C5662 -
             C12454 * C5716) *
                C17613) *
               C28784 * C28857 * C28948) *
              C626 +
          (((C12513 - C12512 + C12515 - C12514) * C17714 +
            (C12859 - C12858 + C12861 - C12860) * C17612 +
            (C13732 - C13733 + C13734 - C13735) * C17715 +
            (C14156 - C14157 + C14158 - C14159) * C17613) *
               C28784 * C28857 * C624 +
           ((C13081 - C13080 + C13083 - C13082) * C17714 +
            (C13529 - C13528 + C13531 - C13530) * C17612 +
            (C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
             C12510 * C5339) *
                C17715 +
            (C12453 * C3007 - C12509 * C2951 + C12454 * C5717 -
             C12510 * C5663) *
                C17613) *
               C28784 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C12453 +
                      (C23777 + C23778) * C12454) *
                         C28784 * C28857 * C624 -
                     ((C17715 * C5450 - C18041 * C5338 - C17715 * C5662 +
                       C17613 * C5768 + C17714 * C2306 - C18040 * C2212 -
                       C17714 * C2476 + C17612 * C2561) *
                          C12454 +
                      (C23778 + C23777) * C12453) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C18703 + C18702) * C12453 +
                      (C17714 * C2307 - C18040 * C2213 - C17714 * C2477 +
                       C17612 * C2562 + C17715 * C5451 - C18041 * C5339 -
                       C17715 * C5663 + C17613 * C5769) *
                          C12454) *
                         C28784 * C28857 * C28948 -
                     ((C18702 + C18703) * C12454 + (C18068 + C18067) * C12453) *
                         C28784 * C28857 * C624) *
                        C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) *
                 C17612 +
             C9311 * C17613) *
                C12453 +
            (C23208 + C23209) * C12454) *
               C1196 -
           ((C10658 * C17613 + C6685 * C17612) * C12454 +
            (C9312 * C17613 + C9311 * C17612) * C12453) *
               C28950) *
              C28840 * C626 +
          (((C9313 * C17612 + C9314 * C17613) * C12453 +
            (C23217 * C17612 +
             (C4399 * C8813 - C4400 * C8812 - C4399 * C8814 + C28784 * C8815) *
                 C17613) *
                C12454) *
               C28950 -
           ((C23218 + C23210) * C12454 +
            (C9313 * C17613 +
             (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                 C17612) *
                C12453) *
               C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C4399 +
             (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                 C28784) *
                C17612 +
            ((C23911 - C23912 + C23913 - C23914) * C4399 +
             (C23915 - C23916 + C23917 - C23918) * C28784) *
                C17613) *
               C1196 +
           (((C23912 - C23911 + C23914 - C23913) * C4399 +
             (C23916 - C23915 + C23918 - C23917) * C28784) *
                C17612 +
            ((C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
              C12454 * C8121) *
                 C4399 +
             (C12509 * C4009 - C12453 * C4058 + C12510 * C8078 -
              C12454 * C8123) *
                 C28784) *
                C17613) *
               C28950) *
              C28840 * C626 +
          ((((C12513 - C12512 + C12515 - C12514) * C4399 +
             (C12517 - C12516 + C12519 - C12518) * C28784) *
                C17612 +
            ((C13732 - C13733 + C13734 - C13735) * C4399 +
             (C13736 - C13737 + C13738 - C13739) * C28784) *
                C17613) *
               C1196 +
           (((C13733 - C13732 + C13735 - C13734) * C4399 +
             (C13737 - C13736 + C13739 - C13738) * C28784) *
                C17612 +
            ((C12453 * C4056 - C12509 * C4006 + C12454 * C8866 -
              C12510 * C8812) *
                 C4399 +
             (C12453 * C4059 - C12509 * C4011 + C12454 * C8867 -
              C12510 * C8814) *
                 C28784) *
                C17613) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C4399 +
             (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                 C28784) *
                C12453 +
            ((C23351 - C23352 + C23353 - C23354) * C4399 +
             (C23355 - C23356 + C23357 - C23358) * C28784) *
                C12454) *
               C1196 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C4399 +
             (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
              C17613 * C4102) *
                 C28784) *
                C12453 +
            ((C17714 * C2614 - C17612 * C2732 + C17715 * C8075 -
              C17613 * C8163) *
                 C4399 +
             (C17714 * C2618 - C17612 * C2735 + C17715 * C8078 -
              C17613 * C8165) *
                 C28784) *
                C12454) *
               C28950) *
              C28840 * C626 +
          ((((C17718 - C17717 + C17720 - C17719) * C4399 +
             (C17722 - C17721 + C17724 - C17723) * C28784) *
                C12453 +
            ((C18273 - C18274 + C18275 - C18276) * C4399 +
             (C18277 - C18278 + C18279 - C18280) * C28784) *
                C12454) *
               C1196 +
           (((C18935 - C18934 + C18937 - C18936) * C4399 +
             (C18939 - C18938 + C18941 - C18940) * C28784) *
                C12453 +
            ((C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
              C17715 * C8812) *
                 C4399 +
             (C17612 * C2736 - C17714 * C2620 + C17613 * C8919 -
              C17715 * C8814) *
                 C28784) *
                C12454) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C12509 +
             (C28784 * C282 - C4399 * C277) * C12453 +
             (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                C17612 +
            ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
             (C6853 - C6852) * C12510 + (C6855 - C6854) * C12454) *
                C17613) *
               C1196 +
           (((C9490 - C9489) * C12509 + (C9492 - C9491) * C12453 +
             (C6852 - C6853) * C12510 + (C6854 - C6855) * C12454) *
                C17612 +
            ((C9494 - C9493) * C12509 + (C9496 - C9495) * C12453 +
             (C10823 - C10824) * C12510 + (C10825 - C10826) * C12454) *
                C17613) *
               C28950) *
              C28840 * C626 +
          ((((C4399 * C94 - C28784 * C100) * C12509 +
             (C4399 * C278 - C28784 * C283) * C12453 +
             (C4984 - C4985) * C12510 + (C4986 - C4987) * C12454) *
                C17612 +
            ((C9497 - C9498) * C12509 + (C9499 - C9500) * C12453 +
             (C23425 - C23426) * C12510 + (C23427 - C23428) * C12454) *
                C17613) *
               C1196 +
           (((C9498 - C9497) * C12509 + (C9500 - C9499) * C12453 +
             (C23426 - C23425) * C12510 + (C23428 - C23427) * C12454) *
                C17612 +
            ((C9502 - C9501) * C12509 + (C9504 - C9503) * C12453 +
             (C28784 * C8813 - C4399 * C8812) * C12510 +
             (C28784 * C8971 - C4399 * C8970) * C12454) *
                C17613) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C28784 * C17612 +
            (C24129 + C24130) * C28784 * C17613) *
               C1196 -
           ((C12510 * C8121 - C12678 * C8075 - C12510 * C8205 + C12454 * C8247 +
             C12509 * C4055 - C12677 * C4005 - C12509 * C4143 +
             C12453 * C4187) *
                C28784 * C17613 +
            (C24130 + C24129) * C28784 * C17612) *
               C28950) *
              C28840 * C626 +
          (((C13955 + C13954) * C28784 * C17612 +
            (C12509 * C4056 - C12677 * C4006 - C12509 * C4144 + C12453 * C4188 +
             C12510 * C8866 - C12678 * C8812 - C12510 * C8970 +
             C12454 * C9022) *
                C28784 * C17613) *
               C28950 -
           ((C13954 + C13955) * C28784 * C17613 +
            (C12705 + C12704) * C28784 * C17612) *
               C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12509 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C12453 +
            (C23351 - C23352 + C23353 - C23354) * C12510 +
            (C23561 - C23562 + C23563 - C23564) * C12454) *
               C28784 * C1196 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12509 +
            (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
             C17613 * C4228) *
                C12453 +
            (C17714 * C2614 - C17612 * C2732 + C17715 * C8075 -
             C17613 * C8163) *
                C12510 +
            (C17714 * C2788 - C17612 * C2897 + C17715 * C8205 -
             C17613 * C8287) *
                C12454) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C17718 - C17717 + C17720 - C17719) * C12509 +
            (C17884 - C17883 + C17886 - C17885) * C12453 +
            (C18273 - C18274 + C18275 - C18276) * C12510 +
            (C18486 - C18487 + C18488 - C18489) * C12454) *
               C28784 * C1196 +
           ((C18935 - C18934 + C18937 - C18936) * C12509 +
            (C19161 - C19160 + C19163 - C19162) * C12453 +
            (C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
             C17715 * C8812) *
                C12510 +
            (C17612 * C2898 - C17714 * C2789 + C17613 * C9073 -
             C17715 * C8970) *
                C12454) *
               C28784 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C17714 +
             (C28784 * C448 - C4399 * C443) * C17612 +
             (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                C12453 +
            ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
             (C6853 - C6852) * C17715 + (C7019 - C7018) * C17613) *
                C12454) *
               C1196 +
           (((C9490 - C9489) * C17714 + (C9689 - C9688) * C17612 +
             (C9494 - C9493) * C17715 + (C9691 - C9690) * C17613) *
                C12453 +
            ((C6852 - C6853) * C17714 + (C7018 - C7019) * C17612 +
             (C10823 - C10824) * C17715 + (C10997 - C10998) * C17613) *
                C12454) *
               C28950) *
              C28840 * C626 +
          ((((C4399 * C94 - C28784 * C100) * C17714 +
             (C4399 * C444 - C28784 * C449) * C17612 +
             (C9497 - C9498) * C17715 + (C9692 - C9693) * C17613) *
                C12453 +
            ((C4984 - C4985) * C17714 + (C5160 - C5161) * C17612 +
             (C23425 - C23426) * C17715 + (C23631 - C23632) * C17613) *
                C12454) *
               C1196 +
           (((C9498 - C9497) * C17714 + (C9693 - C9692) * C17612 +
             (C9502 - C9501) * C17715 + (C9695 - C9694) * C17613) *
                C12453 +
            ((C23426 - C23425) * C17714 + (C23632 - C23631) * C17612 +
             (C28784 * C8813 - C4399 * C8812) * C17715 +
             (C28784 * C9125 - C4399 * C9124) * C17613) *
                C12454) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C17714 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C17612 +
            (C23911 - C23912 + C23913 - C23914) * C17715 +
            (C24329 - C24330 + C24331 - C24332) * C17613) *
               C28784 * C1196 +
           ((C23912 - C23911 + C23914 - C23913) * C17714 +
            (C24330 - C24329 + C24332 - C24331) * C17612 +
            (C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
             C12454 * C8121) *
                C17715 +
            (C12509 * C4269 - C12453 * C4313 + C12510 * C8327 -
             C12454 * C8369) *
                C17613) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C12513 - C12512 + C12515 - C12514) * C17714 +
            (C12859 - C12858 + C12861 - C12860) * C17612 +
            (C13732 - C13733 + C13734 - C13735) * C17715 +
            (C14156 - C14157 + C14158 - C14159) * C17613) *
               C28784 * C1196 +
           ((C13733 - C13732 + C13735 - C13734) * C17714 +
            (C14157 - C14156 + C14159 - C14158) * C17612 +
            (C12453 * C4056 - C12509 * C4006 + C12454 * C8866 -
             C12510 * C8812) *
                C17715 +
            (C12453 * C4314 - C12509 * C4270 + C12454 * C9176 -
             C12510 * C9124) *
                C17613) *
               C28784 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C12453 +
                      (C23777 + C23778) * C12454) *
                         C28784 * C1196 -
                     ((C17715 * C8163 - C18041 * C8075 - C17715 * C8327 +
                       C17613 * C8409 + C17714 * C2732 - C18040 * C2614 -
                       C17714 * C2950 + C17612 * C3059) *
                          C12454 +
                      (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 +
                       C17613 * C4354 + C17714 * C1330 - C18040 * C1200 -
                       C17714 * C1580 + C17612 * C1698) *
                          C12453) *
                         C28784 * C28950) *
                        C28840 * C626 +
                    (((C19385 + C19384) * C12453 +
                      (C17714 * C2733 - C18040 * C2615 - C17714 * C2951 +
                       C17612 * C3060 + C17715 * C8918 - C18041 * C8812 -
                       C17715 * C9124 + C17613 * C9227) *
                          C12454) *
                         C28784 * C28950 -
                     ((C18702 + C18703) * C12454 + (C18068 + C18067) * C12453) *
                         C28784 * C1196) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) *
                 C17612 +
             C9311 * C17613) *
                C12453 +
            (C23208 + C23209) * C12454) *
               C28857 * C1766 -
           ((C6684 * C17613 + C4795 * C17612) * C12454 +
            (C23209 + C23208) * C12453) *
               C28857 * C28948) *
              C1768 +
          (((C23210 + C23218) * C12453 +
            (C4797 * C17612 +
             (C4399 * C5342 - C4400 * C5339 - C4399 * C5343 + C28784 * C5345) *
                 C17613) *
                C12454) *
               C28857 * C28948 -
           ((C23218 + C23210) * C12454 +
            (C9313 * C17613 +
             (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                 C17612) *
                C12453) *
               C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C4399 +
             (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                 C28784) *
                C17612 +
            ((C23911 - C23912 + C23913 - C23914) * C4399 +
             (C23915 - C23916 + C23917 - C23918) * C28784) *
                C17613) *
               C28857 * C1766 +
           (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C4399 +
             (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                 C28784) *
                C17612 +
            ((C12509 * C2614 - C12453 * C2676 + C12510 * C5338 -
              C12454 * C5396) *
                 C4399 +
             (C12509 * C2618 - C12453 * C2679 + C12510 * C5341 -
              C12454 * C5398) *
                 C28784) *
                C17613) *
               C28857 * C28948) *
              C1768 +
          ((((C12513 - C12512 + C12515 - C12514) * C4399 +
             (C12517 - C12516 + C12519 - C12518) * C28784) *
                C17612 +
            ((C13732 - C13733 + C13734 - C13735) * C4399 +
             (C13736 - C13737 + C13738 - C13739) * C28784) *
                C17613) *
               C28857 * C1766 +
           (((C13081 - C13080 + C13083 - C13082) * C4399 +
             (C13085 - C13084 + C13087 - C13086) * C28784) *
                C17612 +
            ((C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
              C12510 * C5339) *
                 C4399 +
             (C12453 * C2680 - C12509 * C2620 + C12454 * C5399 -
              C12510 * C5343) *
                 C28784) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C4399 +
             (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                 C28784) *
                C12453 +
            ((C23351 - C23352 + C23353 - C23354) * C4399 +
             (C23355 - C23356 + C23357 - C23358) * C28784) *
                C12454) *
               C28857 * C1766 +
           (((C23352 - C23351 + C23354 - C23353) * C4399 +
             (C23356 - C23355 + C23358 - C23357) * C28784) *
                C12453 +
            ((C17714 * C2212 - C17612 * C2306 + C17715 * C5338 -
              C17613 * C5450) *
                 C4399 +
             (C17714 * C2216 - C17612 * C2309 + C17715 * C5341 -
              C17613 * C5452) *
                 C28784) *
                C12454) *
               C28857 * C28948) *
              C1768 +
          ((((C17718 - C17717 + C17720 - C17719) * C4399 +
             (C17722 - C17721 + C17724 - C17723) * C28784) *
                C12453 +
            ((C18273 - C18274 + C18275 - C18276) * C4399 +
             (C18277 - C18278 + C18279 - C18280) * C28784) *
                C12454) *
               C28857 * C1766 +
           (((C18274 - C18273 + C18276 - C18275) * C4399 +
             (C18278 - C18277 + C18280 - C18279) * C28784) *
                C12453 +
            ((C17612 * C2307 - C17714 * C2213 + C17613 * C5451 -
              C17715 * C5339) *
                 C4399 +
             (C17612 * C2310 - C17714 * C2218 + C17613 * C5453 -
              C17715 * C5343) *
                 C28784) *
                C12454) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C12509 +
             (C28784 * C282 - C4399 * C277) * C12453 +
             (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                C17612 +
            ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
             (C6853 - C6852) * C12510 + (C6855 - C6854) * C12454) *
                C17613) *
               C28857 * C1766 +
           (((C4977 - C4976) * C12509 + (C4979 - C4978) * C12453 +
             (C4981 - C4980) * C12510 + (C4983 - C4982) * C12454) *
                C17612 +
            ((C6852 - C6853) * C12509 + (C6854 - C6855) * C12453 +
             (C6856 - C6857) * C12510 + (C6858 - C6859) * C12454) *
                C17613) *
               C28857 * C28948) *
              C1768 +
          ((((C4399 * C94 - C28784 * C100) * C12509 +
             (C4399 * C278 - C28784 * C283) * C12453 +
             (C4984 - C4985) * C12510 + (C4986 - C4987) * C12454) *
                C17612 +
            ((C9497 - C9498) * C12509 + (C9499 - C9500) * C12453 +
             (C23425 - C23426) * C12510 + (C23427 - C23428) * C12454) *
                C17613) *
               C28857 * C1766 +
           (((C4985 - C4984) * C12509 + (C4987 - C4986) * C12453 +
             (C4989 - C4988) * C12510 + (C4991 - C4990) * C12454) *
                C17612 +
            ((C23426 - C23425) * C12509 + (C23428 - C23427) * C12453 +
             (C28784 * C5342 - C4399 * C5339) * C12510 +
             (C28784 * C5507 - C4399 * C5505) * C12454) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C28784 * C17612 +
            (C24129 + C24130) * C28784 * C17613) *
               C28857 * C1766 -
           ((C12510 * C5396 - C12678 * C5338 - C12510 * C5504 + C12454 * C5558 +
             C12509 * C2676 - C12677 * C2614 - C12509 * C2788 +
             C12453 * C2844) *
                C28784 * C17613 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C28784 * C17612) *
               C28857 * C28948) *
              C1768 +
          (((C13319 + C13318) * C28784 * C17612 +
            (C12509 * C2677 - C12677 * C2615 - C12509 * C2789 + C12453 * C2845 +
             C12510 * C5397 - C12678 * C5339 - C12510 * C5505 +
             C12454 * C5559) *
                C28784 * C17613) *
               C28857 * C28948 -
           ((C13954 + C13955) * C28784 * C17613 +
            (C12705 + C12704) * C28784 * C17612) *
               C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12509 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C12453 +
            (C23351 - C23352 + C23353 - C23354) * C12510 +
            (C23561 - C23562 + C23563 - C23564) * C12454) *
               C28784 * C28857 * C1766 +
           ((C23352 - C23351 + C23354 - C23353) * C12509 +
            (C23562 - C23561 + C23564 - C23563) * C12453 +
            (C17714 * C2212 - C17612 * C2306 + C17715 * C5338 -
             C17613 * C5450) *
                C12510 +
            (C17714 * C2350 - C17612 * C2435 + C17715 * C5504 -
             C17613 * C5610) *
                C12454) *
               C28784 * C28857 * C28948) *
              C1768 +
          (((C17718 - C17717 + C17720 - C17719) * C12509 +
            (C17884 - C17883 + C17886 - C17885) * C12453 +
            (C18273 - C18274 + C18275 - C18276) * C12510 +
            (C18486 - C18487 + C18488 - C18489) * C12454) *
               C28784 * C28857 * C1766 +
           ((C18274 - C18273 + C18276 - C18275) * C12509 +
            (C18487 - C18486 + C18489 - C18488) * C12453 +
            (C17612 * C2307 - C17714 * C2213 + C17613 * C5451 -
             C17715 * C5339) *
                C12510 +
            (C17612 * C2436 - C17714 * C2351 + C17613 * C5611 -
             C17715 * C5505) *
                C12454) *
               C28784 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C17714 +
             (C28784 * C448 - C4399 * C443) * C17612 +
             (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                C12453 +
            ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
             (C6853 - C6852) * C17715 + (C7019 - C7018) * C17613) *
                C12454) *
               C28857 * C1766 +
           (((C4977 - C4976) * C17714 + (C5157 - C5156) * C17612 +
             (C6852 - C6853) * C17715 + (C7018 - C7019) * C17613) *
                C12453 +
            ((C4981 - C4980) * C17714 + (C5159 - C5158) * C17612 +
             (C6856 - C6857) * C17715 + (C7020 - C7021) * C17613) *
                C12454) *
               C28857 * C28948) *
              C1768 +
          ((((C4399 * C94 - C28784 * C100) * C17714 +
             (C4399 * C444 - C28784 * C449) * C17612 +
             (C9497 - C9498) * C17715 + (C9692 - C9693) * C17613) *
                C12453 +
            ((C4984 - C4985) * C17714 + (C5160 - C5161) * C17612 +
             (C23425 - C23426) * C17715 + (C23631 - C23632) * C17613) *
                C12454) *
               C28857 * C1766 +
           (((C4985 - C4984) * C17714 + (C5161 - C5160) * C17612 +
             (C23426 - C23425) * C17715 + (C23632 - C23631) * C17613) *
                C12453 +
            ((C4989 - C4988) * C17714 + (C5163 - C5162) * C17612 +
             (C28784 * C5342 - C4399 * C5339) * C17715 +
             (C28784 * C5665 - C4399 * C5663) * C17613) *
                C12454) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C17714 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C17612 +
            (C23911 - C23912 + C23913 - C23914) * C17715 +
            (C24329 - C24330 + C24331 - C24332) * C17613) *
               C28784 * C28857 * C1766 +
           ((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C17714 +
            (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
             C12454 * C2520) *
                C17612 +
            (C12509 * C2614 - C12453 * C2676 + C12510 * C5338 -
             C12454 * C5396) *
                C17715 +
            (C12509 * C2950 - C12453 * C3006 + C12510 * C5662 -
             C12454 * C5716) *
                C17613) *
               C28784 * C28857 * C28948) *
              C1768 +
          (((C12513 - C12512 + C12515 - C12514) * C17714 +
            (C12859 - C12858 + C12861 - C12860) * C17612 +
            (C13732 - C13733 + C13734 - C13735) * C17715 +
            (C14156 - C14157 + C14158 - C14159) * C17613) *
               C28784 * C28857 * C1766 +
           ((C13081 - C13080 + C13083 - C13082) * C17714 +
            (C13529 - C13528 + C13531 - C13530) * C17612 +
            (C12453 * C2677 - C12509 * C2615 + C12454 * C5397 -
             C12510 * C5339) *
                C17715 +
            (C12453 * C3007 - C12509 * C2951 + C12454 * C5717 -
             C12510 * C5663) *
                C17613) *
               C28784 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C12453 +
                      (C23777 + C23778) * C12454) *
                         C28784 * C28857 * C1766 -
                     ((C17715 * C5450 - C18041 * C5338 - C17715 * C5662 +
                       C17613 * C5768 + C17714 * C2306 - C18040 * C2212 -
                       C17714 * C2476 + C17612 * C2561) *
                          C12454 +
                      (C23778 + C23777) * C12453) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C18703 + C18702) * C12453 +
                      (C17714 * C2307 - C18040 * C2213 - C17714 * C2477 +
                       C17612 * C2562 + C17715 * C5451 - C18041 * C5339 -
                       C17715 * C5663 + C17613 * C5769) *
                          C12454) *
                         C28784 * C28857 * C28948 -
                     ((C18702 + C18703) * C12454 + (C18068 + C18067) * C12453) *
                         C28784 * C28857 * C1766) *
                        C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C17612 +
            C9311 * C17613) *
               C12453 +
           (C23208 + C23209) * C12454) *
              C28857 * C2208 -
          ((C25043 + C25044) * C12454 + (C23209 + C23208) * C12453) * C28857 *
              C2209 +
          ((C25044 + C25043) * C12453 +
           (C6269 * C17612 +
            (C4399 * C6668 - C4400 * C6667 - C4399 * C6669 + C28784 * C6670) *
                C17613) *
               C12454) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C4399 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C28784) *
               C17612 +
           ((C23911 - C23912 + C23913 - C23914) * C4399 +
            (C23915 - C23916 + C23917 - C23918) * C28784) *
               C17613) *
              C28857 * C2208 +
          (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C4399 +
            (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                C28784) *
               C17612 +
           ((C12509 * C2614 - C12453 * C2676 + C12510 * C5338 -
             C12454 * C5396) *
                C4399 +
            (C12509 * C2618 - C12453 * C2679 + C12510 * C5341 -
             C12454 * C5398) *
                C28784) *
               C17613) *
              C28857 * C2209 +
          (((C12453 * C2262 - C12509 * C2212 + C12454 * C4851 -
             C12510 * C4761) *
                C4399 +
            (C12453 * C2265 - C12509 * C2216 + C12454 * C4853 -
             C12510 * C4764) *
                C28784) *
               C17612 +
           ((C12453 * C5396 - C12509 * C5338 + C12454 * C6737 -
             C12510 * C6667) *
                C4399 +
            (C12453 * C5398 - C12509 * C5341 + C12454 * C6738 -
             C12510 * C6669) *
                C28784) *
               C17613) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C4399 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C28784) *
               C12453 +
           ((C23351 - C23352 + C23353 - C23354) * C4399 +
            (C23355 - C23356 + C23357 - C23358) * C28784) *
               C12454) *
              C28857 * C2208 +
          (((C23352 - C23351 + C23354 - C23353) * C4399 +
            (C23356 - C23355 + C23358 - C23357) * C28784) *
               C12453 +
           ((C25145 - C25146 + C25147 - C25148) * C4399 +
            (C25149 - C25150 + C25151 - C25152) * C28784) *
               C12454) *
              C28857 * C2209 +
          (((C25146 - C25145 + C25148 - C25147) * C4399 +
            (C25150 - C25149 + C25152 - C25151) * C28784) *
               C12453 +
           ((C17612 * C4905 - C17714 * C4761 + C17613 * C6789 -
             C17715 * C6667) *
                C4399 +
            (C17612 * C4907 - C17714 * C4764 + C17613 * C6790 -
             C17715 * C6669) *
                C28784) *
               C12454) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C12509 +
                      (C28784 * C282 - C4399 * C277) * C12453 +
                      (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                         C17612 +
                     ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
                      (C6853 - C6852) * C12510 + (C6855 - C6854) * C12454) *
                         C17613) *
                        C28857 * C2208 +
                    (((C4977 - C4976) * C12509 + (C4979 - C4978) * C12453 +
                      (C4981 - C4980) * C12510 + (C4983 - C4982) * C12454) *
                         C17612 +
                     ((C6852 - C6853) * C12509 + (C6854 - C6855) * C12453 +
                      (C6856 - C6857) * C12510 + (C6858 - C6859) * C12454) *
                         C17613) *
                        C28857 * C2209 +
                    ((C6400 * C12509 + C6401 * C12453 +
                      (C6403 - C6402) * C12510 + (C6405 - C6404) * C12454) *
                         C17612 +
                     ((C6857 - C6856) * C12509 + (C6859 - C6858) * C12453 +
                      (C28784 * C6668 - C4399 * C6667) * C12510 +
                      (C28784 * C6850 - C4399 * C6849) * C12454) *
                         C17613) *
                        C28857 * C2210) *
                   C28806) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
            C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
               C28784 * C17612 +
           (C24129 + C24130) * C28784 * C17613) *
              C28857 * C2208 -
          ((C12510 * C5396 - C12678 * C5338 - C12510 * C5504 + C12454 * C5558 +
            C12509 * C2676 - C12677 * C2614 - C12509 * C2788 + C12453 * C2844) *
               C28784 * C17613 +
           (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
            C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
               C28784 * C17612) *
              C28857 * C2209 +
          ((C12509 * C2262 - C12677 * C2212 - C12509 * C2350 + C12453 * C2394 +
            C12510 * C4851 - C12678 * C4761 - C12510 * C4971 + C12454 * C5041) *
               C28784 * C17612 +
           (C12509 * C5396 - C12677 * C5338 - C12509 * C5504 + C12453 * C5558 +
            C12510 * C6737 - C12678 * C6667 - C12510 * C6849 + C12454 * C6909) *
               C28784 * C17613) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
               C12509 +
           (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
               C12453 +
           (C23351 - C23352 + C23353 - C23354) * C12510 +
           (C23561 - C23562 + C23563 - C23564) * C12454) *
              C28784 * C28857 * C2208 +
          ((C23352 - C23351 + C23354 - C23353) * C12509 +
           (C23562 - C23561 + C23564 - C23563) * C12453 +
           (C25145 - C25146 + C25147 - C25148) * C12510 +
           (C25303 - C25304 + C25305 - C25306) * C12454) *
              C28784 * C28857 * C2209 +
          ((C25146 - C25145 + C25148 - C25147) * C12509 +
           (C25304 - C25303 + C25306 - C25305) * C12453 +
           (C17612 * C4905 - C17714 * C4761 + C17613 * C6789 - C17715 * C6667) *
               C12510 +
           (C17612 * C5093 - C17714 * C4971 + C17613 * C6960 - C17715 * C6849) *
               C12454) *
              C28784 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C17714 +
                      (C28784 * C448 - C4399 * C443) * C17612 +
                      (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                         C12453 +
                     ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
                      (C6853 - C6852) * C17715 + (C7019 - C7018) * C17613) *
                         C12454) *
                        C28857 * C2208 +
                    (((C4977 - C4976) * C17714 + (C5157 - C5156) * C17612 +
                      (C6852 - C6853) * C17715 + (C7018 - C7019) * C17613) *
                         C12453 +
                     ((C4981 - C4980) * C17714 + (C5159 - C5158) * C17612 +
                      (C6856 - C6857) * C17715 + (C7020 - C7021) * C17613) *
                         C12454) *
                        C28857 * C2209 +
                    ((C6400 * C17714 + C6528 * C17612 +
                      (C6857 - C6856) * C17715 + (C7021 - C7020) * C17613) *
                         C12453 +
                     ((C6403 - C6402) * C17714 + (C6530 - C6529) * C17612 +
                      (C28784 * C6668 - C4399 * C6667) * C17715 +
                      (C28784 * C7016 - C4399 * C7015) * C17613) *
                         C12454) *
                        C28857 * C2210) *
                   C28806) /
                  (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
               C17714 +
           (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
               C17612 +
           (C23911 - C23912 + C23913 - C23914) * C17715 +
           (C24329 - C24330 + C24331 - C24332) * C17613) *
              C28784 * C28857 * C2208 +
          ((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
               C17714 +
           (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 - C12454 * C2520) *
               C17612 +
           (C12509 * C2614 - C12453 * C2676 + C12510 * C5338 - C12454 * C5396) *
               C17715 +
           (C12509 * C2950 - C12453 * C3006 + C12510 * C5662 - C12454 * C5716) *
               C17613) *
              C28784 * C28857 * C2209 +
          ((C12453 * C2262 - C12509 * C2212 + C12454 * C4851 - C12510 * C4761) *
               C17714 +
           (C12453 * C2520 - C12509 * C2476 + C12454 * C5213 - C12510 * C5151) *
               C17612 +
           (C12453 * C5396 - C12509 * C5338 + C12454 * C6737 - C12510 * C6667) *
               C17715 +
           (C12453 * C5716 - C12509 * C5662 + C12454 * C7071 - C12510 * C7015) *
               C17613) *
              C28784 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
            C17715 * C1330 - C18041 * C1200 - C17715 * C1580 + C17613 * C1698) *
               C12453 +
           (C23777 + C23778) * C12454) *
              C28784 * C28857 * C2208 -
          ((C25469 + C25470) * C12454 + (C23778 + C23777) * C12453) * C28784 *
              C28857 * C2209 +
          ((C25470 + C25469) * C12453 +
           (C17714 * C4905 - C18040 * C4761 - C17714 * C5151 + C17612 * C5265 +
            C17715 * C6789 - C18041 * C6667 - C17715 * C7015 + C17613 * C7122) *
               C12454) *
              C28784 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) *
                 C17612 +
             C9311 * C17613) *
                C12453 +
            (C23208 + C23209) * C12454) *
               C1196 -
           ((C25537 + C25538) * C12454 +
            (C9312 * C17613 + C9311 * C17612) * C12453) *
               C28950) *
              C1766 +
          (((C25538 + C25537) * C12453 +
            (C6684 * C17612 +
             (C4399 * C8079 - C4400 * C8076 - C4399 * C8080 + C28784 * C8082) *
                 C17613) *
                C12454) *
               C28950 -
           ((C25043 + C25044) * C12454 + (C23209 + C23208) * C12453) * C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C4399 +
             (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                 C28784) *
                C17612 +
            ((C23911 - C23912 + C23913 - C23914) * C4399 +
             (C23915 - C23916 + C23917 - C23918) * C28784) *
                C17613) *
               C1196 +
           (((C23912 - C23911 + C23914 - C23913) * C4399 +
             (C23916 - C23915 + C23918 - C23917) * C28784) *
                C17612 +
            ((C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
              C12454 * C8121) *
                 C4399 +
             (C12509 * C4009 - C12453 * C4058 + C12510 * C8078 -
              C12454 * C8123) *
                 C28784) *
                C17613) *
               C28950) *
              C1766 +
          ((((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C4399 +
             (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                 C28784) *
                C17612 +
            ((C25605 - C25606 + C25607 - C25608) * C4399 +
             (C25609 - C25610 + C25611 - C25612) * C28784) *
                C17613) *
               C1196 +
           (((C25606 - C25605 + C25608 - C25607) * C4399 +
             (C25610 - C25609 + C25612 - C25611) * C28784) *
                C17612 +
            ((C12453 * C8121 - C12509 * C8075 + C12454 * C8122 -
              C12510 * C8076) *
                 C4399 +
             (C12453 * C8123 - C12509 * C8078 + C12454 * C8124 -
              C12510 * C8080) *
                 C28784) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C4399 +
             (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                 C28784) *
                C12453 +
            ((C23351 - C23352 + C23353 - C23354) * C4399 +
             (C23355 - C23356 + C23357 - C23358) * C28784) *
                C12454) *
               C1196 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C4399 +
             (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
              C17613 * C4102) *
                 C28784) *
                C12453 +
            ((C25679 - C25680 + C25681 - C25682) * C4399 +
             (C25683 - C25684 + C25685 - C25686) * C28784) *
                C12454) *
               C28950) *
              C1766 +
          ((((C23352 - C23351 + C23354 - C23353) * C4399 +
             (C23356 - C23355 + C23358 - C23357) * C28784) *
                C12453 +
            ((C25145 - C25146 + C25147 - C25148) * C4399 +
             (C25149 - C25150 + C25151 - C25152) * C28784) *
                C12454) *
               C1196 +
           (((C25680 - C25679 + C25682 - C25681) * C4399 +
             (C25684 - C25683 + C25686 - C25685) * C28784) *
                C12453 +
            ((C17612 * C5450 - C17714 * C5338 + C17613 * C8164 -
              C17715 * C8076) *
                 C4399 +
             (C17612 * C5452 - C17714 * C5341 + C17613 * C8166 -
              C17715 * C8080) *
                 C28784) *
                C12454) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C12509 +
             (C28784 * C282 - C4399 * C277) * C12453 +
             (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                C17612 +
            ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
             C25753 * C12510 + C25754 * C12454) *
                C17613) *
               C1196 +
           (((C9490 - C9489) * C12509 + (C9492 - C9491) * C12453 +
             C25755 * C12510 + C25756 * C12454) *
                C17612 +
            ((C9494 - C9493) * C12509 + (C9496 - C9495) * C12453 +
             (C10823 - C10824) * C12510 + (C10825 - C10826) * C12454) *
                C17613) *
               C28950) *
              C1766 +
          ((((C4977 - C4976) * C12509 + (C4979 - C4978) * C12453 +
             (C4981 - C4980) * C12510 + (C4983 - C4982) * C12454) *
                C17612 +
            (C25755 * C12509 + C25756 * C12453 + (C6856 - C6857) * C12510 +
             (C6858 - C6859) * C12454) *
                C17613) *
               C1196 +
           ((C25753 * C12509 + C25754 * C12453 + (C6857 - C6856) * C12510 +
             (C6859 - C6858) * C12454) *
                C17612 +
            ((C10824 - C10823) * C12509 + (C10826 - C10825) * C12453 +
             (C28784 * C8079 - C4399 * C8076) * C12510 +
             (C28784 * C8208 - C4399 * C8206) * C12454) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C28784 * C17612 +
            (C24129 + C24130) * C28784 * C17613) *
               C1196 -
           ((C12510 * C8121 - C12678 * C8075 - C12510 * C8205 + C12454 * C8247 +
             C12509 * C4055 - C12677 * C4005 - C12509 * C4143 +
             C12453 * C4187) *
                C28784 * C17613 +
            (C24130 + C24129) * C28784 * C17612) *
               C28950) *
              C1766 +
          (((C25835 + C25836) * C28784 * C17612 +
            (C12509 * C8121 - C12677 * C8075 - C12509 * C8205 + C12453 * C8247 +
             C12510 * C8122 - C12678 * C8076 - C12510 * C8206 +
             C12454 * C8248) *
                C28784 * C17613) *
               C28950 -
           ((C25836 + C25835) * C28784 * C17613 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C28784 * C17612) *
               C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12509 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C12453 +
            (C23351 - C23352 + C23353 - C23354) * C12510 +
            (C23561 - C23562 + C23563 - C23564) * C12454) *
               C28784 * C1196 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12509 +
            (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
             C17613 * C4228) *
                C12453 +
            (C25679 - C25680 + C25681 - C25682) * C12510 +
            (C25903 - C25904 + C25905 - C25906) * C12454) *
               C28784 * C28950) *
              C1766 +
          (((C23352 - C23351 + C23354 - C23353) * C12509 +
            (C23562 - C23561 + C23564 - C23563) * C12453 +
            (C25145 - C25146 + C25147 - C25148) * C12510 +
            (C25303 - C25304 + C25305 - C25306) * C12454) *
               C28784 * C1196 +
           ((C25680 - C25679 + C25682 - C25681) * C12509 +
            (C25904 - C25903 + C25906 - C25905) * C12453 +
            (C17612 * C5450 - C17714 * C5338 + C17613 * C8164 -
             C17715 * C8076) *
                C12510 +
            (C17612 * C5610 - C17714 * C5504 + C17613 * C8288 -
             C17715 * C8206) *
                C12454) *
               C28784 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C17714 +
             (C28784 * C448 - C4399 * C443) * C17612 +
             (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                C12453 +
            ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
             C25753 * C17715 + C25973 * C17613) *
                C12454) *
               C1196 +
           (((C9490 - C9489) * C17714 + (C9689 - C9688) * C17612 +
             (C9494 - C9493) * C17715 + (C9691 - C9690) * C17613) *
                C12453 +
            (C25755 * C17714 + C25974 * C17612 + (C10823 - C10824) * C17715 +
             (C10997 - C10998) * C17613) *
                C12454) *
               C28950) *
              C1766 +
          ((((C4977 - C4976) * C17714 + (C5157 - C5156) * C17612 +
             C25755 * C17715 + C25974 * C17613) *
                C12453 +
            ((C4981 - C4980) * C17714 + (C5159 - C5158) * C17612 +
             (C6856 - C6857) * C17715 + (C7020 - C7021) * C17613) *
                C12454) *
               C1196 +
           ((C25753 * C17714 + C25973 * C17612 + (C10824 - C10823) * C17715 +
             (C10998 - C10997) * C17613) *
                C12453 +
            ((C6857 - C6856) * C17714 + (C7021 - C7020) * C17612 +
             (C28784 * C8079 - C4399 * C8076) * C17715 +
             (C28784 * C8330 - C4399 * C8328) * C17613) *
                C12454) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C17714 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C17612 +
            (C23911 - C23912 + C23913 - C23914) * C17715 +
            (C24329 - C24330 + C24331 - C24332) * C17613) *
               C28784 * C1196 +
           ((C23912 - C23911 + C23914 - C23913) * C17714 +
            (C24330 - C24329 + C24332 - C24331) * C17612 +
            (C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
             C12454 * C8121) *
                C17715 +
            (C12509 * C4269 - C12453 * C4313 + C12510 * C8327 -
             C12454 * C8369) *
                C17613) *
               C28784 * C28950) *
              C1766 +
          (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C17714 +
            (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
             C12454 * C2520) *
                C17612 +
            (C25605 - C25606 + C25607 - C25608) * C17715 +
            (C26041 - C26042 + C26043 - C26044) * C17613) *
               C28784 * C1196 +
           ((C25606 - C25605 + C25608 - C25607) * C17714 +
            (C26042 - C26041 + C26044 - C26043) * C17612 +
            (C12453 * C8121 - C12509 * C8075 + C12454 * C8122 -
             C12510 * C8076) *
                C17715 +
            (C12453 * C8369 - C12509 * C8327 + C12454 * C8370 -
             C12510 * C8328) *
                C17613) *
               C28784 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C12453 +
                      (C23777 + C23778) * C12454) *
                         C28784 * C1196 -
                     ((C26123 + C26124) * C12454 +
                      (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 +
                       C17613 * C4354 + C17714 * C1330 - C18040 * C1200 -
                       C17714 * C1580 + C17612 * C1698) *
                          C12453) *
                         C28784 * C28950) *
                        C1766 +
                    (((C26124 + C26123) * C12453 +
                      (C17714 * C5450 - C18040 * C5338 - C17714 * C5662 +
                       C17612 * C5768 + C17715 * C8164 - C18041 * C8076 -
                       C17715 * C8328 + C17613 * C8410) *
                          C12454) *
                         C28784 * C28950 -
                     ((C25469 + C25470) * C12454 + (C23778 + C23777) * C12453) *
                         C28784 * C1196) *
                        C28948) *
                   C28806) /
                  (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) *
                 C17612 +
             C9311 * C17613) *
                C12453 +
            (C23208 + C23209) * C12454) *
               C3112 -
           ((C25537 + C25538) * C12454 +
            (C9312 * C17613 + C9311 * C17612) * C12453) *
               C28950) *
              C28840 * C1768 +
          (((C9313 * C17612 + C9314 * C17613) * C12453 +
            (C23217 * C17612 +
             (C4399 * C8813 - C4400 * C8812 - C4399 * C8814 + C28784 * C8815) *
                 C17613) *
                C12454) *
               C28950 -
           ((C23218 + C23210) * C12454 +
            (C9313 * C17613 +
             (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                 C17612) *
                C12453) *
               C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C4399 +
             (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                 C28784) *
                C17612 +
            ((C23911 - C23912 + C23913 - C23914) * C4399 +
             (C23915 - C23916 + C23917 - C23918) * C28784) *
                C17613) *
               C3112 +
           (((C23912 - C23911 + C23914 - C23913) * C4399 +
             (C23916 - C23915 + C23918 - C23917) * C28784) *
                C17612 +
            ((C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
              C12454 * C8121) *
                 C4399 +
             (C12509 * C4009 - C12453 * C4058 + C12510 * C8078 -
              C12454 * C8123) *
                 C28784) *
                C17613) *
               C28950) *
              C28840 * C1768 +
          ((((C12513 - C12512 + C12515 - C12514) * C4399 +
             (C12517 - C12516 + C12519 - C12518) * C28784) *
                C17612 +
            ((C13732 - C13733 + C13734 - C13735) * C4399 +
             (C13736 - C13737 + C13738 - C13739) * C28784) *
                C17613) *
               C3112 +
           (((C13733 - C13732 + C13735 - C13734) * C4399 +
             (C13737 - C13736 + C13739 - C13738) * C28784) *
                C17612 +
            ((C12453 * C4056 - C12509 * C4006 + C12454 * C8866 -
              C12510 * C8812) *
                 C4399 +
             (C12453 * C4059 - C12509 * C4011 + C12454 * C8867 -
              C12510 * C8814) *
                 C28784) *
                C17613) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C4399 +
             (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                 C28784) *
                C12453 +
            ((C23351 - C23352 + C23353 - C23354) * C4399 +
             (C23355 - C23356 + C23357 - C23358) * C28784) *
                C12454) *
               C3112 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C4399 +
             (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
              C17613 * C4102) *
                 C28784) *
                C12453 +
            ((C25679 - C25680 + C25681 - C25682) * C4399 +
             (C25683 - C25684 + C25685 - C25686) * C28784) *
                C12454) *
               C28950) *
              C28840 * C1768 +
          ((((C17718 - C17717 + C17720 - C17719) * C4399 +
             (C17722 - C17721 + C17724 - C17723) * C28784) *
                C12453 +
            ((C18273 - C18274 + C18275 - C18276) * C4399 +
             (C18277 - C18278 + C18279 - C18280) * C28784) *
                C12454) *
               C3112 +
           (((C18935 - C18934 + C18937 - C18936) * C4399 +
             (C18939 - C18938 + C18941 - C18940) * C28784) *
                C12453 +
            ((C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
              C17715 * C8812) *
                 C4399 +
             (C17612 * C2736 - C17714 * C2620 + C17613 * C8919 -
              C17715 * C8814) *
                 C28784) *
                C12454) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C12509 +
             (C28784 * C282 - C4399 * C277) * C12453 +
             (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                C17612 +
            ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
             C25753 * C12510 + C25754 * C12454) *
                C17613) *
               C3112 +
           (((C9490 - C9489) * C12509 + (C9492 - C9491) * C12453 +
             C25755 * C12510 + C25756 * C12454) *
                C17612 +
            ((C9494 - C9493) * C12509 + (C9496 - C9495) * C12453 +
             (C10823 - C10824) * C12510 + (C10825 - C10826) * C12454) *
                C17613) *
               C28950) *
              C28840 * C1768 +
          ((((C4399 * C94 - C28784 * C100) * C12509 +
             (C4399 * C278 - C28784 * C283) * C12453 +
             (C4984 - C4985) * C12510 + (C4986 - C4987) * C12454) *
                C17612 +
            ((C9497 - C9498) * C12509 + (C9499 - C9500) * C12453 +
             (C23425 - C23426) * C12510 + (C23427 - C23428) * C12454) *
                C17613) *
               C3112 +
           (((C9498 - C9497) * C12509 + (C9500 - C9499) * C12453 +
             (C23426 - C23425) * C12510 + (C23428 - C23427) * C12454) *
                C17612 +
            ((C9502 - C9501) * C12509 + (C9504 - C9503) * C12453 +
             (C28784 * C8813 - C4399 * C8812) * C12510 +
             (C28784 * C8971 - C4399 * C8970) * C12454) *
                C17613) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C28784 * C17612 +
            (C24129 + C24130) * C28784 * C17613) *
               C3112 -
           ((C12510 * C8121 - C12678 * C8075 - C12510 * C8205 + C12454 * C8247 +
             C12509 * C4055 - C12677 * C4005 - C12509 * C4143 +
             C12453 * C4187) *
                C28784 * C17613 +
            (C24130 + C24129) * C28784 * C17612) *
               C28950) *
              C28840 * C1768 +
          (((C13955 + C13954) * C28784 * C17612 +
            (C12509 * C4056 - C12677 * C4006 - C12509 * C4144 + C12453 * C4188 +
             C12510 * C8866 - C12678 * C8812 - C12510 * C8970 +
             C12454 * C9022) *
                C28784 * C17613) *
               C28950 -
           ((C13954 + C13955) * C28784 * C17613 +
            (C12705 + C12704) * C28784 * C17612) *
               C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12509 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C12453 +
            (C23351 - C23352 + C23353 - C23354) * C12510 +
            (C23561 - C23562 + C23563 - C23564) * C12454) *
               C28784 * C3112 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12509 +
            (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
             C17613 * C4228) *
                C12453 +
            (C25679 - C25680 + C25681 - C25682) * C12510 +
            (C25903 - C25904 + C25905 - C25906) * C12454) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C17718 - C17717 + C17720 - C17719) * C12509 +
            (C17884 - C17883 + C17886 - C17885) * C12453 +
            (C18273 - C18274 + C18275 - C18276) * C12510 +
            (C18486 - C18487 + C18488 - C18489) * C12454) *
               C28784 * C3112 +
           ((C18935 - C18934 + C18937 - C18936) * C12509 +
            (C19161 - C19160 + C19163 - C19162) * C12453 +
            (C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
             C17715 * C8812) *
                C12510 +
            (C17612 * C2898 - C17714 * C2789 + C17613 * C9073 -
             C17715 * C8970) *
                C12454) *
               C28784 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C17714 +
             (C28784 * C448 - C4399 * C443) * C17612 +
             (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                C12453 +
            ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
             C25753 * C17715 + C25973 * C17613) *
                C12454) *
               C3112 +
           (((C9490 - C9489) * C17714 + (C9689 - C9688) * C17612 +
             (C9494 - C9493) * C17715 + (C9691 - C9690) * C17613) *
                C12453 +
            (C25755 * C17714 + C25974 * C17612 + (C10823 - C10824) * C17715 +
             (C10997 - C10998) * C17613) *
                C12454) *
               C28950) *
              C28840 * C1768 +
          ((((C4399 * C94 - C28784 * C100) * C17714 +
             (C4399 * C444 - C28784 * C449) * C17612 +
             (C9497 - C9498) * C17715 + (C9692 - C9693) * C17613) *
                C12453 +
            ((C4984 - C4985) * C17714 + (C5160 - C5161) * C17612 +
             (C23425 - C23426) * C17715 + (C23631 - C23632) * C17613) *
                C12454) *
               C3112 +
           (((C9498 - C9497) * C17714 + (C9693 - C9692) * C17612 +
             (C9502 - C9501) * C17715 + (C9695 - C9694) * C17613) *
                C12453 +
            ((C23426 - C23425) * C17714 + (C23632 - C23631) * C17612 +
             (C28784 * C8813 - C4399 * C8812) * C17715 +
             (C28784 * C9125 - C4399 * C9124) * C17613) *
                C12454) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C17714 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C17612 +
            (C23911 - C23912 + C23913 - C23914) * C17715 +
            (C24329 - C24330 + C24331 - C24332) * C17613) *
               C28784 * C3112 +
           ((C23912 - C23911 + C23914 - C23913) * C17714 +
            (C24330 - C24329 + C24332 - C24331) * C17612 +
            (C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
             C12454 * C8121) *
                C17715 +
            (C12509 * C4269 - C12453 * C4313 + C12510 * C8327 -
             C12454 * C8369) *
                C17613) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C12513 - C12512 + C12515 - C12514) * C17714 +
            (C12859 - C12858 + C12861 - C12860) * C17612 +
            (C13732 - C13733 + C13734 - C13735) * C17715 +
            (C14156 - C14157 + C14158 - C14159) * C17613) *
               C28784 * C3112 +
           ((C13733 - C13732 + C13735 - C13734) * C17714 +
            (C14157 - C14156 + C14159 - C14158) * C17612 +
            (C12453 * C4056 - C12509 * C4006 + C12454 * C8866 -
             C12510 * C8812) *
                C17715 +
            (C12453 * C4314 - C12509 * C4270 + C12454 * C9176 -
             C12510 * C9124) *
                C17613) *
               C28784 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C12453 +
                      (C23777 + C23778) * C12454) *
                         C28784 * C3112 -
                     ((C26123 + C26124) * C12454 +
                      (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 +
                       C17613 * C4354 + C17714 * C1330 - C18040 * C1200 -
                       C17714 * C1580 + C17612 * C1698) *
                          C12453) *
                         C28784 * C28950) *
                        C28840 * C1768 +
                    (((C19385 + C19384) * C12453 +
                      (C17714 * C2733 - C18040 * C2615 - C17714 * C2951 +
                       C17612 * C3060 + C17715 * C8918 - C18041 * C8812 -
                       C17715 * C9124 + C17613 * C9227) *
                          C12454) *
                         C28784 * C28950 -
                     ((C18702 + C18703) * C12454 + (C18068 + C18067) * C12453) *
                         C28784 * C3112) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) *
                 C17612 +
             C9311 * C17613) *
                C12453 +
            (C23208 + C23209) * C12454) *
               C3112 -
           ((C25537 + C25538) * C12454 +
            (C9312 * C17613 + C9311 * C17612) * C12453) *
               C28950) *
              C624 +
          (((C25538 + C25537) * C12453 +
            (C6684 * C17612 +
             (C4399 * C8079 - C4400 * C8076 - C4399 * C8080 + C28784 * C8082) *
                 C17613) *
                C12454) *
               C28950 -
           ((C25043 + C25044) * C12454 + (C23209 + C23208) * C12453) * C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                 C4399 +
             (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                 C28784) *
                C17612 +
            ((C23911 - C23912 + C23913 - C23914) * C4399 +
             (C23915 - C23916 + C23917 - C23918) * C28784) *
                C17613) *
               C3112 +
           (((C23912 - C23911 + C23914 - C23913) * C4399 +
             (C23916 - C23915 + C23918 - C23917) * C28784) *
                C17612 +
            ((C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
              C12454 * C8121) *
                 C4399 +
             (C12509 * C4009 - C12453 * C4058 + C12510 * C8078 -
              C12454 * C8123) *
                 C28784) *
                C17613) *
               C28950) *
              C624 +
          ((((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                 C4399 +
             (C12509 * C637 - C12453 * C698 + C12510 * C2216 - C12454 * C2265) *
                 C28784) *
                C17612 +
            ((C25605 - C25606 + C25607 - C25608) * C4399 +
             (C25609 - C25610 + C25611 - C25612) * C28784) *
                C17613) *
               C3112 +
           (((C25606 - C25605 + C25608 - C25607) * C4399 +
             (C25610 - C25609 + C25612 - C25611) * C28784) *
                C17612 +
            ((C12453 * C8121 - C12509 * C8075 + C12454 * C8122 -
              C12510 * C8076) *
                 C4399 +
             (C12453 * C8123 - C12509 * C8078 + C12454 * C8124 -
              C12510 * C8080) *
                 C28784) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C4399 +
             (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                 C28784) *
                C12453 +
            ((C23351 - C23352 + C23353 - C23354) * C4399 +
             (C23355 - C23356 + C23357 - C23358) * C28784) *
                C12454) *
               C3112 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C4399 +
             (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
              C17613 * C4102) *
                 C28784) *
                C12453 +
            ((C25679 - C25680 + C25681 - C25682) * C4399 +
             (C25683 - C25684 + C25685 - C25686) * C28784) *
                C12454) *
               C28950) *
              C624 +
          ((((C23352 - C23351 + C23354 - C23353) * C4399 +
             (C23356 - C23355 + C23358 - C23357) * C28784) *
                C12453 +
            ((C25145 - C25146 + C25147 - C25148) * C4399 +
             (C25149 - C25150 + C25151 - C25152) * C28784) *
                C12454) *
               C3112 +
           (((C25680 - C25679 + C25682 - C25681) * C4399 +
             (C25684 - C25683 + C25686 - C25685) * C28784) *
                C12453 +
            ((C17612 * C5450 - C17714 * C5338 + C17613 * C8164 -
              C17715 * C8076) *
                 C4399 +
             (C17612 * C5452 - C17714 * C5341 + C17613 * C8166 -
              C17715 * C8080) *
                 C28784) *
                C12454) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C12509 +
             (C28784 * C282 - C4399 * C277) * C12453 +
             (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                C17612 +
            ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
             C25753 * C12510 + C25754 * C12454) *
                C17613) *
               C3112 +
           (((C9490 - C9489) * C12509 + (C9492 - C9491) * C12453 +
             C25755 * C12510 + C25756 * C12454) *
                C17612 +
            ((C9494 - C9493) * C12509 + (C9496 - C9495) * C12453 +
             (C10823 - C10824) * C12510 + (C10825 - C10826) * C12454) *
                C17613) *
               C28950) *
              C624 +
          ((((C4977 - C4976) * C12509 + (C4979 - C4978) * C12453 +
             (C4981 - C4980) * C12510 + (C4983 - C4982) * C12454) *
                C17612 +
            (C25755 * C12509 + C25756 * C12453 + (C6856 - C6857) * C12510 +
             (C6858 - C6859) * C12454) *
                C17613) *
               C3112 +
           ((C25753 * C12509 + C25754 * C12453 + (C6857 - C6856) * C12510 +
             (C6859 - C6858) * C12454) *
                C17612 +
            ((C10824 - C10823) * C12509 + (C10826 - C10825) * C12453 +
             (C28784 * C8079 - C4399 * C8076) * C12510 +
             (C28784 * C8208 - C4399 * C8206) * C12454) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
             C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
                C28784 * C17612 +
            (C24129 + C24130) * C28784 * C17613) *
               C3112 -
           ((C12510 * C8121 - C12678 * C8075 - C12510 * C8205 + C12454 * C8247 +
             C12509 * C4055 - C12677 * C4005 - C12509 * C4143 +
             C12453 * C4187) *
                C28784 * C17613 +
            (C24130 + C24129) * C28784 * C17612) *
               C28950) *
              C624 +
          (((C25835 + C25836) * C28784 * C17612 +
            (C12509 * C8121 - C12677 * C8075 - C12509 * C8205 + C12453 * C8247 +
             C12510 * C8122 - C12678 * C8076 - C12510 * C8206 +
             C12454 * C8248) *
                C28784 * C17613) *
               C28950 -
           ((C25836 + C25835) * C28784 * C17613 +
            (C12510 * C2262 - C12678 * C2212 - C12510 * C2350 + C12454 * C2394 +
             C12509 * C694 - C12677 * C630 - C12509 * C826 + C12453 * C886) *
                C28784 * C17612) *
               C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12509 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C12453 +
            (C23351 - C23352 + C23353 - C23354) * C12510 +
            (C23561 - C23562 + C23563 - C23564) * C12454) *
               C28784 * C3112 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12509 +
            (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
             C17613 * C4228) *
                C12453 +
            (C25679 - C25680 + C25681 - C25682) * C12510 +
            (C25903 - C25904 + C25905 - C25906) * C12454) *
               C28784 * C28950) *
              C624 +
          (((C23352 - C23351 + C23354 - C23353) * C12509 +
            (C23562 - C23561 + C23564 - C23563) * C12453 +
            (C25145 - C25146 + C25147 - C25148) * C12510 +
            (C25303 - C25304 + C25305 - C25306) * C12454) *
               C28784 * C3112 +
           ((C25680 - C25679 + C25682 - C25681) * C12509 +
            (C25904 - C25903 + C25906 - C25905) * C12453 +
            (C17612 * C5450 - C17714 * C5338 + C17613 * C8164 -
             C17715 * C8076) *
                C12510 +
            (C17612 * C5610 - C17714 * C5504 + C17613 * C8288 -
             C17715 * C8206) *
                C12454) *
               C28784 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C17714 +
             (C28784 * C448 - C4399 * C443) * C17612 +
             (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                C12453 +
            ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
             C25753 * C17715 + C25973 * C17613) *
                C12454) *
               C3112 +
           (((C9490 - C9489) * C17714 + (C9689 - C9688) * C17612 +
             (C9494 - C9493) * C17715 + (C9691 - C9690) * C17613) *
                C12453 +
            (C25755 * C17714 + C25974 * C17612 + (C10823 - C10824) * C17715 +
             (C10997 - C10998) * C17613) *
                C12454) *
               C28950) *
              C624 +
          ((((C4977 - C4976) * C17714 + (C5157 - C5156) * C17612 +
             C25755 * C17715 + C25974 * C17613) *
                C12453 +
            ((C4981 - C4980) * C17714 + (C5159 - C5158) * C17612 +
             (C6856 - C6857) * C17715 + (C7020 - C7021) * C17613) *
                C12454) *
               C3112 +
           ((C25753 * C17714 + C25973 * C17612 + (C10824 - C10823) * C17715 +
             (C10998 - C10997) * C17613) *
                C12453 +
            ((C6857 - C6856) * C17714 + (C7021 - C7020) * C17612 +
             (C28784 * C8079 - C4399 * C8076) * C17715 +
             (C28784 * C8330 - C4399 * C8328) * C17613) *
                C12454) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C17714 +
            (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
                C17612 +
            (C23911 - C23912 + C23913 - C23914) * C17715 +
            (C24329 - C24330 + C24331 - C24332) * C17613) *
               C28784 * C3112 +
           ((C23912 - C23911 + C23914 - C23913) * C17714 +
            (C24330 - C24329 + C24332 - C24331) * C17612 +
            (C12509 * C4005 - C12453 * C4055 + C12510 * C8075 -
             C12454 * C8121) *
                C17715 +
            (C12509 * C4269 - C12453 * C4313 + C12510 * C8327 -
             C12454 * C8369) *
                C17613) *
               C28784 * C28950) *
              C624 +
          (((C12509 * C630 - C12453 * C694 + C12510 * C2212 - C12454 * C2262) *
                C17714 +
            (C12509 * C1010 - C12453 * C1068 + C12510 * C2476 -
             C12454 * C2520) *
                C17612 +
            (C25605 - C25606 + C25607 - C25608) * C17715 +
            (C26041 - C26042 + C26043 - C26044) * C17613) *
               C28784 * C3112 +
           ((C25606 - C25605 + C25608 - C25607) * C17714 +
            (C26042 - C26041 + C26044 - C26043) * C17612 +
            (C12453 * C8121 - C12509 * C8075 + C12454 * C8122 -
             C12510 * C8076) *
                C17715 +
            (C12453 * C8369 - C12509 * C8327 + C12454 * C8370 -
             C12510 * C8328) *
                C17613) *
               C28784 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C12453 +
                      (C23777 + C23778) * C12454) *
                         C28784 * C3112 -
                     ((C26123 + C26124) * C12454 +
                      (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 +
                       C17613 * C4354 + C17714 * C1330 - C18040 * C1200 -
                       C17714 * C1580 + C17612 * C1698) *
                          C12453) *
                         C28784 * C28950) *
                        C624 +
                    (((C26124 + C26123) * C12453 +
                      (C17714 * C5450 - C18040 * C5338 - C17714 * C5662 +
                       C17612 * C5768 + C17715 * C8164 - C18041 * C8076 -
                       C17715 * C8328 + C17613 * C8410) *
                          C12454) *
                         C28784 * C28950 -
                     ((C25469 + C25470) * C12454 + (C23778 + C23777) * C12453) *
                         C28784 * C3112) *
                        C28948) *
                   C28806) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C17612 +
            C9311 * C17613) *
               C12453 +
           (C23208 + C23209) * C12454) *
              C4002 -
          ((C25537 + C25538) * C12454 +
           (C9312 * C17613 + C9311 * C17612) * C12453) *
              C4003 +
          ((C9312 * C17612 + C12053 * C17613) * C12453 +
           (C10658 * C17612 + (C4399 * C10648 - C4400 * C10647 -
                               C4399 * C10649 + C28784 * C10650) *
                                  C17613) *
               C12454) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
                C4399 +
            (C12453 * C157 - C12509 * C99 + C12454 * C698 - C12510 * C637) *
                C28784) *
               C17612 +
           ((C23911 - C23912 + C23913 - C23914) * C4399 +
            (C23915 - C23916 + C23917 - C23918) * C28784) *
               C17613) *
              C4002 +
          (((C23912 - C23911 + C23914 - C23913) * C4399 +
            (C23916 - C23915 + C23918 - C23917) * C28784) *
               C17612 +
           ((C27413 - C27414 + C27415 - C27416) * C4399 +
            (C27417 - C27418 + C27419 - C27420) * C28784) *
               C17613) *
              C4003 +
          (((C27414 - C27413 + C27416 - C27415) * C4399 +
            (C27418 - C27417 + C27420 - C27419) * C28784) *
               C17612 +
           ((C12453 * C9364 - C12509 * C9278 + C12454 * C10708 -
             C12510 * C10647) *
                C4399 +
            (C12453 * C9366 - C12509 * C9281 + C12454 * C10709 -
             C12510 * C10649) *
                C28784) *
               C17613) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C4399 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C28784) *
               C12453 +
           ((C23351 - C23352 + C23353 - C23354) * C4399 +
            (C23355 - C23356 + C23357 - C23358) * C28784) *
               C12454) *
              C4002 +
          (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C4399 +
            (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
             C17613 * C4102) *
                C28784) *
               C12453 +
           ((C25679 - C25680 + C25681 - C25682) * C4399 +
            (C25683 - C25684 + C25685 - C25686) * C28784) *
               C12454) *
              C4003 +
          (((C17612 * C4099 - C17714 * C4005 + C17613 * C9430 -
             C17715 * C9278) *
                C4399 +
            (C17612 * C4102 - C17714 * C4009 + C17613 * C9432 -
             C17715 * C9281) *
                C28784) *
               C12453 +
           ((C17612 * C8163 - C17714 * C8075 + C17613 * C10768 -
             C17715 * C10647) *
                C4399 +
            (C17612 * C8165 - C17714 * C8078 + C17613 * C10769 -
             C17715 * C10649) *
                C28784) *
               C12454) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C12509 +
                      (C28784 * C282 - C4399 * C277) * C12453 +
                      (C4976 - C4977) * C12510 + (C4978 - C4979) * C12454) *
                         C17612 +
                     ((C9489 - C9490) * C12509 + (C9491 - C9492) * C12453 +
                      C25753 * C12510 + C25754 * C12454) *
                         C17613) *
                        C4002 +
                    (((C9490 - C9489) * C12509 + (C9492 - C9491) * C12453 +
                      C25755 * C12510 + C25756 * C12454) *
                         C17612 +
                     ((C9494 - C9493) * C12509 + (C9496 - C9495) * C12453 +
                      (C10823 - C10824) * C12510 + (C10825 - C10826) * C12454) *
                         C17613) *
                        C4003 +
                    ((C12183 * C12509 + C12184 * C12453 +
                      (C10824 - C10823) * C12510 + (C10826 - C10825) * C12454) *
                         C17612 +
                     ((C12186 - C12185) * C12509 + (C12188 - C12187) * C12453 +
                      (C28784 * C10648 - C4399 * C10647) * C12510 +
                      (C28784 * C10821 - C4399 * C10820) * C12454) *
                         C17613) *
                        C4004) *
                   C28840 * C28806) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12509 * C152 - C12677 * C93 - C12509 * C277 + C12453 * C326 +
            C12510 * C694 - C12678 * C630 - C12510 * C826 + C12454 * C886) *
               C28784 * C17612 +
           (C24129 + C24130) * C28784 * C17613) *
              C4002 -
          ((C27583 + C27584) * C28784 * C17613 +
           (C24130 + C24129) * C28784 * C17612) *
              C4003 +
          ((C27584 + C27583) * C28784 * C17612 +
           (C12509 * C9364 - C12677 * C9278 - C12509 * C9484 + C12453 * C9554 +
            C12510 * C10708 - C12678 * C10647 - C12510 * C10820 +
            C12454 * C10876) *
               C28784 * C17613) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
               C12509 +
           (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
               C12453 +
           (C23351 - C23352 + C23353 - C23354) * C12510 +
           (C23561 - C23562 + C23563 - C23564) * C12454) *
              C28784 * C4002 +
          ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 - C17613 * C4099) *
               C12509 +
           (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 - C17613 * C4228) *
               C12453 +
           (C25679 - C25680 + C25681 - C25682) * C12510 +
           (C25903 - C25904 + C25905 - C25906) * C12454) *
              C28784 * C4003 +
          ((C17612 * C4099 - C17714 * C4005 + C17613 * C9430 - C17715 * C9278) *
               C12509 +
           (C17612 * C4228 - C17714 * C4143 + C17613 * C9631 - C17715 * C9484) *
               C12453 +
           (C17612 * C8163 - C17714 * C8075 + C17613 * C10768 -
            C17715 * C10647) *
               C12510 +
           (C17612 * C8287 - C17714 * C8205 + C17613 * C10943 -
            C17715 * C10820) *
               C12454) *
              C28784 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C17714 +
                      (C28784 * C448 - C4399 * C443) * C17612 +
                      (C9489 - C9490) * C17715 + (C9688 - C9689) * C17613) *
                         C12453 +
                     ((C4976 - C4977) * C17714 + (C5156 - C5157) * C17612 +
                      C25753 * C17715 + C25973 * C17613) *
                         C12454) *
                        C4002 +
                    (((C9490 - C9489) * C17714 + (C9689 - C9688) * C17612 +
                      (C9494 - C9493) * C17715 + (C9691 - C9690) * C17613) *
                         C12453 +
                     (C25755 * C17714 + C25974 * C17612 +
                      (C10823 - C10824) * C17715 + (C10997 - C10998) * C17613) *
                         C12454) *
                        C4003 +
                    ((C12183 * C17714 + C12318 * C17612 +
                      (C12186 - C12185) * C17715 + (C12320 - C12319) * C17613) *
                         C12453 +
                     ((C10824 - C10823) * C17714 + (C10998 - C10997) * C17612 +
                      (C28784 * C10648 - C4399 * C10647) * C17715 +
                      (C28784 * C10995 - C4399 * C10994) * C17613) *
                         C12454) *
                        C4004) *
                   C28840 * C28806) /
                  (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12453 * C152 - C12509 * C93 + C12454 * C694 - C12510 * C630) *
               C17714 +
           (C12453 * C491 - C12509 * C443 + C12454 * C1068 - C12510 * C1010) *
               C17612 +
           (C23911 - C23912 + C23913 - C23914) * C17715 +
           (C24329 - C24330 + C24331 - C24332) * C17613) *
              C28784 * C4002 +
          ((C23912 - C23911 + C23914 - C23913) * C17714 +
           (C24330 - C24329 + C24332 - C24331) * C17612 +
           (C27413 - C27414 + C27415 - C27416) * C17715 +
           (C27735 - C27736 + C27737 - C27738) * C17613) *
              C28784 * C4003 +
          ((C27414 - C27413 + C27416 - C27415) * C17714 +
           (C27736 - C27735 + C27738 - C27737) * C17612 +
           (C12453 * C9364 - C12509 * C9278 + C12454 * C10708 -
            C12510 * C10647) *
               C17715 +
           (C12453 * C9745 - C12509 * C9683 + C12454 * C11048 -
            C12510 * C10994) *
               C17613) *
              C28784 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
            C17715 * C1330 - C18041 * C1200 - C17715 * C1580 + C17613 * C1698) *
               C12453 +
           (C23777 + C23778) * C12454) *
              C28784 * C4002 -
          ((C26123 + C26124) * C12454 +
           (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 + C17613 * C4354 +
            C17714 * C1330 - C18040 * C1200 - C17714 * C1580 + C17612 * C1698) *
               C12453) *
              C28784 * C4003 +
          ((C17714 * C4099 - C18040 * C4005 - C17714 * C4269 + C17612 * C4354 +
            C17715 * C9430 - C18041 * C9278 - C17715 * C9683 + C17613 * C9803) *
               C12453 +
           (C17714 * C8163 - C18040 * C8075 - C17714 * C8327 + C17612 * C8409 +
            C17715 * C10768 - C18041 * C10647 - C17715 * C10994 +
            C17613 * C11103) *
               C12454) *
              C28784 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (-std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
               C4396 +
           (C4399 * C636 - C4400 * C630 - C4399 * C637 + C28784 * C642) *
               C28881 * C4397 +
           (C4399 * C2215 - C4400 * C2212 - C4399 * C2216 + C28784 * C2221) *
               C28881 * C4398) *
              C28857 * C28840 * C84 -
          ((C4399 * C2217 - C4400 * C2213 - C4399 * C2218 + C28784 * C2222) *
               C28881 * C4398 +
           (C4399 * C634 - C4400 * C629 - C4399 * C635 + C28784 * C641) *
               C28881 * C4397 +
           (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
               C28881 * C4396) *
              C28857 * C28840 * C85 +
          ((C4399 * C102 - C4400 * C95 - C4399 * C103 + C28784 * C110) *
               C28881 * C4396 +
           (C4399 * C632 - C4400 * C628 - C4399 * C633 + C28784 * C640) *
               C28881 * C4397 +
           (C4399 * C2219 - C4400 * C2214 - C4399 * C2220 + C28784 * C2223) *
               C28881 * C4398) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C28881 * C28870 * C28857 * C28840 * C84 -
          (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
           C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
           C87 * C101 + C77 * C109) *
              C28881 * C28870 * C28857 * C28840 * C85 +
          (C87 * C102 - C88 * C95 - C87 * C103 + C77 * C110 + C89 * C104 -
           C90 * C96 - C89 * C105 + C78 * C111 + C91 * C106 - C92 * C97 -
           C91 * C107 + C79 * C112) *
              C28881 * C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
           (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
               C8450 +
           (C4399 * C4008 - C4400 * C4005 - C4399 * C4009 + C28784 * C4014) *
               C8451) *
              C28870 * C28857 * C28840 * C84 -
          ((C4399 * C4010 - C4400 * C4006 - C4399 * C4011 + C28784 * C4015) *
               C8451 +
           (C4399 * C1204 - C4400 * C1199 - C4399 * C1205 + C28784 * C1211) *
               C8450 +
           (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
               C8449) *
              C28870 * C28857 * C28840 * C85 +
          ((C4399 * C102 - C4400 * C95 - C4399 * C103 + C28784 * C110) * C8449 +
           (C4399 * C1202 - C4400 * C1198 - C4399 * C1203 + C28784 * C1210) *
               C8450 +
           (C4399 * C4012 - C4400 * C4007 - C4399 * C4013 + C28784 * C4016) *
               C8451) *
              C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (-std::pow(Pi, 2.5) * (((C4396 * C152 - C4439 * C93 + C4397 * C694 -
                                 C4440 * C630 + C4398 * C2262 - C4441 * C2212) *
                                    C4399 +
                                (C4396 * C157 - C4439 * C99 + C4397 * C698 -
                                 C4440 * C637 + C4398 * C2265 - C4441 * C2216) *
                                    C28784) *
                                   C28881 * C28857 * C28840 * C84 +
                               ((C4439 * C94 - C4396 * C153 + C4440 * C629 -
                                 C4397 * C695 + C4441 * C2213 - C4398 * C2263) *
                                    C4399 +
                                (C4439 * C101 - C4396 * C158 + C4440 * C635 -
                                 C4397 * C699 + C4441 * C2218 - C4398 * C2266) *
                                    C28784) *
                                   C28881 * C28857 * C28840 * C85 +
                               ((C4396 * C154 - C4439 * C95 + C4397 * C696 -
                                 C4440 * C628 + C4398 * C2264 - C4441 * C2214) *
                                    C4399 +
                                (C4396 * C159 - C4439 * C103 + C4397 * C700 -
                                 C4440 * C633 + C4398 * C2267 - C4441 * C2220) *
                                    C28784) *
                                   C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C87 +
           (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C28881 * C28857 * C28840 * C84 +
          ((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
           (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
              C28881 * C28857 * C28840 * C85 +
          (C175 * C87 + C176 * C77 + (C172 - C171) * C89 + (C174 - C173) * C78 +
           (C28870 * C156 - C151 * C97) * C91 +
           (C28870 * C161 - C151 * C107) * C79) *
              C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C4399 +
            (C28870 * C157 - C151 * C99) * C28784) *
               C8449 +
           ((C28870 * C1264 - C151 * C1200) * C4399 +
            (C28870 * C1268 - C151 * C1207) * C28784) *
               C8450 +
           ((C28870 * C4055 - C151 * C4005) * C4399 +
            (C28870 * C4058 - C151 * C4009) * C28784) *
               C8451) *
              C28857 * C28840 * C84 +
          (((C164 - C163) * C4399 + (C166 - C165) * C28784) * C8449 +
           ((C1273 - C1274) * C4399 + (C1275 - C1276) * C28784) * C8450 +
           ((C151 * C4006 - C28870 * C4056) * C4399 +
            (C151 * C4011 - C28870 * C4059) * C28784) *
               C8451) *
              C28857 * C28840 * C85 +
          ((C175 * C4399 + C176 * C28784) * C8449 +
           ((C1278 - C1277) * C4399 + (C1280 - C1279) * C28784) * C8450 +
           ((C28870 * C4057 - C151 * C4007) * C4399 +
            (C28870 * C4060 - C151 * C4013) * C28784) *
               C8451) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4399 +
            (C28881 * C220 - C214 * C99) * C28784) *
               C4396 +
           ((C28881 * C760 - C214 * C630) * C4399 +
            (C28881 * C764 - C214 * C637) * C28784) *
               C4397 +
           ((C28881 * C2306 - C214 * C2212) * C4399 +
            (C28881 * C2309 - C214 * C2216) * C28784) *
               C4398) *
              C28857 * C28840 * C84 +
          (((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
           ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
           ((C214 * C2213 - C28881 * C2307) * C4399 +
            (C214 * C2218 - C28881 * C2310) * C28784) *
               C4398) *
              C28857 * C28840 * C85 +
          ((C238 * C4399 + C239 * C28784) * C4396 +
           ((C774 - C773) * C4399 + (C776 - C775) * C28784) * C4397 +
           ((C28881 * C2308 - C214 * C2214) * C4399 +
            (C28881 * C2311 - C214 * C2220) * C28784) *
               C4398) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C87 +
           (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C28870 * C28857 * C28840 * C84 +
          ((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
           (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
              C28870 * C28857 * C28840 * C85 +
          (C238 * C87 + C239 * C77 + (C235 - C234) * C89 + (C237 - C236) * C78 +
           (C28881 * C219 - C214 * C97) * C91 +
           (C28881 * C224 - C214 * C107) * C79) *
              C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
            C8451 * C4099 - C8530 * C4005) *
               C4399 +
           (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
            C8451 * C4102 - C8530 * C4009) *
               C28784) *
              C28870 * C28857 * C28840 * C84 +
          ((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
            C8530 * C4006 - C8451 * C4100) *
               C4399 +
           (C8528 * C101 - C8449 * C221 + C8529 * C1205 - C8450 * C1335 +
            C8530 * C4011 - C8451 * C4103) *
               C28784) *
              C28870 * C28857 * C28840 * C85 +
          ((C8449 * C217 - C8528 * C95 + C8450 * C1332 - C8529 * C1198 +
            C8451 * C4101 - C8530 * C4007) *
               C4399 +
           (C8449 * C222 - C8528 * C103 + C8450 * C1336 - C8529 * C1203 +
            C8451 * C4104 - C8530 * C4013) *
               C28784) *
              C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (-std::pow(Pi, 2.5) * (((C28784 * C98 - C4399 * C93) * C4439 +
                                (C28784 * C282 - C4399 * C277) * C4396 +
                                (C28784 * C636 - C4399 * C630) * C4440 +
                                (C28784 * C830 - C4399 * C826) * C4397 +
                                (C28784 * C2215 - C4399 * C2212) * C4441 +
                                (C28784 * C2353 - C4399 * C2350) * C4398) *
                                   C28881 * C28857 * C28840 * C84 +
                               ((C4399 * C94 - C28784 * C100) * C4439 +
                                (C4399 * C278 - C28784 * C283) * C4396 +
                                (C4399 * C629 - C28784 * C634) * C4440 +
                                (C4399 * C827 - C28784 * C831) * C4397 +
                                (C4399 * C2213 - C28784 * C2217) * C4441 +
                                (C4399 * C2351 - C28784 * C2354) * C4398) *
                                   C28881 * C28857 * C28840 * C85 +
                               ((C28784 * C102 - C4399 * C95) * C4439 +
                                (C28784 * C284 - C4399 * C279) * C4396 +
                                (C28784 * C632 - C4399 * C628) * C4440 +
                                (C28784 * C832 - C4399 * C828) * C4397 +
                                (C28784 * C2219 - C4399 * C2214) * C4441 +
                                (C28784 * C2355 - C4399 * C2352) * C4398) *
                                   C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                                C79 * C102 - C91 * C95) *
                                   C151 +
                               (C77 * C282 - C87 * C277 + C78 * C283 -
                                C89 * C278 + C79 * C284 - C91 * C279) *
                                   C28870) *
                                  C28881 * C28857 * C28840 * C84 +
                              ((C87 * C94 - C77 * C100 + C89 * C95 -
                                C78 * C102 + C91 * C96 - C79 * C104) *
                                   C151 +
                               (C87 * C278 - C77 * C283 + C89 * C279 -
                                C78 * C284 + C91 * C280 - C79 * C285) *
                                   C28870) *
                                  C28881 * C28857 * C28840 * C85 +
                              ((C77 * C102 - C87 * C95 + C78 * C104 -
                                C89 * C96 + C79 * C106 - C91 * C97) *
                                   C151 +
                               (C77 * C284 - C87 * C279 + C78 * C285 -
                                C89 * C280 + C79 * C286 - C91 * C281) *
                                   C28870) *
                                  C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C151 +
            (C28784 * C282 - C4399 * C277) * C28870) *
               C8449 +
           ((C28784 * C1206 - C4399 * C1200) * C151 +
            (C28784 * C1400 - C4399 * C1396) * C28870) *
               C8450 +
           ((C28784 * C4008 - C4399 * C4005) * C151 +
            (C28784 * C4146 - C4399 * C4143) * C28870) *
               C8451) *
              C28857 * C28840 * C84 +
          (((C4399 * C94 - C28784 * C100) * C151 +
            (C4399 * C278 - C28784 * C283) * C28870) *
               C8449 +
           ((C4399 * C1199 - C28784 * C1204) * C151 +
            (C4399 * C1397 - C28784 * C1401) * C28870) *
               C8450 +
           ((C4399 * C4006 - C28784 * C4010) * C151 +
            (C4399 * C4144 - C28784 * C4147) * C28870) *
               C8451) *
              C28857 * C28840 * C85 +
          (((C28784 * C102 - C4399 * C95) * C151 +
            (C28784 * C284 - C4399 * C279) * C28870) *
               C8449 +
           ((C28784 * C1202 - C4399 * C1198) * C151 +
            (C28784 * C1402 - C4399 * C1398) * C28870) *
               C8450 +
           ((C28784 * C4012 - C4399 * C4007) * C151 +
            (C28784 * C4148 - C4399 * C4145) * C28870) *
               C8451) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (-std::pow(Pi, 2.5) *
         ((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
           C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
           C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
              C28784 * C28881 * C28857 * C28840 * C84 -
          (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
           C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
           C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
              C28784 * C28881 * C28857 * C28840 * C85 +
          (C4439 * C154 - C4556 * C95 - C4439 * C279 + C4396 * C328 +
           C4440 * C696 - C4557 * C628 - C4440 * C828 + C4397 * C884 +
           C4441 * C2264 - C4558 * C2214 - C4441 * C2352 + C4398 * C2396) *
              C28784 * C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C28881 * C28857 * C28840 * C84 -
          (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C28857 * C28840 *
              C85 +
          (C351 * C77 + C352 * C78 +
           (C151 * C156 - C325 * C97 - C151 * C281 + C28870 * C330) * C79) *
              C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
               C8449 +
           (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
               C28784 * C8450 +
           (C151 * C4055 - C325 * C4005 - C151 * C4143 + C28870 * C4187) *
               C28784 * C8451) *
              C28857 * C28840 * C84 -
          ((C151 * C4056 - C325 * C4006 - C151 * C4144 + C28870 * C4188) *
               C28784 * C8451 +
           C1472 * C28784 * C8450 + C350 * C28784 * C8449) *
              C28857 * C28840 * C85 +
          (C351 * C28784 * C8449 + C1471 * C28784 * C8450 +
           (C151 * C4057 - C325 * C4007 - C151 * C4145 + C28870 * C4189) *
               C28784 * C8451) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (-std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C4439 +
           (C28881 * C390 - C214 * C277) * C4396 +
           (C28881 * C760 - C214 * C630) * C4440 +
           (C28881 * C952 - C214 * C826) * C4397 +
           (C28881 * C2306 - C214 * C2212) * C4441 +
           (C28881 * C2435 - C214 * C2350) * C4398) *
              C28784 * C28857 * C28840 * C84 +
          ((C227 - C226) * C4439 + (C397 - C396) * C4396 +
           (C769 - C770) * C4440 + (C957 - C958) * C4397 +
           (C214 * C2213 - C28881 * C2307) * C4441 +
           (C214 * C2351 - C28881 * C2436) * C4398) *
              C28784 * C28857 * C28840 * C85 +
          (C238 * C4439 + C403 * C4396 + (C774 - C773) * C4440 +
           (C960 - C959) * C4397 + (C28881 * C2308 - C214 * C2214) * C4441 +
           (C28881 * C2437 - C214 * C2352) * C4398) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C151 +
            (C28881 * C390 - C214 * C277) * C28870) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 + C405 * C79) *
              C28857 * C28840 * C84 +
          (((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
           ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
           ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
              C28857 * C28840 * C85 +
          (C405 * C77 + ((C235 - C234) * C151 + (C402 - C401) * C28870) * C78 +
           ((C28881 * C219 - C214 * C97) * C151 +
            (C28881 * C394 - C214 * C281) * C28870) *
               C79) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
            C8451 * C4099 - C8530 * C4005) *
               C151 +
           (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
            C8451 * C4228 - C8530 * C4143) *
               C28870) *
              C28784 * C28857 * C28840 * C84 +
          ((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
            C8530 * C4006 - C8451 * C4100) *
               C151 +
           (C8528 * C278 - C8449 * C391 + C8529 * C1397 - C8450 * C1523 +
            C8530 * C4144 - C8451 * C4229) *
               C28870) *
              C28784 * C28857 * C28840 * C85 +
          ((C8449 * C217 - C8528 * C95 + C8450 * C1332 - C8529 * C1198 +
            C8451 * C4101 - C8530 * C4007) *
               C151 +
           (C8449 * C392 - C8528 * C279 + C8450 * C1524 - C8529 * C1398 +
            C8451 * C4230 - C8530 * C4145) *
               C28870) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (-std::pow(Pi, 2.5) * ((((C28784 * C98 - C4399 * C93) * C214 +
                                 (C28784 * C448 - C4399 * C443) * C28881) *
                                    C4396 +
                                ((C28784 * C636 - C4399 * C630) * C214 +
                                 (C28784 * C1014 - C4399 * C1010) * C28881) *
                                    C4397 +
                                ((C28784 * C2215 - C4399 * C2212) * C214 +
                                 (C28784 * C2479 - C4399 * C2476) * C28881) *
                                    C4398) *
                                   C28857 * C28840 * C84 +
                               (((C4399 * C94 - C28784 * C100) * C214 +
                                 (C4399 * C444 - C28784 * C449) * C28881) *
                                    C4396 +
                                ((C4399 * C629 - C28784 * C634) * C214 +
                                 (C4399 * C1011 - C28784 * C1015) * C28881) *
                                    C4397 +
                                ((C4399 * C2213 - C28784 * C2217) * C214 +
                                 (C4399 * C2477 - C28784 * C2480) * C28881) *
                                    C4398) *
                                   C28857 * C28840 * C85 +
                               (((C28784 * C102 - C4399 * C95) * C214 +
                                 (C28784 * C450 - C4399 * C445) * C28881) *
                                    C4396 +
                                ((C28784 * C632 - C4399 * C628) * C214 +
                                 (C28784 * C1016 - C4399 * C1012) * C28881) *
                                    C4397 +
                                ((C28784 * C2219 - C4399 * C2214) * C214 +
                                 (C28784 * C2481 - C4399 * C2478) * C28881) *
                                    C4398) *
                                   C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                                C79 * C102 - C91 * C95) *
                                   C214 +
                               (C77 * C448 - C87 * C443 + C78 * C449 -
                                C89 * C444 + C79 * C450 - C91 * C445) *
                                   C28881) *
                                  C28870 * C28857 * C28840 * C84 +
                              ((C87 * C94 - C77 * C100 + C89 * C95 -
                                C78 * C102 + C91 * C96 - C79 * C104) *
                                   C214 +
                               (C87 * C444 - C77 * C449 + C89 * C445 -
                                C78 * C450 + C91 * C446 - C79 * C451) *
                                   C28881) *
                                  C28870 * C28857 * C28840 * C85 +
                              ((C77 * C102 - C87 * C95 + C78 * C104 -
                                C89 * C96 + C79 * C106 - C91 * C97) *
                                   C214 +
                               (C77 * C450 - C87 * C445 + C78 * C451 -
                                C89 * C446 + C79 * C452 - C91 * C447) *
                                   C28881) *
                                  C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C8528 +
           (C28784 * C448 - C4399 * C443) * C8449 +
           (C28784 * C1206 - C4399 * C1200) * C8529 +
           (C28784 * C1584 - C4399 * C1580) * C8450 +
           (C28784 * C4008 - C4399 * C4005) * C8530 +
           (C28784 * C4272 - C4399 * C4269) * C8451) *
              C28870 * C28857 * C28840 * C84 +
          ((C4399 * C94 - C28784 * C100) * C8528 +
           (C4399 * C444 - C28784 * C449) * C8449 +
           (C4399 * C1199 - C28784 * C1204) * C8529 +
           (C4399 * C1581 - C28784 * C1585) * C8450 +
           (C4399 * C4006 - C28784 * C4010) * C8530 +
           (C4399 * C4270 - C28784 * C4273) * C8451) *
              C28870 * C28857 * C28840 * C85 +
          ((C28784 * C102 - C4399 * C95) * C8528 +
           (C28784 * C450 - C4399 * C445) * C8449 +
           (C28784 * C1202 - C4399 * C1198) * C8529 +
           (C28784 * C1586 - C4399 * C1582) * C8450 +
           (C28784 * C4012 - C4399 * C4007) * C8530 +
           (C28784 * C4274 - C4399 * C4271) * C8451) *
              C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (-std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C214 +
           (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
            C4398 * C2520 - C4441 * C2476) *
               C28881) *
              C28784 * C28857 * C28840 * C84 +
          ((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
            C4441 * C2213 - C4398 * C2263) *
               C214 +
           (C4439 * C444 - C4396 * C492 + C4440 * C1011 - C4397 * C1069 +
            C4441 * C2477 - C4398 * C2521) *
               C28881) *
              C28784 * C28857 * C28840 * C85 +
          ((C4396 * C154 - C4439 * C95 + C4397 * C696 - C4440 * C628 +
            C4398 * C2264 - C4441 * C2214) *
               C214 +
           (C4396 * C493 - C4439 * C445 + C4397 * C1070 - C4440 * C1012 +
            C4398 * C2522 - C4441 * C2478) *
               C28881) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C214 +
            (C28870 * C491 - C151 * C443) * C28881) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 + C506 * C79) *
              C28857 * C28840 * C84 +
          (((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
           ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
           ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
              C28857 * C28840 * C85 +
          (C506 * C77 + ((C172 - C171) * C214 + (C503 - C502) * C28881) * C78 +
           ((C28870 * C156 - C151 * C97) * C214 +
            (C28870 * C495 - C151 * C447) * C28881) *
               C79) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C8528 +
           (C28870 * C491 - C151 * C443) * C8449 +
           (C28870 * C1264 - C151 * C1200) * C8529 +
           (C28870 * C1638 - C151 * C1580) * C8450 +
           (C28870 * C4055 - C151 * C4005) * C8530 +
           (C28870 * C4313 - C151 * C4269) * C8451) *
              C28784 * C28857 * C28840 * C84 +
          ((C164 - C163) * C8528 + (C498 - C497) * C8449 +
           (C1273 - C1274) * C8529 + (C1643 - C1644) * C8450 +
           (C151 * C4006 - C28870 * C4056) * C8530 +
           (C151 * C4270 - C28870 * C4314) * C8451) *
              C28784 * C28857 * C28840 * C85 +
          (C175 * C8528 + C504 * C8449 + (C1278 - C1277) * C8529 +
           (C1646 - C1645) * C8450 + (C28870 * C4057 - C151 * C4007) * C8530 +
           (C28870 * C4315 - C151 * C4271) * C8451) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (-std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
           (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) * C4397 +
           (C214 * C2306 - C544 * C2212 - C214 * C2476 + C28881 * C2561) *
               C4398) *
              C28784 * C28857 * C28840 * C84 -
          ((C214 * C2307 - C544 * C2213 - C214 * C2477 + C28881 * C2562) *
               C4398 +
           C1144 * C4397 + C569 * C4396) *
              C28784 * C28857 * C28840 * C85 +
          (C570 * C4396 + C1143 * C4397 +
           (C214 * C2308 - C544 * C2214 - C214 * C2478 + C28881 * C2563) *
               C4398) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
               C77 +
           C572 * C78 + C573 * C79) *
              C28857 * C28840 * C84 -
          (C574 * C79 + C573 * C78 + C572 * C77) * C28857 * C28840 * C85 +
          (C573 * C77 + C574 * C78 +
           (C214 * C219 - C544 * C97 - C214 * C447 + C28881 * C549) * C28870 *
               C79) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
           C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
           C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
              C28870 * C28784 * C28857 * C28840 * C84 -
          (C8530 * C4100 - C8761 * C4006 - C8530 * C4270 + C8451 * C4355 +
           C8529 * C1331 - C8760 * C1199 - C8529 * C1581 + C8450 * C1697 +
           C8528 * C216 - C8759 * C94 - C8528 * C444 + C8449 * C546) *
              C28870 * C28784 * C28857 * C28840 * C85 +
          (C8528 * C217 - C8759 * C95 - C8528 * C445 + C8449 * C547 +
           C8529 * C1332 - C8760 * C1198 - C8529 * C1582 + C8450 * C1696 +
           C8530 * C4101 - C8761 * C4007 - C8530 * C4271 + C8451 * C4356) *
              C28870 * C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C28857 * C624 -
           ((C4399 * C4763 - C4400 * C4761 - C4399 * C4764 + C28784 * C4767) *
                C28881 * C4398 +
            C4799 * C4397 + C4798 * C4396) *
               C28857 * C28948) *
              C626 +
          ((C4800 * C4396 + C4801 * C4397 +
            (C4399 * C4765 - C4400 * C4762 - C4399 * C4766 + C28784 * C4768) *
                C28881 * C4398) *
               C28857 * C28948 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C28857 * C624 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C28857 * C28948) *
              C626 +
          ((C87 * C634 - C88 * C629 - C87 * C635 + C77 * C641 + C89 * C632 -
            C90 * C628 - C89 * C633 + C78 * C640 + C91 * C638 - C92 * C631 -
            C91 * C639 + C79 * C643) *
               C28881 * C28870 * C28857 * C28948 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C8450 +
            (C4399 * C4008 - C4400 * C4005 - C4399 * C4009 + C28784 * C4014) *
                C8451) *
               C28870 * C28857 * C624 -
           ((C4399 * C8077 - C4400 * C8075 - C4399 * C8078 + C28784 * C8081) *
                C8451 +
            C6685 * C8450 + C4794 * C8449) *
               C28870 * C28857 * C28948) *
              C626 +
          ((C4796 * C8449 +
            (C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C8450 +
            (C4399 * C8813 - C4400 * C8812 - C4399 * C8814 + C28784 * C8815) *
                C8451) *
               C28870 * C28857 * C28948 -
           ((C4399 * C4010 - C4400 * C4006 - C4399 * C4011 + C28784 * C4015) *
                C8451 +
            (C4399 * C1204 - C4400 * C1199 - C4399 * C1205 + C28784 * C1211) *
                C8450 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C8449) *
               C28870 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C28857 * C624 +
           ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C28857 * C624 +
           ((C4396 * C695 - C4439 * C629 + C4397 * C2263 - C4440 * C2213 +
             C4398 * C4852 - C4441 * C4762) *
                C4399 +
            (C4396 * C699 - C4439 * C635 + C4397 * C2266 - C4440 * C2218 +
             C4398 * C4854 - C4441 * C4766) *
                C28784) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C28857 * C624 +
           ((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C28857 * C624 +
           ((C704 - C703) * C87 + (C706 - C705) * C77 + (C708 - C707) * C89 +
            (C710 - C709) * C78 + (C28870 * C697 - C151 * C631) * C91 +
            (C28870 * C701 - C151 * C639) * C79) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C4399 +
             (C28870 * C157 - C151 * C99) * C28784) *
                C8449 +
            ((C28870 * C1264 - C151 * C1200) * C4399 +
             (C28870 * C1268 - C151 * C1207) * C28784) *
                C8450 +
            ((C28870 * C4055 - C151 * C4005) * C4399 +
             (C28870 * C4058 - C151 * C4009) * C28784) *
                C8451) *
               C28857 * C624 +
           (((C151 * C630 - C28870 * C694) * C4399 +
             (C151 * C637 - C28870 * C698) * C28784) *
                C8449 +
            ((C151 * C2614 - C28870 * C2676) * C4399 +
             (C151 * C2618 - C28870 * C2679) * C28784) *
                C8450 +
            ((C151 * C8075 - C28870 * C8121) * C4399 +
             (C151 * C8078 - C28870 * C8123) * C28784) *
                C8451) *
               C28857 * C28948) *
              C626 +
          ((((C164 - C163) * C4399 + (C166 - C165) * C28784) * C8449 +
            ((C1273 - C1274) * C4399 + (C1275 - C1276) * C28784) * C8450 +
            ((C151 * C4006 - C28870 * C4056) * C4399 +
             (C151 * C4011 - C28870 * C4059) * C28784) *
                C8451) *
               C28857 * C624 +
           (((C704 - C703) * C4399 + (C706 - C705) * C28784) * C8449 +
            ((C28870 * C2677 - C151 * C2615) * C4399 +
             (C28870 * C2680 - C151 * C2620) * C28784) *
                C8450 +
            ((C28870 * C8866 - C151 * C8812) * C4399 +
             (C28870 * C8867 - C151 * C8814) * C28784) *
                C8451) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (-std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            ((C4914 - C4915) * C4399 + (C4916 - C4917) * C28784) * C4398) *
               C28857 * C624 +
           (((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C214 * C4761 - C28881 * C4905) * C4399 +
             (C214 * C4764 - C28881 * C4907) * C28784) *
                C4398) *
               C28857 * C28948) *
              C626 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C28857 * C624 +
           (((C770 - C769) * C4399 + (C772 - C771) * C28784) * C4396 +
            ((C4919 - C4918) * C4399 + (C4921 - C4920) * C28784) * C4397 +
            ((C28881 * C4906 - C214 * C4762) * C4399 +
             (C28881 * C4908 - C214 * C4766) * C28784) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C28857 * C624 +
           ((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C28857 * C624 +
           ((C770 - C769) * C87 + (C772 - C771) * C77 + (C774 - C773) * C89 +
            (C776 - C775) * C78 + (C28881 * C763 - C214 * C631) * C91 +
            (C28881 * C767 - C214 * C639) * C79) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C4399 +
            (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
             C8451 * C4102 - C8530 * C4009) *
                C28784) *
               C28870 * C28857 * C624 +
           ((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
             C8530 * C8075 - C8451 * C8163) *
                C4399 +
            (C8528 * C637 - C8449 * C764 + C8529 * C2618 - C8450 * C2735 +
             C8530 * C8078 - C8451 * C8165) *
                C28784) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
             C8530 * C4006 - C8451 * C4100) *
                C4399 +
            (C8528 * C101 - C8449 * C221 + C8529 * C1205 - C8450 * C1335 +
             C8530 * C4011 - C8451 * C4103) *
                C28784) *
               C28870 * C28857 * C624 +
           ((C8449 * C761 - C8528 * C629 + C8450 * C2733 - C8529 * C2615 +
             C8451 * C8918 - C8530 * C8812) *
                C4399 +
            (C8449 * C765 - C8528 * C635 + C8450 * C2736 - C8529 * C2620 +
             C8451 * C8919 - C8530 * C8814) *
                C28784) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + (C4980 - C4981) * C4441 +
            (C4982 - C4983) * C4398) *
               C28881 * C28857 * C624 +
           ((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
            (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
            (C4399 * C4761 - C28784 * C4763) * C4441 +
            (C4399 * C4971 - C28784 * C4973) * C4398) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C4399 * C94 - C28784 * C100) * C4439 +
            (C4399 * C278 - C28784 * C283) * C4396 + (C4984 - C4985) * C4440 +
            (C4986 - C4987) * C4397 + (C4988 - C4989) * C4441 +
            (C4990 - C4991) * C4398) *
               C28881 * C28857 * C624 +
           ((C4985 - C4984) * C4439 + (C4987 - C4986) * C4396 +
            (C4989 - C4988) * C4440 + (C4991 - C4990) * C4397 +
            (C28784 * C4765 - C4399 * C4762) * C4441 +
            (C28784 * C4974 - C4399 * C4972) * C4398) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C151 +
                                (C77 * C282 - C87 * C277 + C78 * C283 -
                                 C89 * C278 + C79 * C284 - C91 * C279) *
                                    C28870) *
                                   C28881 * C28857 * C624 +
                               ((C87 * C630 - C77 * C636 + C89 * C629 -
                                 C78 * C634 + C91 * C628 - C79 * C632) *
                                    C151 +
                                (C87 * C826 - C77 * C830 + C89 * C827 -
                                 C78 * C831 + C91 * C828 - C79 * C832) *
                                    C28870) *
                                   C28881 * C28857 * C28948) *
                                  C626 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C151 +
                                (C87 * C278 - C77 * C283 + C89 * C279 -
                                 C78 * C284 + C91 * C280 - C79 * C285) *
                                    C28870) *
                                   C28881 * C28857 * C624 +
                               ((C77 * C634 - C87 * C629 + C78 * C632 -
                                 C89 * C628 + C79 * C638 - C91 * C631) *
                                    C151 +
                                (C77 * C831 - C87 * C827 + C78 * C832 -
                                 C89 * C828 + C79 * C833 - C91 * C829) *
                                    C28870) *
                                   C28881 * C28857 * C28948) *
                                  C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C151 +
             (C28784 * C282 - C4399 * C277) * C28870) *
                C8449 +
            ((C28784 * C1206 - C4399 * C1200) * C151 +
             (C28784 * C1400 - C4399 * C1396) * C28870) *
                C8450 +
            ((C28784 * C4008 - C4399 * C4005) * C151 +
             (C28784 * C4146 - C4399 * C4143) * C28870) *
                C8451) *
               C28857 * C624 +
           (((C4977 - C4976) * C151 + (C4979 - C4978) * C28870) * C8449 +
            ((C6852 - C6853) * C151 + (C6854 - C6855) * C28870) * C8450 +
            ((C4399 * C8075 - C28784 * C8077) * C151 +
             (C4399 * C8205 - C28784 * C8207) * C28870) *
                C8451) *
               C28857 * C28948) *
              C626 +
          ((((C4399 * C94 - C28784 * C100) * C151 +
             (C4399 * C278 - C28784 * C283) * C28870) *
                C8449 +
            ((C4399 * C1199 - C28784 * C1204) * C151 +
             (C4399 * C1397 - C28784 * C1401) * C28870) *
                C8450 +
            ((C4399 * C4006 - C28784 * C4010) * C151 +
             (C4399 * C4144 - C28784 * C4147) * C28870) *
                C8451) *
               C28857 * C624 +
           (((C4985 - C4984) * C151 + (C4987 - C4986) * C28870) * C8449 +
            ((C28784 * C2619 - C4399 * C2615) * C151 +
             (C28784 * C2792 - C4399 * C2789) * C28870) *
                C8450 +
            ((C28784 * C8813 - C4399 * C8812) * C151 +
             (C28784 * C8971 - C4399 * C8970) * C28870) *
                C8451) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C28857 * C624 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C28857 * C28948) *
              C626 +
          ((C4439 * C695 - C4556 * C629 - C4439 * C827 + C4396 * C885 +
            C4440 * C2263 - C4557 * C2213 - C4440 * C2351 + C4397 * C2395 +
            C4441 * C4852 - C4558 * C4762 - C4441 * C4972 + C4398 * C5042) *
               C28784 * C28881 * C28857 * C28948 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C28857 * C624 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C28857 * C28948) *
              C626 +
          ((C902 * C77 + C901 * C78 +
            (C151 * C697 - C325 * C631 - C151 * C829 + C28870 * C887) * C79) *
               C28881 * C28857 * C28948 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
                C8449 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C28784 * C8450 +
            (C151 * C4055 - C325 * C4005 - C151 * C4143 + C28870 * C4187) *
                C28784 * C8451) *
               C28857 * C624 -
           ((C151 * C8121 - C325 * C8075 - C151 * C8205 + C28870 * C8247) *
                C28784 * C8451 +
            (C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
                C28784 * C8450 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C28784 *
                C8449) *
               C28857 * C28948) *
              C626 +
          ((C902 * C28784 * C8449 +
            (C151 * C2677 - C325 * C2615 - C151 * C2789 + C28870 * C2845) *
                C28784 * C8450 +
            (C151 * C8866 - C325 * C8812 - C151 * C8970 + C28870 * C9022) *
                C28784 * C8451) *
               C28857 * C28948 -
           ((C151 * C4056 - C325 * C4006 - C151 * C4144 + C28870 * C4188) *
                C28784 * C8451 +
            C1472 * C28784 * C8450 + C350 * C28784 * C8449) *
               C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] += (-std::pow(Pi, 2.5) *
                   ((((C28881 * C215 - C214 * C93) * C4439 +
                      (C28881 * C390 - C214 * C277) * C4396 +
                      (C4910 - C4911) * C4440 + (C5096 - C5097) * C4397 +
                      (C4914 - C4915) * C4441 + (C5098 - C5099) * C4398) *
                         C28784 * C28857 * C624 +
                     ((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
                      (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
                      (C214 * C4761 - C28881 * C4905) * C4441 +
                      (C214 * C4971 - C28881 * C5093) * C4398) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
                      (C769 - C770) * C4440 + (C957 - C958) * C4397 +
                      (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
                         C28784 * C28857 * C624 +
                     ((C770 - C769) * C4439 + (C958 - C957) * C4396 +
                      (C4919 - C4918) * C4440 + (C5101 - C5100) * C4397 +
                      (C28881 * C4906 - C214 * C4762) * C4441 +
                      (C28881 * C5094 - C214 * C4972) * C4398) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C28881 * C215 - C214 * C93) * C151 +
                       (C28881 * C390 - C214 * C277) * C28870) *
                          C77 +
                      ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
                      C405 * C79) *
                         C28857 * C624 +
                     (((C214 * C630 - C28881 * C760) * C151 +
                       (C214 * C826 - C28881 * C952) * C28870) *
                          C77 +
                      ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
                      ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
                         C28857 * C28948) *
                        C626 +
                    ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
                      ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
                      ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
                         C28857 * C624 +
                     (((C770 - C769) * C151 + (C958 - C957) * C28870) * C77 +
                      ((C774 - C773) * C151 + (C960 - C959) * C28870) * C78 +
                      ((C28881 * C763 - C214 * C631) * C151 +
                       (C28881 * C955 - C214 * C829) * C28870) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 -
                       C8529 * C1200 + C8451 * C4099 - C8530 * C4005) *
                          C151 +
                      (C8449 * C390 - C8528 * C277 + C8450 * C1522 -
                       C8529 * C1396 + C8451 * C4228 - C8530 * C4143) *
                          C28870) *
                         C28784 * C28857 * C624 +
                     ((C8528 * C630 - C8449 * C760 + C8529 * C2614 -
                       C8450 * C2732 + C8530 * C8075 - C8451 * C8163) *
                          C151 +
                      (C8528 * C826 - C8449 * C952 + C8529 * C2788 -
                       C8450 * C2897 + C8530 * C8205 - C8451 * C8287) *
                          C28870) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C8528 * C94 - C8449 * C216 + C8529 * C1199 -
                       C8450 * C1331 + C8530 * C4006 - C8451 * C4100) *
                          C151 +
                      (C8528 * C278 - C8449 * C391 + C8529 * C1397 -
                       C8450 * C1523 + C8530 * C4144 - C8451 * C4229) *
                          C28870) *
                         C28784 * C28857 * C624 +
                     ((C8449 * C761 - C8528 * C629 + C8450 * C2733 -
                       C8529 * C2615 + C8451 * C8918 - C8530 * C8812) *
                          C151 +
                      (C8449 * C953 - C8528 * C827 + C8450 * C2898 -
                       C8529 * C2789 + C8451 * C9073 - C8530 * C8970) *
                          C28870) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (-std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            ((C4980 - C4981) * C214 + (C5158 - C5159) * C28881) * C4398) *
               C28857 * C624 +
           (((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C4399 * C4761 - C28784 * C4763) * C214 +
             (C4399 * C5151 - C28784 * C5153) * C28881) *
                C4398) *
               C28857 * C28948) *
              C626 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C28857 * C624 +
           (((C4985 - C4984) * C214 + (C5161 - C5160) * C28881) * C4396 +
            ((C4989 - C4988) * C214 + (C5163 - C5162) * C28881) * C4397 +
            ((C28784 * C4765 - C4399 * C4762) * C214 +
             (C28784 * C5154 - C4399 * C5152) * C28881) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C214 +
                                (C77 * C448 - C87 * C443 + C78 * C449 -
                                 C89 * C444 + C79 * C450 - C91 * C445) *
                                    C28881) *
                                   C28870 * C28857 * C624 +
                               ((C87 * C630 - C77 * C636 + C89 * C629 -
                                 C78 * C634 + C91 * C628 - C79 * C632) *
                                    C214 +
                                (C87 * C1010 - C77 * C1014 + C89 * C1011 -
                                 C78 * C1015 + C91 * C1012 - C79 * C1016) *
                                    C28881) *
                                   C28870 * C28857 * C28948) *
                                  C626 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C214 +
                                (C87 * C444 - C77 * C449 + C89 * C445 -
                                 C78 * C450 + C91 * C446 - C79 * C451) *
                                    C28881) *
                                   C28870 * C28857 * C624 +
                               ((C77 * C634 - C87 * C629 + C78 * C632 -
                                 C89 * C628 + C79 * C638 - C91 * C631) *
                                    C214 +
                                (C77 * C1015 - C87 * C1011 + C78 * C1016 -
                                 C89 * C1012 + C79 * C1017 - C91 * C1013) *
                                    C28881) *
                                   C28870 * C28857 * C28948) *
                                  C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C8528 +
            (C28784 * C448 - C4399 * C443) * C8449 +
            (C28784 * C1206 - C4399 * C1200) * C8529 +
            (C28784 * C1584 - C4399 * C1580) * C8450 +
            (C28784 * C4008 - C4399 * C4005) * C8530 +
            (C28784 * C4272 - C4399 * C4269) * C8451) *
               C28870 * C28857 * C624 +
           ((C4977 - C4976) * C8528 + (C5157 - C5156) * C8449 +
            (C6852 - C6853) * C8529 + (C7018 - C7019) * C8450 +
            (C4399 * C8075 - C28784 * C8077) * C8530 +
            (C4399 * C8327 - C28784 * C8329) * C8451) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C4399 * C94 - C28784 * C100) * C8528 +
            (C4399 * C444 - C28784 * C449) * C8449 +
            (C4399 * C1199 - C28784 * C1204) * C8529 +
            (C4399 * C1581 - C28784 * C1585) * C8450 +
            (C4399 * C4006 - C28784 * C4010) * C8530 +
            (C4399 * C4270 - C28784 * C4273) * C8451) *
               C28870 * C28857 * C624 +
           ((C4985 - C4984) * C8528 + (C5161 - C5160) * C8449 +
            (C28784 * C2619 - C4399 * C2615) * C8529 +
            (C28784 * C2954 - C4399 * C2951) * C8450 +
            (C28784 * C8813 - C4399 * C8812) * C8530 +
            (C28784 * C9125 - C4399 * C9124) * C8451) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (-std::pow(Pi, 2.5) *
                   ((((C4396 * C152 - C4439 * C93 + C4397 * C694 -
                       C4440 * C630 + C4398 * C2262 - C4441 * C2212) *
                          C214 +
                      (C4396 * C491 - C4439 * C443 + C4397 * C1068 -
                       C4440 * C1010 + C4398 * C2520 - C4441 * C2476) *
                          C28881) *
                         C28784 * C28857 * C624 +
                     ((C4439 * C630 - C4396 * C694 + C4440 * C2212 -
                       C4397 * C2262 + C4441 * C4761 - C4398 * C4851) *
                          C214 +
                      (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 -
                       C4397 * C2520 + C4441 * C5151 - C4398 * C5213) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C4439 * C94 - C4396 * C153 + C4440 * C629 -
                       C4397 * C695 + C4441 * C2213 - C4398 * C2263) *
                          C214 +
                      (C4439 * C444 - C4396 * C492 + C4440 * C1011 -
                       C4397 * C1069 + C4441 * C2477 - C4398 * C2521) *
                          C28881) *
                         C28784 * C28857 * C624 +
                     ((C4396 * C695 - C4439 * C629 + C4397 * C2263 -
                       C4440 * C2213 + C4398 * C4852 - C4441 * C4762) *
                          C214 +
                      (C4396 * C1069 - C4439 * C1011 + C4397 * C2521 -
                       C4440 * C2477 + C4398 * C5214 - C4441 * C5152) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C214 +
                       (C28870 * C491 - C151 * C443) * C28881) *
                          C77 +
                      ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
                      C506 * C79) *
                         C28857 * C624 +
                     (((C151 * C630 - C28870 * C694) * C214 +
                       (C151 * C1010 - C28870 * C1068) * C28881) *
                          C77 +
                      ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
                      ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
                         C28857 * C28948) *
                        C626 +
                    ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
                      ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
                      ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
                         C28857 * C624 +
                     (((C704 - C703) * C214 + (C1074 - C1073) * C28881) * C77 +
                      ((C708 - C707) * C214 + (C1076 - C1075) * C28881) * C78 +
                      ((C28870 * C697 - C151 * C631) * C214 +
                       (C28870 * C1071 - C151 * C1013) * C28881) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C8528 +
                      (C28870 * C491 - C151 * C443) * C8449 +
                      (C28870 * C1264 - C151 * C1200) * C8529 +
                      (C28870 * C1638 - C151 * C1580) * C8450 +
                      (C28870 * C4055 - C151 * C4005) * C8530 +
                      (C28870 * C4313 - C151 * C4269) * C8451) *
                         C28784 * C28857 * C624 +
                     ((C151 * C630 - C28870 * C694) * C8528 +
                      (C151 * C1010 - C28870 * C1068) * C8449 +
                      (C151 * C2614 - C28870 * C2676) * C8529 +
                      (C151 * C2950 - C28870 * C3006) * C8450 +
                      (C151 * C8075 - C28870 * C8121) * C8530 +
                      (C151 * C8327 - C28870 * C8369) * C8451) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C164 - C163) * C8528 + (C498 - C497) * C8449 +
                      (C1273 - C1274) * C8529 + (C1643 - C1644) * C8450 +
                      (C151 * C4006 - C28870 * C4056) * C8530 +
                      (C151 * C4270 - C28870 * C4314) * C8451) *
                         C28784 * C28857 * C624 +
                     ((C704 - C703) * C8528 + (C1074 - C1073) * C8449 +
                      (C28870 * C2677 - C151 * C2615) * C8529 +
                      (C28870 * C3007 - C151 * C2951) * C8450 +
                      (C28870 * C8866 - C151 * C8812) * C8530 +
                      (C28870 * C9176 - C151 * C9124) * C8451) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C28857 * C624 -
           ((C214 * C4905 - C544 * C4761 - C214 * C5151 + C28881 * C5265) *
                C4398 +
            C5287 * C4397 + C5286 * C4396) *
               C28784 * C28857 * C28948) *
              C626 +
          ((C1144 * C4396 + C5288 * C4397 +
            (C214 * C4906 - C544 * C4762 - C214 * C5152 + C28881 * C5266) *
                C4398) *
               C28784 * C28857 * C28948 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C28857 *
               C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C28857 * C624 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C28857 * C28948) *
              C626 +
          ((C1146 * C77 + C1145 * C78 +
            (C214 * C763 - C544 * C631 - C214 * C1013 + C28881 * C1129) *
                C28870 * C79) *
               C28857 * C28948 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
            C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
            C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
               C28870 * C28784 * C28857 * C624 -
           (C8530 * C8163 - C8761 * C8075 - C8530 * C8327 + C8451 * C8409 +
            C8529 * C2732 - C8760 * C2614 - C8529 * C2950 + C8450 * C3059 +
            C8528 * C760 - C8759 * C630 - C8528 * C1010 + C8449 * C1128) *
               C28870 * C28784 * C28857 * C28948) *
              C626 +
          ((C8528 * C761 - C8759 * C629 - C8528 * C1011 + C8449 * C1127 +
            C8529 * C2733 - C8760 * C2615 - C8529 * C2951 + C8450 * C3060 +
            C8530 * C8918 - C8761 * C8812 - C8530 * C9124 + C8451 * C9227) *
               C28870 * C28784 * C28857 * C28948 -
           (C8530 * C4100 - C8761 * C4006 - C8530 * C4270 + C8451 * C4355 +
            C8529 * C1331 - C8760 * C1199 - C8529 * C1581 + C8450 * C1697 +
            C8528 * C216 - C8759 * C94 - C8528 * C444 + C8449 * C546) *
               C28870 * C28784 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C1196 -
           ((C4399 * C5340 - C4400 * C5338 - C4399 * C5341 + C28784 * C5344) *
                C28881 * C4398 +
            (C4399 * C2617 - C4400 * C2614 - C4399 * C2618 + C28784 * C2623) *
                C28881 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C28840 * C626 +
          (((C4399 * C1204 - C4400 * C1199 - C4399 * C1205 + C28784 * C1211) *
                C28881 * C4396 +
            (C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C28881 * C4397 +
            (C4399 * C5342 - C4400 * C5339 - C4399 * C5343 + C28784 * C5345) *
                C28881 * C4398) *
               C28950 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C1196 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C28840 * C626 +
          ((C87 * C1204 - C88 * C1199 - C87 * C1205 + C77 * C1211 +
            C89 * C1202 - C90 * C1198 - C89 * C1203 + C78 * C1210 +
            C91 * C1208 - C92 * C1201 - C91 * C1209 + C79 * C1213) *
               C28881 * C28870 * C28950 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
            C9311 * C8450 + C9312 * C8451) *
               C28870 * C1196 -
           ((C4399 * C9280 - C4400 * C9278 - C4399 * C9281 + C28784 * C9284) *
                C8451 +
            C9312 * C8450 + C9311 * C8449) *
               C28870 * C28950) *
              C28840 * C626 +
          ((C9313 * C8449 + C9314 * C8450 +
            (C4399 * C9282 - C4400 * C9279 - C4399 * C9283 + C28784 * C9285) *
                C8451) *
               C28870 * C28950 -
           (C9314 * C8451 + C9313 * C8450 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C8449) *
               C28870 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C1196 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C4399 +
            (C4396 * C1269 - C4439 * C1205 + C4397 * C2680 - C4440 * C2620 +
             C4398 * C5399 - C4441 * C5343) *
                C28784) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C1196 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C1196 +
           ((C1274 - C1273) * C87 + (C1276 - C1275) * C77 +
            (C1278 - C1277) * C89 + (C1280 - C1279) * C78 +
            (C28870 * C1267 - C151 * C1201) * C91 +
            (C28870 * C1271 - C151 * C1209) * C79) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C4399 +
             (C28870 * C157 - C151 * C99) * C28784) *
                C8449 +
            ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
            ((C9373 - C9374) * C4399 + (C9375 - C9376) * C28784) * C8451) *
               C1196 +
           (((C9370 - C9369) * C4399 + (C9372 - C9371) * C28784) * C8449 +
            ((C9374 - C9373) * C4399 + (C9376 - C9375) * C28784) * C8450 +
            ((C151 * C9278 - C28870 * C9364) * C4399 +
             (C151 * C9281 - C28870 * C9366) * C28784) *
                C8451) *
               C28950) *
              C28840 * C626 +
          ((((C164 - C163) * C4399 + (C166 - C165) * C28784) * C8449 +
            ((C1273 - C1274) * C4399 + (C1275 - C1276) * C28784) * C8450 +
            ((C9377 - C9378) * C4399 + (C9379 - C9380) * C28784) * C8451) *
               C1196 +
           (((C1274 - C1273) * C4399 + (C1276 - C1275) * C28784) * C8449 +
            ((C9378 - C9377) * C4399 + (C9380 - C9379) * C28784) * C8450 +
            ((C28870 * C9365 - C151 * C9279) * C4399 +
             (C28870 * C9367 - C151 * C9283) * C28784) *
                C8451) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (-std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            ((C4914 - C4915) * C4399 + (C4916 - C4917) * C28784) * C4398) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C214 * C2614 - C28881 * C2732) * C4399 +
             (C214 * C2618 - C28881 * C2735) * C28784) *
                C4397 +
            ((C214 * C5338 - C28881 * C5450) * C4399 +
             (C214 * C5341 - C28881 * C5452) * C28784) *
                C4398) *
               C28950) *
              C28840 * C626 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C1196 +
           (((C1340 - C1339) * C4399 + (C1342 - C1341) * C28784) * C4396 +
            ((C28881 * C2733 - C214 * C2615) * C4399 +
             (C28881 * C2736 - C214 * C2620) * C28784) *
                C4397 +
            ((C28881 * C5451 - C214 * C5339) * C4399 +
             (C28881 * C5453 - C214 * C5343) * C28784) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C1196 +
           ((C1340 - C1339) * C87 + (C1342 - C1341) * C77 +
            (C1344 - C1343) * C89 + (C1346 - C1345) * C78 +
            (C28881 * C1333 - C214 * C1201) * C91 +
            (C28881 * C1337 - C214 * C1209) * C79) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C4399 +
            (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
             C8451 * C4102 - C8530 * C4009) *
                C28784) *
               C28870 * C1196 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C4399 +
            (C8528 * C1207 - C8449 * C1334 + C8529 * C4009 - C8450 * C4102 +
             C8530 * C9281 - C8451 * C9432) *
                C28784) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
             C8530 * C4006 - C8451 * C4100) *
                C4399 +
            (C8528 * C101 - C8449 * C221 + C8529 * C1205 - C8450 * C1335 +
             C8530 * C4011 - C8451 * C4103) *
                C28784) *
               C28870 * C1196 +
           ((C8449 * C1331 - C8528 * C1199 + C8450 * C4100 - C8529 * C4006 +
             C8451 * C9431 - C8530 * C9279) *
                C4399 +
            (C8449 * C1335 - C8528 * C1205 + C8450 * C4103 - C8529 * C4011 +
             C8451 * C9433 - C8530 * C9283) *
                C28784) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + (C4980 - C4981) * C4441 +
            (C4982 - C4983) * C4398) *
               C28881 * C1196 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 +
            (C4399 * C2614 - C28784 * C2617) * C4440 +
            (C4399 * C2788 - C28784 * C2791) * C4397 +
            (C4399 * C5338 - C28784 * C5340) * C4441 +
            (C4399 * C5504 - C28784 * C5506) * C4398) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C4399 * C94 - C28784 * C100) * C4439 +
            (C4399 * C278 - C28784 * C283) * C4396 + (C4984 - C4985) * C4440 +
            (C4986 - C4987) * C4397 + (C4988 - C4989) * C4441 +
            (C4990 - C4991) * C4398) *
               C28881 * C1196 +
           ((C28784 * C1204 - C4399 * C1199) * C4439 +
            (C28784 * C1401 - C4399 * C1397) * C4396 +
            (C28784 * C2619 - C4399 * C2615) * C4440 +
            (C28784 * C2792 - C4399 * C2789) * C4397 +
            (C28784 * C5342 - C4399 * C5339) * C4441 +
            (C28784 * C5507 - C4399 * C5505) * C4398) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C151 +
                                (C77 * C282 - C87 * C277 + C78 * C283 -
                                 C89 * C278 + C79 * C284 - C91 * C279) *
                                    C28870) *
                                   C28881 * C1196 +
                               ((C87 * C1200 - C77 * C1206 + C89 * C1199 -
                                 C78 * C1204 + C91 * C1198 - C79 * C1202) *
                                    C151 +
                                (C87 * C1396 - C77 * C1400 + C89 * C1397 -
                                 C78 * C1401 + C91 * C1398 - C79 * C1402) *
                                    C28870) *
                                   C28881 * C28950) *
                                  C28840 * C626 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C151 +
                                (C87 * C278 - C77 * C283 + C89 * C279 -
                                 C78 * C284 + C91 * C280 - C79 * C285) *
                                    C28870) *
                                   C28881 * C1196 +
                               ((C77 * C1204 - C87 * C1199 + C78 * C1202 -
                                 C89 * C1198 + C79 * C1208 - C91 * C1201) *
                                    C151 +
                                (C77 * C1401 - C87 * C1397 + C78 * C1402 -
                                 C89 * C1398 + C79 * C1403 - C91 * C1399) *
                                    C28870) *
                                   C28881 * C28950) *
                                  C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C151 +
             (C28784 * C282 - C4399 * C277) * C28870) *
                C8449 +
            ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
            ((C9493 - C9494) * C151 + (C9495 - C9496) * C28870) * C8451) *
               C1196 +
           (((C9490 - C9489) * C151 + (C9492 - C9491) * C28870) * C8449 +
            ((C9494 - C9493) * C151 + (C9496 - C9495) * C28870) * C8450 +
            ((C4399 * C9278 - C28784 * C9280) * C151 +
             (C4399 * C9484 - C28784 * C9486) * C28870) *
                C8451) *
               C28950) *
              C28840 * C626 +
          ((((C4399 * C94 - C28784 * C100) * C151 +
             (C4399 * C278 - C28784 * C283) * C28870) *
                C8449 +
            ((C9497 - C9498) * C151 + (C9499 - C9500) * C28870) * C8450 +
            ((C9501 - C9502) * C151 + (C9503 - C9504) * C28870) * C8451) *
               C1196 +
           (((C9498 - C9497) * C151 + (C9500 - C9499) * C28870) * C8449 +
            ((C9502 - C9501) * C151 + (C9504 - C9503) * C28870) * C8450 +
            ((C28784 * C9282 - C4399 * C9279) * C151 +
             (C28784 * C9487 - C4399 * C9485) * C28870) *
                C8451) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C1196 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C28840 * C626 +
          ((C4439 * C1265 - C4556 * C1199 - C4439 * C1397 + C4396 * C1455 +
            C4440 * C2677 - C4557 * C2615 - C4440 * C2789 + C4397 * C2845 +
            C4441 * C5397 - C4558 * C5339 - C4441 * C5505 + C4398 * C5559) *
               C28784 * C28881 * C28950 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C1196 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C28840 * C626 +
          ((C1472 * C77 + C1471 * C78 +
            (C151 * C1267 - C325 * C1201 - C151 * C1399 + C28870 * C1457) *
                C79) *
               C28881 * C28950 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
                C8449 +
            C9579 * C8450 + C9580 * C8451) *
               C1196 -
           ((C151 * C9364 - C325 * C9278 - C151 * C9484 + C28870 * C9554) *
                C28784 * C8451 +
            C9580 * C8450 + C9579 * C8449) *
               C28950) *
              C28840 * C626 +
          ((C9565 * C8449 + C9581 * C8450 +
            (C151 * C9365 - C325 * C9279 - C151 * C9485 + C28870 * C9555) *
                C28784 * C8451) *
               C28950 -
           (C9581 * C8451 + C9565 * C8450 + C350 * C28784 * C8449) * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + (C4914 - C4915) * C4441 +
            (C5098 - C5099) * C4398) *
               C28784 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 +
            (C214 * C2614 - C28881 * C2732) * C4440 +
            (C214 * C2788 - C28881 * C2897) * C4397 +
            (C214 * C5338 - C28881 * C5450) * C4441 +
            (C214 * C5504 - C28881 * C5610) * C4398) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
            (C769 - C770) * C4440 + (C957 - C958) * C4397 +
            (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
               C28784 * C1196 +
           ((C1340 - C1339) * C4439 + (C1528 - C1527) * C4396 +
            (C28881 * C2733 - C214 * C2615) * C4440 +
            (C28881 * C2898 - C214 * C2789) * C4397 +
            (C28881 * C5451 - C214 * C5339) * C4441 +
            (C28881 * C5611 - C214 * C5505) * C4398) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C28840 * C626 +
          ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
               C1196 +
           (((C1340 - C1339) * C151 + (C1528 - C1527) * C28870) * C77 +
            ((C1344 - C1343) * C151 + (C1530 - C1529) * C28870) * C78 +
            ((C28881 * C1333 - C214 * C1201) * C151 +
             (C28881 * C1525 - C214 * C1399) * C28870) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C151 +
            (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
             C8451 * C4228 - C8530 * C4143) *
                C28870) *
               C28784 * C1196 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C151 +
            (C8528 * C1396 - C8449 * C1522 + C8529 * C4143 - C8450 * C4228 +
             C8530 * C9484 - C8451 * C9631) *
                C28870) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
             C8530 * C4006 - C8451 * C4100) *
                C151 +
            (C8528 * C278 - C8449 * C391 + C8529 * C1397 - C8450 * C1523 +
             C8530 * C4144 - C8451 * C4229) *
                C28870) *
               C28784 * C1196 +
           ((C8449 * C1331 - C8528 * C1199 + C8450 * C4100 - C8529 * C4006 +
             C8451 * C9431 - C8530 * C9279) *
                C151 +
            (C8449 * C1523 - C8528 * C1397 + C8450 * C4229 - C8529 * C4144 +
             C8451 * C9632 - C8530 * C9485) *
                C28870) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (-std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            ((C4980 - C4981) * C214 + (C5158 - C5159) * C28881) * C4398) *
               C1196 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C4399 * C2614 - C28784 * C2617) * C214 +
             (C4399 * C2950 - C28784 * C2953) * C28881) *
                C4397 +
            ((C4399 * C5338 - C28784 * C5340) * C214 +
             (C4399 * C5662 - C28784 * C5664) * C28881) *
                C4398) *
               C28950) *
              C28840 * C626 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C1196 +
           (((C28784 * C1204 - C4399 * C1199) * C214 +
             (C28784 * C1585 - C4399 * C1581) * C28881) *
                C4396 +
            ((C28784 * C2619 - C4399 * C2615) * C214 +
             (C28784 * C2954 - C4399 * C2951) * C28881) *
                C4397 +
            ((C28784 * C5342 - C4399 * C5339) * C214 +
             (C28784 * C5665 - C4399 * C5663) * C28881) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C214 +
                                (C77 * C448 - C87 * C443 + C78 * C449 -
                                 C89 * C444 + C79 * C450 - C91 * C445) *
                                    C28881) *
                                   C28870 * C1196 +
                               ((C87 * C1200 - C77 * C1206 + C89 * C1199 -
                                 C78 * C1204 + C91 * C1198 - C79 * C1202) *
                                    C214 +
                                (C87 * C1580 - C77 * C1584 + C89 * C1581 -
                                 C78 * C1585 + C91 * C1582 - C79 * C1586) *
                                    C28881) *
                                   C28870 * C28950) *
                                  C28840 * C626 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C214 +
                                (C87 * C444 - C77 * C449 + C89 * C445 -
                                 C78 * C450 + C91 * C446 - C79 * C451) *
                                    C28881) *
                                   C28870 * C1196 +
                               ((C77 * C1204 - C87 * C1199 + C78 * C1202 -
                                 C89 * C1198 + C79 * C1208 - C91 * C1201) *
                                    C214 +
                                (C77 * C1585 - C87 * C1581 + C78 * C1586 -
                                 C89 * C1582 + C79 * C1587 - C91 * C1583) *
                                    C28881) *
                                   C28870 * C28950) *
                                  C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C8528 +
            (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
            (C9688 - C9689) * C8450 + (C9493 - C9494) * C8530 +
            (C9690 - C9691) * C8451) *
               C28870 * C1196 +
           ((C9490 - C9489) * C8528 + (C9689 - C9688) * C8449 +
            (C9494 - C9493) * C8529 + (C9691 - C9690) * C8450 +
            (C4399 * C9278 - C28784 * C9280) * C8530 +
            (C4399 * C9683 - C28784 * C9685) * C8451) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C4399 * C94 - C28784 * C100) * C8528 +
            (C4399 * C444 - C28784 * C449) * C8449 + (C9497 - C9498) * C8529 +
            (C9692 - C9693) * C8450 + (C9501 - C9502) * C8530 +
            (C9694 - C9695) * C8451) *
               C28870 * C1196 +
           ((C9498 - C9497) * C8528 + (C9693 - C9692) * C8449 +
            (C9502 - C9501) * C8529 + (C9695 - C9694) * C8450 +
            (C28784 * C9282 - C4399 * C9279) * C8530 +
            (C28784 * C9686 - C4399 * C9684) * C8451) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C214 +
            (C4439 * C444 - C4396 * C492 + C4440 * C1011 - C4397 * C1069 +
             C4441 * C2477 - C4398 * C2521) *
                C28881) *
               C28784 * C1196 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C214 +
            (C4396 * C1639 - C4439 * C1581 + C4397 * C3007 - C4440 * C2951 +
             C4398 * C5717 - C4441 * C5663) *
                C28881) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C1196 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C28840 * C626 +
          ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
               C1196 +
           (((C1274 - C1273) * C214 + (C1644 - C1643) * C28881) * C77 +
            ((C1278 - C1277) * C214 + (C1646 - C1645) * C28881) * C78 +
            ((C28870 * C1267 - C151 * C1201) * C214 +
             (C28870 * C1641 - C151 * C1583) * C28881) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C8528 +
            (C28870 * C491 - C151 * C443) * C8449 + (C9369 - C9370) * C8529 +
            (C9748 - C9749) * C8450 + (C9373 - C9374) * C8530 +
            (C9750 - C9751) * C8451) *
               C28784 * C1196 +
           ((C9370 - C9369) * C8528 + (C9749 - C9748) * C8449 +
            (C9374 - C9373) * C8529 + (C9751 - C9750) * C8450 +
            (C151 * C9278 - C28870 * C9364) * C8530 +
            (C151 * C9683 - C28870 * C9745) * C8451) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C164 - C163) * C8528 + (C498 - C497) * C8449 +
            (C1273 - C1274) * C8529 + (C1643 - C1644) * C8450 +
            (C9377 - C9378) * C8530 + (C9752 - C9753) * C8451) *
               C28784 * C1196 +
           ((C1274 - C1273) * C8528 + (C1644 - C1643) * C8449 +
            (C9378 - C9377) * C8529 + (C9753 - C9752) * C8450 +
            (C28870 * C9365 - C151 * C9279) * C8530 +
            (C28870 * C9746 - C151 * C9684) * C8451) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C1196 -
           ((C214 * C5450 - C544 * C5338 - C214 * C5662 + C28881 * C5768) *
                C4398 +
            (C214 * C2732 - C544 * C2614 - C214 * C2950 + C28881 * C3059) *
                C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C28840 * C626 +
          ((C1714 * C4396 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C4397 +
            (C214 * C5451 - C544 * C5339 - C214 * C5663 + C28881 * C5769) *
                C4398) *
               C28784 * C28950 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C1196 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C28840 * C626 +
          ((C1716 * C77 + C1715 * C78 +
            (C214 * C1333 - C544 * C1201 - C214 * C1583 + C28881 * C1699) *
                C28870 * C79) *
               C28950 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
            C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
            C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
               C28870 * C28784 * C1196 -
           (C8530 * C9430 - C8761 * C9278 - C8530 * C9683 + C8451 * C9803 +
            C8529 * C4099 - C8760 * C4005 - C8529 * C4269 + C8450 * C4354 +
            C8528 * C1330 - C8759 * C1200 - C8528 * C1580 + C8449 * C1698) *
               C28870 * C28784 * C28950) *
              C28840 * C626 +
          ((C8528 * C1331 - C8759 * C1199 - C8528 * C1581 + C8449 * C1697 +
            C8529 * C4100 - C8760 * C4006 - C8529 * C4270 + C8450 * C4355 +
            C8530 * C9431 - C8761 * C9279 - C8530 * C9684 + C8451 * C9804) *
               C28870 * C28784 * C28950 -
           (C8530 * C4100 - C8761 * C4006 - C8530 * C4270 + C8451 * C4355 +
            C8529 * C1331 - C8760 * C1199 - C8529 * C1581 + C8450 * C1697 +
            C8528 * C216 - C8759 * C94 - C8528 * C444 + C8449 * C546) *
               C28870 * C28784 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C28857 * C1766 -
           ((C4399 * C4763 - C4400 * C4761 - C4399 * C4764 + C28784 * C4767) *
                C28881 * C4398 +
            C4799 * C4397 + C4798 * C4396) *
               C28857 * C28948) *
              C1768 +
          ((C4800 * C4396 + C4801 * C4397 +
            (C4399 * C4765 - C4400 * C4762 - C4399 * C4766 + C28784 * C4768) *
                C28881 * C4398) *
               C28857 * C28948 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C28857 * C1766 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C28857 * C28948) *
              C1768 +
          ((C87 * C634 - C88 * C629 - C87 * C635 + C77 * C641 + C89 * C632 -
            C90 * C628 - C89 * C633 + C78 * C640 + C91 * C638 - C92 * C631 -
            C91 * C639 + C79 * C643) *
               C28881 * C28870 * C28857 * C28948 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
            C9311 * C8450 + C9312 * C8451) *
               C28870 * C28857 * C1766 -
           ((C4399 * C8077 - C4400 * C8075 - C4399 * C8078 + C28784 * C8081) *
                C8451 +
            C6685 * C8450 + C4794 * C8449) *
               C28870 * C28857 * C28948) *
              C1768 +
          ((C4796 * C8449 +
            (C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C8450 +
            (C4399 * C8813 - C4400 * C8812 - C4399 * C8814 + C28784 * C8815) *
                C8451) *
               C28870 * C28857 * C28948 -
           (C9314 * C8451 + C9313 * C8450 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C8449) *
               C28870 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C28857 * C1766 +
           ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C28857 * C1766 +
           ((C4396 * C695 - C4439 * C629 + C4397 * C2263 - C4440 * C2213 +
             C4398 * C4852 - C4441 * C4762) *
                C4399 +
            (C4396 * C699 - C4439 * C635 + C4397 * C2266 - C4440 * C2218 +
             C4398 * C4854 - C4441 * C4766) *
                C28784) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C28857 * C1766 +
           ((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C28857 * C1766 +
           ((C704 - C703) * C87 + (C706 - C705) * C77 + (C708 - C707) * C89 +
            (C710 - C709) * C78 + (C28870 * C697 - C151 * C631) * C91 +
            (C28870 * C701 - C151 * C639) * C79) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C4399 +
             (C28870 * C157 - C151 * C99) * C28784) *
                C8449 +
            ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
            ((C9373 - C9374) * C4399 + (C9375 - C9376) * C28784) * C8451) *
               C28857 * C1766 +
           (((C151 * C630 - C28870 * C694) * C4399 +
             (C151 * C637 - C28870 * C698) * C28784) *
                C8449 +
            ((C151 * C2614 - C28870 * C2676) * C4399 +
             (C151 * C2618 - C28870 * C2679) * C28784) *
                C8450 +
            ((C151 * C8075 - C28870 * C8121) * C4399 +
             (C151 * C8078 - C28870 * C8123) * C28784) *
                C8451) *
               C28857 * C28948) *
              C1768 +
          ((((C164 - C163) * C4399 + (C166 - C165) * C28784) * C8449 +
            ((C1273 - C1274) * C4399 + (C1275 - C1276) * C28784) * C8450 +
            ((C9377 - C9378) * C4399 + (C9379 - C9380) * C28784) * C8451) *
               C28857 * C1766 +
           (((C704 - C703) * C4399 + (C706 - C705) * C28784) * C8449 +
            ((C28870 * C2677 - C151 * C2615) * C4399 +
             (C28870 * C2680 - C151 * C2620) * C28784) *
                C8450 +
            ((C28870 * C8866 - C151 * C8812) * C4399 +
             (C28870 * C8867 - C151 * C8814) * C28784) *
                C8451) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (-std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            ((C4914 - C4915) * C4399 + (C4916 - C4917) * C28784) * C4398) *
               C28857 * C1766 +
           (((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C214 * C4761 - C28881 * C4905) * C4399 +
             (C214 * C4764 - C28881 * C4907) * C28784) *
                C4398) *
               C28857 * C28948) *
              C1768 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C28857 * C1766 +
           (((C770 - C769) * C4399 + (C772 - C771) * C28784) * C4396 +
            ((C4919 - C4918) * C4399 + (C4921 - C4920) * C28784) * C4397 +
            ((C28881 * C4906 - C214 * C4762) * C4399 +
             (C28881 * C4908 - C214 * C4766) * C28784) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C28857 * C1766 +
           ((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C28857 * C1766 +
           ((C770 - C769) * C87 + (C772 - C771) * C77 + (C774 - C773) * C89 +
            (C776 - C775) * C78 + (C28881 * C763 - C214 * C631) * C91 +
            (C28881 * C767 - C214 * C639) * C79) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C4399 +
            (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
             C8451 * C4102 - C8530 * C4009) *
                C28784) *
               C28870 * C28857 * C1766 +
           ((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
             C8530 * C8075 - C8451 * C8163) *
                C4399 +
            (C8528 * C637 - C8449 * C764 + C8529 * C2618 - C8450 * C2735 +
             C8530 * C8078 - C8451 * C8165) *
                C28784) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
             C8530 * C4006 - C8451 * C4100) *
                C4399 +
            (C8528 * C101 - C8449 * C221 + C8529 * C1205 - C8450 * C1335 +
             C8530 * C4011 - C8451 * C4103) *
                C28784) *
               C28870 * C28857 * C1766 +
           ((C8449 * C761 - C8528 * C629 + C8450 * C2733 - C8529 * C2615 +
             C8451 * C8918 - C8530 * C8812) *
                C4399 +
            (C8449 * C765 - C8528 * C635 + C8450 * C2736 - C8529 * C2620 +
             C8451 * C8919 - C8530 * C8814) *
                C28784) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + (C4980 - C4981) * C4441 +
            (C4982 - C4983) * C4398) *
               C28881 * C28857 * C1766 +
           ((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
            (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
            (C4399 * C4761 - C28784 * C4763) * C4441 +
            (C4399 * C4971 - C28784 * C4973) * C4398) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C4399 * C94 - C28784 * C100) * C4439 +
            (C4399 * C278 - C28784 * C283) * C4396 + (C4984 - C4985) * C4440 +
            (C4986 - C4987) * C4397 + (C4988 - C4989) * C4441 +
            (C4990 - C4991) * C4398) *
               C28881 * C28857 * C1766 +
           ((C4985 - C4984) * C4439 + (C4987 - C4986) * C4396 +
            (C4989 - C4988) * C4440 + (C4991 - C4990) * C4397 +
            (C28784 * C4765 - C4399 * C4762) * C4441 +
            (C28784 * C4974 - C4399 * C4972) * C4398) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C151 +
                                (C77 * C282 - C87 * C277 + C78 * C283 -
                                 C89 * C278 + C79 * C284 - C91 * C279) *
                                    C28870) *
                                   C28881 * C28857 * C1766 +
                               ((C87 * C630 - C77 * C636 + C89 * C629 -
                                 C78 * C634 + C91 * C628 - C79 * C632) *
                                    C151 +
                                (C87 * C826 - C77 * C830 + C89 * C827 -
                                 C78 * C831 + C91 * C828 - C79 * C832) *
                                    C28870) *
                                   C28881 * C28857 * C28948) *
                                  C1768 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C151 +
                                (C87 * C278 - C77 * C283 + C89 * C279 -
                                 C78 * C284 + C91 * C280 - C79 * C285) *
                                    C28870) *
                                   C28881 * C28857 * C1766 +
                               ((C77 * C634 - C87 * C629 + C78 * C632 -
                                 C89 * C628 + C79 * C638 - C91 * C631) *
                                    C151 +
                                (C77 * C831 - C87 * C827 + C78 * C832 -
                                 C89 * C828 + C79 * C833 - C91 * C829) *
                                    C28870) *
                                   C28881 * C28857 * C28948) *
                                  C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C151 +
             (C28784 * C282 - C4399 * C277) * C28870) *
                C8449 +
            ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
            ((C9493 - C9494) * C151 + (C9495 - C9496) * C28870) * C8451) *
               C28857 * C1766 +
           (((C4977 - C4976) * C151 + (C4979 - C4978) * C28870) * C8449 +
            ((C6852 - C6853) * C151 + (C6854 - C6855) * C28870) * C8450 +
            ((C4399 * C8075 - C28784 * C8077) * C151 +
             (C4399 * C8205 - C28784 * C8207) * C28870) *
                C8451) *
               C28857 * C28948) *
              C1768 +
          ((((C4399 * C94 - C28784 * C100) * C151 +
             (C4399 * C278 - C28784 * C283) * C28870) *
                C8449 +
            ((C9497 - C9498) * C151 + (C9499 - C9500) * C28870) * C8450 +
            ((C9501 - C9502) * C151 + (C9503 - C9504) * C28870) * C8451) *
               C28857 * C1766 +
           (((C4985 - C4984) * C151 + (C4987 - C4986) * C28870) * C8449 +
            ((C28784 * C2619 - C4399 * C2615) * C151 +
             (C28784 * C2792 - C4399 * C2789) * C28870) *
                C8450 +
            ((C28784 * C8813 - C4399 * C8812) * C151 +
             (C28784 * C8971 - C4399 * C8970) * C28870) *
                C8451) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C28857 * C1766 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C28857 * C28948) *
              C1768 +
          ((C4439 * C695 - C4556 * C629 - C4439 * C827 + C4396 * C885 +
            C4440 * C2263 - C4557 * C2213 - C4440 * C2351 + C4397 * C2395 +
            C4441 * C4852 - C4558 * C4762 - C4441 * C4972 + C4398 * C5042) *
               C28784 * C28881 * C28857 * C28948 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C28857 * C1766 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C28857 * C28948) *
              C1768 +
          ((C902 * C77 + C901 * C78 +
            (C151 * C697 - C325 * C631 - C151 * C829 + C28870 * C887) * C79) *
               C28881 * C28857 * C28948 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
                C8449 +
            C9579 * C8450 + C9580 * C8451) *
               C28857 * C1766 -
           ((C151 * C8121 - C325 * C8075 - C151 * C8205 + C28870 * C8247) *
                C28784 * C8451 +
            (C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
                C28784 * C8450 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C28784 *
                C8449) *
               C28857 * C28948) *
              C1768 +
          ((C902 * C28784 * C8449 +
            (C151 * C2677 - C325 * C2615 - C151 * C2789 + C28870 * C2845) *
                C28784 * C8450 +
            (C151 * C8866 - C325 * C8812 - C151 * C8970 + C28870 * C9022) *
                C28784 * C8451) *
               C28857 * C28948 -
           (C9581 * C8451 + C9565 * C8450 + C350 * C28784 * C8449) * C28857 *
               C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] += (-std::pow(Pi, 2.5) *
                   ((((C28881 * C215 - C214 * C93) * C4439 +
                      (C28881 * C390 - C214 * C277) * C4396 +
                      (C4910 - C4911) * C4440 + (C5096 - C5097) * C4397 +
                      (C4914 - C4915) * C4441 + (C5098 - C5099) * C4398) *
                         C28784 * C28857 * C1766 +
                     ((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
                      (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
                      (C214 * C4761 - C28881 * C4905) * C4441 +
                      (C214 * C4971 - C28881 * C5093) * C4398) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
                      (C769 - C770) * C4440 + (C957 - C958) * C4397 +
                      (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
                         C28784 * C28857 * C1766 +
                     ((C770 - C769) * C4439 + (C958 - C957) * C4396 +
                      (C4919 - C4918) * C4440 + (C5101 - C5100) * C4397 +
                      (C28881 * C4906 - C214 * C4762) * C4441 +
                      (C28881 * C5094 - C214 * C4972) * C4398) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C28881 * C215 - C214 * C93) * C151 +
                       (C28881 * C390 - C214 * C277) * C28870) *
                          C77 +
                      ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
                      C405 * C79) *
                         C28857 * C1766 +
                     (((C214 * C630 - C28881 * C760) * C151 +
                       (C214 * C826 - C28881 * C952) * C28870) *
                          C77 +
                      ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
                      ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
                         C28857 * C28948) *
                        C1768 +
                    ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
                      ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
                      ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
                         C28857 * C1766 +
                     (((C770 - C769) * C151 + (C958 - C957) * C28870) * C77 +
                      ((C774 - C773) * C151 + (C960 - C959) * C28870) * C78 +
                      ((C28881 * C763 - C214 * C631) * C151 +
                       (C28881 * C955 - C214 * C829) * C28870) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 -
                       C8529 * C1200 + C8451 * C4099 - C8530 * C4005) *
                          C151 +
                      (C8449 * C390 - C8528 * C277 + C8450 * C1522 -
                       C8529 * C1396 + C8451 * C4228 - C8530 * C4143) *
                          C28870) *
                         C28784 * C28857 * C1766 +
                     ((C8528 * C630 - C8449 * C760 + C8529 * C2614 -
                       C8450 * C2732 + C8530 * C8075 - C8451 * C8163) *
                          C151 +
                      (C8528 * C826 - C8449 * C952 + C8529 * C2788 -
                       C8450 * C2897 + C8530 * C8205 - C8451 * C8287) *
                          C28870) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C8528 * C94 - C8449 * C216 + C8529 * C1199 -
                       C8450 * C1331 + C8530 * C4006 - C8451 * C4100) *
                          C151 +
                      (C8528 * C278 - C8449 * C391 + C8529 * C1397 -
                       C8450 * C1523 + C8530 * C4144 - C8451 * C4229) *
                          C28870) *
                         C28784 * C28857 * C1766 +
                     ((C8449 * C761 - C8528 * C629 + C8450 * C2733 -
                       C8529 * C2615 + C8451 * C8918 - C8530 * C8812) *
                          C151 +
                      (C8449 * C953 - C8528 * C827 + C8450 * C2898 -
                       C8529 * C2789 + C8451 * C9073 - C8530 * C8970) *
                          C28870) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (-std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            ((C4980 - C4981) * C214 + (C5158 - C5159) * C28881) * C4398) *
               C28857 * C1766 +
           (((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C4399 * C4761 - C28784 * C4763) * C214 +
             (C4399 * C5151 - C28784 * C5153) * C28881) *
                C4398) *
               C28857 * C28948) *
              C1768 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C28857 * C1766 +
           (((C4985 - C4984) * C214 + (C5161 - C5160) * C28881) * C4396 +
            ((C4989 - C4988) * C214 + (C5163 - C5162) * C28881) * C4397 +
            ((C28784 * C4765 - C4399 * C4762) * C214 +
             (C28784 * C5154 - C4399 * C5152) * C28881) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C214 +
                                (C77 * C448 - C87 * C443 + C78 * C449 -
                                 C89 * C444 + C79 * C450 - C91 * C445) *
                                    C28881) *
                                   C28870 * C28857 * C1766 +
                               ((C87 * C630 - C77 * C636 + C89 * C629 -
                                 C78 * C634 + C91 * C628 - C79 * C632) *
                                    C214 +
                                (C87 * C1010 - C77 * C1014 + C89 * C1011 -
                                 C78 * C1015 + C91 * C1012 - C79 * C1016) *
                                    C28881) *
                                   C28870 * C28857 * C28948) *
                                  C1768 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C214 +
                                (C87 * C444 - C77 * C449 + C89 * C445 -
                                 C78 * C450 + C91 * C446 - C79 * C451) *
                                    C28881) *
                                   C28870 * C28857 * C1766 +
                               ((C77 * C634 - C87 * C629 + C78 * C632 -
                                 C89 * C628 + C79 * C638 - C91 * C631) *
                                    C214 +
                                (C77 * C1015 - C87 * C1011 + C78 * C1016 -
                                 C89 * C1012 + C79 * C1017 - C91 * C1013) *
                                    C28881) *
                                   C28870 * C28857 * C28948) *
                                  C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C8528 +
            (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
            (C9688 - C9689) * C8450 + (C9493 - C9494) * C8530 +
            (C9690 - C9691) * C8451) *
               C28870 * C28857 * C1766 +
           ((C4977 - C4976) * C8528 + (C5157 - C5156) * C8449 +
            (C6852 - C6853) * C8529 + (C7018 - C7019) * C8450 +
            (C4399 * C8075 - C28784 * C8077) * C8530 +
            (C4399 * C8327 - C28784 * C8329) * C8451) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C4399 * C94 - C28784 * C100) * C8528 +
            (C4399 * C444 - C28784 * C449) * C8449 + (C9497 - C9498) * C8529 +
            (C9692 - C9693) * C8450 + (C9501 - C9502) * C8530 +
            (C9694 - C9695) * C8451) *
               C28870 * C28857 * C1766 +
           ((C4985 - C4984) * C8528 + (C5161 - C5160) * C8449 +
            (C28784 * C2619 - C4399 * C2615) * C8529 +
            (C28784 * C2954 - C4399 * C2951) * C8450 +
            (C28784 * C8813 - C4399 * C8812) * C8530 +
            (C28784 * C9125 - C4399 * C9124) * C8451) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] += (-std::pow(Pi, 2.5) *
                   ((((C4396 * C152 - C4439 * C93 + C4397 * C694 -
                       C4440 * C630 + C4398 * C2262 - C4441 * C2212) *
                          C214 +
                      (C4396 * C491 - C4439 * C443 + C4397 * C1068 -
                       C4440 * C1010 + C4398 * C2520 - C4441 * C2476) *
                          C28881) *
                         C28784 * C28857 * C1766 +
                     ((C4439 * C630 - C4396 * C694 + C4440 * C2212 -
                       C4397 * C2262 + C4441 * C4761 - C4398 * C4851) *
                          C214 +
                      (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 -
                       C4397 * C2520 + C4441 * C5151 - C4398 * C5213) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C4439 * C94 - C4396 * C153 + C4440 * C629 -
                       C4397 * C695 + C4441 * C2213 - C4398 * C2263) *
                          C214 +
                      (C4439 * C444 - C4396 * C492 + C4440 * C1011 -
                       C4397 * C1069 + C4441 * C2477 - C4398 * C2521) *
                          C28881) *
                         C28784 * C28857 * C1766 +
                     ((C4396 * C695 - C4439 * C629 + C4397 * C2263 -
                       C4440 * C2213 + C4398 * C4852 - C4441 * C4762) *
                          C214 +
                      (C4396 * C1069 - C4439 * C1011 + C4397 * C2521 -
                       C4440 * C2477 + C4398 * C5214 - C4441 * C5152) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C214 +
                       (C28870 * C491 - C151 * C443) * C28881) *
                          C77 +
                      ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
                      C506 * C79) *
                         C28857 * C1766 +
                     (((C151 * C630 - C28870 * C694) * C214 +
                       (C151 * C1010 - C28870 * C1068) * C28881) *
                          C77 +
                      ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
                      ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
                         C28857 * C28948) *
                        C1768 +
                    ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
                      ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
                      ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
                         C28857 * C1766 +
                     (((C704 - C703) * C214 + (C1074 - C1073) * C28881) * C77 +
                      ((C708 - C707) * C214 + (C1076 - C1075) * C28881) * C78 +
                      ((C28870 * C697 - C151 * C631) * C214 +
                       (C28870 * C1071 - C151 * C1013) * C28881) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C8528 +
                      (C28870 * C491 - C151 * C443) * C8449 +
                      (C9369 - C9370) * C8529 + (C9748 - C9749) * C8450 +
                      (C9373 - C9374) * C8530 + (C9750 - C9751) * C8451) *
                         C28784 * C28857 * C1766 +
                     ((C151 * C630 - C28870 * C694) * C8528 +
                      (C151 * C1010 - C28870 * C1068) * C8449 +
                      (C151 * C2614 - C28870 * C2676) * C8529 +
                      (C151 * C2950 - C28870 * C3006) * C8450 +
                      (C151 * C8075 - C28870 * C8121) * C8530 +
                      (C151 * C8327 - C28870 * C8369) * C8451) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C164 - C163) * C8528 + (C498 - C497) * C8449 +
                      (C1273 - C1274) * C8529 + (C1643 - C1644) * C8450 +
                      (C9377 - C9378) * C8530 + (C9752 - C9753) * C8451) *
                         C28784 * C28857 * C1766 +
                     ((C704 - C703) * C8528 + (C1074 - C1073) * C8449 +
                      (C28870 * C2677 - C151 * C2615) * C8529 +
                      (C28870 * C3007 - C151 * C2951) * C8450 +
                      (C28870 * C8866 - C151 * C8812) * C8530 +
                      (C28870 * C9176 - C151 * C9124) * C8451) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C28857 * C1766 -
           ((C214 * C4905 - C544 * C4761 - C214 * C5151 + C28881 * C5265) *
                C4398 +
            C5287 * C4397 + C5286 * C4396) *
               C28784 * C28857 * C28948) *
              C1768 +
          ((C1144 * C4396 + C5288 * C4397 +
            (C214 * C4906 - C544 * C4762 - C214 * C5152 + C28881 * C5266) *
                C4398) *
               C28784 * C28857 * C28948 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C28857 *
               C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C28857 * C1766 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C28857 * C28948) *
              C1768 +
          ((C1146 * C77 + C1145 * C78 +
            (C214 * C763 - C544 * C631 - C214 * C1013 + C28881 * C1129) *
                C28870 * C79) *
               C28857 * C28948 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
            C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
            C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
               C28870 * C28784 * C28857 * C1766 -
           (C8530 * C8163 - C8761 * C8075 - C8530 * C8327 + C8451 * C8409 +
            C8529 * C2732 - C8760 * C2614 - C8529 * C2950 + C8450 * C3059 +
            C8528 * C760 - C8759 * C630 - C8528 * C1010 + C8449 * C1128) *
               C28870 * C28784 * C28857 * C28948) *
              C1768 +
          ((C8528 * C761 - C8759 * C629 - C8528 * C1011 + C8449 * C1127 +
            C8529 * C2733 - C8760 * C2615 - C8529 * C2951 + C8450 * C3060 +
            C8530 * C8918 - C8761 * C8812 - C8530 * C9124 + C8451 * C9227) *
               C28870 * C28784 * C28857 * C28948 -
           (C8530 * C4100 - C8761 * C4006 - C8530 * C4270 + C8451 * C4355 +
            C8529 * C1331 - C8760 * C1199 - C8529 * C1581 + C8450 * C1697 +
            C8528 * C216 - C8759 * C94 - C8528 * C444 + C8449 * C546) *
               C28870 * C28784 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
               C4396 +
           C4798 * C4397 + C4799 * C4398) *
              C28857 * C2208 -
          (C6270 * C4398 + C4799 * C4397 + C4798 * C4396) * C28857 * C2209 +
          (C4799 * C4396 + C6270 * C4397 +
           (C4399 * C6259 - C4400 * C6258 - C4399 * C6260 + C28784 * C6261) *
               C28881 * C4398) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C28881 * C28870 * C28857 * C2208 -
          (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
           C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
           C87 * C637 + C77 * C642) *
              C28881 * C28870 * C28857 * C2209 +
          (C87 * C2215 - C88 * C2212 - C87 * C2216 + C77 * C2221 + C89 * C2217 -
           C90 * C2213 - C89 * C2218 + C78 * C2222 + C91 * C2219 - C92 * C2214 -
           C91 * C2220 + C79 * C2223) *
              C28881 * C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
           C9311 * C8450 + C9312 * C8451) *
              C28870 * C28857 * C2208 -
          ((C4399 * C8077 - C4400 * C8075 - C4399 * C8078 + C28784 * C8081) *
               C8451 +
           C6685 * C8450 + C4794 * C8449) *
              C28870 * C28857 * C2209 +
          (C4795 * C8449 + C6684 * C8450 +
           (C4399 * C8079 - C4400 * C8076 - C4399 * C8080 + C28784 * C8082) *
               C8451) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C4399 +
           (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
            C4398 * C2265 - C4441 * C2216) *
               C28784) *
              C28881 * C28857 * C2208 +
          ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
            C4441 * C4761 - C4398 * C4851) *
               C4399 +
           (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
            C4441 * C4764 - C4398 * C4853) *
               C28784) *
              C28881 * C28857 * C2209 +
          ((C4396 * C2262 - C4439 * C2212 + C4397 * C4851 - C4440 * C4761 +
            C4398 * C6308 - C4441 * C6258) *
               C4399 +
           (C4396 * C2265 - C4439 * C2216 + C4397 * C4853 - C4440 * C4764 +
            C4398 * C6309 - C4441 * C6260) *
               C28784) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C87 +
           (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C28881 * C28857 * C2208 +
          ((C151 * C630 - C28870 * C694) * C87 +
           (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
           (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
              C28881 * C28857 * C2209 +
          ((C28870 * C2262 - C151 * C2212) * C87 +
           (C28870 * C2265 - C151 * C2216) * C77 +
           (C28870 * C2263 - C151 * C2213) * C89 +
           (C28870 * C2266 - C151 * C2218) * C78 +
           (C28870 * C2264 - C151 * C2214) * C91 +
           (C28870 * C2267 - C151 * C2220) * C79) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C4399 +
            (C28870 * C157 - C151 * C99) * C28784) *
               C8449 +
           ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
           ((C9373 - C9374) * C4399 + (C9375 - C9376) * C28784) * C8451) *
              C28857 * C2208 +
          (((C151 * C630 - C28870 * C694) * C4399 +
            (C151 * C637 - C28870 * C698) * C28784) *
               C8449 +
           ((C151 * C2614 - C28870 * C2676) * C4399 +
            (C151 * C2618 - C28870 * C2679) * C28784) *
               C8450 +
           ((C151 * C8075 - C28870 * C8121) * C4399 +
            (C151 * C8078 - C28870 * C8123) * C28784) *
               C8451) *
              C28857 * C2209 +
          (((C28870 * C2262 - C151 * C2212) * C4399 +
            (C28870 * C2265 - C151 * C2216) * C28784) *
               C8449 +
           ((C28870 * C5396 - C151 * C5338) * C4399 +
            (C28870 * C5398 - C151 * C5341) * C28784) *
               C8450 +
           ((C28870 * C8122 - C151 * C8076) * C4399 +
            (C28870 * C8124 - C151 * C8080) * C28784) *
               C8451) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4399 +
            (C28881 * C220 - C214 * C99) * C28784) *
               C4396 +
           ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
           C6359 * C4398) *
              C28857 * C2208 +
          (((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
           ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
           ((C6353 - C6354) * C4399 + (C6355 - C6356) * C28784) * C4398) *
              C28857 * C2209 +
          (C6359 * C4396 +
           ((C6354 - C6353) * C4399 + (C6356 - C6355) * C28784) * C4397 +
           ((C28881 * C6348 - C214 * C6258) * C4399 +
            (C28881 * C6349 - C214 * C6260) * C28784) *
               C4398) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C87 +
           (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C28870 * C28857 * C2208 +
          ((C214 * C630 - C28881 * C760) * C87 +
           (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
           (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
              C28870 * C28857 * C2209 +
          ((C28881 * C2306 - C214 * C2212) * C87 +
           (C28881 * C2309 - C214 * C2216) * C77 +
           (C28881 * C2307 - C214 * C2213) * C89 +
           (C28881 * C2310 - C214 * C2218) * C78 +
           (C28881 * C2308 - C214 * C2214) * C91 +
           (C28881 * C2311 - C214 * C2220) * C79) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
            C8451 * C4099 - C8530 * C4005) *
               C4399 +
           (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
            C8451 * C4102 - C8530 * C4009) *
               C28784) *
              C28870 * C28857 * C2208 +
          ((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
            C8530 * C8075 - C8451 * C8163) *
               C4399 +
           (C8528 * C637 - C8449 * C764 + C8529 * C2618 - C8450 * C2735 +
            C8530 * C8078 - C8451 * C8165) *
               C28784) *
              C28870 * C28857 * C2209 +
          ((C8449 * C2306 - C8528 * C2212 + C8450 * C5450 - C8529 * C5338 +
            C8451 * C8164 - C8530 * C8076) *
               C4399 +
           (C8449 * C2309 - C8528 * C2216 + C8450 * C5452 - C8529 * C5341 +
            C8451 * C8166 - C8530 * C8080) *
               C28784) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C4439 +
           (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
           (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
              C28881 * C28857 * C2208 +
          ((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
           (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
           (C6402 - C6403) * C4441 + (C6404 - C6405) * C4398) *
              C28881 * C28857 * C2209 +
          (C6400 * C4439 + C6401 * C4396 + (C6403 - C6402) * C4440 +
           (C6405 - C6404) * C4397 + (C28784 * C6259 - C4399 * C6258) * C4441 +
           (C28784 * C6398 - C4399 * C6397) * C4398) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C28870) *
              C28881 * C28857 * C2208 +
          ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
            C79 * C632) *
               C151 +
           (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 + C91 * C828 -
            C79 * C832) *
               C28870) *
              C28881 * C28857 * C2209 +
          ((C77 * C2215 - C87 * C2212 + C78 * C2217 - C89 * C2213 +
            C79 * C2219 - C91 * C2214) *
               C151 +
           (C77 * C2353 - C87 * C2350 + C78 * C2354 - C89 * C2351 +
            C79 * C2355 - C91 * C2352) *
               C28870) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C151 +
            (C28784 * C282 - C4399 * C277) * C28870) *
               C8449 +
           ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
           ((C9493 - C9494) * C151 + (C9495 - C9496) * C28870) * C8451) *
              C28857 * C2208 +
          (((C4977 - C4976) * C151 + (C4979 - C4978) * C28870) * C8449 +
           ((C6852 - C6853) * C151 + (C6854 - C6855) * C28870) * C8450 +
           ((C4399 * C8075 - C28784 * C8077) * C151 +
            (C4399 * C8205 - C28784 * C8207) * C28870) *
               C8451) *
              C28857 * C2209 +
          ((C6400 * C151 + C6401 * C28870) * C8449 +
           ((C6857 - C6856) * C151 + (C6859 - C6858) * C28870) * C8450 +
           ((C28784 * C8079 - C4399 * C8076) * C151 +
            (C28784 * C8208 - C4399 * C8206) * C28870) *
               C8451) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
           C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
           C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
              C28784 * C28881 * C28857 * C2208 -
          (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
           C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
           C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
              C28784 * C28881 * C28857 * C2209 +
          (C4439 * C2262 - C4556 * C2212 - C4439 * C2350 + C4396 * C2394 +
           C4440 * C4851 - C4557 * C4761 - C4440 * C4971 + C4397 * C5041 +
           C4441 * C6308 - C4558 * C6258 - C4441 * C6397 + C4398 * C6443) *
              C28784 * C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C28881 * C28857 * C2208 -
          (C901 * C79 + C902 * C78 +
           (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
              C28881 * C28857 * C2209 +
          ((C151 * C2262 - C325 * C2212 - C151 * C2350 + C28870 * C2394) * C77 +
           (C151 * C2263 - C325 * C2213 - C151 * C2351 + C28870 * C2395) * C78 +
           (C151 * C2264 - C325 * C2214 - C151 * C2352 + C28870 * C2396) *
               C79) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
               C8449 +
           C9579 * C8450 + C9580 * C8451) *
              C28857 * C2208 -
          ((C151 * C8121 - C325 * C8075 - C151 * C8205 + C28870 * C8247) *
               C28784 * C8451 +
           (C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
               C28784 * C8450 +
           (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C28784 *
               C8449) *
              C28857 * C2209 +
          ((C151 * C2262 - C325 * C2212 - C151 * C2350 + C28870 * C2394) *
               C28784 * C8449 +
           (C151 * C5396 - C325 * C5338 - C151 * C5504 + C28870 * C5558) *
               C28784 * C8450 +
           (C151 * C8122 - C325 * C8076 - C151 * C8206 + C28870 * C8248) *
               C28784 * C8451) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C4439 +
           (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
           (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
              C28784 * C28857 * C2208 +
          ((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
           (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
           (C6353 - C6354) * C4441 + (C6485 - C6486) * C4398) *
              C28784 * C28857 * C2209 +
          (C6351 * C4439 + C6484 * C4396 + (C6354 - C6353) * C4440 +
           (C6486 - C6485) * C4397 + (C28881 * C6348 - C214 * C6258) * C4441 +
           (C28881 * C6482 - C214 * C6397) * C4398) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C151 +
            (C28881 * C390 - C214 * C277) * C28870) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 + C405 * C79) *
              C28857 * C2208 +
          (((C214 * C630 - C28881 * C760) * C151 +
            (C214 * C826 - C28881 * C952) * C28870) *
               C77 +
           ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
           ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
              C28857 * C2209 +
          (((C28881 * C2306 - C214 * C2212) * C151 +
            (C28881 * C2435 - C214 * C2350) * C28870) *
               C77 +
           ((C28881 * C2307 - C214 * C2213) * C151 +
            (C28881 * C2436 - C214 * C2351) * C28870) *
               C78 +
           ((C28881 * C2308 - C214 * C2214) * C151 +
            (C28881 * C2437 - C214 * C2352) * C28870) *
               C79) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
            C8451 * C4099 - C8530 * C4005) *
               C151 +
           (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
            C8451 * C4228 - C8530 * C4143) *
               C28870) *
              C28784 * C28857 * C2208 +
          ((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
            C8530 * C8075 - C8451 * C8163) *
               C151 +
           (C8528 * C826 - C8449 * C952 + C8529 * C2788 - C8450 * C2897 +
            C8530 * C8205 - C8451 * C8287) *
               C28870) *
              C28784 * C28857 * C2209 +
          ((C8449 * C2306 - C8528 * C2212 + C8450 * C5450 - C8529 * C5338 +
            C8451 * C8164 - C8530 * C8076) *
               C151 +
           (C8449 * C2435 - C8528 * C2350 + C8450 * C5610 - C8529 * C5504 +
            C8451 * C8288 - C8530 * C8206) *
               C28870) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C214 +
            (C28784 * C448 - C4399 * C443) * C28881) *
               C4396 +
           ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
           C6532 * C4398) *
              C28857 * C2208 +
          (((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
           ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
           ((C6402 - C6403) * C214 + (C6529 - C6530) * C28881) * C4398) *
              C28857 * C2209 +
          (C6532 * C4396 +
           ((C6403 - C6402) * C214 + (C6530 - C6529) * C28881) * C4397 +
           ((C28784 * C6259 - C4399 * C6258) * C214 +
            (C28784 * C6525 - C4399 * C6524) * C28881) *
               C4398) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C28881) *
              C28870 * C28857 * C2208 +
          ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
            C79 * C632) *
               C214 +
           (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
            C91 * C1012 - C79 * C1016) *
               C28881) *
              C28870 * C28857 * C2209 +
          ((C77 * C2215 - C87 * C2212 + C78 * C2217 - C89 * C2213 +
            C79 * C2219 - C91 * C2214) *
               C214 +
           (C77 * C2479 - C87 * C2476 + C78 * C2480 - C89 * C2477 +
            C79 * C2481 - C91 * C2478) *
               C28881) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C8528 +
           (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
           (C9688 - C9689) * C8450 + (C9493 - C9494) * C8530 +
           (C9690 - C9691) * C8451) *
              C28870 * C28857 * C2208 +
          ((C4977 - C4976) * C8528 + (C5157 - C5156) * C8449 +
           (C6852 - C6853) * C8529 + (C7018 - C7019) * C8450 +
           (C4399 * C8075 - C28784 * C8077) * C8530 +
           (C4399 * C8327 - C28784 * C8329) * C8451) *
              C28870 * C28857 * C2209 +
          (C6400 * C8528 + C6528 * C8449 + (C6857 - C6856) * C8529 +
           (C7021 - C7020) * C8450 + (C28784 * C8079 - C4399 * C8076) * C8530 +
           (C28784 * C8330 - C4399 * C8328) * C8451) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C214 +
           (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
            C4398 * C2520 - C4441 * C2476) *
               C28881) *
              C28784 * C28857 * C2208 +
          ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
            C4441 * C4761 - C4398 * C4851) *
               C214 +
           (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 - C4397 * C2520 +
            C4441 * C5151 - C4398 * C5213) *
               C28881) *
              C28784 * C28857 * C2209 +
          ((C4396 * C2262 - C4439 * C2212 + C4397 * C4851 - C4440 * C4761 +
            C4398 * C6308 - C4441 * C6258) *
               C214 +
           (C4396 * C2520 - C4439 * C2476 + C4397 * C5213 - C4440 * C5151 +
            C4398 * C6570 - C4441 * C6524) *
               C28881) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C214 +
            (C28870 * C491 - C151 * C443) * C28881) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 + C506 * C79) *
              C28857 * C2208 +
          (((C151 * C630 - C28870 * C694) * C214 +
            (C151 * C1010 - C28870 * C1068) * C28881) *
               C77 +
           ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
           ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
              C28857 * C2209 +
          (((C28870 * C2262 - C151 * C2212) * C214 +
            (C28870 * C2520 - C151 * C2476) * C28881) *
               C77 +
           ((C28870 * C2263 - C151 * C2213) * C214 +
            (C28870 * C2521 - C151 * C2477) * C28881) *
               C78 +
           ((C28870 * C2264 - C151 * C2214) * C214 +
            (C28870 * C2522 - C151 * C2478) * C28881) *
               C79) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C8528 +
           (C28870 * C491 - C151 * C443) * C8449 + (C9369 - C9370) * C8529 +
           (C9748 - C9749) * C8450 + (C9373 - C9374) * C8530 +
           (C9750 - C9751) * C8451) *
              C28784 * C28857 * C2208 +
          ((C151 * C630 - C28870 * C694) * C8528 +
           (C151 * C1010 - C28870 * C1068) * C8449 +
           (C151 * C2614 - C28870 * C2676) * C8529 +
           (C151 * C2950 - C28870 * C3006) * C8450 +
           (C151 * C8075 - C28870 * C8121) * C8530 +
           (C151 * C8327 - C28870 * C8369) * C8451) *
              C28784 * C28857 * C2209 +
          ((C28870 * C2262 - C151 * C2212) * C8528 +
           (C28870 * C2520 - C151 * C2476) * C8449 +
           (C28870 * C5396 - C151 * C5338) * C8529 +
           (C28870 * C5716 - C151 * C5662) * C8450 +
           (C28870 * C8122 - C151 * C8076) * C8530 +
           (C28870 * C8370 - C151 * C8328) * C8451) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
           C5286 * C4397 + C5287 * C4398) *
              C28784 * C28857 * C2208 -
          (C6617 * C4398 + C5287 * C4397 + C5286 * C4396) * C28784 * C28857 *
              C2209 +
          (C5287 * C4396 + C6617 * C4397 +
           (C214 * C6348 - C544 * C6258 - C214 * C6524 + C28881 * C6609) *
               C4398) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
               C77 +
           C572 * C78 + C573 * C79) *
              C28857 * C2208 -
          (C1145 * C79 + C1146 * C78 +
           (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
               C28870 * C77) *
              C28857 * C2209 +
          ((C214 * C2306 - C544 * C2212 - C214 * C2476 + C28881 * C2561) *
               C28870 * C77 +
           (C214 * C2307 - C544 * C2213 - C214 * C2477 + C28881 * C2562) *
               C28870 * C78 +
           (C214 * C2308 - C544 * C2214 - C214 * C2478 + C28881 * C2563) *
               C28870 * C79) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
           C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
           C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
              C28870 * C28784 * C28857 * C2208 -
          (C8530 * C8163 - C8761 * C8075 - C8530 * C8327 + C8451 * C8409 +
           C8529 * C2732 - C8760 * C2614 - C8529 * C2950 + C8450 * C3059 +
           C8528 * C760 - C8759 * C630 - C8528 * C1010 + C8449 * C1128) *
              C28870 * C28784 * C28857 * C2209 +
          (C8528 * C2306 - C8759 * C2212 - C8528 * C2476 + C8449 * C2561 +
           C8529 * C5450 - C8760 * C5338 - C8529 * C5662 + C8450 * C5768 +
           C8530 * C8164 - C8761 * C8076 - C8530 * C8328 + C8451 * C8410) *
              C28870 * C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C1196 -
           (C6686 * C4398 + C6687 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C1766 +
          ((C6687 * C4396 + C6686 * C4397 +
            (C4399 * C6668 - C4400 * C6667 - C4399 * C6669 + C28784 * C6670) *
                C28881 * C4398) *
               C28950 -
           (C6270 * C4398 + C4799 * C4397 + C4798 * C4396) * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C1196 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C1766 +
          ((C87 * C2617 - C88 * C2614 - C87 * C2618 + C77 * C2623 +
            C89 * C2619 - C90 * C2615 - C89 * C2620 + C78 * C2624 +
            C91 * C2621 - C92 * C2616 - C91 * C2622 + C79 * C2625) *
               C28881 * C28870 * C28950 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
            C9311 * C8450 + C9312 * C8451) *
               C28870 * C1196 -
           ((C4399 * C9280 - C4400 * C9278 - C4399 * C9281 + C28784 * C9284) *
                C8451 +
            C9312 * C8450 + C9311 * C8449) *
               C28870 * C28950) *
              C1766 +
          ((C6685 * C8449 + C10658 * C8450 +
            (C4399 * C10648 - C4400 * C10647 - C4399 * C10649 +
             C28784 * C10650) *
                C8451) *
               C28870 * C28950 -
           (C10658 * C8451 + C6685 * C8450 + C4794 * C8449) * C28870 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C1766 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C1196 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C4399 +
            (C4396 * C2679 - C4439 * C2618 + C4397 * C5398 - C4440 * C5341 +
             C4398 * C6738 - C4441 * C6669) *
                C28784) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C1196 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C1766 +
          (((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C1196 +
           ((C28870 * C2676 - C151 * C2614) * C87 +
            (C28870 * C2679 - C151 * C2618) * C77 +
            (C28870 * C2677 - C151 * C2615) * C89 +
            (C28870 * C2680 - C151 * C2620) * C78 +
            (C28870 * C2678 - C151 * C2616) * C91 +
            (C28870 * C2681 - C151 * C2622) * C79) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C4399 +
             (C28870 * C157 - C151 * C99) * C28784) *
                C8449 +
            ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
            ((C9373 - C9374) * C4399 + (C9375 - C9376) * C28784) * C8451) *
               C1196 +
           (((C9370 - C9369) * C4399 + (C9372 - C9371) * C28784) * C8449 +
            ((C9374 - C9373) * C4399 + (C9376 - C9375) * C28784) * C8450 +
            ((C151 * C9278 - C28870 * C9364) * C4399 +
             (C151 * C9281 - C28870 * C9366) * C28784) *
                C8451) *
               C28950) *
              C1766 +
          ((((C151 * C630 - C28870 * C694) * C4399 +
             (C151 * C637 - C28870 * C698) * C28784) *
                C8449 +
            ((C10711 - C10712) * C4399 + (C10713 - C10714) * C28784) * C8450 +
            ((C10715 - C10716) * C4399 + (C10717 - C10718) * C28784) * C8451) *
               C1196 +
           (((C10712 - C10711) * C4399 + (C10714 - C10713) * C28784) * C8449 +
            ((C10716 - C10715) * C4399 + (C10718 - C10717) * C28784) * C8450 +
            ((C28870 * C10708 - C151 * C10647) * C4399 +
             (C28870 * C10709 - C151 * C10649) * C28784) *
                C8451) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (-std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            C6359 * C4398) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
            ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
               C28950) *
              C1766 +
          ((((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C6353 - C6354) * C4399 + (C6355 - C6356) * C28784) * C4398) *
               C1196 +
           (((C6793 - C6792) * C4399 + (C6795 - C6794) * C28784) * C4396 +
            ((C6797 - C6796) * C4399 + (C6799 - C6798) * C28784) * C4397 +
            ((C28881 * C6789 - C214 * C6667) * C4399 +
             (C28881 * C6790 - C214 * C6669) * C28784) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C1766 +
          (((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C1196 +
           ((C28881 * C2732 - C214 * C2614) * C87 +
            (C28881 * C2735 - C214 * C2618) * C77 +
            (C28881 * C2733 - C214 * C2615) * C89 +
            (C28881 * C2736 - C214 * C2620) * C78 +
            (C28881 * C2734 - C214 * C2616) * C91 +
            (C28881 * C2737 - C214 * C2622) * C79) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C4399 +
            (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
             C8451 * C4102 - C8530 * C4009) *
                C28784) *
               C28870 * C1196 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C4399 +
            (C8528 * C1207 - C8449 * C1334 + C8529 * C4009 - C8450 * C4102 +
             C8530 * C9281 - C8451 * C9432) *
                C28784) *
               C28870 * C28950) *
              C1766 +
          (((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
             C8530 * C8075 - C8451 * C8163) *
                C4399 +
            (C8528 * C637 - C8449 * C764 + C8529 * C2618 - C8450 * C2735 +
             C8530 * C8078 - C8451 * C8165) *
                C28784) *
               C28870 * C1196 +
           ((C8449 * C2732 - C8528 * C2614 + C8450 * C8163 - C8529 * C8075 +
             C8451 * C10768 - C8530 * C10647) *
                C4399 +
            (C8449 * C2735 - C8528 * C2618 + C8450 * C8165 - C8529 * C8078 +
             C8451 * C10769 - C8530 * C10649) *
                C28784) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
               C28881 * C1196 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
            (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
            (C6858 - C6859) * C4398) *
               C28881 * C28950) *
              C1766 +
          (((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
            (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
            (C6402 - C6403) * C4441 + (C6404 - C6405) * C4398) *
               C28881 * C1196 +
           ((C6853 - C6852) * C4439 + (C6855 - C6854) * C4396 +
            (C6857 - C6856) * C4440 + (C6859 - C6858) * C4397 +
            (C28784 * C6668 - C4399 * C6667) * C4441 +
            (C28784 * C6850 - C4399 * C6849) * C4398) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C28870) *
               C28881 * C1196 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C151 +
            (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
             C91 * C1398 - C79 * C1402) *
                C28870) *
               C28881 * C28950) *
              C1766 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C151 +
            (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 + C91 * C828 -
             C79 * C832) *
                C28870) *
               C28881 * C1196 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C151 +
            (C77 * C2791 - C87 * C2788 + C78 * C2792 - C89 * C2789 +
             C79 * C2793 - C91 * C2790) *
                C28870) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C151 +
             (C28784 * C282 - C4399 * C277) * C28870) *
                C8449 +
            ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
            ((C9493 - C9494) * C151 + (C9495 - C9496) * C28870) * C8451) *
               C1196 +
           (((C9490 - C9489) * C151 + (C9492 - C9491) * C28870) * C8449 +
            ((C9494 - C9493) * C151 + (C9496 - C9495) * C28870) * C8450 +
            ((C4399 * C9278 - C28784 * C9280) * C151 +
             (C4399 * C9484 - C28784 * C9486) * C28870) *
                C8451) *
               C28950) *
              C1766 +
          ((((C4977 - C4976) * C151 + (C4979 - C4978) * C28870) * C8449 +
            ((C6852 - C6853) * C151 + (C6854 - C6855) * C28870) * C8450 +
            ((C10823 - C10824) * C151 + (C10825 - C10826) * C28870) * C8451) *
               C1196 +
           (((C6853 - C6852) * C151 + (C6855 - C6854) * C28870) * C8449 +
            ((C10824 - C10823) * C151 + (C10826 - C10825) * C28870) * C8450 +
            ((C28784 * C10648 - C4399 * C10647) * C151 +
             (C28784 * C10821 - C4399 * C10820) * C28870) *
                C8451) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C1196 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C1766 +
          ((C4439 * C2676 - C4556 * C2614 - C4439 * C2788 + C4396 * C2844 +
            C4440 * C5396 - C4557 * C5338 - C4440 * C5504 + C4397 * C5558 +
            C4441 * C6737 - C4558 * C6667 - C4441 * C6849 + C4398 * C6909) *
               C28784 * C28881 * C28950 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C1196 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C1766 +
          (((C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
                C77 +
            (C151 * C2677 - C325 * C2615 - C151 * C2789 + C28870 * C2845) *
                C78 +
            (C151 * C2678 - C325 * C2616 - C151 * C2790 + C28870 * C2846) *
                C79) *
               C28881 * C28950 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
                C8449 +
            C9579 * C8450 + C9580 * C8451) *
               C1196 -
           ((C151 * C9364 - C325 * C9278 - C151 * C9484 + C28870 * C9554) *
                C28784 * C8451 +
            C9580 * C8450 + C9579 * C8449) *
               C28950) *
              C1766 +
          ((C10892 * C8449 + C10893 * C8450 +
            (C151 * C10708 - C325 * C10647 - C151 * C10820 + C28870 * C10876) *
                C28784 * C8451) *
               C28950 -
           (C10893 * C8451 + C10892 * C8450 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C28784 *
                C8449) *
               C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
               C28784 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
            (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
            (C6964 - C6965) * C4398) *
               C28784 * C28950) *
              C1766 +
          (((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
            (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
            (C6353 - C6354) * C4441 + (C6485 - C6486) * C4398) *
               C28784 * C1196 +
           ((C6793 - C6792) * C4439 + (C6963 - C6962) * C4396 +
            (C6797 - C6796) * C4440 + (C6965 - C6964) * C4397 +
            (C28881 * C6789 - C214 * C6667) * C4441 +
            (C28881 * C6960 - C214 * C6849) * C4398) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C1766 +
          ((((C214 * C630 - C28881 * C760) * C151 +
             (C214 * C826 - C28881 * C952) * C28870) *
                C77 +
            ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
            ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
               C1196 +
           (((C28881 * C2732 - C214 * C2614) * C151 +
             (C28881 * C2897 - C214 * C2788) * C28870) *
                C77 +
            ((C28881 * C2733 - C214 * C2615) * C151 +
             (C28881 * C2898 - C214 * C2789) * C28870) *
                C78 +
            ((C28881 * C2734 - C214 * C2616) * C151 +
             (C28881 * C2899 - C214 * C2790) * C28870) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C151 +
            (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
             C8451 * C4228 - C8530 * C4143) *
                C28870) *
               C28784 * C1196 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C151 +
            (C8528 * C1396 - C8449 * C1522 + C8529 * C4143 - C8450 * C4228 +
             C8530 * C9484 - C8451 * C9631) *
                C28870) *
               C28784 * C28950) *
              C1766 +
          (((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
             C8530 * C8075 - C8451 * C8163) *
                C151 +
            (C8528 * C826 - C8449 * C952 + C8529 * C2788 - C8450 * C2897 +
             C8530 * C8205 - C8451 * C8287) *
                C28870) *
               C28784 * C1196 +
           ((C8449 * C2732 - C8528 * C2614 + C8450 * C8163 - C8529 * C8075 +
             C8451 * C10768 - C8530 * C10647) *
                C151 +
            (C8449 * C2897 - C8528 * C2788 + C8450 * C8287 - C8529 * C8205 +
             C8451 * C10943 - C8530 * C10820) *
                C28870) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (-std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            C6532 * C4398) *
               C1196 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
            ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
               C28950) *
              C1766 +
          ((((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C6402 - C6403) * C214 + (C6529 - C6530) * C28881) * C4398) *
               C1196 +
           (((C6853 - C6852) * C214 + (C7019 - C7018) * C28881) * C4396 +
            ((C6857 - C6856) * C214 + (C7021 - C7020) * C28881) * C4397 +
            ((C28784 * C6668 - C4399 * C6667) * C214 +
             (C28784 * C7016 - C4399 * C7015) * C28881) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C1196 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C214 +
            (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
             C91 * C1582 - C79 * C1586) *
                C28881) *
               C28870 * C28950) *
              C1766 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C214 +
            (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
             C91 * C1012 - C79 * C1016) *
                C28881) *
               C28870 * C1196 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C214 +
            (C77 * C2953 - C87 * C2950 + C78 * C2954 - C89 * C2951 +
             C79 * C2955 - C91 * C2952) *
                C28881) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C8528 +
            (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
            (C9688 - C9689) * C8450 + (C9493 - C9494) * C8530 +
            (C9690 - C9691) * C8451) *
               C28870 * C1196 +
           ((C9490 - C9489) * C8528 + (C9689 - C9688) * C8449 +
            (C9494 - C9493) * C8529 + (C9691 - C9690) * C8450 +
            (C4399 * C9278 - C28784 * C9280) * C8530 +
            (C4399 * C9683 - C28784 * C9685) * C8451) *
               C28870 * C28950) *
              C1766 +
          (((C4977 - C4976) * C8528 + (C5157 - C5156) * C8449 +
            (C6852 - C6853) * C8529 + (C7018 - C7019) * C8450 +
            (C10823 - C10824) * C8530 + (C10997 - C10998) * C8451) *
               C28870 * C1196 +
           ((C6853 - C6852) * C8528 + (C7019 - C7018) * C8449 +
            (C10824 - C10823) * C8529 + (C10998 - C10997) * C8450 +
            (C28784 * C10648 - C4399 * C10647) * C8530 +
            (C28784 * C10995 - C4399 * C10994) * C8451) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C1766 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C214 +
            (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 - C4397 * C2520 +
             C4441 * C5151 - C4398 * C5213) *
                C28881) *
               C28784 * C1196 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C214 +
            (C4396 * C3006 - C4439 * C2950 + C4397 * C5716 - C4440 * C5662 +
             C4398 * C7071 - C4441 * C7015) *
                C28881) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C1196 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C1766 +
          ((((C151 * C630 - C28870 * C694) * C214 +
             (C151 * C1010 - C28870 * C1068) * C28881) *
                C77 +
            ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
            ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
               C1196 +
           (((C28870 * C2676 - C151 * C2614) * C214 +
             (C28870 * C3006 - C151 * C2950) * C28881) *
                C77 +
            ((C28870 * C2677 - C151 * C2615) * C214 +
             (C28870 * C3007 - C151 * C2951) * C28881) *
                C78 +
            ((C28870 * C2678 - C151 * C2616) * C214 +
             (C28870 * C3008 - C151 * C2952) * C28881) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C8528 +
            (C28870 * C491 - C151 * C443) * C8449 + (C9369 - C9370) * C8529 +
            (C9748 - C9749) * C8450 + (C9373 - C9374) * C8530 +
            (C9750 - C9751) * C8451) *
               C28784 * C1196 +
           ((C9370 - C9369) * C8528 + (C9749 - C9748) * C8449 +
            (C9374 - C9373) * C8529 + (C9751 - C9750) * C8450 +
            (C151 * C9278 - C28870 * C9364) * C8530 +
            (C151 * C9683 - C28870 * C9745) * C8451) *
               C28784 * C28950) *
              C1766 +
          (((C151 * C630 - C28870 * C694) * C8528 +
            (C151 * C1010 - C28870 * C1068) * C8449 +
            (C10711 - C10712) * C8529 + (C11050 - C11051) * C8450 +
            (C10715 - C10716) * C8530 + (C11052 - C11053) * C8451) *
               C28784 * C1196 +
           ((C10712 - C10711) * C8528 + (C11051 - C11050) * C8449 +
            (C10716 - C10715) * C8529 + (C11053 - C11052) * C8450 +
            (C28870 * C10708 - C151 * C10647) * C8530 +
            (C28870 * C11048 - C151 * C10994) * C8451) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C1196 -
           (C7136 * C4398 + C7137 * C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C1766 +
          ((C7137 * C4396 + C7136 * C4397 +
            (C214 * C6789 - C544 * C6667 - C214 * C7015 + C28881 * C7122) *
                C4398) *
               C28784 * C28950 -
           (C6617 * C4398 + C5287 * C4397 + C5286 * C4396) * C28784 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C1196 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C1766 +
          (((C214 * C2732 - C544 * C2614 - C214 * C2950 + C28881 * C3059) *
                C28870 * C77 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C28870 * C78 +
            (C214 * C2734 - C544 * C2616 - C214 * C2952 + C28881 * C3061) *
                C28870 * C79) *
               C28950 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
            C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
            C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
               C28870 * C28784 * C1196 -
           (C8530 * C9430 - C8761 * C9278 - C8530 * C9683 + C8451 * C9803 +
            C8529 * C4099 - C8760 * C4005 - C8529 * C4269 + C8450 * C4354 +
            C8528 * C1330 - C8759 * C1200 - C8528 * C1580 + C8449 * C1698) *
               C28870 * C28784 * C28950) *
              C1766 +
          ((C8528 * C2732 - C8759 * C2614 - C8528 * C2950 + C8449 * C3059 +
            C8529 * C8163 - C8760 * C8075 - C8529 * C8327 + C8450 * C8409 +
            C8530 * C10768 - C8761 * C10647 - C8530 * C10994 + C8451 * C11103) *
               C28870 * C28784 * C28950 -
           (C8530 * C8163 - C8761 * C8075 - C8530 * C8327 + C8451 * C8409 +
            C8529 * C2732 - C8760 * C2614 - C8529 * C2950 + C8450 * C3059 +
            C8528 * C760 - C8759 * C630 - C8528 * C1010 + C8449 * C1128) *
               C28870 * C28784 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C3112 -
           (C6686 * C4398 + C6687 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C28840 * C1768 +
          (((C4399 * C1204 - C4400 * C1199 - C4399 * C1205 + C28784 * C1211) *
                C28881 * C4396 +
            (C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C28881 * C4397 +
            (C4399 * C5342 - C4400 * C5339 - C4399 * C5343 + C28784 * C5345) *
                C28881 * C4398) *
               C28950 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C3112 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C28840 * C1768 +
          ((C87 * C1204 - C88 * C1199 - C87 * C1205 + C77 * C1211 +
            C89 * C1202 - C90 * C1198 - C89 * C1203 + C78 * C1210 +
            C91 * C1208 - C92 * C1201 - C91 * C1209 + C79 * C1213) *
               C28881 * C28870 * C28950 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
            C9311 * C8450 + C9312 * C8451) *
               C28870 * C3112 -
           ((C4399 * C9280 - C4400 * C9278 - C4399 * C9281 + C28784 * C9284) *
                C8451 +
            C9312 * C8450 + C9311 * C8449) *
               C28870 * C28950) *
              C28840 * C1768 +
          ((C9313 * C8449 + C9314 * C8450 +
            (C4399 * C9282 - C4400 * C9279 - C4399 * C9283 + C28784 * C9285) *
                C8451) *
               C28870 * C28950 -
           (C9314 * C8451 + C9313 * C8450 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C8449) *
               C28870 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C3112 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C4399 +
            (C4396 * C1269 - C4439 * C1205 + C4397 * C2680 - C4440 * C2620 +
             C4398 * C5399 - C4441 * C5343) *
                C28784) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C3112 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C3112 +
           ((C1274 - C1273) * C87 + (C1276 - C1275) * C77 +
            (C1278 - C1277) * C89 + (C1280 - C1279) * C78 +
            (C28870 * C1267 - C151 * C1201) * C91 +
            (C28870 * C1271 - C151 * C1209) * C79) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C4399 +
             (C28870 * C157 - C151 * C99) * C28784) *
                C8449 +
            ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
            ((C9373 - C9374) * C4399 + (C9375 - C9376) * C28784) * C8451) *
               C3112 +
           (((C9370 - C9369) * C4399 + (C9372 - C9371) * C28784) * C8449 +
            ((C9374 - C9373) * C4399 + (C9376 - C9375) * C28784) * C8450 +
            ((C151 * C9278 - C28870 * C9364) * C4399 +
             (C151 * C9281 - C28870 * C9366) * C28784) *
                C8451) *
               C28950) *
              C28840 * C1768 +
          ((((C164 - C163) * C4399 + (C166 - C165) * C28784) * C8449 +
            ((C1273 - C1274) * C4399 + (C1275 - C1276) * C28784) * C8450 +
            ((C9377 - C9378) * C4399 + (C9379 - C9380) * C28784) * C8451) *
               C3112 +
           (((C1274 - C1273) * C4399 + (C1276 - C1275) * C28784) * C8449 +
            ((C9378 - C9377) * C4399 + (C9380 - C9379) * C28784) * C8450 +
            ((C28870 * C9365 - C151 * C9279) * C4399 +
             (C28870 * C9367 - C151 * C9283) * C28784) *
                C8451) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (-std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            C6359 * C4398) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
            ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
               C28950) *
              C28840 * C1768 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C3112 +
           (((C1340 - C1339) * C4399 + (C1342 - C1341) * C28784) * C4396 +
            ((C28881 * C2733 - C214 * C2615) * C4399 +
             (C28881 * C2736 - C214 * C2620) * C28784) *
                C4397 +
            ((C28881 * C5451 - C214 * C5339) * C4399 +
             (C28881 * C5453 - C214 * C5343) * C28784) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C3112 +
           ((C1340 - C1339) * C87 + (C1342 - C1341) * C77 +
            (C1344 - C1343) * C89 + (C1346 - C1345) * C78 +
            (C28881 * C1333 - C214 * C1201) * C91 +
            (C28881 * C1337 - C214 * C1209) * C79) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C4399 +
            (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
             C8451 * C4102 - C8530 * C4009) *
                C28784) *
               C28870 * C3112 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C4399 +
            (C8528 * C1207 - C8449 * C1334 + C8529 * C4009 - C8450 * C4102 +
             C8530 * C9281 - C8451 * C9432) *
                C28784) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
             C8530 * C4006 - C8451 * C4100) *
                C4399 +
            (C8528 * C101 - C8449 * C221 + C8529 * C1205 - C8450 * C1335 +
             C8530 * C4011 - C8451 * C4103) *
                C28784) *
               C28870 * C3112 +
           ((C8449 * C1331 - C8528 * C1199 + C8450 * C4100 - C8529 * C4006 +
             C8451 * C9431 - C8530 * C9279) *
                C4399 +
            (C8449 * C1335 - C8528 * C1205 + C8450 * C4103 - C8529 * C4011 +
             C8451 * C9433 - C8530 * C9283) *
                C28784) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
               C28881 * C3112 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
            (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
            (C6858 - C6859) * C4398) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C4399 * C94 - C28784 * C100) * C4439 +
            (C4399 * C278 - C28784 * C283) * C4396 + (C4984 - C4985) * C4440 +
            (C4986 - C4987) * C4397 + (C4988 - C4989) * C4441 +
            (C4990 - C4991) * C4398) *
               C28881 * C3112 +
           ((C28784 * C1204 - C4399 * C1199) * C4439 +
            (C28784 * C1401 - C4399 * C1397) * C4396 +
            (C28784 * C2619 - C4399 * C2615) * C4440 +
            (C28784 * C2792 - C4399 * C2789) * C4397 +
            (C28784 * C5342 - C4399 * C5339) * C4441 +
            (C28784 * C5507 - C4399 * C5505) * C4398) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C151 +
                                (C77 * C282 - C87 * C277 + C78 * C283 -
                                 C89 * C278 + C79 * C284 - C91 * C279) *
                                    C28870) *
                                   C28881 * C3112 +
                               ((C87 * C1200 - C77 * C1206 + C89 * C1199 -
                                 C78 * C1204 + C91 * C1198 - C79 * C1202) *
                                    C151 +
                                (C87 * C1396 - C77 * C1400 + C89 * C1397 -
                                 C78 * C1401 + C91 * C1398 - C79 * C1402) *
                                    C28870) *
                                   C28881 * C28950) *
                                  C28840 * C1768 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C151 +
                                (C87 * C278 - C77 * C283 + C89 * C279 -
                                 C78 * C284 + C91 * C280 - C79 * C285) *
                                    C28870) *
                                   C28881 * C3112 +
                               ((C77 * C1204 - C87 * C1199 + C78 * C1202 -
                                 C89 * C1198 + C79 * C1208 - C91 * C1201) *
                                    C151 +
                                (C77 * C1401 - C87 * C1397 + C78 * C1402 -
                                 C89 * C1398 + C79 * C1403 - C91 * C1399) *
                                    C28870) *
                                   C28881 * C28950) *
                                  C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C151 +
             (C28784 * C282 - C4399 * C277) * C28870) *
                C8449 +
            ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
            ((C9493 - C9494) * C151 + (C9495 - C9496) * C28870) * C8451) *
               C3112 +
           (((C9490 - C9489) * C151 + (C9492 - C9491) * C28870) * C8449 +
            ((C9494 - C9493) * C151 + (C9496 - C9495) * C28870) * C8450 +
            ((C4399 * C9278 - C28784 * C9280) * C151 +
             (C4399 * C9484 - C28784 * C9486) * C28870) *
                C8451) *
               C28950) *
              C28840 * C1768 +
          ((((C4399 * C94 - C28784 * C100) * C151 +
             (C4399 * C278 - C28784 * C283) * C28870) *
                C8449 +
            ((C9497 - C9498) * C151 + (C9499 - C9500) * C28870) * C8450 +
            ((C9501 - C9502) * C151 + (C9503 - C9504) * C28870) * C8451) *
               C3112 +
           (((C9498 - C9497) * C151 + (C9500 - C9499) * C28870) * C8449 +
            ((C9502 - C9501) * C151 + (C9504 - C9503) * C28870) * C8450 +
            ((C28784 * C9282 - C4399 * C9279) * C151 +
             (C28784 * C9487 - C4399 * C9485) * C28870) *
                C8451) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C3112 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C28840 * C1768 +
          ((C4439 * C1265 - C4556 * C1199 - C4439 * C1397 + C4396 * C1455 +
            C4440 * C2677 - C4557 * C2615 - C4440 * C2789 + C4397 * C2845 +
            C4441 * C5397 - C4558 * C5339 - C4441 * C5505 + C4398 * C5559) *
               C28784 * C28881 * C28950 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C3112 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C28840 * C1768 +
          ((C1472 * C77 + C1471 * C78 +
            (C151 * C1267 - C325 * C1201 - C151 * C1399 + C28870 * C1457) *
                C79) *
               C28881 * C28950 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
                C8449 +
            C9579 * C8450 + C9580 * C8451) *
               C3112 -
           ((C151 * C9364 - C325 * C9278 - C151 * C9484 + C28870 * C9554) *
                C28784 * C8451 +
            C9580 * C8450 + C9579 * C8449) *
               C28950) *
              C28840 * C1768 +
          ((C9565 * C8449 + C9581 * C8450 +
            (C151 * C9365 - C325 * C9279 - C151 * C9485 + C28870 * C9555) *
                C28784 * C8451) *
               C28950 -
           (C9581 * C8451 + C9565 * C8450 + C350 * C28784 * C8449) * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
               C28784 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
            (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
            (C6964 - C6965) * C4398) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
            (C769 - C770) * C4440 + (C957 - C958) * C4397 +
            (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
               C28784 * C3112 +
           ((C1340 - C1339) * C4439 + (C1528 - C1527) * C4396 +
            (C28881 * C2733 - C214 * C2615) * C4440 +
            (C28881 * C2898 - C214 * C2789) * C4397 +
            (C28881 * C5451 - C214 * C5339) * C4441 +
            (C28881 * C5611 - C214 * C5505) * C4398) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C28840 * C1768 +
          ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
               C3112 +
           (((C1340 - C1339) * C151 + (C1528 - C1527) * C28870) * C77 +
            ((C1344 - C1343) * C151 + (C1530 - C1529) * C28870) * C78 +
            ((C28881 * C1333 - C214 * C1201) * C151 +
             (C28881 * C1525 - C214 * C1399) * C28870) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C151 +
            (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
             C8451 * C4228 - C8530 * C4143) *
                C28870) *
               C28784 * C3112 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C151 +
            (C8528 * C1396 - C8449 * C1522 + C8529 * C4143 - C8450 * C4228 +
             C8530 * C9484 - C8451 * C9631) *
                C28870) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C8528 * C94 - C8449 * C216 + C8529 * C1199 - C8450 * C1331 +
             C8530 * C4006 - C8451 * C4100) *
                C151 +
            (C8528 * C278 - C8449 * C391 + C8529 * C1397 - C8450 * C1523 +
             C8530 * C4144 - C8451 * C4229) *
                C28870) *
               C28784 * C3112 +
           ((C8449 * C1331 - C8528 * C1199 + C8450 * C4100 - C8529 * C4006 +
             C8451 * C9431 - C8530 * C9279) *
                C151 +
            (C8449 * C1523 - C8528 * C1397 + C8450 * C4229 - C8529 * C4144 +
             C8451 * C9632 - C8530 * C9485) *
                C28870) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (-std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            C6532 * C4398) *
               C3112 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
            ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
               C28950) *
              C28840 * C1768 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C3112 +
           (((C28784 * C1204 - C4399 * C1199) * C214 +
             (C28784 * C1585 - C4399 * C1581) * C28881) *
                C4396 +
            ((C28784 * C2619 - C4399 * C2615) * C214 +
             (C28784 * C2954 - C4399 * C2951) * C28881) *
                C4397 +
            ((C28784 * C5342 - C4399 * C5339) * C214 +
             (C28784 * C5665 - C4399 * C5663) * C28881) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C77 * C98 - C87 * C93 + C78 * C100 -
                                 C89 * C94 + C79 * C102 - C91 * C95) *
                                    C214 +
                                (C77 * C448 - C87 * C443 + C78 * C449 -
                                 C89 * C444 + C79 * C450 - C91 * C445) *
                                    C28881) *
                                   C28870 * C3112 +
                               ((C87 * C1200 - C77 * C1206 + C89 * C1199 -
                                 C78 * C1204 + C91 * C1198 - C79 * C1202) *
                                    C214 +
                                (C87 * C1580 - C77 * C1584 + C89 * C1581 -
                                 C78 * C1585 + C91 * C1582 - C79 * C1586) *
                                    C28881) *
                                   C28870 * C28950) *
                                  C28840 * C1768 +
                              (((C87 * C94 - C77 * C100 + C89 * C95 -
                                 C78 * C102 + C91 * C96 - C79 * C104) *
                                    C214 +
                                (C87 * C444 - C77 * C449 + C89 * C445 -
                                 C78 * C450 + C91 * C446 - C79 * C451) *
                                    C28881) *
                                   C28870 * C3112 +
                               ((C77 * C1204 - C87 * C1199 + C78 * C1202 -
                                 C89 * C1198 + C79 * C1208 - C91 * C1201) *
                                    C214 +
                                (C77 * C1585 - C87 * C1581 + C78 * C1586 -
                                 C89 * C1582 + C79 * C1587 - C91 * C1583) *
                                    C28881) *
                                   C28870 * C28950) *
                                  C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C8528 +
            (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
            (C9688 - C9689) * C8450 + (C9493 - C9494) * C8530 +
            (C9690 - C9691) * C8451) *
               C28870 * C3112 +
           ((C9490 - C9489) * C8528 + (C9689 - C9688) * C8449 +
            (C9494 - C9493) * C8529 + (C9691 - C9690) * C8450 +
            (C4399 * C9278 - C28784 * C9280) * C8530 +
            (C4399 * C9683 - C28784 * C9685) * C8451) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C4399 * C94 - C28784 * C100) * C8528 +
            (C4399 * C444 - C28784 * C449) * C8449 + (C9497 - C9498) * C8529 +
            (C9692 - C9693) * C8450 + (C9501 - C9502) * C8530 +
            (C9694 - C9695) * C8451) *
               C28870 * C3112 +
           ((C9498 - C9497) * C8528 + (C9693 - C9692) * C8449 +
            (C9502 - C9501) * C8529 + (C9695 - C9694) * C8450 +
            (C28784 * C9282 - C4399 * C9279) * C8530 +
            (C28784 * C9686 - C4399 * C9684) * C8451) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C214 +
            (C4439 * C444 - C4396 * C492 + C4440 * C1011 - C4397 * C1069 +
             C4441 * C2477 - C4398 * C2521) *
                C28881) *
               C28784 * C3112 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C214 +
            (C4396 * C1639 - C4439 * C1581 + C4397 * C3007 - C4440 * C2951 +
             C4398 * C5717 - C4441 * C5663) *
                C28881) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C3112 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C28840 * C1768 +
          ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
               C3112 +
           (((C1274 - C1273) * C214 + (C1644 - C1643) * C28881) * C77 +
            ((C1278 - C1277) * C214 + (C1646 - C1645) * C28881) * C78 +
            ((C28870 * C1267 - C151 * C1201) * C214 +
             (C28870 * C1641 - C151 * C1583) * C28881) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C8528 +
            (C28870 * C491 - C151 * C443) * C8449 + (C9369 - C9370) * C8529 +
            (C9748 - C9749) * C8450 + (C9373 - C9374) * C8530 +
            (C9750 - C9751) * C8451) *
               C28784 * C3112 +
           ((C9370 - C9369) * C8528 + (C9749 - C9748) * C8449 +
            (C9374 - C9373) * C8529 + (C9751 - C9750) * C8450 +
            (C151 * C9278 - C28870 * C9364) * C8530 +
            (C151 * C9683 - C28870 * C9745) * C8451) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C164 - C163) * C8528 + (C498 - C497) * C8449 +
            (C1273 - C1274) * C8529 + (C1643 - C1644) * C8450 +
            (C9377 - C9378) * C8530 + (C9752 - C9753) * C8451) *
               C28784 * C3112 +
           ((C1274 - C1273) * C8528 + (C1644 - C1643) * C8449 +
            (C9378 - C9377) * C8529 + (C9753 - C9752) * C8450 +
            (C28870 * C9365 - C151 * C9279) * C8530 +
            (C28870 * C9746 - C151 * C9684) * C8451) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C3112 -
           (C7136 * C4398 + C7137 * C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C28840 * C1768 +
          ((C1714 * C4396 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C4397 +
            (C214 * C5451 - C544 * C5339 - C214 * C5663 + C28881 * C5769) *
                C4398) *
               C28784 * C28950 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C3112 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C28840 * C1768 +
          ((C1716 * C77 + C1715 * C78 +
            (C214 * C1333 - C544 * C1201 - C214 * C1583 + C28881 * C1699) *
                C28870 * C79) *
               C28950 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
            C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
            C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
               C28870 * C28784 * C3112 -
           (C8530 * C9430 - C8761 * C9278 - C8530 * C9683 + C8451 * C9803 +
            C8529 * C4099 - C8760 * C4005 - C8529 * C4269 + C8450 * C4354 +
            C8528 * C1330 - C8759 * C1200 - C8528 * C1580 + C8449 * C1698) *
               C28870 * C28784 * C28950) *
              C28840 * C1768 +
          ((C8528 * C1331 - C8759 * C1199 - C8528 * C1581 + C8449 * C1697 +
            C8529 * C4100 - C8760 * C4006 - C8529 * C4270 + C8450 * C4355 +
            C8530 * C9431 - C8761 * C9279 - C8530 * C9684 + C8451 * C9804) *
               C28870 * C28784 * C28950 -
           (C8530 * C4100 - C8761 * C4006 - C8530 * C4270 + C8451 * C4355 +
            C8529 * C1331 - C8760 * C1199 - C8529 * C1581 + C8450 * C1697 +
            C8528 * C216 - C8759 * C94 - C8528 * C444 + C8449 * C546) *
               C28870 * C28784 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C3112 -
           (C6686 * C4398 + C6687 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C624 +
          ((C6687 * C4396 + C6686 * C4397 +
            (C4399 * C6668 - C4400 * C6667 - C4399 * C6669 + C28784 * C6670) *
                C28881 * C4398) *
               C28950 -
           (C6270 * C4398 + C4799 * C4397 + C4798 * C4396) * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C3112 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C624 +
          ((C87 * C2617 - C88 * C2614 - C87 * C2618 + C77 * C2623 +
            C89 * C2619 - C90 * C2615 - C89 * C2620 + C78 * C2624 +
            C91 * C2621 - C92 * C2616 - C91 * C2622 + C79 * C2625) *
               C28881 * C28870 * C28950 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
            C9311 * C8450 + C9312 * C8451) *
               C28870 * C3112 -
           ((C4399 * C9280 - C4400 * C9278 - C4399 * C9281 + C28784 * C9284) *
                C8451 +
            C9312 * C8450 + C9311 * C8449) *
               C28870 * C28950) *
              C624 +
          ((C6685 * C8449 + C10658 * C8450 +
            (C4399 * C10648 - C4400 * C10647 - C4399 * C10649 +
             C28784 * C10650) *
                C8451) *
               C28870 * C28950 -
           (C10658 * C8451 + C6685 * C8450 + C4794 * C8449) * C28870 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C624 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C3112 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C4399 +
            (C4396 * C2679 - C4439 * C2618 + C4397 * C5398 - C4440 * C5341 +
             C4398 * C6738 - C4441 * C6669) *
                C28784) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C3112 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C624 +
          (((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C3112 +
           ((C28870 * C2676 - C151 * C2614) * C87 +
            (C28870 * C2679 - C151 * C2618) * C77 +
            (C28870 * C2677 - C151 * C2615) * C89 +
            (C28870 * C2680 - C151 * C2620) * C78 +
            (C28870 * C2678 - C151 * C2616) * C91 +
            (C28870 * C2681 - C151 * C2622) * C79) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C4399 +
             (C28870 * C157 - C151 * C99) * C28784) *
                C8449 +
            ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
            ((C9373 - C9374) * C4399 + (C9375 - C9376) * C28784) * C8451) *
               C3112 +
           (((C9370 - C9369) * C4399 + (C9372 - C9371) * C28784) * C8449 +
            ((C9374 - C9373) * C4399 + (C9376 - C9375) * C28784) * C8450 +
            ((C151 * C9278 - C28870 * C9364) * C4399 +
             (C151 * C9281 - C28870 * C9366) * C28784) *
                C8451) *
               C28950) *
              C624 +
          ((((C151 * C630 - C28870 * C694) * C4399 +
             (C151 * C637 - C28870 * C698) * C28784) *
                C8449 +
            ((C10711 - C10712) * C4399 + (C10713 - C10714) * C28784) * C8450 +
            ((C10715 - C10716) * C4399 + (C10717 - C10718) * C28784) * C8451) *
               C3112 +
           (((C10712 - C10711) * C4399 + (C10714 - C10713) * C28784) * C8449 +
            ((C10716 - C10715) * C4399 + (C10718 - C10717) * C28784) * C8450 +
            ((C28870 * C10708 - C151 * C10647) * C4399 +
             (C28870 * C10709 - C151 * C10649) * C28784) *
                C8451) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (-std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            C6359 * C4398) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
            ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
               C28950) *
              C624 +
          ((((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C6353 - C6354) * C4399 + (C6355 - C6356) * C28784) * C4398) *
               C3112 +
           (((C6793 - C6792) * C4399 + (C6795 - C6794) * C28784) * C4396 +
            ((C6797 - C6796) * C4399 + (C6799 - C6798) * C28784) * C4397 +
            ((C28881 * C6789 - C214 * C6667) * C4399 +
             (C28881 * C6790 - C214 * C6669) * C28784) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C624 +
          (((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C3112 +
           ((C28881 * C2732 - C214 * C2614) * C87 +
            (C28881 * C2735 - C214 * C2618) * C77 +
            (C28881 * C2733 - C214 * C2615) * C89 +
            (C28881 * C2736 - C214 * C2620) * C78 +
            (C28881 * C2734 - C214 * C2616) * C91 +
            (C28881 * C2737 - C214 * C2622) * C79) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C4399 +
            (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
             C8451 * C4102 - C8530 * C4009) *
                C28784) *
               C28870 * C3112 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C4399 +
            (C8528 * C1207 - C8449 * C1334 + C8529 * C4009 - C8450 * C4102 +
             C8530 * C9281 - C8451 * C9432) *
                C28784) *
               C28870 * C28950) *
              C624 +
          (((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
             C8530 * C8075 - C8451 * C8163) *
                C4399 +
            (C8528 * C637 - C8449 * C764 + C8529 * C2618 - C8450 * C2735 +
             C8530 * C8078 - C8451 * C8165) *
                C28784) *
               C28870 * C3112 +
           ((C8449 * C2732 - C8528 * C2614 + C8450 * C8163 - C8529 * C8075 +
             C8451 * C10768 - C8530 * C10647) *
                C4399 +
            (C8449 * C2735 - C8528 * C2618 + C8450 * C8165 - C8529 * C8078 +
             C8451 * C10769 - C8530 * C10649) *
                C28784) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
               C28881 * C3112 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
            (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
            (C6858 - C6859) * C4398) *
               C28881 * C28950) *
              C624 +
          (((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
            (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
            (C6402 - C6403) * C4441 + (C6404 - C6405) * C4398) *
               C28881 * C3112 +
           ((C6853 - C6852) * C4439 + (C6855 - C6854) * C4396 +
            (C6857 - C6856) * C4440 + (C6859 - C6858) * C4397 +
            (C28784 * C6668 - C4399 * C6667) * C4441 +
            (C28784 * C6850 - C4399 * C6849) * C4398) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C28870) *
               C28881 * C3112 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C151 +
            (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
             C91 * C1398 - C79 * C1402) *
                C28870) *
               C28881 * C28950) *
              C624 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C151 +
            (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 + C91 * C828 -
             C79 * C832) *
                C28870) *
               C28881 * C3112 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C151 +
            (C77 * C2791 - C87 * C2788 + C78 * C2792 - C89 * C2789 +
             C79 * C2793 - C91 * C2790) *
                C28870) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C151 +
             (C28784 * C282 - C4399 * C277) * C28870) *
                C8449 +
            ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
            ((C9493 - C9494) * C151 + (C9495 - C9496) * C28870) * C8451) *
               C3112 +
           (((C9490 - C9489) * C151 + (C9492 - C9491) * C28870) * C8449 +
            ((C9494 - C9493) * C151 + (C9496 - C9495) * C28870) * C8450 +
            ((C4399 * C9278 - C28784 * C9280) * C151 +
             (C4399 * C9484 - C28784 * C9486) * C28870) *
                C8451) *
               C28950) *
              C624 +
          ((((C4977 - C4976) * C151 + (C4979 - C4978) * C28870) * C8449 +
            ((C6852 - C6853) * C151 + (C6854 - C6855) * C28870) * C8450 +
            ((C10823 - C10824) * C151 + (C10825 - C10826) * C28870) * C8451) *
               C3112 +
           (((C6853 - C6852) * C151 + (C6855 - C6854) * C28870) * C8449 +
            ((C10824 - C10823) * C151 + (C10826 - C10825) * C28870) * C8450 +
            ((C28784 * C10648 - C4399 * C10647) * C151 +
             (C28784 * C10821 - C4399 * C10820) * C28870) *
                C8451) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (-std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C3112 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C624 +
          ((C4439 * C2676 - C4556 * C2614 - C4439 * C2788 + C4396 * C2844 +
            C4440 * C5396 - C4557 * C5338 - C4440 * C5504 + C4397 * C5558 +
            C4441 * C6737 - C4558 * C6667 - C4441 * C6849 + C4398 * C6909) *
               C28784 * C28881 * C28950 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C3112 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C624 +
          (((C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
                C77 +
            (C151 * C2677 - C325 * C2615 - C151 * C2789 + C28870 * C2845) *
                C78 +
            (C151 * C2678 - C325 * C2616 - C151 * C2790 + C28870 * C2846) *
                C79) *
               C28881 * C28950 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
                C8449 +
            C9579 * C8450 + C9580 * C8451) *
               C3112 -
           ((C151 * C9364 - C325 * C9278 - C151 * C9484 + C28870 * C9554) *
                C28784 * C8451 +
            C9580 * C8450 + C9579 * C8449) *
               C28950) *
              C624 +
          ((C10892 * C8449 + C10893 * C8450 +
            (C151 * C10708 - C325 * C10647 - C151 * C10820 + C28870 * C10876) *
                C28784 * C8451) *
               C28950 -
           (C10893 * C8451 + C10892 * C8450 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C28784 *
                C8449) *
               C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
               C28784 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
            (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
            (C6964 - C6965) * C4398) *
               C28784 * C28950) *
              C624 +
          (((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
            (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
            (C6353 - C6354) * C4441 + (C6485 - C6486) * C4398) *
               C28784 * C3112 +
           ((C6793 - C6792) * C4439 + (C6963 - C6962) * C4396 +
            (C6797 - C6796) * C4440 + (C6965 - C6964) * C4397 +
            (C28881 * C6789 - C214 * C6667) * C4441 +
            (C28881 * C6960 - C214 * C6849) * C4398) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C624 +
          ((((C214 * C630 - C28881 * C760) * C151 +
             (C214 * C826 - C28881 * C952) * C28870) *
                C77 +
            ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
            ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
               C3112 +
           (((C28881 * C2732 - C214 * C2614) * C151 +
             (C28881 * C2897 - C214 * C2788) * C28870) *
                C77 +
            ((C28881 * C2733 - C214 * C2615) * C151 +
             (C28881 * C2898 - C214 * C2789) * C28870) *
                C78 +
            ((C28881 * C2734 - C214 * C2616) * C151 +
             (C28881 * C2899 - C214 * C2790) * C28870) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
             C8451 * C4099 - C8530 * C4005) *
                C151 +
            (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
             C8451 * C4228 - C8530 * C4143) *
                C28870) *
               C28784 * C3112 +
           ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
             C8530 * C9278 - C8451 * C9430) *
                C151 +
            (C8528 * C1396 - C8449 * C1522 + C8529 * C4143 - C8450 * C4228 +
             C8530 * C9484 - C8451 * C9631) *
                C28870) *
               C28784 * C28950) *
              C624 +
          (((C8528 * C630 - C8449 * C760 + C8529 * C2614 - C8450 * C2732 +
             C8530 * C8075 - C8451 * C8163) *
                C151 +
            (C8528 * C826 - C8449 * C952 + C8529 * C2788 - C8450 * C2897 +
             C8530 * C8205 - C8451 * C8287) *
                C28870) *
               C28784 * C3112 +
           ((C8449 * C2732 - C8528 * C2614 + C8450 * C8163 - C8529 * C8075 +
             C8451 * C10768 - C8530 * C10647) *
                C151 +
            (C8449 * C2897 - C8528 * C2788 + C8450 * C8287 - C8529 * C8205 +
             C8451 * C10943 - C8530 * C10820) *
                C28870) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (-std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            C6532 * C4398) *
               C3112 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
            ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
               C28950) *
              C624 +
          ((((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C6402 - C6403) * C214 + (C6529 - C6530) * C28881) * C4398) *
               C3112 +
           (((C6853 - C6852) * C214 + (C7019 - C7018) * C28881) * C4396 +
            ((C6857 - C6856) * C214 + (C7021 - C7020) * C28881) * C4397 +
            ((C28784 * C6668 - C4399 * C6667) * C214 +
             (C28784 * C7016 - C4399 * C7015) * C28881) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C3112 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C214 +
            (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
             C91 * C1582 - C79 * C1586) *
                C28881) *
               C28870 * C28950) *
              C624 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C214 +
            (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
             C91 * C1012 - C79 * C1016) *
                C28881) *
               C28870 * C3112 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C214 +
            (C77 * C2953 - C87 * C2950 + C78 * C2954 - C89 * C2951 +
             C79 * C2955 - C91 * C2952) *
                C28881) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C8528 +
            (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
            (C9688 - C9689) * C8450 + (C9493 - C9494) * C8530 +
            (C9690 - C9691) * C8451) *
               C28870 * C3112 +
           ((C9490 - C9489) * C8528 + (C9689 - C9688) * C8449 +
            (C9494 - C9493) * C8529 + (C9691 - C9690) * C8450 +
            (C4399 * C9278 - C28784 * C9280) * C8530 +
            (C4399 * C9683 - C28784 * C9685) * C8451) *
               C28870 * C28950) *
              C624 +
          (((C4977 - C4976) * C8528 + (C5157 - C5156) * C8449 +
            (C6852 - C6853) * C8529 + (C7018 - C7019) * C8450 +
            (C10823 - C10824) * C8530 + (C10997 - C10998) * C8451) *
               C28870 * C3112 +
           ((C6853 - C6852) * C8528 + (C7019 - C7018) * C8449 +
            (C10824 - C10823) * C8529 + (C10998 - C10997) * C8450 +
            (C28784 * C10648 - C4399 * C10647) * C8530 +
            (C28784 * C10995 - C4399 * C10994) * C8451) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C624 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C214 +
            (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 - C4397 * C2520 +
             C4441 * C5151 - C4398 * C5213) *
                C28881) *
               C28784 * C3112 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C214 +
            (C4396 * C3006 - C4439 * C2950 + C4397 * C5716 - C4440 * C5662 +
             C4398 * C7071 - C4441 * C7015) *
                C28881) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C3112 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C624 +
          ((((C151 * C630 - C28870 * C694) * C214 +
             (C151 * C1010 - C28870 * C1068) * C28881) *
                C77 +
            ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
            ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
               C3112 +
           (((C28870 * C2676 - C151 * C2614) * C214 +
             (C28870 * C3006 - C151 * C2950) * C28881) *
                C77 +
            ((C28870 * C2677 - C151 * C2615) * C214 +
             (C28870 * C3007 - C151 * C2951) * C28881) *
                C78 +
            ((C28870 * C2678 - C151 * C2616) * C214 +
             (C28870 * C3008 - C151 * C2952) * C28881) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C8528 +
            (C28870 * C491 - C151 * C443) * C8449 + (C9369 - C9370) * C8529 +
            (C9748 - C9749) * C8450 + (C9373 - C9374) * C8530 +
            (C9750 - C9751) * C8451) *
               C28784 * C3112 +
           ((C9370 - C9369) * C8528 + (C9749 - C9748) * C8449 +
            (C9374 - C9373) * C8529 + (C9751 - C9750) * C8450 +
            (C151 * C9278 - C28870 * C9364) * C8530 +
            (C151 * C9683 - C28870 * C9745) * C8451) *
               C28784 * C28950) *
              C624 +
          (((C151 * C630 - C28870 * C694) * C8528 +
            (C151 * C1010 - C28870 * C1068) * C8449 +
            (C10711 - C10712) * C8529 + (C11050 - C11051) * C8450 +
            (C10715 - C10716) * C8530 + (C11052 - C11053) * C8451) *
               C28784 * C3112 +
           ((C10712 - C10711) * C8528 + (C11051 - C11050) * C8449 +
            (C10716 - C10715) * C8529 + (C11053 - C11052) * C8450 +
            (C28870 * C10708 - C151 * C10647) * C8530 +
            (C28870 * C11048 - C151 * C10994) * C8451) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C3112 -
           (C7136 * C4398 + C7137 * C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C624 +
          ((C7137 * C4396 + C7136 * C4397 +
            (C214 * C6789 - C544 * C6667 - C214 * C7015 + C28881 * C7122) *
                C4398) *
               C28784 * C28950 -
           (C6617 * C4398 + C5287 * C4397 + C5286 * C4396) * C28784 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C3112 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C624 +
          (((C214 * C2732 - C544 * C2614 - C214 * C2950 + C28881 * C3059) *
                C28870 * C77 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C28870 * C78 +
            (C214 * C2734 - C544 * C2616 - C214 * C2952 + C28881 * C3061) *
                C28870 * C79) *
               C28950 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
            C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
            C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
               C28870 * C28784 * C3112 -
           (C8530 * C9430 - C8761 * C9278 - C8530 * C9683 + C8451 * C9803 +
            C8529 * C4099 - C8760 * C4005 - C8529 * C4269 + C8450 * C4354 +
            C8528 * C1330 - C8759 * C1200 - C8528 * C1580 + C8449 * C1698) *
               C28870 * C28784 * C28950) *
              C624 +
          ((C8528 * C2732 - C8759 * C2614 - C8528 * C2950 + C8449 * C3059 +
            C8529 * C8163 - C8760 * C8075 - C8529 * C8327 + C8450 * C8409 +
            C8530 * C10768 - C8761 * C10647 - C8530 * C10994 + C8451 * C11103) *
               C28870 * C28784 * C28950 -
           (C8530 * C8163 - C8761 * C8075 - C8530 * C8327 + C8451 * C8409 +
            C8529 * C2732 - C8760 * C2614 - C8529 * C2950 + C8450 * C3059 +
            C8528 * C760 - C8759 * C630 - C8528 * C1010 + C8449 * C1128) *
               C28870 * C28784 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
               C4396 +
           C4798 * C4397 + C4799 * C4398) *
              C4002 -
          (C6686 * C4398 + C6687 * C4397 +
           (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
               C28881 * C4396) *
              C4003 +
          ((C4399 * C4008 - C4400 * C4005 - C4399 * C4009 + C28784 * C4014) *
               C28881 * C4396 +
           (C4399 * C8077 - C4400 * C8075 - C4399 * C8078 + C28784 * C8081) *
               C28881 * C4397 +
           (C4399 * C8079 - C4400 * C8076 - C4399 * C8080 + C28784 * C8082) *
               C28881 * C4398) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C28881 * C28870 * C4002 -
          (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 + C89 * C1204 -
           C90 * C1199 - C89 * C1205 + C78 * C1211 + C87 * C1206 - C88 * C1200 -
           C87 * C1207 + C77 * C1212) *
              C28881 * C28870 * C4003 +
          (C87 * C4008 - C88 * C4005 - C87 * C4009 + C77 * C4014 + C89 * C4010 -
           C90 * C4006 - C89 * C4011 + C78 * C4015 + C91 * C4012 - C92 * C4007 -
           C91 * C4013 + C79 * C4016) *
              C28881 * C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C8449 +
           C9311 * C8450 + C9312 * C8451) *
              C28870 * C4002 -
          (C12053 * C8451 + C9312 * C8450 + C9311 * C8449) * C28870 * C4003 +
          (C9312 * C8449 + C12053 * C8450 +
           (C4399 * C12043 - C4400 * C12042 - C4399 * C12044 +
            C28784 * C12045) *
               C8451) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C4399 +
           (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
            C4398 * C2265 - C4441 * C2216) *
               C28784) *
              C28881 * C4002 +
          ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
            C4441 * C5338 - C4398 * C5396) *
               C4399 +
           (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
            C4441 * C5341 - C4398 * C5398) *
               C28784) *
              C28881 * C4003 +
          ((C4396 * C4055 - C4439 * C4005 + C4397 * C8121 - C4440 * C8075 +
            C4398 * C8122 - C4441 * C8076) *
               C4399 +
           (C4396 * C4058 - C4439 * C4009 + C4397 * C8123 - C4440 * C8078 +
            C4398 * C8124 - C4441 * C8080) *
               C28784) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C87 +
           (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C28881 * C4002 +
          ((C151 * C1200 - C28870 * C1264) * C87 +
           (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
           (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
           (C1279 - C1280) * C79) *
              C28881 * C4003 +
          ((C28870 * C4055 - C151 * C4005) * C87 +
           (C28870 * C4058 - C151 * C4009) * C77 +
           (C28870 * C4056 - C151 * C4006) * C89 +
           (C28870 * C4059 - C151 * C4011) * C78 +
           (C28870 * C4057 - C151 * C4007) * C91 +
           (C28870 * C4060 - C151 * C4013) * C79) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C4399 +
            (C28870 * C157 - C151 * C99) * C28784) *
               C8449 +
           ((C9369 - C9370) * C4399 + (C9371 - C9372) * C28784) * C8450 +
           C12102 * C8451) *
              C4002 +
          (((C9370 - C9369) * C4399 + (C9372 - C9371) * C28784) * C8449 +
           ((C9374 - C9373) * C4399 + (C9376 - C9375) * C28784) * C8450 +
           ((C12096 - C12097) * C4399 + (C12098 - C12099) * C28784) * C8451) *
              C4003 +
          (C12102 * C8449 +
           ((C12097 - C12096) * C4399 + (C12099 - C12098) * C28784) * C8450 +
           ((C28870 * C12091 - C151 * C12042) * C4399 +
            (C28870 * C12092 - C151 * C12044) * C28784) *
               C8451) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4399 +
            (C28881 * C220 - C214 * C99) * C28784) *
               C4396 +
           ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
           C6359 * C4398) *
              C4002 +
          (((C214 * C1200 - C28881 * C1330) * C4399 +
            (C214 * C1207 - C28881 * C1334) * C28784) *
               C4396 +
           ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
           ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
              C4003 +
          (((C28881 * C4099 - C214 * C4005) * C4399 +
            (C28881 * C4102 - C214 * C4009) * C28784) *
               C4396 +
           ((C28881 * C8163 - C214 * C8075) * C4399 +
            (C28881 * C8165 - C214 * C8078) * C28784) *
               C4397 +
           ((C28881 * C8164 - C214 * C8076) * C4399 +
            (C28881 * C8166 - C214 * C8080) * C28784) *
               C4398) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C87 +
           (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C28870 * C4002 +
          ((C214 * C1200 - C28881 * C1330) * C87 +
           (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
           (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
           (C1345 - C1346) * C79) *
              C28870 * C4003 +
          ((C28881 * C4099 - C214 * C4005) * C87 +
           (C28881 * C4102 - C214 * C4009) * C77 +
           (C28881 * C4100 - C214 * C4006) * C89 +
           (C28881 * C4103 - C214 * C4011) * C78 +
           (C28881 * C4101 - C214 * C4007) * C91 +
           (C28881 * C4104 - C214 * C4013) * C79) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
            C8451 * C4099 - C8530 * C4005) *
               C4399 +
           (C8449 * C220 - C8528 * C99 + C8450 * C1334 - C8529 * C1207 +
            C8451 * C4102 - C8530 * C4009) *
               C28784) *
              C28870 * C4002 +
          ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
            C8530 * C9278 - C8451 * C9430) *
               C4399 +
           (C8528 * C1207 - C8449 * C1334 + C8529 * C4009 - C8450 * C4102 +
            C8530 * C9281 - C8451 * C9432) *
               C28784) *
              C28870 * C4003 +
          ((C8449 * C4099 - C8528 * C4005 + C8450 * C9430 - C8529 * C9278 +
            C8451 * C12140 - C8530 * C12042) *
               C4399 +
           (C8449 * C4102 - C8528 * C4009 + C8450 * C9432 - C8529 * C9281 +
            C8451 * C12141 - C8530 * C12044) *
               C28784) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (-std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C4439 +
           (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
           (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
              C28881 * C4002 +
          ((C4399 * C1200 - C28784 * C1206) * C4439 +
           (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
           (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
           (C6858 - C6859) * C4398) *
              C28881 * C4003 +
          ((C28784 * C4008 - C4399 * C4005) * C4439 +
           (C28784 * C4146 - C4399 * C4143) * C4396 +
           (C28784 * C8077 - C4399 * C8075) * C4440 +
           (C28784 * C8207 - C4399 * C8205) * C4397 +
           (C28784 * C8079 - C4399 * C8076) * C4441 +
           (C28784 * C8208 - C4399 * C8206) * C4398) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C28870) *
              C28881 * C4002 +
          ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
            C91 * C1198 - C79 * C1202) *
               C151 +
           (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
            C91 * C1398 - C79 * C1402) *
               C28870) *
              C28881 * C4003 +
          ((C77 * C4008 - C87 * C4005 + C78 * C4010 - C89 * C4006 +
            C79 * C4012 - C91 * C4007) *
               C151 +
           (C77 * C4146 - C87 * C4143 + C78 * C4147 - C89 * C4144 +
            C79 * C4148 - C91 * C4145) *
               C28870) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C151 +
            (C28784 * C282 - C4399 * C277) * C28870) *
               C8449 +
           ((C9489 - C9490) * C151 + (C9491 - C9492) * C28870) * C8450 +
           C12191 * C8451) *
              C4002 +
          (((C9490 - C9489) * C151 + (C9492 - C9491) * C28870) * C8449 +
           ((C9494 - C9493) * C151 + (C9496 - C9495) * C28870) * C8450 +
           ((C12185 - C12186) * C151 + (C12187 - C12188) * C28870) * C8451) *
              C4003 +
          (C12191 * C8449 +
           ((C12186 - C12185) * C151 + (C12188 - C12187) * C28870) * C8450 +
           ((C28784 * C12043 - C4399 * C12042) * C151 +
            (C28784 * C12181 - C4399 * C12180) * C28870) *
               C8451) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (-std::pow(Pi, 2.5) *
         ((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
           C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
           C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
              C28784 * C28881 * C4002 -
          (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
           C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
           C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
              C28784 * C28881 * C4003 +
          (C4439 * C4055 - C4556 * C4005 - C4439 * C4143 + C4396 * C4187 +
           C4440 * C8121 - C4557 * C8075 - C4440 * C8205 + C4397 * C8247 +
           C4441 * C8122 - C4558 * C8076 - C4441 * C8206 + C4398 * C8248) *
              C28784 * C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C28881 * C4002 -
          (C1471 * C79 + C1472 * C78 +
           (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
               C77) *
              C28881 * C4003 +
          ((C151 * C4055 - C325 * C4005 - C151 * C4143 + C28870 * C4187) * C77 +
           (C151 * C4056 - C325 * C4006 - C151 * C4144 + C28870 * C4188) * C78 +
           (C151 * C4057 - C325 * C4007 - C151 * C4145 + C28870 * C4189) *
               C79) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C28784 *
               C8449 +
           C9579 * C8450 + C9580 * C8451) *
              C4002 -
          (C12238 * C8451 + C9580 * C8450 + C9579 * C8449) * C4003 +
          (C9580 * C8449 + C12238 * C8450 +
           (C151 * C12091 - C325 * C12042 - C151 * C12180 + C28870 * C12229) *
               C28784 * C8451) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (-std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C4439 +
           (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
           (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
              C28784 * C4002 +
          ((C214 * C1200 - C28881 * C1330) * C4439 +
           (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
           (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
           (C6964 - C6965) * C4398) *
              C28784 * C4003 +
          ((C28881 * C4099 - C214 * C4005) * C4439 +
           (C28881 * C4228 - C214 * C4143) * C4396 +
           (C28881 * C8163 - C214 * C8075) * C4440 +
           (C28881 * C8287 - C214 * C8205) * C4397 +
           (C28881 * C8164 - C214 * C8076) * C4441 +
           (C28881 * C8288 - C214 * C8206) * C4398) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C151 +
            (C28881 * C390 - C214 * C277) * C28870) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 + C405 * C79) *
              C4002 +
          (((C214 * C1200 - C28881 * C1330) * C151 +
            (C214 * C1396 - C28881 * C1522) * C28870) *
               C77 +
           ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
           ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
              C4003 +
          (((C28881 * C4099 - C214 * C4005) * C151 +
            (C28881 * C4228 - C214 * C4143) * C28870) *
               C77 +
           ((C28881 * C4100 - C214 * C4006) * C151 +
            (C28881 * C4229 - C214 * C4144) * C28870) *
               C78 +
           ((C28881 * C4101 - C214 * C4007) * C151 +
            (C28881 * C4230 - C214 * C4145) * C28870) *
               C79) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8449 * C215 - C8528 * C93 + C8450 * C1330 - C8529 * C1200 +
            C8451 * C4099 - C8530 * C4005) *
               C151 +
           (C8449 * C390 - C8528 * C277 + C8450 * C1522 - C8529 * C1396 +
            C8451 * C4228 - C8530 * C4143) *
               C28870) *
              C28784 * C4002 +
          ((C8528 * C1200 - C8449 * C1330 + C8529 * C4005 - C8450 * C4099 +
            C8530 * C9278 - C8451 * C9430) *
               C151 +
           (C8528 * C1396 - C8449 * C1522 + C8529 * C4143 - C8450 * C4228 +
            C8530 * C9484 - C8451 * C9631) *
               C28870) *
              C28784 * C4003 +
          ((C8449 * C4099 - C8528 * C4005 + C8450 * C9430 - C8529 * C9278 +
            C8451 * C12140 - C8530 * C12042) *
               C151 +
           (C8449 * C4228 - C8528 * C4143 + C8450 * C9631 - C8529 * C9484 +
            C8451 * C12276 - C8530 * C12180) *
               C28870) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C214 +
            (C28784 * C448 - C4399 * C443) * C28881) *
               C4396 +
           ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
           C6532 * C4398) *
              C4002 +
          (((C4399 * C1200 - C28784 * C1206) * C214 +
            (C4399 * C1580 - C28784 * C1584) * C28881) *
               C4396 +
           ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
           ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
              C4003 +
          (((C28784 * C4008 - C4399 * C4005) * C214 +
            (C28784 * C4272 - C4399 * C4269) * C28881) *
               C4396 +
           ((C28784 * C8077 - C4399 * C8075) * C214 +
            (C28784 * C8329 - C4399 * C8327) * C28881) *
               C4397 +
           ((C28784 * C8079 - C4399 * C8076) * C214 +
            (C28784 * C8330 - C4399 * C8328) * C28881) *
               C4398) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C28881) *
              C28870 * C4002 +
          ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
            C91 * C1198 - C79 * C1202) *
               C214 +
           (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
            C91 * C1582 - C79 * C1586) *
               C28881) *
              C28870 * C4003 +
          ((C77 * C4008 - C87 * C4005 + C78 * C4010 - C89 * C4006 +
            C79 * C4012 - C91 * C4007) *
               C214 +
           (C77 * C4272 - C87 * C4269 + C78 * C4273 - C89 * C4270 +
            C79 * C4274 - C91 * C4271) *
               C28881) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C8528 +
           (C28784 * C448 - C4399 * C443) * C8449 + (C9489 - C9490) * C8529 +
           (C9688 - C9689) * C8450 + C12183 * C8530 + C12318 * C8451) *
              C28870 * C4002 +
          ((C9490 - C9489) * C8528 + (C9689 - C9688) * C8449 +
           (C9494 - C9493) * C8529 + (C9691 - C9690) * C8450 +
           (C12185 - C12186) * C8530 + (C12319 - C12320) * C8451) *
              C28870 * C4003 +
          (C12183 * C8528 + C12318 * C8449 + (C12186 - C12185) * C8529 +
           (C12320 - C12319) * C8450 +
           (C28784 * C12043 - C4399 * C12042) * C8530 +
           (C28784 * C12316 - C4399 * C12315) * C8451) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C214 +
           (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
            C4398 * C2520 - C4441 * C2476) *
               C28881) *
              C28784 * C4002 +
          ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
            C4441 * C5338 - C4398 * C5396) *
               C214 +
           (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
            C4441 * C5662 - C4398 * C5716) *
               C28881) *
              C28784 * C4003 +
          ((C4396 * C4055 - C4439 * C4005 + C4397 * C8121 - C4440 * C8075 +
            C4398 * C8122 - C4441 * C8076) *
               C214 +
           (C4396 * C4313 - C4439 * C4269 + C4397 * C8369 - C4440 * C8327 +
            C4398 * C8370 - C4441 * C8328) *
               C28881) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C214 +
            (C28870 * C491 - C151 * C443) * C28881) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 + C506 * C79) *
              C4002 +
          (((C151 * C1200 - C28870 * C1264) * C214 +
            (C151 * C1580 - C28870 * C1638) * C28881) *
               C77 +
           ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
           ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
              C4003 +
          (((C28870 * C4055 - C151 * C4005) * C214 +
            (C28870 * C4313 - C151 * C4269) * C28881) *
               C77 +
           ((C28870 * C4056 - C151 * C4006) * C214 +
            (C28870 * C4314 - C151 * C4270) * C28881) *
               C78 +
           ((C28870 * C4057 - C151 * C4007) * C214 +
            (C28870 * C4315 - C151 * C4271) * C28881) *
               C79) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C8528 +
           (C28870 * C491 - C151 * C443) * C8449 + (C9369 - C9370) * C8529 +
           (C9748 - C9749) * C8450 + C12094 * C8530 + C12360 * C8451) *
              C28784 * C4002 +
          ((C9370 - C9369) * C8528 + (C9749 - C9748) * C8449 +
           (C9374 - C9373) * C8529 + (C9751 - C9750) * C8450 +
           (C12096 - C12097) * C8530 + (C12361 - C12362) * C8451) *
              C28784 * C4003 +
          (C12094 * C8528 + C12360 * C8449 + (C12097 - C12096) * C8529 +
           (C12362 - C12361) * C8450 +
           (C28870 * C12091 - C151 * C12042) * C8530 +
           (C28870 * C12358 - C151 * C12315) * C8451) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (-std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
           C5286 * C4397 + C5287 * C4398) *
              C28784 * C4002 -
          (C7136 * C4398 + C7137 * C4397 +
           (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
               C4396) *
              C28784 * C4003 +
          ((C214 * C4099 - C544 * C4005 - C214 * C4269 + C28881 * C4354) *
               C4396 +
           (C214 * C8163 - C544 * C8075 - C214 * C8327 + C28881 * C8409) *
               C4397 +
           (C214 * C8164 - C544 * C8076 - C214 * C8328 + C28881 * C8410) *
               C4398) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
               C77 +
           C572 * C78 + C573 * C79) *
              C4002 -
          (C1715 * C79 + C1716 * C78 +
           (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
               C28870 * C77) *
              C4003 +
          ((C214 * C4099 - C544 * C4005 - C214 * C4269 + C28881 * C4354) *
               C28870 * C77 +
           (C214 * C4100 - C544 * C4006 - C214 * C4270 + C28881 * C4355) *
               C28870 * C78 +
           (C214 * C4101 - C544 * C4007 - C214 * C4271 + C28881 * C4356) *
               C28870 * C79) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C8528 * C215 - C8759 * C93 - C8528 * C443 + C8449 * C545 +
           C8529 * C1330 - C8760 * C1200 - C8529 * C1580 + C8450 * C1698 +
           C8530 * C4099 - C8761 * C4005 - C8530 * C4269 + C8451 * C4354) *
              C28870 * C28784 * C4002 -
          (C8530 * C9430 - C8761 * C9278 - C8530 * C9683 + C8451 * C9803 +
           C8529 * C4099 - C8760 * C4005 - C8529 * C4269 + C8450 * C4354 +
           C8528 * C1330 - C8759 * C1200 - C8528 * C1580 + C8449 * C1698) *
              C28870 * C28784 * C4003 +
          (C8528 * C4099 - C8759 * C4005 - C8528 * C4269 + C8449 * C4354 +
           C8529 * C9430 - C8760 * C9278 - C8529 * C9683 + C8450 * C9803 +
           C8530 * C12140 - C8761 * C12042 - C8530 * C12315 + C8451 * C12400) *
              C28870 * C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
            C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
               C17612 +
           (C12455 * C1206 - C12456 * C1200 - C12455 * C1207 + C12451 * C1212 +
            C12457 * C1204 - C12458 * C1199 - C12457 * C1205 + C12452 * C1211) *
               C17613) *
              C28870 * C28857 * C28840 * C84 -
          ((C12457 * C1202 - C12458 * C1198 - C12457 * C1203 + C12452 * C1210 +
            C12455 * C1204 - C12456 * C1199 - C12455 * C1205 + C12451 * C1211) *
               C17613 +
           (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
            C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
               C17612) *
              C28870 * C28857 * C28840 * C85 +
          ((C12455 * C102 - C12456 * C95 - C12455 * C103 + C12451 * C110 +
            C12457 * C104 - C12458 * C96 - C12457 * C105 + C12452 * C111) *
               C17612 +
           (C12455 * C1202 - C12456 * C1198 - C12455 * C1203 + C12451 * C1210 +
            C12457 * C1208 - C12458 * C1201 - C12457 * C1209 + C12452 * C1213) *
               C17613) *
              C28870 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexy[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C12455 +
                      (C28870 * C157 - C151 * C99) * C12451 +
                      (C163 - C164) * C12457 + (C165 - C166) * C12452) *
                         C17612 +
                     ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
                      (C1274 - C1273) * C12457 + (C1276 - C1275) * C12452) *
                         C17613) *
                        C28857 * C28840 * C84 +
                    (((C164 - C163) * C12455 + (C166 - C165) * C12451 +
                      (C168 - C167) * C12457 + (C170 - C169) * C12452) *
                         C17612 +
                     ((C1273 - C1274) * C12455 + (C1275 - C1276) * C12451 +
                      (C1277 - C1278) * C12457 + (C1279 - C1280) * C12452) *
                         C17613) *
                        C28857 * C28840 * C85 +
                    ((C175 * C12455 + C176 * C12451 + (C172 - C171) * C12457 +
                      (C174 - C173) * C12452) *
                         C17612 +
                     ((C1278 - C1277) * C12455 + (C1280 - C1279) * C12451 +
                      (C28870 * C1267 - C151 * C1201) * C12457 +
                      (C28870 * C1271 - C151 * C1209) * C12452) *
                         C17613) *
                        C28857 * C28840 * C86)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
               C12455 +
           (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
               C12451 +
           (C17717 - C17718 + C17719 - C17720) * C12457 +
           (C17721 - C17722 + C17723 - C17724) * C12452) *
              C28870 * C28857 * C28840 * C84 +
          ((C17718 - C17717 + C17720 - C17719) * C12455 +
           (C17722 - C17721 + C17724 - C17723) * C12451 +
           (C17725 - C17726 + C17727 - C17728) * C12457 +
           (C17729 - C17730 + C17731 - C17732) * C12452) *
              C28870 * C28857 * C28840 * C85 +
          ((C17726 - C17725 + C17728 - C17727) * C12455 +
           (C17730 - C17729 + C17732 - C17731) * C12451 +
           (C17612 * C218 - C17714 * C96 + C17613 * C1333 - C17715 * C1201) *
               C12457 +
           (C17612 * C223 - C17714 * C105 + C17613 * C1337 - C17715 * C1209) *
               C12452) *
              C28870 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C151 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C28870) *
               C17612 +
           ((C12451 * C1206 - C12455 * C1200 + C12452 * C1204 -
             C12457 * C1199) *
                C151 +
            (C12451 * C1400 - C12455 * C1396 + C12452 * C1401 -
             C12457 * C1397) *
                C28870) *
               C17613) *
              C28857 * C28840 * C84 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C151 +
            (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                C28870) *
               C17612 +
           ((C12455 * C1199 - C12451 * C1204 + C12457 * C1198 -
             C12452 * C1202) *
                C151 +
            (C12455 * C1397 - C12451 * C1401 + C12457 * C1398 -
             C12452 * C1402) *
                C28870) *
               C17613) *
              C28857 * C28840 * C85 +
          (((C12451 * C102 - C12455 * C95 + C12452 * C104 - C12457 * C96) *
                C151 +
            (C12451 * C284 - C12455 * C279 + C12452 * C285 - C12457 * C280) *
                C28870) *
               C17612 +
           ((C12451 * C1202 - C12455 * C1198 + C12452 * C1208 -
             C12457 * C1201) *
                C151 +
            (C12451 * C1402 - C12455 * C1398 + C12452 * C1403 -
             C12457 * C1399) *
                C28870) *
               C17613) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
            C350 * C12452) *
               C17612 +
           (C9576 * C12451 + C1472 * C12452) * C17613) *
              C28857 * C28840 * C84 -
          ((C1471 * C12452 + C1472 * C12451) * C17613 +
           (C351 * C12452 + C350 * C12451) * C17612) *
              C28857 * C28840 * C85 +
          ((C351 * C12451 + C352 * C12452) * C17612 +
           (C1471 * C12451 +
            (C151 * C1267 - C325 * C1201 - C151 * C1399 + C28870 * C1457) *
                C12452) *
               C17613) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C151 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C28870) *
               C12451 +
           ((C17717 - C17718 + C17719 - C17720) * C151 +
            (C17883 - C17884 + C17885 - C17886) * C28870) *
               C12452) *
              C28857 * C28840 * C84 +
          (((C17718 - C17717 + C17720 - C17719) * C151 +
            (C17884 - C17883 + C17886 - C17885) * C28870) *
               C12451 +
           ((C17725 - C17726 + C17727 - C17728) * C151 +
            (C17887 - C17888 + C17889 - C17890) * C28870) *
               C12452) *
              C28857 * C28840 * C85 +
          (((C17726 - C17725 + C17728 - C17727) * C151 +
            (C17888 - C17887 + C17890 - C17889) * C28870) *
               C12451 +
           ((C17612 * C218 - C17714 * C96 + C17613 * C1333 - C17715 * C1201) *
                C151 +
            (C17612 * C393 - C17714 * C280 + C17613 * C1525 - C17715 * C1399) *
                C28870) *
               C12452) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezx[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
               C17714 +
           (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
               C17612 +
           (C12451 * C1206 - C12455 * C1200 + C12452 * C1204 - C12457 * C1199) *
               C17715 +
           (C12451 * C1584 - C12455 * C1580 + C12452 * C1585 - C12457 * C1581) *
               C17613) *
              C28870 * C28857 * C28840 * C84 +
          ((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
               C17714 +
           (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
               C17612 +
           (C12455 * C1199 - C12451 * C1204 + C12457 * C1198 - C12452 * C1202) *
               C17715 +
           (C12455 * C1581 - C12451 * C1585 + C12457 * C1582 - C12452 * C1586) *
               C17613) *
              C28870 * C28857 * C28840 * C85 +
          ((C12451 * C102 - C12455 * C95 + C12452 * C104 - C12457 * C96) *
               C17714 +
           (C12451 * C450 - C12455 * C445 + C12452 * C451 - C12457 * C446) *
               C17612 +
           (C12451 * C1202 - C12455 * C1198 + C12452 * C1208 - C12457 * C1201) *
               C17715 +
           (C12451 * C1586 - C12455 * C1582 + C12452 * C1587 - C12457 * C1583) *
               C17613) *
              C28870 * C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eezy[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C17714 +
                      (C28870 * C491 - C151 * C443) * C17612 +
                      (C9369 - C9370) * C17715 + (C9748 - C9749) * C17613) *
                         C12451 +
                     ((C163 - C164) * C17714 + (C497 - C498) * C17612 +
                      (C1274 - C1273) * C17715 + (C1644 - C1643) * C17613) *
                         C12452) *
                        C28857 * C28840 * C84 +
                    (((C164 - C163) * C17714 + (C498 - C497) * C17612 +
                      (C1273 - C1274) * C17715 + (C1643 - C1644) * C17613) *
                         C12451 +
                     ((C168 - C167) * C17714 + (C501 - C500) * C17612 +
                      (C1277 - C1278) * C17715 + (C1645 - C1646) * C17613) *
                         C12452) *
                        C28857 * C28840 * C85 +
                    ((C175 * C17714 + C504 * C17612 + (C1278 - C1277) * C17715 +
                      (C1646 - C1645) * C17613) *
                         C12451 +
                     ((C172 - C171) * C17714 + (C503 - C502) * C17612 +
                      (C28870 * C1267 - C151 * C1201) * C17715 +
                      (C28870 * C1641 - C151 * C1583) * C17613) *
                         C12452) *
                        C28857 * C28840 * C86)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
            C17715 * C1330 - C18041 * C1200 - C17715 * C1580 + C17613 * C1698) *
               C28870 * C12451 +
           (C18067 + C18068) * C28870 * C12452) *
              C28857 * C28840 * C84 -
          ((C18069 + C18070) * C28870 * C12452 +
           (C18068 + C18067) * C28870 * C12451) *
              C28857 * C28840 * C85 +
          ((C18070 + C18069) * C28870 * C12451 +
           (C17714 * C218 - C18040 * C96 - C17714 * C446 + C17612 * C548 +
            C17715 * C1333 - C18041 * C1201 - C17715 * C1583 + C17613 * C1699) *
               C28870 * C12452) *
              C28857 * C28840 * C86)) /
        (p * q * std::sqrt(p + q));
    d2eexx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C17612 +
            (C12455 * C1206 - C12456 * C1200 - C12455 * C1207 + C12451 * C1212 +
             C12457 * C1204 - C12458 * C1199 - C12457 * C1205 +
             C12452 * C1211) *
                C17613) *
               C28870 * C28857 * C624 -
           ((C15383 + C15384) * C17613 + (C13011 + C13010) * C17612) * C28870 *
               C28857 * C28948) *
              C626 +
          (((C13012 + C13013) * C17612 +
            (C12455 * C2619 - C12456 * C2615 - C12455 * C2620 + C12451 * C2624 +
             C12457 * C2621 - C12458 * C2616 - C12457 * C2622 +
             C12452 * C2625) *
                C17613) *
               C28870 * C28857 * C28948 -
           ((C12457 * C1202 - C12458 * C1198 - C12457 * C1203 + C12452 * C1210 +
             C12455 * C1204 - C12456 * C1199 - C12455 * C1205 +
             C12451 * C1211) *
                C17613 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C17612) *
               C28870 * C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C12455 +
             (C28870 * C157 - C151 * C99) * C12451 + (C163 - C164) * C12457 +
             (C165 - C166) * C12452) *
                C17612 +
            ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
             (C1274 - C1273) * C12457 + (C1276 - C1275) * C12452) *
                C17613) *
               C28857 * C624 +
           (((C151 * C630 - C28870 * C694) * C12455 +
             (C151 * C637 - C28870 * C698) * C12451 + (C703 - C704) * C12457 +
             (C705 - C706) * C12452) *
                C17612 +
            ((C10711 - C10712) * C12455 + (C10713 - C10714) * C12451 +
             (C18203 - C18204) * C12457 + (C18205 - C18206) * C12452) *
                C17613) *
               C28857 * C28948) *
              C626 +
          ((((C164 - C163) * C12455 + (C166 - C165) * C12451 +
             (C168 - C167) * C12457 + (C170 - C169) * C12452) *
                C17612 +
            ((C1273 - C1274) * C12455 + (C1275 - C1276) * C12451 +
             (C1277 - C1278) * C12457 + (C1279 - C1280) * C12452) *
                C17613) *
               C28857 * C624 +
           (((C704 - C703) * C12455 + (C706 - C705) * C12451 +
             (C708 - C707) * C12457 + (C710 - C709) * C12452) *
                C17612 +
            ((C18204 - C18203) * C12455 + (C18206 - C18205) * C12451 +
             (C28870 * C2678 - C151 * C2616) * C12457 +
             (C28870 * C2681 - C151 * C2622) * C12452) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12455 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C12451 +
            (C17717 - C17718 + C17719 - C17720) * C12457 +
            (C17721 - C17722 + C17723 - C17724) * C12452) *
               C28870 * C28857 * C624 +
           ((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                C12455 +
            (C17714 * C637 - C17612 * C764 + C17715 * C2618 - C17613 * C2735) *
                C12451 +
            (C18273 - C18274 + C18275 - C18276) * C12457 +
            (C18277 - C18278 + C18279 - C18280) * C12452) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C17718 - C17717 + C17720 - C17719) * C12455 +
            (C17722 - C17721 + C17724 - C17723) * C12451 +
            (C17725 - C17726 + C17727 - C17728) * C12457 +
            (C17729 - C17730 + C17731 - C17732) * C12452) *
               C28870 * C28857 * C624 +
           ((C18274 - C18273 + C18276 - C18275) * C12455 +
            (C18278 - C18277 + C18280 - C18279) * C12451 +
            (C17612 * C762 - C17714 * C628 + C17613 * C2734 - C17715 * C2616) *
                C12457 +
            (C17612 * C766 - C17714 * C633 + C17613 * C2737 - C17715 * C2622) *
                C12452) *
               C28870 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C151 +
             (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                 C28870) *
                C17612 +
            ((C12451 * C1206 - C12455 * C1200 + C12452 * C1204 -
              C12457 * C1199) *
                 C151 +
             (C12451 * C1400 - C12455 * C1396 + C12452 * C1401 -
              C12457 * C1397) *
                 C28870) *
                C17613) *
               C28857 * C624 +
           (((C13225 - C13224 + C13227 - C13226) * C151 +
             (C13229 - C13228 + C13231 - C13230) * C28870) *
                C17612 +
            ((C15583 - C15584 + C15585 - C15586) * C151 +
             (C15587 - C15588 + C15589 - C15590) * C28870) *
                C17613) *
               C28857 * C28948) *
              C626 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C151 +
             (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                 C28870) *
                C17612 +
            ((C12455 * C1199 - C12451 * C1204 + C12457 * C1198 -
              C12452 * C1202) *
                 C151 +
             (C12455 * C1397 - C12451 * C1401 + C12457 * C1398 -
              C12452 * C1402) *
                 C28870) *
                C17613) *
               C28857 * C624 +
           (((C13233 - C13232 + C13235 - C13234) * C151 +
             (C13237 - C13236 + C13239 - C13238) * C28870) *
                C17612 +
            ((C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
              C12457 * C2616) *
                 C151 +
             (C12451 * C2792 - C12455 * C2789 + C12452 * C2793 -
              C12457 * C2790) *
                 C28870) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
             C350 * C12452) *
                C17612 +
            (C9576 * C12451 + C1472 * C12452) * C17613) *
               C28857 * C624 -
           ((C18419 * C12452 + C10890 * C12451) * C17613 +
            (C902 * C12452 +
             (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) *
                 C12451) *
                C17612) *
               C28857 * C28948) *
              C626 +
          (((C902 * C12451 + C901 * C12452) * C17612 +
            (C18419 * C12451 +
             (C151 * C2678 - C325 * C2616 - C151 * C2790 + C28870 * C2846) *
                 C12452) *
                C17613) *
               C28857 * C28948 -
           ((C1471 * C12452 + C1472 * C12451) * C17613 +
            (C351 * C12452 + C350 * C12451) * C17612) *
               C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C151 +
             (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                 C28870) *
                C12451 +
            ((C17717 - C17718 + C17719 - C17720) * C151 +
             (C17883 - C17884 + C17885 - C17886) * C28870) *
                C12452) *
               C28857 * C624 +
           (((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                 C151 +
             (C17714 * C826 - C17612 * C952 + C17715 * C2788 - C17613 * C2897) *
                 C28870) *
                C12451 +
            ((C18273 - C18274 + C18275 - C18276) * C151 +
             (C18486 - C18487 + C18488 - C18489) * C28870) *
                C12452) *
               C28857 * C28948) *
              C626 +
          ((((C17718 - C17717 + C17720 - C17719) * C151 +
             (C17884 - C17883 + C17886 - C17885) * C28870) *
                C12451 +
            ((C17725 - C17726 + C17727 - C17728) * C151 +
             (C17887 - C17888 + C17889 - C17890) * C28870) *
                C12452) *
               C28857 * C624 +
           (((C18274 - C18273 + C18276 - C18275) * C151 +
             (C18487 - C18486 + C18489 - C18488) * C28870) *
                C12451 +
            ((C17612 * C762 - C17714 * C628 + C17613 * C2734 - C17715 * C2616) *
                 C151 +
             (C17612 * C954 - C17714 * C828 + C17613 * C2899 - C17715 * C2790) *
                 C28870) *
                C12452) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C17714 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C17612 +
            (C12451 * C1206 - C12455 * C1200 + C12452 * C1204 -
             C12457 * C1199) *
                C17715 +
            (C12451 * C1584 - C12455 * C1580 + C12452 * C1585 -
             C12457 * C1581) *
                C17613) *
               C28870 * C28857 * C624 +
           ((C13225 - C13224 + C13227 - C13226) * C17714 +
            (C13455 - C13454 + C13457 - C13456) * C17612 +
            (C15583 - C15584 + C15585 - C15586) * C17715 +
            (C15789 - C15790 + C15791 - C15792) * C17613) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C17714 +
            (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                C17612 +
            (C12455 * C1199 - C12451 * C1204 + C12457 * C1198 -
             C12452 * C1202) *
                C17715 +
            (C12455 * C1581 - C12451 * C1585 + C12457 * C1582 -
             C12452 * C1586) *
                C17613) *
               C28870 * C28857 * C624 +
           ((C13233 - C13232 + C13235 - C13234) * C17714 +
            (C13459 - C13458 + C13461 - C13460) * C17612 +
            (C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
             C12457 * C2616) *
                C17715 +
            (C12451 * C2954 - C12455 * C2951 + C12452 * C2955 -
             C12457 * C2952) *
                C17613) *
               C28870 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C17714 +
             (C28870 * C491 - C151 * C443) * C17612 + (C9369 - C9370) * C17715 +
             (C9748 - C9749) * C17613) *
                C12451 +
            ((C163 - C164) * C17714 + (C497 - C498) * C17612 +
             (C1274 - C1273) * C17715 + (C1644 - C1643) * C17613) *
                C12452) *
               C28857 * C624 +
           (((C151 * C630 - C28870 * C694) * C17714 +
             (C151 * C1010 - C28870 * C1068) * C17612 +
             (C10711 - C10712) * C17715 + (C11050 - C11051) * C17613) *
                C12451 +
            ((C703 - C704) * C17714 + (C1073 - C1074) * C17612 +
             (C18203 - C18204) * C17715 + (C18622 - C18623) * C17613) *
                C12452) *
               C28857 * C28948) *
              C626 +
          ((((C164 - C163) * C17714 + (C498 - C497) * C17612 +
             (C1273 - C1274) * C17715 + (C1643 - C1644) * C17613) *
                C12451 +
            ((C168 - C167) * C17714 + (C501 - C500) * C17612 +
             (C1277 - C1278) * C17715 + (C1645 - C1646) * C17613) *
                C12452) *
               C28857 * C624 +
           (((C704 - C703) * C17714 + (C1074 - C1073) * C17612 +
             (C18204 - C18203) * C17715 + (C18623 - C18622) * C17613) *
                C12451 +
            ((C708 - C707) * C17714 + (C1076 - C1075) * C17612 +
             (C28870 * C2678 - C151 * C2616) * C17715 +
             (C28870 * C3008 - C151 * C2952) * C17613) *
                C12452) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
             C17715 * C1330 - C18041 * C1200 - C17715 * C1580 +
             C17613 * C1698) *
                C28870 * C12451 +
            (C18067 + C18068) * C28870 * C12452) *
               C28857 * C624 -
           ((C18702 + C18703) * C28870 * C12452 +
            (C17715 * C2732 - C18041 * C2614 - C17715 * C2950 + C17613 * C3059 +
             C17714 * C760 - C18040 * C630 - C17714 * C1010 + C17612 * C1128) *
                C28870 * C12451) *
               C28857 * C28948) *
              C626 +
          (((C18703 + C18702) * C28870 * C12451 +
            (C17714 * C762 - C18040 * C628 - C17714 * C1012 + C17612 * C1126 +
             C17715 * C2734 - C18041 * C2616 - C17715 * C2952 +
             C17613 * C3061) *
                C28870 * C12452) *
               C28857 * C28948 -
           ((C18069 + C18070) * C28870 * C12452 +
            (C18068 + C18067) * C28870 * C12451) *
               C28857 * C624) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexx[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C17612 +
            (C18794 + C18795) * C17613) *
               C28870 * C1196 -
           ((C12457 * C4010 - C12458 * C4006 - C12457 * C4011 + C12452 * C4015 +
             C12455 * C4008 - C12456 * C4005 - C12455 * C4009 +
             C12451 * C4014) *
                C17613 +
            (C18795 + C18794) * C17612) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C18796 + C18797) * C17612 +
            (C12455 * C4010 - C12456 * C4006 - C12455 * C4011 + C12451 * C4015 +
             C12457 * C4012 - C12458 * C4007 - C12457 * C4013 +
             C12452 * C4016) *
                C17613) *
               C28870 * C28950 -
           ((C18797 + C18796) * C17613 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C17612) *
               C28870 * C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C12455 +
                       (C28870 * C157 - C151 * C99) * C12451 +
                       (C163 - C164) * C12457 + (C165 - C166) * C12452) *
                          C17612 +
                      ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
                       C18864 * C12457 + C18865 * C12452) *
                          C17613) *
                         C1196 +
                     (((C9370 - C9369) * C12455 + (C9372 - C9371) * C12451 +
                       C18866 * C12457 + C18867 * C12452) *
                          C17612 +
                      ((C9374 - C9373) * C12455 + (C9376 - C9375) * C12451 +
                       (C9377 - C9378) * C12457 + (C9379 - C9380) * C12452) *
                          C17613) *
                         C28950) *
                        C28840 * C626 +
                    ((((C164 - C163) * C12455 + (C166 - C165) * C12451 +
                       (C168 - C167) * C12457 + (C170 - C169) * C12452) *
                          C17612 +
                      (C18866 * C12455 + C18867 * C12451 +
                       (C1277 - C1278) * C12457 + (C1279 - C1280) * C12452) *
                          C17613) *
                         C1196 +
                     ((C18864 * C12455 + C18865 * C12451 +
                       (C1278 - C1277) * C12457 + (C1280 - C1279) * C12452) *
                          C17612 +
                      ((C9378 - C9377) * C12455 + (C9380 - C9379) * C12451 +
                       (C28870 * C4057 - C151 * C4007) * C12457 +
                       (C28870 * C4060 - C151 * C4013) * C12452) *
                          C17613) *
                         C28950) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12455 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C12451 +
            (C17717 - C17718 + C17719 - C17720) * C12457 +
            (C17721 - C17722 + C17723 - C17724) * C12452) *
               C28870 * C1196 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12455 +
            (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
             C17613 * C4102) *
                C12451 +
            (C18934 - C18935 + C18936 - C18937) * C12457 +
            (C18938 - C18939 + C18940 - C18941) * C12452) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C17718 - C17717 + C17720 - C17719) * C12455 +
            (C17722 - C17721 + C17724 - C17723) * C12451 +
            (C17725 - C17726 + C17727 - C17728) * C12457 +
            (C17729 - C17730 + C17731 - C17732) * C12452) *
               C28870 * C1196 +
           ((C18935 - C18934 + C18937 - C18936) * C12455 +
            (C18939 - C18938 + C18941 - C18940) * C12451 +
            (C17612 * C1332 - C17714 * C1198 + C17613 * C4101 -
             C17715 * C4007) *
                C12457 +
            (C17612 * C1336 - C17714 * C1203 + C17613 * C4104 -
             C17715 * C4013) *
                C12452) *
               C28870 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C151 +
             (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                 C28870) *
                C17612 +
            ((C19008 - C19009 + C19010 - C19011) * C151 +
             (C19012 - C19013 + C19014 - C19015) * C28870) *
                C17613) *
               C1196 +
           (((C19009 - C19008 + C19011 - C19010) * C151 +
             (C19013 - C19012 + C19015 - C19014) * C28870) *
                C17612 +
            ((C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
              C12452 * C4010) *
                 C151 +
             (C12455 * C4143 - C12451 * C4146 + C12457 * C4144 -
              C12452 * C4147) *
                 C28870) *
                C17613) *
               C28950) *
              C28840 * C626 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C151 +
             (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                 C28870) *
                C17612 +
            ((C19016 - C19017 + C19018 - C19019) * C151 +
             (C19020 - C19021 + C19022 - C19023) * C28870) *
                C17613) *
               C1196 +
           (((C19017 - C19016 + C19019 - C19018) * C151 +
             (C19021 - C19020 + C19023 - C19022) * C28870) *
                C17612 +
            ((C12451 * C4010 - C12455 * C4006 + C12452 * C4012 -
              C12457 * C4007) *
                 C151 +
             (C12451 * C4147 - C12455 * C4144 + C12452 * C4148 -
              C12457 * C4145) *
                 C28870) *
                C17613) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
             C350 * C12452) *
                C17612 +
            (C19090 + C19091) * C17613) *
               C1196 -
           ((C9578 * C12452 + C9577 * C12451) * C17613 +
            (C19091 + C19090) * C17612) *
               C28950) *
              C28840 * C626 +
          (((C19092 + C19093) * C17612 +
            (C9578 * C12451 +
             (C151 * C4057 - C325 * C4007 - C151 * C4145 + C28870 * C4189) *
                 C12452) *
                C17613) *
               C28950 -
           ((C19093 + C19092) * C17613 +
            (C351 * C12452 + C350 * C12451) * C17612) *
               C1196) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C151 +
             (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                 C28870) *
                C12451 +
            ((C17717 - C17718 + C17719 - C17720) * C151 +
             (C17883 - C17884 + C17885 - C17886) * C28870) *
                C12452) *
               C1196 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C151 +
             (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
              C17613 * C4228) *
                 C28870) *
                C12451 +
            ((C18934 - C18935 + C18936 - C18937) * C151 +
             (C19160 - C19161 + C19162 - C19163) * C28870) *
                C12452) *
               C28950) *
              C28840 * C626 +
          ((((C17718 - C17717 + C17720 - C17719) * C151 +
             (C17884 - C17883 + C17886 - C17885) * C28870) *
                C12451 +
            ((C17725 - C17726 + C17727 - C17728) * C151 +
             (C17887 - C17888 + C17889 - C17890) * C28870) *
                C12452) *
               C1196 +
           (((C18935 - C18934 + C18937 - C18936) * C151 +
             (C19161 - C19160 + C19163 - C19162) * C28870) *
                C12451 +
            ((C17612 * C1332 - C17714 * C1198 + C17613 * C4101 -
              C17715 * C4007) *
                 C151 +
             (C17612 * C1524 - C17714 * C1398 + C17613 * C4230 -
              C17715 * C4145) *
                 C28870) *
                C12452) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C17714 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C17612 +
            (C19008 - C19009 + C19010 - C19011) * C17715 +
            (C19230 - C19231 + C19232 - C19233) * C17613) *
               C28870 * C1196 +
           ((C19009 - C19008 + C19011 - C19010) * C17714 +
            (C19231 - C19230 + C19233 - C19232) * C17612 +
            (C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
             C12452 * C4010) *
                C17715 +
            (C12455 * C4269 - C12451 * C4272 + C12457 * C4270 -
             C12452 * C4273) *
                C17613) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C17714 +
            (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                C17612 +
            (C19016 - C19017 + C19018 - C19019) * C17715 +
            (C19234 - C19235 + C19236 - C19237) * C17613) *
               C28870 * C1196 +
           ((C19017 - C19016 + C19019 - C19018) * C17714 +
            (C19235 - C19234 + C19237 - C19236) * C17612 +
            (C12451 * C4010 - C12455 * C4006 + C12452 * C4012 -
             C12457 * C4007) *
                C17715 +
            (C12451 * C4273 - C12455 * C4270 + C12452 * C4274 -
             C12457 * C4271) *
                C17613) *
               C28870 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C17714 +
                       (C28870 * C491 - C151 * C443) * C17612 +
                       (C9369 - C9370) * C17715 + (C9748 - C9749) * C17613) *
                          C12451 +
                      ((C163 - C164) * C17714 + (C497 - C498) * C17612 +
                       C18864 * C17715 + C19304 * C17613) *
                          C12452) *
                         C1196 +
                     (((C9370 - C9369) * C17714 + (C9749 - C9748) * C17612 +
                       (C9374 - C9373) * C17715 + (C9751 - C9750) * C17613) *
                          C12451 +
                      (C18866 * C17714 + C19305 * C17612 +
                       (C9377 - C9378) * C17715 + (C9752 - C9753) * C17613) *
                          C12452) *
                         C28950) *
                        C28840 * C626 +
                    ((((C164 - C163) * C17714 + (C498 - C497) * C17612 +
                       C18866 * C17715 + C19305 * C17613) *
                          C12451 +
                      ((C168 - C167) * C17714 + (C501 - C500) * C17612 +
                       (C1277 - C1278) * C17715 + (C1645 - C1646) * C17613) *
                          C12452) *
                         C1196 +
                     ((C18864 * C17714 + C19304 * C17612 +
                       (C9378 - C9377) * C17715 + (C9753 - C9752) * C17613) *
                          C12451 +
                      ((C1278 - C1277) * C17714 + (C1646 - C1645) * C17612 +
                       (C28870 * C4057 - C151 * C4007) * C17715 +
                       (C28870 * C4315 - C151 * C4271) * C17613) *
                          C12452) *
                         C28950) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C28870 * C12451 +
                      (C18067 + C18068) * C28870 * C12452) *
                         C1196 -
                     ((C19384 + C19385) * C28870 * C12452 +
                      (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 +
                       C17613 * C4354 + C17714 * C1330 - C18040 * C1200 -
                       C17714 * C1580 + C17612 * C1698) *
                          C28870 * C12451) *
                         C28950) *
                        C28840 * C626 +
                    (((C19385 + C19384) * C28870 * C12451 +
                      (C17714 * C1332 - C18040 * C1198 - C17714 * C1582 +
                       C17612 * C1696 + C17715 * C4101 - C18041 * C4007 -
                       C17715 * C4271 + C17613 * C4356) *
                          C28870 * C12452) *
                         C28950 -
                     ((C18069 + C18070) * C28870 * C12452 +
                      (C18068 + C18067) * C28870 * C12451) *
                         C1196) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C17612 +
            (C18794 + C18795) * C17613) *
               C28870 * C28857 * C1766 -
           ((C15383 + C15384) * C17613 + (C13011 + C13010) * C17612) * C28870 *
               C28857 * C28948) *
              C1768 +
          (((C13012 + C13013) * C17612 +
            (C12455 * C2619 - C12456 * C2615 - C12455 * C2620 + C12451 * C2624 +
             C12457 * C2621 - C12458 * C2616 - C12457 * C2622 +
             C12452 * C2625) *
                C17613) *
               C28870 * C28857 * C28948 -
           ((C18797 + C18796) * C17613 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C17612) *
               C28870 * C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C12455 +
             (C28870 * C157 - C151 * C99) * C12451 + (C163 - C164) * C12457 +
             (C165 - C166) * C12452) *
                C17612 +
            ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
             C18864 * C12457 + C18865 * C12452) *
                C17613) *
               C28857 * C1766 +
           (((C151 * C630 - C28870 * C694) * C12455 +
             (C151 * C637 - C28870 * C698) * C12451 + (C703 - C704) * C12457 +
             (C705 - C706) * C12452) *
                C17612 +
            ((C10711 - C10712) * C12455 + (C10713 - C10714) * C12451 +
             (C18203 - C18204) * C12457 + (C18205 - C18206) * C12452) *
                C17613) *
               C28857 * C28948) *
              C1768 +
          ((((C164 - C163) * C12455 + (C166 - C165) * C12451 +
             (C168 - C167) * C12457 + (C170 - C169) * C12452) *
                C17612 +
            (C18866 * C12455 + C18867 * C12451 + (C1277 - C1278) * C12457 +
             (C1279 - C1280) * C12452) *
                C17613) *
               C28857 * C1766 +
           (((C704 - C703) * C12455 + (C706 - C705) * C12451 +
             (C708 - C707) * C12457 + (C710 - C709) * C12452) *
                C17612 +
            ((C18204 - C18203) * C12455 + (C18206 - C18205) * C12451 +
             (C28870 * C2678 - C151 * C2616) * C12457 +
             (C28870 * C2681 - C151 * C2622) * C12452) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12455 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C12451 +
            (C17717 - C17718 + C17719 - C17720) * C12457 +
            (C17721 - C17722 + C17723 - C17724) * C12452) *
               C28870 * C28857 * C1766 +
           ((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                C12455 +
            (C17714 * C637 - C17612 * C764 + C17715 * C2618 - C17613 * C2735) *
                C12451 +
            (C18273 - C18274 + C18275 - C18276) * C12457 +
            (C18277 - C18278 + C18279 - C18280) * C12452) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C17718 - C17717 + C17720 - C17719) * C12455 +
            (C17722 - C17721 + C17724 - C17723) * C12451 +
            (C17725 - C17726 + C17727 - C17728) * C12457 +
            (C17729 - C17730 + C17731 - C17732) * C12452) *
               C28870 * C28857 * C1766 +
           ((C18274 - C18273 + C18276 - C18275) * C12455 +
            (C18278 - C18277 + C18280 - C18279) * C12451 +
            (C17612 * C762 - C17714 * C628 + C17613 * C2734 - C17715 * C2616) *
                C12457 +
            (C17612 * C766 - C17714 * C633 + C17613 * C2737 - C17715 * C2622) *
                C12452) *
               C28870 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C151 +
             (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                 C28870) *
                C17612 +
            ((C19008 - C19009 + C19010 - C19011) * C151 +
             (C19012 - C19013 + C19014 - C19015) * C28870) *
                C17613) *
               C28857 * C1766 +
           (((C13225 - C13224 + C13227 - C13226) * C151 +
             (C13229 - C13228 + C13231 - C13230) * C28870) *
                C17612 +
            ((C15583 - C15584 + C15585 - C15586) * C151 +
             (C15587 - C15588 + C15589 - C15590) * C28870) *
                C17613) *
               C28857 * C28948) *
              C1768 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C151 +
             (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                 C28870) *
                C17612 +
            ((C19016 - C19017 + C19018 - C19019) * C151 +
             (C19020 - C19021 + C19022 - C19023) * C28870) *
                C17613) *
               C28857 * C1766 +
           (((C13233 - C13232 + C13235 - C13234) * C151 +
             (C13237 - C13236 + C13239 - C13238) * C28870) *
                C17612 +
            ((C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
              C12457 * C2616) *
                 C151 +
             (C12451 * C2792 - C12455 * C2789 + C12452 * C2793 -
              C12457 * C2790) *
                 C28870) *
                C17613) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
             C350 * C12452) *
                C17612 +
            (C19090 + C19091) * C17613) *
               C28857 * C1766 -
           ((C18419 * C12452 + C10890 * C12451) * C17613 +
            (C902 * C12452 +
             (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) *
                 C12451) *
                C17612) *
               C28857 * C28948) *
              C1768 +
          (((C902 * C12451 + C901 * C12452) * C17612 +
            (C18419 * C12451 +
             (C151 * C2678 - C325 * C2616 - C151 * C2790 + C28870 * C2846) *
                 C12452) *
                C17613) *
               C28857 * C28948 -
           ((C19093 + C19092) * C17613 +
            (C351 * C12452 + C350 * C12451) * C17612) *
               C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C151 +
             (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                 C28870) *
                C12451 +
            ((C17717 - C17718 + C17719 - C17720) * C151 +
             (C17883 - C17884 + C17885 - C17886) * C28870) *
                C12452) *
               C28857 * C1766 +
           (((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                 C151 +
             (C17714 * C826 - C17612 * C952 + C17715 * C2788 - C17613 * C2897) *
                 C28870) *
                C12451 +
            ((C18273 - C18274 + C18275 - C18276) * C151 +
             (C18486 - C18487 + C18488 - C18489) * C28870) *
                C12452) *
               C28857 * C28948) *
              C1768 +
          ((((C17718 - C17717 + C17720 - C17719) * C151 +
             (C17884 - C17883 + C17886 - C17885) * C28870) *
                C12451 +
            ((C17725 - C17726 + C17727 - C17728) * C151 +
             (C17887 - C17888 + C17889 - C17890) * C28870) *
                C12452) *
               C28857 * C1766 +
           (((C18274 - C18273 + C18276 - C18275) * C151 +
             (C18487 - C18486 + C18489 - C18488) * C28870) *
                C12451 +
            ((C17612 * C762 - C17714 * C628 + C17613 * C2734 - C17715 * C2616) *
                 C151 +
             (C17612 * C954 - C17714 * C828 + C17613 * C2899 - C17715 * C2790) *
                 C28870) *
                C12452) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C17714 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C17612 +
            (C19008 - C19009 + C19010 - C19011) * C17715 +
            (C19230 - C19231 + C19232 - C19233) * C17613) *
               C28870 * C28857 * C1766 +
           ((C13225 - C13224 + C13227 - C13226) * C17714 +
            (C13455 - C13454 + C13457 - C13456) * C17612 +
            (C15583 - C15584 + C15585 - C15586) * C17715 +
            (C15789 - C15790 + C15791 - C15792) * C17613) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C17714 +
            (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                C17612 +
            (C19016 - C19017 + C19018 - C19019) * C17715 +
            (C19234 - C19235 + C19236 - C19237) * C17613) *
               C28870 * C28857 * C1766 +
           ((C13233 - C13232 + C13235 - C13234) * C17714 +
            (C13459 - C13458 + C13461 - C13460) * C17612 +
            (C12451 * C2619 - C12455 * C2615 + C12452 * C2621 -
             C12457 * C2616) *
                C17715 +
            (C12451 * C2954 - C12455 * C2951 + C12452 * C2955 -
             C12457 * C2952) *
                C17613) *
               C28870 * C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C17714 +
             (C28870 * C491 - C151 * C443) * C17612 + (C9369 - C9370) * C17715 +
             (C9748 - C9749) * C17613) *
                C12451 +
            ((C163 - C164) * C17714 + (C497 - C498) * C17612 + C18864 * C17715 +
             C19304 * C17613) *
                C12452) *
               C28857 * C1766 +
           (((C151 * C630 - C28870 * C694) * C17714 +
             (C151 * C1010 - C28870 * C1068) * C17612 +
             (C10711 - C10712) * C17715 + (C11050 - C11051) * C17613) *
                C12451 +
            ((C703 - C704) * C17714 + (C1073 - C1074) * C17612 +
             (C18203 - C18204) * C17715 + (C18622 - C18623) * C17613) *
                C12452) *
               C28857 * C28948) *
              C1768 +
          ((((C164 - C163) * C17714 + (C498 - C497) * C17612 + C18866 * C17715 +
             C19305 * C17613) *
                C12451 +
            ((C168 - C167) * C17714 + (C501 - C500) * C17612 +
             (C1277 - C1278) * C17715 + (C1645 - C1646) * C17613) *
                C12452) *
               C28857 * C1766 +
           (((C704 - C703) * C17714 + (C1074 - C1073) * C17612 +
             (C18204 - C18203) * C17715 + (C18623 - C18622) * C17613) *
                C12451 +
            ((C708 - C707) * C17714 + (C1076 - C1075) * C17612 +
             (C28870 * C2678 - C151 * C2616) * C17715 +
             (C28870 * C3008 - C151 * C2952) * C17613) *
                C12452) *
               C28857 * C28948) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
             C17715 * C1330 - C18041 * C1200 - C17715 * C1580 +
             C17613 * C1698) *
                C28870 * C12451 +
            (C18067 + C18068) * C28870 * C12452) *
               C28857 * C1766 -
           ((C18702 + C18703) * C28870 * C12452 +
            (C17715 * C2732 - C18041 * C2614 - C17715 * C2950 + C17613 * C3059 +
             C17714 * C760 - C18040 * C630 - C17714 * C1010 + C17612 * C1128) *
                C28870 * C12451) *
               C28857 * C28948) *
              C1768 +
          (((C18703 + C18702) * C28870 * C12451 +
            (C17714 * C762 - C18040 * C628 - C17714 * C1012 + C17612 * C1126 +
             C17715 * C2734 - C18041 * C2616 - C17715 * C2952 +
             C17613 * C3061) *
                C28870 * C12452) *
               C28857 * C28948 -
           ((C18069 + C18070) * C28870 * C12452 +
            (C18068 + C18067) * C28870 * C12451) *
               C28857 * C1766) *
              C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
            C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
               C17612 +
           (C18794 + C18795) * C17613) *
              C28870 * C28857 * C2208 -
          ((C15383 + C15384) * C17613 + (C13011 + C13010) * C17612) * C28870 *
              C28857 * C2209 +
          ((C14892 + C14891) * C17612 +
           (C12455 * C5340 - C12456 * C5338 - C12455 * C5341 + C12451 * C5344 +
            C12457 * C5342 - C12458 * C5339 - C12457 * C5343 + C12452 * C5345) *
               C17613) *
              C28870 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C12455 +
                      (C28870 * C157 - C151 * C99) * C12451 +
                      (C163 - C164) * C12457 + (C165 - C166) * C12452) *
                         C17612 +
                     ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
                      C18864 * C12457 + C18865 * C12452) *
                         C17613) *
                        C28857 * C2208 +
                    (((C151 * C630 - C28870 * C694) * C12455 +
                      (C151 * C637 - C28870 * C698) * C12451 +
                      (C703 - C704) * C12457 + (C705 - C706) * C12452) *
                         C17612 +
                     ((C10711 - C10712) * C12455 + (C10713 - C10714) * C12451 +
                      (C18203 - C18204) * C12457 + (C18205 - C18206) * C12452) *
                         C17613) *
                        C28857 * C2209 +
                    (((C28870 * C2262 - C151 * C2212) * C12455 +
                      (C28870 * C2265 - C151 * C2216) * C12451 +
                      (C28870 * C2263 - C151 * C2213) * C12457 +
                      (C28870 * C2266 - C151 * C2218) * C12452) *
                         C17612 +
                     ((C28870 * C5396 - C151 * C5338) * C12455 +
                      (C28870 * C5398 - C151 * C5341) * C12451 +
                      (C28870 * C5397 - C151 * C5339) * C12457 +
                      (C28870 * C5399 - C151 * C5343) * C12452) *
                         C17613) *
                        C28857 * C2210) *
                   C28806) /
                  (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
               C12455 +
           (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
               C12451 +
           (C17717 - C17718 + C17719 - C17720) * C12457 +
           (C17721 - C17722 + C17723 - C17724) * C12452) *
              C28870 * C28857 * C2208 +
          ((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
               C12455 +
           (C17714 * C637 - C17612 * C764 + C17715 * C2618 - C17613 * C2735) *
               C12451 +
           (C18273 - C18274 + C18275 - C18276) * C12457 +
           (C18277 - C18278 + C18279 - C18280) * C12452) *
              C28870 * C28857 * C2209 +
          ((C17612 * C2306 - C17714 * C2212 + C17613 * C5450 - C17715 * C5338) *
               C12455 +
           (C17612 * C2309 - C17714 * C2216 + C17613 * C5452 - C17715 * C5341) *
               C12451 +
           (C17612 * C2307 - C17714 * C2213 + C17613 * C5451 - C17715 * C5339) *
               C12457 +
           (C17612 * C2310 - C17714 * C2218 + C17613 * C5453 - C17715 * C5343) *
               C12452) *
              C28870 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C151 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C28870) *
               C17612 +
           ((C19008 - C19009 + C19010 - C19011) * C151 +
            (C19012 - C19013 + C19014 - C19015) * C28870) *
               C17613) *
              C28857 * C2208 +
          (((C13225 - C13224 + C13227 - C13226) * C151 +
            (C13229 - C13228 + C13231 - C13230) * C28870) *
               C17612 +
           ((C15583 - C15584 + C15585 - C15586) * C151 +
            (C15587 - C15588 + C15589 - C15590) * C28870) *
               C17613) *
              C28857 * C2209 +
          (((C15044 - C15043 + C15046 - C15045) * C151 +
            (C15048 - C15047 + C15050 - C15049) * C28870) *
               C17612 +
           ((C12451 * C5340 - C12455 * C5338 + C12452 * C5342 -
             C12457 * C5339) *
                C151 +
            (C12451 * C5506 - C12455 * C5504 + C12452 * C5507 -
             C12457 * C5505) *
                C28870) *
               C17613) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
            C350 * C12452) *
               C17612 +
           (C19090 + C19091) * C17613) *
              C28857 * C2208 -
          ((C18419 * C12452 + C10890 * C12451) * C17613 +
           (C902 * C12452 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) *
                C12451) *
               C17612) *
              C28857 * C2209 +
          (((C151 * C2262 - C325 * C2212 - C151 * C2350 + C28870 * C2394) *
                C12451 +
            (C151 * C2263 - C325 * C2213 - C151 * C2351 + C28870 * C2395) *
                C12452) *
               C17612 +
           ((C151 * C5396 - C325 * C5338 - C151 * C5504 + C28870 * C5558) *
                C12451 +
            (C151 * C5397 - C325 * C5339 - C151 * C5505 + C28870 * C5559) *
                C12452) *
               C17613) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C151 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C28870) *
               C12451 +
           ((C17717 - C17718 + C17719 - C17720) * C151 +
            (C17883 - C17884 + C17885 - C17886) * C28870) *
               C12452) *
              C28857 * C2208 +
          (((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                C151 +
            (C17714 * C826 - C17612 * C952 + C17715 * C2788 - C17613 * C2897) *
                C28870) *
               C12451 +
           ((C18273 - C18274 + C18275 - C18276) * C151 +
            (C18486 - C18487 + C18488 - C18489) * C28870) *
               C12452) *
              C28857 * C2209 +
          (((C17612 * C2306 - C17714 * C2212 + C17613 * C5450 -
             C17715 * C5338) *
                C151 +
            (C17612 * C2435 - C17714 * C2350 + C17613 * C5610 -
             C17715 * C5504) *
                C28870) *
               C12451 +
           ((C17612 * C2307 - C17714 * C2213 + C17613 * C5451 -
             C17715 * C5339) *
                C151 +
            (C17612 * C2436 - C17714 * C2351 + C17613 * C5611 -
             C17715 * C5505) *
                C28870) *
               C12452) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
               C17714 +
           (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
               C17612 +
           (C19008 - C19009 + C19010 - C19011) * C17715 +
           (C19230 - C19231 + C19232 - C19233) * C17613) *
              C28870 * C28857 * C2208 +
          ((C13225 - C13224 + C13227 - C13226) * C17714 +
           (C13455 - C13454 + C13457 - C13456) * C17612 +
           (C15583 - C15584 + C15585 - C15586) * C17715 +
           (C15789 - C15790 + C15791 - C15792) * C17613) *
              C28870 * C28857 * C2209 +
          ((C15044 - C15043 + C15046 - C15045) * C17714 +
           (C15202 - C15201 + C15204 - C15203) * C17612 +
           (C12451 * C5340 - C12455 * C5338 + C12452 * C5342 - C12457 * C5339) *
               C17715 +
           (C12451 * C5664 - C12455 * C5662 + C12452 * C5665 - C12457 * C5663) *
               C17613) *
              C28870 * C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C17714 +
                      (C28870 * C491 - C151 * C443) * C17612 +
                      (C9369 - C9370) * C17715 + (C9748 - C9749) * C17613) *
                         C12451 +
                     ((C163 - C164) * C17714 + (C497 - C498) * C17612 +
                      C18864 * C17715 + C19304 * C17613) *
                         C12452) *
                        C28857 * C2208 +
                    (((C151 * C630 - C28870 * C694) * C17714 +
                      (C151 * C1010 - C28870 * C1068) * C17612 +
                      (C10711 - C10712) * C17715 + (C11050 - C11051) * C17613) *
                         C12451 +
                     ((C703 - C704) * C17714 + (C1073 - C1074) * C17612 +
                      (C18203 - C18204) * C17715 + (C18622 - C18623) * C17613) *
                         C12452) *
                        C28857 * C2209 +
                    (((C28870 * C2262 - C151 * C2212) * C17714 +
                      (C28870 * C2520 - C151 * C2476) * C17612 +
                      (C28870 * C5396 - C151 * C5338) * C17715 +
                      (C28870 * C5716 - C151 * C5662) * C17613) *
                         C12451 +
                     ((C28870 * C2263 - C151 * C2213) * C17714 +
                      (C28870 * C2521 - C151 * C2477) * C17612 +
                      (C28870 * C5397 - C151 * C5339) * C17715 +
                      (C28870 * C5717 - C151 * C5663) * C17613) *
                         C12452) *
                        C28857 * C2210) *
                   C28806) /
                  (p * q * std::sqrt(p + q));
    d2eezz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
            C17715 * C1330 - C18041 * C1200 - C17715 * C1580 + C17613 * C1698) *
               C28870 * C12451 +
           (C18067 + C18068) * C28870 * C12452) *
              C28857 * C2208 -
          ((C18702 + C18703) * C28870 * C12452 +
           (C17715 * C2732 - C18041 * C2614 - C17715 * C2950 + C17613 * C3059 +
            C17714 * C760 - C18040 * C630 - C17714 * C1010 + C17612 * C1128) *
               C28870 * C12451) *
              C28857 * C2209 +
          ((C17714 * C2306 - C18040 * C2212 - C17714 * C2476 + C17612 * C2561 +
            C17715 * C5450 - C18041 * C5338 - C17715 * C5662 + C17613 * C5768) *
               C28870 * C12451 +
           (C17714 * C2307 - C18040 * C2213 - C17714 * C2477 + C17612 * C2562 +
            C17715 * C5451 - C18041 * C5339 - C17715 * C5663 + C17613 * C5769) *
               C28870 * C12452) *
              C28857 * C2210) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C17612 +
            (C18794 + C18795) * C17613) *
               C28870 * C1196 -
           ((C12457 * C4010 - C12458 * C4006 - C12457 * C4011 + C12452 * C4015 +
             C12455 * C4008 - C12456 * C4005 - C12455 * C4009 +
             C12451 * C4014) *
                C17613 +
            (C18795 + C18794) * C17612) *
               C28870 * C28950) *
              C1766 +
          (((C15384 + C15383) * C17612 +
            (C12455 * C8077 - C12456 * C8075 - C12455 * C8078 + C12451 * C8081 +
             C12457 * C8813 - C12458 * C8812 - C12457 * C8814 +
             C12452 * C8815) *
                C17613) *
               C28870 * C28950 -
           ((C15383 + C15384) * C17613 + (C13011 + C13010) * C17612) * C28870 *
               C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C12455 +
             (C28870 * C157 - C151 * C99) * C12451 + (C163 - C164) * C12457 +
             (C165 - C166) * C12452) *
                C17612 +
            ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
             C18864 * C12457 + C18865 * C12452) *
                C17613) *
               C1196 +
           (((C9370 - C9369) * C12455 + (C9372 - C9371) * C12451 +
             C18866 * C12457 + C18867 * C12452) *
                C17612 +
            ((C9374 - C9373) * C12455 + (C9376 - C9375) * C12451 +
             (C9377 - C9378) * C12457 + (C9379 - C9380) * C12452) *
                C17613) *
               C28950) *
              C1766 +
          ((((C151 * C630 - C28870 * C694) * C12455 +
             (C151 * C637 - C28870 * C698) * C12451 + (C703 - C704) * C12457 +
             (C705 - C706) * C12452) *
                C17612 +
            ((C10711 - C10712) * C12455 + (C10713 - C10714) * C12451 +
             (C18203 - C18204) * C12457 + (C18205 - C18206) * C12452) *
                C17613) *
               C1196 +
           (((C10712 - C10711) * C12455 + (C10714 - C10713) * C12451 +
             (C18204 - C18203) * C12457 + (C18206 - C18205) * C12452) *
                C17612 +
            ((C10716 - C10715) * C12455 + (C10718 - C10717) * C12451 +
             (C28870 * C8866 - C151 * C8812) * C12457 +
             (C28870 * C8867 - C151 * C8814) * C12452) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12455 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C12451 +
            (C17717 - C17718 + C17719 - C17720) * C12457 +
            (C17721 - C17722 + C17723 - C17724) * C12452) *
               C28870 * C1196 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12455 +
            (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
             C17613 * C4102) *
                C12451 +
            (C18934 - C18935 + C18936 - C18937) * C12457 +
            (C18938 - C18939 + C18940 - C18941) * C12452) *
               C28870 * C28950) *
              C1766 +
          (((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                C12455 +
            (C17714 * C637 - C17612 * C764 + C17715 * C2618 - C17613 * C2735) *
                C12451 +
            (C18273 - C18274 + C18275 - C18276) * C12457 +
            (C18277 - C18278 + C18279 - C18280) * C12452) *
               C28870 * C1196 +
           ((C17612 * C2732 - C17714 * C2614 + C17613 * C8163 -
             C17715 * C8075) *
                C12455 +
            (C17612 * C2735 - C17714 * C2618 + C17613 * C8165 -
             C17715 * C8078) *
                C12451 +
            (C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
             C17715 * C8812) *
                C12457 +
            (C17612 * C2736 - C17714 * C2620 + C17613 * C8919 -
             C17715 * C8814) *
                C12452) *
               C28870 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C151 +
             (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                 C28870) *
                C17612 +
            ((C19008 - C19009 + C19010 - C19011) * C151 +
             (C19012 - C19013 + C19014 - C19015) * C28870) *
                C17613) *
               C1196 +
           (((C19009 - C19008 + C19011 - C19010) * C151 +
             (C19013 - C19012 + C19015 - C19014) * C28870) *
                C17612 +
            ((C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
              C12452 * C4010) *
                 C151 +
             (C12455 * C4143 - C12451 * C4146 + C12457 * C4144 -
              C12452 * C4147) *
                 C28870) *
                C17613) *
               C28950) *
              C1766 +
          ((((C13225 - C13224 + C13227 - C13226) * C151 +
             (C13229 - C13228 + C13231 - C13230) * C28870) *
                C17612 +
            ((C15583 - C15584 + C15585 - C15586) * C151 +
             (C15587 - C15588 + C15589 - C15590) * C28870) *
                C17613) *
               C1196 +
           (((C15584 - C15583 + C15586 - C15585) * C151 +
             (C15588 - C15587 + C15590 - C15589) * C28870) *
                C17612 +
            ((C12451 * C8077 - C12455 * C8075 + C12452 * C8813 -
              C12457 * C8812) *
                 C151 +
             (C12451 * C8207 - C12455 * C8205 + C12452 * C8971 -
              C12457 * C8970) *
                 C28870) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
             C350 * C12452) *
                C17612 +
            (C19090 + C19091) * C17613) *
               C1196 -
           ((C9578 * C12452 + C9577 * C12451) * C17613 +
            (C19091 + C19090) * C17612) *
               C28950) *
              C1766 +
          (((C20760 + C20761) * C17612 +
            (C10891 * C12451 +
             (C151 * C8866 - C325 * C8812 - C151 * C8970 + C28870 * C9022) *
                 C12452) *
                C17613) *
               C28950 -
           ((C20761 + C20760) * C17613 +
            (C902 * C12452 +
             (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) *
                 C12451) *
                C17612) *
               C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C151 +
             (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                 C28870) *
                C12451 +
            ((C17717 - C17718 + C17719 - C17720) * C151 +
             (C17883 - C17884 + C17885 - C17886) * C28870) *
                C12452) *
               C1196 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C151 +
             (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
              C17613 * C4228) *
                 C28870) *
                C12451 +
            ((C18934 - C18935 + C18936 - C18937) * C151 +
             (C19160 - C19161 + C19162 - C19163) * C28870) *
                C12452) *
               C28950) *
              C1766 +
          ((((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                 C151 +
             (C17714 * C826 - C17612 * C952 + C17715 * C2788 - C17613 * C2897) *
                 C28870) *
                C12451 +
            ((C18273 - C18274 + C18275 - C18276) * C151 +
             (C18486 - C18487 + C18488 - C18489) * C28870) *
                C12452) *
               C1196 +
           (((C17612 * C2732 - C17714 * C2614 + C17613 * C8163 -
              C17715 * C8075) *
                 C151 +
             (C17612 * C2897 - C17714 * C2788 + C17613 * C8287 -
              C17715 * C8205) *
                 C28870) *
                C12451 +
            ((C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
              C17715 * C8812) *
                 C151 +
             (C17612 * C2898 - C17714 * C2789 + C17613 * C9073 -
              C17715 * C8970) *
                 C28870) *
                C12452) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C17714 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C17612 +
            (C19008 - C19009 + C19010 - C19011) * C17715 +
            (C19230 - C19231 + C19232 - C19233) * C17613) *
               C28870 * C1196 +
           ((C19009 - C19008 + C19011 - C19010) * C17714 +
            (C19231 - C19230 + C19233 - C19232) * C17612 +
            (C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
             C12452 * C4010) *
                C17715 +
            (C12455 * C4269 - C12451 * C4272 + C12457 * C4270 -
             C12452 * C4273) *
                C17613) *
               C28870 * C28950) *
              C1766 +
          (((C13225 - C13224 + C13227 - C13226) * C17714 +
            (C13455 - C13454 + C13457 - C13456) * C17612 +
            (C15583 - C15584 + C15585 - C15586) * C17715 +
            (C15789 - C15790 + C15791 - C15792) * C17613) *
               C28870 * C1196 +
           ((C15584 - C15583 + C15586 - C15585) * C17714 +
            (C15790 - C15789 + C15792 - C15791) * C17612 +
            (C12451 * C8077 - C12455 * C8075 + C12452 * C8813 -
             C12457 * C8812) *
                C17715 +
            (C12451 * C8329 - C12455 * C8327 + C12452 * C9125 -
             C12457 * C9124) *
                C17613) *
               C28870 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C17714 +
             (C28870 * C491 - C151 * C443) * C17612 + (C9369 - C9370) * C17715 +
             (C9748 - C9749) * C17613) *
                C12451 +
            ((C163 - C164) * C17714 + (C497 - C498) * C17612 + C18864 * C17715 +
             C19304 * C17613) *
                C12452) *
               C1196 +
           (((C9370 - C9369) * C17714 + (C9749 - C9748) * C17612 +
             (C9374 - C9373) * C17715 + (C9751 - C9750) * C17613) *
                C12451 +
            (C18866 * C17714 + C19305 * C17612 + (C9377 - C9378) * C17715 +
             (C9752 - C9753) * C17613) *
                C12452) *
               C28950) *
              C1766 +
          ((((C151 * C630 - C28870 * C694) * C17714 +
             (C151 * C1010 - C28870 * C1068) * C17612 +
             (C10711 - C10712) * C17715 + (C11050 - C11051) * C17613) *
                C12451 +
            ((C703 - C704) * C17714 + (C1073 - C1074) * C17612 +
             (C18203 - C18204) * C17715 + (C18622 - C18623) * C17613) *
                C12452) *
               C1196 +
           (((C10712 - C10711) * C17714 + (C11051 - C11050) * C17612 +
             (C10716 - C10715) * C17715 + (C11053 - C11052) * C17613) *
                C12451 +
            ((C18204 - C18203) * C17714 + (C18623 - C18622) * C17612 +
             (C28870 * C8866 - C151 * C8812) * C17715 +
             (C28870 * C9176 - C151 * C9124) * C17613) *
                C12452) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
             C17715 * C1330 - C18041 * C1200 - C17715 * C1580 +
             C17613 * C1698) *
                C28870 * C12451 +
            (C18067 + C18068) * C28870 * C12452) *
               C1196 -
           ((C19384 + C19385) * C28870 * C12452 +
            (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 + C17613 * C4354 +
             C17714 * C1330 - C18040 * C1200 - C17714 * C1580 +
             C17612 * C1698) *
                C28870 * C12451) *
               C28950) *
              C1766 +
          (((C17714 * C2732 - C18040 * C2614 - C17714 * C2950 + C17612 * C3059 +
             C17715 * C8163 - C18041 * C8075 - C17715 * C8327 +
             C17613 * C8409) *
                C28870 * C12451 +
            (C17714 * C2733 - C18040 * C2615 - C17714 * C2951 + C17612 * C3060 +
             C17715 * C8918 - C18041 * C8812 - C17715 * C9124 +
             C17613 * C9227) *
                C28870 * C12452) *
               C28950 -
           ((C18702 + C18703) * C28870 * C12452 +
            (C17715 * C2732 - C18041 * C2614 - C17715 * C2950 + C17613 * C3059 +
             C17714 * C760 - C18040 * C630 - C17714 * C1010 + C17612 * C1128) *
                C28870 * C12451) *
               C1196) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C17612 +
            (C18794 + C18795) * C17613) *
               C28870 * C3112 -
           ((C12457 * C4010 - C12458 * C4006 - C12457 * C4011 + C12452 * C4015 +
             C12455 * C4008 - C12456 * C4005 - C12455 * C4009 +
             C12451 * C4014) *
                C17613 +
            (C18795 + C18794) * C17612) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C18796 + C18797) * C17612 +
            (C12455 * C4010 - C12456 * C4006 - C12455 * C4011 + C12451 * C4015 +
             C12457 * C4012 - C12458 * C4007 - C12457 * C4013 +
             C12452 * C4016) *
                C17613) *
               C28870 * C28950 -
           ((C18797 + C18796) * C17613 +
            (C12457 * C102 - C12458 * C95 - C12457 * C103 + C12452 * C110 +
             C12455 * C100 - C12456 * C94 - C12455 * C101 + C12451 * C109) *
                C17612) *
               C28870 * C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eexy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C12455 +
                       (C28870 * C157 - C151 * C99) * C12451 +
                       (C163 - C164) * C12457 + (C165 - C166) * C12452) *
                          C17612 +
                      ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
                       C18864 * C12457 + C18865 * C12452) *
                          C17613) *
                         C3112 +
                     (((C9370 - C9369) * C12455 + (C9372 - C9371) * C12451 +
                       C18866 * C12457 + C18867 * C12452) *
                          C17612 +
                      ((C9374 - C9373) * C12455 + (C9376 - C9375) * C12451 +
                       (C9377 - C9378) * C12457 + (C9379 - C9380) * C12452) *
                          C17613) *
                         C28950) *
                        C28840 * C1768 +
                    ((((C164 - C163) * C12455 + (C166 - C165) * C12451 +
                       (C168 - C167) * C12457 + (C170 - C169) * C12452) *
                          C17612 +
                      (C18866 * C12455 + C18867 * C12451 +
                       (C1277 - C1278) * C12457 + (C1279 - C1280) * C12452) *
                          C17613) *
                         C3112 +
                     ((C18864 * C12455 + C18865 * C12451 +
                       (C1278 - C1277) * C12457 + (C1280 - C1279) * C12452) *
                          C17612 +
                      ((C9378 - C9377) * C12455 + (C9380 - C9379) * C12451 +
                       (C28870 * C4057 - C151 * C4007) * C12457 +
                       (C28870 * C4060 - C151 * C4013) * C12452) *
                          C17613) *
                         C28950) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12455 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C12451 +
            (C17717 - C17718 + C17719 - C17720) * C12457 +
            (C17721 - C17722 + C17723 - C17724) * C12452) *
               C28870 * C3112 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12455 +
            (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
             C17613 * C4102) *
                C12451 +
            (C18934 - C18935 + C18936 - C18937) * C12457 +
            (C18938 - C18939 + C18940 - C18941) * C12452) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C17718 - C17717 + C17720 - C17719) * C12455 +
            (C17722 - C17721 + C17724 - C17723) * C12451 +
            (C17725 - C17726 + C17727 - C17728) * C12457 +
            (C17729 - C17730 + C17731 - C17732) * C12452) *
               C28870 * C3112 +
           ((C18935 - C18934 + C18937 - C18936) * C12455 +
            (C18939 - C18938 + C18941 - C18940) * C12451 +
            (C17612 * C1332 - C17714 * C1198 + C17613 * C4101 -
             C17715 * C4007) *
                C12457 +
            (C17612 * C1336 - C17714 * C1203 + C17613 * C4104 -
             C17715 * C4013) *
                C12452) *
               C28870 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C151 +
             (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                 C28870) *
                C17612 +
            ((C19008 - C19009 + C19010 - C19011) * C151 +
             (C19012 - C19013 + C19014 - C19015) * C28870) *
                C17613) *
               C3112 +
           (((C19009 - C19008 + C19011 - C19010) * C151 +
             (C19013 - C19012 + C19015 - C19014) * C28870) *
                C17612 +
            ((C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
              C12452 * C4010) *
                 C151 +
             (C12455 * C4143 - C12451 * C4146 + C12457 * C4144 -
              C12452 * C4147) *
                 C28870) *
                C17613) *
               C28950) *
              C28840 * C1768 +
          ((((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                 C151 +
             (C12455 * C278 - C12451 * C283 + C12457 * C279 - C12452 * C284) *
                 C28870) *
                C17612 +
            ((C19016 - C19017 + C19018 - C19019) * C151 +
             (C19020 - C19021 + C19022 - C19023) * C28870) *
                C17613) *
               C3112 +
           (((C19017 - C19016 + C19019 - C19018) * C151 +
             (C19021 - C19020 + C19023 - C19022) * C28870) *
                C17612 +
            ((C12451 * C4010 - C12455 * C4006 + C12452 * C4012 -
              C12457 * C4007) *
                 C151 +
             (C12451 * C4147 - C12455 * C4144 + C12452 * C4148 -
              C12457 * C4145) *
                 C28870) *
                C17613) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
             C350 * C12452) *
                C17612 +
            (C19090 + C19091) * C17613) *
               C3112 -
           ((C9578 * C12452 + C9577 * C12451) * C17613 +
            (C19091 + C19090) * C17612) *
               C28950) *
              C28840 * C1768 +
          (((C19092 + C19093) * C17612 +
            (C9578 * C12451 +
             (C151 * C4057 - C325 * C4007 - C151 * C4145 + C28870 * C4189) *
                 C12452) *
                C17613) *
               C28950 -
           ((C19093 + C19092) * C17613 +
            (C351 * C12452 + C350 * C12451) * C17612) *
               C3112) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C151 +
             (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                 C28870) *
                C12451 +
            ((C17717 - C17718 + C17719 - C17720) * C151 +
             (C17883 - C17884 + C17885 - C17886) * C28870) *
                C12452) *
               C3112 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C151 +
             (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
              C17613 * C4228) *
                 C28870) *
                C12451 +
            ((C18934 - C18935 + C18936 - C18937) * C151 +
             (C19160 - C19161 + C19162 - C19163) * C28870) *
                C12452) *
               C28950) *
              C28840 * C1768 +
          ((((C17718 - C17717 + C17720 - C17719) * C151 +
             (C17884 - C17883 + C17886 - C17885) * C28870) *
                C12451 +
            ((C17725 - C17726 + C17727 - C17728) * C151 +
             (C17887 - C17888 + C17889 - C17890) * C28870) *
                C12452) *
               C3112 +
           (((C18935 - C18934 + C18937 - C18936) * C151 +
             (C19161 - C19160 + C19163 - C19162) * C28870) *
                C12451 +
            ((C17612 * C1332 - C17714 * C1198 + C17613 * C4101 -
              C17715 * C4007) *
                 C151 +
             (C17612 * C1524 - C17714 * C1398 + C17613 * C4230 -
              C17715 * C4145) *
                 C28870) *
                C12452) *
               C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C17714 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C17612 +
            (C19008 - C19009 + C19010 - C19011) * C17715 +
            (C19230 - C19231 + C19232 - C19233) * C17613) *
               C28870 * C3112 +
           ((C19009 - C19008 + C19011 - C19010) * C17714 +
            (C19231 - C19230 + C19233 - C19232) * C17612 +
            (C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
             C12452 * C4010) *
                C17715 +
            (C12455 * C4269 - C12451 * C4272 + C12457 * C4270 -
             C12452 * C4273) *
                C17613) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C12455 * C94 - C12451 * C100 + C12457 * C95 - C12452 * C102) *
                C17714 +
            (C12455 * C444 - C12451 * C449 + C12457 * C445 - C12452 * C450) *
                C17612 +
            (C19016 - C19017 + C19018 - C19019) * C17715 +
            (C19234 - C19235 + C19236 - C19237) * C17613) *
               C28870 * C3112 +
           ((C19017 - C19016 + C19019 - C19018) * C17714 +
            (C19235 - C19234 + C19237 - C19236) * C17612 +
            (C12451 * C4010 - C12455 * C4006 + C12452 * C4012 -
             C12457 * C4007) *
                C17715 +
            (C12451 * C4273 - C12455 * C4270 + C12452 * C4274 -
             C12457 * C4271) *
                C17613) *
               C28870 * C28950) *
              C28840 * C28946)) /
        (p * q * std::sqrt(p + q));
    d2eezy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C17714 +
                       (C28870 * C491 - C151 * C443) * C17612 +
                       (C9369 - C9370) * C17715 + (C9748 - C9749) * C17613) *
                          C12451 +
                      ((C163 - C164) * C17714 + (C497 - C498) * C17612 +
                       C18864 * C17715 + C19304 * C17613) *
                          C12452) *
                         C3112 +
                     (((C9370 - C9369) * C17714 + (C9749 - C9748) * C17612 +
                       (C9374 - C9373) * C17715 + (C9751 - C9750) * C17613) *
                          C12451 +
                      (C18866 * C17714 + C19305 * C17612 +
                       (C9377 - C9378) * C17715 + (C9752 - C9753) * C17613) *
                          C12452) *
                         C28950) *
                        C28840 * C1768 +
                    ((((C164 - C163) * C17714 + (C498 - C497) * C17612 +
                       C18866 * C17715 + C19305 * C17613) *
                          C12451 +
                      ((C168 - C167) * C17714 + (C501 - C500) * C17612 +
                       (C1277 - C1278) * C17715 + (C1645 - C1646) * C17613) *
                          C12452) *
                         C3112 +
                     ((C18864 * C17714 + C19304 * C17612 +
                       (C9378 - C9377) * C17715 + (C9753 - C9752) * C17613) *
                          C12451 +
                      ((C1278 - C1277) * C17714 + (C1646 - C1645) * C17612 +
                       (C28870 * C4057 - C151 * C4007) * C17715 +
                       (C28870 * C4315 - C151 * C4271) * C17613) *
                          C12452) *
                         C28950) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C17714 * C215 - C18040 * C93 - C17714 * C443 +
                       C17612 * C545 + C17715 * C1330 - C18041 * C1200 -
                       C17715 * C1580 + C17613 * C1698) *
                          C28870 * C12451 +
                      (C18067 + C18068) * C28870 * C12452) *
                         C3112 -
                     ((C19384 + C19385) * C28870 * C12452 +
                      (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 +
                       C17613 * C4354 + C17714 * C1330 - C18040 * C1200 -
                       C17714 * C1580 + C17612 * C1698) *
                          C28870 * C12451) *
                         C28950) *
                        C28840 * C1768 +
                    (((C19385 + C19384) * C28870 * C12451 +
                      (C17714 * C1332 - C18040 * C1198 - C17714 * C1582 +
                       C17612 * C1696 + C17715 * C4101 - C18041 * C4007 -
                       C17715 * C4271 + C17613 * C4356) *
                          C28870 * C12452) *
                         C28950 -
                     ((C18069 + C18070) * C28870 * C12452 +
                      (C18068 + C18067) * C28870 * C12451) *
                         C3112) *
                        C28840 * C28946)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
             C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
                C17612 +
            (C18794 + C18795) * C17613) *
               C28870 * C3112 -
           ((C12457 * C4010 - C12458 * C4006 - C12457 * C4011 + C12452 * C4015 +
             C12455 * C4008 - C12456 * C4005 - C12455 * C4009 +
             C12451 * C4014) *
                C17613 +
            (C18795 + C18794) * C17612) *
               C28870 * C28950) *
              C624 +
          (((C15384 + C15383) * C17612 +
            (C12455 * C8077 - C12456 * C8075 - C12455 * C8078 + C12451 * C8081 +
             C12457 * C8813 - C12458 * C8812 - C12457 * C8814 +
             C12452 * C8815) *
                C17613) *
               C28870 * C28950 -
           ((C15383 + C15384) * C17613 + (C13011 + C13010) * C17612) * C28870 *
               C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C12455 +
             (C28870 * C157 - C151 * C99) * C12451 + (C163 - C164) * C12457 +
             (C165 - C166) * C12452) *
                C17612 +
            ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
             C18864 * C12457 + C18865 * C12452) *
                C17613) *
               C3112 +
           (((C9370 - C9369) * C12455 + (C9372 - C9371) * C12451 +
             C18866 * C12457 + C18867 * C12452) *
                C17612 +
            ((C9374 - C9373) * C12455 + (C9376 - C9375) * C12451 +
             (C9377 - C9378) * C12457 + (C9379 - C9380) * C12452) *
                C17613) *
               C28950) *
              C624 +
          ((((C151 * C630 - C28870 * C694) * C12455 +
             (C151 * C637 - C28870 * C698) * C12451 + (C703 - C704) * C12457 +
             (C705 - C706) * C12452) *
                C17612 +
            ((C10711 - C10712) * C12455 + (C10713 - C10714) * C12451 +
             (C18203 - C18204) * C12457 + (C18205 - C18206) * C12452) *
                C17613) *
               C3112 +
           (((C10712 - C10711) * C12455 + (C10714 - C10713) * C12451 +
             (C18204 - C18203) * C12457 + (C18206 - C18205) * C12452) *
                C17612 +
            ((C10716 - C10715) * C12455 + (C10718 - C10717) * C12451 +
             (C28870 * C8866 - C151 * C8812) * C12457 +
             (C28870 * C8867 - C151 * C8814) * C12452) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C12455 +
            (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
                C12451 +
            (C17717 - C17718 + C17719 - C17720) * C12457 +
            (C17721 - C17722 + C17723 - C17724) * C12452) *
               C28870 * C3112 +
           ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C12455 +
            (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 -
             C17613 * C4102) *
                C12451 +
            (C18934 - C18935 + C18936 - C18937) * C12457 +
            (C18938 - C18939 + C18940 - C18941) * C12452) *
               C28870 * C28950) *
              C624 +
          (((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                C12455 +
            (C17714 * C637 - C17612 * C764 + C17715 * C2618 - C17613 * C2735) *
                C12451 +
            (C18273 - C18274 + C18275 - C18276) * C12457 +
            (C18277 - C18278 + C18279 - C18280) * C12452) *
               C28870 * C3112 +
           ((C17612 * C2732 - C17714 * C2614 + C17613 * C8163 -
             C17715 * C8075) *
                C12455 +
            (C17612 * C2735 - C17714 * C2618 + C17613 * C8165 -
             C17715 * C8078) *
                C12451 +
            (C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
             C17715 * C8812) *
                C12457 +
            (C17612 * C2736 - C17714 * C2620 + C17613 * C8919 -
             C17715 * C8814) *
                C12452) *
               C28870 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                 C151 +
             (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                 C28870) *
                C17612 +
            ((C19008 - C19009 + C19010 - C19011) * C151 +
             (C19012 - C19013 + C19014 - C19015) * C28870) *
                C17613) *
               C3112 +
           (((C19009 - C19008 + C19011 - C19010) * C151 +
             (C19013 - C19012 + C19015 - C19014) * C28870) *
                C17612 +
            ((C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
              C12452 * C4010) *
                 C151 +
             (C12455 * C4143 - C12451 * C4146 + C12457 * C4144 -
              C12452 * C4147) *
                 C28870) *
                C17613) *
               C28950) *
              C624 +
          ((((C13225 - C13224 + C13227 - C13226) * C151 +
             (C13229 - C13228 + C13231 - C13230) * C28870) *
                C17612 +
            ((C15583 - C15584 + C15585 - C15586) * C151 +
             (C15587 - C15588 + C15589 - C15590) * C28870) *
                C17613) *
               C3112 +
           (((C15584 - C15583 + C15586 - C15585) * C151 +
             (C15588 - C15587 + C15590 - C15589) * C28870) *
                C17612 +
            ((C12451 * C8077 - C12455 * C8075 + C12452 * C8813 -
              C12457 * C8812) *
                 C151 +
             (C12451 * C8207 - C12455 * C8205 + C12452 * C8971 -
              C12457 * C8970) *
                 C28870) *
                C17613) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
             C350 * C12452) *
                C17612 +
            (C19090 + C19091) * C17613) *
               C3112 -
           ((C9578 * C12452 + C9577 * C12451) * C17613 +
            (C19091 + C19090) * C17612) *
               C28950) *
              C624 +
          (((C20760 + C20761) * C17612 +
            (C10891 * C12451 +
             (C151 * C8866 - C325 * C8812 - C151 * C8970 + C28870 * C9022) *
                 C12452) *
                C17613) *
               C28950 -
           ((C20761 + C20760) * C17613 +
            (C902 * C12452 +
             (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) *
                 C12451) *
                C17612) *
               C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                 C151 +
             (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                 C28870) *
                C12451 +
            ((C17717 - C17718 + C17719 - C17720) * C151 +
             (C17883 - C17884 + C17885 - C17886) * C28870) *
                C12452) *
               C3112 +
           (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
              C17613 * C4099) *
                 C151 +
             (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
              C17613 * C4228) *
                 C28870) *
                C12451 +
            ((C18934 - C18935 + C18936 - C18937) * C151 +
             (C19160 - C19161 + C19162 - C19163) * C28870) *
                C12452) *
               C28950) *
              C624 +
          ((((C17714 * C630 - C17612 * C760 + C17715 * C2614 - C17613 * C2732) *
                 C151 +
             (C17714 * C826 - C17612 * C952 + C17715 * C2788 - C17613 * C2897) *
                 C28870) *
                C12451 +
            ((C18273 - C18274 + C18275 - C18276) * C151 +
             (C18486 - C18487 + C18488 - C18489) * C28870) *
                C12452) *
               C3112 +
           (((C17612 * C2732 - C17714 * C2614 + C17613 * C8163 -
              C17715 * C8075) *
                 C151 +
             (C17612 * C2897 - C17714 * C2788 + C17613 * C8287 -
              C17715 * C8205) *
                 C28870) *
                C12451 +
            ((C17612 * C2733 - C17714 * C2615 + C17613 * C8918 -
              C17715 * C8812) *
                 C151 +
             (C17612 * C2898 - C17714 * C2789 + C17613 * C9073 -
              C17715 * C8970) *
                 C28870) *
                C12452) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C17714 +
            (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
                C17612 +
            (C19008 - C19009 + C19010 - C19011) * C17715 +
            (C19230 - C19231 + C19232 - C19233) * C17613) *
               C28870 * C3112 +
           ((C19009 - C19008 + C19011 - C19010) * C17714 +
            (C19231 - C19230 + C19233 - C19232) * C17612 +
            (C12455 * C4005 - C12451 * C4008 + C12457 * C4006 -
             C12452 * C4010) *
                C17715 +
            (C12455 * C4269 - C12451 * C4272 + C12457 * C4270 -
             C12452 * C4273) *
                C17613) *
               C28870 * C28950) *
              C624 +
          (((C13225 - C13224 + C13227 - C13226) * C17714 +
            (C13455 - C13454 + C13457 - C13456) * C17612 +
            (C15583 - C15584 + C15585 - C15586) * C17715 +
            (C15789 - C15790 + C15791 - C15792) * C17613) *
               C28870 * C3112 +
           ((C15584 - C15583 + C15586 - C15585) * C17714 +
            (C15790 - C15789 + C15792 - C15791) * C17612 +
            (C12451 * C8077 - C12455 * C8075 + C12452 * C8813 -
             C12457 * C8812) *
                C17715 +
            (C12451 * C8329 - C12455 * C8327 + C12452 * C9125 -
             C12457 * C9124) *
                C17613) *
               C28870 * C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C17714 +
             (C28870 * C491 - C151 * C443) * C17612 + (C9369 - C9370) * C17715 +
             (C9748 - C9749) * C17613) *
                C12451 +
            ((C163 - C164) * C17714 + (C497 - C498) * C17612 + C18864 * C17715 +
             C19304 * C17613) *
                C12452) *
               C3112 +
           (((C9370 - C9369) * C17714 + (C9749 - C9748) * C17612 +
             (C9374 - C9373) * C17715 + (C9751 - C9750) * C17613) *
                C12451 +
            (C18866 * C17714 + C19305 * C17612 + (C9377 - C9378) * C17715 +
             (C9752 - C9753) * C17613) *
                C12452) *
               C28950) *
              C624 +
          ((((C151 * C630 - C28870 * C694) * C17714 +
             (C151 * C1010 - C28870 * C1068) * C17612 +
             (C10711 - C10712) * C17715 + (C11050 - C11051) * C17613) *
                C12451 +
            ((C703 - C704) * C17714 + (C1073 - C1074) * C17612 +
             (C18203 - C18204) * C17715 + (C18622 - C18623) * C17613) *
                C12452) *
               C3112 +
           (((C10712 - C10711) * C17714 + (C11051 - C11050) * C17612 +
             (C10716 - C10715) * C17715 + (C11053 - C11052) * C17613) *
                C12451 +
            ((C18204 - C18203) * C17714 + (C18623 - C18622) * C17612 +
             (C28870 * C8866 - C151 * C8812) * C17715 +
             (C28870 * C9176 - C151 * C9124) * C17613) *
                C12452) *
               C28950) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eezz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
             C17715 * C1330 - C18041 * C1200 - C17715 * C1580 +
             C17613 * C1698) *
                C28870 * C12451 +
            (C18067 + C18068) * C28870 * C12452) *
               C3112 -
           ((C19384 + C19385) * C28870 * C12452 +
            (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 + C17613 * C4354 +
             C17714 * C1330 - C18040 * C1200 - C17714 * C1580 +
             C17612 * C1698) *
                C28870 * C12451) *
               C28950) *
              C624 +
          (((C17714 * C2732 - C18040 * C2614 - C17714 * C2950 + C17612 * C3059 +
             C17715 * C8163 - C18041 * C8075 - C17715 * C8327 +
             C17613 * C8409) *
                C28870 * C12451 +
            (C17714 * C2733 - C18040 * C2615 - C17714 * C2951 + C17612 * C3060 +
             C17715 * C8918 - C18041 * C8812 - C17715 * C9124 +
             C17613 * C9227) *
                C28870 * C12452) *
               C28950 -
           ((C18702 + C18703) * C28870 * C12452 +
            (C17715 * C2732 - C18041 * C2614 - C17715 * C2950 + C17613 * C3059 +
             C17714 * C760 - C18040 * C630 - C17714 * C1010 + C17612 * C1128) *
                C28870 * C12451) *
               C3112) *
              C28948) *
         C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12455 * C98 - C12456 * C93 - C12455 * C99 + C12451 * C108 +
            C12457 * C100 - C12458 * C94 - C12457 * C101 + C12452 * C109) *
               C17612 +
           (C18794 + C18795) * C17613) *
              C28870 * C4002 -
          ((C22276 + C22277) * C17613 + (C18795 + C18794) * C17612) * C28870 *
              C4003 +
          ((C22277 + C22276) * C17612 +
           (C12455 * C9280 - C12456 * C9278 - C12455 * C9281 + C12451 * C9284 +
            C12457 * C9282 - C12458 * C9279 - C12457 * C9283 + C12452 * C9285) *
               C17613) *
              C28870 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C12455 +
                      (C28870 * C157 - C151 * C99) * C12451 +
                      (C163 - C164) * C12457 + (C165 - C166) * C12452) *
                         C17612 +
                     ((C9369 - C9370) * C12455 + (C9371 - C9372) * C12451 +
                      C18864 * C12457 + C18865 * C12452) *
                         C17613) *
                        C4002 +
                    (((C9370 - C9369) * C12455 + (C9372 - C9371) * C12451 +
                      C18866 * C12457 + C18867 * C12452) *
                         C17612 +
                     ((C9374 - C9373) * C12455 + (C9376 - C9375) * C12451 +
                      (C9377 - C9378) * C12457 + (C9379 - C9380) * C12452) *
                         C17613) *
                        C4003 +
                    ((C12094 * C12455 + C12095 * C12451 +
                      (C9378 - C9377) * C12457 + (C9380 - C9379) * C12452) *
                         C17612 +
                     ((C12097 - C12096) * C12455 + (C12099 - C12098) * C12451 +
                      (C28870 * C9365 - C151 * C9279) * C12457 +
                      (C28870 * C9367 - C151 * C9283) * C12452) *
                         C17613) *
                        C4004) *
                   C28840 * C28806) /
                  (p * q * std::sqrt(p + q));
    d2eexz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
               C12455 +
           (C17612 * C220 - C17714 * C99 + C17613 * C1334 - C17715 * C1207) *
               C12451 +
           (C17717 - C17718 + C17719 - C17720) * C12457 +
           (C17721 - C17722 + C17723 - C17724) * C12452) *
              C28870 * C4002 +
          ((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 - C17613 * C4099) *
               C12455 +
           (C17714 * C1207 - C17612 * C1334 + C17715 * C4009 - C17613 * C4102) *
               C12451 +
           (C18934 - C18935 + C18936 - C18937) * C12457 +
           (C18938 - C18939 + C18940 - C18941) * C12452) *
              C28870 * C4003 +
          ((C17612 * C4099 - C17714 * C4005 + C17613 * C9430 - C17715 * C9278) *
               C12455 +
           (C17612 * C4102 - C17714 * C4009 + C17613 * C9432 - C17715 * C9281) *
               C12451 +
           (C17612 * C4100 - C17714 * C4006 + C17613 * C9431 - C17715 * C9279) *
               C12457 +
           (C17612 * C4103 - C17714 * C4011 + C17613 * C9433 - C17715 * C9283) *
               C12452) *
              C28870 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
                C151 +
            (C12451 * C282 - C12455 * C277 + C12452 * C283 - C12457 * C278) *
                C28870) *
               C17612 +
           ((C19008 - C19009 + C19010 - C19011) * C151 +
            (C19012 - C19013 + C19014 - C19015) * C28870) *
               C17613) *
              C4002 +
          (((C19009 - C19008 + C19011 - C19010) * C151 +
            (C19013 - C19012 + C19015 - C19014) * C28870) *
               C17612 +
           ((C22428 - C22429 + C22430 - C22431) * C151 +
            (C22432 - C22433 + C22434 - C22435) * C28870) *
               C17613) *
              C4003 +
          (((C22429 - C22428 + C22431 - C22430) * C151 +
            (C22433 - C22432 + C22435 - C22434) * C28870) *
               C17612 +
           ((C12451 * C9280 - C12455 * C9278 + C12452 * C9282 -
             C12457 * C9279) *
                C151 +
            (C12451 * C9486 - C12455 * C9484 + C12452 * C9487 -
             C12457 * C9485) *
                C28870) *
               C17613) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C12451 +
            C350 * C12452) *
               C17612 +
           (C19090 + C19091) * C17613) *
              C4002 -
          ((C22486 + C22487) * C17613 + (C19091 + C19090) * C17612) * C4003 +
          ((C22487 + C22486) * C17612 +
           (C12237 * C12451 +
            (C151 * C9365 - C325 * C9279 - C151 * C9485 + C28870 * C9555) *
                C12452) *
               C17613) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eeyz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17612 * C215 - C17714 * C93 + C17613 * C1330 - C17715 * C1200) *
                C151 +
            (C17612 * C390 - C17714 * C277 + C17613 * C1522 - C17715 * C1396) *
                C28870) *
               C12451 +
           ((C17717 - C17718 + C17719 - C17720) * C151 +
            (C17883 - C17884 + C17885 - C17886) * C28870) *
               C12452) *
              C4002 +
          (((C17714 * C1200 - C17612 * C1330 + C17715 * C4005 -
             C17613 * C4099) *
                C151 +
            (C17714 * C1396 - C17612 * C1522 + C17715 * C4143 -
             C17613 * C4228) *
                C28870) *
               C12451 +
           ((C18934 - C18935 + C18936 - C18937) * C151 +
            (C19160 - C19161 + C19162 - C19163) * C28870) *
               C12452) *
              C4003 +
          (((C17612 * C4099 - C17714 * C4005 + C17613 * C9430 -
             C17715 * C9278) *
                C151 +
            (C17612 * C4228 - C17714 * C4143 + C17613 * C9631 -
             C17715 * C9484) *
                C28870) *
               C12451 +
           ((C17612 * C4100 - C17714 * C4006 + C17613 * C9431 -
             C17715 * C9279) *
                C151 +
            (C17612 * C4229 - C17714 * C4144 + C17613 * C9632 -
             C17715 * C9485) *
                C28870) *
               C12452) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eezx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12451 * C98 - C12455 * C93 + C12452 * C100 - C12457 * C94) *
               C17714 +
           (C12451 * C448 - C12455 * C443 + C12452 * C449 - C12457 * C444) *
               C17612 +
           (C19008 - C19009 + C19010 - C19011) * C17715 +
           (C19230 - C19231 + C19232 - C19233) * C17613) *
              C28870 * C4002 +
          ((C19009 - C19008 + C19011 - C19010) * C17714 +
           (C19231 - C19230 + C19233 - C19232) * C17612 +
           (C22428 - C22429 + C22430 - C22431) * C17715 +
           (C22588 - C22589 + C22590 - C22591) * C17613) *
              C28870 * C4003 +
          ((C22429 - C22428 + C22431 - C22430) * C17714 +
           (C22589 - C22588 + C22591 - C22590) * C17612 +
           (C12451 * C9280 - C12455 * C9278 + C12452 * C9282 - C12457 * C9279) *
               C17715 +
           (C12451 * C9685 - C12455 * C9683 + C12452 * C9686 - C12457 * C9684) *
               C17613) *
              C28870 * C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eezy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C28870 * C152 - C151 * C93) * C17714 +
                      (C28870 * C491 - C151 * C443) * C17612 +
                      (C9369 - C9370) * C17715 + (C9748 - C9749) * C17613) *
                         C12451 +
                     ((C163 - C164) * C17714 + (C497 - C498) * C17612 +
                      C18864 * C17715 + C19304 * C17613) *
                         C12452) *
                        C4002 +
                    (((C9370 - C9369) * C17714 + (C9749 - C9748) * C17612 +
                      (C9374 - C9373) * C17715 + (C9751 - C9750) * C17613) *
                         C12451 +
                     (C18866 * C17714 + C19305 * C17612 +
                      (C9377 - C9378) * C17715 + (C9752 - C9753) * C17613) *
                         C12452) *
                        C4003 +
                    ((C12094 * C17714 + C12360 * C17612 +
                      (C12097 - C12096) * C17715 + (C12362 - C12361) * C17613) *
                         C12451 +
                     ((C9378 - C9377) * C17714 + (C9753 - C9752) * C17612 +
                      (C28870 * C9365 - C151 * C9279) * C17715 +
                      (C28870 * C9746 - C151 * C9684) * C17613) *
                         C12452) *
                        C4004) *
                   C28840 * C28806) /
                  (p * q * std::sqrt(p + q));
    d2eezz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17714 * C215 - C18040 * C93 - C17714 * C443 + C17612 * C545 +
            C17715 * C1330 - C18041 * C1200 - C17715 * C1580 + C17613 * C1698) *
               C28870 * C12451 +
           (C18067 + C18068) * C28870 * C12452) *
              C4002 -
          ((C19384 + C19385) * C28870 * C12452 +
           (C17715 * C4099 - C18041 * C4005 - C17715 * C4269 + C17613 * C4354 +
            C17714 * C1330 - C18040 * C1200 - C17714 * C1580 + C17612 * C1698) *
               C28870 * C12451) *
              C4003 +
          ((C17714 * C4099 - C18040 * C4005 - C17714 * C4269 + C17612 * C4354 +
            C17715 * C9430 - C18041 * C9278 - C17715 * C9683 + C17613 * C9803) *
               C28870 * C12451 +
           (C17714 * C4100 - C18040 * C4006 - C17714 * C4270 + C17612 * C4355 +
            C17715 * C9431 - C18041 * C9279 - C17715 * C9684 + C17613 * C9804) *
               C28870 * C12452) *
              C4004) *
         C28840 * C28806) /
        (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C28881 * C28870 * C28857 * C28840 * C84 -
          (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
           C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
           C87 * C101 + C77 * C109) *
              C28881 * C28870 * C28857 * C28840 * C85 +
          (C87 * C102 - C88 * C95 - C87 * C103 + C77 * C110 + C89 * C104 -
           C90 * C96 - C89 * C105 + C78 * C111 + C91 * C106 - C92 * C97 -
           C91 * C107 + C79 * C112) *
              C28881 * C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
               C4396 +
           (C4399 * C636 - C4400 * C630 - C4399 * C637 + C28784 * C642) *
               C28881 * C4397 +
           (C4399 * C2215 - C4400 * C2212 - C4399 * C2216 + C28784 * C2221) *
               C28881 * C4398) *
              C28857 * C28840 * C84 -
          ((C4399 * C2217 - C4400 * C2213 - C4399 * C2218 + C28784 * C2222) *
               C28881 * C4398 +
           (C4399 * C634 - C4400 * C629 - C4399 * C635 + C28784 * C641) *
               C28881 * C4397 +
           (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
               C28881 * C4396) *
              C28857 * C28840 * C85 +
          ((C4399 * C102 - C4400 * C95 - C4399 * C103 + C28784 * C110) *
               C28881 * C4396 +
           (C4399 * C632 - C4400 * C628 - C4399 * C633 + C28784 * C640) *
               C28881 * C4397 +
           (C4399 * C2219 - C4400 * C2214 - C4399 * C2220 + C28784 * C2223) *
               C28881 * C4398) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexy[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C87 +
           (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C28881 * C28857 * C28840 * C84 +
          ((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
           (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
              C28881 * C28857 * C28840 * C85 +
          (C175 * C87 + C176 * C77 + (C172 - C171) * C89 + (C174 - C173) * C78 +
           (C28870 * C156 - C151 * C97) * C91 +
           (C28870 * C161 - C151 * C107) * C79) *
              C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C4399 +
           (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
            C4398 * C2265 - C4441 * C2216) *
               C28784) *
              C28881 * C28857 * C28840 * C84 +
          ((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
            C4441 * C2213 - C4398 * C2263) *
               C4399 +
           (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
            C4441 * C2218 - C4398 * C2266) *
               C28784) *
              C28881 * C28857 * C28840 * C85 +
          ((C4396 * C154 - C4439 * C95 + C4397 * C696 - C4440 * C628 +
            C4398 * C2264 - C4441 * C2214) *
               C4399 +
           (C4396 * C159 - C4439 * C103 + C4397 * C700 - C4440 * C633 +
            C4398 * C2267 - C4441 * C2220) *
               C28784) *
              C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C87 +
           (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C28870 * C28857 * C28840 * C84 +
          ((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
           (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
              C28870 * C28857 * C28840 * C85 +
          (C238 * C87 + C239 * C77 + (C235 - C234) * C89 + (C237 - C236) * C78 +
           (C28881 * C219 - C214 * C97) * C91 +
           (C28881 * C224 - C214 * C107) * C79) *
              C28870 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4399 +
            (C28881 * C220 - C214 * C99) * C28784) *
               C4396 +
           ((C28881 * C760 - C214 * C630) * C4399 +
            (C28881 * C764 - C214 * C637) * C28784) *
               C4397 +
           ((C28881 * C2306 - C214 * C2212) * C4399 +
            (C28881 * C2309 - C214 * C2216) * C28784) *
               C4398) *
              C28857 * C28840 * C84 +
          (((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
           ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
           ((C214 * C2213 - C28881 * C2307) * C4399 +
            (C214 * C2218 - C28881 * C2310) * C28784) *
               C4398) *
              C28857 * C28840 * C85 +
          ((C238 * C4399 + C239 * C28784) * C4396 +
           ((C774 - C773) * C4399 + (C776 - C775) * C28784) * C4397 +
           ((C28881 * C2308 - C214 * C2214) * C4399 +
            (C28881 * C2311 - C214 * C2220) * C28784) *
               C4398) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                      C79 * C102 - C91 * C95) *
                         C151 +
                     (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 +
                      C79 * C284 - C91 * C279) *
                         C28870) *
                        C28881 * C28857 * C28840 * C84 +
                    ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 +
                      C91 * C96 - C79 * C104) *
                         C151 +
                     (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 +
                      C91 * C280 - C79 * C285) *
                         C28870) *
                        C28881 * C28857 * C28840 * C85 +
                    ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 +
                      C79 * C106 - C91 * C97) *
                         C151 +
                     (C77 * C284 - C87 * C279 + C78 * C285 - C89 * C280 +
                      C79 * C286 - C91 * C281) *
                         C28870) *
                        C28881 * C28857 * C28840 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C28784 * C98 - C4399 * C93) * C4439 +
                     (C28784 * C282 - C4399 * C277) * C4396 +
                     (C28784 * C636 - C4399 * C630) * C4440 +
                     (C28784 * C830 - C4399 * C826) * C4397 +
                     (C28784 * C2215 - C4399 * C2212) * C4441 +
                     (C28784 * C2353 - C4399 * C2350) * C4398) *
                        C28881 * C28857 * C28840 * C84 +
                    ((C4399 * C94 - C28784 * C100) * C4439 +
                     (C4399 * C278 - C28784 * C283) * C4396 +
                     (C4399 * C629 - C28784 * C634) * C4440 +
                     (C4399 * C827 - C28784 * C831) * C4397 +
                     (C4399 * C2213 - C28784 * C2217) * C4441 +
                     (C4399 * C2351 - C28784 * C2354) * C4398) *
                        C28881 * C28857 * C28840 * C85 +
                    ((C28784 * C102 - C4399 * C95) * C4439 +
                     (C28784 * C284 - C4399 * C279) * C4396 +
                     (C28784 * C632 - C4399 * C628) * C4440 +
                     (C28784 * C832 - C4399 * C828) * C4397 +
                     (C28784 * C2219 - C4399 * C2214) * C4441 +
                     (C28784 * C2355 - C4399 * C2352) * C4398) *
                        C28881 * C28857 * C28840 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C28881 * C28857 * C28840 * C84 -
          (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C28857 * C28840 *
              C85 +
          (C351 * C77 + C352 * C78 +
           (C151 * C156 - C325 * C97 - C151 * C281 + C28870 * C330) * C79) *
              C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
           C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
           C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
              C28784 * C28881 * C28857 * C28840 * C84 -
          (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
           C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
           C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
              C28784 * C28881 * C28857 * C28840 * C85 +
          (C4439 * C154 - C4556 * C95 - C4439 * C279 + C4396 * C328 +
           C4440 * C696 - C4557 * C628 - C4440 * C828 + C4397 * C884 +
           C4441 * C2264 - C4558 * C2214 - C4441 * C2352 + C4398 * C2396) *
              C28784 * C28881 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C151 +
            (C28881 * C390 - C214 * C277) * C28870) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 + C405 * C79) *
              C28857 * C28840 * C84 +
          (((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
           ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
           ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
              C28857 * C28840 * C85 +
          (C405 * C77 + ((C235 - C234) * C151 + (C402 - C401) * C28870) * C78 +
           ((C28881 * C219 - C214 * C97) * C151 +
            (C28881 * C394 - C214 * C281) * C28870) *
               C79) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C4439 +
           (C28881 * C390 - C214 * C277) * C4396 +
           (C28881 * C760 - C214 * C630) * C4440 +
           (C28881 * C952 - C214 * C826) * C4397 +
           (C28881 * C2306 - C214 * C2212) * C4441 +
           (C28881 * C2435 - C214 * C2350) * C4398) *
              C28784 * C28857 * C28840 * C84 +
          ((C227 - C226) * C4439 + (C397 - C396) * C4396 +
           (C769 - C770) * C4440 + (C957 - C958) * C4397 +
           (C214 * C2213 - C28881 * C2307) * C4441 +
           (C214 * C2351 - C28881 * C2436) * C4398) *
              C28784 * C28857 * C28840 * C85 +
          (C238 * C4439 + C403 * C4396 + (C774 - C773) * C4440 +
           (C960 - C959) * C4397 + (C28881 * C2308 - C214 * C2214) * C4441 +
           (C28881 * C2437 - C214 * C2352) * C4398) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezx[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                      C79 * C102 - C91 * C95) *
                         C214 +
                     (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 +
                      C79 * C450 - C91 * C445) *
                         C28881) *
                        C28870 * C28857 * C28840 * C84 +
                    ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 +
                      C91 * C96 - C79 * C104) *
                         C214 +
                     (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 +
                      C91 * C446 - C79 * C451) *
                         C28881) *
                        C28870 * C28857 * C28840 * C85 +
                    ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 +
                      C79 * C106 - C91 * C97) *
                         C214 +
                     (C77 * C450 - C87 * C445 + C78 * C451 - C89 * C446 +
                      C79 * C452 - C91 * C447) *
                         C28881) *
                        C28870 * C28857 * C28840 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C214 +
                      (C28784 * C448 - C4399 * C443) * C28881) *
                         C4396 +
                     ((C28784 * C636 - C4399 * C630) * C214 +
                      (C28784 * C1014 - C4399 * C1010) * C28881) *
                         C4397 +
                     ((C28784 * C2215 - C4399 * C2212) * C214 +
                      (C28784 * C2479 - C4399 * C2476) * C28881) *
                         C4398) *
                        C28857 * C28840 * C84 +
                    (((C4399 * C94 - C28784 * C100) * C214 +
                      (C4399 * C444 - C28784 * C449) * C28881) *
                         C4396 +
                     ((C4399 * C629 - C28784 * C634) * C214 +
                      (C4399 * C1011 - C28784 * C1015) * C28881) *
                         C4397 +
                     ((C4399 * C2213 - C28784 * C2217) * C214 +
                      (C4399 * C2477 - C28784 * C2480) * C28881) *
                         C4398) *
                        C28857 * C28840 * C85 +
                    (((C28784 * C102 - C4399 * C95) * C214 +
                      (C28784 * C450 - C4399 * C445) * C28881) *
                         C4396 +
                     ((C28784 * C632 - C4399 * C628) * C214 +
                      (C28784 * C1016 - C4399 * C1012) * C28881) *
                         C4397 +
                     ((C28784 * C2219 - C4399 * C2214) * C214 +
                      (C28784 * C2481 - C4399 * C2478) * C28881) *
                         C4398) *
                        C28857 * C28840 * C86)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C214 +
            (C28870 * C491 - C151 * C443) * C28881) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 + C506 * C79) *
              C28857 * C28840 * C84 +
          (((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
           ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
           ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
              C28857 * C28840 * C85 +
          (C506 * C77 + ((C172 - C171) * C214 + (C503 - C502) * C28881) * C78 +
           ((C28870 * C156 - C151 * C97) * C214 +
            (C28870 * C495 - C151 * C447) * C28881) *
               C79) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C214 +
           (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
            C4398 * C2520 - C4441 * C2476) *
               C28881) *
              C28784 * C28857 * C28840 * C84 +
          ((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
            C4441 * C2213 - C4398 * C2263) *
               C214 +
           (C4439 * C444 - C4396 * C492 + C4440 * C1011 - C4397 * C1069 +
            C4441 * C2477 - C4398 * C2521) *
               C28881) *
              C28784 * C28857 * C28840 * C85 +
          ((C4396 * C154 - C4439 * C95 + C4397 * C696 - C4440 * C628 +
            C4398 * C2264 - C4441 * C2214) *
               C214 +
           (C4396 * C493 - C4439 * C445 + C4397 * C1070 - C4440 * C1012 +
            C4398 * C2522 - C4441 * C2478) *
               C28881) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eezz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
               C77 +
           C572 * C78 + C573 * C79) *
              C28857 * C28840 * C84 -
          (C574 * C79 + C573 * C78 + C572 * C77) * C28857 * C28840 * C85 +
          (C573 * C77 + C574 * C78 +
           (C214 * C219 - C544 * C97 - C214 * C447 + C28881 * C549) * C28870 *
               C79) *
              C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
           (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) * C4397 +
           (C214 * C2306 - C544 * C2212 - C214 * C2476 + C28881 * C2561) *
               C4398) *
              C28784 * C28857 * C28840 * C84 -
          ((C214 * C2307 - C544 * C2213 - C214 * C2477 + C28881 * C2562) *
               C4398 +
           C1144 * C4397 + C569 * C4396) *
              C28784 * C28857 * C28840 * C85 +
          (C570 * C4396 + C1143 * C4397 +
           (C214 * C2308 - C544 * C2214 - C214 * C2478 + C28881 * C2563) *
               C4398) *
              C28784 * C28857 * C28840 * C86)) /
            (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C28857 * C624 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C28857 * C28948) *
              C626 +
          ((C87 * C634 - C88 * C629 - C87 * C635 + C77 * C641 + C89 * C632 -
            C90 * C628 - C89 * C633 + C78 * C640 + C91 * C638 - C92 * C631 -
            C91 * C639 + C79 * C643) *
               C28881 * C28870 * C28857 * C28948 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C28857 * C624 -
           ((C4399 * C4763 - C4400 * C4761 - C4399 * C4764 + C28784 * C4767) *
                C28881 * C4398 +
            C4799 * C4397 + C4798 * C4396) *
               C28857 * C28948) *
              C626 +
          ((C4800 * C4396 + C4801 * C4397 +
            (C4399 * C4765 - C4400 * C4762 - C4399 * C4766 + C28784 * C4768) *
                C28881 * C4398) *
               C28857 * C28948 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C28857 * C624 +
           ((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C28857 * C624 +
           ((C704 - C703) * C87 + (C706 - C705) * C77 + (C708 - C707) * C89 +
            (C710 - C709) * C78 + (C28870 * C697 - C151 * C631) * C91 +
            (C28870 * C701 - C151 * C639) * C79) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C28857 * C624 +
           ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C28857 * C28948) *
              C626 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C28857 * C624 +
           ((C4396 * C695 - C4439 * C629 + C4397 * C2263 - C4440 * C2213 +
             C4398 * C4852 - C4441 * C4762) *
                C4399 +
            (C4396 * C699 - C4439 * C635 + C4397 * C2266 - C4440 * C2218 +
             C4398 * C4854 - C4441 * C4766) *
                C28784) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C28857 * C624 +
           ((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C28857 * C624 +
           ((C770 - C769) * C87 + (C772 - C771) * C77 + (C774 - C773) * C89 +
            (C776 - C775) * C78 + (C28881 * C763 - C214 * C631) * C91 +
            (C28881 * C767 - C214 * C639) * C79) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            ((C4914 - C4915) * C4399 + (C4916 - C4917) * C28784) * C4398) *
               C28857 * C624 +
           (((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C214 * C4761 - C28881 * C4905) * C4399 +
             (C214 * C4764 - C28881 * C4907) * C28784) *
                C4398) *
               C28857 * C28948) *
              C626 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C28857 * C624 +
           (((C770 - C769) * C4399 + (C772 - C771) * C28784) * C4396 +
            ((C4919 - C4918) * C4399 + (C4921 - C4920) * C28784) * C4397 +
            ((C28881 * C4906 - C214 * C4762) * C4399 +
             (C28881 * C4908 - C214 * C4766) * C28784) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                       C79 * C102 - C91 * C95) *
                          C151 +
                      (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 +
                       C79 * C284 - C91 * C279) *
                          C28870) *
                         C28881 * C28857 * C624 +
                     ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 +
                       C91 * C628 - C79 * C632) *
                          C151 +
                      (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 +
                       C91 * C828 - C79 * C832) *
                          C28870) *
                         C28881 * C28857 * C28948) *
                        C626 +
                    (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 +
                       C91 * C96 - C79 * C104) *
                          C151 +
                      (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 +
                       C91 * C280 - C79 * C285) *
                          C28870) *
                         C28881 * C28857 * C624 +
                     ((C77 * C634 - C87 * C629 + C78 * C632 - C89 * C628 +
                       C79 * C638 - C91 * C631) *
                          C151 +
                      (C77 * C831 - C87 * C827 + C78 * C832 - C89 * C828 +
                       C79 * C833 - C91 * C829) *
                          C28870) *
                         C28881 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C4439 +
                      (C28784 * C282 - C4399 * C277) * C4396 +
                      (C4976 - C4977) * C4440 + (C4978 - C4979) * C4397 +
                      (C4980 - C4981) * C4441 + (C4982 - C4983) * C4398) *
                         C28881 * C28857 * C624 +
                     ((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
                      (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
                      (C4399 * C4761 - C28784 * C4763) * C4441 +
                      (C4399 * C4971 - C28784 * C4973) * C4398) *
                         C28881 * C28857 * C28948) *
                        C626 +
                    (((C4399 * C94 - C28784 * C100) * C4439 +
                      (C4399 * C278 - C28784 * C283) * C4396 +
                      (C4984 - C4985) * C4440 + (C4986 - C4987) * C4397 +
                      (C4988 - C4989) * C4441 + (C4990 - C4991) * C4398) *
                         C28881 * C28857 * C624 +
                     ((C4985 - C4984) * C4439 + (C4987 - C4986) * C4396 +
                      (C4989 - C4988) * C4440 + (C4991 - C4990) * C4397 +
                      (C28784 * C4765 - C4399 * C4762) * C4441 +
                      (C28784 * C4974 - C4399 * C4972) * C4398) *
                         C28881 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C28857 * C624 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C28857 * C28948) *
              C626 +
          ((C902 * C77 + C901 * C78 +
            (C151 * C697 - C325 * C631 - C151 * C829 + C28870 * C887) * C79) *
               C28881 * C28857 * C28948 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C28857 * C624 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C28857 * C28948) *
              C626 +
          ((C4439 * C695 - C4556 * C629 - C4439 * C827 + C4396 * C885 +
            C4440 * C2263 - C4557 * C2213 - C4440 * C2351 + C4397 * C2395 +
            C4441 * C4852 - C4558 * C4762 - C4441 * C4972 + C4398 * C5042) *
               C28784 * C28881 * C28857 * C28948 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C28881 * C215 - C214 * C93) * C151 +
                       (C28881 * C390 - C214 * C277) * C28870) *
                          C77 +
                      ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
                      C405 * C79) *
                         C28857 * C624 +
                     (((C214 * C630 - C28881 * C760) * C151 +
                       (C214 * C826 - C28881 * C952) * C28870) *
                          C77 +
                      ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
                      ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
                         C28857 * C28948) *
                        C626 +
                    ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
                      ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
                      ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
                         C28857 * C624 +
                     (((C770 - C769) * C151 + (C958 - C957) * C28870) * C77 +
                      ((C774 - C773) * C151 + (C960 - C959) * C28870) * C78 +
                      ((C28881 * C763 - C214 * C631) * C151 +
                       (C28881 * C955 - C214 * C829) * C28870) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C28881 * C215 - C214 * C93) * C4439 +
                      (C28881 * C390 - C214 * C277) * C4396 +
                      (C4910 - C4911) * C4440 + (C5096 - C5097) * C4397 +
                      (C4914 - C4915) * C4441 + (C5098 - C5099) * C4398) *
                         C28784 * C28857 * C624 +
                     ((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
                      (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
                      (C214 * C4761 - C28881 * C4905) * C4441 +
                      (C214 * C4971 - C28881 * C5093) * C4398) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
                      (C769 - C770) * C4440 + (C957 - C958) * C4397 +
                      (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
                         C28784 * C28857 * C624 +
                     ((C770 - C769) * C4439 + (C958 - C957) * C4396 +
                      (C4919 - C4918) * C4440 + (C5101 - C5100) * C4397 +
                      (C28881 * C4906 - C214 * C4762) * C4441 +
                      (C28881 * C5094 - C214 * C4972) * C4398) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C28857 * C624 +
           ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C214 +
            (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
             C91 * C1012 - C79 * C1016) *
                C28881) *
               C28870 * C28857 * C28948) *
              C626 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C28881) *
               C28870 * C28857 * C624 +
           ((C77 * C634 - C87 * C629 + C78 * C632 - C89 * C628 + C79 * C638 -
             C91 * C631) *
                C214 +
            (C77 * C1015 - C87 * C1011 + C78 * C1016 - C89 * C1012 +
             C79 * C1017 - C91 * C1013) *
                C28881) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            ((C4980 - C4981) * C214 + (C5158 - C5159) * C28881) * C4398) *
               C28857 * C624 +
           (((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C4399 * C4761 - C28784 * C4763) * C214 +
             (C4399 * C5151 - C28784 * C5153) * C28881) *
                C4398) *
               C28857 * C28948) *
              C626 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C28857 * C624 +
           (((C4985 - C4984) * C214 + (C5161 - C5160) * C28881) * C4396 +
            ((C4989 - C4988) * C214 + (C5163 - C5162) * C28881) * C4397 +
            ((C28784 * C4765 - C4399 * C4762) * C214 +
             (C28784 * C5154 - C4399 * C5152) * C28881) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C214 +
                       (C28870 * C491 - C151 * C443) * C28881) *
                          C77 +
                      ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
                      C506 * C79) *
                         C28857 * C624 +
                     (((C151 * C630 - C28870 * C694) * C214 +
                       (C151 * C1010 - C28870 * C1068) * C28881) *
                          C77 +
                      ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
                      ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
                         C28857 * C28948) *
                        C626 +
                    ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
                      ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
                      ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
                         C28857 * C624 +
                     (((C704 - C703) * C214 + (C1074 - C1073) * C28881) * C77 +
                      ((C708 - C707) * C214 + (C1076 - C1075) * C28881) * C78 +
                      ((C28870 * C697 - C151 * C631) * C214 +
                       (C28870 * C1071 - C151 * C1013) * C28881) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4396 * C152 - C4439 * C93 + C4397 * C694 -
                       C4440 * C630 + C4398 * C2262 - C4441 * C2212) *
                          C214 +
                      (C4396 * C491 - C4439 * C443 + C4397 * C1068 -
                       C4440 * C1010 + C4398 * C2520 - C4441 * C2476) *
                          C28881) *
                         C28784 * C28857 * C624 +
                     ((C4439 * C630 - C4396 * C694 + C4440 * C2212 -
                       C4397 * C2262 + C4441 * C4761 - C4398 * C4851) *
                          C214 +
                      (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 -
                       C4397 * C2520 + C4441 * C5151 - C4398 * C5213) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C626 +
                    (((C4439 * C94 - C4396 * C153 + C4440 * C629 -
                       C4397 * C695 + C4441 * C2213 - C4398 * C2263) *
                          C214 +
                      (C4439 * C444 - C4396 * C492 + C4440 * C1011 -
                       C4397 * C1069 + C4441 * C2477 - C4398 * C2521) *
                          C28881) *
                         C28784 * C28857 * C624 +
                     ((C4396 * C695 - C4439 * C629 + C4397 * C2263 -
                       C4440 * C2213 + C4398 * C4852 - C4441 * C4762) *
                          C214 +
                      (C4396 * C1069 - C4439 * C1011 + C4397 * C2521 -
                       C4440 * C2477 + C4398 * C5214 - C4441 * C5152) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C28857 * C624 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C28857 * C28948) *
              C626 +
          ((C1146 * C77 + C1145 * C78 +
            (C214 * C763 - C544 * C631 - C214 * C1013 + C28881 * C1129) *
                C28870 * C79) *
               C28857 * C28948 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C28857 * C624) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C28857 * C624 -
           ((C214 * C4905 - C544 * C4761 - C214 * C5151 + C28881 * C5265) *
                C4398 +
            C5287 * C4397 + C5286 * C4396) *
               C28784 * C28857 * C28948) *
              C626 +
          ((C1144 * C4396 + C5288 * C4397 +
            (C214 * C4906 - C544 * C4762 - C214 * C5152 + C28881 * C5266) *
                C4398) *
               C28784 * C28857 * C28948 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C28857 *
               C624) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C1196 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C28840 * C626 +
          ((C87 * C1204 - C88 * C1199 - C87 * C1205 + C77 * C1211 +
            C89 * C1202 - C90 * C1198 - C89 * C1203 + C78 * C1210 +
            C91 * C1208 - C92 * C1201 - C91 * C1209 + C79 * C1213) *
               C28881 * C28870 * C28950 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C1196 -
           ((C4399 * C5340 - C4400 * C5338 - C4399 * C5341 + C28784 * C5344) *
                C28881 * C4398 +
            (C4399 * C2617 - C4400 * C2614 - C4399 * C2618 + C28784 * C2623) *
                C28881 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C28840 * C626 +
          (((C4399 * C1204 - C4400 * C1199 - C4399 * C1205 + C28784 * C1211) *
                C28881 * C4396 +
            (C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C28881 * C4397 +
            (C4399 * C5342 - C4400 * C5339 - C4399 * C5343 + C28784 * C5345) *
                C28881 * C4398) *
               C28950 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C1196 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C1196 +
           ((C1274 - C1273) * C87 + (C1276 - C1275) * C77 +
            (C1278 - C1277) * C89 + (C1280 - C1279) * C78 +
            (C28870 * C1267 - C151 * C1201) * C91 +
            (C28870 * C1271 - C151 * C1209) * C79) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C28840 * C626 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C1196 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C4399 +
            (C4396 * C1269 - C4439 * C1205 + C4397 * C2680 - C4440 * C2620 +
             C4398 * C5399 - C4441 * C5343) *
                C28784) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C1196 +
           ((C1340 - C1339) * C87 + (C1342 - C1341) * C77 +
            (C1344 - C1343) * C89 + (C1346 - C1345) * C78 +
            (C28881 * C1333 - C214 * C1201) * C91 +
            (C28881 * C1337 - C214 * C1209) * C79) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            ((C4914 - C4915) * C4399 + (C4916 - C4917) * C28784) * C4398) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C214 * C2614 - C28881 * C2732) * C4399 +
             (C214 * C2618 - C28881 * C2735) * C28784) *
                C4397 +
            ((C214 * C5338 - C28881 * C5450) * C4399 +
             (C214 * C5341 - C28881 * C5452) * C28784) *
                C4398) *
               C28950) *
              C28840 * C626 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C1196 +
           (((C1340 - C1339) * C4399 + (C1342 - C1341) * C28784) * C4396 +
            ((C28881 * C2733 - C214 * C2615) * C4399 +
             (C28881 * C2736 - C214 * C2620) * C28784) *
                C4397 +
            ((C28881 * C5451 - C214 * C5339) * C4399 +
             (C28881 * C5453 - C214 * C5343) * C28784) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                       C79 * C102 - C91 * C95) *
                          C151 +
                      (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 +
                       C79 * C284 - C91 * C279) *
                          C28870) *
                         C28881 * C1196 +
                     ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
                       C91 * C1198 - C79 * C1202) *
                          C151 +
                      (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
                       C91 * C1398 - C79 * C1402) *
                          C28870) *
                         C28881 * C28950) *
                        C28840 * C626 +
                    (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 +
                       C91 * C96 - C79 * C104) *
                          C151 +
                      (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 +
                       C91 * C280 - C79 * C285) *
                          C28870) *
                         C28881 * C1196 +
                     ((C77 * C1204 - C87 * C1199 + C78 * C1202 - C89 * C1198 +
                       C79 * C1208 - C91 * C1201) *
                          C151 +
                      (C77 * C1401 - C87 * C1397 + C78 * C1402 - C89 * C1398 +
                       C79 * C1403 - C91 * C1399) *
                          C28870) *
                         C28881 * C28950) *
                        C28840 * C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C4439 +
                      (C28784 * C282 - C4399 * C277) * C4396 +
                      (C4976 - C4977) * C4440 + (C4978 - C4979) * C4397 +
                      (C4980 - C4981) * C4441 + (C4982 - C4983) * C4398) *
                         C28881 * C1196 +
                     ((C4399 * C1200 - C28784 * C1206) * C4439 +
                      (C4399 * C1396 - C28784 * C1400) * C4396 +
                      (C4399 * C2614 - C28784 * C2617) * C4440 +
                      (C4399 * C2788 - C28784 * C2791) * C4397 +
                      (C4399 * C5338 - C28784 * C5340) * C4441 +
                      (C4399 * C5504 - C28784 * C5506) * C4398) *
                         C28881 * C28950) *
                        C28840 * C626 +
                    (((C4399 * C94 - C28784 * C100) * C4439 +
                      (C4399 * C278 - C28784 * C283) * C4396 +
                      (C4984 - C4985) * C4440 + (C4986 - C4987) * C4397 +
                      (C4988 - C4989) * C4441 + (C4990 - C4991) * C4398) *
                         C28881 * C1196 +
                     ((C28784 * C1204 - C4399 * C1199) * C4439 +
                      (C28784 * C1401 - C4399 * C1397) * C4396 +
                      (C28784 * C2619 - C4399 * C2615) * C4440 +
                      (C28784 * C2792 - C4399 * C2789) * C4397 +
                      (C28784 * C5342 - C4399 * C5339) * C4441 +
                      (C28784 * C5507 - C4399 * C5505) * C4398) *
                         C28881 * C28950) *
                        C28840 * C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C1196 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C28840 * C626 +
          ((C1472 * C77 + C1471 * C78 +
            (C151 * C1267 - C325 * C1201 - C151 * C1399 + C28870 * C1457) *
                C79) *
               C28881 * C28950 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C1196 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C28840 * C626 +
          ((C4439 * C1265 - C4556 * C1199 - C4439 * C1397 + C4396 * C1455 +
            C4440 * C2677 - C4557 * C2615 - C4440 * C2789 + C4397 * C2845 +
            C4441 * C5397 - C4558 * C5339 - C4441 * C5505 + C4398 * C5559) *
               C28784 * C28881 * C28950 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C28840 * C626 +
          ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
               C1196 +
           (((C1340 - C1339) * C151 + (C1528 - C1527) * C28870) * C77 +
            ((C1344 - C1343) * C151 + (C1530 - C1529) * C28870) * C78 +
            ((C28881 * C1333 - C214 * C1201) * C151 +
             (C28881 * C1525 - C214 * C1399) * C28870) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + (C4914 - C4915) * C4441 +
            (C5098 - C5099) * C4398) *
               C28784 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 +
            (C214 * C2614 - C28881 * C2732) * C4440 +
            (C214 * C2788 - C28881 * C2897) * C4397 +
            (C214 * C5338 - C28881 * C5450) * C4441 +
            (C214 * C5504 - C28881 * C5610) * C4398) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
            (C769 - C770) * C4440 + (C957 - C958) * C4397 +
            (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
               C28784 * C1196 +
           ((C1340 - C1339) * C4439 + (C1528 - C1527) * C4396 +
            (C28881 * C2733 - C214 * C2615) * C4440 +
            (C28881 * C2898 - C214 * C2789) * C4397 +
            (C28881 * C5451 - C214 * C5339) * C4441 +
            (C28881 * C5611 - C214 * C5505) * C4398) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezx[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C1196 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C214 +
            (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
             C91 * C1582 - C79 * C1586) *
                C28881) *
               C28870 * C28950) *
              C28840 * C626 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C28881) *
               C28870 * C1196 +
           ((C77 * C1204 - C87 * C1199 + C78 * C1202 - C89 * C1198 +
             C79 * C1208 - C91 * C1201) *
                C214 +
            (C77 * C1585 - C87 * C1581 + C78 * C1586 - C89 * C1582 +
             C79 * C1587 - C91 * C1583) *
                C28881) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            ((C4980 - C4981) * C214 + (C5158 - C5159) * C28881) * C4398) *
               C1196 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C4399 * C2614 - C28784 * C2617) * C214 +
             (C4399 * C2950 - C28784 * C2953) * C28881) *
                C4397 +
            ((C4399 * C5338 - C28784 * C5340) * C214 +
             (C4399 * C5662 - C28784 * C5664) * C28881) *
                C4398) *
               C28950) *
              C28840 * C626 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C1196 +
           (((C28784 * C1204 - C4399 * C1199) * C214 +
             (C28784 * C1585 - C4399 * C1581) * C28881) *
                C4396 +
            ((C28784 * C2619 - C4399 * C2615) * C214 +
             (C28784 * C2954 - C4399 * C2951) * C28881) *
                C4397 +
            ((C28784 * C5342 - C4399 * C5339) * C214 +
             (C28784 * C5665 - C4399 * C5663) * C28881) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C1196 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C28840 * C626 +
          ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
               C1196 +
           (((C1274 - C1273) * C214 + (C1644 - C1643) * C28881) * C77 +
            ((C1278 - C1277) * C214 + (C1646 - C1645) * C28881) * C78 +
            ((C28870 * C1267 - C151 * C1201) * C214 +
             (C28870 * C1641 - C151 * C1583) * C28881) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C28840 * C626 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C214 +
            (C4439 * C444 - C4396 * C492 + C4440 * C1011 - C4397 * C1069 +
             C4441 * C2477 - C4398 * C2521) *
                C28881) *
               C28784 * C1196 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C214 +
            (C4396 * C1639 - C4439 * C1581 + C4397 * C3007 - C4440 * C2951 +
             C4398 * C5717 - C4441 * C5663) *
                C28881) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C1196 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C28840 * C626 +
          ((C1716 * C77 + C1715 * C78 +
            (C214 * C1333 - C544 * C1201 - C214 * C1583 + C28881 * C1699) *
                C28870 * C79) *
               C28950 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C1196 -
           ((C214 * C5450 - C544 * C5338 - C214 * C5662 + C28881 * C5768) *
                C4398 +
            (C214 * C2732 - C544 * C2614 - C214 * C2950 + C28881 * C3059) *
                C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C28840 * C626 +
          ((C1714 * C4396 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C4397 +
            (C214 * C5451 - C544 * C5339 - C214 * C5663 + C28881 * C5769) *
                C4398) *
               C28784 * C28950 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C1196) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C28857 * C1766 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C28857 * C28948) *
              C1768 +
          ((C87 * C634 - C88 * C629 - C87 * C635 + C77 * C641 + C89 * C632 -
            C90 * C628 - C89 * C633 + C78 * C640 + C91 * C638 - C92 * C631 -
            C91 * C639 + C79 * C643) *
               C28881 * C28870 * C28857 * C28948 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C28857 * C1766 -
           ((C4399 * C4763 - C4400 * C4761 - C4399 * C4764 + C28784 * C4767) *
                C28881 * C4398 +
            C4799 * C4397 + C4798 * C4396) *
               C28857 * C28948) *
              C1768 +
          ((C4800 * C4396 + C4801 * C4397 +
            (C4399 * C4765 - C4400 * C4762 - C4399 * C4766 + C28784 * C4768) *
                C28881 * C4398) *
               C28857 * C28948 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C28857 * C1766 +
           ((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C28857 * C1766 +
           ((C704 - C703) * C87 + (C706 - C705) * C77 + (C708 - C707) * C89 +
            (C710 - C709) * C78 + (C28870 * C697 - C151 * C631) * C91 +
            (C28870 * C701 - C151 * C639) * C79) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C28857 * C1766 +
           ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C28857 * C28948) *
              C1768 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C28857 * C1766 +
           ((C4396 * C695 - C4439 * C629 + C4397 * C2263 - C4440 * C2213 +
             C4398 * C4852 - C4441 * C4762) *
                C4399 +
            (C4396 * C699 - C4439 * C635 + C4397 * C2266 - C4440 * C2218 +
             C4398 * C4854 - C4441 * C4766) *
                C28784) *
               C28881 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C28857 * C1766 +
           ((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C28857 * C1766 +
           ((C770 - C769) * C87 + (C772 - C771) * C77 + (C774 - C773) * C89 +
            (C776 - C775) * C78 + (C28881 * C763 - C214 * C631) * C91 +
            (C28881 * C767 - C214 * C639) * C79) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            ((C4914 - C4915) * C4399 + (C4916 - C4917) * C28784) * C4398) *
               C28857 * C1766 +
           (((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C214 * C4761 - C28881 * C4905) * C4399 +
             (C214 * C4764 - C28881 * C4907) * C28784) *
                C4398) *
               C28857 * C28948) *
              C1768 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C28857 * C1766 +
           (((C770 - C769) * C4399 + (C772 - C771) * C28784) * C4396 +
            ((C4919 - C4918) * C4399 + (C4921 - C4920) * C28784) * C4397 +
            ((C28881 * C4906 - C214 * C4762) * C4399 +
             (C28881 * C4908 - C214 * C4766) * C28784) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 +
                       C79 * C102 - C91 * C95) *
                          C151 +
                      (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 +
                       C79 * C284 - C91 * C279) *
                          C28870) *
                         C28881 * C28857 * C1766 +
                     ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 +
                       C91 * C628 - C79 * C632) *
                          C151 +
                      (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 +
                       C91 * C828 - C79 * C832) *
                          C28870) *
                         C28881 * C28857 * C28948) *
                        C1768 +
                    (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 +
                       C91 * C96 - C79 * C104) *
                          C151 +
                      (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 +
                       C91 * C280 - C79 * C285) *
                          C28870) *
                         C28881 * C28857 * C1766 +
                     ((C77 * C634 - C87 * C629 + C78 * C632 - C89 * C628 +
                       C79 * C638 - C91 * C631) *
                          C151 +
                      (C77 * C831 - C87 * C827 + C78 * C832 - C89 * C828 +
                       C79 * C833 - C91 * C829) *
                          C28870) *
                         C28881 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C28784 * C98 - C4399 * C93) * C4439 +
                      (C28784 * C282 - C4399 * C277) * C4396 +
                      (C4976 - C4977) * C4440 + (C4978 - C4979) * C4397 +
                      (C4980 - C4981) * C4441 + (C4982 - C4983) * C4398) *
                         C28881 * C28857 * C1766 +
                     ((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
                      (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
                      (C4399 * C4761 - C28784 * C4763) * C4441 +
                      (C4399 * C4971 - C28784 * C4973) * C4398) *
                         C28881 * C28857 * C28948) *
                        C1768 +
                    (((C4399 * C94 - C28784 * C100) * C4439 +
                      (C4399 * C278 - C28784 * C283) * C4396 +
                      (C4984 - C4985) * C4440 + (C4986 - C4987) * C4397 +
                      (C4988 - C4989) * C4441 + (C4990 - C4991) * C4398) *
                         C28881 * C28857 * C1766 +
                     ((C4985 - C4984) * C4439 + (C4987 - C4986) * C4396 +
                      (C4989 - C4988) * C4440 + (C4991 - C4990) * C4397 +
                      (C28784 * C4765 - C4399 * C4762) * C4441 +
                      (C28784 * C4974 - C4399 * C4972) * C4398) *
                         C28881 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C28857 * C1766 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C28857 * C28948) *
              C1768 +
          ((C902 * C77 + C901 * C78 +
            (C151 * C697 - C325 * C631 - C151 * C829 + C28870 * C887) * C79) *
               C28881 * C28857 * C28948 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C28857 * C1766 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C28857 * C28948) *
              C1768 +
          ((C4439 * C695 - C4556 * C629 - C4439 * C827 + C4396 * C885 +
            C4440 * C2263 - C4557 * C2213 - C4440 * C2351 + C4397 * C2395 +
            C4441 * C4852 - C4558 * C4762 - C4441 * C4972 + C4398 * C5042) *
               C28784 * C28881 * C28857 * C28948 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C28881 * C215 - C214 * C93) * C151 +
                       (C28881 * C390 - C214 * C277) * C28870) *
                          C77 +
                      ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
                      C405 * C79) *
                         C28857 * C1766 +
                     (((C214 * C630 - C28881 * C760) * C151 +
                       (C214 * C826 - C28881 * C952) * C28870) *
                          C77 +
                      ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
                      ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
                         C28857 * C28948) *
                        C1768 +
                    ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
                      ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
                      ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
                         C28857 * C1766 +
                     (((C770 - C769) * C151 + (C958 - C957) * C28870) * C77 +
                      ((C774 - C773) * C151 + (C960 - C959) * C28870) * C78 +
                      ((C28881 * C763 - C214 * C631) * C151 +
                       (C28881 * C955 - C214 * C829) * C28870) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C28881 * C215 - C214 * C93) * C4439 +
                      (C28881 * C390 - C214 * C277) * C4396 +
                      (C4910 - C4911) * C4440 + (C5096 - C5097) * C4397 +
                      (C4914 - C4915) * C4441 + (C5098 - C5099) * C4398) *
                         C28784 * C28857 * C1766 +
                     ((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
                      (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
                      (C214 * C4761 - C28881 * C4905) * C4441 +
                      (C214 * C4971 - C28881 * C5093) * C4398) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
                      (C769 - C770) * C4440 + (C957 - C958) * C4397 +
                      (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
                         C28784 * C28857 * C1766 +
                     ((C770 - C769) * C4439 + (C958 - C957) * C4396 +
                      (C4919 - C4918) * C4440 + (C5101 - C5100) * C4397 +
                      (C28881 * C4906 - C214 * C4762) * C4441 +
                      (C28881 * C5094 - C214 * C4972) * C4398) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C28857 * C1766 +
           ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C214 +
            (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
             C91 * C1012 - C79 * C1016) *
                C28881) *
               C28870 * C28857 * C28948) *
              C1768 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C28881) *
               C28870 * C28857 * C1766 +
           ((C77 * C634 - C87 * C629 + C78 * C632 - C89 * C628 + C79 * C638 -
             C91 * C631) *
                C214 +
            (C77 * C1015 - C87 * C1011 + C78 * C1016 - C89 * C1012 +
             C79 * C1017 - C91 * C1013) *
                C28881) *
               C28870 * C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            ((C4980 - C4981) * C214 + (C5158 - C5159) * C28881) * C4398) *
               C28857 * C1766 +
           (((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C4399 * C4761 - C28784 * C4763) * C214 +
             (C4399 * C5151 - C28784 * C5153) * C28881) *
                C4398) *
               C28857 * C28948) *
              C1768 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C28857 * C1766 +
           (((C4985 - C4984) * C214 + (C5161 - C5160) * C28881) * C4396 +
            ((C4989 - C4988) * C214 + (C5163 - C5162) * C28881) * C4397 +
            ((C28784 * C4765 - C4399 * C4762) * C214 +
             (C28784 * C5154 - C4399 * C5152) * C28881) *
                C4398) *
               C28857 * C28948) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C28870 * C152 - C151 * C93) * C214 +
                       (C28870 * C491 - C151 * C443) * C28881) *
                          C77 +
                      ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
                      C506 * C79) *
                         C28857 * C1766 +
                     (((C151 * C630 - C28870 * C694) * C214 +
                       (C151 * C1010 - C28870 * C1068) * C28881) *
                          C77 +
                      ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
                      ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
                         C28857 * C28948) *
                        C1768 +
                    ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
                      ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
                      ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
                         C28857 * C1766 +
                     (((C704 - C703) * C214 + (C1074 - C1073) * C28881) * C77 +
                      ((C708 - C707) * C214 + (C1076 - C1075) * C28881) * C78 +
                      ((C28870 * C697 - C151 * C631) * C214 +
                       (C28870 * C1071 - C151 * C1013) * C28881) *
                          C79) *
                         C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4396 * C152 - C4439 * C93 + C4397 * C694 -
                       C4440 * C630 + C4398 * C2262 - C4441 * C2212) *
                          C214 +
                      (C4396 * C491 - C4439 * C443 + C4397 * C1068 -
                       C4440 * C1010 + C4398 * C2520 - C4441 * C2476) *
                          C28881) *
                         C28784 * C28857 * C1766 +
                     ((C4439 * C630 - C4396 * C694 + C4440 * C2212 -
                       C4397 * C2262 + C4441 * C4761 - C4398 * C4851) *
                          C214 +
                      (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 -
                       C4397 * C2520 + C4441 * C5151 - C4398 * C5213) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C1768 +
                    (((C4439 * C94 - C4396 * C153 + C4440 * C629 -
                       C4397 * C695 + C4441 * C2213 - C4398 * C2263) *
                          C214 +
                      (C4439 * C444 - C4396 * C492 + C4440 * C1011 -
                       C4397 * C1069 + C4441 * C2477 - C4398 * C2521) *
                          C28881) *
                         C28784 * C28857 * C1766 +
                     ((C4396 * C695 - C4439 * C629 + C4397 * C2263 -
                       C4440 * C2213 + C4398 * C4852 - C4441 * C4762) *
                          C214 +
                      (C4396 * C1069 - C4439 * C1011 + C4397 * C2521 -
                       C4440 * C2477 + C4398 * C5214 - C4441 * C5152) *
                          C28881) *
                         C28784 * C28857 * C28948) *
                        C28946)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C28857 * C1766 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C28857 * C28948) *
              C1768 +
          ((C1146 * C77 + C1145 * C78 +
            (C214 * C763 - C544 * C631 - C214 * C1013 + C28881 * C1129) *
                C28870 * C79) *
               C28857 * C28948 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C28857 * C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C28857 * C1766 -
           ((C214 * C4905 - C544 * C4761 - C214 * C5151 + C28881 * C5265) *
                C4398 +
            C5287 * C4397 + C5286 * C4396) *
               C28784 * C28857 * C28948) *
              C1768 +
          ((C1144 * C4396 + C5288 * C4397 +
            (C214 * C4906 - C544 * C4762 - C214 * C5152 + C28881 * C5266) *
                C4398) *
               C28784 * C28857 * C28948 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C28857 *
               C1766) *
              C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C28881 * C28870 * C28857 * C2208 -
          (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
           C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
           C87 * C637 + C77 * C642) *
              C28881 * C28870 * C28857 * C2209 +
          (C87 * C2215 - C88 * C2212 - C87 * C2216 + C77 * C2221 + C89 * C2217 -
           C90 * C2213 - C89 * C2218 + C78 * C2222 + C91 * C2219 - C92 * C2214 -
           C91 * C2220 + C79 * C2223) *
              C28881 * C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
               C4396 +
           C4798 * C4397 + C4799 * C4398) *
              C28857 * C2208 -
          (C6270 * C4398 + C4799 * C4397 + C4798 * C4396) * C28857 * C2209 +
          (C4799 * C4396 + C6270 * C4397 +
           (C4399 * C6259 - C4400 * C6258 - C4399 * C6260 + C28784 * C6261) *
               C28881 * C4398) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28870 * C152 - C151 * C93) * C87 +
           (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C28881 * C28857 * C2208 +
          ((C151 * C630 - C28870 * C694) * C87 +
           (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
           (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
              C28881 * C28857 * C2209 +
          ((C28870 * C2262 - C151 * C2212) * C87 +
           (C28870 * C2265 - C151 * C2216) * C77 +
           (C28870 * C2263 - C151 * C2213) * C89 +
           (C28870 * C2266 - C151 * C2218) * C78 +
           (C28870 * C2264 - C151 * C2214) * C91 +
           (C28870 * C2267 - C151 * C2220) * C79) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C4399 +
           (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
            C4398 * C2265 - C4441 * C2216) *
               C28784) *
              C28881 * C28857 * C2208 +
          ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
            C4441 * C4761 - C4398 * C4851) *
               C4399 +
           (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
            C4441 * C4764 - C4398 * C4853) *
               C28784) *
              C28881 * C28857 * C2209 +
          ((C4396 * C2262 - C4439 * C2212 + C4397 * C4851 - C4440 * C4761 +
            C4398 * C6308 - C4441 * C6258) *
               C4399 +
           (C4396 * C2265 - C4439 * C2216 + C4397 * C4853 - C4440 * C4764 +
            C4398 * C6309 - C4441 * C6260) *
               C28784) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C87 +
           (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C28870 * C28857 * C2208 +
          ((C214 * C630 - C28881 * C760) * C87 +
           (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
           (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
              C28870 * C28857 * C2209 +
          ((C28881 * C2306 - C214 * C2212) * C87 +
           (C28881 * C2309 - C214 * C2216) * C77 +
           (C28881 * C2307 - C214 * C2213) * C89 +
           (C28881 * C2310 - C214 * C2218) * C78 +
           (C28881 * C2308 - C214 * C2214) * C91 +
           (C28881 * C2311 - C214 * C2220) * C79) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4399 +
            (C28881 * C220 - C214 * C99) * C28784) *
               C4396 +
           ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
           C6359 * C4398) *
              C28857 * C2208 +
          (((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
           ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
           ((C6353 - C6354) * C4399 + (C6355 - C6356) * C28784) * C4398) *
              C28857 * C2209 +
          (C6359 * C4396 +
           ((C6354 - C6353) * C4399 + (C6356 - C6355) * C28784) * C4397 +
           ((C28881 * C6348 - C214 * C6258) * C4399 +
            (C28881 * C6349 - C214 * C6260) * C28784) *
               C4398) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C28870) *
              C28881 * C28857 * C2208 +
          ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
            C79 * C632) *
               C151 +
           (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 + C91 * C828 -
            C79 * C832) *
               C28870) *
              C28881 * C28857 * C2209 +
          ((C77 * C2215 - C87 * C2212 + C78 * C2217 - C89 * C2213 +
            C79 * C2219 - C91 * C2214) *
               C151 +
           (C77 * C2353 - C87 * C2350 + C78 * C2354 - C89 * C2351 +
            C79 * C2355 - C91 * C2352) *
               C28870) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C4439 +
           (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
           (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
              C28881 * C28857 * C2208 +
          ((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
           (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
           (C6402 - C6403) * C4441 + (C6404 - C6405) * C4398) *
              C28881 * C28857 * C2209 +
          (C6400 * C4439 + C6401 * C4396 + (C6403 - C6402) * C4440 +
           (C6405 - C6404) * C4397 + (C28784 * C6259 - C4399 * C6258) * C4441 +
           (C28784 * C6398 - C4399 * C6397) * C4398) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C28881 * C28857 * C2208 -
          (C901 * C79 + C902 * C78 +
           (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
              C28881 * C28857 * C2209 +
          ((C151 * C2262 - C325 * C2212 - C151 * C2350 + C28870 * C2394) * C77 +
           (C151 * C2263 - C325 * C2213 - C151 * C2351 + C28870 * C2395) * C78 +
           (C151 * C2264 - C325 * C2214 - C151 * C2352 + C28870 * C2396) *
               C79) *
              C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
           C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
           C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
              C28784 * C28881 * C28857 * C2208 -
          (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
           C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
           C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
              C28784 * C28881 * C28857 * C2209 +
          (C4439 * C2262 - C4556 * C2212 - C4439 * C2350 + C4396 * C2394 +
           C4440 * C4851 - C4557 * C4761 - C4440 * C4971 + C4397 * C5041 +
           C4441 * C6308 - C4558 * C6258 - C4441 * C6397 + C4398 * C6443) *
              C28784 * C28881 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C151 +
            (C28881 * C390 - C214 * C277) * C28870) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 + C405 * C79) *
              C28857 * C2208 +
          (((C214 * C630 - C28881 * C760) * C151 +
            (C214 * C826 - C28881 * C952) * C28870) *
               C77 +
           ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
           ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
              C28857 * C2209 +
          (((C28881 * C2306 - C214 * C2212) * C151 +
            (C28881 * C2435 - C214 * C2350) * C28870) *
               C77 +
           ((C28881 * C2307 - C214 * C2213) * C151 +
            (C28881 * C2436 - C214 * C2351) * C28870) *
               C78 +
           ((C28881 * C2308 - C214 * C2214) * C151 +
            (C28881 * C2437 - C214 * C2352) * C28870) *
               C79) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C4439 +
           (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
           (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
              C28784 * C28857 * C2208 +
          ((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
           (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
           (C6353 - C6354) * C4441 + (C6485 - C6486) * C4398) *
              C28784 * C28857 * C2209 +
          (C6351 * C4439 + C6484 * C4396 + (C6354 - C6353) * C4440 +
           (C6486 - C6485) * C4397 + (C28881 * C6348 - C214 * C6258) * C4441 +
           (C28881 * C6482 - C214 * C6397) * C4398) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C28881) *
              C28870 * C28857 * C2208 +
          ((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
            C79 * C632) *
               C214 +
           (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
            C91 * C1012 - C79 * C1016) *
               C28881) *
              C28870 * C28857 * C2209 +
          ((C77 * C2215 - C87 * C2212 + C78 * C2217 - C89 * C2213 +
            C79 * C2219 - C91 * C2214) *
               C214 +
           (C77 * C2479 - C87 * C2476 + C78 * C2480 - C89 * C2477 +
            C79 * C2481 - C91 * C2478) *
               C28881) *
              C28870 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C214 +
            (C28784 * C448 - C4399 * C443) * C28881) *
               C4396 +
           ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
           C6532 * C4398) *
              C28857 * C2208 +
          (((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
           ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
           ((C6402 - C6403) * C214 + (C6529 - C6530) * C28881) * C4398) *
              C28857 * C2209 +
          (C6532 * C4396 +
           ((C6403 - C6402) * C214 + (C6530 - C6529) * C28881) * C4397 +
           ((C28784 * C6259 - C4399 * C6258) * C214 +
            (C28784 * C6525 - C4399 * C6524) * C28881) *
               C4398) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C214 +
            (C28870 * C491 - C151 * C443) * C28881) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 + C506 * C79) *
              C28857 * C2208 +
          (((C151 * C630 - C28870 * C694) * C214 +
            (C151 * C1010 - C28870 * C1068) * C28881) *
               C77 +
           ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
           ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
              C28857 * C2209 +
          (((C28870 * C2262 - C151 * C2212) * C214 +
            (C28870 * C2520 - C151 * C2476) * C28881) *
               C77 +
           ((C28870 * C2263 - C151 * C2213) * C214 +
            (C28870 * C2521 - C151 * C2477) * C28881) *
               C78 +
           ((C28870 * C2264 - C151 * C2214) * C214 +
            (C28870 * C2522 - C151 * C2478) * C28881) *
               C79) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C214 +
           (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
            C4398 * C2520 - C4441 * C2476) *
               C28881) *
              C28784 * C28857 * C2208 +
          ((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
            C4441 * C4761 - C4398 * C4851) *
               C214 +
           (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 - C4397 * C2520 +
            C4441 * C5151 - C4398 * C5213) *
               C28881) *
              C28784 * C28857 * C2209 +
          ((C4396 * C2262 - C4439 * C2212 + C4397 * C4851 - C4440 * C4761 +
            C4398 * C6308 - C4441 * C6258) *
               C214 +
           (C4396 * C2520 - C4439 * C2476 + C4397 * C5213 - C4440 * C5151 +
            C4398 * C6570 - C4441 * C6524) *
               C28881) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
               C77 +
           C572 * C78 + C573 * C79) *
              C28857 * C2208 -
          (C1145 * C79 + C1146 * C78 +
           (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
               C28870 * C77) *
              C28857 * C2209 +
          ((C214 * C2306 - C544 * C2212 - C214 * C2476 + C28881 * C2561) *
               C28870 * C77 +
           (C214 * C2307 - C544 * C2213 - C214 * C2477 + C28881 * C2562) *
               C28870 * C78 +
           (C214 * C2308 - C544 * C2214 - C214 * C2478 + C28881 * C2563) *
               C28870 * C79) *
              C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
           C5286 * C4397 + C5287 * C4398) *
              C28784 * C28857 * C2208 -
          (C6617 * C4398 + C5287 * C4397 + C5286 * C4396) * C28784 * C28857 *
              C2209 +
          (C5287 * C4396 + C6617 * C4397 +
           (C214 * C6348 - C544 * C6258 - C214 * C6524 + C28881 * C6609) *
               C4398) *
              C28784 * C28857 * C2210) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C1196 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C1766 +
          ((C87 * C2617 - C88 * C2614 - C87 * C2618 + C77 * C2623 +
            C89 * C2619 - C90 * C2615 - C89 * C2620 + C78 * C2624 +
            C91 * C2621 - C92 * C2616 - C91 * C2622 + C79 * C2625) *
               C28881 * C28870 * C28950 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C1196 -
           (C6686 * C4398 + C6687 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C1766 +
          ((C6687 * C4396 + C6686 * C4397 +
            (C4399 * C6668 - C4400 * C6667 - C4399 * C6669 + C28784 * C6670) *
                C28881 * C4398) *
               C28950 -
           (C6270 * C4398 + C4799 * C4397 + C4798 * C4396) * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C1196 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C1766 +
          (((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C1196 +
           ((C28870 * C2676 - C151 * C2614) * C87 +
            (C28870 * C2679 - C151 * C2618) * C77 +
            (C28870 * C2677 - C151 * C2615) * C89 +
            (C28870 * C2680 - C151 * C2620) * C78 +
            (C28870 * C2678 - C151 * C2616) * C91 +
            (C28870 * C2681 - C151 * C2622) * C79) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C1766 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C1196 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C4399 +
            (C4396 * C2679 - C4439 * C2618 + C4397 * C5398 - C4440 * C5341 +
             C4398 * C6738 - C4441 * C6669) *
                C28784) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C1766 +
          (((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C1196 +
           ((C28881 * C2732 - C214 * C2614) * C87 +
            (C28881 * C2735 - C214 * C2618) * C77 +
            (C28881 * C2733 - C214 * C2615) * C89 +
            (C28881 * C2736 - C214 * C2620) * C78 +
            (C28881 * C2734 - C214 * C2616) * C91 +
            (C28881 * C2737 - C214 * C2622) * C79) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            C6359 * C4398) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
            ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
               C28950) *
              C1766 +
          ((((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C6353 - C6354) * C4399 + (C6355 - C6356) * C28784) * C4398) *
               C1196 +
           (((C6793 - C6792) * C4399 + (C6795 - C6794) * C28784) * C4396 +
            ((C6797 - C6796) * C4399 + (C6799 - C6798) * C28784) * C4397 +
            ((C28881 * C6789 - C214 * C6667) * C4399 +
             (C28881 * C6790 - C214 * C6669) * C28784) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C28870) *
               C28881 * C1196 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C151 +
            (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
             C91 * C1398 - C79 * C1402) *
                C28870) *
               C28881 * C28950) *
              C1766 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C151 +
            (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 + C91 * C828 -
             C79 * C832) *
                C28870) *
               C28881 * C1196 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C151 +
            (C77 * C2791 - C87 * C2788 + C78 * C2792 - C89 * C2789 +
             C79 * C2793 - C91 * C2790) *
                C28870) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
               C28881 * C1196 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
            (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
            (C6858 - C6859) * C4398) *
               C28881 * C28950) *
              C1766 +
          (((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
            (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
            (C6402 - C6403) * C4441 + (C6404 - C6405) * C4398) *
               C28881 * C1196 +
           ((C6853 - C6852) * C4439 + (C6855 - C6854) * C4396 +
            (C6857 - C6856) * C4440 + (C6859 - C6858) * C4397 +
            (C28784 * C6668 - C4399 * C6667) * C4441 +
            (C28784 * C6850 - C4399 * C6849) * C4398) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C1196 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C1766 +
          (((C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
                C77 +
            (C151 * C2677 - C325 * C2615 - C151 * C2789 + C28870 * C2845) *
                C78 +
            (C151 * C2678 - C325 * C2616 - C151 * C2790 + C28870 * C2846) *
                C79) *
               C28881 * C28950 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C1196 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C1766 +
          ((C4439 * C2676 - C4556 * C2614 - C4439 * C2788 + C4396 * C2844 +
            C4440 * C5396 - C4557 * C5338 - C4440 * C5504 + C4397 * C5558 +
            C4441 * C6737 - C4558 * C6667 - C4441 * C6849 + C4398 * C6909) *
               C28784 * C28881 * C28950 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C1196 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C1766 +
          ((((C214 * C630 - C28881 * C760) * C151 +
             (C214 * C826 - C28881 * C952) * C28870) *
                C77 +
            ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
            ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
               C1196 +
           (((C28881 * C2732 - C214 * C2614) * C151 +
             (C28881 * C2897 - C214 * C2788) * C28870) *
                C77 +
            ((C28881 * C2733 - C214 * C2615) * C151 +
             (C28881 * C2898 - C214 * C2789) * C28870) *
                C78 +
            ((C28881 * C2734 - C214 * C2616) * C151 +
             (C28881 * C2899 - C214 * C2790) * C28870) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
               C28784 * C1196 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
            (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
            (C6964 - C6965) * C4398) *
               C28784 * C28950) *
              C1766 +
          (((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
            (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
            (C6353 - C6354) * C4441 + (C6485 - C6486) * C4398) *
               C28784 * C1196 +
           ((C6793 - C6792) * C4439 + (C6963 - C6962) * C4396 +
            (C6797 - C6796) * C4440 + (C6965 - C6964) * C4397 +
            (C28881 * C6789 - C214 * C6667) * C4441 +
            (C28881 * C6960 - C214 * C6849) * C4398) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C1196 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C214 +
            (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
             C91 * C1582 - C79 * C1586) *
                C28881) *
               C28870 * C28950) *
              C1766 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C214 +
            (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
             C91 * C1012 - C79 * C1016) *
                C28881) *
               C28870 * C1196 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C214 +
            (C77 * C2953 - C87 * C2950 + C78 * C2954 - C89 * C2951 +
             C79 * C2955 - C91 * C2952) *
                C28881) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            C6532 * C4398) *
               C1196 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
            ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
               C28950) *
              C1766 +
          ((((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C6402 - C6403) * C214 + (C6529 - C6530) * C28881) * C4398) *
               C1196 +
           (((C6853 - C6852) * C214 + (C7019 - C7018) * C28881) * C4396 +
            ((C6857 - C6856) * C214 + (C7021 - C7020) * C28881) * C4397 +
            ((C28784 * C6668 - C4399 * C6667) * C214 +
             (C28784 * C7016 - C4399 * C7015) * C28881) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C1196 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C1766 +
          ((((C151 * C630 - C28870 * C694) * C214 +
             (C151 * C1010 - C28870 * C1068) * C28881) *
                C77 +
            ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
            ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
               C1196 +
           (((C28870 * C2676 - C151 * C2614) * C214 +
             (C28870 * C3006 - C151 * C2950) * C28881) *
                C77 +
            ((C28870 * C2677 - C151 * C2615) * C214 +
             (C28870 * C3007 - C151 * C2951) * C28881) *
                C78 +
            ((C28870 * C2678 - C151 * C2616) * C214 +
             (C28870 * C3008 - C151 * C2952) * C28881) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C1196 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C1766 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C214 +
            (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 - C4397 * C2520 +
             C4441 * C5151 - C4398 * C5213) *
                C28881) *
               C28784 * C1196 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C214 +
            (C4396 * C3006 - C4439 * C2950 + C4397 * C5716 - C4440 * C5662 +
             C4398 * C7071 - C4441 * C7015) *
                C28881) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C1196 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C1766 +
          (((C214 * C2732 - C544 * C2614 - C214 * C2950 + C28881 * C3059) *
                C28870 * C77 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C28870 * C78 +
            (C214 * C2734 - C544 * C2616 - C214 * C2952 + C28881 * C3061) *
                C28870 * C79) *
               C28950 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C1196 -
           (C7136 * C4398 + C7137 * C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C1766 +
          ((C7137 * C4396 + C7136 * C4397 +
            (C214 * C6789 - C544 * C6667 - C214 * C7015 + C28881 * C7122) *
                C4398) *
               C28784 * C28950 -
           (C6617 * C4398 + C5287 * C4397 + C5286 * C4396) * C28784 * C1196) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C3112 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C28840 * C1768 +
          ((C87 * C1204 - C88 * C1199 - C87 * C1205 + C77 * C1211 +
            C89 * C1202 - C90 * C1198 - C89 * C1203 + C78 * C1210 +
            C91 * C1208 - C92 * C1201 - C91 * C1209 + C79 * C1213) *
               C28881 * C28870 * C28950 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C28881 * C28870 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C3112 -
           (C6686 * C4398 + C6687 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C28840 * C1768 +
          (((C4399 * C1204 - C4400 * C1199 - C4399 * C1205 + C28784 * C1211) *
                C28881 * C4396 +
            (C4399 * C2619 - C4400 * C2615 - C4399 * C2620 + C28784 * C2624) *
                C28881 * C4397 +
            (C4399 * C5342 - C4400 * C5339 - C4399 * C5343 + C28784 * C5345) *
                C28881 * C4398) *
               C28950 -
           (C4801 * C4398 + C4800 * C4397 +
            (C4399 * C100 - C4400 * C94 - C4399 * C101 + C28784 * C109) *
                C28881 * C4396) *
               C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C3112 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C28881 * C3112 +
           ((C1274 - C1273) * C87 + (C1276 - C1275) * C77 +
            (C1278 - C1277) * C89 + (C1280 - C1279) * C78 +
            (C28870 * C1267 - C151 * C1201) * C91 +
            (C28870 * C1271 - C151 * C1209) * C79) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C4399 +
            (C4439 * C101 - C4396 * C158 + C4440 * C635 - C4397 * C699 +
             C4441 * C2218 - C4398 * C2266) *
                C28784) *
               C28881 * C3112 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C4399 +
            (C4396 * C1269 - C4439 * C1205 + C4397 * C2680 - C4440 * C2620 +
             C4398 * C5399 - C4441 * C5343) *
                C28784) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C28870 * C3112 +
           ((C1340 - C1339) * C87 + (C1342 - C1341) * C77 +
            (C1344 - C1343) * C89 + (C1346 - C1345) * C78 +
            (C28881 * C1333 - C214 * C1201) * C91 +
            (C28881 * C1337 - C214 * C1209) * C79) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            C6359 * C4398) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
            ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
               C28950) *
              C28840 * C1768 +
          ((((C227 - C226) * C4399 + (C229 - C228) * C28784) * C4396 +
            ((C769 - C770) * C4399 + (C771 - C772) * C28784) * C4397 +
            ((C4918 - C4919) * C4399 + (C4920 - C4921) * C28784) * C4398) *
               C3112 +
           (((C1340 - C1339) * C4399 + (C1342 - C1341) * C28784) * C4396 +
            ((C28881 * C2733 - C214 * C2615) * C4399 +
             (C28881 * C2736 - C214 * C2620) * C28784) *
                C4397 +
            ((C28881 * C5451 - C214 * C5339) * C4399 +
             (C28881 * C5453 - C214 * C5343) * C28784) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C28870) *
               C28881 * C3112 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C151 +
            (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
             C91 * C1398 - C79 * C1402) *
                C28870) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C151 +
            (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
             C79 * C285) *
                C28870) *
               C28881 * C3112 +
           ((C77 * C1204 - C87 * C1199 + C78 * C1202 - C89 * C1198 +
             C79 * C1208 - C91 * C1201) *
                C151 +
            (C77 * C1401 - C87 * C1397 + C78 * C1402 - C89 * C1398 +
             C79 * C1403 - C91 * C1399) *
                C28870) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
               C28881 * C3112 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
            (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
            (C6858 - C6859) * C4398) *
               C28881 * C28950) *
              C28840 * C1768 +
          (((C4399 * C94 - C28784 * C100) * C4439 +
            (C4399 * C278 - C28784 * C283) * C4396 + (C4984 - C4985) * C4440 +
            (C4986 - C4987) * C4397 + (C4988 - C4989) * C4441 +
            (C4990 - C4991) * C4398) *
               C28881 * C3112 +
           ((C28784 * C1204 - C4399 * C1199) * C4439 +
            (C28784 * C1401 - C4399 * C1397) * C4396 +
            (C28784 * C2619 - C4399 * C2615) * C4440 +
            (C28784 * C2792 - C4399 * C2789) * C4397 +
            (C28784 * C5342 - C4399 * C5339) * C4441 +
            (C28784 * C5507 - C4399 * C5505) * C4398) *
               C28881 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C3112 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C28840 * C1768 +
          ((C1472 * C77 + C1471 * C78 +
            (C151 * C1267 - C325 * C1201 - C151 * C1399 + C28870 * C1457) *
                C79) *
               C28881 * C28950 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C28881 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C3112 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C28840 * C1768 +
          ((C4439 * C1265 - C4556 * C1199 - C4439 * C1397 + C4396 * C1455 +
            C4440 * C2677 - C4557 * C2615 - C4440 * C2789 + C4397 * C2845 +
            C4441 * C5397 - C4558 * C5339 - C4441 * C5505 + C4398 * C5559) *
               C28784 * C28881 * C28950 -
           (C4441 * C2263 - C4558 * C2213 - C4441 * C2351 + C4398 * C2395 +
            C4440 * C695 - C4557 * C629 - C4440 * C827 + C4397 * C885 +
            C4439 * C153 - C4556 * C94 - C4439 * C278 + C4396 * C327) *
               C28784 * C28881 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C28840 * C1768 +
          ((((C227 - C226) * C151 + (C397 - C396) * C28870) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C28870) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C28870) * C79) *
               C3112 +
           (((C1340 - C1339) * C151 + (C1528 - C1527) * C28870) * C77 +
            ((C1344 - C1343) * C151 + (C1530 - C1529) * C28870) * C78 +
            ((C28881 * C1333 - C214 * C1201) * C151 +
             (C28881 * C1525 - C214 * C1399) * C28870) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
               C28784 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
            (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
            (C6964 - C6965) * C4398) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C227 - C226) * C4439 + (C397 - C396) * C4396 +
            (C769 - C770) * C4440 + (C957 - C958) * C4397 +
            (C4918 - C4919) * C4441 + (C5100 - C5101) * C4398) *
               C28784 * C3112 +
           ((C1340 - C1339) * C4439 + (C1528 - C1527) * C4396 +
            (C28881 * C2733 - C214 * C2615) * C4440 +
            (C28881 * C2898 - C214 * C2789) * C4397 +
            (C28881 * C5451 - C214 * C5339) * C4441 +
            (C28881 * C5611 - C214 * C5505) * C4398) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C3112 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C214 +
            (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
             C91 * C1582 - C79 * C1586) *
                C28881) *
               C28870 * C28950) *
              C28840 * C1768 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C28881) *
               C28870 * C3112 +
           ((C77 * C1204 - C87 * C1199 + C78 * C1202 - C89 * C1198 +
             C79 * C1208 - C91 * C1201) *
                C214 +
            (C77 * C1585 - C87 * C1581 + C78 * C1586 - C89 * C1582 +
             C79 * C1587 - C91 * C1583) *
                C28881) *
               C28870 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            C6532 * C4398) *
               C3112 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
            ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
               C28950) *
              C28840 * C1768 +
          ((((C4399 * C94 - C28784 * C100) * C214 +
             (C4399 * C444 - C28784 * C449) * C28881) *
                C4396 +
            ((C4984 - C4985) * C214 + (C5160 - C5161) * C28881) * C4397 +
            ((C4988 - C4989) * C214 + (C5162 - C5163) * C28881) * C4398) *
               C3112 +
           (((C28784 * C1204 - C4399 * C1199) * C214 +
             (C28784 * C1585 - C4399 * C1581) * C28881) *
                C4396 +
            ((C28784 * C2619 - C4399 * C2615) * C214 +
             (C28784 * C2954 - C4399 * C2951) * C28881) *
                C4397 +
            ((C28784 * C5342 - C4399 * C5339) * C214 +
             (C28784 * C5665 - C4399 * C5663) * C28881) *
                C4398) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C3112 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C28840 * C1768 +
          ((((C164 - C163) * C214 + (C498 - C497) * C28881) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C28881) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C28881) * C79) *
               C3112 +
           (((C1274 - C1273) * C214 + (C1644 - C1643) * C28881) * C77 +
            ((C1278 - C1277) * C214 + (C1646 - C1645) * C28881) * C78 +
            ((C28870 * C1267 - C151 * C1201) * C214 +
             (C28870 * C1641 - C151 * C1583) * C28881) *
                C79) *
               C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C28840 * C1768 +
          (((C4439 * C94 - C4396 * C153 + C4440 * C629 - C4397 * C695 +
             C4441 * C2213 - C4398 * C2263) *
                C214 +
            (C4439 * C444 - C4396 * C492 + C4440 * C1011 - C4397 * C1069 +
             C4441 * C2477 - C4398 * C2521) *
                C28881) *
               C28784 * C3112 +
           ((C4396 * C1265 - C4439 * C1199 + C4397 * C2677 - C4440 * C2615 +
             C4398 * C5397 - C4441 * C5339) *
                C214 +
            (C4396 * C1639 - C4439 * C1581 + C4397 * C3007 - C4440 * C2951 +
             C4398 * C5717 - C4441 * C5663) *
                C28881) *
               C28784 * C28950) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eezz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C3112 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C28840 * C1768 +
          ((C1716 * C77 + C1715 * C78 +
            (C214 * C1333 - C544 * C1201 - C214 * C1583 + C28881 * C1699) *
                C28870 * C79) *
               C28950 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C3112 -
           (C7136 * C4398 + C7137 * C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C28840 * C1768 +
          ((C1714 * C4396 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C4397 +
            (C214 * C5451 - C544 * C5339 - C214 * C5663 + C28881 * C5769) *
                C4398) *
               C28784 * C28950 -
           (C5288 * C4398 + C1144 * C4397 + C569 * C4396) * C28784 * C3112) *
              C28840 * C28946)) /
            (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C28881 * C28870 * C3112 -
           (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 +
            C89 * C1204 - C90 * C1199 - C89 * C1205 + C78 * C1211 +
            C87 * C1206 - C88 * C1200 - C87 * C1207 + C77 * C1212) *
               C28881 * C28870 * C28950) *
              C624 +
          ((C87 * C2617 - C88 * C2614 - C87 * C2618 + C77 * C2623 +
            C89 * C2619 - C90 * C2615 - C89 * C2620 + C78 * C2624 +
            C91 * C2621 - C92 * C2616 - C91 * C2622 + C79 * C2625) *
               C28881 * C28870 * C28950 -
           (C91 * C632 - C92 * C628 - C91 * C633 + C79 * C640 + C89 * C634 -
            C90 * C629 - C89 * C635 + C78 * C641 + C87 * C636 - C88 * C630 -
            C87 * C637 + C77 * C642) *
               C28881 * C28870 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
                C4396 +
            C4798 * C4397 + C4799 * C4398) *
               C3112 -
           (C6686 * C4398 + C6687 * C4397 +
            (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
                C28881 * C4396) *
               C28950) *
              C624 +
          ((C6687 * C4396 + C6686 * C4397 +
            (C4399 * C6668 - C4400 * C6667 - C4399 * C6669 + C28784 * C6670) *
                C28881 * C4398) *
               C28950 -
           (C6270 * C4398 + C4799 * C4397 + C4798 * C4396) * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C87 +
            (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C28881 * C3112 +
           ((C151 * C1200 - C28870 * C1264) * C87 +
            (C151 * C1207 - C28870 * C1268) * C77 + (C1273 - C1274) * C89 +
            (C1275 - C1276) * C78 + (C1277 - C1278) * C91 +
            (C1279 - C1280) * C79) *
               C28881 * C28950) *
              C624 +
          (((C151 * C630 - C28870 * C694) * C87 +
            (C151 * C637 - C28870 * C698) * C77 + (C703 - C704) * C89 +
            (C705 - C706) * C78 + (C707 - C708) * C91 + (C709 - C710) * C79) *
               C28881 * C3112 +
           ((C28870 * C2676 - C151 * C2614) * C87 +
            (C28870 * C2679 - C151 * C2618) * C77 +
            (C28870 * C2677 - C151 * C2615) * C89 +
            (C28870 * C2680 - C151 * C2620) * C78 +
            (C28870 * C2678 - C151 * C2616) * C91 +
            (C28870 * C2681 - C151 * C2622) * C79) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C4399 +
            (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
             C4398 * C2265 - C4441 * C2216) *
                C28784) *
               C28881 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C4399 +
            (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 - C4397 * C2679 +
             C4441 * C5341 - C4398 * C5398) *
                C28784) *
               C28881 * C28950) *
              C624 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C4399 +
            (C4439 * C637 - C4396 * C698 + C4440 * C2216 - C4397 * C2265 +
             C4441 * C4764 - C4398 * C4853) *
                C28784) *
               C28881 * C3112 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C4399 +
            (C4396 * C2679 - C4439 * C2618 + C4397 * C5398 - C4440 * C5341 +
             C4398 * C6738 - C4441 * C6669) *
                C28784) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C87 +
            (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C28870 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C87 +
            (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
            (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
            (C1345 - C1346) * C79) *
               C28870 * C28950) *
              C624 +
          (((C214 * C630 - C28881 * C760) * C87 +
            (C214 * C637 - C28881 * C764) * C77 + (C769 - C770) * C89 +
            (C771 - C772) * C78 + (C773 - C774) * C91 + (C775 - C776) * C79) *
               C28870 * C3112 +
           ((C28881 * C2732 - C214 * C2614) * C87 +
            (C28881 * C2735 - C214 * C2618) * C77 +
            (C28881 * C2733 - C214 * C2615) * C89 +
            (C28881 * C2736 - C214 * C2620) * C78 +
            (C28881 * C2734 - C214 * C2616) * C91 +
            (C28881 * C2737 - C214 * C2622) * C79) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C4399 +
             (C28881 * C220 - C214 * C99) * C28784) *
                C4396 +
            ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
            C6359 * C4398) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C4399 +
             (C214 * C1207 - C28881 * C1334) * C28784) *
                C4396 +
            ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
            ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
               C28950) *
              C624 +
          ((((C4911 - C4910) * C4399 + (C4913 - C4912) * C28784) * C4396 +
            ((C4915 - C4914) * C4399 + (C4917 - C4916) * C28784) * C4397 +
            ((C6353 - C6354) * C4399 + (C6355 - C6356) * C28784) * C4398) *
               C3112 +
           (((C6793 - C6792) * C4399 + (C6795 - C6794) * C28784) * C4396 +
            ((C6797 - C6796) * C4399 + (C6799 - C6798) * C28784) * C4397 +
            ((C28881 * C6789 - C214 * C6667) * C4399 +
             (C28881 * C6790 - C214 * C6669) * C28784) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C28870) *
               C28881 * C3112 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C151 +
            (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
             C91 * C1398 - C79 * C1402) *
                C28870) *
               C28881 * C28950) *
              C624 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C151 +
            (C87 * C826 - C77 * C830 + C89 * C827 - C78 * C831 + C91 * C828 -
             C79 * C832) *
                C28870) *
               C28881 * C3112 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C151 +
            (C77 * C2791 - C87 * C2788 + C78 * C2792 - C89 * C2789 +
             C79 * C2793 - C91 * C2790) *
                C28870) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C4439 +
            (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
            (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
               C28881 * C3112 +
           ((C4399 * C1200 - C28784 * C1206) * C4439 +
            (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
            (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
            (C6858 - C6859) * C4398) *
               C28881 * C28950) *
              C624 +
          (((C4977 - C4976) * C4439 + (C4979 - C4978) * C4396 +
            (C4981 - C4980) * C4440 + (C4983 - C4982) * C4397 +
            (C6402 - C6403) * C4441 + (C6404 - C6405) * C4398) *
               C28881 * C3112 +
           ((C6853 - C6852) * C4439 + (C6855 - C6854) * C4396 +
            (C6857 - C6856) * C4440 + (C6859 - C6858) * C4397 +
            (C28784 * C6668 - C4399 * C6667) * C4441 +
            (C28784 * C6850 - C4399 * C6849) * C4398) *
               C28881 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C28881 * C3112 -
           (C1471 * C79 + C1472 * C78 +
            (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
                C77) *
               C28881 * C28950) *
              C624 +
          (((C151 * C2676 - C325 * C2614 - C151 * C2788 + C28870 * C2844) *
                C77 +
            (C151 * C2677 - C325 * C2615 - C151 * C2789 + C28870 * C2845) *
                C78 +
            (C151 * C2678 - C325 * C2616 - C151 * C2790 + C28870 * C2846) *
                C79) *
               C28881 * C28950 -
           (C901 * C79 + C902 * C78 +
            (C151 * C694 - C325 * C630 - C151 * C826 + C28870 * C886) * C77) *
               C28881 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
            C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
            C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
               C28784 * C28881 * C3112 -
           (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
            C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
            C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
               C28784 * C28881 * C28950) *
              C624 +
          ((C4439 * C2676 - C4556 * C2614 - C4439 * C2788 + C4396 * C2844 +
            C4440 * C5396 - C4557 * C5338 - C4440 * C5504 + C4397 * C5558 +
            C4441 * C6737 - C4558 * C6667 - C4441 * C6849 + C4398 * C6909) *
               C28784 * C28881 * C28950 -
           (C4441 * C4851 - C4558 * C4761 - C4441 * C4971 + C4398 * C5041 +
            C4440 * C2262 - C4557 * C2212 - C4440 * C2350 + C4397 * C2394 +
            C4439 * C694 - C4556 * C630 - C4439 * C826 + C4396 * C886) *
               C28784 * C28881 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28881 * C215 - C214 * C93) * C151 +
             (C28881 * C390 - C214 * C277) * C28870) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 +
            C405 * C79) *
               C3112 +
           (((C214 * C1200 - C28881 * C1330) * C151 +
             (C214 * C1396 - C28881 * C1522) * C28870) *
                C77 +
            ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
            ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
               C28950) *
              C624 +
          ((((C214 * C630 - C28881 * C760) * C151 +
             (C214 * C826 - C28881 * C952) * C28870) *
                C77 +
            ((C769 - C770) * C151 + (C957 - C958) * C28870) * C78 +
            ((C773 - C774) * C151 + (C959 - C960) * C28870) * C79) *
               C3112 +
           (((C28881 * C2732 - C214 * C2614) * C151 +
             (C28881 * C2897 - C214 * C2788) * C28870) *
                C77 +
            ((C28881 * C2733 - C214 * C2615) * C151 +
             (C28881 * C2898 - C214 * C2789) * C28870) *
                C78 +
            ((C28881 * C2734 - C214 * C2616) * C151 +
             (C28881 * C2899 - C214 * C2790) * C28870) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4439 +
            (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
            (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
               C28784 * C3112 +
           ((C214 * C1200 - C28881 * C1330) * C4439 +
            (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
            (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
            (C6964 - C6965) * C4398) *
               C28784 * C28950) *
              C624 +
          (((C4911 - C4910) * C4439 + (C5097 - C5096) * C4396 +
            (C4915 - C4914) * C4440 + (C5099 - C5098) * C4397 +
            (C6353 - C6354) * C4441 + (C6485 - C6486) * C4398) *
               C28784 * C3112 +
           ((C6793 - C6792) * C4439 + (C6963 - C6962) * C4396 +
            (C6797 - C6796) * C4440 + (C6965 - C6964) * C4397 +
            (C28881 * C6789 - C214 * C6667) * C4441 +
            (C28881 * C6960 - C214 * C6849) * C4398) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C28881) *
               C28870 * C3112 +
           ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
             C91 * C1198 - C79 * C1202) *
                C214 +
            (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
             C91 * C1582 - C79 * C1586) *
                C28881) *
               C28870 * C28950) *
              C624 +
          (((C87 * C630 - C77 * C636 + C89 * C629 - C78 * C634 + C91 * C628 -
             C79 * C632) *
                C214 +
            (C87 * C1010 - C77 * C1014 + C89 * C1011 - C78 * C1015 +
             C91 * C1012 - C79 * C1016) *
                C28881) *
               C28870 * C3112 +
           ((C77 * C2617 - C87 * C2614 + C78 * C2619 - C89 * C2615 +
             C79 * C2621 - C91 * C2616) *
                C214 +
            (C77 * C2953 - C87 * C2950 + C78 * C2954 - C89 * C2951 +
             C79 * C2955 - C91 * C2952) *
                C28881) *
               C28870 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28784 * C98 - C4399 * C93) * C214 +
             (C28784 * C448 - C4399 * C443) * C28881) *
                C4396 +
            ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
            C6532 * C4398) *
               C3112 +
           (((C4399 * C1200 - C28784 * C1206) * C214 +
             (C4399 * C1580 - C28784 * C1584) * C28881) *
                C4396 +
            ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
            ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
               C28950) *
              C624 +
          ((((C4977 - C4976) * C214 + (C5157 - C5156) * C28881) * C4396 +
            ((C4981 - C4980) * C214 + (C5159 - C5158) * C28881) * C4397 +
            ((C6402 - C6403) * C214 + (C6529 - C6530) * C28881) * C4398) *
               C3112 +
           (((C6853 - C6852) * C214 + (C7019 - C7018) * C28881) * C4396 +
            ((C6857 - C6856) * C214 + (C7021 - C7020) * C28881) * C4397 +
            ((C28784 * C6668 - C4399 * C6667) * C214 +
             (C28784 * C7016 - C4399 * C7015) * C28881) *
                C4398) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C28870 * C152 - C151 * C93) * C214 +
             (C28870 * C491 - C151 * C443) * C28881) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 +
            C506 * C79) *
               C3112 +
           (((C151 * C1200 - C28870 * C1264) * C214 +
             (C151 * C1580 - C28870 * C1638) * C28881) *
                C77 +
            ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
            ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
               C28950) *
              C624 +
          ((((C151 * C630 - C28870 * C694) * C214 +
             (C151 * C1010 - C28870 * C1068) * C28881) *
                C77 +
            ((C703 - C704) * C214 + (C1073 - C1074) * C28881) * C78 +
            ((C707 - C708) * C214 + (C1075 - C1076) * C28881) * C79) *
               C3112 +
           (((C28870 * C2676 - C151 * C2614) * C214 +
             (C28870 * C3006 - C151 * C2950) * C28881) *
                C77 +
            ((C28870 * C2677 - C151 * C2615) * C214 +
             (C28870 * C3007 - C151 * C2951) * C28881) *
                C78 +
            ((C28870 * C2678 - C151 * C2616) * C214 +
             (C28870 * C3008 - C151 * C2952) * C28881) *
                C79) *
               C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
             C4398 * C2262 - C4441 * C2212) *
                C214 +
            (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
             C4398 * C2520 - C4441 * C2476) *
                C28881) *
               C28784 * C3112 +
           ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
             C4441 * C5338 - C4398 * C5396) *
                C214 +
            (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
             C4441 * C5662 - C4398 * C5716) *
                C28881) *
               C28784 * C28950) *
              C624 +
          (((C4439 * C630 - C4396 * C694 + C4440 * C2212 - C4397 * C2262 +
             C4441 * C4761 - C4398 * C4851) *
                C214 +
            (C4439 * C1010 - C4396 * C1068 + C4440 * C2476 - C4397 * C2520 +
             C4441 * C5151 - C4398 * C5213) *
                C28881) *
               C28784 * C3112 +
           ((C4396 * C2676 - C4439 * C2614 + C4397 * C5396 - C4440 * C5338 +
             C4398 * C6737 - C4441 * C6667) *
                C214 +
            (C4396 * C3006 - C4439 * C2950 + C4397 * C5716 - C4440 * C5662 +
             C4398 * C7071 - C4441 * C7015) *
                C28881) *
               C28784 * C28950) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
                C77 +
            C572 * C78 + C573 * C79) *
               C3112 -
           (C1715 * C79 + C1716 * C78 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C28870 * C77) *
               C28950) *
              C624 +
          (((C214 * C2732 - C544 * C2614 - C214 * C2950 + C28881 * C3059) *
                C28870 * C77 +
            (C214 * C2733 - C544 * C2615 - C214 * C2951 + C28881 * C3060) *
                C28870 * C78 +
            (C214 * C2734 - C544 * C2616 - C214 * C2952 + C28881 * C3061) *
                C28870 * C79) *
               C28950 -
           (C1145 * C79 + C1146 * C78 +
            (C214 * C760 - C544 * C630 - C214 * C1010 + C28881 * C1128) *
                C28870 * C77) *
               C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
            C5286 * C4397 + C5287 * C4398) *
               C28784 * C3112 -
           (C7136 * C4398 + C7137 * C4397 +
            (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
                C4396) *
               C28784 * C28950) *
              C624 +
          ((C7137 * C4396 + C7136 * C4397 +
            (C214 * C6789 - C544 * C6667 - C214 * C7015 + C28881 * C7122) *
                C4398) *
               C28784 * C28950 -
           (C6617 * C4398 + C5287 * C4397 + C5286 * C4396) * C28784 * C3112) *
              C28948) *
         C28806) /
            (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C28881 * C28870 * C4002 -
          (C91 * C1202 - C92 * C1198 - C91 * C1203 + C79 * C1210 + C89 * C1204 -
           C90 * C1199 - C89 * C1205 + C78 * C1211 + C87 * C1206 - C88 * C1200 -
           C87 * C1207 + C77 * C1212) *
              C28881 * C28870 * C4003 +
          (C87 * C4008 - C88 * C4005 - C87 * C4009 + C77 * C4014 + C89 * C4010 -
           C90 * C4006 - C89 * C4011 + C78 * C4015 + C91 * C4012 - C92 * C4007 -
           C91 * C4013 + C79 * C4016) *
              C28881 * C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4399 * C98 - C4400 * C93 - C4399 * C99 + C28784 * C108) * C28881 *
               C4396 +
           C4798 * C4397 + C4799 * C4398) *
              C4002 -
          (C6686 * C4398 + C6687 * C4397 +
           (C4399 * C1206 - C4400 * C1200 - C4399 * C1207 + C28784 * C1212) *
               C28881 * C4396) *
              C4003 +
          ((C4399 * C4008 - C4400 * C4005 - C4399 * C4009 + C28784 * C4014) *
               C28881 * C4396 +
           (C4399 * C8077 - C4400 * C8075 - C4399 * C8078 + C28784 * C8081) *
               C28881 * C4397 +
           (C4399 * C8079 - C4400 * C8076 - C4399 * C8080 + C28784 * C8082) *
               C28881 * C4398) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C28870 * C152 - C151 * C93) * C87 +
                     (C28870 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
                     (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
                        C28881 * C4002 +
                    ((C151 * C1200 - C28870 * C1264) * C87 +
                     (C151 * C1207 - C28870 * C1268) * C77 +
                     (C1273 - C1274) * C89 + (C1275 - C1276) * C78 +
                     (C1277 - C1278) * C91 + (C1279 - C1280) * C79) *
                        C28881 * C4003 +
                    ((C28870 * C4055 - C151 * C4005) * C87 +
                     (C28870 * C4058 - C151 * C4009) * C77 +
                     (C28870 * C4056 - C151 * C4006) * C89 +
                     (C28870 * C4059 - C151 * C4011) * C78 +
                     (C28870 * C4057 - C151 * C4007) * C91 +
                     (C28870 * C4060 - C151 * C4013) * C79) *
                        C28881 * C4004) *
                   C28840 * C28806) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
                      C4398 * C2262 - C4441 * C2212) *
                         C4399 +
                     (C4396 * C157 - C4439 * C99 + C4397 * C698 - C4440 * C637 +
                      C4398 * C2265 - C4441 * C2216) *
                         C28784) *
                        C28881 * C4002 +
                    ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 -
                      C4397 * C2676 + C4441 * C5338 - C4398 * C5396) *
                         C4399 +
                     (C4439 * C1207 - C4396 * C1268 + C4440 * C2618 -
                      C4397 * C2679 + C4441 * C5341 - C4398 * C5398) *
                         C28784) *
                        C28881 * C4003 +
                    ((C4396 * C4055 - C4439 * C4005 + C4397 * C8121 -
                      C4440 * C8075 + C4398 * C8122 - C4441 * C8076) *
                         C4399 +
                     (C4396 * C4058 - C4439 * C4009 + C4397 * C8123 -
                      C4440 * C8078 + C4398 * C8124 - C4441 * C8080) *
                         C28784) *
                        C28881 * C4004) *
                   C28840 * C28806) /
                      (p * q * std::sqrt(p + q));
    d2eexz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C87 +
           (C28881 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C28870 * C4002 +
          ((C214 * C1200 - C28881 * C1330) * C87 +
           (C214 * C1207 - C28881 * C1334) * C77 + (C1339 - C1340) * C89 +
           (C1341 - C1342) * C78 + (C1343 - C1344) * C91 +
           (C1345 - C1346) * C79) *
              C28870 * C4003 +
          ((C28881 * C4099 - C214 * C4005) * C87 +
           (C28881 * C4102 - C214 * C4009) * C77 +
           (C28881 * C4100 - C214 * C4006) * C89 +
           (C28881 * C4103 - C214 * C4011) * C78 +
           (C28881 * C4101 - C214 * C4007) * C91 +
           (C28881 * C4104 - C214 * C4013) * C79) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C4399 +
            (C28881 * C220 - C214 * C99) * C28784) *
               C4396 +
           ((C4910 - C4911) * C4399 + (C4912 - C4913) * C28784) * C4397 +
           C6359 * C4398) *
              C4002 +
          (((C214 * C1200 - C28881 * C1330) * C4399 +
            (C214 * C1207 - C28881 * C1334) * C28784) *
               C4396 +
           ((C6792 - C6793) * C4399 + (C6794 - C6795) * C28784) * C4397 +
           ((C6796 - C6797) * C4399 + (C6798 - C6799) * C28784) * C4398) *
              C4003 +
          (((C28881 * C4099 - C214 * C4005) * C4399 +
            (C28881 * C4102 - C214 * C4009) * C28784) *
               C4396 +
           ((C28881 * C8163 - C214 * C8075) * C4399 +
            (C28881 * C8165 - C214 * C8078) * C28784) *
               C4397 +
           ((C28881 * C8164 - C214 * C8076) * C4399 +
            (C28881 * C8166 - C214 * C8080) * C28784) *
               C4398) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C28870) *
              C28881 * C4002 +
          ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
            C91 * C1198 - C79 * C1202) *
               C151 +
           (C87 * C1396 - C77 * C1400 + C89 * C1397 - C78 * C1401 +
            C91 * C1398 - C79 * C1402) *
               C28870) *
              C28881 * C4003 +
          ((C77 * C4008 - C87 * C4005 + C78 * C4010 - C89 * C4006 +
            C79 * C4012 - C91 * C4007) *
               C151 +
           (C77 * C4146 - C87 * C4143 + C78 * C4147 - C89 * C4144 +
            C79 * C4148 - C91 * C4145) *
               C28870) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28784 * C98 - C4399 * C93) * C4439 +
           (C28784 * C282 - C4399 * C277) * C4396 + (C4976 - C4977) * C4440 +
           (C4978 - C4979) * C4397 + C6400 * C4441 + C6401 * C4398) *
              C28881 * C4002 +
          ((C4399 * C1200 - C28784 * C1206) * C4439 +
           (C4399 * C1396 - C28784 * C1400) * C4396 + (C6852 - C6853) * C4440 +
           (C6854 - C6855) * C4397 + (C6856 - C6857) * C4441 +
           (C6858 - C6859) * C4398) *
              C28881 * C4003 +
          ((C28784 * C4008 - C4399 * C4005) * C4439 +
           (C28784 * C4146 - C4399 * C4143) * C4396 +
           (C28784 * C8077 - C4399 * C8075) * C4440 +
           (C28784 * C8207 - C4399 * C8205) * C4397 +
           (C28784 * C8079 - C4399 * C8076) * C4441 +
           (C28784 * C8208 - C4399 * C8206) * C4398) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C28870 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C28881 * C4002 -
          (C1471 * C79 + C1472 * C78 +
           (C151 * C1264 - C325 * C1200 - C151 * C1396 + C28870 * C1456) *
               C77) *
              C28881 * C4003 +
          ((C151 * C4055 - C325 * C4005 - C151 * C4143 + C28870 * C4187) * C77 +
           (C151 * C4056 - C325 * C4006 - C151 * C4144 + C28870 * C4188) * C78 +
           (C151 * C4057 - C325 * C4007 - C151 * C4145 + C28870 * C4189) *
               C79) *
              C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C4439 * C152 - C4556 * C93 - C4439 * C277 + C4396 * C326 +
           C4440 * C694 - C4557 * C630 - C4440 * C826 + C4397 * C886 +
           C4441 * C2262 - C4558 * C2212 - C4441 * C2350 + C4398 * C2394) *
              C28784 * C28881 * C4002 -
          (C4441 * C5396 - C4558 * C5338 - C4441 * C5504 + C4398 * C5558 +
           C4440 * C2676 - C4557 * C2614 - C4440 * C2788 + C4397 * C2844 +
           C4439 * C1264 - C4556 * C1200 - C4439 * C1396 + C4396 * C1456) *
              C28784 * C28881 * C4003 +
          (C4439 * C4055 - C4556 * C4005 - C4439 * C4143 + C4396 * C4187 +
           C4440 * C8121 - C4557 * C8075 - C4440 * C8205 + C4397 * C8247 +
           C4441 * C8122 - C4558 * C8076 - C4441 * C8206 + C4398 * C8248) *
              C28784 * C28881 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eeyz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28881 * C215 - C214 * C93) * C151 +
            (C28881 * C390 - C214 * C277) * C28870) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C28870) * C78 + C405 * C79) *
              C4002 +
          (((C214 * C1200 - C28881 * C1330) * C151 +
            (C214 * C1396 - C28881 * C1522) * C28870) *
               C77 +
           ((C1339 - C1340) * C151 + (C1527 - C1528) * C28870) * C78 +
           ((C1343 - C1344) * C151 + (C1529 - C1530) * C28870) * C79) *
              C4003 +
          (((C28881 * C4099 - C214 * C4005) * C151 +
            (C28881 * C4228 - C214 * C4143) * C28870) *
               C77 +
           ((C28881 * C4100 - C214 * C4006) * C151 +
            (C28881 * C4229 - C214 * C4144) * C28870) *
               C78 +
           ((C28881 * C4101 - C214 * C4007) * C151 +
            (C28881 * C4230 - C214 * C4145) * C28870) *
               C79) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C28881 * C215 - C214 * C93) * C4439 +
           (C28881 * C390 - C214 * C277) * C4396 + (C4910 - C4911) * C4440 +
           (C5096 - C5097) * C4397 + C6351 * C4441 + C6484 * C4398) *
              C28784 * C4002 +
          ((C214 * C1200 - C28881 * C1330) * C4439 +
           (C214 * C1396 - C28881 * C1522) * C4396 + (C6792 - C6793) * C4440 +
           (C6962 - C6963) * C4397 + (C6796 - C6797) * C4441 +
           (C6964 - C6965) * C4398) *
              C28784 * C4003 +
          ((C28881 * C4099 - C214 * C4005) * C4439 +
           (C28881 * C4228 - C214 * C4143) * C4396 +
           (C28881 * C8163 - C214 * C8075) * C4440 +
           (C28881 * C8287 - C214 * C8205) * C4397 +
           (C28881 * C8164 - C214 * C8076) * C4441 +
           (C28881 * C8288 - C214 * C8206) * C4398) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eezx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C28881) *
              C28870 * C4002 +
          ((C87 * C1200 - C77 * C1206 + C89 * C1199 - C78 * C1204 +
            C91 * C1198 - C79 * C1202) *
               C214 +
           (C87 * C1580 - C77 * C1584 + C89 * C1581 - C78 * C1585 +
            C91 * C1582 - C79 * C1586) *
               C28881) *
              C28870 * C4003 +
          ((C77 * C4008 - C87 * C4005 + C78 * C4010 - C89 * C4006 +
            C79 * C4012 - C91 * C4007) *
               C214 +
           (C77 * C4272 - C87 * C4269 + C78 * C4273 - C89 * C4270 +
            C79 * C4274 - C91 * C4271) *
               C28881) *
              C28870 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28784 * C98 - C4399 * C93) * C214 +
            (C28784 * C448 - C4399 * C443) * C28881) *
               C4396 +
           ((C4976 - C4977) * C214 + (C5156 - C5157) * C28881) * C4397 +
           C6532 * C4398) *
              C4002 +
          (((C4399 * C1200 - C28784 * C1206) * C214 +
            (C4399 * C1580 - C28784 * C1584) * C28881) *
               C4396 +
           ((C6852 - C6853) * C214 + (C7018 - C7019) * C28881) * C4397 +
           ((C6856 - C6857) * C214 + (C7020 - C7021) * C28881) * C4398) *
              C4003 +
          (((C28784 * C4008 - C4399 * C4005) * C214 +
            (C28784 * C4272 - C4399 * C4269) * C28881) *
               C4396 +
           ((C28784 * C8077 - C4399 * C8075) * C214 +
            (C28784 * C8329 - C4399 * C8327) * C28881) *
               C4397 +
           ((C28784 * C8079 - C4399 * C8076) * C214 +
            (C28784 * C8330 - C4399 * C8328) * C28881) *
               C4398) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C28870 * C152 - C151 * C93) * C214 +
            (C28870 * C491 - C151 * C443) * C28881) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C28881) * C78 + C506 * C79) *
              C4002 +
          (((C151 * C1200 - C28870 * C1264) * C214 +
            (C151 * C1580 - C28870 * C1638) * C28881) *
               C77 +
           ((C1273 - C1274) * C214 + (C1643 - C1644) * C28881) * C78 +
           ((C1277 - C1278) * C214 + (C1645 - C1646) * C28881) * C79) *
              C4003 +
          (((C28870 * C4055 - C151 * C4005) * C214 +
            (C28870 * C4313 - C151 * C4269) * C28881) *
               C77 +
           ((C28870 * C4056 - C151 * C4006) * C214 +
            (C28870 * C4314 - C151 * C4270) * C28881) *
               C78 +
           ((C28870 * C4057 - C151 * C4007) * C214 +
            (C28870 * C4315 - C151 * C4271) * C28881) *
               C79) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4396 * C152 - C4439 * C93 + C4397 * C694 - C4440 * C630 +
            C4398 * C2262 - C4441 * C2212) *
               C214 +
           (C4396 * C491 - C4439 * C443 + C4397 * C1068 - C4440 * C1010 +
            C4398 * C2520 - C4441 * C2476) *
               C28881) *
              C28784 * C4002 +
          ((C4439 * C1200 - C4396 * C1264 + C4440 * C2614 - C4397 * C2676 +
            C4441 * C5338 - C4398 * C5396) *
               C214 +
           (C4439 * C1580 - C4396 * C1638 + C4440 * C2950 - C4397 * C3006 +
            C4441 * C5662 - C4398 * C5716) *
               C28881) *
              C28784 * C4003 +
          ((C4396 * C4055 - C4439 * C4005 + C4397 * C8121 - C4440 * C8075 +
            C4398 * C8122 - C4441 * C8076) *
               C214 +
           (C4396 * C4313 - C4439 * C4269 + C4397 * C8369 - C4440 * C8327 +
            C4398 * C8370 - C4441 * C8328) *
               C28881) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C28870 *
               C77 +
           C572 * C78 + C573 * C79) *
              C4002 -
          (C1715 * C79 + C1716 * C78 +
           (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
               C28870 * C77) *
              C4003 +
          ((C214 * C4099 - C544 * C4005 - C214 * C4269 + C28881 * C4354) *
               C28870 * C77 +
           (C214 * C4100 - C544 * C4006 - C214 * C4270 + C28881 * C4355) *
               C28870 * C78 +
           (C214 * C4101 - C544 * C4007 - C214 * C4271 + C28881 * C4356) *
               C28870 * C79) *
              C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C28881 * C545) * C4396 +
           C5286 * C4397 + C5287 * C4398) *
              C28784 * C4002 -
          (C7136 * C4398 + C7137 * C4397 +
           (C214 * C1330 - C544 * C1200 - C214 * C1580 + C28881 * C1698) *
               C4396) *
              C28784 * C4003 +
          ((C214 * C4099 - C544 * C4005 - C214 * C4269 + C28881 * C4354) *
               C4396 +
           (C214 * C8163 - C544 * C8075 - C214 * C8327 + C28881 * C8409) *
               C4397 +
           (C214 * C8164 - C544 * C8076 - C214 * C8328 + C28881 * C8410) *
               C4398) *
              C28784 * C4004) *
         C28840 * C28806) /
            (p * q * std::sqrt(p + q));
}
