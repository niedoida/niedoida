/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_dssd_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_2002_11(const double ae,
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
    const double C18801 = ae * be;
    const double C18800 = xA - xB;
    const double C18799 = ae + be;
    const double C18798 = 0 * be;
    const double C18833 = yA - yB;
    const double C18836 = zA - zB;
    const double C18847 = 0 * be;
    const double C18873 = 0 * be;
    const double C18919 = p + q;
    const double C18918 = p * q;
    const double C18924 = xP - xQ;
    const double C18923 = bs[2];
    const double C18931 = std::pow(ae, 2);
    const double C18929 = bs[3];
    const double C18942 = bs[4];
    const double C18963 = bs[5];
    const double C18994 = yP - yQ;
    const double C19019 = zP - zQ;
    const double C93 = bs[0];
    const double C19738 = ce + de;
    const double C19737 = ce * de;
    const double C19736 = xC - xD;
    const double C19750 = yC - yD;
    const double C19764 = zC - zD;
    const double C18805 = 2 * C18801;
    const double C18804 = C18801 * C18800;
    const double C19717 = std::pow(C18800, 2);
    const double C19853 = C18800 * be;
    const double C18803 = 2 * C18799;
    const double C18802 = std::pow(C18799, 2);
    const double C18848 = C18801 * C18833;
    const double C19790 = std::pow(C18833, 2);
    const double C19861 = C18833 * be;
    const double C18874 = C18801 * C18836;
    const double C19801 = std::pow(C18836, 2);
    const double C19862 = C18836 * be;
    const double C18920 = 2 * C18918;
    const double C18932 = C18924 * ae;
    const double C18928 = std::pow(C18924, 2);
    const double C18997 = C18994 * ae;
    const double C18996 = C18924 * C18994;
    const double C19045 = C18994 * C18924;
    const double C19058 = std::pow(C18994, 2);
    const double C19022 = C19019 * ae;
    const double C19021 = C18924 * C19019;
    const double C19072 = C18994 * C19019;
    const double C19083 = C19019 * C18924;
    const double C19096 = C19019 * C18994;
    const double C19107 = std::pow(C19019, 2);
    const double C19858 = 2 * C19738;
    const double C19857 = std::pow(C19738, 2);
    const double C19739 = std::pow(C19736, 2);
    const double C19856 = C19736 * ce;
    const double C19751 = std::pow(C19750, 2);
    const double C19859 = C19750 * ce;
    const double C19765 = std::pow(C19764, 2);
    const double C19860 = C19764 * ce;
    const double C19718 = C19717 * C18801;
    const double C19855 = std::pow(C18803, -2);
    const double C19854 = std::pow(C18803, -1);
    const double C19791 = C19790 * C18801;
    const double C19802 = C19801 * C18801;
    const double C18922 = C18920 / C18919;
    const double C103 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C18920 / C18919, 2) -
          (bs[1] * C18920) / C18919) *
         std::pow(ae, 2)) /
        C18802;
    const double C94 = -(C18924 * bs[1] * C18920) / C18919;
    const double C630 = -(C18994 * bs[1] * C18920) / C18919;
    const double C1071 = -(C19019 * bs[1] * C18920) / C18919;
    const double C18934 = C18929 * C18932;
    const double C18945 = C18942 * C18932;
    const double C18968 = C18963 * C18932;
    const double C98 = (-(bs[1] * C18932 * C18920) / C18919) / C18799;
    const double C18944 = C18928 * C18942;
    const double C18967 = C18928 * C18963;
    const double C18999 = C18929 * C18997;
    const double C19003 = C18942 * C18997;
    const double C19010 = C18963 * C18997;
    const double C156 = (-(bs[1] * C18997 * C18920) / C18919) / C18799;
    const double C18998 = C18996 * C18931;
    const double C19046 = C19045 * C18931;
    const double C19060 = C19058 * C18942;
    const double C19065 = C19058 * C18963;
    const double C19024 = C18929 * C19022;
    const double C19028 = C18942 * C19022;
    const double C19035 = C18963 * C19022;
    const double C223 = (-(bs[1] * C19022 * C18920) / C18919) / C18799;
    const double C19023 = C19021 * C18931;
    const double C19073 = C19072 * C18931;
    const double C19084 = C19083 * C18931;
    const double C19097 = C19096 * C18931;
    const double C19109 = C19107 * C18942;
    const double C19114 = C19107 * C18963;
    const double C19866 = std::pow(C19858, -2);
    const double C19864 = std::pow(C19858, -1);
    const double C19740 = C19739 * C19737;
    const double C19752 = C19751 * C19737;
    const double C19766 = C19765 * C19737;
    const double C19719 = C19718 / C18799;
    const double C19792 = C19791 / C18799;
    const double C19803 = C19802 / C18799;
    const double C18925 = std::pow(C18922, 2);
    const double C18930 = -C18922;
    const double C18943 = std::pow(C18922, 4);
    const double C19002 = C18942 * C18998;
    const double C19009 = C18963 * C18998;
    const double C19048 = C18942 * C19046;
    const double C19051 = C18963 * C19046;
    const double C19027 = C18942 * C19023;
    const double C19034 = C18963 * C19023;
    const double C19075 = C18942 * C19073;
    const double C19078 = C18963 * C19073;
    const double C19086 = C18942 * C19084;
    const double C19089 = C18963 * C19084;
    const double C19099 = C18942 * C19097;
    const double C19102 = C18963 * C19097;
    const double C19741 = C19740 / C19738;
    const double C19753 = C19752 / C19738;
    const double C19767 = C19766 / C19738;
    const double C19720 = -C19719;
    const double C19793 = -C19792;
    const double C19804 = -C19803;
    const double C18927 = C18923 * C18925;
    const double C104 = (2 * ae * C18925 * C18923 * C18924 * ae +
                         C18924 *
                             (C18923 * C18925 + std::pow(C18924, 2) * bs[3] *
                                                    std::pow(-C18922, 3)) *
                             std::pow(ae, 2)) /
                        C18802;
    const double C161 =
        (C18925 * C18923 * C18924 * (yP - yQ) * C18931) / C18802;
    const double C228 =
        (C18925 * C18923 * C18924 * (zP - zQ) * C18931) / C18802;
    const double C289 = (C18925 * C18923 * C18994 * C18924 * C18931) / C18802;
    const double C333 =
        ((std::pow(C18994, 2) * C18923 * C18925 - (bs[1] * C18920) / C18919) *
         C18931) /
        C18802;
    const double C396 = (C18925 * C18923 * C18994 * C19019 * C18931) / C18802;
    const double C455 = (C18925 * C18923 * C19019 * C18924 * C18931) / C18802;
    const double C498 = (C18925 * C18923 * C19019 * C18994 * C18931) / C18802;
    const double C558 =
        ((std::pow(C19019, 2) * C18923 * C18925 - (bs[1] * C18920) / C18919) *
         C18931) /
        C18802;
    const double C99 = (C18924 * C18925 * C18923 * C18932) / C18799 -
                       (ae * bs[1] * C18920) / (C18919 * C18799);
    const double C157 = (C18924 * C18925 * C18923 * C18997) / C18799;
    const double C224 = (C18924 * C18925 * C18923 * C19022) / C18799;
    const double C636 = (C18994 * C18925 * C18923 * C18932) / C18799;
    const double C692 = (C18994 * C18925 * C18923 * C18997) / C18799 -
                        (ae * bs[1] * C18920) / (C18919 * C18799);
    const double C742 = (C18994 * C18925 * C18923 * C19022) / C18799;
    const double C1077 = (C19019 * C18925 * C18923 * C18932) / C18799;
    const double C1133 = (C19019 * C18925 * C18923 * C18997) / C18799;
    const double C1183 = (C19019 * C18925 * C18923 * C19022) / C18799 -
                         (ae * bs[1] * C18920) / (C18919 * C18799);
    const double C18933 = std::pow(C18930, 3);
    const double C18964 = std::pow(C18930, 5);
    const double C18949 = C18943 * C18945;
    const double C18948 = C18944 * C18943;
    const double C18962 = C18942 * C18943;
    const double C19005 = C18943 * C19003;
    const double C19030 = C18943 * C19028;
    const double C19061 = C19060 * C18943;
    const double C19110 = C19109 * C18943;
    const double C19004 = C18943 * C19002;
    const double C19049 = C18943 * C19048;
    const double C19029 = C18943 * C19027;
    const double C19076 = C18943 * C19075;
    const double C19087 = C18943 * C19086;
    const double C19100 = C18943 * C19099;
    const double C19742 = -C19741;
    const double C19754 = -C19753;
    const double C19768 = -C19767;
    const double C19721 = std::exp(C19720);
    const double C19794 = std::exp(C19793);
    const double C19805 = std::exp(C19804);
    const double C18935 = C18927 * ae;
    const double C95 = C18927 * C18928 - (bs[1] * C18920) / C18919;
    const double C629 = C18994 * C18924 * C18927;
    const double C631 = C18927 * C19058 - (bs[1] * C18920) / C18919;
    const double C1070 = C19019 * C18924 * C18927;
    const double C1072 = C18927 * C19107 - (bs[1] * C18920) / C18919;
    const double C2593 = C19019 * C18994 * C18927;
    const double C18936 = C18933 * C18934;
    const double C18941 = C18929 * C18933;
    const double C19000 = C18933 * C18999;
    const double C19025 = C18933 * C19024;
    const double C162 = (ae * C18925 * C18923 * C18994 * ae +
                         C18924 * C18933 * C18929 * C18924 * C18994 * C18931) /
                        C18802;
    const double C229 = (ae * C18925 * C18923 * C19019 * ae +
                         C18924 * C18933 * C18929 * C18924 * C19019 * C18931) /
                        C18802;
    const double C290 = (ae * C18925 * C18923 * C18997 +
                         C18924 * C18933 * C18929 * C18994 * C18924 * C18931) /
                        C18802;
    const double C334 =
        (C18924 * (C18927 + std::pow(C18994, 2) * C18929 * C18933) * C18931) /
        C18802;
    const double C397 =
        (C18924 * C18933 * C18929 * C18994 * C19019 * C18931) / C18802;
    const double C398 =
        (C18933 * C18929 * C19073 + C18943 * C18942 * C19073 * C18928) / C18802;
    const double C456 = (ae * C18925 * C18923 * C19022 +
                         C18924 * C18933 * C18929 * C19019 * C18924 * C18931) /
                        C18802;
    const double C499 =
        (C18924 * C18933 * C18929 * C19019 * C18994 * C18931) / C18802;
    const double C500 =
        (C18933 * C18929 * C19097 + C18943 * C18942 * C19097 * C18928) / C18802;
    const double C559 =
        (C18924 * (C18927 + std::pow(C19019, 2) * C18929 * C18933) * C18931) /
        C18802;
    const double C642 =
        (C18994 * (C18927 + C18928 * C18929 * C18933) * C18931) / C18802;
    const double C698 =
        (ae * C18925 * C18923 * C18932 + C18994 * C18933 * C18929 * C18998) /
        C18802;
    const double C748 = (C18994 * C18933 * C18929 * C19023) / C18802;
    const double C792 =
        (ae * C18925 * C18923 * C18932 + C18994 * C18933 * C18929 * C19046) /
        C18802;
    const double C836 =
        (2 * ae * C18925 * C18923 * C18997 +
         C18994 * (C18927 + C19058 * C18929 * C18933) * C18931) /
        C18802;
    const double C886 =
        (ae * C18925 * C18923 * C19022 + C18994 * C18933 * C18929 * C19073) /
        C18802;
    const double C930 = (C18994 * C18933 * C18929 * C19084) / C18802;
    const double C974 =
        (ae * C18925 * C18923 * C19022 + C18994 * C18933 * C18929 * C19097) /
        C18802;
    const double C1018 =
        (C18994 * (C18927 + C19107 * C18929 * C18933) * C18931) / C18802;
    const double C1083 =
        (C19019 * (C18927 + C18928 * C18929 * C18933) * C18931) / C18802;
    const double C1139 = (C19019 * C18933 * C18929 * C18998) / C18802;
    const double C1189 =
        (ae * C18925 * C18923 * C18932 + C19019 * C18933 * C18929 * C19023) /
        C18802;
    const double C1233 = (C19019 * C18933 * C18929 * C19046) / C18802;
    const double C1277 =
        (C19019 * (C18927 + C19058 * C18929 * C18933) * C18931) / C18802;
    const double C1327 =
        (ae * C18925 * C18923 * C18997 + C19019 * C18933 * C18929 * C19073) /
        C18802;
    const double C1371 =
        (ae * C18925 * C18923 * C18932 + C19019 * C18933 * C18929 * C19084) /
        C18802;
    const double C1415 =
        (ae * C18925 * C18923 * C18997 + C19019 * C18933 * C18929 * C19097) /
        C18802;
    const double C1459 =
        (2 * ae * C18925 * C18923 * C19022 +
         C19019 * (C18927 + C19107 * C18929 * C18933) * C18931) /
        C18802;
    const double C18973 = C18964 * C18968;
    const double C18972 = C18967 * C18964;
    const double C19012 = C18964 * C19010;
    const double C19011 = C18964 * C19009;
    const double C19037 = C18964 * C19035;
    const double C19036 = C18964 * C19034;
    const double C19052 = C18964 * C19051;
    const double C19066 = C19065 * C18964;
    const double C19079 = C18964 * C19078;
    const double C19090 = C18964 * C19089;
    const double C19103 = C18964 * C19102;
    const double C19115 = C19114 * C18964;
    const double C18952 = C18924 * C18949;
    const double C18961 = ae * C18949;
    const double C19315 = C18994 * C18949;
    const double C19468 = C19019 * C18949;
    const double C18971 = C18962 * C18928;
    const double C18970 = C18924 * C18962;
    const double C18969 = C18962 * ae;
    const double C19342 = C18962 * C19058;
    const double C19341 = C18994 * C18962;
    const double C19506 = C18962 * C19107;
    const double C19505 = C19019 * C18962;
    const double C19008 = ae * C19005;
    const double C19007 = C18924 * C19005;
    const double C19327 = C18994 * C19005;
    const double C19479 = C19019 * C19005;
    const double C19033 = ae * C19030;
    const double C19032 = C18924 * C19030;
    const double C19359 = C18994 * C19030;
    const double C19491 = C19019 * C19030;
    const double C1140 = (C18933 * C18929 * C18998 + C19004 * C19107) / C18802;
    const double C1234 = (C18933 * C18929 * C19046 + C19049 * C19107) / C18802;
    const double C749 = (C18933 * C18929 * C19023 + C19029 * C19058) / C18802;
    const double C399 =
        (2 * C18924 * C19076 +
         C18924 * (C19076 + C18964 * C18963 * C19073 * C18928)) /
        C18802;
    const double C931 = (C18933 * C18929 * C19084 + C19087 * C19058) / C18802;
    const double C501 =
        (2 * C18924 * C19100 +
         C18924 * (C19100 + C18964 * C18963 * C19097 * C18928)) /
        C18802;
    const double C19743 = std::exp(C19742);
    const double C19755 = std::exp(C19754);
    const double C19769 = std::exp(C19768);
    const double C3628 = C19721 * C636;
    const double C6738 = C19721 * C1077;
    const double C18806 = C18804 * C19721;
    const double C19863 = C19721 * C19853;
    const double C77 =
        (C19721 * std::pow(C19853, 2)) / C18802 + C19721 / C18803;
    const double C79 = C19855 * C19721;
    const double C8564 = C19854 * C19721;
    const double C168 = C19794 * C157;
    const double C6631 = C19794 * C1133;
    const double C18849 = C18848 * C19794;
    const double C155 = -(2 * C18801 * (yA - yB) * C19794) / C18799;
    const double C332 =
        -((C19794 - (C18833 * 2 * C18801 * C18833 * C19794) / C18799) *
          C18805) /
        C18799;
    const double C19869 = C19794 * C19861;
    const double C3080 =
        (C19794 * std::pow(C19861, 2)) / C18802 + C19794 / C18803;
    const double C3082 = C19855 * C19794;
    const double C8566 = C19854 * C19794;
    const double C235 = C19805 * C224;
    const double C3563 = C19805 * C742;
    const double C18875 = C18874 * C19805;
    const double C222 = -(2 * C18801 * (zA - zB) * C19805) / C18799;
    const double C557 =
        -((C19805 - (C18836 * 2 * C18801 * C18836 * C19805) / C18799) *
          C18805) /
        C18799;
    const double C19870 = C19805 * C19862;
    const double C5850 =
        (C19805 * std::pow(C19862, 2)) / C18802 + C19805 / C18803;
    const double C5852 = C19855 * C19805;
    const double C12051 = C19854 * C19805;
    const double C18937 = C18924 * C18936;
    const double C699 = (C18933 * C18929 * C18998 + ae * C18994 * C18936 +
                         C18994 * (ae * C18936 + C18994 * C19004)) /
                        C18802;
    const double C793 = (C18933 * C18929 * C19046 + ae * C18994 * C18936 +
                         C18994 * (ae * C18936 + C18994 * C19049)) /
                        C18802;
    const double C1190 = (C18933 * C18929 * C19023 + ae * C19019 * C18936 +
                          C19019 * (ae * C18936 + C19019 * C19029)) /
                         C18802;
    const double C1372 = (C18933 * C18929 * C19084 + ae * C19019 * C18936 +
                          C19019 * (ae * C18936 + C19019 * C19087)) /
                         C18802;
    const double C2658 = (C19019 * (ae * C18936 + C18994 * C19004)) / C18802;
    const double C2714 =
        (ae * C18994 * C18936 + C19019 * C18994 * C19029) / C18802;
    const double C2767 =
        (ae * C19019 * C18936 + C18994 * C19019 * C19049) / C18802;
    const double C2929 =
        (ae * C18994 * C18936 + C19019 * C18994 * C19087) / C18802;
    const double C637 = (C18925 * C18923 * C18932 + C18936 * C19058) / C18799;
    const double C1078 = (C18925 * C18923 * C18932 + C18936 * C19107) / C18799;
    const double C2596 = (C19019 * C18994 * C18936) / C18799;
    const double C3453 =
        (2 * C18994 * C18936 + C18994 * (C18936 + C18949 * C19058)) / C18799;
    const double C3933 = (C19019 * (C18936 + C18949 * C19058)) / C18799;
    const double C6566 =
        (2 * C19019 * C18936 + C19019 * (C18936 + C18949 * C19107)) / C18799;
    const double C18947 = C18924 * C18941;
    const double C18946 = C18941 * ae;
    const double C18951 = C18941 + C18948;
    const double C19062 = C18941 + C19061;
    const double C19111 = C18941 + C19110;
    const double C19328 = C18994 * C18941;
    const double C19492 = C19019 * C18941;
    const double C335 =
        ((C18927 + C19058 * C18929 * C18933) * C18931 +
         (C18941 + C19058 * C18942 * C18943) * C18931 * C18928) /
        C18802;
    const double C560 =
        ((C18927 + C19107 * C18929 * C18933) * C18931 +
         (C18941 + C19107 * C18942 * C18943) * C18931 * C18928) /
        C18802;
    const double C96 =
        2 * C18924 * C18927 + C18924 * (C18927 + C18941 * C18928);
    const double C628 = C18994 * (C18927 + C18941 * C18928);
    const double C1069 = C19019 * (C18927 + C18941 * C18928);
    const double C3451 =
        2 * C18994 * C18927 + C18994 * (C18927 + C18941 * C19058);
    const double C3930 = C19019 * (C18927 + C18941 * C19058);
    const double C6564 =
        2 * C19019 * C18927 + C19019 * (C18927 + C18941 * C19107);
    const double C19151 = C18994 * C19000;
    const double C163 =
        (C18933 * C18929 * C18998 + ae * C18924 * C19000 +
         C18924 * (ae * C19000 + C18924 * C18943 * C18942 * C18998)) /
        C18802;
    const double C164 =
        (2 * (ae * C19000 + C18924 * C19004) + ae * (C19000 + C19005 * C18928) +
         C18924 *
             (C19004 + ae * C18924 * C19005 +
              C18924 * (ae * C19005 + C18924 * C18964 * C18963 * C18998))) /
        C18802;
    const double C291 =
        (C18933 * C18929 * C19046 + ae * C18924 * C19000 +
         C18924 * (ae * C19000 + C18924 * C18943 * C18942 * C19046)) /
        C18802;
    const double C1138 = (C19019 * (ae * C19000 + C18924 * C19004)) / C18802;
    const double C1232 = (C19019 * (ae * C19000 + C18924 * C19049)) / C18802;
    const double C1326 =
        (ae * C18924 * C19000 + C19019 * C18924 * C19076) / C18802;
    const double C1328 = (C18933 * C18929 * C19073 + ae * C19019 * C19000 +
                          C19019 * (ae * C19000 + C19019 * C19076)) /
                         C18802;
    const double C1414 =
        (ae * C18924 * C19000 + C19019 * C18924 * C19100) / C18802;
    const double C1416 = (C18933 * C18929 * C19097 + ae * C19019 * C19000 +
                          C19019 * (ae * C19000 + C19019 * C19100)) /
                         C18802;
    const double C158 = (C18925 * C18923 * C18997 + C19000 * C18928) / C18799;
    const double C159 =
        (2 * C18924 * C19000 + C18924 * (C19000 + C19005 * C18928)) / C18799;
    const double C690 = (C18994 * (C19000 + C19005 * C18928) +
                         (C18927 + C18941 * C18928) * ae) /
                        C18799;
    const double C691 =
        (C18994 * C18924 * C19000 + C18924 * C18927 * ae) / C18799;
    const double C1131 = (C19019 * (C19000 + C19005 * C18928)) / C18799;
    const double C1132 = (C19019 * C18924 * C19000) / C18799;
    const double C1134 = (C18925 * C18923 * C18997 + C19000 * C19107) / C18799;
    const double C6625 =
        (2 * C19019 * C19000 + C19019 * (C19000 + C19005 * C19107)) / C18799;
    const double C19243 = C19019 * C19025;
    const double C230 =
        (C18933 * C18929 * C19023 + ae * C18924 * C19025 +
         C18924 * (ae * C19025 + C18924 * C18943 * C18942 * C19023)) /
        C18802;
    const double C231 =
        (2 * (ae * C19025 + C18924 * C19029) + ae * (C19025 + C19030 * C18928) +
         C18924 *
             (C19029 + ae * C18924 * C19030 +
              C18924 * (ae * C19030 + C18924 * C18964 * C18963 * C19023))) /
        C18802;
    const double C457 =
        (C18933 * C18929 * C19084 + ae * C18924 * C19025 +
         C18924 * (ae * C19025 + C18924 * C18943 * C18942 * C19084)) /
        C18802;
    const double C747 = (C18994 * (ae * C19025 + C18924 * C19029)) / C18802;
    const double C885 =
        (ae * C18924 * C19025 + C18994 * C18924 * C19076) / C18802;
    const double C887 = (C18933 * C18929 * C19073 + ae * C18994 * C19025 +
                         C18994 * (ae * C19025 + C18994 * C19076)) /
                        C18802;
    const double C929 = (C18994 * (ae * C19025 + C18924 * C19087)) / C18802;
    const double C973 =
        (ae * C18924 * C19025 + C18994 * C18924 * C19100) / C18802;
    const double C975 = (C18933 * C18929 * C19097 + ae * C18994 * C19025 +
                         C18994 * (ae * C19025 + C18994 * C19100)) /
                        C18802;
    const double C225 = (C18925 * C18923 * C19022 + C19025 * C18928) / C18799;
    const double C226 =
        (2 * C18924 * C19025 + C18924 * (C19025 + C19030 * C18928)) / C18799;
    const double C740 = (C18994 * (C19025 + C19030 * C18928)) / C18799;
    const double C741 = (C18994 * C18924 * C19025) / C18799;
    const double C743 = (C18925 * C18923 * C19022 + C19025 * C19058) / C18799;
    const double C1181 = (C19019 * (C19025 + C19030 * C18928) +
                          (C18927 + C18941 * C18928) * ae) /
                         C18799;
    const double C1182 =
        (C19019 * C18924 * C19025 + C18924 * C18927 * ae) / C18799;
    const double C2711 =
        (C19019 * C18994 * C19025 + C18994 * C18927 * ae) / C18799;
    const double C3557 =
        (2 * C18994 * C19025 + C18994 * (C19025 + C19030 * C19058)) / C18799;
    const double C4027 = (C19019 * (C19025 + C19030 * C19058) +
                          (C18927 + C18941 * C19058) * ae) /
                         C18799;
    const double C170 = C19794 * C162;
    const double C237 = C19805 * C229;
    const double C342 = C19794 * C334;
    const double C404 = C19805 * C397;
    const double C407 = C19805 * C398;
    const double C506 = C19794 * C499;
    const double C509 = C19794 * C500;
    const double C567 = C19805 * C559;
    const double C3459 = C19721 * C642;
    const double C3565 = C19805 * C748;
    const double C3630 = C19721 * C792;
    const double C3732 = C19805 * C886;
    const double C3782 = C19721 * C930;
    const double C3877 = C19805 * C1018;
    const double C6572 = C19721 * C1083;
    const double C6633 = C19794 * C1139;
    const double C6740 = C19721 * C1233;
    const double C6803 = C19794 * C1277;
    const double C6903 = C19721 * C1371;
    const double C6952 = C19794 * C1415;
    const double C18977 = C18924 * C18973;
    const double C19317 = C18973 * C19058;
    const double C19470 = C18973 * C19107;
    const double C19556 = C18994 * C18973;
    const double C18976 = C18962 + C18972;
    const double C19014 = C19012 * C18928;
    const double C19340 = C18994 * C19012;
    const double C19416 = C18924 * C19012;
    const double C19480 = C19012 * C19107;
    const double C19013 = C18924 * C19011;
    const double C19316 = C18994 * C19011;
    const double C6627 =
        (2 * C19019 * C19004 + C19019 * (C19004 + C19011 * C19107)) / C18802;
    const double C6628 =
        (3 * (C19004 + C19011 * C19107) +
         C19019 * (2 * C19019 * C19011 +
                   C19019 * (C19011 +
                             std::pow(C18922, 6) * bs[6] * C18998 * C19107))) /
        C18802;
    const double C19039 = C19037 * C18928;
    const double C19361 = C19037 * C19058;
    const double C19428 = C18924 * C19037;
    const double C19504 = C19019 * C19037;
    const double C19565 = C18994 * C19037;
    const double C19038 = C18924 * C19036;
    const double C19469 = C19019 * C19036;
    const double C19555 = C18994 * C19036;
    const double C3559 =
        (2 * C18994 * C19029 + C18994 * (C19029 + C19036 * C19058)) / C18802;
    const double C3560 =
        (3 * (C19029 + C19036 * C19058) +
         C18994 * (2 * C18994 * C19036 +
                   C18994 * (C19036 +
                             std::pow(C18922, 6) * bs[6] * C19023 * C19058))) /
        C18802;
    const double C4030 = (ae * (C18936 + C18949 * C19058) +
                          C19019 * (C19029 + C19036 * C19058)) /
                         C18802;
    const double C19053 = C18924 * C19052;
    const double C19324 = C18994 * C19052;
    const double C19449 = C19019 * C19052;
    const double C4072 = (ae * (C18936 + C18949 * C19107) +
                          C18994 * (C19049 + C19052 * C19107)) /
                         C18802;
    const double C6734 =
        (2 * C19019 * C19049 + C19019 * (C19049 + C19052 * C19107)) / C18802;
    const double C19067 = C18962 + C19066;
    const double C19360 = C18994 * C19079;
    const double C19427 = C18924 * C19079;
    const double C19457 = C19019 * C19079;
    const double C400 =
        (3 * (C19076 + C19079 * C18928) +
         C18924 * (2 * C18924 * C19079 +
                   C18924 * (C19079 +
                             std::pow(C18922, 6) * bs[6] * C19073 * C18928))) /
        C18802;
    const double C884 = (ae * (C19025 + C19030 * C18928) +
                         C18994 * (C19076 + C19079 * C18928)) /
                        C18802;
    const double C1325 = (ae * (C19000 + C19005 * C18928) +
                          C19019 * (C19076 + C19079 * C18928)) /
                         C18802;
    const double C19091 = C18924 * C19090;
    const double C19484 = C19019 * C19090;
    const double C19561 = C18994 * C19090;
    const double C3777 =
        (2 * C18994 * C19087 + C18994 * (C19087 + C19090 * C19058)) / C18802;
    const double C3778 =
        (3 * (C19087 + C19090 * C19058) +
         C18994 * (2 * C18994 * C19090 +
                   C18994 * (C19090 +
                             std::pow(C18922, 6) * bs[6] * C19084 * C19058))) /
        C18802;
    const double C4200 = (ae * (C18936 + C18949 * C19058) +
                          C19019 * (C19087 + C19090 * C19058)) /
                         C18802;
    const double C19368 = C18994 * C19103;
    const double C19431 = C18924 * C19103;
    const double C19488 = C19019 * C19103;
    const double C502 =
        (3 * (C19100 + C19103 * C18928) +
         C18924 * (2 * C18924 * C19103 +
                   C18924 * (C19103 +
                             std::pow(C18922, 6) * bs[6] * C19097 * C18928))) /
        C18802;
    const double C972 = (ae * (C19025 + C19030 * C18928) +
                         C18994 * (C19100 + C19103 * C18928)) /
                        C18802;
    const double C1413 = (ae * (C19000 + C19005 * C18928) +
                          C19019 * (C19100 + C19103 * C18928)) /
                         C18802;
    const double C19116 = C18962 + C19115;
    const double C18966 = 2 * C18961;
    const double C3517 =
        (2 * (ae * C18936 + C18994 * C19004) + ae * (C18936 + C18949 * C19058) +
         C18994 * (C19004 + ae * C18994 * C18949 +
                   C18994 * (C18961 + C18994 * C19011))) /
        C18802;
    const double C6694 =
        (2 * (ae * C18936 + C19019 * C19029) + ae * (C18936 + C18949 * C19107) +
         C19019 * (C19029 + ae * C19019 * C18949 +
                   C19019 * (C18961 + C19019 * C19036))) /
        C18802;
    const double C3624 =
        (2 * (ae * C18936 + C18994 * C19049) + ae * (C18936 + C18949 * C19058) +
         C18994 *
             (C19049 + ae * C19315 + C18994 * (C18961 + C18994 * C19052))) /
        C18802;
    const double C4031 = (C18994 * C19029 + ae * C19019 * C19315 +
                          C19019 * (ae * C19315 + C19019 * C18994 * C19036)) /
                         C18802;
    const double C4071 =
        (C19019 * C19049 + ae * C19019 * C19315 +
         C18994 * (ae * C19019 * C18949 + C18994 * C19019 * C19052)) /
        C18802;
    const double C4073 =
        (C19049 + C19052 * C19107 + ae * (C19315 + C18994 * C18973 * C19107) +
         C18994 * (ae * (C18949 + C18973 * C19107) +
                   C18994 * (C19052 +
                             std::pow(C18922, 6) * bs[6] * C19046 * C19107))) /
        C18802;
    const double C4201 = (C18994 * C19087 + ae * C19019 * C19315 +
                          C19019 * (ae * C19315 + C19019 * C18994 * C19090)) /
                         C18802;
    const double C3934 = (C18994 * C18936 + C19315 * C19107) / C18799;
    const double C6899 =
        (2 * (ae * C18936 + C19019 * C19087) + ae * (C18936 + C18949 * C19107) +
         C19019 *
             (C19087 + ae * C19468 + C19019 * (C18961 + C19019 * C19090))) /
        C18802;
    const double C18975 = C18941 + C18971;
    const double C18974 = C18970 * ae;
    const double C19417 = C18994 * C18970;
    const double C19544 = C19019 * C18970;
    const double C19346 = C18941 + C19342;
    const double C19345 = C19341 * ae;
    const double C19566 = C19019 * C19341;
    const double C19510 = C18941 + C19506;
    const double C19509 = C19505 * ae;
    const double C19337 = 2 * C19008;
    const double C19155 = C18994 * C19007;
    const double C292 =
        (2 * (ae * C19000 + C18924 * C19049) + ae * (C19000 + C19005 * C18928) +
         C18924 * (C19049 + ae * C19007 +
                   C18924 * (C19008 + C18924 * C18964 * C18963 * C19046))) /
        C18802;
    const double C1329 = (C18924 * C19076 + ae * C19019 * C19007 +
                          C19019 * (ae * C19007 + C19019 * C18924 * C19079)) /
                         C18802;
    const double C1417 = (C18924 * C19100 + ae * C19019 * C19007 +
                          C19019 * (ae * C19007 + C19019 * C18924 * C19103)) /
                         C18802;
    const double C1135 = (C18924 * C19000 + C19007 * C19107) / C18799;
    const double C6948 =
        (2 * (ae * C19000 + C19019 * C19100) + ae * (C19000 + C19005 * C19107) +
         C19019 *
             (C19100 + ae * C19479 + C19019 * (C19008 + C19019 * C19103))) /
        C18802;
    const double C19501 = 2 * C19033;
    const double C3728 =
        (2 * (ae * C19025 + C18994 * C19076) + ae * (C19025 + C19030 * C19058) +
         C18994 * (C19076 + ae * C18994 * C19030 +
                   C18994 * (C19033 + C18994 * C19079))) /
        C18802;
    const double C19247 = C19019 * C19032;
    const double C458 =
        (2 * (ae * C19025 + C18924 * C19087) + ae * (C19025 + C19030 * C18928) +
         C18924 * (C19087 + ae * C19032 +
                   C18924 * (C19033 + C18924 * C18964 * C18963 * C19084))) /
        C18802;
    const double C888 = (C18924 * C19076 + ae * C18994 * C19032 +
                         C18994 * (ae * C19032 + C18994 * C18924 * C19079)) /
                        C18802;
    const double C976 = (C18924 * C19100 + ae * C18994 * C19032 +
                         C18994 * (ae * C19032 + C18994 * C18924 * C19103)) /
                        C18802;
    const double C744 = (C18924 * C19025 + C19032 * C19058) / C18799;
    const double C19403 = C19019 * C19359;
    const double C3833 =
        (2 * (ae * C19025 + C18994 * C19100) + ae * (C19025 + C19030 * C19058) +
         C18994 *
             (C19100 + ae * C19359 + C18994 * (C19033 + C18994 * C19103))) /
        C18802;
    const double C6637 = C19794 * C1140;
    const double C6744 = C19721 * C1234;
    const double C3569 = C19805 * C749;
    const double C409 = C19805 * C399;
    const double C3785 = C19721 * C931;
    const double C511 = C19794 * C501;
    const double C19865 = C19743 * C19856;
    const double C84 =
        (C19743 * std::pow(C19856, 2)) / C19857 + C19743 / C19858;
    const double C86 = C19866 * C19743;
    const double C1522 = C19864 * C19743;
    const double C19867 = C19755 * C19859;
    const double C624 =
        (C19755 * std::pow(C19859, 2)) / C19857 + C19755 / C19858;
    const double C626 = C19866 * C19755;
    const double C1520 = C19864 * C19755;
    const double C19868 = C19769 * C19860;
    const double C1066 =
        (C19769 * std::pow(C19860, 2)) / C19857 + C19769 / C19858;
    const double C1068 = C19866 * C19769;
    const double C2058 = C19864 * C19769;
    const double C18807 = 2 * C18806;
    const double C78 = (-2 * C19854 * C19863) / C18799;
    const double C8563 = -C19863 / C18799;
    const double C18850 = 2 * C18849;
    const double C171 = C155 * C95;
    const double C169 = C155 * C99;
    const double C167 = C155 * C94;
    const double C341 = C155 * C157;
    const double C339 = C155 * C156;
    const double C505 = C155 * C224;
    const double C843 = C155 * C692;
    const double C1284 = C155 * C1133;
    const double C1588 = C155 * C629;
    const double C2124 = C155 * C1070;
    const double C6634 = C155 * C1072;
    const double C6632 = C155 * C1077;
    const double C6630 = C155 * C1071;
    const double C6951 = C155 * C1183;
    const double C8105 = C155 * C2593;
    const double C343 = C332 * C95;
    const double C340 = C332 * C94;
    const double C1762 = C332 * C629;
    const double C2298 = C332 * C1070;
    const double C6804 = C332 * C1072;
    const double C6802 = C332 * C1071;
    const double C8285 = C332 * C2593;
    const double C3081 = (-2 * C19854 * C19869) / C18799;
    const double C8565 = -C19869 / C18799;
    const double C18876 = 2 * C18875;
    const double C238 = C222 * C95;
    const double C236 = C222 * C99;
    const double C234 = C222 * C94;
    const double C403 = C222 * C157;
    const double C566 = C222 * C224;
    const double C564 = C222 * C223;
    const double C1025 = C222 * C742;
    const double C1466 = C222 * C1183;
    const double C1652 = C222 * C629;
    const double C2188 = C222 * C1070;
    const double C3566 = C222 * C631;
    const double C3564 = C222 * C636;
    const double C3562 = C222 * C630;
    const double C3731 = C222 * C692;
    const double C5455 = C222 * C2593;
    const double C568 = C557 * C95;
    const double C565 = C557 * C94;
    const double C1997 = C557 * C629;
    const double C2533 = C557 * C1070;
    const double C3878 = C557 * C631;
    const double C3876 = C557 * C630;
    const double C5804 = C557 * C2593;
    const double C5851 = (-2 * C19854 * C19870) / C18799;
    const double C12050 = -C19870 / C18799;
    const double C18938 = C18937 + C18935;
    const double C3634 = C19721 * C793;
    const double C6905 = C19721 * C1372;
    const double C8108 = C19794 * C2658;
    const double C16508 = C8566 * C2658;
    const double C5454 = C19805 * C2714;
    const double C16040 = C12051 * C2714;
    const double C5521 = C19721 * C2767;
    const double C5694 = C19721 * C2929;
    const double C3568 = C222 * C637;
    const double C3632 = C19721 * C637;
    const double C6636 = C155 * C1078;
    const double C6742 = C19721 * C1078;
    const double C5453 = C222 * C2596;
    const double C5523 = C19721 * C2596;
    const double C8107 = C155 * C2596;
    const double C3570 = C222 * C3453;
    const double C3638 = C19721 * C3453;
    const double C5449 = C222 * C3933;
    const double C5519 = C19721 * C3933;
    const double C6638 = C155 * C6566;
    const double C6748 = C19721 * C6566;
    const double C18950 = C18947 * ae;
    const double C2712 =
        (C19019 * C18994 * C19032 + C18994 * C18947 * ae) / C18799;
    const double C632 = C18924 * C18927 + C18947 * C19058;
    const double C1073 = C18924 * C18927 + C18947 * C19107;
    const double C2594 = C19019 * C18994 * C18947;
    const double C4338 =
        2 * C18994 * C18947 + C18994 * (C18947 + C18970 * C19058);
    const double C4858 = C19019 * (C18947 + C18970 * C19058);
    const double C7523 =
        2 * C19019 * C18947 + C19019 * (C18947 + C18970 * C19107);
    const double C18954 = C18952 + C18946;
    const double C19329 = C19327 + C18946;
    const double C19493 = C19491 + C18946;
    const double C4160 = (ae * (C19025 + C19019 * (C19019 * C19030 + C18946) +
                                C19019 * C18941 * ae) +
                          C18994 * (C19076 + ae * C19019 * C19005 +
                                    C19019 * (C19008 + C19019 * C19079))) /
                         C18802;
    const double C18953 = C18951 * C18931;
    const double C19063 = C19062 * C18931;
    const double C19112 = C19111 * C18931;
    const double C19330 = C19328 * ae;
    const double C3931 = C18994 * C18927 + C19328 * C19107;
    const double C8043 =
        2 * C19019 * C19328 + C19019 * (C19328 + C19341 * C19107);
    const double C19494 = C19492 * ae;
    const double C345 = C19794 * C335;
    const double C570 = C19805 * C560;
    const double C177 = C155 * C96;
    const double C244 = C222 * C96;
    const double C346 = C332 * C96;
    const double C571 = C557 * C96;
    const double C1584 = C155 * C628;
    const double C1648 = C222 * C628;
    const double C1760 = C332 * C628;
    const double C1995 = C557 * C628;
    const double C2120 = C155 * C1069;
    const double C2184 = C222 * C1069;
    const double C2296 = C332 * C1069;
    const double C2531 = C557 * C1069;
    const double C3572 = C222 * C3451;
    const double C3880 = C557 * C3451;
    const double C5451 = C222 * C3930;
    const double C5802 = C557 * C3930;
    const double C6640 = C155 * C6564;
    const double C6806 = C332 * C6564;
    const double C19152 = C19151 + C18935;
    const double C174 = C19794 * C163;
    const double C176 = C19794 * C164;
    const double C2123 = C19794 * C1138;
    const double C7706 = C19721 * C1232;
    const double C13227 = C8564 * C1232;
    const double C2362 = C19805 * C1326;
    const double C12334 = C12051 * C1326;
    const double C2474 = C19794 * C1414;
    const double C6954 = C19794 * C1416;
    const double C172 = C19794 * C158;
    const double C344 = C155 * C158;
    const double C406 = C222 * C158;
    const double C178 = C19794 * C159;
    const double C347 = C155 * C159;
    const double C408 = C222 * C159;
    const double C841 = C155 * C690;
    const double C1585 = C19794 * C690;
    const double C1822 = C222 * C690;
    const double C8649 = C8566 * C690;
    const double C842 = C155 * C691;
    const double C1589 = C19794 * C691;
    const double C1825 = C222 * C691;
    const double C8639 = C8566 * C691;
    const double C1282 = C155 * C1131;
    const double C2121 = C19794 * C1131;
    const double C2358 = C222 * C1131;
    const double C1283 = C155 * C1132;
    const double C2125 = C19794 * C1132;
    const double C2361 = C222 * C1132;
    const double C1285 = C155 * C1134;
    const double C6635 = C19794 * C1134;
    const double C6641 = C19794 * C6625;
    const double C6807 = C155 * C6625;
    const double C19244 = C19243 + C18935;
    const double C241 = C19805 * C230;
    const double C243 = C19805 * C231;
    const double C1651 = C19805 * C747;
    const double C1826 = C19805 * C885;
    const double C3734 = C19805 * C887;
    const double C4693 = C19721 * C929;
    const double C9481 = C8564 * C929;
    const double C1938 = C19794 * C973;
    const double C9001 = C8566 * C973;
    const double C239 = C19805 * C225;
    const double C508 = C155 * C225;
    const double C569 = C222 * C225;
    const double C245 = C19805 * C226;
    const double C510 = C155 * C226;
    const double C572 = C222 * C226;
    const double C1023 = C222 * C740;
    const double C1649 = C19805 * C740;
    const double C1934 = C155 * C740;
    const double C1024 = C222 * C741;
    const double C1653 = C19805 * C741;
    const double C1937 = C155 * C741;
    const double C1026 = C222 * C743;
    const double C3567 = C19805 * C743;
    const double C1464 = C222 * C1181;
    const double C2185 = C19805 * C1181;
    const double C2470 = C155 * C1181;
    const double C12170 = C12051 * C1181;
    const double C1465 = C222 * C1182;
    const double C2189 = C19805 * C1182;
    const double C2473 = C155 * C1182;
    const double C12160 = C12051 * C1182;
    const double C3039 = C222 * C2711;
    const double C5456 = C19805 * C2711;
    const double C8454 = C155 * C2711;
    const double C16036 = C12051 * C2711;
    const double C3573 = C19805 * C3557;
    const double C3881 = C222 * C3557;
    const double C4286 = C222 * C4027;
    const double C5452 = C19805 * C4027;
    const double C16046 = C12051 * C4027;
    const double C18980 = C18977 + C18969;
    const double C19319 = C18949 + C19317;
    const double C19472 = C18949 + C19470;
    const double C8044 =
        (2 * C19019 * C19315 + C19019 * (C19315 + C19556 * C19107)) / C18799;
    const double C18979 = C18976 * C18931;
    const double C19016 = C19005 + C19014;
    const double C19344 = C19340 + C18969;
    const double C19418 = C18994 * C19416;
    const double C7587 =
        (2 * C19019 * C19007 + C19019 * (C19007 + C19416 * C19107)) / C18799;
    const double C19481 = C19005 + C19480;
    const double C19015 = C19008 + C19013;
    const double C19318 = C18961 + C19316;
    const double C6639 = C19794 * C6627;
    const double C19041 = C19030 + C19039;
    const double C19363 = C19030 + C19361;
    const double C19530 = C18994 * C19428;
    const double C19543 = C19019 * C19428;
    const double C4456 =
        (2 * C18994 * C19032 + C18994 * (C19032 + C19428 * C19058)) / C18799;
    const double C4966 = (C19019 * (C19032 + C19428 * C19058) +
                          (C18947 + C18970 * C19058) * ae) /
                         C18799;
    const double C19508 = C19504 + C18969;
    const double C19567 = C19019 * C19565;
    const double C19040 = C19033 + C19038;
    const double C19471 = C18961 + C19469;
    const double C8171 =
        (2 * (ae * C19315 + C19019 * C19555) + ae * (C19315 + C19556 * C19107) +
         C19019 *
             (C19555 + ae * C19019 * C19556 +
              C19019 * (ae * C19556 + C19019 * C18994 * std::pow(C18922, 6) *
                                          bs[6] * C19023))) /
        C18802;
    const double C3571 = C19805 * C3559;
    const double C5450 = C19805 * C4030;
    const double C16042 = C12051 * C4030;
    const double C19054 = C19008 + C19053;
    const double C19325 = C18961 + C19324;
    const double C6735 =
        (3 * (C19049 + C19052 * C19107) +
         C19019 * (2 * C19449 + C19019 * (C19052 + std::pow(C18922, 6) * bs[6] *
                                                       C19046 * C19107))) /
        C18802;
    const double C8229 = C19721 * C4072;
    const double C6746 = C19721 * C6734;
    const double C19068 = C19067 * C18931;
    const double C19362 = C19033 + C19360;
    const double C4635 =
        (2 * (ae * C19032 + C18994 * C19427) + ae * (C19032 + C19428 * C19058) +
         C18994 *
             (C19427 + ae * C18994 * C19428 +
              C18994 * (ae * C19428 + C18994 * C18924 * std::pow(C18922, 6) *
                                          bs[6] * C19073))) /
        C18802;
    const double C7827 =
        (2 * (ae * C19007 + C19019 * C19427) + ae * (C19007 + C19416 * C19107) +
         C19019 *
             (C19427 + ae * C19019 * C19416 +
              C19019 * (ae * C19416 + C19019 * C18924 * std::pow(C18922, 6) *
                                          bs[6] * C19073))) /
        C18802;
    const double C19458 = C19008 + C19457;
    const double C1823 = C19805 * C884;
    const double C2359 = C19805 * C1325;
    const double C12336 = C12051 * C1325;
    const double C19092 = C19033 + C19091;
    const double C19485 = C18961 + C19484;
    const double C8398 =
        (2 * (ae * C19315 + C19019 * C19561) + ae * (C19315 + C19556 * C19107) +
         C19019 *
             (C19561 + ae * C19019 * C19556 +
              C19019 * (ae * C19556 + C19019 * C18994 * std::pow(C18922, 6) *
                                          bs[6] * C19084))) /
        C18802;
    const double C3787 = C19721 * C3777;
    const double C5691 = C19721 * C4200;
    const double C19369 = C19033 + C19368;
    const double C4750 =
        (2 * (ae * C19032 + C18994 * C19431) + ae * (C19032 + C19428 * C19058) +
         C18994 *
             (C19431 + ae * C18994 * C19428 +
              C18994 * (ae * C19428 + C18994 * C18924 * std::pow(C18922, 6) *
                                          bs[6] * C19097))) /
        C18802;
    const double C7935 =
        (2 * (ae * C19007 + C19019 * C19431) + ae * (C19007 + C19416 * C19107) +
         C19019 *
             (C19431 + ae * C19019 * C19416 +
              C19019 * (ae * C19416 + C19019 * C18924 * std::pow(C18922, 6) *
                                          bs[6] * C19097))) /
        C18802;
    const double C19489 = C19008 + C19488;
    const double C1935 = C19794 * C972;
    const double C9003 = C8566 * C972;
    const double C2471 = C19794 * C1413;
    const double C19117 = C19116 * C18931;
    const double C3636 = C19721 * C3624;
    const double C18344 = C12051 * C4031;
    const double C5517 = C19721 * C4071;
    const double C8401 = C19721 * C4201;
    const double C8111 = C155 * C3934;
    const double C8227 = C19721 * C3934;
    const double C6907 = C19721 * C6899;
    const double C18978 = C18975 * ae;
    const double C97 = 3 * (C18927 + C18941 * C18928) +
                       C18924 * (2 * C18947 + C18924 * C18975);
    const double C633 = C18927 + C18941 * C18928 + C18975 * C19058;
    const double C1074 = C18927 + C18941 * C18928 + C18975 * C19107;
    const double C1523 = C18994 * (2 * C18947 + C18924 * C18975);
    const double C2059 = C19019 * (2 * C18947 + C18924 * C18975);
    const double C2595 = C19019 * C18994 * C18975;
    const double C7316 =
        (ae * (C19032 + C19019 * (C19019 * C19428 + C18974) +
               C19019 * C18970 * ae) +
         C18994 *
             (C19427 + ae * C19019 * C19416 +
              C19019 * (ae * C19416 + C19019 * C18924 * std::pow(C18922, 6) *
                                          bs[6] * C19073))) /
        C18802;
    const double C19419 = C19417 * ae;
    const double C7055 = C18994 * C18947 + C19417 * C19107;
    const double C19546 = C19544 * ae;
    const double C19348 = C19346 * ae;
    const double C3452 = 3 * (C18927 + C18941 * C19058) +
                         C18994 * (2 * C19328 + C18994 * C19346);
    const double C3932 = C18927 + C18941 * C19058 + C19346 * C19107;
    const double C5328 = C19019 * (2 * C19328 + C18994 * C19346);
    const double C4161 =
        (C19076 + ae * C19019 * C19005 + C19019 * (C19008 + C19019 * C19079) +
         ae * (C19359 + C19019 * (C19019 * C18994 * C19037 + C19345) +
               C19019 * C19341 * ae) +
         C18994 *
             (ae * (C19030 + C19019 * (C19019 * C19037 + C18969) +
                    C19019 * C18962 * ae) +
              C18994 * (C19079 + ae * C19019 * C19012 +
                        C19019 * (ae * C19012 + C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19073)))) /
        C18802;
    const double C19568 = C19566 * ae;
    const double C19512 = C19510 * ae;
    const double C6565 = 3 * (C18927 + C18941 * C19107) +
                         C19019 * (2 * C19492 + C19019 * C19510);
    const double C14599 = C12051 * C1329;
    const double C7938 = C19794 * C1417;
    const double C1286 = C155 * C1135;
    const double C7593 = C19794 * C1135;
    const double C6956 = C19794 * C6948;
    const double C3736 = C19805 * C3728;
    const double C4638 = C19805 * C888;
    const double C10648 = C8566 * C976;
    const double C1027 = C222 * C744;
    const double C4462 = C19805 * C744;
    const double C85 = (2 * C19864 * C19865) / C19738;
    const double C1521 = C19865 / C19738;
    const double C625 = (2 * C19864 * C19867) / C19738;
    const double C1519 = C19867 / C19738;
    const double C1067 = (2 * C19864 * C19868) / C19738;
    const double C2057 = C19868 / C19738;
    const double C18808 = C18800 * C18807;
    const double C92 =
        ((-C18807 / C18799) / C18803 - (0 * be) / C18799) / C18803 -
        (0 * be) / C18799;
    const double C3084 = -C18807 / C18799;
    const double C8570 = (-C18807 / C18799) / C18803 - (0 * be) / C18799;
    const double C9115 = C8563 * C642;
    const double C9311 = C8563 * C637;
    const double C9307 = C8563 * C793;
    const double C9301 = C8563 * C792;
    const double C9297 = C8563 * C636;
    const double C9485 = C8563 * C931;
    const double C9479 = C8563 * C930;
    const double C10576 = C8563 * C929;
    const double C11656 = C8563 * C2596;
    const double C11652 = C8563 * C2767;
    const double C11866 = C8563 * C2929;
    const double C13041 = C8563 * C1083;
    const double C13235 = C8563 * C1078;
    const double C13231 = C8563 * C1234;
    const double C13225 = C8563 * C1233;
    const double C13221 = C8563 * C1077;
    const double C13405 = C8563 * C1372;
    const double C13399 = C8563 * C1371;
    const double C14457 = C8563 * C1232;
    const double C18858 = C18833 * C18850;
    const double C3133 =
        ((-C18847 / C18799) / C18803 -
         ((C19794 - (C18833 * C18850) / C18799) * be) / C18799) /
            C18803 -
        ((C18833 * ((-C18850 / C18799) / C18803 - (0 * be) / C18799) + C8566) *
         be) /
            C18799;
    const double C3134 =
        ((-C18850 / C18799) / C18803 - (0 * be) / C18799) / C18803 -
        (0 * be) / C18799;
    const double C8634 = (-C18850 / C18799) / C18803 - (0 * be) / C18799;
    const double C180 = C169 + C170;
    const double C179 = C167 + C168;
    const double C513 = C505 + C506;
    const double C6643 = C6632 + C6633;
    const double C6642 = C6630 + C6631;
    const double C6957 = C6951 + C6952;
    const double C350 = C340 + C341;
    const double C6810 = C6802 + C1284;
    const double C8651 = C8565 * C158;
    const double C8647 = C8565 * C163;
    const double C8641 = C8565 * C162;
    const double C8637 = C8565 * C157;
    const double C8825 = C8565 * C335;
    const double C8816 = C8565 * C334;
    const double C9005 = C8565 * C500;
    const double C8999 = C8565 * C499;
    const double C10208 = C8565 * C691;
    const double C10650 = C8565 * C973;
    const double C10864 = C8565 * C1132;
    const double C10860 = C8565 * C1138;
    const double C11293 = C8565 * C1414;
    const double C16516 = C8565 * C1134;
    const double C16512 = C8565 * C1140;
    const double C16506 = C8565 * C1139;
    const double C16502 = C8565 * C1133;
    const double C16684 = C8565 * C1277;
    const double C16862 = C8565 * C1416;
    const double C16856 = C8565 * C1415;
    const double C18270 = C8565 * C2658;
    const double C3132 =
        ((-(0 * be) / C18799) / C18803 -
         ((0 - (C18833 * C18847) / C18799) * be) / C18799) /
            C18803 -
        ((C18833 * ((-C18847 / C18799) / C18803 -
                    ((C19794 - (C18833 * C18850) / C18799) * be) / C18799) +
          C8565) *
         be) /
            C18799 +
        (-C18850 / C18799) / C18803 - (0 * be) / C18799;
    const double C18884 = C18836 * C18876;
    const double C5933 =
        ((-C18873 / C18799) / C18803 -
         ((C19805 - (C18836 * C18876) / C18799) * be) / C18799) /
            C18803 -
        ((C18836 * ((-C18876 / C18799) / C18803 - (0 * be) / C18799) + C12051) *
         be) /
            C18799;
    const double C5934 =
        ((-C18876 / C18799) / C18803 - (0 * be) / C18799) / C18803 -
        (0 * be) / C18799;
    const double C12155 = (-C18876 / C18799) / C18803 - (0 * be) / C18799;
    const double C247 = C236 + C237;
    const double C246 = C234 + C235;
    const double C411 = C403 + C404;
    const double C3575 = C3564 + C3565;
    const double C3574 = C3562 + C3563;
    const double C3737 = C3731 + C3732;
    const double C575 = C565 + C566;
    const double C3884 = C3876 + C1025;
    const double C12172 = C12050 * C225;
    const double C12168 = C12050 * C230;
    const double C12162 = C12050 * C229;
    const double C12158 = C12050 * C224;
    const double C12338 = C12050 * C398;
    const double C12332 = C12050 * C397;
    const double C12516 = C12050 * C560;
    const double C12507 = C12050 * C559;
    const double C13729 = C12050 * C741;
    const double C13725 = C12050 * C747;
    const double C13940 = C12050 * C885;
    const double C14381 = C12050 * C1182;
    const double C14601 = C12050 * C1326;
    const double C16048 = C12050 * C743;
    const double C16044 = C12050 * C749;
    const double C16038 = C12050 * C748;
    const double C16034 = C12050 * C742;
    const double C16216 = C12050 * C887;
    const double C16210 = C12050 * C886;
    const double C16380 = C12050 * C1018;
    const double C18350 = C12050 * C2711;
    const double C18346 = C12050 * C2714;
    const double C5932 =
        ((-(0 * be) / C18799) / C18803 -
         ((0 - (C18836 * C18873) / C18799) * be) / C18799) /
            C18803 -
        ((C18836 * ((-C18873 / C18799) / C18803 -
                    ((C19805 - (C18836 * C18876) / C18799) * be) / C18799) +
          C12050) *
         be) /
            C18799 +
        (-C18876 / C18799) / C18803 - (0 * be) / C18799;
    const double C18939 = ae * C18938;
    const double C100 =
        (C18925 * C18923 * C18932 + C18924 * C18938 + C18924 * C18927 * ae) /
        C18799;
    const double C635 = (C18994 * C18938) / C18799;
    const double C1076 = (C19019 * C18938) / C18799;
    const double C3577 = C3568 + C3569;
    const double C6645 = C6636 + C6637;
    const double C5459 = C5453 + C5454;
    const double C8114 = C8107 + C8108;
    const double C19156 = C19155 + C18950;
    const double C19248 = C19247 + C18950;
    const double C3040 = C222 * C2712;
    const double C10938 = C19805 * C2712;
    const double C13727 = C12051 * C2712;
    const double C14075 = C155 * C2712;
    const double C4461 = C222 * C632;
    const double C4803 = C557 * C632;
    const double C7592 = C155 * C1073;
    const double C7771 = C332 * C1073;
    const double C10937 = C222 * C2594;
    const double C11362 = C557 * C2594;
    const double C13652 = C155 * C2594;
    const double C13866 = C332 * C2594;
    const double C18956 = ae * C18954;
    const double C18955 = C18924 * C18954;
    const double C18965 = 2 * C18954;
    const double C19119 = C18994 * C18954;
    const double C19187 = C19019 * C18954;
    const double C638 = (C18938 + C18954 * C19058) / C18799;
    const double C1079 = (C18938 + C18954 * C19107) / C18799;
    const double C19332 = ae * C19329;
    const double C19331 = C18994 * C19329;
    const double C19339 = 2 * C19329;
    const double C19385 = C19019 * C19329;
    const double C19496 = ae * C19493;
    const double C19495 = C19019 * C19493;
    const double C19503 = 2 * C19493;
    const double C18570 = C12051 * C4160;
    const double C641 =
        (2 * ae * C18994 * C18936 + C18924 * C18994 * C18953) / C18802;
    const double C643 =
        ((C18927 + C18928 * C18929 * C18933) * C18931 + C18953 * C19058) /
        C18802;
    const double C1082 =
        (2 * ae * C19019 * C18936 + C18924 * C19019 * C18953) / C18802;
    const double C1084 =
        ((C18927 + C18928 * C18929 * C18933) * C18931 + C18953 * C19107) /
        C18802;
    const double C2599 = (C19019 * C18994 * C18953) / C18802;
    const double C336 =
        (2 * C18924 * C19063 +
         C18924 *
             (C19063 + (C18962 + C19058 * C18963 * C18964) * C18931 * C18928)) /
        C18802;
    const double C835 =
        (2 * ae * C18924 * C19000 + C18994 * C18924 * C19063) / C18802;
    const double C1276 = (C19019 * C18924 * C19063) / C18802;
    const double C1278 =
        ((C18927 + C19058 * C18929 * C18933) * C18931 + C19063 * C19107) /
        C18802;
    const double C2820 =
        (2 * ae * C19019 * C19000 + C18994 * C19019 * C19063) / C18802;
    const double C561 =
        (2 * C18924 * C19112 +
         C18924 *
             (C19112 + (C18962 + C19107 * C18963 * C18964) * C18931 * C18928)) /
        C18802;
    const double C1017 = (C18994 * C18924 * C19112) / C18802;
    const double C1019 =
        ((C18927 + C19107 * C18929 * C18933) * C18931 + C19112 * C19058) /
        C18802;
    const double C1458 =
        (2 * ae * C18924 * C19025 + C19019 * C18924 * C19112) / C18802;
    const double C3035 =
        (2 * ae * C18994 * C19025 + C19019 * C18994 * C19112) / C18802;
    const double C19404 = C19403 + C19330;
    const double C4159 =
        (ae * C19000 + C19019 * C19076 + ae * (C19019 * C19359 + C19330) +
         C18994 * (ae * (C19019 * C19030 + C18946) +
                   C18994 * (C19008 + C19019 * C19079))) /
        C18802;
    const double C8109 = C155 * C3931;
    const double C8287 = C332 * C3931;
    const double C19153 = ae * C19152;
    const double C693 =
        (C18925 * C18923 * C18997 + C18994 * C19152 + C18994 * C18927 * ae) /
        C18799;
    const double C2655 = (C19019 * C19152) / C18799;
    const double C3984 = (C19152 + C19329 * C19107) / C18799;
    const double C181 = C171 + C172;
    const double C351 = C343 + C344;
    const double C412 = C406 + C407;
    const double C184 = C177 + C178;
    const double C352 = C346 + C347;
    const double C413 = C408 + C409;
    const double C1765 = C1760 + C841;
    const double C1591 = C1584 + C1585;
    const double C1766 = C1762 + C842;
    const double C1593 = C1588 + C1589;
    const double C2301 = C2296 + C1282;
    const double C2127 = C2120 + C2121;
    const double C2302 = C2298 + C1283;
    const double C2129 = C2124 + C2125;
    const double C2365 = C2361 + C2362;
    const double C6811 = C6804 + C1285;
    const double C6644 = C6634 + C6635;
    const double C6647 = C6640 + C6641;
    const double C6812 = C6806 + C6807;
    const double C19245 = ae * C19244;
    const double C1184 =
        (C18925 * C18923 * C19022 + C19019 * C19244 + C19019 * C18927 * ae) /
        C18799;
    const double C1829 = C1825 + C1826;
    const double C248 = C238 + C239;
    const double C514 = C508 + C509;
    const double C576 = C568 + C569;
    const double C251 = C244 + C245;
    const double C515 = C510 + C511;
    const double C577 = C571 + C572;
    const double C2000 = C1995 + C1023;
    const double C1655 = C1648 + C1649;
    const double C2001 = C1997 + C1024;
    const double C1657 = C1652 + C1653;
    const double C1941 = C1937 + C1938;
    const double C3885 = C3878 + C1026;
    const double C3576 = C3566 + C3567;
    const double C2536 = C2531 + C1464;
    const double C2191 = C2184 + C2185;
    const double C2537 = C2533 + C1465;
    const double C2193 = C2188 + C2189;
    const double C2477 = C2473 + C2474;
    const double C5808 = C5804 + C3039;
    const double C5460 = C5455 + C5456;
    const double C3579 = C3572 + C3573;
    const double C3886 = C3880 + C3881;
    const double C5807 = C5802 + C4286;
    const double C5458 = C5451 + C5452;
    const double C18983 = ae * C18980;
    const double C18982 = C18924 * C18980;
    const double C19126 = C18980 * C19058;
    const double C19194 = C18980 * C19107;
    const double C19257 = C18994 * C18980;
    const double C19271 = C19019 * C18980;
    const double C4032 =
        (C19029 + C19036 * C19058 + ae * C19019 * C19319 +
         C19019 *
             (ae * C19319 + C19019 * (C19036 + std::pow(C18922, 6) * bs[6] *
                                                   C19023 * C19058))) /
        C18802;
    const double C4202 =
        (C19087 + C19090 * C19058 + ae * C19019 * C19319 +
         C19019 *
             (ae * C19319 + C19019 * (C19090 + std::pow(C18922, 6) * bs[6] *
                                                   C19084 * C19058))) /
        C18802;
    const double C5447 =
        (ae * (2 * C19315 + C18994 * C19319) +
         C19019 * (2 * C18994 * C19036 +
                   C18994 * (C19036 +
                             std::pow(C18922, 6) * bs[6] * C19023 * C19058))) /
        C18802;
    const double C5514 =
        (2 * (ae * C19019 * C18949 + C18994 * C19449) + ae * C19019 * C19319 +
         C18994 * (C19449 + ae * C19019 * C18994 * C18973 +
                   C18994 * (ae * C19019 * C18973 + C18994 * C19019 *
                                                        std::pow(C18922, 6) *
                                                        bs[6] * C19046))) /
        C18802;
    const double C5688 =
        (ae * (2 * C19315 + C18994 * C19319) +
         C19019 * (2 * C18994 * C19090 +
                   C18994 * (C19090 +
                             std::pow(C18922, 6) * bs[6] * C19084 * C19058))) /
        C18802;
    const double C3454 = (3 * (C18936 + C18949 * C19058) +
                          C18994 * (2 * C19315 + C18994 * C19319)) /
                         C18799;
    const double C3935 = (C18936 + C18949 * C19058 + C19319 * C19107) / C18799;
    const double C5329 = (C19019 * (2 * C19315 + C18994 * C19319)) / C18799;
    const double C8222 =
        (ae * (2 * C19468 + C19019 * C19472) +
         C18994 * (2 * C19449 + C19019 * (C19052 + std::pow(C18922, 6) * bs[6] *
                                                       C19046 * C19107))) /
        C18802;
    const double C6567 = (3 * (C18936 + C18949 * C19107) +
                          C19019 * (2 * C19468 + C19019 * C19472)) /
                         C18799;
    const double C18981 = C18924 * C18979;
    const double C19255 = C18994 * C18979;
    const double C19269 = C19019 * C18979;
    const double C644 = (2 * ae * (C18936 + C18949 * C19058) +
                         C18924 * (C18953 + C18979 * C19058)) /
                        C18802;
    const double C1085 = (2 * ae * (C18936 + C18949 * C19107) +
                          C18924 * (C18953 + C18979 * C19107)) /
                         C18802;
    const double C3455 =
        (2 * C18994 * C18953 + C18994 * (C18953 + C18979 * C19058)) / C18802;
    const double C3936 = (C19019 * (C18953 + C18979 * C19058)) / C18802;
    const double C3938 =
        (C18953 + C18979 * C19058 +
         (C18979 + (C18963 * C18964 + C18928 * bs[6] * std::pow(C18922, 6)) *
                       C18931 * C19058) *
             C19107) /
        C18802;
    const double C4860 = (2 * ae * C19019 * C19319 +
                          C18924 * C19019 *
                              (C18979 + (C18963 * C18964 +
                                         C18928 * bs[6] * std::pow(C18922, 6)) *
                                            C18931 * C19058)) /
                         C18802;
    const double C6568 =
        (2 * C19019 * C18953 + C19019 * (C18953 + C18979 * C19107)) / C18802;
    const double C19159 = C18994 * C19016;
    const double C1330 =
        (C19076 + C19079 * C18928 + ae * C19019 * C19016 +
         C19019 *
             (ae * C19016 + C19019 * (C19079 + std::pow(C18922, 6) * bs[6] *
                                                   C19073 * C18928))) /
        C18802;
    const double C1418 =
        (C19100 + C19103 * C18928 + ae * C19019 * C19016 +
         C19019 *
             (ae * C19016 + C19019 * (C19103 + std::pow(C18922, 6) * bs[6] *
                                                   C19097 * C18928))) /
        C18802;
    const double C2356 =
        (ae * (2 * C19007 + C18924 * C19016) +
         C19019 * (2 * C18924 * C19079 +
                   C18924 * (C19079 +
                             std::pow(C18922, 6) * bs[6] * C19073 * C18928))) /
        C18802;
    const double C2468 =
        (ae * (2 * C19007 + C18924 * C19016) +
         C19019 * (2 * C18924 * C19103 +
                   C18924 * (C19103 +
                             std::pow(C18922, 6) * bs[6] * C19097 * C18928))) /
        C18802;
    const double C160 = (3 * (C19000 + C19005 * C18928) +
                         C18924 * (2 * C19007 + C18924 * C19016)) /
                        C18799;
    const double C1136 = (C19000 + C19005 * C18928 + C19016 * C19107) / C18799;
    const double C1579 = (C18994 * (2 * C19007 + C18924 * C19016) +
                          (2 * C18947 + C18924 * C18975) * ae) /
                         C18799;
    const double C2115 = (C19019 * (2 * C19007 + C18924 * C19016)) / C18799;
    const double C19349 = ae * C19344;
    const double C19347 = C18994 * C19344;
    const double C19389 = C19344 * C19107;
    const double C19453 = C19019 * C19344;
    const double C19420 = C19418 + C18974;
    const double C7773 = C155 * C7587;
    const double C6626 = (3 * (C19000 + C19005 * C19107) +
                          C19019 * (2 * C19479 + C19019 * C19481)) /
                         C18799;
    const double C165 =
        (3 * (C19004 + ae * C19007 + C18924 * C19015) +
         ae * (2 * C19007 + C18924 * C19016) +
         C18924 *
             (2 * C19015 + ae * C19016 +
              C18924 * (C19011 + ae * C18924 * C19012 +
                        C18924 * (ae * C19012 + C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C1137 =
        (C19019 * (C19004 + ae * C19007 + C18924 * C19015)) / C18802;
    const double C1141 =
        (ae * C19000 + C18924 * C19004 + C19015 * C19107) / C18802;
    const double C1142 =
        (C19004 + ae * C19007 + C18924 * C19015 +
         (C19011 + ae * C18924 * C19012 +
          C18924 *
              (ae * C19012 + C18924 * std::pow(C18922, 6) * bs[6] * C18998)) *
             C19107) /
        C18802;
    const double C2116 =
        (C19019 *
         (2 * C19015 + ae * C19016 +
          C18924 * (C19011 + ae * C18924 * C19012 +
                    C18924 * (ae * C19012 + C18924 * std::pow(C18922, 6) *
                                                bs[6] * C18998)))) /
        C18802;
    const double C7588 =
        (2 * C19019 * C19015 +
         C19019 * (C19015 + (ae * C19012 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C18998) *
                                C19107)) /
        C18802;
    const double C3518 =
        (3 * (C19004 + ae * C19315 + C18994 * C19318) +
         ae * (2 * C19315 + C18994 * C19319) +
         C18994 *
             (2 * C19318 + ae * C19319 +
              C18994 * (C19011 + ae * C18994 * C18973 +
                        C18994 * (ae * C18973 + C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C3986 =
        (C19019 * (C19004 + ae * C19315 + C18994 * C19318)) / C18802;
    const double C3987 =
        (ae * C18936 + C18994 * C19004 + C19318 * C19107) / C18802;
    const double C3988 =
        (C19004 + ae * C19315 + C18994 * C19318 +
         (C19011 + ae * C18994 * C18973 +
          C18994 *
              (ae * C18973 + C18994 * std::pow(C18922, 6) * bs[6] * C18998)) *
             C19107) /
        C18802;
    const double C5395 =
        (C19019 *
         (2 * C19318 + ae * C19319 +
          C18994 * (C19011 + ae * C18994 * C18973 +
                    C18994 * (ae * C18973 + C18994 * std::pow(C18922, 6) *
                                                bs[6] * C18998)))) /
        C18802;
    const double C8103 =
        (2 * C19019 * C19318 +
         C19019 * (C19318 + (ae * C18973 +
                             C18994 * std::pow(C18922, 6) * bs[6] * C18998) *
                                C19107)) /
        C18802;
    const double C6646 = C6638 + C6639;
    const double C19251 = C19019 * C19041;
    const double C889 =
        (C19076 + C19079 * C18928 + ae * C18994 * C19041 +
         C18994 *
             (ae * C19041 + C18994 * (C19079 + std::pow(C18922, 6) * bs[6] *
                                                   C19073 * C18928))) /
        C18802;
    const double C977 =
        (C19100 + C19103 * C18928 + ae * C18994 * C19041 +
         C18994 *
             (ae * C19041 + C18994 * (C19103 + std::pow(C18922, 6) * bs[6] *
                                                   C19097 * C18928))) /
        C18802;
    const double C1820 =
        (ae * (2 * C19032 + C18924 * C19041) +
         C18994 * (2 * C18924 * C19079 +
                   C18924 * (C19079 +
                             std::pow(C18922, 6) * bs[6] * C19073 * C18928))) /
        C18802;
    const double C1932 =
        (ae * (2 * C19032 + C18924 * C19041) +
         C18994 * (2 * C18924 * C19103 +
                   C18924 * (C19103 +
                             std::pow(C18922, 6) * bs[6] * C19097 * C18928))) /
        C18802;
    const double C227 = (3 * (C19025 + C19030 * C18928) +
                         C18924 * (2 * C19032 + C18924 * C19041)) /
                        C18799;
    const double C745 = (C19025 + C19030 * C18928 + C19041 * C19058) / C18799;
    const double C1643 = (C18994 * (2 * C19032 + C18924 * C19041)) / C18799;
    const double C2179 = (C19019 * (2 * C19032 + C18924 * C19041) +
                          (2 * C18947 + C18924 * C18975) * ae) /
                         C18799;
    const double C2713 =
        (C19019 * C18994 * C19041 + C18994 * C18975 * ae) / C18799;
    const double C19407 = C19019 * C19363;
    const double C3558 = (3 * (C19025 + C19030 * C19058) +
                          C18994 * (2 * C19359 + C18994 * C19363)) /
                         C18799;
    const double C5446 = (C19019 * (2 * C19359 + C18994 * C19363) +
                          (2 * C19328 + C18994 * C19346) * ae) /
                         C18799;
    const double C19531 = C19019 * C19530;
    const double C19545 = C19543 + C18974;
    const double C4805 = C222 * C4456;
    const double C5278 = C222 * C4966;
    const double C19513 = ae * C19508;
    const double C19511 = C19019 * C19508;
    const double C19569 = C19567 + C19345;
    const double C232 =
        (3 * (C19029 + ae * C19032 + C18924 * C19040) +
         ae * (2 * C19032 + C18924 * C19041) +
         C18924 *
             (2 * C19040 + ae * C19041 +
              C18924 * (C19036 + ae * C18924 * C19037 +
                        C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19023)))) /
        C18802;
    const double C746 =
        (C18994 * (C19029 + ae * C19032 + C18924 * C19040)) / C18802;
    const double C750 =
        (ae * C19025 + C18924 * C19029 + C19040 * C19058) / C18802;
    const double C751 = (C19029 + ae * C19032 + C18924 * C19040 +
                         (C19036 + ae * C18924 * C19037 +
                          C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                      bs[6] * C19023)) *
                             C19058) /
                        C18802;
    const double C1644 =
        (C18994 *
         (2 * C19040 + ae * C19041 +
          C18924 * (C19036 + ae * C18924 * C19037 +
                    C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                bs[6] * C19023)))) /
        C18802;
    const double C4457 =
        (2 * C18994 * C19040 +
         C18994 * (C19040 + (ae * C19037 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C19023) *
                                C19058)) /
        C18802;
    const double C6695 =
        (3 * (C19029 + ae * C19468 + C19019 * C19471) +
         ae * (2 * C19468 + C19019 * C19472) +
         C19019 *
             (2 * C19471 + ae * C19472 +
              C19019 * (C19036 + ae * C19019 * C18973 +
                        C19019 * (ae * C18973 + C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19023)))) /
        C18802;
    const double C3578 = C3570 + C3571;
    const double C5457 = C5449 + C5450;
    const double C293 =
        (3 * (C19049 + ae * C19007 + C18924 * C19054) +
         ae * (2 * C19007 + C18924 * C19016) +
         C18924 *
             (2 * C19054 + ae * C19016 +
              C18924 * (C19052 + ae * C18924 * C19012 +
                        C18924 * (ae * C19012 + C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19046)))) /
        C18802;
    const double C1231 =
        (C19019 * (C19049 + ae * C19007 + C18924 * C19054)) / C18802;
    const double C1235 =
        (ae * C19000 + C18924 * C19049 + C19054 * C19107) / C18802;
    const double C1236 =
        (C19049 + ae * C19007 + C18924 * C19054 +
         (C19052 + ae * C18924 * C19012 +
          C18924 *
              (ae * C19012 + C18924 * std::pow(C18922, 6) * bs[6] * C19046)) *
             C19107) /
        C18802;
    const double C2243 =
        (C19019 *
         (2 * C19054 + ae * C19016 +
          C18924 * (C19052 + ae * C18924 * C19012 +
                    C18924 * (ae * C19012 + C18924 * std::pow(C18922, 6) *
                                                bs[6] * C19046)))) /
        C18802;
    const double C7701 =
        (2 * C19019 * C19054 +
         C19019 * (C19054 + (ae * C19012 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C19046) *
                                C19107)) /
        C18802;
    const double C3625 =
        (3 * (C19049 + ae * C19315 + C18994 * C19325) +
         ae * (2 * C19315 + C18994 * C19319) +
         C18994 *
             (2 * C19325 + ae * C19319 +
              C18994 * (C19052 + ae * C18994 * C18973 +
                        C18994 * (ae * C18973 + C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C19046)))) /
        C18802;
    const double C19338 = C18994 * C19068;
    const double C19415 = C18924 * C19068;
    const double C19451 = C19019 * C19068;
    const double C337 =
        (3 * (C19063 + C19068 * C18928) +
         C18924 * (2 * C18924 * C19068 +
                   C18924 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C834 = (2 * ae * (C19000 + C19005 * C18928) +
                         C18994 * (C19063 + C19068 * C18928)) /
                        C18802;
    const double C1275 = (C19019 * (C19063 + C19068 * C18928)) / C18802;
    const double C1279 = (C18924 * C19063 + C18924 * C19068 * C19107) / C18802;
    const double C1280 =
        (C19063 + C19068 * C18928 +
         (C19068 + (C18963 * C18964 + C19058 * bs[6] * std::pow(C18922, 6)) *
                       C18931 * C18928) *
             C19107) /
        C18802;
    const double C1758 =
        (2 * ae * (2 * C19007 + C18924 * C19016) +
         C18994 * (2 * C18924 * C19068 +
                   C18924 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C2294 =
        (C19019 * (2 * C18924 * C19068 +
                   C18924 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C2821 =
        (2 * ae * C19019 * C19007 + C18994 * C19019 * C18924 * C19068) / C18802;
    const double C2822 = (2 * ae * C19019 * C19016 +
                          C18994 * C19019 *
                              (C19068 + (C18963 * C18964 +
                                         C19058 * bs[6] * std::pow(C18922, 6)) *
                                            C18931 * C18928)) /
                         C18802;
    const double C4113 = (2 * ae * (C19000 + C19005 * C19107) +
                          C18994 * (C19063 + C19068 * C19107)) /
                         C18802;
    const double C6799 =
        (2 * C19019 * C19063 + C19019 * (C19063 + C19068 * C19107)) / C18802;
    const double C3729 =
        (3 * (C19076 + ae * C19359 + C18994 * C19362) +
         ae * (2 * C19359 + C18994 * C19363) +
         C18994 *
             (2 * C19362 + ae * C19363 +
              C18994 * (C19079 + ae * C18994 * C19037 +
                        C18994 * (ae * C19037 + C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C19073)))) /
        C18802;
    const double C6859 =
        (2 * (ae * C19000 + C19019 * C19076) + ae * (C19000 + C19005 * C19107) +
         C19019 * (C19076 + ae * C19019 * C19005 + C19019 * C19458)) /
        C18802;
    const double C6860 =
        (3 * (C19076 + ae * C19479 + C19019 * C19458) +
         ae * (2 * C19479 + C19019 * C19481) +
         C19019 *
             (2 * C19458 + ae * C19481 +
              C19019 * (C19079 + ae * C19019 * C19012 +
                        C19019 * (ae * C19012 + C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19073)))) /
        C18802;
    const double C1828 = C1822 + C1823;
    const double C2364 = C2358 + C2359;
    const double C459 =
        (3 * (C19087 + ae * C19032 + C18924 * C19092) +
         ae * (2 * C19032 + C18924 * C19041) +
         C18924 *
             (2 * C19092 + ae * C19041 +
              C18924 * (C19090 + ae * C18924 * C19037 +
                        C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19084)))) /
        C18802;
    const double C928 =
        (C18994 * (C19087 + ae * C19032 + C18924 * C19092)) / C18802;
    const double C932 =
        (ae * C19025 + C18924 * C19087 + C19092 * C19058) / C18802;
    const double C933 = (C19087 + ae * C19032 + C18924 * C19092 +
                         (C19090 + ae * C18924 * C19037 +
                          C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                      bs[6] * C19084)) *
                             C19058) /
                        C18802;
    const double C1881 =
        (C18994 *
         (2 * C19092 + ae * C19041 +
          C18924 * (C19090 + ae * C18924 * C19037 +
                    C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                bs[6] * C19084)))) /
        C18802;
    const double C4689 =
        (2 * C18994 * C19092 +
         C18994 * (C19092 + (ae * C19037 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C19084) *
                                C19058)) /
        C18802;
    const double C6900 =
        (3 * (C19087 + ae * C19468 + C19019 * C19485) +
         ae * (2 * C19468 + C19019 * C19472) +
         C19019 *
             (2 * C19485 + ae * C19472 +
              C19019 * (C19090 + ae * C19019 * C18973 +
                        C19019 * (ae * C18973 + C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19084)))) /
        C18802;
    const double C3834 =
        (3 * (C19100 + ae * C19359 + C18994 * C19369) +
         ae * (2 * C19359 + C18994 * C19363) +
         C18994 *
             (2 * C19369 + ae * C19363 +
              C18994 * (C19103 + ae * C18994 * C19037 +
                        C18994 * (ae * C19037 + C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C19097)))) /
        C18802;
    const double C6949 =
        (3 * (C19100 + ae * C19479 + C19019 * C19489) +
         ae * (2 * C19479 + C19019 * C19481) +
         C19019 *
             (2 * C19489 + ae * C19481 +
              C19019 * (C19103 + ae * C19019 * C19012 +
                        C19019 * (ae * C19012 + C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19097)))) /
        C18802;
    const double C1940 = C1934 + C1935;
    const double C2476 = C2470 + C2471;
    const double C19433 = C18924 * C19117;
    const double C19502 = C19019 * C19117;
    const double C19564 = C18994 * C19117;
    const double C562 =
        (3 * (C19112 + C19117 * C18928) +
         C18924 * (2 * C18924 * C19117 +
                   C18924 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C1016 = (C18994 * (C19112 + C19117 * C18928)) / C18802;
    const double C1020 = (C18924 * C19112 + C18924 * C19117 * C19058) / C18802;
    const double C1021 =
        (C19112 + C19117 * C18928 +
         (C19117 + (C18963 * C18964 + C19107 * bs[6] * std::pow(C18922, 6)) *
                       C18931 * C18928) *
             C19058) /
        C18802;
    const double C1457 = (2 * ae * (C19025 + C19030 * C18928) +
                          C19019 * (C19112 + C19117 * C18928)) /
                         C18802;
    const double C1993 =
        (C18994 * (2 * C18924 * C19117 +
                   C18924 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C2529 =
        (2 * ae * (2 * C19032 + C18924 * C19041) +
         C19019 * (2 * C18924 * C19117 +
                   C18924 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C3036 =
        (2 * ae * C18994 * C19032 + C19019 * C18994 * C18924 * C19117) / C18802;
    const double C3037 = (2 * ae * C18994 * C19041 +
                          C19019 * C18994 *
                              (C19117 + (C18963 * C18964 +
                                         C19107 * bs[6] * std::pow(C18922, 6)) *
                                            C18931 * C18928)) /
                         C18802;
    const double C3873 =
        (2 * C18994 * C19112 + C18994 * (C19112 + C19117 * C19058)) / C18802;
    const double C3874 =
        (3 * (C19112 + C19117 * C19058) +
         C18994 * (2 * C18994 * C19117 +
                   C18994 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C4282 = (2 * ae * (C19025 + C19030 * C19058) +
                          C19019 * (C19112 + C19117 * C19058)) /
                         C18802;
    const double C5800 =
        (2 * ae * (2 * C19359 + C18994 * C19363) +
         C19019 * (2 * C18994 * C19117 +
                   C18994 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C5123 =
        (ae * C19007 + C19019 * C19427 +
         ae * (C19019 * C18994 * C19428 + C19419) +
         C18994 *
             (ae * (C19019 * C19428 + C18974) +
              C18994 * (ae * C19416 + C19019 * C18924 * std::pow(C18922, 6) *
                                          bs[6] * C19073))) /
        C18802;
    const double C18809 = C18808 / C18799;
    const double C3091 = C3084 * C99;
    const double C3088 = C3084 * C637;
    const double C3087 = C3084 * C636;
    const double C3086 = C3084 * C98;
    const double C3463 = C3084 * C3453;
    const double C3637 = C3084 * C3451;
    const double C3631 = C3084 * C631;
    const double C3629 = C3084 * C692;
    const double C3627 = C3084 * C630;
    const double C3786 = C3084 * C3557;
    const double C3784 = C3084 * C743;
    const double C3781 = C3084 * C742;
    const double C3944 = C3084 * C3934;
    const double C3943 = C3084 * C1078;
    const double C3942 = C3084 * C1077;
    const double C3941 = C3084 * C2596;
    const double C3940 = C3084 * C3933;
    const double C4524 = C3084 * C632;
    const double C4522 = C3084 * C691;
    const double C4520 = C3084 * C629;
    const double C4695 = C3084 * C744;
    const double C4692 = C3084 * C741;
    const double C5522 = C3084 * C2593;
    const double C5518 = C3084 * C3930;
    const double C5693 = C3084 * C2711;
    const double C5690 = C3084 * C4027;
    const double C6576 = C3084 * C6566;
    const double C6747 = C3084 * C6564;
    const double C6745 = C3084 * C6625;
    const double C6743 = C3084 * C1134;
    const double C6741 = C3084 * C1072;
    const double C6739 = C3084 * C1133;
    const double C6737 = C3084 * C1071;
    const double C6902 = C3084 * C1183;
    const double C7709 = C3084 * C1135;
    const double C7707 = C3084 * C1073;
    const double C7705 = C3084 * C1132;
    const double C7703 = C3084 * C1070;
    const double C7880 = C3084 * C1182;
    const double C8049 = C3084 * C8044;
    const double C8226 = C3084 * C3931;
    const double C17190 = C3084 * C2594;
    const double C17397 = C3084 * C2712;
    const double C8573 = C8570 * C99;
    const double C9308 = C8570 * C632;
    const double C9302 = C8570 * C691;
    const double C9298 = C8570 * C629;
    const double C9482 = C8570 * C744;
    const double C9480 = C8570 * C741;
    const double C10355 = C8570 * C690;
    const double C10351 = C8570 * C628;
    const double C10577 = C8570 * C740;
    const double C11653 = C8570 * C2594;
    const double C11863 = C8570 * C2712;
    const double C13232 = C8570 * C1073;
    const double C13228 = C8570 * C1135;
    const double C13226 = C8570 * C1132;
    const double C13222 = C8570 * C1070;
    const double C13400 = C8570 * C1182;
    const double C14458 = C8570 * C1131;
    const double C14454 = C8570 * C1069;
    const double C14672 = C8570 * C1181;
    const double C18859 = C18858 / C18799;
    const double C3260 = C3133 * C690;
    const double C3257 = C3133 * C691;
    const double C3254 = C3133 * C692;
    const double C8648 = C8634 * C628;
    const double C8638 = C8634 * C629;
    const double C8821 = C8634 * C690;
    const double C8818 = C8634 * C691;
    const double C8813 = C8634 * C692;
    const double C9002 = C8634 * C740;
    const double C9000 = C8634 * C741;
    const double C10205 = C8634 * C632;
    const double C10647 = C8634 * C744;
    const double C10861 = C8634 * C2594;
    const double C11290 = C8634 * C2712;
    const double C16513 = C8634 * C3931;
    const double C16509 = C8634 * C3934;
    const double C16507 = C8634 * C2596;
    const double C16503 = C8634 * C2593;
    const double C16857 = C8634 * C2711;
    const double C18271 = C8634 * C3933;
    const double C18267 = C8634 * C3930;
    const double C18713 = C8634 * C4027;
    const double C504 = C179 * C222;
    const double C516 = C513 * C19805;
    const double C12444 = C513 * C12050;
    const double C6649 = C6643 * C19721;
    const double C13113 = C6643 * C8563;
    const double C6648 = C6642 * C3084;
    const double C353 = C350 + C341;
    const double C6813 = C6810 + C1284;
    const double C3259 = C3132 * C158;
    const double C3258 = C3132 * C157;
    const double C3253 = C3132 * C156;
    const double C3687 = C3132 * C692;
    const double C4119 = C3132 * C1134;
    const double C4118 = C3132 * C1133;
    const double C4583 = C3132 * C691;
    const double C5071 = C3132 * C1132;
    const double C18885 = C18884 / C18799;
    const double C6174 = C5933 * C1181;
    const double C6171 = C5933 * C1182;
    const double C6168 = C5933 * C1183;
    const double C6525 = C5933 * C4027;
    const double C6522 = C5933 * C2711;
    const double C7472 = C5933 * C2712;
    const double C12169 = C12155 * C1069;
    const double C12159 = C12155 * C1070;
    const double C12335 = C12155 * C1131;
    const double C12333 = C12155 * C1132;
    const double C12512 = C12155 * C1181;
    const double C12509 = C12155 * C1182;
    const double C12504 = C12155 * C1183;
    const double C12989 = C12155 * C4966;
    const double C12987 = C12155 * C4027;
    const double C12984 = C12155 * C2711;
    const double C12982 = C12155 * C2712;
    const double C13726 = C12155 * C2594;
    const double C14378 = C12155 * C1073;
    const double C14598 = C12155 * C1135;
    const double C16045 = C12155 * C3930;
    const double C16041 = C12155 * C3933;
    const double C16039 = C12155 * C2596;
    const double C16035 = C12155 * C2593;
    const double C18347 = C12155 * C3931;
    const double C18343 = C12155 * C3934;
    const double C402 = C246 * C155;
    const double C414 = C411 * C19794;
    const double C8891 = C411 * C8565;
    const double C3581 = C3575 * C19721;
    const double C9239 = C3575 * C8563;
    const double C3580 = C3574 * C3084;
    const double C578 = C575 + C566;
    const double C3887 = C3884 + C1025;
    const double C6173 = C5932 * C225;
    const double C6172 = C5932 * C224;
    const double C6167 = C5932 * C223;
    const double C6524 = C5932 * C743;
    const double C6523 = C5932 * C742;
    const double C7002 = C5932 * C1183;
    const double C7471 = C5932 * C741;
    const double C7991 = C5932 * C1182;
    const double C8511 = C5932 * C2711;
    const double C105 =
        ((C18927 + C18928 * C18929 * C18933) * C18931 + C18939 + C18939 +
         C18924 *
             (2 * ae * C18936 +
              C18924 *
                  (C18929 * C18933 + C18928 * bs[4] * std::pow(C18922, 4)) *
                  C18931)) /
        C18802;
    const double C697 =
        (C18939 + C18994 * (ae * C19000 + C18924 * C19004)) / C18802;
    const double C791 =
        (C18939 + C18994 * (ae * C19000 + C18924 * C19049)) / C18802;
    const double C1188 =
        (C18939 + C19019 * (ae * C19025 + C18924 * C19029)) / C18802;
    const double C1370 =
        (C18939 + C19019 * (ae * C19025 + C18924 * C19087)) / C18802;
    const double C111 = C92 * C100;
    const double C173 = C155 * C100;
    const double C240 = C222 * C100;
    const double C3092 = C3084 * C100;
    const double C8578 = C8570 * C100;
    const double C1586 = C155 * C635;
    const double C1650 = C222 * C635;
    const double C3090 = C3084 * C635;
    const double C4521 = C19721 * C635;
    const double C8575 = C8570 * C635;
    const double C8642 = C8634 * C635;
    const double C9299 = C8564 * C635;
    const double C10350 = C8563 * C635;
    const double C2122 = C155 * C1076;
    const double C2186 = C222 * C1076;
    const double C4862 = C3084 * C1076;
    const double C7704 = C19721 * C1076;
    const double C9642 = C8570 * C1076;
    const double C12163 = C12155 * C1076;
    const double C13223 = C8564 * C1076;
    const double C14453 = C8563 * C1076;
    const double C3583 = C3577 * C19721;
    const double C9244 = C3577 * C8563;
    const double C6651 = C6645 * C19721;
    const double C13118 = C6645 * C8563;
    const double C5463 = C5459 * C19721;
    const double C11581 = C5459 * C8563;
    const double C8118 = C8114 * C19721;
    const double C14957 = C8114 * C8563;
    const double C19157 = ae * C19156;
    const double C694 =
        (C18924 * C19000 + C18994 * C19156 + C18994 * C18947 * ae) / C18799;
    const double C2656 = (C19019 * C19156) / C18799;
    const double C19249 = ae * C19248;
    const double C1185 =
        (C18924 * C19025 + C19019 * C19248 + C19019 * C18947 * ae) / C18799;
    const double C4465 = C4461 + C4462;
    const double C4806 = C4803 + C1027;
    const double C7596 = C7592 + C7593;
    const double C7774 = C7771 + C1286;
    const double C10940 = C10937 + C10938;
    const double C11365 = C11362 + C3040;
    const double C2659 = (C19019 * (C18956 + C18994 * C19015)) / C18802;
    const double C18957 = C18936 + C18955;
    const double C19120 = ae * C19119;
    const double C2597 = (C19019 * C19119) / C18799;
    const double C19188 = ae * C19187;
    const double C3089 = C3084 * C638;
    const double C4463 = C222 * C638;
    const double C4525 = C19721 * C638;
    const double C9119 = C8570 * C638;
    const double C9309 = C8564 * C638;
    const double C10201 = C8634 * C638;
    const double C5854 = C3084 * C1079;
    const double C7594 = C155 * C1079;
    const double C7708 = C19721 * C1079;
    const double C9645 = C8570 * C1079;
    const double C13233 = C8564 * C1079;
    const double C14374 = C12155 * C1079;
    const double C19333 = C19000 + C19331;
    const double C19386 = ae * C19385;
    const double C19497 = C19025 + C19495;
    const double C4343 = C19721 * C641;
    const double C9117 = C8564 * C641;
    const double C10124 = C8563 * C641;
    const double C3461 = C19721 * C643;
    const double C9123 = C8563 * C643;
    const double C7528 = C19721 * C1082;
    const double C13043 = C8564 * C1082;
    const double C14227 = C8563 * C1082;
    const double C6574 = C19721 * C1084;
    const double C13047 = C8563 * C1084;
    const double C5335 = C19721 * C2599;
    const double C11438 = C8563 * C2599;
    const double C348 = C19794 * C336;
    const double C1763 = C19794 * C835;
    const double C8819 = C8566 * C835;
    const double C10430 = C8565 * C835;
    const double C2299 = C19794 * C1276;
    const double C11076 = C8565 * C1276;
    const double C6805 = C19794 * C1278;
    const double C16690 = C8565 * C1278;
    const double C8286 = C19794 * C2820;
    const double C16686 = C8566 * C2820;
    const double C18492 = C8565 * C2820;
    const double C573 = C19805 * C561;
    const double C1998 = C19805 * C1017;
    const double C14151 = C12050 * C1017;
    const double C3879 = C19805 * C1019;
    const double C16386 = C12050 * C1019;
    const double C2534 = C19805 * C1458;
    const double C12510 = C12051 * C1458;
    const double C14815 = C12050 * C1458;
    const double C5805 = C19805 * C3035;
    const double C16382 = C12051 * C3035;
    const double C18786 = C12050 * C3035;
    const double C19405 = ae * C19404;
    const double C4028 =
        (C18994 * C19025 + C19019 * C19404 + C19019 * C19328 * ae) / C18799;
    const double C5634 = C19805 * C4159;
    const double C16214 = C12051 * C4159;
    const double C837 =
        ((C18927 + C19058 * C18929 * C18933) * C18931 + C19153 + C19153 +
         C18994 * (2 * ae * C19000 + C18994 * C19063)) /
        C18802;
    const double C2982 =
        (C19153 + C19019 * (ae * C19025 + C18994 * C19100)) / C18802;
    const double C844 = C155 * C693;
    const double C3255 = C3134 * C693;
    const double C3633 = C3084 * C693;
    const double C3688 = C3132 * C693;
    const double C3686 = C3133 * C693;
    const double C3733 = C222 * C693;
    const double C9372 = C8634 * C693;
    const double C2824 = C155 * C2655;
    const double C4117 = C3133 * C2655;
    const double C5520 = C3084 * C2655;
    const double C5579 = C3132 * C2655;
    const double C5635 = C222 * C2655;
    const double C8106 = C19794 * C2655;
    const double C9850 = C8634 * C2655;
    const double C16211 = C12155 * C2655;
    const double C16504 = C8566 * C2655;
    const double C18266 = C8565 * C2655;
    const double C4120 = C3133 * C3984;
    const double C6366 = C155 * C3984;
    const double C8110 = C19794 * C3984;
    const double C8228 = C3084 * C3984;
    const double C9853 = C8634 * C3984;
    const double C16514 = C8566 * C3984;
    const double C18569 = C12155 * C3984;
    const double C507 = C181 * C222;
    const double C354 = C351 + C344;
    const double C415 = C412 * C19794;
    const double C8896 = C412 * C8565;
    const double C512 = C184 * C222;
    const double C355 = C352 + C347;
    const double C416 = C413 * C19794;
    const double C1767 = C1765 + C841;
    const double C1936 = C1591 * C222;
    const double C1768 = C1766 + C842;
    const double C1939 = C1593 * C222;
    const double C2303 = C2301 + C1282;
    const double C2472 = C2127 * C222;
    const double C12448 = C2127 * C12155;
    const double C14306 = C2127 * C8570;
    const double C2304 = C2302 + C1283;
    const double C2475 = C2129 * C222;
    const double C7590 = C2129 * C3084;
    const double C12445 = C2129 * C12155;
    const double C13114 = C2129 * C8570;
    const double C2367 = C2365 * C19794;
    const double C11154 = C2365 * C8565;
    const double C6814 = C6811 + C1285;
    const double C6650 = C6644 * C3084;
    const double C6653 = C6647 * C3084;
    const double C6815 = C6812 + C6807;
    const double C1460 =
        ((C18927 + C19107 * C18929 * C18933) * C18931 + C19245 + C19245 +
         C19019 * (2 * ae * C19025 + C19019 * C19112)) /
        C18802;
    const double C2876 =
        (C19245 + C18994 * (ae * C19000 + C19019 * C19076)) / C18802;
    const double C1467 = C222 * C1184;
    const double C6169 = C5934 * C1184;
    const double C6904 = C3084 * C1184;
    const double C6953 = C155 * C1184;
    const double C7003 = C5932 * C1184;
    const double C7001 = C5933 * C1184;
    const double C13512 = C12155 * C1184;
    const double C1831 = C1829 * C19794;
    const double C8893 = C1829 * C8566;
    const double C10507 = C1829 * C8565;
    const double C405 = C248 * C155;
    const double C517 = C514 * C19805;
    const double C12449 = C514 * C12050;
    const double C579 = C576 + C569;
    const double C410 = C251 * C155;
    const double C518 = C515 * C19805;
    const double C580 = C577 + C572;
    const double C2002 = C2000 + C1023;
    const double C1824 = C1655 * C155;
    const double C8895 = C1655 * C8634;
    const double C10281 = C1655 * C8570;
    const double C2003 = C2001 + C1024;
    const double C1827 = C1657 * C155;
    const double C4459 = C1657 * C3084;
    const double C8892 = C1657 * C8634;
    const double C9240 = C1657 * C8570;
    const double C1943 = C1941 * C19805;
    const double C14078 = C1941 * C12050;
    const double C3888 = C3885 + C1026;
    const double C3582 = C3576 * C3084;
    const double C2538 = C2536 + C1464;
    const double C2360 = C2191 * C155;
    const double C2539 = C2537 + C1465;
    const double C2363 = C2193 * C155;
    const double C2479 = C2477 * C19805;
    const double C12446 = C2477 * C12051;
    const double C14744 = C2477 * C12050;
    const double C5810 = C5808 + C3039;
    const double C5464 = C5460 * C3084;
    const double C3585 = C3579 * C3084;
    const double C3889 = C3886 + C3881;
    const double C5809 = C5807 + C4286;
    const double C5462 = C5458 * C3084;
    const double C7110 =
        (C18956 + C18994 * C19015 +
         (C18983 + C18994 * (ae * C19012 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C18998)) *
             C19107) /
        C18802;
    const double C18985 = C18949 + C18982;
    const double C19127 = C18954 + C19126;
    const double C19195 = C18954 + C19194;
    const double C19259 = ae * C19257;
    const double C19285 = C19019 * C19257;
    const double C7056 = (C19119 + C19257 * C19107) / C18799;
    const double C19273 = ae * C19271;
    const double C3465 = C3084 * C3454;
    const double C3945 = C3084 * C3935;
    const double C5336 = C3084 * C5329;
    const double C6578 = C3084 * C6567;
    const double C18984 = C18966 + C18981;
    const double C2600 =
        (2 * ae * C19019 * C18994 * C18949 + C18924 * C19019 * C19255) / C18802;
    const double C3456 =
        (3 * (C18953 + C18979 * C19058) +
         C18994 * (2 * C19255 +
                   C18994 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C3937 = (C18994 * C18953 + C19255 * C19107) / C18802;
    const double C4340 =
        (2 * ae * (2 * C19315 + C18994 * C19319) +
         C18924 * (2 * C19255 +
                   C18994 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C5330 =
        (C19019 * (2 * C19255 +
                   C18994 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C7057 =
        (2 * ae * (C19315 + C18994 * C18973 * C19107) +
         C18924 * (C19255 + C18994 *
                                (C18963 * C18964 +
                                 C18928 * bs[6] * std::pow(C18922, 6)) *
                                C18931 * C19107)) /
        C18802;
    const double C8045 =
        (2 * C19019 * C19255 +
         C19019 * (C19255 + C18994 *
                                (C18963 * C18964 +
                                 C18928 * bs[6] * std::pow(C18922, 6)) *
                                C18931 * C19107)) /
        C18802;
    const double C6569 =
        (3 * (C18953 + C18979 * C19107) +
         C19019 * (2 * C19269 +
                   C19019 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19107))) /
        C18802;
    const double C7525 =
        (2 * ae * (2 * C19468 + C19019 * C19472) +
         C18924 * (2 * C19269 +
                   C19019 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19107))) /
        C18802;
    const double C4345 = C19721 * C644;
    const double C9120 = C8564 * C644;
    const double C7530 = C19721 * C1085;
    const double C13045 = C8564 * C1085;
    const double C3464 = C19721 * C3455;
    const double C5333 = C19721 * C3936;
    const double C6577 = C19721 * C6568;
    const double C19160 = C19159 + C18978;
    const double C349 = C155 * C160;
    const double C1287 = C155 * C1136;
    const double C1764 = C155 * C1579;
    const double C8827 = C8634 * C1579;
    const double C2300 = C155 * C2115;
    const double C19350 = C19005 + C19347;
    const double C19390 = C19329 + C19389;
    const double C19455 = ae * C19453;
    const double C19422 = ae * C19420;
    const double C19421 = C18994 * C19420;
    const double C19439 = C19019 * C19420;
    const double C7109 = (C19156 + C19420 * C19107) / C18799;
    const double C6809 = C155 * C6626;
    const double C2119 = C19794 * C1137;
    const double C7595 = C19794 * C1141;
    const double C18272 = C8566 * C3986;
    const double C8112 = C19794 * C3987;
    const double C16510 = C8566 * C3987;
    const double C6652 = C6646 * C19721;
    const double C19252 = C19251 + C18978;
    const double C574 = C222 * C227;
    const double C1028 = C222 * C745;
    const double C1999 = C222 * C1643;
    const double C2535 = C222 * C2179;
    const double C12518 = C12155 * C2179;
    const double C3041 = C222 * C2713;
    const double C14153 = C12155 * C2713;
    const double C19408 = C19407 + C19348;
    const double C3883 = C222 * C3558;
    const double C5806 = C222 * C5446;
    const double C16388 = C12155 * C5446;
    const double C19532 = C19531 + C19419;
    const double C19548 = ae * C19545;
    const double C19547 = C19019 * C19545;
    const double C19514 = C19030 + C19511;
    const double C19571 = ae * C19569;
    const double C19570 = C19019 * C19569;
    const double C1647 = C19805 * C746;
    const double C4464 = C19805 * C750;
    const double C3584 = C3578 * C19721;
    const double C5461 = C5457 * C19721;
    const double C14459 = C8564 * C1231;
    const double C7710 = C19721 * C1235;
    const double C13229 = C8564 * C1235;
    const double C19343 = C19337 + C19338;
    const double C7264 =
        (2 * ae * (C19007 + C19416 * C19107) +
         C18994 * (C19415 + C18924 *
                                (C18963 * C18964 +
                                 C19058 * bs[6] * std::pow(C18922, 6)) *
                                C18931 * C19107)) /
        C18802;
    const double C7768 =
        (2 * C19019 * C19415 +
         C19019 * (C19415 + C18924 *
                                (C18963 * C18964 +
                                 C19058 * bs[6] * std::pow(C18922, 6)) *
                                C18931 * C19107)) /
        C18802;
    const double C6800 =
        (3 * (C19063 + C19068 * C19107) +
         C19019 * (2 * C19451 +
                   C19019 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19107))) /
        C18802;
    const double C8283 =
        (2 * ae * (2 * C19479 + C19019 * C19481) +
         C18994 * (2 * C19451 +
                   C19019 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19107))) /
        C18802;
    const double C1761 = C19794 * C834;
    const double C8822 = C8566 * C834;
    const double C2297 = C19794 * C1275;
    const double C7772 = C19794 * C1279;
    const double C11074 = C8566 * C2821;
    const double C13867 = C19794 * C2821;
    const double C8288 = C19794 * C4113;
    const double C16688 = C8566 * C4113;
    const double C6808 = C19794 * C6799;
    const double C1830 = C1828 * C19794;
    const double C8894 = C1828 * C8566;
    const double C2366 = C2364 * C19794;
    const double C10578 = C8564 * C928;
    const double C4696 = C19721 * C932;
    const double C9483 = C8564 * C932;
    const double C1942 = C1940 * C19805;
    const double C2478 = C2476 * C19805;
    const double C12447 = C2476 * C12051;
    const double C4801 =
        (2 * C18994 * C19433 +
         C18994 * (C19433 + C18924 *
                                (C18963 * C18964 +
                                 C19107 * bs[6] * std::pow(C18922, 6)) *
                                C18931 * C19058)) /
        C18802;
    const double C5276 =
        (2 * ae * (C19032 + C19428 * C19058) +
         C19019 * (C19433 + C18924 *
                                (C18963 * C18964 +
                                 C19107 * bs[6] * std::pow(C18922, 6)) *
                                C18931 * C19058)) /
        C18802;
    const double C19507 = C19501 + C19502;
    const double C1996 = C19805 * C1016;
    const double C4804 = C19805 * C1020;
    const double C2532 = C19805 * C1457;
    const double C12513 = C12051 * C1457;
    const double C11363 = C19805 * C3036;
    const double C14149 = C12051 * C3036;
    const double C3882 = C19805 * C3873;
    const double C5803 = C19805 * C4282;
    const double C16384 = C12051 * C4282;
    const double C18810 = C19721 - C18809;
    const double C3644 = C3637 + C3638;
    const double C3641 = C3631 + C3632;
    const double C3640 = C3629 + C3630;
    const double C3639 = C3627 + C3628;
    const double C3791 = C3786 + C3787;
    const double C3790 = C3784 + C3785;
    const double C3789 = C3781 + C3782;
    const double C4697 = C4692 + C4693;
    const double C5527 = C5522 + C5523;
    const double C5525 = C5518 + C5519;
    const double C5697 = C5693 + C5694;
    const double C5696 = C5690 + C5691;
    const double C6754 = C6747 + C6748;
    const double C6753 = C6745 + C6746;
    const double C6752 = C6743 + C6744;
    const double C6751 = C6741 + C6742;
    const double C6750 = C6739 + C6740;
    const double C6749 = C6737 + C6738;
    const double C6908 = C6902 + C6903;
    const double C7712 = C7705 + C7706;
    const double C8230 = C8226 + C8227;
    const double C9487 = C9480 + C9481;
    const double C13239 = C13226 + C13227;
    const double C18860 = C19794 - C18859;
    const double C8658 = C8648 + C8649;
    const double C8653 = C8638 + C8639;
    const double C9008 = C9002 + C9003;
    const double C9007 = C9000 + C9001;
    const double C10651 = C10647 + C10648;
    const double C16520 = C16507 + C16508;
    const double C356 = C353 + C342;
    const double C6816 = C6813 + C6803;
    const double C18886 = C19805 - C18885;
    const double C12179 = C12169 + C12170;
    const double C12174 = C12159 + C12160;
    const double C12341 = C12335 + C12336;
    const double C12340 = C12333 + C12334;
    const double C13732 = C13726 + C13727;
    const double C14602 = C14598 + C14599;
    const double C16055 = C16045 + C16046;
    const double C16053 = C16041 + C16042;
    const double C16052 = C16039 + C16040;
    const double C16050 = C16035 + C16036;
    const double C18351 = C18343 + C18344;
    const double C581 = C578 + C567;
    const double C3890 = C3887 + C3877;
    const double C1587 = C19794 * C697;
    const double C8643 = C8566 * C697;
    const double C10204 = C8565 * C697;
    const double C4523 = C19721 * C791;
    const double C9303 = C8564 * C791;
    const double C10354 = C8563 * C791;
    const double C2187 = C19805 * C1188;
    const double C12164 = C12051 * C1188;
    const double C14377 = C12050 * C1188;
    const double C7881 = C19721 * C1370;
    const double C13401 = C8564 * C1370;
    const double C14671 = C8563 * C1370;
    const double C182 = C173 + C174;
    const double C249 = C240 + C241;
    const double C1656 = C1650 + C1651;
    const double C4528 = C4520 + C4521;
    const double C9313 = C9298 + C9299;
    const double C2128 = C2122 + C2123;
    const double C7711 = C7703 + C7704;
    const double C13237 = C13222 + C13223;
    const double C838 =
        (C18924 * C19063 + C19157 + C19157 +
         C18994 * (2 * ae * C19007 + C18994 * C18924 * C19068)) /
        C18802;
    const double C2983 =
        (C19157 + C19019 * (ae * C19032 + C18994 * C18924 * C19103)) / C18802;
    const double C845 = C155 * C694;
    const double C3256 = C3134 * C694;
    const double C4526 = C3084 * C694;
    const double C4584 = C3133 * C694;
    const double C4637 = C222 * C694;
    const double C9304 = C8570 * C694;
    const double C9370 = C8634 * C694;
    const double C10206 = C8566 * C694;
    const double C2825 = C155 * C2656;
    const double C5072 = C3133 * C2656;
    const double C9848 = C8634 * C2656;
    const double C10862 = C8566 * C2656;
    const double C11151 = C222 * C2656;
    const double C11649 = C8570 * C2656;
    const double C13653 = C19794 * C2656;
    const double C13937 = C12155 * C2656;
    const double C17192 = C3084 * C2656;
    const double C1461 =
        (C18924 * C19112 + C19249 + C19249 +
         C19019 * (2 * ae * C19032 + C19019 * C18924 * C19117)) /
        C18802;
    const double C2877 =
        (C19249 + C18994 * (ae * C19007 + C19019 * C18924 * C19079)) / C18802;
    const double C1468 = C222 * C1185;
    const double C6170 = C5934 * C1185;
    const double C7882 = C3084 * C1185;
    const double C7937 = C155 * C1185;
    const double C7992 = C5933 * C1185;
    const double C13402 = C8570 * C1185;
    const double C13510 = C12155 * C1185;
    const double C14379 = C12051 * C1185;
    const double C4467 = C4465 * C3084;
    const double C9243 = C4465 * C8570;
    const double C10506 = C4465 * C8634;
    const double C4807 = C4806 + C1027;
    const double C7598 = C7596 * C3084;
    const double C13117 = C7596 * C8570;
    const double C14743 = C7596 * C12155;
    const double C7775 = C7774 + C1286;
    const double C11153 = C10940 * C8634;
    const double C11580 = C10940 * C8570;
    const double C11366 = C11365 + C3040;
    const double C10858 = C8566 * C2659;
    const double C13651 = C19794 * C2659;
    const double C18958 = C18957 + C18950;
    const double C640 =
        (C18994 * C18953 + C19120 + C19120 +
         C18924 * (2 * ae * C18994 * C18949 + C18924 * C18994 * C18979)) /
        C18802;
    const double C700 = (ae * C19000 + C18924 * C19004 + C19120 +
                         C18994 * (C18956 + C18994 * C19015)) /
                        C18802;
    const double C794 = (ae * C19000 + C18924 * C19049 + C19120 +
                         C18994 * (C18956 + C18994 * C19054)) /
                        C18802;
    const double C2715 = (C19120 + C19019 * C18994 * C19040) / C18802;
    const double C2930 = (C19120 + C19019 * C18994 * C19092) / C18802;
    const double C4863 = C3084 * C2597;
    const double C9640 = C8570 * C2597;
    const double C10857 = C8634 * C2597;
    const double C10935 = C222 * C2597;
    const double C11654 = C8564 * C2597;
    const double C13650 = C155 * C2597;
    const double C13722 = C12155 * C2597;
    const double C17191 = C19721 * C2597;
    const double C1081 =
        (C19019 * C18953 + C19188 + C19188 +
         C18924 * (2 * ae * C19019 * C18949 + C18924 * C19019 * C18979)) /
        C18802;
    const double C1191 = (ae * C19025 + C18924 * C19029 + C19188 +
                          C19019 * (C18956 + C19019 * C19040)) /
                         C18802;
    const double C1373 = (ae * C19025 + C18924 * C19087 + C19188 +
                          C19019 * (C18956 + C19019 * C19092)) /
                         C18802;
    const double C2768 = (C19188 + C18994 * C19019 * C19054) / C18802;
    const double C4530 = C4524 + C4525;
    const double C9318 = C9308 + C9309;
    const double C7713 = C7707 + C7708;
    const double C13242 = C13232 + C13233;
    const double C19334 = C19333 + C19330;
    const double C4112 =
        (C19019 * C19063 + C19386 + C19386 +
         C18994 * (2 * ae * C19019 * C19005 + C18994 * C19019 * C19068)) /
        C18802;
    const double C4242 = (ae * C19025 + C18994 * C19100 + C19386 +
                          C19019 * (C19332 + C19019 * C19369)) /
                         C18802;
    const double C19498 = C19497 + C19494;
    const double C4283 =
        (C18994 * C19112 + C19405 + C19405 +
         C19019 * (2 * ae * C19359 + C19019 * C18994 * C19117)) /
        C18802;
    const double C4287 = C222 * C4028;
    const double C6521 = C5934 * C4028;
    const double C8400 = C3084 * C4028;
    const double C8456 = C155 * C4028;
    const double C8512 = C5933 * C4028;
    const double C15425 = C12155 * C4028;
    const double C16859 = C8634 * C4028;
    const double C18348 = C12051 * C4028;
    const double C8455 = C19794 * C2982;
    const double C16858 = C8566 * C2982;
    const double C18712 = C8565 * C2982;
    const double C3642 = C3633 + C3634;
    const double C3738 = C3733 + C3734;
    const double C8290 = C8285 + C2824;
    const double C5526 = C5520 + C5521;
    const double C8113 = C8105 + C8106;
    const double C16518 = C16503 + C16504;
    const double C8291 = C8287 + C6366;
    const double C8115 = C8109 + C8110;
    const double C8231 = C8228 + C8229;
    const double C16523 = C16513 + C16514;
    const double C18573 = C18569 + C18570;
    const double C357 = C354 + C345;
    const double C358 = C355 + C348;
    const double C1770 = C1768 + C1763;
    const double C2306 = C2304 + C2299;
    const double C6817 = C6814 + C6805;
    const double C6654 = C6650 + C6651;
    const double C5636 = C19805 * C2876;
    const double C16212 = C12051 * C2876;
    const double C18572 = C12050 * C2876;
    const double C6909 = C6904 + C6905;
    const double C6958 = C6953 + C6954;
    const double C417 = C405 + C415;
    const double C519 = C507 + C517;
    const double C582 = C579 + C570;
    const double C583 = C580 + C573;
    const double C2005 = C2003 + C1998;
    const double C3891 = C3888 + C3879;
    const double C3586 = C3582 + C3583;
    const double C2541 = C2539 + C2534;
    const double C5812 = C5810 + C5805;
    const double C18986 = C18985 + C18974;
    const double C19128 = ae * C19127;
    const double C4339 = (2 * C19119 + C18994 * C19127) / C18799;
    const double C4859 = (C19019 * C19127) / C18799;
    const double C19196 = ae * C19195;
    const double C7524 = (2 * C19187 + C19019 * C19195) / C18799;
    const double C4915 =
        (C19019 * (C19015 + C19259 +
                   C18994 * (C18983 + C18994 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C19286 = ae * C19285;
    const double C7059 = C3084 * C7056;
    const double C9647 = C8570 * C7056;
    const double C11436 = C8564 * C2600;
    const double C16987 = C19721 * C2600;
    const double C8048 = C19721 * C3937;
    const double C19161 = ae * C19160;
    const double C695 =
        (C19000 + C19005 * C18928 + C18994 * C19160 + C18994 * C18975 * ae) /
        C18799;
    const double C2657 = (C19019 * C19160) / C18799;
    const double C19351 = C19350 + C19345;
    const double C19391 = ae * C19390;
    const double C8102 = (2 * C19385 + C19019 * C19390) / C18799;
    const double C19423 = C19007 + C19421;
    const double C19440 = ae * C19439;
    const double C7266 = C155 * C7109;
    const double C9855 = C8634 * C7109;
    const double C7597 = C7594 + C7595;
    const double C18276 = C18271 + C18272;
    const double C8116 = C8111 + C8112;
    const double C16521 = C16509 + C16510;
    const double C19253 = ae * C19252;
    const double C1186 =
        (C19025 + C19030 * C18928 + C19019 * C19252 + C19019 * C18975 * ae) /
        C18799;
    const double C19409 = ae * C19408;
    const double C4029 =
        (C19025 + C19030 * C19058 + C19019 * C19408 + C19019 * C19346 * ae) /
        C18799;
    const double C19533 = ae * C19532;
    const double C7161 =
        (C18994 * C19032 + C19019 * C19532 + C19019 * C19417 * ae) / C18799;
    const double C19549 = C19032 + C19547;
    const double C19515 = C19514 + C19509;
    const double C19572 = C19359 + C19570;
    const double C4466 = C4463 + C4464;
    const double C14463 = C14458 + C14459;
    const double C7714 = C7709 + C7710;
    const double C13240 = C13228 + C13229;
    const double C1769 = C1767 + C1761;
    const double C2305 = C2303 + C2297;
    const double C6818 = C6815 + C6808;
    const double C10580 = C10577 + C10578;
    const double C4698 = C4695 + C4696;
    const double C9488 = C9482 + C9483;
    const double C2004 = C2002 + C1996;
    const double C2540 = C2538 + C2532;
    const double C3892 = C3889 + C3882;
    const double C5811 = C5809 + C5803;
    const double C18811 = C18810 * C18805;
    const double C88 =
        ((-(0 * be) / C18799) / C18803 -
         ((0 - (C18800 * C18798) / C18799) * be) / C18799) /
            C18803 -
        ((C18800 * ((-C18798 / C18799) / C18803 - (C18810 * be) / C18799) +
          C8563) *
         be) /
            C18799 +
        (-C18807 / C18799) / C18803 - (0 * be) / C18799;
    const double C90 =
        ((-C18798 / C18799) / C18803 - (C18810 * be) / C18799) / C18803 -
        ((C18800 * ((-C18807 / C18799) / C18803 - (0 * be) / C18799) + C8564) *
         be) /
            C18799;
    const double C8568 = (-C18798 / C18799) / C18803 - (C18810 * be) / C18799;
    const double C3788 = C3644 * C222;
    const double C3783 = C3641 * C222;
    const double C3780 = C3639 * C222;
    const double C3794 = C3791 * C19805;
    const double C3793 = C3790 * C19805;
    const double C16277 = C3790 * C12050;
    const double C3792 = C3789 * C19805;
    const double C16272 = C3789 * C12050;
    const double C4699 = C4697 * C19805;
    const double C17395 = C4697 * C12050;
    const double C5695 = C5527 * C222;
    const double C8224 = C5527 * C155;
    const double C16273 = C5527 * C12155;
    const double C16627 = C5527 * C8634;
    const double C5692 = C5525 * C222;
    const double C16276 = C5525 * C12155;
    const double C18423 = C5525 * C8634;
    const double C5699 = C5697 * C19805;
    const double C16274 = C5697 * C12051;
    const double C18643 = C5697 * C12050;
    const double C5698 = C5696 * C19805;
    const double C16275 = C5696 * C12051;
    const double C6760 = C6754 * C155;
    const double C6759 = C6753 * C19794;
    const double C6758 = C6752 * C19794;
    const double C16631 = C6752 * C8565;
    const double C6757 = C6751 * C155;
    const double C6756 = C6750 * C19794;
    const double C16626 = C6750 * C8565;
    const double C6755 = C6749 * C155;
    const double C7716 = C7712 * C19794;
    const double C17798 = C7712 * C8565;
    const double C8232 = C8230 * C155;
    const double C16630 = C8230 * C8634;
    const double C18642 = C8230 * C12155;
    const double C18861 = C18860 * C18805;
    const double C8633 = (-C18847 / C18799) / C18803 - (C18860 * be) / C18799;
    const double C6819 = C6816 * C19721;
    const double C13294 = C6816 * C8563;
    const double C18887 = C18886 * C18805;
    const double C12154 = (-C18873 / C18799) / C18803 - (C18886 * be) / C18799;
    const double C584 = C581 * C19794;
    const double C9060 = C581 * C8565;
    const double C1592 = C1586 + C1587;
    const double C8655 = C8642 + C8643;
    const double C4529 = C4522 + C4523;
    const double C9315 = C9302 + C9303;
    const double C2192 = C2186 + C2187;
    const double C12176 = C12163 + C12164;
    const double C7884 = C7880 + C7881;
    const double C13407 = C13400 + C13401;
    const double C4460 = C1656 * C19721;
    const double C9241 = C1656 * C8564;
    const double C10280 = C1656 * C8563;
    const double C4691 = C4528 * C222;
    const double C7591 = C2128 * C19721;
    const double C13115 = C2128 * C8564;
    const double C14305 = C2128 * C8563;
    const double C7715 = C7711 * C155;
    const double C10428 = C8566 * C838;
    const double C11291 = C8566 * C2983;
    const double C14076 = C19794 * C2983;
    const double C4639 = C4637 + C4638;
    const double C10211 = C10205 + C10206;
    const double C13868 = C13866 + C2825;
    const double C10867 = C10861 + C10862;
    const double C13655 = C13652 + C13653;
    const double C14813 = C12051 * C1461;
    const double C11152 = C19805 * C2877;
    const double C13938 = C12051 * C2877;
    const double C7939 = C7937 + C7938;
    const double C14384 = C14378 + C14379;
    const double C4808 = C4807 + C4804;
    const double C7776 = C7775 + C7772;
    const double C11367 = C11366 + C11363;
    const double C18959 = ae * C18958;
    const double C101 =
        (2 * C18938 + C18924 * C18958 + (C18927 + C18941 * C18928) * ae) /
        C18799;
    const double C634 = (C18994 * C18958) / C18799;
    const double C1075 = (C19019 * C18958) / C18799;
    const double C10126 = C8564 * C640;
    const double C10202 = C8566 * C700;
    const double C4527 = C19721 * C794;
    const double C9305 = C8564 * C794;
    const double C10936 = C19805 * C2715;
    const double C13723 = C12051 * C2715;
    const double C11864 = C8564 * C2930;
    const double C17398 = C19721 * C2930;
    const double C10865 = C10857 + C10858;
    const double C11659 = C11653 + C11654;
    const double C13654 = C13650 + C13651;
    const double C17194 = C17190 + C17191;
    const double C14229 = C8564 * C1081;
    const double C14375 = C12051 * C1191;
    const double C7883 = C19721 * C1373;
    const double C13403 = C8564 * C1373;
    const double C11650 = C8564 * C2768;
    const double C17193 = C19721 * C2768;
    const double C4694 = C4530 * C222;
    const double C7717 = C7713 * C155;
    const double C19335 = ae * C19334;
    const double C3515 =
        (2 * C19152 + C18994 * C19334 + (C18927 + C18941 * C19058) * ae) /
        C18799;
    const double C3983 = (C19019 * C19334) / C18799;
    const double C18494 = C8566 * C4112;
    const double C8457 = C19794 * C4242;
    const double C16860 = C8566 * C4242;
    const double C19499 = ae * C19498;
    const double C6692 =
        (2 * C19244 + C19019 * C19498 + (C18927 + C18941 * C19107) * ae) /
        C18799;
    const double C18784 = C12051 * C4283;
    const double C8402 = C8400 + C8401;
    const double C18353 = C18347 + C18348;
    const double C8458 = C8454 + C8455;
    const double C16864 = C16857 + C16858;
    const double C8292 = C8290 + C2824;
    const double C8225 = C5526 * C19794;
    const double C16628 = C5526 * C8566;
    const double C18422 = C5526 * C8565;
    const double C8117 = C8113 * C3084;
    const double C8293 = C8291 + C6366;
    const double C8119 = C8115 * C3084;
    const double C8233 = C8231 * C19794;
    const double C16629 = C8231 * C8566;
    const double C7770 = C2306 * C19721;
    const double C13295 = C2306 * C8564;
    const double C14530 = C2306 * C8563;
    const double C6820 = C6817 * C19721;
    const double C13297 = C6817 * C8563;
    const double C5638 = C5635 + C5636;
    const double C16218 = C16211 + C16212;
    const double C585 = C582 * C19794;
    const double C9063 = C582 * C8565;
    const double C586 = C583 * C19794;
    const double C2007 = C2005 * C19794;
    const double C9061 = C2005 * C8566;
    const double C10720 = C2005 * C8565;
    const double C2543 = C2541 * C19794;
    const double C11364 = C2541 * C8565;
    const double C18988 = ae * C18986;
    const double C18987 = C18924 * C18986;
    const double C19256 = C18994 * C18986;
    const double C19270 = C19019 * C18986;
    const double C639 = (C18958 + C18986 * C19058) / C18799;
    const double C1080 = (C18958 + C18986 * C19107) / C18799;
    const double C645 =
        (C18953 + C18979 * C19058 + C19128 + C19128 +
         C18924 * (2 * ae * (C18949 + C18973 * C19058) +
                   C18924 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C4405 =
        (2 * (C18956 + C18994 * C19015) + C19128 +
         C18994 * (C19015 + C19259 +
                   C18994 * (C18983 + C18994 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C4518 =
        (2 * (C18956 + C18994 * C19054) + C19128 +
         C18994 * (C19054 + C19259 +
                   C18994 * (C18983 + C18994 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19046)))) /
        C18802;
    const double C4967 =
        (C19128 +
         C19019 * (C19040 + (ae * C19037 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C19023) *
                                C19058)) /
        C18802;
    const double C5174 =
        (C19128 +
         C19019 * (C19092 + (ae * C19037 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C19084) *
                                C19058)) /
        C18802;
    const double C4346 = C3084 * C4339;
    const double C9125 = C8570 * C4339;
    const double C4864 = C3084 * C4859;
    const double C11440 = C8570 * C4859;
    const double C1086 =
        (C18953 + C18979 * C19107 + C19196 + C19196 +
         C18924 * (2 * ae * (C18949 + C18973 * C19107) +
                   C18924 * (C18979 + (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19107))) /
        C18802;
    const double C7213 =
        (C19196 +
         C18994 * (C19054 + (ae * C19012 +
                             C18924 * std::pow(C18922, 6) * bs[6] * C19046) *
                                C19107)) /
        C18802;
    const double C7650 =
        (2 * (C18956 + C19019 * C19040) + C19196 +
         C19019 * (C19040 + C19273 +
                   C19019 * (C18983 + C19019 * (ae * C19037 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19023)))) /
        C18802;
    const double C7878 =
        (2 * (C18956 + C19019 * C19092) + C19196 +
         C19019 * (C19092 + C19273 +
                   C19019 * (C18983 + C19019 * (ae * C19037 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19084)))) /
        C18802;
    const double C7531 = C3084 * C7524;
    const double C13049 = C8570 * C7524;
    const double C2601 =
        (C19019 * C19255 + C19286 + C19286 +
         C18924 *
             (2 * ae * C19019 * C18994 * C18973 +
              C18924 * C19019 * C18994 *
                  (C18963 * C18964 + C18928 * bs[6] * std::pow(C18922, 6)) *
                  C18931)) /
        C18802;
    const double C5018 =
        (C19019 * C19054 + C19286 +
         C18994 * (C19273 + C18994 * C19019 *
                                (ae * C19012 + C18924 * std::pow(C18922, 6) *
                                                   bs[6] * C19046))) /
        C18802;
    const double C7162 =
        (C18994 * C19040 + C19286 +
         C19019 * (C19259 + C19019 * C18994 *
                                (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                   bs[6] * C19023))) /
        C18802;
    const double C7367 =
        (C18994 * C19092 + C19286 +
         C19019 * (C19259 + C19019 * C18994 *
                                (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                   bs[6] * C19084))) /
        C18802;
    const double C839 =
        (C19063 + C19068 * C18928 + C19161 + C19161 +
         C18994 * (2 * ae * C19016 +
                   C18994 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C2984 =
        (C19161 + C19019 * (ae * C19041 +
                            C18994 * (C19103 + std::pow(C18922, 6) * bs[6] *
                                                   C19097 * C18928))) /
        C18802;
    const double C846 = C155 * C695;
    const double C3261 = C3134 * C695;
    const double C10432 = C8634 * C695;
    const double C2826 = C155 * C2657;
    const double C11078 = C8634 * C2657;
    const double C19353 = ae * C19351;
    const double C19352 = C18994 * C19351;
    const double C19452 = C19019 * C19351;
    const double C3985 = (C19334 + C19351 * C19107) / C18799;
    const double C4114 =
        (C19063 + C19068 * C19107 + C19391 + C19391 +
         C18994 * (2 * ae * (C19005 + C19012 * C19107) +
                   C18994 * (C19068 + (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19107))) /
        C18802;
    const double C8452 =
        (2 * (C19332 + C19019 * C19369) + C19391 +
         C19019 * (C19369 + C19455 +
                   C19019 * (C19349 + C19019 * (ae * C19037 +
                                                C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C19097)))) /
        C18802;
    const double C8289 = C155 * C8102;
    const double C16692 = C8634 * C8102;
    const double C19424 = C19423 + C19419;
    const double C5069 =
        (C19019 * C19415 + C19440 + C19440 +
         C18994 *
             (2 * ae * C19019 * C19416 +
              C18994 * C19019 * C18924 *
                  (C18963 * C18964 + C19058 * bs[6] * std::pow(C18922, 6)) *
                  C18931)) /
        C18802;
    const double C7418 =
        (ae * C19032 + C18994 * C19431 + C19440 +
         C19019 * (C19422 + C19019 * (ae * C19428 + C18994 * C18924 *
                                                        std::pow(C18922, 6) *
                                                        bs[6] * C19097))) /
        C18802;
    const double C7599 = C7597 * C19721;
    const double C13116 = C7597 * C8564;
    const double C8120 = C8116 * C19721;
    const double C1462 =
        (C19112 + C19117 * C18928 + C19253 + C19253 +
         C19019 * (2 * ae * C19041 +
                   C19019 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C18928))) /
        C18802;
    const double C2878 =
        (C19253 + C18994 * (ae * C19016 +
                            C19019 * (C19079 + std::pow(C18922, 6) * bs[6] *
                                                   C19073 * C18928))) /
        C18802;
    const double C1469 = C222 * C1186;
    const double C6175 = C5934 * C1186;
    const double C14817 = C12155 * C1186;
    const double C4284 =
        (C19112 + C19117 * C19058 + C19409 + C19409 +
         C19019 * (2 * ae * C19363 +
                   C19019 * (C19117 + (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                          C18931 * C19058))) /
        C18802;
    const double C5631 =
        (2 * (ae * (C19019 * C19030 + C18946) + C18994 * C19458) + C19409 +
         C18994 *
             (C19458 + ae * (C19019 * C18994 * C19037 + C19345) +
              C18994 * (ae * (C19019 * C19037 + C18969) +
                        C18994 * (ae * C19012 + C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19073)))) /
        C18802;
    const double C4288 = C222 * C4029;
    const double C6526 = C5934 * C4029;
    const double C18788 = C12155 * C4029;
    const double C7469 =
        (C18994 * C19433 + C19533 + C19533 +
         C19019 *
             (2 * ae * C19530 +
              C19019 * C18994 * C18924 *
                  (C18963 * C18964 + C19107 * bs[6] * std::pow(C18922, 6)) *
                  C18931)) /
        C18802;
    const double C7473 = C5934 * C7161;
    const double C10056 = C222 * C7161;
    const double C15427 = C12155 * C7161;
    const double C19550 = C19549 + C19546;
    const double C19517 = ae * C19515;
    const double C19516 = C19019 * C19515;
    const double C19573 = C19572 + C19568;
    const double C4468 = C4466 * C19721;
    const double C9242 = C4466 * C8564;
    const double C7718 = C7714 * C19794;
    const double C14531 = C2305 * C8564;
    const double C6821 = C6818 * C19721;
    const double C4700 = C4698 * C19805;
    const double C2006 = C2004 * C19794;
    const double C9062 = C2004 * C8566;
    const double C2542 = C2540 * C19794;
    const double C18819 = C18800 * C18811;
    const double C87 =
        (-(be * -2 * C18798) / C18802) / C18803 -
        ((2 * ((-C18798 / C18799) / C18803 - (C18810 * be) / C18799) -
          (C18800 * ((-4 * C18806) / C18799 - (C18800 * C18811) / C18799) *
           be) /
              C18799) *
         be) /
            C18799 -
        C18811 / (2 * C18802);
    const double C91 = (-C18811 / C18799) / (4 * C18802);
    const double C3083 = -C18811 / C18799;
    const double C8569 = (-C18811 / C18799) / C18803;
    const double C115 = C88 * C100;
    const double C114 = C88 * C99;
    const double C109 = C88 * C98;
    const double C650 = C88 * C637;
    const double C649 = C88 * C636;
    const double C1091 = C88 * C1078;
    const double C1090 = C88 * C1077;
    const double C1527 = C88 * C635;
    const double C2063 = C88 * C1076;
    const double C2603 = C88 * C2596;
    const double C113 = C90 * C100;
    const double C110 = C90 * C99;
    const double C651 = C90 * C638;
    const double C648 = C90 * C635;
    const double C1092 = C90 * C1079;
    const double C1089 = C90 * C1076;
    const double C2604 = C90 * C2597;
    const double C8580 = C8568 * C100;
    const double C8579 = C8568 * C99;
    const double C8577 = C8568 * C635;
    const double C8574 = C8568 * C636;
    const double C8572 = C8568 * C98;
    const double C9124 = C8568 * C3453;
    const double C9122 = C8568 * C637;
    const double C9245 = C3576 * C8568;
    const double C9238 = C3574 * C8568;
    const double C9310 = C8568 * C631;
    const double C9306 = C8568 * C693;
    const double C9300 = C8568 * C692;
    const double C9296 = C8568 * C630;
    const double C9484 = C8568 * C743;
    const double C9478 = C8568 * C742;
    const double C9646 = C8568 * C3934;
    const double C9644 = C8568 * C1078;
    const double C9643 = C8568 * C1077;
    const double C9641 = C8568 * C2596;
    const double C10127 = C8568 * C638;
    const double C10279 = C1657 * C8568;
    const double C10353 = C8568 * C691;
    const double C10349 = C8568 * C629;
    const double C10575 = C8568 * C741;
    const double C10789 = C8568 * C2597;
    const double C10787 = C8568 * C1076;
    const double C11439 = C8568 * C3933;
    const double C11582 = C5460 * C8568;
    const double C11655 = C8568 * C2593;
    const double C11651 = C8568 * C2655;
    const double C11865 = C8568 * C2711;
    const double C13048 = C8568 * C6566;
    const double C13119 = C6644 * C8568;
    const double C13112 = C6642 * C8568;
    const double C13234 = C8568 * C1072;
    const double C13230 = C8568 * C1134;
    const double C13224 = C8568 * C1133;
    const double C13220 = C8568 * C1071;
    const double C13404 = C8568 * C1184;
    const double C13398 = C8568 * C1183;
    const double C14230 = C8568 * C1079;
    const double C14304 = C2129 * C8568;
    const double C14456 = C8568 * C1132;
    const double C14452 = C8568 * C1070;
    const double C14670 = C8568 * C1182;
    const double C14956 = C8113 * C8568;
    const double C3795 = C3783 + C3793;
    const double C6761 = C6757 + C6758;
    const double C18864 = C18833 * C18861;
    const double C3249 =
        (-(be * -2 * C18847) / C18802) / C18803 -
        ((2 * ((-C18847 / C18799) / C18803 - (C18860 * be) / C18799) -
          (C18833 * ((-4 * C18849) / C18799 - (C18833 * C18861) / C18799) *
           be) /
              C18799) *
         be) /
            C18799 -
        C18861 / (2 * C18802);
    const double C3251 = (-C18861 / C18799) / (4 * C18802);
    const double C8810 = (-C18861 / C18799) / C18803;
    const double C8650 = C8633 * C95;
    const double C8646 = C8633 * C100;
    const double C8640 = C8633 * C99;
    const double C8636 = C8633 * C94;
    const double C8826 = C8633 * C159;
    const double C8824 = C8633 * C158;
    const double C8815 = C8633 * C157;
    const double C8812 = C8633 * C156;
    const double C8897 = C248 * C8633;
    const double C8890 = C246 * C8633;
    const double C9004 = C8633 * C225;
    const double C8998 = C8633 * C224;
    const double C9376 = C8633 * C694;
    const double C9374 = C8633 * C693;
    const double C9373 = C8633 * C692;
    const double C9371 = C8633 * C691;
    const double C9854 = C8633 * C1135;
    const double C9852 = C8633 * C1134;
    const double C9851 = C8633 * C1133;
    const double C9849 = C8633 * C1132;
    const double C10207 = C8633 * C629;
    const double C10203 = C8633 * C635;
    const double C10431 = C8633 * C690;
    const double C10508 = C1657 * C8633;
    const double C10649 = C8633 * C741;
    const double C10863 = C8633 * C1070;
    const double C10859 = C8633 * C1076;
    const double C11077 = C8633 * C1131;
    const double C11155 = C2193 * C8633;
    const double C11292 = C8633 * C1182;
    const double C11729 = C8633 * C2656;
    const double C11727 = C8633 * C2655;
    const double C16515 = C8633 * C1072;
    const double C16511 = C8633 * C1078;
    const double C16505 = C8633 * C1077;
    const double C16501 = C8633 * C1071;
    const double C16632 = C6751 * C8633;
    const double C16625 = C6749 * C8633;
    const double C16691 = C8633 * C6625;
    const double C16861 = C8633 * C1184;
    const double C16855 = C8633 * C1183;
    const double C17797 = C7711 * C8633;
    const double C18269 = C8633 * C2596;
    const double C18265 = C8633 * C2593;
    const double C18421 = C5527 * C8633;
    const double C18495 = C8633 * C3984;
    const double C18711 = C8633 * C2711;
    const double C18890 = C18836 * C18887;
    const double C6163 =
        (-(be * -2 * C18873) / C18802) / C18803 -
        ((2 * ((-C18873 / C18799) / C18803 - (C18886 * be) / C18799) -
          (C18836 * ((-4 * C18875) / C18799 - (C18836 * C18887) / C18799) *
           be) /
              C18799) *
         be) /
            C18799 -
        C18887 / (2 * C18802);
    const double C6165 = (-C18887 / C18799) / (4 * C18802);
    const double C12501 = (-C18887 / C18799) / C18803;
    const double C12171 = C12154 * C95;
    const double C12167 = C12154 * C100;
    const double C12161 = C12154 * C99;
    const double C12157 = C12154 * C94;
    const double C12337 = C12154 * C158;
    const double C12331 = C12154 * C157;
    const double C12450 = C181 * C12154;
    const double C12443 = C179 * C12154;
    const double C12517 = C12154 * C226;
    const double C12515 = C12154 * C225;
    const double C12506 = C12154 * C224;
    const double C12503 = C12154 * C223;
    const double C12988 = C12154 * C744;
    const double C12986 = C12154 * C743;
    const double C12985 = C12154 * C742;
    const double C12983 = C12154 * C741;
    const double C13516 = C12154 * C1185;
    const double C13514 = C12154 * C1184;
    const double C13513 = C12154 * C1183;
    const double C13511 = C12154 * C1182;
    const double C13728 = C12154 * C629;
    const double C13724 = C12154 * C635;
    const double C13939 = C12154 * C691;
    const double C14079 = C1593 * C12154;
    const double C14152 = C12154 * C740;
    const double C14380 = C12154 * C1070;
    const double C14376 = C12154 * C1076;
    const double C14600 = C12154 * C1132;
    const double C14745 = C2129 * C12154;
    const double C14816 = C12154 * C1181;
    const double C15426 = C12154 * C2712;
    const double C15424 = C12154 * C2711;
    const double C16047 = C12154 * C631;
    const double C16043 = C12154 * C637;
    const double C16037 = C12154 * C636;
    const double C16033 = C12154 * C630;
    const double C16215 = C12154 * C693;
    const double C16209 = C12154 * C692;
    const double C16278 = C3641 * C12154;
    const double C16271 = C3639 * C12154;
    const double C16387 = C12154 * C3557;
    const double C16917 = C12154 * C4028;
    const double C17394 = C4528 * C12154;
    const double C18349 = C12154 * C2593;
    const double C18345 = C12154 * C2596;
    const double C18571 = C12154 * C2655;
    const double C18644 = C5527 * C12154;
    const double C18787 = C12154 * C4027;
    const double C11294 = C11290 + C11291;
    const double C14080 = C14075 + C14076;
    const double C10505 = C4639 * C8566;
    const double C13869 = C13868 + C2825;
    const double C14077 = C13655 * C12155;
    const double C14958 = C13655 * C8570;
    const double C11156 = C11151 + C11152;
    const double C13941 = C13937 + C13938;
    const double C14742 = C7939 * C12051;
    const double C10719 = C4808 * C8566;
    const double C7777 = C7776 * C19721;
    const double C13296 = C7776 * C8564;
    const double C11368 = C11367 * C8566;
    const double C106 =
        (2 * (2 * ae * C18936 + C18924 * C18953) + C18959 + C18959 +
         C18924 * (C18953 + C18956 + C18956 +
                   C18924 * (2 * ae * C18949 +
                             C18924 *
                                 (C18942 * C18943 +
                                  C18928 * bs[5] * std::pow(C18930, 5)) *
                                 C18931))) /
        C18802;
    const double C696 =
        (C18959 + C18994 * (C19004 + ae * C19007 + C18924 * C19015)) / C18802;
    const double C790 =
        (C18959 + C18994 * (C19049 + ae * C19007 + C18924 * C19054)) / C18802;
    const double C1187 =
        (C18959 + C19019 * (C19029 + ae * C19032 + C18924 * C19040)) / C18802;
    const double C1369 =
        (C18959 + C19019 * (C19087 + ae * C19032 + C18924 * C19092)) / C18802;
    const double C116 = C90 * C101;
    const double C112 = C92 * C101;
    const double C175 = C155 * C101;
    const double C242 = C222 * C101;
    const double C8581 = C8570 * C101;
    const double C647 = C92 * C634;
    const double C1528 = C90 * C634;
    const double C1582 = C155 * C634;
    const double C1646 = C222 * C634;
    const double C3093 = C3084 * C634;
    const double C8582 = C8568 * C634;
    const double C8576 = C8570 * C634;
    const double C8644 = C8634 * C634;
    const double C10352 = C8564 * C634;
    const double C1088 = C92 * C1075;
    const double C2064 = C90 * C1075;
    const double C2118 = C155 * C1075;
    const double C2182 = C222 * C1075;
    const double C5855 = C3084 * C1075;
    const double C10788 = C8570 * C1075;
    const double C12053 = C8568 * C1075;
    const double C12165 = C12155 * C1075;
    const double C14455 = C8564 * C1075;
    const double C10209 = C10201 + C10202;
    const double C4531 = C4526 + C4527;
    const double C9316 = C9304 + C9305;
    const double C10939 = C10935 + C10936;
    const double C13730 = C13722 + C13723;
    const double C11867 = C11863 + C11864;
    const double C17399 = C17397 + C17398;
    const double C14959 = C13654 * C8564;
    const double C17396 = C17194 * C12155;
    const double C17799 = C17194 * C8634;
    const double C14382 = C14374 + C14375;
    const double C7885 = C7882 + C7883;
    const double C13408 = C13402 + C13403;
    const double C11657 = C11649 + C11650;
    const double C17195 = C17192 + C17193;
    const double C3682 =
        (2 * (2 * ae * C19000 + C18994 * C19063) + C19335 + C19335 +
         C18994 * (C19063 + C19332 + C19332 +
                   C18994 * (2 * C19008 + C18994 * C19068))) /
        C18802;
    const double C4241 =
        (C19335 + C19019 * (C19100 + ae * C19359 + C18994 * C19369)) / C18802;
    const double C3635 = C3084 * C3515;
    const double C3689 = C3133 * C3515;
    const double C3685 = C3134 * C3515;
    const double C3735 = C222 * C3515;
    const double C9375 = C8634 * C3515;
    const double C4116 = C3134 * C3983;
    const double C5516 = C3084 * C3983;
    const double C5580 = C3133 * C3983;
    const double C5633 = C222 * C3983;
    const double C6367 = C155 * C3983;
    const double C11728 = C8634 * C3983;
    const double C16157 = C8633 * C3983;
    const double C16213 = C12155 * C3983;
    const double C18268 = C8566 * C3983;
    const double C8459 = C8456 + C8457;
    const double C16865 = C16859 + C16860;
    const double C6997 =
        (2 * (2 * ae * C19025 + C19019 * C19112) + C19499 + C19499 +
         C19019 * (C19112 + C19496 + C19496 +
                   C19019 * (2 * C19033 + C19019 * C19117))) /
        C18802;
    const double C6906 = C3084 * C6692;
    const double C6955 = C155 * C6692;
    const double C7004 = C5933 * C6692;
    const double C7000 = C5934 * C6692;
    const double C13515 = C12155 * C6692;
    const double C18641 = C8402 * C12051;
    const double C8294 = C8292 + C8286;
    const double C8295 = C8293 + C8288;
    const double C701 =
        (C19004 + ae * C19007 + C18924 * C19015 + ae * C18994 * C18986 +
         C18994 * (C18988 + C18994 * (C19011 + ae * C18924 * C19012 +
                                      C18924 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C795 =
        (C19049 + ae * C19007 + C18924 * C19054 + ae * C18994 * C18986 +
         C18994 * (C18988 + C18994 * (C19052 + ae * C18924 * C19012 +
                                      C18924 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19046)))) /
        C18802;
    const double C1192 =
        (C19029 + ae * C19032 + C18924 * C19040 + ae * C19019 * C18986 +
         C19019 * (C18988 + C19019 * (C19036 + ae * C18924 * C19037 +
                                      C18924 * (ae * C19037 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19023)))) /
        C18802;
    const double C1374 =
        (C19087 + ae * C19032 + C18924 * C19092 + ae * C19019 * C18986 +
         C19019 * (C18988 + C19019 * (C19090 + ae * C18924 * C19037 +
                                      C18924 * (ae * C19037 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19084)))) /
        C18802;
    const double C2660 =
        (C19019 * (C18988 + C18994 * (C19011 + ae * C18924 * C19012 +
                                      C18924 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C18989 = C18965 + C18987;
    const double C19258 = ae * C19256;
    const double C2598 = (C19019 * C19256) / C18799;
    const double C19272 = ae * C19270;
    const double C652 = C92 * C639;
    const double C3094 = C3084 * C639;
    const double C10128 = C8570 * C639;
    const double C1093 = C92 * C1080;
    const double C5856 = C3084 * C1080;
    const double C14231 = C8570 * C1080;
    const double C4243 =
        (C19100 + ae * C19359 + C18994 * C19369 + ae * C19019 * C19351 +
         C19019 * (C19353 + C19019 * (C19103 + ae * C18994 * C19037 +
                                      C18994 * (ae * C19037 +
                                                C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C19097)))) /
        C18802;
    const double C19354 = C19339 + C19352;
    const double C19454 = ae * C19452;
    const double C4121 = C3134 * C3985;
    const double C6368 = C155 * C3985;
    const double C18496 = C8634 * C3985;
    const double C19425 = ae * C19424;
    const double C4404 =
        (2 * C19156 + C18994 * C19424 + (C18947 + C18970 * C19058) * ae) /
        C18799;
    const double C4914 = (C19019 * C19424) / C18799;
    const double C19551 = ae * C19550;
    const double C7649 =
        (2 * C19248 + C19019 * C19550 + (C18947 + C18970 * C19107) * ae) /
        C18799;
    const double C19518 = C19503 + C19516;
    const double C19574 = ae * C19573;
    const double C8170 =
        (2 * C19404 + C19019 * C19573 + (C19328 + C19341 * C19107) * ae) /
        C18799;
    const double C89 =
        (-(((-4 * C18806) / C18799 - C18819 / C18799) * be) / C18799) / C18803 -
        ((2 * ((-C18807 / C18799) / C18803 - (0 * be) / C18799) -
          C18819 / (2 * C18802)) *
         be) /
            C18799;
    const double C8567 =
        -(((-4 * C18806) / C18799 - C18819 / C18799) * be) / C18799;
    const double C3462 = C3083 * C3451;
    const double C3460 = C3083 * C631;
    const double C3458 = C3083 * C630;
    const double C4344 = C3083 * C632;
    const double C4342 = C3083 * C629;
    const double C5334 = C3083 * C2593;
    const double C5332 = C3083 * C3930;
    const double C6575 = C3083 * C6564;
    const double C6573 = C3083 * C1072;
    const double C6571 = C3083 * C1071;
    const double C7529 = C3083 * C1073;
    const double C7527 = C3083 * C1070;
    const double C8047 = C3083 * C3931;
    const double C16986 = C3083 * C2594;
    const double C9118 = C8569 * C632;
    const double C9116 = C8569 * C629;
    const double C10125 = C8569 * C628;
    const double C11435 = C8569 * C2594;
    const double C13044 = C8569 * C1073;
    const double C13042 = C8569 * C1070;
    const double C14228 = C8569 * C1069;
    const double C9319 = C9310 + C9311;
    const double C9317 = C9306 + C9307;
    const double C9314 = C9300 + C9301;
    const double C9312 = C9296 + C9297;
    const double C9489 = C9484 + C9485;
    const double C9486 = C9478 + C9479;
    const double C10359 = C10353 + C10354;
    const double C10357 = C10349 + C10350;
    const double C10579 = C10575 + C10576;
    const double C11660 = C11655 + C11656;
    const double C11658 = C11651 + C11652;
    const double C11868 = C11865 + C11866;
    const double C13243 = C13234 + C13235;
    const double C13241 = C13230 + C13231;
    const double C13238 = C13224 + C13225;
    const double C13236 = C13220 + C13221;
    const double C13409 = C13404 + C13405;
    const double C13406 = C13398 + C13399;
    const double C14462 = C14456 + C14457;
    const double C14460 = C14452 + C14453;
    const double C14674 = C14670 + C14671;
    const double C3250 =
        (-(((-4 * C18849) / C18799 - C18864 / C18799) * be) / C18799) / C18803 -
        ((2 * ((-C18850 / C18799) / C18803 - (0 * be) / C18799) -
          C18864 / (2 * C18802)) *
         be) /
            C18799;
    const double C8809 =
        -(((-4 * C18849) / C18799 - C18864 / C18799) * be) / C18799;
    const double C8820 = C8810 * C628;
    const double C8817 = C8810 * C629;
    const double C10427 = C8810 * C632;
    const double C11073 = C8810 * C2594;
    const double C16687 = C8810 * C3931;
    const double C16685 = C8810 * C2593;
    const double C18493 = C8810 * C3930;
    const double C8659 = C8650 + C8651;
    const double C8657 = C8646 + C8647;
    const double C8654 = C8640 + C8641;
    const double C8652 = C8636 + C8637;
    const double C9009 = C9004 + C9005;
    const double C9006 = C8998 + C8999;
    const double C10212 = C10207 + C10208;
    const double C10210 = C10203 + C10204;
    const double C10652 = C10649 + C10650;
    const double C10868 = C10863 + C10864;
    const double C10866 = C10859 + C10860;
    const double C11295 = C11292 + C11293;
    const double C16524 = C16515 + C16516;
    const double C16522 = C16511 + C16512;
    const double C16519 = C16505 + C16506;
    const double C16517 = C16501 + C16502;
    const double C16866 = C16861 + C16862;
    const double C16863 = C16855 + C16856;
    const double C18275 = C18269 + C18270;
    const double C18273 = C18265 + C18266;
    const double C18715 = C18711 + C18712;
    const double C6164 =
        (-(((-4 * C18875) / C18799 - C18890 / C18799) * be) / C18799) / C18803 -
        ((2 * ((-C18876 / C18799) / C18803 - (0 * be) / C18799) -
          C18890 / (2 * C18802)) *
         be) /
            C18799;
    const double C12500 =
        -(((-4 * C18875) / C18799 - C18890 / C18799) * be) / C18799;
    const double C12511 = C12501 * C1069;
    const double C12508 = C12501 * C1070;
    const double C14148 = C12501 * C2594;
    const double C14812 = C12501 * C1073;
    const double C16383 = C12501 * C3930;
    const double C16381 = C12501 * C2593;
    const double C18783 = C12501 * C3931;
    const double C12180 = C12171 + C12172;
    const double C12178 = C12167 + C12168;
    const double C12175 = C12161 + C12162;
    const double C12173 = C12157 + C12158;
    const double C12342 = C12337 + C12338;
    const double C12339 = C12331 + C12332;
    const double C13733 = C13728 + C13729;
    const double C13731 = C13724 + C13725;
    const double C13942 = C13939 + C13940;
    const double C14385 = C14380 + C14381;
    const double C14383 = C14376 + C14377;
    const double C14603 = C14600 + C14601;
    const double C16056 = C16047 + C16048;
    const double C16054 = C16043 + C16044;
    const double C16051 = C16037 + C16038;
    const double C16049 = C16033 + C16034;
    const double C16220 = C16215 + C16216;
    const double C16217 = C16209 + C16210;
    const double C18354 = C18349 + C18350;
    const double C18352 = C18345 + C18346;
    const double C18574 = C18571 + C18572;
    const double C14081 = C14080 * C12051;
    const double C13870 = C13869 + C13867;
    const double C11157 = C11156 * C8566;
    const double C1583 = C19794 * C696;
    const double C8645 = C8566 * C696;
    const double C10356 = C8564 * C790;
    const double C2183 = C19805 * C1187;
    const double C12166 = C12051 * C1187;
    const double C14673 = C8564 * C1369;
    const double C183 = C175 + C176;
    const double C250 = C242 + C243;
    const double C1654 = C1646 + C1647;
    const double C10358 = C10351 + C10352;
    const double C2126 = C2118 + C2119;
    const double C14461 = C14454 + C14455;
    const double C11579 = C10939 * C8564;
    const double C17400 = C17399 * C12051;
    const double C17800 = C17195 * C8566;
    const double C18714 = C8566 * C4241;
    const double C3643 = C3635 + C3636;
    const double C3739 = C3735 + C3736;
    const double C5524 = C5516 + C5517;
    const double C5637 = C5633 + C5634;
    const double C16219 = C16213 + C16214;
    const double C18274 = C18267 + C18268;
    const double C6910 = C6906 + C6907;
    const double C6959 = C6955 + C6956;
    const double C8296 = C8294 * C19721;
    const double C15158 = C8294 * C8563;
    const double C8297 = C8295 * C19721;
    const double C18990 = C18989 + C18978;
    const double C1525 =
        (2 * (2 * ae * C18994 * C18949 + C18924 * C19255) + C19258 + C19258 +
         C18924 * (C19255 + C19259 + C19259 +
                   C18924 * (2 * ae * C18994 * C18973 +
                             C18924 * C18994 *
                                 (C18963 * C18964 +
                                  C18928 * bs[6] * std::pow(C18922, 6)) *
                                 C18931))) /
        C18802;
    const double C2716 =
        (C19258 + C19019 * C18994 *
                      (C19036 + ae * C18924 * C19037 +
                       C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                   bs[6] * C19023))) /
        C18802;
    const double C2931 =
        (C19258 + C19019 * C18994 *
                      (C19090 + ae * C18924 * C19037 +
                       C18924 * (ae * C19037 + C18924 * std::pow(C18922, 6) *
                                                   bs[6] * C19084))) /
        C18802;
    const double C2605 = C92 * C2598;
    const double C10790 = C8570 * C2598;
    const double C15478 = C3084 * C2598;
    const double C2061 =
        (2 * (2 * ae * C19019 * C18949 + C18924 * C19269) + C19272 + C19272 +
         C18924 * (C19269 + C19273 + C19273 +
                   C18924 * (2 * ae * C19019 * C18973 +
                             C18924 * C19019 *
                                 (C18963 * C18964 +
                                  C18928 * bs[6] * std::pow(C18922, 6)) *
                                 C18931))) /
        C18802;
    const double C2769 =
        (C19272 + C18994 * C19019 *
                      (C19052 + ae * C18924 * C19012 +
                       C18924 * (ae * C19012 + C18924 * std::pow(C18922, 6) *
                                                   bs[6] * C19046))) /
        C18802;
    const double C19355 = C19354 + C19348;
    const double C5577 =
        (2 * (2 * ae * C19019 * C19005 + C18994 * C19451) + C19454 + C19454 +
         C18994 * (C19451 + C19455 + C19455 +
                   C18994 * (2 * ae * C19019 * C19012 +
                             C18994 * C19019 *
                                 (C18963 * C18964 +
                                  C19058 * bs[6] * std::pow(C18922, 6)) *
                                 C18931))) /
        C18802;
    const double C4581 =
        (2 * (2 * ae * C19007 + C18994 * C19415) + C19425 + C19425 +
         C18994 * (C19415 + C19422 + C19422 +
                   C18994 * (2 * ae * C19416 +
                             C18994 * C18924 *
                                 (C18963 * C18964 +
                                  C19058 * bs[6] * std::pow(C18922, 6)) *
                                 C18931))) /
        C18802;
    const double C5225 =
        (C19425 + C19019 * (C19431 + ae * C18994 * C19428 +
                            C18994 * (ae * C19428 + C18994 * C18924 *
                                                        std::pow(C18922, 6) *
                                                        bs[6] * C19097))) /
        C18802;
    const double C4585 = C3134 * C4404;
    const double C9377 = C8634 * C4404;
    const double C5073 = C3134 * C4914;
    const double C11730 = C8634 * C4914;
    const double C12781 = C155 * C4914;
    const double C7989 =
        (2 * (2 * ae * C19032 + C19019 * C19433) + C19551 + C19551 +
         C19019 * (C19433 + C19548 + C19548 +
                   C19019 * (2 * ae * C19428 +
                             C19019 * C18924 *
                                 (C18963 * C18964 +
                                  C19107 * bs[6] * std::pow(C18922, 6)) *
                                 C18931))) /
        C18802;
    const double C7993 = C5934 * C7649;
    const double C13517 = C12155 * C7649;
    const double C19519 = C19518 + C19512;
    const double C8509 =
        (2 * (2 * ae * C19359 + C19019 * C19564) + C19574 + C19574 +
         C19019 * (C19564 + C19571 + C19571 +
                   C19019 * (2 * ae * C19565 +
                             C19019 * C18994 *
                                 (C18963 * C18964 +
                                  C19107 * bs[6] * std::pow(C18922, 6)) *
                                 C18931))) /
        C18802;
    const double C8513 = C5934 * C8170;
    const double C16918 = C12155 * C8170;
    const double C9121 = C8567 * C631;
    const double C9114 = C8567 * C630;
    const double C10123 = C8567 * C629;
    const double C11437 = C8567 * C2593;
    const double C13046 = C8567 * C1072;
    const double C13040 = C8567 * C1071;
    const double C14226 = C8567 * C1070;
    const double C3468 = C3462 + C3463;
    const double C3467 = C3460 + C3088;
    const double C3466 = C3458 + C3087;
    const double C4348 = C4344 + C3089;
    const double C4347 = C4342 + C3090;
    const double C5338 = C5334 + C3941;
    const double C5337 = C5332 + C3940;
    const double C6581 = C6575 + C6576;
    const double C6580 = C6573 + C3943;
    const double C6579 = C6571 + C3942;
    const double C7533 = C7529 + C5854;
    const double C7532 = C7527 + C4862;
    const double C8050 = C8047 + C3944;
    const double C16988 = C16986 + C4863;
    const double C9128 = C9118 + C9119;
    const double C9127 = C9116 + C8575;
    const double C10130 = C10125 + C8576;
    const double C11441 = C11435 + C9640;
    const double C13052 = C13044 + C9645;
    const double C13051 = C13042 + C9642;
    const double C14233 = C14228 + C10788;
    const double C8823 = C8809 * C95;
    const double C8814 = C8809 * C94;
    const double C10429 = C8809 * C629;
    const double C11075 = C8809 * C1070;
    const double C16689 = C8809 * C1072;
    const double C16683 = C8809 * C1071;
    const double C18491 = C8809 * C2593;
    const double C8830 = C8820 + C8821;
    const double C8829 = C8817 + C8818;
    const double C10433 = C10427 + C9370;
    const double C11079 = C11073 + C9848;
    const double C16695 = C16687 + C9853;
    const double C16694 = C16685 + C9850;
    const double C18498 = C18493 + C11728;
    const double C12514 = C12500 * C95;
    const double C12505 = C12500 * C94;
    const double C14150 = C12500 * C629;
    const double C14814 = C12500 * C1070;
    const double C16385 = C12500 * C631;
    const double C16379 = C12500 * C630;
    const double C18785 = C12500 * C2593;
    const double C12521 = C12511 + C12512;
    const double C12520 = C12508 + C12509;
    const double C14154 = C14148 + C12982;
    const double C14818 = C14812 + C13510;
    const double C16391 = C16383 + C12987;
    const double C16390 = C16381 + C12984;
    const double C18789 = C18783 + C15425;
    const double C15159 = C13870 * C8564;
    const double C1590 = C1582 + C1583;
    const double C8656 = C8644 + C8645;
    const double C10360 = C10355 + C10356;
    const double C2190 = C2182 + C2183;
    const double C12177 = C12165 + C12166;
    const double C14675 = C14672 + C14673;
    const double C10282 = C1654 * C8564;
    const double C14307 = C2126 * C8564;
    const double C18716 = C18713 + C18714;
    const double C18424 = C5524 * C8566;
    const double C18991 = ae * C18990;
    const double C102 =
        (3 * C18958 + C18924 * C18990 + (2 * C18947 + C18924 * C18975) * ae) /
        C18799;
    const double C1524 = (C18994 * C18990) / C18799;
    const double C2060 = (C19019 * C18990) / C18799;
    const double C19356 = ae * C19355;
    const double C3516 =
        (3 * C19334 + C18994 * C19355 + (2 * C19328 + C18994 * C19346) * ae) /
        C18799;
    const double C5394 = (C19019 * C19355) / C18799;
    const double C19520 = ae * C19519;
    const double C6693 =
        (3 * C19498 + C19019 * C19519 + (2 * C19492 + C19019 * C19510) * ae) /
        C18799;
    const double C9129 = C9121 + C9122;
    const double C9126 = C9114 + C8574;
    const double C10129 = C10123 + C8577;
    const double C11442 = C11437 + C9641;
    const double C13053 = C13046 + C9644;
    const double C13050 = C13040 + C9643;
    const double C14232 = C14226 + C10787;
    const double C3471 = C3468 + C3463;
    const double C3470 = C3467 + C3088;
    const double C3469 = C3466 + C3087;
    const double C4350 = C4348 + C3089;
    const double C4349 = C4347 + C3090;
    const double C5340 = C5338 + C3941;
    const double C5339 = C5337 + C3940;
    const double C6584 = C6581 + C6576;
    const double C6583 = C6580 + C3943;
    const double C6582 = C6579 + C3942;
    const double C7535 = C7533 + C5854;
    const double C7534 = C7532 + C4862;
    const double C8051 = C8050 + C3944;
    const double C16989 = C16988 + C4863;
    const double C9132 = C9128 + C9119;
    const double C9131 = C9127 + C8575;
    const double C10132 = C10130 + C8576;
    const double C11443 = C11441 + C9640;
    const double C13056 = C13052 + C9645;
    const double C13055 = C13051 + C9642;
    const double C14235 = C14233 + C10788;
    const double C8831 = C8823 + C8824;
    const double C8828 = C8814 + C8815;
    const double C10434 = C10429 + C9371;
    const double C11080 = C11075 + C9849;
    const double C16696 = C16689 + C9852;
    const double C16693 = C16683 + C9851;
    const double C18497 = C18491 + C11727;
    const double C8834 = C8830 + C8821;
    const double C8833 = C8829 + C8818;
    const double C10435 = C10433 + C9370;
    const double C11081 = C11079 + C9848;
    const double C16699 = C16695 + C9853;
    const double C16698 = C16694 + C9850;
    const double C18500 = C18498 + C11728;
    const double C12522 = C12514 + C12515;
    const double C12519 = C12505 + C12506;
    const double C14155 = C14150 + C12983;
    const double C14819 = C14814 + C13511;
    const double C16392 = C16385 + C12986;
    const double C16389 = C16379 + C12985;
    const double C18790 = C18785 + C15424;
    const double C12525 = C12521 + C12512;
    const double C12524 = C12520 + C12509;
    const double C14156 = C14154 + C12982;
    const double C14820 = C14818 + C13510;
    const double C16395 = C16391 + C12987;
    const double C16394 = C16390 + C12984;
    const double C18791 = C18789 + C15425;
    const double C107 =
        (3 * (C18953 + C18956 + C18956 + C18924 * C18984) + C18991 + C18991 +
         C18924 *
             (2 * C18984 + C18988 + C18988 +
              C18924 * (C18979 + C18983 + C18983 +
                        C18924 * (2 * ae * C18973 +
                                  C18924 *
                                      (C18963 * C18964 +
                                       C18928 * bs[6] * std::pow(C18922, 6)) *
                                      C18931)))) /
        C18802;
    const double C1580 =
        (C18991 + C18994 * (2 * C19015 + ae * C19016 +
                            C18924 * (C19011 + ae * C18924 * C19012 +
                                      C18924 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C18998)))) /
        C18802;
    const double C1707 =
        (C18991 + C18994 * (2 * C19054 + ae * C19016 +
                            C18924 * (C19052 + ae * C18924 * C19012 +
                                      C18924 * (ae * C19012 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19046)))) /
        C18802;
    const double C2180 =
        (C18991 + C19019 * (2 * C19040 + ae * C19041 +
                            C18924 * (C19036 + ae * C18924 * C19037 +
                                      C18924 * (ae * C19037 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19023)))) /
        C18802;
    const double C2417 =
        (C18991 + C19019 * (2 * C19092 + ae * C19041 +
                            C18924 * (C19090 + ae * C18924 * C19037 +
                                      C18924 * (ae * C19037 +
                                                C18924 * std::pow(C18922, 6) *
                                                    bs[6] * C19084)))) /
        C18802;
    const double C117 = C92 * C102;
    const double C1529 = C92 * C1524;
    const double C8583 = C8570 * C1524;
    const double C2065 = C92 * C2060;
    const double C12054 = C8570 * C2060;
    const double C3683 =
        (3 * (C19063 + C19332 + C19332 + C18994 * C19343) + C19356 + C19356 +
         C18994 *
             (2 * C19343 + C19353 + C19353 +
              C18994 * (C19068 + C19349 + C19349 +
                        C18994 * (2 * ae * C19012 +
                                  C18994 *
                                      (C18963 * C18964 +
                                       C19058 * bs[6] * std::pow(C18922, 6)) *
                                      C18931)))) /
        C18802;
    const double C5749 =
        (C19356 + C19019 * (2 * C19369 + ae * C19363 +
                            C18994 * (C19103 + ae * C18994 * C19037 +
                                      C18994 * (ae * C19037 +
                                                C18994 * std::pow(C18922, 6) *
                                                    bs[6] * C19097)))) /
        C18802;
    const double C3690 = C3134 * C3516;
    const double C5581 = C3134 * C5394;
    const double C16158 = C8634 * C5394;
    const double C6998 =
        (3 * (C19112 + C19496 + C19496 + C19019 * C19507) + C19520 + C19520 +
         C19019 *
             (2 * C19507 + C19517 + C19517 +
              C19019 * (C19117 + C19513 + C19513 +
                        C19019 * (2 * ae * C19037 +
                                  C19019 *
                                      (C18963 * C18964 +
                                       C19107 * bs[6] * std::pow(C18922, 6)) *
                                      C18931)))) /
        C18802;
    const double C8347 =
        (C19520 + C18994 * (2 * C19458 + ae * C19481 +
                            C19019 * (C19079 + ae * C19019 * C19012 +
                                      C19019 * (ae * C19012 +
                                                C19019 * std::pow(C18922, 6) *
                                                    bs[6] * C19073)))) /
        C18802;
    const double C7005 = C5934 * C6693;
    const double C9133 = C9129 + C9122;
    const double C9130 = C9126 + C8574;
    const double C10131 = C10129 + C8577;
    const double C11444 = C11442 + C9641;
    const double C13057 = C13053 + C9644;
    const double C13054 = C13050 + C9643;
    const double C14234 = C14232 + C10787;
    const double C3474 = C3471 + C3464;
    const double C3473 = C3470 + C3461;
    const double C3472 = C3469 + C3459;
    const double C4352 = C4350 + C4345;
    const double C4351 = C4349 + C4343;
    const double C5342 = C5340 + C5335;
    const double C5341 = C5339 + C5333;
    const double C6587 = C6584 + C6577;
    const double C6586 = C6583 + C6574;
    const double C6585 = C6582 + C6572;
    const double C7537 = C7535 + C7530;
    const double C7536 = C7534 + C7528;
    const double C8052 = C8051 + C8048;
    const double C16990 = C16989 + C16987;
    const double C9136 = C9132 + C9120;
    const double C9135 = C9131 + C9117;
    const double C10134 = C10132 + C10126;
    const double C11445 = C11443 + C11436;
    const double C13060 = C13056 + C13045;
    const double C13059 = C13055 + C13043;
    const double C14237 = C14235 + C14229;
    const double C8835 = C8831 + C8824;
    const double C8832 = C8828 + C8815;
    const double C10436 = C10434 + C9371;
    const double C11082 = C11080 + C9849;
    const double C16700 = C16696 + C9852;
    const double C16697 = C16693 + C9851;
    const double C18499 = C18497 + C11727;
    const double C8838 = C8834 + C8822;
    const double C8837 = C8833 + C8819;
    const double C10437 = C10435 + C10428;
    const double C11083 = C11081 + C11074;
    const double C16703 = C16699 + C16688;
    const double C16702 = C16698 + C16686;
    const double C18502 = C18500 + C18494;
    const double C12526 = C12522 + C12515;
    const double C12523 = C12519 + C12506;
    const double C14157 = C14155 + C12983;
    const double C14821 = C14819 + C13511;
    const double C16396 = C16392 + C12986;
    const double C16393 = C16389 + C12985;
    const double C18792 = C18790 + C15424;
    const double C12529 = C12525 + C12513;
    const double C12528 = C12524 + C12510;
    const double C14158 = C14156 + C14149;
    const double C14822 = C14820 + C14813;
    const double C16399 = C16395 + C16384;
    const double C16398 = C16394 + C16382;
    const double C18793 = C18791 + C18784;
    const double C9137 = C9133 + C9123;
    const double C9134 = C9130 + C9115;
    const double C10133 = C10131 + C10124;
    const double C11446 = C11444 + C11438;
    const double C13061 = C13057 + C13047;
    const double C13058 = C13054 + C13041;
    const double C14236 = C14234 + C14227;
    const double C3477 = C3474 * C19805;
    const double C3476 = C3473 * C19805;
    const double C15932 = C3473 * C12050;
    const double C3475 = C3472 * C19805;
    const double C15929 = C3472 * C12050;
    const double C4354 = C4352 * C19805;
    const double C4353 = C4351 * C19805;
    const double C16985 = C4351 * C12050;
    const double C5344 = C5342 * C19805;
    const double C15930 = C5342 * C12051;
    const double C18198 = C5342 * C12050;
    const double C5343 = C5341 * C19805;
    const double C15931 = C5341 * C12051;
    const double C18197 = C8052 * C12051;
    const double C16991 = C16990 * C12051;
    const double C8839 = C8835 + C8825;
    const double C8836 = C8832 + C8816;
    const double C10438 = C10436 + C10430;
    const double C11084 = C11082 + C11076;
    const double C16704 = C16700 + C16690;
    const double C16701 = C16697 + C16684;
    const double C18501 = C18499 + C18492;
    const double C12530 = C12526 + C12516;
    const double C12527 = C12523 + C12507;
    const double C14159 = C14157 + C14151;
    const double C14823 = C14821 + C14815;
    const double C16400 = C16396 + C16386;
    const double C16397 = C16393 + C16380;
    const double C18794 = C18792 + C18786;
    d2eexx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C19805 * C8565 +
                     (C9134 + C9135) * C19805 * C8566) *
                        C19769 * C1519 -
                    ((C9136 + C9137) * C19805 * C8566 +
                     (C9135 + C9134) * C19805 * C8565) *
                        C19769 * C1520) *
                       C1521 +
                   (((C10133 + C10134) * C19805 * C8565 +
                     (C8567 * C632 + C10127 + C10127 + C8563 * C644 +
                      C8569 * C633 + C10128 + C10128 + C8564 * C645) *
                         C19805 * C8566) *
                        C19769 * C1520 -
                    ((C10134 + C10133) * C19805 * C8566 +
                     (C8569 * C95 + C8578 + C8578 + C8564 * C105 + C8567 * C94 +
                      C8579 + C8579 + C8563 * C104) *
                         C19805 * C8565) *
                        C19769 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
            (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
               C19805 * C19769 * C1519 -
           ((C10209 + C10210) * C8564 + (C10211 + C10212) * C8570 +
            (C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) *
                C8563 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C8568) *
               C19805 * C19769 * C1520) *
              C1521 +
          (((C10212 + C10211) * C8568 + (C10210 + C10209) * C8563 +
            (C8633 * C628 + C8565 * C690 + C8634 * C633 + C8566 * C695) *
                C8570 +
            (C8633 * C634 + C8565 * C696 + C8634 * C639 + C8566 * C701) *
                C8564) *
               C19805 * C19769 * C1520 -
           ((C8656 + C8657) * C8564 + (C8658 + C8659) * C8570 +
            (C8655 + C8654) * C8563 + (C8653 + C8652) * C8568) *
               C19805 * C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C8568 +
             (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
             C247 * C8564) *
                C8565 +
            (C9238 + C9239 + C9240 + C9241) * C8566) *
               C19769 * C1519 -
           ((C9242 + C9243 + C9244 + C9245) * C8566 +
            (C9241 + C9240 + C9239 + C9238) * C8565) *
               C19769 * C1520) *
              C1521 +
          (((C10279 + C10280 + C10281 + C10282) * C8565 +
            (C4465 * C8568 + C4466 * C8563 +
             (C222 * C633 + C19805 * C745) * C8570 +
             (C222 * C639 + C19805 * C751) * C8564) *
                C8566) *
               C19769 * C1520 -
           ((C10282 + C10281 + C10280 + C10279) * C8566 +
            (C249 * C8564 + C248 * C8570 + C247 * C8563 + C246 * C8568) *
                C8565) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C8565 +
            (C9312 + C9313) * C8634 + (C9314 + C9315) * C8566) *
               C19805 * C19769 * C1519 -
           ((C9316 + C9317) * C8566 + (C9318 + C9319) * C8634 +
            (C9315 + C9314) * C8565 + (C9313 + C9312) * C8633) *
               C19805 * C19769 * C1520) *
              C1521 +
          (((C10357 + C10358) * C8633 + (C10359 + C10360) * C8565 +
            (C8568 * C632 + C8563 * C638 + C8570 * C633 + C8564 * C639) *
                C8634 +
            (C8568 * C694 + C8563 * C794 + C8570 * C695 + C8564 * C795) *
                C8566) *
               C19805 * C19769 * C1520 -
           ((C10360 + C10359) * C8566 + (C10358 + C10357) * C8634 +
            (C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) *
                C8565 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C8633) *
               C19805 * C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8809 * C93 + C8812 + C8812 + C8565 * C333 +
                      C8810 * C630 + C8813 + C8813 + C8566 * C836) *
                         C8563 +
                     (C8836 + C8837) * C8564) *
                        C19805 * C19769 * C1519 -
                    ((C10437 + C10438) * C8564 +
                     (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                      C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                         C8563) *
                        C19805 * C19769 * C1520) *
                       C1521 +
                   (((C10438 + C10437) * C8563 +
                     (C8809 * C628 + C10431 + C10431 + C8565 * C834 +
                      C8810 * C633 + C10432 + C10432 + C8566 * C839) *
                         C8564) *
                        C19805 * C19769 * C1520 -
                    ((C8838 + C8839) * C8564 + (C8837 + C8836) * C8563) *
                        C19805 * C19769 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C8633 +
             (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
             C3737 * C8566) *
                C8563 +
            (C8890 + C8891 + C8892 + C8893) * C8564) *
               C19769 * C1519 -
           ((C10505 + C10506 + C10507 + C10508) * C8564 +
            (C3738 * C8566 + C3576 * C8634 + C3737 * C8565 + C3574 * C8633) *
                C8563) *
               C19769 * C1520) *
              C1521 +
          (((C10508 + C10507 + C10506 + C10505) * C8563 +
            (C1655 * C8633 + C1828 * C8565 +
             (C222 * C633 + C19805 * C745) * C8634 +
             (C222 * C695 + C19805 * C889) * C8566) *
                C8564) *
               C19769 * C1520 -
           ((C8894 + C8895 + C8896 + C8897) * C8564 +
            (C8893 + C8892 + C8891 + C8890) * C8563) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
             (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                 C19805) *
                C8565 +
            ((C9312 + C9313) * C222 + (C9486 + C9487) * C19805) * C8566) *
               C19769 * C1519 -
           (((C9488 + C9489) * C19805 + (C9318 + C9319) * C222) * C8566 +
            ((C9487 + C9486) * C19805 + (C9313 + C9312) * C222) * C8565) *
               C19769 * C1520) *
              C1521 +
          ((((C10357 + C10358) * C222 + (C10579 + C10580) * C19805) * C8565 +
            ((C8568 * C632 + C8563 * C638 + C8570 * C633 + C8564 * C639) *
                 C222 +
             (C8568 * C744 + C8563 * C932 + C8570 * C745 + C8564 * C933) *
                 C19805) *
                C8566) *
               C19769 * C1520 -
           (((C10580 + C10579) * C19805 + (C10358 + C10357) * C222) * C8566 +
            ((C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
                 C19805 +
             (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C222) *
                C8565) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
             (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                 C19805) *
                C8563 +
            ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
               C19769 * C1519 -
           (((C10651 + C10652) * C19805 + (C10211 + C10212) * C222) * C8564 +
            ((C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
                 C19805 +
             (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                 C222) *
                C8563) *
               C19769 * C1520) *
              C1521 +
          ((((C10212 + C10211) * C222 + (C10652 + C10651) * C19805) * C8563 +
            ((C8633 * C628 + C8565 * C690 + C8634 * C633 + C8566 * C695) *
                 C222 +
             (C8633 * C740 + C8565 * C972 + C8634 * C745 + C8566 * C977) *
                 C19805) *
                C8564) *
               C19769 * C1520 -
           (((C9008 + C9009) * C19805 + (C8658 + C8659) * C222) * C8564 +
            ((C9007 + C9006) * C19805 + (C8653 + C8652) * C222) * C8563) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
                      C3890 * C8566) *
                         C8563 +
                     (C9060 + C9061) * C8564) *
                        C19769 * C1519 -
                    ((C10719 + C10720) * C8564 +
                     (C3891 * C8566 + C3890 * C8565) * C8563) *
                        C19769 * C1520) *
                       C1521 +
                   (((C10720 + C10719) * C8563 +
                     (C2004 * C8565 +
                      (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C8566) *
                         C8564) *
                        C19769 * C1520 -
                    ((C9062 + C9063) * C8564 + (C9061 + C9060) * C8563) *
                        C19769 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C19805 * C8565 +
                     (C9134 + C9135) * C19805 * C8566) *
                        C2057 -
                    ((C11445 + C11446) * C19805 * C8566 +
                     (C8569 * C1070 + C9642 + C9642 + C8564 * C1082 +
                      C8567 * C1071 + C9643 + C9643 + C8563 * C1083) *
                         C19805 * C8565) *
                        C2058) *
                       C1519 +
                   (((C11446 + C11445) * C19805 * C8565 +
                     (C8567 * C3930 + C11439 + C11439 + C8563 * C3936 +
                      C8569 * C4858 + C11440 + C11440 + C8564 * C4860) *
                         C19805 * C8566) *
                        C2058 -
                    ((C9136 + C9137) * C19805 * C8566 +
                     (C9135 + C9134) * C19805 * C8565) *
                        C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
            (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
               C19805 * C2057 -
           ((C10865 + C10866) * C8564 + (C10867 + C10868) * C8570 +
            (C8634 * C2596 + C8566 * C2658 + C8633 * C1077 + C8565 * C1139) *
                C8563 +
            (C8634 * C2593 + C8566 * C2655 + C8633 * C1071 + C8565 * C1133) *
                C8568) *
               C19805 * C2058) *
              C1519 +
          (((C8633 * C2593 + C8565 * C2655 + C8634 * C3930 + C8566 * C3983) *
                C8568 +
            (C8633 * C2596 + C8565 * C2658 + C8634 * C3933 + C8566 * C3986) *
                C8563 +
            (C8633 * C2594 + C8565 * C2656 + C8634 * C4858 + C8566 * C4914) *
                C8570 +
            (C8633 * C2597 + C8565 * C2659 + C8634 * C4859 + C8566 * C4915) *
                C8564) *
               C19805 * C2058 -
           ((C10209 + C10210) * C8564 + (C10211 + C10212) * C8570 +
            (C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) *
                C8563 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C8568) *
               C19805 * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C19805 * C223) * C8568 +
                      (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
                      C247 * C8564) *
                         C8565 +
                     (C9238 + C9239 + C9240 + C9241) * C8566) *
                        C2057 -
                    ((C11579 + C11580 + C11581 + C11582) * C8566 +
                     (C2192 * C8564 + C2193 * C8570 +
                      (C222 * C1077 + C19805 * C1189) * C8563 +
                      (C222 * C1071 + C19805 * C1183) * C8568) *
                         C8565) *
                        C2058) *
                       C1519 +
                   (((C11582 + C11581 + C11580 + C11579) * C8565 +
                     (C5458 * C8568 + C5457 * C8563 +
                      (C222 * C4858 + C19805 * C4966) * C8570 +
                      (C222 * C4859 + C19805 * C4967) * C8564) *
                         C8566) *
                        C2058 -
                    ((C9242 + C9243 + C9244 + C9245) * C8566 +
                     (C9241 + C9240 + C9239 + C9238) * C8565) *
                        C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C8565 +
            (C9312 + C9313) * C8634 + (C9314 + C9315) * C8566) *
               C19805 * C2057 -
           ((C11657 + C11658) * C8566 + (C11659 + C11660) * C8634 +
            (C8570 * C1132 + C8564 * C1232 + C8568 * C1133 + C8563 * C1233) *
                C8565 +
            (C8570 * C1070 + C8564 * C1076 + C8568 * C1071 + C8563 * C1077) *
                C8633) *
               C19805 * C2058) *
              C1519 +
          (((C11660 + C11659) * C8633 + (C11658 + C11657) * C8565 +
            (C8568 * C3930 + C8563 * C3933 + C8570 * C4858 + C8564 * C4859) *
                C8634 +
            (C8568 * C3983 + C8563 * C4071 + C8570 * C4914 + C8564 * C5018) *
                C8566) *
               C19805 * C2058 -
           ((C9316 + C9317) * C8566 + (C9318 + C9319) * C8634 +
            (C9315 + C9314) * C8565 + (C9313 + C9312) * C8633) *
               C19805 * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8809 * C93 + C8812 + C8812 + C8565 * C333 +
                      C8810 * C630 + C8813 + C8813 + C8566 * C836) *
                         C8563 +
                     (C8836 + C8837) * C8564) *
                        C19805 * C2057 -
                    ((C11083 + C11084) * C8564 +
                     (C8810 * C2593 + C9850 + C9850 + C8566 * C2820 +
                      C8809 * C1071 + C9851 + C9851 + C8565 * C1277) *
                         C8563) *
                        C19805 * C2058) *
                       C1519 +
                   (((C8809 * C2593 + C11727 + C11727 + C8565 * C2820 +
                      C8810 * C3930 + C11728 + C11728 + C8566 * C4112) *
                         C8563 +
                     (C8809 * C2594 + C11729 + C11729 + C8565 * C2821 +
                      C8810 * C4858 + C11730 + C11730 + C8566 * C5069) *
                         C8564) *
                        C19805 * C2058 -
                    ((C10437 + C10438) * C8564 +
                     (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                      C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                         C8563) *
                        C19805 * C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C8633 +
             (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
             C3737 * C8566) *
                C8563 +
            (C8890 + C8891 + C8892 + C8893) * C8564) *
               C2057 -
           ((C11157 + C11153 + C11154 + C11155) * C8564 +
            (C5638 * C8566 + C5460 * C8634 +
             (C222 * C1133 + C19805 * C1327) * C8565 +
             (C222 * C1071 + C19805 * C1183) * C8633) *
                C8563) *
               C2058) *
              C1519 +
          (((C5460 * C8633 + C5638 * C8565 + C5458 * C8634 + C5637 * C8566) *
                C8563 +
            (C10940 * C8633 + C11156 * C8565 +
             (C222 * C4858 + C19805 * C4966) * C8634 +
             (C222 * C4914 + C19805 * C5123) * C8566) *
                C8564) *
               C2058 -
           ((C10505 + C10506 + C10507 + C10508) * C8564 +
            (C3738 * C8566 + C3576 * C8634 + C3737 * C8565 + C3574 * C8633) *
                C8563) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
             (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                 C19805) *
                C8565 +
            ((C9312 + C9313) * C222 + (C9486 + C9487) * C19805) * C8566) *
               C2057 -
           (((C11867 + C11868) * C19805 + (C11659 + C11660) * C222) * C8566 +
            ((C8570 * C1182 + C8564 * C1370 + C8568 * C1183 + C8563 * C1371) *
                 C19805 +
             (C8570 * C1070 + C8564 * C1076 + C8568 * C1071 + C8563 * C1077) *
                 C222) *
                C8565) *
               C2058) *
              C1519 +
          ((((C11660 + C11659) * C222 + (C11868 + C11867) * C19805) * C8565 +
            ((C8568 * C3930 + C8563 * C3933 + C8570 * C4858 + C8564 * C4859) *
                 C222 +
             (C8568 * C4027 + C8563 * C4200 + C8570 * C4966 + C8564 * C5174) *
                 C19805) *
                C8566) *
               C2058 -
           (((C9488 + C9489) * C19805 + (C9318 + C9319) * C222) * C8566 +
            ((C9487 + C9486) * C19805 + (C9313 + C9312) * C222) * C8565) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
             (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                 C19805) *
                C8563 +
            ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
               C2057 -
           (((C11294 + C11295) * C19805 + (C10867 + C10868) * C222) * C8564 +
            ((C8634 * C2711 + C8566 * C2982 + C8633 * C1183 + C8565 * C1415) *
                 C19805 +
             (C8634 * C2593 + C8566 * C2655 + C8633 * C1071 + C8565 * C1133) *
                 C222) *
                C8563) *
               C2058) *
              C1519 +
          ((((C8633 * C2593 + C8565 * C2655 + C8634 * C3930 + C8566 * C3983) *
                 C222 +
             (C8633 * C2711 + C8565 * C2982 + C8634 * C4027 + C8566 * C4241) *
                 C19805) *
                C8563 +
            ((C8633 * C2594 + C8565 * C2656 + C8634 * C4858 + C8566 * C4914) *
                 C222 +
             (C8633 * C2712 + C8565 * C2983 + C8634 * C4966 + C8566 * C5225) *
                 C19805) *
                C8564) *
               C2058 -
           (((C10651 + C10652) * C19805 + (C10211 + C10212) * C222) * C8564 +
            ((C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
                 C19805 +
             (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                 C222) *
                C8563) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
                      C3890 * C8566) *
                         C8563 +
                     (C9060 + C9061) * C8564) *
                        C2057 -
                    ((C11368 + C11364) * C8564 +
                     (C5812 * C8566 +
                      (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C8565) *
                         C8563) *
                        C2058) *
                       C1519 +
                   (((C5812 * C8565 + C5811 * C8566) * C8563 +
                     (C11367 * C8565 +
                      (C557 * C4858 + C5278 + C5278 + C19805 * C5276) * C8566) *
                         C8564) *
                        C2058 -
                    ((C10719 + C10720) * C8564 +
                     (C3891 * C8566 + C3890 * C8565) * C8563) *
                        C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                     C8573 + C8573 + C8564 * C104) *
                        C19805 * C8565 +
                    (C9134 + C9135) * C19805 * C8566) *
                       C19769 * C624 -
                   ((C9136 + C9137) * C19805 * C8566 +
                    (C9135 + C9134) * C19805 * C8565) *
                       C19769 * C625 +
                   ((C9137 + C9136) * C19805 * C8565 +
                    (C8567 * C3451 + C9124 + C9124 + C8563 * C3455 +
                     C8569 * C4338 + C9125 + C9125 + C8564 * C4340) *
                        C19805 * C8566) *
                       C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                     C8573 + C8573 + C8564 * C104) *
                        C19805 * C8565 +
                    (C8567 * C630 + C8574 + C8574 + C8563 * C642 +
                     C8569 * C629 + C8575 + C8575 + C8564 * C641) *
                        C19805 * C8566) *
                       C19769 * C19755 * C84 -
                   ((C8569 * C628 + C8576 + C8576 + C8564 * C640 +
                     C8567 * C629 + C8577 + C8577 + C8563 * C641) *
                        C19805 * C8566 +
                    (C8569 * C95 + C8578 + C8578 + C8564 * C105 + C8567 * C94 +
                     C8579 + C8579 + C8563 * C104) *
                        C19805 * C8565) *
                       C19769 * C19755 * C85 +
                   ((C8567 * C95 + C8580 + C8580 + C8563 * C105 + C8569 * C96 +
                     C8581 + C8581 + C8564 * C106) *
                        C19805 * C8565 +
                    (C8567 * C628 + C8582 + C8582 + C8563 * C640 +
                     C8569 * C1523 + C8583 + C8583 + C8564 * C1525) *
                        C19805 * C8566) *
                       C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                     C8573 + C8573 + C8564 * C104) *
                        C19805 * C8565 +
                    (C9134 + C9135) * C19805 * C8566) *
                       C1066 -
                   ((C8569 * C2594 + C9640 + C9640 + C8564 * C2600 +
                     C8567 * C2593 + C9641 + C9641 + C8563 * C2599) *
                        C19805 * C8566 +
                    (C8569 * C1070 + C9642 + C9642 + C8564 * C1082 +
                     C8567 * C1071 + C9643 + C9643 + C8563 * C1083) *
                        C19805 * C8565) *
                       C1067 +
                   ((C8567 * C1072 + C9644 + C9644 + C8563 * C1084 +
                     C8569 * C1073 + C9645 + C9645 + C8564 * C1085) *
                        C19805 * C8565 +
                    (C8567 * C3931 + C9646 + C9646 + C8563 * C3937 +
                     C8569 * C7055 + C9647 + C9647 + C8564 * C7057) *
                        C19805 * C8566) *
                       C1068) *
                  C19755 * C19743) /
                     (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
           (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
           (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
              C19805 * C19769 * C624 -
          ((C8634 * C638 + C8566 * C700 + C8633 * C635 + C8565 * C697) * C8564 +
           (C8634 * C632 + C8566 * C694 + C8633 * C629 + C8565 * C691) * C8570 +
           (C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) * C8563 +
           (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
               C8568) *
              C19805 * C19769 * C625 +
          ((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
               C8568 +
           (C8633 * C637 + C8565 * C699 + C8634 * C3453 + C8566 * C3517) *
               C8563 +
           (C8633 * C632 + C8565 * C694 + C8634 * C4338 + C8566 * C4404) *
               C8570 +
           (C8633 * C638 + C8565 * C700 + C8634 * C4339 + C8566 * C4405) *
               C8564) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
           (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
           (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
              C19805 * C19769 * C19755 * C84 -
          ((C8656 + C8657) * C8564 + (C8658 + C8659) * C8570 +
           (C8655 + C8654) * C8563 + (C8653 + C8652) * C8568) *
              C19805 * C19769 * C19755 * C85 +
          ((C8659 + C8658) * C8568 + (C8657 + C8656) * C8563 +
           (C8633 * C96 + C8565 * C159 + C8634 * C1523 + C8566 * C1579) *
               C8570 +
           (C8633 * C101 + C8565 * C164 + C8634 * C1524 + C8566 * C1580) *
               C8564) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
           (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
           (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
              C19805 * C1066 -
          ((C8634 * C2597 + C8566 * C2659 + C8633 * C1076 + C8565 * C1138) *
               C8564 +
           (C8634 * C2594 + C8566 * C2656 + C8633 * C1070 + C8565 * C1132) *
               C8570 +
           (C8634 * C2596 + C8566 * C2658 + C8633 * C1077 + C8565 * C1139) *
               C8563 +
           (C8634 * C2593 + C8566 * C2655 + C8633 * C1071 + C8565 * C1133) *
               C8568) *
              C19805 * C1067 +
          ((C8633 * C1072 + C8565 * C1134 + C8634 * C3931 + C8566 * C3984) *
               C8568 +
           (C8633 * C1078 + C8565 * C1140 + C8634 * C3934 + C8566 * C3987) *
               C8563 +
           (C8633 * C1073 + C8565 * C1135 + C8634 * C7055 + C8566 * C7109) *
               C8570 +
           (C8633 * C1079 + C8565 * C1141 + C8634 * C7056 + C8566 * C7110) *
               C8564) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8568 +
            (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
            C247 * C8564) *
               C8565 +
           (C9238 + C9239 + C9240 + C9241) * C8566) *
              C19769 * C624 -
          ((C9242 + C9243 + C9244 + C9245) * C8566 +
           (C9241 + C9240 + C9239 + C9238) * C8565) *
              C19769 * C625 +
          ((C9245 + C9244 + C9243 + C9242) * C8565 +
           (C3579 * C8568 + C3578 * C8563 +
            (C222 * C4338 + C19805 * C4456) * C8570 +
            (C222 * C4339 + C19805 * C4457) * C8564) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8568 +
            (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
            C247 * C8564) *
               C8565 +
           (C3574 * C8568 + C3575 * C8563 + C1657 * C8570 + C1656 * C8564) *
               C8566) *
              C19769 * C19755 * C84 -
          ((C1654 * C8564 + C1655 * C8570 + C1656 * C8563 + C1657 * C8568) *
               C8566 +
           (C249 * C8564 + C248 * C8570 + C247 * C8563 + C246 * C8568) *
               C8565) *
              C19769 * C19755 * C85 +
          ((C248 * C8568 + C249 * C8563 + C251 * C8570 + C250 * C8564) * C8565 +
           (C1655 * C8568 + C1654 * C8563 +
            (C222 * C1523 + C19805 * C1643) * C8570 +
            (C222 * C1524 + C19805 * C1644) * C8564) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8568 +
            (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
            C247 * C8564) *
               C8565 +
           (C9238 + C9239 + C9240 + C9241) * C8566) *
              C1066 -
          (((C222 * C2597 + C19805 * C2715) * C8564 +
            (C222 * C2594 + C19805 * C2712) * C8570 + C5459 * C8563 +
            C5460 * C8568) *
               C8566 +
           (C2192 * C8564 + C2193 * C8570 +
            (C222 * C1077 + C19805 * C1189) * C8563 +
            (C222 * C1071 + C19805 * C1183) * C8568) *
               C8565) *
              C1067 +
          (((C222 * C1072 + C19805 * C1184) * C8568 +
            (C222 * C1078 + C19805 * C1190) * C8563 +
            (C222 * C1073 + C19805 * C1185) * C8570 +
            (C222 * C1079 + C19805 * C1191) * C8564) *
               C8565 +
           ((C222 * C3931 + C19805 * C4028) * C8568 +
            (C222 * C3934 + C19805 * C4031) * C8563 +
            (C222 * C7055 + C19805 * C7161) * C8570 +
            (C222 * C7056 + C19805 * C7162) * C8564) *
               C8566) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
           (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) * C8565 +
           (C9312 + C9313) * C8634 + (C9314 + C9315) * C8566) *
              C19805 * C19769 * C624 -
          ((C9316 + C9317) * C8566 + (C9318 + C9319) * C8634 +
           (C9315 + C9314) * C8565 + (C9313 + C9312) * C8633) *
              C19805 * C19769 * C625 +
          ((C9319 + C9318) * C8633 + (C9317 + C9316) * C8565 +
           (C8568 * C3451 + C8563 * C3453 + C8570 * C4338 + C8564 * C4339) *
               C8634 +
           (C8568 * C3515 + C8563 * C3624 + C8570 * C4404 + C8564 * C4518) *
               C8566) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
           (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) * C8565 +
           (C8568 * C630 + C8563 * C636 + C8570 * C629 + C8564 * C635) * C8634 +
           (C8568 * C692 + C8563 * C792 + C8570 * C691 + C8564 * C791) *
               C8566) *
              C19805 * C19769 * C19755 * C84 -
          ((C8570 * C690 + C8564 * C790 + C8568 * C691 + C8563 * C791) * C8566 +
           (C8570 * C628 + C8564 * C634 + C8568 * C629 + C8563 * C635) * C8634 +
           (C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) * C8565 +
           (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C8633) *
              C19805 * C19769 * C19755 * C85 +
          ((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C8633 +
           (C8568 * C158 + C8563 * C291 + C8570 * C159 + C8564 * C292) * C8565 +
           (C8568 * C628 + C8563 * C634 + C8570 * C1523 + C8564 * C1524) *
               C8634 +
           (C8568 * C690 + C8563 * C790 + C8570 * C1579 + C8564 * C1707) *
               C8566) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
           (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) * C8565 +
           (C9312 + C9313) * C8634 + (C9314 + C9315) * C8566) *
              C19805 * C1066 -
          ((C8570 * C2656 + C8564 * C2768 + C8568 * C2655 + C8563 * C2767) *
               C8566 +
           (C8570 * C2594 + C8564 * C2597 + C8568 * C2593 + C8563 * C2596) *
               C8634 +
           (C8570 * C1132 + C8564 * C1232 + C8568 * C1133 + C8563 * C1233) *
               C8565 +
           (C8570 * C1070 + C8564 * C1076 + C8568 * C1071 + C8563 * C1077) *
               C8633) *
              C19805 * C1067 +
          ((C8568 * C1072 + C8563 * C1078 + C8570 * C1073 + C8564 * C1079) *
               C8633 +
           (C8568 * C1134 + C8563 * C1234 + C8570 * C1135 + C8564 * C1235) *
               C8565 +
           (C8568 * C3931 + C8563 * C3934 + C8570 * C7055 + C8564 * C7056) *
               C8634 +
           (C8568 * C3984 + C8563 * C4072 + C8570 * C7109 + C8564 * C7213) *
               C8566) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C8563 +
                    (C8836 + C8837) * C8564) *
                       C19805 * C19769 * C624 -
                   ((C8810 * C632 + C9370 + C9370 + C8566 * C838 +
                     C8809 * C629 + C9371 + C9371 + C8565 * C835) *
                        C8564 +
                    (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                     C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                        C8563) *
                       C19805 * C19769 * C625 +
                   ((C8809 * C631 + C9374 + C9374 + C8565 * C837 +
                     C8810 * C3451 + C9375 + C9375 + C8566 * C3682) *
                        C8563 +
                    (C8809 * C632 + C9376 + C9376 + C8565 * C838 +
                     C8810 * C4338 + C9377 + C9377 + C8566 * C4581) *
                        C8564) *
                       C19805 * C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C8563 +
                    (C8836 + C8837) * C8564) *
                       C19805 * C19769 * C19755 * C84 -
                   ((C8838 + C8839) * C8564 + (C8837 + C8836) * C8563) *
                       C19805 * C19769 * C19755 * C85 +
                   ((C8839 + C8838) * C8563 +
                    (C8809 * C96 + C8826 + C8826 + C8565 * C336 +
                     C8810 * C1523 + C8827 + C8827 + C8566 * C1758) *
                        C8564) *
                       C19805 * C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C8563 +
                    (C8836 + C8837) * C8564) *
                       C19805 * C1066 -
                   ((C8810 * C2594 + C9848 + C9848 + C8566 * C2821 +
                     C8809 * C1070 + C9849 + C9849 + C8565 * C1276) *
                        C8564 +
                    (C8810 * C2593 + C9850 + C9850 + C8566 * C2820 +
                     C8809 * C1071 + C9851 + C9851 + C8565 * C1277) *
                        C8563) *
                       C19805 * C1067 +
                   ((C8809 * C1072 + C9852 + C9852 + C8565 * C1278 +
                     C8810 * C3931 + C9853 + C9853 + C8566 * C4113) *
                        C8563 +
                    (C8809 * C1073 + C9854 + C9854 + C8565 * C1279 +
                     C8810 * C7055 + C9855 + C9855 + C8566 * C7264) *
                        C8564) *
                       C19805 * C1068) *
                  C19755 * C19743) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8633 +
            (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
            C3737 * C8566) *
               C8563 +
           (C8890 + C8891 + C8892 + C8893) * C8564) *
              C19769 * C624 -
          ((C4639 * C8566 + C4465 * C8634 + C1829 * C8565 + C1657 * C8633) *
               C8564 +
           (C3738 * C8566 + C3576 * C8634 + C3737 * C8565 + C3574 * C8633) *
               C8563) *
              C19769 * C625 +
          ((C3576 * C8633 + C3738 * C8565 + C3579 * C8634 + C3739 * C8566) *
               C8563 +
           (C4465 * C8633 + C4639 * C8565 +
            (C222 * C4338 + C19805 * C4456) * C8634 +
            (C222 * C4404 + C19805 * C4635) * C8566) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8633 +
            (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
            C3737 * C8566) *
               C8563 +
           (C8890 + C8891 + C8892 + C8893) * C8564) *
              C19769 * C19755 * C84 -
          ((C8894 + C8895 + C8896 + C8897) * C8564 +
           (C8893 + C8892 + C8891 + C8890) * C8563) *
              C19769 * C19755 * C85 +
          ((C8897 + C8896 + C8895 + C8894) * C8563 +
           (C251 * C8633 + C413 * C8565 +
            (C222 * C1523 + C19805 * C1643) * C8634 +
            (C222 * C1579 + C19805 * C1820) * C8566) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8633 +
            (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
            C3737 * C8566) *
               C8563 +
           (C8890 + C8891 + C8892 + C8893) * C8564) *
              C1066 -
          (((C222 * C2656 + C19805 * C2877) * C8566 +
            (C222 * C2594 + C19805 * C2712) * C8634 + C2365 * C8565 +
            C2193 * C8633) *
               C8564 +
           (C5638 * C8566 + C5460 * C8634 +
            (C222 * C1133 + C19805 * C1327) * C8565 +
            (C222 * C1071 + C19805 * C1183) * C8633) *
               C8563) *
              C1067 +
          (((C222 * C1072 + C19805 * C1184) * C8633 +
            (C222 * C1134 + C19805 * C1328) * C8565 +
            (C222 * C3931 + C19805 * C4028) * C8634 +
            (C222 * C3984 + C19805 * C4160) * C8566) *
               C8563 +
           ((C222 * C1073 + C19805 * C1185) * C8633 +
            (C222 * C1135 + C19805 * C1329) * C8565 +
            (C222 * C7055 + C19805 * C7161) * C8634 +
            (C222 * C7109 + C19805 * C7316) * C8566) *
               C8564) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C19805) *
               C8565 +
           ((C9312 + C9313) * C222 + (C9486 + C9487) * C19805) * C8566) *
              C19769 * C624 -
          (((C9488 + C9489) * C19805 + (C9318 + C9319) * C222) * C8566 +
           ((C9487 + C9486) * C19805 + (C9313 + C9312) * C222) * C8565) *
              C19769 * C625 +
          (((C9319 + C9318) * C222 + (C9489 + C9488) * C19805) * C8565 +
           ((C8568 * C3451 + C8563 * C3453 + C8570 * C4338 + C8564 * C4339) *
                C222 +
            (C8568 * C3557 + C8563 * C3777 + C8570 * C4456 + C8564 * C4689) *
                C19805) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C19805) *
               C8565 +
           ((C8568 * C630 + C8563 * C636 + C8570 * C629 + C8564 * C635) * C222 +
            (C8568 * C742 + C8563 * C930 + C8570 * C741 + C8564 * C929) *
                C19805) *
               C8566) *
              C19769 * C19755 * C84 -
          (((C8570 * C740 + C8564 * C928 + C8568 * C741 + C8563 * C929) *
                C19805 +
            (C8570 * C628 + C8564 * C634 + C8568 * C629 + C8563 * C635) *
                C222) *
               C8566 +
           ((C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
                C19805 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C222) *
               C8565) *
              C19769 * C19755 * C85 +
          (((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C222 +
            (C8568 * C225 + C8563 * C457 + C8570 * C226 + C8564 * C458) *
                C19805) *
               C8565 +
           ((C8568 * C628 + C8563 * C634 + C8570 * C1523 + C8564 * C1524) *
                C222 +
            (C8568 * C740 + C8563 * C928 + C8570 * C1643 + C8564 * C1881) *
                C19805) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C19805) *
               C8565 +
           ((C9312 + C9313) * C222 + (C9486 + C9487) * C19805) * C8566) *
              C1066 -
          (((C8570 * C2712 + C8564 * C2930 + C8568 * C2711 + C8563 * C2929) *
                C19805 +
            (C8570 * C2594 + C8564 * C2597 + C8568 * C2593 + C8563 * C2596) *
                C222) *
               C8566 +
           ((C8570 * C1182 + C8564 * C1370 + C8568 * C1183 + C8563 * C1371) *
                C19805 +
            (C8570 * C1070 + C8564 * C1076 + C8568 * C1071 + C8563 * C1077) *
                C222) *
               C8565) *
              C1067 +
          (((C8568 * C1072 + C8563 * C1078 + C8570 * C1073 + C8564 * C1079) *
                C222 +
            (C8568 * C1184 + C8563 * C1372 + C8570 * C1185 + C8564 * C1373) *
                C19805) *
               C8565 +
           ((C8568 * C3931 + C8563 * C3934 + C8570 * C7055 + C8564 * C7056) *
                C222 +
            (C8568 * C4028 + C8563 * C4201 + C8570 * C7161 + C8564 * C7367) *
                C19805) *
               C8566) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C19805) *
               C8563 +
           ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
              C19769 * C624 -
          (((C8634 * C744 + C8566 * C976 + C8633 * C741 + C8565 * C973) *
                C19805 +
            (C8634 * C632 + C8566 * C694 + C8633 * C629 + C8565 * C691) *
                C222) *
               C8564 +
           ((C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
                C19805 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C222) *
               C8563) *
              C19769 * C625 +
          (((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
                C222 +
            (C8633 * C743 + C8565 * C975 + C8634 * C3557 + C8566 * C3833) *
                C19805) *
               C8563 +
           ((C8633 * C632 + C8565 * C694 + C8634 * C4338 + C8566 * C4404) *
                C222 +
            (C8633 * C744 + C8565 * C976 + C8634 * C4456 + C8566 * C4750) *
                C19805) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C19805) *
               C8563 +
           ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
              C19769 * C19755 * C84 -
          (((C9008 + C9009) * C19805 + (C8658 + C8659) * C222) * C8564 +
           ((C9007 + C9006) * C19805 + (C8653 + C8652) * C222) * C8563) *
              C19769 * C19755 * C85 +
          (((C8659 + C8658) * C222 + (C9009 + C9008) * C19805) * C8563 +
           ((C8633 * C96 + C8565 * C159 + C8634 * C1523 + C8566 * C1579) *
                C222 +
            (C8633 * C226 + C8565 * C501 + C8634 * C1643 + C8566 * C1932) *
                C19805) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C19805) *
               C8563 +
           ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
              C1066 -
          (((C8634 * C2712 + C8566 * C2983 + C8633 * C1182 + C8565 * C1414) *
                C19805 +
            (C8634 * C2594 + C8566 * C2656 + C8633 * C1070 + C8565 * C1132) *
                C222) *
               C8564 +
           ((C8634 * C2711 + C8566 * C2982 + C8633 * C1183 + C8565 * C1415) *
                C19805 +
            (C8634 * C2593 + C8566 * C2655 + C8633 * C1071 + C8565 * C1133) *
                C222) *
               C8563) *
              C1067 +
          (((C8633 * C1072 + C8565 * C1134 + C8634 * C3931 + C8566 * C3984) *
                C222 +
            (C8633 * C1184 + C8565 * C1416 + C8634 * C4028 + C8566 * C4242) *
                C19805) *
               C8563 +
           ((C8633 * C1073 + C8565 * C1135 + C8634 * C7055 + C8566 * C7109) *
                C222 +
            (C8633 * C1185 + C8565 * C1417 + C8634 * C7161 + C8566 * C7418) *
                C19805) *
               C8564) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
            C3890 * C8566) *
               C8563 +
           (C9060 + C9061) * C8564) *
              C19769 * C624 -
          ((C4808 * C8566 + C2005 * C8565) * C8564 +
           (C3891 * C8566 + C3890 * C8565) * C8563) *
              C19769 * C625 +
          ((C3891 * C8565 + C3892 * C8566) * C8563 +
           (C4808 * C8565 +
            (C557 * C4338 + C4805 + C4805 + C19805 * C4801) * C8566) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
            C3890 * C8566) *
               C8563 +
           (C9060 + C9061) * C8564) *
              C19769 * C19755 * C84 -
          ((C9062 + C9063) * C8564 + (C9061 + C9060) * C8563) * C19769 *
              C19755 * C85 +
          ((C9063 + C9062) * C8563 +
           (C583 * C8565 +
            (C557 * C1523 + C1999 + C1999 + C19805 * C1993) * C8566) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
            C3890 * C8566) *
               C8563 +
           (C9060 + C9061) * C8564) *
              C1066 -
          (((C557 * C2594 + C3040 + C3040 + C19805 * C3036) * C8566 +
            C2541 * C8565) *
               C8564 +
           (C5812 * C8566 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C8565) *
               C8563) *
              C1067 +
          (((C557 * C1072 + C1467 + C1467 + C19805 * C1460) * C8565 +
            (C557 * C3931 + C4287 + C4287 + C19805 * C4283) * C8566) *
               C8563 +
           ((C557 * C1073 + C1468 + C1468 + C19805 * C1461) * C8565 +
            (C557 * C7055 + C10056 + C10056 + C19805 * C7469) * C8566) *
               C8564) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C19805 * C8565 +
                     (C9134 + C9135) * C19805 * C8566) *
                        C2057 -
                    ((C8569 * C2594 + C9640 + C9640 + C8564 * C2600 +
                      C8567 * C2593 + C9641 + C9641 + C8563 * C2599) *
                         C19805 * C8566 +
                     (C8569 * C1070 + C9642 + C9642 + C8564 * C1082 +
                      C8567 * C1071 + C9643 + C9643 + C8563 * C1083) *
                         C19805 * C8565) *
                        C2058) *
                       C19755 * C1521 +
                   (((C8567 * C1070 + C10787 + C10787 + C8563 * C1082 +
                      C8569 * C1069 + C10788 + C10788 + C8564 * C1081) *
                         C19805 * C8565 +
                     (C8567 * C2594 + C10789 + C10789 + C8563 * C2600 +
                      C8569 * C2595 + C10790 + C10790 + C8564 * C2601) *
                         C19805 * C8566) *
                        C2058 -
                    ((C10134 + C10133) * C19805 * C8566 +
                     (C8569 * C95 + C8578 + C8578 + C8564 * C105 + C8567 * C94 +
                      C8579 + C8579 + C8563 * C104) *
                         C19805 * C8565) *
                        C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
            (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
               C19805 * C2057 -
           ((C10865 + C10866) * C8564 + (C10867 + C10868) * C8570 +
            (C8634 * C2596 + C8566 * C2658 + C8633 * C1077 + C8565 * C1139) *
                C8563 +
            (C8634 * C2593 + C8566 * C2655 + C8633 * C1071 + C8565 * C1133) *
                C8568) *
               C19805 * C2058) *
              C19755 * C1521 +
          (((C10868 + C10867) * C8568 + (C10866 + C10865) * C8563 +
            (C8633 * C1069 + C8565 * C1131 + C8634 * C2595 + C8566 * C2657) *
                C8570 +
            (C8633 * C1075 + C8565 * C1137 + C8634 * C2598 + C8566 * C2660) *
                C8564) *
               C19805 * C2058 -
           ((C8656 + C8657) * C8564 + (C8658 + C8659) * C8570 +
            (C8655 + C8654) * C8563 + (C8653 + C8652) * C8568) *
               C19805 * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C8568 +
             (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
             C247 * C8564) *
                C8565 +
            (C9238 + C9239 + C9240 + C9241) * C8566) *
               C2057 -
           ((C10939 * C8564 + C10940 * C8570 + C5459 * C8563 + C5460 * C8568) *
                C8566 +
            (C2192 * C8564 + C2193 * C8570 +
             (C222 * C1077 + C19805 * C1189) * C8563 +
             (C222 * C1071 + C19805 * C1183) * C8568) *
                C8565) *
               C2058) *
              C19755 * C1521 +
          (((C2193 * C8568 + C2192 * C8563 + C2191 * C8570 + C2190 * C8564) *
                C8565 +
            (C10940 * C8568 + C10939 * C8563 +
             (C222 * C2595 + C19805 * C2713) * C8570 +
             (C222 * C2598 + C19805 * C2716) * C8564) *
                C8566) *
               C2058 -
           ((C10282 + C10281 + C10280 + C10279) * C8566 +
            (C249 * C8564 + C248 * C8570 + C247 * C8563 + C246 * C8568) *
                C8565) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C8565 +
            (C9312 + C9313) * C8634 + (C9314 + C9315) * C8566) *
               C19805 * C2057 -
           ((C8570 * C2656 + C8564 * C2768 + C8568 * C2655 + C8563 * C2767) *
                C8566 +
            (C8570 * C2594 + C8564 * C2597 + C8568 * C2593 + C8563 * C2596) *
                C8634 +
            (C8570 * C1132 + C8564 * C1232 + C8568 * C1133 + C8563 * C1233) *
                C8565 +
            (C8570 * C1070 + C8564 * C1076 + C8568 * C1071 + C8563 * C1077) *
                C8633) *
               C19805 * C2058) *
              C19755 * C1521 +
          (((C8568 * C1070 + C8563 * C1076 + C8570 * C1069 + C8564 * C1075) *
                C8633 +
            (C8568 * C1132 + C8563 * C1232 + C8570 * C1131 + C8564 * C1231) *
                C8565 +
            (C8568 * C2594 + C8563 * C2597 + C8570 * C2595 + C8564 * C2598) *
                C8634 +
            (C8568 * C2656 + C8563 * C2768 + C8570 * C2657 + C8564 * C2769) *
                C8566) *
               C19805 * C2058 -
           ((C10360 + C10359) * C8566 + (C10358 + C10357) * C8634 +
            (C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) *
                C8565 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C8633) *
               C19805 * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8809 * C93 + C8812 + C8812 + C8565 * C333 +
                      C8810 * C630 + C8813 + C8813 + C8566 * C836) *
                         C8563 +
                     (C8836 + C8837) * C8564) *
                        C19805 * C2057 -
                    ((C11083 + C11084) * C8564 +
                     (C8810 * C2593 + C9850 + C9850 + C8566 * C2820 +
                      C8809 * C1071 + C9851 + C9851 + C8565 * C1277) *
                         C8563) *
                        C19805 * C2058) *
                       C19755 * C1521 +
                   (((C11084 + C11083) * C8563 +
                     (C8809 * C1069 + C11077 + C11077 + C8565 * C1275 +
                      C8810 * C2595 + C11078 + C11078 + C8566 * C2822) *
                         C8564) *
                        C19805 * C2058 -
                    ((C8838 + C8839) * C8564 + (C8837 + C8836) * C8563) *
                        C19805 * C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C222 * C93 + C19805 * C223) * C8633 +
                      (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
                      C3737 * C8566) *
                         C8563 +
                     (C8890 + C8891 + C8892 + C8893) * C8564) *
                        C2057 -
                    ((C11157 + C11153 + C11154 + C11155) * C8564 +
                     (C5638 * C8566 + C5460 * C8634 +
                      (C222 * C1133 + C19805 * C1327) * C8565 +
                      (C222 * C1071 + C19805 * C1183) * C8633) *
                         C8563) *
                        C2058) *
                       C19755 * C1521 +
                   (((C11155 + C11154 + C11153 + C11157) * C8563 +
                     (C2191 * C8633 + C2364 * C8565 +
                      (C222 * C2595 + C19805 * C2713) * C8634 +
                      (C222 * C2657 + C19805 * C2878) * C8566) *
                         C8564) *
                        C2058 -
                    ((C8894 + C8895 + C8896 + C8897) * C8564 +
                     (C8893 + C8892 + C8891 + C8890) * C8563) *
                        C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
             (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                 C19805) *
                C8565 +
            ((C9312 + C9313) * C222 + (C9486 + C9487) * C19805) * C8566) *
               C2057 -
           (((C8570 * C2712 + C8564 * C2930 + C8568 * C2711 + C8563 * C2929) *
                 C19805 +
             (C8570 * C2594 + C8564 * C2597 + C8568 * C2593 + C8563 * C2596) *
                 C222) *
                C8566 +
            ((C8570 * C1182 + C8564 * C1370 + C8568 * C1183 + C8563 * C1371) *
                 C19805 +
             (C8570 * C1070 + C8564 * C1076 + C8568 * C1071 + C8563 * C1077) *
                 C222) *
                C8565) *
               C2058) *
              C19755 * C1521 +
          ((((C8568 * C1070 + C8563 * C1076 + C8570 * C1069 + C8564 * C1075) *
                 C222 +
             (C8568 * C1182 + C8563 * C1370 + C8570 * C1181 + C8564 * C1369) *
                 C19805) *
                C8565 +
            ((C8568 * C2594 + C8563 * C2597 + C8570 * C2595 + C8564 * C2598) *
                 C222 +
             (C8568 * C2712 + C8563 * C2930 + C8570 * C2713 + C8564 * C2931) *
                 C19805) *
                C8566) *
               C2058 -
           (((C10580 + C10579) * C19805 + (C10358 + C10357) * C222) * C8566 +
            ((C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
                 C19805 +
             (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C222) *
                C8565) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
             (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                 C19805) *
                C8563 +
            ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
               C2057 -
           (((C11294 + C11295) * C19805 + (C10867 + C10868) * C222) * C8564 +
            ((C8634 * C2711 + C8566 * C2982 + C8633 * C1183 + C8565 * C1415) *
                 C19805 +
             (C8634 * C2593 + C8566 * C2655 + C8633 * C1071 + C8565 * C1133) *
                 C222) *
                C8563) *
               C2058) *
              C19755 * C1521 +
          ((((C10868 + C10867) * C222 + (C11295 + C11294) * C19805) * C8563 +
            ((C8633 * C1069 + C8565 * C1131 + C8634 * C2595 + C8566 * C2657) *
                 C222 +
             (C8633 * C1181 + C8565 * C1413 + C8634 * C2713 + C8566 * C2984) *
                 C19805) *
                C8564) *
               C2058 -
           (((C9008 + C9009) * C19805 + (C8658 + C8659) * C222) * C8564 +
            ((C9007 + C9006) * C19805 + (C8653 + C8652) * C222) * C8563) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
             C3890 * C8566) *
                C8563 +
            (C9060 + C9061) * C8564) *
               C2057 -
           ((C11368 + C11364) * C8564 +
            (C5812 * C8566 +
             (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C8565) *
                C8563) *
               C2058) *
              C19755 * C1521 +
          (((C11364 + C11368) * C8563 +
            (C2540 * C8565 +
             (C557 * C2595 + C3041 + C3041 + C19805 * C3037) * C8566) *
                C8564) *
               C2058 -
           ((C9062 + C9063) * C8564 + (C9061 + C9060) * C8563) * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                     C8573 + C8573 + C8564 * C104) *
                        C19805 * C8565 +
                    (C8567 * C630 + C8574 + C8574 + C8563 * C642 +
                     C8569 * C629 + C8575 + C8575 + C8564 * C641) *
                        C19805 * C8566) *
                       C19769 * C19755 * C84 -
                   ((C8569 * C628 + C8576 + C8576 + C8564 * C640 +
                     C8567 * C629 + C8577 + C8577 + C8563 * C641) *
                        C19805 * C8566 +
                    (C8569 * C95 + C8578 + C8578 + C8564 * C105 + C8567 * C94 +
                     C8579 + C8579 + C8563 * C104) *
                        C19805 * C8565) *
                       C19769 * C19755 * C85 +
                   ((C8567 * C95 + C8580 + C8580 + C8563 * C105 + C8569 * C96 +
                     C8581 + C8581 + C8564 * C106) *
                        C19805 * C8565 +
                    (C8567 * C628 + C8582 + C8582 + C8563 * C640 +
                     C8569 * C1523 + C8583 + C8583 + C8564 * C1525) *
                        C19805 * C8566) *
                       C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                     C8573 + C8573 + C8564 * C104) *
                        C19805 * C8565 +
                    (C9134 + C9135) * C19805 * C8566) *
                       C19769 * C624 -
                   ((C9136 + C9137) * C19805 * C8566 +
                    (C9135 + C9134) * C19805 * C8565) *
                       C19769 * C625 +
                   ((C9137 + C9136) * C19805 * C8565 +
                    (C8567 * C3451 + C9124 + C9124 + C8563 * C3455 +
                     C8569 * C4338 + C9125 + C9125 + C8564 * C4340) *
                        C19805 * C8566) *
                       C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
           (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
           (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
              C19805 * C19769 * C19755 * C84 -
          ((C8656 + C8657) * C8564 + (C8658 + C8659) * C8570 +
           (C8655 + C8654) * C8563 + (C8653 + C8652) * C8568) *
              C19805 * C19769 * C19755 * C85 +
          ((C8659 + C8658) * C8568 + (C8657 + C8656) * C8563 +
           (C8633 * C96 + C8565 * C159 + C8634 * C1523 + C8566 * C1579) *
               C8570 +
           (C8633 * C101 + C8565 * C164 + C8634 * C1524 + C8566 * C1580) *
               C8564) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C8568 +
           (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) * C8563 +
           (C8652 + C8653) * C8570 + (C8654 + C8655) * C8564) *
              C19805 * C19769 * C624 -
          ((C8634 * C638 + C8566 * C700 + C8633 * C635 + C8565 * C697) * C8564 +
           (C8634 * C632 + C8566 * C694 + C8633 * C629 + C8565 * C691) * C8570 +
           (C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) * C8563 +
           (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
               C8568) *
              C19805 * C19769 * C625 +
          ((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
               C8568 +
           (C8633 * C637 + C8565 * C699 + C8634 * C3453 + C8566 * C3517) *
               C8563 +
           (C8633 * C632 + C8565 * C694 + C8634 * C4338 + C8566 * C4404) *
               C8570 +
           (C8633 * C638 + C8565 * C700 + C8634 * C4339 + C8566 * C4405) *
               C8564) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8568 +
            (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
            C247 * C8564) *
               C8565 +
           (C3574 * C8568 + C3575 * C8563 + C1657 * C8570 + C1656 * C8564) *
               C8566) *
              C19769 * C19755 * C84 -
          ((C1654 * C8564 + C1655 * C8570 + C1656 * C8563 + C1657 * C8568) *
               C8566 +
           (C249 * C8564 + C248 * C8570 + C247 * C8563 + C246 * C8568) *
               C8565) *
              C19769 * C19755 * C85 +
          ((C248 * C8568 + C249 * C8563 + C251 * C8570 + C250 * C8564) * C8565 +
           (C1655 * C8568 + C1654 * C8563 +
            (C222 * C1523 + C19805 * C1643) * C8570 +
            (C222 * C1524 + C19805 * C1644) * C8564) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8568 +
            (C222 * C98 + C19805 * C228) * C8563 + C246 * C8570 +
            C247 * C8564) *
               C8565 +
           (C9238 + C9239 + C9240 + C9241) * C8566) *
              C19769 * C624 -
          ((C9242 + C9243 + C9244 + C9245) * C8566 +
           (C9241 + C9240 + C9239 + C9238) * C8565) *
              C19769 * C625 +
          ((C9245 + C9244 + C9243 + C9242) * C8565 +
           (C3579 * C8568 + C3578 * C8563 +
            (C222 * C4338 + C19805 * C4456) * C8570 +
            (C222 * C4339 + C19805 * C4457) * C8564) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
           (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) * C8565 +
           (C8568 * C630 + C8563 * C636 + C8570 * C629 + C8564 * C635) * C8634 +
           (C8568 * C692 + C8563 * C792 + C8570 * C691 + C8564 * C791) *
               C8566) *
              C19805 * C19769 * C19755 * C84 -
          ((C8570 * C690 + C8564 * C790 + C8568 * C691 + C8563 * C791) * C8566 +
           (C8570 * C628 + C8564 * C634 + C8568 * C629 + C8563 * C635) * C8634 +
           (C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) * C8565 +
           (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C8633) *
              C19805 * C19769 * C19755 * C85 +
          ((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C8633 +
           (C8568 * C158 + C8563 * C291 + C8570 * C159 + C8564 * C292) * C8565 +
           (C8568 * C628 + C8563 * C634 + C8570 * C1523 + C8564 * C1524) *
               C8634 +
           (C8568 * C690 + C8563 * C790 + C8570 * C1579 + C8564 * C1707) *
               C8566) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C8633 +
           (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) * C8565 +
           (C9312 + C9313) * C8634 + (C9314 + C9315) * C8566) *
              C19805 * C19769 * C624 -
          ((C9316 + C9317) * C8566 + (C9318 + C9319) * C8634 +
           (C9315 + C9314) * C8565 + (C9313 + C9312) * C8633) *
              C19805 * C19769 * C625 +
          ((C9319 + C9318) * C8633 + (C9317 + C9316) * C8565 +
           (C8568 * C3451 + C8563 * C3453 + C8570 * C4338 + C8564 * C4339) *
               C8634 +
           (C8568 * C3515 + C8563 * C3624 + C8570 * C4404 + C8564 * C4518) *
               C8566) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C8563 +
                    (C8836 + C8837) * C8564) *
                       C19805 * C19769 * C19755 * C84 -
                   ((C8838 + C8839) * C8564 + (C8837 + C8836) * C8563) *
                       C19805 * C19769 * C19755 * C85 +
                   ((C8839 + C8838) * C8563 +
                    (C8809 * C96 + C8826 + C8826 + C8565 * C336 +
                     C8810 * C1523 + C8827 + C8827 + C8566 * C1758) *
                        C8564) *
                       C19805 * C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C8563 +
                    (C8836 + C8837) * C8564) *
                       C19805 * C19769 * C624 -
                   ((C8810 * C632 + C9370 + C9370 + C8566 * C838 +
                     C8809 * C629 + C9371 + C9371 + C8565 * C835) *
                        C8564 +
                    (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                     C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                        C8563) *
                       C19805 * C19769 * C625 +
                   ((C8809 * C631 + C9374 + C9374 + C8565 * C837 +
                     C8810 * C3451 + C9375 + C9375 + C8566 * C3682) *
                        C8563 +
                    (C8809 * C632 + C9376 + C9376 + C8565 * C838 +
                     C8810 * C4338 + C9377 + C9377 + C8566 * C4581) *
                        C8564) *
                       C19805 * C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8633 +
            (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
            C3737 * C8566) *
               C8563 +
           (C8890 + C8891 + C8892 + C8893) * C8564) *
              C19769 * C19755 * C84 -
          ((C8894 + C8895 + C8896 + C8897) * C8564 +
           (C8893 + C8892 + C8891 + C8890) * C8563) *
              C19769 * C19755 * C85 +
          ((C8897 + C8896 + C8895 + C8894) * C8563 +
           (C251 * C8633 + C413 * C8565 +
            (C222 * C1523 + C19805 * C1643) * C8634 +
            (C222 * C1579 + C19805 * C1820) * C8566) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C8633 +
            (C222 * C156 + C19805 * C396) * C8565 + C3574 * C8634 +
            C3737 * C8566) *
               C8563 +
           (C8890 + C8891 + C8892 + C8893) * C8564) *
              C19769 * C624 -
          ((C4639 * C8566 + C4465 * C8634 + C1829 * C8565 + C1657 * C8633) *
               C8564 +
           (C3738 * C8566 + C3576 * C8634 + C3737 * C8565 + C3574 * C8633) *
               C8563) *
              C19769 * C625 +
          ((C3576 * C8633 + C3738 * C8565 + C3579 * C8634 + C3739 * C8566) *
               C8563 +
           (C4465 * C8633 + C4639 * C8565 +
            (C222 * C4338 + C19805 * C4456) * C8634 +
            (C222 * C4404 + C19805 * C4635) * C8566) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C19805) *
               C8565 +
           ((C8568 * C630 + C8563 * C636 + C8570 * C629 + C8564 * C635) * C222 +
            (C8568 * C742 + C8563 * C930 + C8570 * C741 + C8564 * C929) *
                C19805) *
               C8566) *
              C19769 * C19755 * C84 -
          (((C8570 * C740 + C8564 * C928 + C8568 * C741 + C8563 * C929) *
                C19805 +
            (C8570 * C628 + C8564 * C634 + C8568 * C629 + C8563 * C635) *
                C222) *
               C8566 +
           ((C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
                C19805 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C222) *
               C8565) *
              C19769 * C19755 * C85 +
          (((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C222 +
            (C8568 * C225 + C8563 * C457 + C8570 * C226 + C8564 * C458) *
                C19805) *
               C8565 +
           ((C8568 * C628 + C8563 * C634 + C8570 * C1523 + C8564 * C1524) *
                C222 +
            (C8568 * C740 + C8563 * C928 + C8570 * C1643 + C8564 * C1881) *
                C19805) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C222 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C19805) *
               C8565 +
           ((C9312 + C9313) * C222 + (C9486 + C9487) * C19805) * C8566) *
              C19769 * C624 -
          (((C9488 + C9489) * C19805 + (C9318 + C9319) * C222) * C8566 +
           ((C9487 + C9486) * C19805 + (C9313 + C9312) * C222) * C8565) *
              C19769 * C625 +
          (((C9319 + C9318) * C222 + (C9489 + C9488) * C19805) * C8565 +
           ((C8568 * C3451 + C8563 * C3453 + C8570 * C4338 + C8564 * C4339) *
                C222 +
            (C8568 * C3557 + C8563 * C3777 + C8570 * C4456 + C8564 * C4689) *
                C19805) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C19805) *
               C8563 +
           ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
              C19769 * C19755 * C84 -
          (((C9008 + C9009) * C19805 + (C8658 + C8659) * C222) * C8564 +
           ((C9007 + C9006) * C19805 + (C8653 + C8652) * C222) * C8563) *
              C19769 * C19755 * C85 +
          (((C8659 + C8658) * C222 + (C9009 + C9008) * C19805) * C8563 +
           ((C8633 * C96 + C8565 * C159 + C8634 * C1523 + C8566 * C1579) *
                C222 +
            (C8633 * C226 + C8565 * C501 + C8634 * C1643 + C8566 * C1932) *
                C19805) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C222 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C19805) *
               C8563 +
           ((C8652 + C8653) * C222 + (C9006 + C9007) * C19805) * C8564) *
              C19769 * C624 -
          (((C8634 * C744 + C8566 * C976 + C8633 * C741 + C8565 * C973) *
                C19805 +
            (C8634 * C632 + C8566 * C694 + C8633 * C629 + C8565 * C691) *
                C222) *
               C8564 +
           ((C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
                C19805 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C222) *
               C8563) *
              C19769 * C625 +
          (((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
                C222 +
            (C8633 * C743 + C8565 * C975 + C8634 * C3557 + C8566 * C3833) *
                C19805) *
               C8563 +
           ((C8633 * C632 + C8565 * C694 + C8634 * C4338 + C8566 * C4404) *
                C222 +
            (C8633 * C744 + C8565 * C976 + C8634 * C4456 + C8566 * C4750) *
                C19805) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
                     C3890 * C8566) *
                        C8563 +
                    (C9060 + C9061) * C8564) *
                       C19769 * C19755 * C84 -
                   ((C9062 + C9063) * C8564 + (C9061 + C9060) * C8563) *
                       C19769 * C19755 * C85 +
                   ((C9063 + C9062) * C8563 +
                    (C583 * C8565 +
                     (C557 * C1523 + C1999 + C1999 + C19805 * C1993) * C8566) *
                        C8564) *
                       C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C557 * C93 + C564 + C564 + C19805 * C558) * C8565 +
                     C3890 * C8566) *
                        C8563 +
                    (C9060 + C9061) * C8564) *
                       C19769 * C624 -
                   ((C4808 * C8566 + C2005 * C8565) * C8564 +
                    (C3891 * C8566 + C3890 * C8565) * C8563) *
                       C19769 * C625 +
                   ((C3891 * C8565 + C3892 * C8566) * C8563 +
                    (C4808 * C8565 +
                     (C557 * C4338 + C4805 + C4805 + C19805 * C4801) * C8566) *
                        C8564) *
                       C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
             C6585 * C12051) *
                C8565 +
            (C15929 + C15930) * C8566) *
               C19769 * C1519 -
           ((C15931 + C15932) * C8566 + (C15930 + C15929) * C8565) * C19769 *
               C1520) *
              C1521 +
          (((C16985 + C16991) * C8565 +
            (C4352 * C12050 +
             (C3083 * C4858 + C4864 + C4864 + C19721 * C4860) * C12051) *
                C8566) *
               C19769 * C1520 -
           ((C16991 + C16985) * C8566 +
            (C7536 * C12051 +
             (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C12050) *
                C8565) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) *
                 C3084 +
             (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                 C19721) *
                C12050 +
            ((C16517 + C16518) * C3084 + (C16519 + C16520) * C19721) * C12051) *
               C19769 * C1519 -
           (((C8634 * C3933 + C8566 * C3986 + C8633 * C2596 + C8565 * C2658) *
                 C19721 +
             (C8634 * C3930 + C8566 * C3983 + C8633 * C2593 + C8565 * C2655) *
                 C3084) *
                C12051 +
            ((C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) *
                 C19721 +
             (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                 C3084) *
                C12050) *
               C19769 * C1520) *
              C1521 +
          ((((C10212 + C10211) * C3084 + (C10210 + C10209) * C19721) * C12050 +
            ((C8633 * C2594 + C8565 * C2656 + C8634 * C4858 + C8566 * C4914) *
                 C3084 +
             (C8633 * C2597 + C8565 * C2659 + C8634 * C4859 + C8566 * C4915) *
                 C19721) *
                C12051) *
               C19769 * C1520 -
           (((C10865 + C10866) * C19721 + (C10867 + C10868) * C3084) * C12051 +
            ((C8655 + C8654) * C19721 + (C8653 + C8652) * C3084) * C12050) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                 C3084 +
             (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                 C19721) *
                C8565 +
            ((C16049 + C16050) * C3084 + (C16051 + C16052) * C19721) * C8566) *
               C19769 * C1519 -
           (((C16053 + C16054) * C19721 + (C16055 + C16056) * C3084) * C8566 +
            ((C16052 + C16051) * C19721 + (C16050 + C16049) * C3084) * C8565) *
               C19769 * C1520) *
              C1521 +
          ((((C13733 + C13732) * C3084 + (C13731 + C13730) * C19721) * C8565 +
            ((C12154 * C632 + C12050 * C744 + C12155 * C4858 + C12051 * C4966) *
                 C3084 +
             (C12154 * C638 + C12050 * C750 + C12155 * C4859 + C12051 * C4967) *
                 C19721) *
                C8566) *
               C19769 * C1520 -
           (((C13730 + C13731) * C19721 + (C13732 + C13733) * C3084) * C8566 +
            ((C12176 + C12175) * C19721 + (C12174 + C12173) * C3084) * C8565) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3084 * C93 + C19721 * C98) * C8633 +
             (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
             C3640 * C8566) *
                C12050 +
            (C16625 + C16626 + C16627 + C16628) * C12051) *
               C19769 * C1519 -
           ((C5524 * C8566 + C5525 * C8634 + C5526 * C8565 + C5527 * C8633) *
                C12051 +
            (C3642 * C8566 + C3641 * C8634 + C3640 * C8565 + C3639 * C8633) *
                C12050) *
               C19769 * C1520) *
              C1521 +
          (((C4528 * C8633 + C4529 * C8565 + C4530 * C8634 + C4531 * C8566) *
                C12050 +
            (C17194 * C8633 + C17195 * C8565 +
             (C3084 * C4858 + C19721 * C4859) * C8634 +
             (C3084 * C4914 + C19721 * C5018) * C8566) *
                C12051) *
               C19769 * C1520 -
           ((C17195 * C8566 + C17194 * C8634 + C7712 * C8565 + C7711 * C8633) *
                C12051 +
            (C4529 * C8566 + C4528 * C8634 +
             (C3084 * C157 + C19721 * C290) * C8565 +
             (C3084 * C94 + C19721 * C99) * C8633) *
                C12050) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8809 * C93 + C8812 + C8812 + C8565 * C333 +
                      C8810 * C630 + C8813 + C8813 + C8566 * C836) *
                         C19721 * C12050 +
                     (C16701 + C16702) * C19721 * C12051) *
                        C19769 * C1519 -
                    ((C8810 * C3930 + C11728 + C11728 + C8566 * C4112 +
                      C8809 * C2593 + C11727 + C11727 + C8565 * C2820) *
                         C19721 * C12051 +
                     (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                      C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                         C19721 * C12050) *
                        C19769 * C1520) *
                       C1521 +
                   (((C10438 + C10437) * C19721 * C12050 +
                     (C8809 * C2594 + C11729 + C11729 + C8565 * C2821 +
                      C8810 * C4858 + C11730 + C11730 + C8566 * C5069) *
                         C19721 * C12051) *
                        C19769 * C1520 -
                    ((C11083 + C11084) * C19721 * C12051 +
                     (C8837 + C8836) * C19721 * C12050) *
                        C19769 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C8633 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C8565 +
            (C16049 + C16050) * C8634 + (C16217 + C16218) * C8566) *
               C19721 * C19769 * C1519 -
           ((C16219 + C16220) * C8566 + (C16055 + C16056) * C8634 +
            (C16218 + C16217) * C8565 + (C16050 + C16049) * C8633) *
               C19721 * C19769 * C1520) *
              C1521 +
          (((C13733 + C13732) * C8633 + (C13942 + C13941) * C8565 +
            (C12154 * C632 + C12050 * C744 + C12155 * C4858 + C12051 * C4966) *
                C8634 +
            (C12154 * C694 + C12050 * C888 + C12155 * C4914 + C12051 * C5123) *
                C8566) *
               C19721 * C19769 * C1520 -
           ((C13941 + C13942) * C8566 + (C13732 + C13733) * C8634 +
            (C12340 + C12339) * C8565 + (C12174 + C12173) * C8633) *
               C19721 * C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C3084 * C93 + C19721 * C98) * C12154 +
                      (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
                      C6908 * C12051) *
                         C8565 +
                     (C16271 + C16272 + C16273 + C16274) * C8566) *
                        C19769 * C1519 -
                    ((C16275 + C16276 + C16277 + C16278) * C8566 +
                     (C16274 + C16273 + C16272 + C16271) * C8565) *
                        C19769 * C1520) *
                       C1521 +
                   (((C17394 + C17395 + C17396 + C17400) * C8565 +
                     (C4530 * C12154 + C4698 * C12050 +
                      (C3084 * C4858 + C19721 * C4859) * C12155 +
                      (C3084 * C4966 + C19721 * C5174) * C12051) *
                         C8566) *
                        C19769 * C1520 -
                    ((C17400 + C17396 + C17395 + C17394) * C8566 +
                     (C7884 * C12051 + C7711 * C12155 +
                      (C3084 * C224 + C19721 * C456) * C12050 +
                      (C3084 * C94 + C19721 * C99) * C12154) *
                         C8565) *
                        C19769 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) *
                C12154 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C12050 +
            (C16517 + C16518) * C12155 + (C16863 + C16864) * C12051) *
               C19721 * C19769 * C1519 -
           ((C8634 * C4027 + C8566 * C4241 + C8633 * C2711 + C8565 * C2982) *
                C12051 +
            (C8634 * C3930 + C8566 * C3983 + C8633 * C2593 + C8565 * C2655) *
                C12155 +
            (C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
                C12050 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C12154) *
               C19721 * C19769 * C1520) *
              C1521 +
          (((C10212 + C10211) * C12154 + (C10652 + C10651) * C12050 +
            (C8633 * C2594 + C8565 * C2656 + C8634 * C4858 + C8566 * C4914) *
                C12155 +
            (C8633 * C2712 + C8565 * C2983 + C8634 * C4966 + C8566 * C5225) *
                C12051) *
               C19721 * C19769 * C1520 -
           ((C11294 + C11295) * C12051 + (C10867 + C10868) * C12155 +
            (C9007 + C9006) * C12050 + (C8653 + C8652) * C12154) *
               C19721 * C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C8565 +
                     (C16397 + C16398) * C8566) *
                        C19721 * C19769 * C1519 -
                    ((C16399 + C16400) * C8566 + (C16398 + C16397) * C8565) *
                        C19721 * C19769 * C1520) *
                       C1521 +
                   (((C14159 + C14158) * C8565 +
                     (C12500 * C632 + C12988 + C12988 + C12050 * C1020 +
                      C12501 * C4858 + C12989 + C12989 + C12051 * C5276) *
                         C8566) *
                        C19721 * C19769 * C1520 -
                    ((C14158 + C14159) * C8566 + (C12528 + C12527) * C8565) *
                        C19721 * C19769 * C1519) *
                       C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
             C6585 * C12051) *
                C8565 +
            (C15929 + C15930) * C8566) *
               C2057 -
           ((C18197 + C18198) * C8566 +
            (C6586 * C12051 + C6585 * C12050) * C8565) *
               C2058) *
              C1519 +
          (((C18198 + C18197) * C8565 +
            (C5341 * C12050 +
             (C3083 * C3932 + C3945 + C3945 + C19721 * C3938) * C12051) *
                C8566) *
               C2058 -
           ((C15931 + C15932) * C8566 + (C15930 + C15929) * C8565) * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) *
                 C3084 +
             (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                 C19721) *
                C12050 +
            ((C16517 + C16518) * C3084 + (C16519 + C16520) * C19721) * C12051) *
               C2057 -
           (((C16521 + C16522) * C19721 + (C16523 + C16524) * C3084) * C12051 +
            ((C16520 + C16519) * C19721 + (C16518 + C16517) * C3084) * C12050) *
               C2058) *
              C1519 +
          ((((C18273 + C18274) * C3084 + (C18275 + C18276) * C19721) * C12050 +
            ((C8633 * C3931 + C8565 * C3984 + C8634 * C3932 + C8566 * C3985) *
                 C3084 +
             (C8633 * C3934 + C8565 * C3987 + C8634 * C3935 + C8566 * C3988) *
                 C19721) *
                C12051) *
               C2058 -
           (((C18276 + C18275) * C19721 + (C18274 + C18273) * C3084) * C12051 +
            ((C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) *
                 C19721 +
             (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                 C3084) *
                C12050) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                 C3084 +
             (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                 C19721) *
                C8565 +
            ((C16049 + C16050) * C3084 + (C16051 + C16052) * C19721) * C8566) *
               C2057 -
           (((C18351 + C18352) * C19721 + (C18353 + C18354) * C3084) * C8566 +
            ((C12155 * C1078 + C12051 * C1190 + C12154 * C1077 +
              C12050 * C1189) *
                 C19721 +
             (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
              C12050 * C1183) *
                 C3084) *
                C8565) *
               C2058) *
              C1519 +
          ((((C18354 + C18353) * C3084 + (C18352 + C18351) * C19721) * C8565 +
            ((C12154 * C3930 + C12050 * C4027 + C12155 * C3932 +
              C12051 * C4029) *
                 C3084 +
             (C12154 * C3933 + C12050 * C4030 + C12155 * C3935 +
              C12051 * C4032) *
                 C19721) *
                C8566) *
               C2058 -
           (((C16053 + C16054) * C19721 + (C16055 + C16056) * C3084) * C8566 +
            ((C16052 + C16051) * C19721 + (C16050 + C16049) * C3084) * C8565) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3084 * C93 + C19721 * C98) * C8633 +
             (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
             C3640 * C8566) *
                C12050 +
            (C16625 + C16626 + C16627 + C16628) * C12051) *
               C2057 -
           ((C16629 + C16630 + C16631 + C16632) * C12051 +
            (C16628 + C16627 + C16626 + C16625) * C12050) *
               C2058) *
              C1519 +
          (((C18421 + C18422 + C18423 + C18424) * C12050 +
            (C8230 * C8633 + C8231 * C8565 +
             (C3084 * C3932 + C19721 * C3935) * C8634 +
             (C3084 * C3985 + C19721 * C4073) * C8566) *
                C12051) *
               C2058 -
           ((C18424 + C18423 + C18422 + C18421) * C12051 +
            (C3642 * C8566 + C3641 * C8634 + C3640 * C8565 + C3639 * C8633) *
                C12050) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8809 * C93 + C8812 + C8812 + C8565 * C333 +
                      C8810 * C630 + C8813 + C8813 + C8566 * C836) *
                         C19721 * C12050 +
                     (C16701 + C16702) * C19721 * C12051) *
                        C2057 -
                    ((C16703 + C16704) * C19721 * C12051 +
                     (C16702 + C16701) * C19721 * C12050) *
                        C2058) *
                       C1519 +
                   (((C18501 + C18502) * C19721 * C12050 +
                     (C8809 * C3931 + C18495 + C18495 + C8565 * C4113 +
                      C8810 * C3932 + C18496 + C18496 + C8566 * C4114) *
                         C19721 * C12051) *
                        C2058 -
                    ((C18502 + C18501) * C19721 * C12051 +
                     (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                      C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                         C19721 * C12050) *
                        C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C8633 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C8565 +
            (C16049 + C16050) * C8634 + (C16217 + C16218) * C8566) *
               C19721 * C2057 -
           ((C18573 + C18574) * C8566 + (C18353 + C18354) * C8634 +
            (C12155 * C1134 + C12051 * C1328 + C12154 * C1133 +
             C12050 * C1327) *
                C8565 +
            (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
             C12050 * C1183) *
                C8633) *
               C19721 * C2058) *
              C1519 +
          (((C18354 + C18353) * C8633 + (C18574 + C18573) * C8565 +
            (C12154 * C3930 + C12050 * C4027 + C12155 * C3932 +
             C12051 * C4029) *
                C8634 +
            (C12154 * C3983 + C12050 * C4159 + C12155 * C3985 +
             C12051 * C4161) *
                C8566) *
               C19721 * C2058 -
           ((C16219 + C16220) * C8566 + (C16055 + C16056) * C8634 +
            (C16218 + C16217) * C8565 + (C16050 + C16049) * C8633) *
               C19721 * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C3084 * C93 + C19721 * C98) * C12154 +
                      (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
                      C6908 * C12051) *
                         C8565 +
                     (C16271 + C16272 + C16273 + C16274) * C8566) *
                        C2057 -
                    ((C18641 + C18642 + C18643 + C18644) * C8566 +
                     (C6909 * C12051 + C6751 * C12155 + C6908 * C12050 +
                      C6749 * C12154) *
                         C8565) *
                        C2058) *
                       C1519 +
                   (((C18644 + C18643 + C18642 + C18641) * C8565 +
                     (C5525 * C12154 + C5696 * C12050 +
                      (C3084 * C3932 + C19721 * C3935) * C12155 +
                      (C3084 * C4029 + C19721 * C4202) * C12051) *
                         C8566) *
                        C2058 -
                    ((C16275 + C16276 + C16277 + C16278) * C8566 +
                     (C16274 + C16273 + C16272 + C16271) * C8565) *
                        C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) *
                C12154 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C12050 +
            (C16517 + C16518) * C12155 + (C16863 + C16864) * C12051) *
               C19721 * C2057 -
           ((C16865 + C16866) * C12051 + (C16523 + C16524) * C12155 +
            (C16864 + C16863) * C12050 + (C16518 + C16517) * C12154) *
               C19721 * C2058) *
              C1519 +
          (((C18273 + C18274) * C12154 + (C18715 + C18716) * C12050 +
            (C8633 * C3931 + C8565 * C3984 + C8634 * C3932 + C8566 * C3985) *
                C12155 +
            (C8633 * C4028 + C8565 * C4242 + C8634 * C4029 + C8566 * C4243) *
                C12051) *
               C19721 * C2058 -
           ((C18716 + C18715) * C12051 + (C18274 + C18273) * C12155 +
            (C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
                C12050 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C12154) *
               C19721 * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C8565 +
                     (C16397 + C16398) * C8566) *
                        C19721 * C2057 -
                    ((C18793 + C18794) * C8566 +
                     (C12501 * C1072 + C13512 + C13512 + C12051 * C1460 +
                      C12500 * C1071 + C13513 + C13513 + C12050 * C1459) *
                         C8565) *
                        C19721 * C2058) *
                       C1519 +
                   (((C18794 + C18793) * C8565 +
                     (C12500 * C3930 + C18787 + C18787 + C12050 * C4282 +
                      C12501 * C3932 + C18788 + C18788 + C12051 * C4284) *
                         C8566) *
                        C19721 * C2058 -
                    ((C16399 + C16400) * C8566 + (C16398 + C16397) * C8565) *
                        C19721 * C2057) *
                       C1520) *
                  C19743) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
            C6585 * C12051) *
               C8565 +
           (C15929 + C15930) * C8566) *
              C19769 * C624 -
          ((C15931 + C15932) * C8566 + (C15930 + C15929) * C8565) * C19769 *
              C625 +
          ((C15932 + C15931) * C8565 +
           (C3474 * C12050 +
            (C3083 * C5328 + C5336 + C5336 + C19721 * C5330) * C12051) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
            C6585 * C12051) *
               C8565 +
           (C3472 * C12050 + C5342 * C12051) * C8566) *
              C19769 * C19755 * C84 -
          (((C3083 * C2594 + C4863 + C4863 + C19721 * C2600) * C12051 +
            C4351 * C12050) *
               C8566 +
           (C7536 * C12051 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C12050) *
               C8565) *
              C19769 * C19755 * C85 +
          (((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C12050 +
            (C3083 * C1069 + C5855 + C5855 + C19721 * C1081) * C12051) *
               C8565 +
           ((C3083 * C628 + C3093 + C3093 + C19721 * C640) * C12050 +
            (C3083 * C2595 + C15478 + C15478 + C19721 * C2601) * C12051) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
            C6585 * C12051) *
               C8565 +
           (C15929 + C15930) * C8566) *
              C1066 -
          ((C8052 * C12051 + C5342 * C12050) * C8566 +
           (C6586 * C12051 + C6585 * C12050) * C8565) *
              C1067 +
          ((C6586 * C12050 + C6587 * C12051) * C8565 +
           (C8052 * C12050 +
            (C3083 * C8043 + C8049 + C8049 + C19721 * C8045) * C12051) *
               C8566) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C3084 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                C19721) *
               C12050 +
           ((C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
                C3084 +
            (C8633 * C1077 + C8565 * C1139 + C8634 * C2596 + C8566 * C2658) *
                C19721) *
               C12051) *
              C19769 * C624 -
          (((C8634 * C3933 + C8566 * C3986 + C8633 * C2596 + C8565 * C2658) *
                C19721 +
            (C8634 * C3930 + C8566 * C3983 + C8633 * C2593 + C8565 * C2655) *
                C3084) *
               C12051 +
           ((C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) *
                C19721 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C3084) *
               C12050) *
              C19769 * C625 +
          (((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
                C3084 +
            (C8633 * C637 + C8565 * C699 + C8634 * C3453 + C8566 * C3517) *
                C19721) *
               C12050 +
           ((C8633 * C3930 + C8565 * C3983 + C8634 * C5328 + C8566 * C5394) *
                C3084 +
            (C8633 * C3933 + C8565 * C3986 + C8634 * C5329 + C8566 * C5395) *
                C19721) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C3084 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                C19721) *
               C12050 +
           ((C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
                C3084 +
            (C8633 * C1077 + C8565 * C1139 + C8634 * C2596 + C8566 * C2658) *
                C19721) *
               C12051) *
              C19769 * C19755 * C84 -
          (((C10865 + C10866) * C19721 + (C10867 + C10868) * C3084) * C12051 +
           ((C8655 + C8654) * C19721 + (C8653 + C8652) * C3084) * C12050) *
              C19769 * C19755 * C85 +
          (((C8659 + C8658) * C3084 + (C8657 + C8656) * C19721) * C12050 +
           ((C8633 * C1069 + C8565 * C1131 + C8634 * C2595 + C8566 * C2657) *
                C3084 +
            (C8633 * C1075 + C8565 * C1137 + C8634 * C2598 + C8566 * C2660) *
                C19721) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C3084 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                C19721) *
               C12050 +
           ((C16517 + C16518) * C3084 + (C16519 + C16520) * C19721) * C12051) *
              C1066 -
          (((C16521 + C16522) * C19721 + (C16523 + C16524) * C3084) * C12051 +
           ((C16520 + C16519) * C19721 + (C16518 + C16517) * C3084) * C12050) *
              C1067 +
          (((C16524 + C16523) * C3084 + (C16522 + C16521) * C19721) * C12050 +
           ((C8633 * C6564 + C8565 * C6625 + C8634 * C8043 + C8566 * C8102) *
                C3084 +
            (C8633 * C6566 + C8565 * C6627 + C8634 * C8044 + C8566 * C8103) *
                C19721) *
               C12051) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C3084 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C19721) *
               C8565 +
           ((C16049 + C16050) * C3084 + (C16051 + C16052) * C19721) * C8566) *
              C19769 * C624 -
          (((C16053 + C16054) * C19721 + (C16055 + C16056) * C3084) * C8566 +
           ((C16052 + C16051) * C19721 + (C16050 + C16049) * C3084) * C8565) *
              C19769 * C625 +
          (((C16056 + C16055) * C3084 + (C16054 + C16053) * C19721) * C8565 +
           ((C12154 * C3451 + C12050 * C3557 + C12155 * C5328 +
             C12051 * C5446) *
                C3084 +
            (C12154 * C3453 + C12050 * C3559 + C12155 * C5329 +
             C12051 * C5447) *
                C19721) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C3084 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C19721) *
               C8565 +
           ((C12154 * C630 + C12050 * C742 + C12155 * C2593 + C12051 * C2711) *
                C3084 +
            (C12154 * C636 + C12050 * C748 + C12155 * C2596 + C12051 * C2714) *
                C19721) *
               C8566) *
              C19769 * C19755 * C84 -
          (((C13730 + C13731) * C19721 + (C13732 + C13733) * C3084) * C8566 +
           ((C12176 + C12175) * C19721 + (C12174 + C12173) * C3084) * C8565) *
              C19769 * C19755 * C85 +
          (((C12180 + C12179) * C3084 + (C12178 + C12177) * C19721) * C8565 +
           ((C12154 * C628 + C12050 * C740 + C12155 * C2595 + C12051 * C2713) *
                C3084 +
            (C12154 * C634 + C12050 * C746 + C12155 * C2598 + C12051 * C2716) *
                C19721) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C3084 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C19721) *
               C8565 +
           ((C16049 + C16050) * C3084 + (C16051 + C16052) * C19721) * C8566) *
              C1066 -
          (((C12155 * C3934 + C12051 * C4031 + C12154 * C2596 +
             C12050 * C2714) *
                C19721 +
            (C12155 * C3931 + C12051 * C4028 + C12154 * C2593 +
             C12050 * C2711) *
                C3084) *
               C8566 +
           ((C12155 * C1078 + C12051 * C1190 + C12154 * C1077 +
             C12050 * C1189) *
                C19721 +
            (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
             C12050 * C1183) *
                C3084) *
               C8565) *
              C1067 +
          (((C12154 * C1072 + C12050 * C1184 + C12155 * C6564 +
             C12051 * C6692) *
                C3084 +
            (C12154 * C1078 + C12050 * C1190 + C12155 * C6566 +
             C12051 * C6694) *
                C19721) *
               C8565 +
           ((C12154 * C3931 + C12050 * C4028 + C12155 * C8043 +
             C12051 * C8170) *
                C3084 +
            (C12154 * C3934 + C12050 * C4031 + C12155 * C8044 +
             C12051 * C8171) *
                C19721) *
               C8566) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C8633 +
            (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
            C3640 * C8566) *
               C12050 +
           (C6749 * C8633 + C6750 * C8565 + C5527 * C8634 + C5526 * C8566) *
               C12051) *
              C19769 * C624 -
          ((C5524 * C8566 + C5525 * C8634 + C5526 * C8565 + C5527 * C8633) *
               C12051 +
           (C3642 * C8566 + C3641 * C8634 + C3640 * C8565 + C3639 * C8633) *
               C12050) *
              C19769 * C625 +
          ((C3641 * C8633 + C3642 * C8565 + C3644 * C8634 + C3643 * C8566) *
               C12050 +
           (C5525 * C8633 + C5524 * C8565 +
            (C3084 * C5328 + C19721 * C5329) * C8634 +
            (C3084 * C5394 + C19721 * C5514) * C8566) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C8633 +
            (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
            C3640 * C8566) *
               C12050 +
           (C6749 * C8633 + C6750 * C8565 + C5527 * C8634 + C5526 * C8566) *
               C12051) *
              C19769 * C19755 * C84 -
          (((C3084 * C2656 + C19721 * C2768) * C8566 +
            (C3084 * C2594 + C19721 * C2597) * C8634 + C7712 * C8565 +
            C7711 * C8633) *
               C12051 +
           (C4529 * C8566 + C4528 * C8634 +
            (C3084 * C157 + C19721 * C290) * C8565 +
            (C3084 * C94 + C19721 * C99) * C8633) *
               C12050) *
              C19769 * C19755 * C85 +
          (((C3084 * C95 + C19721 * C100) * C8633 +
            (C3084 * C158 + C19721 * C291) * C8565 +
            (C3084 * C628 + C19721 * C634) * C8634 +
            (C3084 * C690 + C19721 * C790) * C8566) *
               C12050 +
           ((C3084 * C1069 + C19721 * C1075) * C8633 +
            (C3084 * C1131 + C19721 * C1231) * C8565 +
            (C3084 * C2595 + C19721 * C2598) * C8634 +
            (C3084 * C2657 + C19721 * C2769) * C8566) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C8633 +
            (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
            C3640 * C8566) *
               C12050 +
           (C16625 + C16626 + C16627 + C16628) * C12051) *
              C1066 -
          ((C16629 + C16630 + C16631 + C16632) * C12051 +
           (C16628 + C16627 + C16626 + C16625) * C12050) *
              C1067 +
          ((C16632 + C16631 + C16630 + C16629) * C12050 +
           (C6754 * C8633 + C6753 * C8565 +
            (C3084 * C8043 + C19721 * C8044) * C8634 +
            (C3084 * C8102 + C19721 * C8222) * C8566) *
               C12051) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C19721 * C12050 +
                    (C8809 * C1071 + C9851 + C9851 + C8565 * C1277 +
                     C8810 * C2593 + C9850 + C9850 + C8566 * C2820) *
                        C19721 * C12051) *
                       C19769 * C624 -
                   ((C8810 * C3930 + C11728 + C11728 + C8566 * C4112 +
                     C8809 * C2593 + C11727 + C11727 + C8565 * C2820) *
                        C19721 * C12051 +
                    (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                     C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                        C19721 * C12050) *
                       C19769 * C625 +
                   ((C8809 * C631 + C9374 + C9374 + C8565 * C837 +
                     C8810 * C3451 + C9375 + C9375 + C8566 * C3682) *
                        C19721 * C12050 +
                    (C8809 * C3930 + C16157 + C16157 + C8565 * C4112 +
                     C8810 * C5328 + C16158 + C16158 + C8566 * C5577) *
                        C19721 * C12051) *
                       C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C19721 * C12050 +
                    (C8809 * C1071 + C9851 + C9851 + C8565 * C1277 +
                     C8810 * C2593 + C9850 + C9850 + C8566 * C2820) *
                        C19721 * C12051) *
                       C19769 * C19755 * C84 -
                   ((C11083 + C11084) * C19721 * C12051 +
                    (C8837 + C8836) * C19721 * C12050) *
                       C19769 * C19755 * C85 +
                   ((C8839 + C8838) * C19721 * C12050 +
                    (C8809 * C1069 + C11077 + C11077 + C8565 * C1275 +
                     C8810 * C2595 + C11078 + C11078 + C8566 * C2822) *
                        C19721 * C12051) *
                       C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C19721 * C12050 +
                    (C16701 + C16702) * C19721 * C12051) *
                       C1066 -
                   ((C16703 + C16704) * C19721 * C12051 +
                    (C16702 + C16701) * C19721 * C12050) *
                       C1067 +
                   ((C16704 + C16703) * C19721 * C12050 +
                    (C8809 * C6564 + C16691 + C16691 + C8565 * C6799 +
                     C8810 * C8043 + C16692 + C16692 + C8566 * C8283) *
                        C19721 * C12051) *
                       C1068) *
                  C19755 * C19743) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8633 +
           (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
               C8565 +
           (C16049 + C16050) * C8634 + (C16217 + C16218) * C8566) *
              C19721 * C19769 * C624 -
          ((C16219 + C16220) * C8566 + (C16055 + C16056) * C8634 +
           (C16218 + C16217) * C8565 + (C16050 + C16049) * C8633) *
              C19721 * C19769 * C625 +
          ((C16056 + C16055) * C8633 + (C16220 + C16219) * C8565 +
           (C12154 * C3451 + C12050 * C3557 + C12155 * C5328 + C12051 * C5446) *
               C8634 +
           (C12154 * C3515 + C12050 * C3728 + C12155 * C5394 + C12051 * C5631) *
               C8566) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8633 +
           (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
               C8565 +
           (C12154 * C630 + C12050 * C742 + C12155 * C2593 + C12051 * C2711) *
               C8634 +
           (C12154 * C692 + C12050 * C886 + C12155 * C2655 + C12051 * C2876) *
               C8566) *
              C19721 * C19769 * C19755 * C84 -
          ((C13941 + C13942) * C8566 + (C13732 + C13733) * C8634 +
           (C12340 + C12339) * C8565 + (C12174 + C12173) * C8633) *
              C19721 * C19769 * C19755 * C85 +
          ((C12180 + C12179) * C8633 + (C12342 + C12341) * C8565 +
           (C12154 * C628 + C12050 * C740 + C12155 * C2595 + C12051 * C2713) *
               C8634 +
           (C12154 * C690 + C12050 * C884 + C12155 * C2657 + C12051 * C2878) *
               C8566) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8633 +
           (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
               C8565 +
           (C16049 + C16050) * C8634 + (C16217 + C16218) * C8566) *
              C19721 * C1066 -
          ((C12155 * C3984 + C12051 * C4160 + C12154 * C2655 + C12050 * C2876) *
               C8566 +
           (C12155 * C3931 + C12051 * C4028 + C12154 * C2593 + C12050 * C2711) *
               C8634 +
           (C12155 * C1134 + C12051 * C1328 + C12154 * C1133 + C12050 * C1327) *
               C8565 +
           (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 + C12050 * C1183) *
               C8633) *
              C19721 * C1067 +
          ((C12154 * C1072 + C12050 * C1184 + C12155 * C6564 + C12051 * C6692) *
               C8633 +
           (C12154 * C1134 + C12050 * C1328 + C12155 * C6625 + C12051 * C6859) *
               C8565 +
           (C12154 * C3931 + C12050 * C4028 + C12155 * C8043 + C12051 * C8170) *
               C8634 +
           (C12154 * C3984 + C12050 * C4160 + C12155 * C8102 + C12051 * C8347) *
               C8566) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C12154 +
            (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
            C6908 * C12051) *
               C8565 +
           (C16271 + C16272 + C16273 + C16274) * C8566) *
              C19769 * C624 -
          ((C16275 + C16276 + C16277 + C16278) * C8566 +
           (C16274 + C16273 + C16272 + C16271) * C8565) *
              C19769 * C625 +
          ((C16278 + C16277 + C16276 + C16275) * C8565 +
           (C3644 * C12154 + C3791 * C12050 +
            (C3084 * C5328 + C19721 * C5329) * C12155 +
            (C3084 * C5446 + C19721 * C5688) * C12051) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C12154 +
            (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
            C6908 * C12051) *
               C8565 +
           (C3639 * C12154 + C3789 * C12050 + C5527 * C12155 + C5697 * C12051) *
               C8566) *
              C19769 * C19755 * C84 -
          (((C3084 * C2712 + C19721 * C2930) * C12051 +
            (C3084 * C2594 + C19721 * C2597) * C12155 + C4697 * C12050 +
            C4528 * C12154) *
               C8566 +
           (C7884 * C12051 + C7711 * C12155 +
            (C3084 * C224 + C19721 * C456) * C12050 +
            (C3084 * C94 + C19721 * C99) * C12154) *
               C8565) *
              C19769 * C19755 * C85 +
          (((C3084 * C95 + C19721 * C100) * C12154 +
            (C3084 * C225 + C19721 * C457) * C12050 +
            (C3084 * C1069 + C19721 * C1075) * C12155 +
            (C3084 * C1181 + C19721 * C1369) * C12051) *
               C8565 +
           ((C3084 * C628 + C19721 * C634) * C12154 +
            (C3084 * C740 + C19721 * C928) * C12050 +
            (C3084 * C2595 + C19721 * C2598) * C12155 +
            (C3084 * C2713 + C19721 * C2931) * C12051) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C12154 +
            (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
            C6908 * C12051) *
               C8565 +
           (C16271 + C16272 + C16273 + C16274) * C8566) *
              C1066 -
          ((C8402 * C12051 + C8230 * C12155 + C5697 * C12050 + C5527 * C12154) *
               C8566 +
           (C6909 * C12051 + C6751 * C12155 + C6908 * C12050 + C6749 * C12154) *
               C8565) *
              C1067 +
          ((C6751 * C12154 + C6909 * C12050 + C6754 * C12155 + C6910 * C12051) *
               C8565 +
           (C8230 * C12154 + C8402 * C12050 +
            (C3084 * C8043 + C19721 * C8044) * C12155 +
            (C3084 * C8170 + C19721 * C8398) * C12051) *
               C8566) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C12154 +
           (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
               C12050 +
           (C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
               C12155 +
           (C8633 * C1183 + C8565 * C1415 + C8634 * C2711 + C8566 * C2982) *
               C12051) *
              C19721 * C19769 * C624 -
          ((C8634 * C4027 + C8566 * C4241 + C8633 * C2711 + C8565 * C2982) *
               C12051 +
           (C8634 * C3930 + C8566 * C3983 + C8633 * C2593 + C8565 * C2655) *
               C12155 +
           (C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
               C12050 +
           (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
               C12154) *
              C19721 * C19769 * C625 +
          ((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
               C12154 +
           (C8633 * C743 + C8565 * C975 + C8634 * C3557 + C8566 * C3833) *
               C12050 +
           (C8633 * C3930 + C8565 * C3983 + C8634 * C5328 + C8566 * C5394) *
               C12155 +
           (C8633 * C4027 + C8565 * C4241 + C8634 * C5446 + C8566 * C5749) *
               C12051) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C12154 +
           (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
               C12050 +
           (C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
               C12155 +
           (C8633 * C1183 + C8565 * C1415 + C8634 * C2711 + C8566 * C2982) *
               C12051) *
              C19721 * C19769 * C19755 * C84 -
          ((C11294 + C11295) * C12051 + (C10867 + C10868) * C12155 +
           (C9007 + C9006) * C12050 + (C8653 + C8652) * C12154) *
              C19721 * C19769 * C19755 * C85 +
          ((C8659 + C8658) * C12154 + (C9009 + C9008) * C12050 +
           (C8633 * C1069 + C8565 * C1131 + C8634 * C2595 + C8566 * C2657) *
               C12155 +
           (C8633 * C1181 + C8565 * C1413 + C8634 * C2713 + C8566 * C2984) *
               C12051) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C12154 +
           (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
               C12050 +
           (C16517 + C16518) * C12155 + (C16863 + C16864) * C12051) *
              C19721 * C1066 -
          ((C16865 + C16866) * C12051 + (C16523 + C16524) * C12155 +
           (C16864 + C16863) * C12050 + (C16518 + C16517) * C12154) *
              C19721 * C1067 +
          ((C16524 + C16523) * C12154 + (C16866 + C16865) * C12050 +
           (C8633 * C6564 + C8565 * C6625 + C8634 * C8043 + C8566 * C8102) *
               C12155 +
           (C8633 * C6692 + C8565 * C6948 + C8634 * C8170 + C8566 * C8452) *
               C12051) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                     C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                        C8565 +
                    (C16397 + C16398) * C8566) *
                       C19721 * C19769 * C624 -
                   ((C16399 + C16400) * C8566 + (C16398 + C16397) * C8565) *
                       C19721 * C19769 * C625 +
                   ((C16400 + C16399) * C8565 +
                    (C12500 * C3451 + C16387 + C16387 + C12050 * C3873 +
                     C12501 * C5328 + C16388 + C16388 + C12051 * C5800) *
                        C8566) *
                       C19721 * C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                     C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                        C8565 +
                    (C12500 * C630 + C12985 + C12985 + C12050 * C1018 +
                     C12501 * C2593 + C12984 + C12984 + C12051 * C3035) *
                        C8566) *
                       C19721 * C19769 * C19755 * C84 -
                   ((C14158 + C14159) * C8566 + (C12528 + C12527) * C8565) *
                       C19721 * C19769 * C19755 * C85 +
                   ((C12530 + C12529) * C8565 +
                    (C12500 * C628 + C14152 + C14152 + C12050 * C1016 +
                     C12501 * C2595 + C14153 + C14153 + C12051 * C3037) *
                        C8566) *
                       C19721 * C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                     C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                        C8565 +
                    (C16397 + C16398) * C8566) *
                       C19721 * C1066 -
                   ((C12501 * C3931 + C15425 + C15425 + C12051 * C4283 +
                     C12500 * C2593 + C15424 + C15424 + C12050 * C3035) *
                        C8566 +
                    (C12501 * C1072 + C13512 + C13512 + C12051 * C1460 +
                     C12500 * C1071 + C13513 + C13513 + C12050 * C1459) *
                        C8565) *
                       C19721 * C1067 +
                   ((C12500 * C1072 + C13514 + C13514 + C12050 * C1460 +
                     C12501 * C6564 + C13515 + C13515 + C12051 * C6997) *
                        C8565 +
                    (C12500 * C3931 + C16917 + C16917 + C12050 * C4283 +
                     C12501 * C8043 + C16918 + C16918 + C12051 * C8509) *
                        C8566) *
                       C19721 * C1068) *
                  C19755 * C19743) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
             C6585 * C12051) *
                C8565 +
            (C15929 + C15930) * C8566) *
               C2057 -
           ((C8052 * C12051 + C5342 * C12050) * C8566 +
            (C6586 * C12051 + C6585 * C12050) * C8565) *
               C2058) *
              C19755 * C1521 +
          (((C7536 * C12050 + C7537 * C12051) * C8565 +
            (C16990 * C12050 +
             (C3083 * C7055 + C7059 + C7059 + C19721 * C7057) * C12051) *
                C8566) *
               C2058 -
           ((C16991 + C16985) * C8566 +
            (C7536 * C12051 +
             (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C12050) *
                C8565) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) *
                 C3084 +
             (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                 C19721) *
                C12050 +
            ((C16517 + C16518) * C3084 + (C16519 + C16520) * C19721) * C12051) *
               C2057 -
           (((C16521 + C16522) * C19721 + (C16523 + C16524) * C3084) * C12051 +
            ((C16520 + C16519) * C19721 + (C16518 + C16517) * C3084) * C12050) *
               C2058) *
              C19755 * C1521 +
          ((((C10868 + C10867) * C3084 + (C10866 + C10865) * C19721) * C12050 +
            ((C8633 * C1073 + C8565 * C1135 + C8634 * C7055 + C8566 * C7109) *
                 C3084 +
             (C8633 * C1079 + C8565 * C1141 + C8634 * C7056 + C8566 * C7110) *
                 C19721) *
                C12051) *
               C2058 -
           (((C10865 + C10866) * C19721 + (C10867 + C10868) * C3084) * C12051 +
            ((C8655 + C8654) * C19721 + (C8653 + C8652) * C3084) * C12050) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                 C3084 +
             (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                 C19721) *
                C8565 +
            ((C16049 + C16050) * C3084 + (C16051 + C16052) * C19721) * C8566) *
               C2057 -
           (((C12155 * C3934 + C12051 * C4031 + C12154 * C2596 +
              C12050 * C2714) *
                 C19721 +
             (C12155 * C3931 + C12051 * C4028 + C12154 * C2593 +
              C12050 * C2711) *
                 C3084) *
                C8566 +
            ((C12155 * C1078 + C12051 * C1190 + C12154 * C1077 +
              C12050 * C1189) *
                 C19721 +
             (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
              C12050 * C1183) *
                 C3084) *
                C8565) *
               C2058) *
              C19755 * C1521 +
          ((((C14385 + C14384) * C3084 + (C14383 + C14382) * C19721) * C8565 +
            ((C12154 * C2594 + C12050 * C2712 + C12155 * C7055 +
              C12051 * C7161) *
                 C3084 +
             (C12154 * C2597 + C12050 * C2715 + C12155 * C7056 +
              C12051 * C7162) *
                 C19721) *
                C8566) *
               C2058 -
           (((C13730 + C13731) * C19721 + (C13732 + C13733) * C3084) * C8566 +
            ((C12176 + C12175) * C19721 + (C12174 + C12173) * C3084) * C8565) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C3084 * C93 + C19721 * C98) * C8633 +
                      (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
                      C3640 * C8566) *
                         C12050 +
                     (C16625 + C16626 + C16627 + C16628) * C12051) *
                        C2057 -
                    ((C16629 + C16630 + C16631 + C16632) * C12051 +
                     (C16628 + C16627 + C16626 + C16625) * C12050) *
                        C2058) *
                       C19755 * C1521 +
                   (((C17797 + C17798 + C17799 + C17800) * C12050 +
                     (C7713 * C8633 + C7714 * C8565 +
                      (C3084 * C7055 + C19721 * C7056) * C8634 +
                      (C3084 * C7109 + C19721 * C7213) * C8566) *
                         C12051) *
                        C2058 -
                    ((C17800 + C17799 + C17798 + C17797) * C12051 +
                     (C4529 * C8566 + C4528 * C8634 +
                      (C3084 * C157 + C19721 * C290) * C8565 +
                      (C3084 * C94 + C19721 * C99) * C8633) *
                         C12050) *
                        C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C8809 * C93 + C8812 + C8812 + C8565 * C333 +
                      C8810 * C630 + C8813 + C8813 + C8566 * C836) *
                         C19721 * C12050 +
                     (C16701 + C16702) * C19721 * C12051) *
                        C2057 -
                    ((C16703 + C16704) * C19721 * C12051 +
                     (C16702 + C16701) * C19721 * C12050) *
                        C2058) *
                       C19755 * C1521 +
                   (((C11084 + C11083) * C19721 * C12050 +
                     (C8809 * C1073 + C9854 + C9854 + C8565 * C1279 +
                      C8810 * C7055 + C9855 + C9855 + C8566 * C7264) *
                         C19721 * C12051) *
                        C2058 -
                    ((C11083 + C11084) * C19721 * C12051 +
                     (C8837 + C8836) * C19721 * C12050) *
                        C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C8633 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C8565 +
            (C16049 + C16050) * C8634 + (C16217 + C16218) * C8566) *
               C19721 * C2057 -
           ((C12155 * C3984 + C12051 * C4160 + C12154 * C2655 +
             C12050 * C2876) *
                C8566 +
            (C12155 * C3931 + C12051 * C4028 + C12154 * C2593 +
             C12050 * C2711) *
                C8634 +
            (C12155 * C1134 + C12051 * C1328 + C12154 * C1133 +
             C12050 * C1327) *
                C8565 +
            (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
             C12050 * C1183) *
                C8633) *
               C19721 * C2058) *
              C19755 * C1521 +
          (((C14385 + C14384) * C8633 + (C14603 + C14602) * C8565 +
            (C12154 * C2594 + C12050 * C2712 + C12155 * C7055 +
             C12051 * C7161) *
                C8634 +
            (C12154 * C2656 + C12050 * C2877 + C12155 * C7109 +
             C12051 * C7316) *
                C8566) *
               C19721 * C2058 -
           ((C13941 + C13942) * C8566 + (C13732 + C13733) * C8634 +
            (C12340 + C12339) * C8565 + (C12174 + C12173) * C8633) *
               C19721 * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C3084 * C93 + C19721 * C98) * C12154 +
                      (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
                      C6908 * C12051) *
                         C8565 +
                     (C16271 + C16272 + C16273 + C16274) * C8566) *
                        C2057 -
                    ((C8402 * C12051 + C8230 * C12155 + C5697 * C12050 +
                      C5527 * C12154) *
                         C8566 +
                     (C6909 * C12051 + C6751 * C12155 + C6908 * C12050 +
                      C6749 * C12154) *
                         C8565) *
                        C2058) *
                       C19755 * C1521 +
                   (((C7711 * C12154 + C7884 * C12050 + C7713 * C12155 +
                      C7885 * C12051) *
                         C8565 +
                     (C17194 * C12154 + C17399 * C12050 +
                      (C3084 * C7055 + C19721 * C7056) * C12155 +
                      (C3084 * C7161 + C19721 * C7367) * C12051) *
                         C8566) *
                        C2058 -
                    ((C17400 + C17396 + C17395 + C17394) * C8566 +
                     (C7884 * C12051 + C7711 * C12155 +
                      (C3084 * C224 + C19721 * C456) * C12050 +
                      (C3084 * C94 + C19721 * C99) * C12154) *
                         C8565) *
                        C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) *
                C12154 +
            (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
                C12050 +
            (C16517 + C16518) * C12155 + (C16863 + C16864) * C12051) *
               C19721 * C2057 -
           ((C16865 + C16866) * C12051 + (C16523 + C16524) * C12155 +
            (C16864 + C16863) * C12050 + (C16518 + C16517) * C12154) *
               C19721 * C2058) *
              C19755 * C1521 +
          (((C10868 + C10867) * C12154 + (C11295 + C11294) * C12050 +
            (C8633 * C1073 + C8565 * C1135 + C8634 * C7055 + C8566 * C7109) *
                C12155 +
            (C8633 * C1185 + C8565 * C1417 + C8634 * C7161 + C8566 * C7418) *
                C12051) *
               C19721 * C2058 -
           ((C11294 + C11295) * C12051 + (C10867 + C10868) * C12155 +
            (C9007 + C9006) * C12050 + (C8653 + C8652) * C12154) *
               C19721 * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C8565 +
                     (C16397 + C16398) * C8566) *
                        C19721 * C2057 -
                    ((C12501 * C3931 + C15425 + C15425 + C12051 * C4283 +
                      C12500 * C2593 + C15424 + C15424 + C12050 * C3035) *
                         C8566 +
                     (C12501 * C1072 + C13512 + C13512 + C12051 * C1460 +
                      C12500 * C1071 + C13513 + C13513 + C12050 * C1459) *
                         C8565) *
                        C19721 * C2058) *
                       C19755 * C1521 +
                   (((C14823 + C14822) * C8565 +
                     (C12500 * C2594 + C15426 + C15426 + C12050 * C3036 +
                      C12501 * C7055 + C15427 + C15427 + C12051 * C7469) *
                         C8566) *
                        C19721 * C2058 -
                    ((C14158 + C14159) * C8566 + (C12528 + C12527) * C8565) *
                        C19721 * C2057) *
                       C19755 * C1522)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
            C6585 * C12051) *
               C8565 +
           (C3472 * C12050 + C5342 * C12051) * C8566) *
              C19769 * C19755 * C84 -
          (((C3083 * C2594 + C4863 + C4863 + C19721 * C2600) * C12051 +
            C4351 * C12050) *
               C8566 +
           (C7536 * C12051 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C12050) *
               C8565) *
              C19769 * C19755 * C85 +
          (((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C12050 +
            (C3083 * C1069 + C5855 + C5855 + C19721 * C1081) * C12051) *
               C8565 +
           ((C3083 * C628 + C3093 + C3093 + C19721 * C640) * C12050 +
            (C3083 * C2595 + C15478 + C15478 + C19721 * C2601) * C12051) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C12050 +
            C6585 * C12051) *
               C8565 +
           (C15929 + C15930) * C8566) *
              C19769 * C624 -
          ((C15931 + C15932) * C8566 + (C15930 + C15929) * C8565) * C19769 *
              C625 +
          ((C15932 + C15931) * C8565 +
           (C3474 * C12050 +
            (C3083 * C5328 + C5336 + C5336 + C19721 * C5330) * C12051) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C3084 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                C19721) *
               C12050 +
           ((C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
                C3084 +
            (C8633 * C1077 + C8565 * C1139 + C8634 * C2596 + C8566 * C2658) *
                C19721) *
               C12051) *
              C19769 * C19755 * C84 -
          (((C10865 + C10866) * C19721 + (C10867 + C10868) * C3084) * C12051 +
           ((C8655 + C8654) * C19721 + (C8653 + C8652) * C3084) * C12050) *
              C19769 * C19755 * C85 +
          (((C8659 + C8658) * C3084 + (C8657 + C8656) * C19721) * C12050 +
           ((C8633 * C1069 + C8565 * C1131 + C8634 * C2595 + C8566 * C2657) *
                C3084 +
            (C8633 * C1075 + C8565 * C1137 + C8634 * C2598 + C8566 * C2660) *
                C19721) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C3084 +
            (C8633 * C98 + C8565 * C161 + C8634 * C636 + C8566 * C698) *
                C19721) *
               C12050 +
           ((C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
                C3084 +
            (C8633 * C1077 + C8565 * C1139 + C8634 * C2596 + C8566 * C2658) *
                C19721) *
               C12051) *
              C19769 * C624 -
          (((C8634 * C3933 + C8566 * C3986 + C8633 * C2596 + C8565 * C2658) *
                C19721 +
            (C8634 * C3930 + C8566 * C3983 + C8633 * C2593 + C8565 * C2655) *
                C3084) *
               C12051 +
           ((C8634 * C637 + C8566 * C699 + C8633 * C636 + C8565 * C698) *
                C19721 +
            (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
                C3084) *
               C12050) *
              C19769 * C625 +
          (((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
                C3084 +
            (C8633 * C637 + C8565 * C699 + C8634 * C3453 + C8566 * C3517) *
                C19721) *
               C12050 +
           ((C8633 * C3930 + C8565 * C3983 + C8634 * C5328 + C8566 * C5394) *
                C3084 +
            (C8633 * C3933 + C8565 * C3986 + C8634 * C5329 + C8566 * C5395) *
                C19721) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C3084 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C19721) *
               C8565 +
           ((C12154 * C630 + C12050 * C742 + C12155 * C2593 + C12051 * C2711) *
                C3084 +
            (C12154 * C636 + C12050 * C748 + C12155 * C2596 + C12051 * C2714) *
                C19721) *
               C8566) *
              C19769 * C19755 * C84 -
          (((C13730 + C13731) * C19721 + (C13732 + C13733) * C3084) * C8566 +
           ((C12176 + C12175) * C19721 + (C12174 + C12173) * C3084) * C8565) *
              C19769 * C19755 * C85 +
          (((C12180 + C12179) * C3084 + (C12178 + C12177) * C19721) * C8565 +
           ((C12154 * C628 + C12050 * C740 + C12155 * C2595 + C12051 * C2713) *
                C3084 +
            (C12154 * C634 + C12050 * C746 + C12155 * C2598 + C12051 * C2716) *
                C19721) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C3084 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C19721) *
               C8565 +
           ((C16049 + C16050) * C3084 + (C16051 + C16052) * C19721) * C8566) *
              C19769 * C624 -
          (((C16053 + C16054) * C19721 + (C16055 + C16056) * C3084) * C8566 +
           ((C16052 + C16051) * C19721 + (C16050 + C16049) * C3084) * C8565) *
              C19769 * C625 +
          (((C16056 + C16055) * C3084 + (C16054 + C16053) * C19721) * C8565 +
           ((C12154 * C3451 + C12050 * C3557 + C12155 * C5328 +
             C12051 * C5446) *
                C3084 +
            (C12154 * C3453 + C12050 * C3559 + C12155 * C5329 +
             C12051 * C5447) *
                C19721) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C8633 +
            (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
            C3640 * C8566) *
               C12050 +
           (C6749 * C8633 + C6750 * C8565 + C5527 * C8634 + C5526 * C8566) *
               C12051) *
              C19769 * C19755 * C84 -
          (((C3084 * C2656 + C19721 * C2768) * C8566 +
            (C3084 * C2594 + C19721 * C2597) * C8634 + C7712 * C8565 +
            C7711 * C8633) *
               C12051 +
           (C4529 * C8566 + C4528 * C8634 +
            (C3084 * C157 + C19721 * C290) * C8565 +
            (C3084 * C94 + C19721 * C99) * C8633) *
               C12050) *
              C19769 * C19755 * C85 +
          (((C3084 * C95 + C19721 * C100) * C8633 +
            (C3084 * C158 + C19721 * C291) * C8565 +
            (C3084 * C628 + C19721 * C634) * C8634 +
            (C3084 * C690 + C19721 * C790) * C8566) *
               C12050 +
           ((C3084 * C1069 + C19721 * C1075) * C8633 +
            (C3084 * C1131 + C19721 * C1231) * C8565 +
            (C3084 * C2595 + C19721 * C2598) * C8634 +
            (C3084 * C2657 + C19721 * C2769) * C8566) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C8633 +
            (C3084 * C156 + C19721 * C289) * C8565 + C3639 * C8634 +
            C3640 * C8566) *
               C12050 +
           (C6749 * C8633 + C6750 * C8565 + C5527 * C8634 + C5526 * C8566) *
               C12051) *
              C19769 * C624 -
          ((C5524 * C8566 + C5525 * C8634 + C5526 * C8565 + C5527 * C8633) *
               C12051 +
           (C3642 * C8566 + C3641 * C8634 + C3640 * C8565 + C3639 * C8633) *
               C12050) *
              C19769 * C625 +
          ((C3641 * C8633 + C3642 * C8565 + C3644 * C8634 + C3643 * C8566) *
               C12050 +
           (C5525 * C8633 + C5524 * C8565 +
            (C3084 * C5328 + C19721 * C5329) * C8634 +
            (C3084 * C5394 + C19721 * C5514) * C8566) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C19721 * C12050 +
                    (C8809 * C1071 + C9851 + C9851 + C8565 * C1277 +
                     C8810 * C2593 + C9850 + C9850 + C8566 * C2820) *
                        C19721 * C12051) *
                       C19769 * C19755 * C84 -
                   ((C11083 + C11084) * C19721 * C12051 +
                    (C8837 + C8836) * C19721 * C12050) *
                       C19769 * C19755 * C85 +
                   ((C8839 + C8838) * C19721 * C12050 +
                    (C8809 * C1069 + C11077 + C11077 + C8565 * C1275 +
                     C8810 * C2595 + C11078 + C11078 + C8566 * C2822) *
                        C19721 * C12051) *
                       C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C8809 * C93 + C8812 + C8812 + C8565 * C333 + C8810 * C630 +
                     C8813 + C8813 + C8566 * C836) *
                        C19721 * C12050 +
                    (C8809 * C1071 + C9851 + C9851 + C8565 * C1277 +
                     C8810 * C2593 + C9850 + C9850 + C8566 * C2820) *
                        C19721 * C12051) *
                       C19769 * C624 -
                   ((C8810 * C3930 + C11728 + C11728 + C8566 * C4112 +
                     C8809 * C2593 + C11727 + C11727 + C8565 * C2820) *
                        C19721 * C12051 +
                    (C8810 * C631 + C9372 + C9372 + C8566 * C837 +
                     C8809 * C630 + C9373 + C9373 + C8565 * C836) *
                        C19721 * C12050) *
                       C19769 * C625 +
                   ((C8809 * C631 + C9374 + C9374 + C8565 * C837 +
                     C8810 * C3451 + C9375 + C9375 + C8566 * C3682) *
                        C19721 * C12050 +
                    (C8809 * C3930 + C16157 + C16157 + C8565 * C4112 +
                     C8810 * C5328 + C16158 + C16158 + C8566 * C5577) *
                        C19721 * C12051) *
                       C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8633 +
           (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
               C8565 +
           (C12154 * C630 + C12050 * C742 + C12155 * C2593 + C12051 * C2711) *
               C8634 +
           (C12154 * C692 + C12050 * C886 + C12155 * C2655 + C12051 * C2876) *
               C8566) *
              C19721 * C19769 * C19755 * C84 -
          ((C13941 + C13942) * C8566 + (C13732 + C13733) * C8634 +
           (C12340 + C12339) * C8565 + (C12174 + C12173) * C8633) *
              C19721 * C19769 * C19755 * C85 +
          ((C12180 + C12179) * C8633 + (C12342 + C12341) * C8565 +
           (C12154 * C628 + C12050 * C740 + C12155 * C2595 + C12051 * C2713) *
               C8634 +
           (C12154 * C690 + C12050 * C884 + C12155 * C2657 + C12051 * C2878) *
               C8566) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8633 +
           (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
               C8565 +
           (C16049 + C16050) * C8634 + (C16217 + C16218) * C8566) *
              C19721 * C19769 * C624 -
          ((C16219 + C16220) * C8566 + (C16055 + C16056) * C8634 +
           (C16218 + C16217) * C8565 + (C16050 + C16049) * C8633) *
              C19721 * C19769 * C625 +
          ((C16056 + C16055) * C8633 + (C16220 + C16219) * C8565 +
           (C12154 * C3451 + C12050 * C3557 + C12155 * C5328 + C12051 * C5446) *
               C8634 +
           (C12154 * C3515 + C12050 * C3728 + C12155 * C5394 + C12051 * C5631) *
               C8566) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C12154 +
            (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
            C6908 * C12051) *
               C8565 +
           (C3639 * C12154 + C3789 * C12050 + C5527 * C12155 + C5697 * C12051) *
               C8566) *
              C19769 * C19755 * C84 -
          (((C3084 * C2712 + C19721 * C2930) * C12051 +
            (C3084 * C2594 + C19721 * C2597) * C12155 + C4697 * C12050 +
            C4528 * C12154) *
               C8566 +
           (C7884 * C12051 + C7711 * C12155 +
            (C3084 * C224 + C19721 * C456) * C12050 +
            (C3084 * C94 + C19721 * C99) * C12154) *
               C8565) *
              C19769 * C19755 * C85 +
          (((C3084 * C95 + C19721 * C100) * C12154 +
            (C3084 * C225 + C19721 * C457) * C12050 +
            (C3084 * C1069 + C19721 * C1075) * C12155 +
            (C3084 * C1181 + C19721 * C1369) * C12051) *
               C8565 +
           ((C3084 * C628 + C19721 * C634) * C12154 +
            (C3084 * C740 + C19721 * C928) * C12050 +
            (C3084 * C2595 + C19721 * C2598) * C12155 +
            (C3084 * C2713 + C19721 * C2931) * C12051) *
               C8566) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C12154 +
            (C3084 * C223 + C19721 * C455) * C12050 + C6749 * C12155 +
            C6908 * C12051) *
               C8565 +
           (C16271 + C16272 + C16273 + C16274) * C8566) *
              C19769 * C624 -
          ((C16275 + C16276 + C16277 + C16278) * C8566 +
           (C16274 + C16273 + C16272 + C16271) * C8565) *
              C19769 * C625 +
          ((C16278 + C16277 + C16276 + C16275) * C8565 +
           (C3644 * C12154 + C3791 * C12050 +
            (C3084 * C5328 + C19721 * C5329) * C12155 +
            (C3084 * C5446 + C19721 * C5688) * C12051) *
               C8566) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C12154 +
           (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
               C12050 +
           (C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
               C12155 +
           (C8633 * C1183 + C8565 * C1415 + C8634 * C2711 + C8566 * C2982) *
               C12051) *
              C19721 * C19769 * C19755 * C84 -
          ((C11294 + C11295) * C12051 + (C10867 + C10868) * C12155 +
           (C9007 + C9006) * C12050 + (C8653 + C8652) * C12154) *
              C19721 * C19769 * C19755 * C85 +
          ((C8659 + C8658) * C12154 + (C9009 + C9008) * C12050 +
           (C8633 * C1069 + C8565 * C1131 + C8634 * C2595 + C8566 * C2657) *
               C12155 +
           (C8633 * C1181 + C8565 * C1413 + C8634 * C2713 + C8566 * C2984) *
               C12051) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8633 * C93 + C8565 * C156 + C8634 * C630 + C8566 * C692) * C12154 +
           (C8633 * C223 + C8565 * C498 + C8634 * C742 + C8566 * C974) *
               C12050 +
           (C8633 * C1071 + C8565 * C1133 + C8634 * C2593 + C8566 * C2655) *
               C12155 +
           (C8633 * C1183 + C8565 * C1415 + C8634 * C2711 + C8566 * C2982) *
               C12051) *
              C19721 * C19769 * C624 -
          ((C8634 * C4027 + C8566 * C4241 + C8633 * C2711 + C8565 * C2982) *
               C12051 +
           (C8634 * C3930 + C8566 * C3983 + C8633 * C2593 + C8565 * C2655) *
               C12155 +
           (C8634 * C743 + C8566 * C975 + C8633 * C742 + C8565 * C974) *
               C12050 +
           (C8634 * C631 + C8566 * C693 + C8633 * C630 + C8565 * C692) *
               C12154) *
              C19721 * C19769 * C625 +
          ((C8633 * C631 + C8565 * C693 + C8634 * C3451 + C8566 * C3515) *
               C12154 +
           (C8633 * C743 + C8565 * C975 + C8634 * C3557 + C8566 * C3833) *
               C12050 +
           (C8633 * C3930 + C8565 * C3983 + C8634 * C5328 + C8566 * C5394) *
               C12155 +
           (C8633 * C4027 + C8565 * C4241 + C8634 * C5446 + C8566 * C5749) *
               C12051) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                     C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                        C8565 +
                    (C12500 * C630 + C12985 + C12985 + C12050 * C1018 +
                     C12501 * C2593 + C12984 + C12984 + C12051 * C3035) *
                        C8566) *
                       C19721 * C19769 * C19755 * C84 -
                   ((C14158 + C14159) * C8566 + (C12528 + C12527) * C8565) *
                       C19721 * C19769 * C19755 * C85 +
                   ((C12530 + C12529) * C8565 +
                    (C12500 * C628 + C14152 + C14152 + C12050 * C1016 +
                     C12501 * C2595 + C14153 + C14153 + C12051 * C3037) *
                        C8566) *
                       C19721 * C19769 * C19755 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                     C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                        C8565 +
                    (C16397 + C16398) * C8566) *
                       C19721 * C19769 * C624 -
                   ((C16399 + C16400) * C8566 + (C16398 + C16397) * C8565) *
                       C19721 * C19769 * C625 +
                   ((C16400 + C16399) * C8565 +
                    (C12500 * C3451 + C16387 + C16387 + C12050 * C3873 +
                     C12501 * C5328 + C16388 + C16388 + C12051 * C5800) *
                        C8566) *
                       C19721 * C19769 * C626) *
                  C19743) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
            C3475 * C3081 + C3476 * C3082) *
               C19769 * C1519 -
           (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C19769 * C1520) *
              C1521 +
          ((C4353 * C3080 + C4354 * C3081 +
            (C3083 * C4338 + C4346 + C4346 + C19721 * C4340) * C19805 * C3082) *
               C19769 * C1520 -
           (C4354 * C3082 + C4353 * C3081 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C19805 * C19794 * C19769 * C1519 -
           (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
            C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
               C19805 * C19794 * C19769 * C1520) *
              C1521 +
          ((C87 * C629 + C1527 + C1527 + C77 * C641 + C89 * C628 + C1528 +
            C1528 + C78 * C640 + C91 * C1523 + C1529 + C1529 + C79 * C1525) *
               C19805 * C19794 * C19769 * C1520 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C19805 * C19794 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
            C6585 * C5851 + C6586 * C5852) *
               C19794 * C19769 * C1519 -
           ((C3083 * C3931 + C3944 + C3944 + C19721 * C3937) * C5852 +
            C5342 * C5851 + C3472 * C5850) *
               C19794 * C19769 * C1520) *
              C1521 +
          ((C4351 * C5850 +
            (C3083 * C2594 + C4863 + C4863 + C19721 * C2600) * C5851 +
            (C3083 * C7055 + C7059 + C7059 + C19721 * C7057) * C5852) *
               C19794 * C19769 * C1520 -
           ((C3083 * C1073 + C5854 + C5854 + C19721 * C1085) * C5852 +
            (C3083 * C1070 + C4862 + C4862 + C19721 * C1082) * C5851 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C5850) *
               C19794 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexy[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C3084 +
                      (C3132 * C98 + C3080 * C161 + C3133 * C636 +
                       C3081 * C698 + C3134 * C637 + C3082 * C699) *
                          C19721) *
                         C19805 * C19769 * C1519 -
                     ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                       C3081 * C699 + C3132 * C636 + C3080 * C698) *
                          C19721 +
                      (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                       C3081 * C693 + C3132 * C630 + C3080 * C692) *
                          C3084) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    (((C3132 * C629 + C3080 * C691 + C3133 * C632 +
                       C3081 * C694 + C3134 * C4338 + C3082 * C4404) *
                          C3084 +
                      (C3132 * C635 + C3080 * C697 + C3133 * C638 +
                       C3081 * C700 + C3134 * C4339 + C3082 * C4405) *
                          C19721) *
                         C19805 * C19769 * C1520 -
                     ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                       C3081 * C697 + C3132 * C99 + C3080 * C162) *
                          C19721 +
                      (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                       C3081 * C691 + C3132 * C94 + C3080 * C157) *
                          C3084) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C88 +
                      (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C19805 * C19769 * C1519 -
                     (C1590 * C79 + C1591 * C92 + C1592 * C78 + C1593 * C90 +
                      (C155 * C636 + C19794 * C698) * C77 +
                      (C155 * C630 + C19794 * C692) * C88) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    ((C1593 * C88 + C1592 * C77 + C1591 * C90 + C1590 * C78 +
                      (C155 * C1523 + C19794 * C1579) * C92 +
                      (C155 * C1524 + C19794 * C1580) * C79) *
                         C19805 * C19769 * C1520 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C3084 +
                       (C155 * C98 + C19794 * C161) * C19721) *
                          C5850 +
                      (C6648 + C6649) * C5851 + C6654 * C5852) *
                         C19769 * C1519 -
                     (((C155 * C3934 + C19794 * C3987) * C19721 +
                       (C155 * C3931 + C19794 * C3984) * C3084) *
                          C5852 +
                      ((C155 * C2596 + C19794 * C2658) * C19721 +
                       (C155 * C2593 + C19794 * C2655) * C3084) *
                          C5851 +
                      ((C155 * C636 + C19794 * C698) * C19721 +
                       (C155 * C630 + C19794 * C692) * C3084) *
                          C5850) *
                         C19769 * C1520) *
                        C1521 +
                    (((C1593 * C3084 + C1592 * C19721) * C5850 +
                      ((C155 * C2594 + C19794 * C2656) * C3084 +
                       (C155 * C2597 + C19794 * C2659) * C19721) *
                          C5851 +
                      ((C155 * C7055 + C19794 * C7109) * C3084 +
                       (C155 * C7056 + C19794 * C7110) * C19721) *
                          C5852) *
                         C19769 * C1520 -
                     (((C155 * C1079 + C19794 * C1141) * C19721 +
                       (C155 * C1073 + C19794 * C1135) * C3084) *
                          C5852 +
                      (C2128 * C19721 + C2129 * C3084) * C5851 +
                      (C180 * C19721 + C179 * C3084) * C5850) *
                         C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C3084 +
                       (C222 * C98 + C19805 * C228) * C19721) *
                          C3080 +
                      (C3580 + C3581) * C3081 + C3586 * C3082) *
                         C19769 * C1519 -
                     ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                      (C3581 + C3580) * C3080) *
                         C19769 * C1520) *
                        C1521 +
                    (((C4459 + C4460) * C3080 + (C4467 + C4468) * C3081 +
                      ((C222 * C4338 + C19805 * C4456) * C3084 +
                       (C222 * C4339 + C19805 * C4457) * C19721) *
                          C3082) *
                         C19769 * C1520 -
                     ((C4468 + C4467) * C3082 + (C4460 + C4459) * C3081 +
                      (C247 * C19721 + C246 * C3084) * C3080) *
                         C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C88 +
                      (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C19794 * C19769 * C1519 -
                     (C1654 * C79 + C1655 * C92 + C1656 * C78 + C1657 * C90 +
                      (C222 * C636 + C19805 * C748) * C77 +
                      (C222 * C630 + C19805 * C742) * C88) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    ((C1657 * C88 + C1656 * C77 + C1655 * C90 + C1654 * C78 +
                      (C222 * C1523 + C19805 * C1643) * C92 +
                      (C222 * C1524 + C19805 * C1644) * C79) *
                         C19794 * C19769 * C1520 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                       C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                          C3084 +
                      (C5932 * C98 + C5850 * C228 + C5933 * C1077 +
                       C5851 * C1189 + C5934 * C1078 + C5852 * C1190) *
                          C19721) *
                         C19794 * C19769 * C1519 -
                     ((C5934 * C3934 + C5852 * C4031 + C5933 * C2596 +
                       C5851 * C2714 + C5932 * C636 + C5850 * C748) *
                          C19721 +
                      (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 +
                       C5851 * C2711 + C5932 * C630 + C5850 * C742) *
                          C3084) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    (((C5932 * C629 + C5850 * C741 + C5933 * C2594 +
                       C5851 * C2712 + C5934 * C7055 + C5852 * C7161) *
                          C3084 +
                      (C5932 * C635 + C5850 * C747 + C5933 * C2597 +
                       C5851 * C2715 + C5934 * C7056 + C5852 * C7162) *
                          C19721) *
                         C19794 * C19769 * C1520 -
                     ((C5934 * C1079 + C5852 * C1191 + C5933 * C1076 +
                       C5851 * C1188 + C5932 * C99 + C5850 * C229) *
                          C19721 +
                      (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 +
                       C5851 * C1182 + C5932 * C94 + C5850 * C224) *
                          C3084) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C3132 +
                      (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                      C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                         C19805 * C19769 * C1519 -
                     (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                      C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    ((C4528 * C3132 + C4529 * C3080 + C4530 * C3133 +
                      C4531 * C3081 + (C3084 * C4338 + C19721 * C4339) * C3134 +
                      (C3084 * C4404 + C19721 * C4518) * C3082) *
                         C19805 * C19769 * C1520 -
                     (C4531 * C3082 + C4530 * C3134 + C4529 * C3081 +
                      C4528 * C3133 + (C3084 * C157 + C19721 * C290) * C3080 +
                      (C3084 * C94 + C19721 * C99) * C3132) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C19794) *
                         C19805 * C19769 * C1519 -
                     ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                       C88 * C692 + C77 * C792) *
                          C19794 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C155) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    (((C88 * C629 + C77 * C635 + C90 * C628 + C78 * C634 +
                       C92 * C1523 + C79 * C1524) *
                          C155 +
                      (C88 * C691 + C77 * C791 + C90 * C690 + C78 * C790 +
                       C92 * C1579 + C79 * C1707) *
                          C19794) *
                         C19805 * C19769 * C1520 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C19794 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C155 +
                       (C3084 * C156 + C19721 * C289) * C19794) *
                          C5850 +
                      (C6755 + C6756) * C5851 + C6761 * C5852) *
                         C19769 * C1519 -
                     (((C3084 * C3984 + C19721 * C4072) * C19794 +
                       (C3084 * C3931 + C19721 * C3934) * C155) *
                          C5852 +
                      (C5526 * C19794 + C5527 * C155) * C5851 +
                      (C3640 * C19794 + C3639 * C155) * C5850) *
                         C19769 * C1520) *
                        C1521 +
                    (((C4528 * C155 + C4529 * C19794) * C5850 +
                      ((C3084 * C2594 + C19721 * C2597) * C155 +
                       (C3084 * C2656 + C19721 * C2768) * C19794) *
                          C5851 +
                      ((C3084 * C7055 + C19721 * C7056) * C155 +
                       (C3084 * C7109 + C19721 * C7213) * C19794) *
                          C5852) *
                         C19769 * C1520 -
                     (((C3084 * C1135 + C19721 * C1235) * C19794 +
                       (C3084 * C1073 + C19721 * C1079) * C155) *
                          C5852 +
                      ((C3084 * C1132 + C19721 * C1232) * C19794 +
                       (C3084 * C1070 + C19721 * C1076) * C155) *
                          C5851 +
                      ((C3084 * C157 + C19721 * C290) * C19794 +
                       (C3084 * C94 + C19721 * C99) * C155) *
                          C5850) *
                         C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
            C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 +
            C3082 * C837) *
               C19721 * C19805 * C19769 * C1519 -
           (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
            C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
            C3080 * C836) *
               C19721 * C19805 * C19769 * C1520) *
              C1521 +
          ((C3249 * C629 + C4583 + C4583 + C3080 * C835 + C3250 * C632 + C4584 +
            C4584 + C3081 * C838 + C3251 * C4338 + C4585 + C4585 +
            C3082 * C4581) *
               C19721 * C19805 * C19769 * C1520 -
           (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
            C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
               C19721 * C19805 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C19805 * C19769 * C1519 -
           (C1769 * C79 + C1770 * C78 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
               C19805 * C19769 * C1520) *
              C1521 +
          ((C1770 * C77 + C1769 * C78 +
            (C332 * C1523 + C1764 + C1764 + C19794 * C1758) * C79) *
               C19805 * C19769 * C1520 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
            C6819 * C5851 + C6820 * C5852) *
               C19769 * C1519 -
           ((C332 * C3931 + C6366 + C6366 + C19794 * C4113) * C19721 * C5852 +
            (C332 * C2593 + C2824 + C2824 + C19794 * C2820) * C19721 * C5851 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C19721 * C5850) *
               C19769 * C1520) *
              C1521 +
          ((C1770 * C19721 * C5850 +
            (C332 * C2594 + C2825 + C2825 + C19794 * C2821) * C19721 * C5851 +
            (C332 * C7055 + C7266 + C7266 + C19794 * C7264) * C19721 * C5852) *
               C19769 * C1520 -
           ((C332 * C1073 + C1286 + C1286 + C19794 * C1279) * C19721 * C5852 +
            C2306 * C19721 * C5851 + C356 * C19721 * C5850) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3132 +
            (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
            C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
               C19721 * C19769 * C1519 -
           (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 + C3576 * C3133 +
            C3737 * C3080 + C3574 * C3132) *
               C19721 * C19769 * C1520) *
              C1521 +
          ((C1657 * C3132 + C1829 * C3080 + C4465 * C3133 + C4639 * C3081 +
            (C222 * C4338 + C19805 * C4456) * C3134 +
            (C222 * C4404 + C19805 * C4635) * C3082) *
               C19721 * C19769 * C1520 -
           (C4639 * C3082 + C4465 * C3134 + C1829 * C3081 + C1657 * C3133 +
            C411 * C3080 + C246 * C3132) *
               C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C155 +
             (C222 * C156 + C19805 * C396) * C19794) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C19769 * C1519 -
           ((C1830 + C1824) * C79 + (C1831 + C1827) * C78 +
            ((C222 * C692 + C19805 * C886) * C19794 +
             (C222 * C630 + C19805 * C742) * C155) *
                C77) *
               C19769 * C1520) *
              C1521 +
          (((C1827 + C1831) * C77 + (C1824 + C1830) * C78 +
            ((C222 * C1523 + C19805 * C1643) * C155 +
             (C222 * C1579 + C19805 * C1820) * C19794) *
                C79) *
               C19769 * C1520 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
             C5934 * C1072 + C5852 * C1184) *
                C155 +
            (C5932 * C156 + C5850 * C396 + C5933 * C1133 + C5851 * C1327 +
             C5934 * C1134 + C5852 * C1328) *
                C19794) *
               C19721 * C19769 * C1519 -
           ((C5934 * C3984 + C5852 * C4160 + C5933 * C2655 + C5851 * C2876 +
             C5932 * C692 + C5850 * C886) *
                C19794 +
            (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 + C5851 * C2711 +
             C5932 * C630 + C5850 * C742) *
                C155) *
               C19721 * C19769 * C1520) *
              C1521 +
          (((C5932 * C629 + C5850 * C741 + C5933 * C2594 + C5851 * C2712 +
             C5934 * C7055 + C5852 * C7161) *
                C155 +
            (C5932 * C691 + C5850 * C885 + C5933 * C2656 + C5851 * C2877 +
             C5934 * C7109 + C5852 * C7316) *
                C19794) *
               C19721 * C19769 * C1520 -
           ((C5934 * C1135 + C5852 * C1329 + C5933 * C1132 + C5851 * C1326 +
             C5932 * C157 + C5850 * C397) *
                C19794 +
            (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 + C5851 * C1182 +
             C5932 * C94 + C5850 * C224) *
                C155) *
               C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezx[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C222 +
                       (C3084 * C223 + C19721 * C455) * C19805) *
                          C3080 +
                      (C3780 + C3792) * C3081 + C3795 * C3082) *
                         C19769 * C1519 -
                     ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                      (C3792 + C3780) * C3080) *
                         C19769 * C1520) *
                        C1521 +
                    (((C4691 + C4699) * C3080 + (C4694 + C4700) * C3081 +
                      ((C3084 * C4338 + C19721 * C4339) * C222 +
                       (C3084 * C4456 + C19721 * C4689) * C19805) *
                          C3082) *
                         C19769 * C1520 -
                     ((C4700 + C4694) * C3082 + (C4699 + C4691) * C3081 +
                      ((C3084 * C224 + C19721 * C456) * C19805 +
                       (C3084 * C94 + C19721 * C99) * C222) *
                          C3080) *
                         C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C19805) *
                         C19794 * C19769 * C1519 -
                     ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                       C88 * C742 + C77 * C930) *
                          C19805 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C222) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    (((C88 * C629 + C77 * C635 + C90 * C628 + C78 * C634 +
                       C92 * C1523 + C79 * C1524) *
                          C222 +
                      (C88 * C741 + C77 * C929 + C90 * C740 + C78 * C928 +
                       C92 * C1643 + C79 * C1881) *
                          C19805) *
                         C19794 * C19769 * C1520 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C19805 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C5932 +
                      (C3084 * C223 + C19721 * C455) * C5850 + C6749 * C5933 +
                      C6908 * C5851 + C6751 * C5934 + C6909 * C5852) *
                         C19794 * C19769 * C1519 -
                     ((C3084 * C4028 + C19721 * C4201) * C5852 +
                      (C3084 * C3931 + C19721 * C3934) * C5934 + C5697 * C5851 +
                      C5527 * C5933 + C3789 * C5850 + C3639 * C5932) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    ((C4528 * C5932 + C4697 * C5850 +
                      (C3084 * C2594 + C19721 * C2597) * C5933 +
                      (C3084 * C2712 + C19721 * C2930) * C5851 +
                      (C3084 * C7055 + C19721 * C7056) * C5934 +
                      (C3084 * C7161 + C19721 * C7367) * C5852) *
                         C19794 * C19769 * C1520 -
                     ((C3084 * C1185 + C19721 * C1373) * C5852 +
                      (C3084 * C1073 + C19721 * C1079) * C5934 +
                      (C3084 * C1182 + C19721 * C1370) * C5851 +
                      (C3084 * C1070 + C19721 * C1076) * C5933 +
                      (C3084 * C224 + C19721 * C456) * C5850 +
                      (C3084 * C94 + C19721 * C99) * C5932) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
             C3134 * C631 + C3082 * C693) *
                C222 +
            (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
             C3134 * C743 + C3082 * C975) *
                C19805) *
               C19721 * C19769 * C1519 -
           ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 + C3081 * C975 +
             C3132 * C742 + C3080 * C974) *
                C19805 +
            (C3134 * C3451 + C3082 * C3515 + C3133 * C631 + C3081 * C693 +
             C3132 * C630 + C3080 * C692) *
                C222) *
               C19721 * C19769 * C1520) *
              C1521 +
          (((C3132 * C629 + C3080 * C691 + C3133 * C632 + C3081 * C694 +
             C3134 * C4338 + C3082 * C4404) *
                C222 +
            (C3132 * C741 + C3080 * C973 + C3133 * C744 + C3081 * C976 +
             C3134 * C4456 + C3082 * C4750) *
                C19805) *
               C19721 * C19769 * C1520 -
           ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
             C3132 * C224 + C3080 * C499) *
                C19805 +
            (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
             C3132 * C94 + C3080 * C157) *
                C222) *
               C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C19794 * C156) * C222 +
             (C155 * C223 + C19794 * C498) * C19805) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C19769 * C1519 -
           ((C1942 + C1936) * C79 + (C1943 + C1939) * C78 +
            ((C155 * C742 + C19794 * C974) * C19805 +
             (C155 * C630 + C19794 * C692) * C222) *
                C77) *
               C19769 * C1520) *
              C1521 +
          (((C1939 + C1943) * C77 + (C1936 + C1942) * C78 +
            ((C155 * C1523 + C19794 * C1579) * C222 +
             (C155 * C1643 + C19794 * C1932) * C19805) *
                C79) *
               C19769 * C1520 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C5932 +
            (C155 * C223 + C19794 * C498) * C5850 + C6642 * C5933 +
            C6957 * C5851 + C6644 * C5934 + C6958 * C5852) *
               C19721 * C19769 * C1519 -
           ((C155 * C4028 + C19794 * C4242) * C5852 +
            (C155 * C3931 + C19794 * C3984) * C5934 +
            (C155 * C2711 + C19794 * C2982) * C5851 +
            (C155 * C2593 + C19794 * C2655) * C5933 +
            (C155 * C742 + C19794 * C974) * C5850 +
            (C155 * C630 + C19794 * C692) * C5932) *
               C19721 * C19769 * C1520) *
              C1521 +
          ((C1593 * C5932 + C1941 * C5850 +
            (C155 * C2594 + C19794 * C2656) * C5933 +
            (C155 * C2712 + C19794 * C2983) * C5851 +
            (C155 * C7055 + C19794 * C7109) * C5934 +
            (C155 * C7161 + C19794 * C7418) * C5852) *
               C19721 * C19769 * C1520 -
           ((C155 * C1185 + C19794 * C1417) * C5852 +
            (C155 * C1073 + C19794 * C1135) * C5934 + C2477 * C5851 +
            C2129 * C5933 + C513 * C5850 + C179 * C5932) *
               C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
            C3891 * C3082) *
               C19721 * C19769 * C1519 -
           (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C19769 *
               C1520) *
              C1521 +
          ((C2005 * C3080 + C4808 * C3081 +
            (C557 * C4338 + C4805 + C4805 + C19805 * C4801) * C3082) *
               C19721 * C19769 * C1520 -
           (C4808 * C3082 + C2005 * C3081 + C581 * C3080) * C19721 * C19769 *
               C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
            C584 * C78 + C585 * C79) *
               C19769 * C1519 -
           (C2006 * C79 + C2007 * C78 +
            (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
               C19769 * C1520) *
              C1521 +
          ((C2007 * C77 + C2006 * C78 +
            (C557 * C1523 + C1999 + C1999 + C19805 * C1993) * C19794 * C79) *
               C19769 * C1520 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
            C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
            C5852 * C1460) *
               C19794 * C19721 * C19769 * C1519 -
           (C6165 * C3931 + C6521 + C6521 + C5852 * C4283 + C6164 * C2593 +
            C6522 + C6522 + C5851 * C3035 + C6163 * C630 + C6523 + C6523 +
            C5850 * C1018) *
               C19794 * C19721 * C19769 * C1520) *
              C1521 +
          ((C6163 * C629 + C7471 + C7471 + C5850 * C1017 + C6164 * C2594 +
            C7472 + C7472 + C5851 * C3036 + C6165 * C7055 + C7473 + C7473 +
            C5852 * C7469) *
               C19794 * C19721 * C19769 * C1520 -
           (C6165 * C1073 + C6170 + C6170 + C5852 * C1461 + C6164 * C1070 +
            C6171 + C6171 + C5851 * C1458 + C6163 * C94 + C6172 + C6172 +
            C5850 * C559) *
               C19794 * C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
            C3475 * C3081 + C3476 * C3082) *
               C2057 -
           (C5343 * C3082 + C5344 * C3081 +
            (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C19805 * C3080) *
               C2058) *
              C1519 +
          ((C5344 * C3080 + C5343 * C3081 +
            (C3083 * C5328 + C5336 + C5336 + C19721 * C5330) * C19805 * C3082) *
               C2058 -
           (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C19805 * C19794 * C2057 -
           (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
            C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
               C19805 * C19794 * C2058) *
              C1519 +
          ((C87 * C2593 + C2603 + C2603 + C77 * C2599 + C89 * C2594 + C2604 +
            C2604 + C78 * C2600 + C91 * C2595 + C2605 + C2605 + C79 * C2601) *
               C19805 * C19794 * C2058 -
           (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
            C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
               C19805 * C19794 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
            C6585 * C5851 + C6586 * C5852) *
               C19794 * C2057 -
           (C6587 * C5852 + C6586 * C5851 + C6585 * C5850) * C19794 * C2058) *
              C1519 +
          ((C5342 * C5850 + C8052 * C5851 +
            (C3083 * C8043 + C8049 + C8049 + C19721 * C8045) * C5852) *
               C19794 * C2058 -
           (C8052 * C5852 + C5342 * C5851 + C3472 * C5850) * C19794 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C3084 +
                      (C3132 * C98 + C3080 * C161 + C3133 * C636 +
                       C3081 * C698 + C3134 * C637 + C3082 * C699) *
                          C19721) *
                         C19805 * C2057 -
                     ((C3134 * C3933 + C3082 * C3986 + C3133 * C2596 +
                       C3081 * C2658 + C3132 * C1077 + C3080 * C1139) *
                          C19721 +
                      (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                       C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                          C3084) *
                         C19805 * C2058) *
                        C1519 +
                    (((C3132 * C2593 + C3080 * C2655 + C3133 * C3930 +
                       C3081 * C3983 + C3134 * C5328 + C3082 * C5394) *
                          C3084 +
                      (C3132 * C2596 + C3080 * C2658 + C3133 * C3933 +
                       C3081 * C3986 + C3134 * C5329 + C3082 * C5395) *
                          C19721) *
                         C19805 * C2058 -
                     ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                       C3081 * C699 + C3132 * C636 + C3080 * C698) *
                          C19721 +
                      (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                       C3081 * C693 + C3132 * C630 + C3080 * C692) *
                          C3084) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C88 +
                      (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C19805 * C2057 -
                     (C2126 * C79 + C2127 * C92 + C2128 * C78 + C2129 * C90 +
                      (C155 * C1077 + C19794 * C1139) * C77 +
                      (C155 * C1071 + C19794 * C1133) * C88) *
                         C19805 * C2058) *
                        C1519 +
                    (((C155 * C2593 + C19794 * C2655) * C88 +
                      (C155 * C2596 + C19794 * C2658) * C77 +
                      (C155 * C2594 + C19794 * C2656) * C90 +
                      (C155 * C2597 + C19794 * C2659) * C78 +
                      (C155 * C2595 + C19794 * C2657) * C92 +
                      (C155 * C2598 + C19794 * C2660) * C79) *
                         C19805 * C2058 -
                     (C1590 * C79 + C1591 * C92 + C1592 * C78 + C1593 * C90 +
                      (C155 * C636 + C19794 * C698) * C77 +
                      (C155 * C630 + C19794 * C692) * C88) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C3084 +
                       (C155 * C98 + C19794 * C161) * C19721) *
                          C5850 +
                      (C6648 + C6649) * C5851 + C6654 * C5852) *
                         C2057 -
                     ((C6652 + C6653) * C5852 + (C6651 + C6650) * C5851 +
                      (C6649 + C6648) * C5850) *
                         C2058) *
                        C1519 +
                    (((C8117 + C8118) * C5850 + (C8119 + C8120) * C5851 +
                      ((C155 * C8043 + C19794 * C8102) * C3084 +
                       (C155 * C8044 + C19794 * C8103) * C19721) *
                          C5852) *
                         C2058 -
                     ((C8120 + C8119) * C5852 + (C8118 + C8117) * C5851 +
                      ((C155 * C636 + C19794 * C698) * C19721 +
                       (C155 * C630 + C19794 * C692) * C3084) *
                          C5850) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C3084 +
                       (C222 * C98 + C19805 * C228) * C19721) *
                          C3080 +
                      (C3580 + C3581) * C3081 + C3586 * C3082) *
                         C2057 -
                     ((C5461 + C5462) * C3082 + (C5463 + C5464) * C3081 +
                      ((C222 * C1077 + C19805 * C1189) * C19721 +
                       (C222 * C1071 + C19805 * C1183) * C3084) *
                          C3080) *
                         C2058) *
                        C1519 +
                    (((C5464 + C5463) * C3080 + (C5462 + C5461) * C3081 +
                      ((C222 * C5328 + C19805 * C5446) * C3084 +
                       (C222 * C5329 + C19805 * C5447) * C19721) *
                          C3082) *
                         C2058 -
                     ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                      (C3581 + C3580) * C3080) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C88 +
                      (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C19794 * C2057 -
                     (C2190 * C79 + C2191 * C92 + C2192 * C78 + C2193 * C90 +
                      (C222 * C1077 + C19805 * C1189) * C77 +
                      (C222 * C1071 + C19805 * C1183) * C88) *
                         C19794 * C2058) *
                        C1519 +
                    (((C222 * C2593 + C19805 * C2711) * C88 +
                      (C222 * C2596 + C19805 * C2714) * C77 +
                      (C222 * C2594 + C19805 * C2712) * C90 +
                      (C222 * C2597 + C19805 * C2715) * C78 +
                      (C222 * C2595 + C19805 * C2713) * C92 +
                      (C222 * C2598 + C19805 * C2716) * C79) *
                         C19794 * C2058 -
                     (C1654 * C79 + C1655 * C92 + C1656 * C78 + C1657 * C90 +
                      (C222 * C636 + C19805 * C748) * C77 +
                      (C222 * C630 + C19805 * C742) * C88) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                       C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                          C3084 +
                      (C5932 * C98 + C5850 * C228 + C5933 * C1077 +
                       C5851 * C1189 + C5934 * C1078 + C5852 * C1190) *
                          C19721) *
                         C19794 * C2057 -
                     ((C5934 * C6566 + C5852 * C6694 + C5933 * C1078 +
                       C5851 * C1190 + C5932 * C1077 + C5850 * C1189) *
                          C19721 +
                      (C5934 * C6564 + C5852 * C6692 + C5933 * C1072 +
                       C5851 * C1184 + C5932 * C1071 + C5850 * C1183) *
                          C3084) *
                         C19794 * C2058) *
                        C1519 +
                    (((C5932 * C2593 + C5850 * C2711 + C5933 * C3931 +
                       C5851 * C4028 + C5934 * C8043 + C5852 * C8170) *
                          C3084 +
                      (C5932 * C2596 + C5850 * C2714 + C5933 * C3934 +
                       C5851 * C4031 + C5934 * C8044 + C5852 * C8171) *
                          C19721) *
                         C19794 * C2058 -
                     ((C5934 * C3934 + C5852 * C4031 + C5933 * C2596 +
                       C5851 * C2714 + C5932 * C636 + C5850 * C748) *
                          C19721 +
                      (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 +
                       C5851 * C2711 + C5932 * C630 + C5850 * C742) *
                          C3084) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C3132 +
                      (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                      C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                         C19805 * C2057 -
                     (C5524 * C3082 + C5525 * C3134 + C5526 * C3081 +
                      C5527 * C3133 + (C3084 * C1133 + C19721 * C1233) * C3080 +
                      (C3084 * C1071 + C19721 * C1077) * C3132) *
                         C19805 * C2058) *
                        C1519 +
                    ((C5527 * C3132 + C5526 * C3080 + C5525 * C3133 +
                      C5524 * C3081 + (C3084 * C5328 + C19721 * C5329) * C3134 +
                      (C3084 * C5394 + C19721 * C5514) * C3082) *
                         C19805 * C2058 -
                     (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                      C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C19794) *
                         C19805 * C2057 -
                     ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                       C88 * C1133 + C77 * C1233) *
                          C19794 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C155) *
                         C19805 * C2058) *
                        C1519 +
                    (((C88 * C2593 + C77 * C2596 + C90 * C2594 + C78 * C2597 +
                       C92 * C2595 + C79 * C2598) *
                          C155 +
                      (C88 * C2655 + C77 * C2767 + C90 * C2656 + C78 * C2768 +
                       C92 * C2657 + C79 * C2769) *
                          C19794) *
                         C19805 * C2058 -
                     ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                       C88 * C692 + C77 * C792) *
                          C19794 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C155) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C155 +
                       (C3084 * C156 + C19721 * C289) * C19794) *
                          C5850 +
                      (C6755 + C6756) * C5851 + C6761 * C5852) *
                         C2057 -
                     ((C6759 + C6760) * C5852 + (C6758 + C6757) * C5851 +
                      (C6756 + C6755) * C5850) *
                         C2058) *
                        C1519 +
                    (((C8224 + C8225) * C5850 + (C8232 + C8233) * C5851 +
                      ((C3084 * C8043 + C19721 * C8044) * C155 +
                       (C3084 * C8102 + C19721 * C8222) * C19794) *
                          C5852) *
                         C2058 -
                     ((C8233 + C8232) * C5852 + (C8225 + C8224) * C5851 +
                      (C3640 * C19794 + C3639 * C155) * C5850) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
            C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 +
            C3082 * C837) *
               C19721 * C19805 * C2057 -
           (C3251 * C3930 + C4116 + C4116 + C3082 * C4112 + C3250 * C2593 +
            C4117 + C4117 + C3081 * C2820 + C3249 * C1071 + C4118 + C4118 +
            C3080 * C1277) *
               C19721 * C19805 * C2058) *
              C1519 +
          ((C3249 * C2593 + C5579 + C5579 + C3080 * C2820 + C3250 * C3930 +
            C5580 + C5580 + C3081 * C4112 + C3251 * C5328 + C5581 + C5581 +
            C3082 * C5577) *
               C19721 * C19805 * C2058 -
           (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
            C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
            C3080 * C836) *
               C19721 * C19805 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C19805 * C2057 -
           (C2305 * C79 + C2306 * C78 +
            (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C77) *
               C19805 * C2058) *
              C1519 +
          (((C332 * C2593 + C2824 + C2824 + C19794 * C2820) * C77 +
            (C332 * C2594 + C2825 + C2825 + C19794 * C2821) * C78 +
            (C332 * C2595 + C2826 + C2826 + C19794 * C2822) * C79) *
               C19805 * C2058 -
           (C1769 * C79 + C1770 * C78 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
               C19805 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
            C6819 * C5851 + C6820 * C5852) *
               C2057 -
           (C6821 * C5852 + C6820 * C5851 + C6819 * C5850) * C2058) *
              C1519 +
          ((C8296 * C5850 + C8297 * C5851 +
            (C332 * C8043 + C8289 + C8289 + C19794 * C8283) * C19721 * C5852) *
               C2058 -
           (C8297 * C5852 + C8296 * C5851 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C19721 * C5850) *
               C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3132 +
                      (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
                      C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
                         C19721 * C2057 -
                     (C5637 * C3082 + C5458 * C3134 + C5638 * C3081 +
                      C5460 * C3133 + (C222 * C1133 + C19805 * C1327) * C3080 +
                      (C222 * C1071 + C19805 * C1183) * C3132) *
                         C19721 * C2058) *
                        C1519 +
                    ((C5460 * C3132 + C5638 * C3080 + C5458 * C3133 +
                      C5637 * C3081 + (C222 * C5328 + C19805 * C5446) * C3134 +
                      (C222 * C5394 + C19805 * C5631) * C3082) *
                         C19721 * C2058 -
                     (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 +
                      C3576 * C3133 + C3737 * C3080 + C3574 * C3132) *
                         C19721 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C155 +
                       (C222 * C156 + C19805 * C396) * C19794) *
                          C77 +
                      (C402 + C414) * C78 + C417 * C79) *
                         C2057 -
                     ((C2366 + C2360) * C79 + (C2367 + C2363) * C78 +
                      ((C222 * C1133 + C19805 * C1327) * C19794 +
                       (C222 * C1071 + C19805 * C1183) * C155) *
                          C77) *
                         C2058) *
                        C1519 +
                    ((((C222 * C2593 + C19805 * C2711) * C155 +
                       (C222 * C2655 + C19805 * C2876) * C19794) *
                          C77 +
                      ((C222 * C2594 + C19805 * C2712) * C155 +
                       (C222 * C2656 + C19805 * C2877) * C19794) *
                          C78 +
                      ((C222 * C2595 + C19805 * C2713) * C155 +
                       (C222 * C2657 + C19805 * C2878) * C19794) *
                          C79) *
                         C2058 -
                     ((C1830 + C1824) * C79 + (C1831 + C1827) * C78 +
                      ((C222 * C692 + C19805 * C886) * C19794 +
                       (C222 * C630 + C19805 * C742) * C155) *
                          C77) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                       C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                          C155 +
                      (C5932 * C156 + C5850 * C396 + C5933 * C1133 +
                       C5851 * C1327 + C5934 * C1134 + C5852 * C1328) *
                          C19794) *
                         C19721 * C2057 -
                     ((C5934 * C6625 + C5852 * C6859 + C5933 * C1134 +
                       C5851 * C1328 + C5932 * C1133 + C5850 * C1327) *
                          C19794 +
                      (C5934 * C6564 + C5852 * C6692 + C5933 * C1072 +
                       C5851 * C1184 + C5932 * C1071 + C5850 * C1183) *
                          C155) *
                         C19721 * C2058) *
                        C1519 +
                    (((C5932 * C2593 + C5850 * C2711 + C5933 * C3931 +
                       C5851 * C4028 + C5934 * C8043 + C5852 * C8170) *
                          C155 +
                      (C5932 * C2655 + C5850 * C2876 + C5933 * C3984 +
                       C5851 * C4160 + C5934 * C8102 + C5852 * C8347) *
                          C19794) *
                         C19721 * C2058 -
                     ((C5934 * C3984 + C5852 * C4160 + C5933 * C2655 +
                       C5851 * C2876 + C5932 * C692 + C5850 * C886) *
                          C19794 +
                      (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 +
                       C5851 * C2711 + C5932 * C630 + C5850 * C742) *
                          C155) *
                         C19721 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C222 +
                       (C3084 * C223 + C19721 * C455) * C19805) *
                          C3080 +
                      (C3780 + C3792) * C3081 + C3795 * C3082) *
                         C2057 -
                     ((C5698 + C5692) * C3082 + (C5699 + C5695) * C3081 +
                      ((C3084 * C1183 + C19721 * C1371) * C19805 +
                       (C3084 * C1071 + C19721 * C1077) * C222) *
                          C3080) *
                         C2058) *
                        C1519 +
                    (((C5695 + C5699) * C3080 + (C5692 + C5698) * C3081 +
                      ((C3084 * C5328 + C19721 * C5329) * C222 +
                       (C3084 * C5446 + C19721 * C5688) * C19805) *
                          C3082) *
                         C2058 -
                     ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                      (C3792 + C3780) * C3080) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C19805) *
                         C19794 * C2057 -
                     ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                       C88 * C1183 + C77 * C1371) *
                          C19805 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C222) *
                         C19794 * C2058) *
                        C1519 +
                    (((C88 * C2593 + C77 * C2596 + C90 * C2594 + C78 * C2597 +
                       C92 * C2595 + C79 * C2598) *
                          C222 +
                      (C88 * C2711 + C77 * C2929 + C90 * C2712 + C78 * C2930 +
                       C92 * C2713 + C79 * C2931) *
                          C19805) *
                         C19794 * C2058 -
                     ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                       C88 * C742 + C77 * C930) *
                          C19805 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C222) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C5932 +
                      (C3084 * C223 + C19721 * C455) * C5850 + C6749 * C5933 +
                      C6908 * C5851 + C6751 * C5934 + C6909 * C5852) *
                         C19794 * C2057 -
                     (C6910 * C5852 + C6754 * C5934 + C6909 * C5851 +
                      C6751 * C5933 + C6908 * C5850 + C6749 * C5932) *
                         C19794 * C2058) *
                        C1519 +
                    ((C5527 * C5932 + C5697 * C5850 + C8230 * C5933 +
                      C8402 * C5851 + (C3084 * C8043 + C19721 * C8044) * C5934 +
                      (C3084 * C8170 + C19721 * C8398) * C5852) *
                         C19794 * C2058 -
                     (C8402 * C5852 + C8230 * C5934 + C5697 * C5851 +
                      C5527 * C5933 + C3789 * C5850 + C3639 * C5932) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C222 +
                      (C3132 * C223 + C3080 * C498 + C3133 * C742 +
                       C3081 * C974 + C3134 * C743 + C3082 * C975) *
                          C19805) *
                         C19721 * C2057 -
                     ((C3134 * C4027 + C3082 * C4241 + C3133 * C2711 +
                       C3081 * C2982 + C3132 * C1183 + C3080 * C1415) *
                          C19805 +
                      (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                       C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                          C222) *
                         C19721 * C2058) *
                        C1519 +
                    (((C3132 * C2593 + C3080 * C2655 + C3133 * C3930 +
                       C3081 * C3983 + C3134 * C5328 + C3082 * C5394) *
                          C222 +
                      (C3132 * C2711 + C3080 * C2982 + C3133 * C4027 +
                       C3081 * C4241 + C3134 * C5446 + C3082 * C5749) *
                          C19805) *
                         C19721 * C2058 -
                     ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 +
                       C3081 * C975 + C3132 * C742 + C3080 * C974) *
                          C19805 +
                      (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                       C3081 * C693 + C3132 * C630 + C3080 * C692) *
                          C222) *
                         C19721 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C222 +
                       (C155 * C223 + C19794 * C498) * C19805) *
                          C77 +
                      (C504 + C516) * C78 + C519 * C79) *
                         C2057 -
                     ((C2478 + C2472) * C79 + (C2479 + C2475) * C78 +
                      ((C155 * C1183 + C19794 * C1415) * C19805 +
                       (C155 * C1071 + C19794 * C1133) * C222) *
                          C77) *
                         C2058) *
                        C1519 +
                    ((((C155 * C2593 + C19794 * C2655) * C222 +
                       (C155 * C2711 + C19794 * C2982) * C19805) *
                          C77 +
                      ((C155 * C2594 + C19794 * C2656) * C222 +
                       (C155 * C2712 + C19794 * C2983) * C19805) *
                          C78 +
                      ((C155 * C2595 + C19794 * C2657) * C222 +
                       (C155 * C2713 + C19794 * C2984) * C19805) *
                          C79) *
                         C2058 -
                     ((C1942 + C1936) * C79 + (C1943 + C1939) * C78 +
                      ((C155 * C742 + C19794 * C974) * C19805 +
                       (C155 * C630 + C19794 * C692) * C222) *
                          C77) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C5932 +
                      (C155 * C223 + C19794 * C498) * C5850 + C6642 * C5933 +
                      C6957 * C5851 + C6644 * C5934 + C6958 * C5852) *
                         C19721 * C2057 -
                     (C6959 * C5852 + C6647 * C5934 + C6958 * C5851 +
                      C6644 * C5933 + C6957 * C5850 + C6642 * C5932) *
                         C19721 * C2058) *
                        C1519 +
                    ((C8113 * C5932 + C8458 * C5850 + C8115 * C5933 +
                      C8459 * C5851 + (C155 * C8043 + C19794 * C8102) * C5934 +
                      (C155 * C8170 + C19794 * C8452) * C5852) *
                         C19721 * C2058 -
                     (C8459 * C5852 + C8115 * C5934 + C8458 * C5851 +
                      C8113 * C5933 + (C155 * C742 + C19794 * C974) * C5850 +
                      (C155 * C630 + C19794 * C692) * C5932) *
                         C19721 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
            C3891 * C3082) *
               C19721 * C2057 -
           (C5811 * C3082 + C5812 * C3081 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C3080) *
               C19721 * C2058) *
              C1519 +
          ((C5812 * C3080 + C5811 * C3081 +
            (C557 * C5328 + C5806 + C5806 + C19805 * C5800) * C3082) *
               C19721 * C2058 -
           (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
            C584 * C78 + C585 * C79) *
               C2057 -
           (C2542 * C79 + C2543 * C78 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C19794 * C77) *
               C2058) *
              C1519 +
          (((C557 * C2593 + C3039 + C3039 + C19805 * C3035) * C19794 * C77 +
            (C557 * C2594 + C3040 + C3040 + C19805 * C3036) * C19794 * C78 +
            (C557 * C2595 + C3041 + C3041 + C19805 * C3037) * C19794 * C79) *
               C2058 -
           (C2006 * C79 + C2007 * C78 +
            (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
               C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
            C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
            C5852 * C1460) *
               C19794 * C19721 * C2057 -
           (C6165 * C6564 + C7000 + C7000 + C5852 * C6997 + C6164 * C1072 +
            C7001 + C7001 + C5851 * C1460 + C6163 * C1071 + C7002 + C7002 +
            C5850 * C1459) *
               C19794 * C19721 * C2058) *
              C1519 +
          ((C6163 * C2593 + C8511 + C8511 + C5850 * C3035 + C6164 * C3931 +
            C8512 + C8512 + C5851 * C4283 + C6165 * C8043 + C8513 + C8513 +
            C5852 * C8509) *
               C19794 * C19721 * C2058 -
           (C6165 * C3931 + C6521 + C6521 + C5852 * C4283 + C6164 * C2593 +
            C6522 + C6522 + C5851 * C3035 + C6163 * C630 + C6523 + C6523 +
            C5850 * C1018) *
               C19794 * C19721 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
               C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
                  C19805 * C19794 * C19769 * C19755 * C84 -
              (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
               C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
                  C19805 * C19794 * C19769 * C19755 * C85 +
              (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
               C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
                  C19805 * C19794 * C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
               C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
                  C19805 * C19794 * C19769 * C624 -
              (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 +
               C648 + C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
                  C19805 * C19794 * C19769 * C625 +
              (C87 * C631 + C650 + C650 + C77 * C643 + C89 * C632 + C651 +
               C651 + C78 * C644 + C91 * C633 + C652 + C652 + C79 * C645) *
                  C19805 * C19794 * C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C1066 -
          (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
           C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
              C19805 * C19794 * C1067 +
          (C87 * C1072 + C1091 + C1091 + C77 * C1084 + C89 * C1073 + C1092 +
           C1092 + C78 * C1085 + C91 * C1074 + C1093 + C1093 + C79 * C1086) *
              C19805 * C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           (C3083 * C630 + C3087 + C3087 + C19721 * C642) * C19805 * C3081 +
           (C3083 * C631 + C3088 + C3088 + C19721 * C643) * C19805 * C3082) *
              C19769 * C19755 * C84 -
          ((C3083 * C632 + C3089 + C3089 + C19721 * C644) * C19805 * C3082 +
           (C3083 * C629 + C3090 + C3090 + C19721 * C641) * C19805 * C3081 +
           (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
              C19769 * C19755 * C85 +
          ((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C19805 * C3080 +
           (C3083 * C628 + C3093 + C3093 + C19721 * C640) * C19805 * C3081 +
           (C3083 * C633 + C3094 + C3094 + C19721 * C645) * C19805 * C3082) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           C3475 * C3081 + C3476 * C3082) *
              C19769 * C624 -
          (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C19769 * C625 +
          (C3476 * C3080 + C3477 * C3081 +
           (C3083 * C3452 + C3465 + C3465 + C19721 * C3456) * C19805 * C3082) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           C3475 * C3081 + C3476 * C3082) *
              C1066 -
          ((C3083 * C3930 + C3940 + C3940 + C19721 * C3936) * C19805 * C3082 +
           (C3083 * C2593 + C3941 + C3941 + C19721 * C2599) * C19805 * C3081 +
           (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C19805 * C3080) *
              C1067 +
          ((C3083 * C1072 + C3943 + C3943 + C19721 * C1084) * C19805 * C3080 +
           (C3083 * C3931 + C3944 + C3944 + C19721 * C3937) * C19805 * C3081 +
           (C3083 * C3932 + C3945 + C3945 + C19721 * C3938) * C19805 * C3082) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
           (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C5851 +
           (C3083 * C1072 + C3943 + C3943 + C19721 * C1084) * C5852) *
              C19794 * C19769 * C19755 * C84 -
          ((C3083 * C1073 + C5854 + C5854 + C19721 * C1085) * C5852 +
           (C3083 * C1070 + C4862 + C4862 + C19721 * C1082) * C5851 +
           (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C5850) *
              C19794 * C19769 * C19755 * C85 +
          ((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C5850 +
           (C3083 * C1069 + C5855 + C5855 + C19721 * C1081) * C5851 +
           (C3083 * C1074 + C5856 + C5856 + C19721 * C1086) * C5852) *
              C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
           (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C5851 +
           (C3083 * C1072 + C3943 + C3943 + C19721 * C1084) * C5852) *
              C19794 * C19769 * C624 -
          ((C3083 * C3931 + C3944 + C3944 + C19721 * C3937) * C5852 +
           C5342 * C5851 + C3472 * C5850) *
              C19794 * C19769 * C625 +
          (C3473 * C5850 + C5341 * C5851 +
           (C3083 * C3932 + C3945 + C3945 + C19721 * C3938) * C5852) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
           C6585 * C5851 + C6586 * C5852) *
              C19794 * C1066 -
          (C6587 * C5852 + C6586 * C5851 + C6585 * C5850) * C19794 * C1067 +
          (C6586 * C5850 + C6587 * C5851 +
           (C3083 * C6565 + C6578 + C6578 + C19721 * C6569) * C5852) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C155 * C93 + C19794 * C156) * C88 +
               (C155 * C98 + C19794 * C161) * C77 + C179 * C90 + C180 * C78 +
               C181 * C92 + C182 * C79) *
                  C19805 * C19769 * C19755 * C84 -
              (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 + C180 * C77 +
               C179 * C88) *
                  C19805 * C19769 * C19755 * C85 +
              (C181 * C88 + C182 * C77 + C184 * C90 + C183 * C78 +
               (C155 * C97 + C19794 * C160) * C92 +
               (C155 * C102 + C19794 * C165) * C79) *
                  C19805 * C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C155 * C93 + C19794 * C156) * C88 +
               (C155 * C98 + C19794 * C161) * C77 + C179 * C90 + C180 * C78 +
               C181 * C92 + C182 * C79) *
                  C19805 * C19769 * C624 -
              ((C155 * C634 + C19794 * C696) * C79 +
               (C155 * C628 + C19794 * C690) * C92 +
               (C155 * C635 + C19794 * C697) * C78 +
               (C155 * C629 + C19794 * C691) * C90 +
               (C155 * C636 + C19794 * C698) * C77 +
               (C155 * C630 + C19794 * C692) * C88) *
                  C19805 * C19769 * C625 +
              ((C155 * C631 + C19794 * C693) * C88 +
               (C155 * C637 + C19794 * C699) * C77 +
               (C155 * C632 + C19794 * C694) * C90 +
               (C155 * C638 + C19794 * C700) * C78 +
               (C155 * C633 + C19794 * C695) * C92 +
               (C155 * C639 + C19794 * C701) * C79) *
                  C19805 * C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C155 * C93 + C19794 * C156) * C88 +
           (C155 * C98 + C19794 * C161) * C77 + C179 * C90 + C180 * C78 +
           C181 * C92 + C182 * C79) *
              C19805 * C1066 -
          ((C155 * C1075 + C19794 * C1137) * C79 +
           (C155 * C1069 + C19794 * C1131) * C92 +
           (C155 * C1076 + C19794 * C1138) * C78 +
           (C155 * C1070 + C19794 * C1132) * C90 +
           (C155 * C1077 + C19794 * C1139) * C77 +
           (C155 * C1071 + C19794 * C1133) * C88) *
              C19805 * C1067 +
          ((C155 * C1072 + C19794 * C1134) * C88 +
           (C155 * C1078 + C19794 * C1140) * C77 +
           (C155 * C1073 + C19794 * C1135) * C90 +
           (C155 * C1079 + C19794 * C1141) * C78 +
           (C155 * C1074 + C19794 * C1136) * C92 +
           (C155 * C1080 + C19794 * C1142) * C79) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C3084 +
           (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
            C3134 * C637 + C3082 * C699) *
               C19721) *
              C19805 * C19769 * C19755 * C84 -
          ((C3134 * C638 + C3082 * C700 + C3133 * C635 + C3081 * C697 +
            C3132 * C99 + C3080 * C162) *
               C19721 +
           (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
            C3132 * C94 + C3080 * C157) *
               C3084) *
              C19805 * C19769 * C19755 * C85 +
          ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
            C3134 * C633 + C3082 * C695) *
               C3084 +
           (C3132 * C100 + C3080 * C163 + C3133 * C634 + C3081 * C696 +
            C3134 * C639 + C3082 * C701) *
               C19721) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C3084 +
           (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
            C3134 * C637 + C3082 * C699) *
               C19721) *
              C19805 * C19769 * C624 -
          ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 + C3081 * C699 +
            C3132 * C636 + C3080 * C698) *
               C19721 +
           (C3134 * C3451 + C3082 * C3515 + C3133 * C631 + C3081 * C693 +
            C3132 * C630 + C3080 * C692) *
               C3084) *
              C19805 * C19769 * C625 +
          ((C3132 * C631 + C3080 * C693 + C3133 * C3451 + C3081 * C3515 +
            C3134 * C3452 + C3082 * C3516) *
               C3084 +
           (C3132 * C637 + C3080 * C699 + C3133 * C3453 + C3081 * C3517 +
            C3134 * C3454 + C3082 * C3518) *
               C19721) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C3084 +
           (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
            C3134 * C637 + C3082 * C699) *
               C19721) *
              C19805 * C1066 -
          ((C3134 * C3933 + C3082 * C3986 + C3133 * C2596 + C3081 * C2658 +
            C3132 * C1077 + C3080 * C1139) *
               C19721 +
           (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 + C3081 * C2655 +
            C3132 * C1071 + C3080 * C1133) *
               C3084) *
              C19805 * C1067 +
          ((C3132 * C1072 + C3080 * C1134 + C3133 * C3931 + C3081 * C3984 +
            C3134 * C3932 + C3082 * C3985) *
               C3084 +
           (C3132 * C1078 + C3080 * C1140 + C3133 * C3934 + C3081 * C3987 +
            C3134 * C3935 + C3082 * C3988) *
               C19721) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C155 * C93 + C19794 * C156) * C3084 +
                                (C155 * C98 + C19794 * C161) * C19721) *
                                   C5850 +
                               ((C155 * C1071 + C19794 * C1133) * C3084 +
                                (C155 * C1077 + C19794 * C1139) * C19721) *
                                   C5851 +
                               ((C155 * C1072 + C19794 * C1134) * C3084 +
                                (C155 * C1078 + C19794 * C1140) * C19721) *
                                   C5852) *
                                  C19769 * C19755 * C84 -
                              (((C155 * C1079 + C19794 * C1141) * C19721 +
                                (C155 * C1073 + C19794 * C1135) * C3084) *
                                   C5852 +
                               (C2128 * C19721 + C2129 * C3084) * C5851 +
                               (C180 * C19721 + C179 * C3084) * C5850) *
                                  C19769 * C19755 * C85 +
                              ((C181 * C3084 + C182 * C19721) * C5850 +
                               (C2127 * C3084 + C2126 * C19721) * C5851 +
                               ((C155 * C1074 + C19794 * C1136) * C3084 +
                                (C155 * C1080 + C19794 * C1142) * C19721) *
                                   C5852) *
                                  C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C3084 +
            (C155 * C98 + C19794 * C161) * C19721) *
               C5850 +
           ((C155 * C1071 + C19794 * C1133) * C3084 +
            (C155 * C1077 + C19794 * C1139) * C19721) *
               C5851 +
           ((C155 * C1072 + C19794 * C1134) * C3084 +
            (C155 * C1078 + C19794 * C1140) * C19721) *
               C5852) *
              C19769 * C624 -
          (((C155 * C3934 + C19794 * C3987) * C19721 +
            (C155 * C3931 + C19794 * C3984) * C3084) *
               C5852 +
           ((C155 * C2596 + C19794 * C2658) * C19721 +
            (C155 * C2593 + C19794 * C2655) * C3084) *
               C5851 +
           ((C155 * C636 + C19794 * C698) * C19721 +
            (C155 * C630 + C19794 * C692) * C3084) *
               C5850) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C3084 +
            (C155 * C637 + C19794 * C699) * C19721) *
               C5850 +
           ((C155 * C3930 + C19794 * C3983) * C3084 +
            (C155 * C3933 + C19794 * C3986) * C19721) *
               C5851 +
           ((C155 * C3932 + C19794 * C3985) * C3084 +
            (C155 * C3935 + C19794 * C3988) * C19721) *
               C5852) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C3084 +
            (C155 * C98 + C19794 * C161) * C19721) *
               C5850 +
           (C6648 + C6649) * C5851 + C6654 * C5852) *
              C1066 -
          ((C6652 + C6653) * C5852 + (C6651 + C6650) * C5851 +
           (C6649 + C6648) * C5850) *
              C1067 +
          (C6654 * C5850 + (C6653 + C6652) * C5851 +
           ((C155 * C6565 + C19794 * C6626) * C3084 +
            (C155 * C6567 + C19794 * C6628) * C19721) *
               C5852) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C222 * C93 + C19805 * C223) * C88 +
               (C222 * C98 + C19805 * C228) * C77 + C246 * C90 + C247 * C78 +
               C248 * C92 + C249 * C79) *
                  C19794 * C19769 * C19755 * C84 -
              (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 + C247 * C77 +
               C246 * C88) *
                  C19794 * C19769 * C19755 * C85 +
              (C248 * C88 + C249 * C77 + C251 * C90 + C250 * C78 +
               (C222 * C97 + C19805 * C227) * C92 +
               (C222 * C102 + C19805 * C232) * C79) *
                  C19794 * C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C222 * C93 + C19805 * C223) * C88 +
               (C222 * C98 + C19805 * C228) * C77 + C246 * C90 + C247 * C78 +
               C248 * C92 + C249 * C79) *
                  C19794 * C19769 * C624 -
              ((C222 * C634 + C19805 * C746) * C79 +
               (C222 * C628 + C19805 * C740) * C92 +
               (C222 * C635 + C19805 * C747) * C78 +
               (C222 * C629 + C19805 * C741) * C90 +
               (C222 * C636 + C19805 * C748) * C77 +
               (C222 * C630 + C19805 * C742) * C88) *
                  C19794 * C19769 * C625 +
              ((C222 * C631 + C19805 * C743) * C88 +
               (C222 * C637 + C19805 * C749) * C77 +
               (C222 * C632 + C19805 * C744) * C90 +
               (C222 * C638 + C19805 * C750) * C78 +
               (C222 * C633 + C19805 * C745) * C92 +
               (C222 * C639 + C19805 * C751) * C79) *
                  C19794 * C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C88 +
           (C222 * C98 + C19805 * C228) * C77 + C246 * C90 + C247 * C78 +
           C248 * C92 + C249 * C79) *
              C19794 * C1066 -
          ((C222 * C1075 + C19805 * C1187) * C79 +
           (C222 * C1069 + C19805 * C1181) * C92 +
           (C222 * C1076 + C19805 * C1188) * C78 +
           (C222 * C1070 + C19805 * C1182) * C90 +
           (C222 * C1077 + C19805 * C1189) * C77 +
           (C222 * C1071 + C19805 * C1183) * C88) *
              C19794 * C1067 +
          ((C222 * C1072 + C19805 * C1184) * C88 +
           (C222 * C1078 + C19805 * C1190) * C77 +
           (C222 * C1073 + C19805 * C1185) * C90 +
           (C222 * C1079 + C19805 * C1191) * C78 +
           (C222 * C1074 + C19805 * C1186) * C92 +
           (C222 * C1080 + C19805 * C1192) * C79) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3084 +
            (C222 * C98 + C19805 * C228) * C19721) *
               C3080 +
           ((C222 * C630 + C19805 * C742) * C3084 +
            (C222 * C636 + C19805 * C748) * C19721) *
               C3081 +
           ((C222 * C631 + C19805 * C743) * C3084 +
            (C222 * C637 + C19805 * C749) * C19721) *
               C3082) *
              C19769 * C19755 * C84 -
          (((C222 * C638 + C19805 * C750) * C19721 +
            (C222 * C632 + C19805 * C744) * C3084) *
               C3082 +
           (C1656 * C19721 + C1657 * C3084) * C3081 +
           (C247 * C19721 + C246 * C3084) * C3080) *
              C19769 * C19755 * C85 +
          ((C248 * C3084 + C249 * C19721) * C3080 +
           (C1655 * C3084 + C1654 * C19721) * C3081 +
           ((C222 * C633 + C19805 * C745) * C3084 +
            (C222 * C639 + C19805 * C751) * C19721) *
               C3082) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3084 +
            (C222 * C98 + C19805 * C228) * C19721) *
               C3080 +
           (C3580 + C3581) * C3081 + C3586 * C3082) *
              C19769 * C624 -
          ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
           (C3581 + C3580) * C3080) *
              C19769 * C625 +
          (C3586 * C3080 + (C3585 + C3584) * C3081 +
           ((C222 * C3452 + C19805 * C3558) * C3084 +
            (C222 * C3454 + C19805 * C3560) * C19721) *
               C3082) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3084 +
            (C222 * C98 + C19805 * C228) * C19721) *
               C3080 +
           (C3580 + C3581) * C3081 + C3586 * C3082) *
              C1066 -
          (((C222 * C3933 + C19805 * C4030) * C19721 +
            (C222 * C3930 + C19805 * C4027) * C3084) *
               C3082 +
           ((C222 * C2596 + C19805 * C2714) * C19721 +
            (C222 * C2593 + C19805 * C2711) * C3084) *
               C3081 +
           ((C222 * C1077 + C19805 * C1189) * C19721 +
            (C222 * C1071 + C19805 * C1183) * C3084) *
               C3080) *
              C1067 +
          (((C222 * C1072 + C19805 * C1184) * C3084 +
            (C222 * C1078 + C19805 * C1190) * C19721) *
               C3080 +
           ((C222 * C3931 + C19805 * C4028) * C3084 +
            (C222 * C3934 + C19805 * C4031) * C19721) *
               C3081 +
           ((C222 * C3932 + C19805 * C4029) * C3084 +
            (C222 * C3935 + C19805 * C4032) * C19721) *
               C3082) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                                C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                                   C3084 +
                               (C5932 * C98 + C5850 * C228 + C5933 * C1077 +
                                C5851 * C1189 + C5934 * C1078 + C5852 * C1190) *
                                   C19721) *
                                  C19794 * C19769 * C19755 * C84 -
                              ((C5934 * C1079 + C5852 * C1191 + C5933 * C1076 +
                                C5851 * C1188 + C5932 * C99 + C5850 * C229) *
                                   C19721 +
                               (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 +
                                C5851 * C1182 + C5932 * C94 + C5850 * C224) *
                                   C3084) *
                                  C19794 * C19769 * C19755 * C85 +
                              ((C5932 * C95 + C5850 * C225 + C5933 * C1069 +
                                C5851 * C1181 + C5934 * C1074 + C5852 * C1186) *
                                   C3084 +
                               (C5932 * C100 + C5850 * C230 + C5933 * C1075 +
                                C5851 * C1187 + C5934 * C1080 + C5852 * C1192) *
                                   C19721) *
                                  C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
            C5934 * C1072 + C5852 * C1184) *
               C3084 +
           (C5932 * C98 + C5850 * C228 + C5933 * C1077 + C5851 * C1189 +
            C5934 * C1078 + C5852 * C1190) *
               C19721) *
              C19794 * C19769 * C624 -
          ((C5934 * C3934 + C5852 * C4031 + C5933 * C2596 + C5851 * C2714 +
            C5932 * C636 + C5850 * C748) *
               C19721 +
           (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 + C5851 * C2711 +
            C5932 * C630 + C5850 * C742) *
               C3084) *
              C19794 * C19769 * C625 +
          ((C5932 * C631 + C5850 * C743 + C5933 * C3930 + C5851 * C4027 +
            C5934 * C3932 + C5852 * C4029) *
               C3084 +
           (C5932 * C637 + C5850 * C749 + C5933 * C3933 + C5851 * C4030 +
            C5934 * C3935 + C5852 * C4032) *
               C19721) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
            C5934 * C1072 + C5852 * C1184) *
               C3084 +
           (C5932 * C98 + C5850 * C228 + C5933 * C1077 + C5851 * C1189 +
            C5934 * C1078 + C5852 * C1190) *
               C19721) *
              C19794 * C1066 -
          ((C5934 * C6566 + C5852 * C6694 + C5933 * C1078 + C5851 * C1190 +
            C5932 * C1077 + C5850 * C1189) *
               C19721 +
           (C5934 * C6564 + C5852 * C6692 + C5933 * C1072 + C5851 * C1184 +
            C5932 * C1071 + C5850 * C1183) *
               C3084) *
              C19794 * C1067 +
          ((C5932 * C1072 + C5850 * C1184 + C5933 * C6564 + C5851 * C6692 +
            C5934 * C6565 + C5852 * C6693) *
               C3084 +
           (C5932 * C1078 + C5850 * C1190 + C5933 * C6566 + C5851 * C6694 +
            C5934 * C6567 + C5852 * C6695) *
               C19721) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                C79 * C100) *
                   C155 +
               (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 + C92 * C158 +
                C79 * C291) *
                   C19794) *
                  C19805 * C19769 * C19755 * C84 -
              ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 + C88 * C157 +
                C77 * C290) *
                   C19794 +
               (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 + C88 * C94 +
                C77 * C99) *
                   C155) *
                  C19805 * C19769 * C19755 * C85 +
              ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 + C92 * C97 +
                C79 * C102) *
                   C155 +
               (C88 * C158 + C77 * C291 + C90 * C159 + C78 * C292 + C92 * C160 +
                C79 * C293) *
                   C19794) *
                  C19805 * C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                C79 * C100) *
                   C155 +
               (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 + C92 * C158 +
                C79 * C291) *
                   C19794) *
                  C19805 * C19769 * C624 -
              ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 + C88 * C692 +
                C77 * C792) *
                   C19794 +
               (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 + C88 * C630 +
                C77 * C636) *
                   C155) *
                  C19805 * C19769 * C625 +
              ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 + C92 * C633 +
                C79 * C639) *
                   C155 +
               (C88 * C693 + C77 * C793 + C90 * C694 + C78 * C794 + C92 * C695 +
                C79 * C795) *
                   C19794) *
                  C19805 * C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
            C79 * C100) *
               C155 +
           (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 + C92 * C158 +
            C79 * C291) *
               C19794) *
              C19805 * C1066 -
          ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
            C88 * C1133 + C77 * C1233) *
               C19794 +
           (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
            C88 * C1071 + C77 * C1077) *
               C155) *
              C19805 * C1067 +
          ((C88 * C1072 + C77 * C1078 + C90 * C1073 + C78 * C1079 +
            C92 * C1074 + C79 * C1080) *
               C155 +
           (C88 * C1134 + C77 * C1234 + C90 * C1135 + C78 * C1235 +
            C92 * C1136 + C79 * C1236) *
               C19794) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3084 * C93 + C19721 * C98) * C3132 +
           (C3084 * C156 + C19721 * C289) * C3080 +
           (C3084 * C630 + C19721 * C636) * C3133 +
           (C3084 * C692 + C19721 * C792) * C3081 +
           (C3084 * C631 + C19721 * C637) * C3134 +
           (C3084 * C693 + C19721 * C793) * C3082) *
              C19805 * C19769 * C19755 * C84 -
          ((C3084 * C694 + C19721 * C794) * C3082 +
           (C3084 * C632 + C19721 * C638) * C3134 +
           (C3084 * C691 + C19721 * C791) * C3081 +
           (C3084 * C629 + C19721 * C635) * C3133 +
           (C3084 * C157 + C19721 * C290) * C3080 +
           (C3084 * C94 + C19721 * C99) * C3132) *
              C19805 * C19769 * C19755 * C85 +
          ((C3084 * C95 + C19721 * C100) * C3132 +
           (C3084 * C158 + C19721 * C291) * C3080 +
           (C3084 * C628 + C19721 * C634) * C3133 +
           (C3084 * C690 + C19721 * C790) * C3081 +
           (C3084 * C633 + C19721 * C639) * C3134 +
           (C3084 * C695 + C19721 * C795) * C3082) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3084 * C93 + C19721 * C98) * C3132 +
           (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
           C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
              C19805 * C19769 * C624 -
          (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 + C3641 * C3133 +
           C3640 * C3080 + C3639 * C3132) *
              C19805 * C19769 * C625 +
          (C3641 * C3132 + C3642 * C3080 + C3644 * C3133 + C3643 * C3081 +
           (C3084 * C3452 + C19721 * C3454) * C3134 +
           (C3084 * C3516 + C19721 * C3625) * C3082) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3084 * C93 + C19721 * C98) * C3132 +
           (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
           C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
              C19805 * C1066 -
          ((C3084 * C3983 + C19721 * C4071) * C3082 +
           (C3084 * C3930 + C19721 * C3933) * C3134 +
           (C3084 * C2655 + C19721 * C2767) * C3081 +
           (C3084 * C2593 + C19721 * C2596) * C3133 +
           (C3084 * C1133 + C19721 * C1233) * C3080 +
           (C3084 * C1071 + C19721 * C1077) * C3132) *
              C19805 * C1067 +
          ((C3084 * C1072 + C19721 * C1078) * C3132 +
           (C3084 * C1134 + C19721 * C1234) * C3080 +
           (C3084 * C3931 + C19721 * C3934) * C3133 +
           (C3084 * C3984 + C19721 * C4072) * C3081 +
           (C3084 * C3932 + C19721 * C3935) * C3134 +
           (C3084 * C3985 + C19721 * C4073) * C3082) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C3084 * C93 + C19721 * C98) * C155 +
                                (C3084 * C156 + C19721 * C289) * C19794) *
                                   C5850 +
                               ((C3084 * C1071 + C19721 * C1077) * C155 +
                                (C3084 * C1133 + C19721 * C1233) * C19794) *
                                   C5851 +
                               ((C3084 * C1072 + C19721 * C1078) * C155 +
                                (C3084 * C1134 + C19721 * C1234) * C19794) *
                                   C5852) *
                                  C19769 * C19755 * C84 -
                              (((C3084 * C1135 + C19721 * C1235) * C19794 +
                                (C3084 * C1073 + C19721 * C1079) * C155) *
                                   C5852 +
                               ((C3084 * C1132 + C19721 * C1232) * C19794 +
                                (C3084 * C1070 + C19721 * C1076) * C155) *
                                   C5851 +
                               ((C3084 * C157 + C19721 * C290) * C19794 +
                                (C3084 * C94 + C19721 * C99) * C155) *
                                   C5850) *
                                  C19769 * C19755 * C85 +
                              (((C3084 * C95 + C19721 * C100) * C155 +
                                (C3084 * C158 + C19721 * C291) * C19794) *
                                   C5850 +
                               ((C3084 * C1069 + C19721 * C1075) * C155 +
                                (C3084 * C1131 + C19721 * C1231) * C19794) *
                                   C5851 +
                               ((C3084 * C1074 + C19721 * C1080) * C155 +
                                (C3084 * C1136 + C19721 * C1236) * C19794) *
                                   C5852) *
                                  C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C155 +
            (C3084 * C156 + C19721 * C289) * C19794) *
               C5850 +
           ((C3084 * C1071 + C19721 * C1077) * C155 +
            (C3084 * C1133 + C19721 * C1233) * C19794) *
               C5851 +
           ((C3084 * C1072 + C19721 * C1078) * C155 +
            (C3084 * C1134 + C19721 * C1234) * C19794) *
               C5852) *
              C19769 * C624 -
          (((C3084 * C3984 + C19721 * C4072) * C19794 +
            (C3084 * C3931 + C19721 * C3934) * C155) *
               C5852 +
           (C5526 * C19794 + C5527 * C155) * C5851 +
           (C3640 * C19794 + C3639 * C155) * C5850) *
              C19769 * C625 +
          ((C3641 * C155 + C3642 * C19794) * C5850 +
           (C5525 * C155 + C5524 * C19794) * C5851 +
           ((C3084 * C3932 + C19721 * C3935) * C155 +
            (C3084 * C3985 + C19721 * C4073) * C19794) *
               C5852) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C155 +
            (C3084 * C156 + C19721 * C289) * C19794) *
               C5850 +
           (C6755 + C6756) * C5851 + C6761 * C5852) *
              C1066 -
          ((C6759 + C6760) * C5852 + (C6758 + C6757) * C5851 +
           (C6756 + C6755) * C5850) *
              C1067 +
          (C6761 * C5850 + (C6760 + C6759) * C5851 +
           ((C3084 * C6565 + C19721 * C6567) * C155 +
            (C3084 * C6626 + C19721 * C6735) * C19794) *
               C5852) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
               C357 * C79) *
                  C19805 * C19769 * C19755 * C84 -
              (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C19769 *
                  C19755 * C85 +
              (C357 * C77 + C358 * C78 +
               (C332 * C97 + C349 + C349 + C19794 * C337) * C79) *
                  C19805 * C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
               C357 * C79) *
                  C19805 * C19769 * C624 -
              ((C332 * C628 + C841 + C841 + C19794 * C834) * C79 +
               (C332 * C629 + C842 + C842 + C19794 * C835) * C78 +
               (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
                  C19805 * C19769 * C625 +
              ((C332 * C631 + C844 + C844 + C19794 * C837) * C77 +
               (C332 * C632 + C845 + C845 + C19794 * C838) * C78 +
               (C332 * C633 + C846 + C846 + C19794 * C839) * C79) *
                  C19805 * C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C1066 -
          ((C332 * C1069 + C1282 + C1282 + C19794 * C1275) * C79 +
           (C332 * C1070 + C1283 + C1283 + C19794 * C1276) * C78 +
           (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C77) *
              C19805 * C1067 +
          ((C332 * C1072 + C1285 + C1285 + C19794 * C1278) * C77 +
           (C332 * C1073 + C1286 + C1286 + C19794 * C1279) * C78 +
           (C332 * C1074 + C1287 + C1287 + C19794 * C1280) * C79) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C19755 * C84 -
          (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
           C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
              C19721 * C19805 * C19769 * C19755 * C85 +
          (C3249 * C95 + C3259 + C3259 + C3080 * C335 + C3250 * C628 + C3260 +
           C3260 + C3081 * C834 + C3251 * C633 + C3261 + C3261 + C3082 * C839) *
              C19721 * C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C624 -
          (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
           C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
           C3080 * C836) *
              C19721 * C19805 * C19769 * C625 +
          (C3249 * C631 + C3688 + C3688 + C3080 * C837 + C3250 * C3451 + C3689 +
           C3689 + C3081 * C3682 + C3251 * C3452 + C3690 + C3690 +
           C3082 * C3683) *
              C19721 * C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C1066 -
          (C3251 * C3930 + C4116 + C4116 + C3082 * C4112 + C3250 * C2593 +
           C4117 + C4117 + C3081 * C2820 + C3249 * C1071 + C4118 + C4118 +
           C3080 * C1277) *
              C19721 * C19805 * C1067 +
          (C3249 * C1072 + C4119 + C4119 + C3080 * C1278 + C3250 * C3931 +
           C4120 + C4120 + C3081 * C4113 + C3251 * C3932 + C4121 + C4121 +
           C3082 * C4114) *
              C19721 * C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
           (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C19721 * C5851 +
           (C332 * C1072 + C1285 + C1285 + C19794 * C1278) * C19721 * C5852) *
              C19769 * C19755 * C84 -
          ((C332 * C1073 + C1286 + C1286 + C19794 * C1279) * C19721 * C5852 +
           C2306 * C19721 * C5851 + C356 * C19721 * C5850) *
              C19769 * C19755 * C85 +
          (C357 * C19721 * C5850 + C2305 * C19721 * C5851 +
           (C332 * C1074 + C1287 + C1287 + C19794 * C1280) * C19721 * C5852) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
           (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C19721 * C5851 +
           (C332 * C1072 + C1285 + C1285 + C19794 * C1278) * C19721 * C5852) *
              C19769 * C624 -
          ((C332 * C3931 + C6366 + C6366 + C19794 * C4113) * C19721 * C5852 +
           (C332 * C2593 + C2824 + C2824 + C19794 * C2820) * C19721 * C5851 +
           (C332 * C630 + C843 + C843 + C19794 * C836) * C19721 * C5850) *
              C19769 * C625 +
          ((C332 * C631 + C844 + C844 + C19794 * C837) * C19721 * C5850 +
           (C332 * C3930 + C6367 + C6367 + C19794 * C4112) * C19721 * C5851 +
           (C332 * C3932 + C6368 + C6368 + C19794 * C4114) * C19721 * C5852) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
           C6819 * C5851 + C6820 * C5852) *
              C1066 -
          (C6821 * C5852 + C6820 * C5851 + C6819 * C5850) * C1067 +
          (C6820 * C5850 + C6821 * C5851 +
           (C332 * C6565 + C6809 + C6809 + C19794 * C6800) * C19721 * C5852) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C222 * C93 + C19805 * C223) * C155 +
                (C222 * C156 + C19805 * C396) * C19794) *
                   C77 +
               (C402 + C414) * C78 + C417 * C79) *
                  C19769 * C19755 * C84 -
              ((C416 + C410) * C79 + (C415 + C405) * C78 +
               (C414 + C402) * C77) *
                  C19769 * C19755 * C85 +
              (C417 * C77 + (C410 + C416) * C78 +
               ((C222 * C97 + C19805 * C227) * C155 +
                (C222 * C160 + C19805 * C400) * C19794) *
                   C79) *
                  C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C222 * C93 + C19805 * C223) * C155 +
                (C222 * C156 + C19805 * C396) * C19794) *
                   C77 +
               (C402 + C414) * C78 + C417 * C79) *
                  C19769 * C624 -
              (((C222 * C690 + C19805 * C884) * C19794 +
                (C222 * C628 + C19805 * C740) * C155) *
                   C79 +
               ((C222 * C691 + C19805 * C885) * C19794 +
                (C222 * C629 + C19805 * C741) * C155) *
                   C78 +
               ((C222 * C692 + C19805 * C886) * C19794 +
                (C222 * C630 + C19805 * C742) * C155) *
                   C77) *
                  C19769 * C625 +
              (((C222 * C631 + C19805 * C743) * C155 +
                (C222 * C693 + C19805 * C887) * C19794) *
                   C77 +
               ((C222 * C632 + C19805 * C744) * C155 +
                (C222 * C694 + C19805 * C888) * C19794) *
                   C78 +
               ((C222 * C633 + C19805 * C745) * C155 +
                (C222 * C695 + C19805 * C889) * C19794) *
                   C79) *
                  C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C1066 -
          (((C222 * C1131 + C19805 * C1325) * C19794 +
            (C222 * C1069 + C19805 * C1181) * C155) *
               C79 +
           ((C222 * C1132 + C19805 * C1326) * C19794 +
            (C222 * C1070 + C19805 * C1182) * C155) *
               C78 +
           ((C222 * C1133 + C19805 * C1327) * C19794 +
            (C222 * C1071 + C19805 * C1183) * C155) *
               C77) *
              C1067 +
          (((C222 * C1072 + C19805 * C1184) * C155 +
            (C222 * C1134 + C19805 * C1328) * C19794) *
               C77 +
           ((C222 * C1073 + C19805 * C1185) * C155 +
            (C222 * C1135 + C19805 * C1329) * C19794) *
               C78 +
           ((C222 * C1074 + C19805 * C1186) * C155 +
            (C222 * C1136 + C19805 * C1330) * C19794) *
               C79) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 +
           (C222 * C630 + C19805 * C742) * C3133 +
           (C222 * C692 + C19805 * C886) * C3081 +
           (C222 * C631 + C19805 * C743) * C3134 +
           (C222 * C693 + C19805 * C887) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C222 * C694 + C19805 * C888) * C3082 +
           (C222 * C632 + C19805 * C744) * C3134 + C1829 * C3081 +
           C1657 * C3133 + C411 * C3080 + C246 * C3132) *
              C19721 * C19769 * C19755 * C85 +
          (C248 * C3132 + C412 * C3080 + C1655 * C3133 + C1828 * C3081 +
           (C222 * C633 + C19805 * C745) * C3134 +
           (C222 * C695 + C19805 * C889) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
           C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
              C19721 * C19769 * C624 -
          (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 + C3576 * C3133 +
           C3737 * C3080 + C3574 * C3132) *
              C19721 * C19769 * C625 +
          (C3576 * C3132 + C3738 * C3080 + C3579 * C3133 + C3739 * C3081 +
           (C222 * C3452 + C19805 * C3558) * C3134 +
           (C222 * C3516 + C19805 * C3729) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
           C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
              C19721 * C1066 -
          ((C222 * C3983 + C19805 * C4159) * C3082 +
           (C222 * C3930 + C19805 * C4027) * C3134 +
           (C222 * C2655 + C19805 * C2876) * C3081 +
           (C222 * C2593 + C19805 * C2711) * C3133 +
           (C222 * C1133 + C19805 * C1327) * C3080 +
           (C222 * C1071 + C19805 * C1183) * C3132) *
              C19721 * C1067 +
          ((C222 * C1072 + C19805 * C1184) * C3132 +
           (C222 * C1134 + C19805 * C1328) * C3080 +
           (C222 * C3931 + C19805 * C4028) * C3133 +
           (C222 * C3984 + C19805 * C4160) * C3081 +
           (C222 * C3932 + C19805 * C4029) * C3134 +
           (C222 * C3985 + C19805 * C4161) * C3082) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                                C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                                   C155 +
                               (C5932 * C156 + C5850 * C396 + C5933 * C1133 +
                                C5851 * C1327 + C5934 * C1134 + C5852 * C1328) *
                                   C19794) *
                                  C19721 * C19769 * C19755 * C84 -
                              ((C5934 * C1135 + C5852 * C1329 + C5933 * C1132 +
                                C5851 * C1326 + C5932 * C157 + C5850 * C397) *
                                   C19794 +
                               (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 +
                                C5851 * C1182 + C5932 * C94 + C5850 * C224) *
                                   C155) *
                                  C19721 * C19769 * C19755 * C85 +
                              ((C5932 * C95 + C5850 * C225 + C5933 * C1069 +
                                C5851 * C1181 + C5934 * C1074 + C5852 * C1186) *
                                   C155 +
                               (C5932 * C158 + C5850 * C398 + C5933 * C1131 +
                                C5851 * C1325 + C5934 * C1136 + C5852 * C1330) *
                                   C19794) *
                                  C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
            C5934 * C1072 + C5852 * C1184) *
               C155 +
           (C5932 * C156 + C5850 * C396 + C5933 * C1133 + C5851 * C1327 +
            C5934 * C1134 + C5852 * C1328) *
               C19794) *
              C19721 * C19769 * C624 -
          ((C5934 * C3984 + C5852 * C4160 + C5933 * C2655 + C5851 * C2876 +
            C5932 * C692 + C5850 * C886) *
               C19794 +
           (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 + C5851 * C2711 +
            C5932 * C630 + C5850 * C742) *
               C155) *
              C19721 * C19769 * C625 +
          ((C5932 * C631 + C5850 * C743 + C5933 * C3930 + C5851 * C4027 +
            C5934 * C3932 + C5852 * C4029) *
               C155 +
           (C5932 * C693 + C5850 * C887 + C5933 * C3983 + C5851 * C4159 +
            C5934 * C3985 + C5852 * C4161) *
               C19794) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
            C5934 * C1072 + C5852 * C1184) *
               C155 +
           (C5932 * C156 + C5850 * C396 + C5933 * C1133 + C5851 * C1327 +
            C5934 * C1134 + C5852 * C1328) *
               C19794) *
              C19721 * C1066 -
          ((C5934 * C6625 + C5852 * C6859 + C5933 * C1134 + C5851 * C1328 +
            C5932 * C1133 + C5850 * C1327) *
               C19794 +
           (C5934 * C6564 + C5852 * C6692 + C5933 * C1072 + C5851 * C1184 +
            C5932 * C1071 + C5850 * C1183) *
               C155) *
              C19721 * C1067 +
          ((C5932 * C1072 + C5850 * C1184 + C5933 * C6564 + C5851 * C6692 +
            C5934 * C6565 + C5852 * C6693) *
               C155 +
           (C5932 * C1134 + C5850 * C1328 + C5933 * C6625 + C5851 * C6859 +
            C5934 * C6626 + C5852 * C6860) *
               C19794) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                C79 * C100) *
                   C222 +
               (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 + C92 * C225 +
                C79 * C457) *
                   C19805) *
                  C19794 * C19769 * C19755 * C84 -
              ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 + C88 * C224 +
                C77 * C456) *
                   C19805 +
               (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 + C88 * C94 +
                C77 * C99) *
                   C222) *
                  C19794 * C19769 * C19755 * C85 +
              ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 + C92 * C97 +
                C79 * C102) *
                   C222 +
               (C88 * C225 + C77 * C457 + C90 * C226 + C78 * C458 + C92 * C227 +
                C79 * C459) *
                   C19805) *
                  C19794 * C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
                C79 * C100) *
                   C222 +
               (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 + C92 * C225 +
                C79 * C457) *
                   C19805) *
                  C19794 * C19769 * C624 -
              ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 + C88 * C742 +
                C77 * C930) *
                   C19805 +
               (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 + C88 * C630 +
                C77 * C636) *
                   C222) *
                  C19794 * C19769 * C625 +
              ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 + C92 * C633 +
                C79 * C639) *
                   C222 +
               (C88 * C743 + C77 * C931 + C90 * C744 + C78 * C932 + C92 * C745 +
                C79 * C933) *
                   C19805) *
                  C19794 * C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 + C92 * C95 +
            C79 * C100) *
               C222 +
           (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 + C92 * C225 +
            C79 * C457) *
               C19805) *
              C19794 * C1066 -
          ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
            C88 * C1183 + C77 * C1371) *
               C19805 +
           (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
            C88 * C1071 + C77 * C1077) *
               C222) *
              C19794 * C1067 +
          ((C88 * C1072 + C77 * C1078 + C90 * C1073 + C78 * C1079 +
            C92 * C1074 + C79 * C1080) *
               C222 +
           (C88 * C1184 + C77 * C1372 + C90 * C1185 + C78 * C1373 +
            C92 * C1186 + C79 * C1374) *
               C19805) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C222 +
            (C3084 * C223 + C19721 * C455) * C19805) *
               C3080 +
           ((C3084 * C630 + C19721 * C636) * C222 +
            (C3084 * C742 + C19721 * C930) * C19805) *
               C3081 +
           ((C3084 * C631 + C19721 * C637) * C222 +
            (C3084 * C743 + C19721 * C931) * C19805) *
               C3082) *
              C19769 * C19755 * C84 -
          (((C3084 * C744 + C19721 * C932) * C19805 +
            (C3084 * C632 + C19721 * C638) * C222) *
               C3082 +
           ((C3084 * C741 + C19721 * C929) * C19805 +
            (C3084 * C629 + C19721 * C635) * C222) *
               C3081 +
           ((C3084 * C224 + C19721 * C456) * C19805 +
            (C3084 * C94 + C19721 * C99) * C222) *
               C3080) *
              C19769 * C19755 * C85 +
          (((C3084 * C95 + C19721 * C100) * C222 +
            (C3084 * C225 + C19721 * C457) * C19805) *
               C3080 +
           ((C3084 * C628 + C19721 * C634) * C222 +
            (C3084 * C740 + C19721 * C928) * C19805) *
               C3081 +
           ((C3084 * C633 + C19721 * C639) * C222 +
            (C3084 * C745 + C19721 * C933) * C19805) *
               C3082) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C222 +
            (C3084 * C223 + C19721 * C455) * C19805) *
               C3080 +
           (C3780 + C3792) * C3081 + C3795 * C3082) *
              C19769 * C624 -
          ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
           (C3792 + C3780) * C3080) *
              C19769 * C625 +
          (C3795 * C3080 + (C3788 + C3794) * C3081 +
           ((C3084 * C3452 + C19721 * C3454) * C222 +
            (C3084 * C3558 + C19721 * C3778) * C19805) *
               C3082) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3084 * C93 + C19721 * C98) * C222 +
            (C3084 * C223 + C19721 * C455) * C19805) *
               C3080 +
           (C3780 + C3792) * C3081 + C3795 * C3082) *
              C1066 -
          (((C3084 * C4027 + C19721 * C4200) * C19805 +
            (C3084 * C3930 + C19721 * C3933) * C222) *
               C3082 +
           ((C3084 * C2711 + C19721 * C2929) * C19805 +
            (C3084 * C2593 + C19721 * C2596) * C222) *
               C3081 +
           ((C3084 * C1183 + C19721 * C1371) * C19805 +
            (C3084 * C1071 + C19721 * C1077) * C222) *
               C3080) *
              C1067 +
          (((C3084 * C1072 + C19721 * C1078) * C222 +
            (C3084 * C1184 + C19721 * C1372) * C19805) *
               C3080 +
           ((C3084 * C3931 + C19721 * C3934) * C222 +
            (C3084 * C4028 + C19721 * C4201) * C19805) *
               C3081 +
           ((C3084 * C3932 + C19721 * C3935) * C222 +
            (C3084 * C4029 + C19721 * C4202) * C19805) *
               C3082) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C3084 * C93 + C19721 * C98) * C5932 +
                               (C3084 * C223 + C19721 * C455) * C5850 +
                               (C3084 * C1071 + C19721 * C1077) * C5933 +
                               (C3084 * C1183 + C19721 * C1371) * C5851 +
                               (C3084 * C1072 + C19721 * C1078) * C5934 +
                               (C3084 * C1184 + C19721 * C1372) * C5852) *
                                  C19794 * C19769 * C19755 * C84 -
                              ((C3084 * C1185 + C19721 * C1373) * C5852 +
                               (C3084 * C1073 + C19721 * C1079) * C5934 +
                               (C3084 * C1182 + C19721 * C1370) * C5851 +
                               (C3084 * C1070 + C19721 * C1076) * C5933 +
                               (C3084 * C224 + C19721 * C456) * C5850 +
                               (C3084 * C94 + C19721 * C99) * C5932) *
                                  C19794 * C19769 * C19755 * C85 +
                              ((C3084 * C95 + C19721 * C100) * C5932 +
                               (C3084 * C225 + C19721 * C457) * C5850 +
                               (C3084 * C1069 + C19721 * C1075) * C5933 +
                               (C3084 * C1181 + C19721 * C1369) * C5851 +
                               (C3084 * C1074 + C19721 * C1080) * C5934 +
                               (C3084 * C1186 + C19721 * C1374) * C5852) *
                                  C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3084 * C93 + C19721 * C98) * C5932 +
           (C3084 * C223 + C19721 * C455) * C5850 +
           (C3084 * C1071 + C19721 * C1077) * C5933 +
           (C3084 * C1183 + C19721 * C1371) * C5851 +
           (C3084 * C1072 + C19721 * C1078) * C5934 +
           (C3084 * C1184 + C19721 * C1372) * C5852) *
              C19794 * C19769 * C624 -
          ((C3084 * C4028 + C19721 * C4201) * C5852 +
           (C3084 * C3931 + C19721 * C3934) * C5934 + C5697 * C5851 +
           C5527 * C5933 + C3789 * C5850 + C3639 * C5932) *
              C19794 * C19769 * C625 +
          (C3641 * C5932 + C3790 * C5850 + C5525 * C5933 + C5696 * C5851 +
           (C3084 * C3932 + C19721 * C3935) * C5934 +
           (C3084 * C4029 + C19721 * C4202) * C5852) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3084 * C93 + C19721 * C98) * C5932 +
           (C3084 * C223 + C19721 * C455) * C5850 + C6749 * C5933 +
           C6908 * C5851 + C6751 * C5934 + C6909 * C5852) *
              C19794 * C1066 -
          (C6910 * C5852 + C6754 * C5934 + C6909 * C5851 + C6751 * C5933 +
           C6908 * C5850 + C6749 * C5932) *
              C19794 * C1067 +
          (C6751 * C5932 + C6909 * C5850 + C6754 * C5933 + C6910 * C5851 +
           (C3084 * C6565 + C19721 * C6567) * C5934 +
           (C3084 * C6693 + C19721 * C6900) * C5852) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (0.5 * std::pow(Pi, 2.5) *
                       ((((C155 * C93 + C19794 * C156) * C222 +
                          (C155 * C223 + C19794 * C498) * C19805) *
                             C77 +
                         (C504 + C516) * C78 + C519 * C79) *
                            C19769 * C19755 * C84 -
                        ((C518 + C512) * C79 + (C517 + C507) * C78 +
                         (C516 + C504) * C77) *
                            C19769 * C19755 * C85 +
                        (C519 * C77 + (C512 + C518) * C78 +
                         ((C155 * C97 + C19794 * C160) * C222 +
                          (C155 * C227 + C19794 * C502) * C19805) *
                             C79) *
                            C19769 * C19755 * C86) +
                   0.5 * std::pow(Pi, 2.5) *
                       ((((C155 * C93 + C19794 * C156) * C222 +
                          (C155 * C223 + C19794 * C498) * C19805) *
                             C77 +
                         (C504 + C516) * C78 + C519 * C79) *
                            C19769 * C624 -
                        (((C155 * C740 + C19794 * C972) * C19805 +
                          (C155 * C628 + C19794 * C690) * C222) *
                             C79 +
                         ((C155 * C741 + C19794 * C973) * C19805 +
                          (C155 * C629 + C19794 * C691) * C222) *
                             C78 +
                         ((C155 * C742 + C19794 * C974) * C19805 +
                          (C155 * C630 + C19794 * C692) * C222) *
                             C77) *
                            C19769 * C625 +
                        (((C155 * C631 + C19794 * C693) * C222 +
                          (C155 * C743 + C19794 * C975) * C19805) *
                             C77 +
                         ((C155 * C632 + C19794 * C694) * C222 +
                          (C155 * C744 + C19794 * C976) * C19805) *
                             C78 +
                         ((C155 * C633 + C19794 * C695) * C222 +
                          (C155 * C745 + C19794 * C977) * C19805) *
                             C79) *
                            C19769 * C626) *
                       C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C222 +
                      (C155 * C223 + C19794 * C498) * C19805) *
                         C77 +
                     (C504 + C516) * C78 + C519 * C79) *
                        C1066 -
                    (((C155 * C1181 + C19794 * C1413) * C19805 +
                      (C155 * C1069 + C19794 * C1131) * C222) *
                         C79 +
                     ((C155 * C1182 + C19794 * C1414) * C19805 +
                      (C155 * C1070 + C19794 * C1132) * C222) *
                         C78 +
                     ((C155 * C1183 + C19794 * C1415) * C19805 +
                      (C155 * C1071 + C19794 * C1133) * C222) *
                         C77) *
                        C1067 +
                    (((C155 * C1072 + C19794 * C1134) * C222 +
                      (C155 * C1184 + C19794 * C1416) * C19805) *
                         C77 +
                     ((C155 * C1073 + C19794 * C1135) * C222 +
                      (C155 * C1185 + C19794 * C1417) * C19805) *
                         C78 +
                     ((C155 * C1074 + C19794 * C1136) * C222 +
                      (C155 * C1186 + C19794 * C1418) * C19805) *
                         C79) *
                        C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C222 +
                     (C3132 * C223 + C3080 * C498 + C3133 * C742 +
                      C3081 * C974 + C3134 * C743 + C3082 * C975) *
                         C19805) *
                        C19721 * C19769 * C19755 * C84 -
                    ((C3134 * C744 + C3082 * C976 + C3133 * C741 +
                      C3081 * C973 + C3132 * C224 + C3080 * C499) *
                         C19805 +
                     (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                      C3081 * C691 + C3132 * C94 + C3080 * C157) *
                         C222) *
                        C19721 * C19769 * C19755 * C85 +
                    ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
                      C3134 * C633 + C3082 * C695) *
                         C222 +
                     (C3132 * C225 + C3080 * C500 + C3133 * C740 +
                      C3081 * C972 + C3134 * C745 + C3082 * C977) *
                         C19805) *
                        C19721 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C222 +
                     (C3132 * C223 + C3080 * C498 + C3133 * C742 +
                      C3081 * C974 + C3134 * C743 + C3082 * C975) *
                         C19805) *
                        C19721 * C19769 * C624 -
                    ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 +
                      C3081 * C975 + C3132 * C742 + C3080 * C974) *
                         C19805 +
                     (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                      C3081 * C693 + C3132 * C630 + C3080 * C692) *
                         C222) *
                        C19721 * C19769 * C625 +
                    ((C3132 * C631 + C3080 * C693 + C3133 * C3451 +
                      C3081 * C3515 + C3134 * C3452 + C3082 * C3516) *
                         C222 +
                     (C3132 * C743 + C3080 * C975 + C3133 * C3557 +
                      C3081 * C3833 + C3134 * C3558 + C3082 * C3834) *
                         C19805) *
                        C19721 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C222 +
                     (C3132 * C223 + C3080 * C498 + C3133 * C742 +
                      C3081 * C974 + C3134 * C743 + C3082 * C975) *
                         C19805) *
                        C19721 * C1066 -
                    ((C3134 * C4027 + C3082 * C4241 + C3133 * C2711 +
                      C3081 * C2982 + C3132 * C1183 + C3080 * C1415) *
                         C19805 +
                     (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                      C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                         C222) *
                        C19721 * C1067 +
                    ((C3132 * C1072 + C3080 * C1134 + C3133 * C3931 +
                      C3081 * C3984 + C3134 * C3932 + C3082 * C3985) *
                         C222 +
                     (C3132 * C1184 + C3080 * C1416 + C3133 * C4028 +
                      C3081 * C4242 + C3134 * C4029 + C3082 * C4243) *
                         C19805) *
                        C19721 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C5932 +
                     (C155 * C223 + C19794 * C498) * C5850 +
                     (C155 * C1071 + C19794 * C1133) * C5933 +
                     (C155 * C1183 + C19794 * C1415) * C5851 +
                     (C155 * C1072 + C19794 * C1134) * C5934 +
                     (C155 * C1184 + C19794 * C1416) * C5852) *
                        C19721 * C19769 * C19755 * C84 -
                    ((C155 * C1185 + C19794 * C1417) * C5852 +
                     (C155 * C1073 + C19794 * C1135) * C5934 + C2477 * C5851 +
                     C2129 * C5933 + C513 * C5850 + C179 * C5932) *
                        C19721 * C19769 * C19755 * C85 +
                    (C181 * C5932 + C514 * C5850 + C2127 * C5933 +
                     C2476 * C5851 + (C155 * C1074 + C19794 * C1136) * C5934 +
                     (C155 * C1186 + C19794 * C1418) * C5852) *
                        C19721 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C5932 +
                     (C155 * C223 + C19794 * C498) * C5850 +
                     (C155 * C1071 + C19794 * C1133) * C5933 +
                     (C155 * C1183 + C19794 * C1415) * C5851 +
                     (C155 * C1072 + C19794 * C1134) * C5934 +
                     (C155 * C1184 + C19794 * C1416) * C5852) *
                        C19721 * C19769 * C624 -
                    ((C155 * C4028 + C19794 * C4242) * C5852 +
                     (C155 * C3931 + C19794 * C3984) * C5934 +
                     (C155 * C2711 + C19794 * C2982) * C5851 +
                     (C155 * C2593 + C19794 * C2655) * C5933 +
                     (C155 * C742 + C19794 * C974) * C5850 +
                     (C155 * C630 + C19794 * C692) * C5932) *
                        C19721 * C19769 * C625 +
                    ((C155 * C631 + C19794 * C693) * C5932 +
                     (C155 * C743 + C19794 * C975) * C5850 +
                     (C155 * C3930 + C19794 * C3983) * C5933 +
                     (C155 * C4027 + C19794 * C4241) * C5851 +
                     (C155 * C3932 + C19794 * C3985) * C5934 +
                     (C155 * C4029 + C19794 * C4243) * C5852) *
                        C19721 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C5932 +
                     (C155 * C223 + C19794 * C498) * C5850 + C6642 * C5933 +
                     C6957 * C5851 + C6644 * C5934 + C6958 * C5852) *
                        C19721 * C1066 -
                    (C6959 * C5852 + C6647 * C5934 + C6958 * C5851 +
                     C6644 * C5933 + C6957 * C5850 + C6642 * C5932) *
                        C19721 * C1067 +
                    (C6644 * C5932 + C6958 * C5850 + C6647 * C5933 +
                     C6959 * C5851 + (C155 * C6565 + C19794 * C6626) * C5934 +
                     (C155 * C6693 + C19794 * C6949) * C5852) *
                        C19721 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
               C584 * C78 + C585 * C79) *
                  C19769 * C19755 * C84 -
              (C586 * C79 + C585 * C78 + C584 * C77) * C19769 * C19755 * C85 +
              (C585 * C77 + C586 * C78 +
               (C557 * C97 + C574 + C574 + C19805 * C562) * C19794 * C79) *
                  C19769 * C19755 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
               C584 * C78 + C585 * C79) *
                  C19769 * C624 -
              ((C557 * C628 + C1023 + C1023 + C19805 * C1016) * C19794 * C79 +
               (C557 * C629 + C1024 + C1024 + C19805 * C1017) * C19794 * C78 +
               (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
                  C19769 * C625 +
              ((C557 * C631 + C1026 + C1026 + C19805 * C1019) * C19794 * C77 +
               (C557 * C632 + C1027 + C1027 + C19805 * C1020) * C19794 * C78 +
               (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C19794 * C79) *
                  C19769 * C626) *
             C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C1066 -
          ((C557 * C1069 + C1464 + C1464 + C19805 * C1457) * C19794 * C79 +
           (C557 * C1070 + C1465 + C1465 + C19805 * C1458) * C19794 * C78 +
           (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C19794 * C77) *
              C1067 +
          ((C557 * C1072 + C1467 + C1467 + C19805 * C1460) * C19794 * C77 +
           (C557 * C1073 + C1468 + C1468 + C19805 * C1461) * C19794 * C78 +
           (C557 * C1074 + C1469 + C1469 + C19805 * C1462) * C19794 * C79) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C3081 +
           (C557 * C631 + C1026 + C1026 + C19805 * C1019) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C557 * C632 + C1027 + C1027 + C19805 * C1020) * C3082 +
           C2005 * C3081 + C581 * C3080) *
              C19721 * C19769 * C19755 * C85 +
          (C582 * C3080 + C2004 * C3081 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
           C3891 * C3082) *
              C19721 * C19769 * C624 -
          (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C19769 *
              C625 +
          (C3891 * C3080 + C3892 * C3081 +
           (C557 * C3452 + C3883 + C3883 + C19805 * C3874) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
           C3891 * C3082) *
              C19721 * C1066 -
          ((C557 * C3930 + C4286 + C4286 + C19805 * C4282) * C3082 +
           (C557 * C2593 + C3039 + C3039 + C19805 * C3035) * C3081 +
           (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C3080) *
              C19721 * C1067 +
          ((C557 * C1072 + C1467 + C1467 + C19805 * C1460) * C3080 +
           (C557 * C3931 + C4287 + C4287 + C19805 * C4283) * C3081 +
           (C557 * C3932 + C4288 + C4288 + C19805 * C4284) * C3082) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((C6163 * C93 + C6167 + C6167 + C5850 * C558 +
                               C6164 * C1071 + C6168 + C6168 + C5851 * C1459 +
                               C6165 * C1072 + C6169 + C6169 + C5852 * C1460) *
                                  C19794 * C19721 * C19769 * C19755 * C84 -
                              (C6165 * C1073 + C6170 + C6170 + C5852 * C1461 +
                               C6164 * C1070 + C6171 + C6171 + C5851 * C1458 +
                               C6163 * C94 + C6172 + C6172 + C5850 * C559) *
                                  C19794 * C19721 * C19769 * C19755 * C85 +
                              (C6163 * C95 + C6173 + C6173 + C5850 * C560 +
                               C6164 * C1069 + C6174 + C6174 + C5851 * C1457 +
                               C6165 * C1074 + C6175 + C6175 + C5852 * C1462) *
                                  C19794 * C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
           C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
           C5852 * C1460) *
              C19794 * C19721 * C19769 * C624 -
          (C6165 * C3931 + C6521 + C6521 + C5852 * C4283 + C6164 * C2593 +
           C6522 + C6522 + C5851 * C3035 + C6163 * C630 + C6523 + C6523 +
           C5850 * C1018) *
              C19794 * C19721 * C19769 * C625 +
          (C6163 * C631 + C6524 + C6524 + C5850 * C1019 + C6164 * C3930 +
           C6525 + C6525 + C5851 * C4282 + C6165 * C3932 + C6526 + C6526 +
           C5852 * C4284) *
              C19794 * C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
           C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
           C5852 * C1460) *
              C19794 * C19721 * C1066 -
          (C6165 * C6564 + C7000 + C7000 + C5852 * C6997 + C6164 * C1072 +
           C7001 + C7001 + C5851 * C1460 + C6163 * C1071 + C7002 + C7002 +
           C5850 * C1459) *
              C19794 * C19721 * C1067 +
          (C6163 * C1072 + C7003 + C7003 + C5850 * C1460 + C6164 * C6564 +
           C7004 + C7004 + C5851 * C6997 + C6165 * C6565 + C7005 + C7005 +
           C5852 * C6998) *
              C19794 * C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
            C3475 * C3081 + C3476 * C3082) *
               C2057 -
           ((C3083 * C3930 + C3940 + C3940 + C19721 * C3936) * C19805 * C3082 +
            (C3083 * C2593 + C3941 + C3941 + C19721 * C2599) * C19805 * C3081 +
            (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C19805 * C3080) *
               C2058) *
              C19755 * C1521 +
          (((C3083 * C1070 + C4862 + C4862 + C19721 * C1082) * C19805 * C3080 +
            (C3083 * C2594 + C4863 + C4863 + C19721 * C2600) * C19805 * C3081 +
            (C3083 * C4858 + C4864 + C4864 + C19721 * C4860) * C19805 * C3082) *
               C2058 -
           (C4354 * C3082 + C4353 * C3081 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
               C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C19805 * C19794 * C2057 -
           (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
            C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
               C19805 * C19794 * C2058) *
              C19755 * C1521 +
          ((C87 * C1070 + C2063 + C2063 + C77 * C1082 + C89 * C1069 + C2064 +
            C2064 + C78 * C1081 + C91 * C2059 + C2065 + C2065 + C79 * C2061) *
               C19805 * C19794 * C2058 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C19805 * C19794 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
            C6585 * C5851 + C6586 * C5852) *
               C19794 * C2057 -
           (C6587 * C5852 + C6586 * C5851 + C6585 * C5850) * C19794 * C2058) *
              C19755 * C1521 +
          ((C7536 * C5850 + C7537 * C5851 +
            (C3083 * C7523 + C7531 + C7531 + C19721 * C7525) * C5852) *
               C19794 * C2058 -
           (C7537 * C5852 + C7536 * C5851 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C5850) *
               C19794 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C3084 +
                      (C3132 * C98 + C3080 * C161 + C3133 * C636 +
                       C3081 * C698 + C3134 * C637 + C3082 * C699) *
                          C19721) *
                         C19805 * C2057 -
                     ((C3134 * C3933 + C3082 * C3986 + C3133 * C2596 +
                       C3081 * C2658 + C3132 * C1077 + C3080 * C1139) *
                          C19721 +
                      (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                       C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                          C3084) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    (((C3132 * C1070 + C3080 * C1132 + C3133 * C2594 +
                       C3081 * C2656 + C3134 * C4858 + C3082 * C4914) *
                          C3084 +
                      (C3132 * C1076 + C3080 * C1138 + C3133 * C2597 +
                       C3081 * C2659 + C3134 * C4859 + C3082 * C4915) *
                          C19721) *
                         C19805 * C2058 -
                     ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                       C3081 * C697 + C3132 * C99 + C3080 * C162) *
                          C19721 +
                      (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                       C3081 * C691 + C3132 * C94 + C3080 * C157) *
                          C3084) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C88 +
                      (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C19805 * C2057 -
                     (C2126 * C79 + C2127 * C92 + C2128 * C78 + C2129 * C90 +
                      (C155 * C1077 + C19794 * C1139) * C77 +
                      (C155 * C1071 + C19794 * C1133) * C88) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    ((C2129 * C88 + C2128 * C77 + C2127 * C90 + C2126 * C78 +
                      (C155 * C2059 + C19794 * C2115) * C92 +
                      (C155 * C2060 + C19794 * C2116) * C79) *
                         C19805 * C2058 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C3084 +
                       (C155 * C98 + C19794 * C161) * C19721) *
                          C5850 +
                      (C6648 + C6649) * C5851 + C6654 * C5852) *
                         C2057 -
                     ((C6652 + C6653) * C5852 + (C6651 + C6650) * C5851 +
                      (C6649 + C6648) * C5850) *
                         C2058) *
                        C19755 * C1521 +
                    (((C7590 + C7591) * C5850 + (C7598 + C7599) * C5851 +
                      ((C155 * C7523 + C19794 * C7587) * C3084 +
                       (C155 * C7524 + C19794 * C7588) * C19721) *
                          C5852) *
                         C2058 -
                     ((C7599 + C7598) * C5852 + (C7591 + C7590) * C5851 +
                      (C180 * C19721 + C179 * C3084) * C5850) *
                         C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C3084 +
                       (C222 * C98 + C19805 * C228) * C19721) *
                          C3080 +
                      (C3580 + C3581) * C3081 + C3586 * C3082) *
                         C2057 -
                     (((C222 * C3933 + C19805 * C4030) * C19721 +
                       (C222 * C3930 + C19805 * C4027) * C3084) *
                          C3082 +
                      ((C222 * C2596 + C19805 * C2714) * C19721 +
                       (C222 * C2593 + C19805 * C2711) * C3084) *
                          C3081 +
                      ((C222 * C1077 + C19805 * C1189) * C19721 +
                       (C222 * C1071 + C19805 * C1183) * C3084) *
                          C3080) *
                         C2058) *
                        C19755 * C1521 +
                    (((C2193 * C3084 + C2192 * C19721) * C3080 +
                      ((C222 * C2594 + C19805 * C2712) * C3084 +
                       (C222 * C2597 + C19805 * C2715) * C19721) *
                          C3081 +
                      ((C222 * C4858 + C19805 * C4966) * C3084 +
                       (C222 * C4859 + C19805 * C4967) * C19721) *
                          C3082) *
                         C2058 -
                     ((C4468 + C4467) * C3082 + (C4460 + C4459) * C3081 +
                      (C247 * C19721 + C246 * C3084) * C3080) *
                         C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C88 +
                      (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C19794 * C2057 -
                     (C2190 * C79 + C2191 * C92 + C2192 * C78 + C2193 * C90 +
                      (C222 * C1077 + C19805 * C1189) * C77 +
                      (C222 * C1071 + C19805 * C1183) * C88) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    ((C2193 * C88 + C2192 * C77 + C2191 * C90 + C2190 * C78 +
                      (C222 * C2059 + C19805 * C2179) * C92 +
                      (C222 * C2060 + C19805 * C2180) * C79) *
                         C19794 * C2058 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                       C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                          C3084 +
                      (C5932 * C98 + C5850 * C228 + C5933 * C1077 +
                       C5851 * C1189 + C5934 * C1078 + C5852 * C1190) *
                          C19721) *
                         C19794 * C2057 -
                     ((C5934 * C6566 + C5852 * C6694 + C5933 * C1078 +
                       C5851 * C1190 + C5932 * C1077 + C5850 * C1189) *
                          C19721 +
                      (C5934 * C6564 + C5852 * C6692 + C5933 * C1072 +
                       C5851 * C1184 + C5932 * C1071 + C5850 * C1183) *
                          C3084) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    (((C5932 * C1070 + C5850 * C1182 + C5933 * C1073 +
                       C5851 * C1185 + C5934 * C7523 + C5852 * C7649) *
                          C3084 +
                      (C5932 * C1076 + C5850 * C1188 + C5933 * C1079 +
                       C5851 * C1191 + C5934 * C7524 + C5852 * C7650) *
                          C19721) *
                         C19794 * C2058 -
                     ((C5934 * C1079 + C5852 * C1191 + C5933 * C1076 +
                       C5851 * C1188 + C5932 * C99 + C5850 * C229) *
                          C19721 +
                      (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 +
                       C5851 * C1182 + C5932 * C94 + C5850 * C224) *
                          C3084) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C3132 +
                      (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                      C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                         C19805 * C2057 -
                     ((C3084 * C3983 + C19721 * C4071) * C3082 +
                      (C3084 * C3930 + C19721 * C3933) * C3134 +
                      (C3084 * C2655 + C19721 * C2767) * C3081 +
                      (C3084 * C2593 + C19721 * C2596) * C3133 +
                      (C3084 * C1133 + C19721 * C1233) * C3080 +
                      (C3084 * C1071 + C19721 * C1077) * C3132) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    (((C3084 * C1070 + C19721 * C1076) * C3132 +
                      (C3084 * C1132 + C19721 * C1232) * C3080 +
                      (C3084 * C2594 + C19721 * C2597) * C3133 +
                      (C3084 * C2656 + C19721 * C2768) * C3081 +
                      (C3084 * C4858 + C19721 * C4859) * C3134 +
                      (C3084 * C4914 + C19721 * C5018) * C3082) *
                         C19805 * C2058 -
                     (C4531 * C3082 + C4530 * C3134 + C4529 * C3081 +
                      C4528 * C3133 + (C3084 * C157 + C19721 * C290) * C3080 +
                      (C3084 * C94 + C19721 * C99) * C3132) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C19794) *
                         C19805 * C2057 -
                     ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                       C88 * C1133 + C77 * C1233) *
                          C19794 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C155) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    (((C88 * C1070 + C77 * C1076 + C90 * C1069 + C78 * C1075 +
                       C92 * C2059 + C79 * C2060) *
                          C155 +
                      (C88 * C1132 + C77 * C1232 + C90 * C1131 + C78 * C1231 +
                       C92 * C2115 + C79 * C2243) *
                          C19794) *
                         C19805 * C2058 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C19794 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C155 +
                       (C3084 * C156 + C19721 * C289) * C19794) *
                          C5850 +
                      (C6755 + C6756) * C5851 + C6761 * C5852) *
                         C2057 -
                     ((C6759 + C6760) * C5852 + (C6758 + C6757) * C5851 +
                      (C6756 + C6755) * C5850) *
                         C2058) *
                        C19755 * C1521 +
                    (((C7715 + C7716) * C5850 + (C7717 + C7718) * C5851 +
                      ((C3084 * C7523 + C19721 * C7524) * C155 +
                       (C3084 * C7587 + C19721 * C7701) * C19794) *
                          C5852) *
                         C2058 -
                     ((C7718 + C7717) * C5852 + (C7716 + C7715) * C5851 +
                      ((C3084 * C157 + C19721 * C290) * C19794 +
                       (C3084 * C94 + C19721 * C99) * C155) *
                          C5850) *
                         C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
            C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 +
            C3082 * C837) *
               C19721 * C19805 * C2057 -
           (C3251 * C3930 + C4116 + C4116 + C3082 * C4112 + C3250 * C2593 +
            C4117 + C4117 + C3081 * C2820 + C3249 * C1071 + C4118 + C4118 +
            C3080 * C1277) *
               C19721 * C19805 * C2058) *
              C19755 * C1521 +
          ((C3249 * C1070 + C5071 + C5071 + C3080 * C1276 + C3250 * C2594 +
            C5072 + C5072 + C3081 * C2821 + C3251 * C4858 + C5073 + C5073 +
            C3082 * C5069) *
               C19721 * C19805 * C2058 -
           (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
            C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
               C19721 * C19805 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C19805 * C2057 -
           (C2305 * C79 + C2306 * C78 +
            (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C77) *
               C19805 * C2058) *
              C19755 * C1521 +
          ((C2306 * C77 + C2305 * C78 +
            (C332 * C2059 + C2300 + C2300 + C19794 * C2294) * C79) *
               C19805 * C2058 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
            C6819 * C5851 + C6820 * C5852) *
               C2057 -
           (C6821 * C5852 + C6820 * C5851 + C6819 * C5850) * C2058) *
              C19755 * C1521 +
          ((C7770 * C5850 + C7777 * C5851 +
            (C332 * C7523 + C7773 + C7773 + C19794 * C7768) * C19721 * C5852) *
               C2058 -
           (C7777 * C5852 + C7770 * C5851 + C356 * C19721 * C5850) * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3132 +
            (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
            C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
               C19721 * C2057 -
           ((C222 * C3983 + C19805 * C4159) * C3082 +
            (C222 * C3930 + C19805 * C4027) * C3134 +
            (C222 * C2655 + C19805 * C2876) * C3081 +
            (C222 * C2593 + C19805 * C2711) * C3133 +
            (C222 * C1133 + C19805 * C1327) * C3080 +
            (C222 * C1071 + C19805 * C1183) * C3132) *
               C19721 * C2058) *
              C19755 * C1521 +
          ((C2193 * C3132 + C2365 * C3080 +
            (C222 * C2594 + C19805 * C2712) * C3133 +
            (C222 * C2656 + C19805 * C2877) * C3081 +
            (C222 * C4858 + C19805 * C4966) * C3134 +
            (C222 * C4914 + C19805 * C5123) * C3082) *
               C19721 * C2058 -
           (C4639 * C3082 + C4465 * C3134 + C1829 * C3081 + C1657 * C3133 +
            C411 * C3080 + C246 * C3132) *
               C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C155 +
             (C222 * C156 + C19805 * C396) * C19794) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C2057 -
           ((C2366 + C2360) * C79 + (C2367 + C2363) * C78 +
            ((C222 * C1133 + C19805 * C1327) * C19794 +
             (C222 * C1071 + C19805 * C1183) * C155) *
                C77) *
               C2058) *
              C19755 * C1521 +
          (((C2363 + C2367) * C77 + (C2360 + C2366) * C78 +
            ((C222 * C2059 + C19805 * C2179) * C155 +
             (C222 * C2115 + C19805 * C2356) * C19794) *
                C79) *
               C2058 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
             C5934 * C1072 + C5852 * C1184) *
                C155 +
            (C5932 * C156 + C5850 * C396 + C5933 * C1133 + C5851 * C1327 +
             C5934 * C1134 + C5852 * C1328) *
                C19794) *
               C19721 * C2057 -
           ((C5934 * C6625 + C5852 * C6859 + C5933 * C1134 + C5851 * C1328 +
             C5932 * C1133 + C5850 * C1327) *
                C19794 +
            (C5934 * C6564 + C5852 * C6692 + C5933 * C1072 + C5851 * C1184 +
             C5932 * C1071 + C5850 * C1183) *
                C155) *
               C19721 * C2058) *
              C19755 * C1521 +
          (((C5932 * C1070 + C5850 * C1182 + C5933 * C1073 + C5851 * C1185 +
             C5934 * C7523 + C5852 * C7649) *
                C155 +
            (C5932 * C1132 + C5850 * C1326 + C5933 * C1135 + C5851 * C1329 +
             C5934 * C7587 + C5852 * C7827) *
                C19794) *
               C19721 * C2058 -
           ((C5934 * C1135 + C5852 * C1329 + C5933 * C1132 + C5851 * C1326 +
             C5932 * C157 + C5850 * C397) *
                C19794 +
            (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 + C5851 * C1182 +
             C5932 * C94 + C5850 * C224) *
                C155) *
               C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C222 +
                       (C3084 * C223 + C19721 * C455) * C19805) *
                          C3080 +
                      (C3780 + C3792) * C3081 + C3795 * C3082) *
                         C2057 -
                     (((C3084 * C4027 + C19721 * C4200) * C19805 +
                       (C3084 * C3930 + C19721 * C3933) * C222) *
                          C3082 +
                      ((C3084 * C2711 + C19721 * C2929) * C19805 +
                       (C3084 * C2593 + C19721 * C2596) * C222) *
                          C3081 +
                      ((C3084 * C1183 + C19721 * C1371) * C19805 +
                       (C3084 * C1071 + C19721 * C1077) * C222) *
                          C3080) *
                         C2058) *
                        C19755 * C1521 +
                    ((((C3084 * C1070 + C19721 * C1076) * C222 +
                       (C3084 * C1182 + C19721 * C1370) * C19805) *
                          C3080 +
                      ((C3084 * C2594 + C19721 * C2597) * C222 +
                       (C3084 * C2712 + C19721 * C2930) * C19805) *
                          C3081 +
                      ((C3084 * C4858 + C19721 * C4859) * C222 +
                       (C3084 * C4966 + C19721 * C5174) * C19805) *
                          C3082) *
                         C2058 -
                     ((C4700 + C4694) * C3082 + (C4699 + C4691) * C3081 +
                      ((C3084 * C224 + C19721 * C456) * C19805 +
                       (C3084 * C94 + C19721 * C99) * C222) *
                          C3080) *
                         C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C19805) *
                         C19794 * C2057 -
                     ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                       C88 * C1183 + C77 * C1371) *
                          C19805 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C222) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    (((C88 * C1070 + C77 * C1076 + C90 * C1069 + C78 * C1075 +
                       C92 * C2059 + C79 * C2060) *
                          C222 +
                      (C88 * C1182 + C77 * C1370 + C90 * C1181 + C78 * C1369 +
                       C92 * C2179 + C79 * C2417) *
                          C19805) *
                         C19794 * C2058 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C19805 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C5932 +
                      (C3084 * C223 + C19721 * C455) * C5850 + C6749 * C5933 +
                      C6908 * C5851 + C6751 * C5934 + C6909 * C5852) *
                         C19794 * C2057 -
                     (C6910 * C5852 + C6754 * C5934 + C6909 * C5851 +
                      C6751 * C5933 + C6908 * C5850 + C6749 * C5932) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    ((C7711 * C5932 + C7884 * C5850 + C7713 * C5933 +
                      C7885 * C5851 + (C3084 * C7523 + C19721 * C7524) * C5934 +
                      (C3084 * C7649 + C19721 * C7878) * C5852) *
                         C19794 * C2058 -
                     (C7885 * C5852 + C7713 * C5934 + C7884 * C5851 +
                      C7711 * C5933 + (C3084 * C224 + C19721 * C456) * C5850 +
                      (C3084 * C94 + C19721 * C99) * C5932) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
             C3134 * C631 + C3082 * C693) *
                C222 +
            (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
             C3134 * C743 + C3082 * C975) *
                C19805) *
               C19721 * C2057 -
           ((C3134 * C4027 + C3082 * C4241 + C3133 * C2711 + C3081 * C2982 +
             C3132 * C1183 + C3080 * C1415) *
                C19805 +
            (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 + C3081 * C2655 +
             C3132 * C1071 + C3080 * C1133) *
                C222) *
               C19721 * C2058) *
              C19755 * C1521 +
          (((C3132 * C1070 + C3080 * C1132 + C3133 * C2594 + C3081 * C2656 +
             C3134 * C4858 + C3082 * C4914) *
                C222 +
            (C3132 * C1182 + C3080 * C1414 + C3133 * C2712 + C3081 * C2983 +
             C3134 * C4966 + C3082 * C5225) *
                C19805) *
               C19721 * C2058 -
           ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
             C3132 * C224 + C3080 * C499) *
                C19805 +
            (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
             C3132 * C94 + C3080 * C157) *
                C222) *
               C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C19794 * C156) * C222 +
             (C155 * C223 + C19794 * C498) * C19805) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C2057 -
           ((C2478 + C2472) * C79 + (C2479 + C2475) * C78 +
            ((C155 * C1183 + C19794 * C1415) * C19805 +
             (C155 * C1071 + C19794 * C1133) * C222) *
                C77) *
               C2058) *
              C19755 * C1521 +
          (((C2475 + C2479) * C77 + (C2472 + C2478) * C78 +
            ((C155 * C2059 + C19794 * C2115) * C222 +
             (C155 * C2179 + C19794 * C2468) * C19805) *
                C79) *
               C2058 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C5932 +
            (C155 * C223 + C19794 * C498) * C5850 + C6642 * C5933 +
            C6957 * C5851 + C6644 * C5934 + C6958 * C5852) *
               C19721 * C2057 -
           (C6959 * C5852 + C6647 * C5934 + C6958 * C5851 + C6644 * C5933 +
            C6957 * C5850 + C6642 * C5932) *
               C19721 * C2058) *
              C19755 * C1521 +
          ((C2129 * C5932 + C2477 * C5850 + C7596 * C5933 + C7939 * C5851 +
            (C155 * C7523 + C19794 * C7587) * C5934 +
            (C155 * C7649 + C19794 * C7935) * C5852) *
               C19721 * C2058 -
           (C7939 * C5852 + C7596 * C5934 + C2477 * C5851 + C2129 * C5933 +
            C513 * C5850 + C179 * C5932) *
               C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
            C3891 * C3082) *
               C19721 * C2057 -
           ((C557 * C3930 + C4286 + C4286 + C19805 * C4282) * C3082 +
            (C557 * C2593 + C3039 + C3039 + C19805 * C3035) * C3081 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C3080) *
               C19721 * C2058) *
              C19755 * C1521 +
          ((C2541 * C3080 +
            (C557 * C2594 + C3040 + C3040 + C19805 * C3036) * C3081 +
            (C557 * C4858 + C5278 + C5278 + C19805 * C5276) * C3082) *
               C19721 * C2058 -
           (C4808 * C3082 + C2005 * C3081 + C581 * C3080) * C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
            C584 * C78 + C585 * C79) *
               C2057 -
           (C2542 * C79 + C2543 * C78 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C19794 * C77) *
               C2058) *
              C19755 * C1521 +
          ((C2543 * C77 + C2542 * C78 +
            (C557 * C2059 + C2535 + C2535 + C19805 * C2529) * C19794 * C79) *
               C2058 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
            C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
            C5852 * C1460) *
               C19794 * C19721 * C2057 -
           (C6165 * C6564 + C7000 + C7000 + C5852 * C6997 + C6164 * C1072 +
            C7001 + C7001 + C5851 * C1460 + C6163 * C1071 + C7002 + C7002 +
            C5850 * C1459) *
               C19794 * C19721 * C2058) *
              C19755 * C1521 +
          ((C6163 * C1070 + C7991 + C7991 + C5850 * C1458 + C6164 * C1073 +
            C7992 + C7992 + C5851 * C1461 + C6165 * C7523 + C7993 + C7993 +
            C5852 * C7989) *
               C19794 * C19721 * C2058 -
           (C6165 * C1073 + C6170 + C6170 + C5852 * C1461 + C6164 * C1070 +
            C6171 + C6171 + C5851 * C1458 + C6163 * C94 + C6172 + C6172 +
            C5850 * C559) *
               C19794 * C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C19769 * C624 -
          (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
           C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
              C19805 * C19794 * C19769 * C625 +
          (C87 * C631 + C650 + C650 + C77 * C643 + C89 * C632 + C651 + C651 +
           C78 * C644 + C91 * C633 + C652 + C652 + C79 * C645) *
              C19805 * C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C19769 * C19755 * C84 -
          (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
           C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
              C19805 * C19794 * C19769 * C19755 * C85 +
          (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
           C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
              C19805 * C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           (C3083 * C630 + C3087 + C3087 + C19721 * C642) * C19805 * C3081 +
           (C3083 * C631 + C3088 + C3088 + C19721 * C643) * C19805 * C3082) *
              C19769 * C19755 * C84 -
          ((C3083 * C632 + C3089 + C3089 + C19721 * C644) * C19805 * C3082 +
           (C3083 * C629 + C3090 + C3090 + C19721 * C641) * C19805 * C3081 +
           (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
              C19769 * C19755 * C85 +
          ((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C19805 * C3080 +
           (C3083 * C628 + C3093 + C3093 + C19721 * C640) * C19805 * C3081 +
           (C3083 * C633 + C3094 + C3094 + C19721 * C645) * C19805 * C3082) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           C3475 * C3081 + C3476 * C3082) *
              C19769 * C624 -
          (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C19769 * C625 +
          (C3476 * C3080 + C3477 * C3081 +
           (C3083 * C3452 + C3465 + C3465 + C19721 * C3456) * C19805 * C3082) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
           (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C5851 +
           (C3083 * C1072 + C3943 + C3943 + C19721 * C1084) * C5852) *
              C19794 * C19769 * C19755 * C84 -
          ((C3083 * C1073 + C5854 + C5854 + C19721 * C1085) * C5852 +
           (C3083 * C1070 + C4862 + C4862 + C19721 * C1082) * C5851 +
           (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C5850) *
              C19794 * C19769 * C19755 * C85 +
          ((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C5850 +
           (C3083 * C1069 + C5855 + C5855 + C19721 * C1081) * C5851 +
           (C3083 * C1074 + C5856 + C5856 + C19721 * C1086) * C5852) *
              C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C5850 +
           (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C5851 +
           (C3083 * C1072 + C3943 + C3943 + C19721 * C1084) * C5852) *
              C19794 * C19769 * C624 -
          ((C3083 * C3931 + C3944 + C3944 + C19721 * C3937) * C5852 +
           C5342 * C5851 + C3472 * C5850) *
              C19794 * C19769 * C625 +
          (C3473 * C5850 + C5341 * C5851 +
           (C3083 * C3932 + C3945 + C3945 + C19721 * C3938) * C5852) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C19769 * C624 -
                    ((C155 * C634 + C19794 * C696) * C79 +
                     (C155 * C628 + C19794 * C690) * C92 +
                     (C155 * C635 + C19794 * C697) * C78 +
                     (C155 * C629 + C19794 * C691) * C90 +
                     (C155 * C636 + C19794 * C698) * C77 +
                     (C155 * C630 + C19794 * C692) * C88) *
                        C19805 * C19769 * C625 +
                    ((C155 * C631 + C19794 * C693) * C88 +
                     (C155 * C637 + C19794 * C699) * C77 +
                     (C155 * C632 + C19794 * C694) * C90 +
                     (C155 * C638 + C19794 * C700) * C78 +
                     (C155 * C633 + C19794 * C695) * C92 +
                     (C155 * C639 + C19794 * C701) * C79) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C19769 * C19755 * C84 -
                    (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                     C180 * C77 + C179 * C88) *
                        C19805 * C19769 * C19755 * C85 +
                    (C181 * C88 + C182 * C77 + C184 * C90 + C183 * C78 +
                     (C155 * C97 + C19794 * C160) * C92 +
                     (C155 * C102 + C19794 * C165) * C79) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                      C3081 * C697 + C3132 * C99 + C3080 * C162) *
                         C19721 +
                     (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                      C3081 * C691 + C3132 * C94 + C3080 * C157) *
                         C3084) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
                      C3134 * C633 + C3082 * C695) *
                         C3084 +
                     (C3132 * C100 + C3080 * C163 + C3133 * C634 +
                      C3081 * C696 + C3134 * C639 + C3082 * C701) *
                         C19721) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C19769 * C624 -
                    ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                      C3081 * C699 + C3132 * C636 + C3080 * C698) *
                         C19721 +
                     (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                      C3081 * C693 + C3132 * C630 + C3080 * C692) *
                         C3084) *
                        C19805 * C19769 * C625 +
                    ((C3132 * C631 + C3080 * C693 + C3133 * C3451 +
                      C3081 * C3515 + C3134 * C3452 + C3082 * C3516) *
                         C3084 +
                     (C3132 * C637 + C3080 * C699 + C3133 * C3453 +
                      C3081 * C3517 + C3134 * C3454 + C3082 * C3518) *
                         C19721) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C3084 +
                      (C155 * C98 + C19794 * C161) * C19721) *
                         C5850 +
                     ((C155 * C1071 + C19794 * C1133) * C3084 +
                      (C155 * C1077 + C19794 * C1139) * C19721) *
                         C5851 +
                     ((C155 * C1072 + C19794 * C1134) * C3084 +
                      (C155 * C1078 + C19794 * C1140) * C19721) *
                         C5852) *
                        C19769 * C19755 * C84 -
                    (((C155 * C1079 + C19794 * C1141) * C19721 +
                      (C155 * C1073 + C19794 * C1135) * C3084) *
                         C5852 +
                     (C2128 * C19721 + C2129 * C3084) * C5851 +
                     (C180 * C19721 + C179 * C3084) * C5850) *
                        C19769 * C19755 * C85 +
                    ((C181 * C3084 + C182 * C19721) * C5850 +
                     (C2127 * C3084 + C2126 * C19721) * C5851 +
                     ((C155 * C1074 + C19794 * C1136) * C3084 +
                      (C155 * C1080 + C19794 * C1142) * C19721) *
                         C5852) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C3084 +
                      (C155 * C98 + C19794 * C161) * C19721) *
                         C5850 +
                     ((C155 * C1071 + C19794 * C1133) * C3084 +
                      (C155 * C1077 + C19794 * C1139) * C19721) *
                         C5851 +
                     ((C155 * C1072 + C19794 * C1134) * C3084 +
                      (C155 * C1078 + C19794 * C1140) * C19721) *
                         C5852) *
                        C19769 * C624 -
                    (((C155 * C3934 + C19794 * C3987) * C19721 +
                      (C155 * C3931 + C19794 * C3984) * C3084) *
                         C5852 +
                     ((C155 * C2596 + C19794 * C2658) * C19721 +
                      (C155 * C2593 + C19794 * C2655) * C3084) *
                         C5851 +
                     ((C155 * C636 + C19794 * C698) * C19721 +
                      (C155 * C630 + C19794 * C692) * C3084) *
                         C5850) *
                        C19769 * C625 +
                    (((C155 * C631 + C19794 * C693) * C3084 +
                      (C155 * C637 + C19794 * C699) * C19721) *
                         C5850 +
                     ((C155 * C3930 + C19794 * C3983) * C3084 +
                      (C155 * C3933 + C19794 * C3986) * C19721) *
                         C5851 +
                     ((C155 * C3932 + C19794 * C3985) * C3084 +
                      (C155 * C3935 + C19794 * C3988) * C19721) *
                         C5852) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C19769 * C624 -
                    ((C222 * C634 + C19805 * C746) * C79 +
                     (C222 * C628 + C19805 * C740) * C92 +
                     (C222 * C635 + C19805 * C747) * C78 +
                     (C222 * C629 + C19805 * C741) * C90 +
                     (C222 * C636 + C19805 * C748) * C77 +
                     (C222 * C630 + C19805 * C742) * C88) *
                        C19794 * C19769 * C625 +
                    ((C222 * C631 + C19805 * C743) * C88 +
                     (C222 * C637 + C19805 * C749) * C77 +
                     (C222 * C632 + C19805 * C744) * C90 +
                     (C222 * C638 + C19805 * C750) * C78 +
                     (C222 * C633 + C19805 * C745) * C92 +
                     (C222 * C639 + C19805 * C751) * C79) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C19769 * C19755 * C84 -
                    (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                     C247 * C77 + C246 * C88) *
                        C19794 * C19769 * C19755 * C85 +
                    (C248 * C88 + C249 * C77 + C251 * C90 + C250 * C78 +
                     (C222 * C97 + C19805 * C227) * C92 +
                     (C222 * C102 + C19805 * C232) * C79) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     ((C222 * C630 + C19805 * C742) * C3084 +
                      (C222 * C636 + C19805 * C748) * C19721) *
                         C3081 +
                     ((C222 * C631 + C19805 * C743) * C3084 +
                      (C222 * C637 + C19805 * C749) * C19721) *
                         C3082) *
                        C19769 * C19755 * C84 -
                    (((C222 * C638 + C19805 * C750) * C19721 +
                      (C222 * C632 + C19805 * C744) * C3084) *
                         C3082 +
                     (C1656 * C19721 + C1657 * C3084) * C3081 +
                     (C247 * C19721 + C246 * C3084) * C3080) *
                        C19769 * C19755 * C85 +
                    ((C248 * C3084 + C249 * C19721) * C3080 +
                     (C1655 * C3084 + C1654 * C19721) * C3081 +
                     ((C222 * C633 + C19805 * C745) * C3084 +
                      (C222 * C639 + C19805 * C751) * C19721) *
                         C3082) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     (C3580 + C3581) * C3081 + C3586 * C3082) *
                        C19769 * C624 -
                    ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                     (C3581 + C3580) * C3080) *
                        C19769 * C625 +
                    (C3586 * C3080 + (C3585 + C3584) * C3081 +
                     ((C222 * C3452 + C19805 * C3558) * C3084 +
                      (C222 * C3454 + C19805 * C3560) * C19721) *
                         C3082) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                      C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                         C3084 +
                     (C5932 * C98 + C5850 * C228 + C5933 * C1077 +
                      C5851 * C1189 + C5934 * C1078 + C5852 * C1190) *
                         C19721) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C5934 * C1079 + C5852 * C1191 + C5933 * C1076 +
                      C5851 * C1188 + C5932 * C99 + C5850 * C229) *
                         C19721 +
                     (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 +
                      C5851 * C1182 + C5932 * C94 + C5850 * C224) *
                         C3084) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C5932 * C95 + C5850 * C225 + C5933 * C1069 +
                      C5851 * C1181 + C5934 * C1074 + C5852 * C1186) *
                         C3084 +
                     (C5932 * C100 + C5850 * C230 + C5933 * C1075 +
                      C5851 * C1187 + C5934 * C1080 + C5852 * C1192) *
                         C19721) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C5932 * C93 + C5850 * C223 + C5933 * C1071 +
                      C5851 * C1183 + C5934 * C1072 + C5852 * C1184) *
                         C3084 +
                     (C5932 * C98 + C5850 * C228 + C5933 * C1077 +
                      C5851 * C1189 + C5934 * C1078 + C5852 * C1190) *
                         C19721) *
                        C19794 * C19769 * C624 -
                    ((C5934 * C3934 + C5852 * C4031 + C5933 * C2596 +
                      C5851 * C2714 + C5932 * C636 + C5850 * C748) *
                         C19721 +
                     (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 +
                      C5851 * C2711 + C5932 * C630 + C5850 * C742) *
                         C3084) *
                        C19794 * C19769 * C625 +
                    ((C5932 * C631 + C5850 * C743 + C5933 * C3930 +
                      C5851 * C4027 + C5934 * C3932 + C5852 * C4029) *
                         C3084 +
                     (C5932 * C637 + C5850 * C749 + C5933 * C3933 +
                      C5851 * C4030 + C5934 * C3935 + C5852 * C4032) *
                         C19721) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C19769 * C624 -
                    ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                      C88 * C692 + C77 * C792) *
                         C19794 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C155) *
                        C19805 * C19769 * C625 +
                    ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                      C92 * C633 + C79 * C639) *
                         C155 +
                     (C88 * C693 + C77 * C793 + C90 * C694 + C78 * C794 +
                      C92 * C695 + C79 * C795) *
                         C19794) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                      C88 * C157 + C77 * C290) *
                         C19794 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C155) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C155 +
                     (C88 * C158 + C77 * C291 + C90 * C159 + C78 * C292 +
                      C92 * C160 + C79 * C293) *
                         C19794) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 +
                     (C3084 * C630 + C19721 * C636) * C3133 +
                     (C3084 * C692 + C19721 * C792) * C3081 +
                     (C3084 * C631 + C19721 * C637) * C3134 +
                     (C3084 * C693 + C19721 * C793) * C3082) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C3084 * C694 + C19721 * C794) * C3082 +
                     (C3084 * C632 + C19721 * C638) * C3134 +
                     (C3084 * C691 + C19721 * C791) * C3081 +
                     (C3084 * C629 + C19721 * C635) * C3133 +
                     (C3084 * C157 + C19721 * C290) * C3080 +
                     (C3084 * C94 + C19721 * C99) * C3132) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C3084 * C95 + C19721 * C100) * C3132 +
                     (C3084 * C158 + C19721 * C291) * C3080 +
                     (C3084 * C628 + C19721 * C634) * C3133 +
                     (C3084 * C690 + C19721 * C790) * C3081 +
                     (C3084 * C633 + C19721 * C639) * C3134 +
                     (C3084 * C695 + C19721 * C795) * C3082) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                     C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                        C19805 * C19769 * C624 -
                    (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                     C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                        C19805 * C19769 * C625 +
                    (C3641 * C3132 + C3642 * C3080 + C3644 * C3133 +
                     C3643 * C3081 + (C3084 * C3452 + C19721 * C3454) * C3134 +
                     (C3084 * C3516 + C19721 * C3625) * C3082) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C155 +
                      (C3084 * C156 + C19721 * C289) * C19794) *
                         C5850 +
                     ((C3084 * C1071 + C19721 * C1077) * C155 +
                      (C3084 * C1133 + C19721 * C1233) * C19794) *
                         C5851 +
                     ((C3084 * C1072 + C19721 * C1078) * C155 +
                      (C3084 * C1134 + C19721 * C1234) * C19794) *
                         C5852) *
                        C19769 * C19755 * C84 -
                    (((C3084 * C1135 + C19721 * C1235) * C19794 +
                      (C3084 * C1073 + C19721 * C1079) * C155) *
                         C5852 +
                     ((C3084 * C1132 + C19721 * C1232) * C19794 +
                      (C3084 * C1070 + C19721 * C1076) * C155) *
                         C5851 +
                     ((C3084 * C157 + C19721 * C290) * C19794 +
                      (C3084 * C94 + C19721 * C99) * C155) *
                         C5850) *
                        C19769 * C19755 * C85 +
                    (((C3084 * C95 + C19721 * C100) * C155 +
                      (C3084 * C158 + C19721 * C291) * C19794) *
                         C5850 +
                     ((C3084 * C1069 + C19721 * C1075) * C155 +
                      (C3084 * C1131 + C19721 * C1231) * C19794) *
                         C5851 +
                     ((C3084 * C1074 + C19721 * C1080) * C155 +
                      (C3084 * C1136 + C19721 * C1236) * C19794) *
                         C5852) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C155 +
                      (C3084 * C156 + C19721 * C289) * C19794) *
                         C5850 +
                     ((C3084 * C1071 + C19721 * C1077) * C155 +
                      (C3084 * C1133 + C19721 * C1233) * C19794) *
                         C5851 +
                     ((C3084 * C1072 + C19721 * C1078) * C155 +
                      (C3084 * C1134 + C19721 * C1234) * C19794) *
                         C5852) *
                        C19769 * C624 -
                    (((C3084 * C3984 + C19721 * C4072) * C19794 +
                      (C3084 * C3931 + C19721 * C3934) * C155) *
                         C5852 +
                     (C5526 * C19794 + C5527 * C155) * C5851 +
                     (C3640 * C19794 + C3639 * C155) * C5850) *
                        C19769 * C625 +
                    ((C3641 * C155 + C3642 * C19794) * C5850 +
                     (C5525 * C155 + C5524 * C19794) * C5851 +
                     ((C3084 * C3932 + C19721 * C3935) * C155 +
                      (C3084 * C3985 + C19721 * C4073) * C19794) *
                         C5852) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C19769 * C624 -
          ((C332 * C628 + C841 + C841 + C19794 * C834) * C79 +
           (C332 * C629 + C842 + C842 + C19794 * C835) * C78 +
           (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
              C19805 * C19769 * C625 +
          ((C332 * C631 + C844 + C844 + C19794 * C837) * C77 +
           (C332 * C632 + C845 + C845 + C19794 * C838) * C78 +
           (C332 * C633 + C846 + C846 + C19794 * C839) * C79) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C19769 * C19755 * C84 -
          (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C19769 * C19755 *
              C85 +
          (C357 * C77 + C358 * C78 +
           (C332 * C97 + C349 + C349 + C19794 * C337) * C79) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C19755 * C84 -
          (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
           C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
              C19721 * C19805 * C19769 * C19755 * C85 +
          (C3249 * C95 + C3259 + C3259 + C3080 * C335 + C3250 * C628 + C3260 +
           C3260 + C3081 * C834 + C3251 * C633 + C3261 + C3261 + C3082 * C839) *
              C19721 * C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C624 -
          (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
           C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
           C3080 * C836) *
              C19721 * C19805 * C19769 * C625 +
          (C3249 * C631 + C3688 + C3688 + C3080 * C837 + C3250 * C3451 + C3689 +
           C3689 + C3081 * C3682 + C3251 * C3452 + C3690 + C3690 +
           C3082 * C3683) *
              C19721 * C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
           (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C19721 * C5851 +
           (C332 * C1072 + C1285 + C1285 + C19794 * C1278) * C19721 * C5852) *
              C19769 * C19755 * C84 -
          ((C332 * C1073 + C1286 + C1286 + C19794 * C1279) * C19721 * C5852 +
           C2306 * C19721 * C5851 + C356 * C19721 * C5850) *
              C19769 * C19755 * C85 +
          (C357 * C19721 * C5850 + C2305 * C19721 * C5851 +
           (C332 * C1074 + C1287 + C1287 + C19794 * C1280) * C19721 * C5852) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C19721 * C5850 +
           (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C19721 * C5851 +
           (C332 * C1072 + C1285 + C1285 + C19794 * C1278) * C19721 * C5852) *
              C19769 * C624 -
          ((C332 * C3931 + C6366 + C6366 + C19794 * C4113) * C19721 * C5852 +
           (C332 * C2593 + C2824 + C2824 + C19794 * C2820) * C19721 * C5851 +
           (C332 * C630 + C843 + C843 + C19794 * C836) * C19721 * C5850) *
              C19769 * C625 +
          ((C332 * C631 + C844 + C844 + C19794 * C837) * C19721 * C5850 +
           (C332 * C3930 + C6367 + C6367 + C19794 * C4112) * C19721 * C5851 +
           (C332 * C3932 + C6368 + C6368 + C19794 * C4114) * C19721 * C5852) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C19769 * C624 -
          (((C222 * C690 + C19805 * C884) * C19794 +
            (C222 * C628 + C19805 * C740) * C155) *
               C79 +
           ((C222 * C691 + C19805 * C885) * C19794 +
            (C222 * C629 + C19805 * C741) * C155) *
               C78 +
           ((C222 * C692 + C19805 * C886) * C19794 +
            (C222 * C630 + C19805 * C742) * C155) *
               C77) *
              C19769 * C625 +
          (((C222 * C631 + C19805 * C743) * C155 +
            (C222 * C693 + C19805 * C887) * C19794) *
               C77 +
           ((C222 * C632 + C19805 * C744) * C155 +
            (C222 * C694 + C19805 * C888) * C19794) *
               C78 +
           ((C222 * C633 + C19805 * C745) * C155 +
            (C222 * C695 + C19805 * C889) * C19794) *
               C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C19769 * C19755 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C19769 * C19755 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C19805 * C227) * C155 +
            (C222 * C160 + C19805 * C400) * C19794) *
               C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 +
           (C222 * C630 + C19805 * C742) * C3133 +
           (C222 * C692 + C19805 * C886) * C3081 +
           (C222 * C631 + C19805 * C743) * C3134 +
           (C222 * C693 + C19805 * C887) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C222 * C694 + C19805 * C888) * C3082 +
           (C222 * C632 + C19805 * C744) * C3134 + C1829 * C3081 +
           C1657 * C3133 + C411 * C3080 + C246 * C3132) *
              C19721 * C19769 * C19755 * C85 +
          (C248 * C3132 + C412 * C3080 + C1655 * C3133 + C1828 * C3081 +
           (C222 * C633 + C19805 * C745) * C3134 +
           (C222 * C695 + C19805 * C889) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
           C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
              C19721 * C19769 * C624 -
          (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 + C3576 * C3133 +
           C3737 * C3080 + C3574 * C3132) *
              C19721 * C19769 * C625 +
          (C3576 * C3132 + C3738 * C3080 + C3579 * C3133 + C3739 * C3081 +
           (C222 * C3452 + C19805 * C3558) * C3134 +
           (C222 * C3516 + C19805 * C3729) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
            C5934 * C1072 + C5852 * C1184) *
               C155 +
           (C5932 * C156 + C5850 * C396 + C5933 * C1133 + C5851 * C1327 +
            C5934 * C1134 + C5852 * C1328) *
               C19794) *
              C19721 * C19769 * C19755 * C84 -
          ((C5934 * C1135 + C5852 * C1329 + C5933 * C1132 + C5851 * C1326 +
            C5932 * C157 + C5850 * C397) *
               C19794 +
           (C5934 * C1073 + C5852 * C1185 + C5933 * C1070 + C5851 * C1182 +
            C5932 * C94 + C5850 * C224) *
               C155) *
              C19721 * C19769 * C19755 * C85 +
          ((C5932 * C95 + C5850 * C225 + C5933 * C1069 + C5851 * C1181 +
            C5934 * C1074 + C5852 * C1186) *
               C155 +
           (C5932 * C158 + C5850 * C398 + C5933 * C1131 + C5851 * C1325 +
            C5934 * C1136 + C5852 * C1330) *
               C19794) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5932 * C93 + C5850 * C223 + C5933 * C1071 + C5851 * C1183 +
            C5934 * C1072 + C5852 * C1184) *
               C155 +
           (C5932 * C156 + C5850 * C396 + C5933 * C1133 + C5851 * C1327 +
            C5934 * C1134 + C5852 * C1328) *
               C19794) *
              C19721 * C19769 * C624 -
          ((C5934 * C3984 + C5852 * C4160 + C5933 * C2655 + C5851 * C2876 +
            C5932 * C692 + C5850 * C886) *
               C19794 +
           (C5934 * C3931 + C5852 * C4028 + C5933 * C2593 + C5851 * C2711 +
            C5932 * C630 + C5850 * C742) *
               C155) *
              C19721 * C19769 * C625 +
          ((C5932 * C631 + C5850 * C743 + C5933 * C3930 + C5851 * C4027 +
            C5934 * C3932 + C5852 * C4029) *
               C155 +
           (C5932 * C693 + C5850 * C887 + C5933 * C3983 + C5851 * C4159 +
            C5934 * C3985 + C5852 * C4161) *
               C19794) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C19769 * C624 -
                    ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                      C88 * C742 + C77 * C930) *
                         C19805 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C222) *
                        C19794 * C19769 * C625 +
                    ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                      C92 * C633 + C79 * C639) *
                         C222 +
                     (C88 * C743 + C77 * C931 + C90 * C744 + C78 * C932 +
                      C92 * C745 + C79 * C933) *
                         C19805) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                      C88 * C224 + C77 * C456) *
                         C19805 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C222) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C222 +
                     (C88 * C225 + C77 * C457 + C90 * C226 + C78 * C458 +
                      C92 * C227 + C79 * C459) *
                         C19805) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     ((C3084 * C630 + C19721 * C636) * C222 +
                      (C3084 * C742 + C19721 * C930) * C19805) *
                         C3081 +
                     ((C3084 * C631 + C19721 * C637) * C222 +
                      (C3084 * C743 + C19721 * C931) * C19805) *
                         C3082) *
                        C19769 * C19755 * C84 -
                    (((C3084 * C744 + C19721 * C932) * C19805 +
                      (C3084 * C632 + C19721 * C638) * C222) *
                         C3082 +
                     ((C3084 * C741 + C19721 * C929) * C19805 +
                      (C3084 * C629 + C19721 * C635) * C222) *
                         C3081 +
                     ((C3084 * C224 + C19721 * C456) * C19805 +
                      (C3084 * C94 + C19721 * C99) * C222) *
                         C3080) *
                        C19769 * C19755 * C85 +
                    (((C3084 * C95 + C19721 * C100) * C222 +
                      (C3084 * C225 + C19721 * C457) * C19805) *
                         C3080 +
                     ((C3084 * C628 + C19721 * C634) * C222 +
                      (C3084 * C740 + C19721 * C928) * C19805) *
                         C3081 +
                     ((C3084 * C633 + C19721 * C639) * C222 +
                      (C3084 * C745 + C19721 * C933) * C19805) *
                         C3082) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     (C3780 + C3792) * C3081 + C3795 * C3082) *
                        C19769 * C624 -
                    ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                     (C3792 + C3780) * C3080) *
                        C19769 * C625 +
                    (C3795 * C3080 + (C3788 + C3794) * C3081 +
                     ((C3084 * C3452 + C19721 * C3454) * C222 +
                      (C3084 * C3558 + C19721 * C3778) * C19805) *
                         C3082) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C5932 +
                     (C3084 * C223 + C19721 * C455) * C5850 +
                     (C3084 * C1071 + C19721 * C1077) * C5933 +
                     (C3084 * C1183 + C19721 * C1371) * C5851 +
                     (C3084 * C1072 + C19721 * C1078) * C5934 +
                     (C3084 * C1184 + C19721 * C1372) * C5852) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C3084 * C1185 + C19721 * C1373) * C5852 +
                     (C3084 * C1073 + C19721 * C1079) * C5934 +
                     (C3084 * C1182 + C19721 * C1370) * C5851 +
                     (C3084 * C1070 + C19721 * C1076) * C5933 +
                     (C3084 * C224 + C19721 * C456) * C5850 +
                     (C3084 * C94 + C19721 * C99) * C5932) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C3084 * C95 + C19721 * C100) * C5932 +
                     (C3084 * C225 + C19721 * C457) * C5850 +
                     (C3084 * C1069 + C19721 * C1075) * C5933 +
                     (C3084 * C1181 + C19721 * C1369) * C5851 +
                     (C3084 * C1074 + C19721 * C1080) * C5934 +
                     (C3084 * C1186 + C19721 * C1374) * C5852) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C5932 +
                     (C3084 * C223 + C19721 * C455) * C5850 +
                     (C3084 * C1071 + C19721 * C1077) * C5933 +
                     (C3084 * C1183 + C19721 * C1371) * C5851 +
                     (C3084 * C1072 + C19721 * C1078) * C5934 +
                     (C3084 * C1184 + C19721 * C1372) * C5852) *
                        C19794 * C19769 * C624 -
                    ((C3084 * C4028 + C19721 * C4201) * C5852 +
                     (C3084 * C3931 + C19721 * C3934) * C5934 + C5697 * C5851 +
                     C5527 * C5933 + C3789 * C5850 + C3639 * C5932) *
                        C19794 * C19769 * C625 +
                    (C3641 * C5932 + C3790 * C5850 + C5525 * C5933 +
                     C5696 * C5851 + (C3084 * C3932 + C19721 * C3935) * C5934 +
                     (C3084 * C4029 + C19721 * C4202) * C5852) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C19769 * C624 -
          (((C155 * C740 + C19794 * C972) * C19805 +
            (C155 * C628 + C19794 * C690) * C222) *
               C79 +
           ((C155 * C741 + C19794 * C973) * C19805 +
            (C155 * C629 + C19794 * C691) * C222) *
               C78 +
           ((C155 * C742 + C19794 * C974) * C19805 +
            (C155 * C630 + C19794 * C692) * C222) *
               C77) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C222 +
            (C155 * C743 + C19794 * C975) * C19805) *
               C77 +
           ((C155 * C632 + C19794 * C694) * C222 +
            (C155 * C744 + C19794 * C976) * C19805) *
               C78 +
           ((C155 * C633 + C19794 * C695) * C222 +
            (C155 * C745 + C19794 * C977) * C19805) *
               C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C19769 * C19755 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C19769 * C19755 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C19794 * C160) * C222 +
            (C155 * C227 + C19794 * C502) * C19805) *
               C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C19769 * C19755 * C84 -
          ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
            C3132 * C224 + C3080 * C499) *
               C19805 +
           (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
            C3132 * C94 + C3080 * C157) *
               C222) *
              C19721 * C19769 * C19755 * C85 +
          ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
            C3134 * C633 + C3082 * C695) *
               C222 +
           (C3132 * C225 + C3080 * C500 + C3133 * C740 + C3081 * C972 +
            C3134 * C745 + C3082 * C977) *
               C19805) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C19769 * C624 -
          ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 + C3081 * C975 +
            C3132 * C742 + C3080 * C974) *
               C19805 +
           (C3134 * C3451 + C3082 * C3515 + C3133 * C631 + C3081 * C693 +
            C3132 * C630 + C3080 * C692) *
               C222) *
              C19721 * C19769 * C625 +
          ((C3132 * C631 + C3080 * C693 + C3133 * C3451 + C3081 * C3515 +
            C3134 * C3452 + C3082 * C3516) *
               C222 +
           (C3132 * C743 + C3080 * C975 + C3133 * C3557 + C3081 * C3833 +
            C3134 * C3558 + C3082 * C3834) *
               C19805) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C19794 * C156) * C5932 +
           (C155 * C223 + C19794 * C498) * C5850 +
           (C155 * C1071 + C19794 * C1133) * C5933 +
           (C155 * C1183 + C19794 * C1415) * C5851 +
           (C155 * C1072 + C19794 * C1134) * C5934 +
           (C155 * C1184 + C19794 * C1416) * C5852) *
              C19721 * C19769 * C19755 * C84 -
          ((C155 * C1185 + C19794 * C1417) * C5852 +
           (C155 * C1073 + C19794 * C1135) * C5934 + C2477 * C5851 +
           C2129 * C5933 + C513 * C5850 + C179 * C5932) *
              C19721 * C19769 * C19755 * C85 +
          (C181 * C5932 + C514 * C5850 + C2127 * C5933 + C2476 * C5851 +
           (C155 * C1074 + C19794 * C1136) * C5934 +
           (C155 * C1186 + C19794 * C1418) * C5852) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C155 * C93 + C19794 * C156) * C5932 +
           (C155 * C223 + C19794 * C498) * C5850 +
           (C155 * C1071 + C19794 * C1133) * C5933 +
           (C155 * C1183 + C19794 * C1415) * C5851 +
           (C155 * C1072 + C19794 * C1134) * C5934 +
           (C155 * C1184 + C19794 * C1416) * C5852) *
              C19721 * C19769 * C624 -
          ((C155 * C4028 + C19794 * C4242) * C5852 +
           (C155 * C3931 + C19794 * C3984) * C5934 +
           (C155 * C2711 + C19794 * C2982) * C5851 +
           (C155 * C2593 + C19794 * C2655) * C5933 +
           (C155 * C742 + C19794 * C974) * C5850 +
           (C155 * C630 + C19794 * C692) * C5932) *
              C19721 * C19769 * C625 +
          ((C155 * C631 + C19794 * C693) * C5932 +
           (C155 * C743 + C19794 * C975) * C5850 +
           (C155 * C3930 + C19794 * C3983) * C5933 +
           (C155 * C4027 + C19794 * C4241) * C5851 +
           (C155 * C3932 + C19794 * C3985) * C5934 +
           (C155 * C4029 + C19794 * C4243) * C5852) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C19769 * C624 -
          ((C557 * C628 + C1023 + C1023 + C19805 * C1016) * C19794 * C79 +
           (C557 * C629 + C1024 + C1024 + C19805 * C1017) * C19794 * C78 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
              C19769 * C625 +
          ((C557 * C631 + C1026 + C1026 + C19805 * C1019) * C19794 * C77 +
           (C557 * C632 + C1027 + C1027 + C19805 * C1020) * C19794 * C78 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C19794 * C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C19769 * C19755 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C19769 * C19755 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C19805 * C562) * C19794 * C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C3081 +
           (C557 * C631 + C1026 + C1026 + C19805 * C1019) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C557 * C632 + C1027 + C1027 + C19805 * C1020) * C3082 +
           C2005 * C3081 + C581 * C3080) *
              C19721 * C19769 * C19755 * C85 +
          (C582 * C3080 + C2004 * C3081 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
           C3891 * C3082) *
              C19721 * C19769 * C624 -
          (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C19769 *
              C625 +
          (C3891 * C3080 + C3892 * C3081 +
           (C557 * C3452 + C3883 + C3883 + C19805 * C3874) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
           C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
           C5852 * C1460) *
              C19794 * C19721 * C19769 * C19755 * C84 -
          (C6165 * C1073 + C6170 + C6170 + C5852 * C1461 + C6164 * C1070 +
           C6171 + C6171 + C5851 * C1458 + C6163 * C94 + C6172 + C6172 +
           C5850 * C559) *
              C19794 * C19721 * C19769 * C19755 * C85 +
          (C6163 * C95 + C6173 + C6173 + C5850 * C560 + C6164 * C1069 + C6174 +
           C6174 + C5851 * C1457 + C6165 * C1074 + C6175 + C6175 +
           C5852 * C1462) *
              C19794 * C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6163 * C93 + C6167 + C6167 + C5850 * C558 + C6164 * C1071 + C6168 +
           C6168 + C5851 * C1459 + C6165 * C1072 + C6169 + C6169 +
           C5852 * C1460) *
              C19794 * C19721 * C19769 * C624 -
          (C6165 * C3931 + C6521 + C6521 + C5852 * C4283 + C6164 * C2593 +
           C6522 + C6522 + C5851 * C3035 + C6163 * C630 + C6523 + C6523 +
           C5850 * C1018) *
              C19794 * C19721 * C19769 * C625 +
          (C6163 * C631 + C6524 + C6524 + C5850 * C1019 + C6164 * C3930 +
           C6525 + C6525 + C5851 * C4282 + C6165 * C3932 + C6526 + C6526 +
           C5852 * C4284) *
              C19794 * C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C8567 * C93 + C8572 + C8572 + C8563 * C103 +
                       C8569 * C94 + C8573 + C8573 + C8564 * C104) *
                          C12050 +
                      (C13058 + C13059) * C12051) *
                         C19794 * C19769 * C1519 -
                     ((C11445 + C11446) * C12051 + (C9135 + C9134) * C12050) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    (((C10133 + C10134) * C12050 +
                      (C8567 * C2594 + C10789 + C10789 + C8563 * C2600 +
                       C8569 * C2595 + C10790 + C10790 + C8564 * C2601) *
                          C12051) *
                         C19794 * C19769 * C1520 -
                     ((C8569 * C1069 + C10788 + C10788 + C8564 * C1081 +
                       C8567 * C1070 + C10787 + C10787 + C8563 * C1082) *
                          C12051 +
                      (C8569 * C95 + C8578 + C8578 + C8564 * C105 +
                       C8567 * C94 + C8579 + C8579 + C8563 * C104) *
                          C12050) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C19794 * C156) * C8568 +
             (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
             C180 * C8564) *
                C12050 +
            (C13112 + C13113 + C13114 + C13115) * C12051) *
               C19769 * C1519 -
           ((C13654 * C8564 + C13655 * C8570 + C8114 * C8563 + C8113 * C8568) *
                C12051 +
            (C1592 * C8564 + C1593 * C8570 +
             (C155 * C636 + C19794 * C698) * C8563 +
             (C155 * C630 + C19794 * C692) * C8568) *
                C12050) *
               C19769 * C1520) *
              C1521 +
          (((C1593 * C8568 + C1592 * C8563 + C1591 * C8570 + C1590 * C8564) *
                C12050 +
            (C13655 * C8568 + C13654 * C8563 +
             (C155 * C2595 + C19794 * C2657) * C8570 +
             (C155 * C2598 + C19794 * C2660) * C8564) *
                C12051) *
               C19769 * C1520 -
           ((C2126 * C8564 + C2127 * C8570 + C2128 * C8563 + C2129 * C8568) *
                C12051 +
            (C182 * C8564 + C181 * C8570 + C180 * C8563 + C179 * C8568) *
                C12050) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C8568 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C8563 +
            (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
               C19794 * C19769 * C1519 -
           ((C13730 + C13731) * C8564 + (C13732 + C13733) * C8570 +
            (C12155 * C2596 + C12051 * C2714 + C12154 * C636 + C12050 * C748) *
                C8563 +
            (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
                C8568) *
               C19794 * C19769 * C1520) *
              C1521 +
          (((C13733 + C13732) * C8568 + (C13731 + C13730) * C8563 +
            (C12154 * C628 + C12050 * C740 + C12155 * C2595 + C12051 * C2713) *
                C8570 +
            (C12154 * C634 + C12050 * C746 + C12155 * C2598 + C12051 * C2716) *
                C8564) *
               C19794 * C19769 * C1520 -
           ((C12177 + C12178) * C8564 + (C12179 + C12180) * C8570 +
            (C12176 + C12175) * C8563 + (C12174 + C12173) * C8568) *
               C19794 * C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
             (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                 C19794) *
                C12050 +
            ((C13236 + C13237) * C155 + (C13238 + C13239) * C19794) * C12051) *
               C19769 * C1519 -
           (((C11657 + C11658) * C19794 + (C11659 + C11660) * C155) * C12051 +
            ((C9315 + C9314) * C19794 + (C9313 + C9312) * C155) * C12050) *
               C19769 * C1520) *
              C1521 +
          ((((C10357 + C10358) * C155 + (C10359 + C10360) * C19794) * C12050 +
            ((C8568 * C2594 + C8563 * C2597 + C8570 * C2595 + C8564 * C2598) *
                 C155 +
             (C8568 * C2656 + C8563 * C2768 + C8570 * C2657 + C8564 * C2769) *
                 C19794) *
                C12051) *
               C19769 * C1520 -
           (((C8570 * C1131 + C8564 * C1231 + C8568 * C1132 + C8563 * C1232) *
                 C19794 +
             (C8570 * C1069 + C8564 * C1075 + C8568 * C1070 + C8563 * C1076) *
                 C155) *
                C12051 +
            ((C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) *
                 C19794 +
             (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C155) *
                C12050) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 +
             C356 * C8564) *
                C12050 +
            (C13294 + C13295) * C12051) *
               C19769 * C1519 -
           ((C13870 * C8564 + C8294 * C8563) * C12051 +
            (C1770 * C8564 +
             (C332 * C630 + C843 + C843 + C19794 * C836) * C8563) *
                C12050) *
               C19769 * C1520) *
              C1521 +
          (((C1770 * C8563 + C1769 * C8564) * C12050 +
            (C13870 * C8563 +
             (C332 * C2595 + C2826 + C2826 + C19794 * C2822) * C8564) *
                C12051) *
               C19769 * C1520 -
           ((C2305 * C8564 + C2306 * C8563) * C12051 +
            (C357 * C8564 + C356 * C8563) * C12050) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                 C155 +
             (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                 C19794) *
                C8563 +
            ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
               C19769 * C1519 -
           (((C13941 + C13942) * C19794 + (C13732 + C13733) * C155) * C8564 +
            ((C12155 * C2655 + C12051 * C2876 + C12154 * C692 + C12050 * C886) *
                 C19794 +
             (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
                 C155) *
                C8563) *
               C19769 * C1520) *
              C1521 +
          ((((C13733 + C13732) * C155 + (C13942 + C13941) * C19794) * C8563 +
            ((C12154 * C628 + C12050 * C740 + C12155 * C2595 + C12051 * C2713) *
                 C155 +
             (C12154 * C690 + C12050 * C884 + C12155 * C2657 + C12051 * C2878) *
                 C19794) *
                C8564) *
               C19769 * C1520 -
           (((C12341 + C12342) * C19794 + (C12179 + C12180) * C155) * C8564 +
            ((C12340 + C12339) * C19794 + (C12174 + C12173) * C155) * C8563) *
               C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C12050 +
            (C13236 + C13237) * C12155 + (C13406 + C13407) * C12051) *
               C19794 * C19769 * C1519 -
           ((C11867 + C11868) * C12051 + (C11659 + C11660) * C12155 +
            (C9487 + C9486) * C12050 + (C9313 + C9312) * C12154) *
               C19794 * C19769 * C1520) *
              C1521 +
          (((C10357 + C10358) * C12154 + (C10579 + C10580) * C12050 +
            (C8568 * C2594 + C8563 * C2597 + C8570 * C2595 + C8564 * C2598) *
                C12155 +
            (C8568 * C2712 + C8563 * C2930 + C8570 * C2713 + C8564 * C2931) *
                C12051) *
               C19794 * C19769 * C1520 -
           ((C8570 * C1181 + C8564 * C1369 + C8568 * C1182 + C8563 * C1370) *
                C12051 +
            (C8570 * C1069 + C8564 * C1075 + C8568 * C1070 + C8563 * C1076) *
                C12155 +
            (C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
                C12050 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C12154) *
               C19794 * C19769 * C1519) *
              C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C12154 +
                       (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
                       C6957 * C12051) *
                          C8563 +
                      (C12443 + C12444 + C12445 + C12446) * C8564) *
                         C19769 * C1519 -
                     ((C14081 + C14077 + C14078 + C14079) * C8564 +
                      (C8458 * C12051 + C8113 * C12155 +
                       (C155 * C742 + C19794 * C974) * C12050 +
                       (C155 * C630 + C19794 * C692) * C12154) *
                          C8563) *
                         C19769 * C1520) *
                        C1521 +
                    (((C14079 + C14078 + C14077 + C14081) * C8563 +
                      (C1591 * C12154 + C1940 * C12050 +
                       (C155 * C2595 + C19794 * C2657) * C12155 +
                       (C155 * C2713 + C19794 * C2984) * C12051) *
                          C8564) *
                         C19769 * C1520 -
                     ((C12447 + C12448 + C12449 + C12450) * C8564 +
                      (C12446 + C12445 + C12444 + C12443) * C8563) *
                         C19769 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                       C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                          C19794 * C8563 +
                      (C12527 + C12528) * C19794 * C8564) *
                         C19769 * C1519 -
                     ((C14158 + C14159) * C19794 * C8564 +
                      (C12501 * C2593 + C12984 + C12984 + C12051 * C3035 +
                       C12500 * C630 + C12985 + C12985 + C12050 * C1018) *
                          C19794 * C8563) *
                         C19769 * C1520) *
                        C1521 +
                    (((C14159 + C14158) * C19794 * C8563 +
                      (C12500 * C628 + C14152 + C14152 + C12050 * C1016 +
                       C12501 * C2595 + C14153 + C14153 + C12051 * C3037) *
                          C19794 * C8564) *
                         C19769 * C1520 -
                     ((C12529 + C12530) * C19794 * C8564 +
                      (C12528 + C12527) * C19794 * C8563) *
                         C19769 * C1519) *
                        C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C8567 * C93 + C8572 + C8572 + C8563 * C103 +
                       C8569 * C94 + C8573 + C8573 + C8564 * C104) *
                          C12050 +
                      (C13058 + C13059) * C12051) *
                         C19794 * C2057 -
                     ((C13060 + C13061) * C12051 + (C13059 + C13058) * C12050) *
                         C19794 * C2058) *
                        C1519 +
                    (((C11446 + C11445) * C12050 +
                      (C8567 * C3931 + C9646 + C9646 + C8563 * C3937 +
                       C8569 * C7055 + C9647 + C9647 + C8564 * C7057) *
                          C12051) *
                         C19794 * C2058 -
                     ((C11445 + C11446) * C12051 + (C9135 + C9134) * C12050) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                  (p * q * std::sqrt(p + q));
    d2eexy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C8568 +
                       (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
                       C180 * C8564) *
                          C12050 +
                      (C13112 + C13113 + C13114 + C13115) * C12051) *
                         C2057 -
                     ((C13116 + C13117 + C13118 + C13119) * C12051 +
                      (C13115 + C13114 + C13113 + C13112) * C12050) *
                         C2058) *
                        C1519 +
                    (((C14956 + C14957 + C14958 + C14959) * C12050 +
                      (C8115 * C8568 + C8116 * C8563 +
                       (C155 * C7055 + C19794 * C7109) * C8570 +
                       (C155 * C7056 + C19794 * C7110) * C8564) *
                          C12051) *
                         C2058 -
                     ((C14959 + C14958 + C14957 + C14956) * C12051 +
                      (C1592 * C8564 + C1593 * C8570 +
                       (C155 * C636 + C19794 * C698) * C8563 +
                       (C155 * C630 + C19794 * C692) * C8568) *
                          C12050) *
                         C2057) *
                        C1520) *
                   C19743) /
                  (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C8568 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C8563 +
            (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
               C19794 * C2057 -
           ((C14382 + C14383) * C8564 + (C14384 + C14385) * C8570 +
            (C12155 * C1078 + C12051 * C1190 + C12154 * C1077 +
             C12050 * C1189) *
                C8563 +
            (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
             C12050 * C1183) *
                C8568) *
               C19794 * C2058) *
              C1519 +
          (((C12154 * C2593 + C12050 * C2711 + C12155 * C3931 +
             C12051 * C4028) *
                C8568 +
            (C12154 * C2596 + C12050 * C2714 + C12155 * C3934 +
             C12051 * C4031) *
                C8563 +
            (C12154 * C2594 + C12050 * C2712 + C12155 * C7055 +
             C12051 * C7161) *
                C8570 +
            (C12154 * C2597 + C12050 * C2715 + C12155 * C7056 +
             C12051 * C7162) *
                C8564) *
               C19794 * C2058 -
           ((C13730 + C13731) * C8564 + (C13732 + C13733) * C8570 +
            (C12155 * C2596 + C12051 * C2714 + C12154 * C636 + C12050 * C748) *
                C8563 +
            (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
                C8568) *
               C19794 * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
             (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                 C19794) *
                C12050 +
            ((C13236 + C13237) * C155 + (C13238 + C13239) * C19794) * C12051) *
               C2057 -
           (((C13240 + C13241) * C19794 + (C13242 + C13243) * C155) * C12051 +
            ((C13239 + C13238) * C19794 + (C13237 + C13236) * C155) * C12050) *
               C2058) *
              C1519 +
          ((((C11660 + C11659) * C155 + (C11658 + C11657) * C19794) * C12050 +
            ((C8568 * C3931 + C8563 * C3934 + C8570 * C7055 + C8564 * C7056) *
                 C155 +
             (C8568 * C3984 + C8563 * C4072 + C8570 * C7109 + C8564 * C7213) *
                 C19794) *
                C12051) *
               C2058 -
           (((C11657 + C11658) * C19794 + (C11659 + C11660) * C155) * C12051 +
            ((C9315 + C9314) * C19794 + (C9313 + C9312) * C155) * C12050) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 +
             C356 * C8564) *
                C12050 +
            (C13294 + C13295) * C12051) *
               C2057 -
           ((C13296 + C13297) * C12051 + (C13295 + C13294) * C12050) * C2058) *
              C1519 +
          (((C15158 + C15159) * C12050 +
            (C8295 * C8563 +
             (C332 * C7055 + C7266 + C7266 + C19794 * C7264) * C8564) *
                C12051) *
               C2058 -
           ((C15159 + C15158) * C12051 +
            (C1770 * C8564 +
             (C332 * C630 + C843 + C843 + C19794 * C836) * C8563) *
                C12050) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                 C155 +
             (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                 C19794) *
                C8563 +
            ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
               C2057 -
           (((C14602 + C14603) * C19794 + (C14384 + C14385) * C155) * C8564 +
            ((C12155 * C1134 + C12051 * C1328 + C12154 * C1133 +
              C12050 * C1327) *
                 C19794 +
             (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
              C12050 * C1183) *
                 C155) *
                C8563) *
               C2058) *
              C1519 +
          ((((C12154 * C2593 + C12050 * C2711 + C12155 * C3931 +
              C12051 * C4028) *
                 C155 +
             (C12154 * C2655 + C12050 * C2876 + C12155 * C3984 +
              C12051 * C4160) *
                 C19794) *
                C8563 +
            ((C12154 * C2594 + C12050 * C2712 + C12155 * C7055 +
              C12051 * C7161) *
                 C155 +
             (C12154 * C2656 + C12050 * C2877 + C12155 * C7109 +
              C12051 * C7316) *
                 C19794) *
                C8564) *
               C2058 -
           (((C13941 + C13942) * C19794 + (C13732 + C13733) * C155) * C8564 +
            ((C12155 * C2655 + C12051 * C2876 + C12154 * C692 + C12050 * C886) *
                 C19794 +
             (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
                 C155) *
                C8563) *
               C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C12050 +
            (C13236 + C13237) * C12155 + (C13406 + C13407) * C12051) *
               C19794 * C2057 -
           ((C13408 + C13409) * C12051 + (C13242 + C13243) * C12155 +
            (C13407 + C13406) * C12050 + (C13237 + C13236) * C12154) *
               C19794 * C2058) *
              C1519 +
          (((C11660 + C11659) * C12154 + (C11868 + C11867) * C12050 +
            (C8568 * C3931 + C8563 * C3934 + C8570 * C7055 + C8564 * C7056) *
                C12155 +
            (C8568 * C4028 + C8563 * C4201 + C8570 * C7161 + C8564 * C7367) *
                C12051) *
               C19794 * C2058 -
           ((C11867 + C11868) * C12051 + (C11659 + C11660) * C12155 +
            (C9487 + C9486) * C12050 + (C9313 + C9312) * C12154) *
               C19794 * C2057) *
              C1520) *
         C19743) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C12154 +
                       (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
                       C6957 * C12051) *
                          C8563 +
                      (C12443 + C12444 + C12445 + C12446) * C8564) *
                         C2057 -
                     ((C14742 + C14743 + C14744 + C14745) * C8564 +
                      (C6958 * C12051 + C6644 * C12155 + C6957 * C12050 +
                       C6642 * C12154) *
                          C8563) *
                         C2058) *
                        C1519 +
                    (((C8113 * C12154 + C8458 * C12050 + C8115 * C12155 +
                       C8459 * C12051) *
                          C8563 +
                      (C13655 * C12154 + C14080 * C12050 +
                       (C155 * C7055 + C19794 * C7109) * C12155 +
                       (C155 * C7161 + C19794 * C7418) * C12051) *
                          C8564) *
                         C2058 -
                     ((C14081 + C14077 + C14078 + C14079) * C8564 +
                      (C8458 * C12051 + C8113 * C12155 +
                       (C155 * C742 + C19794 * C974) * C12050 +
                       (C155 * C630 + C19794 * C692) * C12154) *
                          C8563) *
                         C2057) *
                        C1520) *
                   C19743) /
                  (p * q * std::sqrt(p + q));
    d2eezz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                       C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                          C19794 * C8563 +
                      (C12527 + C12528) * C19794 * C8564) *
                         C2057 -
                     ((C14822 + C14823) * C19794 * C8564 +
                      (C12501 * C1072 + C13512 + C13512 + C12051 * C1460 +
                       C12500 * C1071 + C13513 + C13513 + C12050 * C1459) *
                          C19794 * C8563) *
                         C2058) *
                        C1519 +
                    (((C12500 * C2593 + C15424 + C15424 + C12050 * C3035 +
                       C12501 * C3931 + C15425 + C15425 + C12051 * C4283) *
                          C19794 * C8563 +
                      (C12500 * C2594 + C15426 + C15426 + C12050 * C3036 +
                       C12501 * C7055 + C15427 + C15427 + C12051 * C7469) *
                          C19794 * C8564) *
                         C2058 -
                     ((C14158 + C14159) * C19794 * C8564 +
                      (C12501 * C2593 + C12984 + C12984 + C12051 * C3035 +
                       C12500 * C630 + C12985 + C12985 + C12050 * C1018) *
                          C19794 * C8563) *
                         C2057) *
                        C1520) *
                   C19743) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C12050 +
                     (C8567 * C1071 + C9643 + C9643 + C8563 * C1083 +
                      C8569 * C1070 + C9642 + C9642 + C8564 * C1082) *
                         C12051) *
                        C19794 * C19769 * C624 -
                    ((C11445 + C11446) * C12051 + (C9135 + C9134) * C12050) *
                        C19794 * C19769 * C625 +
                    ((C9137 + C9136) * C12050 +
                     (C8567 * C3930 + C11439 + C11439 + C8563 * C3936 +
                      C8569 * C4858 + C11440 + C11440 + C8564 * C4860) *
                         C12051) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C12050 +
                     (C8567 * C1071 + C9643 + C9643 + C8563 * C1083 +
                      C8569 * C1070 + C9642 + C9642 + C8564 * C1082) *
                         C12051) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C8569 * C1069 + C10788 + C10788 + C8564 * C1081 +
                      C8567 * C1070 + C10787 + C10787 + C8563 * C1082) *
                         C12051 +
                     (C8569 * C95 + C8578 + C8578 + C8564 * C105 + C8567 * C94 +
                      C8579 + C8579 + C8563 * C104) *
                         C12050) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C8567 * C95 + C8580 + C8580 + C8563 * C105 + C8569 * C96 +
                      C8581 + C8581 + C8564 * C106) *
                         C12050 +
                     (C8567 * C1069 + C12053 + C12053 + C8563 * C1081 +
                      C8569 * C2059 + C12054 + C12054 + C8564 * C2061) *
                         C12051) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C12050 +
                     (C13058 + C13059) * C12051) *
                        C19794 * C1066 -
                    ((C13060 + C13061) * C12051 + (C13059 + C13058) * C12050) *
                        C19794 * C1067 +
                    ((C13061 + C13060) * C12050 +
                     (C8567 * C6564 + C13048 + C13048 + C8563 * C6568 +
                      C8569 * C7523 + C13049 + C13049 + C8564 * C7525) *
                         C12051) *
                        C19794 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C8568 +
            (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
            C180 * C8564) *
               C12050 +
           (C6642 * C8568 + C6643 * C8563 + C2129 * C8570 + C2128 * C8564) *
               C12051) *
              C19769 * C624 -
          (((C155 * C2597 + C19794 * C2659) * C8564 +
            (C155 * C2594 + C19794 * C2656) * C8570 + C8114 * C8563 +
            C8113 * C8568) *
               C12051 +
           (C1592 * C8564 + C1593 * C8570 +
            (C155 * C636 + C19794 * C698) * C8563 +
            (C155 * C630 + C19794 * C692) * C8568) *
               C12050) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C8568 +
            (C155 * C637 + C19794 * C699) * C8563 +
            (C155 * C632 + C19794 * C694) * C8570 +
            (C155 * C638 + C19794 * C700) * C8564) *
               C12050 +
           ((C155 * C3930 + C19794 * C3983) * C8568 +
            (C155 * C3933 + C19794 * C3986) * C8563 +
            (C155 * C4858 + C19794 * C4914) * C8570 +
            (C155 * C4859 + C19794 * C4915) * C8564) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C8568 +
            (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
            C180 * C8564) *
               C12050 +
           (C6642 * C8568 + C6643 * C8563 + C2129 * C8570 + C2128 * C8564) *
               C12051) *
              C19769 * C19755 * C84 -
          ((C2126 * C8564 + C2127 * C8570 + C2128 * C8563 + C2129 * C8568) *
               C12051 +
           (C182 * C8564 + C181 * C8570 + C180 * C8563 + C179 * C8568) *
               C12050) *
              C19769 * C19755 * C85 +
          ((C181 * C8568 + C182 * C8563 + C184 * C8570 + C183 * C8564) *
               C12050 +
           (C2127 * C8568 + C2126 * C8563 +
            (C155 * C2059 + C19794 * C2115) * C8570 +
            (C155 * C2060 + C19794 * C2116) * C8564) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C8568 +
            (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
            C180 * C8564) *
               C12050 +
           (C13112 + C13113 + C13114 + C13115) * C12051) *
              C1066 -
          ((C13116 + C13117 + C13118 + C13119) * C12051 +
           (C13115 + C13114 + C13113 + C13112) * C12050) *
              C1067 +
          ((C13119 + C13118 + C13117 + C13116) * C12050 +
           (C6647 * C8568 + C6646 * C8563 +
            (C155 * C7523 + C19794 * C7587) * C8570 +
            (C155 * C7524 + C19794 * C7588) * C8564) *
               C12051) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8568 +
           (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
               C8563 +
           (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
              C19794 * C19769 * C624 -
          ((C12155 * C2597 + C12051 * C2715 + C12154 * C635 + C12050 * C747) *
               C8564 +
           (C12155 * C2594 + C12051 * C2712 + C12154 * C629 + C12050 * C741) *
               C8570 +
           (C12155 * C2596 + C12051 * C2714 + C12154 * C636 + C12050 * C748) *
               C8563 +
           (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
               C8568) *
              C19794 * C19769 * C625 +
          ((C12154 * C631 + C12050 * C743 + C12155 * C3930 + C12051 * C4027) *
               C8568 +
           (C12154 * C637 + C12050 * C749 + C12155 * C3933 + C12051 * C4030) *
               C8563 +
           (C12154 * C632 + C12050 * C744 + C12155 * C4858 + C12051 * C4966) *
               C8570 +
           (C12154 * C638 + C12050 * C750 + C12155 * C4859 + C12051 * C4967) *
               C8564) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8568 +
           (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
               C8563 +
           (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
              C19794 * C19769 * C19755 * C84 -
          ((C12177 + C12178) * C8564 + (C12179 + C12180) * C8570 +
           (C12176 + C12175) * C8563 + (C12174 + C12173) * C8568) *
              C19794 * C19769 * C19755 * C85 +
          ((C12180 + C12179) * C8568 + (C12178 + C12177) * C8563 +
           (C12154 * C96 + C12050 * C226 + C12155 * C2059 + C12051 * C2179) *
               C8570 +
           (C12154 * C101 + C12050 * C231 + C12155 * C2060 + C12051 * C2180) *
               C8564) *
              C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8568 +
           (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
               C8563 +
           (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
              C19794 * C1066 -
          ((C12155 * C1079 + C12051 * C1191 + C12154 * C1076 + C12050 * C1188) *
               C8564 +
           (C12155 * C1073 + C12051 * C1185 + C12154 * C1070 + C12050 * C1182) *
               C8570 +
           (C12155 * C1078 + C12051 * C1190 + C12154 * C1077 + C12050 * C1189) *
               C8563 +
           (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 + C12050 * C1183) *
               C8568) *
              C19794 * C1067 +
          ((C12154 * C1072 + C12050 * C1184 + C12155 * C6564 + C12051 * C6692) *
               C8568 +
           (C12154 * C1078 + C12050 * C1190 + C12155 * C6566 + C12051 * C6694) *
               C8563 +
           (C12154 * C1073 + C12050 * C1185 + C12155 * C7523 + C12051 * C7649) *
               C8570 +
           (C12154 * C1079 + C12050 * C1191 + C12155 * C7524 + C12051 * C7650) *
               C8564) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C19794) *
               C12050 +
           ((C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
                C155 +
            (C8568 * C1133 + C8563 * C1233 + C8570 * C1132 + C8564 * C1232) *
                C19794) *
               C12051) *
              C19769 * C624 -
          (((C11657 + C11658) * C19794 + (C11659 + C11660) * C155) * C12051 +
           ((C9315 + C9314) * C19794 + (C9313 + C9312) * C155) * C12050) *
              C19769 * C625 +
          (((C9319 + C9318) * C155 + (C9317 + C9316) * C19794) * C12050 +
           ((C8568 * C3930 + C8563 * C3933 + C8570 * C4858 + C8564 * C4859) *
                C155 +
            (C8568 * C3983 + C8563 * C4071 + C8570 * C4914 + C8564 * C5018) *
                C19794) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C19794) *
               C12050 +
           ((C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
                C155 +
            (C8568 * C1133 + C8563 * C1233 + C8570 * C1132 + C8564 * C1232) *
                C19794) *
               C12051) *
              C19769 * C19755 * C84 -
          (((C8570 * C1131 + C8564 * C1231 + C8568 * C1132 + C8563 * C1232) *
                C19794 +
            (C8570 * C1069 + C8564 * C1075 + C8568 * C1070 + C8563 * C1076) *
                C155) *
               C12051 +
           ((C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) *
                C19794 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C155) *
               C12050) *
              C19769 * C19755 * C85 +
          (((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C155 +
            (C8568 * C158 + C8563 * C291 + C8570 * C159 + C8564 * C292) *
                C19794) *
               C12050 +
           ((C8568 * C1069 + C8563 * C1075 + C8570 * C2059 + C8564 * C2060) *
                C155 +
            (C8568 * C1131 + C8563 * C1231 + C8570 * C2115 + C8564 * C2243) *
                C19794) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C19794) *
               C12050 +
           ((C13236 + C13237) * C155 + (C13238 + C13239) * C19794) * C12051) *
              C1066 -
          (((C13240 + C13241) * C19794 + (C13242 + C13243) * C155) * C12051 +
           ((C13239 + C13238) * C19794 + (C13237 + C13236) * C155) * C12050) *
              C1067 +
          (((C13243 + C13242) * C155 + (C13241 + C13240) * C19794) * C12050 +
           ((C8568 * C6564 + C8563 * C6566 + C8570 * C7523 + C8564 * C7524) *
                C155 +
            (C8568 * C6625 + C8563 * C6734 + C8570 * C7587 + C8564 * C7701) *
                C19794) *
               C12051) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 + C356 * C8564) *
               C12050 +
           (C6816 * C8563 + C2306 * C8564) * C12051) *
              C19769 * C624 -
          (((C332 * C2594 + C2825 + C2825 + C19794 * C2821) * C8564 +
            C8294 * C8563) *
               C12051 +
           (C1770 * C8564 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C8563) *
               C12050) *
              C19769 * C625 +
          (((C332 * C631 + C844 + C844 + C19794 * C837) * C8563 +
            (C332 * C632 + C845 + C845 + C19794 * C838) * C8564) *
               C12050 +
           ((C332 * C3930 + C6367 + C6367 + C19794 * C4112) * C8563 +
            (C332 * C4858 + C12781 + C12781 + C19794 * C5069) * C8564) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 + C356 * C8564) *
               C12050 +
           (C6816 * C8563 + C2306 * C8564) * C12051) *
              C19769 * C19755 * C84 -
          ((C2305 * C8564 + C2306 * C8563) * C12051 +
           (C357 * C8564 + C356 * C8563) * C12050) *
              C19769 * C19755 * C85 +
          ((C357 * C8563 + C358 * C8564) * C12050 +
           (C2305 * C8563 +
            (C332 * C2059 + C2300 + C2300 + C19794 * C2294) * C8564) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 + C356 * C8564) *
               C12050 +
           (C13294 + C13295) * C12051) *
              C1066 -
          ((C13296 + C13297) * C12051 + (C13295 + C13294) * C12050) * C1067 +
          ((C13297 + C13296) * C12050 +
           (C6818 * C8563 +
            (C332 * C7523 + C7773 + C7773 + C19794 * C7768) * C8564) *
               C12051) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C155 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C19794) *
               C8563 +
           ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
              C19769 * C624 -
          (((C12155 * C2656 + C12051 * C2877 + C12154 * C691 + C12050 * C885) *
                C19794 +
            (C12155 * C2594 + C12051 * C2712 + C12154 * C629 + C12050 * C741) *
                C155) *
               C8564 +
           ((C12155 * C2655 + C12051 * C2876 + C12154 * C692 + C12050 * C886) *
                C19794 +
            (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
                C155) *
               C8563) *
              C19769 * C625 +
          (((C12154 * C631 + C12050 * C743 + C12155 * C3930 + C12051 * C4027) *
                C155 +
            (C12154 * C693 + C12050 * C887 + C12155 * C3983 + C12051 * C4159) *
                C19794) *
               C8563 +
           ((C12154 * C632 + C12050 * C744 + C12155 * C4858 + C12051 * C4966) *
                C155 +
            (C12154 * C694 + C12050 * C888 + C12155 * C4914 + C12051 * C5123) *
                C19794) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C155 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C19794) *
               C8563 +
           ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
              C19769 * C19755 * C84 -
          (((C12341 + C12342) * C19794 + (C12179 + C12180) * C155) * C8564 +
           ((C12340 + C12339) * C19794 + (C12174 + C12173) * C155) * C8563) *
              C19769 * C19755 * C85 +
          (((C12180 + C12179) * C155 + (C12342 + C12341) * C19794) * C8563 +
           ((C12154 * C96 + C12050 * C226 + C12155 * C2059 + C12051 * C2179) *
                C155 +
            (C12154 * C159 + C12050 * C399 + C12155 * C2115 + C12051 * C2356) *
                C19794) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C155 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C19794) *
               C8563 +
           ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
              C1066 -
          (((C12155 * C1135 + C12051 * C1329 + C12154 * C1132 +
             C12050 * C1326) *
                C19794 +
            (C12155 * C1073 + C12051 * C1185 + C12154 * C1070 +
             C12050 * C1182) *
                C155) *
               C8564 +
           ((C12155 * C1134 + C12051 * C1328 + C12154 * C1133 +
             C12050 * C1327) *
                C19794 +
            (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
             C12050 * C1183) *
                C155) *
               C8563) *
              C1067 +
          (((C12154 * C1072 + C12050 * C1184 + C12155 * C6564 +
             C12051 * C6692) *
                C155 +
            (C12154 * C1134 + C12050 * C1328 + C12155 * C6625 +
             C12051 * C6859) *
                C19794) *
               C8563 +
           ((C12154 * C1073 + C12050 * C1185 + C12155 * C7523 +
             C12051 * C7649) *
                C155 +
            (C12154 * C1135 + C12050 * C1329 + C12155 * C7587 +
             C12051 * C7827) *
                C19794) *
               C8564) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
           (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
               C12050 +
           (C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
               C12155 +
           (C8568 * C1183 + C8563 * C1371 + C8570 * C1182 + C8564 * C1370) *
               C12051) *
              C19794 * C19769 * C624 -
          ((C11867 + C11868) * C12051 + (C11659 + C11660) * C12155 +
           (C9487 + C9486) * C12050 + (C9313 + C9312) * C12154) *
              C19794 * C19769 * C625 +
          ((C9319 + C9318) * C12154 + (C9489 + C9488) * C12050 +
           (C8568 * C3930 + C8563 * C3933 + C8570 * C4858 + C8564 * C4859) *
               C12155 +
           (C8568 * C4027 + C8563 * C4200 + C8570 * C4966 + C8564 * C5174) *
               C12051) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
           (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
               C12050 +
           (C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
               C12155 +
           (C8568 * C1183 + C8563 * C1371 + C8570 * C1182 + C8564 * C1370) *
               C12051) *
              C19794 * C19769 * C19755 * C84 -
          ((C8570 * C1181 + C8564 * C1369 + C8568 * C1182 + C8563 * C1370) *
               C12051 +
           (C8570 * C1069 + C8564 * C1075 + C8568 * C1070 + C8563 * C1076) *
               C12155 +
           (C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
               C12050 +
           (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C12154) *
              C19794 * C19769 * C19755 * C85 +
          ((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C12154 +
           (C8568 * C225 + C8563 * C457 + C8570 * C226 + C8564 * C458) *
               C12050 +
           (C8568 * C1069 + C8563 * C1075 + C8570 * C2059 + C8564 * C2060) *
               C12155 +
           (C8568 * C1181 + C8563 * C1369 + C8570 * C2179 + C8564 * C2417) *
               C12051) *
              C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
           (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
               C12050 +
           (C13236 + C13237) * C12155 + (C13406 + C13407) * C12051) *
              C19794 * C1066 -
          ((C13408 + C13409) * C12051 + (C13242 + C13243) * C12155 +
           (C13407 + C13406) * C12050 + (C13237 + C13236) * C12154) *
              C19794 * C1067 +
          ((C13243 + C13242) * C12154 + (C13409 + C13408) * C12050 +
           (C8568 * C6564 + C8563 * C6566 + C8570 * C7523 + C8564 * C7524) *
               C12155 +
           (C8568 * C6692 + C8563 * C6899 + C8570 * C7649 + C8564 * C7878) *
               C12051) *
              C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C12154 +
            (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
            C6957 * C12051) *
               C8563 +
           (C12443 + C12444 + C12445 + C12446) * C8564) *
              C19769 * C624 -
          (((C155 * C2712 + C19794 * C2983) * C12051 +
            (C155 * C2594 + C19794 * C2656) * C12155 + C1941 * C12050 +
            C1593 * C12154) *
               C8564 +
           (C8458 * C12051 + C8113 * C12155 +
            (C155 * C742 + C19794 * C974) * C12050 +
            (C155 * C630 + C19794 * C692) * C12154) *
               C8563) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C12154 +
            (C155 * C743 + C19794 * C975) * C12050 +
            (C155 * C3930 + C19794 * C3983) * C12155 +
            (C155 * C4027 + C19794 * C4241) * C12051) *
               C8563 +
           ((C155 * C632 + C19794 * C694) * C12154 +
            (C155 * C744 + C19794 * C976) * C12050 +
            (C155 * C4858 + C19794 * C4914) * C12155 +
            (C155 * C4966 + C19794 * C5225) * C12051) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C12154 +
            (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
            C6957 * C12051) *
               C8563 +
           (C12443 + C12444 + C12445 + C12446) * C8564) *
              C19769 * C19755 * C84 -
          ((C12447 + C12448 + C12449 + C12450) * C8564 +
           (C12446 + C12445 + C12444 + C12443) * C8563) *
              C19769 * C19755 * C85 +
          ((C12450 + C12449 + C12448 + C12447) * C8563 +
           (C184 * C12154 + C515 * C12050 +
            (C155 * C2059 + C19794 * C2115) * C12155 +
            (C155 * C2179 + C19794 * C2468) * C12051) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C12154 +
            (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
            C6957 * C12051) *
               C8563 +
           (C12443 + C12444 + C12445 + C12446) * C8564) *
              C1066 -
          ((C7939 * C12051 + C7596 * C12155 + C2477 * C12050 + C2129 * C12154) *
               C8564 +
           (C6958 * C12051 + C6644 * C12155 + C6957 * C12050 + C6642 * C12154) *
               C8563) *
              C1067 +
          ((C6644 * C12154 + C6958 * C12050 + C6647 * C12155 + C6959 * C12051) *
               C8563 +
           (C7596 * C12154 + C7939 * C12050 +
            (C155 * C7523 + C19794 * C7587) * C12155 +
            (C155 * C7649 + C19794 * C7935) * C12051) *
               C8564) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C19794 * C8563 +
                     (C12527 + C12528) * C19794 * C8564) *
                        C19769 * C624 -
                    ((C12501 * C2594 + C12982 + C12982 + C12051 * C3036 +
                      C12500 * C629 + C12983 + C12983 + C12050 * C1017) *
                         C19794 * C8564 +
                     (C12501 * C2593 + C12984 + C12984 + C12051 * C3035 +
                      C12500 * C630 + C12985 + C12985 + C12050 * C1018) *
                         C19794 * C8563) *
                        C19769 * C625 +
                    ((C12500 * C631 + C12986 + C12986 + C12050 * C1019 +
                      C12501 * C3930 + C12987 + C12987 + C12051 * C4282) *
                         C19794 * C8563 +
                     (C12500 * C632 + C12988 + C12988 + C12050 * C1020 +
                      C12501 * C4858 + C12989 + C12989 + C12051 * C5276) *
                         C19794 * C8564) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C19794 * C8563 +
                     (C12527 + C12528) * C19794 * C8564) *
                        C19769 * C19755 * C84 -
                    ((C12529 + C12530) * C19794 * C8564 +
                     (C12528 + C12527) * C19794 * C8563) *
                        C19769 * C19755 * C85 +
                    ((C12530 + C12529) * C19794 * C8563 +
                     (C12500 * C96 + C12517 + C12517 + C12050 * C561 +
                      C12501 * C2059 + C12518 + C12518 + C12051 * C2529) *
                         C19794 * C8564) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C19794 * C8563 +
                     (C12527 + C12528) * C19794 * C8564) *
                        C1066 -
                    ((C12501 * C1073 + C13510 + C13510 + C12051 * C1461 +
                      C12500 * C1070 + C13511 + C13511 + C12050 * C1458) *
                         C19794 * C8564 +
                     (C12501 * C1072 + C13512 + C13512 + C12051 * C1460 +
                      C12500 * C1071 + C13513 + C13513 + C12050 * C1459) *
                         C19794 * C8563) *
                        C1067 +
                    ((C12500 * C1072 + C13514 + C13514 + C12050 * C1460 +
                      C12501 * C6564 + C13515 + C13515 + C12051 * C6997) *
                         C19794 * C8563 +
                     (C12500 * C1073 + C13516 + C13516 + C12050 * C1461 +
                      C12501 * C7523 + C13517 + C13517 + C12051 * C7989) *
                         C19794 * C8564) *
                        C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C8567 * C93 + C8572 + C8572 + C8563 * C103 +
                       C8569 * C94 + C8573 + C8573 + C8564 * C104) *
                          C12050 +
                      (C13058 + C13059) * C12051) *
                         C19794 * C2057 -
                     ((C13060 + C13061) * C12051 + (C13059 + C13058) * C12050) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    (((C14236 + C14237) * C12050 +
                      (C8567 * C1073 + C14230 + C14230 + C8563 * C1085 +
                       C8569 * C1074 + C14231 + C14231 + C8564 * C1086) *
                          C12051) *
                         C19794 * C2058 -
                     ((C14237 + C14236) * C12051 +
                      (C8569 * C95 + C8578 + C8578 + C8564 * C105 +
                       C8567 * C94 + C8579 + C8579 + C8563 * C104) *
                          C12050) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C19794 * C156) * C8568 +
             (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
             C180 * C8564) *
                C12050 +
            (C13112 + C13113 + C13114 + C13115) * C12051) *
               C2057 -
           ((C13116 + C13117 + C13118 + C13119) * C12051 +
            (C13115 + C13114 + C13113 + C13112) * C12050) *
               C2058) *
              C19755 * C1521 +
          (((C14304 + C14305 + C14306 + C14307) * C12050 +
            (C7596 * C8568 + C7597 * C8563 +
             (C155 * C1074 + C19794 * C1136) * C8570 +
             (C155 * C1080 + C19794 * C1142) * C8564) *
                C12051) *
               C2058 -
           ((C14307 + C14306 + C14305 + C14304) * C12051 +
            (C182 * C8564 + C181 * C8570 + C180 * C8563 + C179 * C8568) *
                C12050) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C8568 +
            (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
                C8563 +
            (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
               C19794 * C2057 -
           ((C14382 + C14383) * C8564 + (C14384 + C14385) * C8570 +
            (C12155 * C1078 + C12051 * C1190 + C12154 * C1077 +
             C12050 * C1189) *
                C8563 +
            (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
             C12050 * C1183) *
                C8568) *
               C19794 * C2058) *
              C19755 * C1521 +
          (((C14385 + C14384) * C8568 + (C14383 + C14382) * C8563 +
            (C12154 * C1069 + C12050 * C1181 + C12155 * C1074 +
             C12051 * C1186) *
                C8570 +
            (C12154 * C1075 + C12050 * C1187 + C12155 * C1080 +
             C12051 * C1192) *
                C8564) *
               C19794 * C2058 -
           ((C12177 + C12178) * C8564 + (C12179 + C12180) * C8570 +
            (C12176 + C12175) * C8563 + (C12174 + C12173) * C8568) *
               C19794 * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
             (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                 C19794) *
                C12050 +
            ((C13236 + C13237) * C155 + (C13238 + C13239) * C19794) * C12051) *
               C2057 -
           (((C13240 + C13241) * C19794 + (C13242 + C13243) * C155) * C12051 +
            ((C13239 + C13238) * C19794 + (C13237 + C13236) * C155) * C12050) *
               C2058) *
              C19755 * C1521 +
          ((((C14460 + C14461) * C155 + (C14462 + C14463) * C19794) * C12050 +
            ((C8568 * C1073 + C8563 * C1079 + C8570 * C1074 + C8564 * C1080) *
                 C155 +
             (C8568 * C1135 + C8563 * C1235 + C8570 * C1136 + C8564 * C1236) *
                 C19794) *
                C12051) *
               C2058 -
           (((C14463 + C14462) * C19794 + (C14461 + C14460) * C155) * C12051 +
            ((C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) *
                 C19794 +
             (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C155) *
                C12050) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 +
             C356 * C8564) *
                C12050 +
            (C13294 + C13295) * C12051) *
               C2057 -
           ((C13296 + C13297) * C12051 + (C13295 + C13294) * C12050) * C2058) *
              C19755 * C1521 +
          (((C14530 + C14531) * C12050 +
            (C7776 * C8563 +
             (C332 * C1074 + C1287 + C1287 + C19794 * C1280) * C8564) *
                C12051) *
               C2058 -
           ((C14531 + C14530) * C12051 +
            (C357 * C8564 + C356 * C8563) * C12050) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                 C155 +
             (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                 C19794) *
                C8563 +
            ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
               C2057 -
           (((C14602 + C14603) * C19794 + (C14384 + C14385) * C155) * C8564 +
            ((C12155 * C1134 + C12051 * C1328 + C12154 * C1133 +
              C12050 * C1327) *
                 C19794 +
             (C12155 * C1072 + C12051 * C1184 + C12154 * C1071 +
              C12050 * C1183) *
                 C155) *
                C8563) *
               C2058) *
              C19755 * C1521 +
          ((((C14385 + C14384) * C155 + (C14603 + C14602) * C19794) * C8563 +
            ((C12154 * C1069 + C12050 * C1181 + C12155 * C1074 +
              C12051 * C1186) *
                 C155 +
             (C12154 * C1131 + C12050 * C1325 + C12155 * C1136 +
              C12051 * C1330) *
                 C19794) *
                C8564) *
               C2058 -
           (((C12341 + C12342) * C19794 + (C12179 + C12180) * C155) * C8564 +
            ((C12340 + C12339) * C19794 + (C12174 + C12173) * C155) * C8563) *
               C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
            (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
                C12050 +
            (C13236 + C13237) * C12155 + (C13406 + C13407) * C12051) *
               C19794 * C2057 -
           ((C13408 + C13409) * C12051 + (C13242 + C13243) * C12155 +
            (C13407 + C13406) * C12050 + (C13237 + C13236) * C12154) *
               C19794 * C2058) *
              C19755 * C1521 +
          (((C14460 + C14461) * C12154 + (C14674 + C14675) * C12050 +
            (C8568 * C1073 + C8563 * C1079 + C8570 * C1074 + C8564 * C1080) *
                C12155 +
            (C8568 * C1185 + C8563 * C1373 + C8570 * C1186 + C8564 * C1374) *
                C12051) *
               C19794 * C2058 -
           ((C14675 + C14674) * C12051 + (C14461 + C14460) * C12155 +
            (C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
                C12050 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C12154) *
               C19794 * C2057) *
              C19755 * C1522)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C12154 +
                       (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
                       C6957 * C12051) *
                          C8563 +
                      (C12443 + C12444 + C12445 + C12446) * C8564) *
                         C2057 -
                     ((C14742 + C14743 + C14744 + C14745) * C8564 +
                      (C6958 * C12051 + C6644 * C12155 + C6957 * C12050 +
                       C6642 * C12154) *
                          C8563) *
                         C2058) *
                        C19755 * C1521 +
                    (((C14745 + C14744 + C14743 + C14742) * C8563 +
                      (C2127 * C12154 + C2476 * C12050 +
                       (C155 * C1074 + C19794 * C1136) * C12155 +
                       (C155 * C1186 + C19794 * C1418) * C12051) *
                          C8564) *
                         C2058 -
                     ((C12447 + C12448 + C12449 + C12450) * C8564 +
                      (C12446 + C12445 + C12444 + C12443) * C8563) *
                         C2057) *
                        C19755 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                       C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                          C19794 * C8563 +
                      (C12527 + C12528) * C19794 * C8564) *
                         C2057 -
                     ((C14822 + C14823) * C19794 * C8564 +
                      (C12501 * C1072 + C13512 + C13512 + C12051 * C1460 +
                       C12500 * C1071 + C13513 + C13513 + C12050 * C1459) *
                          C19794 * C8563) *
                         C2058) *
                        C19755 * C1521 +
                    (((C14823 + C14822) * C19794 * C8563 +
                      (C12500 * C1069 + C14816 + C14816 + C12050 * C1457 +
                       C12501 * C1074 + C14817 + C14817 + C12051 * C1462) *
                          C19794 * C8564) *
                         C2058 -
                     ((C12529 + C12530) * C19794 * C8564 +
                      (C12528 + C12527) * C19794 * C8563) *
                         C2057) *
                        C19755 * C1522)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C12050 +
                     (C8567 * C1071 + C9643 + C9643 + C8563 * C1083 +
                      C8569 * C1070 + C9642 + C9642 + C8564 * C1082) *
                         C12051) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C8569 * C1069 + C10788 + C10788 + C8564 * C1081 +
                      C8567 * C1070 + C10787 + C10787 + C8563 * C1082) *
                         C12051 +
                     (C8569 * C95 + C8578 + C8578 + C8564 * C105 + C8567 * C94 +
                      C8579 + C8579 + C8563 * C104) *
                         C12050) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C8567 * C95 + C8580 + C8580 + C8563 * C105 + C8569 * C96 +
                      C8581 + C8581 + C8564 * C106) *
                         C12050 +
                     (C8567 * C1069 + C12053 + C12053 + C8563 * C1081 +
                      C8569 * C2059 + C12054 + C12054 + C8564 * C2061) *
                         C12051) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C8567 * C93 + C8572 + C8572 + C8563 * C103 + C8569 * C94 +
                      C8573 + C8573 + C8564 * C104) *
                         C12050 +
                     (C8567 * C1071 + C9643 + C9643 + C8563 * C1083 +
                      C8569 * C1070 + C9642 + C9642 + C8564 * C1082) *
                         C12051) *
                        C19794 * C19769 * C624 -
                    ((C11445 + C11446) * C12051 + (C9135 + C9134) * C12050) *
                        C19794 * C19769 * C625 +
                    ((C9137 + C9136) * C12050 +
                     (C8567 * C3930 + C11439 + C11439 + C8563 * C3936 +
                      C8569 * C4858 + C11440 + C11440 + C8564 * C4860) *
                         C12051) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C8568 +
            (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
            C180 * C8564) *
               C12050 +
           (C6642 * C8568 + C6643 * C8563 + C2129 * C8570 + C2128 * C8564) *
               C12051) *
              C19769 * C19755 * C84 -
          ((C2126 * C8564 + C2127 * C8570 + C2128 * C8563 + C2129 * C8568) *
               C12051 +
           (C182 * C8564 + C181 * C8570 + C180 * C8563 + C179 * C8568) *
               C12050) *
              C19769 * C19755 * C85 +
          ((C181 * C8568 + C182 * C8563 + C184 * C8570 + C183 * C8564) *
               C12050 +
           (C2127 * C8568 + C2126 * C8563 +
            (C155 * C2059 + C19794 * C2115) * C8570 +
            (C155 * C2060 + C19794 * C2116) * C8564) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C8568 +
            (C155 * C98 + C19794 * C161) * C8563 + C179 * C8570 +
            C180 * C8564) *
               C12050 +
           (C6642 * C8568 + C6643 * C8563 + C2129 * C8570 + C2128 * C8564) *
               C12051) *
              C19769 * C624 -
          (((C155 * C2597 + C19794 * C2659) * C8564 +
            (C155 * C2594 + C19794 * C2656) * C8570 + C8114 * C8563 +
            C8113 * C8568) *
               C12051 +
           (C1592 * C8564 + C1593 * C8570 +
            (C155 * C636 + C19794 * C698) * C8563 +
            (C155 * C630 + C19794 * C692) * C8568) *
               C12050) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C8568 +
            (C155 * C637 + C19794 * C699) * C8563 +
            (C155 * C632 + C19794 * C694) * C8570 +
            (C155 * C638 + C19794 * C700) * C8564) *
               C12050 +
           ((C155 * C3930 + C19794 * C3983) * C8568 +
            (C155 * C3933 + C19794 * C3986) * C8563 +
            (C155 * C4858 + C19794 * C4914) * C8570 +
            (C155 * C4859 + C19794 * C4915) * C8564) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8568 +
           (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
               C8563 +
           (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
              C19794 * C19769 * C19755 * C84 -
          ((C12177 + C12178) * C8564 + (C12179 + C12180) * C8570 +
           (C12176 + C12175) * C8563 + (C12174 + C12173) * C8568) *
              C19794 * C19769 * C19755 * C85 +
          ((C12180 + C12179) * C8568 + (C12178 + C12177) * C8563 +
           (C12154 * C96 + C12050 * C226 + C12155 * C2059 + C12051 * C2179) *
               C8570 +
           (C12154 * C101 + C12050 * C231 + C12155 * C2060 + C12051 * C2180) *
               C8564) *
              C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
               C8568 +
           (C12154 * C98 + C12050 * C228 + C12155 * C1077 + C12051 * C1189) *
               C8563 +
           (C12173 + C12174) * C8570 + (C12175 + C12176) * C8564) *
              C19794 * C19769 * C624 -
          ((C12155 * C2597 + C12051 * C2715 + C12154 * C635 + C12050 * C747) *
               C8564 +
           (C12155 * C2594 + C12051 * C2712 + C12154 * C629 + C12050 * C741) *
               C8570 +
           (C12155 * C2596 + C12051 * C2714 + C12154 * C636 + C12050 * C748) *
               C8563 +
           (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
               C8568) *
              C19794 * C19769 * C625 +
          ((C12154 * C631 + C12050 * C743 + C12155 * C3930 + C12051 * C4027) *
               C8568 +
           (C12154 * C637 + C12050 * C749 + C12155 * C3933 + C12051 * C4030) *
               C8563 +
           (C12154 * C632 + C12050 * C744 + C12155 * C4858 + C12051 * C4966) *
               C8570 +
           (C12154 * C638 + C12050 * C750 + C12155 * C4859 + C12051 * C4967) *
               C8564) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C19794) *
               C12050 +
           ((C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
                C155 +
            (C8568 * C1133 + C8563 * C1233 + C8570 * C1132 + C8564 * C1232) *
                C19794) *
               C12051) *
              C19769 * C19755 * C84 -
          (((C8570 * C1131 + C8564 * C1231 + C8568 * C1132 + C8563 * C1232) *
                C19794 +
            (C8570 * C1069 + C8564 * C1075 + C8568 * C1070 + C8563 * C1076) *
                C155) *
               C12051 +
           ((C8570 * C158 + C8564 * C291 + C8568 * C157 + C8563 * C290) *
                C19794 +
            (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C155) *
               C12050) *
              C19769 * C19755 * C85 +
          (((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C155 +
            (C8568 * C158 + C8563 * C291 + C8570 * C159 + C8564 * C292) *
                C19794) *
               C12050 +
           ((C8568 * C1069 + C8563 * C1075 + C8570 * C2059 + C8564 * C2060) *
                C155 +
            (C8568 * C1131 + C8563 * C1231 + C8570 * C2115 + C8564 * C2243) *
                C19794) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C155 +
            (C8568 * C156 + C8563 * C289 + C8570 * C157 + C8564 * C290) *
                C19794) *
               C12050 +
           ((C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
                C155 +
            (C8568 * C1133 + C8563 * C1233 + C8570 * C1132 + C8564 * C1232) *
                C19794) *
               C12051) *
              C19769 * C624 -
          (((C11657 + C11658) * C19794 + (C11659 + C11660) * C155) * C12051 +
           ((C9315 + C9314) * C19794 + (C9313 + C9312) * C155) * C12050) *
              C19769 * C625 +
          (((C9319 + C9318) * C155 + (C9317 + C9316) * C19794) * C12050 +
           ((C8568 * C3930 + C8563 * C3933 + C8570 * C4858 + C8564 * C4859) *
                C155 +
            (C8568 * C3983 + C8563 * C4071 + C8570 * C4914 + C8564 * C5018) *
                C19794) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 + C356 * C8564) *
               C12050 +
           (C6816 * C8563 + C2306 * C8564) * C12051) *
              C19769 * C19755 * C84 -
          ((C2305 * C8564 + C2306 * C8563) * C12051 +
           (C357 * C8564 + C356 * C8563) * C12050) *
              C19769 * C19755 * C85 +
          ((C357 * C8563 + C358 * C8564) * C12050 +
           (C2305 * C8563 +
            (C332 * C2059 + C2300 + C2300 + C19794 * C2294) * C8564) *
               C12051) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C8563 + C356 * C8564) *
               C12050 +
           (C6816 * C8563 + C2306 * C8564) * C12051) *
              C19769 * C624 -
          (((C332 * C2594 + C2825 + C2825 + C19794 * C2821) * C8564 +
            C8294 * C8563) *
               C12051 +
           (C1770 * C8564 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C8563) *
               C12050) *
              C19769 * C625 +
          (((C332 * C631 + C844 + C844 + C19794 * C837) * C8563 +
            (C332 * C632 + C845 + C845 + C19794 * C838) * C8564) *
               C12050 +
           ((C332 * C3930 + C6367 + C6367 + C19794 * C4112) * C8563 +
            (C332 * C4858 + C12781 + C12781 + C19794 * C5069) * C8564) *
               C12051) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C155 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C19794) *
               C8563 +
           ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
              C19769 * C19755 * C84 -
          (((C12341 + C12342) * C19794 + (C12179 + C12180) * C155) * C8564 +
           ((C12340 + C12339) * C19794 + (C12174 + C12173) * C155) * C8563) *
              C19769 * C19755 * C85 +
          (((C12180 + C12179) * C155 + (C12342 + C12341) * C19794) * C8563 +
           ((C12154 * C96 + C12050 * C226 + C12155 * C2059 + C12051 * C2179) *
                C155 +
            (C12154 * C159 + C12050 * C399 + C12155 * C2115 + C12051 * C2356) *
                C19794) *
               C8564) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12154 * C93 + C12050 * C223 + C12155 * C1071 + C12051 * C1183) *
                C155 +
            (C12154 * C156 + C12050 * C396 + C12155 * C1133 + C12051 * C1327) *
                C19794) *
               C8563 +
           ((C12173 + C12174) * C155 + (C12339 + C12340) * C19794) * C8564) *
              C19769 * C624 -
          (((C12155 * C2656 + C12051 * C2877 + C12154 * C691 + C12050 * C885) *
                C19794 +
            (C12155 * C2594 + C12051 * C2712 + C12154 * C629 + C12050 * C741) *
                C155) *
               C8564 +
           ((C12155 * C2655 + C12051 * C2876 + C12154 * C692 + C12050 * C886) *
                C19794 +
            (C12155 * C2593 + C12051 * C2711 + C12154 * C630 + C12050 * C742) *
                C155) *
               C8563) *
              C19769 * C625 +
          (((C12154 * C631 + C12050 * C743 + C12155 * C3930 + C12051 * C4027) *
                C155 +
            (C12154 * C693 + C12050 * C887 + C12155 * C3983 + C12051 * C4159) *
                C19794) *
               C8563 +
           ((C12154 * C632 + C12050 * C744 + C12155 * C4858 + C12051 * C4966) *
                C155 +
            (C12154 * C694 + C12050 * C888 + C12155 * C4914 + C12051 * C5123) *
                C19794) *
               C8564) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
           (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
               C12050 +
           (C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
               C12155 +
           (C8568 * C1183 + C8563 * C1371 + C8570 * C1182 + C8564 * C1370) *
               C12051) *
              C19794 * C19769 * C19755 * C84 -
          ((C8570 * C1181 + C8564 * C1369 + C8568 * C1182 + C8563 * C1370) *
               C12051 +
           (C8570 * C1069 + C8564 * C1075 + C8568 * C1070 + C8563 * C1076) *
               C12155 +
           (C8570 * C225 + C8564 * C457 + C8568 * C224 + C8563 * C456) *
               C12050 +
           (C8570 * C95 + C8564 * C100 + C8568 * C94 + C8563 * C99) * C12154) *
              C19794 * C19769 * C19755 * C85 +
          ((C8568 * C95 + C8563 * C100 + C8570 * C96 + C8564 * C101) * C12154 +
           (C8568 * C225 + C8563 * C457 + C8570 * C226 + C8564 * C458) *
               C12050 +
           (C8568 * C1069 + C8563 * C1075 + C8570 * C2059 + C8564 * C2060) *
               C12155 +
           (C8568 * C1181 + C8563 * C1369 + C8570 * C2179 + C8564 * C2417) *
               C12051) *
              C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8568 * C93 + C8563 * C98 + C8570 * C94 + C8564 * C99) * C12154 +
           (C8568 * C223 + C8563 * C455 + C8570 * C224 + C8564 * C456) *
               C12050 +
           (C8568 * C1071 + C8563 * C1077 + C8570 * C1070 + C8564 * C1076) *
               C12155 +
           (C8568 * C1183 + C8563 * C1371 + C8570 * C1182 + C8564 * C1370) *
               C12051) *
              C19794 * C19769 * C624 -
          ((C11867 + C11868) * C12051 + (C11659 + C11660) * C12155 +
           (C9487 + C9486) * C12050 + (C9313 + C9312) * C12154) *
              C19794 * C19769 * C625 +
          ((C9319 + C9318) * C12154 + (C9489 + C9488) * C12050 +
           (C8568 * C3930 + C8563 * C3933 + C8570 * C4858 + C8564 * C4859) *
               C12155 +
           (C8568 * C4027 + C8563 * C4200 + C8570 * C4966 + C8564 * C5174) *
               C12051) *
              C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C12154 +
                      (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
                      C6957 * C12051) *
                         C8563 +
                     (C12443 + C12444 + C12445 + C12446) * C8564) *
                        C19769 * C19755 * C84 -
                    ((C12447 + C12448 + C12449 + C12450) * C8564 +
                     (C12446 + C12445 + C12444 + C12443) * C8563) *
                        C19769 * C19755 * C85 +
                    ((C12450 + C12449 + C12448 + C12447) * C8563 +
                     (C184 * C12154 + C515 * C12050 +
                      (C155 * C2059 + C19794 * C2115) * C12155 +
                      (C155 * C2179 + C19794 * C2468) * C12051) *
                         C8564) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C12154 +
                      (C155 * C223 + C19794 * C498) * C12050 + C6642 * C12155 +
                      C6957 * C12051) *
                         C8563 +
                     (C12443 + C12444 + C12445 + C12446) * C8564) *
                        C19769 * C624 -
                    (((C155 * C2712 + C19794 * C2983) * C12051 +
                      (C155 * C2594 + C19794 * C2656) * C12155 +
                      C1941 * C12050 + C1593 * C12154) *
                         C8564 +
                     (C8458 * C12051 + C8113 * C12155 +
                      (C155 * C742 + C19794 * C974) * C12050 +
                      (C155 * C630 + C19794 * C692) * C12154) *
                         C8563) *
                        C19769 * C625 +
                    (((C155 * C631 + C19794 * C693) * C12154 +
                      (C155 * C743 + C19794 * C975) * C12050 +
                      (C155 * C3930 + C19794 * C3983) * C12155 +
                      (C155 * C4027 + C19794 * C4241) * C12051) *
                         C8563 +
                     ((C155 * C632 + C19794 * C694) * C12154 +
                      (C155 * C744 + C19794 * C976) * C12050 +
                      (C155 * C4858 + C19794 * C4914) * C12155 +
                      (C155 * C4966 + C19794 * C5225) * C12051) *
                         C8564) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C19794 * C8563 +
                     (C12527 + C12528) * C19794 * C8564) *
                        C19769 * C19755 * C84 -
                    ((C12529 + C12530) * C19794 * C8564 +
                     (C12528 + C12527) * C19794 * C8563) *
                        C19769 * C19755 * C85 +
                    ((C12530 + C12529) * C19794 * C8563 +
                     (C12500 * C96 + C12517 + C12517 + C12050 * C561 +
                      C12501 * C2059 + C12518 + C12518 + C12051 * C2529) *
                         C19794 * C8564) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C12500 * C93 + C12503 + C12503 + C12050 * C558 +
                      C12501 * C1071 + C12504 + C12504 + C12051 * C1459) *
                         C19794 * C8563 +
                     (C12527 + C12528) * C19794 * C8564) *
                        C19769 * C624 -
                    ((C12501 * C2594 + C12982 + C12982 + C12051 * C3036 +
                      C12500 * C629 + C12983 + C12983 + C12050 * C1017) *
                         C19794 * C8564 +
                     (C12501 * C2593 + C12984 + C12984 + C12051 * C3035 +
                      C12500 * C630 + C12985 + C12985 + C12050 * C1018) *
                         C19794 * C8563) *
                        C19769 * C625 +
                    ((C12500 * C631 + C12986 + C12986 + C12050 * C1019 +
                      C12501 * C3930 + C12987 + C12987 + C12051 * C4282) *
                         C19794 * C8563 +
                     (C12500 * C632 + C12988 + C12988 + C12050 * C1020 +
                      C12501 * C4858 + C12989 + C12989 + C12051 * C5276) *
                         C19794 * C8564) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C19805 * C19794 * C19769 * C1519 -
           (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
            C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
               C19805 * C19794 * C19769 * C1520) *
              C1521 +
          ((C87 * C629 + C1527 + C1527 + C77 * C641 + C89 * C628 + C1528 +
            C1528 + C78 * C640 + C91 * C1523 + C1529 + C1529 + C79 * C1525) *
               C19805 * C19794 * C19769 * C1520 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C19805 * C19794 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
            C3475 * C3081 + C3476 * C3082) *
               C19769 * C1519 -
           (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C19769 * C1520) *
              C1521 +
          ((C4353 * C3080 + C4354 * C3081 +
            (C3083 * C4338 + C4346 + C4346 + C19721 * C4340) * C19805 * C3082) *
               C19769 * C1520 -
           (C4354 * C3082 + C4353 * C3081 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C88 +
                      (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C19805 * C19769 * C1519 -
                     (C1590 * C79 + C1591 * C92 + C1592 * C78 + C1593 * C90 +
                      (C155 * C636 + C19794 * C698) * C77 +
                      (C155 * C630 + C19794 * C692) * C88) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    ((C1593 * C88 + C1592 * C77 + C1591 * C90 + C1590 * C78 +
                      (C155 * C1523 + C19794 * C1579) * C92 +
                      (C155 * C1524 + C19794 * C1580) * C79) *
                         C19805 * C19769 * C1520 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C3084 +
                      (C3132 * C98 + C3080 * C161 + C3133 * C636 +
                       C3081 * C698 + C3134 * C637 + C3082 * C699) *
                          C19721) *
                         C19805 * C19769 * C1519 -
                     ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                       C3081 * C699 + C3132 * C636 + C3080 * C698) *
                          C19721 +
                      (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                       C3081 * C693 + C3132 * C630 + C3080 * C692) *
                          C3084) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    (((C3132 * C629 + C3080 * C691 + C3133 * C632 +
                       C3081 * C694 + C3134 * C4338 + C3082 * C4404) *
                          C3084 +
                      (C3132 * C635 + C3080 * C697 + C3133 * C638 +
                       C3081 * C700 + C3134 * C4339 + C3082 * C4405) *
                          C19721) *
                         C19805 * C19769 * C1520 -
                     ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                       C3081 * C697 + C3132 * C99 + C3080 * C162) *
                          C19721 +
                      (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                       C3081 * C691 + C3132 * C94 + C3080 * C157) *
                          C3084) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C88 +
                      (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C19794 * C19769 * C1519 -
                     (C1654 * C79 + C1655 * C92 + C1656 * C78 + C1657 * C90 +
                      (C222 * C636 + C19805 * C748) * C77 +
                      (C222 * C630 + C19805 * C742) * C88) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    ((C1657 * C88 + C1656 * C77 + C1655 * C90 + C1654 * C78 +
                      (C222 * C1523 + C19805 * C1643) * C92 +
                      (C222 * C1524 + C19805 * C1644) * C79) *
                         C19794 * C19769 * C1520 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C3084 +
                       (C222 * C98 + C19805 * C228) * C19721) *
                          C3080 +
                      (C3580 + C3581) * C3081 + C3586 * C3082) *
                         C19769 * C1519 -
                     ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                      (C3581 + C3580) * C3080) *
                         C19769 * C1520) *
                        C1521 +
                    (((C4459 + C4460) * C3080 + (C4467 + C4468) * C3081 +
                      ((C222 * C4338 + C19805 * C4456) * C3084 +
                       (C222 * C4339 + C19805 * C4457) * C19721) *
                          C3082) *
                         C19769 * C1520 -
                     ((C4468 + C4467) * C3082 + (C4460 + C4459) * C3081 +
                      (C247 * C19721 + C246 * C3084) * C3080) *
                         C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C19794) *
                         C19805 * C19769 * C1519 -
                     ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                       C88 * C692 + C77 * C792) *
                          C19794 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C155) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    (((C88 * C629 + C77 * C635 + C90 * C628 + C78 * C634 +
                       C92 * C1523 + C79 * C1524) *
                          C155 +
                      (C88 * C691 + C77 * C791 + C90 * C690 + C78 * C790 +
                       C92 * C1579 + C79 * C1707) *
                          C19794) *
                         C19805 * C19769 * C1520 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C19794 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C3132 +
                      (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                      C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                         C19805 * C19769 * C1519 -
                     (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                      C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                         C19805 * C19769 * C1520) *
                        C1521 +
                    ((C4528 * C3132 + C4529 * C3080 + C4530 * C3133 +
                      C4531 * C3081 + (C3084 * C4338 + C19721 * C4339) * C3134 +
                      (C3084 * C4404 + C19721 * C4518) * C3082) *
                         C19805 * C19769 * C1520 -
                     (C4531 * C3082 + C4530 * C3134 + C4529 * C3081 +
                      C4528 * C3133 + (C3084 * C157 + C19721 * C290) * C3080 +
                      (C3084 * C94 + C19721 * C99) * C3132) *
                         C19805 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C19805 * C19769 * C1519 -
           (C1769 * C79 + C1770 * C78 +
            (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
               C19805 * C19769 * C1520) *
              C1521 +
          ((C1770 * C77 + C1769 * C78 +
            (C332 * C1523 + C1764 + C1764 + C19794 * C1758) * C79) *
               C19805 * C19769 * C1520 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
            C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 +
            C3082 * C837) *
               C19721 * C19805 * C19769 * C1519 -
           (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
            C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
            C3080 * C836) *
               C19721 * C19805 * C19769 * C1520) *
              C1521 +
          ((C3249 * C629 + C4583 + C4583 + C3080 * C835 + C3250 * C632 + C4584 +
            C4584 + C3081 * C838 + C3251 * C4338 + C4585 + C4585 +
            C3082 * C4581) *
               C19721 * C19805 * C19769 * C1520 -
           (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
            C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
               C19721 * C19805 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C155 +
             (C222 * C156 + C19805 * C396) * C19794) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C19769 * C1519 -
           ((C1830 + C1824) * C79 + (C1831 + C1827) * C78 +
            ((C222 * C692 + C19805 * C886) * C19794 +
             (C222 * C630 + C19805 * C742) * C155) *
                C77) *
               C19769 * C1520) *
              C1521 +
          (((C1827 + C1831) * C77 + (C1824 + C1830) * C78 +
            ((C222 * C1523 + C19805 * C1643) * C155 +
             (C222 * C1579 + C19805 * C1820) * C19794) *
                C79) *
               C19769 * C1520 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3132 +
            (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
            C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
               C19721 * C19769 * C1519 -
           (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 + C3576 * C3133 +
            C3737 * C3080 + C3574 * C3132) *
               C19721 * C19769 * C1520) *
              C1521 +
          ((C1657 * C3132 + C1829 * C3080 + C4465 * C3133 + C4639 * C3081 +
            (C222 * C4338 + C19805 * C4456) * C3134 +
            (C222 * C4404 + C19805 * C4635) * C3082) *
               C19721 * C19769 * C1520 -
           (C4639 * C3082 + C4465 * C3134 + C1829 * C3081 + C1657 * C3133 +
            C411 * C3080 + C246 * C3132) *
               C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezx[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C19805) *
                         C19794 * C19769 * C1519 -
                     ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                       C88 * C742 + C77 * C930) *
                          C19805 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C222) *
                         C19794 * C19769 * C1520) *
                        C1521 +
                    (((C88 * C629 + C77 * C635 + C90 * C628 + C78 * C634 +
                       C92 * C1523 + C79 * C1524) *
                          C222 +
                      (C88 * C741 + C77 * C929 + C90 * C740 + C78 * C928 +
                       C92 * C1643 + C79 * C1881) *
                          C19805) *
                         C19794 * C19769 * C1520 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C19805 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C19794 * C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C222 +
                       (C3084 * C223 + C19721 * C455) * C19805) *
                          C3080 +
                      (C3780 + C3792) * C3081 + C3795 * C3082) *
                         C19769 * C1519 -
                     ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                      (C3792 + C3780) * C3080) *
                         C19769 * C1520) *
                        C1521 +
                    (((C4691 + C4699) * C3080 + (C4694 + C4700) * C3081 +
                      ((C3084 * C4338 + C19721 * C4339) * C222 +
                       (C3084 * C4456 + C19721 * C4689) * C19805) *
                          C3082) *
                         C19769 * C1520 -
                     ((C4700 + C4694) * C3082 + (C4699 + C4691) * C3081 +
                      ((C3084 * C224 + C19721 * C456) * C19805 +
                       (C3084 * C94 + C19721 * C99) * C222) *
                          C3080) *
                         C19769 * C1519) *
                        C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C19794 * C156) * C222 +
             (C155 * C223 + C19794 * C498) * C19805) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C19769 * C1519 -
           ((C1942 + C1936) * C79 + (C1943 + C1939) * C78 +
            ((C155 * C742 + C19794 * C974) * C19805 +
             (C155 * C630 + C19794 * C692) * C222) *
                C77) *
               C19769 * C1520) *
              C1521 +
          (((C1939 + C1943) * C77 + (C1936 + C1942) * C78 +
            ((C155 * C1523 + C19794 * C1579) * C222 +
             (C155 * C1643 + C19794 * C1932) * C19805) *
                C79) *
               C19769 * C1520 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
             C3134 * C631 + C3082 * C693) *
                C222 +
            (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
             C3134 * C743 + C3082 * C975) *
                C19805) *
               C19721 * C19769 * C1519 -
           ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 + C3081 * C975 +
             C3132 * C742 + C3080 * C974) *
                C19805 +
            (C3134 * C3451 + C3082 * C3515 + C3133 * C631 + C3081 * C693 +
             C3132 * C630 + C3080 * C692) *
                C222) *
               C19721 * C19769 * C1520) *
              C1521 +
          (((C3132 * C629 + C3080 * C691 + C3133 * C632 + C3081 * C694 +
             C3134 * C4338 + C3082 * C4404) *
                C222 +
            (C3132 * C741 + C3080 * C973 + C3133 * C744 + C3081 * C976 +
             C3134 * C4456 + C3082 * C4750) *
                C19805) *
               C19721 * C19769 * C1520 -
           ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
             C3132 * C224 + C3080 * C499) *
                C19805 +
            (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
             C3132 * C94 + C3080 * C157) *
                C222) *
               C19721 * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
            C584 * C78 + C585 * C79) *
               C19769 * C1519 -
           (C2006 * C79 + C2007 * C78 +
            (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
               C19769 * C1520) *
              C1521 +
          ((C2007 * C77 + C2006 * C78 +
            (C557 * C1523 + C1999 + C1999 + C19805 * C1993) * C19794 * C79) *
               C19769 * C1520 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C19769 * C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
            C3891 * C3082) *
               C19721 * C19769 * C1519 -
           (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C19769 *
               C1520) *
              C1521 +
          ((C2005 * C3080 + C4808 * C3081 +
            (C557 * C4338 + C4805 + C4805 + C19805 * C4801) * C3082) *
               C19721 * C19769 * C1520 -
           (C4808 * C3082 + C2005 * C3081 + C581 * C3080) * C19721 * C19769 *
               C1519) *
              C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C19805 * C19794 * C2057 -
           (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
            C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
               C19805 * C19794 * C2058) *
              C1519 +
          ((C87 * C2593 + C2603 + C2603 + C77 * C2599 + C89 * C2594 + C2604 +
            C2604 + C78 * C2600 + C91 * C2595 + C2605 + C2605 + C79 * C2601) *
               C19805 * C19794 * C2058 -
           (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
            C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
               C19805 * C19794 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
            C3475 * C3081 + C3476 * C3082) *
               C2057 -
           (C5343 * C3082 + C5344 * C3081 +
            (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C19805 * C3080) *
               C2058) *
              C1519 +
          ((C5344 * C3080 + C5343 * C3081 +
            (C3083 * C5328 + C5336 + C5336 + C19721 * C5330) * C19805 * C3082) *
               C2058 -
           (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C88 +
                      (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C19805 * C2057 -
                     (C2126 * C79 + C2127 * C92 + C2128 * C78 + C2129 * C90 +
                      (C155 * C1077 + C19794 * C1139) * C77 +
                      (C155 * C1071 + C19794 * C1133) * C88) *
                         C19805 * C2058) *
                        C1519 +
                    (((C155 * C2593 + C19794 * C2655) * C88 +
                      (C155 * C2596 + C19794 * C2658) * C77 +
                      (C155 * C2594 + C19794 * C2656) * C90 +
                      (C155 * C2597 + C19794 * C2659) * C78 +
                      (C155 * C2595 + C19794 * C2657) * C92 +
                      (C155 * C2598 + C19794 * C2660) * C79) *
                         C19805 * C2058 -
                     (C1590 * C79 + C1591 * C92 + C1592 * C78 + C1593 * C90 +
                      (C155 * C636 + C19794 * C698) * C77 +
                      (C155 * C630 + C19794 * C692) * C88) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C3084 +
                      (C3132 * C98 + C3080 * C161 + C3133 * C636 +
                       C3081 * C698 + C3134 * C637 + C3082 * C699) *
                          C19721) *
                         C19805 * C2057 -
                     ((C3134 * C3933 + C3082 * C3986 + C3133 * C2596 +
                       C3081 * C2658 + C3132 * C1077 + C3080 * C1139) *
                          C19721 +
                      (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                       C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                          C3084) *
                         C19805 * C2058) *
                        C1519 +
                    (((C3132 * C2593 + C3080 * C2655 + C3133 * C3930 +
                       C3081 * C3983 + C3134 * C5328 + C3082 * C5394) *
                          C3084 +
                      (C3132 * C2596 + C3080 * C2658 + C3133 * C3933 +
                       C3081 * C3986 + C3134 * C5329 + C3082 * C5395) *
                          C19721) *
                         C19805 * C2058 -
                     ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                       C3081 * C699 + C3132 * C636 + C3080 * C698) *
                          C19721 +
                      (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                       C3081 * C693 + C3132 * C630 + C3080 * C692) *
                          C3084) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C88 +
                      (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C19794 * C2057 -
                     (C2190 * C79 + C2191 * C92 + C2192 * C78 + C2193 * C90 +
                      (C222 * C1077 + C19805 * C1189) * C77 +
                      (C222 * C1071 + C19805 * C1183) * C88) *
                         C19794 * C2058) *
                        C1519 +
                    (((C222 * C2593 + C19805 * C2711) * C88 +
                      (C222 * C2596 + C19805 * C2714) * C77 +
                      (C222 * C2594 + C19805 * C2712) * C90 +
                      (C222 * C2597 + C19805 * C2715) * C78 +
                      (C222 * C2595 + C19805 * C2713) * C92 +
                      (C222 * C2598 + C19805 * C2716) * C79) *
                         C19794 * C2058 -
                     (C1654 * C79 + C1655 * C92 + C1656 * C78 + C1657 * C90 +
                      (C222 * C636 + C19805 * C748) * C77 +
                      (C222 * C630 + C19805 * C742) * C88) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C3084 +
                       (C222 * C98 + C19805 * C228) * C19721) *
                          C3080 +
                      (C3580 + C3581) * C3081 + C3586 * C3082) *
                         C2057 -
                     ((C5461 + C5462) * C3082 + (C5463 + C5464) * C3081 +
                      ((C222 * C1077 + C19805 * C1189) * C19721 +
                       (C222 * C1071 + C19805 * C1183) * C3084) *
                          C3080) *
                         C2058) *
                        C1519 +
                    (((C5464 + C5463) * C3080 + (C5462 + C5461) * C3081 +
                      ((C222 * C5328 + C19805 * C5446) * C3084 +
                       (C222 * C5329 + C19805 * C5447) * C19721) *
                          C3082) *
                         C2058 -
                     ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                      (C3581 + C3580) * C3080) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C19794) *
                         C19805 * C2057 -
                     ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                       C88 * C1133 + C77 * C1233) *
                          C19794 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C155) *
                         C19805 * C2058) *
                        C1519 +
                    (((C88 * C2593 + C77 * C2596 + C90 * C2594 + C78 * C2597 +
                       C92 * C2595 + C79 * C2598) *
                          C155 +
                      (C88 * C2655 + C77 * C2767 + C90 * C2656 + C78 * C2768 +
                       C92 * C2657 + C79 * C2769) *
                          C19794) *
                         C19805 * C2058 -
                     ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                       C88 * C692 + C77 * C792) *
                          C19794 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C155) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C3132 +
                      (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                      C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                         C19805 * C2057 -
                     (C5524 * C3082 + C5525 * C3134 + C5526 * C3081 +
                      C5527 * C3133 + (C3084 * C1133 + C19721 * C1233) * C3080 +
                      (C3084 * C1071 + C19721 * C1077) * C3132) *
                         C19805 * C2058) *
                        C1519 +
                    ((C5527 * C3132 + C5526 * C3080 + C5525 * C3133 +
                      C5524 * C3081 + (C3084 * C5328 + C19721 * C5329) * C3134 +
                      (C3084 * C5394 + C19721 * C5514) * C3082) *
                         C19805 * C2058 -
                     (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                      C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C332 * C93 + C339 + C339 + C19794 * C333) * C77 +
                      C356 * C78 + C357 * C79) *
                         C19805 * C2057 -
                     (C2305 * C79 + C2306 * C78 +
                      (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C77) *
                         C19805 * C2058) *
                        C1519 +
                    (((C332 * C2593 + C2824 + C2824 + C19794 * C2820) * C77 +
                      (C332 * C2594 + C2825 + C2825 + C19794 * C2821) * C78 +
                      (C332 * C2595 + C2826 + C2826 + C19794 * C2822) * C79) *
                         C19805 * C2058 -
                     (C1769 * C79 + C1770 * C78 +
                      (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
                         C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C3249 * C93 + C3253 + C3253 + C3080 * C333 +
                      C3250 * C630 + C3254 + C3254 + C3081 * C836 +
                      C3251 * C631 + C3255 + C3255 + C3082 * C837) *
                         C19721 * C19805 * C2057 -
                     (C3251 * C3930 + C4116 + C4116 + C3082 * C4112 +
                      C3250 * C2593 + C4117 + C4117 + C3081 * C2820 +
                      C3249 * C1071 + C4118 + C4118 + C3080 * C1277) *
                         C19721 * C19805 * C2058) *
                        C1519 +
                    ((C3249 * C2593 + C5579 + C5579 + C3080 * C2820 +
                      C3250 * C3930 + C5580 + C5580 + C3081 * C4112 +
                      C3251 * C5328 + C5581 + C5581 + C3082 * C5577) *
                         C19721 * C19805 * C2058 -
                     (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 +
                      C3250 * C631 + C3686 + C3686 + C3081 * C837 +
                      C3249 * C630 + C3687 + C3687 + C3080 * C836) *
                         C19721 * C19805 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C155 +
                       (C222 * C156 + C19805 * C396) * C19794) *
                          C77 +
                      (C402 + C414) * C78 + C417 * C79) *
                         C2057 -
                     ((C2366 + C2360) * C79 + (C2367 + C2363) * C78 +
                      ((C222 * C1133 + C19805 * C1327) * C19794 +
                       (C222 * C1071 + C19805 * C1183) * C155) *
                          C77) *
                         C2058) *
                        C1519 +
                    ((((C222 * C2593 + C19805 * C2711) * C155 +
                       (C222 * C2655 + C19805 * C2876) * C19794) *
                          C77 +
                      ((C222 * C2594 + C19805 * C2712) * C155 +
                       (C222 * C2656 + C19805 * C2877) * C19794) *
                          C78 +
                      ((C222 * C2595 + C19805 * C2713) * C155 +
                       (C222 * C2657 + C19805 * C2878) * C19794) *
                          C79) *
                         C2058 -
                     ((C1830 + C1824) * C79 + (C1831 + C1827) * C78 +
                      ((C222 * C692 + C19805 * C886) * C19794 +
                       (C222 * C630 + C19805 * C742) * C155) *
                          C77) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3132 +
                      (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
                      C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
                         C19721 * C2057 -
                     (C5637 * C3082 + C5458 * C3134 + C5638 * C3081 +
                      C5460 * C3133 + (C222 * C1133 + C19805 * C1327) * C3080 +
                      (C222 * C1071 + C19805 * C1183) * C3132) *
                         C19721 * C2058) *
                        C1519 +
                    ((C5460 * C3132 + C5638 * C3080 + C5458 * C3133 +
                      C5637 * C3081 + (C222 * C5328 + C19805 * C5446) * C3134 +
                      (C222 * C5394 + C19805 * C5631) * C3082) *
                         C19721 * C2058 -
                     (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 +
                      C3576 * C3133 + C3737 * C3080 + C3574 * C3132) *
                         C19721 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C19805) *
                         C19794 * C2057 -
                     ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                       C88 * C1183 + C77 * C1371) *
                          C19805 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C222) *
                         C19794 * C2058) *
                        C1519 +
                    (((C88 * C2593 + C77 * C2596 + C90 * C2594 + C78 * C2597 +
                       C92 * C2595 + C79 * C2598) *
                          C222 +
                      (C88 * C2711 + C77 * C2929 + C90 * C2712 + C78 * C2930 +
                       C92 * C2713 + C79 * C2931) *
                          C19805) *
                         C19794 * C2058 -
                     ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                       C88 * C742 + C77 * C930) *
                          C19805 +
                      (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                       C88 * C630 + C77 * C636) *
                          C222) *
                         C19794 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C222 +
                       (C3084 * C223 + C19721 * C455) * C19805) *
                          C3080 +
                      (C3780 + C3792) * C3081 + C3795 * C3082) *
                         C2057 -
                     ((C5698 + C5692) * C3082 + (C5699 + C5695) * C3081 +
                      ((C3084 * C1183 + C19721 * C1371) * C19805 +
                       (C3084 * C1071 + C19721 * C1077) * C222) *
                          C3080) *
                         C2058) *
                        C1519 +
                    (((C5695 + C5699) * C3080 + (C5692 + C5698) * C3081 +
                      ((C3084 * C5328 + C19721 * C5329) * C222 +
                       (C3084 * C5446 + C19721 * C5688) * C19805) *
                          C3082) *
                         C2058 -
                     ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                      (C3792 + C3780) * C3080) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C155 * C93 + C19794 * C156) * C222 +
                       (C155 * C223 + C19794 * C498) * C19805) *
                          C77 +
                      (C504 + C516) * C78 + C519 * C79) *
                         C2057 -
                     ((C2478 + C2472) * C79 + (C2479 + C2475) * C78 +
                      ((C155 * C1183 + C19794 * C1415) * C19805 +
                       (C155 * C1071 + C19794 * C1133) * C222) *
                          C77) *
                         C2058) *
                        C1519 +
                    ((((C155 * C2593 + C19794 * C2655) * C222 +
                       (C155 * C2711 + C19794 * C2982) * C19805) *
                          C77 +
                      ((C155 * C2594 + C19794 * C2656) * C222 +
                       (C155 * C2712 + C19794 * C2983) * C19805) *
                          C78 +
                      ((C155 * C2595 + C19794 * C2657) * C222 +
                       (C155 * C2713 + C19794 * C2984) * C19805) *
                          C79) *
                         C2058 -
                     ((C1942 + C1936) * C79 + (C1943 + C1939) * C78 +
                      ((C155 * C742 + C19794 * C974) * C19805 +
                       (C155 * C630 + C19794 * C692) * C222) *
                          C77) *
                         C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C222 +
                      (C3132 * C223 + C3080 * C498 + C3133 * C742 +
                       C3081 * C974 + C3134 * C743 + C3082 * C975) *
                          C19805) *
                         C19721 * C2057 -
                     ((C3134 * C4027 + C3082 * C4241 + C3133 * C2711 +
                       C3081 * C2982 + C3132 * C1183 + C3080 * C1415) *
                          C19805 +
                      (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                       C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                          C222) *
                         C19721 * C2058) *
                        C1519 +
                    (((C3132 * C2593 + C3080 * C2655 + C3133 * C3930 +
                       C3081 * C3983 + C3134 * C5328 + C3082 * C5394) *
                          C222 +
                      (C3132 * C2711 + C3080 * C2982 + C3133 * C4027 +
                       C3081 * C4241 + C3134 * C5446 + C3082 * C5749) *
                          C19805) *
                         C19721 * C2058 -
                     ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 +
                       C3081 * C975 + C3132 * C742 + C3080 * C974) *
                          C19805 +
                      (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                       C3081 * C693 + C3132 * C630 + C3080 * C692) *
                          C222) *
                         C19721 * C2057) *
                        C1520) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
            C584 * C78 + C585 * C79) *
               C2057 -
           (C2542 * C79 + C2543 * C78 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C19794 * C77) *
               C2058) *
              C1519 +
          (((C557 * C2593 + C3039 + C3039 + C19805 * C3035) * C19794 * C77 +
            (C557 * C2594 + C3040 + C3040 + C19805 * C3036) * C19794 * C78 +
            (C557 * C2595 + C3041 + C3041 + C19805 * C3037) * C19794 * C79) *
               C2058 -
           (C2006 * C79 + C2007 * C78 +
            (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
               C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
            C3891 * C3082) *
               C19721 * C2057 -
           (C5811 * C3082 + C5812 * C3081 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C3080) *
               C19721 * C2058) *
              C1519 +
          ((C5812 * C3080 + C5811 * C3081 +
            (C557 * C5328 + C5806 + C5806 + C19805 * C5800) * C3082) *
               C19721 * C2058 -
           (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C2057) *
              C1520) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C19769 * C624 -
          (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
           C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
              C19805 * C19794 * C19769 * C625 +
          (C87 * C631 + C650 + C650 + C77 * C643 + C89 * C632 + C651 + C651 +
           C78 * C644 + C91 * C633 + C652 + C652 + C79 * C645) *
              C19805 * C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C19769 * C19755 * C84 -
          (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
           C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
              C19805 * C19794 * C19769 * C19755 * C85 +
          (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
           C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
              C19805 * C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C1066 -
          (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
           C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
              C19805 * C19794 * C1067 +
          (C87 * C1072 + C1091 + C1091 + C77 * C1084 + C89 * C1073 + C1092 +
           C1092 + C78 * C1085 + C91 * C1074 + C1093 + C1093 + C79 * C1086) *
              C19805 * C19794 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           (C3083 * C630 + C3087 + C3087 + C19721 * C642) * C19805 * C3081 +
           (C3083 * C631 + C3088 + C3088 + C19721 * C643) * C19805 * C3082) *
              C19769 * C19755 * C84 -
          ((C3083 * C632 + C3089 + C3089 + C19721 * C644) * C19805 * C3082 +
           (C3083 * C629 + C3090 + C3090 + C19721 * C641) * C19805 * C3081 +
           (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
              C19769 * C19755 * C85 +
          ((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C19805 * C3080 +
           (C3083 * C628 + C3093 + C3093 + C19721 * C640) * C19805 * C3081 +
           (C3083 * C633 + C3094 + C3094 + C19721 * C645) * C19805 * C3082) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           C3475 * C3081 + C3476 * C3082) *
              C19769 * C624 -
          (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C19769 * C625 +
          (C3476 * C3080 + C3477 * C3081 +
           (C3083 * C3452 + C3465 + C3465 + C19721 * C3456) * C19805 * C3082) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           C3475 * C3081 + C3476 * C3082) *
              C1066 -
          ((C3083 * C3930 + C3940 + C3940 + C19721 * C3936) * C19805 * C3082 +
           (C3083 * C2593 + C3941 + C3941 + C19721 * C2599) * C19805 * C3081 +
           (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C19805 * C3080) *
              C1067 +
          ((C3083 * C1072 + C3943 + C3943 + C19721 * C1084) * C19805 * C3080 +
           (C3083 * C3931 + C3944 + C3944 + C19721 * C3937) * C19805 * C3081 +
           (C3083 * C3932 + C3945 + C3945 + C19721 * C3938) * C19805 * C3082) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C19769 * C624 -
                    ((C155 * C634 + C19794 * C696) * C79 +
                     (C155 * C628 + C19794 * C690) * C92 +
                     (C155 * C635 + C19794 * C697) * C78 +
                     (C155 * C629 + C19794 * C691) * C90 +
                     (C155 * C636 + C19794 * C698) * C77 +
                     (C155 * C630 + C19794 * C692) * C88) *
                        C19805 * C19769 * C625 +
                    ((C155 * C631 + C19794 * C693) * C88 +
                     (C155 * C637 + C19794 * C699) * C77 +
                     (C155 * C632 + C19794 * C694) * C90 +
                     (C155 * C638 + C19794 * C700) * C78 +
                     (C155 * C633 + C19794 * C695) * C92 +
                     (C155 * C639 + C19794 * C701) * C79) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C19769 * C19755 * C84 -
                    (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                     C180 * C77 + C179 * C88) *
                        C19805 * C19769 * C19755 * C85 +
                    (C181 * C88 + C182 * C77 + C184 * C90 + C183 * C78 +
                     (C155 * C97 + C19794 * C160) * C92 +
                     (C155 * C102 + C19794 * C165) * C79) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C1066 -
                    ((C155 * C1075 + C19794 * C1137) * C79 +
                     (C155 * C1069 + C19794 * C1131) * C92 +
                     (C155 * C1076 + C19794 * C1138) * C78 +
                     (C155 * C1070 + C19794 * C1132) * C90 +
                     (C155 * C1077 + C19794 * C1139) * C77 +
                     (C155 * C1071 + C19794 * C1133) * C88) *
                        C19805 * C1067 +
                    ((C155 * C1072 + C19794 * C1134) * C88 +
                     (C155 * C1078 + C19794 * C1140) * C77 +
                     (C155 * C1073 + C19794 * C1135) * C90 +
                     (C155 * C1079 + C19794 * C1141) * C78 +
                     (C155 * C1074 + C19794 * C1136) * C92 +
                     (C155 * C1080 + C19794 * C1142) * C79) *
                        C19805 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                      C3081 * C697 + C3132 * C99 + C3080 * C162) *
                         C19721 +
                     (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                      C3081 * C691 + C3132 * C94 + C3080 * C157) *
                         C3084) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
                      C3134 * C633 + C3082 * C695) *
                         C3084 +
                     (C3132 * C100 + C3080 * C163 + C3133 * C634 +
                      C3081 * C696 + C3134 * C639 + C3082 * C701) *
                         C19721) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C19769 * C624 -
                    ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                      C3081 * C699 + C3132 * C636 + C3080 * C698) *
                         C19721 +
                     (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                      C3081 * C693 + C3132 * C630 + C3080 * C692) *
                         C3084) *
                        C19805 * C19769 * C625 +
                    ((C3132 * C631 + C3080 * C693 + C3133 * C3451 +
                      C3081 * C3515 + C3134 * C3452 + C3082 * C3516) *
                         C3084 +
                     (C3132 * C637 + C3080 * C699 + C3133 * C3453 +
                      C3081 * C3517 + C3134 * C3454 + C3082 * C3518) *
                         C19721) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C1066 -
                    ((C3134 * C3933 + C3082 * C3986 + C3133 * C2596 +
                      C3081 * C2658 + C3132 * C1077 + C3080 * C1139) *
                         C19721 +
                     (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                      C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                         C3084) *
                        C19805 * C1067 +
                    ((C3132 * C1072 + C3080 * C1134 + C3133 * C3931 +
                      C3081 * C3984 + C3134 * C3932 + C3082 * C3985) *
                         C3084 +
                     (C3132 * C1078 + C3080 * C1140 + C3133 * C3934 +
                      C3081 * C3987 + C3134 * C3935 + C3082 * C3988) *
                         C19721) *
                        C19805 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C19769 * C624 -
                    ((C222 * C634 + C19805 * C746) * C79 +
                     (C222 * C628 + C19805 * C740) * C92 +
                     (C222 * C635 + C19805 * C747) * C78 +
                     (C222 * C629 + C19805 * C741) * C90 +
                     (C222 * C636 + C19805 * C748) * C77 +
                     (C222 * C630 + C19805 * C742) * C88) *
                        C19794 * C19769 * C625 +
                    ((C222 * C631 + C19805 * C743) * C88 +
                     (C222 * C637 + C19805 * C749) * C77 +
                     (C222 * C632 + C19805 * C744) * C90 +
                     (C222 * C638 + C19805 * C750) * C78 +
                     (C222 * C633 + C19805 * C745) * C92 +
                     (C222 * C639 + C19805 * C751) * C79) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C19769 * C19755 * C84 -
                    (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                     C247 * C77 + C246 * C88) *
                        C19794 * C19769 * C19755 * C85 +
                    (C248 * C88 + C249 * C77 + C251 * C90 + C250 * C78 +
                     (C222 * C97 + C19805 * C227) * C92 +
                     (C222 * C102 + C19805 * C232) * C79) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C1066 -
                    ((C222 * C1075 + C19805 * C1187) * C79 +
                     (C222 * C1069 + C19805 * C1181) * C92 +
                     (C222 * C1076 + C19805 * C1188) * C78 +
                     (C222 * C1070 + C19805 * C1182) * C90 +
                     (C222 * C1077 + C19805 * C1189) * C77 +
                     (C222 * C1071 + C19805 * C1183) * C88) *
                        C19794 * C1067 +
                    ((C222 * C1072 + C19805 * C1184) * C88 +
                     (C222 * C1078 + C19805 * C1190) * C77 +
                     (C222 * C1073 + C19805 * C1185) * C90 +
                     (C222 * C1079 + C19805 * C1191) * C78 +
                     (C222 * C1074 + C19805 * C1186) * C92 +
                     (C222 * C1080 + C19805 * C1192) * C79) *
                        C19794 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     ((C222 * C630 + C19805 * C742) * C3084 +
                      (C222 * C636 + C19805 * C748) * C19721) *
                         C3081 +
                     ((C222 * C631 + C19805 * C743) * C3084 +
                      (C222 * C637 + C19805 * C749) * C19721) *
                         C3082) *
                        C19769 * C19755 * C84 -
                    (((C222 * C638 + C19805 * C750) * C19721 +
                      (C222 * C632 + C19805 * C744) * C3084) *
                         C3082 +
                     (C1656 * C19721 + C1657 * C3084) * C3081 +
                     (C247 * C19721 + C246 * C3084) * C3080) *
                        C19769 * C19755 * C85 +
                    ((C248 * C3084 + C249 * C19721) * C3080 +
                     (C1655 * C3084 + C1654 * C19721) * C3081 +
                     ((C222 * C633 + C19805 * C745) * C3084 +
                      (C222 * C639 + C19805 * C751) * C19721) *
                         C3082) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     (C3580 + C3581) * C3081 + C3586 * C3082) *
                        C19769 * C624 -
                    ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                     (C3581 + C3580) * C3080) *
                        C19769 * C625 +
                    (C3586 * C3080 + (C3585 + C3584) * C3081 +
                     ((C222 * C3452 + C19805 * C3558) * C3084 +
                      (C222 * C3454 + C19805 * C3560) * C19721) *
                         C3082) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     (C3580 + C3581) * C3081 + C3586 * C3082) *
                        C1066 -
                    (((C222 * C3933 + C19805 * C4030) * C19721 +
                      (C222 * C3930 + C19805 * C4027) * C3084) *
                         C3082 +
                     ((C222 * C2596 + C19805 * C2714) * C19721 +
                      (C222 * C2593 + C19805 * C2711) * C3084) *
                         C3081 +
                     ((C222 * C1077 + C19805 * C1189) * C19721 +
                      (C222 * C1071 + C19805 * C1183) * C3084) *
                         C3080) *
                        C1067 +
                    (((C222 * C1072 + C19805 * C1184) * C3084 +
                      (C222 * C1078 + C19805 * C1190) * C19721) *
                         C3080 +
                     ((C222 * C3931 + C19805 * C4028) * C3084 +
                      (C222 * C3934 + C19805 * C4031) * C19721) *
                         C3081 +
                     ((C222 * C3932 + C19805 * C4029) * C3084 +
                      (C222 * C3935 + C19805 * C4032) * C19721) *
                         C3082) *
                        C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C19769 * C624 -
                    ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                      C88 * C692 + C77 * C792) *
                         C19794 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C155) *
                        C19805 * C19769 * C625 +
                    ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                      C92 * C633 + C79 * C639) *
                         C155 +
                     (C88 * C693 + C77 * C793 + C90 * C694 + C78 * C794 +
                      C92 * C695 + C79 * C795) *
                         C19794) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                      C88 * C157 + C77 * C290) *
                         C19794 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C155) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C155 +
                     (C88 * C158 + C77 * C291 + C90 * C159 + C78 * C292 +
                      C92 * C160 + C79 * C293) *
                         C19794) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C1066 -
                    ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                      C88 * C1133 + C77 * C1233) *
                         C19794 +
                     (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                      C88 * C1071 + C77 * C1077) *
                         C155) *
                        C19805 * C1067 +
                    ((C88 * C1072 + C77 * C1078 + C90 * C1073 + C78 * C1079 +
                      C92 * C1074 + C79 * C1080) *
                         C155 +
                     (C88 * C1134 + C77 * C1234 + C90 * C1135 + C78 * C1235 +
                      C92 * C1136 + C79 * C1236) *
                         C19794) *
                        C19805 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 +
                     (C3084 * C630 + C19721 * C636) * C3133 +
                     (C3084 * C692 + C19721 * C792) * C3081 +
                     (C3084 * C631 + C19721 * C637) * C3134 +
                     (C3084 * C693 + C19721 * C793) * C3082) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C3084 * C694 + C19721 * C794) * C3082 +
                     (C3084 * C632 + C19721 * C638) * C3134 +
                     (C3084 * C691 + C19721 * C791) * C3081 +
                     (C3084 * C629 + C19721 * C635) * C3133 +
                     (C3084 * C157 + C19721 * C290) * C3080 +
                     (C3084 * C94 + C19721 * C99) * C3132) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C3084 * C95 + C19721 * C100) * C3132 +
                     (C3084 * C158 + C19721 * C291) * C3080 +
                     (C3084 * C628 + C19721 * C634) * C3133 +
                     (C3084 * C690 + C19721 * C790) * C3081 +
                     (C3084 * C633 + C19721 * C639) * C3134 +
                     (C3084 * C695 + C19721 * C795) * C3082) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                     C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                        C19805 * C19769 * C624 -
                    (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                     C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                        C19805 * C19769 * C625 +
                    (C3641 * C3132 + C3642 * C3080 + C3644 * C3133 +
                     C3643 * C3081 + (C3084 * C3452 + C19721 * C3454) * C3134 +
                     (C3084 * C3516 + C19721 * C3625) * C3082) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                     C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                        C19805 * C1066 -
                    ((C3084 * C3983 + C19721 * C4071) * C3082 +
                     (C3084 * C3930 + C19721 * C3933) * C3134 +
                     (C3084 * C2655 + C19721 * C2767) * C3081 +
                     (C3084 * C2593 + C19721 * C2596) * C3133 +
                     (C3084 * C1133 + C19721 * C1233) * C3080 +
                     (C3084 * C1071 + C19721 * C1077) * C3132) *
                        C19805 * C1067 +
                    ((C3084 * C1072 + C19721 * C1078) * C3132 +
                     (C3084 * C1134 + C19721 * C1234) * C3080 +
                     (C3084 * C3931 + C19721 * C3934) * C3133 +
                     (C3084 * C3984 + C19721 * C4072) * C3081 +
                     (C3084 * C3932 + C19721 * C3935) * C3134 +
                     (C3084 * C3985 + C19721 * C4073) * C3082) *
                        C19805 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C19769 * C624 -
          ((C332 * C628 + C841 + C841 + C19794 * C834) * C79 +
           (C332 * C629 + C842 + C842 + C19794 * C835) * C78 +
           (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
              C19805 * C19769 * C625 +
          ((C332 * C631 + C844 + C844 + C19794 * C837) * C77 +
           (C332 * C632 + C845 + C845 + C19794 * C838) * C78 +
           (C332 * C633 + C846 + C846 + C19794 * C839) * C79) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C19769 * C19755 * C84 -
          (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C19769 * C19755 *
              C85 +
          (C357 * C77 + C358 * C78 +
           (C332 * C97 + C349 + C349 + C19794 * C337) * C79) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C1066 -
          ((C332 * C1069 + C1282 + C1282 + C19794 * C1275) * C79 +
           (C332 * C1070 + C1283 + C1283 + C19794 * C1276) * C78 +
           (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C77) *
              C19805 * C1067 +
          ((C332 * C1072 + C1285 + C1285 + C19794 * C1278) * C77 +
           (C332 * C1073 + C1286 + C1286 + C19794 * C1279) * C78 +
           (C332 * C1074 + C1287 + C1287 + C19794 * C1280) * C79) *
              C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C19755 * C84 -
          (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
           C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
              C19721 * C19805 * C19769 * C19755 * C85 +
          (C3249 * C95 + C3259 + C3259 + C3080 * C335 + C3250 * C628 + C3260 +
           C3260 + C3081 * C834 + C3251 * C633 + C3261 + C3261 + C3082 * C839) *
              C19721 * C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C624 -
          (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
           C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
           C3080 * C836) *
              C19721 * C19805 * C19769 * C625 +
          (C3249 * C631 + C3688 + C3688 + C3080 * C837 + C3250 * C3451 + C3689 +
           C3689 + C3081 * C3682 + C3251 * C3452 + C3690 + C3690 +
           C3082 * C3683) *
              C19721 * C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C1066 -
          (C3251 * C3930 + C4116 + C4116 + C3082 * C4112 + C3250 * C2593 +
           C4117 + C4117 + C3081 * C2820 + C3249 * C1071 + C4118 + C4118 +
           C3080 * C1277) *
              C19721 * C19805 * C1067 +
          (C3249 * C1072 + C4119 + C4119 + C3080 * C1278 + C3250 * C3931 +
           C4120 + C4120 + C3081 * C4113 + C3251 * C3932 + C4121 + C4121 +
           C3082 * C4114) *
              C19721 * C19805 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C19769 * C624 -
          (((C222 * C690 + C19805 * C884) * C19794 +
            (C222 * C628 + C19805 * C740) * C155) *
               C79 +
           ((C222 * C691 + C19805 * C885) * C19794 +
            (C222 * C629 + C19805 * C741) * C155) *
               C78 +
           ((C222 * C692 + C19805 * C886) * C19794 +
            (C222 * C630 + C19805 * C742) * C155) *
               C77) *
              C19769 * C625 +
          (((C222 * C631 + C19805 * C743) * C155 +
            (C222 * C693 + C19805 * C887) * C19794) *
               C77 +
           ((C222 * C632 + C19805 * C744) * C155 +
            (C222 * C694 + C19805 * C888) * C19794) *
               C78 +
           ((C222 * C633 + C19805 * C745) * C155 +
            (C222 * C695 + C19805 * C889) * C19794) *
               C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C19769 * C19755 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C19769 * C19755 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C19805 * C227) * C155 +
            (C222 * C160 + C19805 * C400) * C19794) *
               C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C1066 -
          (((C222 * C1131 + C19805 * C1325) * C19794 +
            (C222 * C1069 + C19805 * C1181) * C155) *
               C79 +
           ((C222 * C1132 + C19805 * C1326) * C19794 +
            (C222 * C1070 + C19805 * C1182) * C155) *
               C78 +
           ((C222 * C1133 + C19805 * C1327) * C19794 +
            (C222 * C1071 + C19805 * C1183) * C155) *
               C77) *
              C1067 +
          (((C222 * C1072 + C19805 * C1184) * C155 +
            (C222 * C1134 + C19805 * C1328) * C19794) *
               C77 +
           ((C222 * C1073 + C19805 * C1185) * C155 +
            (C222 * C1135 + C19805 * C1329) * C19794) *
               C78 +
           ((C222 * C1074 + C19805 * C1186) * C155 +
            (C222 * C1136 + C19805 * C1330) * C19794) *
               C79) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 +
           (C222 * C630 + C19805 * C742) * C3133 +
           (C222 * C692 + C19805 * C886) * C3081 +
           (C222 * C631 + C19805 * C743) * C3134 +
           (C222 * C693 + C19805 * C887) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C222 * C694 + C19805 * C888) * C3082 +
           (C222 * C632 + C19805 * C744) * C3134 + C1829 * C3081 +
           C1657 * C3133 + C411 * C3080 + C246 * C3132) *
              C19721 * C19769 * C19755 * C85 +
          (C248 * C3132 + C412 * C3080 + C1655 * C3133 + C1828 * C3081 +
           (C222 * C633 + C19805 * C745) * C3134 +
           (C222 * C695 + C19805 * C889) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
           C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
              C19721 * C19769 * C624 -
          (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 + C3576 * C3133 +
           C3737 * C3080 + C3574 * C3132) *
              C19721 * C19769 * C625 +
          (C3576 * C3132 + C3738 * C3080 + C3579 * C3133 + C3739 * C3081 +
           (C222 * C3452 + C19805 * C3558) * C3134 +
           (C222 * C3516 + C19805 * C3729) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
           C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
              C19721 * C1066 -
          ((C222 * C3983 + C19805 * C4159) * C3082 +
           (C222 * C3930 + C19805 * C4027) * C3134 +
           (C222 * C2655 + C19805 * C2876) * C3081 +
           (C222 * C2593 + C19805 * C2711) * C3133 +
           (C222 * C1133 + C19805 * C1327) * C3080 +
           (C222 * C1071 + C19805 * C1183) * C3132) *
              C19721 * C1067 +
          ((C222 * C1072 + C19805 * C1184) * C3132 +
           (C222 * C1134 + C19805 * C1328) * C3080 +
           (C222 * C3931 + C19805 * C4028) * C3133 +
           (C222 * C3984 + C19805 * C4160) * C3081 +
           (C222 * C3932 + C19805 * C4029) * C3134 +
           (C222 * C3985 + C19805 * C4161) * C3082) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C19769 * C624 -
                    ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                      C88 * C742 + C77 * C930) *
                         C19805 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C222) *
                        C19794 * C19769 * C625 +
                    ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                      C92 * C633 + C79 * C639) *
                         C222 +
                     (C88 * C743 + C77 * C931 + C90 * C744 + C78 * C932 +
                      C92 * C745 + C79 * C933) *
                         C19805) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                      C88 * C224 + C77 * C456) *
                         C19805 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C222) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C222 +
                     (C88 * C225 + C77 * C457 + C90 * C226 + C78 * C458 +
                      C92 * C227 + C79 * C459) *
                         C19805) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C1066 -
                    ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                      C88 * C1183 + C77 * C1371) *
                         C19805 +
                     (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                      C88 * C1071 + C77 * C1077) *
                         C222) *
                        C19794 * C1067 +
                    ((C88 * C1072 + C77 * C1078 + C90 * C1073 + C78 * C1079 +
                      C92 * C1074 + C79 * C1080) *
                         C222 +
                     (C88 * C1184 + C77 * C1372 + C90 * C1185 + C78 * C1373 +
                      C92 * C1186 + C79 * C1374) *
                         C19805) *
                        C19794 * C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     ((C3084 * C630 + C19721 * C636) * C222 +
                      (C3084 * C742 + C19721 * C930) * C19805) *
                         C3081 +
                     ((C3084 * C631 + C19721 * C637) * C222 +
                      (C3084 * C743 + C19721 * C931) * C19805) *
                         C3082) *
                        C19769 * C19755 * C84 -
                    (((C3084 * C744 + C19721 * C932) * C19805 +
                      (C3084 * C632 + C19721 * C638) * C222) *
                         C3082 +
                     ((C3084 * C741 + C19721 * C929) * C19805 +
                      (C3084 * C629 + C19721 * C635) * C222) *
                         C3081 +
                     ((C3084 * C224 + C19721 * C456) * C19805 +
                      (C3084 * C94 + C19721 * C99) * C222) *
                         C3080) *
                        C19769 * C19755 * C85 +
                    (((C3084 * C95 + C19721 * C100) * C222 +
                      (C3084 * C225 + C19721 * C457) * C19805) *
                         C3080 +
                     ((C3084 * C628 + C19721 * C634) * C222 +
                      (C3084 * C740 + C19721 * C928) * C19805) *
                         C3081 +
                     ((C3084 * C633 + C19721 * C639) * C222 +
                      (C3084 * C745 + C19721 * C933) * C19805) *
                         C3082) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     (C3780 + C3792) * C3081 + C3795 * C3082) *
                        C19769 * C624 -
                    ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                     (C3792 + C3780) * C3080) *
                        C19769 * C625 +
                    (C3795 * C3080 + (C3788 + C3794) * C3081 +
                     ((C3084 * C3452 + C19721 * C3454) * C222 +
                      (C3084 * C3558 + C19721 * C3778) * C19805) *
                         C3082) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     (C3780 + C3792) * C3081 + C3795 * C3082) *
                        C1066 -
                    (((C3084 * C4027 + C19721 * C4200) * C19805 +
                      (C3084 * C3930 + C19721 * C3933) * C222) *
                         C3082 +
                     ((C3084 * C2711 + C19721 * C2929) * C19805 +
                      (C3084 * C2593 + C19721 * C2596) * C222) *
                         C3081 +
                     ((C3084 * C1183 + C19721 * C1371) * C19805 +
                      (C3084 * C1071 + C19721 * C1077) * C222) *
                         C3080) *
                        C1067 +
                    (((C3084 * C1072 + C19721 * C1078) * C222 +
                      (C3084 * C1184 + C19721 * C1372) * C19805) *
                         C3080 +
                     ((C3084 * C3931 + C19721 * C3934) * C222 +
                      (C3084 * C4028 + C19721 * C4201) * C19805) *
                         C3081 +
                     ((C3084 * C3932 + C19721 * C3935) * C222 +
                      (C3084 * C4029 + C19721 * C4202) * C19805) *
                         C3082) *
                        C1068) *
                   C19755 * C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C19769 * C624 -
          (((C155 * C740 + C19794 * C972) * C19805 +
            (C155 * C628 + C19794 * C690) * C222) *
               C79 +
           ((C155 * C741 + C19794 * C973) * C19805 +
            (C155 * C629 + C19794 * C691) * C222) *
               C78 +
           ((C155 * C742 + C19794 * C974) * C19805 +
            (C155 * C630 + C19794 * C692) * C222) *
               C77) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C222 +
            (C155 * C743 + C19794 * C975) * C19805) *
               C77 +
           ((C155 * C632 + C19794 * C694) * C222 +
            (C155 * C744 + C19794 * C976) * C19805) *
               C78 +
           ((C155 * C633 + C19794 * C695) * C222 +
            (C155 * C745 + C19794 * C977) * C19805) *
               C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C19769 * C19755 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C19769 * C19755 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C19794 * C160) * C222 +
            (C155 * C227 + C19794 * C502) * C19805) *
               C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C1066 -
          (((C155 * C1181 + C19794 * C1413) * C19805 +
            (C155 * C1069 + C19794 * C1131) * C222) *
               C79 +
           ((C155 * C1182 + C19794 * C1414) * C19805 +
            (C155 * C1070 + C19794 * C1132) * C222) *
               C78 +
           ((C155 * C1183 + C19794 * C1415) * C19805 +
            (C155 * C1071 + C19794 * C1133) * C222) *
               C77) *
              C1067 +
          (((C155 * C1072 + C19794 * C1134) * C222 +
            (C155 * C1184 + C19794 * C1416) * C19805) *
               C77 +
           ((C155 * C1073 + C19794 * C1135) * C222 +
            (C155 * C1185 + C19794 * C1417) * C19805) *
               C78 +
           ((C155 * C1074 + C19794 * C1136) * C222 +
            (C155 * C1186 + C19794 * C1418) * C19805) *
               C79) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C19769 * C19755 * C84 -
          ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
            C3132 * C224 + C3080 * C499) *
               C19805 +
           (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
            C3132 * C94 + C3080 * C157) *
               C222) *
              C19721 * C19769 * C19755 * C85 +
          ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
            C3134 * C633 + C3082 * C695) *
               C222 +
           (C3132 * C225 + C3080 * C500 + C3133 * C740 + C3081 * C972 +
            C3134 * C745 + C3082 * C977) *
               C19805) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C19769 * C624 -
          ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 + C3081 * C975 +
            C3132 * C742 + C3080 * C974) *
               C19805 +
           (C3134 * C3451 + C3082 * C3515 + C3133 * C631 + C3081 * C693 +
            C3132 * C630 + C3080 * C692) *
               C222) *
              C19721 * C19769 * C625 +
          ((C3132 * C631 + C3080 * C693 + C3133 * C3451 + C3081 * C3515 +
            C3134 * C3452 + C3082 * C3516) *
               C222 +
           (C3132 * C743 + C3080 * C975 + C3133 * C3557 + C3081 * C3833 +
            C3134 * C3558 + C3082 * C3834) *
               C19805) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C1066 -
          ((C3134 * C4027 + C3082 * C4241 + C3133 * C2711 + C3081 * C2982 +
            C3132 * C1183 + C3080 * C1415) *
               C19805 +
           (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 + C3081 * C2655 +
            C3132 * C1071 + C3080 * C1133) *
               C222) *
              C19721 * C1067 +
          ((C3132 * C1072 + C3080 * C1134 + C3133 * C3931 + C3081 * C3984 +
            C3134 * C3932 + C3082 * C3985) *
               C222 +
           (C3132 * C1184 + C3080 * C1416 + C3133 * C4028 + C3081 * C4242 +
            C3134 * C4029 + C3082 * C4243) *
               C19805) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C19769 * C624 -
          ((C557 * C628 + C1023 + C1023 + C19805 * C1016) * C19794 * C79 +
           (C557 * C629 + C1024 + C1024 + C19805 * C1017) * C19794 * C78 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
              C19769 * C625 +
          ((C557 * C631 + C1026 + C1026 + C19805 * C1019) * C19794 * C77 +
           (C557 * C632 + C1027 + C1027 + C19805 * C1020) * C19794 * C78 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C19794 * C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C19769 * C19755 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C19769 * C19755 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C19805 * C562) * C19794 * C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C1066 -
          ((C557 * C1069 + C1464 + C1464 + C19805 * C1457) * C19794 * C79 +
           (C557 * C1070 + C1465 + C1465 + C19805 * C1458) * C19794 * C78 +
           (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C19794 * C77) *
              C1067 +
          ((C557 * C1072 + C1467 + C1467 + C19805 * C1460) * C19794 * C77 +
           (C557 * C1073 + C1468 + C1468 + C19805 * C1461) * C19794 * C78 +
           (C557 * C1074 + C1469 + C1469 + C19805 * C1462) * C19794 * C79) *
              C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C3081 +
           (C557 * C631 + C1026 + C1026 + C19805 * C1019) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C557 * C632 + C1027 + C1027 + C19805 * C1020) * C3082 +
           C2005 * C3081 + C581 * C3080) *
              C19721 * C19769 * C19755 * C85 +
          (C582 * C3080 + C2004 * C3081 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
           C3891 * C3082) *
              C19721 * C19769 * C624 -
          (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C19769 *
              C625 +
          (C3891 * C3080 + C3892 * C3081 +
           (C557 * C3452 + C3883 + C3883 + C19805 * C3874) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
           C3891 * C3082) *
              C19721 * C1066 -
          ((C557 * C3930 + C4286 + C4286 + C19805 * C4282) * C3082 +
           (C557 * C2593 + C3039 + C3039 + C19805 * C3035) * C3081 +
           (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C3080) *
              C19721 * C1067 +
          ((C557 * C1072 + C1467 + C1467 + C19805 * C1460) * C3080 +
           (C557 * C3931 + C4287 + C4287 + C19805 * C4283) * C3081 +
           (C557 * C3932 + C4288 + C4288 + C19805 * C4284) * C3082) *
              C19721 * C1068) *
         C19755 * C19743) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
            C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
               C19805 * C19794 * C2057 -
           (C91 * C1069 + C1088 + C1088 + C79 * C1081 + C89 * C1070 + C1089 +
            C1089 + C78 * C1082 + C87 * C1071 + C1090 + C1090 + C77 * C1083) *
               C19805 * C19794 * C2058) *
              C19755 * C1521 +
          ((C87 * C1070 + C2063 + C2063 + C77 * C1082 + C89 * C1069 + C2064 +
            C2064 + C78 * C1081 + C91 * C2059 + C2065 + C2065 + C79 * C2061) *
               C19805 * C19794 * C2058 -
           (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
            C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
               C19805 * C19794 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
            C3475 * C3081 + C3476 * C3082) *
               C2057 -
           ((C3083 * C3930 + C3940 + C3940 + C19721 * C3936) * C19805 * C3082 +
            (C3083 * C2593 + C3941 + C3941 + C19721 * C2599) * C19805 * C3081 +
            (C3083 * C1071 + C3942 + C3942 + C19721 * C1083) * C19805 * C3080) *
               C2058) *
              C19755 * C1521 +
          (((C3083 * C1070 + C4862 + C4862 + C19721 * C1082) * C19805 * C3080 +
            (C3083 * C2594 + C4863 + C4863 + C19721 * C2600) * C19805 * C3081 +
            (C3083 * C4858 + C4864 + C4864 + C19721 * C4860) * C19805 * C3082) *
               C2058 -
           (C4354 * C3082 + C4353 * C3081 +
            (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
               C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C155 * C93 + C19794 * C156) * C88 +
                      (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                      C180 * C78 + C181 * C92 + C182 * C79) *
                         C19805 * C2057 -
                     (C2126 * C79 + C2127 * C92 + C2128 * C78 + C2129 * C90 +
                      (C155 * C1077 + C19794 * C1139) * C77 +
                      (C155 * C1071 + C19794 * C1133) * C88) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    ((C2129 * C88 + C2128 * C77 + C2127 * C90 + C2126 * C78 +
                      (C155 * C2059 + C19794 * C2115) * C92 +
                      (C155 * C2060 + C19794 * C2116) * C79) *
                         C19805 * C2058 -
                     (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                      C180 * C77 + C179 * C88) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3132 * C93 + C3080 * C156 + C3133 * C630 +
                       C3081 * C692 + C3134 * C631 + C3082 * C693) *
                          C3084 +
                      (C3132 * C98 + C3080 * C161 + C3133 * C636 +
                       C3081 * C698 + C3134 * C637 + C3082 * C699) *
                          C19721) *
                         C19805 * C2057 -
                     ((C3134 * C3933 + C3082 * C3986 + C3133 * C2596 +
                       C3081 * C2658 + C3132 * C1077 + C3080 * C1139) *
                          C19721 +
                      (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 +
                       C3081 * C2655 + C3132 * C1071 + C3080 * C1133) *
                          C3084) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    (((C3132 * C1070 + C3080 * C1132 + C3133 * C2594 +
                       C3081 * C2656 + C3134 * C4858 + C3082 * C4914) *
                          C3084 +
                      (C3132 * C1076 + C3080 * C1138 + C3133 * C2597 +
                       C3081 * C2659 + C3134 * C4859 + C3082 * C4915) *
                          C19721) *
                         C19805 * C2058 -
                     ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                       C3081 * C697 + C3132 * C99 + C3080 * C162) *
                          C19721 +
                      (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                       C3081 * C691 + C3132 * C94 + C3080 * C157) *
                          C3084) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C88 +
                      (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                      C247 * C78 + C248 * C92 + C249 * C79) *
                         C19794 * C2057 -
                     (C2190 * C79 + C2191 * C92 + C2192 * C78 + C2193 * C90 +
                      (C222 * C1077 + C19805 * C1189) * C77 +
                      (C222 * C1071 + C19805 * C1183) * C88) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    ((C2193 * C88 + C2192 * C77 + C2191 * C90 + C2190 * C78 +
                      (C222 * C2059 + C19805 * C2179) * C92 +
                      (C222 * C2060 + C19805 * C2180) * C79) *
                         C19794 * C2058 -
                     (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                      C247 * C77 + C246 * C88) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C222 * C93 + C19805 * C223) * C3084 +
                       (C222 * C98 + C19805 * C228) * C19721) *
                          C3080 +
                      (C3580 + C3581) * C3081 + C3586 * C3082) *
                         C2057 -
                     (((C222 * C3933 + C19805 * C4030) * C19721 +
                       (C222 * C3930 + C19805 * C4027) * C3084) *
                          C3082 +
                      ((C222 * C2596 + C19805 * C2714) * C19721 +
                       (C222 * C2593 + C19805 * C2711) * C3084) *
                          C3081 +
                      ((C222 * C1077 + C19805 * C1189) * C19721 +
                       (C222 * C1071 + C19805 * C1183) * C3084) *
                          C3080) *
                         C2058) *
                        C19755 * C1521 +
                    (((C2193 * C3084 + C2192 * C19721) * C3080 +
                      ((C222 * C2594 + C19805 * C2712) * C3084 +
                       (C222 * C2597 + C19805 * C2715) * C19721) *
                          C3081 +
                      ((C222 * C4858 + C19805 * C4966) * C3084 +
                       (C222 * C4859 + C19805 * C4967) * C19721) *
                          C3082) *
                         C2058 -
                     ((C4468 + C4467) * C3082 + (C4460 + C4459) * C3081 +
                      (C247 * C19721 + C246 * C3084) * C3080) *
                         C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C155 +
                      (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                       C92 * C158 + C79 * C291) *
                          C19794) *
                         C19805 * C2057 -
                     ((C92 * C1131 + C79 * C1231 + C90 * C1132 + C78 * C1232 +
                       C88 * C1133 + C77 * C1233) *
                          C19794 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C155) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    (((C88 * C1070 + C77 * C1076 + C90 * C1069 + C78 * C1075 +
                       C92 * C2059 + C79 * C2060) *
                          C155 +
                      (C88 * C1132 + C77 * C1232 + C90 * C1131 + C78 * C1231 +
                       C92 * C2115 + C79 * C2243) *
                          C19794) *
                         C19805 * C2058 -
                     ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                       C88 * C157 + C77 * C290) *
                          C19794 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C155) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C3132 +
                      (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                      C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                         C19805 * C2057 -
                     ((C3084 * C3983 + C19721 * C4071) * C3082 +
                      (C3084 * C3930 + C19721 * C3933) * C3134 +
                      (C3084 * C2655 + C19721 * C2767) * C3081 +
                      (C3084 * C2593 + C19721 * C2596) * C3133 +
                      (C3084 * C1133 + C19721 * C1233) * C3080 +
                      (C3084 * C1071 + C19721 * C1077) * C3132) *
                         C19805 * C2058) *
                        C19755 * C1521 +
                    (((C3084 * C1070 + C19721 * C1076) * C3132 +
                      (C3084 * C1132 + C19721 * C1232) * C3080 +
                      (C3084 * C2594 + C19721 * C2597) * C3133 +
                      (C3084 * C2656 + C19721 * C2768) * C3081 +
                      (C3084 * C4858 + C19721 * C4859) * C3134 +
                      (C3084 * C4914 + C19721 * C5018) * C3082) *
                         C19805 * C2058 -
                     (C4531 * C3082 + C4530 * C3134 + C4529 * C3081 +
                      C4528 * C3133 + (C3084 * C157 + C19721 * C290) * C3080 +
                      (C3084 * C94 + C19721 * C99) * C3132) *
                         C19805 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
            C357 * C79) *
               C19805 * C2057 -
           (C2305 * C79 + C2306 * C78 +
            (C332 * C1071 + C1284 + C1284 + C19794 * C1277) * C77) *
               C19805 * C2058) *
              C19755 * C1521 +
          ((C2306 * C77 + C2305 * C78 +
            (C332 * C2059 + C2300 + C2300 + C19794 * C2294) * C79) *
               C19805 * C2058 -
           (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
            C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 +
            C3082 * C837) *
               C19721 * C19805 * C2057 -
           (C3251 * C3930 + C4116 + C4116 + C3082 * C4112 + C3250 * C2593 +
            C4117 + C4117 + C3081 * C2820 + C3249 * C1071 + C4118 + C4118 +
            C3080 * C1277) *
               C19721 * C19805 * C2058) *
              C19755 * C1521 +
          ((C3249 * C1070 + C5071 + C5071 + C3080 * C1276 + C3250 * C2594 +
            C5072 + C5072 + C3081 * C2821 + C3251 * C4858 + C5073 + C5073 +
            C3082 * C5069) *
               C19721 * C19805 * C2058 -
           (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
            C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
               C19721 * C19805 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C222 * C93 + C19805 * C223) * C155 +
             (C222 * C156 + C19805 * C396) * C19794) *
                C77 +
            (C402 + C414) * C78 + C417 * C79) *
               C2057 -
           ((C2366 + C2360) * C79 + (C2367 + C2363) * C78 +
            ((C222 * C1133 + C19805 * C1327) * C19794 +
             (C222 * C1071 + C19805 * C1183) * C155) *
                C77) *
               C2058) *
              C19755 * C1521 +
          (((C2363 + C2367) * C77 + (C2360 + C2366) * C78 +
            ((C222 * C2059 + C19805 * C2179) * C155 +
             (C222 * C2115 + C19805 * C2356) * C19794) *
                C79) *
               C2058 -
           ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
               C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C3132 +
            (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
            C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
               C19721 * C2057 -
           ((C222 * C3983 + C19805 * C4159) * C3082 +
            (C222 * C3930 + C19805 * C4027) * C3134 +
            (C222 * C2655 + C19805 * C2876) * C3081 +
            (C222 * C2593 + C19805 * C2711) * C3133 +
            (C222 * C1133 + C19805 * C1327) * C3080 +
            (C222 * C1071 + C19805 * C1183) * C3132) *
               C19721 * C2058) *
              C19755 * C1521 +
          ((C2193 * C3132 + C2365 * C3080 +
            (C222 * C2594 + C19805 * C2712) * C3133 +
            (C222 * C2656 + C19805 * C2877) * C3081 +
            (C222 * C4858 + C19805 * C4966) * C3134 +
            (C222 * C4914 + C19805 * C5123) * C3082) *
               C19721 * C2058 -
           (C4639 * C3082 + C4465 * C3134 + C1829 * C3081 + C1657 * C3133 +
            C411 * C3080 + C246 * C3132) *
               C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                       C92 * C95 + C79 * C100) *
                          C222 +
                      (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                       C92 * C225 + C79 * C457) *
                          C19805) *
                         C19794 * C2057 -
                     ((C92 * C1181 + C79 * C1369 + C90 * C1182 + C78 * C1370 +
                       C88 * C1183 + C77 * C1371) *
                          C19805 +
                      (C92 * C1069 + C79 * C1075 + C90 * C1070 + C78 * C1076 +
                       C88 * C1071 + C77 * C1077) *
                          C222) *
                         C19794 * C2058) *
                        C19755 * C1521 +
                    (((C88 * C1070 + C77 * C1076 + C90 * C1069 + C78 * C1075 +
                       C92 * C2059 + C79 * C2060) *
                          C222 +
                      (C88 * C1182 + C77 * C1370 + C90 * C1181 + C78 * C1369 +
                       C92 * C2179 + C79 * C2417) *
                          C19805) *
                         C19794 * C2058 -
                     ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                       C88 * C224 + C77 * C456) *
                          C19805 +
                      (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                       C88 * C94 + C77 * C99) *
                          C222) *
                         C19794 * C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C3084 * C93 + C19721 * C98) * C222 +
                       (C3084 * C223 + C19721 * C455) * C19805) *
                          C3080 +
                      (C3780 + C3792) * C3081 + C3795 * C3082) *
                         C2057 -
                     (((C3084 * C4027 + C19721 * C4200) * C19805 +
                       (C3084 * C3930 + C19721 * C3933) * C222) *
                          C3082 +
                      ((C3084 * C2711 + C19721 * C2929) * C19805 +
                       (C3084 * C2593 + C19721 * C2596) * C222) *
                          C3081 +
                      ((C3084 * C1183 + C19721 * C1371) * C19805 +
                       (C3084 * C1071 + C19721 * C1077) * C222) *
                          C3080) *
                         C2058) *
                        C19755 * C1521 +
                    ((((C3084 * C1070 + C19721 * C1076) * C222 +
                       (C3084 * C1182 + C19721 * C1370) * C19805) *
                          C3080 +
                      ((C3084 * C2594 + C19721 * C2597) * C222 +
                       (C3084 * C2712 + C19721 * C2930) * C19805) *
                          C3081 +
                      ((C3084 * C4858 + C19721 * C4859) * C222 +
                       (C3084 * C4966 + C19721 * C5174) * C19805) *
                          C3082) *
                         C2058 -
                     ((C4700 + C4694) * C3082 + (C4699 + C4691) * C3081 +
                      ((C3084 * C224 + C19721 * C456) * C19805 +
                       (C3084 * C94 + C19721 * C99) * C222) *
                          C3080) *
                         C2057) *
                        C19755 * C1522)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C155 * C93 + C19794 * C156) * C222 +
             (C155 * C223 + C19794 * C498) * C19805) *
                C77 +
            (C504 + C516) * C78 + C519 * C79) *
               C2057 -
           ((C2478 + C2472) * C79 + (C2479 + C2475) * C78 +
            ((C155 * C1183 + C19794 * C1415) * C19805 +
             (C155 * C1071 + C19794 * C1133) * C222) *
                C77) *
               C2058) *
              C19755 * C1521 +
          (((C2475 + C2479) * C77 + (C2472 + C2478) * C78 +
            ((C155 * C2059 + C19794 * C2115) * C222 +
             (C155 * C2179 + C19794 * C2468) * C19805) *
                C79) *
               C2058 -
           ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
               C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
             C3134 * C631 + C3082 * C693) *
                C222 +
            (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
             C3134 * C743 + C3082 * C975) *
                C19805) *
               C19721 * C2057 -
           ((C3134 * C4027 + C3082 * C4241 + C3133 * C2711 + C3081 * C2982 +
             C3132 * C1183 + C3080 * C1415) *
                C19805 +
            (C3134 * C3930 + C3082 * C3983 + C3133 * C2593 + C3081 * C2655 +
             C3132 * C1071 + C3080 * C1133) *
                C222) *
               C19721 * C2058) *
              C19755 * C1521 +
          (((C3132 * C1070 + C3080 * C1132 + C3133 * C2594 + C3081 * C2656 +
             C3134 * C4858 + C3082 * C4914) *
                C222 +
            (C3132 * C1182 + C3080 * C1414 + C3133 * C2712 + C3081 * C2983 +
             C3134 * C4966 + C3082 * C5225) *
                C19805) *
               C19721 * C2058 -
           ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
             C3132 * C224 + C3080 * C499) *
                C19805 +
            (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
             C3132 * C94 + C3080 * C157) *
                C222) *
               C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
            C584 * C78 + C585 * C79) *
               C2057 -
           (C2542 * C79 + C2543 * C78 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C19794 * C77) *
               C2058) *
              C19755 * C1521 +
          ((C2543 * C77 + C2542 * C78 +
            (C557 * C2059 + C2535 + C2535 + C19805 * C2529) * C19794 * C79) *
               C2058 -
           (C586 * C79 + C585 * C78 + C584 * C77) * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
            C3891 * C3082) *
               C19721 * C2057 -
           ((C557 * C3930 + C4286 + C4286 + C19805 * C4282) * C3082 +
            (C557 * C2593 + C3039 + C3039 + C19805 * C3035) * C3081 +
            (C557 * C1071 + C1466 + C1466 + C19805 * C1459) * C3080) *
               C19721 * C2058) *
              C19755 * C1521 +
          ((C2541 * C3080 +
            (C557 * C2594 + C3040 + C3040 + C19805 * C3036) * C3081 +
            (C557 * C4858 + C5278 + C5278 + C19805 * C5276) * C3082) *
               C19721 * C2058 -
           (C4808 * C3082 + C2005 * C3081 + C581 * C3080) * C19721 * C2057) *
              C19755 * C1522)) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C19769 * C19755 * C84 -
          (C91 * C96 + C112 + C112 + C79 * C106 + C89 * C95 + C113 + C113 +
           C78 * C105 + C87 * C94 + C114 + C114 + C77 * C104) *
              C19805 * C19794 * C19769 * C19755 * C85 +
          (C87 * C95 + C115 + C115 + C77 * C105 + C89 * C96 + C116 + C116 +
           C78 * C106 + C91 * C97 + C117 + C117 + C79 * C107) *
              C19805 * C19794 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C93 + C109 + C109 + C77 * C103 + C89 * C94 + C110 + C110 +
           C78 * C104 + C91 * C95 + C111 + C111 + C79 * C105) *
              C19805 * C19794 * C19769 * C624 -
          (C91 * C628 + C647 + C647 + C79 * C640 + C89 * C629 + C648 + C648 +
           C78 * C641 + C87 * C630 + C649 + C649 + C77 * C642) *
              C19805 * C19794 * C19769 * C625 +
          (C87 * C631 + C650 + C650 + C77 * C643 + C89 * C632 + C651 + C651 +
           C78 * C644 + C91 * C633 + C652 + C652 + C79 * C645) *
              C19805 * C19794 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           (C3083 * C630 + C3087 + C3087 + C19721 * C642) * C19805 * C3081 +
           (C3083 * C631 + C3088 + C3088 + C19721 * C643) * C19805 * C3082) *
              C19769 * C19755 * C84 -
          ((C3083 * C632 + C3089 + C3089 + C19721 * C644) * C19805 * C3082 +
           (C3083 * C629 + C3090 + C3090 + C19721 * C641) * C19805 * C3081 +
           (C3083 * C94 + C3091 + C3091 + C19721 * C104) * C19805 * C3080) *
              C19769 * C19755 * C85 +
          ((C3083 * C95 + C3092 + C3092 + C19721 * C105) * C19805 * C3080 +
           (C3083 * C628 + C3093 + C3093 + C19721 * C640) * C19805 * C3081 +
           (C3083 * C633 + C3094 + C3094 + C19721 * C645) * C19805 * C3082) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C93 + C3086 + C3086 + C19721 * C103) * C19805 * C3080 +
           C3475 * C3081 + C3476 * C3082) *
              C19769 * C624 -
          (C3477 * C3082 + C3476 * C3081 + C3475 * C3080) * C19769 * C625 +
          (C3476 * C3080 + C3477 * C3081 +
           (C3083 * C3452 + C3465 + C3465 + C19721 * C3456) * C19805 * C3082) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C19769 * C19755 * C84 -
                    (C183 * C79 + C184 * C92 + C182 * C78 + C181 * C90 +
                     C180 * C77 + C179 * C88) *
                        C19805 * C19769 * C19755 * C85 +
                    (C181 * C88 + C182 * C77 + C184 * C90 + C183 * C78 +
                     (C155 * C97 + C19794 * C160) * C92 +
                     (C155 * C102 + C19794 * C165) * C79) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C155 * C93 + C19794 * C156) * C88 +
                     (C155 * C98 + C19794 * C161) * C77 + C179 * C90 +
                     C180 * C78 + C181 * C92 + C182 * C79) *
                        C19805 * C19769 * C624 -
                    ((C155 * C634 + C19794 * C696) * C79 +
                     (C155 * C628 + C19794 * C690) * C92 +
                     (C155 * C635 + C19794 * C697) * C78 +
                     (C155 * C629 + C19794 * C691) * C90 +
                     (C155 * C636 + C19794 * C698) * C77 +
                     (C155 * C630 + C19794 * C692) * C88) *
                        C19805 * C19769 * C625 +
                    ((C155 * C631 + C19794 * C693) * C88 +
                     (C155 * C637 + C19794 * C699) * C77 +
                     (C155 * C632 + C19794 * C694) * C90 +
                     (C155 * C638 + C19794 * C700) * C78 +
                     (C155 * C633 + C19794 * C695) * C92 +
                     (C155 * C639 + C19794 * C701) * C79) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C3134 * C638 + C3082 * C700 + C3133 * C635 +
                      C3081 * C697 + C3132 * C99 + C3080 * C162) *
                         C19721 +
                     (C3134 * C632 + C3082 * C694 + C3133 * C629 +
                      C3081 * C691 + C3132 * C94 + C3080 * C157) *
                         C3084) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
                      C3134 * C633 + C3082 * C695) *
                         C3084 +
                     (C3132 * C100 + C3080 * C163 + C3133 * C634 +
                      C3081 * C696 + C3134 * C639 + C3082 * C701) *
                         C19721) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
                      C3134 * C631 + C3082 * C693) *
                         C3084 +
                     (C3132 * C98 + C3080 * C161 + C3133 * C636 + C3081 * C698 +
                      C3134 * C637 + C3082 * C699) *
                         C19721) *
                        C19805 * C19769 * C624 -
                    ((C3134 * C3453 + C3082 * C3517 + C3133 * C637 +
                      C3081 * C699 + C3132 * C636 + C3080 * C698) *
                         C19721 +
                     (C3134 * C3451 + C3082 * C3515 + C3133 * C631 +
                      C3081 * C693 + C3132 * C630 + C3080 * C692) *
                         C3084) *
                        C19805 * C19769 * C625 +
                    ((C3132 * C631 + C3080 * C693 + C3133 * C3451 +
                      C3081 * C3515 + C3134 * C3452 + C3082 * C3516) *
                         C3084 +
                     (C3132 * C637 + C3080 * C699 + C3133 * C3453 +
                      C3081 * C3517 + C3134 * C3454 + C3082 * C3518) *
                         C19721) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C19769 * C19755 * C84 -
                    (C250 * C79 + C251 * C92 + C249 * C78 + C248 * C90 +
                     C247 * C77 + C246 * C88) *
                        C19794 * C19769 * C19755 * C85 +
                    (C248 * C88 + C249 * C77 + C251 * C90 + C250 * C78 +
                     (C222 * C97 + C19805 * C227) * C92 +
                     (C222 * C102 + C19805 * C232) * C79) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C222 * C93 + C19805 * C223) * C88 +
                     (C222 * C98 + C19805 * C228) * C77 + C246 * C90 +
                     C247 * C78 + C248 * C92 + C249 * C79) *
                        C19794 * C19769 * C624 -
                    ((C222 * C634 + C19805 * C746) * C79 +
                     (C222 * C628 + C19805 * C740) * C92 +
                     (C222 * C635 + C19805 * C747) * C78 +
                     (C222 * C629 + C19805 * C741) * C90 +
                     (C222 * C636 + C19805 * C748) * C77 +
                     (C222 * C630 + C19805 * C742) * C88) *
                        C19794 * C19769 * C625 +
                    ((C222 * C631 + C19805 * C743) * C88 +
                     (C222 * C637 + C19805 * C749) * C77 +
                     (C222 * C632 + C19805 * C744) * C90 +
                     (C222 * C638 + C19805 * C750) * C78 +
                     (C222 * C633 + C19805 * C745) * C92 +
                     (C222 * C639 + C19805 * C751) * C79) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     ((C222 * C630 + C19805 * C742) * C3084 +
                      (C222 * C636 + C19805 * C748) * C19721) *
                         C3081 +
                     ((C222 * C631 + C19805 * C743) * C3084 +
                      (C222 * C637 + C19805 * C749) * C19721) *
                         C3082) *
                        C19769 * C19755 * C84 -
                    (((C222 * C638 + C19805 * C750) * C19721 +
                      (C222 * C632 + C19805 * C744) * C3084) *
                         C3082 +
                     (C1656 * C19721 + C1657 * C3084) * C3081 +
                     (C247 * C19721 + C246 * C3084) * C3080) *
                        C19769 * C19755 * C85 +
                    ((C248 * C3084 + C249 * C19721) * C3080 +
                     (C1655 * C3084 + C1654 * C19721) * C3081 +
                     ((C222 * C633 + C19805 * C745) * C3084 +
                      (C222 * C639 + C19805 * C751) * C19721) *
                         C3082) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C222 * C93 + C19805 * C223) * C3084 +
                      (C222 * C98 + C19805 * C228) * C19721) *
                         C3080 +
                     (C3580 + C3581) * C3081 + C3586 * C3082) *
                        C19769 * C624 -
                    ((C3584 + C3585) * C3082 + (C3583 + C3582) * C3081 +
                     (C3581 + C3580) * C3080) *
                        C19769 * C625 +
                    (C3586 * C3080 + (C3585 + C3584) * C3081 +
                     ((C222 * C3452 + C19805 * C3558) * C3084 +
                      (C222 * C3454 + C19805 * C3560) * C19721) *
                         C3082) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C92 * C159 + C79 * C292 + C90 * C158 + C78 * C291 +
                      C88 * C157 + C77 * C290) *
                         C19794 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C155) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C155 +
                     (C88 * C158 + C77 * C291 + C90 * C159 + C78 * C292 +
                      C92 * C160 + C79 * C293) *
                         C19794) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C155 +
                     (C88 * C156 + C77 * C289 + C90 * C157 + C78 * C290 +
                      C92 * C158 + C79 * C291) *
                         C19794) *
                        C19805 * C19769 * C624 -
                    ((C92 * C690 + C79 * C790 + C90 * C691 + C78 * C791 +
                      C88 * C692 + C77 * C792) *
                         C19794 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C155) *
                        C19805 * C19769 * C625 +
                    ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                      C92 * C633 + C79 * C639) *
                         C155 +
                     (C88 * C693 + C77 * C793 + C90 * C694 + C78 * C794 +
                      C92 * C695 + C79 * C795) *
                         C19794) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 +
                     (C3084 * C630 + C19721 * C636) * C3133 +
                     (C3084 * C692 + C19721 * C792) * C3081 +
                     (C3084 * C631 + C19721 * C637) * C3134 +
                     (C3084 * C693 + C19721 * C793) * C3082) *
                        C19805 * C19769 * C19755 * C84 -
                    ((C3084 * C694 + C19721 * C794) * C3082 +
                     (C3084 * C632 + C19721 * C638) * C3134 +
                     (C3084 * C691 + C19721 * C791) * C3081 +
                     (C3084 * C629 + C19721 * C635) * C3133 +
                     (C3084 * C157 + C19721 * C290) * C3080 +
                     (C3084 * C94 + C19721 * C99) * C3132) *
                        C19805 * C19769 * C19755 * C85 +
                    ((C3084 * C95 + C19721 * C100) * C3132 +
                     (C3084 * C158 + C19721 * C291) * C3080 +
                     (C3084 * C628 + C19721 * C634) * C3133 +
                     (C3084 * C690 + C19721 * C790) * C3081 +
                     (C3084 * C633 + C19721 * C639) * C3134 +
                     (C3084 * C695 + C19721 * C795) * C3082) *
                        C19805 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3084 * C93 + C19721 * C98) * C3132 +
                     (C3084 * C156 + C19721 * C289) * C3080 + C3639 * C3133 +
                     C3640 * C3081 + C3641 * C3134 + C3642 * C3082) *
                        C19805 * C19769 * C624 -
                    (C3643 * C3082 + C3644 * C3134 + C3642 * C3081 +
                     C3641 * C3133 + C3640 * C3080 + C3639 * C3132) *
                        C19805 * C19769 * C625 +
                    (C3641 * C3132 + C3642 * C3080 + C3644 * C3133 +
                     C3643 * C3081 + (C3084 * C3452 + C19721 * C3454) * C3134 +
                     (C3084 * C3516 + C19721 * C3625) * C3082) *
                        C19805 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C19769 * C19755 * C84 -
          (C358 * C79 + C357 * C78 + C356 * C77) * C19805 * C19769 * C19755 *
              C85 +
          (C357 * C77 + C358 * C78 +
           (C332 * C97 + C349 + C349 + C19794 * C337) * C79) *
              C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C332 * C93 + C339 + C339 + C19794 * C333) * C77 + C356 * C78 +
           C357 * C79) *
              C19805 * C19769 * C624 -
          ((C332 * C628 + C841 + C841 + C19794 * C834) * C79 +
           (C332 * C629 + C842 + C842 + C19794 * C835) * C78 +
           (C332 * C630 + C843 + C843 + C19794 * C836) * C77) *
              C19805 * C19769 * C625 +
          ((C332 * C631 + C844 + C844 + C19794 * C837) * C77 +
           (C332 * C632 + C845 + C845 + C19794 * C838) * C78 +
           (C332 * C633 + C846 + C846 + C19794 * C839) * C79) *
              C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C19755 * C84 -
          (C3251 * C632 + C3256 + C3256 + C3082 * C838 + C3250 * C629 + C3257 +
           C3257 + C3081 * C835 + C3249 * C94 + C3258 + C3258 + C3080 * C334) *
              C19721 * C19805 * C19769 * C19755 * C85 +
          (C3249 * C95 + C3259 + C3259 + C3080 * C335 + C3250 * C628 + C3260 +
           C3260 + C3081 * C834 + C3251 * C633 + C3261 + C3261 + C3082 * C839) *
              C19721 * C19805 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C3249 * C93 + C3253 + C3253 + C3080 * C333 + C3250 * C630 + C3254 +
           C3254 + C3081 * C836 + C3251 * C631 + C3255 + C3255 + C3082 * C837) *
              C19721 * C19805 * C19769 * C624 -
          (C3251 * C3451 + C3685 + C3685 + C3082 * C3682 + C3250 * C631 +
           C3686 + C3686 + C3081 * C837 + C3249 * C630 + C3687 + C3687 +
           C3080 * C836) *
              C19721 * C19805 * C19769 * C625 +
          (C3249 * C631 + C3688 + C3688 + C3080 * C837 + C3250 * C3451 + C3689 +
           C3689 + C3081 * C3682 + C3251 * C3452 + C3690 + C3690 +
           C3082 * C3683) *
              C19721 * C19805 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C19769 * C19755 * C84 -
          ((C416 + C410) * C79 + (C415 + C405) * C78 + (C414 + C402) * C77) *
              C19769 * C19755 * C85 +
          (C417 * C77 + (C410 + C416) * C78 +
           ((C222 * C97 + C19805 * C227) * C155 +
            (C222 * C160 + C19805 * C400) * C19794) *
               C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C222 * C93 + C19805 * C223) * C155 +
            (C222 * C156 + C19805 * C396) * C19794) *
               C77 +
           (C402 + C414) * C78 + C417 * C79) *
              C19769 * C624 -
          (((C222 * C690 + C19805 * C884) * C19794 +
            (C222 * C628 + C19805 * C740) * C155) *
               C79 +
           ((C222 * C691 + C19805 * C885) * C19794 +
            (C222 * C629 + C19805 * C741) * C155) *
               C78 +
           ((C222 * C692 + C19805 * C886) * C19794 +
            (C222 * C630 + C19805 * C742) * C155) *
               C77) *
              C19769 * C625 +
          (((C222 * C631 + C19805 * C743) * C155 +
            (C222 * C693 + C19805 * C887) * C19794) *
               C77 +
           ((C222 * C632 + C19805 * C744) * C155 +
            (C222 * C694 + C19805 * C888) * C19794) *
               C78 +
           ((C222 * C633 + C19805 * C745) * C155 +
            (C222 * C695 + C19805 * C889) * C19794) *
               C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 +
           (C222 * C630 + C19805 * C742) * C3133 +
           (C222 * C692 + C19805 * C886) * C3081 +
           (C222 * C631 + C19805 * C743) * C3134 +
           (C222 * C693 + C19805 * C887) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C222 * C694 + C19805 * C888) * C3082 +
           (C222 * C632 + C19805 * C744) * C3134 + C1829 * C3081 +
           C1657 * C3133 + C411 * C3080 + C246 * C3132) *
              C19721 * C19769 * C19755 * C85 +
          (C248 * C3132 + C412 * C3080 + C1655 * C3133 + C1828 * C3081 +
           (C222 * C633 + C19805 * C745) * C3134 +
           (C222 * C695 + C19805 * C889) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C222 * C93 + C19805 * C223) * C3132 +
           (C222 * C156 + C19805 * C396) * C3080 + C3574 * C3133 +
           C3737 * C3081 + C3576 * C3134 + C3738 * C3082) *
              C19721 * C19769 * C624 -
          (C3739 * C3082 + C3579 * C3134 + C3738 * C3081 + C3576 * C3133 +
           C3737 * C3080 + C3574 * C3132) *
              C19721 * C19769 * C625 +
          (C3576 * C3132 + C3738 * C3080 + C3579 * C3133 + C3739 * C3081 +
           (C222 * C3452 + C19805 * C3558) * C3134 +
           (C222 * C3516 + C19805 * C3729) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C19769 * C19755 * C84 -
                    ((C92 * C226 + C79 * C458 + C90 * C225 + C78 * C457 +
                      C88 * C224 + C77 * C456) *
                         C19805 +
                     (C92 * C96 + C79 * C101 + C90 * C95 + C78 * C100 +
                      C88 * C94 + C77 * C99) *
                         C222) *
                        C19794 * C19769 * C19755 * C85 +
                    ((C88 * C95 + C77 * C100 + C90 * C96 + C78 * C101 +
                      C92 * C97 + C79 * C102) *
                         C222 +
                     (C88 * C225 + C77 * C457 + C90 * C226 + C78 * C458 +
                      C92 * C227 + C79 * C459) *
                         C19805) *
                        C19794 * C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C88 * C93 + C77 * C98 + C90 * C94 + C78 * C99 +
                      C92 * C95 + C79 * C100) *
                         C222 +
                     (C88 * C223 + C77 * C455 + C90 * C224 + C78 * C456 +
                      C92 * C225 + C79 * C457) *
                         C19805) *
                        C19794 * C19769 * C624 -
                    ((C92 * C740 + C79 * C928 + C90 * C741 + C78 * C929 +
                      C88 * C742 + C77 * C930) *
                         C19805 +
                     (C92 * C628 + C79 * C634 + C90 * C629 + C78 * C635 +
                      C88 * C630 + C77 * C636) *
                         C222) *
                        C19794 * C19769 * C625 +
                    ((C88 * C631 + C77 * C637 + C90 * C632 + C78 * C638 +
                      C92 * C633 + C79 * C639) *
                         C222 +
                     (C88 * C743 + C77 * C931 + C90 * C744 + C78 * C932 +
                      C92 * C745 + C79 * C933) *
                         C19805) *
                        C19794 * C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     ((C3084 * C630 + C19721 * C636) * C222 +
                      (C3084 * C742 + C19721 * C930) * C19805) *
                         C3081 +
                     ((C3084 * C631 + C19721 * C637) * C222 +
                      (C3084 * C743 + C19721 * C931) * C19805) *
                         C3082) *
                        C19769 * C19755 * C84 -
                    (((C3084 * C744 + C19721 * C932) * C19805 +
                      (C3084 * C632 + C19721 * C638) * C222) *
                         C3082 +
                     ((C3084 * C741 + C19721 * C929) * C19805 +
                      (C3084 * C629 + C19721 * C635) * C222) *
                         C3081 +
                     ((C3084 * C224 + C19721 * C456) * C19805 +
                      (C3084 * C94 + C19721 * C99) * C222) *
                         C3080) *
                        C19769 * C19755 * C85 +
                    (((C3084 * C95 + C19721 * C100) * C222 +
                      (C3084 * C225 + C19721 * C457) * C19805) *
                         C3080 +
                     ((C3084 * C628 + C19721 * C634) * C222 +
                      (C3084 * C740 + C19721 * C928) * C19805) *
                         C3081 +
                     ((C3084 * C633 + C19721 * C639) * C222 +
                      (C3084 * C745 + C19721 * C933) * C19805) *
                         C3082) *
                        C19769 * C19755 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C3084 * C93 + C19721 * C98) * C222 +
                      (C3084 * C223 + C19721 * C455) * C19805) *
                         C3080 +
                     (C3780 + C3792) * C3081 + C3795 * C3082) *
                        C19769 * C624 -
                    ((C3794 + C3788) * C3082 + (C3793 + C3783) * C3081 +
                     (C3792 + C3780) * C3080) *
                        C19769 * C625 +
                    (C3795 * C3080 + (C3788 + C3794) * C3081 +
                     ((C3084 * C3452 + C19721 * C3454) * C222 +
                      (C3084 * C3558 + C19721 * C3778) * C19805) *
                         C3082) *
                        C19769 * C626) *
                   C19743) /
                      (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C19769 * C19755 * C84 -
          ((C518 + C512) * C79 + (C517 + C507) * C78 + (C516 + C504) * C77) *
              C19769 * C19755 * C85 +
          (C519 * C77 + (C512 + C518) * C78 +
           ((C155 * C97 + C19794 * C160) * C222 +
            (C155 * C227 + C19794 * C502) * C19805) *
               C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C155 * C93 + C19794 * C156) * C222 +
            (C155 * C223 + C19794 * C498) * C19805) *
               C77 +
           (C504 + C516) * C78 + C519 * C79) *
              C19769 * C624 -
          (((C155 * C740 + C19794 * C972) * C19805 +
            (C155 * C628 + C19794 * C690) * C222) *
               C79 +
           ((C155 * C741 + C19794 * C973) * C19805 +
            (C155 * C629 + C19794 * C691) * C222) *
               C78 +
           ((C155 * C742 + C19794 * C974) * C19805 +
            (C155 * C630 + C19794 * C692) * C222) *
               C77) *
              C19769 * C625 +
          (((C155 * C631 + C19794 * C693) * C222 +
            (C155 * C743 + C19794 * C975) * C19805) *
               C77 +
           ((C155 * C632 + C19794 * C694) * C222 +
            (C155 * C744 + C19794 * C976) * C19805) *
               C78 +
           ((C155 * C633 + C19794 * C695) * C222 +
            (C155 * C745 + C19794 * C977) * C19805) *
               C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C19769 * C19755 * C84 -
          ((C3134 * C744 + C3082 * C976 + C3133 * C741 + C3081 * C973 +
            C3132 * C224 + C3080 * C499) *
               C19805 +
           (C3134 * C632 + C3082 * C694 + C3133 * C629 + C3081 * C691 +
            C3132 * C94 + C3080 * C157) *
               C222) *
              C19721 * C19769 * C19755 * C85 +
          ((C3132 * C95 + C3080 * C158 + C3133 * C628 + C3081 * C690 +
            C3134 * C633 + C3082 * C695) *
               C222 +
           (C3132 * C225 + C3080 * C500 + C3133 * C740 + C3081 * C972 +
            C3134 * C745 + C3082 * C977) *
               C19805) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3132 * C93 + C3080 * C156 + C3133 * C630 + C3081 * C692 +
            C3134 * C631 + C3082 * C693) *
               C222 +
           (C3132 * C223 + C3080 * C498 + C3133 * C742 + C3081 * C974 +
            C3134 * C743 + C3082 * C975) *
               C19805) *
              C19721 * C19769 * C624 -
          ((C3134 * C3557 + C3082 * C3833 + C3133 * C743 + C3081 * C975 +
            C3132 * C742 + C3080 * C974) *
               C19805 +
           (C3134 * C3451 + C3082 * C3515 + C3133 * C631 + C3081 * C693 +
            C3132 * C630 + C3080 * C692) *
               C222) *
              C19721 * C19769 * C625 +
          ((C3132 * C631 + C3080 * C693 + C3133 * C3451 + C3081 * C3515 +
            C3134 * C3452 + C3082 * C3516) *
               C222 +
           (C3132 * C743 + C3080 * C975 + C3133 * C3557 + C3081 * C3833 +
            C3134 * C3558 + C3082 * C3834) *
               C19805) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C19769 * C19755 * C84 -
          (C586 * C79 + C585 * C78 + C584 * C77) * C19769 * C19755 * C85 +
          (C585 * C77 + C586 * C78 +
           (C557 * C97 + C574 + C574 + C19805 * C562) * C19794 * C79) *
              C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C19794 * C77 +
           C584 * C78 + C585 * C79) *
              C19769 * C624 -
          ((C557 * C628 + C1023 + C1023 + C19805 * C1016) * C19794 * C79 +
           (C557 * C629 + C1024 + C1024 + C19805 * C1017) * C19794 * C78 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C19794 * C77) *
              C19769 * C625 +
          ((C557 * C631 + C1026 + C1026 + C19805 * C1019) * C19794 * C77 +
           (C557 * C632 + C1027 + C1027 + C19805 * C1020) * C19794 * C78 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C19794 * C79) *
              C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 +
           (C557 * C630 + C1025 + C1025 + C19805 * C1018) * C3081 +
           (C557 * C631 + C1026 + C1026 + C19805 * C1019) * C3082) *
              C19721 * C19769 * C19755 * C84 -
          ((C557 * C632 + C1027 + C1027 + C19805 * C1020) * C3082 +
           C2005 * C3081 + C581 * C3080) *
              C19721 * C19769 * C19755 * C85 +
          (C582 * C3080 + C2004 * C3081 +
           (C557 * C633 + C1028 + C1028 + C19805 * C1021) * C3082) *
              C19721 * C19769 * C19755 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C557 * C93 + C564 + C564 + C19805 * C558) * C3080 + C3890 * C3081 +
           C3891 * C3082) *
              C19721 * C19769 * C624 -
          (C3892 * C3082 + C3891 * C3081 + C3890 * C3080) * C19721 * C19769 *
              C625 +
          (C3891 * C3080 + C3892 * C3081 +
           (C557 * C3452 + C3883 + C3883 + C19805 * C3874) * C3082) *
              C19721 * C19769 * C626) *
         C19743) /
            (p * q * std::sqrt(p + q));
}
