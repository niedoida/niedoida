/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pdsp_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1201_13(const double ae,
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
    const double C26624 = 0 * ae;
    const double C26623 = ae * be;
    const double C26622 = 0 * be;
    const double C26621 = ae + be;
    const double C26620 = 0 * be;
    const double C26619 = xA - xB;
    const double C26660 = ce + de;
    const double C26659 = xC - xD;
    const double C26677 = yC - yD;
    const double C26684 = zC - zD;
    const double C26699 = 0 * be;
    const double C26698 = yA - yB;
    const double C26714 = 0 * be;
    const double C26713 = zA - zB;
    const double C26757 = 0 * ae;
    const double C26753 = 0 * be;
    const double C26803 = 0 * ae;
    const double C26799 = 0 * be;
    const double C26834 = p + q;
    const double C26833 = p * q;
    const double C26839 = xP - xQ;
    const double C26838 = bs[2];
    const double C26848 = ae * ce;
    const double C26844 = bs[3];
    const double C26857 = bs[4];
    const double C26878 = bs[5];
    const double C26915 = yP - yQ;
    const double C26945 = zP - zQ;
    const double C89 = bs[0];
    const double C27966 = ce * de;
    const double C26629 = C26624 / C26621;
    const double C26626 = 2 * C26621;
    const double C26625 = std::pow(C26621, 2);
    const double C26628 = C26623 * C26619;
    const double C26627 = C26619 * C26622;
    const double C27759 = C26619 * be;
    const double C27758 = C26619 * ae;
    const double C27757 = std::pow(C26619, 2);
    const double C26840 = C26660 * C26621;
    const double C27967 = 2 * C26660;
    const double C27965 = std::pow(C26659, 2);
    const double C27969 = std::pow(C26677, 2);
    const double C27968 = std::pow(C26684, 2);
    const double C26700 = C26623 * C26698;
    const double C26754 = C26698 * C26699;
    const double C27801 = std::pow(C26698, 2);
    const double C27850 = C26698 * be;
    const double C27849 = C26698 * ae;
    const double C26715 = C26623 * C26713;
    const double C26800 = C26713 * C26714;
    const double C27812 = std::pow(C26713, 2);
    const double C27876 = C26713 * be;
    const double C27875 = C26713 * ae;
    const double C26762 = C26757 / C26621;
    const double C26808 = C26803 / C26621;
    const double C26835 = 2 * C26833;
    const double C26849 = C26839 * ae;
    const double C26847 = std::pow(C26839, 2);
    const double C26845 = C26839 * ce;
    const double C26918 = C26839 * C26915;
    const double C26917 = C26915 * ce;
    const double C26977 = C26915 * C26839;
    const double C26976 = C26915 * ae;
    const double C27005 = std::pow(C26915, 2);
    const double C26948 = C26839 * C26945;
    const double C26947 = C26945 * ce;
    const double C27019 = C26915 * C26945;
    const double C27032 = C26945 * C26839;
    const double C27031 = C26945 * ae;
    const double C27060 = C26945 * C26915;
    const double C27072 = std::pow(C26945, 2);
    const double C27767 = std::pow(C26626, -1);
    const double C27971 = std::pow(C26626, -2);
    const double C26630 = 2 * C26625;
    const double C27964 = 4 * C26625;
    const double C26631 = C26627 / C26621;
    const double C27760 = C27757 * C26623;
    const double C27987 = std::pow(C27967, -1);
    const double C27986 = C27965 * C27966;
    const double C27989 = C27969 * C27966;
    const double C27988 = C27968 * C27966;
    const double C26759 = C26754 / C26621;
    const double C27802 = C27801 * C26623;
    const double C26805 = C26800 / C26621;
    const double C27813 = C27812 * C26623;
    const double C26837 = C26835 / C26834;
    const double C104 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C26835 / C26834, 2) -
            (bs[1] * C26835) / C26834) *
           ae * ce) /
         C26660) /
        C26621;
    const double C90 = -(C26839 * bs[1] * C26835) / C26834;
    const double C582 = -(C26915 * bs[1] * C26835) / C26834;
    const double C956 = -(C26945 * bs[1] * C26835) / C26834;
    const double C26852 = C26844 * C26849;
    const double C26863 = C26857 * C26849;
    const double C26887 = C26878 * C26849;
    const double C94 = (-(bs[1] * C26849 * C26835) / C26834) / C26621;
    const double C26859 = C26847 * C26857;
    const double C26882 = C26847 * C26878;
    const double C26851 = C26844 * C26845;
    const double C26860 = C26857 * C26845;
    const double C26883 = C26878 * C26845;
    const double C98 = (bs[1] * C26845 * C26835) / (C26834 * C26660);
    const double C26920 = C26918 * ae;
    const double C26919 = C26844 * C26917;
    const double C26925 = C26857 * C26917;
    const double C26932 = C26878 * C26917;
    const double C144 = (bs[1] * C26917 * C26835) / (C26834 * C26660);
    const double C26979 = C26977 * ae;
    const double C26978 = C26844 * C26976;
    const double C26984 = C26857 * C26976;
    const double C26991 = C26878 * C26976;
    const double C234 = (-(bs[1] * C26976 * C26835) / C26834) / C26621;
    const double C27007 = C27005 * C26857;
    const double C27012 = C27005 * C26878;
    const double C26950 = C26948 * ae;
    const double C26949 = C26844 * C26947;
    const double C26955 = C26857 * C26947;
    const double C26962 = C26878 * C26947;
    const double C189 = (bs[1] * C26947 * C26835) / (C26834 * C26660);
    const double C27020 = C27019 * ae;
    const double C27034 = C27032 * ae;
    const double C27033 = C26844 * C27031;
    const double C27039 = C26857 * C27031;
    const double C27046 = C26878 * C27031;
    const double C405 = (-(bs[1] * C27031 * C26835) / C26834) / C26621;
    const double C27061 = C27060 * ae;
    const double C27074 = C27072 * C26857;
    const double C27079 = C27072 * C26878;
    const double C26636 = C26622 / C26630;
    const double C26634 = C26620 / C26630;
    const double C26756 = C26699 / C26630;
    const double C26760 = C26753 / C26630;
    const double C26802 = C26714 / C26630;
    const double C26806 = C26799 / C26630;
    const double C26633 = 0 - C26631;
    const double C27761 = C27760 / C26621;
    const double C27998 = C27986 / C26660;
    const double C28000 = C27989 / C26660;
    const double C27999 = C27988 / C26660;
    const double C26763 = 0 - C26759;
    const double C27803 = C27802 / C26621;
    const double C26809 = 0 - C26805;
    const double C27814 = C27813 / C26621;
    const double C26841 = std::pow(C26837, 2);
    const double C26843 = -C26837;
    const double C26858 = std::pow(C26837, 4);
    const double C26922 = C26920 * ce;
    const double C26981 = C26979 * ce;
    const double C26952 = C26950 * ce;
    const double C27021 = C27020 * ce;
    const double C27036 = C27034 * ce;
    const double C27062 = C27061 * ce;
    const double C26638 = C26633 * ae;
    const double C27762 = -C27761;
    const double C28005 = -C27998;
    const double C28007 = -C28000;
    const double C28006 = -C27999;
    const double C26766 = C26763 * ae;
    const double C27804 = -C27803;
    const double C26812 = C26809 * ae;
    const double C27815 = -C27814;
    const double C26846 = C26838 * C26841;
    const double C105 =
        (-(C26841 * C26838 * C26839 * ae * ce) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26839 * ce) / C26840 -
        (C26839 *
         (C26838 * C26841 +
          std::pow(C26839, 2) * bs[3] * std::pow(-C26837, 3)) *
         ae * ce) /
            C26840;
    const double C149 =
        (-(C26841 * C26838 * C26839 * (yP - yQ) * ae * ce) / C26660) / C26621;
    const double C194 =
        (-(C26841 * C26838 * C26839 * (zP - zQ) * ae * ce) / C26660) / C26621;
    const double C239 =
        (-(C26841 * C26838 * C26915 * C26839 * ae * ce) / C26660) / C26621;
    const double C296 =
        (-((std::pow(C26915, 2) * C26838 * C26841 - (bs[1] * C26835) / C26834) *
           C26848) /
         C26660) /
        C26621;
    const double C350 =
        (-(C26841 * C26838 * C26915 * C26945 * ae * ce) / C26660) / C26621;
    const double C410 =
        (-(C26841 * C26838 * C26945 * C26839 * ae * ce) / C26660) / C26621;
    const double C467 =
        (-(C26841 * C26838 * C26945 * C26915 * ae * ce) / C26660) / C26621;
    const double C521 =
        (-((std::pow(C26945, 2) * C26838 * C26841 - (bs[1] * C26835) / C26834) *
           C26848) /
         C26660) /
        C26621;
    const double C95 = (C26839 * C26841 * C26838 * C26849) / C26621 -
                       (ae * bs[1] * C26835) / (C26834 * C26621);
    const double C99 = (ce * bs[1] * C26835) / (C26834 * C26660) -
                       (C26839 * C26841 * C26838 * C26845) / C26660;
    const double C145 = -(C26839 * C26841 * C26838 * C26917) / C26660;
    const double C190 = -(C26839 * C26841 * C26838 * C26947) / C26660;
    const double C235 = (C26839 * C26841 * C26838 * C26976) / C26621;
    const double C406 = (C26839 * C26841 * C26838 * C27031) / C26621;
    const double C586 = -(C26915 * C26841 * C26838 * C26845) / C26660;
    const double C590 = (C26915 * C26841 * C26838 * C26849) / C26621;
    const double C634 = (ce * bs[1] * C26835) / (C26834 * C26660) -
                        (C26915 * C26841 * C26838 * C26917) / C26660;
    const double C676 = -(C26915 * C26841 * C26838 * C26947) / C26660;
    const double C718 = (C26915 * C26841 * C26838 * C26976) / C26621 -
                        (ae * bs[1] * C26835) / (C26834 * C26621);
    const double C836 = (C26915 * C26841 * C26838 * C27031) / C26621;
    const double C960 = -(C26945 * C26841 * C26838 * C26845) / C26660;
    const double C964 = (C26945 * C26841 * C26838 * C26849) / C26621;
    const double C1006 = -(C26945 * C26841 * C26838 * C26917) / C26660;
    const double C1050 = (ce * bs[1] * C26835) / (C26834 * C26660) -
                         (C26945 * C26841 * C26838 * C26947) / C26660;
    const double C1092 = (C26945 * C26841 * C26838 * C26976) / C26621;
    const double C1210 = (C26945 * C26841 * C26838 * C27031) / C26621 -
                         (ae * bs[1] * C26835) / (C26834 * C26621);
    const double C26850 = std::pow(C26843, 3);
    const double C26879 = std::pow(C26843, 5);
    const double C26867 = C26858 * C26863;
    const double C26866 = C26858 * C26860;
    const double C26865 = C26859 * C26858;
    const double C26877 = C26857 * C26858;
    const double C26927 = C26858 * C26925;
    const double C26957 = C26858 * C26955;
    const double C26986 = C26858 * C26984;
    const double C27008 = C27007 * C26858;
    const double C27041 = C26858 * C27039;
    const double C27075 = C27074 * C26858;
    const double C26924 = C26857 * C26922;
    const double C26930 = C26878 * C26922;
    const double C26983 = C26857 * C26981;
    const double C26989 = C26878 * C26981;
    const double C26954 = C26857 * C26952;
    const double C26960 = C26878 * C26952;
    const double C27023 = C26857 * C27021;
    const double C27026 = C26878 * C27021;
    const double C27038 = C26857 * C27036;
    const double C27044 = C26878 * C27036;
    const double C27064 = C26857 * C27062;
    const double C27067 = C26878 * C27062;
    const double C26641 = C26638 / C26621;
    const double C27763 = std::exp(C27762);
    const double C28008 = std::exp(C28005);
    const double C28010 = std::exp(C28007);
    const double C28009 = std::exp(C28006);
    const double C26768 = C26766 / C26621;
    const double C27805 = std::exp(C27804);
    const double C26814 = C26812 / C26621;
    const double C27816 = std::exp(C27815);
    const double C91 = C26846 * C26847 - (bs[1] * C26835) / C26834;
    const double C581 = C26915 * C26839 * C26846;
    const double C955 = C26945 * C26839 * C26846;
    const double C1348 = C26846 * C27005 - (bs[1] * C26835) / C26834;
    const double C2486 = C26945 * C26915 * C26846;
    const double C3000 = C26846 * C27072 - (bs[1] * C26835) / C26834;
    const double C26854 = C26850 * C26852;
    const double C26853 = C26850 * C26851;
    const double C26856 = C26844 * C26850;
    const double C26921 = C26850 * C26919;
    const double C26951 = C26850 * C26949;
    const double C26980 = C26850 * C26978;
    const double C27035 = C26850 * C27033;
    const double C150 =
        (-(C26839 * C26850 * C26844 * C26839 * C26915 * ae * ce) / C26660) /
            C26621 -
        (ae * C26841 * C26838 * C26915 * ce) / C26840;
    const double C195 =
        (-(C26839 * C26850 * C26844 * C26839 * C26945 * ae * ce) / C26660) /
            C26621 -
        (ae * C26841 * C26838 * C26945 * ce) / C26840;
    const double C240 =
        (-(C26839 * C26850 * C26844 * C26915 * C26839 * ae * ce) / C26660) /
            C26621 -
        (C26841 * C26838 * C26915 * ae * ce) / C26840;
    const double C297 =
        (-(C26839 * (C26846 + std::pow(C26915, 2) * C26844 * C26850) * C26848) /
         C26660) /
        C26621;
    const double C351 =
        (-(C26839 * C26850 * C26844 * C26915 * C26945 * ae * ce) / C26660) /
        C26621;
    const double C352 =
        (-(C26858 * C26857 * C27021 * C26847) / C26660) / C26621 -
        (C26850 * C26844 * C27021) / C26840;
    const double C411 =
        (-(C26839 * C26850 * C26844 * C26945 * C26839 * ae * ce) / C26660) /
            C26621 -
        (C26841 * C26838 * C26945 * ae * ce) / C26840;
    const double C468 =
        (-(C26839 * C26850 * C26844 * C26945 * C26915 * ae * ce) / C26660) /
        C26621;
    const double C469 =
        (-(C26858 * C26857 * C27062 * C26847) / C26660) / C26621 -
        (C26850 * C26844 * C27062) / C26840;
    const double C522 =
        (-(C26839 * (C26846 + std::pow(C26945, 2) * C26844 * C26850) * C26848) /
         C26660) /
        C26621;
    const double C594 =
        (-(C26915 * (C26846 + C26847 * C26844 * C26850) * C26848) / C26660) /
        C26621;
    const double C638 =
        (-(C26915 * C26850 * C26844 * C26922) / C26660) / C26621 -
        (C26841 * C26838 * C26849 * ce) / C26840;
    const double C680 =
        (-(C26915 * C26850 * C26844 * C26952) / C26660) / C26621;
    const double C722 =
        (-(C26915 * C26850 * C26844 * C26981) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26845) / C26840;
    const double C757 =
        (-(C26841 * C26838 * C26976 * ce) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26917) / C26840 -
        (C26915 * (C26846 + C27005 * C26844 * C26850) * C26848) / C26840;
    const double C798 =
        (-(C26915 * C26850 * C26844 * C27021) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26947) / C26840;
    const double C840 =
        (-(C26915 * C26850 * C26844 * C27036) / C26660) / C26621;
    const double C875 =
        (-(C26915 * C26850 * C26844 * C27062) / C26660) / C26621 -
        (C26841 * C26838 * C27031 * ce) / C26840;
    const double C916 =
        (-(C26915 * (C26846 + C27072 * C26844 * C26850) * C26848) / C26660) /
        C26621;
    const double C968 =
        (-(C26945 * (C26846 + C26847 * C26844 * C26850) * C26848) / C26660) /
        C26621;
    const double C1010 =
        (-(C26945 * C26850 * C26844 * C26922) / C26660) / C26621;
    const double C1054 =
        (-(C26945 * C26850 * C26844 * C26952) / C26660) / C26621 -
        (C26841 * C26838 * C26849 * ce) / C26840;
    const double C1096 =
        (-(C26945 * C26850 * C26844 * C26981) / C26660) / C26621;
    const double C1134 =
        (-(C26945 * (C26846 + C27005 * C26844 * C26850) * C26848) / C26660) /
        C26621;
    const double C1169 =
        (-(C26945 * C26850 * C26844 * C27021) / C26660) / C26621 -
        (C26841 * C26838 * C26976 * ce) / C26840;
    const double C1214 =
        (-(C26945 * C26850 * C26844 * C27036) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26845) / C26840;
    const double C1252 =
        (-(C26945 * C26850 * C26844 * C27062) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26917) / C26840;
    const double C1287 =
        (-(C26841 * C26838 * C27031 * ce) / C26660) / C26621 -
        (ae * C26841 * C26838 * C26947) / C26840 -
        (C26945 * (C26846 + C27072 * C26844 * C26850) * C26848) / C26840;
    const double C26894 = C26879 * C26887;
    const double C26891 = C26879 * C26883;
    const double C26890 = C26882 * C26879;
    const double C26935 = C26879 * C26932;
    const double C26965 = C26879 * C26962;
    const double C26994 = C26879 * C26991;
    const double C27013 = C27012 * C26879;
    const double C27049 = C26879 * C27046;
    const double C27080 = C27079 * C26879;
    const double C26870 = C26839 * C26867;
    const double C26875 = C26867 * ce;
    const double C27290 = C26915 * C26867;
    const double C27455 = C26945 * C26867;
    const double C26869 = C26839 * C26866;
    const double C26876 = ae * C26866;
    const double C27300 = C26915 * C26866;
    const double C27470 = C26945 * C26866;
    const double C26888 = C26877 * ae;
    const double C26886 = C26877 * C26847;
    const double C26885 = C26839 * C26877;
    const double C26884 = C26877 * ce;
    const double C27370 = C26877 * C27005;
    const double C27369 = C26915 * C26877;
    const double C27492 = C26877 * C27072;
    const double C27491 = C26945 * C26877;
    const double C26931 = ae * C26927;
    const double C26929 = C26839 * C26927;
    const double C27193 = C26915 * C26927;
    const double C27479 = C26945 * C26927;
    const double C26961 = ae * C26957;
    const double C26959 = C26839 * C26957;
    const double C27307 = C26915 * C26957;
    const double C27326 = C26945 * C26957;
    const double C26990 = C26986 * ce;
    const double C26988 = C26839 * C26986;
    const double C27195 = C26915 * C26986;
    const double C27466 = C26945 * C26986;
    const double C27045 = C27041 * ce;
    const double C27043 = C26839 * C27041;
    const double C27308 = C26915 * C27041;
    const double C27328 = C26945 * C27041;
    const double C26926 = C26858 * C26924;
    const double C26933 = C26879 * C26930;
    const double C26985 = C26858 * C26983;
    const double C26992 = C26879 * C26989;
    const double C26956 = C26858 * C26954;
    const double C26963 = C26879 * C26960;
    const double C27024 = C26858 * C27023;
    const double C27027 = C26879 * C27026;
    const double C27040 = C26858 * C27038;
    const double C27047 = C26879 * C27044;
    const double C27065 = C26858 * C27064;
    const double C27068 = C26879 * C27067;
    const double C26643 = C26641 - C26634;
    const double C11203 = C27763 * C590;
    const double C12911 = C27763 * C964;
    const double C26632 = C26628 * C27763;
    const double C27764 = C27763 * C27758;
    const double C27768 = C27767 * C27763;
    const double C27961 = C27763 * C27759;
    const double C27958 = C27763 / C26626;
    const double C9455 = C27971 * C27763;
    const double C87 =
        ((C28008 - (C26659 * 2 * ce * de * C26659 * C28008) / C26660) * ce) /
            C26660 -
        (0 * de) / (2 * std::pow(C26660, 2));
    const double C88 =
        (0 * ce) / C26660 - (ce * de * C26659 * C28008) / std::pow(C26660, 2);
    const double C578 = -(2 * ce * de * C26659 * C28008) / C26660;
    const double C77 = (C28008 * C26659 * ce) / C26660;
    const double C78 = C27987 * C28008;
    const double C143 = -(2 * ce * de * (yC - yD) * C28010) / C26660;
    const double C629 =
        ((C28010 - (C26677 * 2 * ce * de * C26677 * C28010) / C26660) * ce) /
            C26660 -
        (0 * de) / (2 * std::pow(C26660, 2));
    const double C630 =
        (0 * ce) / C26660 - (ce * de * C26677 * C28010) / std::pow(C26660, 2);
    const double C576 = (C28010 * C26677 * ce) / C26660;
    const double C577 = C27987 * C28010;
    const double C188 = -(2 * ce * de * (zC - zD) * C28009) / C26660;
    const double C1045 =
        ((C28009 - (C26684 * 2 * ce * de * C26684 * C28009) / C26660) * ce) /
            C26660 -
        (0 * de) / (2 * std::pow(C26660, 2));
    const double C1046 =
        (0 * ce) / C26660 - (ce * de * C26684 * C28009) / std::pow(C26660, 2);
    const double C951 = (C28009 * C26684 * ce) / C26660;
    const double C952 = C27987 * C28009;
    const double C26770 = C26768 - C26760;
    const double C246 = C27805 * C235;
    const double C4271 = C27805 * C1092;
    const double C26701 = C26700 * C27805;
    const double C233 = -(2 * C26623 * (yA - yB) * C27805) / C26621;
    const double C27851 = C27805 * C27849;
    const double C27854 = C27767 * C27805;
    const double C27975 = C27805 * C27850;
    const double C27970 = C27805 / C26626;
    const double C1345 = C27971 * C27805;
    const double C26816 = C26814 - C26806;
    const double C417 = C27816 * C406;
    const double C2295 = C27816 * C836;
    const double C26716 = C26715 * C27816;
    const double C404 = -(2 * C26623 * (zA - zB) * C27816) / C26621;
    const double C27877 = C27816 * C27875;
    const double C27880 = C27767 * C27816;
    const double C27979 = C27816 * C27876;
    const double C27972 = C27816 / C26626;
    const double C2999 = C27971 * C27816;
    const double C96 =
        (C26841 * C26838 * C26849 + C26839 * (C26839 * C26854 + C26846 * ae) +
         C26839 * C26846 * ae) /
        C26621;
    const double C589 = (C26915 * (C26839 * C26854 + C26846 * ae)) / C26621;
    const double C963 = (C26945 * (C26839 * C26854 + C26846 * ae)) / C26621;
    const double C1351 = (C26841 * C26838 * C26849 + C26854 * C27005) / C26621;
    const double C1922 =
        (2 * C26915 * C26854 + C26915 * (C26854 + C26867 * C27005)) / C26621;
    const double C2490 = (C26945 * (C26854 + C26867 * C27005)) / C26621;
    const double C2494 = (C26945 * C26915 * C26854) / C26621;
    const double C3003 = (C26841 * C26838 * C26849 + C26854 * C27072) / C26621;
    const double C4056 =
        (2 * C26945 * C26854 + C26945 * (C26854 + C26867 * C27072)) / C26621;
    const double C106 =
        (-(ae * (C26839 * C26853 + C26846 * ce)) / C26660) / C26621 -
        ((C26846 + C26847 * C26844 * C26850) * C26848) / C26840 -
        ((C26839 * C26854 + C26846 * ae) * ce) / C26840 +
        C26839 * ((-(C26854 * ce) / C26660) / C26621 - (ae * C26853) / C26840 -
                  (C26839 *
                   (C26844 * C26850 + C26847 * bs[4] * std::pow(C26837, 4)) *
                   C26848) /
                      C26840);
    const double C100 = -(C26839 * (C26839 * C26853 + C26846 * ce) +
                          C26841 * C26838 * C26845 + C26839 * C26846 * ce) /
                        C26660;
    const double C585 = -(C26915 * (C26839 * C26853 + C26846 * ce)) / C26660;
    const double C959 = -(C26945 * (C26839 * C26853 + C26846 * ce)) / C26660;
    const double C1353 = -(C26853 * C27005 + C26841 * C26838 * C26845) / C26660;
    const double C1920 = (-2 * C26915 * C26853) / C26660 -
                         (C26915 * (C26866 * C27005 + C26853)) / C26660;
    const double C2488 = -(C26945 * (C26866 * C27005 + C26853)) / C26660;
    const double C2492 = -(C26945 * C26915 * C26853) / C26660;
    const double C3005 = -(C26853 * C27072 + C26841 * C26838 * C26845) / C26660;
    const double C4054 = (-2 * C26945 * C26853) / C26660 -
                         (C26945 * (C26866 * C27072 + C26853)) / C26660;
    const double C26864 = C26856 * ae;
    const double C26862 = C26839 * C26856;
    const double C26861 = C26856 * ce;
    const double C26868 = C26856 + C26865;
    const double C27009 = C26856 + C27008;
    const double C27076 = C26856 + C27075;
    const double C27194 = C26915 * C26856;
    const double C27327 = C26945 * C26856;
    const double C298 =
        (-((C26856 + C27005 * C26857 * C26858) * C26848 * C26847) / C26660) /
            C26621 -
        ((C26846 + C27005 * C26844 * C26850) * C26848) / C26840;
    const double C523 =
        (-((C26856 + C27072 * C26857 * C26858) * C26848 * C26847) / C26660) /
            C26621 -
        ((C26846 + C27072 * C26844 * C26850) * C26848) / C26840;
    const double C92 =
        2 * C26839 * C26846 + C26839 * (C26846 + C26856 * C26847);
    const double C580 = C26915 * (C26846 + C26856 * C26847);
    const double C954 = C26945 * (C26846 + C26856 * C26847);
    const double C1918 =
        2 * C26915 * C26846 + C26915 * (C26846 + C26856 * C27005);
    const double C2484 = C26945 * (C26846 + C26856 * C27005);
    const double C4052 =
        2 * C26945 * C26846 + C26945 * (C26846 + C26856 * C27072);
    const double C151 =
        (-(ae * C26839 * C26921) / C26660) / C26621 -
        (C26850 * C26844 * C26922) / C26840 +
        C26839 * ((-(C26839 * C26858 * C26857 * C26922) / C26660) / C26621 -
                  (ae * C26921) / C26840);
    const double C146 = -(C26921 * C26847 + C26841 * C26838 * C26917) / C26660;
    const double C147 = (-2 * C26839 * C26921) / C26660 -
                        (C26839 * (C26927 * C26847 + C26921)) / C26660;
    const double C632 = -(C26915 * (C26927 * C26847 + C26921) +
                          (C26846 + C26856 * C26847) * ce) /
                        C26660;
    const double C633 =
        -(C26915 * C26839 * C26921 + C26839 * C26846 * ce) / C26660;
    const double C1004 = -(C26945 * (C26927 * C26847 + C26921)) / C26660;
    const double C1005 = -(C26945 * C26839 * C26921) / C26660;
    const double C1410 = -(C26915 * (C26915 * C26921 + C26846 * ce) +
                           C26841 * C26838 * C26917 + C26915 * C26846 * ce) /
                         C26660;
    const double C2552 = -(C26945 * (C26915 * C26921 + C26846 * ce)) / C26660;
    const double C3062 = -(C26921 * C27072 + C26841 * C26838 * C26917) / C26660;
    const double C4134 = (-2 * C26945 * C26921) / C26660 -
                         (C26945 * (C26927 * C27072 + C26921)) / C26660;
    const double C196 =
        (-(ae * C26839 * C26951) / C26660) / C26621 -
        (C26850 * C26844 * C26952) / C26840 +
        C26839 * ((-(C26839 * C26858 * C26857 * C26952) / C26660) / C26621 -
                  (ae * C26951) / C26840);
    const double C191 = -(C26951 * C26847 + C26841 * C26838 * C26947) / C26660;
    const double C192 = (-2 * C26839 * C26951) / C26660 -
                        (C26839 * (C26957 * C26847 + C26951)) / C26660;
    const double C674 = -(C26915 * (C26957 * C26847 + C26951)) / C26660;
    const double C675 = -(C26915 * C26839 * C26951) / C26660;
    const double C1048 = -(C26945 * (C26957 * C26847 + C26951) +
                           (C26846 + C26856 * C26847) * ce) /
                         C26660;
    const double C1049 =
        -(C26945 * C26839 * C26951 + C26839 * C26846 * ce) / C26660;
    const double C1466 = -(C26951 * C27005 + C26841 * C26838 * C26947) / C26660;
    const double C2066 = (-2 * C26915 * C26951) / C26660 -
                         (C26915 * (C26957 * C27005 + C26951)) / C26660;
    const double C2608 =
        -(C26945 * C26915 * C26951 + C26915 * C26846 * ce) / C26660;
    const double C2610 = -(C26945 * (C26957 * C27005 + C26951) +
                           (C26846 + C26856 * C27005) * ce) /
                         C26660;
    const double C3118 = -(C26945 * (C26945 * C26951 + C26846 * ce) +
                           C26841 * C26838 * C26947 + C26945 * C26846 * ce) /
                         C26660;
    const double C241 =
        (-(C26839 * C26980 * ce) / C26660) / C26621 -
        (C26850 * C26844 * C26981) / C26840 +
        C26839 * ((-(C26839 * C26858 * C26857 * C26981) / C26660) / C26621 -
                  (C26980 * ce) / C26840);
    const double C236 = (C26841 * C26838 * C26976 + C26980 * C26847) / C26621;
    const double C237 =
        (2 * C26839 * C26980 + C26839 * (C26980 + C26986 * C26847)) / C26621;
    const double C716 = (C26915 * (C26980 + C26986 * C26847) +
                         (C26846 + C26856 * C26847) * ae) /
                        C26621;
    const double C717 =
        (C26915 * C26839 * C26980 + C26839 * C26846 * ae) / C26621;
    const double C1090 = (C26945 * (C26980 + C26986 * C26847)) / C26621;
    const double C1091 = (C26945 * C26839 * C26980) / C26621;
    const double C1525 =
        (C26841 * C26838 * C26976 + C26915 * (C26915 * C26980 + C26846 * ae) +
         C26915 * C26846 * ae) /
        C26621;
    const double C2668 = (C26945 * (C26915 * C26980 + C26846 * ae)) / C26621;
    const double C3174 = (C26841 * C26838 * C26976 + C26980 * C27072) / C26621;
    const double C4266 =
        (2 * C26945 * C26980 + C26945 * (C26980 + C26986 * C27072)) / C26621;
    const double C412 =
        (-(C26839 * C27035 * ce) / C26660) / C26621 -
        (C26850 * C26844 * C27036) / C26840 +
        C26839 * ((-(C26839 * C26858 * C26857 * C27036) / C26660) / C26621 -
                  (C27035 * ce) / C26840);
    const double C407 = (C26841 * C26838 * C27031 + C27035 * C26847) / C26621;
    const double C408 =
        (2 * C26839 * C27035 + C26839 * (C27035 + C27041 * C26847)) / C26621;
    const double C834 = (C26915 * (C27035 + C27041 * C26847)) / C26621;
    const double C835 = (C26915 * C26839 * C27035) / C26621;
    const double C1208 = (C26945 * (C27035 + C27041 * C26847) +
                          (C26846 + C26856 * C26847) * ae) /
                         C26621;
    const double C1209 =
        (C26945 * C26839 * C27035 + C26839 * C26846 * ae) / C26621;
    const double C1723 = (C26841 * C26838 * C27031 + C27035 * C27005) / C26621;
    const double C2290 =
        (2 * C26915 * C27035 + C26915 * (C27035 + C27041 * C27005)) / C26621;
    const double C2832 = (C26945 * (C27035 + C27041 * C27005) +
                          (C26846 + C26856 * C27005) * ae) /
                         C26621;
    const double C2834 =
        (C26945 * C26915 * C27035 + C26915 * C26846 * ae) / C26621;
    const double C3371 =
        (C26841 * C26838 * C27031 + C26945 * (C26945 * C27035 + C26846 * ae) +
         C26945 * C26846 * ae) /
        C26621;
    const double C248 = C27805 * C240;
    const double C304 = C27805 * C297;
    const double C358 = C27805 * C351;
    const double C361 = C27805 * C352;
    const double C419 = C27816 * C411;
    const double C475 = C27816 * C468;
    const double C478 = C27816 * C469;
    const double C529 = C27816 * C522;
    const double C11205 = C27763 * C594;
    const double C11263 = C27763 * C638;
    const double C11309 = C27763 * C680;
    const double C2297 = C27816 * C840;
    const double C2367 = C27816 * C875;
    const double C2426 = C27816 * C916;
    const double C12913 = C27763 * C968;
    const double C12980 = C27763 * C1010;
    const double C13045 = C27763 * C1054;
    const double C4273 = C27805 * C1096;
    const double C4344 = C27805 * C1134;
    const double C4405 = C27805 * C1169;
    const double C26899 = C26839 * C26894;
    const double C27350 = C26894 * C27005;
    const double C27435 = C26915 * C26894;
    const double C27457 = C26894 * C27072;
    const double C26898 = C26839 * C26891;
    const double C27359 = C26891 * C27005;
    const double C27441 = C26915 * C26891;
    const double C27472 = C26891 * C27072;
    const double C26897 = C26877 + C26890;
    const double C26937 = C26935 * C26847;
    const double C27200 = C26839 * C26935;
    const double C27368 = C26915 * C26935;
    const double C27481 = C26935 * C27072;
    const double C26967 = C26965 * C26847;
    const double C27209 = C26839 * C26965;
    const double C27390 = C26965 * C27005;
    const double C27445 = C26915 * C26965;
    const double C27490 = C26945 * C26965;
    const double C26996 = C26994 * C26847;
    const double C27202 = C26839 * C26994;
    const double C27371 = C26915 * C26994;
    const double C27467 = C26994 * C27072;
    const double C27014 = C26877 + C27013;
    const double C27051 = C27049 * C26847;
    const double C27216 = C26839 * C27049;
    const double C27399 = C27049 * C27005;
    const double C27447 = C26915 * C27049;
    const double C27493 = C26945 * C27049;
    const double C27081 = C26877 + C27080;
    const double C26880 = C26875 / C26660;
    const double C27349 = C26875 / C26840;
    const double C3574 = (C26915 * C26854 + C27290 * C27072) / C26621;
    const double C26881 = C26876 / C26840;
    const double C3572 = -(C27300 * C27072 + C26915 * C26853) / C26660;
    const double C26893 = C26856 + C26886;
    const double C26895 = C26885 * ae;
    const double C26892 = C26885 * ce;
    const double C27201 = C26915 * C26885;
    const double C27333 = C26945 * C26885;
    const double C27376 = C26856 + C27370;
    const double C27378 = C27369 * ae;
    const double C27375 = C27369 * ce;
    const double C27446 = C26945 * C27369;
    const double C27498 = C26856 + C27492;
    const double C27500 = C27491 * ae;
    const double C27497 = C27491 * ce;
    const double C26934 = C26931 / C26840;
    const double C3063 = -(C26929 * C27072 + C26839 * C26921) / C26660;
    const double C26964 = C26961 / C26840;
    const double C1467 = -(C26959 * C27005 + C26839 * C26951) / C26660;
    const double C26993 = C26990 / C26840;
    const double C27366 = C26990 / C26660;
    const double C3175 = (C26839 * C26980 + C26988 * C27072) / C26621;
    const double C27048 = C27045 / C26840;
    const double C27488 = C27045 / C26660;
    const double C1724 = (C26839 * C27035 + C27043 * C27005) / C26621;
    const double C152 =
        2 * ((-(C26839 * C26926) / C26660) / C26621 - (ae * C26921) / C26840) -
        (ae * (C26927 * C26847 + C26921)) / C26840 +
        C26839 *
            ((-(ae * C26839 * C26927) / C26660) / C26621 - C26926 / C26840 +
             C26839 *
                 ((-(C26839 * C26879 * C26878 * C26922) / C26660) / C26621 -
                  (ae * C26927) / C26840));
    const double C637 = C26915 * ((-(C26839 * C26926) / C26660) / C26621 -
                                  (ae * C26921) / C26840) -
                        ((C26839 * C26854 + C26846 * ae) * ce) / C26840;
    const double C1009 = C26945 * ((-(C26839 * C26926) / C26660) / C26621 -
                                   (ae * C26921) / C26840);
    const double C1413 = (-(C26915 * C26854 * ce) / C26660) / C26621 -
                         (C26850 * C26844 * C26922) / C26840 +
                         C26915 * ((-(C26915 * C26926) / C26660) / C26621 -
                                   (C26854 * ce) / C26840);
    const double C2556 = C26945 * ((-(C26915 * C26926) / C26660) / C26621 -
                                   (C26854 * ce) / C26840);
    const double C3065 = (-(C26926 * C27072) / C26660) / C26621 -
                         (C26850 * C26844 * C26922) / C26840;
    const double C26936 = C26839 * C26933;
    const double C27348 = C26915 * C26933;
    const double C2002 =
        2 * ((-(C26915 * C26926) / C26660) / C26621 - (C26854 * ce) / C26840) -
        ((C26854 + C26867 * C27005) * ce) / C26840 +
        C26915 *
            ((-(C26915 * C26867 * ce) / C26660) / C26621 - C26926 / C26840 +
             C26915 *
                 ((-(C26915 * C26933) / C26660) / C26621 - C26875 / C26840));
    const double C2554 =
        C26945 *
        ((-(C26915 * C26867 * ce) / C26660) / C26621 - C26926 / C26840 +
         C26915 * ((-(C26915 * C26933) / C26660) / C26621 - C26875 / C26840));
    const double C3630 =
        (-(C26915 * C26926) / C26660) / C26621 - (C26854 * ce) / C26840 +
        ((-(C26915 * C26933) / C26660) / C26621 - C26875 / C26840) * C27072;
    const double C4136 =
        (-2 * C26945 * C26926) / C26840 +
        C26945 * ((-(C26933 * C27072) / C26660) / C26621 - C26926 / C26840);
    const double C21704 =
        3 * ((-(C26933 * C27072) / C26660) / C26621 - C26926 / C26840) +
        C26945 * ((-2 * C26945 * C26933) / C26840 +
                  C26945 * ((-(std::pow(C26837, 6) * bs[6] * C26922 * C27072) /
                             C26660) /
                                C26621 -
                            C26933 / C26840));
    const double C242 =
        2 * ((-(C26839 * C26985) / C26660) / C26621 - (C26980 * ce) / C26840) -
        ((C26980 + C26986 * C26847) * ce) / C26840 +
        C26839 *
            ((-(C26839 * C26986 * ce) / C26660) / C26621 - C26985 / C26840 +
             C26839 *
                 ((-(C26839 * C26879 * C26878 * C26981) / C26660) / C26621 -
                  (C26986 * ce) / C26840));
    const double C721 = C26915 * ((-(C26839 * C26985) / C26660) / C26621 -
                                  (C26980 * ce) / C26840) -
                        (ae * (C26839 * C26853 + C26846 * ce)) / C26840;
    const double C1095 = C26945 * ((-(C26839 * C26985) / C26660) / C26621 -
                                   (C26980 * ce) / C26840);
    const double C1528 = (-(ae * C26915 * C26853) / C26660) / C26621 -
                         (C26850 * C26844 * C26981) / C26840 +
                         C26915 * ((-(C26915 * C26985) / C26660) / C26621 -
                                   (ae * C26853) / C26840);
    const double C2672 = (-(C26915 * C26945 * C26985) / C26660) / C26621 -
                         (ae * C26945 * C26853) / C26840;
    const double C3177 = (-(C26985 * C27072) / C26660) / C26621 -
                         (C26850 * C26844 * C26981) / C26840;
    const double C26995 = C26839 * C26992;
    const double C27358 = C26915 * C26992;
    const double C27410 = C26945 * C26992;
    const double C2671 =
        (-(ae * C26945 * C26915 * C26866) / C26660) / C26621 -
        (C26945 * C26985) / C26840 +
        C26915 * ((-(C26915 * C26945 * C26992) / C26660) / C26621 -
                  (ae * C26945 * C26866) / C26840);
    const double C3738 =
        C26915 * ((-(C26992 * C27072) / C26660) / C26621 - C26985 / C26840) -
        (ae * (C26866 * C27072 + C26853)) / C26840;
    const double C4268 =
        (-2 * C26945 * C26985) / C26840 +
        C26945 * ((-(C26992 * C27072) / C26660) / C26621 - C26985 / C26840);
    const double C12562 =
        (-(C26992 * C27072) / C26660) / C26621 - C26985 / C26840 -
        (ae * (C26915 * C26891 * C27072 + C27300)) / C26840 +
        C26915 * (C26915 * ((-(std::pow(C26837, 6) * bs[6] * C26981 * C27072) /
                             C26660) /
                                C26621 -
                            C26992 / C26840) -
                  (ae * (C26891 * C27072 + C26866)) / C26840);
    const double C197 =
        2 * ((-(C26839 * C26956) / C26660) / C26621 - (ae * C26951) / C26840) -
        (ae * (C26957 * C26847 + C26951)) / C26840 +
        C26839 *
            ((-(ae * C26839 * C26957) / C26660) / C26621 - C26956 / C26840 +
             C26839 *
                 ((-(C26839 * C26879 * C26878 * C26952) / C26660) / C26621 -
                  (ae * C26957) / C26840));
    const double C679 = C26915 * ((-(C26839 * C26956) / C26660) / C26621 -
                                  (ae * C26951) / C26840);
    const double C1053 = C26945 * ((-(C26839 * C26956) / C26660) / C26621 -
                                   (ae * C26951) / C26840) -
                         ((C26839 * C26854 + C26846 * ae) * ce) / C26840;
    const double C1469 = (-(C26956 * C27005) / C26660) / C26621 -
                         (C26850 * C26844 * C26952) / C26840;
    const double C2612 = (-(C26945 * C26915 * C26956) / C26660) / C26621 -
                         (C26915 * C26854 * ce) / C26840;
    const double C3121 = (-(C26945 * C26854 * ce) / C26660) / C26621 -
                         (C26850 * C26844 * C26952) / C26840 +
                         C26945 * ((-(C26945 * C26956) / C26660) / C26621 -
                                   (C26854 * ce) / C26840);
    const double C26966 = C26839 * C26963;
    const double C27434 = C26915 * C26963;
    const double C27456 = C26945 * C26963;
    const double C2068 =
        (-2 * C26915 * C26956) / C26840 +
        C26915 * ((-(C26963 * C27005) / C26660) / C26621 - C26956 / C26840);
    const double C2614 =
        C26945 * ((-(C26963 * C27005) / C26660) / C26621 - C26956 / C26840) -
        ((C26854 + C26867 * C27005) * ce) / C26840;
    const double C3684 =
        (-(C26945 * C27290 * ce) / C26660) / C26621 -
        (C26915 * C26956) / C26840 +
        C26945 * ((-(C26945 * C26915 * C26963) / C26660) / C26621 -
                  (C27290 * ce) / C26840);
    const double C4202 =
        2 * ((-(C26945 * C26956) / C26660) / C26621 - (C26854 * ce) / C26840) -
        ((C26854 + C26867 * C27072) * ce) / C26840 +
        C26945 *
            ((-(C26945 * C26867 * ce) / C26660) / C26621 - C26956 / C26840 +
             C26945 *
                 ((-(C26945 * C26963) / C26660) / C26621 - C26875 / C26840));
    const double C11305 =
        3 * ((-(C26963 * C27005) / C26660) / C26621 - C26956 / C26840) +
        C26915 * ((-2 * C26915 * C26963) / C26840 +
                  C26915 * ((-(std::pow(C26837, 6) * bs[6] * C26952 * C27005) /
                             C26660) /
                                C26621 -
                            C26963 / C26840));
    const double C353 =
        (-2 * C26839 * C27024) / C26840 +
        C26839 * ((-(C26879 * C26878 * C27021 * C26847) / C26660) / C26621 -
                  C27024 / C26840);
    const double C797 = (-(C26915 * C26839 * C27024) / C26660) / C26621 -
                        (ae * C26839 * C26951) / C26840;
    const double C1170 = (-(C26945 * C26839 * C27024) / C26660) / C26621 -
                         (C26839 * C26980 * ce) / C26840;
    const double C1661 = (-(ae * C26915 * C26951) / C26660) / C26621 -
                         (C26850 * C26844 * C27021) / C26840 +
                         C26915 * ((-(C26915 * C27024) / C26660) / C26621 -
                                   (ae * C26951) / C26840);
    const double C2778 = C26915 * ((-(C26945 * C27024) / C26660) / C26621 -
                                   (C26980 * ce) / C26840) -
                         (ae * (C26945 * C26951 + C26846 * ce)) / C26840;
    const double C3305 = (-(C26945 * C26980 * ce) / C26660) / C26621 -
                         (C26850 * C26844 * C27021) / C26840 +
                         C26945 * ((-(C26945 * C27024) / C26660) / C26621 -
                                   (C26980 * ce) / C26840);
    const double C27208 = C26839 * C27027;
    const double C27389 = C26915 * C27027;
    const double C27414 = C26945 * C27027;
    const double C354 =
        3 * ((-(C27027 * C26847) / C26660) / C26621 - C27024 / C26840) +
        C26839 * ((-2 * C26839 * C27027) / C26840 +
                  C26839 * ((-(std::pow(C26837, 6) * bs[6] * C27021 * C26847) /
                             C26660) /
                                C26621 -
                            C27027 / C26840));
    const double C796 =
        C26915 * ((-(C27027 * C26847) / C26660) / C26621 - C27024 / C26840) -
        (ae * (C26957 * C26847 + C26951)) / C26840;
    const double C1171 =
        C26945 * ((-(C27027 * C26847) / C26660) / C26621 - C27024 / C26840) -
        ((C26980 + C26986 * C26847) * ce) / C26840;
    const double C1662 =
        (-(ae * C26915 * C26959) / C26660) / C26621 -
        (C26839 * C27024) / C26840 +
        C26915 * ((-(C26915 * C26839 * C27027) / C26660) / C26621 -
                  (ae * C26959) / C26840);
    const double C413 =
        2 * ((-(C26839 * C27040) / C26660) / C26621 - (C27035 * ce) / C26840) -
        ((C27035 + C27041 * C26847) * ce) / C26840 +
        C26839 *
            ((-(C26839 * C27041 * ce) / C26660) / C26621 - C27040 / C26840 +
             C26839 *
                 ((-(C26839 * C26879 * C26878 * C27036) / C26660) / C26621 -
                  (C27041 * ce) / C26840));
    const double C839 = C26915 * ((-(C26839 * C27040) / C26660) / C26621 -
                                  (C27035 * ce) / C26840);
    const double C1213 = C26945 * ((-(C26839 * C27040) / C26660) / C26621 -
                                   (C27035 * ce) / C26840) -
                         (ae * (C26839 * C26853 + C26846 * ce)) / C26840;
    const double C1726 = (-(C27040 * C27005) / C26660) / C26621 -
                         (C26850 * C26844 * C27036) / C26840;
    const double C2838 = (-(C26945 * C26915 * C27040) / C26660) / C26621 -
                         (ae * C26915 * C26853) / C26840;
    const double C3374 = (-(ae * C26945 * C26853) / C26660) / C26621 -
                         (C26850 * C26844 * C27036) / C26840 +
                         C26945 * ((-(C26945 * C27040) / C26660) / C26621 -
                                   (ae * C26853) / C26840);
    const double C27050 = C26839 * C27047;
    const double C27440 = C26915 * C27047;
    const double C27471 = C26945 * C27047;
    const double C2292 =
        (-2 * C26915 * C27040) / C26840 +
        C26915 * ((-(C27047 * C27005) / C26660) / C26621 - C27040 / C26840);
    const double C2836 =
        C26945 * ((-(C27047 * C27005) / C26660) / C26621 - C27040 / C26840) -
        (ae * (C26866 * C27005 + C26853)) / C26840;
    const double C3896 =
        (-(ae * C26945 * C27300) / C26660) / C26621 -
        (C26915 * C27040) / C26840 +
        C26945 * ((-(C26945 * C26915 * C27047) / C26660) / C26621 -
                  (ae * C27300) / C26840);
    const double C11462 =
        3 * ((-(C27047 * C27005) / C26660) / C26621 - C27040 / C26840) +
        C26915 * ((-2 * C26915 * C27047) / C26840 +
                  C26915 * ((-(std::pow(C26837, 6) * bs[6] * C27036 * C27005) /
                             C26660) /
                                C26621 -
                            C27047 / C26840));
    const double C470 =
        (-2 * C26839 * C27065) / C26840 +
        C26839 * ((-(C26879 * C26878 * C27062 * C26847) / C26660) / C26621 -
                  C27065 / C26840);
    const double C876 = (-(C26915 * C26839 * C27065) / C26660) / C26621 -
                        (C26839 * C27035 * ce) / C26840;
    const double C1251 = (-(C26945 * C26839 * C27065) / C26660) / C26621 -
                         (ae * C26839 * C26921) / C26840;
    const double C1791 = (-(C26915 * C27035 * ce) / C26660) / C26621 -
                         (C26850 * C26844 * C27062) / C26840 +
                         C26915 * ((-(C26915 * C27065) / C26660) / C26621 -
                                   (C27035 * ce) / C26840);
    const double C2892 = C26945 * ((-(C26915 * C27065) / C26660) / C26621 -
                                   (C27035 * ce) / C26840) -
                         (ae * (C26915 * C26921 + C26846 * ce)) / C26840;
    const double C3445 = (-(ae * C26945 * C26921) / C26660) / C26621 -
                         (C26850 * C26844 * C27062) / C26840 +
                         C26945 * ((-(C26945 * C27065) / C26660) / C26621 -
                                   (ae * C26921) / C26840);
    const double C27215 = C26839 * C27068;
    const double C27398 = C26915 * C27068;
    const double C27480 = C26945 * C27068;
    const double C471 =
        3 * ((-(C27068 * C26847) / C26660) / C26621 - C27065 / C26840) +
        C26839 * ((-2 * C26839 * C27068) / C26840 +
                  C26839 * ((-(std::pow(C26837, 6) * bs[6] * C27062 * C26847) /
                             C26660) /
                                C26621 -
                            C27068 / C26840));
    const double C877 =
        C26915 * ((-(C27068 * C26847) / C26660) / C26621 - C27065 / C26840) -
        ((C27035 + C27041 * C26847) * ce) / C26840;
    const double C1250 =
        C26945 * ((-(C27068 * C26847) / C26660) / C26621 - C27065 / C26840) -
        (ae * (C26927 * C26847 + C26921)) / C26840;
    const double C1792 =
        (-(C26915 * C27043 * ce) / C26660) / C26621 -
        (C26839 * C27065) / C26840 +
        C26915 * ((-(C26915 * C26839 * C27068) / C26660) / C26621 -
                  (C27043 * ce) / C26840);
    const double C26637 = C26632 / C26625;
    const double C26635 = 2 * C26632;
    const double C27962 = C27764 / C26630;
    const double C27960 = C27764 / C26621;
    const double C27959 = C27764 * C27759;
    const double C9454 = (2 * C27767 * C27764) / C26621;
    const double C27963 = C27768 * C27759;
    const double C76 = C27768 / C27964;
    const double C4619 = C27768 / C26626;
    const double C27984 = C27961 / C26621;
    const double C9453 = (C27763 * std::pow(C27758, 2)) / C26625 + C27958;
    const double C26758 = C26701 / C26625;
    const double C26755 = 2 * C26701;
    const double C1524 =
        ((0 * ae) / C26621 - C26701 / C26625) / C26626 + (0 * ae) / C26621;
    const double C4775 =
        ((C27805 - (C26698 * 2 * C26701) / C26621) * ae) / C26621 -
        C26699 / C26630;
    const double C4776 = (0 * ae) / C26621 - C26701 / C26625;
    const double C9611 =
        (-C26699 / C26621) / C26626 -
        ((C27805 - (C26698 * 2 * C26701) / C26621) * be) / C26621;
    const double C9612 = (-(2 * C26701) / C26621) / C26626 - (0 * be) / C26621;
    const double C249 = C233 * C91;
    const double C247 = C233 * C99;
    const double C245 = C233 * C90;
    const double C303 = C233 * C145;
    const double C357 = C233 * C190;
    const double C3181 = C233 * C955;
    const double C4274 = C233 * C3000;
    const double C4272 = C233 * C960;
    const double C4270 = C233 * C956;
    const double C4343 = C233 * C1006;
    const double C4404 = C233 * C1050;
    const double C27977 = C27851 / C26630;
    const double C27976 = C27851 * C27850;
    const double C27973 = C27851 / C26621;
    const double C1344 = (2 * C27767 * C27851) / C26621;
    const double C1523 =
        (((C27805 - (C26698 * 2 * C26701) / C26621) * ae) / C26621 -
         C26699 / C26630) /
            C26626 +
        ((C26698 * ((0 * ae) / C26621 - C26701 / C26625) + C27854) * ae) /
            C26621;
    const double C27978 = C27854 * C27850;
    const double C10885 = C27854 / C27964;
    const double C13459 = C27854 / C26626;
    const double C27990 = C27975 / C26621;
    const double C1343 = (C27805 * std::pow(C27849, 2)) / C26625 + C27970;
    const double C26804 = C26716 / C26625;
    const double C26801 = 2 * C26716;
    const double C3370 =
        ((0 * ae) / C26621 - C26716 / C26625) / C26626 + (0 * ae) / C26621;
    const double C6413 =
        ((C27816 - (C26713 * 2 * C26716) / C26621) * ae) / C26621 -
        C26714 / C26630;
    const double C6414 = (0 * ae) / C26621 - C26716 / C26625;
    const double C18483 =
        (-C26714 / C26621) / C26626 -
        ((C27816 - (C26713 * 2 * C26716) / C26621) * be) / C26621;
    const double C18484 = (-(2 * C26716) / C26621) / C26626 - (0 * be) / C26621;
    const double C420 = C404 * C91;
    const double C418 = C404 * C99;
    const double C416 = C404 * C90;
    const double C474 = C404 * C145;
    const double C528 = C404 * C190;
    const double C1730 = C404 * C581;
    const double C2300 = C404 * C1348;
    const double C2296 = C404 * C586;
    const double C2294 = C404 * C582;
    const double C2366 = C404 * C634;
    const double C2425 = C404 * C676;
    const double C27981 = C27877 / C26630;
    const double C27980 = C27877 * C27876;
    const double C27974 = C27877 / C26621;
    const double C2998 = (2 * C27767 * C27877) / C26621;
    const double C3369 =
        (((C27816 - (C26713 * 2 * C26716) / C26621) * ae) / C26621 -
         C26714 / C26630) /
            C26626 +
        ((C26713 * ((0 * ae) / C26621 - C26716 / C26625) + C27880) * ae) /
            C26621;
    const double C27982 = C27880 * C27876;
    const double C21040 = C27880 / C27964;
    const double C23835 = C27880 / C26626;
    const double C27993 = C27979 / C26621;
    const double C2997 = (C27816 * std::pow(C27875, 2)) / C26625 + C27972;
    const double C1929 = C27768 * C589;
    const double C13955 = C27768 * C589;
    const double C4063 = C27768 * C963;
    const double C16155 = C27768 * C963;
    const double C11207 = C27763 * C1351;
    const double C11211 = C27763 * C1922;
    const double C17205 = C27763 * C2490;
    const double C12377 = C27763 * C2494;
    const double C12915 = C27763 * C3003;
    const double C21663 = C27763 * C4056;
    const double C251 = C233 * C100;
    const double C422 = C404 * C100;
    const double C1732 = C404 * C585;
    const double C3183 = C233 * C959;
    const double C2302 = C404 * C1353;
    const double C11466 = C404 * C1920;
    const double C4276 = C233 * C3005;
    const double C21788 = C233 * C4054;
    const double C26873 = C26870 + C26864;
    const double C27197 = C27195 + C26864;
    const double C27330 = C27328 + C26864;
    const double C1411 = -(C26915 * (C26915 * C26929 + C26862 * ce) +
                           C26839 * C26921 + C26915 * C26862 * ce) /
                         C26660;
    const double C1526 =
        (C26839 * C26980 + C26915 * (C26915 * C26988 + C26862 * ae) +
         C26915 * C26862 * ae) /
        C26621;
    const double C2551 = -(C26945 * (C26915 * C26929 + C26862 * ce)) / C26660;
    const double C2607 =
        -(C26945 * C26915 * C26959 + C26915 * C26862 * ce) / C26660;
    const double C2666 = (C26945 * (C26915 * C26988 + C26862 * ae)) / C26621;
    const double C2833 =
        (C26945 * C26915 * C27043 + C26915 * C26862 * ae) / C26621;
    const double C3119 = -(C26945 * (C26945 * C26959 + C26862 * ce) +
                           C26839 * C26951 + C26945 * C26862 * ce) /
                         C26660;
    const double C3372 =
        (C26839 * C27035 + C26945 * (C26945 * C27043 + C26862 * ae) +
         C26945 * C26862 * ae) /
        C26621;
    const double C1349 = C26839 * C26846 + C26862 * C27005;
    const double C1917 =
        2 * C26915 * C26862 + C26915 * (C26862 + C26885 * C27005);
    const double C2483 = C26945 * (C26862 + C26885 * C27005);
    const double C2485 = C26945 * C26915 * C26862;
    const double C3001 = C26839 * C26846 + C26862 * C27072;
    const double C4051 =
        2 * C26945 * C26862 + C26945 * (C26862 + C26885 * C27072);
    const double C26872 = C26869 + C26861;
    const double C27196 = C27193 + C26861;
    const double C27329 = C27326 + C26861;
    const double C26871 = C26868 * C26848;
    const double C27010 = C27009 * C26848;
    const double C27077 = C27076 * C26848;
    const double C3682 = -(C26945 * (C26945 * C27307 + C27194 * ce) +
                           C26915 * C26951 + C26945 * C27194 * ce) /
                         C26660;
    const double C3894 =
        (C26915 * C27035 + C26945 * (C26945 * C27308 + C27194 * ae) +
         C26945 * C27194 * ae) /
        C26621;
    const double C3570 = C26915 * C26846 + C27194 * C27072;
    const double C12905 =
        2 * C26945 * C27194 + C26945 * (C27194 + C27369 * C27072);
    const double C307 = C27805 * C298;
    const double C532 = C27816 * C523;
    const double C253 = C233 * C92;
    const double C424 = C404 * C92;
    const double C4976 = C404 * C580;
    const double C6248 = C233 * C954;
    const double C11464 = C404 * C1918;
    const double C21786 = C233 * C4052;
    const double C306 = C233 * C146;
    const double C477 = C404 * C146;
    const double C309 = C233 * C147;
    const double C480 = C404 * C147;
    const double C5033 = C404 * C632;
    const double C1796 = C404 * C633;
    const double C6305 = C233 * C1004;
    const double C3247 = C233 * C1005;
    const double C2368 = C404 * C1410;
    const double C4346 = C233 * C3062;
    const double C21830 = C233 * C4134;
    const double C360 = C233 * C191;
    const double C531 = C404 * C191;
    const double C363 = C233 * C192;
    const double C534 = C404 * C192;
    const double C5088 = C404 * C674;
    const double C1859 = C404 * C675;
    const double C6360 = C233 * C1048;
    const double C3310 = C233 * C1049;
    const double C2428 = C404 * C1466;
    const double C11546 = C404 * C2066;
    const double C4406 = C233 * C3118;
    const double C252 = C27805 * C241;
    const double C250 = C27805 * C236;
    const double C254 = C27805 * C237;
    const double C4787 = C27854 * C716;
    const double C9623 = C27854 * C716;
    const double C4779 = C27854 * C717;
    const double C9615 = C27854 * C717;
    const double C6249 = C27805 * C1090;
    const double C3182 = C27805 * C1091;
    const double C9053 = C27854 * C2668;
    const double C13105 = C27854 * C2668;
    const double C4275 = C27805 * C3174;
    const double C21787 = C27805 * C4266;
    const double C423 = C27816 * C412;
    const double C421 = C27816 * C407;
    const double C425 = C27816 * C408;
    const double C4977 = C27816 * C834;
    const double C1731 = C27816 * C835;
    const double C6425 = C27880 * C1208;
    const double C18495 = C27880 * C1208;
    const double C6417 = C27880 * C1209;
    const double C18487 = C27880 * C1209;
    const double C2301 = C27816 * C1723;
    const double C11465 = C27816 * C2290;
    const double C17523 = C27880 * C2832;
    const double C20381 = C27880 * C2832;
    const double C8633 = C27880 * C2834;
    const double C20373 = C27880 * C2834;
    const double C26903 = C26899 + C26888;
    const double C27352 = C26867 + C27350;
    const double C12907 =
        (2 * C26945 * C27290 + C26945 * (C27290 + C27435 * C27072)) / C26621;
    const double C27459 = C26867 + C27457;
    const double C26902 = C26898 + C26884;
    const double C27361 = C27359 + C26866;
    const double C12906 = (-2 * C26945 * C27300) / C26660 -
                          (C26945 * (C27441 * C27072 + C27300)) / C26660;
    const double C27474 = C27472 + C26866;
    const double C26901 = C26897 * C26848;
    const double C26939 = C26937 + C26927;
    const double C27203 = C26915 * C27200;
    const double C4133 = (-2 * C26945 * C26929) / C26660 -
                         (C26945 * (C27200 * C27072 + C26929)) / C26660;
    const double C27374 = C27368 + C26884;
    const double C27483 = C27481 + C26927;
    const double C26969 = C26967 + C26957;
    const double C27304 = C26915 * C27209;
    const double C27332 = C26945 * C27209;
    const double C2065 = (-2 * C26915 * C26959) / C26660 -
                         (C26915 * (C27209 * C27005 + C26959)) / C26660;
    const double C2609 = -(C26945 * (C27209 * C27005 + C26959) +
                           (C26862 + C26885 * C27005) * ce) /
                         C26660;
    const double C27392 = C27390 + C26957;
    const double C27448 = C26945 * C27445;
    const double C27496 = C27490 + C26884;
    const double C26998 = C26986 + C26996;
    const double C27204 = C26915 * C27202;
    const double C4265 =
        (2 * C26945 * C26988 + C26945 * (C26988 + C27202 * C27072)) / C26621;
    const double C27377 = C27371 + C26888;
    const double C27468 = C26986 + C27467;
    const double C27015 = C27014 * C26848;
    const double C27053 = C27041 + C27051;
    const double C27305 = C26915 * C27216;
    const double C27334 = C26945 * C27216;
    const double C2289 =
        (2 * C26915 * C27043 + C26915 * (C27043 + C27216 * C27005)) / C26621;
    const double C2831 = (C26945 * (C27043 + C27216 * C27005) +
                          (C26862 + C26885 * C27005) * ae) /
                         C26621;
    const double C27401 = C27041 + C27399;
    const double C27449 = C26945 * C27447;
    const double C27499 = C27493 + C26888;
    const double C27082 = C27081 * C26848;
    const double C26889 = -C26880;
    const double C12381 = C27763 * C3574;
    const double C2134 =
        2 * ((-(C26915 * C26985) / C26660) / C26621 - (ae * C26853) / C26840) -
        (ae * (C26866 * C27005 + C26853)) / C26840 +
        C26915 *
            ((-(ae * C26915 * C26866) / C26660) / C26621 - C26985 / C26840 +
             C26915 * ((-(C26915 * C26992) / C26660) / C26621 - C26881));
    const double C4462 =
        2 * ((-(C26945 * C27040) / C26660) / C26621 - (ae * C26853) / C26840) -
        (ae * (C26866 * C27072 + C26853)) / C26840 +
        C26945 *
            ((-(ae * C26945 * C26866) / C26660) / C26621 - C27040 / C26840 +
             C26945 * ((-(C26945 * C27047) / C26660) / C26621 - C26881));
    const double C93 = 3 * (C26846 + C26856 * C26847) +
                       C26839 * (2 * C26862 + C26839 * C26893);
    const double C579 = C26915 * (2 * C26862 + C26839 * C26893);
    const double C953 = C26945 * (2 * C26862 + C26839 * C26893);
    const double C1350 = C26846 + C26856 * C26847 + C26893 * C27005;
    const double C3002 = C26846 + C26856 * C26847 + C26893 * C27072;
    const double C5629 = C26945 * C26915 * C26893;
    const double C3569 = C26915 * C26862 + C27201 * C27072;
    const double C11197 = 3 * (C26846 + C26856 * C27005) +
                          C26915 * (2 * C27194 + C26915 * C27376);
    const double C11583 = C26945 * (2 * C27194 + C26915 * C27376);
    const double C12371 = C26846 + C26856 * C27005 + C27376 * C27072;
    const double C21657 = 3 * (C26846 + C26856 * C27072) +
                          C26945 * (2 * C27327 + C26945 * C27498);
    const double C4514 =
        2 * ((-(C26945 * C27065) / C26660) / C26621 - (ae * C26921) / C26840) -
        (ae * (C26927 * C27072 + C26921)) / C26840 +
        C26945 *
            ((-(ae * C26945 * C26927) / C26660) / C26621 - C27065 / C26840 +
             C26945 * ((-(C26945 * C27068) / C26660) / C26621 - C26934));
    const double C3250 = C233 * C3063;
    const double C2238 =
        2 * ((-(C26915 * C27024) / C26660) / C26621 - (ae * C26951) / C26840) -
        (ae * (C26957 * C27005 + C26951)) / C26840 +
        C26915 *
            ((-(ae * C26915 * C26957) / C26660) / C26621 - C27024 / C26840 +
             C26915 * ((-(C26915 * C27027) / C26660) / C26621 - C26964));
    const double C1862 = C404 * C1467;
    const double C2777 =
        (-(C26945 * C27024) / C26660) / C26621 - (C26980 * ce) / C26840 -
        (ae * (C26945 * C26915 * C26957 + C27194 * ce)) / C26840 +
        C26915 * (C26915 * ((-(C26945 * C27027) / C26660) / C26621 - C26993) -
                  (ae * (C26945 * C26957 + C26861)) / C26840);
    const double C3842 =
        C26915 *
            ((-(C26945 * C26986 * ce) / C26660) / C26621 - C27024 / C26840 +
             C26945 * ((-(C26945 * C27027) / C26660) / C26621 - C26993)) -
        (ae * (C26945 * (C26945 * C26957 + C26861) + C26951 +
               C26945 * C26856 * ce)) /
            C26840;
    const double C4401 =
        2 * ((-(C26945 * C27024) / C26660) / C26621 - (C26980 * ce) / C26840) -
        ((C26980 + C26986 * C27072) * ce) / C26840 +
        C26945 *
            ((-(C26945 * C26986 * ce) / C26660) / C26621 - C27024 / C26840 +
             C26945 * ((-(C26945 * C27027) / C26660) / C26621 - C26993));
    const double C27372 = -C27366;
    const double C3186 = C27805 * C3175;
    const double C2363 =
        2 * ((-(C26915 * C27065) / C26660) / C26621 - (C27035 * ce) / C26840) -
        ((C27035 + C27041 * C27005) * ce) / C26840 +
        C26915 *
            ((-(C26915 * C27041 * ce) / C26660) / C26621 - C27065 / C26840 +
             C26915 * ((-(C26915 * C27068) / C26660) / C26621 - C27048));
    const double C27494 = -C27488;
    const double C1735 = C27816 * C1724;
    const double C2005 = C27768 * C637;
    const double C14027 = C27768 * C637;
    const double C4141 = C27768 * C1009;
    const double C16233 = C27768 * C1009;
    const double C11265 = C27763 * C1413;
    const double C12445 = C27763 * C2556;
    const double C12985 = C27763 * C3065;
    const double C26938 = C26936 / C26660;
    const double C27351 = C27348 / C26660;
    const double C11267 = C27763 * C2002;
    const double C17263 = C27763 * C2554;
    const double C12447 = C27763 * C3630;
    const double C21708 = C27763 * C4136;
    const double C256 = C27805 * C242;
    const double C4783 = C27854 * C721;
    const double C9619 = C27854 * C721;
    const double C3184 = C27805 * C1095;
    const double C9057 = C27854 * C2672;
    const double C13109 = C27854 * C2672;
    const double C4277 = C27805 * C3177;
    const double C26997 = C26995 / C26660;
    const double C27360 = C27358 / C26660;
    const double C13100 =
        (((-2 * C26945 * C26866) / C26660 -
          (C26945 * (C26891 * C27072 + C26866)) / C26660) *
         ae) /
            C26621 +
        C26915 * ((-2 * C27410) / C26840 +
                  C26945 * ((-(std::pow(C26837, 6) * bs[6] * C26981 * C27072) /
                             C26660) /
                                C26621 -
                            C26992 / C26840));
    const double C21784 =
        3 * ((-(C26992 * C27072) / C26660) / C26621 - C26985 / C26840) +
        C26945 * ((-2 * C27410) / C26840 +
                  C26945 * ((-(std::pow(C26837, 6) * bs[6] * C26981 * C27072) /
                             C26660) /
                                C26621 -
                            C26992 / C26840));
    const double C20729 = C1345 * C2671;
    const double C13117 = C27854 * C3738;
    const double C26343 = C27854 * C3738;
    const double C21789 = C27805 * C4268;
    const double C2073 = C27768 * C679;
    const double C14091 = C27768 * C679;
    const double C4205 = C27768 * C1053;
    const double C16303 = C27768 * C1053;
    const double C11312 = C27763 * C1469;
    const double C12504 = C27763 * C2612;
    const double C13047 = C27763 * C3121;
    const double C26968 = C26966 / C26660;
    const double C13042 =
        2 * ((-(C26945 * C27434) / C26660) / C26621 - (C27290 * ce) / C26840) -
        ((C27290 + C27435 * C27072) * ce) / C26840 +
        C26945 *
            ((-(C26945 * C27435 * ce) / C26660) / C26621 - C27434 / C26840 +
             C26945 *
                 ((-(C26945 * C26915 * std::pow(C26837, 6) * bs[6] * C26952) /
                   C26660) /
                      C26621 -
                  (C27435 * ce) / C26840));
    const double C27458 = C27456 / C26660;
    const double C11315 = C27763 * C2068;
    const double C17317 = C27763 * C2614;
    const double C12507 = C27763 * C3684;
    const double C21748 = C27763 * C4202;
    const double C364 = C27805 * C353;
    const double C4917 = C27854 * C797;
    const double C9753 = C27854 * C797;
    const double C3311 = C27805 * C1170;
    const double C9201 = C27854 * C2778;
    const double C13241 = C27854 * C2778;
    const double C4407 = C27805 * C3305;
    const double C2237 =
        2 * ((-(C26915 * C27208) / C26660) / C26621 - (ae * C26959) / C26840) -
        (ae * (C27209 * C27005 + C26959)) / C26840 +
        C26915 *
            ((-(ae * C26915 * C27209) / C26660) / C26621 - C27208 / C26840 +
             C26915 *
                 ((-(C26915 * C26839 * std::pow(C26837, 6) * bs[6] * C27021) /
                   C26660) /
                      C26621 -
                  (ae * C27209) / C26840));
    const double C2779 =
        (-(C26945 * C27208) / C26660) / C26621 - (C26988 * ce) / C26840 -
        (ae * (C26945 * C26915 * C27209 + C27201 * ce)) / C26840 +
        C26915 *
            (C26915 *
                 ((-(C26945 * C26839 * std::pow(C26837, 6) * bs[6] * C27021) /
                   C26660) /
                      C26621 -
                  (C27202 * ce) / C26840) -
             (ae * (C26945 * C27209 + C26892)) / C26840);
    const double C2780 = C26915 * ((-(C26945 * C27208) / C26660) / C26621 -
                                   (C26988 * ce) / C26840) -
                         (ae * (C26945 * C26959 + C26862 * ce)) / C26840;
    const double C3306 = (-(C26945 * C26988 * ce) / C26660) / C26621 -
                         (C26839 * C27024) / C26840 +
                         C26945 * ((-(C26945 * C27208) / C26660) / C26621 -
                                   (C26988 * ce) / C26840);
    const double C3841 =
        C26915 *
            ((-(C26945 * C27202 * ce) / C26660) / C26621 - C27208 / C26840 +
             C26945 *
                 ((-(C26945 * C26839 * std::pow(C26837, 6) * bs[6] * C27021) /
                   C26660) /
                      C26621 -
                  (C27202 * ce) / C26840)) -
        (ae * (C26945 * (C26945 * C27209 + C26892) + C26959 +
               C26945 * C26885 * ce)) /
            C26840;
    const double C4402 =
        2 * ((-(C26945 * C27208) / C26660) / C26621 - (C26988 * ce) / C26840) -
        ((C26988 + C27202 * C27072) * ce) / C26840 +
        C26945 *
            ((-(C26945 * C27202 * ce) / C26660) / C26621 - C27208 / C26840 +
             C26945 *
                 ((-(C26945 * C26839 * std::pow(C26837, 6) * bs[6] * C27021) /
                   C26660) /
                      C26621 -
                  (C27202 * ce) / C26840));
    const double C27391 = C27389 / C26660;
    const double C27415 = C27414 / C26660;
    const double C4921 = C27854 * C796;
    const double C9757 = C27854 * C796;
    const double C6361 = C27805 * C1171;
    const double C1670 = C1345 * C1662;
    const double C427 = C27816 * C413;
    const double C1733 = C27816 * C839;
    const double C6421 = C27880 * C1213;
    const double C18491 = C27880 * C1213;
    const double C2303 = C27816 * C1726;
    const double C8637 = C27880 * C2838;
    const double C20377 = C27880 * C2838;
    const double C27052 = C27050 / C26660;
    const double C13302 =
        2 * ((-(C26945 * C27440) / C26660) / C26621 - (ae * C27300) / C26840) -
        (ae * (C27441 * C27072 + C27300)) / C26840 +
        C26945 *
            ((-(ae * C26945 * C27441) / C26660) / C26621 - C27440 / C26840 +
             C26945 *
                 ((-(C26945 * C26915 * std::pow(C26837, 6) * bs[6] * C27036) /
                   C26660) /
                      C26621 -
                  (ae * C27441) / C26840));
    const double C27473 = C27471 / C26660;
    const double C11467 = C27816 * C2292;
    const double C17527 = C27880 * C2836;
    const double C20385 = C27880 * C2836;
    const double C12729 = C2999 * C3896;
    const double C481 = C27816 * C470;
    const double C1797 = C27816 * C876;
    const double C6493 = C27880 * C1251;
    const double C18563 = C27880 * C1251;
    const double C2369 = C27816 * C1791;
    const double C8709 = C27880 * C2892;
    const double C20445 = C27880 * C2892;
    const double C2364 =
        2 * ((-(C26915 * C27215) / C26660) / C26621 - (C27043 * ce) / C26840) -
        ((C27043 + C27216 * C27005) * ce) / C26840 +
        C26915 *
            ((-(C26915 * C27216 * ce) / C26660) / C26621 - C27215 / C26840 +
             C26915 *
                 ((-(C26915 * C26839 * std::pow(C26837, 6) * bs[6] * C27062) /
                   C26660) /
                      C26621 -
                  (C27216 * ce) / C26840));
    const double C2891 = C26945 * ((-(C26915 * C27215) / C26660) / C26621 -
                                   (C27043 * ce) / C26840) -
                         (ae * (C26915 * C26929 + C26862 * ce)) / C26840;
    const double C3446 = (-(ae * C26945 * C26929) / C26660) / C26621 -
                         (C26839 * C27065) / C26840 +
                         C26945 * ((-(C26945 * C27215) / C26660) / C26621 -
                                   (ae * C26929) / C26840);
    const double C4513 =
        2 * ((-(C26945 * C27215) / C26660) / C26621 - (ae * C26929) / C26840) -
        (ae * (C27200 * C27072 + C26929)) / C26840 +
        C26945 *
            ((-(ae * C26945 * C27200) / C26660) / C26621 - C27215 / C26840 +
             C26945 *
                 ((-(C26945 * C26839 * std::pow(C26837, 6) * bs[6] * C27062) /
                   C26660) /
                      C26621 -
                  (ae * C27200) / C26840));
    const double C27400 = C27398 / C26660;
    const double C27482 = C27480 / C26660;
    const double C5034 = C27816 * C877;
    const double C6497 = C27880 * C1250;
    const double C18567 = C27880 * C1250;
    const double C1800 = C27816 * C1792;
    const double C26640 = C26629 - C26637;
    const double C26639 = C26619 * C26635;
    const double C1347 = (-C26635 / C26621) / C26626 - (0 * be) / C26621;
    const double C10886 = -C26635 / C26621;
    const double C13961 = C27960 * C1351;
    const double C13957 = C27960 * C594;
    const double C13953 = C27960 * C590;
    const double C14033 = C27960 * C1413;
    const double C14029 = C27960 * C638;
    const double C14093 = C27960 * C1469;
    const double C14089 = C27960 * C680;
    const double C15535 = C27960 * C2494;
    const double C15615 = C27960 * C2556;
    const double C15685 = C27960 * C2612;
    const double C16157 = C27960 * C968;
    const double C16153 = C27960 * C964;
    const double C16231 = C27960 * C1010;
    const double C16305 = C27960 * C1054;
    const double C24777 = C27960 * C3003;
    const double C24839 = C27960 * C3065;
    const double C24897 = C27960 * C3121;
    const double C27983 = C27959 / C26625;
    const double C9965 = C9454 * C589;
    const double C10033 = C9454 * C637;
    const double C10092 = C9454 * C679;
    const double C19137 = C9454 * C963;
    const double C19205 = C9454 * C1009;
    const double C19264 = C9454 * C1053;
    const double C27985 = C27963 / C26621;
    const double C1341 = -C27984;
    const double C9969 = C9453 * C594;
    const double C9963 = C9453 * C590;
    const double C10035 = C9453 * C638;
    const double C10090 = C9453 * C680;
    const double C19141 = C9453 * C968;
    const double C19135 = C9453 * C964;
    const double C19203 = C9453 * C1010;
    const double C19266 = C9453 * C1054;
    const double C26765 = C26762 - C26758;
    const double C26761 = C26698 * C26755;
    const double C1669 = C1524 * C1467;
    const double C20728 = C1524 * C2488;
    const double C20722 = C1524 * C2484;
    const double C20845 = C1524 * C2610;
    const double C4792 = C4775 * C100;
    const double C4788 = C4775 * C91;
    const double C4784 = C4775 * C99;
    const double C4780 = C4775 * C90;
    const double C4856 = C4775 * C146;
    const double C4852 = C4775 * C145;
    const double C4918 = C4775 * C191;
    const double C4914 = C4775 * C190;
    const double C7772 = C4775 * C959;
    const double C7768 = C4775 * C955;
    const double C7844 = C4775 * C1005;
    const double C7916 = C4775 * C1049;
    const double C9054 = C4775 * C960;
    const double C9050 = C4775 * C956;
    const double C9128 = C4775 * C1006;
    const double C9202 = C4775 * C1050;
    const double C26340 = C4775 * C3005;
    const double C26336 = C4775 * C3000;
    const double C26398 = C4775 * C3062;
    const double C26456 = C4775 * C3118;
    const double C4786 = C4776 * C580;
    const double C4782 = C4776 * C585;
    const double C4778 = C4776 * C581;
    const double C4858 = C4776 * C632;
    const double C4854 = C4776 * C633;
    const double C4920 = C4776 * C674;
    const double C4916 = C4776 * C675;
    const double C9056 = C4776 * C2492;
    const double C9052 = C4776 * C2486;
    const double C9130 = C4776 * C2552;
    const double C9200 = C4776 * C2608;
    const double C26342 = C4776 * C3572;
    const double C9628 = C9611 * C100;
    const double C9624 = C9611 * C91;
    const double C9620 = C9611 * C99;
    const double C9616 = C9611 * C90;
    const double C9692 = C9611 * C146;
    const double C9688 = C9611 * C145;
    const double C9754 = C9611 * C191;
    const double C9750 = C9611 * C190;
    const double C13114 = C9611 * C3005;
    const double C13110 = C9611 * C3000;
    const double C13106 = C9611 * C960;
    const double C13102 = C9611 * C956;
    const double C13181 = C9611 * C3062;
    const double C13177 = C9611 * C1006;
    const double C13246 = C9611 * C3118;
    const double C13242 = C9611 * C1050;
    const double C15120 = C9611 * C959;
    const double C15116 = C9611 * C955;
    const double C15192 = C9611 * C1005;
    const double C15264 = C9611 * C1049;
    const double C9622 = C9612 * C580;
    const double C9618 = C9612 * C585;
    const double C9614 = C9612 * C581;
    const double C9694 = C9612 * C632;
    const double C9690 = C9612 * C633;
    const double C9756 = C9612 * C674;
    const double C9752 = C9612 * C675;
    const double C13116 = C9612 * C3572;
    const double C13108 = C9612 * C2492;
    const double C13104 = C9612 * C2486;
    const double C13179 = C9612 * C2552;
    const double C13240 = C9612 * C2608;
    const double C258 = C247 + C248;
    const double C257 = C245 + C246;
    const double C311 = C303 + C304;
    const double C365 = C357 + C358;
    const double C4283 = C4272 + C4273;
    const double C4282 = C4270 + C4271;
    const double C4348 = C4343 + C4344;
    const double C4408 = C4404 + C4405;
    const double C27991 = C27976 / C26625;
    const double C4793 = C27973 * C241;
    const double C4789 = C27973 * C236;
    const double C4785 = C27973 * C240;
    const double C4781 = C27973 * C235;
    const double C4857 = C27973 * C298;
    const double C4853 = C27973 * C297;
    const double C4919 = C27973 * C352;
    const double C4915 = C27973 * C351;
    const double C7773 = C27973 * C1095;
    const double C7769 = C27973 * C1091;
    const double C7917 = C27973 * C1170;
    const double C9055 = C27973 * C1096;
    const double C9051 = C27973 * C1092;
    const double C9129 = C27973 * C1134;
    const double C9203 = C27973 * C1169;
    const double C26341 = C27973 * C3177;
    const double C26337 = C27973 * C3174;
    const double C26457 = C27973 * C3305;
    const double C1522 =
        (((0 - (C26698 * C26699) / C26621) * ae) / C26621 - (0 * be) / C26630) /
            C26626 +
        ((C26698 * (((C27805 - (C26698 * 2 * C26701) / C26621) * ae) / C26621 -
                    C26699 / C26630) +
          C27973) *
         ae) /
            C26621 +
        (0 * ae) / C26621 - C26701 / C26625;
    const double C1541 = C1344 * C721;
    const double C1535 = C1344 * C717;
    const double C1668 = C1344 * C797;
    const double C20727 = C1344 * C2672;
    const double C20721 = C1344 * C2668;
    const double C20848 = C1344 * C2778;
    const double C1540 = C1523 * C585;
    const double C1534 = C1523 * C581;
    const double C1605 = C1523 * C633;
    const double C1667 = C1523 * C675;
    const double C20726 = C1523 * C2492;
    const double C20720 = C1523 * C2486;
    const double C20788 = C1523 * C2552;
    const double C20847 = C1523 * C2608;
    const double C27992 = C27978 / C26621;
    const double C13748 = C13459 * C1662;
    const double C17857 = C13459 * C2671;
    const double C9456 = -C27990;
    const double C1543 = C1343 * C240;
    const double C1537 = C1343 * C235;
    const double C1604 = C1343 * C297;
    const double C1666 = C1343 * C351;
    const double C20725 = C1343 * C1096;
    const double C20719 = C1343 * C1092;
    const double C20787 = C1343 * C1134;
    const double C20850 = C1343 * C1169;
    const double C26811 = C26808 - C26804;
    const double C26807 = C26713 * C26801;
    const double C3453 = C3370 * C3063;
    const double C12728 = C3370 * C3572;
    const double C6430 = C6413 * C100;
    const double C6426 = C6413 * C91;
    const double C6422 = C6413 * C99;
    const double C6418 = C6413 * C90;
    const double C6494 = C6413 * C146;
    const double C6490 = C6413 * C145;
    const double C6556 = C6413 * C191;
    const double C6552 = C6413 * C190;
    const double C7994 = C6413 * C585;
    const double C7990 = C6413 * C581;
    const double C8066 = C6413 * C633;
    const double C8138 = C6413 * C675;
    const double C8634 = C6413 * C586;
    const double C8630 = C6413 * C582;
    const double C8710 = C6413 * C634;
    const double C8780 = C6413 * C676;
    const double C17524 = C6413 * C1353;
    const double C17520 = C6413 * C1348;
    const double C17584 = C6413 * C1410;
    const double C17638 = C6413 * C1466;
    const double C6424 = C6414 * C954;
    const double C6420 = C6414 * C959;
    const double C6416 = C6414 * C955;
    const double C6496 = C6414 * C1004;
    const double C6492 = C6414 * C1005;
    const double C6558 = C6414 * C1048;
    const double C6554 = C6414 * C1049;
    const double C8636 = C6414 * C2492;
    const double C8632 = C6414 * C2486;
    const double C8708 = C6414 * C2552;
    const double C8782 = C6414 * C2608;
    const double C17526 = C6414 * C2488;
    const double C17522 = C6414 * C2484;
    const double C17640 = C6414 * C2610;
    const double C18500 = C18483 * C100;
    const double C18496 = C18483 * C91;
    const double C18492 = C18483 * C99;
    const double C18488 = C18483 * C90;
    const double C18564 = C18483 * C146;
    const double C18560 = C18483 * C145;
    const double C18626 = C18483 * C191;
    const double C18622 = C18483 * C190;
    const double C20382 = C18483 * C1353;
    const double C20378 = C18483 * C1348;
    const double C20374 = C18483 * C586;
    const double C20370 = C18483 * C582;
    const double C20450 = C18483 * C1410;
    const double C20446 = C18483 * C634;
    const double C20510 = C18483 * C1466;
    const double C20506 = C18483 * C676;
    const double C22446 = C18483 * C585;
    const double C22442 = C18483 * C581;
    const double C22518 = C18483 * C633;
    const double C22590 = C18483 * C675;
    const double C18494 = C18484 * C954;
    const double C18490 = C18484 * C959;
    const double C18486 = C18484 * C955;
    const double C18566 = C18484 * C1004;
    const double C18562 = C18484 * C1005;
    const double C18628 = C18484 * C1048;
    const double C18624 = C18484 * C1049;
    const double C20384 = C18484 * C2488;
    const double C20380 = C18484 * C2484;
    const double C20376 = C18484 * C2492;
    const double C20372 = C18484 * C2486;
    const double C20444 = C18484 * C2552;
    const double C20512 = C18484 * C2610;
    const double C20508 = C18484 * C2608;
    const double C429 = C418 + C419;
    const double C428 = C416 + C417;
    const double C482 = C474 + C475;
    const double C536 = C528 + C529;
    const double C2307 = C2296 + C2297;
    const double C2306 = C2294 + C2295;
    const double C2370 = C2366 + C2367;
    const double C2430 = C2425 + C2426;
    const double C27994 = C27980 / C26625;
    const double C6431 = C27974 * C412;
    const double C6427 = C27974 * C407;
    const double C6423 = C27974 * C411;
    const double C6419 = C27974 * C406;
    const double C6495 = C27974 * C469;
    const double C6491 = C27974 * C468;
    const double C6557 = C27974 * C523;
    const double C6553 = C27974 * C522;
    const double C7995 = C27974 * C839;
    const double C7991 = C27974 * C835;
    const double C8067 = C27974 * C876;
    const double C8635 = C27974 * C840;
    const double C8631 = C27974 * C836;
    const double C8711 = C27974 * C875;
    const double C8781 = C27974 * C916;
    const double C17525 = C27974 * C1726;
    const double C17521 = C27974 * C1723;
    const double C17585 = C27974 * C1791;
    const double C3368 =
        (((0 - (C26713 * C26714) / C26621) * ae) / C26621 - (0 * be) / C26630) /
            C26626 +
        ((C26713 * (((C27816 - (C26713 * 2 * C26716) / C26621) * ae) / C26621 -
                    C26714 / C26630) +
          C27974) *
         ae) /
            C26621 +
        (0 * ae) / C26621 - C26716 / C26625;
    const double C3387 = C2998 * C1213;
    const double C3381 = C2998 * C1209;
    const double C3452 = C2998 * C1251;
    const double C12727 = C2998 * C2838;
    const double C12721 = C2998 * C2834;
    const double C12790 = C2998 * C2892;
    const double C3386 = C3369 * C959;
    const double C3380 = C3369 * C955;
    const double C3451 = C3369 * C1005;
    const double C3513 = C3369 * C1049;
    const double C12726 = C3369 * C2492;
    const double C12720 = C3369 * C2486;
    const double C12789 = C3369 * C2552;
    const double C12849 = C3369 * C2608;
    const double C27995 = C27982 / C26621;
    const double C26011 = C23835 * C3896;
    const double C18181 = -C27993;
    const double C3389 = C2997 * C411;
    const double C3383 = C2997 * C406;
    const double C3450 = C2997 * C468;
    const double C3512 = C2997 * C522;
    const double C12725 = C2997 * C840;
    const double C12719 = C2997 * C836;
    const double C12792 = C2997 * C875;
    const double C12848 = C2997 * C916;
    const double C97 = (2 * (C26839 * C26854 + C26846 * ae) +
                        C26839 * (C26854 + C26839 * C26873 + C26862 * ae) +
                        (C26846 + C26856 * C26847) * ae) /
                       C26621;
    const double C588 =
        (C26915 * (C26854 + C26839 * C26873 + C26862 * ae)) / C26621;
    const double C962 =
        (C26945 * (C26854 + C26839 * C26873 + C26862 * ae)) / C26621;
    const double C1352 =
        (C26839 * C26854 + C26846 * ae + C26873 * C27005) / C26621;
    const double C2493 = (C26945 * C26915 * C26873) / C26621;
    const double C3004 =
        (C26839 * C26854 + C26846 * ae + C26873 * C27072) / C26621;
    const double C2132 = (2 * (C26915 * C26980 + C26846 * ae) +
                          C26915 * (C26980 + C26915 * C27197 + C27194 * ae) +
                          (C26846 + C26856 * C27005) * ae) /
                         C26621;
    const double C2667 =
        (C26945 * (C26980 + C26915 * C27197 + C27194 * ae)) / C26621;
    const double C3736 =
        (C26915 * C26980 + C26846 * ae + C27197 * C27072) / C26621;
    const double C4460 = (2 * (C26945 * C27035 + C26846 * ae) +
                          C26945 * (C27035 + C26945 * C27330 + C27327 * ae) +
                          (C26846 + C26856 * C27072) * ae) /
                         C26621;
    const double C1607 = C1524 * C1411;
    const double C1799 = C404 * C1411;
    const double C1533 = C1345 * C1526;
    const double C13617 = C13459 * C1526;
    const double C7846 = C4776 * C2551;
    const double C8068 = C6414 * C2551;
    const double C15194 = C9612 * C2551;
    const double C22520 = C18484 * C2551;
    const double C7918 = C4776 * C2607;
    const double C8140 = C6414 * C2607;
    const double C15266 = C9612 * C2607;
    const double C22592 = C18484 * C2607;
    const double C7767 = C27854 * C2666;
    const double C15115 = C27854 * C2666;
    const double C7989 = C27880 * C2833;
    const double C22441 = C27880 * C2833;
    const double C3313 = C233 * C3119;
    const double C3515 = C3370 * C3119;
    const double C3379 = C2999 * C3372;
    const double C24141 = C23835 * C3372;
    const double C1532 = C1524 * C1349;
    const double C1734 = C404 * C1349;
    const double C7766 = C4776 * C2485;
    const double C7988 = C6414 * C2485;
    const double C15114 = C9612 * C2485;
    const double C22440 = C18484 * C2485;
    const double C3185 = C233 * C3001;
    const double C3378 = C3370 * C3001;
    const double C101 =
        (-2 * (C26839 * C26853 + C26846 * ce)) / C26660 -
        (C26839 * (C26839 * C26872 + C26853 + C26862 * ce)) / C26660 -
        ((C26846 + C26856 * C26847) * ce) / C26660;
    const double C584 =
        -(C26915 * (C26839 * C26872 + C26853 + C26862 * ce)) / C26660;
    const double C958 =
        -(C26945 * (C26839 * C26872 + C26853 + C26862 * ce)) / C26660;
    const double C1354 =
        -(C26872 * C27005 + C26839 * C26853 + C26846 * ce) / C26660;
    const double C2491 = -(C26945 * C26915 * C26872) / C26660;
    const double C3006 =
        -(C26872 * C27072 + C26839 * C26853 + C26846 * ce) / C26660;
    const double C2890 =
        C26945 *
            ((-(C26915 * C27041 * ce) / C26660) / C26621 - C27065 / C26840 +
             C26915 * ((-(C26915 * C27068) / C26660) / C26621 - C27048)) -
        (ae * (C26915 * C27196 + C26921 + C27194 * ce)) / C26840;
    const double C3947 =
        (-(C26915 * C27065) / C26660) / C26621 - (C27035 * ce) / C26840 -
        (ae * C26945 * C27196) / C26840 +
        C26945 * (C26945 * ((-(C26915 * C27068) / C26660) / C26621 - C27048) -
                  (ae * C27196) / C26840);
    const double C2000 =
        (-2 * (C26915 * C26921 + C26846 * ce)) / C26660 -
        (C26915 * (C26915 * C27196 + C26921 + C27194 * ce)) / C26660 -
        ((C26846 + C26856 * C27005) * ce) / C26660;
    const double C2550 =
        -(C26945 * (C26915 * C27196 + C26921 + C27194 * ce)) / C26660;
    const double C3628 =
        -(C27196 * C27072 + C26915 * C26921 + C26846 * ce) / C26660;
    const double C4200 =
        (-2 * (C26945 * C26951 + C26846 * ce)) / C26660 -
        (C26945 * (C26945 * C27329 + C26951 + C27327 * ce)) / C26660 -
        ((C26846 + C26856 * C27072) * ce) / C26660;
    const double C107 =
        2 * ((-(C26854 * ce) / C26660) / C26621 - (ae * C26853) / C26840 -
             (C26839 * C26871) / C26840) -
        (ae * (C26839 * C26872 + C26853 + C26862 * ce)) / C26840 -
        ((C26854 + C26839 * C26873 + C26862 * ae) * ce) / C26840 +
        C26839 *
            ((-(ae * C26872) / C26660) / C26621 - C26871 / C26840 -
             (C26873 * ce) / C26840 +
             C26839 *
                 ((-(C26867 * ce) / C26660) / C26621 - (ae * C26866) / C26840 -
                  (C26839 *
                   (C26857 * C26858 + C26847 * bs[5] * std::pow(C26843, 5)) *
                   C26848) /
                      C26840));
    const double C593 = (-(C26915 * C26854 * ce) / C26660) / C26621 -
                        (ae * C26915 * C26853) / C26840 -
                        (C26839 * C26915 * C26871) / C26840;
    const double C967 = (-(C26945 * C26854 * ce) / C26660) / C26621 -
                        (ae * C26945 * C26853) / C26840 -
                        (C26839 * C26945 * C26871) / C26840;
    const double C1357 =
        (-(C26871 * C27005) / C26660) / C26621 -
        ((C26846 + C26847 * C26844 * C26850) * C26848) / C26840;
    const double C2498 = (-(C26945 * C26915 * C26871) / C26660) / C26621;
    const double C3009 =
        (-(C26871 * C27072) / C26660) / C26621 -
        ((C26846 + C26847 * C26844 * C26850) * C26848) / C26840;
    const double C299 =
        (-2 * C26839 * C27010) / C26840 +
        C26839 * ((-((C26877 + C27005 * C26878 * C26879) * C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27010 / C26840);
    const double C758 = (-(C26839 * C26980 * ce) / C26660) / C26621 -
                        (ae * C26839 * C26921) / C26840 -
                        (C26915 * C26839 * C27010) / C26840;
    const double C1133 = (-(C26945 * C26839 * C27010) / C26660) / C26621;
    const double C1599 =
        (-(ae * (C26915 * C26921 + C26846 * ce)) / C26660) / C26621 -
        ((C26846 + C27005 * C26844 * C26850) * C26848) / C26840 -
        ((C26915 * C26980 + C26846 * ae) * ce) / C26840 +
        C26915 * ((-(C26980 * ce) / C26660) / C26621 - (ae * C26921) / C26840 -
                  (C26915 * C27010) / C26840);
    const double C2726 = (-(C26945 * C26980 * ce) / C26660) / C26621 -
                         (ae * C26945 * C26921) / C26840 -
                         (C26915 * C26945 * C27010) / C26840;
    const double C3242 =
        (-(C27010 * C27072) / C26660) / C26621 -
        ((C26846 + C27005 * C26844 * C26850) * C26848) / C26840;
    const double C524 =
        (-2 * C26839 * C27077) / C26840 +
        C26839 * ((-((C26877 + C27072 * C26878 * C26879) * C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27077 / C26840);
    const double C915 = (-(C26915 * C26839 * C27077) / C26660) / C26621;
    const double C1288 = (-(C26839 * C27035 * ce) / C26660) / C26621 -
                         (ae * C26839 * C26951) / C26840 -
                         (C26945 * C26839 * C27077) / C26840;
    const double C1854 =
        (-(C27077 * C27005) / C26660) / C26621 -
        ((C26846 + C27072 * C26844 * C26850) * C26848) / C26840;
    const double C2943 = (-(C26915 * C27035 * ce) / C26660) / C26621 -
                         (ae * C26915 * C26951) / C26840 -
                         (C26945 * C26915 * C27077) / C26840;
    const double C3507 =
        (-(ae * (C26945 * C26951 + C26846 * ce)) / C26660) / C26621 -
        ((C26846 + C27072 * C26844 * C26850) * C26848) / C26840 -
        ((C26945 * C27035 + C26846 * ae) * ce) / C26840 +
        C26945 * ((-(C27035 * ce) / C26660) / C26621 - (ae * C26951) / C26840 -
                  (C26945 * C27077) / C26840);
    const double C12851 = C3370 * C3682;
    const double C13244 = C9612 * C3682;
    const double C26454 = C4776 * C3682;
    const double C12723 = C2999 * C3894;
    const double C26005 = C23835 * C3894;
    const double C12722 = C3370 * C3570;
    const double C13112 = C9612 * C3570;
    const double C26338 = C4776 * C3570;
    const double C312 = C306 + C307;
    const double C483 = C477 + C478;
    const double C366 = C360 + C361;
    const double C537 = C531 + C532;
    const double C260 = C251 + C252;
    const double C259 = C249 + C250;
    const double C261 = C253 + C254;
    const double C6252 = C6248 + C6249;
    const double C3189 = C3181 + C3182;
    const double C4284 = C4274 + C4275;
    const double C21790 = C21786 + C21787;
    const double C431 = C422 + C423;
    const double C430 = C420 + C421;
    const double C432 = C424 + C425;
    const double C4980 = C4976 + C4977;
    const double C1738 = C1730 + C1731;
    const double C2308 = C2300 + C2301;
    const double C11468 = C11464 + C11465;
    const double C26906 = C26839 * C26903;
    const double C27288 = C26915 * C26903;
    const double C1921 =
        (2 * C26915 * C26873 + C26915 * (C26873 + C26903 * C27005)) / C26621;
    const double C2489 = (C26945 * (C26873 + C26903 * C27005)) / C26621;
    const double C4055 =
        (2 * C26945 * C26873 + C26945 * (C26873 + C26903 * C27072)) / C26621;
    const double C11658 =
        C26945 * ((-2 * C26915 * C26963) / C26840 +
                  C26915 * ((-(std::pow(C26837, 6) * bs[6] * C26952 * C27005) /
                             C26660) /
                                C26621 -
                            C26963 / C26840)) -
        ((2 * C27290 + C26915 * C27352) * ce) / C26840;
    const double C12500 =
        (-(C26963 * C27005) / C26660) / C26621 - C26956 / C26840 -
        (C26945 * C27352 * ce) / C26840 +
        C26945 * (C26945 * ((-(std::pow(C26837, 6) * bs[6] * C26952 * C27005) /
                             C26660) /
                                C26621 -
                            C26963 / C26840) -
                  (C27352 * ce) / C26840);
    const double C11199 = (3 * (C26854 + C26867 * C27005) +
                           C26915 * (2 * C27290 + C26915 * C27352)) /
                          C26621;
    const double C11585 = (C26945 * (2 * C27290 + C26915 * C27352)) / C26621;
    const double C12373 = (C26854 + C26867 * C27005 + C27352 * C27072) / C26621;
    const double C21659 = (3 * (C26854 + C26867 * C27072) +
                           C26945 * (2 * C27455 + C26945 * C27459)) /
                          C26621;
    const double C26905 = C26839 * C26902;
    const double C27298 = C26915 * C26902;
    const double C1919 = (-2 * C26915 * C26872) / C26660 -
                         (C26915 * (C26902 * C27005 + C26872)) / C26660;
    const double C2487 = -(C26945 * (C26902 * C27005 + C26872)) / C26660;
    const double C4053 = (-2 * C26945 * C26872) / C26660 -
                         (C26945 * (C26902 * C27072 + C26872)) / C26660;
    const double C11694 =
        2 * ((-(C26915 * C27410) / C26660) / C26621 -
             (ae * C26945 * C26866) / C26840) -
        (ae * C26945 * C27361) / C26840 +
        C26915 *
            ((-(ae * C26945 * C26915 * C26891) / C26660) / C26621 -
             C27410 / C26840 +
             C26915 *
                 ((-(C26915 * C26945 * std::pow(C26837, 6) * bs[6] * C26981) /
                   C26660) /
                      C26621 -
                  (ae * C26945 * C26891) / C26840));
    const double C11800 =
        (((-2 * C27300) / C26660 - (C26915 * C27361) / C26660) * ae) / C26621 +
        C26945 * ((-2 * C26915 * C27047) / C26840 +
                  C26915 * ((-(std::pow(C26837, 6) * bs[6] * C27036 * C27005) /
                             C26660) /
                                C26621 -
                            C27047 / C26840));
    const double C12716 =
        (-(C27047 * C27005) / C26660) / C26621 - C27040 / C26840 -
        (ae * C26945 * C27361) / C26840 +
        C26945 * (C26945 * ((-(std::pow(C26837, 6) * bs[6] * C27036 * C27005) /
                             C26660) /
                                C26621 -
                            C27047 / C26840) -
                  (ae * C27361) / C26840);
    const double C11198 =
        (-3 * (C26866 * C27005 + C26853)) / C26660 +
        C26915 * ((-2 * C27300) / C26660 - (C26915 * C27361) / C26660);
    const double C11584 =
        C26945 * ((-2 * C27300) / C26660 - (C26915 * C27361) / C26660);
    const double C12372 =
        -(C27361 * C27072 + C26866 * C27005 + C26853) / C26660;
    const double C21658 =
        (-3 * (C26866 * C27072 + C26853)) / C26660 +
        C26945 * ((-2 * C27470) / C26660 - (C26945 * C27474) / C26660);
    const double C26904 = C26839 * C26901;
    const double C27084 = C26915 * C26901;
    const double C27121 = C26945 * C26901;
    const double C1358 =
        (-((C26854 + C26867 * C27005) * ce) / C26660) / C26621 -
        (ae * (C26866 * C27005 + C26853)) / C26840 +
        C26839 * ((-(C26901 * C27005) / C26660) / C26621 - C26871 / C26840);
    const double C1359 =
        (-(C26901 * C27005) / C26660) / C26621 - C26871 / C26840 -
        (ae * (C26902 * C27005 + C26872)) / C26840 -
        ((C26873 + C26903 * C27005) * ce) / C26840 +
        C26839 *
            ((-((C26867 + C26894 * C27005) * ce) / C26660) / C26621 -
             (ae * (C26891 * C27005 + C26866)) / C26840 +
             C26839 *
                 ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C26901 / C26840));
    const double C1924 =
        (-2 * C26915 * C26871) / C26840 +
        C26915 * ((-(C26901 * C27005) / C26660) / C26621 - C26871 / C26840);
    const double C2495 =
        (-(C26945 * (C26867 + C26894 * C27005) * ce) / C26660) / C26621 -
        (ae * C26945 * (C26891 * C27005 + C26866)) / C26840 +
        C26839 * C26945 *
            ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                C26848 * C27005) /
              C26660) /
                 C26621 -
             C26901 / C26840);
    const double C2496 =
        C26945 * ((-(C26901 * C27005) / C26660) / C26621 - C26871 / C26840);
    const double C3010 =
        (-((C26854 + C26867 * C27072) * ce) / C26660) / C26621 -
        (ae * (C26866 * C27072 + C26853)) / C26840 +
        C26839 * ((-(C26901 * C27072) / C26660) / C26621 - C26871 / C26840);
    const double C3011 =
        (-(C26901 * C27072) / C26660) / C26621 - C26871 / C26840 -
        (ae * (C26902 * C27072 + C26872)) / C26840 -
        ((C26873 + C26903 * C27072) * ce) / C26840 +
        C26839 *
            ((-((C26867 + C26894 * C27072) * ce) / C26660) / C26621 -
             (ae * (C26891 * C27072 + C26866)) / C26840 +
             C26839 *
                 ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C26901 / C26840));
    const double C4058 =
        (-2 * C26945 * C26871) / C26840 +
        C26945 * ((-(C26901 * C27072) / C26660) / C26621 - C26871 / C26840);
    const double C12374 =
        (-(C26901 * C27005) / C26660) / C26621 - C26871 / C26840 +
        ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) * C26848 *
            C27005) /
          C26660) /
             C26621 -
         C26901 / C26840) *
            C27072;
    const double C1249 =
        (((-2 * C26929) / C26660 - (C26839 * C26939) / C26660) * ae) / C26621 +
        C26945 * ((-2 * C26839 * C27068) / C26840 +
                  C26839 * ((-(std::pow(C26837, 6) * bs[6] * C27062 * C26847) /
                             C26660) /
                                C26621 -
                            C27068 / C26840));
    const double C3447 =
        (-(C27068 * C26847) / C26660) / C26621 - C27065 / C26840 -
        (ae * C26945 * C26939) / C26840 +
        C26945 * (C26945 * ((-(std::pow(C26837, 6) * bs[6] * C27062 * C26847) /
                             C26660) /
                                C26621 -
                            C27068 / C26840) -
                  (ae * C26939) / C26840);
    const double C148 =
        (-3 * (C26927 * C26847 + C26921)) / C26660 +
        C26839 * ((-2 * C26929) / C26660 - (C26839 * C26939) / C26660);
    const double C631 =
        C26915 * ((-2 * C26929) / C26660 - (C26839 * C26939) / C26660) -
        ((2 * C26862 + C26839 * C26893) * ce) / C26660;
    const double C1003 =
        C26945 * ((-2 * C26929) / C26660 - (C26839 * C26939) / C26660);
    const double C1412 = -(C26915 * (C26915 * C26939 + C26893 * ce) +
                           C26927 * C26847 + C26921 + C26915 * C26893 * ce) /
                         C26660;
    const double C3064 = -(C26939 * C27072 + C26927 * C26847 + C26921) / C26660;
    const double C5683 = -(C26945 * (C26915 * C26939 + C26893 * ce)) / C26660;
    const double C27205 = C27203 + C26892;
    const double C27380 = C26915 * C27374;
    const double C12975 = (-2 * C26945 * C27196) / C26660 -
                          (C26945 * (C27374 * C27072 + C27196)) / C26660;
    const double C21703 =
        (-3 * (C26927 * C27072 + C26921)) / C26660 +
        C26945 * ((-2 * C27479) / C26660 - (C26945 * C27483) / C26660);
    const double C795 =
        (((-2 * C26959) / C26660 - (C26839 * C26969) / C26660) * ae) / C26621 +
        C26915 * ((-2 * C26839 * C27027) / C26840 +
                  C26839 * ((-(std::pow(C26837, 6) * bs[6] * C27021 * C26847) /
                             C26660) /
                                C26621 -
                            C27027 / C26840));
    const double C1663 =
        (-(C27027 * C26847) / C26660) / C26621 - C27024 / C26840 -
        (ae * C26915 * C26969) / C26840 +
        C26915 * (C26915 * ((-(std::pow(C26837, 6) * bs[6] * C27021 * C26847) /
                             C26660) /
                                C26621 -
                            C27027 / C26840) -
                  (ae * C26969) / C26840);
    const double C193 =
        (-3 * (C26957 * C26847 + C26951)) / C26660 +
        C26839 * ((-2 * C26959) / C26660 - (C26839 * C26969) / C26660);
    const double C673 =
        C26915 * ((-2 * C26959) / C26660 - (C26839 * C26969) / C26660);
    const double C1047 =
        C26945 * ((-2 * C26959) / C26660 - (C26839 * C26969) / C26660) -
        ((2 * C26862 + C26839 * C26893) * ce) / C26660;
    const double C1468 = -(C26969 * C27005 + C26957 * C26847 + C26951) / C26660;
    const double C3120 = -(C26945 * (C26945 * C26969 + C26893 * ce) +
                           C26957 * C26847 + C26951 + C26945 * C26893 * ce) /
                         C26660;
    const double C5735 =
        -(C26945 * C26915 * C26969 + C26915 * C26893 * ce) / C26660;
    const double C3681 = -(C26945 * (C26945 * C27304 + C27201 * ce) +
                           C26915 * C26959 + C26945 * C27201 * ce) /
                         C26660;
    const double C27335 = C27332 + C26892;
    const double C11304 =
        (-3 * (C26957 * C27005 + C26951)) / C26660 +
        C26915 * ((-2 * C27307) / C26660 - (C26915 * C27392) / C26660);
    const double C11657 =
        C26945 * ((-2 * C27307) / C26660 - (C26915 * C27392) / C26660) -
        ((2 * C27194 + C26915 * C27376) * ce) / C26660;
    const double C12499 = -(C26945 * (C26945 * C27392 + C27376 * ce) +
                            C26957 * C27005 + C26951 + C26945 * C27376 * ce) /
                          C26660;
    const double C27450 = C27448 + C27375;
    const double C27502 = C26945 * C27496;
    const double C1172 =
        C26945 * ((-2 * C26839 * C27027) / C26840 +
                  C26839 * ((-(std::pow(C26837, 6) * bs[6] * C27021 * C26847) /
                             C26660) /
                                C26621 -
                            C27027 / C26840)) -
        ((2 * C26988 + C26839 * C26998) * ce) / C26840;
    const double C3307 =
        (-(C27027 * C26847) / C26660) / C26621 - C27024 / C26840 -
        (C26945 * C26998 * ce) / C26840 +
        C26945 * (C26945 * ((-(std::pow(C26837, 6) * bs[6] * C27021 * C26847) /
                             C26660) /
                                C26621 -
                            C27027 / C26840) -
                  (C26998 * ce) / C26840);
    const double C5890 =
        C26915 * (C26945 * ((-(std::pow(C26837, 6) * bs[6] * C27021 * C26847) /
                             C26660) /
                                C26621 -
                            C27027 / C26840) -
                  (C26998 * ce) / C26840) -
        (ae * (C26945 * C26969 + C26893 * ce)) / C26840;
    const double C238 = (3 * (C26980 + C26986 * C26847) +
                         C26839 * (2 * C26988 + C26839 * C26998)) /
                        C26621;
    const double C715 = (C26915 * (2 * C26988 + C26839 * C26998) +
                         (2 * C26862 + C26839 * C26893) * ae) /
                        C26621;
    const double C1089 = (C26945 * (2 * C26988 + C26839 * C26998)) / C26621;
    const double C1527 =
        (C26980 + C26986 * C26847 + C26915 * (C26915 * C26998 + C26893 * ae) +
         C26915 * C26893 * ae) /
        C26621;
    const double C3176 = (C26980 + C26986 * C26847 + C26998 * C27072) / C26621;
    const double C5787 = (C26945 * (C26915 * C26998 + C26893 * ae)) / C26621;
    const double C27206 = C27204 + C26895;
    const double C27381 = C26915 * C27377;
    const double C13099 =
        (2 * C26945 * C27197 + C26945 * (C27197 + C27377 * C27072)) / C26621;
    const double C21783 = (3 * (C26980 + C26986 * C27072) +
                           C26945 * (2 * C27466 + C26945 * C27468)) /
                          C26621;
    const double C27199 = C26839 * C27015;
    const double C27367 = C26915 * C27015;
    const double C27412 = C26945 * C27015;
    const double C300 =
        3 * ((-(C27015 * C26847) / C26660) / C26621 - C27010 / C26840) +
        C26839 *
            ((-2 * C26839 * C27015) / C26840 +
             C26839 *
                 ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27015 / C26840));
    const double C759 =
        (-((C26980 + C26986 * C26847) * ce) / C26660) / C26621 -
        (ae * (C26927 * C26847 + C26921)) / C26840 +
        C26915 * ((-(C27015 * C26847) / C26660) / C26621 - C27010 / C26840);
    const double C760 =
        (((-2 * C26929) / C26660 - (C26839 * C26939) / C26660) * ae) / C26621 -
        ((2 * C26988 + C26839 * C26998) * ce) / C26840 +
        C26915 *
            ((-2 * C26839 * C27015) / C26840 +
             C26839 *
                 ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27015 / C26840));
    const double C1131 =
        C26945 *
        ((-2 * C26839 * C27015) / C26840 +
         C26839 * ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                      C26848 * C26847) /
                    C26660) /
                       C26621 -
                   C27015 / C26840));
    const double C1132 =
        C26945 * ((-(C27015 * C26847) / C26660) / C26621 - C27010 / C26840);
    const double C1600 =
        (-(ae * (C26915 * C26929 + C26862 * ce)) / C26660) / C26621 -
        (C26839 * C27010) / C26840 -
        ((C26915 * C26988 + C26862 * ae) * ce) / C26840 +
        C26915 * ((-(C26988 * ce) / C26660) / C26621 - (ae * C26929) / C26840 -
                  (C26915 * C26839 * C27015) / C26840);
    const double C1601 =
        (-(C27015 * C26847) / C26660) / C26621 - C27010 / C26840 -
        (ae * (C26915 * C26939 + C26893 * ce)) / C26840 -
        ((C26915 * C26998 + C26893 * ae) * ce) / C26840 +
        C26915 *
            ((-(C26998 * ce) / C26660) / C26621 - (ae * C26939) / C26840 +
             C26915 *
                 ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27015 / C26840));
    const double C2185 =
        2 * ((-(C26980 * ce) / C26660) / C26621 - (ae * C26921) / C26840 -
             (C26915 * C27010) / C26840) -
        (ae * (C26915 * C27196 + C26921 + C27194 * ce)) / C26840 -
        ((C26980 + C26915 * C27197 + C27194 * ae) * ce) / C26840 +
        C26915 * ((-(ae * C27196) / C26660) / C26621 - C27010 / C26840 -
                  (C27197 * ce) / C26840 +
                  C26915 * ((-C26990 / C26660) / C26621 - C26934 -
                            (C26915 * C27015) / C26840));
    const double C2725 = (-(ae * C26945 * C27196) / C26660) / C26621 -
                         (C26945 * C27010) / C26840 -
                         (C26945 * C27197 * ce) / C26840 +
                         C26915 * ((-(C26945 * C26986 * ce) / C26660) / C26621 -
                                   (ae * C26945 * C26927) / C26840 -
                                   (C26915 * C26945 * C27015) / C26840);
    const double C3244 =
        (-(C27015 * C26847) / C26660) / C26621 - C27010 / C26840 +
        ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) * C26848 *
            C26847) /
          C26660) /
             C26621 -
         C27015 / C26840) *
            C27072;
    const double C3789 =
        (-((C26980 + C26986 * C27072) * ce) / C26660) / C26621 -
        (ae * (C26927 * C27072 + C26921)) / C26840 +
        C26915 * ((-(C27015 * C27072) / C26660) / C26621 - C27010 / C26840);
    const double C4340 =
        (-2 * C26945 * C27010) / C26840 +
        C26945 * ((-(C27015 * C27072) / C26660) / C26621 - C27010 / C26840);
    const double C5839 =
        (-(C26945 * C26998 * ce) / C26660) / C26621 -
        (ae * C26945 * C26939) / C26840 +
        C26915 * C26945 *
            ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                C26848 * C26847) /
              C26660) /
                 C26621 -
             C27015 / C26840);
    const double C12613 =
        (-(C27015 * C27072) / C26660) / C26621 - C27010 / C26840 -
        (ae * (C27374 * C27072 + C27196)) / C26840 -
        ((C27197 + C27377 * C27072) * ce) / C26840 +
        C26915 *
            ((-((C26986 + C26994 * C27072) * ce) / C26660) / C26621 -
             (ae * (C26935 * C27072 + C26927)) / C26840 +
             C26915 *
                 ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27015 / C26840));
    const double C878 =
        C26915 * ((-2 * C26839 * C27068) / C26840 +
                  C26839 * ((-(std::pow(C26837, 6) * bs[6] * C27062 * C26847) /
                             C26660) /
                                C26621 -
                            C27068 / C26840)) -
        ((2 * C27043 + C26839 * C27053) * ce) / C26840;
    const double C1793 =
        (-(C27068 * C26847) / C26660) / C26621 - C27065 / C26840 -
        (C26915 * C27053 * ce) / C26840 +
        C26915 * (C26915 * ((-(std::pow(C26837, 6) * bs[6] * C27062 * C26847) /
                             C26660) /
                                C26621 -
                            C27068 / C26840) -
                  (C27053 * ce) / C26840);
    const double C5993 =
        C26945 * (C26915 * ((-(std::pow(C26837, 6) * bs[6] * C27062 * C26847) /
                             C26660) /
                                C26621 -
                            C27068 / C26840) -
                  (C27053 * ce) / C26840) -
        (ae * (C26915 * C26939 + C26893 * ce)) / C26840;
    const double C409 = (3 * (C27035 + C27041 * C26847) +
                         C26839 * (2 * C27043 + C26839 * C27053)) /
                        C26621;
    const double C833 = (C26915 * (2 * C27043 + C26839 * C27053)) / C26621;
    const double C1207 = (C26945 * (2 * C27043 + C26839 * C27053) +
                          (2 * C26862 + C26839 * C26893) * ae) /
                         C26621;
    const double C1725 = (C27035 + C27041 * C26847 + C27053 * C27005) / C26621;
    const double C3373 =
        (C27035 + C27041 * C26847 + C26945 * (C26945 * C27053 + C26893 * ae) +
         C26945 * C26893 * ae) /
        C26621;
    const double C5941 =
        (C26945 * C26915 * C27053 + C26915 * C26893 * ae) / C26621;
    const double C3893 =
        (C26915 * C27043 + C26945 * (C26945 * C27305 + C27201 * ae) +
         C26945 * C27201 * ae) /
        C26621;
    const double C27336 = C27334 + C26895;
    const double C11461 = (3 * (C27035 + C27041 * C27005) +
                           C26915 * (2 * C27308 + C26915 * C27401)) /
                          C26621;
    const double C11799 = (C26945 * (2 * C27308 + C26915 * C27401) +
                           (2 * C27194 + C26915 * C27376) * ae) /
                          C26621;
    const double C12715 =
        (C27035 + C27041 * C27005 + C26945 * (C26945 * C27401 + C27376 * ae) +
         C26945 * C27376 * ae) /
        C26621;
    const double C27451 = C27449 + C27378;
    const double C27503 = C26945 * C27499;
    const double C27218 = C26839 * C27082;
    const double C27444 = C26915 * C27082;
    const double C27489 = C26945 * C27082;
    const double C525 =
        3 * ((-(C27082 * C26847) / C26660) / C26621 - C27077 / C26840) +
        C26839 *
            ((-2 * C26839 * C27082) / C26840 +
             C26839 *
                 ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27082 / C26840));
    const double C913 =
        C26915 *
        ((-2 * C26839 * C27082) / C26840 +
         C26839 * ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                      C26848 * C26847) /
                    C26660) /
                       C26621 -
                   C27082 / C26840));
    const double C914 =
        C26915 * ((-(C27082 * C26847) / C26660) / C26621 - C27077 / C26840);
    const double C1289 =
        (-((C27035 + C27041 * C26847) * ce) / C26660) / C26621 -
        (ae * (C26957 * C26847 + C26951)) / C26840 +
        C26945 * ((-(C27082 * C26847) / C26660) / C26621 - C27077 / C26840);
    const double C1290 =
        (((-2 * C26959) / C26660 - (C26839 * C26969) / C26660) * ae) / C26621 -
        ((2 * C27043 + C26839 * C27053) * ce) / C26840 +
        C26945 *
            ((-2 * C26839 * C27082) / C26840 +
             C26839 *
                 ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27082 / C26840));
    const double C1855 = (-(C26839 * C27082 * C27005) / C26660) / C26621 -
                         (C26839 * C27077) / C26840;
    const double C1856 =
        (-(C27082 * C26847) / C26660) / C26621 - C27077 / C26840 +
        ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) * C26848 *
            C26847) /
          C26660) /
             C26621 -
         C27082 / C26840) *
            C27005;
    const double C2422 =
        (-2 * C26915 * C27077) / C26840 +
        C26915 * ((-(C27082 * C27005) / C26660) / C26621 - C27077 / C26840);
    const double C2945 =
        (-((C27035 + C27041 * C27005) * ce) / C26660) / C26621 -
        (ae * (C26957 * C27005 + C26951)) / C26840 +
        C26945 * ((-(C27082 * C27005) / C26660) / C26621 - C27077 / C26840);
    const double C3509 =
        (-(C27082 * C26847) / C26660) / C26621 - C27077 / C26840 -
        (ae * (C26945 * C26969 + C26893 * ce)) / C26840 -
        ((C26945 * C27053 + C26893 * ae) * ce) / C26840 +
        C26945 *
            ((-(C27053 * ce) / C26660) / C26621 - (ae * C26969) / C26840 +
             C26945 *
                 ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C26847) /
                   C26660) /
                      C26621 -
                  C27082 / C26840));
    const double C4000 =
        (-(ae * (C26945 * C27307 + C27194 * ce)) / C26660) / C26621 -
        (C26915 * C27077) / C26840 -
        ((C26945 * C27308 + C27194 * ae) * ce) / C26840 +
        C26945 * ((-(C27308 * ce) / C26660) / C26621 - (ae * C27307) / C26840 -
                  (C26945 * C26915 * C27082) / C26840);
    const double C4565 =
        2 * ((-(C27035 * ce) / C26660) / C26621 - (ae * C26951) / C26840 -
             (C26945 * C27077) / C26840) -
        (ae * (C26945 * C27329 + C26951 + C27327 * ce)) / C26840 -
        ((C27035 + C26945 * C27330 + C27327 * ae) * ce) / C26840 +
        C26945 * ((-(ae * C27329) / C26660) / C26621 - C27077 / C26840 -
                  (C27330 * ce) / C26840 +
                  C26945 * ((-C27045 / C26660) / C26621 - C26964 -
                            (C26945 * C27082) / C26840));
    const double C6044 =
        (-(C26915 * C27053 * ce) / C26660) / C26621 -
        (ae * C26915 * C26969) / C26840 +
        C26945 * C26915 *
            ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                C26848 * C26847) /
              C26660) /
                 C26621 -
             C27082 / C26840);
    const double C11543 =
        3 * ((-(C27082 * C27005) / C26660) / C26621 - C27077 / C26840) +
        C26915 *
            ((-2 * C26915 * C27082) / C26840 +
             C26915 *
                 ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C27082 / C26840));
    const double C11870 =
        (((-2 * C27307) / C26660 - (C26915 * C27392) / C26660) * ae) / C26621 -
        ((2 * C27308 + C26915 * C27401) * ce) / C26840 +
        C26945 *
            ((-2 * C26915 * C27082) / C26840 +
             C26915 *
                 ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C27082 / C26840));
    const double C12845 =
        (-(C27082 * C27005) / C26660) / C26621 - C27077 / C26840 -
        (ae * (C26945 * C27392 + C27376 * ce)) / C26840 -
        ((C26945 * C27401 + C27376 * ae) * ce) / C26840 +
        C26945 *
            ((-(C27401 * ce) / C26660) / C26621 - (ae * C27392) / C26840 +
             C26945 *
                 ((-((C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C27082 / C26840));
    const double C26896 = C26889 / C26621;
    const double C17974 = C13459 * C2777;
    const double C20846 = C1345 * C2777;
    const double C13245 = C27854 * C3842;
    const double C26455 = C27854 * C3842;
    const double C21870 = C27805 * C4401;
    const double C27379 = C27372 / C26621;
    const double C11508 = C27816 * C2363;
    const double C27501 = C27494 / C26621;
    const double C26940 = -C26938;
    const double C27353 = -C27351;
    const double C3190 = C3183 + C3184;
    const double C4285 = C4276 + C4277;
    const double C26999 = -C26997;
    const double C27362 = -C27360;
    const double C21791 = C21788 + C21789;
    const double C26970 = -C26968;
    const double C27460 = -C27458;
    const double C367 = C363 + C364;
    const double C3315 = C3310 + C3311;
    const double C4409 = C4406 + C4407;
    const double C7919 = C27854 * C2780;
    const double C15267 = C27854 * C2780;
    const double C3314 = C27805 * C3306;
    const double C27393 = -C27391;
    const double C27416 = -C27415;
    const double C6362 = C6360 + C6361;
    const double C1739 = C1732 + C1733;
    const double C2309 = C2302 + C2303;
    const double C27054 = -C27052;
    const double C27475 = -C27473;
    const double C11469 = C11466 + C11467;
    const double C484 = C480 + C481;
    const double C1801 = C1796 + C1797;
    const double C2371 = C2368 + C2369;
    const double C8069 = C27880 * C2891;
    const double C22521 = C27880 * C2891;
    const double C3454 = C2999 * C3446;
    const double C24213 = C23835 * C3446;
    const double C27402 = -C27400;
    const double C27484 = -C27482;
    const double C5035 = C5033 + C5034;
    const double C13962 = C26640 * C1349;
    const double C13958 = C26640 * C585;
    const double C13954 = C26640 * C581;
    const double C14030 = C26640 * C1411;
    const double C14026 = C26640 * C633;
    const double C14094 = C26640 * C1467;
    const double C14090 = C26640 * C675;
    const double C15536 = C26640 * C2485;
    const double C15612 = C26640 * C2551;
    const double C15686 = C26640 * C2607;
    const double C16158 = C26640 * C959;
    const double C16154 = C26640 * C955;
    const double C16232 = C26640 * C1005;
    const double C16302 = C26640 * C1049;
    const double C24778 = C26640 * C3001;
    const double C24840 = C26640 * C3063;
    const double C24894 = C26640 * C3119;
    const double C86 =
        (C26640 / C26626 - (0 * be) / C26621) / C26626 + (0 * ae) / C26621;
    const double C4624 = C26640 / C26626 - (0 * be) / C26621;
    const double C9460 = C26640 / C26626 + (0 * ae) / C26621;
    const double C26642 = C26639 / C26621;
    const double C1936 = C1347 * C1349;
    const double C1932 = C1347 * C585;
    const double C1928 = C1347 * C581;
    const double C2008 = C1347 * C1411;
    const double C2004 = C1347 * C633;
    const double C2076 = C1347 * C1467;
    const double C2072 = C1347 * C675;
    const double C4070 = C1347 * C3001;
    const double C4066 = C1347 * C959;
    const double C4062 = C1347 * C955;
    const double C4144 = C1347 * C3063;
    const double C4140 = C1347 * C1005;
    const double C4208 = C1347 * C3119;
    const double C4204 = C1347 * C1049;
    const double C8212 = C1347 * C2485;
    const double C8288 = C1347 * C2551;
    const double C8362 = C1347 * C2607;
    const double C11212 = C10886 * C1920;
    const double C11210 = C10886 * C1918;
    const double C11208 = C10886 * C1353;
    const double C11206 = C10886 * C1348;
    const double C11204 = C10886 * C586;
    const double C11202 = C10886 * C582;
    const double C11264 = C10886 * C1410;
    const double C11262 = C10886 * C634;
    const double C11314 = C10886 * C2066;
    const double C11311 = C10886 * C1466;
    const double C11308 = C10886 * C676;
    const double C12382 = C10886 * C3572;
    const double C12380 = C10886 * C3570;
    const double C12378 = C10886 * C2492;
    const double C12376 = C10886 * C2486;
    const double C12444 = C10886 * C2552;
    const double C12506 = C10886 * C3682;
    const double C12503 = C10886 * C2608;
    const double C12916 = C10886 * C3005;
    const double C12914 = C10886 * C3000;
    const double C12912 = C10886 * C960;
    const double C12910 = C10886 * C956;
    const double C12984 = C10886 * C3062;
    const double C12979 = C10886 * C1006;
    const double C13046 = C10886 * C3118;
    const double C13044 = C10886 * C1050;
    const double C17206 = C10886 * C2488;
    const double C17204 = C10886 * C2484;
    const double C17316 = C10886 * C2610;
    const double C21664 = C10886 * C4054;
    const double C21662 = C10886 * C4052;
    const double C21707 = C10886 * C4134;
    const double C27996 = C27958 - C27983;
    const double C27997 = C27962 - C27985;
    const double C1935 = C1341 * C1351;
    const double C1931 = C1341 * C594;
    const double C1927 = C1341 * C590;
    const double C2011 = C1341 * C1413;
    const double C2007 = C1341 * C638;
    const double C2075 = C1341 * C1469;
    const double C2071 = C1341 * C680;
    const double C4069 = C1341 * C3003;
    const double C4065 = C1341 * C968;
    const double C4061 = C1341 * C964;
    const double C4143 = C1341 * C3065;
    const double C4139 = C1341 * C1010;
    const double C4211 = C1341 * C3121;
    const double C4207 = C1341 * C1054;
    const double C8211 = C1341 * C2494;
    const double C8291 = C1341 * C2556;
    const double C8361 = C1341 * C2612;
    const double C10992 =
        (C26765 / C26626 - (0 * be) / C26621) / C26626 + (0 * ae) / C26621;
    const double C13614 = C26765 / C26626 - (0 * be) / C26621;
    const double C26764 = C26761 / C26621;
    const double C1673 = C1669 + C1670;
    const double C20735 = C20728 + C20729;
    const double C4798 = C4786 + C4787;
    const double C4796 = C4782 + C4783;
    const double C4794 = C4778 + C4779;
    const double C4925 = C4920 + C4921;
    const double C4923 = C4916 + C4917;
    const double C9061 = C9056 + C9057;
    const double C9059 = C9052 + C9053;
    const double C9204 = C9200 + C9201;
    const double C26347 = C26342 + C26343;
    const double C9634 = C9622 + C9623;
    const double C9632 = C9618 + C9619;
    const double C9630 = C9614 + C9615;
    const double C9761 = C9756 + C9757;
    const double C9759 = C9752 + C9753;
    const double C13125 = C13116 + C13117;
    const double C13121 = C13108 + C13109;
    const double C13119 = C13104 + C13105;
    const double C13248 = C13240 + C13241;
    const double C302 = C257 * C143;
    const double C356 = C257 * C188;
    const double C314 = C311 * C28010;
    const double C368 = C365 * C28009;
    const double C4287 = C4283 * C28008;
    const double C4286 = C4282 * C578;
    const double C4342 = C4282 * C143;
    const double C4350 = C4348 * C28010;
    const double C28001 = C27970 - C27991;
    const double C4801 = C4792 + C4793;
    const double C4799 = C4788 + C4789;
    const double C4797 = C4784 + C4785;
    const double C4795 = C4780 + C4781;
    const double C4862 = C4856 + C4857;
    const double C4860 = C4852 + C4853;
    const double C4924 = C4918 + C4919;
    const double C4922 = C4914 + C4915;
    const double C7777 = C7772 + C7773;
    const double C7775 = C7768 + C7769;
    const double C7920 = C7916 + C7917;
    const double C9060 = C9054 + C9055;
    const double C9058 = C9050 + C9051;
    const double C9132 = C9128 + C9129;
    const double C9205 = C9202 + C9203;
    const double C26346 = C26340 + C26341;
    const double C26344 = C26336 + C26337;
    const double C26459 = C26456 + C26457;
    const double C1542 = C1522 * C99;
    const double C1536 = C1522 * C90;
    const double C1603 = C1522 * C145;
    const double C1665 = C1522 * C190;
    const double C20724 = C1522 * C960;
    const double C20718 = C1522 * C956;
    const double C20786 = C1522 * C1006;
    const double C20849 = C1522 * C1050;
    const double C1548 = C1540 + C1541;
    const double C1545 = C1534 + C1535;
    const double C1672 = C1667 + C1668;
    const double C20734 = C20726 + C20727;
    const double C20731 = C20720 + C20721;
    const double C20852 = C20847 + C20848;
    const double C28002 = C27977 - C27992;
    const double C9629 = C9456 * C241;
    const double C9625 = C9456 * C236;
    const double C9621 = C9456 * C240;
    const double C9617 = C9456 * C235;
    const double C9693 = C9456 * C298;
    const double C9689 = C9456 * C297;
    const double C9755 = C9456 * C352;
    const double C9751 = C9456 * C351;
    const double C13115 = C9456 * C3177;
    const double C13111 = C9456 * C3174;
    const double C13107 = C9456 * C1096;
    const double C13103 = C9456 * C1092;
    const double C13178 = C9456 * C1134;
    const double C13247 = C9456 * C3305;
    const double C13243 = C9456 * C1169;
    const double C15121 = C9456 * C1095;
    const double C15117 = C9456 * C1091;
    const double C15265 = C9456 * C1170;
    const double C21248 =
        (C26811 / C26626 - (0 * be) / C26621) / C26626 + (0 * ae) / C26621;
    const double C24138 = C26811 / C26626 - (0 * be) / C26621;
    const double C26810 = C26807 / C26621;
    const double C12735 = C12728 + C12729;
    const double C6436 = C6424 + C6425;
    const double C6434 = C6420 + C6421;
    const double C6432 = C6416 + C6417;
    const double C6501 = C6496 + C6497;
    const double C6499 = C6492 + C6493;
    const double C8641 = C8636 + C8637;
    const double C8639 = C8632 + C8633;
    const double C8712 = C8708 + C8709;
    const double C17531 = C17526 + C17527;
    const double C17529 = C17522 + C17523;
    const double C18506 = C18494 + C18495;
    const double C18504 = C18490 + C18491;
    const double C18502 = C18486 + C18487;
    const double C18571 = C18566 + C18567;
    const double C18569 = C18562 + C18563;
    const double C20393 = C20384 + C20385;
    const double C20391 = C20380 + C20381;
    const double C20389 = C20376 + C20377;
    const double C20387 = C20372 + C20373;
    const double C20452 = C20444 + C20445;
    const double C473 = C428 * C143;
    const double C527 = C428 * C188;
    const double C485 = C482 * C28010;
    const double C539 = C536 * C28009;
    const double C2311 = C2307 * C28008;
    const double C2310 = C2306 * C578;
    const double C2424 = C2306 * C188;
    const double C2432 = C2430 * C28009;
    const double C28003 = C27972 - C27994;
    const double C6439 = C6430 + C6431;
    const double C6437 = C6426 + C6427;
    const double C6435 = C6422 + C6423;
    const double C6433 = C6418 + C6419;
    const double C6500 = C6494 + C6495;
    const double C6498 = C6490 + C6491;
    const double C6562 = C6556 + C6557;
    const double C6560 = C6552 + C6553;
    const double C7999 = C7994 + C7995;
    const double C7997 = C7990 + C7991;
    const double C8070 = C8066 + C8067;
    const double C8640 = C8634 + C8635;
    const double C8638 = C8630 + C8631;
    const double C8713 = C8710 + C8711;
    const double C8784 = C8780 + C8781;
    const double C17530 = C17524 + C17525;
    const double C17528 = C17520 + C17521;
    const double C17587 = C17584 + C17585;
    const double C3388 = C3368 * C99;
    const double C3382 = C3368 * C90;
    const double C3449 = C3368 * C145;
    const double C3511 = C3368 * C190;
    const double C12724 = C3368 * C586;
    const double C12718 = C3368 * C582;
    const double C12791 = C3368 * C634;
    const double C12847 = C3368 * C676;
    const double C3394 = C3386 + C3387;
    const double C3391 = C3380 + C3381;
    const double C3456 = C3451 + C3452;
    const double C12734 = C12726 + C12727;
    const double C12731 = C12720 + C12721;
    const double C12794 = C12789 + C12790;
    const double C28004 = C27981 - C27995;
    const double C18501 = C18181 * C412;
    const double C18497 = C18181 * C407;
    const double C18493 = C18181 * C411;
    const double C18489 = C18181 * C406;
    const double C18565 = C18181 * C469;
    const double C18561 = C18181 * C468;
    const double C18627 = C18181 * C523;
    const double C18623 = C18181 * C522;
    const double C20383 = C18181 * C1726;
    const double C20379 = C18181 * C1723;
    const double C20375 = C18181 * C840;
    const double C20371 = C18181 * C836;
    const double C20451 = C18181 * C1791;
    const double C20447 = C18181 * C875;
    const double C20507 = C18181 * C916;
    const double C22447 = C18181 * C839;
    const double C22443 = C18181 * C835;
    const double C22519 = C18181 * C876;
    const double C5147 = C4619 * C588;
    const double C9967 = C9455 * C588;
    const double C7069 = C4619 * C962;
    const double C19139 = C9455 * C962;
    const double C1937 = C27768 * C1352;
    const double C13963 = C27768 * C1352;
    const double C8213 = C27768 * C2493;
    const double C15537 = C27768 * C2493;
    const double C4071 = C27768 * C3004;
    const double C24779 = C27768 * C3004;
    const double C17851 = C13459 * C2667;
    const double C20723 = C1345 * C2667;
    const double C13113 = C27854 * C3736;
    const double C26339 = C27854 * C3736;
    const double C1802 = C1799 + C1800;
    const double C1544 = C1532 + C1533;
    const double C1740 = C1734 + C1735;
    const double C7774 = C7766 + C7767;
    const double C7996 = C7988 + C7989;
    const double C15122 = C15114 + C15115;
    const double C22448 = C22440 + C22441;
    const double C3191 = C3185 + C3186;
    const double C3390 = C3378 + C3379;
    const double C255 = C233 * C101;
    const double C426 = C404 * C101;
    const double C4790 = C4776 * C584;
    const double C4978 = C404 * C584;
    const double C9626 = C9612 * C584;
    const double C6250 = C233 * C958;
    const double C6428 = C6414 * C958;
    const double C18498 = C18484 * C958;
    const double C1538 = C1524 * C1354;
    const double C1736 = C404 * C1354;
    const double C1940 = C1347 * C1354;
    const double C13966 = C26640 * C1354;
    const double C7770 = C4776 * C2491;
    const double C7992 = C6414 * C2491;
    const double C8216 = C1347 * C2491;
    const double C15118 = C9612 * C2491;
    const double C15540 = C26640 * C2491;
    const double C22444 = C18484 * C2491;
    const double C3187 = C233 * C3006;
    const double C3384 = C3370 * C3006;
    const double C4074 = C1347 * C3006;
    const double C24782 = C26640 * C3006;
    const double C17583 = C27880 * C2890;
    const double C20449 = C27880 * C2890;
    const double C12788 = C2999 * C3947;
    const double C26069 = C23835 * C3947;
    const double C11266 = C10886 * C2000;
    const double C11507 = C404 * C2000;
    const double C17262 = C10886 * C2550;
    const double C17582 = C6414 * C2550;
    const double C20448 = C18484 * C2550;
    const double C20790 = C1524 * C2550;
    const double C12446 = C10886 * C3628;
    const double C12787 = C3370 * C3628;
    const double C13183 = C9612 * C3628;
    const double C26400 = C4776 * C3628;
    const double C21747 = C10886 * C4200;
    const double C21869 = C233 * C4200;
    const double C1933 = C27768 * C593;
    const double C9971 = C9454 * C593;
    const double C13959 = C27768 * C593;
    const double C4067 = C27768 * C967;
    const double C16159 = C27768 * C967;
    const double C19143 = C9454 * C967;
    const double C1939 = C1341 * C1357;
    const double C11209 = C27763 * C1357;
    const double C13965 = C27960 * C1357;
    const double C8215 = C1341 * C2498;
    const double C12379 = C27763 * C2498;
    const double C15539 = C27960 * C2498;
    const double C4073 = C1341 * C3009;
    const double C12917 = C27763 * C3009;
    const double C24781 = C27960 * C3009;
    const double C310 = C27805 * C299;
    const double C1606 = C1344 * C758;
    const double C4855 = C27854 * C758;
    const double C9691 = C27854 * C758;
    const double C3248 = C27805 * C1133;
    const double C7845 = C27973 * C1133;
    const double C15193 = C9456 * C1133;
    const double C9131 = C27854 * C2726;
    const double C13180 = C27854 * C2726;
    const double C20789 = C1344 * C2726;
    const double C4347 = C27805 * C3242;
    const double C13182 = C9456 * C3242;
    const double C26399 = C27973 * C3242;
    const double C535 = C27816 * C524;
    const double C1860 = C27816 * C915;
    const double C8139 = C27974 * C915;
    const double C22591 = C18181 * C915;
    const double C3514 = C2998 * C1288;
    const double C6555 = C27880 * C1288;
    const double C18625 = C27880 * C1288;
    const double C2429 = C27816 * C1854;
    const double C17639 = C27974 * C1854;
    const double C20511 = C18181 * C1854;
    const double C8783 = C27880 * C2943;
    const double C12850 = C2998 * C2943;
    const double C20509 = C27880 * C2943;
    const double C12732 = C12722 + C12723;
    const double C315 = C312 * C28010;
    const double C486 = C483 * C28010;
    const double C369 = C366 * C28009;
    const double C540 = C537 * C28009;
    const double C305 = C259 * C143;
    const double C359 = C259 * C188;
    const double C308 = C261 * C143;
    const double C362 = C261 * C188;
    const double C6304 = C6252 * C143;
    const double C6359 = C6252 * C188;
    const double C7250 = C6252 * C578;
    const double C3246 = C3189 * C143;
    const double C3309 = C3189 * C188;
    const double C4278 = C3189 * C578;
    const double C4288 = C4284 * C578;
    const double C4345 = C4284 * C143;
    const double C21792 = C21790 * C578;
    const double C21829 = C21790 * C143;
    const double C476 = C430 * C143;
    const double C530 = C430 * C188;
    const double C479 = C432 * C143;
    const double C533 = C432 * C188;
    const double C5032 = C4980 * C143;
    const double C5087 = C4980 * C188;
    const double C5478 = C4980 * C578;
    const double C1795 = C1738 * C143;
    const double C1858 = C1738 * C188;
    const double C2298 = C1738 * C578;
    const double C2312 = C2308 * C578;
    const double C2427 = C2308 * C188;
    const double C11470 = C11468 * C578;
    const double C11545 = C11468 * C188;
    const double C26909 = C26867 + C26906;
    const double C3573 = (C26915 * C26873 + C27288 * C27072) / C26621;
    const double C26908 = C26905 + C26866;
    const double C3571 = -(C27298 * C27072 + C26915 * C26872) / C26660;
    const double C26907 = C26904 / C26840;
    const double C592 =
        (-(ae * C26915 * C26872) / C26660) / C26621 -
        (C26915 * C26871) / C26840 - (C26915 * C26873 * ce) / C26840 +
        C26839 * ((-(C26915 * C26867 * ce) / C26660) / C26621 -
                  (ae * C26915 * C26866) / C26840 - (C26839 * C27084) / C26840);
    const double C1923 =
        (((-2 * C26915 * C26866) / C26660 -
          (C26915 * (C26891 * C27005 + C26866)) / C26660) *
         ae) /
            C26621 -
        ((2 * C26915 * C26867 + C26915 * (C26867 + C26894 * C27005)) * ce) /
            C26840 +
        C26839 *
            ((-2 * C27084) / C26840 +
             C26915 *
                 ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C26901 / C26840));
    const double C2497 = (-(C26945 * C26915 * C26867 * ce) / C26660) / C26621 -
                         (ae * C26945 * C26915 * C26866) / C26840 -
                         (C26839 * C26945 * C27084) / C26840;
    const double C3575 =
        (-((C26915 * C26867 + C26915 * C26894 * C27072) * ce) / C26660) /
            C26621 -
        (ae * (C26915 * C26891 * C27072 + C26915 * C26866)) / C26840 +
        C26839 * ((-(C26915 *
                     (C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27084 / C26840);
    const double C3576 =
        (-(C27084 * C27072) / C26660) / C26621 - (C26915 * C26871) / C26840;
    const double C5632 =
        (-(ae * C26945 * C27298) / C26660) / C26621 -
        (C26945 * C27084) / C26840 - (C26945 * C27288 * ce) / C26840 +
        C26839 * ((-(C26945 * C26915 * C26894 * ce) / C26660) / C26621 -
                  (ae * C26945 * C26915 * C26891) / C26840 -
                  (C26839 * C26945 * C26915 *
                   (C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840);
    const double C11200 =
        3 * ((-(C26901 * C27005) / C26660) / C26621 - C26871 / C26840) +
        C26915 *
            ((-2 * C27084) / C26840 +
             C26915 *
                 ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C26901 / C26840));
    const double C11586 =
        C26945 *
        ((-2 * C27084) / C26840 +
         C26915 * ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                      C26848 * C27005) /
                    C26660) /
                       C26621 -
                   C26901 / C26840));
    const double C12908 =
        (-2 * C26945 * C27084) / C26840 +
        C26945 * ((-(C26915 *
                     (C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27084 / C26840);
    const double C966 =
        (-(ae * C26945 * C26872) / C26660) / C26621 -
        (C26945 * C26871) / C26840 - (C26945 * C26873 * ce) / C26840 +
        C26839 * ((-(C26945 * C26867 * ce) / C26660) / C26621 -
                  (ae * C26945 * C26866) / C26840 - (C26839 * C27121) / C26840);
    const double C4057 =
        (((-2 * C26945 * C26866) / C26660 -
          (C26945 * (C26891 * C27072 + C26866)) / C26660) *
         ae) /
            C26621 -
        ((2 * C26945 * C26867 + C26945 * (C26867 + C26894 * C27072)) * ce) /
            C26840 +
        C26839 *
            ((-2 * C27121) / C26840 +
             C26945 *
                 ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C26901 / C26840));
    const double C21660 =
        3 * ((-(C26901 * C27072) / C26660) / C26621 - C26871 / C26840) +
        C26945 *
            ((-2 * C27121) / C26840 +
             C26945 *
                 ((-((C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C26901 / C26840));
    const double C1941 = C27768 * C1358;
    const double C13967 = C27768 * C1358;
    const double C11213 = C27763 * C1924;
    const double C17207 = C27763 * C2496;
    const double C4075 = C27768 * C3010;
    const double C24783 = C27768 * C3010;
    const double C21665 = C27763 * C4058;
    const double C2889 =
        C26945 *
            ((-(C26915 * C27216 * ce) / C26660) / C26621 - C27215 / C26840 +
             C26915 *
                 ((-(C26915 * C26839 * std::pow(C26837, 6) * bs[6] * C27062) /
                   C26660) /
                      C26621 -
                  (C27216 * ce) / C26840)) -
        (ae * (C26915 * C27205 + C26929 + C27201 * ce)) / C26840;
    const double C3948 =
        (-(C26915 * C27215) / C26660) / C26621 - (C27043 * ce) / C26840 -
        (ae * C26945 * C27205) / C26840 +
        C26945 *
            (C26945 *
                 ((-(C26915 * C26839 * std::pow(C26837, 6) * bs[6] * C27062) /
                   C26660) /
                      C26621 -
                  (C27216 * ce) / C26840) -
             (ae * C27205) / C26840);
    const double C1999 =
        (-2 * (C26915 * C26929 + C26862 * ce)) / C26660 -
        (C26915 * (C26915 * C27205 + C26929 + C27201 * ce)) / C26660 -
        ((C26862 + C26885 * C27005) * ce) / C26660;
    const double C2549 =
        -(C26945 * (C26915 * C27205 + C26929 + C27201 * ce)) / C26660;
    const double C3627 =
        -(C27205 * C27072 + C26915 * C26929 + C26862 * ce) / C26660;
    const double C27383 = C27380 + C26927;
    const double C4199 =
        (-2 * (C26945 * C26959 + C26862 * ce)) / C26660 -
        (C26945 * (C26945 * C27335 + C26959 + C27333 * ce)) / C26660 -
        ((C26862 + C26885 * C27072) * ce) / C26660;
    const double C13041 =
        (-2 * (C26945 * C27307 + C27194 * ce)) / C26660 -
        (C26945 * (C26945 * C27450 + C27307 + C27446 * ce)) / C26660 -
        ((C27194 + C27369 * C27072) * ce) / C26660;
    const double C27505 = C27502 + C26957;
    const double C2131 = (2 * (C26915 * C26988 + C26862 * ae) +
                          C26915 * (C26988 + C26915 * C27206 + C27201 * ae) +
                          (C26862 + C26885 * C27005) * ae) /
                         C26621;
    const double C2665 =
        (C26945 * (C26988 + C26915 * C27206 + C27201 * ae)) / C26621;
    const double C3735 =
        (C26915 * C26988 + C26862 * ae + C27206 * C27072) / C26621;
    const double C27384 = C26986 + C27381;
    const double C2186 =
        2 * ((-(C26988 * ce) / C26660) / C26621 - (ae * C26929) / C26840 -
             (C26915 * C27199) / C26840) -
        (ae * (C26915 * C27205 + C26929 + C27201 * ce)) / C26840 -
        ((C26988 + C26915 * C27206 + C27201 * ae) * ce) / C26840 +
        C26915 *
            ((-(ae * C27205) / C26660) / C26621 - C27199 / C26840 -
             (C27206 * ce) / C26840 +
             C26915 *
                 ((-(C27202 * ce) / C26660) / C26621 - (ae * C27200) / C26840 -
                  (C26915 * C26839 *
                   (C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840));
    const double C2723 =
        (-(ae * C26945 * C27205) / C26660) / C26621 -
        (C26945 * C27199) / C26840 - (C26945 * C27206 * ce) / C26840 +
        C26915 * ((-(C26945 * C27202 * ce) / C26660) / C26621 -
                  (ae * C26945 * C27200) / C26840 -
                  (C26915 * C26945 * C26839 *
                   (C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840);
    const double C2724 = (-(C26945 * C26988 * ce) / C26660) / C26621 -
                         (ae * C26945 * C26929) / C26840 -
                         (C26915 * C26945 * C27199) / C26840;
    const double C3243 =
        (-(C27199 * C27072) / C26660) / C26621 - (C26839 * C27010) / C26840;
    const double C3790 =
        (-((C26988 + C27202 * C27072) * ce) / C26660) / C26621 -
        (ae * (C27200 * C27072 + C26929)) / C26840 +
        C26915 * ((-(C26839 *
                     (C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27199 / C26840);
    const double C4339 =
        (-2 * C26945 * C27199) / C26840 +
        C26945 * ((-(C26839 *
                     (C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27199 / C26840);
    const double C27373 = C27367 / C26840;
    const double C13175 =
        (((-2 * C26945 * C26927) / C26660 -
          (C26945 * (C26935 * C27072 + C26927)) / C26660) *
         ae) /
            C26621 -
        ((2 * C26945 * C26986 + C26945 * (C26986 + C26994 * C27072)) * ce) /
            C26840 +
        C26915 *
            ((-2 * C27412) / C26840 +
             C26945 *
                 ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27015 / C26840));
    const double C21827 =
        3 * ((-(C27015 * C27072) / C26660) / C26621 - C27010 / C26840) +
        C26945 *
            ((-2 * C27412) / C26840 +
             C26945 *
                 ((-((C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27072) /
                   C26660) /
                      C26621 -
                  C27015 / C26840));
    const double C4859 = C27854 * C759;
    const double C9695 = C27854 * C759;
    const double C6306 = C27805 * C1132;
    const double C1608 = C1345 * C1600;
    const double C13689 = C13459 * C1600;
    const double C17919 = C13459 * C2725;
    const double C20791 = C1345 * C2725;
    const double C13184 = C27854 * C3789;
    const double C26401 = C27854 * C3789;
    const double C21831 = C27805 * C4340;
    const double C4459 = (2 * (C26945 * C27043 + C26862 * ae) +
                          C26945 * (C27043 + C26945 * C27336 + C27333 * ae) +
                          (C26862 + C26885 * C27072) * ae) /
                         C26621;
    const double C13301 = (2 * (C26945 * C27308 + C27194 * ae) +
                           C26945 * (C27308 + C26945 * C27451 + C27446 * ae) +
                           (C27194 + C27369 * C27072) * ae) /
                          C26621;
    const double C27506 = C27041 + C27503;
    const double C2421 =
        (-2 * C26915 * C27218) / C26840 +
        C26915 * ((-(C26839 *
                     (C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C27218 / C26840);
    const double C2944 = (-(C26915 * C27043 * ce) / C26660) / C26621 -
                         (ae * C26915 * C26959) / C26840 -
                         (C26945 * C26915 * C27218) / C26840;
    const double C2946 =
        (-((C27043 + C27216 * C27005) * ce) / C26660) / C26621 -
        (ae * (C27209 * C27005 + C26959)) / C26840 +
        C26945 * ((-(C26839 *
                     (C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                     C26848 * C27005) /
                   C26660) /
                      C26621 -
                  C27218 / C26840);
    const double C3508 =
        (-(ae * (C26945 * C26959 + C26862 * ce)) / C26660) / C26621 -
        (C26839 * C27077) / C26840 -
        ((C26945 * C27043 + C26862 * ae) * ce) / C26840 +
        C26945 * ((-(C27043 * ce) / C26660) / C26621 - (ae * C26959) / C26840 -
                  (C26945 * C27218) / C26840);
    const double C3999 =
        (-(ae * (C26945 * C27304 + C27201 * ce)) / C26660) / C26621 -
        (C26915 * C27218) / C26840 -
        ((C26945 * C27305 + C27201 * ae) * ce) / C26840 +
        C26945 * ((-(C27305 * ce) / C26660) / C26621 - (ae * C27304) / C26840 -
                  (C26945 * C26915 * C26839 *
                   (C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840);
    const double C4566 =
        2 * ((-(C27043 * ce) / C26660) / C26621 - (ae * C26959) / C26840 -
             (C26945 * C27218) / C26840) -
        (ae * (C26945 * C27335 + C26959 + C27333 * ce)) / C26840 -
        ((C27043 + C26945 * C27336 + C27333 * ae) * ce) / C26840 +
        C26945 *
            ((-(ae * C27335) / C26660) / C26621 - C27218 / C26840 -
             (C27336 * ce) / C26840 +
             C26945 *
                 ((-(C27216 * ce) / C26660) / C26621 - (ae * C27209) / C26840 -
                  (C26945 * C26839 *
                   (C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840));
    const double C13404 =
        2 * ((-(C27308 * ce) / C26660) / C26621 - (ae * C27307) / C26840 -
             (C26945 * C27444) / C26840) -
        (ae * (C26945 * C27450 + C27307 + C27446 * ce)) / C26840 -
        ((C27308 + C26945 * C27451 + C27446 * ae) * ce) / C26840 +
        C26945 *
            ((-(ae * C27450) / C26660) / C26621 - C27444 / C26840 -
             (C27451 * ce) / C26840 +
             C26945 *
                 ((-(C27447 * ce) / C26660) / C26621 - (ae * C27445) / C26840 -
                  (C26945 * C26915 *
                   (C26878 * C26879 + C27072 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840));
    const double C27495 = C27489 / C26840;
    const double C5089 = C27816 * C914;
    const double C6559 = C27880 * C1289;
    const double C18629 = C27880 * C1289;
    const double C1863 = C27816 * C1855;
    const double C11547 = C27816 * C2422;
    const double C17641 = C27880 * C2945;
    const double C20513 = C27880 * C2945;
    const double C12852 = C2999 * C4000;
    const double C26132 = C23835 * C4000;
    const double C26900 = C26896 - C26881;
    const double C20851 = C20845 + C20846;
    const double C13250 = C13244 + C13245;
    const double C26458 = C26454 + C26455;
    const double C27382 = C27379 - C26934;
    const double C27504 = C27501 - C26964;
    const double C26941 = C26940 / C26621;
    const double C27354 = C27353 / C26621;
    const double C4279 = C3190 * C28008;
    const double C4289 = C4285 * C28008;
    const double C27000 = C26999 / C26621;
    const double C27363 = C27362 / C26621;
    const double C21793 = C21791 * C28008;
    const double C26971 = C26970 / C26621;
    const double C27461 = C27460 / C26621;
    const double C370 = C367 * C28009;
    const double C3317 = C3315 * C28009;
    const double C7921 = C7918 + C7919;
    const double C15269 = C15266 + C15267;
    const double C3316 = C3313 + C3314;
    const double C27394 = C27393 / C26621;
    const double C27417 = C27416 / C26621;
    const double C6363 = C6362 * C28009;
    const double C2299 = C1739 * C28008;
    const double C2313 = C2309 * C28008;
    const double C27055 = C27054 / C26621;
    const double C27476 = C27475 / C26621;
    const double C11471 = C11469 * C28008;
    const double C487 = C484 * C28010;
    const double C1803 = C1801 * C28010;
    const double C8071 = C8068 + C8069;
    const double C22523 = C22520 + C22521;
    const double C3457 = C3453 + C3454;
    const double C27403 = C27402 / C26621;
    const double C27485 = C27484 / C26621;
    const double C5036 = C5035 * C28010;
    const double C13969 = C13954 + C13955;
    const double C14034 = C14026 + C14027;
    const double C14097 = C14090 + C14091;
    const double C16161 = C16154 + C16155;
    const double C16235 = C16232 + C16233;
    const double C16306 = C16302 + C16303;
    const double C5152 = C4624 * C584;
    const double C5146 = C4624 * C580;
    const double C5210 = C4624 * C632;
    const double C5273 = C4624 * C674;
    const double C7074 = C4624 * C958;
    const double C7068 = C4624 * C954;
    const double C7136 = C4624 * C1004;
    const double C7191 = C4624 * C1048;
    const double C9972 = C9460 * C584;
    const double C9966 = C9460 * C580;
    const double C10030 = C9460 * C632;
    const double C10093 = C9460 * C674;
    const double C19144 = C9460 * C958;
    const double C19138 = C9460 * C954;
    const double C19206 = C9460 * C1004;
    const double C19261 = C9460 * C1048;
    const double C26644 = C27763 - C26642;
    const double C1943 = C1928 + C1929;
    const double C2012 = C2004 + C2005;
    const double C2079 = C2072 + C2073;
    const double C4077 = C4062 + C4063;
    const double C4147 = C4140 + C4141;
    const double C4212 = C4204 + C4205;
    const double C11218 = C11210 + C11211;
    const double C11216 = C11206 + C11207;
    const double C11215 = C11204 + C11205;
    const double C11214 = C11202 + C11203;
    const double C11269 = C11264 + C11265;
    const double C11268 = C11262 + C11263;
    const double C11318 = C11314 + C11315;
    const double C11317 = C11311 + C11312;
    const double C11316 = C11308 + C11309;
    const double C12386 = C12380 + C12381;
    const double C12384 = C12376 + C12377;
    const double C12448 = C12444 + C12445;
    const double C12509 = C12506 + C12507;
    const double C12508 = C12503 + C12504;
    const double C12920 = C12914 + C12915;
    const double C12919 = C12912 + C12913;
    const double C12918 = C12910 + C12911;
    const double C12989 = C12984 + C12985;
    const double C12988 = C12979 + C12980;
    const double C13049 = C13046 + C13047;
    const double C13048 = C13044 + C13045;
    const double C17208 = C17204 + C17205;
    const double C17318 = C17316 + C17317;
    const double C21666 = C21662 + C21663;
    const double C21709 = C21707 + C21708;
    const double C5149 = C27996 * C594;
    const double C5143 = C27996 * C590;
    const double C5215 = C27996 * C638;
    const double C5270 = C27996 * C680;
    const double C7071 = C27996 * C968;
    const double C7065 = C27996 * C964;
    const double C7133 = C27996 * C1010;
    const double C7196 = C27996 * C1054;
    const double C73 = (C27996 * C27758) / C26621 + (C27960 - C27984) / C26626;
    const double C5151 = C27997 * C593;
    const double C5145 = C27997 * C589;
    const double C5213 = C27997 * C637;
    const double C5272 = C27997 * C679;
    const double C7073 = C27997 * C967;
    const double C7067 = C27997 * C963;
    const double C7135 = C27997 * C1009;
    const double C7194 = C27997 * C1053;
    const double C74 =
        (C27997 * C27758) / C26621 + (2 * C27768 + C27996) / C26626;
    const double C75 = (C27758 * C27768) / C26630 + C27997 / C26626;
    const double C13622 = C13614 * C1354;
    const double C13616 = C13614 * C1349;
    const double C13688 = C13614 * C1411;
    const double C13747 = C13614 * C1467;
    const double C17856 = C13614 * C2488;
    const double C17850 = C13614 * C2484;
    const double C17918 = C13614 * C2550;
    const double C17973 = C13614 * C2610;
    const double C26767 = C27805 - C26764;
    const double C13627 = C28001 * C240;
    const double C13621 = C28001 * C235;
    const double C13685 = C28001 * C297;
    const double C13744 = C28001 * C351;
    const double C17853 = C28001 * C1096;
    const double C17847 = C28001 * C1092;
    const double C17915 = C28001 * C1134;
    const double C17978 = C28001 * C1169;
    const double C10882 =
        (C28001 * C27849) / C26621 + (C27973 - C27990) / C26626;
    const double C1549 = C1542 + C1543;
    const double C1546 = C1536 + C1537;
    const double C1609 = C1603 + C1604;
    const double C1671 = C1665 + C1666;
    const double C20733 = C20724 + C20725;
    const double C20730 = C20718 + C20719;
    const double C20792 = C20786 + C20787;
    const double C20853 = C20849 + C20850;
    const double C13625 = C28002 * C721;
    const double C13619 = C28002 * C717;
    const double C13687 = C28002 * C758;
    const double C13746 = C28002 * C797;
    const double C17855 = C28002 * C2672;
    const double C17849 = C28002 * C2668;
    const double C17917 = C28002 * C2726;
    const double C17976 = C28002 * C2778;
    const double C10883 =
        (C28002 * C27849) / C26621 + (2 * C27854 + C28001) / C26626;
    const double C10884 = (C27849 * C27854) / C26630 + C28002 / C26626;
    const double C9637 = C9628 + C9629;
    const double C9635 = C9624 + C9625;
    const double C9633 = C9620 + C9621;
    const double C9631 = C9616 + C9617;
    const double C9698 = C9692 + C9693;
    const double C9696 = C9688 + C9689;
    const double C9760 = C9754 + C9755;
    const double C9758 = C9750 + C9751;
    const double C13124 = C13114 + C13115;
    const double C13122 = C13110 + C13111;
    const double C13120 = C13106 + C13107;
    const double C13118 = C13102 + C13103;
    const double C13185 = C13177 + C13178;
    const double C13251 = C13246 + C13247;
    const double C13249 = C13242 + C13243;
    const double C15125 = C15120 + C15121;
    const double C15123 = C15116 + C15117;
    const double C15268 = C15264 + C15265;
    const double C24146 = C24138 * C3006;
    const double C24140 = C24138 * C3001;
    const double C24212 = C24138 * C3063;
    const double C24271 = C24138 * C3119;
    const double C26010 = C24138 * C3572;
    const double C26004 = C24138 * C3570;
    const double C26068 = C24138 * C3628;
    const double C26131 = C24138 * C3682;
    const double C26813 = C27816 - C26810;
    const double C24151 = C28003 * C411;
    const double C24145 = C28003 * C406;
    const double C24209 = C28003 * C468;
    const double C24268 = C28003 * C522;
    const double C26007 = C28003 * C840;
    const double C26001 = C28003 * C836;
    const double C26073 = C28003 * C875;
    const double C26128 = C28003 * C916;
    const double C21037 =
        (C28003 * C27875) / C26621 + (C27974 - C27993) / C26626;
    const double C3395 = C3388 + C3389;
    const double C3392 = C3382 + C3383;
    const double C3455 = C3449 + C3450;
    const double C3517 = C3511 + C3512;
    const double C12733 = C12724 + C12725;
    const double C12730 = C12718 + C12719;
    const double C12795 = C12791 + C12792;
    const double C12853 = C12847 + C12848;
    const double C24149 = C28004 * C1213;
    const double C24143 = C28004 * C1209;
    const double C24211 = C28004 * C1251;
    const double C24270 = C28004 * C1288;
    const double C26009 = C28004 * C2838;
    const double C26003 = C28004 * C2834;
    const double C26071 = C28004 * C2892;
    const double C26130 = C28004 * C2943;
    const double C21038 =
        (C28004 * C27875) / C26621 + (2 * C27880 + C28003) / C26626;
    const double C21039 = (C27875 * C27880) / C26630 + C28004 / C26626;
    const double C18509 = C18500 + C18501;
    const double C18507 = C18496 + C18497;
    const double C18505 = C18492 + C18493;
    const double C18503 = C18488 + C18489;
    const double C18570 = C18564 + C18565;
    const double C18568 = C18560 + C18561;
    const double C18632 = C18626 + C18627;
    const double C18630 = C18622 + C18623;
    const double C20392 = C20382 + C20383;
    const double C20390 = C20378 + C20379;
    const double C20388 = C20374 + C20375;
    const double C20386 = C20370 + C20371;
    const double C20455 = C20450 + C20451;
    const double C20453 = C20446 + C20447;
    const double C20514 = C20506 + C20507;
    const double C22451 = C22446 + C22447;
    const double C22449 = C22442 + C22443;
    const double C22522 = C22518 + C22519;
    const double C1947 = C1936 + C1937;
    const double C13973 = C13962 + C13963;
    const double C8219 = C8212 + C8213;
    const double C15543 = C15536 + C15537;
    const double C4081 = C4070 + C4071;
    const double C24785 = C24778 + C24779;
    const double C20732 = C20722 + C20723;
    const double C13123 = C13112 + C13113;
    const double C26345 = C26338 + C26339;
    const double C1804 = C1802 * C28010;
    const double C1798 = C1740 * C143;
    const double C1861 = C1740 * C188;
    const double C2304 = C1740 * C578;
    const double C3249 = C3191 * C143;
    const double C3312 = C3191 * C188;
    const double C4280 = C3191 * C578;
    const double C262 = C255 + C256;
    const double C433 = C426 + C427;
    const double C11270 = C11266 + C11267;
    const double C11509 = C11507 + C11508;
    const double C17264 = C17262 + C17263;
    const double C17586 = C17582 + C17583;
    const double C20454 = C20448 + C20449;
    const double C12449 = C12446 + C12447;
    const double C12793 = C12787 + C12788;
    const double C21749 = C21747 + C21748;
    const double C21871 = C21869 + C21870;
    const double C1945 = C1932 + C1933;
    const double C13971 = C13958 + C13959;
    const double C4079 = C4066 + C4067;
    const double C16163 = C16158 + C16159;
    const double C11217 = C11208 + C11209;
    const double C12385 = C12378 + C12379;
    const double C12921 = C12916 + C12917;
    const double C313 = C309 + C310;
    const double C1610 = C1605 + C1606;
    const double C4861 = C4854 + C4855;
    const double C9697 = C9690 + C9691;
    const double C3252 = C3247 + C3248;
    const double C7848 = C7844 + C7845;
    const double C15196 = C15192 + C15193;
    const double C9133 = C9130 + C9131;
    const double C13186 = C13179 + C13180;
    const double C20793 = C20788 + C20789;
    const double C4349 = C4346 + C4347;
    const double C13187 = C13181 + C13182;
    const double C26402 = C26398 + C26399;
    const double C538 = C534 + C535;
    const double C1864 = C1859 + C1860;
    const double C8142 = C8138 + C8139;
    const double C22594 = C22590 + C22591;
    const double C3518 = C3513 + C3514;
    const double C6561 = C6554 + C6555;
    const double C18631 = C18624 + C18625;
    const double C2431 = C2428 + C2429;
    const double C17642 = C17638 + C17639;
    const double C20516 = C20510 + C20511;
    const double C8785 = C8782 + C8783;
    const double C12854 = C12849 + C12850;
    const double C20515 = C20508 + C20509;
    const double C26912 = C26909 + C26895;
    const double C26911 = C26908 + C26892;
    const double C5153 = C4619 * C592;
    const double C9973 = C9455 * C592;
    const double C8217 = C27768 * C2497;
    const double C15541 = C27768 * C2497;
    const double C12383 = C27763 * C3576;
    const double C7075 = C4619 * C966;
    const double C19145 = C9455 * C966;
    const double C1949 = C1940 + C1941;
    const double C13975 = C13966 + C13967;
    const double C11219 = C11212 + C11213;
    const double C17209 = C17206 + C17207;
    const double C4083 = C4074 + C4075;
    const double C24787 = C24782 + C24783;
    const double C21667 = C21664 + C21665;
    const double C27386 = C27383 + C27375;
    const double C27508 = C27505 + C27497;
    const double C27387 = C27384 + C27378;
    const double C7847 = C27854 * C2724;
    const double C15195 = C27854 * C2724;
    const double C3251 = C27805 * C3243;
    const double C4863 = C4858 + C4859;
    const double C9699 = C9694 + C9695;
    const double C6307 = C6305 + C6306;
    const double C1611 = C1607 + C1608;
    const double C20794 = C20790 + C20791;
    const double C13188 = C13183 + C13184;
    const double C26403 = C26400 + C26401;
    const double C21832 = C21830 + C21831;
    const double C27509 = C27506 + C27500;
    const double C8141 = C27880 * C2944;
    const double C22593 = C27880 * C2944;
    const double C3516 = C2999 * C3508;
    const double C24272 = C23835 * C3508;
    const double C5090 = C5088 + C5089;
    const double C6563 = C6558 + C6559;
    const double C18633 = C18628 + C18629;
    const double C1865 = C1862 + C1863;
    const double C11548 = C11546 + C11547;
    const double C17643 = C17640 + C17641;
    const double C20517 = C20512 + C20513;
    const double C12855 = C12851 + C12852;
    const double C26910 = C26900 - C26907;
    const double C27385 = C27382 - C27373;
    const double C27507 = C27504 - C27495;
    const double C26942 = C26941 - C26934;
    const double C27355 = C27354 - C27349;
    const double C27001 = C27000 - C26993;
    const double C27364 = C27363 - C26881;
    const double C26972 = C26971 - C26964;
    const double C27462 = C27461 - C27349;
    const double C3318 = C3316 * C28009;
    const double C27395 = C27394 - C26964;
    const double C27418 = C27417 - C26993;
    const double C27056 = C27055 - C27048;
    const double C27477 = C27476 - C26881;
    const double C27404 = C27403 - C27048;
    const double C27486 = C27485 - C26934;
    const double C5156 = C5146 + C5147;
    const double C7078 = C7068 + C7069;
    const double C9976 = C9966 + C9967;
    const double C19148 = C19138 + C19139;
    const double C26645 = C26644 * ae;
    const double C1346 = (-C26622 / C26621) / C26626 - (C26644 * be) / C26621;
    const double C11224 = C11218 * C578;
    const double C11313 = C11218 * C188;
    const double C11222 = C11216 * C578;
    const double C11310 = C11216 * C188;
    const double C11221 = C11215 * C28008;
    const double C11220 = C11214 * C578;
    const double C11307 = C11214 * C188;
    const double C11321 = C11318 * C28009;
    const double C11320 = C11317 * C28009;
    const double C11319 = C11316 * C28009;
    const double C12390 = C12386 * C578;
    const double C12505 = C12386 * C188;
    const double C12986 = C12386 * C143;
    const double C12388 = C12384 * C578;
    const double C12502 = C12384 * C188;
    const double C12981 = C12384 * C143;
    const double C12982 = C12448 * C28010;
    const double C12511 = C12509 * C28009;
    const double C12510 = C12508 * C28009;
    const double C12924 = C12920 * C578;
    const double C12983 = C12920 * C143;
    const double C12923 = C12919 * C28008;
    const double C12922 = C12918 * C578;
    const double C12978 = C12918 * C143;
    const double C12991 = C12989 * C28010;
    const double C12990 = C12988 * C28010;
    const double C17210 = C17208 * C578;
    const double C17315 = C17208 * C188;
    const double C17744 = C17208 * C143;
    const double C17319 = C17318 * C28009;
    const double C21668 = C21666 * C578;
    const double C21706 = C21666 * C143;
    const double C21710 = C21709 * C28010;
    const double C13628 = C13616 + C13617;
    const double C13692 = C13688 + C13689;
    const double C13751 = C13747 + C13748;
    const double C17863 = C17856 + C17857;
    const double C17860 = C17850 + C17851;
    const double C17922 = C17918 + C17919;
    const double C17979 = C17973 + C17974;
    const double C26769 = C26767 * ae;
    const double C24152 = C24140 + C24141;
    const double C24216 = C24212 + C24213;
    const double C26017 = C26010 + C26011;
    const double C26014 = C26004 + C26005;
    const double C26074 = C26068 + C26069;
    const double C26135 = C26131 + C26132;
    const double C26815 = C26813 * ae;
    const double C17745 = C17264 * C28010;
    const double C12987 = C12449 * C28010;
    const double C11223 = C11217 * C28008;
    const double C12389 = C12385 * C28008;
    const double C12925 = C12921 * C28008;
    const double C316 = C313 * C28010;
    const double C3254 = C3252 * C28010;
    const double C4351 = C4349 * C28010;
    const double C541 = C538 * C28009;
    const double C1866 = C1864 * C28009;
    const double C2433 = C2431 * C28009;
    const double C5684 =
        C26945 *
        (C26915 * ((-(ae * C27200) / C26660) / C26621 - C26933 / C26840 +
                   C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) /
                              C26660) /
                                 C26621 -
                             (ae * C26935) / C26840)) -
         (C26912 * ce) / C26840);
    const double C5736 =
        C26945 * C26915 *
            ((-(ae * C27209) / C26660) / C26621 - C26963 / C26840 +
             C26839 *
                 ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) / C26660) /
                      C26621 -
                  (ae * C26965) / C26840)) -
        (C26915 * C26912 * ce) / C26840;
    const double C102 = (3 * (C26854 + C26839 * C26873 + C26862 * ae) +
                         C26839 * (2 * C26873 + C26839 * C26912 + C26893 * ae) +
                         (2 * C26862 + C26839 * C26893) * ae) /
                        C26621;
    const double C587 =
        (C26915 * (2 * C26873 + C26839 * C26912 + C26893 * ae)) / C26621;
    const double C961 =
        (C26945 * (2 * C26873 + C26839 * C26912 + C26893 * ae)) / C26621;
    const double C1355 =
        (C26854 + C26839 * C26873 + C26862 * ae + C26912 * C27005) / C26621;
    const double C3007 =
        (C26854 + C26839 * C26873 + C26862 * ae + C26912 * C27072) / C26621;
    const double C5631 = (C26945 * C26915 * C26912) / C26621;
    const double C591 =
        2 * ((-(C26915 * C26867 * ce) / C26660) / C26621 -
             (ae * C26915 * C26866) / C26840 - (C26839 * C27084) / C26840) -
        (ae * C26915 * C26911) / C26840 - (C26915 * C26912 * ce) / C26840 +
        C26839 *
            ((-(ae * C26915 * C26902) / C26660) / C26621 - C27084 / C26840 -
             (C26915 * C26903 * ce) / C26840 +
             C26839 *
                 ((-(C26915 * C26894 * ce) / C26660) / C26621 -
                  (ae * C26915 * C26891) / C26840 -
                  (C26839 * C26915 *
                   (C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840));
    const double C965 =
        2 * ((-(C26945 * C26867 * ce) / C26660) / C26621 -
             (ae * C26945 * C26866) / C26840 - (C26839 * C27121) / C26840) -
        (ae * C26945 * C26911) / C26840 - (C26945 * C26912 * ce) / C26840 +
        C26839 *
            ((-(ae * C26945 * C26902) / C26660) / C26621 - C27121 / C26840 -
             (C26945 * C26903 * ce) / C26840 +
             C26839 *
                 ((-(C26945 * C26894 * ce) / C26660) / C26621 -
                  (ae * C26945 * C26891) / C26840 -
                  (C26839 * C26945 *
                   (C26878 * C26879 + C26847 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840));
    const double C5788 =
        C26915 * C26945 *
            ((-(C27202 * ce) / C26660) / C26621 - C26992 / C26840 +
             C26839 *
                 ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) / C26660) /
                      C26621 -
                  (C26994 * ce) / C26840)) -
        (ae * C26945 * C26911) / C26840;
    const double C5942 =
        C26945 * C26915 *
            ((-(C27216 * ce) / C26660) / C26621 - C27047 / C26840 +
             C26839 *
                 ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) / C26660) /
                      C26621 -
                  (C27049 * ce) / C26840)) -
        (ae * C26915 * C26911) / C26840;
    const double C103 =
        (-3 * (C26839 * C26872 + C26853 + C26862 * ce)) / C26660 +
        C26839 * ((-2 * C26872) / C26660 - (C26839 * C26911) / C26660 -
                  (C26893 * ce) / C26660) -
        ((2 * C26862 + C26839 * C26893) * ce) / C26660;
    const double C583 =
        C26915 * ((-2 * C26872) / C26660 - (C26839 * C26911) / C26660 -
                  (C26893 * ce) / C26660);
    const double C957 =
        C26945 * ((-2 * C26872) / C26660 - (C26839 * C26911) / C26660 -
                  (C26893 * ce) / C26660);
    const double C1356 =
        -(C26911 * C27005 + C26839 * C26872 + C26853 + C26862 * ce) / C26660;
    const double C3008 =
        -(C26911 * C27072 + C26839 * C26872 + C26853 + C26862 * ce) / C26660;
    const double C5630 = -(C26945 * C26915 * C26911) / C26660;
    const double C5159 = C5152 + C5153;
    const double C9979 = C9972 + C9973;
    const double C8221 = C8216 + C8217;
    const double C15545 = C15540 + C15541;
    const double C12387 = C12382 + C12383;
    const double C7081 = C7074 + C7075;
    const double C19151 = C19144 + C19145;
    const double C11225 = C11219 * C28008;
    const double C17211 = C17209 * C28008;
    const double C21669 = C21667 * C28008;
    const double C11259 =
        (-3 * (C26915 * C27196 + C26921 + C27194 * ce)) / C26660 +
        C26915 * ((-2 * C27196) / C26660 - (C26915 * C27386) / C26660 -
                  (C27376 * ce) / C26660) -
        ((2 * C27194 + C26915 * C27376) * ce) / C26660;
    const double C11621 =
        C26945 * ((-2 * C27196) / C26660 - (C26915 * C27386) / C26660 -
                  (C27376 * ce) / C26660);
    const double C12441 =
        -(C27386 * C27072 + C26915 * C27196 + C26921 + C27194 * ce) / C26660;
    const double C21744 =
        (-3 * (C26945 * C27329 + C26951 + C27327 * ce)) / C26660 +
        C26945 * ((-2 * C27329) / C26660 - (C26945 * C27508) / C26660 -
                  (C27498 * ce) / C26660) -
        ((2 * C27327 + C26945 * C27498) * ce) / C26660;
    const double C11729 =
        2 * ((-(C26945 * C26986 * ce) / C26660) / C26621 -
             (ae * C26945 * C26927) / C26840 - (C26915 * C27412) / C26840) -
        (ae * C26945 * C27386) / C26840 - (C26945 * C27387 * ce) / C26840 +
        C26915 *
            ((-(ae * C26945 * C27374) / C26660) / C26621 - C27412 / C26840 -
             (C26945 * C27377 * ce) / C26840 +
             C26915 *
                 ((-(C26945 * C26994 * ce) / C26660) / C26621 -
                  (ae * C26945 * C26935) / C26840 -
                  (C26915 * C26945 *
                   (C26878 * C26879 + C27005 * bs[6] * std::pow(C26837, 6)) *
                   C26848) /
                      C26840));
    const double C11355 =
        (3 * (C26980 + C26915 * C27197 + C27194 * ae) +
         C26915 * (2 * C27197 + C26915 * C27387 + C27376 * ae) +
         (2 * C27194 + C26915 * C27376) * ae) /
        C26621;
    const double C11693 =
        (C26945 * (2 * C27197 + C26915 * C27387 + C27376 * ae)) / C26621;
    const double C12561 =
        (C26980 + C26915 * C27197 + C27194 * ae + C27387 * C27072) / C26621;
    const double C7849 = C7846 + C7847;
    const double C15197 = C15194 + C15195;
    const double C3253 = C3250 + C3251;
    const double C6308 = C6307 * C28010;
    const double C21833 = C21832 * C28010;
    const double C21905 =
        (3 * (C27035 + C26945 * C27330 + C27327 * ae) +
         C26945 * (2 * C27330 + C26945 * C27509 + C27498 * ae) +
         (2 * C27327 + C26945 * C27498) * ae) /
        C26621;
    const double C8143 = C8140 + C8141;
    const double C22595 = C22592 + C22593;
    const double C3519 = C3515 + C3516;
    const double C24275 = C24271 + C24272;
    const double C5091 = C5090 * C28009;
    const double C1867 = C1865 * C28009;
    const double C11549 = C11548 * C28009;
    const double C108 =
        3 * ((-(ae * C26872) / C26660) / C26621 - C26871 / C26840 -
             (C26873 * ce) / C26840 + C26839 * C26910) +
        (((-2 * C26872) / C26660 - (C26839 * C26911) / C26660 -
          (C26893 * ce) / C26660) *
         ae) /
            C26621 -
        ((2 * C26873 + C26839 * C26912 + C26893 * ae) * ce) / C26840 +
        C26839 * (2 * C26910 - (ae * C26911) / C26840 - (C26912 * ce) / C26840 +
                  C26839 * ((-(ae * C26902) / C26660) / C26621 -
                            C26901 / C26840 - (C26903 * ce) / C26840 +
                            C26839 * ((-(C26894 * ce) / C26660) / C26621 -
                                      (ae * C26891) / C26840 -
                                      (C26839 *
                                       (C26878 * C26879 +
                                        C26847 * bs[6] * std::pow(C26837, 6)) *
                                       C26848) /
                                          C26840)));
    const double C11391 =
        3 * ((-(ae * C27196) / C26660) / C26621 - C27010 / C26840 -
             (C27197 * ce) / C26840 + C26915 * C27385) +
        (((-2 * C27196) / C26660 - (C26915 * C27386) / C26660 -
          (C27376 * ce) / C26660) *
         ae) /
            C26621 -
        ((2 * C27197 + C26915 * C27387 + C27376 * ae) * ce) / C26840 +
        C26915 * (2 * C27385 - (ae * C27386) / C26840 - (C27387 * ce) / C26840 +
                  C26915 * ((-(ae * C27374) / C26660) / C26621 -
                            C27015 / C26840 - (C27377 * ce) / C26840 +
                            C26915 * ((-(C26994 * ce) / C26660) / C26621 -
                                      (ae * C26935) / C26840 -
                                      (C26915 *
                                       (C26878 * C26879 +
                                        C27005 * bs[6] * std::pow(C26837, 6)) *
                                       C26848) /
                                          C26840)));
    const double C21976 =
        3 * ((-(ae * C27329) / C26660) / C26621 - C27077 / C26840 -
             (C27330 * ce) / C26840 + C26945 * C27507) +
        (((-2 * C27329) / C26660 - (C26945 * C27508) / C26660 -
          (C27498 * ce) / C26660) *
         ae) /
            C26621 -
        ((2 * C27330 + C26945 * C27509 + C27498 * ae) * ce) / C26840 +
        C26945 * (2 * C27507 - (ae * C27508) / C26840 - (C27509 * ce) / C26840 +
                  C26945 * ((-(ae * C27496) / C26660) / C26621 -
                            C27082 / C26840 - (C27499 * ce) / C26840 +
                            C26945 * ((-(C27049 * ce) / C26660) / C26621 -
                                      (ae * C26965) / C26840 -
                                      (C26945 *
                                       (C26878 * C26879 +
                                        C27072 * bs[6] * std::pow(C26837, 6)) *
                                       C26848) /
                                          C26840)));
    const double C153 =
        3 * ((-(ae * C26929) / C26660) / C26621 - C26926 / C26840 +
             C26839 * C26942) +
        (((-2 * C26929) / C26660 - (C26839 * C26939) / C26660) * ae) / C26621 +
        C26839 *
            (2 * C26942 - (ae * C26939) / C26840 +
             C26839 *
                 ((-(ae * C26839 * C26935) / C26660) / C26621 -
                  C26933 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) /
                             C26660) /
                                C26621 -
                            (ae * C26935) / C26840)));
    const double C635 =
        C26915 *
            (2 * C26942 - (ae * C26939) / C26840 +
             C26839 *
                 ((-(ae * C26839 * C26935) / C26660) / C26621 -
                  C26933 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) /
                             C26660) /
                                C26621 -
                            (ae * C26935) / C26840))) -
        ((2 * C26873 + C26839 * C26912 + C26893 * ae) * ce) / C26840;
    const double C636 =
        C26915 * ((-(ae * C26929) / C26660) / C26621 - C26926 / C26840 +
                  C26839 * C26942) -
        ((C26854 + C26839 * C26873 + C26862 * ae) * ce) / C26840;
    const double C1007 =
        C26945 *
        (2 * C26942 - (ae * C26939) / C26840 +
         C26839 *
             ((-(ae * C26839 * C26935) / C26660) / C26621 - C26933 / C26840 +
              C26839 *
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (ae * C26935) / C26840)));
    const double C1008 = C26945 * ((-(ae * C26929) / C26660) / C26621 -
                                   C26926 / C26840 + C26839 * C26942);
    const double C1414 = (-(C26839 * C26926) / C26660) / C26621 -
                         (ae * C26921) / C26840 -
                         (C26915 * C26873 * ce) / C26840 +
                         C26915 * (C26915 * C26942 - (C26873 * ce) / C26840);
    const double C1415 =
        (-(ae * C26929) / C26660) / C26621 - C26926 / C26840 + C26839 * C26942 -
        (C26915 * C26912 * ce) / C26840 +
        C26915 *
            (C26915 *
                 ((-(ae * C26839 * C26935) / C26660) / C26621 -
                  C26933 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) /
                             C26660) /
                                C26621 -
                            (ae * C26935) / C26840)) -
             (C26912 * ce) / C26840);
    const double C2001 =
        2 * (C26915 * C26942 - (C26873 * ce) / C26840) -
        ((C26873 + C26903 * C27005) * ce) / C26840 +
        C26915 *
            (C26942 - (C26915 * C26903 * ce) / C26840 +
             C26915 *
                 (C26915 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) /
                             C26660) /
                                C26621 -
                            (ae * C26935) / C26840) -
                  (C26903 * ce) / C26840));
    const double C2553 =
        C26945 *
        (C26942 - (C26915 * C26903 * ce) / C26840 +
         C26915 * (C26915 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) /
                              C26660) /
                                 C26621 -
                             (ae * C26935) / C26840) -
                   (C26903 * ce) / C26840));
    const double C2555 = C26945 * (C26915 * C26942 - (C26873 * ce) / C26840);
    const double C3066 = (-(C26839 * C26926) / C26660) / C26621 -
                         (ae * C26921) / C26840 + C26942 * C27072;
    const double C3067 =
        (-(ae * C26929) / C26660) / C26621 - C26926 / C26840 + C26839 * C26942 +
        ((-(ae * C27200) / C26660) / C26621 - C26933 / C26840 +
         C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (ae * C26935) / C26840)) *
            C27072;
    const double C3629 =
        C26915 * C26942 - (C26873 * ce) / C26840 +
        (C26915 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (ae * C26935) / C26840) -
         (C26903 * ce) / C26840) *
            C27072;
    const double C4135 =
        2 * C26945 * C26942 +
        C26945 * (C26942 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (ae * C26935) / C26840) *
                      C27072);
    const double C11260 =
        3 * ((-(C27290 * ce) / C26660) / C26621 - C26926 / C26840 +
             C26915 * C27355) -
        ((2 * C27290 + C26915 * C27352) * ce) / C26840 +
        C26915 *
            (2 * C27355 - (C27352 * ce) / C26840 +
             C26915 *
                 ((-(C26915 * C26894 * ce) / C26660) / C26621 -
                  C26933 / C26840 +
                  C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C26922) /
                             C26660) /
                                C26621 -
                            (C26894 * ce) / C26840)));
    const double C11622 =
        C26945 *
        (2 * C27355 - (C27352 * ce) / C26840 +
         C26915 *
             ((-(C26915 * C26894 * ce) / C26660) / C26621 - C26933 / C26840 +
              C26915 *
                  ((-(C26915 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (C26894 * ce) / C26840)));
    const double C12442 =
        (-(C27290 * ce) / C26660) / C26621 - C26926 / C26840 + C26915 * C27355 +
        ((-(C26915 * C26894 * ce) / C26660) / C26621 - C26933 / C26840 +
         C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (C26894 * ce) / C26840)) *
            C27072;
    const double C12976 =
        2 * C26945 * C27355 +
        C26945 * (C27355 +
                  ((-(C26915 * std::pow(C26837, 6) * bs[6] * C26922) / C26660) /
                       C26621 -
                   (C26894 * ce) / C26840) *
                      C27072);
    const double C243 =
        3 * ((-(C26988 * ce) / C26660) / C26621 - C26985 / C26840 +
             C26839 * C27001) -
        ((2 * C26988 + C26839 * C26998) * ce) / C26840 +
        C26839 *
            (2 * C27001 - (C26998 * ce) / C26840 +
             C26839 *
                 ((-(C26839 * C26994 * ce) / C26660) / C26621 -
                  C26992 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840)));
    const double C719 =
        (((-2 * C26872) / C26660 - (C26839 * C26911) / C26660 -
          (C26893 * ce) / C26660) *
         ae) /
            C26621 +
        C26915 *
            (2 * C27001 - (C26998 * ce) / C26840 +
             C26839 *
                 ((-(C26839 * C26994 * ce) / C26660) / C26621 -
                  C26992 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840)));
    const double C720 =
        C26915 * ((-(C26988 * ce) / C26660) / C26621 - C26985 / C26840 +
                  C26839 * C27001) -
        (ae * (C26839 * C26872 + C26853 + C26862 * ce)) / C26840;
    const double C1093 =
        C26945 *
        (2 * C27001 - (C26998 * ce) / C26840 +
         C26839 *
             ((-(C26839 * C26994 * ce) / C26660) / C26621 - C26992 / C26840 +
              C26839 *
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) / C26660) /
                       C26621 -
                   (C26994 * ce) / C26840)));
    const double C1094 = C26945 * ((-(C26988 * ce) / C26660) / C26621 -
                                   C26985 / C26840 + C26839 * C27001);
    const double C1529 = (-(C26839 * C26985) / C26660) / C26621 -
                         (C26980 * ce) / C26840 -
                         (ae * C26915 * C26872) / C26840 +
                         C26915 * (C26915 * C27001 - (ae * C26872) / C26840);
    const double C1530 =
        (-(C26988 * ce) / C26660) / C26621 - C26985 / C26840 + C26839 * C27001 -
        (ae * C26915 * C26911) / C26840 +
        C26915 *
            (C26915 *
                 ((-(C26839 * C26994 * ce) / C26660) / C26621 -
                  C26992 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840)) -
             (ae * C26911) / C26840);
    const double C2133 =
        2 * (C26915 * C27001 - (ae * C26872) / C26840) -
        (ae * (C26902 * C27005 + C26872)) / C26840 +
        C26915 *
            (C27001 - (ae * C26915 * C26902) / C26840 +
             C26915 *
                 (C26915 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840) -
                  (ae * C26902) / C26840));
    const double C2669 =
        C26945 * C27001 - (ae * C26945 * C26915 * C26902) / C26840 +
        C26915 *
            (C26915 * C26945 *
                 ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) / C26660) /
                      C26621 -
                  (C26994 * ce) / C26840) -
             (ae * C26945 * C26902) / C26840);
    const double C2670 =
        C26915 * C26945 * C27001 - (ae * C26945 * C26872) / C26840;
    const double C3178 = (-(C26839 * C26985) / C26660) / C26621 -
                         (C26980 * ce) / C26840 + C27001 * C27072;
    const double C3179 =
        (-(C26988 * ce) / C26660) / C26621 - C26985 / C26840 + C26839 * C27001 +
        ((-(C27202 * ce) / C26660) / C26621 - C26992 / C26840 +
         C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) / C26660) /
                       C26621 -
                   (C26994 * ce) / C26840)) *
            C27072;
    const double C3737 =
        C26915 * (C27001 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) / C26660) /
                       C26621 -
                   (C26994 * ce) / C26840) *
                      C27072) -
        (ae * (C26902 * C27072 + C26872)) / C26840;
    const double C4267 =
        2 * C26945 * C27001 +
        C26945 * (C27001 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26981) / C26660) /
                       C26621 -
                   (C26994 * ce) / C26840) *
                      C27072);
    const double C11356 =
        3 * ((-(ae * C27300) / C26660) / C26621 - C26985 / C26840 +
             C26915 * C27364) +
        (((-2 * C27300) / C26660 - (C26915 * C27361) / C26660) * ae) / C26621 +
        C26915 *
            (2 * C27364 - (ae * C27361) / C26840 +
             C26915 *
                 ((-(ae * C26915 * C26891) / C26660) / C26621 -
                  C26992 / C26840 +
                  C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C26981) /
                             C26660) /
                                C26621 -
                            (ae * C26891) / C26840)));
    const double C198 =
        3 * ((-(ae * C26959) / C26660) / C26621 - C26956 / C26840 +
             C26839 * C26972) +
        (((-2 * C26959) / C26660 - (C26839 * C26969) / C26660) * ae) / C26621 +
        C26839 *
            (2 * C26972 - (ae * C26969) / C26840 +
             C26839 *
                 ((-(ae * C26839 * C26965) / C26660) / C26621 -
                  C26963 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) /
                             C26660) /
                                C26621 -
                            (ae * C26965) / C26840)));
    const double C677 =
        C26915 *
        (2 * C26972 - (ae * C26969) / C26840 +
         C26839 *
             ((-(ae * C26839 * C26965) / C26660) / C26621 - C26963 / C26840 +
              C26839 *
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) / C26660) /
                       C26621 -
                   (ae * C26965) / C26840)));
    const double C678 = C26915 * ((-(ae * C26959) / C26660) / C26621 -
                                  C26956 / C26840 + C26839 * C26972);
    const double C1051 =
        C26945 *
            (2 * C26972 - (ae * C26969) / C26840 +
             C26839 *
                 ((-(ae * C26839 * C26965) / C26660) / C26621 -
                  C26963 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) /
                             C26660) /
                                C26621 -
                            (ae * C26965) / C26840))) -
        ((2 * C26873 + C26839 * C26912 + C26893 * ae) * ce) / C26840;
    const double C1052 =
        C26945 * ((-(ae * C26959) / C26660) / C26621 - C26956 / C26840 +
                  C26839 * C26972) -
        ((C26854 + C26839 * C26873 + C26862 * ae) * ce) / C26840;
    const double C1470 = (-(C26839 * C26956) / C26660) / C26621 -
                         (ae * C26951) / C26840 + C26972 * C27005;
    const double C1471 =
        (-(ae * C26959) / C26660) / C26621 - C26956 / C26840 + C26839 * C26972 +
        ((-(ae * C26839 * C26965) / C26660) / C26621 - C26963 / C26840 +
         C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) / C26660) /
                       C26621 -
                   (ae * C26965) / C26840)) *
            C27005;
    const double C2067 =
        2 * C26915 * C26972 +
        C26915 * (C26972 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) / C26660) /
                       C26621 -
                   (ae * C26965) / C26840) *
                      C27005);
    const double C2611 =
        C26945 * C26915 * C26972 - (C26915 * C26873 * ce) / C26840;
    const double C2613 =
        C26945 * (C26972 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) / C26660) /
                       C26621 -
                   (ae * C26965) / C26840) *
                      C27005) -
        ((C26873 + C26903 * C27005) * ce) / C26840;
    const double C3122 = (-(C26839 * C26956) / C26660) / C26621 -
                         (ae * C26951) / C26840 -
                         (C26945 * C26873 * ce) / C26840 +
                         C26945 * (C26945 * C26972 - (C26873 * ce) / C26840);
    const double C3123 =
        (-(ae * C26959) / C26660) / C26621 - C26956 / C26840 + C26839 * C26972 -
        (C26945 * C26912 * ce) / C26840 +
        C26945 *
            (C26945 *
                 ((-(ae * C27209) / C26660) / C26621 - C26963 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) /
                             C26660) /
                                C26621 -
                            (ae * C26965) / C26840)) -
             (C26912 * ce) / C26840);
    const double C3683 =
        C26915 * C26972 - (C26945 * C27288 * ce) / C26840 +
        C26945 *
            (C26945 * C26915 *
                 ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) / C26660) /
                      C26621 -
                  (ae * C26965) / C26840) -
             (C27288 * ce) / C26840);
    const double C4201 =
        2 * (C26945 * C26972 - (C26873 * ce) / C26840) -
        ((C26873 + C26903 * C27072) * ce) / C26840 +
        C26945 *
            (C26972 - (C26945 * C26903 * ce) / C26840 +
             C26945 *
                 (C26945 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C26952) /
                             C26660) /
                                C26621 -
                            (ae * C26965) / C26840) -
                  (C26903 * ce) / C26840));
    const double C21745 =
        3 * ((-(C27455 * ce) / C26660) / C26621 - C26956 / C26840 +
             C26945 * C27462) -
        ((2 * C27455 + C26945 * C27459) * ce) / C26840 +
        C26945 *
            (2 * C27462 - (C27459 * ce) / C26840 +
             C26945 *
                 ((-(C26945 * C26894 * ce) / C26660) / C26621 -
                  C26963 / C26840 +
                  C26945 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C26952) /
                             C26660) /
                                C26621 -
                            (C26894 * ce) / C26840)));
    const double C11426 =
        3 * ((-(ae * C27307) / C26660) / C26621 - C27024 / C26840 +
             C26915 * C27395) +
        (((-2 * C27307) / C26660 - (C26915 * C27392) / C26660) * ae) / C26621 +
        C26915 *
            (2 * C27395 - (ae * C27392) / C26840 +
             C26915 *
                 ((-(ae * C26915 * C26965) / C26660) / C26621 -
                  C27027 / C26840 +
                  C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C27021) /
                             C26660) /
                                C26621 -
                            (ae * C26965) / C26840)));
    const double C11764 =
        2 * (C26915 * C27418 - (ae * C27329) / C26840) -
        (ae * (C26945 * C27392 + C27376 * ce)) / C26840 +
        C26915 *
            (C27418 - (ae * (C26945 * C26915 * C26965 + C27375)) / C26840 +
             C26915 *
                 (C26915 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C27021) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840) -
                  (ae * (C26945 * C26965 + C26884)) / C26840));
    const double C12664 =
        (-(C26945 * C26986 * ce) / C26660) / C26621 - C27024 / C26840 +
        C26945 * C27418 -
        (ae * (C26945 * (C26945 * C26915 * C26965 + C27375) + C27307 +
               C26945 * C27369 * ce)) /
            C26840 +
        C26915 *
            (C26915 *
                 ((-(C26945 * C26994 * ce) / C26660) / C26621 -
                  C27027 / C26840 +
                  C26945 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C27021) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840)) -
             (ae * (C26945 * (C26945 * C26965 + C26884) + C26957 +
                    C26945 * C26877 * ce)) /
                 C26840);
    const double C13238 =
        (((-2 * C27329) / C26660 -
          (C26945 * (C26945 * (C26945 * C26965 + C26884) + C26957 +
                     C26945 * C26877 * ce)) /
              C26660 -
          ((C26856 + C26877 * C27072) * ce) / C26660) *
         ae) /
            C26621 +
        C26915 *
            (2 * C27418 - ((C26986 + C26994 * C27072) * ce) / C26840 +
             C26945 *
                 ((-(C26945 * C26994 * ce) / C26660) / C26621 -
                  C27027 / C26840 +
                  C26945 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C27021) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840)));
    const double C21867 =
        3 * ((-(C27466 * ce) / C26660) / C26621 - C27024 / C26840 +
             C26945 * C27418) -
        ((2 * C27466 + C26945 * C27468) * ce) / C26840 +
        C26945 *
            (2 * C27418 - (C27468 * ce) / C26840 +
             C26945 *
                 ((-(C26945 * C26994 * ce) / C26660) / C26621 -
                  C27027 / C26840 +
                  C26945 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C27021) /
                             C26660) /
                                C26621 -
                            (C26994 * ce) / C26840)));
    const double C414 =
        3 * ((-(C27043 * ce) / C26660) / C26621 - C27040 / C26840 +
             C26839 * C27056) -
        ((2 * C27043 + C26839 * C27053) * ce) / C26840 +
        C26839 *
            (2 * C27056 - (C27053 * ce) / C26840 +
             C26839 *
                 ((-(C26839 * C27049 * ce) / C26660) / C26621 -
                  C27047 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840)));
    const double C837 =
        C26915 *
        (2 * C27056 - (C27053 * ce) / C26840 +
         C26839 *
             ((-(C26839 * C27049 * ce) / C26660) / C26621 - C27047 / C26840 +
              C26839 *
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) / C26660) /
                       C26621 -
                   (C27049 * ce) / C26840)));
    const double C838 = C26915 * ((-(C27043 * ce) / C26660) / C26621 -
                                  C27040 / C26840 + C26839 * C27056);
    const double C1211 =
        (((-2 * C26872) / C26660 - (C26839 * C26911) / C26660 -
          (C26893 * ce) / C26660) *
         ae) /
            C26621 +
        C26945 *
            (2 * C27056 - (C27053 * ce) / C26840 +
             C26839 *
                 ((-(C26839 * C27049 * ce) / C26660) / C26621 -
                  C27047 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840)));
    const double C1212 =
        C26945 * ((-(C27043 * ce) / C26660) / C26621 - C27040 / C26840 +
                  C26839 * C27056) -
        (ae * (C26839 * C26872 + C26853 + C26862 * ce)) / C26840;
    const double C1727 = (-(C26839 * C27040) / C26660) / C26621 -
                         (C27035 * ce) / C26840 + C27056 * C27005;
    const double C1728 =
        (-(C27043 * ce) / C26660) / C26621 - C27040 / C26840 + C26839 * C27056 +
        ((-(C26839 * C27049 * ce) / C26660) / C26621 - C27047 / C26840 +
         C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) / C26660) /
                       C26621 -
                   (C27049 * ce) / C26840)) *
            C27005;
    const double C2291 =
        2 * C26915 * C27056 +
        C26915 * (C27056 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) / C26660) /
                       C26621 -
                   (C27049 * ce) / C26840) *
                      C27005);
    const double C2835 =
        C26945 * (C27056 +
                  ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) / C26660) /
                       C26621 -
                   (C27049 * ce) / C26840) *
                      C27005) -
        (ae * (C26902 * C27005 + C26872)) / C26840;
    const double C2837 =
        C26945 * C26915 * C27056 - (ae * C26915 * C26872) / C26840;
    const double C3375 = (-(C26839 * C27040) / C26660) / C26621 -
                         (C27035 * ce) / C26840 -
                         (ae * C26945 * C26872) / C26840 +
                         C26945 * (C26945 * C27056 - (ae * C26872) / C26840);
    const double C3376 =
        (-(C27043 * ce) / C26660) / C26621 - C27040 / C26840 + C26839 * C27056 -
        (ae * C26945 * C26911) / C26840 +
        C26945 *
            (C26945 *
                 ((-(C27216 * ce) / C26660) / C26621 - C27047 / C26840 +
                  C26839 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840)) -
             (ae * C26911) / C26840);
    const double C3895 =
        C26915 * C27056 - (ae * C26945 * C27298) / C26840 +
        C26945 *
            (C26945 * C26915 *
                 ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) / C26660) /
                      C26621 -
                  (C27049 * ce) / C26840) -
             (ae * C27298) / C26840);
    const double C4461 =
        2 * (C26945 * C27056 - (ae * C26872) / C26840) -
        (ae * (C26902 * C27072 + C26872)) / C26840 +
        C26945 *
            (C27056 - (ae * C26945 * C26902) / C26840 +
             C26945 *
                 (C26945 * ((-(C26839 * std::pow(C26837, 6) * bs[6] * C27036) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840) -
                  (ae * C26902) / C26840));
    const double C21906 =
        3 * ((-(ae * C27470) / C26660) / C26621 - C27040 / C26840 +
             C26945 * C27477) +
        (((-2 * C27470) / C26660 - (C26945 * C27474) / C26660) * ae) / C26621 +
        C26945 *
            (2 * C27477 - (ae * C27474) / C26840 +
             C26945 *
                 ((-(ae * C26945 * C26891) / C26660) / C26621 -
                  C27047 / C26840 +
                  C26945 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C27036) /
                             C26660) /
                                C26621 -
                            (ae * C26891) / C26840)));
    const double C11505 =
        3 * ((-(C27308 * ce) / C26660) / C26621 - C27065 / C26840 +
             C26915 * C27404) -
        ((2 * C27308 + C26915 * C27401) * ce) / C26840 +
        C26915 *
            (2 * C27404 - (C27401 * ce) / C26840 +
             C26915 *
                 ((-(C26915 * C27049 * ce) / C26660) / C26621 -
                  C27068 / C26840 +
                  C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C27062) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840)));
    const double C11835 =
        (((-2 * C27196) / C26660 - (C26915 * C27386) / C26660 -
          (C27376 * ce) / C26660) *
         ae) /
            C26621 +
        C26945 *
            (2 * C27404 - (C27401 * ce) / C26840 +
             C26915 *
                 ((-(C26915 * C27049 * ce) / C26660) / C26621 -
                  C27068 / C26840 +
                  C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C27062) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840)));
    const double C12785 =
        (-(C27308 * ce) / C26660) / C26621 - C27065 / C26840 + C26915 * C27404 -
        (ae * C26945 * C27386) / C26840 +
        C26945 *
            (C26945 *
                 ((-(C26915 * C27049 * ce) / C26660) / C26621 -
                  C27068 / C26840 +
                  C26915 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C27062) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840)) -
             (ae * C27386) / C26840);
    const double C13353 =
        2 * (C26945 * C27404 - (ae * C27196) / C26840) -
        (ae * (C27374 * C27072 + C27196)) / C26840 +
        C26945 *
            (C27404 - (ae * C26945 * C27374) / C26840 +
             C26945 *
                 (C26945 * ((-(C26915 * std::pow(C26837, 6) * bs[6] * C27062) /
                             C26660) /
                                C26621 -
                            (C27049 * ce) / C26840) -
                  (ae * C27374) / C26840));
    const double C21941 =
        3 * ((-(ae * C27479) / C26660) / C26621 - C27065 / C26840 +
             C26945 * C27486) +
        (((-2 * C27479) / C26660 - (C26945 * C27483) / C26660) * ae) / C26621 +
        C26945 *
            (2 * C27486 - (ae * C27483) / C26840 +
             C26945 *
                 ((-(ae * C26945 * C26935) / C26660) / C26621 -
                  C27068 / C26840 +
                  C26945 * ((-(C26945 * std::pow(C26837, 6) * bs[6] * C27062) /
                             C26660) /
                                C26621 -
                            (ae * C26935) / C26840)));
    const double C26646 = C26645 / C26621;
    const double C1938 = C1346 * C1353;
    const double C1934 = C1346 * C1348;
    const double C1930 = C1346 * C586;
    const double C1926 = C1346 * C582;
    const double C2010 = C1346 * C1410;
    const double C2006 = C1346 * C634;
    const double C2074 = C1346 * C1466;
    const double C2070 = C1346 * C676;
    const double C4072 = C1346 * C3005;
    const double C4068 = C1346 * C3000;
    const double C4064 = C1346 * C960;
    const double C4060 = C1346 * C956;
    const double C4142 = C1346 * C3062;
    const double C4138 = C1346 * C1006;
    const double C4210 = C1346 * C3118;
    const double C4206 = C1346 * C1050;
    const double C8214 = C1346 * C2492;
    const double C8210 = C1346 * C2486;
    const double C8290 = C1346 * C2552;
    const double C8360 = C1346 * C2608;
    const double C26771 = C26769 / C26621;
    const double C26817 = C26815 / C26621;
    const double C12391 = C12387 * C28008;
    const double C3255 = C3253 * C28010;
    const double C5211 = C4619 * C636;
    const double C10031 = C9455 * C636;
    const double C7137 = C4619 * C1008;
    const double C19207 = C9455 * C1008;
    const double C2009 = C27768 * C1414;
    const double C14031 = C27768 * C1414;
    const double C8289 = C27768 * C2555;
    const double C15613 = C27768 * C2555;
    const double C4145 = C27768 * C3066;
    const double C24841 = C27768 * C3066;
    const double C4791 = C27854 * C720;
    const double C9627 = C27854 * C720;
    const double C6251 = C27805 * C1094;
    const double C1539 = C1345 * C1529;
    const double C13623 = C13459 * C1529;
    const double C7771 = C27854 * C2670;
    const double C15119 = C27854 * C2670;
    const double C3188 = C27805 * C3178;
    const double C5274 = C4619 * C678;
    const double C10094 = C9455 * C678;
    const double C7192 = C4619 * C1052;
    const double C19262 = C9455 * C1052;
    const double C2077 = C27768 * C1470;
    const double C14095 = C27768 * C1470;
    const double C8363 = C27768 * C2611;
    const double C15687 = C27768 * C2611;
    const double C4209 = C27768 * C3122;
    const double C24895 = C27768 * C3122;
    const double C4979 = C27816 * C838;
    const double C6429 = C27880 * C1212;
    const double C18499 = C27880 * C1212;
    const double C1737 = C27816 * C1727;
    const double C7993 = C27880 * C2837;
    const double C22445 = C27880 * C2837;
    const double C3385 = C2999 * C3375;
    const double C24147 = C23835 * C3375;
    const double C26647 = C26646 - C26636;
    const double C1948 = C1938 + C1939;
    const double C1946 = C1934 + C1935;
    const double C1944 = C1930 + C1931;
    const double C1942 = C1926 + C1927;
    const double C2015 = C2010 + C2011;
    const double C2013 = C2006 + C2007;
    const double C2080 = C2074 + C2075;
    const double C2078 = C2070 + C2071;
    const double C4082 = C4072 + C4073;
    const double C4080 = C4068 + C4069;
    const double C4078 = C4064 + C4065;
    const double C4076 = C4060 + C4061;
    const double C4148 = C4142 + C4143;
    const double C4146 = C4138 + C4139;
    const double C4215 = C4210 + C4211;
    const double C4213 = C4206 + C4207;
    const double C8220 = C8214 + C8215;
    const double C8218 = C8210 + C8211;
    const double C8293 = C8290 + C8291;
    const double C8364 = C8360 + C8361;
    const double C26772 = C26771 - C26756;
    const double C26818 = C26817 - C26802;
    const double C5216 = C5210 + C5211;
    const double C10036 = C10030 + C10031;
    const double C7140 = C7136 + C7137;
    const double C19210 = C19206 + C19207;
    const double C2014 = C2008 + C2009;
    const double C14036 = C14030 + C14031;
    const double C8292 = C8288 + C8289;
    const double C15616 = C15612 + C15613;
    const double C4149 = C4144 + C4145;
    const double C24843 = C24840 + C24841;
    const double C4800 = C4790 + C4791;
    const double C9636 = C9626 + C9627;
    const double C6253 = C6250 + C6251;
    const double C1547 = C1538 + C1539;
    const double C13631 = C13622 + C13623;
    const double C7776 = C7770 + C7771;
    const double C15124 = C15118 + C15119;
    const double C3192 = C3187 + C3188;
    const double C5277 = C5273 + C5274;
    const double C10097 = C10093 + C10094;
    const double C7197 = C7191 + C7192;
    const double C19267 = C19261 + C19262;
    const double C2081 = C2076 + C2077;
    const double C14099 = C14094 + C14095;
    const double C8365 = C8362 + C8363;
    const double C15689 = C15686 + C15687;
    const double C4214 = C4208 + C4209;
    const double C24898 = C24894 + C24895;
    const double C4981 = C4978 + C4979;
    const double C6438 = C6428 + C6429;
    const double C18508 = C18498 + C18499;
    const double C1741 = C1736 + C1737;
    const double C7998 = C7992 + C7993;
    const double C22450 = C22444 + C22445;
    const double C3393 = C3384 + C3385;
    const double C24155 = C24146 + C24147;
    const double C13964 = C26647 * C1353;
    const double C13960 = C26647 * C1348;
    const double C13956 = C26647 * C586;
    const double C13952 = C26647 * C582;
    const double C14032 = C26647 * C1410;
    const double C14028 = C26647 * C634;
    const double C14092 = C26647 * C1466;
    const double C14088 = C26647 * C676;
    const double C15538 = C26647 * C2492;
    const double C15534 = C26647 * C2486;
    const double C15614 = C26647 * C2552;
    const double C15684 = C26647 * C2608;
    const double C16156 = C26647 * C960;
    const double C16152 = C26647 * C956;
    const double C16230 = C26647 * C1006;
    const double C16304 = C26647 * C1050;
    const double C24780 = C26647 * C3005;
    const double C24776 = C26647 * C3000;
    const double C24838 = C26647 * C3062;
    const double C24896 = C26647 * C3118;
    const double C83 =
        ((((0 - (C26619 * C26620) / C26621) * ae) / C26621 - (0 * be) / C26630 +
          C26622 / C26621) /
             C26626 -
         ((C26619 * C26643 + 0) * be) / C26621) /
            C26626 +
        ((C26619 * (C26643 / C26626 -
                    ((C26619 * C26647 + C27960) * be) / C26621 + C26640) +
          C27996) *
         ae) /
            C26621 +
        C26647 / C26626 - ((C26619 * C26640 + C27768) * be) / C26621;
    const double C84 = (C26643 / C26626 -
                        ((C26619 * C26647 + C27960) * be) / C26621 + C26640) /
                           C26626 +
                       ((C26619 * (C26647 / C26626 -
                                   ((C26619 * C26640 + C27768) * be) / C26621) +
                         C27997) *
                        ae) /
                           C26621 +
                       2 * (C26640 / C26626 - (0 * be) / C26621);
    const double C85 =
        (C26647 / C26626 - ((C26619 * C26640 + C27768) * be) / C26621) /
            C26626 +
        ((C26619 * (C26640 / C26626 - (0 * be) / C26621) + C4619) * ae) /
            C26621;
    const double C4622 =
        C26643 / C26626 - ((C26619 * C26647 + C27960) * be) / C26621 + C26640;
    const double C4623 =
        C26647 / C26626 - ((C26619 * C26640 + C27768) * be) / C26621;
    const double C9458 =
        C26643 / C26626 + ((C26619 * C26647 + C27960) * ae) / C26621 + C26640;
    const double C9459 =
        C26647 / C26626 + ((C26619 * C26640 + C27768) * ae) / C26621;
    const double C10989 =
        ((((0 - (C26698 * C26753) / C26621) * ae) / C26621 - (0 * be) / C26630 +
          C26699 / C26621) /
             C26626 -
         ((C26698 * C26770 + 0) * be) / C26621) /
            C26626 +
        ((C26698 * (C26770 / C26626 -
                    ((C26698 * C26772 + C27973) * be) / C26621 + C26765) +
          C28001) *
         ae) /
            C26621 +
        C26772 / C26626 - ((C26698 * C26765 + C27854) * be) / C26621;
    const double C10990 =
        (C26770 / C26626 - ((C26698 * C26772 + C27973) * be) / C26621 +
         C26765) /
            C26626 +
        ((C26698 *
              (C26772 / C26626 - ((C26698 * C26765 + C27854) * be) / C26621) +
          C28002) *
         ae) /
            C26621 +
        2 * (C26765 / C26626 - (0 * be) / C26621);
    const double C10991 =
        (C26772 / C26626 - ((C26698 * C26765 + C27854) * be) / C26621) /
            C26626 +
        ((C26698 * (C26765 / C26626 - (0 * be) / C26621) + C13459) * ae) /
            C26621;
    const double C13612 =
        C26770 / C26626 - ((C26698 * C26772 + C27973) * be) / C26621 + C26765;
    const double C13613 =
        C26772 / C26626 - ((C26698 * C26765 + C27854) * be) / C26621;
    const double C21245 =
        ((((0 - (C26713 * C26799) / C26621) * ae) / C26621 - (0 * be) / C26630 +
          C26714 / C26621) /
             C26626 -
         ((C26713 * C26816 + 0) * be) / C26621) /
            C26626 +
        ((C26713 * (C26816 / C26626 -
                    ((C26713 * C26818 + C27974) * be) / C26621 + C26811) +
          C28003) *
         ae) /
            C26621 +
        C26818 / C26626 - ((C26713 * C26811 + C27880) * be) / C26621;
    const double C21246 =
        (C26816 / C26626 - ((C26713 * C26818 + C27974) * be) / C26621 +
         C26811) /
            C26626 +
        ((C26713 *
              (C26818 / C26626 - ((C26713 * C26811 + C27880) * be) / C26621) +
          C28004) *
         ae) /
            C26621 +
        2 * (C26811 / C26626 - (0 * be) / C26621);
    const double C21247 =
        (C26818 / C26626 - ((C26713 * C26811 + C27880) * be) / C26621) /
            C26626 +
        ((C26713 * (C26811 / C26626 - (0 * be) / C26621) + C23835) * ae) /
            C26621;
    const double C24136 =
        C26816 / C26626 - ((C26713 * C26818 + C27974) * be) / C26621 + C26811;
    const double C24137 =
        C26818 / C26626 - ((C26713 * C26811 + C27880) * be) / C26621;
    const double C7251 = C6253 * C28008;
    const double C4281 = C3192 * C28008;
    const double C5479 = C4981 * C28008;
    const double C2305 = C1741 * C28008;
    const double C13974 = C13964 + C13965;
    const double C13972 = C13960 + C13961;
    const double C13970 = C13956 + C13957;
    const double C13968 = C13952 + C13953;
    const double C14037 = C14032 + C14033;
    const double C14035 = C14028 + C14029;
    const double C14098 = C14092 + C14093;
    const double C14096 = C14088 + C14089;
    const double C15544 = C15538 + C15539;
    const double C15542 = C15534 + C15535;
    const double C15617 = C15614 + C15615;
    const double C15688 = C15684 + C15685;
    const double C16162 = C16156 + C16157;
    const double C16160 = C16152 + C16153;
    const double C16234 = C16230 + C16231;
    const double C16307 = C16304 + C16305;
    const double C24786 = C24780 + C24781;
    const double C24784 = C24776 + C24777;
    const double C24842 = C24838 + C24839;
    const double C24899 = C24896 + C24897;
    const double C5148 = C4622 * C586;
    const double C5142 = C4622 * C582;
    const double C5214 = C4622 * C634;
    const double C5269 = C4622 * C676;
    const double C7070 = C4622 * C960;
    const double C7064 = C4622 * C956;
    const double C7132 = C4622 * C1006;
    const double C7195 = C4622 * C1050;
    const double C5150 = C4623 * C585;
    const double C5144 = C4623 * C581;
    const double C5212 = C4623 * C633;
    const double C5271 = C4623 * C675;
    const double C7072 = C4623 * C959;
    const double C7066 = C4623 * C955;
    const double C7134 = C4623 * C1005;
    const double C7193 = C4623 * C1049;
    const double C9968 = C9458 * C586;
    const double C9962 = C9458 * C582;
    const double C10034 = C9458 * C634;
    const double C10089 = C9458 * C676;
    const double C19140 = C9458 * C960;
    const double C19134 = C9458 * C956;
    const double C19202 = C9458 * C1006;
    const double C19265 = C9458 * C1050;
    const double C9970 = C9459 * C585;
    const double C9964 = C9459 * C581;
    const double C10032 = C9459 * C633;
    const double C10091 = C9459 * C675;
    const double C19142 = C9459 * C959;
    const double C19136 = C9459 * C955;
    const double C19204 = C9459 * C1005;
    const double C19263 = C9459 * C1049;
    const double C13626 = C13612 * C99;
    const double C13620 = C13612 * C90;
    const double C13684 = C13612 * C145;
    const double C13743 = C13612 * C190;
    const double C17852 = C13612 * C960;
    const double C17846 = C13612 * C956;
    const double C17914 = C13612 * C1006;
    const double C17977 = C13612 * C1050;
    const double C13624 = C13613 * C585;
    const double C13618 = C13613 * C581;
    const double C13686 = C13613 * C633;
    const double C13745 = C13613 * C675;
    const double C17854 = C13613 * C2492;
    const double C17848 = C13613 * C2486;
    const double C17916 = C13613 * C2552;
    const double C17975 = C13613 * C2608;
    const double C24150 = C24136 * C99;
    const double C24144 = C24136 * C90;
    const double C24208 = C24136 * C145;
    const double C24267 = C24136 * C190;
    const double C26006 = C24136 * C586;
    const double C26000 = C24136 * C582;
    const double C26072 = C24136 * C634;
    const double C26127 = C24136 * C676;
    const double C24148 = C24137 * C959;
    const double C24142 = C24137 * C955;
    const double C24210 = C24137 * C1005;
    const double C24269 = C24137 * C1049;
    const double C26008 = C24137 * C2492;
    const double C26002 = C24137 * C2486;
    const double C26070 = C24137 * C2552;
    const double C26129 = C24137 * C2608;
    const double C5157 = C5148 + C5149;
    const double C5154 = C5142 + C5143;
    const double C5218 = C5214 + C5215;
    const double C5275 = C5269 + C5270;
    const double C7079 = C7070 + C7071;
    const double C7076 = C7064 + C7065;
    const double C7138 = C7132 + C7133;
    const double C7199 = C7195 + C7196;
    const double C5158 = C5150 + C5151;
    const double C5155 = C5144 + C5145;
    const double C5217 = C5212 + C5213;
    const double C5276 = C5271 + C5272;
    const double C7080 = C7072 + C7073;
    const double C7077 = C7066 + C7067;
    const double C7139 = C7134 + C7135;
    const double C7198 = C7193 + C7194;
    const double C9977 = C9968 + C9969;
    const double C9974 = C9962 + C9963;
    const double C10038 = C10034 + C10035;
    const double C10095 = C10089 + C10090;
    const double C19149 = C19140 + C19141;
    const double C19146 = C19134 + C19135;
    const double C19208 = C19202 + C19203;
    const double C19269 = C19265 + C19266;
    const double C9978 = C9970 + C9971;
    const double C9975 = C9964 + C9965;
    const double C10037 = C10032 + C10033;
    const double C10096 = C10091 + C10092;
    const double C19150 = C19142 + C19143;
    const double C19147 = C19136 + C19137;
    const double C19209 = C19204 + C19205;
    const double C19268 = C19263 + C19264;
    const double C13633 = C13626 + C13627;
    const double C13630 = C13620 + C13621;
    const double C13690 = C13684 + C13685;
    const double C13749 = C13743 + C13744;
    const double C17861 = C17852 + C17853;
    const double C17858 = C17846 + C17847;
    const double C17920 = C17914 + C17915;
    const double C17981 = C17977 + C17978;
    const double C13632 = C13624 + C13625;
    const double C13629 = C13618 + C13619;
    const double C13691 = C13686 + C13687;
    const double C13750 = C13745 + C13746;
    const double C17862 = C17854 + C17855;
    const double C17859 = C17848 + C17849;
    const double C17921 = C17916 + C17917;
    const double C17980 = C17975 + C17976;
    const double C24157 = C24150 + C24151;
    const double C24154 = C24144 + C24145;
    const double C24214 = C24208 + C24209;
    const double C24273 = C24267 + C24268;
    const double C26015 = C26006 + C26007;
    const double C26012 = C26000 + C26001;
    const double C26076 = C26072 + C26073;
    const double C26133 = C26127 + C26128;
    const double C24156 = C24148 + C24149;
    const double C24153 = C24142 + C24143;
    const double C24215 = C24210 + C24211;
    const double C24274 = C24269 + C24270;
    const double C26016 = C26008 + C26009;
    const double C26013 = C26002 + C26003;
    const double C26075 = C26070 + C26071;
    const double C26134 = C26129 + C26130;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
                     C4624 * C91 + C4619 * C96) *
                        C87 +
                    (C4622 * C98 + C27996 * C104 + C4623 * C99 + C27997 * C105 +
                     C4624 * C100 + C4619 * C106) *
                        C77 -
                    (C4624 * C92 + C4619 * C97 + C4623 * C91 + C27997 * C96 +
                     C4622 * C90 + C27996 * C95) *
                        C88 -
                    (C4624 * C101 + C4619 * C107 + C4623 * C100 +
                     C27997 * C106 + C4622 * C99 + C27996 * C105) *
                        C78) *
                       C27973 +
                   ((C4622 * C582 + C27996 * C590 + C4623 * C581 +
                     C27997 * C589 + C4624 * C580 + C4619 * C588) *
                        C87 +
                    (C4622 * C586 + C27996 * C594 + C4623 * C585 +
                     C27997 * C593 + C4624 * C584 + C4619 * C592) *
                        C77 -
                    (C4624 * C579 + C4619 * C587 + C4623 * C580 +
                     C27997 * C588 + C4622 * C581 + C27996 * C589) *
                        C88 -
                    (C4624 * C583 + C4619 * C591 + C4623 * C584 +
                     C27997 * C592 + C4622 * C585 + C27996 * C593) *
                        C78) *
                       C27854) *
                  C27816 * C28009 * C28010) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
                      C4624 * C91 + C4619 * C96) *
                         C143 +
                     (C4622 * C144 + C27996 * C149 + C4623 * C145 +
                      C27997 * C150 + C4624 * C146 + C4619 * C151) *
                         C28010) *
                        C27973 +
                    ((C4622 * C582 + C27996 * C590 + C4623 * C581 +
                      C27997 * C589 + C4624 * C580 + C4619 * C588) *
                         C143 +
                     (C4622 * C634 + C27996 * C638 + C4623 * C633 +
                      C27997 * C637 + C4624 * C632 + C4619 * C636) *
                         C28010) *
                        C27854) *
                       C27816 * C77 -
                   (((C4624 * C631 + C4619 * C635 + C4623 * C632 +
                      C27997 * C636 + C4622 * C633 + C27996 * C637) *
                         C28010 +
                     (C4624 * C579 + C4619 * C587 + C4623 * C580 +
                      C27997 * C588 + C4622 * C581 + C27996 * C589) *
                         C143) *
                        C27854 +
                    ((C4624 * C147 + C4619 * C152 + C4623 * C146 +
                      C27997 * C151 + C4622 * C145 + C27996 * C150) *
                         C28010 +
                     (C4624 * C92 + C4619 * C97 + C4623 * C91 + C27997 * C96 +
                      C4622 * C90 + C27996 * C95) *
                         C143) *
                        C27973) *
                       C27816 * C78) *
                  C28009) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
                      C4624 * C91 + C4619 * C96) *
                         C188 +
                     (C4622 * C189 + C27996 * C194 + C4623 * C190 +
                      C27997 * C195 + C4624 * C191 + C4619 * C196) *
                         C28009) *
                        C27973 +
                    ((C4622 * C582 + C27996 * C590 + C4623 * C581 +
                      C27997 * C589 + C4624 * C580 + C4619 * C588) *
                         C188 +
                     (C4622 * C676 + C27996 * C680 + C4623 * C675 +
                      C27997 * C679 + C4624 * C674 + C4619 * C678) *
                         C28009) *
                        C27854) *
                       C27816 * C28010 * C77 -
                   (((C4624 * C673 + C4619 * C677 + C4623 * C674 +
                      C27997 * C678 + C4622 * C675 + C27996 * C679) *
                         C28009 +
                     (C4624 * C579 + C4619 * C587 + C4623 * C580 +
                      C27997 * C588 + C4622 * C581 + C27996 * C589) *
                         C188) *
                        C27854 +
                    ((C4624 * C192 + C4619 * C197 + C4623 * C191 +
                      C27997 * C196 + C4622 * C190 + C27996 * C195) *
                         C28009 +
                     (C4624 * C92 + C4619 * C97 + C4623 * C91 + C27997 * C96 +
                      C4622 * C90 + C27996 * C95) *
                         C188) *
                        C27973) *
                       C27816 * C28010 * C78)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) * C87 +
           (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) * C77 -
           (C4794 + C4795) * C88 - (C4796 + C4797) * C78) *
              C27816 * C27996 +
          ((C4795 + C4794) * C87 + (C4797 + C4796) * C77 -
           (C4798 + C4799) * C88 - (C4800 + C4801) * C78) *
              C27816 * C27997 +
          ((C4799 + C4798) * C87 + (C4801 + C4800) * C77 -
           (C4776 * C579 + C27854 * C715 + C4775 * C92 + C27973 * C237) * C88 -
           (C4776 * C583 + C27854 * C719 + C4775 * C101 + C27973 * C242) *
               C78) *
              C27816 * C4619) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C143 +
            (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                C28010) *
               C27816 * C27996 +
           ((C4795 + C4794) * C143 + (C4860 + C4861) * C28010) * C27816 *
               C27997 +
           ((C4799 + C4798) * C143 + (C4862 + C4863) * C28010) * C27816 *
               C4619) *
              C77 -
          (((C4776 * C631 + C27854 * C760 + C4775 * C147 + C27973 * C299) *
                C28010 +
            (C4776 * C579 + C27854 * C715 + C4775 * C92 + C27973 * C237) *
                C143) *
               C27816 * C4619 +
           ((C4863 + C4862) * C28010 + (C4798 + C4799) * C143) * C27816 *
               C27997 +
           ((C4861 + C4860) * C28010 + (C4794 + C4795) * C143) * C27816 *
               C27996) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C188 +
            (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                C28009) *
               C27816 * C27996 +
           ((C4795 + C4794) * C188 + (C4922 + C4923) * C28009) * C27816 *
               C27997 +
           ((C4799 + C4798) * C188 + (C4924 + C4925) * C28009) * C27816 *
               C4619) *
              C28010 * C77 -
          (((C4776 * C673 + C27854 * C795 + C4775 * C192 + C27973 * C353) *
                C28009 +
            (C4776 * C579 + C27854 * C715 + C4775 * C92 + C27973 * C237) *
                C188) *
               C27816 * C4619 +
           ((C4925 + C4924) * C28009 + (C4798 + C4799) * C188) * C27816 *
               C27997 +
           ((C4923 + C4922) * C28009 + (C4794 + C4795) * C188) * C27816 *
               C27996) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C87 +
            (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
               C27996 +
           (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C27997 +
           (C430 * C87 + C431 * C77 - C432 * C88 - C433 * C78) * C4619) *
              C27973 +
          ((C2306 * C87 + C2307 * C77 - C1738 * C88 - C1739 * C78) * C27996 +
           (C1738 * C87 + C1739 * C77 - C4980 * C88 - C4981 * C78) * C27997 +
           (C4980 * C87 + C4981 * C77 - (C404 * C579 + C27816 * C833) * C88 -
            (C404 * C583 + C27816 * C837) * C78) *
               C4619) *
              C27854) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C404 * C89 + C27816 * C405) * C143 +
                      (C404 * C144 + C27816 * C467) * C28010) *
                         C27996 +
                     (C473 + C485) * C27997 + (C476 + C486) * C4619) *
                        C27973 +
                    ((C2306 * C143 + C2370 * C28010) * C27996 +
                     (C1795 + C1803) * C27997 + (C5032 + C5036) * C4619) *
                        C27854) *
                       C77 -
                   ((((C404 * C631 + C27816 * C878) * C28010 +
                      (C404 * C579 + C27816 * C833) * C143) *
                         C4619 +
                     (C5036 + C5032) * C27997 + (C1803 + C1795) * C27996) *
                        C27854 +
                    ((C487 + C479) * C4619 + (C486 + C476) * C27997 +
                     (C485 + C473) * C27996) *
                        C27973) *
                       C78) *
                  C28009) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C404 * C89 + C27816 * C405) * C188 +
                      (C404 * C189 + C27816 * C521) * C28009) *
                         C27996 +
                     (C527 + C539) * C27997 + (C530 + C540) * C4619) *
                        C27973 +
                    ((C2424 + C2432) * C27996 + (C1858 + C1866) * C27997 +
                     (C5087 + C5091) * C4619) *
                        C27854) *
                       C28010 * C77 -
                   ((((C404 * C673 + C27816 * C913) * C28009 +
                      (C404 * C579 + C27816 * C833) * C188) *
                         C4619 +
                     (C5091 + C5087) * C27997 + (C1866 + C1858) * C27996) *
                        C27854 +
                    ((C541 + C533) * C4619 + (C540 + C530) * C27997 +
                     (C539 + C527) * C27996) *
                        C27973) *
                       C28010 * C78)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C578 +
            (C4622 * C98 + C27996 * C104 + C4623 * C99 + C27997 * C105 +
             C4624 * C100 + C4619 * C106) *
                C28008) *
               C27973 +
           ((C5154 + C5155 + C5156) * C578 + (C5157 + C5158 + C5159) * C28008) *
               C27854) *
              C27816 * C28009 * C576 -
          (((C4624 * C1356 + C4619 * C1359 + C4623 * C1354 + C27997 * C1358 +
             C4622 * C1353 + C27996 * C1357) *
                C28008 +
            (C4624 * C1350 + C4619 * C1355 + C4623 * C1349 + C27997 * C1352 +
             C4622 * C1348 + C27996 * C1351) *
                C578) *
               C27854 +
           ((C5159 + C5158 + C5157) * C28008 + (C5156 + C5155 + C5154) * C578) *
               C27973) *
              C27816 * C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
            C4624 * C91 + C4619 * C96) *
               C629 +
           (C4622 * C144 + C27996 * C149 + C4623 * C145 + C27997 * C150 +
            C4624 * C146 + C4619 * C151) *
               C576 -
           (C5156 + C5155 + C5154) * C630 - (C5216 + C5217 + C5218) * C577) *
              C27973 +
          ((C5154 + C5155 + C5156) * C629 + (C5218 + C5217 + C5216) * C576 -
           (C4624 * C1350 + C4619 * C1355 + C4623 * C1349 + C27997 * C1352 +
            C4622 * C1348 + C27996 * C1351) *
               C630 -
           (C4624 * C1412 + C4619 * C1415 + C4623 * C1411 + C27997 * C1414 +
            C4622 * C1410 + C27996 * C1413) *
               C577) *
              C27854) *
         C27816 * C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C188 +
            (C4622 * C189 + C27996 * C194 + C4623 * C190 + C27997 * C195 +
             C4624 * C191 + C4619 * C196) *
                C28009) *
               C27973 +
           ((C5154 + C5155 + C5156) * C188 + (C5275 + C5276 + C5277) * C28009) *
               C27854) *
              C27816 * C576 -
          (((C4624 * C1468 + C4619 * C1471 + C4623 * C1467 + C27997 * C1470 +
             C4622 * C1466 + C27996 * C1469) *
                C28009 +
            (C4624 * C1350 + C4619 * C1355 + C4623 * C1349 + C27997 * C1352 +
             C4622 * C1348 + C27996 * C1351) *
                C188) *
               C27854 +
           ((C5277 + C5276 + C5275) * C28009 + (C5156 + C5155 + C5154) * C188) *
               C27973) *
              C27816 * C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C578 +
            (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                C28008) *
               C27816 * C27996 +
           ((C4795 + C4794) * C578 + (C4797 + C4796) * C28008) * C27816 *
               C27997 +
           ((C4799 + C4798) * C578 + (C4801 + C4800) * C28008) * C27816 *
               C4619) *
              C28009 * C576 -
          (((C4776 * C1356 + C27854 * C1530 + C4775 * C584 + C27973 * C720) *
                C28008 +
            (C4776 * C1350 + C27854 * C1527 + C4775 * C580 + C27973 * C716) *
                C578) *
               C27816 * C4619 +
           ((C4776 * C1354 + C27854 * C1529 + C4775 * C585 + C27973 * C721) *
                C28008 +
            (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                C578) *
               C27816 * C27997 +
           ((C4776 * C1353 + C27854 * C1528 + C4775 * C586 + C27973 * C722) *
                C28008 +
            (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                C578) *
               C27816 * C27996) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) * C629 +
           (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
               C576 -
           (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
               C630 -
           (C4776 * C1410 + C27854 * C1599 + C4775 * C634 + C27973 * C757) *
               C577) *
              C27816 * C27996 +
          ((C4795 + C4794) * C629 + (C4860 + C4861) * C576 -
           (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
               C630 -
           (C4776 * C1411 + C27854 * C1600 + C4775 * C633 + C27973 * C758) *
               C577) *
              C27816 * C27997 +
          ((C4799 + C4798) * C629 + (C4862 + C4863) * C576 -
           (C4776 * C1350 + C27854 * C1527 + C4775 * C580 + C27973 * C716) *
               C630 -
           (C4776 * C1412 + C27854 * C1601 + C4775 * C632 + C27973 * C759) *
               C577) *
              C27816 * C4619) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C188 +
            (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                C28009) *
               C27816 * C27996 +
           ((C4795 + C4794) * C188 + (C4922 + C4923) * C28009) * C27816 *
               C27997 +
           ((C4799 + C4798) * C188 + (C4924 + C4925) * C28009) * C27816 *
               C4619) *
              C576 -
          (((C4776 * C1468 + C27854 * C1663 + C4775 * C674 + C27973 * C796) *
                C28009 +
            (C4776 * C1350 + C27854 * C1527 + C4775 * C580 + C27973 * C716) *
                C188) *
               C27816 * C4619 +
           ((C4776 * C1467 + C27854 * C1662 + C4775 * C675 + C27973 * C797) *
                C28009 +
            (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                C188) *
               C27816 * C27997 +
           ((C4776 * C1466 + C27854 * C1661 + C4775 * C676 + C27973 * C798) *
                C28009 +
            (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                C188) *
               C27816 * C27996) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C404 * C89 + C27816 * C405) * C578 +
                      (C404 * C98 + C27816 * C410) * C28008) *
                         C27996 +
                     (C428 * C578 + C429 * C28008) * C27997 +
                     (C430 * C578 + C431 * C28008) * C4619) *
                        C27973 +
                    ((C2310 + C2311) * C27996 + (C2298 + C2299) * C27997 +
                     (C5478 + C5479) * C4619) *
                        C27854) *
                       C28009 * C576 -
                   ((((C404 * C1356 + C27816 * C1728) * C28008 +
                      (C404 * C1350 + C27816 * C1725) * C578) *
                         C4619 +
                     (C2305 + C2304) * C27997 + (C2313 + C2312) * C27996) *
                        C27854 +
                    ((C5479 + C5478) * C4619 + (C2299 + C2298) * C27997 +
                     (C2311 + C2310) * C27996) *
                        C27973) *
                       C28009 * C577)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C629 +
            (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 -
            C2370 * C577) *
               C27996 +
           (C428 * C629 + C482 * C576 - C1738 * C630 - C1801 * C577) * C27997 +
           (C430 * C629 + C483 * C576 - C4980 * C630 - C5035 * C577) * C4619) *
              C27973 +
          ((C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) *
               C27996 +
           (C1738 * C629 + C1801 * C576 - C1740 * C630 - C1802 * C577) *
               C27997 +
           (C4980 * C629 + C5035 * C576 -
            (C404 * C1350 + C27816 * C1725) * C630 -
            (C404 * C1412 + C27816 * C1793) * C577) *
               C4619) *
              C27854) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C404 * C89 + C27816 * C405) * C188 +
                      (C404 * C189 + C27816 * C521) * C28009) *
                         C27996 +
                     (C527 + C539) * C27997 + (C530 + C540) * C4619) *
                        C27973 +
                    ((C2424 + C2432) * C27996 + (C1858 + C1866) * C27997 +
                     (C5087 + C5091) * C4619) *
                        C27854) *
                       C576 -
                   ((((C404 * C1468 + C27816 * C1856) * C28009 +
                      (C404 * C1350 + C27816 * C1725) * C188) *
                         C4619 +
                     (C1867 + C1861) * C27997 + (C2433 + C2427) * C27996) *
                        C27854 +
                    ((C5091 + C5087) * C4619 + (C1866 + C1858) * C27997 +
                     (C2432 + C2424) * C27996) *
                        C27973) *
                       C577) *
                  C28008) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C578 +
            (C4622 * C98 + C27996 * C104 + C4623 * C99 + C27997 * C105 +
             C4624 * C100 + C4619 * C106) *
                C28008) *
               C27973 +
           ((C5154 + C5155 + C5156) * C578 + (C5157 + C5158 + C5159) * C28008) *
               C27854) *
              C27816 * C951 -
          (((C4624 * C5630 + C4619 * C5632 + C4623 * C2491 + C27997 * C2497 +
             C4622 * C2492 + C27996 * C2498) *
                C28008 +
            (C4624 * C5629 + C4619 * C5631 + C4623 * C2485 + C27997 * C2493 +
             C4622 * C2486 + C27996 * C2494) *
                C578) *
               C27854 +
           ((C4624 * C958 + C4619 * C966 + C4623 * C959 + C27997 * C967 +
             C4622 * C960 + C27996 * C968) *
                C28008 +
            (C4624 * C954 + C4619 * C962 + C4623 * C955 + C27997 * C963 +
             C4622 * C956 + C27996 * C964) *
                C578) *
               C27973) *
              C27816 * C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C143 +
            (C4622 * C144 + C27996 * C149 + C4623 * C145 + C27997 * C150 +
             C4624 * C146 + C4619 * C151) *
                C28010) *
               C27973 +
           ((C5154 + C5155 + C5156) * C143 + (C5218 + C5217 + C5216) * C28010) *
               C27854) *
              C27816 * C28008 * C951 -
          (((C4624 * C5683 + C4619 * C5684 + C4623 * C2551 + C27997 * C2555 +
             C4622 * C2552 + C27996 * C2556) *
                C28010 +
            (C4624 * C5629 + C4619 * C5631 + C4623 * C2485 + C27997 * C2493 +
             C4622 * C2486 + C27996 * C2494) *
                C143) *
               C27854 +
           ((C4624 * C1004 + C4619 * C1008 + C4623 * C1005 + C27997 * C1009 +
             C4622 * C1006 + C27996 * C1010) *
                C28010 +
            (C4624 * C954 + C4619 * C962 + C4623 * C955 + C27997 * C963 +
             C4622 * C956 + C27996 * C964) *
                C143) *
               C27973) *
              C27816 * C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
            C4624 * C91 + C4619 * C96) *
               C1045 +
           (C4622 * C189 + C27996 * C194 + C4623 * C190 + C27997 * C195 +
            C4624 * C191 + C4619 * C196) *
               C951 -
           (C4624 * C954 + C4619 * C962 + C4623 * C955 + C27997 * C963 +
            C4622 * C956 + C27996 * C964) *
               C1046 -
           (C4624 * C1048 + C4619 * C1052 + C4623 * C1049 + C27997 * C1053 +
            C4622 * C1050 + C27996 * C1054) *
               C952) *
              C27973 +
          ((C5154 + C5155 + C5156) * C1045 + (C5275 + C5276 + C5277) * C951 -
           (C4624 * C5629 + C4619 * C5631 + C4623 * C2485 + C27997 * C2493 +
            C4622 * C2486 + C27996 * C2494) *
               C1046 -
           (C4624 * C5735 + C4619 * C5736 + C4623 * C2607 + C27997 * C2611 +
            C4622 * C2608 + C27996 * C2612) *
               C952) *
              C27854) *
         C27816 * C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C578 +
            (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                C28008) *
               C27816 * C27996 +
           ((C4795 + C4794) * C578 + (C4797 + C4796) * C28008) * C27816 *
               C27997 +
           ((C4799 + C4798) * C578 + (C4801 + C4800) * C28008) * C27816 *
               C4619) *
              C951 -
          (((C4776 * C5630 + C27854 * C5788 + C4775 * C958 + C27973 * C1094) *
                C28008 +
            (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                C578) *
               C27816 * C4619 +
           ((C4776 * C2491 + C27854 * C2670 + C4775 * C959 + C27973 * C1095) *
                C28008 +
            (C4776 * C2485 + C27854 * C2666 + C4775 * C955 + C27973 * C1091) *
                C578) *
               C27816 * C27997 +
           ((C4776 * C2492 + C27854 * C2672 + C4775 * C960 + C27973 * C1096) *
                C28008 +
            (C4776 * C2486 + C27854 * C2668 + C4775 * C956 + C27973 * C1092) *
                C578) *
               C27816 * C27996) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C143 +
            (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                C28010) *
               C27816 * C27996 +
           ((C4795 + C4794) * C143 + (C4860 + C4861) * C28010) * C27816 *
               C27997 +
           ((C4799 + C4798) * C143 + (C4862 + C4863) * C28010) * C27816 *
               C4619) *
              C28008 * C951 -
          (((C4776 * C5683 + C27854 * C5839 + C4775 * C1004 + C27973 * C1132) *
                C28010 +
            (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                C143) *
               C27816 * C4619 +
           ((C4776 * C2551 + C27854 * C2724 + C4775 * C1005 + C27973 * C1133) *
                C28010 +
            (C4776 * C2485 + C27854 * C2666 + C4775 * C955 + C27973 * C1091) *
                C143) *
               C27816 * C27997 +
           ((C4776 * C2552 + C27854 * C2726 + C4775 * C1006 + C27973 * C1134) *
                C28010 +
            (C4776 * C2486 + C27854 * C2668 + C4775 * C956 + C27973 * C1092) *
                C143) *
               C27816 * C27996) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
               C1045 +
           (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
               C951 -
           (C4776 * C2486 + C27854 * C2668 + C4775 * C956 + C27973 * C1092) *
               C1046 -
           (C4776 * C2608 + C27854 * C2778 + C4775 * C1050 + C27973 * C1169) *
               C952) *
              C27816 * C27996 +
          ((C4795 + C4794) * C1045 + (C4922 + C4923) * C951 -
           (C4776 * C2485 + C27854 * C2666 + C4775 * C955 + C27973 * C1091) *
               C1046 -
           (C4776 * C2607 + C27854 * C2780 + C4775 * C1049 + C27973 * C1170) *
               C952) *
              C27816 * C27997 +
          ((C4799 + C4798) * C1045 + (C4924 + C4925) * C951 -
           (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
               C1046 -
           (C4776 * C5735 + C27854 * C5890 + C4775 * C1048 + C27973 * C1171) *
               C952) *
              C27816 * C4619) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C404 * C89 + C27816 * C405) * C578 +
                      (C404 * C98 + C27816 * C410) * C28008) *
                         C27996 +
                     (C428 * C578 + C429 * C28008) * C27997 +
                     (C430 * C578 + C431 * C28008) * C4619) *
                        C27973 +
                    ((C2310 + C2311) * C27996 + (C2298 + C2299) * C27997 +
                     (C5478 + C5479) * C4619) *
                        C27854) *
                       C951 -
                   ((((C404 * C5630 + C27816 * C5942) * C28008 +
                      (C404 * C5629 + C27816 * C5941) * C578) *
                         C4619 +
                     ((C404 * C2491 + C27816 * C2837) * C28008 +
                      (C404 * C2485 + C27816 * C2833) * C578) *
                         C27997 +
                     ((C404 * C2492 + C27816 * C2838) * C28008 +
                      (C404 * C2486 + C27816 * C2834) * C578) *
                         C27996) *
                        C27854 +
                    (((C404 * C958 + C27816 * C1212) * C28008 +
                      (C404 * C954 + C27816 * C1208) * C578) *
                         C4619 +
                     ((C404 * C959 + C27816 * C1213) * C28008 +
                      (C404 * C955 + C27816 * C1209) * C578) *
                         C27997 +
                     ((C404 * C960 + C27816 * C1214) * C28008 +
                      (C404 * C956 + C27816 * C1210) * C578) *
                         C27996) *
                        C27973) *
                       C952) *
                  C28010) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((((C404 * C89 + C27816 * C405) * C143 +
                      (C404 * C144 + C27816 * C467) * C28010) *
                         C27996 +
                     (C473 + C485) * C27997 + (C476 + C486) * C4619) *
                        C27973 +
                    ((C2306 * C143 + C2370 * C28010) * C27996 +
                     (C1795 + C1803) * C27997 + (C5032 + C5036) * C4619) *
                        C27854) *
                       C28008 * C951 -
                   ((((C404 * C5683 + C27816 * C5993) * C28010 +
                      (C404 * C5629 + C27816 * C5941) * C143) *
                         C4619 +
                     ((C404 * C2551 + C27816 * C2891) * C28010 +
                      (C404 * C2485 + C27816 * C2833) * C143) *
                         C27997 +
                     ((C404 * C2552 + C27816 * C2892) * C28010 +
                      (C404 * C2486 + C27816 * C2834) * C143) *
                         C27996) *
                        C27854 +
                    (((C404 * C1004 + C27816 * C1250) * C28010 +
                      (C404 * C954 + C27816 * C1208) * C143) *
                         C4619 +
                     ((C404 * C1005 + C27816 * C1251) * C28010 +
                      (C404 * C955 + C27816 * C1209) * C143) *
                         C27997 +
                     ((C404 * C1006 + C27816 * C1252) * C28010 +
                      (C404 * C956 + C27816 * C1210) * C143) *
                         C27996) *
                        C27973) *
                       C28008 * C952)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C404 * C89 + C27816 * C405) * C1045 +
                     (C404 * C189 + C27816 * C521) * C951 -
                     (C404 * C956 + C27816 * C1210) * C1046 -
                     (C404 * C1050 + C27816 * C1287) * C952) *
                        C27996 +
                    (C428 * C1045 + C536 * C951 -
                     (C404 * C955 + C27816 * C1209) * C1046 -
                     (C404 * C1049 + C27816 * C1288) * C952) *
                        C27997 +
                    (C430 * C1045 + C537 * C951 -
                     (C404 * C954 + C27816 * C1208) * C1046 -
                     (C404 * C1048 + C27816 * C1289) * C952) *
                        C4619) *
                       C27973 +
                   ((C2306 * C1045 + C2430 * C951 -
                     (C404 * C2486 + C27816 * C2834) * C1046 -
                     (C404 * C2608 + C27816 * C2943) * C952) *
                        C27996 +
                    (C1738 * C1045 + C1864 * C951 -
                     (C404 * C2485 + C27816 * C2833) * C1046 -
                     (C404 * C2607 + C27816 * C2944) * C952) *
                        C27997 +
                    (C4980 * C1045 + C5090 * C951 -
                     (C404 * C5629 + C27816 * C5941) * C1046 -
                     (C404 * C5735 + C27816 * C6044) * C952) *
                        C4619) *
                       C27854) *
                  C28010 * C28008) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C87 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) * C77 -
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C88 -
            (C1347 * C100 + C27768 * C106 + C1346 * C99 + C1341 * C105) * C78) *
               C27973 +
           ((C1942 + C1943) * C87 + (C1944 + C1945) * C77 -
            (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) * C88 -
            (C1347 * C584 + C27768 * C592 + C1346 * C585 + C1341 * C593) *
                C78) *
               C27854) *
              C27974 +
          (((C4076 + C4077) * C87 + (C4078 + C4079) * C77 -
            (C1347 * C954 + C27768 * C962 + C1346 * C955 + C1341 * C963) * C88 -
            (C1347 * C958 + C27768 * C966 + C1346 * C959 + C1341 * C967) *
                C78) *
               C27973 +
           ((C1346 * C2486 + C1341 * C2494 + C1347 * C2485 + C27768 * C2493) *
                C87 +
            (C1346 * C2492 + C1341 * C2498 + C1347 * C2491 + C27768 * C2497) *
                C77 -
            (C1347 * C5629 + C27768 * C5631 + C1346 * C2485 + C1341 * C2493) *
                C88 -
            (C1347 * C5630 + C27768 * C5632 + C1346 * C2491 + C1341 * C2497) *
                C78) *
               C27854) *
              C27880) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
             (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                 C28010) *
                C27973 +
            ((C1942 + C1943) * C143 + (C2013 + C2012) * C28010) * C27854) *
               C27974 +
           (((C4076 + C4077) * C143 + (C4146 + C4147) * C28010) * C27973 +
            ((C1346 * C2486 + C1341 * C2494 + C1347 * C2485 + C27768 * C2493) *
                 C143 +
             (C1346 * C2552 + C1341 * C2556 + C1347 * C2551 + C27768 * C2555) *
                 C28010) *
                C27854) *
               C27880) *
              C77 -
          ((((C1347 * C5683 + C27768 * C5684 + C1346 * C2551 + C1341 * C2555) *
                 C28010 +
             (C1347 * C5629 + C27768 * C5631 + C1346 * C2485 + C1341 * C2493) *
                 C143) *
                C27854 +
            ((C1347 * C1004 + C27768 * C1008 + C1346 * C1005 + C1341 * C1009) *
                 C28010 +
             (C1347 * C954 + C27768 * C962 + C1346 * C955 + C1341 * C963) *
                 C143) *
                C27973) *
               C27880 +
           (((C1347 * C632 + C27768 * C636 + C1346 * C633 + C1341 * C637) *
                 C28010 +
             (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) *
                 C143) *
                C27854 +
            ((C1347 * C146 + C27768 * C151 + C1346 * C145 + C1341 * C150) *
                 C28010 +
             (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C143) *
                C27973) *
               C27974) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
             (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                 C28009) *
                C27973 +
            ((C1942 + C1943) * C188 + (C2078 + C2079) * C28009) * C27854) *
               C27974 +
           (((C4076 + C4077) * C188 + (C4213 + C4212) * C28009) * C27973 +
            ((C1346 * C2486 + C1341 * C2494 + C1347 * C2485 + C27768 * C2493) *
                 C188 +
             (C1346 * C2608 + C1341 * C2612 + C1347 * C2607 + C27768 * C2611) *
                 C28009) *
                C27854) *
               C27880) *
              C28010 * C77 -
          ((((C1347 * C5735 + C27768 * C5736 + C1346 * C2607 + C1341 * C2611) *
                 C28009 +
             (C1347 * C5629 + C27768 * C5631 + C1346 * C2485 + C1341 * C2493) *
                 C188) *
                C27854 +
            ((C1347 * C1048 + C27768 * C1052 + C1346 * C1049 + C1341 * C1053) *
                 C28009 +
             (C1347 * C954 + C27768 * C962 + C1346 * C955 + C1341 * C963) *
                 C188) *
                C27973) *
               C27880 +
           (((C1347 * C674 + C27768 * C678 + C1346 * C675 + C1341 * C679) *
                 C28009 +
             (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) *
                 C188) *
                C27854 +
            ((C1347 * C191 + C27768 * C196 + C1346 * C190 + C1341 * C195) *
                 C28009 +
             (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C188) *
                C27973) *
               C27974) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) * C87 +
            (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) * C77 -
            (C4794 + C4795) * C88 - (C4796 + C4797) * C78) *
               C27974 +
           ((C4775 * C956 + C27973 * C1092 + C4776 * C2486 + C27854 * C2668) *
                C87 +
            (C4775 * C960 + C27973 * C1096 + C4776 * C2492 + C27854 * C2672) *
                C77 -
            (C7774 + C7775) * C88 - (C7776 + C7777) * C78) *
               C27880) *
              C1341 +
          (((C4795 + C4794) * C87 + (C4797 + C4796) * C77 -
            (C4798 + C4799) * C88 - (C4800 + C4801) * C78) *
               C27974 +
           ((C7775 + C7774) * C87 + (C7777 + C7776) * C77 -
            (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                C88 -
            (C4776 * C5630 + C27854 * C5788 + C4775 * C958 + C27973 * C1094) *
                C78) *
               C27880) *
              C27768) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C143 +
             (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                 C28010) *
                C27974 +
            ((C4775 * C956 + C27973 * C1092 + C4776 * C2486 + C27854 * C2668) *
                 C143 +
             (C4775 * C1006 + C27973 * C1134 + C4776 * C2552 + C27854 * C2726) *
                 C28010) *
                C27880) *
               C1341 +
           (((C4795 + C4794) * C143 + (C4860 + C4861) * C28010) * C27974 +
            ((C7775 + C7774) * C143 + (C7848 + C7849) * C28010) * C27880) *
               C27768) *
              C77 -
          ((((C4776 * C5683 + C27854 * C5839 + C4775 * C1004 + C27973 * C1132) *
                 C28010 +
             (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                 C143) *
                C27880 +
            ((C4863 + C4862) * C28010 + (C4798 + C4799) * C143) * C27974) *
               C27768 +
           (((C7849 + C7848) * C28010 + (C7774 + C7775) * C143) * C27880 +
            ((C4861 + C4860) * C28010 + (C4794 + C4795) * C143) * C27974) *
               C1341) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C188 +
             (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                 C28009) *
                C27974 +
            ((C4775 * C956 + C27973 * C1092 + C4776 * C2486 + C27854 * C2668) *
                 C188 +
             (C4775 * C1050 + C27973 * C1169 + C4776 * C2608 + C27854 * C2778) *
                 C28009) *
                C27880) *
               C1341 +
           (((C4795 + C4794) * C188 + (C4922 + C4923) * C28009) * C27974 +
            ((C7775 + C7774) * C188 + (C7920 + C7921) * C28009) * C27880) *
               C27768) *
              C28010 * C77 -
          ((((C4776 * C5735 + C27854 * C5890 + C4775 * C1048 + C27973 * C1171) *
                 C28009 +
             (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                 C188) *
                C27880 +
            ((C4925 + C4924) * C28009 + (C4798 + C4799) * C188) * C27974) *
               C27768 +
           (((C7921 + C7920) * C28009 + (C7774 + C7775) * C188) * C27880 +
            ((C4923 + C4922) * C28009 + (C4794 + C4795) * C188) * C27974) *
               C1341) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C87 +
            (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                C77 -
            (C6432 + C6433) * C88 - (C6434 + C6435) * C78) *
               C1341 +
           ((C6433 + C6432) * C87 + (C6435 + C6434) * C77 -
            (C6436 + C6437) * C88 - (C6438 + C6439) * C78) *
               C27768) *
              C27973 +
          (((C6413 * C582 + C27974 * C836 + C6414 * C2486 + C27880 * C2834) *
                C87 +
            (C6413 * C586 + C27974 * C840 + C6414 * C2492 + C27880 * C2838) *
                C77 -
            (C7996 + C7997) * C88 - (C7998 + C7999) * C78) *
               C1341 +
           ((C7997 + C7996) * C87 + (C7999 + C7998) * C77 -
            (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                C88 -
            (C6414 * C5630 + C27880 * C5942 + C6413 * C584 + C27974 * C838) *
                C78) *
               C27768) *
              C27854) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C143 +
             (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                 C28010) *
                C1341 +
            ((C6433 + C6432) * C143 + (C6498 + C6499) * C28010) * C27768) *
               C27973 +
           (((C6413 * C582 + C27974 * C836 + C6414 * C2486 + C27880 * C2834) *
                 C143 +
             (C6413 * C634 + C27974 * C875 + C6414 * C2552 + C27880 * C2892) *
                 C28010) *
                C1341 +
            ((C7997 + C7996) * C143 + (C8070 + C8071) * C28010) * C27768) *
               C27854) *
              C77 -
          ((((C6414 * C5683 + C27880 * C5993 + C6413 * C632 + C27974 * C877) *
                 C28010 +
             (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                 C143) *
                C27768 +
            ((C8071 + C8070) * C28010 + (C7996 + C7997) * C143) * C1341) *
               C27854 +
           (((C6501 + C6500) * C28010 + (C6436 + C6437) * C143) * C27768 +
            ((C6499 + C6498) * C28010 + (C6432 + C6433) * C143) * C1341) *
               C27973) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C188 +
             (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                 C28009) *
                C1341 +
            ((C6433 + C6432) * C188 + (C6560 + C6561) * C28009) * C27768) *
               C27973 +
           (((C6413 * C582 + C27974 * C836 + C6414 * C2486 + C27880 * C2834) *
                 C188 +
             (C6413 * C676 + C27974 * C916 + C6414 * C2608 + C27880 * C2943) *
                 C28009) *
                C1341 +
            ((C7997 + C7996) * C188 + (C8142 + C8143) * C28009) * C27768) *
               C27854) *
              C28010 * C77 -
          ((((C6414 * C5735 + C27880 * C6044 + C6413 * C674 + C27974 * C914) *
                 C28009 +
             (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                 C188) *
                C27768 +
            ((C8143 + C8142) * C28009 + (C7996 + C7997) * C188) * C1341) *
               C27854 +
           (((C6563 + C6562) * C28009 + (C6436 + C6437) * C188) * C27768 +
            ((C6561 + C6560) * C28009 + (C6432 + C6433) * C188) * C1341) *
               C27973) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
             (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                 C28008) *
                C27973 +
            ((C1942 + C1943) * C578 + (C1944 + C1945) * C28008) * C27854) *
               C27974 +
           (((C4076 + C4077) * C578 + (C4078 + C4079) * C28008) * C27973 +
            ((C8218 + C8219) * C578 + (C8220 + C8221) * C28008) * C27854) *
               C27880) *
              C28009 * C576 -
          ((((C1347 * C2487 + C27768 * C2495 + C1346 * C2488 + C1341 * C2496) *
                 C28008 +
             (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                 C578) *
                C27854 +
            ((C8221 + C8220) * C28008 + (C8219 + C8218) * C578) * C27973) *
               C27880 +
           (((C1949 + C1948) * C28008 + (C1947 + C1946) * C578) * C27854 +
            ((C1945 + C1944) * C28008 + (C1943 + C1942) * C578) * C27973) *
               C27974) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C629 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C576 -
            (C1943 + C1942) * C630 - (C2012 + C2013) * C577) *
               C27973 +
           ((C1942 + C1943) * C629 + (C2013 + C2012) * C576 -
            (C1947 + C1946) * C630 - (C2014 + C2015) * C577) *
               C27854) *
              C27974 +
          (((C4076 + C4077) * C629 + (C4146 + C4147) * C576 -
            (C8219 + C8218) * C630 - (C8292 + C8293) * C577) *
               C27973 +
           ((C8218 + C8219) * C629 + (C8293 + C8292) * C576 -
            (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                C630 -
            (C1347 * C2549 + C27768 * C2553 + C1346 * C2550 + C1341 * C2554) *
                C577) *
               C27854) *
              C27880) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
             (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                 C28009) *
                C27973 +
            ((C1942 + C1943) * C188 + (C2078 + C2079) * C28009) * C27854) *
               C27974 +
           (((C4076 + C4077) * C188 + (C4213 + C4212) * C28009) * C27973 +
            ((C8218 + C8219) * C188 + (C8364 + C8365) * C28009) * C27854) *
               C27880) *
              C576 -
          ((((C1347 * C2609 + C27768 * C2613 + C1346 * C2610 + C1341 * C2614) *
                 C28009 +
             (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                 C188) *
                C27854 +
            ((C8365 + C8364) * C28009 + (C8219 + C8218) * C188) * C27973) *
               C27880 +
           (((C2081 + C2080) * C28009 + (C1947 + C1946) * C188) * C27854 +
            ((C2079 + C2078) * C28009 + (C1943 + C1942) * C188) * C27973) *
               C27974) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C578 +
             (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                 C28008) *
                C27974 +
            ((C4775 * C956 + C27973 * C1092 + C4776 * C2486 + C27854 * C2668) *
                 C578 +
             (C4775 * C960 + C27973 * C1096 + C4776 * C2492 + C27854 * C2672) *
                 C28008) *
                C27880) *
               C1341 +
           (((C4795 + C4794) * C578 + (C4797 + C4796) * C28008) * C27974 +
            ((C7775 + C7774) * C578 + (C7777 + C7776) * C28008) * C27880) *
               C27768) *
              C28009 * C576 -
          ((((C4776 * C2487 + C27854 * C2669 + C4775 * C2491 + C27973 * C2670) *
                 C28008 +
             (C4776 * C2483 + C27854 * C2665 + C4775 * C2485 + C27973 * C2666) *
                 C578) *
                C27880 +
            ((C4776 * C1354 + C27854 * C1529 + C4775 * C585 + C27973 * C721) *
                 C28008 +
             (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                 C578) *
                C27974) *
               C27768 +
           (((C4776 * C2488 + C27854 * C2671 + C4775 * C2492 + C27973 * C2672) *
                 C28008 +
             (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                 C578) *
                C27880 +
            ((C4776 * C1353 + C27854 * C1528 + C4775 * C586 + C27973 * C722) *
                 C28008 +
             (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                 C578) *
                C27974) *
               C1341) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C629 +
            (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                C576 -
            (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                C630 -
            (C4776 * C1410 + C27854 * C1599 + C4775 * C634 + C27973 * C757) *
                C577) *
               C27974 +
           ((C4775 * C956 + C27973 * C1092 + C4776 * C2486 + C27854 * C2668) *
                C629 +
            (C4775 * C1006 + C27973 * C1134 + C4776 * C2552 + C27854 * C2726) *
                C576 -
            (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                C630 -
            (C4776 * C2550 + C27854 * C2725 + C4775 * C2552 + C27973 * C2726) *
                C577) *
               C27880) *
              C1341 +
          (((C4795 + C4794) * C629 + (C4860 + C4861) * C576 -
            (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                C630 -
            (C4776 * C1411 + C27854 * C1600 + C4775 * C633 + C27973 * C758) *
                C577) *
               C27974 +
           ((C7775 + C7774) * C629 + (C7848 + C7849) * C576 -
            (C4776 * C2483 + C27854 * C2665 + C4775 * C2485 + C27973 * C2666) *
                C630 -
            (C4776 * C2549 + C27854 * C2723 + C4775 * C2551 + C27973 * C2724) *
                C577) *
               C27880) *
              C27768) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C188 +
             (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                 C28009) *
                C27974 +
            ((C4775 * C956 + C27973 * C1092 + C4776 * C2486 + C27854 * C2668) *
                 C188 +
             (C4775 * C1050 + C27973 * C1169 + C4776 * C2608 + C27854 * C2778) *
                 C28009) *
                C27880) *
               C1341 +
           (((C4795 + C4794) * C188 + (C4922 + C4923) * C28009) * C27974 +
            ((C7775 + C7774) * C188 + (C7920 + C7921) * C28009) * C27880) *
               C27768) *
              C576 -
          ((((C4776 * C2609 + C27854 * C2779 + C4775 * C2607 + C27973 * C2780) *
                 C28009 +
             (C4776 * C2483 + C27854 * C2665 + C4775 * C2485 + C27973 * C2666) *
                 C188) *
                C27880 +
            ((C4776 * C1467 + C27854 * C1662 + C4775 * C675 + C27973 * C797) *
                 C28009 +
             (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                 C188) *
                C27974) *
               C27768 +
           (((C4776 * C2610 + C27854 * C2777 + C4775 * C2608 + C27973 * C2778) *
                 C28009 +
             (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                 C188) *
                C27880 +
            ((C4776 * C1466 + C27854 * C1661 + C4775 * C676 + C27973 * C798) *
                 C28009 +
             (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                 C188) *
                C27974) *
               C1341) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C578 +
             (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                 C28008) *
                C1341 +
            ((C6433 + C6432) * C578 + (C6435 + C6434) * C28008) * C27768) *
               C27973 +
           (((C8638 + C8639) * C578 + (C8640 + C8641) * C28008) * C1341 +
            ((C7997 + C7996) * C578 + (C7999 + C7998) * C28008) * C27768) *
               C27854) *
              C28009 * C576 -
          ((((C6414 * C2487 + C27880 * C2835 + C6413 * C1354 + C27974 * C1727) *
                 C28008 +
             (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                 C578) *
                C27768 +
            ((C6414 * C2488 + C27880 * C2836 + C6413 * C1353 + C27974 * C1726) *
                 C28008 +
             (C6414 * C2484 + C27880 * C2832 + C6413 * C1348 + C27974 * C1723) *
                 C578) *
                C1341) *
               C27854 +
           (((C7998 + C7999) * C28008 + (C7996 + C7997) * C578) * C27768 +
            ((C8641 + C8640) * C28008 + (C8639 + C8638) * C578) * C1341) *
               C27973) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C629 +
            (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                C576 -
            (C8639 + C8638) * C630 - (C8712 + C8713) * C577) *
               C1341 +
           ((C6433 + C6432) * C629 + (C6498 + C6499) * C576 -
            (C7996 + C7997) * C630 - (C8071 + C8070) * C577) *
               C27768) *
              C27973 +
          (((C8638 + C8639) * C629 + (C8713 + C8712) * C576 -
            (C6414 * C2484 + C27880 * C2832 + C6413 * C1348 + C27974 * C1723) *
                C630 -
            (C6414 * C2550 + C27880 * C2890 + C6413 * C1410 + C27974 * C1791) *
                C577) *
               C1341 +
           ((C7997 + C7996) * C629 + (C8070 + C8071) * C576 -
            (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                C630 -
            (C6414 * C2549 + C27880 * C2889 + C6413 * C1411 + C27974 * C1792) *
                C577) *
               C27768) *
              C27854) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C188 +
             (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                 C28009) *
                C1341 +
            ((C6433 + C6432) * C188 + (C6560 + C6561) * C28009) * C27768) *
               C27973 +
           (((C8638 + C8639) * C188 + (C8784 + C8785) * C28009) * C1341 +
            ((C7997 + C7996) * C188 + (C8142 + C8143) * C28009) * C27768) *
               C27854) *
              C576 -
          ((((C6414 * C2609 + C27880 * C2946 + C6413 * C1467 + C27974 * C1855) *
                 C28009 +
             (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                 C188) *
                C27768 +
            ((C6414 * C2610 + C27880 * C2945 + C6413 * C1466 + C27974 * C1854) *
                 C28009 +
             (C6414 * C2484 + C27880 * C2832 + C6413 * C1348 + C27974 * C1723) *
                 C188) *
                C1341) *
               C27854 +
           (((C8143 + C8142) * C28009 + (C7996 + C7997) * C188) * C27768 +
            ((C8785 + C8784) * C28009 + (C8639 + C8638) * C188) * C1341) *
               C27973) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
             (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                 C28008) *
                C27973 +
            ((C1942 + C1943) * C578 + (C1944 + C1945) * C28008) * C27854) *
               C27974 +
           (((C4076 + C4077) * C578 + (C4078 + C4079) * C28008) * C27973 +
            ((C8218 + C8219) * C578 + (C8220 + C8221) * C28008) * C27854) *
               C27880) *
              C951 -
          ((((C1347 * C3571 + C27768 * C3575 + C1346 * C3572 + C1341 * C3576) *
                 C28008 +
             (C1347 * C3569 + C27768 * C3573 + C1346 * C3570 + C1341 * C3574) *
                 C578) *
                C27854 +
            ((C4083 + C4082) * C28008 + (C4081 + C4080) * C578) * C27973) *
               C27880 +
           (((C8221 + C8220) * C28008 + (C8219 + C8218) * C578) * C27854 +
            ((C4079 + C4078) * C28008 + (C4077 + C4076) * C578) * C27973) *
               C27974) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
             (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                 C28010) *
                C27973 +
            ((C1942 + C1943) * C143 + (C2013 + C2012) * C28010) * C27854) *
               C27974 +
           (((C4076 + C4077) * C143 + (C4146 + C4147) * C28010) * C27973 +
            ((C8218 + C8219) * C143 + (C8293 + C8292) * C28010) * C27854) *
               C27880) *
              C28008 * C951 -
          ((((C1347 * C3627 + C27768 * C3629 + C1346 * C3628 + C1341 * C3630) *
                 C28010 +
             (C1347 * C3569 + C27768 * C3573 + C1346 * C3570 + C1341 * C3574) *
                 C143) *
                C27854 +
            ((C4149 + C4148) * C28010 + (C4081 + C4080) * C143) * C27973) *
               C27880 +
           (((C8292 + C8293) * C28010 + (C8219 + C8218) * C143) * C27854 +
            ((C4147 + C4146) * C28010 + (C4077 + C4076) * C143) * C27973) *
               C27974) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C1045 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C951 -
            (C4077 + C4076) * C1046 - (C4212 + C4213) * C952) *
               C27973 +
           ((C1942 + C1943) * C1045 + (C2078 + C2079) * C951 -
            (C8219 + C8218) * C1046 - (C8365 + C8364) * C952) *
               C27854) *
              C27974 +
          (((C4076 + C4077) * C1045 + (C4213 + C4212) * C951 -
            (C4081 + C4080) * C1046 - (C4214 + C4215) * C952) *
               C27973 +
           ((C8218 + C8219) * C1045 + (C8364 + C8365) * C951 -
            (C1347 * C3569 + C27768 * C3573 + C1346 * C3570 + C1341 * C3574) *
                C1046 -
            (C1347 * C3681 + C27768 * C3683 + C1346 * C3682 + C1341 * C3684) *
                C952) *
               C27854) *
              C27880) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C578 +
             (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                 C28008) *
                C27974 +
            ((C9058 + C9059) * C578 + (C9060 + C9061) * C28008) * C27880) *
               C1341 +
           (((C4795 + C4794) * C578 + (C4797 + C4796) * C28008) * C27974 +
            ((C7775 + C7774) * C578 + (C7777 + C7776) * C28008) * C27880) *
               C27768) *
              C951 -
          ((((C4776 * C3571 + C27854 * C3737 + C4775 * C3006 + C27973 * C3178) *
                 C28008 +
             (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                 C578) *
                C27880 +
            ((C7776 + C7777) * C28008 + (C7774 + C7775) * C578) * C27974) *
               C27768 +
           (((C4776 * C3572 + C27854 * C3738 + C4775 * C3005 + C27973 * C3177) *
                 C28008 +
             (C4776 * C3570 + C27854 * C3736 + C4775 * C3000 + C27973 * C3174) *
                 C578) *
                C27880 +
            ((C9061 + C9060) * C28008 + (C9059 + C9058) * C578) * C27974) *
               C1341) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C143 +
             (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                 C28010) *
                C27974 +
            ((C9058 + C9059) * C143 + (C9132 + C9133) * C28010) * C27880) *
               C1341 +
           (((C4795 + C4794) * C143 + (C4860 + C4861) * C28010) * C27974 +
            ((C7775 + C7774) * C143 + (C7848 + C7849) * C28010) * C27880) *
               C27768) *
              C28008 * C951 -
          ((((C4776 * C3627 + C27854 * C3790 + C4775 * C3063 + C27973 * C3243) *
                 C28010 +
             (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                 C143) *
                C27880 +
            ((C7849 + C7848) * C28010 + (C7774 + C7775) * C143) * C27974) *
               C27768 +
           (((C4776 * C3628 + C27854 * C3789 + C4775 * C3062 + C27973 * C3242) *
                 C28010 +
             (C4776 * C3570 + C27854 * C3736 + C4775 * C3000 + C27973 * C3174) *
                 C143) *
                C27880 +
            ((C9133 + C9132) * C28010 + (C9059 + C9058) * C143) * C27974) *
               C1341) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C1045 +
            (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                C951 -
            (C9059 + C9058) * C1046 - (C9204 + C9205) * C952) *
               C27974 +
           ((C9058 + C9059) * C1045 + (C9205 + C9204) * C951 -
            (C4776 * C3570 + C27854 * C3736 + C4775 * C3000 + C27973 * C3174) *
                C1046 -
            (C4776 * C3682 + C27854 * C3842 + C4775 * C3118 + C27973 * C3305) *
                C952) *
               C27880) *
              C1341 +
          (((C4795 + C4794) * C1045 + (C4922 + C4923) * C951 -
            (C7774 + C7775) * C1046 - (C7921 + C7920) * C952) *
               C27974 +
           ((C7775 + C7774) * C1045 + (C7920 + C7921) * C951 -
            (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                C1046 -
            (C4776 * C3681 + C27854 * C3841 + C4775 * C3119 + C27973 * C3306) *
                C952) *
               C27880) *
              C27768) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C578 +
             (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                 C28008) *
                C1341 +
            ((C6433 + C6432) * C578 + (C6435 + C6434) * C28008) * C27768) *
               C27973 +
           (((C8638 + C8639) * C578 + (C8640 + C8641) * C28008) * C1341 +
            ((C7997 + C7996) * C578 + (C7999 + C7998) * C28008) * C27768) *
               C27854) *
              C951 -
          ((((C6414 * C3571 + C27880 * C3895 + C6413 * C2491 + C27974 * C2837) *
                 C28008 +
             (C6414 * C3569 + C27880 * C3893 + C6413 * C2485 + C27974 * C2833) *
                 C578) *
                C27768 +
            ((C6414 * C3572 + C27880 * C3896 + C6413 * C2492 + C27974 * C2838) *
                 C28008 +
             (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                 C578) *
                C1341) *
               C27854 +
           (((C6414 * C3006 + C27880 * C3375 + C6413 * C959 + C27974 * C1213) *
                 C28008 +
             (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                 C578) *
                C27768 +
            ((C6414 * C3005 + C27880 * C3374 + C6413 * C960 + C27974 * C1214) *
                 C28008 +
             (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                 C578) *
                C1341) *
               C27973) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C143 +
             (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                 C28010) *
                C1341 +
            ((C6433 + C6432) * C143 + (C6498 + C6499) * C28010) * C27768) *
               C27973 +
           (((C8638 + C8639) * C143 + (C8713 + C8712) * C28010) * C1341 +
            ((C7997 + C7996) * C143 + (C8070 + C8071) * C28010) * C27768) *
               C27854) *
              C28008 * C951 -
          ((((C6414 * C3627 + C27880 * C3948 + C6413 * C2551 + C27974 * C2891) *
                 C28010 +
             (C6414 * C3569 + C27880 * C3893 + C6413 * C2485 + C27974 * C2833) *
                 C143) *
                C27768 +
            ((C6414 * C3628 + C27880 * C3947 + C6413 * C2552 + C27974 * C2892) *
                 C28010 +
             (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                 C143) *
                C1341) *
               C27854 +
           (((C6414 * C3063 + C27880 * C3446 + C6413 * C1005 + C27974 * C1251) *
                 C28010 +
             (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                 C143) *
                C27768 +
            ((C6414 * C3062 + C27880 * C3445 + C6413 * C1006 + C27974 * C1252) *
                 C28010 +
             (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                 C143) *
                C1341) *
               C27973) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C1045 +
            (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                C951 -
            (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                C1046 -
            (C6414 * C3118 + C27880 * C3507 + C6413 * C1050 + C27974 * C1287) *
                C952) *
               C1341 +
           ((C6433 + C6432) * C1045 + (C6560 + C6561) * C951 -
            (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                C1046 -
            (C6414 * C3119 + C27880 * C3508 + C6413 * C1049 + C27974 * C1288) *
                C952) *
               C27768) *
              C27973 +
          (((C8638 + C8639) * C1045 + (C8784 + C8785) * C951 -
            (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                C1046 -
            (C6414 * C3682 + C27880 * C4000 + C6413 * C2608 + C27974 * C2943) *
                C952) *
               C1341 +
           ((C7997 + C7996) * C1045 + (C8142 + C8143) * C951 -
            (C6414 * C3569 + C27880 * C3893 + C6413 * C2485 + C27974 * C2833) *
                C1046 -
            (C6414 * C3681 + C27880 * C3999 + C6413 * C2607 + C27974 * C2944) *
                C952) *
               C27768) *
              C27854) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C87 +
           (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) * C77 -
           (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C88 -
           (C1347 * C100 + C27768 * C106 + C1346 * C99 + C1341 * C105) * C78) *
              C1343 +
          ((C1346 * C582 + C1341 * C590 + C1347 * C581 + C27768 * C589) * C87 +
           (C1346 * C586 + C1341 * C594 + C1347 * C585 + C27768 * C593) * C77 -
           (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) * C88 -
           (C1347 * C584 + C27768 * C592 + C1346 * C585 + C1341 * C593) * C78) *
              C1344 +
          ((C1346 * C1348 + C1341 * C1351 + C1347 * C1349 + C27768 * C1352) *
               C87 +
           (C1346 * C1353 + C1341 * C1357 + C1347 * C1354 + C27768 * C1358) *
               C77 -
           (C1347 * C1350 + C27768 * C1355 + C1346 * C1349 + C1341 * C1352) *
               C88 -
           (C1347 * C1356 + C27768 * C1359 + C1346 * C1354 + C1341 * C1358) *
               C78) *
              C1345) *
         C27816 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
           C75 * C96 + C86 * C92 + C76 * C97) *
              C87 +
          (C83 * C98 + C73 * C104 + C84 * C99 + C74 * C105 + C85 * C100 +
           C75 * C106 + C86 * C101 + C76 * C107) *
              C77 -
          (C86 * C93 + C76 * C102 + C85 * C92 + C75 * C97 + C84 * C91 +
           C74 * C96 + C83 * C90 + C73 * C95) *
              C88 -
          (C86 * C103 + C76 * C108 + C85 * C101 + C75 * C107 + C84 * C100 +
           C74 * C106 + C83 * C99 + C73 * C105) *
              C78) *
         C27805 * C27816 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C87 +
           (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) * C77 -
           (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C88 -
           (C1347 * C100 + C27768 * C106 + C1346 * C99 + C1341 * C105) * C78) *
              C27805 * C2997 +
          ((C1346 * C956 + C1341 * C964 + C1347 * C955 + C27768 * C963) * C87 +
           (C1346 * C960 + C1341 * C968 + C1347 * C959 + C27768 * C967) * C77 -
           (C1347 * C954 + C27768 * C962 + C1346 * C955 + C1341 * C963) * C88 -
           (C1347 * C958 + C27768 * C966 + C1346 * C959 + C1341 * C967) * C78) *
              C27805 * C2998 +
          ((C1346 * C3000 + C1341 * C3003 + C1347 * C3001 + C27768 * C3004) *
               C87 +
           (C1346 * C3005 + C1341 * C3009 + C1347 * C3006 + C27768 * C3010) *
               C77 -
           (C1347 * C3002 + C27768 * C3007 + C1346 * C3001 + C1341 * C3004) *
               C88 -
           (C1347 * C3008 + C27768 * C3011 + C1346 * C3006 + C1341 * C3010) *
               C78) *
              C27805 * C2999) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C28010) *
               C1343 +
           ((C1346 * C582 + C1341 * C590 + C1347 * C581 + C27768 * C589) *
                C143 +
            (C1346 * C634 + C1341 * C638 + C1347 * C633 + C27768 * C637) *
                C28010) *
               C1344 +
           ((C1346 * C1348 + C1341 * C1351 + C1347 * C1349 + C27768 * C1352) *
                C143 +
            (C1346 * C1410 + C1341 * C1413 + C1347 * C1411 + C27768 * C1414) *
                C28010) *
               C1345) *
              C27816 * C77 -
          (((C1347 * C1412 + C27768 * C1415 + C1346 * C1411 + C1341 * C1414) *
                C28010 +
            (C1347 * C1350 + C27768 * C1355 + C1346 * C1349 + C1341 * C1352) *
                C143) *
               C1345 +
           ((C1347 * C632 + C27768 * C636 + C1346 * C633 + C1341 * C637) *
                C28010 +
            (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) *
                C143) *
               C1344 +
           ((C1347 * C146 + C27768 * C151 + C1346 * C145 + C1341 * C150) *
                C28010 +
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C143) *
               C1343) *
              C27816 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C143 +
           (C83 * C144 + C73 * C149 + C84 * C145 + C74 * C150 + C85 * C146 +
            C75 * C151 + C86 * C147 + C76 * C152) *
               C28010) *
              C27805 * C27816 * C77 -
          ((C86 * C148 + C76 * C153 + C85 * C147 + C75 * C152 + C84 * C146 +
            C74 * C151 + C83 * C145 + C73 * C150) *
               C28010 +
           (C86 * C93 + C76 * C102 + C85 * C92 + C75 * C97 + C84 * C91 +
            C74 * C96 + C83 * C90 + C73 * C95) *
               C143) *
              C27805 * C27816 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C28010) *
               C27805 * C2997 +
           ((C1346 * C956 + C1341 * C964 + C1347 * C955 + C27768 * C963) *
                C143 +
            (C1346 * C1006 + C1341 * C1010 + C1347 * C1005 + C27768 * C1009) *
                C28010) *
               C27805 * C2998 +
           ((C1346 * C3000 + C1341 * C3003 + C1347 * C3001 + C27768 * C3004) *
                C143 +
            (C1346 * C3062 + C1341 * C3065 + C1347 * C3063 + C27768 * C3066) *
                C28010) *
               C27805 * C2999) *
              C77 -
          (((C1347 * C3064 + C27768 * C3067 + C1346 * C3063 + C1341 * C3066) *
                C28010 +
            (C1347 * C3002 + C27768 * C3007 + C1346 * C3001 + C1341 * C3004) *
                C143) *
               C27805 * C2999 +
           ((C1347 * C1004 + C27768 * C1008 + C1346 * C1005 + C1341 * C1009) *
                C28010 +
            (C1347 * C954 + C27768 * C962 + C1346 * C955 + C1341 * C963) *
                C143) *
               C27805 * C2998 +
           ((C1347 * C146 + C27768 * C151 + C1346 * C145 + C1341 * C150) *
                C28010 +
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C143) *
               C27805 * C2997) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C28009) *
               C1343 +
           ((C1346 * C582 + C1341 * C590 + C1347 * C581 + C27768 * C589) *
                C188 +
            (C1346 * C676 + C1341 * C680 + C1347 * C675 + C27768 * C679) *
                C28009) *
               C1344 +
           ((C1346 * C1348 + C1341 * C1351 + C1347 * C1349 + C27768 * C1352) *
                C188 +
            (C1346 * C1466 + C1341 * C1469 + C1347 * C1467 + C27768 * C1470) *
                C28009) *
               C1345) *
              C27816 * C28010 * C77 -
          (((C1347 * C1468 + C27768 * C1471 + C1346 * C1467 + C1341 * C1470) *
                C28009 +
            (C1347 * C1350 + C27768 * C1355 + C1346 * C1349 + C1341 * C1352) *
                C188) *
               C1345 +
           ((C1347 * C674 + C27768 * C678 + C1346 * C675 + C1341 * C679) *
                C28009 +
            (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) *
                C188) *
               C1344 +
           ((C1347 * C191 + C27768 * C196 + C1346 * C190 + C1341 * C195) *
                C28009 +
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C188) *
               C1343) *
              C27816 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C188 +
           (C83 * C189 + C73 * C194 + C84 * C190 + C74 * C195 + C85 * C191 +
            C75 * C196 + C86 * C192 + C76 * C197) *
               C28009) *
              C27805 * C27816 * C28010 * C77 -
          ((C86 * C193 + C76 * C198 + C85 * C192 + C75 * C197 + C84 * C191 +
            C74 * C196 + C83 * C190 + C73 * C195) *
               C28009 +
           (C86 * C93 + C76 * C102 + C85 * C92 + C75 * C97 + C84 * C91 +
            C74 * C96 + C83 * C90 + C73 * C95) *
               C188) *
              C27805 * C27816 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C28009) *
               C27805 * C2997 +
           ((C1346 * C956 + C1341 * C964 + C1347 * C955 + C27768 * C963) *
                C188 +
            (C1346 * C1050 + C1341 * C1054 + C1347 * C1049 + C27768 * C1053) *
                C28009) *
               C27805 * C2998 +
           ((C1346 * C3000 + C1341 * C3003 + C1347 * C3001 + C27768 * C3004) *
                C188 +
            (C1346 * C3118 + C1341 * C3121 + C1347 * C3119 + C27768 * C3122) *
                C28009) *
               C27805 * C2999) *
              C28010 * C77 -
          (((C1347 * C3120 + C27768 * C3123 + C1346 * C3119 + C1341 * C3122) *
                C28009 +
            (C1347 * C3002 + C27768 * C3007 + C1346 * C3001 + C1341 * C3004) *
                C188) *
               C27805 * C2999 +
           ((C1347 * C1048 + C27768 * C1052 + C1346 * C1049 + C1341 * C1053) *
                C28009 +
            (C1347 * C954 + C27768 * C962 + C1346 * C955 + C1341 * C963) *
                C188) *
               C27805 * C2998 +
           ((C1347 * C191 + C27768 * C196 + C1346 * C190 + C1341 * C195) *
                C28009 +
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C188) *
               C27805 * C2997) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C87 +
           (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
            C1524 * C1353 + C1345 * C1528) *
               C77 -
           (C1544 + C1545 + C1546) * C88 - (C1547 + C1548 + C1549) * C78) *
              C27816 * C1341 +
          ((C1546 + C1545 + C1544) * C87 + (C1549 + C1548 + C1547) * C77 -
           (C1524 * C1350 + C1345 * C1527 + C1523 * C580 + C1344 * C716 +
            C1522 * C91 + C1343 * C236) *
               C88 -
           (C1524 * C1356 + C1345 * C1530 + C1523 * C584 + C1344 * C720 +
            C1522 * C100 + C1343 * C241) *
               C78) *
              C27816 * C27768) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C87 +
           (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
              C27816 * C73 +
          (C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C27816 * C74 +
          (C259 * C87 + C260 * C77 - C261 * C88 - C262 * C78) * C27816 * C75 +
          (C261 * C87 + C262 * C77 - (C233 * C93 + C27805 * C238) * C88 -
           (C233 * C103 + C27805 * C243) * C78) *
              C27816 * C76) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C87 +
            (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
               C2997 +
           ((C233 * C956 + C27805 * C1092) * C87 +
            (C233 * C960 + C27805 * C1096) * C77 - C3189 * C88 - C3190 * C78) *
               C2998 +
           ((C233 * C3000 + C27805 * C3174) * C87 +
            (C233 * C3005 + C27805 * C3177) * C77 - C3191 * C88 - C3192 * C78) *
               C2999) *
              C1341 +
          ((C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C2997 +
           (C3189 * C87 + C3190 * C77 - (C233 * C954 + C27805 * C1090) * C88 -
            (C233 * C958 + C27805 * C1094) * C78) *
               C2998 +
           (C3191 * C87 + C3192 * C77 - (C233 * C3002 + C27805 * C3176) * C88 -
            (C233 * C3008 + C27805 * C3179) * C78) *
               C2999) *
              C27768) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C143 + (C1609 + C1610 + C1611) * C28010) *
               C27816 * C27768) *
              C77 -
          (((C1524 * C1412 + C1345 * C1601 + C1523 * C632 + C1344 * C759 +
             C1522 * C146 + C1343 * C298) *
                C28010 +
            (C1524 * C1350 + C1345 * C1527 + C1523 * C580 + C1344 * C716 +
             C1522 * C91 + C1343 * C236) *
                C143) *
               C27816 * C27768 +
           ((C1611 + C1610 + C1609) * C28010 + (C1544 + C1545 + C1546) * C143) *
               C27816 * C1341) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C143 +
            (C233 * C144 + C27805 * C296) * C28010) *
               C27816 * C73 +
           (C302 + C314) * C27816 * C74 + (C305 + C315) * C27816 * C75 +
           (C308 + C316) * C27816 * C76) *
              C77 -
          (((C233 * C148 + C27805 * C300) * C28010 +
            (C233 * C93 + C27805 * C238) * C143) *
               C27816 * C76 +
           (C316 + C308) * C27816 * C75 + (C315 + C305) * C27816 * C74 +
           (C314 + C302) * C27816 * C73) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C2997 +
            ((C233 * C956 + C27805 * C1092) * C143 +
             (C233 * C1006 + C27805 * C1134) * C28010) *
                C2998 +
            ((C233 * C3000 + C27805 * C3174) * C143 +
             (C233 * C3062 + C27805 * C3242) * C28010) *
                C2999) *
               C1341 +
           ((C302 + C314) * C2997 + (C3246 + C3254) * C2998 +
            (C3249 + C3255) * C2999) *
               C27768) *
              C77 -
          ((((C233 * C3064 + C27805 * C3244) * C28010 +
             (C233 * C3002 + C27805 * C3176) * C143) *
                C2999 +
            ((C233 * C1004 + C27805 * C1132) * C28010 +
             (C233 * C954 + C27805 * C1090) * C143) *
                C2998 +
            (C315 + C305) * C2997) *
               C27768 +
           ((C3255 + C3249) * C2999 + (C3254 + C3246) * C2998 +
            (C314 + C302) * C2997) *
               C1341) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C188 + (C1671 + C1672 + C1673) * C28009) *
               C27816 * C27768) *
              C28010 * C77 -
          (((C1524 * C1468 + C1345 * C1663 + C1523 * C674 + C1344 * C796 +
             C1522 * C191 + C1343 * C352) *
                C28009 +
            (C1524 * C1350 + C1345 * C1527 + C1523 * C580 + C1344 * C716 +
             C1522 * C91 + C1343 * C236) *
                C188) *
               C27816 * C27768 +
           ((C1673 + C1672 + C1671) * C28009 + (C1544 + C1545 + C1546) * C188) *
               C27816 * C1341) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C188 +
            (C233 * C189 + C27805 * C350) * C28009) *
               C27816 * C73 +
           (C356 + C368) * C27816 * C74 + (C359 + C369) * C27816 * C75 +
           (C362 + C370) * C27816 * C76) *
              C28010 * C77 -
          (((C233 * C193 + C27805 * C354) * C28009 +
            (C233 * C93 + C27805 * C238) * C188) *
               C27816 * C76 +
           (C370 + C362) * C27816 * C75 + (C369 + C359) * C27816 * C74 +
           (C368 + C356) * C27816 * C73) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C2997 +
            ((C233 * C956 + C27805 * C1092) * C188 +
             (C233 * C1050 + C27805 * C1169) * C28009) *
                C2998 +
            ((C233 * C3000 + C27805 * C3174) * C188 +
             (C233 * C3118 + C27805 * C3305) * C28009) *
                C2999) *
               C1341 +
           ((C356 + C368) * C2997 + (C3309 + C3317) * C2998 +
            (C3312 + C3318) * C2999) *
               C27768) *
              C28010 * C77 -
          ((((C233 * C3120 + C27805 * C3307) * C28009 +
             (C233 * C3002 + C27805 * C3176) * C188) *
                C2999 +
            ((C233 * C1048 + C27805 * C1171) * C28009 +
             (C233 * C954 + C27805 * C1090) * C188) *
                C2998 +
            (C369 + C359) * C2997) *
               C27768 +
           ((C3318 + C3312) * C2999 + (C3317 + C3309) * C2998 +
            (C368 + C356) * C2997) *
               C1341) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C87 +
            (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
               C1341 +
           (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C27768) *
              C1343 +
          (((C404 * C582 + C27816 * C836) * C87 +
            (C404 * C586 + C27816 * C840) * C77 - C1738 * C88 - C1739 * C78) *
               C1341 +
           (C1738 * C87 + C1739 * C77 - (C404 * C580 + C27816 * C834) * C88 -
            (C404 * C584 + C27816 * C838) * C78) *
               C27768) *
              C1344 +
          (((C404 * C1348 + C27816 * C1723) * C87 +
            (C404 * C1353 + C27816 * C1726) * C77 - C1740 * C88 - C1741 * C78) *
               C1341 +
           (C1740 * C87 + C1741 * C77 - (C404 * C1350 + C27816 * C1725) * C88 -
            (C404 * C1356 + C27816 * C1728) * C78) *
               C27768) *
              C1345) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C87 +
           (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
              C73 +
          (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C74 +
          (C430 * C87 + C431 * C77 - C432 * C88 - C433 * C78) * C75 +
          (C432 * C87 + C433 * C77 - (C404 * C93 + C27816 * C409) * C88 -
           (C404 * C103 + C27816 * C414) * C78) *
              C76) *
         C27805 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
            C3370 * C3000 + C2999 * C3371) *
               C87 +
           (C3368 * C98 + C2997 * C410 + C3369 * C960 + C2998 * C1214 +
            C3370 * C3005 + C2999 * C3374) *
               C77 -
           (C3390 + C3391 + C3392) * C88 - (C3393 + C3394 + C3395) * C78) *
              C1341 +
          ((C3392 + C3391 + C3390) * C87 + (C3395 + C3394 + C3393) * C77 -
           (C3370 * C3002 + C2999 * C3373 + C3369 * C954 + C2998 * C1208 +
            C3368 * C91 + C2997 * C407) *
               C88 -
           (C3370 * C3008 + C2999 * C3376 + C3369 * C958 + C2998 * C1212 +
            C3368 * C100 + C2997 * C412) *
               C78) *
              C27768) *
         C27805 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (-std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C143 +
             (C404 * C144 + C27816 * C467) * C28010) *
                C1341 +
            (C473 + C485) * C27768) *
               C1343 +
           (((C404 * C582 + C27816 * C836) * C143 +
             (C404 * C634 + C27816 * C875) * C28010) *
                C1341 +
            (C1795 + C1803) * C27768) *
               C1344 +
           (((C404 * C1348 + C27816 * C1723) * C143 +
             (C404 * C1410 + C27816 * C1791) * C28010) *
                C1341 +
            (C1798 + C1804) * C27768) *
               C1345) *
              C77 -
          ((((C404 * C1412 + C27816 * C1793) * C28010 +
             (C404 * C1350 + C27816 * C1725) * C143) *
                C27768 +
            (C1804 + C1798) * C1341) *
               C1345 +
           (((C404 * C632 + C27816 * C877) * C28010 +
             (C404 * C580 + C27816 * C834) * C143) *
                C27768 +
            (C1803 + C1795) * C1341) *
               C1344 +
           ((C486 + C476) * C27768 + (C485 + C473) * C1341) * C1343) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C143 +
            (C404 * C144 + C27816 * C467) * C28010) *
               C73 +
           (C473 + C485) * C74 + (C476 + C486) * C75 + (C479 + C487) * C76) *
              C27805 * C77 -
          (((C404 * C148 + C27816 * C471) * C28010 +
            (C404 * C93 + C27816 * C409) * C143) *
               C76 +
           (C487 + C479) * C75 + (C486 + C476) * C74 + (C485 + C473) * C73) *
              C27805 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C143 +
            (C3368 * C144 + C2997 * C467 + C3369 * C1006 + C2998 * C1252 +
             C3370 * C3062 + C2999 * C3445) *
                C28010) *
               C1341 +
           ((C3392 + C3391 + C3390) * C143 + (C3455 + C3456 + C3457) * C28010) *
               C27768) *
              C27805 * C77 -
          (((C3370 * C3064 + C2999 * C3447 + C3369 * C1004 + C2998 * C1250 +
             C3368 * C146 + C2997 * C469) *
                C28010 +
            (C3370 * C3002 + C2999 * C3373 + C3369 * C954 + C2998 * C1208 +
             C3368 * C91 + C2997 * C407) *
                C143) *
               C27768 +
           ((C3457 + C3456 + C3455) * C28010 + (C3390 + C3391 + C3392) * C143) *
               C1341) *
              C27805 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (-std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C1341 +
            (C527 + C539) * C27768) *
               C1343 +
           (((C404 * C582 + C27816 * C836) * C188 +
             (C404 * C676 + C27816 * C916) * C28009) *
                C1341 +
            (C1858 + C1866) * C27768) *
               C1344 +
           (((C404 * C1348 + C27816 * C1723) * C188 +
             (C404 * C1466 + C27816 * C1854) * C28009) *
                C1341 +
            (C1861 + C1867) * C27768) *
               C1345) *
              C28010 * C77 -
          ((((C404 * C1468 + C27816 * C1856) * C28009 +
             (C404 * C1350 + C27816 * C1725) * C188) *
                C27768 +
            (C1867 + C1861) * C1341) *
               C1345 +
           (((C404 * C674 + C27816 * C914) * C28009 +
             (C404 * C580 + C27816 * C834) * C188) *
                C27768 +
            (C1866 + C1858) * C1341) *
               C1344 +
           ((C540 + C530) * C27768 + (C539 + C527) * C1341) * C1343) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C188 +
            (C404 * C189 + C27816 * C521) * C28009) *
               C73 +
           (C527 + C539) * C74 + (C530 + C540) * C75 + (C533 + C541) * C76) *
              C27805 * C28010 * C77 -
          (((C404 * C193 + C27816 * C525) * C28009 +
            (C404 * C93 + C27816 * C409) * C188) *
               C76 +
           (C541 + C533) * C75 + (C540 + C530) * C74 + (C539 + C527) * C73) *
              C27805 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C188 +
            (C3368 * C189 + C2997 * C521 + C3369 * C1050 + C2998 * C1287 +
             C3370 * C3118 + C2999 * C3507) *
                C28009) *
               C1341 +
           ((C3392 + C3391 + C3390) * C188 + (C3517 + C3518 + C3519) * C28009) *
               C27768) *
              C27805 * C28010 * C77 -
          (((C3370 * C3120 + C2999 * C3509 + C3369 * C1048 + C2998 * C1289 +
             C3368 * C191 + C2997 * C523) *
                C28009 +
            (C3370 * C3002 + C2999 * C3373 + C3369 * C954 + C2998 * C1208 +
             C3368 * C91 + C2997 * C407) *
                C188) *
               C27768 +
           ((C3519 + C3518 + C3517) * C28009 + (C3390 + C3391 + C3392) * C188) *
               C1341) *
              C27805 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                C28008) *
               C1343 +
           ((C1942 + C1943) * C578 + (C1944 + C1945) * C28008) * C1344 +
           ((C1946 + C1947) * C578 + (C1948 + C1949) * C28008) * C1345) *
              C27816 * C28009 * C576 -
          (((C1347 * C1919 + C27768 * C1923 + C1346 * C1920 + C1341 * C1924) *
                C28008 +
            (C1347 * C1917 + C27768 * C1921 + C1346 * C1918 + C1341 * C1922) *
                C578) *
               C1345 +
           ((C1949 + C1948) * C28008 + (C1947 + C1946) * C578) * C1344 +
           ((C1945 + C1944) * C28008 + (C1943 + C1942) * C578) * C1343) *
              C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C578 +
           (C83 * C98 + C73 * C104 + C84 * C99 + C74 * C105 + C85 * C100 +
            C75 * C106 + C86 * C101 + C76 * C107) *
               C28008) *
              C27805 * C27816 * C28009 * C576 -
          ((C86 * C583 + C76 * C591 + C85 * C584 + C75 * C592 + C84 * C585 +
            C74 * C593 + C83 * C586 + C73 * C594) *
               C28008 +
           (C86 * C579 + C76 * C587 + C85 * C580 + C75 * C588 + C84 * C581 +
            C74 * C589 + C83 * C582 + C73 * C590) *
               C578) *
              C27805 * C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                C28008) *
               C27805 * C2997 +
           ((C1346 * C956 + C1341 * C964 + C1347 * C955 + C27768 * C963) *
                C578 +
            (C1346 * C960 + C1341 * C968 + C1347 * C959 + C27768 * C967) *
                C28008) *
               C27805 * C2998 +
           ((C1346 * C3000 + C1341 * C3003 + C1347 * C3001 + C27768 * C3004) *
                C578 +
            (C1346 * C3005 + C1341 * C3009 + C1347 * C3006 + C27768 * C3010) *
                C28008) *
               C27805 * C2999) *
              C28009 * C576 -
          (((C1347 * C3571 + C27768 * C3575 + C1346 * C3572 + C1341 * C3576) *
                C28008 +
            (C1347 * C3569 + C27768 * C3573 + C1346 * C3570 + C1341 * C3574) *
                C578) *
               C27805 * C2999 +
           ((C1347 * C2491 + C27768 * C2497 + C1346 * C2492 + C1341 * C2498) *
                C28008 +
            (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
                C578) *
               C27805 * C2998 +
           ((C1945 + C1944) * C28008 + (C1943 + C1942) * C578) * C27805 *
               C2997) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C629 +
           (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) * C576 -
           (C1943 + C1942) * C630 - (C2012 + C2013) * C577) *
              C1343 +
          ((C1942 + C1943) * C629 + (C2013 + C2012) * C576 -
           (C1947 + C1946) * C630 - (C2014 + C2015) * C577) *
              C1344 +
          ((C1946 + C1947) * C629 + (C2015 + C2014) * C576 -
           (C1347 * C1917 + C27768 * C1921 + C1346 * C1918 + C1341 * C1922) *
               C630 -
           (C1347 * C1999 + C27768 * C2001 + C1346 * C2000 + C1341 * C2002) *
               C577) *
              C1345) *
         C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
           C75 * C96 + C86 * C92 + C76 * C97) *
              C629 +
          (C83 * C144 + C73 * C149 + C84 * C145 + C74 * C150 + C85 * C146 +
           C75 * C151 + C86 * C147 + C76 * C152) *
              C576 -
          (C86 * C579 + C76 * C587 + C85 * C580 + C75 * C588 + C84 * C581 +
           C74 * C589 + C83 * C582 + C73 * C590) *
              C630 -
          (C86 * C631 + C76 * C635 + C85 * C632 + C75 * C636 + C84 * C633 +
           C74 * C637 + C83 * C634 + C73 * C638) *
              C577) *
         C27805 * C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C629 +
           (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) * C576 -
           (C1943 + C1942) * C630 - (C2012 + C2013) * C577) *
              C27805 * C2997 +
          ((C1346 * C956 + C1341 * C964 + C1347 * C955 + C27768 * C963) * C629 +
           (C1346 * C1006 + C1341 * C1010 + C1347 * C1005 + C27768 * C1009) *
               C576 -
           (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
               C630 -
           (C1347 * C2551 + C27768 * C2555 + C1346 * C2552 + C1341 * C2556) *
               C577) *
              C27805 * C2998 +
          ((C1346 * C3000 + C1341 * C3003 + C1347 * C3001 + C27768 * C3004) *
               C629 +
           (C1346 * C3062 + C1341 * C3065 + C1347 * C3063 + C27768 * C3066) *
               C576 -
           (C1347 * C3569 + C27768 * C3573 + C1346 * C3570 + C1341 * C3574) *
               C630 -
           (C1347 * C3627 + C27768 * C3629 + C1346 * C3628 + C1341 * C3630) *
               C577) *
              C27805 * C2999) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C28009) *
               C1343 +
           ((C1942 + C1943) * C188 + (C2078 + C2079) * C28009) * C1344 +
           ((C1946 + C1947) * C188 + (C2080 + C2081) * C28009) * C1345) *
              C27816 * C576 -
          (((C1347 * C2065 + C27768 * C2067 + C1346 * C2066 + C1341 * C2068) *
                C28009 +
            (C1347 * C1917 + C27768 * C1921 + C1346 * C1918 + C1341 * C1922) *
                C188) *
               C1345 +
           ((C2081 + C2080) * C28009 + (C1947 + C1946) * C188) * C1344 +
           ((C2079 + C2078) * C28009 + (C1943 + C1942) * C188) * C1343) *
              C27816 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C188 +
           (C83 * C189 + C73 * C194 + C84 * C190 + C74 * C195 + C85 * C191 +
            C75 * C196 + C86 * C192 + C76 * C197) *
               C28009) *
              C27805 * C27816 * C576 -
          ((C86 * C673 + C76 * C677 + C85 * C674 + C75 * C678 + C84 * C675 +
            C74 * C679 + C83 * C676 + C73 * C680) *
               C28009 +
           (C86 * C579 + C76 * C587 + C85 * C580 + C75 * C588 + C84 * C581 +
            C74 * C589 + C83 * C582 + C73 * C590) *
               C188) *
              C27805 * C27816 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C28009) *
               C27805 * C2997 +
           ((C1346 * C956 + C1341 * C964 + C1347 * C955 + C27768 * C963) *
                C188 +
            (C1346 * C1050 + C1341 * C1054 + C1347 * C1049 + C27768 * C1053) *
                C28009) *
               C27805 * C2998 +
           ((C1346 * C3000 + C1341 * C3003 + C1347 * C3001 + C27768 * C3004) *
                C188 +
            (C1346 * C3118 + C1341 * C3121 + C1347 * C3119 + C27768 * C3122) *
                C28009) *
               C27805 * C2999) *
              C576 -
          (((C1347 * C3681 + C27768 * C3683 + C1346 * C3682 + C1341 * C3684) *
                C28009 +
            (C1347 * C3569 + C27768 * C3573 + C1346 * C3570 + C1341 * C3574) *
                C188) *
               C27805 * C2999 +
           ((C1347 * C2607 + C27768 * C2611 + C1346 * C2608 + C1341 * C2612) *
                C28009 +
            (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
                C188) *
               C27805 * C2998 +
           ((C2079 + C2078) * C28009 + (C1943 + C1942) * C188) * C27805 *
               C2997) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C578 + (C1549 + C1548 + C1547) * C28008) *
               C27816 * C27768) *
              C28009 * C576 -
          (((C1524 * C1919 + C1345 * C2133 + C1523 * C1354 + C1344 * C1529 +
             C1522 * C585 + C1343 * C721) *
                C28008 +
            (C1524 * C1917 + C1345 * C2131 + C1523 * C1349 + C1344 * C1526 +
             C1522 * C581 + C1343 * C717) *
                C578) *
               C27816 * C27768 +
           ((C1524 * C1920 + C1345 * C2134 + C1523 * C1353 + C1344 * C1528 +
             C1522 * C586 + C1343 * C722) *
                C28008 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C578) *
               C27816 * C1341) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C233 * C89 + C27805 * C234) * C578 +
                                (C233 * C98 + C27805 * C239) * C28008) *
                                   C27816 * C73 +
                               (C257 * C578 + C258 * C28008) * C27816 * C74 +
                               (C259 * C578 + C260 * C28008) * C27816 * C75 +
                               (C261 * C578 + C262 * C28008) * C27816 * C76) *
                                  C28009 * C576 -
                              (((C233 * C583 + C27805 * C719) * C28008 +
                                (C233 * C579 + C27805 * C715) * C578) *
                                   C27816 * C76 +
                               ((C233 * C584 + C27805 * C720) * C28008 +
                                (C233 * C580 + C27805 * C716) * C578) *
                                   C27816 * C75 +
                               ((C233 * C585 + C27805 * C721) * C28008 +
                                (C233 * C581 + C27805 * C717) * C578) *
                                   C27816 * C74 +
                               ((C233 * C586 + C27805 * C722) * C28008 +
                                (C233 * C582 + C27805 * C718) * C578) *
                                   C27816 * C73) *
                                  C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C2997 +
            ((C233 * C956 + C27805 * C1092) * C578 +
             (C233 * C960 + C27805 * C1096) * C28008) *
                C2998 +
            ((C233 * C3000 + C27805 * C3174) * C578 +
             (C233 * C3005 + C27805 * C3177) * C28008) *
                C2999) *
               C1341 +
           ((C257 * C578 + C258 * C28008) * C2997 +
            (C3189 * C578 + C3190 * C28008) * C2998 +
            (C3191 * C578 + C3192 * C28008) * C2999) *
               C27768) *
              C28009 * C576 -
          ((((C233 * C3571 + C27805 * C3737) * C28008 +
             (C233 * C3569 + C27805 * C3735) * C578) *
                C2999 +
            ((C233 * C2491 + C27805 * C2670) * C28008 +
             (C233 * C2485 + C27805 * C2666) * C578) *
                C2998 +
            ((C233 * C585 + C27805 * C721) * C28008 +
             (C233 * C581 + C27805 * C717) * C578) *
                C2997) *
               C27768 +
           (((C233 * C3572 + C27805 * C3738) * C28008 +
             (C233 * C3570 + C27805 * C3736) * C578) *
                C2999 +
            ((C233 * C2492 + C27805 * C2672) * C28008 +
             (C233 * C2486 + C27805 * C2668) * C578) *
                C2998 +
            ((C233 * C586 + C27805 * C722) * C28008 +
             (C233 * C582 + C27805 * C718) * C578) *
                C2997) *
               C1341) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C629 +
           (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
            C1524 * C1410 + C1345 * C1599) *
               C576 -
           (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
            C1522 * C582 + C1343 * C718) *
               C630 -
           (C1524 * C2000 + C1345 * C2185 + C1523 * C1410 + C1344 * C1599 +
            C1522 * C634 + C1343 * C757) *
               C577) *
              C27816 * C1341 +
          ((C1546 + C1545 + C1544) * C629 + (C1609 + C1610 + C1611) * C576 -
           (C1524 * C1917 + C1345 * C2131 + C1523 * C1349 + C1344 * C1526 +
            C1522 * C581 + C1343 * C717) *
               C630 -
           (C1524 * C1999 + C1345 * C2186 + C1523 * C1411 + C1344 * C1600 +
            C1522 * C633 + C1343 * C758) *
               C577) *
              C27816 * C27768) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C629 +
           (C233 * C144 + C27805 * C296) * C576 -
           (C233 * C582 + C27805 * C718) * C630 -
           (C233 * C634 + C27805 * C757) * C577) *
              C27816 * C73 +
          (C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
           (C233 * C633 + C27805 * C758) * C577) *
              C27816 * C74 +
          (C259 * C629 + C312 * C576 - (C233 * C580 + C27805 * C716) * C630 -
           (C233 * C632 + C27805 * C759) * C577) *
              C27816 * C75 +
          (C261 * C629 + C313 * C576 - (C233 * C579 + C27805 * C715) * C630 -
           (C233 * C631 + C27805 * C760) * C577) *
              C27816 * C76) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C629 +
            (C233 * C144 + C27805 * C296) * C576 -
            (C233 * C582 + C27805 * C718) * C630 -
            (C233 * C634 + C27805 * C757) * C577) *
               C2997 +
           ((C233 * C956 + C27805 * C1092) * C629 +
            (C233 * C1006 + C27805 * C1134) * C576 -
            (C233 * C2486 + C27805 * C2668) * C630 -
            (C233 * C2552 + C27805 * C2726) * C577) *
               C2998 +
           ((C233 * C3000 + C27805 * C3174) * C629 +
            (C233 * C3062 + C27805 * C3242) * C576 -
            (C233 * C3570 + C27805 * C3736) * C630 -
            (C233 * C3628 + C27805 * C3789) * C577) *
               C2999) *
              C1341 +
          ((C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
            (C233 * C633 + C27805 * C758) * C577) *
               C2997 +
           (C3189 * C629 + C3252 * C576 -
            (C233 * C2485 + C27805 * C2666) * C630 -
            (C233 * C2551 + C27805 * C2724) * C577) *
               C2998 +
           (C3191 * C629 + C3253 * C576 -
            (C233 * C3569 + C27805 * C3735) * C630 -
            (C233 * C3627 + C27805 * C3790) * C577) *
               C2999) *
              C27768) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C188 + (C1671 + C1672 + C1673) * C28009) *
               C27816 * C27768) *
              C576 -
          (((C1524 * C2065 + C1345 * C2237 + C1523 * C1467 + C1344 * C1662 +
             C1522 * C675 + C1343 * C797) *
                C28009 +
            (C1524 * C1917 + C1345 * C2131 + C1523 * C1349 + C1344 * C1526 +
             C1522 * C581 + C1343 * C717) *
                C188) *
               C27816 * C27768 +
           ((C1524 * C2066 + C1345 * C2238 + C1523 * C1466 + C1344 * C1661 +
             C1522 * C676 + C1343 * C798) *
                C28009 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C188) *
               C27816 * C1341) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C188 +
            (C233 * C189 + C27805 * C350) * C28009) *
               C27816 * C73 +
           (C356 + C368) * C27816 * C74 + (C359 + C369) * C27816 * C75 +
           (C362 + C370) * C27816 * C76) *
              C576 -
          (((C233 * C673 + C27805 * C795) * C28009 +
            (C233 * C579 + C27805 * C715) * C188) *
               C27816 * C76 +
           ((C233 * C674 + C27805 * C796) * C28009 +
            (C233 * C580 + C27805 * C716) * C188) *
               C27816 * C75 +
           ((C233 * C675 + C27805 * C797) * C28009 +
            (C233 * C581 + C27805 * C717) * C188) *
               C27816 * C74 +
           ((C233 * C676 + C27805 * C798) * C28009 +
            (C233 * C582 + C27805 * C718) * C188) *
               C27816 * C73) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C2997 +
            ((C233 * C956 + C27805 * C1092) * C188 +
             (C233 * C1050 + C27805 * C1169) * C28009) *
                C2998 +
            ((C233 * C3000 + C27805 * C3174) * C188 +
             (C233 * C3118 + C27805 * C3305) * C28009) *
                C2999) *
               C1341 +
           ((C356 + C368) * C2997 + (C3309 + C3317) * C2998 +
            (C3312 + C3318) * C2999) *
               C27768) *
              C576 -
          ((((C233 * C3681 + C27805 * C3841) * C28009 +
             (C233 * C3569 + C27805 * C3735) * C188) *
                C2999 +
            ((C233 * C2607 + C27805 * C2780) * C28009 +
             (C233 * C2485 + C27805 * C2666) * C188) *
                C2998 +
            ((C233 * C675 + C27805 * C797) * C28009 +
             (C233 * C581 + C27805 * C717) * C188) *
                C2997) *
               C27768 +
           (((C233 * C3682 + C27805 * C3842) * C28009 +
             (C233 * C3570 + C27805 * C3736) * C188) *
                C2999 +
            ((C233 * C2608 + C27805 * C2778) * C28009 +
             (C233 * C2486 + C27805 * C2668) * C188) *
                C2998 +
            ((C233 * C676 + C27805 * C798) * C28009 +
             (C233 * C582 + C27805 * C718) * C188) *
                C2997) *
               C1341) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C1341 +
            (C428 * C578 + C429 * C28008) * C27768) *
               C1343 +
           ((C2310 + C2311) * C1341 + (C2298 + C2299) * C27768) * C1344 +
           ((C2312 + C2313) * C1341 + (C2304 + C2305) * C27768) * C1345) *
              C28009 * C576 -
          ((((C404 * C1919 + C27816 * C2291) * C28008 +
             (C404 * C1917 + C27816 * C2289) * C578) *
                C27768 +
            ((C404 * C1920 + C27816 * C2292) * C28008 +
             (C404 * C1918 + C27816 * C2290) * C578) *
                C1341) *
               C1345 +
           ((C2305 + C2304) * C27768 + (C2313 + C2312) * C1341) * C1344 +
           ((C2299 + C2298) * C27768 + (C2311 + C2310) * C1341) * C1343) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C404 * C89 + C27816 * C405) * C578 +
                                (C404 * C98 + C27816 * C410) * C28008) *
                                   C73 +
                               (C428 * C578 + C429 * C28008) * C74 +
                               (C430 * C578 + C431 * C28008) * C75 +
                               (C432 * C578 + C433 * C28008) * C76) *
                                  C27805 * C28009 * C576 -
                              (((C404 * C583 + C27816 * C837) * C28008 +
                                (C404 * C579 + C27816 * C833) * C578) *
                                   C76 +
                               ((C404 * C584 + C27816 * C838) * C28008 +
                                (C404 * C580 + C27816 * C834) * C578) *
                                   C75 +
                               ((C404 * C585 + C27816 * C839) * C28008 +
                                (C404 * C581 + C27816 * C835) * C578) *
                                   C74 +
                               ((C404 * C586 + C27816 * C840) * C28008 +
                                (C404 * C582 + C27816 * C836) * C578) *
                                   C73) *
                                  C27805 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C578 +
            (C3368 * C98 + C2997 * C410 + C3369 * C960 + C2998 * C1214 +
             C3370 * C3005 + C2999 * C3374) *
                C28008) *
               C1341 +
           ((C3392 + C3391 + C3390) * C578 + (C3395 + C3394 + C3393) * C28008) *
               C27768) *
              C27805 * C28009 * C576 -
          (((C3370 * C3571 + C2999 * C3895 + C3369 * C2491 + C2998 * C2837 +
             C3368 * C585 + C2997 * C839) *
                C28008 +
            (C3370 * C3569 + C2999 * C3893 + C3369 * C2485 + C2998 * C2833 +
             C3368 * C581 + C2997 * C835) *
                C578) *
               C27768 +
           ((C3370 * C3572 + C2999 * C3896 + C3369 * C2492 + C2998 * C2838 +
             C3368 * C586 + C2997 * C840) *
                C28008 +
            (C3370 * C3570 + C2999 * C3894 + C3369 * C2486 + C2998 * C2834 +
             C3368 * C582 + C2997 * C836) *
                C578) *
               C1341) *
              C27805 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C629 +
            (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 -
            C2370 * C577) *
               C1341 +
           (C428 * C629 + C482 * C576 - C1738 * C630 - C1801 * C577) * C27768) *
              C1343 +
          ((C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) * C1341 +
           (C1738 * C629 + C1801 * C576 - C1740 * C630 - C1802 * C577) *
               C27768) *
              C1344 +
          ((C2308 * C629 + C2371 * C576 -
            (C404 * C1918 + C27816 * C2290) * C630 -
            (C404 * C2000 + C27816 * C2363) * C577) *
               C1341 +
           (C1740 * C629 + C1802 * C576 -
            (C404 * C1917 + C27816 * C2289) * C630 -
            (C404 * C1999 + C27816 * C2364) * C577) *
               C27768) *
              C1345) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C629 +
           (C404 * C144 + C27816 * C467) * C576 -
           (C404 * C582 + C27816 * C836) * C630 -
           (C404 * C634 + C27816 * C875) * C577) *
              C73 +
          (C428 * C629 + C482 * C576 - (C404 * C581 + C27816 * C835) * C630 -
           (C404 * C633 + C27816 * C876) * C577) *
              C74 +
          (C430 * C629 + C483 * C576 - (C404 * C580 + C27816 * C834) * C630 -
           (C404 * C632 + C27816 * C877) * C577) *
              C75 +
          (C432 * C629 + C484 * C576 - (C404 * C579 + C27816 * C833) * C630 -
           (C404 * C631 + C27816 * C878) * C577) *
              C76) *
         C27805 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
            C3370 * C3000 + C2999 * C3371) *
               C629 +
           (C3368 * C144 + C2997 * C467 + C3369 * C1006 + C2998 * C1252 +
            C3370 * C3062 + C2999 * C3445) *
               C576 -
           (C3370 * C3570 + C2999 * C3894 + C3369 * C2486 + C2998 * C2834 +
            C3368 * C582 + C2997 * C836) *
               C630 -
           (C3370 * C3628 + C2999 * C3947 + C3369 * C2552 + C2998 * C2892 +
            C3368 * C634 + C2997 * C875) *
               C577) *
              C1341 +
          ((C3392 + C3391 + C3390) * C629 + (C3455 + C3456 + C3457) * C576 -
           (C3370 * C3569 + C2999 * C3893 + C3369 * C2485 + C2998 * C2833 +
            C3368 * C581 + C2997 * C835) *
               C630 -
           (C3370 * C3627 + C2999 * C3948 + C3369 * C2551 + C2998 * C2891 +
            C3368 * C633 + C2997 * C876) *
               C577) *
              C27768) *
         C27805 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C1341 +
            (C527 + C539) * C27768) *
               C1343 +
           ((C2424 + C2432) * C1341 + (C1858 + C1866) * C27768) * C1344 +
           ((C2427 + C2433) * C1341 + (C1861 + C1867) * C27768) * C1345) *
              C576 -
          ((((C404 * C2065 + C27816 * C2421) * C28009 +
             (C404 * C1917 + C27816 * C2289) * C188) *
                C27768 +
            ((C404 * C2066 + C27816 * C2422) * C28009 +
             (C404 * C1918 + C27816 * C2290) * C188) *
                C1341) *
               C1345 +
           ((C1867 + C1861) * C27768 + (C2433 + C2427) * C1341) * C1344 +
           ((C1866 + C1858) * C27768 + (C2432 + C2424) * C1341) * C1343) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C188 +
            (C404 * C189 + C27816 * C521) * C28009) *
               C73 +
           (C527 + C539) * C74 + (C530 + C540) * C75 + (C533 + C541) * C76) *
              C27805 * C576 -
          (((C404 * C673 + C27816 * C913) * C28009 +
            (C404 * C579 + C27816 * C833) * C188) *
               C76 +
           ((C404 * C674 + C27816 * C914) * C28009 +
            (C404 * C580 + C27816 * C834) * C188) *
               C75 +
           ((C404 * C675 + C27816 * C915) * C28009 +
            (C404 * C581 + C27816 * C835) * C188) *
               C74 +
           ((C404 * C676 + C27816 * C916) * C28009 +
            (C404 * C582 + C27816 * C836) * C188) *
               C73) *
              C27805 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C188 +
            (C3368 * C189 + C2997 * C521 + C3369 * C1050 + C2998 * C1287 +
             C3370 * C3118 + C2999 * C3507) *
                C28009) *
               C1341 +
           ((C3392 + C3391 + C3390) * C188 + (C3517 + C3518 + C3519) * C28009) *
               C27768) *
              C27805 * C576 -
          (((C3370 * C3681 + C2999 * C3999 + C3369 * C2607 + C2998 * C2944 +
             C3368 * C675 + C2997 * C915) *
                C28009 +
            (C3370 * C3569 + C2999 * C3893 + C3369 * C2485 + C2998 * C2833 +
             C3368 * C581 + C2997 * C835) *
                C188) *
               C27768 +
           ((C3370 * C3682 + C2999 * C4000 + C3369 * C2608 + C2998 * C2943 +
             C3368 * C676 + C2997 * C916) *
                C28009 +
            (C3370 * C3570 + C2999 * C3894 + C3369 * C2486 + C2998 * C2834 +
             C3368 * C582 + C2997 * C836) *
                C188) *
               C1341) *
              C27805 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                C28008) *
               C1343 +
           ((C1942 + C1943) * C578 + (C1944 + C1945) * C28008) * C1344 +
           ((C1946 + C1947) * C578 + (C1948 + C1949) * C28008) * C1345) *
              C27816 * C951 -
          (((C1347 * C2487 + C27768 * C2495 + C1346 * C2488 + C1341 * C2496) *
                C28008 +
            (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                C578) *
               C1345 +
           ((C1347 * C2491 + C27768 * C2497 + C1346 * C2492 + C1341 * C2498) *
                C28008 +
            (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
                C578) *
               C1344 +
           ((C1347 * C959 + C27768 * C967 + C1346 * C960 + C1341 * C968) *
                C28008 +
            (C1347 * C955 + C27768 * C963 + C1346 * C956 + C1341 * C964) *
                C578) *
               C1343) *
              C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C578 +
           (C83 * C98 + C73 * C104 + C84 * C99 + C74 * C105 + C85 * C100 +
            C75 * C106 + C86 * C101 + C76 * C107) *
               C28008) *
              C27805 * C27816 * C951 -
          ((C86 * C957 + C76 * C965 + C85 * C958 + C75 * C966 + C84 * C959 +
            C74 * C967 + C83 * C960 + C73 * C968) *
               C28008 +
           (C86 * C953 + C76 * C961 + C85 * C954 + C75 * C962 + C84 * C955 +
            C74 * C963 + C83 * C956 + C73 * C964) *
               C578) *
              C27805 * C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                C28008) *
               C27805 * C2997 +
           ((C4076 + C4077) * C578 + (C4078 + C4079) * C28008) * C27805 *
               C2998 +
           ((C4080 + C4081) * C578 + (C4082 + C4083) * C28008) * C27805 *
               C2999) *
              C951 -
          (((C1347 * C4053 + C27768 * C4057 + C1346 * C4054 + C1341 * C4058) *
                C28008 +
            (C1347 * C4051 + C27768 * C4055 + C1346 * C4052 + C1341 * C4056) *
                C578) *
               C27805 * C2999 +
           ((C4083 + C4082) * C28008 + (C4081 + C4080) * C578) * C27805 *
               C2998 +
           ((C4079 + C4078) * C28008 + (C4077 + C4076) * C578) * C27805 *
               C2997) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C28010) *
               C1343 +
           ((C1942 + C1943) * C143 + (C2013 + C2012) * C28010) * C1344 +
           ((C1946 + C1947) * C143 + (C2015 + C2014) * C28010) * C1345) *
              C27816 * C28008 * C951 -
          (((C1347 * C2549 + C27768 * C2553 + C1346 * C2550 + C1341 * C2554) *
                C28010 +
            (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                C143) *
               C1345 +
           ((C1347 * C2551 + C27768 * C2555 + C1346 * C2552 + C1341 * C2556) *
                C28010 +
            (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
                C143) *
               C1344 +
           ((C1347 * C1005 + C27768 * C1009 + C1346 * C1006 + C1341 * C1010) *
                C28010 +
            (C1347 * C955 + C27768 * C963 + C1346 * C956 + C1341 * C964) *
                C143) *
               C1343) *
              C27816 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C143 +
           (C83 * C144 + C73 * C149 + C84 * C145 + C74 * C150 + C85 * C146 +
            C75 * C151 + C86 * C147 + C76 * C152) *
               C28010) *
              C27805 * C27816 * C28008 * C951 -
          ((C86 * C1003 + C76 * C1007 + C85 * C1004 + C75 * C1008 +
            C84 * C1005 + C74 * C1009 + C83 * C1006 + C73 * C1010) *
               C28010 +
           (C86 * C953 + C76 * C961 + C85 * C954 + C75 * C962 + C84 * C955 +
            C74 * C963 + C83 * C956 + C73 * C964) *
               C143) *
              C27805 * C27816 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C28010) *
               C27805 * C2997 +
           ((C4076 + C4077) * C143 + (C4146 + C4147) * C28010) * C27805 *
               C2998 +
           ((C4080 + C4081) * C143 + (C4148 + C4149) * C28010) * C27805 *
               C2999) *
              C28008 * C951 -
          (((C1347 * C4133 + C27768 * C4135 + C1346 * C4134 + C1341 * C4136) *
                C28010 +
            (C1347 * C4051 + C27768 * C4055 + C1346 * C4052 + C1341 * C4056) *
                C143) *
               C27805 * C2999 +
           ((C4149 + C4148) * C28010 + (C4081 + C4080) * C143) * C27805 *
               C2998 +
           ((C4147 + C4146) * C28010 + (C4077 + C4076) * C143) * C27805 *
               C2997) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C1045 +
           (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) * C951 -
           (C1347 * C955 + C27768 * C963 + C1346 * C956 + C1341 * C964) *
               C1046 -
           (C1347 * C1049 + C27768 * C1053 + C1346 * C1050 + C1341 * C1054) *
               C952) *
              C1343 +
          ((C1942 + C1943) * C1045 + (C2078 + C2079) * C951 -
           (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
               C1046 -
           (C1347 * C2607 + C27768 * C2611 + C1346 * C2608 + C1341 * C2612) *
               C952) *
              C1344 +
          ((C1946 + C1947) * C1045 + (C2080 + C2081) * C951 -
           (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
               C1046 -
           (C1347 * C2609 + C27768 * C2613 + C1346 * C2610 + C1341 * C2614) *
               C952) *
              C1345) *
         C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
           C75 * C96 + C86 * C92 + C76 * C97) *
              C1045 +
          (C83 * C189 + C73 * C194 + C84 * C190 + C74 * C195 + C85 * C191 +
           C75 * C196 + C86 * C192 + C76 * C197) *
              C951 -
          (C86 * C953 + C76 * C961 + C85 * C954 + C75 * C962 + C84 * C955 +
           C74 * C963 + C83 * C956 + C73 * C964) *
              C1046 -
          (C86 * C1047 + C76 * C1051 + C85 * C1048 + C75 * C1052 + C84 * C1049 +
           C74 * C1053 + C83 * C1050 + C73 * C1054) *
              C952) *
         C27805 * C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C1045 +
           (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) * C951 -
           (C4077 + C4076) * C1046 - (C4212 + C4213) * C952) *
              C27805 * C2997 +
          ((C4076 + C4077) * C1045 + (C4213 + C4212) * C951 -
           (C4081 + C4080) * C1046 - (C4214 + C4215) * C952) *
              C27805 * C2998 +
          ((C4080 + C4081) * C1045 + (C4215 + C4214) * C951 -
           (C1347 * C4051 + C27768 * C4055 + C1346 * C4052 + C1341 * C4056) *
               C1046 -
           (C1347 * C4199 + C27768 * C4201 + C1346 * C4200 + C1341 * C4202) *
               C952) *
              C27805 * C2999) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C578 + (C1549 + C1548 + C1547) * C28008) *
               C27816 * C27768) *
              C951 -
          (((C1524 * C2487 + C1345 * C2669 + C1523 * C2491 + C1344 * C2670 +
             C1522 * C959 + C1343 * C1095) *
                C28008 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C578) *
               C27816 * C27768 +
           ((C1524 * C2488 + C1345 * C2671 + C1523 * C2492 + C1344 * C2672 +
             C1522 * C960 + C1343 * C1096) *
                C28008 +
            (C1524 * C2484 + C1345 * C2667 + C1523 * C2486 + C1344 * C2668 +
             C1522 * C956 + C1343 * C1092) *
                C578) *
               C27816 * C1341) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C578 +
            (C233 * C98 + C27805 * C239) * C28008) *
               C27816 * C73 +
           (C257 * C578 + C258 * C28008) * C27816 * C74 +
           (C259 * C578 + C260 * C28008) * C27816 * C75 +
           (C261 * C578 + C262 * C28008) * C27816 * C76) *
              C951 -
          (((C233 * C957 + C27805 * C1093) * C28008 +
            (C233 * C953 + C27805 * C1089) * C578) *
               C27816 * C76 +
           ((C233 * C958 + C27805 * C1094) * C28008 +
            (C233 * C954 + C27805 * C1090) * C578) *
               C27816 * C75 +
           ((C233 * C959 + C27805 * C1095) * C28008 +
            (C233 * C955 + C27805 * C1091) * C578) *
               C27816 * C74 +
           ((C233 * C960 + C27805 * C1096) * C28008 +
            (C233 * C956 + C27805 * C1092) * C578) *
               C27816 * C73) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C2997 +
            (C4286 + C4287) * C2998 + (C4288 + C4289) * C2999) *
               C1341 +
           ((C257 * C578 + C258 * C28008) * C2997 + (C4278 + C4279) * C2998 +
            (C4280 + C4281) * C2999) *
               C27768) *
              C951 -
          ((((C233 * C4053 + C27805 * C4267) * C28008 +
             (C233 * C4051 + C27805 * C4265) * C578) *
                C2999 +
            (C4281 + C4280) * C2998 + (C4279 + C4278) * C2997) *
               C27768 +
           (((C233 * C4054 + C27805 * C4268) * C28008 +
             (C233 * C4052 + C27805 * C4266) * C578) *
                C2999 +
            (C4289 + C4288) * C2998 + (C4287 + C4286) * C2997) *
               C1341) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C143 + (C1609 + C1610 + C1611) * C28010) *
               C27816 * C27768) *
              C28008 * C951 -
          (((C1524 * C2549 + C1345 * C2723 + C1523 * C2551 + C1344 * C2724 +
             C1522 * C1005 + C1343 * C1133) *
                C28010 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C143) *
               C27816 * C27768 +
           ((C1524 * C2550 + C1345 * C2725 + C1523 * C2552 + C1344 * C2726 +
             C1522 * C1006 + C1343 * C1134) *
                C28010 +
            (C1524 * C2484 + C1345 * C2667 + C1523 * C2486 + C1344 * C2668 +
             C1522 * C956 + C1343 * C1092) *
                C143) *
               C27816 * C1341) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C143 +
            (C233 * C144 + C27805 * C296) * C28010) *
               C27816 * C73 +
           (C302 + C314) * C27816 * C74 + (C305 + C315) * C27816 * C75 +
           (C308 + C316) * C27816 * C76) *
              C28008 * C951 -
          (((C233 * C1003 + C27805 * C1131) * C28010 +
            (C233 * C953 + C27805 * C1089) * C143) *
               C27816 * C76 +
           ((C233 * C1004 + C27805 * C1132) * C28010 +
            (C233 * C954 + C27805 * C1090) * C143) *
               C27816 * C75 +
           ((C233 * C1005 + C27805 * C1133) * C28010 +
            (C233 * C955 + C27805 * C1091) * C143) *
               C27816 * C74 +
           ((C233 * C1006 + C27805 * C1134) * C28010 +
            (C233 * C956 + C27805 * C1092) * C143) *
               C27816 * C73) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C2997 +
            (C4342 + C4350) * C2998 + (C4345 + C4351) * C2999) *
               C1341 +
           ((C302 + C314) * C2997 + (C3246 + C3254) * C2998 +
            (C3249 + C3255) * C2999) *
               C27768) *
              C28008 * C951 -
          ((((C233 * C4133 + C27805 * C4339) * C28010 +
             (C233 * C4051 + C27805 * C4265) * C143) *
                C2999 +
            (C3255 + C3249) * C2998 + (C3254 + C3246) * C2997) *
               C27768 +
           (((C233 * C4134 + C27805 * C4340) * C28010 +
             (C233 * C4052 + C27805 * C4266) * C143) *
                C2999 +
            (C4351 + C4345) * C2998 + (C4350 + C4342) * C2997) *
               C1341) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C1045 +
           (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
            C1524 * C1466 + C1345 * C1661) *
               C951 -
           (C1524 * C2484 + C1345 * C2667 + C1523 * C2486 + C1344 * C2668 +
            C1522 * C956 + C1343 * C1092) *
               C1046 -
           (C1524 * C2610 + C1345 * C2777 + C1523 * C2608 + C1344 * C2778 +
            C1522 * C1050 + C1343 * C1169) *
               C952) *
              C27816 * C1341 +
          ((C1546 + C1545 + C1544) * C1045 + (C1671 + C1672 + C1673) * C951 -
           (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
            C1522 * C955 + C1343 * C1091) *
               C1046 -
           (C1524 * C2609 + C1345 * C2779 + C1523 * C2607 + C1344 * C2780 +
            C1522 * C1049 + C1343 * C1170) *
               C952) *
              C27816 * C27768) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C1045 +
           (C233 * C189 + C27805 * C350) * C951 -
           (C233 * C956 + C27805 * C1092) * C1046 -
           (C233 * C1050 + C27805 * C1169) * C952) *
              C27816 * C73 +
          (C257 * C1045 + C365 * C951 - (C233 * C955 + C27805 * C1091) * C1046 -
           (C233 * C1049 + C27805 * C1170) * C952) *
              C27816 * C74 +
          (C259 * C1045 + C366 * C951 - (C233 * C954 + C27805 * C1090) * C1046 -
           (C233 * C1048 + C27805 * C1171) * C952) *
              C27816 * C75 +
          (C261 * C1045 + C367 * C951 - (C233 * C953 + C27805 * C1089) * C1046 -
           (C233 * C1047 + C27805 * C1172) * C952) *
              C27816 * C76) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C1045 +
            (C233 * C189 + C27805 * C350) * C951 - C4282 * C1046 -
            C4408 * C952) *
               C2997 +
           (C4282 * C1045 + C4408 * C951 - C4284 * C1046 - C4409 * C952) *
               C2998 +
           (C4284 * C1045 + C4409 * C951 -
            (C233 * C4052 + C27805 * C4266) * C1046 -
            (C233 * C4200 + C27805 * C4401) * C952) *
               C2999) *
              C1341 +
          ((C257 * C1045 + C365 * C951 - C3189 * C1046 - C3315 * C952) * C2997 +
           (C3189 * C1045 + C3315 * C951 - C3191 * C1046 - C3316 * C952) *
               C2998 +
           (C3191 * C1045 + C3316 * C951 -
            (C233 * C4051 + C27805 * C4265) * C1046 -
            (C233 * C4199 + C27805 * C4402) * C952) *
               C2999) *
              C27768) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (-std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C1341 +
            (C428 * C578 + C429 * C28008) * C27768) *
               C1343 +
           ((C2310 + C2311) * C1341 + (C2298 + C2299) * C27768) * C1344 +
           ((C2312 + C2313) * C1341 + (C2304 + C2305) * C27768) * C1345) *
              C951 -
          ((((C404 * C2487 + C27816 * C2835) * C28008 +
             (C404 * C2483 + C27816 * C2831) * C578) *
                C27768 +
            ((C404 * C2488 + C27816 * C2836) * C28008 +
             (C404 * C2484 + C27816 * C2832) * C578) *
                C1341) *
               C1345 +
           (((C404 * C2491 + C27816 * C2837) * C28008 +
             (C404 * C2485 + C27816 * C2833) * C578) *
                C27768 +
            ((C404 * C2492 + C27816 * C2838) * C28008 +
             (C404 * C2486 + C27816 * C2834) * C578) *
                C1341) *
               C1344 +
           (((C404 * C959 + C27816 * C1213) * C28008 +
             (C404 * C955 + C27816 * C1209) * C578) *
                C27768 +
            ((C404 * C960 + C27816 * C1214) * C28008 +
             (C404 * C956 + C27816 * C1210) * C578) *
                C1341) *
               C1343) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C578 +
            (C404 * C98 + C27816 * C410) * C28008) *
               C73 +
           (C428 * C578 + C429 * C28008) * C74 +
           (C430 * C578 + C431 * C28008) * C75 +
           (C432 * C578 + C433 * C28008) * C76) *
              C27805 * C951 -
          (((C404 * C957 + C27816 * C1211) * C28008 +
            (C404 * C953 + C27816 * C1207) * C578) *
               C76 +
           ((C404 * C958 + C27816 * C1212) * C28008 +
            (C404 * C954 + C27816 * C1208) * C578) *
               C75 +
           ((C404 * C959 + C27816 * C1213) * C28008 +
            (C404 * C955 + C27816 * C1209) * C578) *
               C74 +
           ((C404 * C960 + C27816 * C1214) * C28008 +
            (C404 * C956 + C27816 * C1210) * C578) *
               C73) *
              C27805 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C578 +
            (C3368 * C98 + C2997 * C410 + C3369 * C960 + C2998 * C1214 +
             C3370 * C3005 + C2999 * C3374) *
                C28008) *
               C1341 +
           ((C3392 + C3391 + C3390) * C578 + (C3395 + C3394 + C3393) * C28008) *
               C27768) *
              C27805 * C951 -
          (((C3370 * C4053 + C2999 * C4461 + C3369 * C3006 + C2998 * C3375 +
             C3368 * C959 + C2997 * C1213) *
                C28008 +
            (C3370 * C4051 + C2999 * C4459 + C3369 * C3001 + C2998 * C3372 +
             C3368 * C955 + C2997 * C1209) *
                C578) *
               C27768 +
           ((C3370 * C4054 + C2999 * C4462 + C3369 * C3005 + C2998 * C3374 +
             C3368 * C960 + C2997 * C1214) *
                C28008 +
            (C3370 * C4052 + C2999 * C4460 + C3369 * C3000 + C2998 * C3371 +
             C3368 * C956 + C2997 * C1210) *
                C578) *
               C1341) *
              C27805 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (-std::pow(Pi, 2.5) * (((((C404 * C89 + C27816 * C405) * C143 +
                                  (C404 * C144 + C27816 * C467) * C28010) *
                                     C1341 +
                                 (C473 + C485) * C27768) *
                                    C1343 +
                                ((C2306 * C143 + C2370 * C28010) * C1341 +
                                 (C1795 + C1803) * C27768) *
                                    C1344 +
                                ((C2308 * C143 + C2371 * C28010) * C1341 +
                                 (C1798 + C1804) * C27768) *
                                    C1345) *
                                   C28008 * C951 -
                               ((((C404 * C2549 + C27816 * C2889) * C28010 +
                                  (C404 * C2483 + C27816 * C2831) * C143) *
                                     C27768 +
                                 ((C404 * C2550 + C27816 * C2890) * C28010 +
                                  (C404 * C2484 + C27816 * C2832) * C143) *
                                     C1341) *
                                    C1345 +
                                (((C404 * C2551 + C27816 * C2891) * C28010 +
                                  (C404 * C2485 + C27816 * C2833) * C143) *
                                     C27768 +
                                 ((C404 * C2552 + C27816 * C2892) * C28010 +
                                  (C404 * C2486 + C27816 * C2834) * C143) *
                                     C1341) *
                                    C1344 +
                                (((C404 * C1005 + C27816 * C1251) * C28010 +
                                  (C404 * C955 + C27816 * C1209) * C143) *
                                     C27768 +
                                 ((C404 * C1006 + C27816 * C1252) * C28010 +
                                  (C404 * C956 + C27816 * C1210) * C143) *
                                     C1341) *
                                    C1343) *
                                   C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C143 +
            (C404 * C144 + C27816 * C467) * C28010) *
               C73 +
           (C473 + C485) * C74 + (C476 + C486) * C75 + (C479 + C487) * C76) *
              C27805 * C28008 * C951 -
          (((C404 * C1003 + C27816 * C1249) * C28010 +
            (C404 * C953 + C27816 * C1207) * C143) *
               C76 +
           ((C404 * C1004 + C27816 * C1250) * C28010 +
            (C404 * C954 + C27816 * C1208) * C143) *
               C75 +
           ((C404 * C1005 + C27816 * C1251) * C28010 +
            (C404 * C955 + C27816 * C1209) * C143) *
               C74 +
           ((C404 * C1006 + C27816 * C1252) * C28010 +
            (C404 * C956 + C27816 * C1210) * C143) *
               C73) *
              C27805 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C143 +
            (C3368 * C144 + C2997 * C467 + C3369 * C1006 + C2998 * C1252 +
             C3370 * C3062 + C2999 * C3445) *
                C28010) *
               C1341 +
           ((C3392 + C3391 + C3390) * C143 + (C3455 + C3456 + C3457) * C28010) *
               C27768) *
              C27805 * C28008 * C951 -
          (((C3370 * C4133 + C2999 * C4513 + C3369 * C3063 + C2998 * C3446 +
             C3368 * C1005 + C2997 * C1251) *
                C28010 +
            (C3370 * C4051 + C2999 * C4459 + C3369 * C3001 + C2998 * C3372 +
             C3368 * C955 + C2997 * C1209) *
                C143) *
               C27768 +
           ((C3370 * C4134 + C2999 * C4514 + C3369 * C3062 + C2998 * C3445 +
             C3368 * C1006 + C2997 * C1252) *
                C28010 +
            (C3370 * C4052 + C2999 * C4460 + C3369 * C3000 + C2998 * C3371 +
             C3368 * C956 + C2997 * C1210) *
                C143) *
               C1341) *
              C27805 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C1045 +
            (C404 * C189 + C27816 * C521) * C951 -
            (C404 * C956 + C27816 * C1210) * C1046 -
            (C404 * C1050 + C27816 * C1287) * C952) *
               C1341 +
           (C428 * C1045 + C536 * C951 -
            (C404 * C955 + C27816 * C1209) * C1046 -
            (C404 * C1049 + C27816 * C1288) * C952) *
               C27768) *
              C1343 +
          ((C2306 * C1045 + C2430 * C951 -
            (C404 * C2486 + C27816 * C2834) * C1046 -
            (C404 * C2608 + C27816 * C2943) * C952) *
               C1341 +
           (C1738 * C1045 + C1864 * C951 -
            (C404 * C2485 + C27816 * C2833) * C1046 -
            (C404 * C2607 + C27816 * C2944) * C952) *
               C27768) *
              C1344 +
          ((C2308 * C1045 + C2431 * C951 -
            (C404 * C2484 + C27816 * C2832) * C1046 -
            (C404 * C2610 + C27816 * C2945) * C952) *
               C1341 +
           (C1740 * C1045 + C1865 * C951 -
            (C404 * C2483 + C27816 * C2831) * C1046 -
            (C404 * C2609 + C27816 * C2946) * C952) *
               C27768) *
              C1345) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C1045 +
           (C404 * C189 + C27816 * C521) * C951 -
           (C404 * C956 + C27816 * C1210) * C1046 -
           (C404 * C1050 + C27816 * C1287) * C952) *
              C73 +
          (C428 * C1045 + C536 * C951 - (C404 * C955 + C27816 * C1209) * C1046 -
           (C404 * C1049 + C27816 * C1288) * C952) *
              C74 +
          (C430 * C1045 + C537 * C951 - (C404 * C954 + C27816 * C1208) * C1046 -
           (C404 * C1048 + C27816 * C1289) * C952) *
              C75 +
          (C432 * C1045 + C538 * C951 - (C404 * C953 + C27816 * C1207) * C1046 -
           (C404 * C1047 + C27816 * C1290) * C952) *
              C76) *
         C27805 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
            C3370 * C3000 + C2999 * C3371) *
               C1045 +
           (C3368 * C189 + C2997 * C521 + C3369 * C1050 + C2998 * C1287 +
            C3370 * C3118 + C2999 * C3507) *
               C951 -
           (C3370 * C4052 + C2999 * C4460 + C3369 * C3000 + C2998 * C3371 +
            C3368 * C956 + C2997 * C1210) *
               C1046 -
           (C3370 * C4200 + C2999 * C4565 + C3369 * C3118 + C2998 * C3507 +
            C3368 * C1050 + C2997 * C1287) *
               C952) *
              C1341 +
          ((C3392 + C3391 + C3390) * C1045 + (C3517 + C3518 + C3519) * C951 -
           (C3370 * C4051 + C2999 * C4459 + C3369 * C3001 + C2998 * C3372 +
            C3368 * C955 + C2997 * C1209) *
               C1046 -
           (C3370 * C4199 + C2999 * C4566 + C3369 * C3119 + C2998 * C3508 +
            C3368 * C1049 + C2997 * C1288) *
               C952) *
              C27768) *
         C27805 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
                     C4624 * C91 + C4619 * C96) *
                        C87 +
                    (C4622 * C98 + C27996 * C104 + C4623 * C99 + C27997 * C105 +
                     C4624 * C100 + C4619 * C106) *
                        C77 -
                    (C4624 * C92 + C4619 * C97 + C4623 * C91 + C27997 * C96 +
                     C4622 * C90 + C27996 * C95) *
                        C88 -
                    (C4624 * C101 + C4619 * C107 + C4623 * C100 +
                     C27997 * C106 + C4622 * C99 + C27996 * C105) *
                        C78) *
                       C27805 * C27974 +
                   ((C4622 * C956 + C27996 * C964 + C4623 * C955 +
                     C27997 * C963 + C4624 * C954 + C4619 * C962) *
                        C87 +
                    (C4622 * C960 + C27996 * C968 + C4623 * C959 +
                     C27997 * C967 + C4624 * C958 + C4619 * C966) *
                        C77 -
                    (C4624 * C953 + C4619 * C961 + C4623 * C954 +
                     C27997 * C962 + C4622 * C955 + C27996 * C963) *
                        C88 -
                    (C4624 * C957 + C4619 * C965 + C4623 * C958 +
                     C27997 * C966 + C4622 * C959 + C27996 * C967) *
                        C78) *
                       C27805 * C27880) *
                  C28009 * C28010) /
                 (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
                      C4624 * C91 + C4619 * C96) *
                         C143 +
                     (C4622 * C144 + C27996 * C149 + C4623 * C145 +
                      C27997 * C150 + C4624 * C146 + C4619 * C151) *
                         C28010) *
                        C27805 * C27974 +
                    ((C4622 * C956 + C27996 * C964 + C4623 * C955 +
                      C27997 * C963 + C4624 * C954 + C4619 * C962) *
                         C143 +
                     (C4622 * C1006 + C27996 * C1010 + C4623 * C1005 +
                      C27997 * C1009 + C4624 * C1004 + C4619 * C1008) *
                         C28010) *
                        C27805 * C27880) *
                       C77 -
                   (((C4624 * C1003 + C4619 * C1007 + C4623 * C1004 +
                      C27997 * C1008 + C4622 * C1005 + C27996 * C1009) *
                         C28010 +
                     (C4624 * C953 + C4619 * C961 + C4623 * C954 +
                      C27997 * C962 + C4622 * C955 + C27996 * C963) *
                         C143) *
                        C27805 * C27880 +
                    ((C4624 * C147 + C4619 * C152 + C4623 * C146 +
                      C27997 * C151 + C4622 * C145 + C27996 * C150) *
                         C28010 +
                     (C4624 * C92 + C4619 * C97 + C4623 * C91 + C27997 * C96 +
                      C4622 * C90 + C27996 * C95) *
                         C143) *
                        C27805 * C27974) *
                       C78) *
                  C28009) /
                 (p * q * std::sqrt(p + q));
    d2eexz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
                      C4624 * C91 + C4619 * C96) *
                         C188 +
                     (C4622 * C189 + C27996 * C194 + C4623 * C190 +
                      C27997 * C195 + C4624 * C191 + C4619 * C196) *
                         C28009) *
                        C27805 * C27974 +
                    ((C4622 * C956 + C27996 * C964 + C4623 * C955 +
                      C27997 * C963 + C4624 * C954 + C4619 * C962) *
                         C188 +
                     (C4622 * C1050 + C27996 * C1054 + C4623 * C1049 +
                      C27997 * C1053 + C4624 * C1048 + C4619 * C1052) *
                         C28009) *
                        C27805 * C27880) *
                       C28010 * C77 -
                   (((C4624 * C1047 + C4619 * C1051 + C4623 * C1048 +
                      C27997 * C1052 + C4622 * C1049 + C27996 * C1053) *
                         C28009 +
                     (C4624 * C953 + C4619 * C961 + C4623 * C954 +
                      C27997 * C962 + C4622 * C955 + C27996 * C963) *
                         C188) *
                        C27805 * C27880 +
                    ((C4624 * C192 + C4619 * C197 + C4623 * C191 +
                      C27997 * C196 + C4622 * C190 + C27996 * C195) *
                         C28009 +
                     (C4624 * C92 + C4619 * C97 + C4623 * C91 + C27997 * C96 +
                      C4622 * C90 + C27996 * C95) *
                         C188) *
                        C27805 * C27974) *
                       C28010 * C78)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C87 +
            (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
               C27974 +
           (C4282 * C87 + C4283 * C77 - C3189 * C88 - C3190 * C78) * C27880) *
              C27996 +
          ((C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C27974 +
           (C3189 * C87 + C3190 * C77 - C6252 * C88 - C6253 * C78) * C27880) *
              C27997 +
          ((C259 * C87 + C260 * C77 - C261 * C88 - C262 * C78) * C27974 +
           (C6252 * C87 + C6253 * C77 - (C233 * C953 + C27805 * C1089) * C88 -
            (C233 * C957 + C27805 * C1093) * C78) *
               C27880) *
              C4619) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C27974 +
            (C4342 + C4350) * C27880) *
               C27996 +
           ((C302 + C314) * C27974 + (C3246 + C3254) * C27880) * C27997 +
           ((C305 + C315) * C27974 + (C6304 + C6308) * C27880) * C4619) *
              C77 -
          ((((C233 * C1003 + C27805 * C1131) * C28010 +
             (C233 * C953 + C27805 * C1089) * C143) *
                C27880 +
            (C316 + C308) * C27974) *
               C4619 +
           ((C6308 + C6304) * C27880 + (C315 + C305) * C27974) * C27997 +
           ((C3254 + C3246) * C27880 + (C314 + C302) * C27974) * C27996) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C27974 +
            (C4282 * C188 + C4408 * C28009) * C27880) *
               C27996 +
           ((C356 + C368) * C27974 + (C3309 + C3317) * C27880) * C27997 +
           ((C359 + C369) * C27974 + (C6359 + C6363) * C27880) * C4619) *
              C28010 * C77 -
          ((((C233 * C1047 + C27805 * C1172) * C28009 +
             (C233 * C953 + C27805 * C1089) * C188) *
                C27880 +
            (C370 + C362) * C27974) *
               C4619 +
           ((C6363 + C6359) * C27880 + (C369 + C359) * C27974) * C27997 +
           ((C3317 + C3309) * C27880 + (C368 + C356) * C27974) * C27996) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) * C87 +
           (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) * C77 -
           (C6432 + C6433) * C88 - (C6434 + C6435) * C78) *
              C27996 +
          ((C6433 + C6432) * C87 + (C6435 + C6434) * C77 -
           (C6436 + C6437) * C88 - (C6438 + C6439) * C78) *
              C27997 +
          ((C6437 + C6436) * C87 + (C6439 + C6438) * C77 -
           (C6414 * C953 + C27880 * C1207 + C6413 * C92 + C27974 * C408) * C88 -
           (C6414 * C957 + C27880 * C1211 + C6413 * C101 + C27974 * C413) *
               C78) *
              C4619) *
         C27805 * C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C143 +
            (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                C28010) *
               C27996 +
           ((C6433 + C6432) * C143 + (C6498 + C6499) * C28010) * C27997 +
           ((C6437 + C6436) * C143 + (C6500 + C6501) * C28010) * C4619) *
              C27805 * C77 -
          (((C6414 * C1003 + C27880 * C1249 + C6413 * C147 + C27974 * C470) *
                C28010 +
            (C6414 * C953 + C27880 * C1207 + C6413 * C92 + C27974 * C408) *
                C143) *
               C4619 +
           ((C6501 + C6500) * C28010 + (C6436 + C6437) * C143) * C27997 +
           ((C6499 + C6498) * C28010 + (C6432 + C6433) * C143) * C27996) *
              C27805 * C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C188 +
            (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                C28009) *
               C27996 +
           ((C6433 + C6432) * C188 + (C6560 + C6561) * C28009) * C27997 +
           ((C6437 + C6436) * C188 + (C6562 + C6563) * C28009) * C4619) *
              C27805 * C28010 * C77 -
          (((C6414 * C1047 + C27880 * C1290 + C6413 * C192 + C27974 * C524) *
                C28009 +
            (C6414 * C953 + C27880 * C1207 + C6413 * C92 + C27974 * C408) *
                C188) *
               C4619 +
           ((C6563 + C6562) * C28009 + (C6436 + C6437) * C188) * C27997 +
           ((C6561 + C6560) * C28009 + (C6432 + C6433) * C188) * C27996) *
              C27805 * C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C578 +
            (C4622 * C98 + C27996 * C104 + C4623 * C99 + C27997 * C105 +
             C4624 * C100 + C4619 * C106) *
                C28008) *
               C27805 * C27974 +
           ((C4622 * C956 + C27996 * C964 + C4623 * C955 + C27997 * C963 +
             C4624 * C954 + C4619 * C962) *
                C578 +
            (C4622 * C960 + C27996 * C968 + C4623 * C959 + C27997 * C967 +
             C4624 * C958 + C4619 * C966) *
                C28008) *
               C27805 * C27880) *
              C28009 * C576 -
          (((C4624 * C5630 + C4619 * C5632 + C4623 * C2491 + C27997 * C2497 +
             C4622 * C2492 + C27996 * C2498) *
                C28008 +
            (C4624 * C5629 + C4619 * C5631 + C4623 * C2485 + C27997 * C2493 +
             C4622 * C2486 + C27996 * C2494) *
                C578) *
               C27805 * C27880 +
           ((C5159 + C5158 + C5157) * C28008 + (C5156 + C5155 + C5154) * C578) *
               C27805 * C27974) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
            C4624 * C91 + C4619 * C96) *
               C629 +
           (C4622 * C144 + C27996 * C149 + C4623 * C145 + C27997 * C150 +
            C4624 * C146 + C4619 * C151) *
               C576 -
           (C5156 + C5155 + C5154) * C630 - (C5216 + C5217 + C5218) * C577) *
              C27805 * C27974 +
          ((C4622 * C956 + C27996 * C964 + C4623 * C955 + C27997 * C963 +
            C4624 * C954 + C4619 * C962) *
               C629 +
           (C4622 * C1006 + C27996 * C1010 + C4623 * C1005 + C27997 * C1009 +
            C4624 * C1004 + C4619 * C1008) *
               C576 -
           (C4624 * C5629 + C4619 * C5631 + C4623 * C2485 + C27997 * C2493 +
            C4622 * C2486 + C27996 * C2494) *
               C630 -
           (C4624 * C5683 + C4619 * C5684 + C4623 * C2551 + C27997 * C2555 +
            C4622 * C2552 + C27996 * C2556) *
               C577) *
              C27805 * C27880) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C188 +
            (C4622 * C189 + C27996 * C194 + C4623 * C190 + C27997 * C195 +
             C4624 * C191 + C4619 * C196) *
                C28009) *
               C27805 * C27974 +
           ((C4622 * C956 + C27996 * C964 + C4623 * C955 + C27997 * C963 +
             C4624 * C954 + C4619 * C962) *
                C188 +
            (C4622 * C1050 + C27996 * C1054 + C4623 * C1049 + C27997 * C1053 +
             C4624 * C1048 + C4619 * C1052) *
                C28009) *
               C27805 * C27880) *
              C576 -
          (((C4624 * C5735 + C4619 * C5736 + C4623 * C2607 + C27997 * C2611 +
             C4622 * C2608 + C27996 * C2612) *
                C28009 +
            (C4624 * C5629 + C4619 * C5631 + C4623 * C2485 + C27997 * C2493 +
             C4622 * C2486 + C27996 * C2494) *
                C188) *
               C27805 * C27880 +
           ((C5277 + C5276 + C5275) * C28009 + (C5156 + C5155 + C5154) * C188) *
               C27805 * C27974) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C27974 +
            (C4286 + C4287) * C27880) *
               C27996 +
           ((C257 * C578 + C258 * C28008) * C27974 + (C4278 + C4279) * C27880) *
               C27997 +
           ((C259 * C578 + C260 * C28008) * C27974 +
            (C6252 * C578 + C6253 * C28008) * C27880) *
               C4619) *
              C28009 * C576 -
          ((((C233 * C5630 + C27805 * C5788) * C28008 +
             (C233 * C5629 + C27805 * C5787) * C578) *
                C27880 +
            ((C233 * C584 + C27805 * C720) * C28008 +
             (C233 * C580 + C27805 * C716) * C578) *
                C27974) *
               C4619 +
           (((C233 * C2491 + C27805 * C2670) * C28008 +
             (C233 * C2485 + C27805 * C2666) * C578) *
                C27880 +
            ((C233 * C585 + C27805 * C721) * C28008 +
             (C233 * C581 + C27805 * C717) * C578) *
                C27974) *
               C27997 +
           (((C233 * C2492 + C27805 * C2672) * C28008 +
             (C233 * C2486 + C27805 * C2668) * C578) *
                C27880 +
            ((C233 * C586 + C27805 * C722) * C28008 +
             (C233 * C582 + C27805 * C718) * C578) *
                C27974) *
               C27996) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C629 +
            (C233 * C144 + C27805 * C296) * C576 -
            (C233 * C582 + C27805 * C718) * C630 -
            (C233 * C634 + C27805 * C757) * C577) *
               C27974 +
           (C4282 * C629 + C4348 * C576 -
            (C233 * C2486 + C27805 * C2668) * C630 -
            (C233 * C2552 + C27805 * C2726) * C577) *
               C27880) *
              C27996 +
          ((C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
            (C233 * C633 + C27805 * C758) * C577) *
               C27974 +
           (C3189 * C629 + C3252 * C576 -
            (C233 * C2485 + C27805 * C2666) * C630 -
            (C233 * C2551 + C27805 * C2724) * C577) *
               C27880) *
              C27997 +
          ((C259 * C629 + C312 * C576 - (C233 * C580 + C27805 * C716) * C630 -
            (C233 * C632 + C27805 * C759) * C577) *
               C27974 +
           (C6252 * C629 + C6307 * C576 -
            (C233 * C5629 + C27805 * C5787) * C630 -
            (C233 * C5683 + C27805 * C5839) * C577) *
               C27880) *
              C4619) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C27974 +
            (C4282 * C188 + C4408 * C28009) * C27880) *
               C27996 +
           ((C356 + C368) * C27974 + (C3309 + C3317) * C27880) * C27997 +
           ((C359 + C369) * C27974 + (C6359 + C6363) * C27880) * C4619) *
              C576 -
          ((((C233 * C5735 + C27805 * C5890) * C28009 +
             (C233 * C5629 + C27805 * C5787) * C188) *
                C27880 +
            ((C233 * C674 + C27805 * C796) * C28009 +
             (C233 * C580 + C27805 * C716) * C188) *
                C27974) *
               C4619 +
           (((C233 * C2607 + C27805 * C2780) * C28009 +
             (C233 * C2485 + C27805 * C2666) * C188) *
                C27880 +
            ((C233 * C675 + C27805 * C797) * C28009 +
             (C233 * C581 + C27805 * C717) * C188) *
                C27974) *
               C27997 +
           (((C233 * C2608 + C27805 * C2778) * C28009 +
             (C233 * C2486 + C27805 * C2668) * C188) *
                C27880 +
            ((C233 * C676 + C27805 * C798) * C28009 +
             (C233 * C582 + C27805 * C718) * C188) *
                C27974) *
               C27996) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C578 +
            (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                C28008) *
               C27996 +
           ((C6433 + C6432) * C578 + (C6435 + C6434) * C28008) * C27997 +
           ((C6437 + C6436) * C578 + (C6439 + C6438) * C28008) * C4619) *
              C27805 * C28009 * C576 -
          (((C6414 * C5630 + C27880 * C5942 + C6413 * C584 + C27974 * C838) *
                C28008 +
            (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                C578) *
               C4619 +
           ((C6414 * C2491 + C27880 * C2837 + C6413 * C585 + C27974 * C839) *
                C28008 +
            (C6414 * C2485 + C27880 * C2833 + C6413 * C581 + C27974 * C835) *
                C578) *
               C27997 +
           ((C6414 * C2492 + C27880 * C2838 + C6413 * C586 + C27974 * C840) *
                C28008 +
            (C6414 * C2486 + C27880 * C2834 + C6413 * C582 + C27974 * C836) *
                C578) *
               C27996) *
              C27805 * C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
               C629 +
           (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
               C576 -
           (C6414 * C2486 + C27880 * C2834 + C6413 * C582 + C27974 * C836) *
               C630 -
           (C6414 * C2552 + C27880 * C2892 + C6413 * C634 + C27974 * C875) *
               C577) *
              C27996 +
          ((C6433 + C6432) * C629 + (C6498 + C6499) * C576 -
           (C6414 * C2485 + C27880 * C2833 + C6413 * C581 + C27974 * C835) *
               C630 -
           (C6414 * C2551 + C27880 * C2891 + C6413 * C633 + C27974 * C876) *
               C577) *
              C27997 +
          ((C6437 + C6436) * C629 + (C6500 + C6501) * C576 -
           (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
               C630 -
           (C6414 * C5683 + C27880 * C5993 + C6413 * C632 + C27974 * C877) *
               C577) *
              C4619) *
         C27805 * C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C188 +
            (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                C28009) *
               C27996 +
           ((C6433 + C6432) * C188 + (C6560 + C6561) * C28009) * C27997 +
           ((C6437 + C6436) * C188 + (C6562 + C6563) * C28009) * C4619) *
              C27805 * C576 -
          (((C6414 * C5735 + C27880 * C6044 + C6413 * C674 + C27974 * C914) *
                C28009 +
            (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                C188) *
               C4619 +
           ((C6414 * C2607 + C27880 * C2944 + C6413 * C675 + C27974 * C915) *
                C28009 +
            (C6414 * C2485 + C27880 * C2833 + C6413 * C581 + C27974 * C835) *
                C188) *
               C27997 +
           ((C6414 * C2608 + C27880 * C2943 + C6413 * C676 + C27974 * C916) *
                C28009 +
            (C6414 * C2486 + C27880 * C2834 + C6413 * C582 + C27974 * C836) *
                C188) *
               C27996) *
              C27805 * C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C578 +
            (C4622 * C98 + C27996 * C104 + C4623 * C99 + C27997 * C105 +
             C4624 * C100 + C4619 * C106) *
                C28008) *
               C27805 * C27974 +
           ((C7076 + C7077 + C7078) * C578 + (C7079 + C7080 + C7081) * C28008) *
               C27805 * C27880) *
              C951 -
          (((C4624 * C3008 + C4619 * C3011 + C4623 * C3006 + C27997 * C3010 +
             C4622 * C3005 + C27996 * C3009) *
                C28008 +
            (C4624 * C3002 + C4619 * C3007 + C4623 * C3001 + C27997 * C3004 +
             C4622 * C3000 + C27996 * C3003) *
                C578) *
               C27805 * C27880 +
           ((C7081 + C7080 + C7079) * C28008 + (C7078 + C7077 + C7076) * C578) *
               C27805 * C27974) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
             C4624 * C91 + C4619 * C96) *
                C143 +
            (C4622 * C144 + C27996 * C149 + C4623 * C145 + C27997 * C150 +
             C4624 * C146 + C4619 * C151) *
                C28010) *
               C27805 * C27974 +
           ((C7076 + C7077 + C7078) * C143 + (C7138 + C7139 + C7140) * C28010) *
               C27805 * C27880) *
              C28008 * C951 -
          (((C4624 * C3064 + C4619 * C3067 + C4623 * C3063 + C27997 * C3066 +
             C4622 * C3062 + C27996 * C3065) *
                C28010 +
            (C4624 * C3002 + C4619 * C3007 + C4623 * C3001 + C27997 * C3004 +
             C4622 * C3000 + C27996 * C3003) *
                C143) *
               C27805 * C27880 +
           ((C7140 + C7139 + C7138) * C28010 + (C7078 + C7077 + C7076) * C143) *
               C27805 * C27974) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4622 * C89 + C27996 * C94 + C4623 * C90 + C27997 * C95 +
            C4624 * C91 + C4619 * C96) *
               C1045 +
           (C4622 * C189 + C27996 * C194 + C4623 * C190 + C27997 * C195 +
            C4624 * C191 + C4619 * C196) *
               C951 -
           (C7078 + C7077 + C7076) * C1046 - (C7197 + C7198 + C7199) * C952) *
              C27805 * C27974 +
          ((C7076 + C7077 + C7078) * C1045 + (C7199 + C7198 + C7197) * C951 -
           (C4624 * C3002 + C4619 * C3007 + C4623 * C3001 + C27997 * C3004 +
            C4622 * C3000 + C27996 * C3003) *
               C1046 -
           (C4624 * C3120 + C4619 * C3123 + C4623 * C3119 + C27997 * C3122 +
            C4622 * C3118 + C27996 * C3121) *
               C952) *
              C27805 * C27880) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C27974 +
            (C4286 + C4287) * C27880) *
               C27996 +
           ((C257 * C578 + C258 * C28008) * C27974 + (C4278 + C4279) * C27880) *
               C27997 +
           ((C259 * C578 + C260 * C28008) * C27974 + (C7250 + C7251) * C27880) *
               C4619) *
              C951 -
          ((((C233 * C3008 + C27805 * C3179) * C28008 +
             (C233 * C3002 + C27805 * C3176) * C578) *
                C27880 +
            (C7251 + C7250) * C27974) *
               C4619 +
           ((C4281 + C4280) * C27880 + (C4279 + C4278) * C27974) * C27997 +
           ((C4289 + C4288) * C27880 + (C4287 + C4286) * C27974) * C27996) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C27974 +
            (C4342 + C4350) * C27880) *
               C27996 +
           ((C302 + C314) * C27974 + (C3246 + C3254) * C27880) * C27997 +
           ((C305 + C315) * C27974 + (C6304 + C6308) * C27880) * C4619) *
              C28008 * C951 -
          ((((C233 * C3064 + C27805 * C3244) * C28010 +
             (C233 * C3002 + C27805 * C3176) * C143) *
                C27880 +
            (C6308 + C6304) * C27974) *
               C4619 +
           ((C3255 + C3249) * C27880 + (C3254 + C3246) * C27974) * C27997 +
           ((C4351 + C4345) * C27880 + (C4350 + C4342) * C27974) * C27996) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C1045 +
            (C233 * C189 + C27805 * C350) * C951 - C4282 * C1046 -
            C4408 * C952) *
               C27974 +
           (C4282 * C1045 + C4408 * C951 - C4284 * C1046 - C4409 * C952) *
               C27880) *
              C27996 +
          ((C257 * C1045 + C365 * C951 - C3189 * C1046 - C3315 * C952) *
               C27974 +
           (C3189 * C1045 + C3315 * C951 - C3191 * C1046 - C3316 * C952) *
               C27880) *
              C27997 +
          ((C259 * C1045 + C366 * C951 - C6252 * C1046 - C6362 * C952) *
               C27974 +
           (C6252 * C1045 + C6362 * C951 -
            (C233 * C3002 + C27805 * C3176) * C1046 -
            (C233 * C3120 + C27805 * C3307) * C952) *
               C27880) *
              C4619) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C578 +
            (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                C28008) *
               C27996 +
           ((C6433 + C6432) * C578 + (C6435 + C6434) * C28008) * C27997 +
           ((C6437 + C6436) * C578 + (C6439 + C6438) * C28008) * C4619) *
              C27805 * C951 -
          (((C6414 * C3008 + C27880 * C3376 + C6413 * C958 + C27974 * C1212) *
                C28008 +
            (C6414 * C3002 + C27880 * C3373 + C6413 * C954 + C27974 * C1208) *
                C578) *
               C4619 +
           ((C6414 * C3006 + C27880 * C3375 + C6413 * C959 + C27974 * C1213) *
                C28008 +
            (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                C578) *
               C27997 +
           ((C6414 * C3005 + C27880 * C3374 + C6413 * C960 + C27974 * C1214) *
                C28008 +
            (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                C578) *
               C27996) *
              C27805 * C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C143 +
            (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                C28010) *
               C27996 +
           ((C6433 + C6432) * C143 + (C6498 + C6499) * C28010) * C27997 +
           ((C6437 + C6436) * C143 + (C6500 + C6501) * C28010) * C4619) *
              C27805 * C28008 * C951 -
          (((C6414 * C3064 + C27880 * C3447 + C6413 * C1004 + C27974 * C1250) *
                C28010 +
            (C6414 * C3002 + C27880 * C3373 + C6413 * C954 + C27974 * C1208) *
                C143) *
               C4619 +
           ((C6414 * C3063 + C27880 * C3446 + C6413 * C1005 + C27974 * C1251) *
                C28010 +
            (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                C143) *
               C27997 +
           ((C6414 * C3062 + C27880 * C3445 + C6413 * C1006 + C27974 * C1252) *
                C28010 +
            (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                C143) *
               C27996) *
              C27805 * C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
               C1045 +
           (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
               C951 -
           (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
               C1046 -
           (C6414 * C3118 + C27880 * C3507 + C6413 * C1050 + C27974 * C1287) *
               C952) *
              C27996 +
          ((C6433 + C6432) * C1045 + (C6560 + C6561) * C951 -
           (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
               C1046 -
           (C6414 * C3119 + C27880 * C3508 + C6413 * C1049 + C27974 * C1288) *
               C952) *
              C27997 +
          ((C6437 + C6436) * C1045 + (C6562 + C6563) * C951 -
           (C6414 * C3002 + C27880 * C3373 + C6413 * C954 + C27974 * C1208) *
               C1046 -
           (C6414 * C3120 + C27880 * C3509 + C6413 * C1048 + C27974 * C1289) *
               C952) *
              C4619) *
         C27805 * C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
           C75 * C96 + C86 * C92 + C76 * C97) *
              C87 +
          (C83 * C98 + C73 * C104 + C84 * C99 + C74 * C105 + C85 * C100 +
           C75 * C106 + C86 * C101 + C76 * C107) *
              C77 -
          (C86 * C93 + C76 * C102 + C85 * C92 + C75 * C97 + C84 * C91 +
           C74 * C96 + C83 * C90 + C73 * C95) *
              C88 -
          (C86 * C103 + C76 * C108 + C85 * C101 + C75 * C107 + C84 * C100 +
           C74 * C106 + C83 * C99 + C73 * C105) *
              C78) *
         C27805 * C27816 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C87 +
           (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) * C77 -
           (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C88 -
           (C1347 * C100 + C27768 * C106 + C1346 * C99 + C1341 * C105) * C78) *
              C1343 +
          ((C1346 * C582 + C1341 * C590 + C1347 * C581 + C27768 * C589) * C87 +
           (C1346 * C586 + C1341 * C594 + C1347 * C585 + C27768 * C593) * C77 -
           (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) * C88 -
           (C1347 * C584 + C27768 * C592 + C1346 * C585 + C1341 * C593) * C78) *
              C1344 +
          ((C1346 * C1348 + C1341 * C1351 + C1347 * C1349 + C27768 * C1352) *
               C87 +
           (C1346 * C1353 + C1341 * C1357 + C1347 * C1354 + C27768 * C1358) *
               C77 -
           (C1347 * C1350 + C27768 * C1355 + C1346 * C1349 + C1341 * C1352) *
               C88 -
           (C1347 * C1356 + C27768 * C1359 + C1346 * C1354 + C1341 * C1358) *
               C78) *
              C1345) *
         C27816 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C143 +
           (C83 * C144 + C73 * C149 + C84 * C145 + C74 * C150 + C85 * C146 +
            C75 * C151 + C86 * C147 + C76 * C152) *
               C28010) *
              C27805 * C27816 * C77 -
          ((C86 * C148 + C76 * C153 + C85 * C147 + C75 * C152 + C84 * C146 +
            C74 * C151 + C83 * C145 + C73 * C150) *
               C28010 +
           (C86 * C93 + C76 * C102 + C85 * C92 + C75 * C97 + C84 * C91 +
            C74 * C96 + C83 * C90 + C73 * C95) *
               C143) *
              C27805 * C27816 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C28010) *
               C1343 +
           ((C1346 * C582 + C1341 * C590 + C1347 * C581 + C27768 * C589) *
                C143 +
            (C1346 * C634 + C1341 * C638 + C1347 * C633 + C27768 * C637) *
                C28010) *
               C1344 +
           ((C1346 * C1348 + C1341 * C1351 + C1347 * C1349 + C27768 * C1352) *
                C143 +
            (C1346 * C1410 + C1341 * C1413 + C1347 * C1411 + C27768 * C1414) *
                C28010) *
               C1345) *
              C27816 * C77 -
          (((C1347 * C1412 + C27768 * C1415 + C1346 * C1411 + C1341 * C1414) *
                C28010 +
            (C1347 * C1350 + C27768 * C1355 + C1346 * C1349 + C1341 * C1352) *
                C143) *
               C1345 +
           ((C1347 * C632 + C27768 * C636 + C1346 * C633 + C1341 * C637) *
                C28010 +
            (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) *
                C143) *
               C1344 +
           ((C1347 * C146 + C27768 * C151 + C1346 * C145 + C1341 * C150) *
                C28010 +
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C143) *
               C1343) *
              C27816 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C188 +
           (C83 * C189 + C73 * C194 + C84 * C190 + C74 * C195 + C85 * C191 +
            C75 * C196 + C86 * C192 + C76 * C197) *
               C28009) *
              C27805 * C27816 * C28010 * C77 -
          ((C86 * C193 + C76 * C198 + C85 * C192 + C75 * C197 + C84 * C191 +
            C74 * C196 + C83 * C190 + C73 * C195) *
               C28009 +
           (C86 * C93 + C76 * C102 + C85 * C92 + C75 * C97 + C84 * C91 +
            C74 * C96 + C83 * C90 + C73 * C95) *
               C188) *
              C27805 * C27816 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C28009) *
               C1343 +
           ((C1346 * C582 + C1341 * C590 + C1347 * C581 + C27768 * C589) *
                C188 +
            (C1346 * C676 + C1341 * C680 + C1347 * C675 + C27768 * C679) *
                C28009) *
               C1344 +
           ((C1346 * C1348 + C1341 * C1351 + C1347 * C1349 + C27768 * C1352) *
                C188 +
            (C1346 * C1466 + C1341 * C1469 + C1347 * C1467 + C27768 * C1470) *
                C28009) *
               C1345) *
              C27816 * C28010 * C77 -
          (((C1347 * C1468 + C27768 * C1471 + C1346 * C1467 + C1341 * C1470) *
                C28009 +
            (C1347 * C1350 + C27768 * C1355 + C1346 * C1349 + C1341 * C1352) *
                C188) *
               C1345 +
           ((C1347 * C674 + C27768 * C678 + C1346 * C675 + C1341 * C679) *
                C28009 +
            (C1347 * C580 + C27768 * C588 + C1346 * C581 + C1341 * C589) *
                C188) *
               C1344 +
           ((C1347 * C191 + C27768 * C196 + C1346 * C190 + C1341 * C195) *
                C28009 +
            (C1347 * C91 + C27768 * C96 + C1346 * C90 + C1341 * C95) * C188) *
               C1343) *
              C27816 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C87 +
           (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
              C27816 * C73 +
          (C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C27816 * C74 +
          (C259 * C87 + C260 * C77 - C261 * C88 - C262 * C78) * C27816 * C75 +
          (C261 * C87 + C262 * C77 - (C233 * C93 + C27805 * C238) * C88 -
           (C233 * C103 + C27805 * C243) * C78) *
              C27816 * C76) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C87 +
           (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
            C1524 * C1353 + C1345 * C1528) *
               C77 -
           (C1544 + C1545 + C1546) * C88 - (C1547 + C1548 + C1549) * C78) *
              C27816 * C1341 +
          ((C1546 + C1545 + C1544) * C87 + (C1549 + C1548 + C1547) * C77 -
           (C1524 * C1350 + C1345 * C1527 + C1523 * C580 + C1344 * C716 +
            C1522 * C91 + C1343 * C236) *
               C88 -
           (C1524 * C1356 + C1345 * C1530 + C1523 * C584 + C1344 * C720 +
            C1522 * C100 + C1343 * C241) *
               C78) *
              C27816 * C27768) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C143 +
            (C233 * C144 + C27805 * C296) * C28010) *
               C27816 * C73 +
           (C302 + C314) * C27816 * C74 + (C305 + C315) * C27816 * C75 +
           (C308 + C316) * C27816 * C76) *
              C77 -
          (((C233 * C148 + C27805 * C300) * C28010 +
            (C233 * C93 + C27805 * C238) * C143) *
               C27816 * C76 +
           (C316 + C308) * C27816 * C75 + (C315 + C305) * C27816 * C74 +
           (C314 + C302) * C27816 * C73) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C143 + (C1609 + C1610 + C1611) * C28010) *
               C27816 * C27768) *
              C77 -
          (((C1524 * C1412 + C1345 * C1601 + C1523 * C632 + C1344 * C759 +
             C1522 * C146 + C1343 * C298) *
                C28010 +
            (C1524 * C1350 + C1345 * C1527 + C1523 * C580 + C1344 * C716 +
             C1522 * C91 + C1343 * C236) *
                C143) *
               C27816 * C27768 +
           ((C1611 + C1610 + C1609) * C28010 + (C1544 + C1545 + C1546) * C143) *
               C27816 * C1341) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C188 +
            (C233 * C189 + C27805 * C350) * C28009) *
               C27816 * C73 +
           (C356 + C368) * C27816 * C74 + (C359 + C369) * C27816 * C75 +
           (C362 + C370) * C27816 * C76) *
              C28010 * C77 -
          (((C233 * C193 + C27805 * C354) * C28009 +
            (C233 * C93 + C27805 * C238) * C188) *
               C27816 * C76 +
           (C370 + C362) * C27816 * C75 + (C369 + C359) * C27816 * C74 +
           (C368 + C356) * C27816 * C73) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C188 + (C1671 + C1672 + C1673) * C28009) *
               C27816 * C27768) *
              C28010 * C77 -
          (((C1524 * C1468 + C1345 * C1663 + C1523 * C674 + C1344 * C796 +
             C1522 * C191 + C1343 * C352) *
                C28009 +
            (C1524 * C1350 + C1345 * C1527 + C1523 * C580 + C1344 * C716 +
             C1522 * C91 + C1343 * C236) *
                C188) *
               C27816 * C27768 +
           ((C1673 + C1672 + C1671) * C28009 + (C1544 + C1545 + C1546) * C188) *
               C27816 * C1341) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C87 +
           (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
              C73 +
          (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C74 +
          (C430 * C87 + C431 * C77 - C432 * C88 - C433 * C78) * C75 +
          (C432 * C87 + C433 * C77 - (C404 * C93 + C27816 * C409) * C88 -
           (C404 * C103 + C27816 * C414) * C78) *
              C76) *
         C27805 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C87 +
            (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
               C1341 +
           (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C27768) *
              C1343 +
          (((C404 * C582 + C27816 * C836) * C87 +
            (C404 * C586 + C27816 * C840) * C77 - C1738 * C88 - C1739 * C78) *
               C1341 +
           (C1738 * C87 + C1739 * C77 - (C404 * C580 + C27816 * C834) * C88 -
            (C404 * C584 + C27816 * C838) * C78) *
               C27768) *
              C1344 +
          (((C404 * C1348 + C27816 * C1723) * C87 +
            (C404 * C1353 + C27816 * C1726) * C77 - C1740 * C88 - C1741 * C78) *
               C1341 +
           (C1740 * C87 + C1741 * C77 - (C404 * C1350 + C27816 * C1725) * C88 -
            (C404 * C1356 + C27816 * C1728) * C78) *
               C27768) *
              C1345) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C143 +
            (C404 * C144 + C27816 * C467) * C28010) *
               C73 +
           (C473 + C485) * C74 + (C476 + C486) * C75 + (C479 + C487) * C76) *
              C27805 * C77 -
          (((C404 * C148 + C27816 * C471) * C28010 +
            (C404 * C93 + C27816 * C409) * C143) *
               C76 +
           (C487 + C479) * C75 + (C486 + C476) * C74 + (C485 + C473) * C73) *
              C27805 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C143 +
             (C404 * C144 + C27816 * C467) * C28010) *
                C1341 +
            (C473 + C485) * C27768) *
               C1343 +
           (((C404 * C582 + C27816 * C836) * C143 +
             (C404 * C634 + C27816 * C875) * C28010) *
                C1341 +
            (C1795 + C1803) * C27768) *
               C1344 +
           (((C404 * C1348 + C27816 * C1723) * C143 +
             (C404 * C1410 + C27816 * C1791) * C28010) *
                C1341 +
            (C1798 + C1804) * C27768) *
               C1345) *
              C77 -
          ((((C404 * C1412 + C27816 * C1793) * C28010 +
             (C404 * C1350 + C27816 * C1725) * C143) *
                C27768 +
            (C1804 + C1798) * C1341) *
               C1345 +
           (((C404 * C632 + C27816 * C877) * C28010 +
             (C404 * C580 + C27816 * C834) * C143) *
                C27768 +
            (C1803 + C1795) * C1341) *
               C1344 +
           ((C486 + C476) * C27768 + (C485 + C473) * C1341) * C1343) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C188 +
            (C404 * C189 + C27816 * C521) * C28009) *
               C73 +
           (C527 + C539) * C74 + (C530 + C540) * C75 + (C533 + C541) * C76) *
              C27805 * C28010 * C77 -
          (((C404 * C193 + C27816 * C525) * C28009 +
            (C404 * C93 + C27816 * C409) * C188) *
               C76 +
           (C541 + C533) * C75 + (C540 + C530) * C74 + (C539 + C527) * C73) *
              C27805 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C1341 +
            (C527 + C539) * C27768) *
               C1343 +
           (((C404 * C582 + C27816 * C836) * C188 +
             (C404 * C676 + C27816 * C916) * C28009) *
                C1341 +
            (C1858 + C1866) * C27768) *
               C1344 +
           (((C404 * C1348 + C27816 * C1723) * C188 +
             (C404 * C1466 + C27816 * C1854) * C28009) *
                C1341 +
            (C1861 + C1867) * C27768) *
               C1345) *
              C28010 * C77 -
          ((((C404 * C1468 + C27816 * C1856) * C28009 +
             (C404 * C1350 + C27816 * C1725) * C188) *
                C27768 +
            (C1867 + C1861) * C1341) *
               C1345 +
           (((C404 * C674 + C27816 * C914) * C28009 +
             (C404 * C580 + C27816 * C834) * C188) *
                C27768 +
            (C1866 + C1858) * C1341) *
               C1344 +
           ((C540 + C530) * C27768 + (C539 + C527) * C1341) * C1343) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C578 +
           (C83 * C98 + C73 * C104 + C84 * C99 + C74 * C105 + C85 * C100 +
            C75 * C106 + C86 * C101 + C76 * C107) *
               C28008) *
              C27805 * C27816 * C28009 * C576 -
          ((C86 * C583 + C76 * C591 + C85 * C584 + C75 * C592 + C84 * C585 +
            C74 * C593 + C83 * C586 + C73 * C594) *
               C28008 +
           (C86 * C579 + C76 * C587 + C85 * C580 + C75 * C588 + C84 * C581 +
            C74 * C589 + C83 * C582 + C73 * C590) *
               C578) *
              C27805 * C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                C28008) *
               C1343 +
           ((C1942 + C1943) * C578 + (C1944 + C1945) * C28008) * C1344 +
           ((C1946 + C1947) * C578 + (C1948 + C1949) * C28008) * C1345) *
              C27816 * C28009 * C576 -
          (((C1347 * C1919 + C27768 * C1923 + C1346 * C1920 + C1341 * C1924) *
                C28008 +
            (C1347 * C1917 + C27768 * C1921 + C1346 * C1918 + C1341 * C1922) *
                C578) *
               C1345 +
           ((C1949 + C1948) * C28008 + (C1947 + C1946) * C578) * C1344 +
           ((C1945 + C1944) * C28008 + (C1943 + C1942) * C578) * C1343) *
              C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
           C75 * C96 + C86 * C92 + C76 * C97) *
              C629 +
          (C83 * C144 + C73 * C149 + C84 * C145 + C74 * C150 + C85 * C146 +
           C75 * C151 + C86 * C147 + C76 * C152) *
              C576 -
          (C86 * C579 + C76 * C587 + C85 * C580 + C75 * C588 + C84 * C581 +
           C74 * C589 + C83 * C582 + C73 * C590) *
              C630 -
          (C86 * C631 + C76 * C635 + C85 * C632 + C75 * C636 + C84 * C633 +
           C74 * C637 + C83 * C634 + C73 * C638) *
              C577) *
         C27805 * C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C629 +
           (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) * C576 -
           (C1943 + C1942) * C630 - (C2012 + C2013) * C577) *
              C1343 +
          ((C1942 + C1943) * C629 + (C2013 + C2012) * C576 -
           (C1947 + C1946) * C630 - (C2014 + C2015) * C577) *
              C1344 +
          ((C1946 + C1947) * C629 + (C2015 + C2014) * C576 -
           (C1347 * C1917 + C27768 * C1921 + C1346 * C1918 + C1341 * C1922) *
               C630 -
           (C1347 * C1999 + C27768 * C2001 + C1346 * C2000 + C1341 * C2002) *
               C577) *
              C1345) *
         C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C188 +
           (C83 * C189 + C73 * C194 + C84 * C190 + C74 * C195 + C85 * C191 +
            C75 * C196 + C86 * C192 + C76 * C197) *
               C28009) *
              C27805 * C27816 * C576 -
          ((C86 * C673 + C76 * C677 + C85 * C674 + C75 * C678 + C84 * C675 +
            C74 * C679 + C83 * C676 + C73 * C680) *
               C28009 +
           (C86 * C579 + C76 * C587 + C85 * C580 + C75 * C588 + C84 * C581 +
            C74 * C589 + C83 * C582 + C73 * C590) *
               C188) *
              C27805 * C27816 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C188 +
            (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) *
                C28009) *
               C1343 +
           ((C1942 + C1943) * C188 + (C2078 + C2079) * C28009) * C1344 +
           ((C1946 + C1947) * C188 + (C2080 + C2081) * C28009) * C1345) *
              C27816 * C576 -
          (((C1347 * C2065 + C27768 * C2067 + C1346 * C2066 + C1341 * C2068) *
                C28009 +
            (C1347 * C1917 + C27768 * C1921 + C1346 * C1918 + C1341 * C1922) *
                C188) *
               C1345 +
           ((C2081 + C2080) * C28009 + (C1947 + C1946) * C188) * C1344 +
           ((C2079 + C2078) * C28009 + (C1943 + C1942) * C188) * C1343) *
              C27816 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C578 +
            (C233 * C98 + C27805 * C239) * C28008) *
               C27816 * C73 +
           (C257 * C578 + C258 * C28008) * C27816 * C74 +
           (C259 * C578 + C260 * C28008) * C27816 * C75 +
           (C261 * C578 + C262 * C28008) * C27816 * C76) *
              C28009 * C576 -
          (((C233 * C583 + C27805 * C719) * C28008 +
            (C233 * C579 + C27805 * C715) * C578) *
               C27816 * C76 +
           ((C233 * C584 + C27805 * C720) * C28008 +
            (C233 * C580 + C27805 * C716) * C578) *
               C27816 * C75 +
           ((C233 * C585 + C27805 * C721) * C28008 +
            (C233 * C581 + C27805 * C717) * C578) *
               C27816 * C74 +
           ((C233 * C586 + C27805 * C722) * C28008 +
            (C233 * C582 + C27805 * C718) * C578) *
               C27816 * C73) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C578 + (C1549 + C1548 + C1547) * C28008) *
               C27816 * C27768) *
              C28009 * C576 -
          (((C1524 * C1919 + C1345 * C2133 + C1523 * C1354 + C1344 * C1529 +
             C1522 * C585 + C1343 * C721) *
                C28008 +
            (C1524 * C1917 + C1345 * C2131 + C1523 * C1349 + C1344 * C1526 +
             C1522 * C581 + C1343 * C717) *
                C578) *
               C27816 * C27768 +
           ((C1524 * C1920 + C1345 * C2134 + C1523 * C1353 + C1344 * C1528 +
             C1522 * C586 + C1343 * C722) *
                C28008 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C578) *
               C27816 * C1341) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C629 +
           (C233 * C144 + C27805 * C296) * C576 -
           (C233 * C582 + C27805 * C718) * C630 -
           (C233 * C634 + C27805 * C757) * C577) *
              C27816 * C73 +
          (C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
           (C233 * C633 + C27805 * C758) * C577) *
              C27816 * C74 +
          (C259 * C629 + C312 * C576 - (C233 * C580 + C27805 * C716) * C630 -
           (C233 * C632 + C27805 * C759) * C577) *
              C27816 * C75 +
          (C261 * C629 + C313 * C576 - (C233 * C579 + C27805 * C715) * C630 -
           (C233 * C631 + C27805 * C760) * C577) *
              C27816 * C76) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C629 +
           (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
            C1524 * C1410 + C1345 * C1599) *
               C576 -
           (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
            C1522 * C582 + C1343 * C718) *
               C630 -
           (C1524 * C2000 + C1345 * C2185 + C1523 * C1410 + C1344 * C1599 +
            C1522 * C634 + C1343 * C757) *
               C577) *
              C27816 * C1341 +
          ((C1546 + C1545 + C1544) * C629 + (C1609 + C1610 + C1611) * C576 -
           (C1524 * C1917 + C1345 * C2131 + C1523 * C1349 + C1344 * C1526 +
            C1522 * C581 + C1343 * C717) *
               C630 -
           (C1524 * C1999 + C1345 * C2186 + C1523 * C1411 + C1344 * C1600 +
            C1522 * C633 + C1343 * C758) *
               C577) *
              C27816 * C27768) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C188 +
            (C233 * C189 + C27805 * C350) * C28009) *
               C27816 * C73 +
           (C356 + C368) * C27816 * C74 + (C359 + C369) * C27816 * C75 +
           (C362 + C370) * C27816 * C76) *
              C576 -
          (((C233 * C673 + C27805 * C795) * C28009 +
            (C233 * C579 + C27805 * C715) * C188) *
               C27816 * C76 +
           ((C233 * C674 + C27805 * C796) * C28009 +
            (C233 * C580 + C27805 * C716) * C188) *
               C27816 * C75 +
           ((C233 * C675 + C27805 * C797) * C28009 +
            (C233 * C581 + C27805 * C717) * C188) *
               C27816 * C74 +
           ((C233 * C676 + C27805 * C798) * C28009 +
            (C233 * C582 + C27805 * C718) * C188) *
               C27816 * C73) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C188 + (C1671 + C1672 + C1673) * C28009) *
               C27816 * C27768) *
              C576 -
          (((C1524 * C2065 + C1345 * C2237 + C1523 * C1467 + C1344 * C1662 +
             C1522 * C675 + C1343 * C797) *
                C28009 +
            (C1524 * C1917 + C1345 * C2131 + C1523 * C1349 + C1344 * C1526 +
             C1522 * C581 + C1343 * C717) *
                C188) *
               C27816 * C27768 +
           ((C1524 * C2066 + C1345 * C2238 + C1523 * C1466 + C1344 * C1661 +
             C1522 * C676 + C1343 * C798) *
                C28009 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C188) *
               C27816 * C1341) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C578 +
            (C404 * C98 + C27816 * C410) * C28008) *
               C73 +
           (C428 * C578 + C429 * C28008) * C74 +
           (C430 * C578 + C431 * C28008) * C75 +
           (C432 * C578 + C433 * C28008) * C76) *
              C27805 * C28009 * C576 -
          (((C404 * C583 + C27816 * C837) * C28008 +
            (C404 * C579 + C27816 * C833) * C578) *
               C76 +
           ((C404 * C584 + C27816 * C838) * C28008 +
            (C404 * C580 + C27816 * C834) * C578) *
               C75 +
           ((C404 * C585 + C27816 * C839) * C28008 +
            (C404 * C581 + C27816 * C835) * C578) *
               C74 +
           ((C404 * C586 + C27816 * C840) * C28008 +
            (C404 * C582 + C27816 * C836) * C578) *
               C73) *
              C27805 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C1341 +
            (C428 * C578 + C429 * C28008) * C27768) *
               C1343 +
           ((C2310 + C2311) * C1341 + (C2298 + C2299) * C27768) * C1344 +
           ((C2312 + C2313) * C1341 + (C2304 + C2305) * C27768) * C1345) *
              C28009 * C576 -
          ((((C404 * C1919 + C27816 * C2291) * C28008 +
             (C404 * C1917 + C27816 * C2289) * C578) *
                C27768 +
            ((C404 * C1920 + C27816 * C2292) * C28008 +
             (C404 * C1918 + C27816 * C2290) * C578) *
                C1341) *
               C1345 +
           ((C2305 + C2304) * C27768 + (C2313 + C2312) * C1341) * C1344 +
           ((C2299 + C2298) * C27768 + (C2311 + C2310) * C1341) * C1343) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C629 +
           (C404 * C144 + C27816 * C467) * C576 -
           (C404 * C582 + C27816 * C836) * C630 -
           (C404 * C634 + C27816 * C875) * C577) *
              C73 +
          (C428 * C629 + C482 * C576 - (C404 * C581 + C27816 * C835) * C630 -
           (C404 * C633 + C27816 * C876) * C577) *
              C74 +
          (C430 * C629 + C483 * C576 - (C404 * C580 + C27816 * C834) * C630 -
           (C404 * C632 + C27816 * C877) * C577) *
              C75 +
          (C432 * C629 + C484 * C576 - (C404 * C579 + C27816 * C833) * C630 -
           (C404 * C631 + C27816 * C878) * C577) *
              C76) *
         C27805 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C629 +
            (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 -
            C2370 * C577) *
               C1341 +
           (C428 * C629 + C482 * C576 - C1738 * C630 - C1801 * C577) * C27768) *
              C1343 +
          ((C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) * C1341 +
           (C1738 * C629 + C1801 * C576 - C1740 * C630 - C1802 * C577) *
               C27768) *
              C1344 +
          ((C2308 * C629 + C2371 * C576 -
            (C404 * C1918 + C27816 * C2290) * C630 -
            (C404 * C2000 + C27816 * C2363) * C577) *
               C1341 +
           (C1740 * C629 + C1802 * C576 -
            (C404 * C1917 + C27816 * C2289) * C630 -
            (C404 * C1999 + C27816 * C2364) * C577) *
               C27768) *
              C1345) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C188 +
            (C404 * C189 + C27816 * C521) * C28009) *
               C73 +
           (C527 + C539) * C74 + (C530 + C540) * C75 + (C533 + C541) * C76) *
              C27805 * C576 -
          (((C404 * C673 + C27816 * C913) * C28009 +
            (C404 * C579 + C27816 * C833) * C188) *
               C76 +
           ((C404 * C674 + C27816 * C914) * C28009 +
            (C404 * C580 + C27816 * C834) * C188) *
               C75 +
           ((C404 * C675 + C27816 * C915) * C28009 +
            (C404 * C581 + C27816 * C835) * C188) *
               C74 +
           ((C404 * C676 + C27816 * C916) * C28009 +
            (C404 * C582 + C27816 * C836) * C188) *
               C73) *
              C27805 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C1341 +
            (C527 + C539) * C27768) *
               C1343 +
           ((C2424 + C2432) * C1341 + (C1858 + C1866) * C27768) * C1344 +
           ((C2427 + C2433) * C1341 + (C1861 + C1867) * C27768) * C1345) *
              C576 -
          ((((C404 * C2065 + C27816 * C2421) * C28009 +
             (C404 * C1917 + C27816 * C2289) * C188) *
                C27768 +
            ((C404 * C2066 + C27816 * C2422) * C28009 +
             (C404 * C1918 + C27816 * C2290) * C188) *
                C1341) *
               C1345 +
           ((C1867 + C1861) * C27768 + (C2433 + C2427) * C1341) * C1344 +
           ((C1866 + C1858) * C27768 + (C2432 + C2424) * C1341) * C1343) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C578 +
           (C83 * C98 + C73 * C104 + C84 * C99 + C74 * C105 + C85 * C100 +
            C75 * C106 + C86 * C101 + C76 * C107) *
               C28008) *
              C27805 * C27816 * C951 -
          ((C86 * C957 + C76 * C965 + C85 * C958 + C75 * C966 + C84 * C959 +
            C74 * C967 + C83 * C960 + C73 * C968) *
               C28008 +
           (C86 * C953 + C76 * C961 + C85 * C954 + C75 * C962 + C84 * C955 +
            C74 * C963 + C83 * C956 + C73 * C964) *
               C578) *
              C27805 * C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C578 +
            (C1346 * C98 + C1341 * C104 + C1347 * C99 + C27768 * C105) *
                C28008) *
               C1343 +
           ((C1942 + C1943) * C578 + (C1944 + C1945) * C28008) * C1344 +
           ((C1946 + C1947) * C578 + (C1948 + C1949) * C28008) * C1345) *
              C27816 * C951 -
          (((C1347 * C2487 + C27768 * C2495 + C1346 * C2488 + C1341 * C2496) *
                C28008 +
            (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                C578) *
               C1345 +
           ((C1347 * C2491 + C27768 * C2497 + C1346 * C2492 + C1341 * C2498) *
                C28008 +
            (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
                C578) *
               C1344 +
           ((C1347 * C959 + C27768 * C967 + C1346 * C960 + C1341 * C968) *
                C28008 +
            (C1347 * C955 + C27768 * C963 + C1346 * C956 + C1341 * C964) *
                C578) *
               C1343) *
              C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
            C75 * C96 + C86 * C92 + C76 * C97) *
               C143 +
           (C83 * C144 + C73 * C149 + C84 * C145 + C74 * C150 + C85 * C146 +
            C75 * C151 + C86 * C147 + C76 * C152) *
               C28010) *
              C27805 * C27816 * C28008 * C951 -
          ((C86 * C1003 + C76 * C1007 + C85 * C1004 + C75 * C1008 +
            C84 * C1005 + C74 * C1009 + C83 * C1006 + C73 * C1010) *
               C28010 +
           (C86 * C953 + C76 * C961 + C85 * C954 + C75 * C962 + C84 * C955 +
            C74 * C963 + C83 * C956 + C73 * C964) *
               C143) *
              C27805 * C27816 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C143 +
            (C1346 * C144 + C1341 * C149 + C1347 * C145 + C27768 * C150) *
                C28010) *
               C1343 +
           ((C1942 + C1943) * C143 + (C2013 + C2012) * C28010) * C1344 +
           ((C1946 + C1947) * C143 + (C2015 + C2014) * C28010) * C1345) *
              C27816 * C28008 * C951 -
          (((C1347 * C2549 + C27768 * C2553 + C1346 * C2550 + C1341 * C2554) *
                C28010 +
            (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
                C143) *
               C1345 +
           ((C1347 * C2551 + C27768 * C2555 + C1346 * C2552 + C1341 * C2556) *
                C28010 +
            (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
                C143) *
               C1344 +
           ((C1347 * C1005 + C27768 * C1009 + C1346 * C1006 + C1341 * C1010) *
                C28010 +
            (C1347 * C955 + C27768 * C963 + C1346 * C956 + C1341 * C964) *
                C143) *
               C1343) *
              C27816 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C83 * C89 + C73 * C94 + C84 * C90 + C74 * C95 + C85 * C91 +
           C75 * C96 + C86 * C92 + C76 * C97) *
              C1045 +
          (C83 * C189 + C73 * C194 + C84 * C190 + C74 * C195 + C85 * C191 +
           C75 * C196 + C86 * C192 + C76 * C197) *
              C951 -
          (C86 * C953 + C76 * C961 + C85 * C954 + C75 * C962 + C84 * C955 +
           C74 * C963 + C83 * C956 + C73 * C964) *
              C1046 -
          (C86 * C1047 + C76 * C1051 + C85 * C1048 + C75 * C1052 + C84 * C1049 +
           C74 * C1053 + C83 * C1050 + C73 * C1054) *
              C952) *
         C27805 * C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C89 + C1341 * C94 + C1347 * C90 + C27768 * C95) * C1045 +
           (C1346 * C189 + C1341 * C194 + C1347 * C190 + C27768 * C195) * C951 -
           (C1347 * C955 + C27768 * C963 + C1346 * C956 + C1341 * C964) *
               C1046 -
           (C1347 * C1049 + C27768 * C1053 + C1346 * C1050 + C1341 * C1054) *
               C952) *
              C1343 +
          ((C1942 + C1943) * C1045 + (C2078 + C2079) * C951 -
           (C1347 * C2485 + C27768 * C2493 + C1346 * C2486 + C1341 * C2494) *
               C1046 -
           (C1347 * C2607 + C27768 * C2611 + C1346 * C2608 + C1341 * C2612) *
               C952) *
              C1344 +
          ((C1946 + C1947) * C1045 + (C2080 + C2081) * C951 -
           (C1347 * C2483 + C27768 * C2489 + C1346 * C2484 + C1341 * C2490) *
               C1046 -
           (C1347 * C2609 + C27768 * C2613 + C1346 * C2610 + C1341 * C2614) *
               C952) *
              C1345) *
         C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C578 +
            (C233 * C98 + C27805 * C239) * C28008) *
               C27816 * C73 +
           (C257 * C578 + C258 * C28008) * C27816 * C74 +
           (C259 * C578 + C260 * C28008) * C27816 * C75 +
           (C261 * C578 + C262 * C28008) * C27816 * C76) *
              C951 -
          (((C233 * C957 + C27805 * C1093) * C28008 +
            (C233 * C953 + C27805 * C1089) * C578) *
               C27816 * C76 +
           ((C233 * C958 + C27805 * C1094) * C28008 +
            (C233 * C954 + C27805 * C1090) * C578) *
               C27816 * C75 +
           ((C233 * C959 + C27805 * C1095) * C28008 +
            (C233 * C955 + C27805 * C1091) * C578) *
               C27816 * C74 +
           ((C233 * C960 + C27805 * C1096) * C28008 +
            (C233 * C956 + C27805 * C1092) * C578) *
               C27816 * C73) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C578 + (C1549 + C1548 + C1547) * C28008) *
               C27816 * C27768) *
              C951 -
          (((C1524 * C2487 + C1345 * C2669 + C1523 * C2491 + C1344 * C2670 +
             C1522 * C959 + C1343 * C1095) *
                C28008 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C578) *
               C27816 * C27768 +
           ((C1524 * C2488 + C1345 * C2671 + C1523 * C2492 + C1344 * C2672 +
             C1522 * C960 + C1343 * C1096) *
                C28008 +
            (C1524 * C2484 + C1345 * C2667 + C1523 * C2486 + C1344 * C2668 +
             C1522 * C956 + C1343 * C1092) *
                C578) *
               C27816 * C1341) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C143 +
            (C233 * C144 + C27805 * C296) * C28010) *
               C27816 * C73 +
           (C302 + C314) * C27816 * C74 + (C305 + C315) * C27816 * C75 +
           (C308 + C316) * C27816 * C76) *
              C28008 * C951 -
          (((C233 * C1003 + C27805 * C1131) * C28010 +
            (C233 * C953 + C27805 * C1089) * C143) *
               C27816 * C76 +
           ((C233 * C1004 + C27805 * C1132) * C28010 +
            (C233 * C954 + C27805 * C1090) * C143) *
               C27816 * C75 +
           ((C233 * C1005 + C27805 * C1133) * C28010 +
            (C233 * C955 + C27805 * C1091) * C143) *
               C27816 * C74 +
           ((C233 * C1006 + C27805 * C1134) * C28010 +
            (C233 * C956 + C27805 * C1092) * C143) *
               C27816 * C73) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C27816 * C1341 +
           ((C1546 + C1545 + C1544) * C143 + (C1609 + C1610 + C1611) * C28010) *
               C27816 * C27768) *
              C28008 * C951 -
          (((C1524 * C2549 + C1345 * C2723 + C1523 * C2551 + C1344 * C2724 +
             C1522 * C1005 + C1343 * C1133) *
                C28010 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C143) *
               C27816 * C27768 +
           ((C1524 * C2550 + C1345 * C2725 + C1523 * C2552 + C1344 * C2726 +
             C1522 * C1006 + C1343 * C1134) *
                C28010 +
            (C1524 * C2484 + C1345 * C2667 + C1523 * C2486 + C1344 * C2668 +
             C1522 * C956 + C1343 * C1092) *
                C143) *
               C27816 * C1341) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C1045 +
           (C233 * C189 + C27805 * C350) * C951 -
           (C233 * C956 + C27805 * C1092) * C1046 -
           (C233 * C1050 + C27805 * C1169) * C952) *
              C27816 * C73 +
          (C257 * C1045 + C365 * C951 - (C233 * C955 + C27805 * C1091) * C1046 -
           (C233 * C1049 + C27805 * C1170) * C952) *
              C27816 * C74 +
          (C259 * C1045 + C366 * C951 - (C233 * C954 + C27805 * C1090) * C1046 -
           (C233 * C1048 + C27805 * C1171) * C952) *
              C27816 * C75 +
          (C261 * C1045 + C367 * C951 - (C233 * C953 + C27805 * C1089) * C1046 -
           (C233 * C1047 + C27805 * C1172) * C952) *
              C27816 * C76) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C1045 +
           (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
            C1524 * C1466 + C1345 * C1661) *
               C951 -
           (C1524 * C2484 + C1345 * C2667 + C1523 * C2486 + C1344 * C2668 +
            C1522 * C956 + C1343 * C1092) *
               C1046 -
           (C1524 * C2610 + C1345 * C2777 + C1523 * C2608 + C1344 * C2778 +
            C1522 * C1050 + C1343 * C1169) *
               C952) *
              C27816 * C1341 +
          ((C1546 + C1545 + C1544) * C1045 + (C1671 + C1672 + C1673) * C951 -
           (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
            C1522 * C955 + C1343 * C1091) *
               C1046 -
           (C1524 * C2609 + C1345 * C2779 + C1523 * C2607 + C1344 * C2780 +
            C1522 * C1049 + C1343 * C1170) *
               C952) *
              C27816 * C27768) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C578 +
            (C404 * C98 + C27816 * C410) * C28008) *
               C73 +
           (C428 * C578 + C429 * C28008) * C74 +
           (C430 * C578 + C431 * C28008) * C75 +
           (C432 * C578 + C433 * C28008) * C76) *
              C27805 * C951 -
          (((C404 * C957 + C27816 * C1211) * C28008 +
            (C404 * C953 + C27816 * C1207) * C578) *
               C76 +
           ((C404 * C958 + C27816 * C1212) * C28008 +
            (C404 * C954 + C27816 * C1208) * C578) *
               C75 +
           ((C404 * C959 + C27816 * C1213) * C28008 +
            (C404 * C955 + C27816 * C1209) * C578) *
               C74 +
           ((C404 * C960 + C27816 * C1214) * C28008 +
            (C404 * C956 + C27816 * C1210) * C578) *
               C73) *
              C27805 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C1341 +
            (C428 * C578 + C429 * C28008) * C27768) *
               C1343 +
           ((C2310 + C2311) * C1341 + (C2298 + C2299) * C27768) * C1344 +
           ((C2312 + C2313) * C1341 + (C2304 + C2305) * C27768) * C1345) *
              C951 -
          ((((C404 * C2487 + C27816 * C2835) * C28008 +
             (C404 * C2483 + C27816 * C2831) * C578) *
                C27768 +
            ((C404 * C2488 + C27816 * C2836) * C28008 +
             (C404 * C2484 + C27816 * C2832) * C578) *
                C1341) *
               C1345 +
           (((C404 * C2491 + C27816 * C2837) * C28008 +
             (C404 * C2485 + C27816 * C2833) * C578) *
                C27768 +
            ((C404 * C2492 + C27816 * C2838) * C28008 +
             (C404 * C2486 + C27816 * C2834) * C578) *
                C1341) *
               C1344 +
           (((C404 * C959 + C27816 * C1213) * C28008 +
             (C404 * C955 + C27816 * C1209) * C578) *
                C27768 +
            ((C404 * C960 + C27816 * C1214) * C28008 +
             (C404 * C956 + C27816 * C1210) * C578) *
                C1341) *
               C1343) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C143 +
            (C404 * C144 + C27816 * C467) * C28010) *
               C73 +
           (C473 + C485) * C74 + (C476 + C486) * C75 + (C479 + C487) * C76) *
              C27805 * C28008 * C951 -
          (((C404 * C1003 + C27816 * C1249) * C28010 +
            (C404 * C953 + C27816 * C1207) * C143) *
               C76 +
           ((C404 * C1004 + C27816 * C1250) * C28010 +
            (C404 * C954 + C27816 * C1208) * C143) *
               C75 +
           ((C404 * C1005 + C27816 * C1251) * C28010 +
            (C404 * C955 + C27816 * C1209) * C143) *
               C74 +
           ((C404 * C1006 + C27816 * C1252) * C28010 +
            (C404 * C956 + C27816 * C1210) * C143) *
               C73) *
              C27805 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C143 +
             (C404 * C144 + C27816 * C467) * C28010) *
                C1341 +
            (C473 + C485) * C27768) *
               C1343 +
           ((C2306 * C143 + C2370 * C28010) * C1341 +
            (C1795 + C1803) * C27768) *
               C1344 +
           ((C2308 * C143 + C2371 * C28010) * C1341 +
            (C1798 + C1804) * C27768) *
               C1345) *
              C28008 * C951 -
          ((((C404 * C2549 + C27816 * C2889) * C28010 +
             (C404 * C2483 + C27816 * C2831) * C143) *
                C27768 +
            ((C404 * C2550 + C27816 * C2890) * C28010 +
             (C404 * C2484 + C27816 * C2832) * C143) *
                C1341) *
               C1345 +
           (((C404 * C2551 + C27816 * C2891) * C28010 +
             (C404 * C2485 + C27816 * C2833) * C143) *
                C27768 +
            ((C404 * C2552 + C27816 * C2892) * C28010 +
             (C404 * C2486 + C27816 * C2834) * C143) *
                C1341) *
               C1344 +
           (((C404 * C1005 + C27816 * C1251) * C28010 +
             (C404 * C955 + C27816 * C1209) * C143) *
                C27768 +
            ((C404 * C1006 + C27816 * C1252) * C28010 +
             (C404 * C956 + C27816 * C1210) * C143) *
                C1341) *
               C1343) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C1045 +
           (C404 * C189 + C27816 * C521) * C951 -
           (C404 * C956 + C27816 * C1210) * C1046 -
           (C404 * C1050 + C27816 * C1287) * C952) *
              C73 +
          (C428 * C1045 + C536 * C951 - (C404 * C955 + C27816 * C1209) * C1046 -
           (C404 * C1049 + C27816 * C1288) * C952) *
              C74 +
          (C430 * C1045 + C537 * C951 - (C404 * C954 + C27816 * C1208) * C1046 -
           (C404 * C1048 + C27816 * C1289) * C952) *
              C75 +
          (C432 * C1045 + C538 * C951 - (C404 * C953 + C27816 * C1207) * C1046 -
           (C404 * C1047 + C27816 * C1290) * C952) *
              C76) *
         C27805 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C1045 +
            (C404 * C189 + C27816 * C521) * C951 -
            (C404 * C956 + C27816 * C1210) * C1046 -
            (C404 * C1050 + C27816 * C1287) * C952) *
               C1341 +
           (C428 * C1045 + C536 * C951 -
            (C404 * C955 + C27816 * C1209) * C1046 -
            (C404 * C1049 + C27816 * C1288) * C952) *
               C27768) *
              C1343 +
          ((C2306 * C1045 + C2430 * C951 -
            (C404 * C2486 + C27816 * C2834) * C1046 -
            (C404 * C2608 + C27816 * C2943) * C952) *
               C1341 +
           (C1738 * C1045 + C1864 * C951 -
            (C404 * C2485 + C27816 * C2833) * C1046 -
            (C404 * C2607 + C27816 * C2944) * C952) *
               C27768) *
              C1344 +
          ((C2308 * C1045 + C2431 * C951 -
            (C404 * C2484 + C27816 * C2832) * C1046 -
            (C404 * C2610 + C27816 * C2945) * C952) *
               C1341 +
           (C1740 * C1045 + C1865 * C951 -
            (C404 * C2483 + C27816 * C2831) * C1046 -
            (C404 * C2609 + C27816 * C2946) * C952) *
               C27768) *
              C1345) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C87 +
           (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) * C77 -
           (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) * C88 -
           (C26640 * C100 + C27768 * C106 + C26647 * C99 + C27960 * C105) *
               C78) *
              C28001 +
          ((C26647 * C582 + C27960 * C590 + C26640 * C581 + C27768 * C589) *
               C87 +
           (C26647 * C586 + C27960 * C594 + C26640 * C585 + C27768 * C593) *
               C77 -
           (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
               C88 -
           (C26640 * C584 + C27768 * C592 + C26647 * C585 + C27960 * C593) *
               C78) *
              C28002 +
          ((C26647 * C1348 + C27960 * C1351 + C26640 * C1349 + C27768 * C1352) *
               C87 +
           (C26647 * C1353 + C27960 * C1357 + C26640 * C1354 + C27768 * C1358) *
               C77 -
           (C26640 * C1350 + C27768 * C1355 + C26647 * C1349 + C27960 * C1352) *
               C88 -
           (C26640 * C1356 + C27768 * C1359 + C26647 * C1354 + C27960 * C1358) *
               C78) *
              C13459) *
         C27816 * C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C143 +
            (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                C28010) *
               C28001 +
           ((C26647 * C582 + C27960 * C590 + C26640 * C581 + C27768 * C589) *
                C143 +
            (C26647 * C634 + C27960 * C638 + C26640 * C633 + C27768 * C637) *
                C28010) *
               C28002 +
           ((C26647 * C1348 + C27960 * C1351 + C26640 * C1349 +
             C27768 * C1352) *
                C143 +
            (C26647 * C1410 + C27960 * C1413 + C26640 * C1411 +
             C27768 * C1414) *
                C28010) *
               C13459) *
              C27816 * C77 -
          (((C26640 * C1412 + C27768 * C1415 + C26647 * C1411 +
             C27960 * C1414) *
                C28010 +
            (C26640 * C1350 + C27768 * C1355 + C26647 * C1349 +
             C27960 * C1352) *
                C143) *
               C13459 +
           ((C26640 * C632 + C27768 * C636 + C26647 * C633 + C27960 * C637) *
                C28010 +
            (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                C143) *
               C28002 +
           ((C26640 * C146 + C27768 * C151 + C26647 * C145 + C27960 * C150) *
                C28010 +
            (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                C143) *
               C28001) *
              C27816 * C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C188 +
            (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                C28009) *
               C28001 +
           ((C26647 * C582 + C27960 * C590 + C26640 * C581 + C27768 * C589) *
                C188 +
            (C26647 * C676 + C27960 * C680 + C26640 * C675 + C27768 * C679) *
                C28009) *
               C28002 +
           ((C26647 * C1348 + C27960 * C1351 + C26640 * C1349 +
             C27768 * C1352) *
                C188 +
            (C26647 * C1466 + C27960 * C1469 + C26640 * C1467 +
             C27768 * C1470) *
                C28009) *
               C13459) *
              C27816 * C28010 * C77 -
          (((C26640 * C1468 + C27768 * C1471 + C26647 * C1467 +
             C27960 * C1470) *
                C28009 +
            (C26640 * C1350 + C27768 * C1355 + C26647 * C1349 +
             C27960 * C1352) *
                C188) *
               C13459 +
           ((C26640 * C674 + C27768 * C678 + C26647 * C675 + C27960 * C679) *
                C28009 +
            (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                C188) *
               C28002 +
           ((C26640 * C191 + C27768 * C196 + C26647 * C190 + C27960 * C195) *
                C28009 +
            (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                C188) *
               C28001) *
              C27816 * C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13612 * C89 + C28001 * C234 + C13613 * C582 + C28002 * C718 +
            C13614 * C1348 + C13459 * C1525) *
               C87 +
           (C13612 * C98 + C28001 * C239 + C13613 * C586 + C28002 * C722 +
            C13614 * C1353 + C13459 * C1528) *
               C77 -
           (C13628 + C13629 + C13630) * C88 -
           (C13631 + C13632 + C13633) * C78) *
              C27816 * C27960 +
          ((C13630 + C13629 + C13628) * C87 + (C13633 + C13632 + C13631) * C77 -
           (C13614 * C1350 + C13459 * C1527 + C13613 * C580 + C28002 * C716 +
            C13612 * C91 + C28001 * C236) *
               C88 -
           (C13614 * C1356 + C13459 * C1530 + C13613 * C584 + C28002 * C720 +
            C13612 * C100 + C28001 * C241) *
               C78) *
              C27816 * C27768) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C143 +
                      (C13612 * C144 + C28001 * C296 + C13613 * C634 +
                       C28002 * C757 + C13614 * C1410 + C13459 * C1599) *
                          C28010) *
                         C27816 * C27960 +
                     ((C13630 + C13629 + C13628) * C143 +
                      (C13690 + C13691 + C13692) * C28010) *
                         C27816 * C27768) *
                        C77 -
                    (((C13614 * C1412 + C13459 * C1601 + C13613 * C632 +
                       C28002 * C759 + C13612 * C146 + C28001 * C298) *
                          C28010 +
                      (C13614 * C1350 + C13459 * C1527 + C13613 * C580 +
                       C28002 * C716 + C13612 * C91 + C28001 * C236) *
                          C143) *
                         C27816 * C27768 +
                     ((C13692 + C13691 + C13690) * C28010 +
                      (C13628 + C13629 + C13630) * C143) *
                         C27816 * C27960) *
                        C78) *
                   C28009) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C188 +
                      (C13612 * C189 + C28001 * C350 + C13613 * C676 +
                       C28002 * C798 + C13614 * C1466 + C13459 * C1661) *
                          C28009) *
                         C27816 * C27960 +
                     ((C13630 + C13629 + C13628) * C188 +
                      (C13749 + C13750 + C13751) * C28009) *
                         C27816 * C27768) *
                        C28010 * C77 -
                    (((C13614 * C1468 + C13459 * C1663 + C13613 * C674 +
                       C28002 * C796 + C13612 * C191 + C28001 * C352) *
                          C28009 +
                      (C13614 * C1350 + C13459 * C1527 + C13613 * C580 +
                       C28002 * C716 + C13612 * C91 + C28001 * C236) *
                          C188) *
                         C27816 * C27768 +
                     ((C13751 + C13750 + C13749) * C28009 +
                      (C13628 + C13629 + C13630) * C188) *
                         C27816 * C27960) *
                        C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C87 +
            (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
               C27960 +
           (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C27768) *
              C28001 +
          ((C2306 * C87 + C2307 * C77 - C1738 * C88 - C1739 * C78) * C27960 +
           (C1738 * C87 + C1739 * C77 - C4980 * C88 - C4981 * C78) * C27768) *
              C28002 +
          ((C2308 * C87 + C2309 * C77 - C1740 * C88 - C1741 * C78) * C27960 +
           (C1740 * C87 + C1741 * C77 - (C404 * C1350 + C27816 * C1725) * C88 -
            (C404 * C1356 + C27816 * C1728) * C78) *
               C27768) *
              C13459) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C143 +
             (C404 * C144 + C27816 * C467) * C28010) *
                C27960 +
            (C473 + C485) * C27768) *
               C28001 +
           ((C2306 * C143 + C2370 * C28010) * C27960 +
            (C1795 + C1803) * C27768) *
               C28002 +
           ((C2308 * C143 + C2371 * C28010) * C27960 +
            (C1798 + C1804) * C27768) *
               C13459) *
              C77 -
          ((((C404 * C1412 + C27816 * C1793) * C28010 +
             (C404 * C1350 + C27816 * C1725) * C143) *
                C27768 +
            (C1804 + C1798) * C27960) *
               C13459 +
           ((C5036 + C5032) * C27768 + (C1803 + C1795) * C27960) * C28002 +
           ((C486 + C476) * C27768 + (C485 + C473) * C27960) * C28001) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C27960 +
            (C527 + C539) * C27768) *
               C28001 +
           ((C2424 + C2432) * C27960 + (C1858 + C1866) * C27768) * C28002 +
           ((C2427 + C2433) * C27960 + (C1861 + C1867) * C27768) * C13459) *
              C28010 * C77 -
          ((((C404 * C1468 + C27816 * C1856) * C28009 +
             (C404 * C1350 + C27816 * C1725) * C188) *
                C27768 +
            (C1867 + C1861) * C27960) *
               C13459 +
           ((C5091 + C5087) * C27768 + (C1866 + C1858) * C27960) * C28002 +
           ((C540 + C530) * C27768 + (C539 + C527) * C27960) * C28001) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C578 +
            (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                C28008) *
               C28001 +
           ((C13968 + C13969) * C578 + (C13970 + C13971) * C28008) * C28002 +
           ((C13972 + C13973) * C578 + (C13974 + C13975) * C28008) * C13459) *
              C27816 * C28009 * C576 -
          (((C26640 * C1919 + C27768 * C1923 + C26647 * C1920 +
             C27960 * C1924) *
                C28008 +
            (C26640 * C1917 + C27768 * C1921 + C26647 * C1918 +
             C27960 * C1922) *
                C578) *
               C13459 +
           ((C13975 + C13974) * C28008 + (C13973 + C13972) * C578) * C28002 +
           ((C13971 + C13970) * C28008 + (C13969 + C13968) * C578) * C28001) *
              C27816 * C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C629 +
           (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
               C576 -
           (C13969 + C13968) * C630 - (C14034 + C14035) * C577) *
              C28001 +
          ((C13968 + C13969) * C629 + (C14035 + C14034) * C576 -
           (C13973 + C13972) * C630 - (C14036 + C14037) * C577) *
              C28002 +
          ((C13972 + C13973) * C629 + (C14037 + C14036) * C576 -
           (C26640 * C1917 + C27768 * C1921 + C26647 * C1918 + C27960 * C1922) *
               C630 -
           (C26640 * C1999 + C27768 * C2001 + C26647 * C2000 + C27960 * C2002) *
               C577) *
              C13459) *
         C27816 * C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C188 +
            (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                C28009) *
               C28001 +
           ((C13968 + C13969) * C188 + (C14096 + C14097) * C28009) * C28002 +
           ((C13972 + C13973) * C188 + (C14098 + C14099) * C28009) * C13459) *
              C27816 * C576 -
          (((C26640 * C2065 + C27768 * C2067 + C26647 * C2066 +
             C27960 * C2068) *
                C28009 +
            (C26640 * C1917 + C27768 * C1921 + C26647 * C1918 +
             C27960 * C1922) *
                C188) *
               C13459 +
           ((C14099 + C14098) * C28009 + (C13973 + C13972) * C188) * C28002 +
           ((C14097 + C14096) * C28009 + (C13969 + C13968) * C188) * C28001) *
              C27816 * C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C578 +
                      (C13612 * C98 + C28001 * C239 + C13613 * C586 +
                       C28002 * C722 + C13614 * C1353 + C13459 * C1528) *
                          C28008) *
                         C27816 * C27960 +
                     ((C13630 + C13629 + C13628) * C578 +
                      (C13633 + C13632 + C13631) * C28008) *
                         C27816 * C27768) *
                        C28009 * C576 -
                    (((C13614 * C1919 + C13459 * C2133 + C13613 * C1354 +
                       C28002 * C1529 + C13612 * C585 + C28001 * C721) *
                          C28008 +
                      (C13614 * C1917 + C13459 * C2131 + C13613 * C1349 +
                       C28002 * C1526 + C13612 * C581 + C28001 * C717) *
                          C578) *
                         C27816 * C27768 +
                     ((C13614 * C1920 + C13459 * C2134 + C13613 * C1353 +
                       C28002 * C1528 + C13612 * C586 + C28001 * C722) *
                          C28008 +
                      (C13614 * C1918 + C13459 * C2132 + C13613 * C1348 +
                       C28002 * C1525 + C13612 * C582 + C28001 * C718) *
                          C578) *
                         C27816 * C27960) *
                        C28009 * C577)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                      C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                         C629 +
                     (C13612 * C144 + C28001 * C296 + C13613 * C634 +
                      C28002 * C757 + C13614 * C1410 + C13459 * C1599) *
                         C576 -
                     (C13614 * C1918 + C13459 * C2132 + C13613 * C1348 +
                      C28002 * C1525 + C13612 * C582 + C28001 * C718) *
                         C630 -
                     (C13614 * C2000 + C13459 * C2185 + C13613 * C1410 +
                      C28002 * C1599 + C13612 * C634 + C28001 * C757) *
                         C577) *
                        C27816 * C27960 +
                    ((C13630 + C13629 + C13628) * C629 +
                     (C13690 + C13691 + C13692) * C576 -
                     (C13614 * C1917 + C13459 * C2131 + C13613 * C1349 +
                      C28002 * C1526 + C13612 * C581 + C28001 * C717) *
                         C630 -
                     (C13614 * C1999 + C13459 * C2186 + C13613 * C1411 +
                      C28002 * C1600 + C13612 * C633 + C28001 * C758) *
                         C577) *
                        C27816 * C27768) *
                   C28008 * C28009) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C188 +
                      (C13612 * C189 + C28001 * C350 + C13613 * C676 +
                       C28002 * C798 + C13614 * C1466 + C13459 * C1661) *
                          C28009) *
                         C27816 * C27960 +
                     ((C13630 + C13629 + C13628) * C188 +
                      (C13749 + C13750 + C13751) * C28009) *
                         C27816 * C27768) *
                        C576 -
                    (((C13614 * C2065 + C13459 * C2237 + C13613 * C1467 +
                       C28002 * C1662 + C13612 * C675 + C28001 * C797) *
                          C28009 +
                      (C13614 * C1917 + C13459 * C2131 + C13613 * C1349 +
                       C28002 * C1526 + C13612 * C581 + C28001 * C717) *
                          C188) *
                         C27816 * C27768 +
                     ((C13614 * C2066 + C13459 * C2238 + C13613 * C1466 +
                       C28002 * C1661 + C13612 * C676 + C28001 * C798) *
                          C28009 +
                      (C13614 * C1918 + C13459 * C2132 + C13613 * C1348 +
                       C28002 * C1525 + C13612 * C582 + C28001 * C718) *
                          C188) *
                         C27816 * C27960) *
                        C577) *
                   C28008) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C27960 +
            (C428 * C578 + C429 * C28008) * C27768) *
               C28001 +
           ((C2310 + C2311) * C27960 + (C2298 + C2299) * C27768) * C28002 +
           ((C2312 + C2313) * C27960 + (C2304 + C2305) * C27768) * C13459) *
              C28009 * C576 -
          ((((C404 * C1919 + C27816 * C2291) * C28008 +
             (C404 * C1917 + C27816 * C2289) * C578) *
                C27768 +
            (C11471 + C11470) * C27960) *
               C13459 +
           ((C2305 + C2304) * C27768 + (C2313 + C2312) * C27960) * C28002 +
           ((C2299 + C2298) * C27768 + (C2311 + C2310) * C27960) * C28001) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C629 +
            (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 -
            C2370 * C577) *
               C27960 +
           (C428 * C629 + C482 * C576 - C1738 * C630 - C1801 * C577) * C27768) *
              C28001 +
          ((C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) *
               C27960 +
           (C1738 * C629 + C1801 * C576 - C1740 * C630 - C1802 * C577) *
               C27768) *
              C28002 +
          ((C2308 * C629 + C2371 * C576 - C11468 * C630 - C11509 * C577) *
               C27960 +
           (C1740 * C629 + C1802 * C576 -
            (C404 * C1917 + C27816 * C2289) * C630 -
            (C404 * C1999 + C27816 * C2364) * C577) *
               C27768) *
              C13459) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C27960 +
            (C527 + C539) * C27768) *
               C28001 +
           ((C2424 + C2432) * C27960 + (C1858 + C1866) * C27768) * C28002 +
           ((C2427 + C2433) * C27960 + (C1861 + C1867) * C27768) * C13459) *
              C576 -
          ((((C404 * C2065 + C27816 * C2421) * C28009 +
             (C404 * C1917 + C27816 * C2289) * C188) *
                C27768 +
            (C11549 + C11545) * C27960) *
               C13459 +
           ((C1867 + C1861) * C27768 + (C2433 + C2427) * C27960) * C28002 +
           ((C1866 + C1858) * C27768 + (C2432 + C2424) * C27960) * C28001) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C578 +
            (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                C28008) *
               C28001 +
           ((C13968 + C13969) * C578 + (C13970 + C13971) * C28008) * C28002 +
           ((C13972 + C13973) * C578 + (C13974 + C13975) * C28008) * C13459) *
              C27816 * C951 -
          (((C26640 * C2487 + C27768 * C2495 + C26647 * C2488 +
             C27960 * C2496) *
                C28008 +
            (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
             C27960 * C2490) *
                C578) *
               C13459 +
           ((C26640 * C2491 + C27768 * C2497 + C26647 * C2492 +
             C27960 * C2498) *
                C28008 +
            (C26640 * C2485 + C27768 * C2493 + C26647 * C2486 +
             C27960 * C2494) *
                C578) *
               C28002 +
           ((C26640 * C959 + C27768 * C967 + C26647 * C960 + C27960 * C968) *
                C28008 +
            (C26640 * C955 + C27768 * C963 + C26647 * C956 + C27960 * C964) *
                C578) *
               C28001) *
              C27816 * C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C143 +
            (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                C28010) *
               C28001 +
           ((C13968 + C13969) * C143 + (C14035 + C14034) * C28010) * C28002 +
           ((C13972 + C13973) * C143 + (C14037 + C14036) * C28010) * C13459) *
              C27816 * C28008 * C951 -
          (((C26640 * C2549 + C27768 * C2553 + C26647 * C2550 +
             C27960 * C2554) *
                C28010 +
            (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
             C27960 * C2490) *
                C143) *
               C13459 +
           ((C26640 * C2551 + C27768 * C2555 + C26647 * C2552 +
             C27960 * C2556) *
                C28010 +
            (C26640 * C2485 + C27768 * C2493 + C26647 * C2486 +
             C27960 * C2494) *
                C143) *
               C28002 +
           ((C26640 * C1005 + C27768 * C1009 + C26647 * C1006 +
             C27960 * C1010) *
                C28010 +
            (C26640 * C955 + C27768 * C963 + C26647 * C956 + C27960 * C964) *
                C143) *
               C28001) *
              C27816 * C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C1045 +
           (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
               C951 -
           (C26640 * C955 + C27768 * C963 + C26647 * C956 + C27960 * C964) *
               C1046 -
           (C26640 * C1049 + C27768 * C1053 + C26647 * C1050 + C27960 * C1054) *
               C952) *
              C28001 +
          ((C13968 + C13969) * C1045 + (C14096 + C14097) * C951 -
           (C26640 * C2485 + C27768 * C2493 + C26647 * C2486 + C27960 * C2494) *
               C1046 -
           (C26640 * C2607 + C27768 * C2611 + C26647 * C2608 + C27960 * C2612) *
               C952) *
              C28002 +
          ((C13972 + C13973) * C1045 + (C14098 + C14099) * C951 -
           (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 + C27960 * C2490) *
               C1046 -
           (C26640 * C2609 + C27768 * C2613 + C26647 * C2610 + C27960 * C2614) *
               C952) *
              C13459) *
         C27816 * C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C578 +
                      (C13612 * C98 + C28001 * C239 + C13613 * C586 +
                       C28002 * C722 + C13614 * C1353 + C13459 * C1528) *
                          C28008) *
                         C27816 * C27960 +
                     ((C13630 + C13629 + C13628) * C578 +
                      (C13633 + C13632 + C13631) * C28008) *
                         C27816 * C27768) *
                        C951 -
                    (((C13614 * C2487 + C13459 * C2669 + C13613 * C2491 +
                       C28002 * C2670 + C13612 * C959 + C28001 * C1095) *
                          C28008 +
                      (C13614 * C2483 + C13459 * C2665 + C13613 * C2485 +
                       C28002 * C2666 + C13612 * C955 + C28001 * C1091) *
                          C578) *
                         C27816 * C27768 +
                     ((C13614 * C2488 + C13459 * C2671 + C13613 * C2492 +
                       C28002 * C2672 + C13612 * C960 + C28001 * C1096) *
                          C28008 +
                      (C13614 * C2484 + C13459 * C2667 + C13613 * C2486 +
                       C28002 * C2668 + C13612 * C956 + C28001 * C1092) *
                          C578) *
                         C27816 * C27960) *
                        C952) *
                   C28010) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C143 +
                      (C13612 * C144 + C28001 * C296 + C13613 * C634 +
                       C28002 * C757 + C13614 * C1410 + C13459 * C1599) *
                          C28010) *
                         C27816 * C27960 +
                     ((C13630 + C13629 + C13628) * C143 +
                      (C13690 + C13691 + C13692) * C28010) *
                         C27816 * C27768) *
                        C28008 * C951 -
                    (((C13614 * C2549 + C13459 * C2723 + C13613 * C2551 +
                       C28002 * C2724 + C13612 * C1005 + C28001 * C1133) *
                          C28010 +
                      (C13614 * C2483 + C13459 * C2665 + C13613 * C2485 +
                       C28002 * C2666 + C13612 * C955 + C28001 * C1091) *
                          C143) *
                         C27816 * C27768 +
                     ((C13614 * C2550 + C13459 * C2725 + C13613 * C2552 +
                       C28002 * C2726 + C13612 * C1006 + C28001 * C1134) *
                          C28010 +
                      (C13614 * C2484 + C13459 * C2667 + C13613 * C2486 +
                       C28002 * C2668 + C13612 * C956 + C28001 * C1092) *
                          C143) *
                         C27816 * C27960) *
                        C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                      C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                         C1045 +
                     (C13612 * C189 + C28001 * C350 + C13613 * C676 +
                      C28002 * C798 + C13614 * C1466 + C13459 * C1661) *
                         C951 -
                     (C13614 * C2484 + C13459 * C2667 + C13613 * C2486 +
                      C28002 * C2668 + C13612 * C956 + C28001 * C1092) *
                         C1046 -
                     (C13614 * C2610 + C13459 * C2777 + C13613 * C2608 +
                      C28002 * C2778 + C13612 * C1050 + C28001 * C1169) *
                         C952) *
                        C27816 * C27960 +
                    ((C13630 + C13629 + C13628) * C1045 +
                     (C13749 + C13750 + C13751) * C951 -
                     (C13614 * C2483 + C13459 * C2665 + C13613 * C2485 +
                      C28002 * C2666 + C13612 * C955 + C28001 * C1091) *
                         C1046 -
                     (C13614 * C2609 + C13459 * C2779 + C13613 * C2607 +
                      C28002 * C2780 + C13612 * C1049 + C28001 * C1170) *
                         C952) *
                        C27816 * C27768) *
                   C28010 * C28008) /
                  (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C27960 +
            (C428 * C578 + C429 * C28008) * C27768) *
               C28001 +
           ((C2310 + C2311) * C27960 + (C2298 + C2299) * C27768) * C28002 +
           ((C2312 + C2313) * C27960 + (C2304 + C2305) * C27768) * C13459) *
              C951 -
          ((((C404 * C2487 + C27816 * C2835) * C28008 +
             (C404 * C2483 + C27816 * C2831) * C578) *
                C27768 +
            ((C404 * C2488 + C27816 * C2836) * C28008 +
             (C404 * C2484 + C27816 * C2832) * C578) *
                C27960) *
               C13459 +
           (((C404 * C2491 + C27816 * C2837) * C28008 +
             (C404 * C2485 + C27816 * C2833) * C578) *
                C27768 +
            ((C404 * C2492 + C27816 * C2838) * C28008 +
             (C404 * C2486 + C27816 * C2834) * C578) *
                C27960) *
               C28002 +
           (((C404 * C959 + C27816 * C1213) * C28008 +
             (C404 * C955 + C27816 * C1209) * C578) *
                C27768 +
            ((C404 * C960 + C27816 * C1214) * C28008 +
             (C404 * C956 + C27816 * C1210) * C578) *
                C27960) *
               C28001) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C143 +
                       (C404 * C144 + C27816 * C467) * C28010) *
                          C27960 +
                      (C473 + C485) * C27768) *
                         C28001 +
                     ((C2306 * C143 + C2370 * C28010) * C27960 +
                      (C1795 + C1803) * C27768) *
                         C28002 +
                     ((C2308 * C143 + C2371 * C28010) * C27960 +
                      (C1798 + C1804) * C27768) *
                         C13459) *
                        C28008 * C951 -
                    ((((C404 * C2549 + C27816 * C2889) * C28010 +
                       (C404 * C2483 + C27816 * C2831) * C143) *
                          C27768 +
                      ((C404 * C2550 + C27816 * C2890) * C28010 +
                       (C404 * C2484 + C27816 * C2832) * C143) *
                          C27960) *
                         C13459 +
                     (((C404 * C2551 + C27816 * C2891) * C28010 +
                       (C404 * C2485 + C27816 * C2833) * C143) *
                          C27768 +
                      ((C404 * C2552 + C27816 * C2892) * C28010 +
                       (C404 * C2486 + C27816 * C2834) * C143) *
                          C27960) *
                         C28002 +
                     (((C404 * C1005 + C27816 * C1251) * C28010 +
                       (C404 * C955 + C27816 * C1209) * C143) *
                          C27768 +
                      ((C404 * C1006 + C27816 * C1252) * C28010 +
                       (C404 * C956 + C27816 * C1210) * C143) *
                          C27960) *
                         C28001) *
                        C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C1045 +
                      (C404 * C189 + C27816 * C521) * C951 -
                      (C404 * C956 + C27816 * C1210) * C1046 -
                      (C404 * C1050 + C27816 * C1287) * C952) *
                         C27960 +
                     (C428 * C1045 + C536 * C951 -
                      (C404 * C955 + C27816 * C1209) * C1046 -
                      (C404 * C1049 + C27816 * C1288) * C952) *
                         C27768) *
                        C28001 +
                    ((C2306 * C1045 + C2430 * C951 -
                      (C404 * C2486 + C27816 * C2834) * C1046 -
                      (C404 * C2608 + C27816 * C2943) * C952) *
                         C27960 +
                     (C1738 * C1045 + C1864 * C951 -
                      (C404 * C2485 + C27816 * C2833) * C1046 -
                      (C404 * C2607 + C27816 * C2944) * C952) *
                         C27768) *
                        C28002 +
                    ((C2308 * C1045 + C2431 * C951 -
                      (C404 * C2484 + C27816 * C2832) * C1046 -
                      (C404 * C2610 + C27816 * C2945) * C952) *
                         C27960 +
                     (C1740 * C1045 + C1865 * C951 -
                      (C404 * C2483 + C27816 * C2831) * C1046 -
                      (C404 * C2609 + C27816 * C2946) * C952) *
                         C27768) *
                        C13459) *
                   C28010 * C28008) /
                  (p * q * std::sqrt(p + q));
    d2eexx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C87 +
                      (C10886 * C98 + C27763 * C104) * C77 -
                      (C10886 * C90 + C27763 * C95) * C88 -
                      (C10886 * C99 + C27763 * C105) * C78) *
                         C28001 +
                     (C11214 * C87 + C11215 * C77 -
                      (C10886 * C581 + C27763 * C589) * C88 -
                      (C10886 * C585 + C27763 * C593) * C78) *
                         C28002 +
                     (C11216 * C87 + C11217 * C77 -
                      (C10886 * C1349 + C27763 * C1352) * C88 -
                      (C10886 * C1354 + C27763 * C1358) * C78) *
                         C13459) *
                        C27974 +
                    ((C12918 * C87 + C12919 * C77 -
                      (C10886 * C955 + C27763 * C963) * C88 -
                      (C10886 * C959 + C27763 * C967) * C78) *
                         C28001 +
                     (C12384 * C87 + C12385 * C77 -
                      (C10886 * C2485 + C27763 * C2493) * C88 -
                      (C10886 * C2491 + C27763 * C2497) * C78) *
                         C28002 +
                     ((C10886 * C2484 + C27763 * C2490) * C87 +
                      (C10886 * C2488 + C27763 * C2496) * C77 -
                      (C10886 * C2483 + C27763 * C2489) * C88 -
                      (C10886 * C2487 + C27763 * C2495) * C78) *
                         C13459) *
                        C27880) *
                   C28009 * C28010) /
                  (p * q * std::sqrt(p + q));
    d2eexy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C28001 +
                      (C11214 * C143 + C11268 * C28010) * C28002 +
                      (C11216 * C143 + C11269 * C28010) * C13459) *
                         C27974 +
                     ((C12978 + C12990) * C28001 + (C12981 + C12982) * C28002 +
                      ((C10886 * C2484 + C27763 * C2490) * C143 +
                       (C10886 * C2550 + C27763 * C2554) * C28010) *
                          C13459) *
                         C27880) *
                        C77 -
                    ((((C10886 * C2549 + C27763 * C2553) * C28010 +
                       (C10886 * C2483 + C27763 * C2489) * C143) *
                          C13459 +
                      ((C10886 * C2551 + C27763 * C2555) * C28010 +
                       (C10886 * C2485 + C27763 * C2493) * C143) *
                          C28002 +
                      ((C10886 * C1005 + C27763 * C1009) * C28010 +
                       (C10886 * C955 + C27763 * C963) * C143) *
                          C28001) *
                         C27880 +
                     (((C10886 * C1411 + C27763 * C1414) * C28010 +
                       (C10886 * C1349 + C27763 * C1352) * C143) *
                          C13459 +
                      ((C10886 * C633 + C27763 * C637) * C28010 +
                       (C10886 * C581 + C27763 * C589) * C143) *
                          C28002 +
                      ((C10886 * C145 + C27763 * C150) * C28010 +
                       (C10886 * C90 + C27763 * C95) * C143) *
                          C28001) *
                         C27974) *
                        C78) *
                   C28009) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C28001 +
                      (C11307 + C11319) * C28002 + (C11310 + C11320) * C13459) *
                         C27974 +
                     ((C12918 * C188 + C13048 * C28009) * C28001 +
                      (C12502 + C12510) * C28002 +
                      ((C10886 * C2484 + C27763 * C2490) * C188 +
                       (C10886 * C2610 + C27763 * C2614) * C28009) *
                          C13459) *
                         C27880) *
                        C28010 * C77 -
                    ((((C10886 * C2609 + C27763 * C2613) * C28009 +
                       (C10886 * C2483 + C27763 * C2489) * C188) *
                          C13459 +
                      ((C10886 * C2607 + C27763 * C2611) * C28009 +
                       (C10886 * C2485 + C27763 * C2493) * C188) *
                          C28002 +
                      ((C10886 * C1049 + C27763 * C1053) * C28009 +
                       (C10886 * C955 + C27763 * C963) * C188) *
                          C28001) *
                         C27880 +
                     (((C10886 * C1467 + C27763 * C1470) * C28009 +
                       (C10886 * C1349 + C27763 * C1352) * C188) *
                          C13459 +
                      ((C10886 * C675 + C27763 * C679) * C28009 +
                       (C10886 * C581 + C27763 * C589) * C188) *
                          C28002 +
                      ((C10886 * C190 + C27763 * C195) * C28009 +
                       (C10886 * C90 + C27763 * C95) * C188) *
                          C28001) *
                         C27974) *
                        C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                      C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                         C87 +
                     (C13612 * C98 + C28001 * C239 + C13613 * C586 +
                      C28002 * C722 + C13614 * C1353 + C13459 * C1528) *
                         C77 -
                     (C13628 + C13629 + C13630) * C88 -
                     (C13631 + C13632 + C13633) * C78) *
                        C27974 +
                    ((C13612 * C956 + C28001 * C1092 + C13613 * C2486 +
                      C28002 * C2668 + C13614 * C2484 + C13459 * C2667) *
                         C87 +
                     (C13612 * C960 + C28001 * C1096 + C13613 * C2492 +
                      C28002 * C2672 + C13614 * C2488 + C13459 * C2671) *
                         C77 -
                     (C13614 * C2483 + C13459 * C2665 + C13613 * C2485 +
                      C28002 * C2666 + C13612 * C955 + C28001 * C1091) *
                         C88 -
                     (C13614 * C2487 + C13459 * C2669 + C13613 * C2491 +
                      C28002 * C2670 + C13612 * C959 + C28001 * C1095) *
                         C78) *
                        C27880) *
                   C27763 * C28009 * C28010) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C143 +
                      (C13612 * C144 + C28001 * C296 + C13613 * C634 +
                       C28002 * C757 + C13614 * C1410 + C13459 * C1599) *
                          C28010) *
                         C27974 +
                     ((C13612 * C956 + C28001 * C1092 + C13613 * C2486 +
                       C28002 * C2668 + C13614 * C2484 + C13459 * C2667) *
                          C143 +
                      (C13612 * C1006 + C28001 * C1134 + C13613 * C2552 +
                       C28002 * C2726 + C13614 * C2550 + C13459 * C2725) *
                          C28010) *
                         C27880) *
                        C27763 * C77 -
                    (((C13614 * C2549 + C13459 * C2723 + C13613 * C2551 +
                       C28002 * C2724 + C13612 * C1005 + C28001 * C1133) *
                          C28010 +
                      (C13614 * C2483 + C13459 * C2665 + C13613 * C2485 +
                       C28002 * C2666 + C13612 * C955 + C28001 * C1091) *
                          C143) *
                         C27880 +
                     ((C13692 + C13691 + C13690) * C28010 +
                      (C13628 + C13629 + C13630) * C143) *
                         C27974) *
                        C27763 * C78) *
                   C28009) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C188 +
                      (C13612 * C189 + C28001 * C350 + C13613 * C676 +
                       C28002 * C798 + C13614 * C1466 + C13459 * C1661) *
                          C28009) *
                         C27974 +
                     ((C13612 * C956 + C28001 * C1092 + C13613 * C2486 +
                       C28002 * C2668 + C13614 * C2484 + C13459 * C2667) *
                          C188 +
                      (C13612 * C1050 + C28001 * C1169 + C13613 * C2608 +
                       C28002 * C2778 + C13614 * C2610 + C13459 * C2777) *
                          C28009) *
                         C27880) *
                        C27763 * C28010 * C77 -
                    (((C13614 * C2609 + C13459 * C2779 + C13613 * C2607 +
                       C28002 * C2780 + C13612 * C1049 + C28001 * C1170) *
                          C28009 +
                      (C13614 * C2483 + C13459 * C2665 + C13613 * C2485 +
                       C28002 * C2666 + C13612 * C955 + C28001 * C1091) *
                          C188) *
                         C27880 +
                     ((C13751 + C13750 + C13749) * C28009 +
                      (C13628 + C13629 + C13630) * C188) *
                         C27974) *
                        C27763 * C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) * C87 +
           (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) * C77 -
           (C6432 + C6433) * C88 - (C6434 + C6435) * C78) *
              C27763 * C28001 +
          ((C8638 + C8639) * C87 + (C8640 + C8641) * C77 -
           (C7996 + C7997) * C88 - (C7998 + C7999) * C78) *
              C27763 * C28002 +
          ((C6413 * C1348 + C27974 * C1723 + C6414 * C2484 + C27880 * C2832) *
               C87 +
           (C6413 * C1353 + C27974 * C1726 + C6414 * C2488 + C27880 * C2836) *
               C77 -
           (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
               C88 -
           (C6414 * C2487 + C27880 * C2835 + C6413 * C1354 + C27974 * C1727) *
               C78) *
              C27763 * C13459) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C143 +
            (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                C28010) *
               C27763 * C28001 +
           ((C8638 + C8639) * C143 + (C8713 + C8712) * C28010) * C27763 *
               C28002 +
           ((C6413 * C1348 + C27974 * C1723 + C6414 * C2484 + C27880 * C2832) *
                C143 +
            (C6413 * C1410 + C27974 * C1791 + C6414 * C2550 + C27880 * C2890) *
                C28010) *
               C27763 * C13459) *
              C77 -
          (((C6414 * C2549 + C27880 * C2889 + C6413 * C1411 + C27974 * C1792) *
                C28010 +
            (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                C143) *
               C27763 * C13459 +
           ((C8071 + C8070) * C28010 + (C7996 + C7997) * C143) * C27763 *
               C28002 +
           ((C6499 + C6498) * C28010 + (C6432 + C6433) * C143) * C27763 *
               C28001) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C188 +
            (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                C28009) *
               C27763 * C28001 +
           ((C8638 + C8639) * C188 + (C8784 + C8785) * C28009) * C27763 *
               C28002 +
           ((C6413 * C1348 + C27974 * C1723 + C6414 * C2484 + C27880 * C2832) *
                C188 +
            (C6413 * C1466 + C27974 * C1854 + C6414 * C2610 + C27880 * C2945) *
                C28009) *
               C27763 * C13459) *
              C28010 * C77 -
          (((C6414 * C2609 + C27880 * C2946 + C6413 * C1467 + C27974 * C1855) *
                C28009 +
            (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                C188) *
               C27763 * C13459 +
           ((C8143 + C8142) * C28009 + (C7996 + C7997) * C188) * C27763 *
               C28002 +
           ((C6561 + C6560) * C28009 + (C6432 + C6433) * C188) * C27763 *
               C28001) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C578 +
                       (C10886 * C98 + C27763 * C104) * C28008) *
                          C28001 +
                      (C11220 + C11221) * C28002 + (C11222 + C11223) * C13459) *
                         C27974 +
                     ((C12922 + C12923) * C28001 + (C12388 + C12389) * C28002 +
                      (C17210 + C17211) * C13459) *
                         C27880) *
                        C28009 * C576 -
                    ((((C10886 * C11584 + C27763 * C11586) * C28008 +
                       (C10886 * C11583 + C27763 * C11585) * C578) *
                          C13459 +
                      (C17211 + C17210) * C28002 + (C12389 + C12388) * C28001) *
                         C27880 +
                     ((C11225 + C11224) * C13459 + (C11223 + C11222) * C28002 +
                      (C11221 + C11220) * C28001) *
                         C27974) *
                        C28009 * C577)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C629 +
            (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
            C11268 * C577) *
               C28001 +
           (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
               C28002 +
           (C11216 * C629 + C11269 * C576 - C11218 * C630 - C11270 * C577) *
               C13459) *
              C27974 +
          ((C12918 * C629 + C12988 * C576 - C12384 * C630 - C12448 * C577) *
               C28001 +
           (C12384 * C629 + C12448 * C576 - C17208 * C630 - C17264 * C577) *
               C28002 +
           (C17208 * C629 + C17264 * C576 -
            (C10886 * C11583 + C27763 * C11585) * C630 -
            (C10886 * C11621 + C27763 * C11622) * C577) *
               C13459) *
              C27880) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C28001 +
                      (C11307 + C11319) * C28002 + (C11310 + C11320) * C13459) *
                         C27974 +
                     ((C12918 * C188 + C13048 * C28009) * C28001 +
                      (C12502 + C12510) * C28002 + (C17315 + C17319) * C13459) *
                         C27880) *
                        C576 -
                    ((((C10886 * C11657 + C27763 * C11658) * C28009 +
                       (C10886 * C11583 + C27763 * C11585) * C188) *
                          C13459 +
                      (C17319 + C17315) * C28002 + (C12510 + C12502) * C28001) *
                         C27880 +
                     ((C11321 + C11313) * C13459 + (C11320 + C11310) * C28002 +
                      (C11319 + C11307) * C28001) *
                         C27974) *
                        C577) *
                   C28008) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C578 +
                      (C13612 * C98 + C28001 * C239 + C13613 * C586 +
                       C28002 * C722 + C13614 * C1353 + C13459 * C1528) *
                          C28008) *
                         C27974 +
                     ((C13612 * C956 + C28001 * C1092 + C13613 * C2486 +
                       C28002 * C2668 + C13614 * C2484 + C13459 * C2667) *
                          C578 +
                      (C13612 * C960 + C28001 * C1096 + C13613 * C2492 +
                       C28002 * C2672 + C13614 * C2488 + C13459 * C2671) *
                          C28008) *
                         C27880) *
                        C27763 * C28009 * C576 -
                    (((C13614 * C11584 + C13459 * C11694 + C13613 * C2488 +
                       C28002 * C2671 + C13612 * C2492 + C28001 * C2672) *
                          C28008 +
                      (C13614 * C11583 + C13459 * C11693 + C13613 * C2484 +
                       C28002 * C2667 + C13612 * C2486 + C28001 * C2668) *
                          C578) *
                         C27880 +
                     ((C13614 * C1920 + C13459 * C2134 + C13613 * C1353 +
                       C28002 * C1528 + C13612 * C586 + C28001 * C722) *
                          C28008 +
                      (C13614 * C1918 + C13459 * C2132 + C13613 * C1348 +
                       C28002 * C1525 + C13612 * C582 + C28001 * C718) *
                          C578) *
                         C27974) *
                        C27763 * C28009 * C577)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                      C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                         C629 +
                     (C13612 * C144 + C28001 * C296 + C13613 * C634 +
                      C28002 * C757 + C13614 * C1410 + C13459 * C1599) *
                         C576 -
                     (C13614 * C1918 + C13459 * C2132 + C13613 * C1348 +
                      C28002 * C1525 + C13612 * C582 + C28001 * C718) *
                         C630 -
                     (C13614 * C2000 + C13459 * C2185 + C13613 * C1410 +
                      C28002 * C1599 + C13612 * C634 + C28001 * C757) *
                         C577) *
                        C27974 +
                    ((C13612 * C956 + C28001 * C1092 + C13613 * C2486 +
                      C28002 * C2668 + C13614 * C2484 + C13459 * C2667) *
                         C629 +
                     (C13612 * C1006 + C28001 * C1134 + C13613 * C2552 +
                      C28002 * C2726 + C13614 * C2550 + C13459 * C2725) *
                         C576 -
                     (C13614 * C11583 + C13459 * C11693 + C13613 * C2484 +
                      C28002 * C2667 + C13612 * C2486 + C28001 * C2668) *
                         C630 -
                     (C13614 * C11621 + C13459 * C11729 + C13613 * C2550 +
                      C28002 * C2725 + C13612 * C2552 + C28001 * C2726) *
                         C577) *
                        C27880) *
                   C27763 * C28008 * C28009) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C188 +
                      (C13612 * C189 + C28001 * C350 + C13613 * C676 +
                       C28002 * C798 + C13614 * C1466 + C13459 * C1661) *
                          C28009) *
                         C27974 +
                     ((C13612 * C956 + C28001 * C1092 + C13613 * C2486 +
                       C28002 * C2668 + C13614 * C2484 + C13459 * C2667) *
                          C188 +
                      (C13612 * C1050 + C28001 * C1169 + C13613 * C2608 +
                       C28002 * C2778 + C13614 * C2610 + C13459 * C2777) *
                          C28009) *
                         C27880) *
                        C27763 * C576 -
                    (((C13614 * C11657 + C13459 * C11764 + C13613 * C2610 +
                       C28002 * C2777 + C13612 * C2608 + C28001 * C2778) *
                          C28009 +
                      (C13614 * C11583 + C13459 * C11693 + C13613 * C2484 +
                       C28002 * C2667 + C13612 * C2486 + C28001 * C2668) *
                          C188) *
                         C27880 +
                     ((C13614 * C2066 + C13459 * C2238 + C13613 * C1466 +
                       C28002 * C1661 + C13612 * C676 + C28001 * C798) *
                          C28009 +
                      (C13614 * C1918 + C13459 * C2132 + C13613 * C1348 +
                       C28002 * C1525 + C13612 * C582 + C28001 * C718) *
                          C188) *
                         C27974) *
                        C27763 * C577) *
                   C28008) /
                  (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C578 +
            (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                C28008) *
               C27763 * C28001 +
           ((C8638 + C8639) * C578 + (C8640 + C8641) * C28008) * C27763 *
               C28002 +
           ((C17528 + C17529) * C578 + (C17530 + C17531) * C28008) * C27763 *
               C13459) *
              C28009 * C576 -
          (((C6414 * C11584 + C27880 * C11800 + C6413 * C1920 +
             C27974 * C2292) *
                C28008 +
            (C6414 * C11583 + C27880 * C11799 + C6413 * C1918 +
             C27974 * C2290) *
                C578) *
               C27763 * C13459 +
           ((C17531 + C17530) * C28008 + (C17529 + C17528) * C578) * C27763 *
               C28002 +
           ((C8641 + C8640) * C28008 + (C8639 + C8638) * C578) * C27763 *
               C28001) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
               C629 +
           (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
               C576 -
           (C8639 + C8638) * C630 - (C8712 + C8713) * C577) *
              C27763 * C28001 +
          ((C8638 + C8639) * C629 + (C8713 + C8712) * C576 -
           (C17529 + C17528) * C630 - (C17586 + C17587) * C577) *
              C27763 * C28002 +
          ((C17528 + C17529) * C629 + (C17587 + C17586) * C576 -
           (C6414 * C11583 + C27880 * C11799 + C6413 * C1918 + C27974 * C2290) *
               C630 -
           (C6414 * C11621 + C27880 * C11835 + C6413 * C2000 + C27974 * C2363) *
               C577) *
              C27763 * C13459) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C188 +
            (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                C28009) *
               C27763 * C28001 +
           ((C8638 + C8639) * C188 + (C8784 + C8785) * C28009) * C27763 *
               C28002 +
           ((C17528 + C17529) * C188 + (C17642 + C17643) * C28009) * C27763 *
               C13459) *
              C576 -
          (((C6414 * C11657 + C27880 * C11870 + C6413 * C2066 +
             C27974 * C2422) *
                C28009 +
            (C6414 * C11583 + C27880 * C11799 + C6413 * C1918 +
             C27974 * C2290) *
                C188) *
               C27763 * C13459 +
           ((C17643 + C17642) * C28009 + (C17529 + C17528) * C188) * C27763 *
               C28002 +
           ((C8785 + C8784) * C28009 + (C8639 + C8638) * C188) * C27763 *
               C28001) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C578 +
                       (C10886 * C98 + C27763 * C104) * C28008) *
                          C28001 +
                      (C11220 + C11221) * C28002 + (C11222 + C11223) * C13459) *
                         C27974 +
                     ((C12922 + C12923) * C28001 + (C12388 + C12389) * C28002 +
                      (C17210 + C17211) * C13459) *
                         C27880) *
                        C951 -
                    ((((C10886 * C12372 + C27763 * C12374) * C28008 +
                       (C10886 * C12371 + C27763 * C12373) * C578) *
                          C13459 +
                      (C12391 + C12390) * C28002 + (C12925 + C12924) * C28001) *
                         C27880 +
                     ((C17211 + C17210) * C13459 + (C12389 + C12388) * C28002 +
                      (C12923 + C12922) * C28001) *
                         C27974) *
                        C952) *
                   C28010) /
                  (p * q * std::sqrt(p + q));
    d2eexy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C28001 +
                      (C11214 * C143 + C11268 * C28010) * C28002 +
                      (C11216 * C143 + C11269 * C28010) * C13459) *
                         C27974 +
                     ((C12978 + C12990) * C28001 + (C12981 + C12982) * C28002 +
                      (C17744 + C17745) * C13459) *
                         C27880) *
                        C28008 * C951 -
                    ((((C10886 * C12441 + C27763 * C12442) * C28010 +
                       (C10886 * C12371 + C27763 * C12373) * C143) *
                          C13459 +
                      (C12987 + C12986) * C28002 + (C12991 + C12983) * C28001) *
                         C27880 +
                     ((C17745 + C17744) * C13459 + (C12982 + C12981) * C28002 +
                      (C12990 + C12978) * C28001) *
                         C27974) *
                        C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C1045 +
            (C10886 * C189 + C27763 * C194) * C951 - C12918 * C1046 -
            C13048 * C952) *
               C28001 +
           (C11214 * C1045 + C11316 * C951 - C12384 * C1046 - C12508 * C952) *
               C28002 +
           (C11216 * C1045 + C11317 * C951 - C17208 * C1046 - C17318 * C952) *
               C13459) *
              C27974 +
          ((C12918 * C1045 + C13048 * C951 - C12920 * C1046 - C13049 * C952) *
               C28001 +
           (C12384 * C1045 + C12508 * C951 - C12386 * C1046 - C12509 * C952) *
               C28002 +
           (C17208 * C1045 + C17318 * C951 -
            (C10886 * C12371 + C27763 * C12373) * C1046 -
            (C10886 * C12499 + C27763 * C12500) * C952) *
               C13459) *
              C27880) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C578 +
                      (C13612 * C98 + C28001 * C239 + C13613 * C586 +
                       C28002 * C722 + C13614 * C1353 + C13459 * C1528) *
                          C28008) *
                         C27974 +
                     ((C17858 + C17859 + C17860) * C578 +
                      (C17861 + C17862 + C17863) * C28008) *
                         C27880) *
                        C27763 * C951 -
                    (((C13614 * C12372 + C13459 * C12562 + C13613 * C3572 +
                       C28002 * C3738 + C13612 * C3005 + C28001 * C3177) *
                          C28008 +
                      (C13614 * C12371 + C13459 * C12561 + C13613 * C3570 +
                       C28002 * C3736 + C13612 * C3000 + C28001 * C3174) *
                          C578) *
                         C27880 +
                     ((C17863 + C17862 + C17861) * C28008 +
                      (C17860 + C17859 + C17858) * C578) *
                         C27974) *
                        C27763 * C952) *
                   C28010) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                       C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                          C143 +
                      (C13612 * C144 + C28001 * C296 + C13613 * C634 +
                       C28002 * C757 + C13614 * C1410 + C13459 * C1599) *
                          C28010) *
                         C27974 +
                     ((C17858 + C17859 + C17860) * C143 +
                      (C17920 + C17921 + C17922) * C28010) *
                         C27880) *
                        C27763 * C28008 * C951 -
                    (((C13614 * C12441 + C13459 * C12613 + C13613 * C3628 +
                       C28002 * C3789 + C13612 * C3062 + C28001 * C3242) *
                          C28010 +
                      (C13614 * C12371 + C13459 * C12561 + C13613 * C3570 +
                       C28002 * C3736 + C13612 * C3000 + C28001 * C3174) *
                          C143) *
                         C27880 +
                     ((C17922 + C17921 + C17920) * C28010 +
                      (C17860 + C17859 + C17858) * C143) *
                         C27974) *
                        C27763 * C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13612 * C89 + C28001 * C234 + C13613 * C582 +
                      C28002 * C718 + C13614 * C1348 + C13459 * C1525) *
                         C1045 +
                     (C13612 * C189 + C28001 * C350 + C13613 * C676 +
                      C28002 * C798 + C13614 * C1466 + C13459 * C1661) *
                         C951 -
                     (C17860 + C17859 + C17858) * C1046 -
                     (C17979 + C17980 + C17981) * C952) *
                        C27974 +
                    ((C17858 + C17859 + C17860) * C1045 +
                     (C17981 + C17980 + C17979) * C951 -
                     (C13614 * C12371 + C13459 * C12561 + C13613 * C3570 +
                      C28002 * C3736 + C13612 * C3000 + C28001 * C3174) *
                         C1046 -
                     (C13614 * C12499 + C13459 * C12664 + C13613 * C3682 +
                      C28002 * C3842 + C13612 * C3118 + C28001 * C3305) *
                         C952) *
                        C27880) *
                   C27763 * C28010 * C28008) /
                  (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C578 +
            (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                C28008) *
               C27763 * C28001 +
           ((C8638 + C8639) * C578 + (C8640 + C8641) * C28008) * C27763 *
               C28002 +
           ((C17528 + C17529) * C578 + (C17530 + C17531) * C28008) * C27763 *
               C13459) *
              C951 -
          (((C6414 * C12372 + C27880 * C12716 + C6413 * C2488 +
             C27974 * C2836) *
                C28008 +
            (C6414 * C12371 + C27880 * C12715 + C6413 * C2484 +
             C27974 * C2832) *
                C578) *
               C27763 * C13459 +
           ((C6414 * C3572 + C27880 * C3896 + C6413 * C2492 + C27974 * C2838) *
                C28008 +
            (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                C578) *
               C27763 * C28002 +
           ((C6414 * C3005 + C27880 * C3374 + C6413 * C960 + C27974 * C1214) *
                C28008 +
            (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                C578) *
               C27763 * C28001) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C143 +
            (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                C28010) *
               C27763 * C28001 +
           ((C8638 + C8639) * C143 + (C8713 + C8712) * C28010) * C27763 *
               C28002 +
           ((C17528 + C17529) * C143 + (C17587 + C17586) * C28010) * C27763 *
               C13459) *
              C28008 * C951 -
          (((C6414 * C12441 + C27880 * C12785 + C6413 * C2550 +
             C27974 * C2890) *
                C28010 +
            (C6414 * C12371 + C27880 * C12715 + C6413 * C2484 +
             C27974 * C2832) *
                C143) *
               C27763 * C13459 +
           ((C6414 * C3628 + C27880 * C3947 + C6413 * C2552 + C27974 * C2892) *
                C28010 +
            (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                C143) *
               C27763 * C28002 +
           ((C6414 * C3062 + C27880 * C3445 + C6413 * C1006 + C27974 * C1252) *
                C28010 +
            (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                C143) *
               C27763 * C28001) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
               C1045 +
           (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
               C951 -
           (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
               C1046 -
           (C6414 * C3118 + C27880 * C3507 + C6413 * C1050 + C27974 * C1287) *
               C952) *
              C27763 * C28001 +
          ((C8638 + C8639) * C1045 + (C8784 + C8785) * C951 -
           (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
               C1046 -
           (C6414 * C3682 + C27880 * C4000 + C6413 * C2608 + C27974 * C2943) *
               C952) *
              C27763 * C28002 +
          ((C17528 + C17529) * C1045 + (C17642 + C17643) * C951 -
           (C6414 * C12371 + C27880 * C12715 + C6413 * C2484 + C27974 * C2832) *
               C1046 -
           (C6414 * C12499 + C27880 * C12845 + C6413 * C2610 + C27974 * C2945) *
               C952) *
              C27763 * C13459) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] += (-std::pow(Pi, 2.5) *
                   (((C10886 * C89 + C27763 * C94) * C87 +
                     (C10886 * C98 + C27763 * C104) * C77 -
                     (C10886 * C90 + C27763 * C95) * C88 -
                     (C10886 * C99 + C27763 * C105) * C78) *
                        C10882 +
                    ((C10886 * C582 + C27763 * C590) * C87 +
                     (C10886 * C586 + C27763 * C594) * C77 -
                     (C10886 * C581 + C27763 * C589) * C88 -
                     (C10886 * C585 + C27763 * C593) * C78) *
                        C10883 +
                    ((C10886 * C1348 + C27763 * C1351) * C87 +
                     (C10886 * C1353 + C27763 * C1357) * C77 -
                     (C10886 * C1349 + C27763 * C1352) * C88 -
                     (C10886 * C1354 + C27763 * C1358) * C78) *
                        C10884 +
                    ((C10886 * C1918 + C27763 * C1922) * C87 +
                     (C10886 * C1920 + C27763 * C1924) * C77 -
                     (C10886 * C1917 + C27763 * C1921) * C88 -
                     (C10886 * C1919 + C27763 * C1923) * C78) *
                        C10885) *
                   C27816 * C28009 * C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                      C9460 * C91 + C9455 * C96) *
                         C87 +
                     (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
                      C9460 * C100 + C9455 * C106) *
                         C77 -
                     (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                      C9458 * C90 + C9453 * C95) *
                         C88 -
                     (C9460 * C101 + C9455 * C107 + C9459 * C100 +
                      C9454 * C106 + C9458 * C99 + C9453 * C105) *
                         C78) *
                        C9456 +
                    ((C9458 * C582 + C9453 * C590 + C9459 * C581 +
                      C9454 * C589 + C9460 * C580 + C9455 * C588) *
                         C87 +
                     (C9458 * C586 + C9453 * C594 + C9459 * C585 +
                      C9454 * C593 + C9460 * C584 + C9455 * C592) *
                         C77 -
                     (C9460 * C579 + C9455 * C587 + C9459 * C580 +
                      C9454 * C588 + C9458 * C581 + C9453 * C589) *
                         C88 -
                     (C9460 * C583 + C9455 * C591 + C9459 * C584 +
                      C9454 * C592 + C9458 * C585 + C9453 * C593) *
                         C78) *
                        C27854) *
                   C27816 * C28009 * C28010) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C87 +
                      (C10886 * C98 + C27763 * C104) * C77 -
                      (C10886 * C90 + C27763 * C95) * C88 -
                      (C10886 * C99 + C27763 * C105) * C78) *
                         C9456 +
                     (C11214 * C87 + C11215 * C77 -
                      (C10886 * C581 + C27763 * C589) * C88 -
                      (C10886 * C585 + C27763 * C593) * C78) *
                         C27854) *
                        C2997 +
                    (((C10886 * C956 + C27763 * C964) * C87 +
                      (C10886 * C960 + C27763 * C968) * C77 -
                      (C10886 * C955 + C27763 * C963) * C88 -
                      (C10886 * C959 + C27763 * C967) * C78) *
                         C9456 +
                     ((C10886 * C2486 + C27763 * C2494) * C87 +
                      (C10886 * C2492 + C27763 * C2498) * C77 -
                      (C10886 * C2485 + C27763 * C2493) * C88 -
                      (C10886 * C2491 + C27763 * C2497) * C78) *
                         C27854) *
                        C2998 +
                    (((C10886 * C3000 + C27763 * C3003) * C87 +
                      (C10886 * C3005 + C27763 * C3009) * C77 -
                      (C10886 * C3001 + C27763 * C3004) * C88 -
                      (C10886 * C3006 + C27763 * C3010) * C78) *
                         C9456 +
                     ((C10886 * C3570 + C27763 * C3574) * C87 +
                      (C10886 * C3572 + C27763 * C3576) * C77 -
                      (C10886 * C3569 + C27763 * C3573) * C88 -
                      (C10886 * C3571 + C27763 * C3575) * C78) *
                         C27854) *
                        C2999) *
                   C28009 * C28010) /
                      (p * q * std::sqrt(p + q));
    d2eexy[21] += (-std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C143 +
                      (C10886 * C144 + C27763 * C149) * C28010) *
                         C10882 +
                     ((C10886 * C582 + C27763 * C590) * C143 +
                      (C10886 * C634 + C27763 * C638) * C28010) *
                         C10883 +
                     ((C10886 * C1348 + C27763 * C1351) * C143 +
                      (C10886 * C1410 + C27763 * C1413) * C28010) *
                         C10884 +
                     ((C10886 * C1918 + C27763 * C1922) * C143 +
                      (C10886 * C2000 + C27763 * C2002) * C28010) *
                         C10885) *
                        C27816 * C77 -
                    (((C10886 * C1999 + C27763 * C2001) * C28010 +
                      (C10886 * C1917 + C27763 * C1921) * C143) *
                         C10885 +
                     ((C10886 * C1411 + C27763 * C1414) * C28010 +
                      (C10886 * C1349 + C27763 * C1352) * C143) *
                         C10884 +
                     ((C10886 * C633 + C27763 * C637) * C28010 +
                      (C10886 * C581 + C27763 * C589) * C143) *
                         C10883 +
                     ((C10886 * C145 + C27763 * C150) * C28010 +
                      (C10886 * C90 + C27763 * C95) * C143) *
                         C10882) *
                        C27816 * C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C9456 +
                     ((C9458 * C582 + C9453 * C590 + C9459 * C581 +
                       C9454 * C589 + C9460 * C580 + C9455 * C588) *
                          C143 +
                      (C9458 * C634 + C9453 * C638 + C9459 * C633 +
                       C9454 * C637 + C9460 * C632 + C9455 * C636) *
                          C28010) *
                         C27854) *
                        C27816 * C77 -
                    (((C9460 * C631 + C9455 * C635 + C9459 * C632 +
                       C9454 * C636 + C9458 * C633 + C9453 * C637) *
                          C28010 +
                      (C9460 * C579 + C9455 * C587 + C9459 * C580 +
                       C9454 * C588 + C9458 * C581 + C9453 * C589) *
                          C143) *
                         C27854 +
                     ((C9460 * C147 + C9455 * C152 + C9459 * C146 +
                       C9454 * C151 + C9458 * C145 + C9453 * C150) *
                          C28010 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C143) *
                         C9456) *
                        C27816 * C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C9456 +
                      (C11214 * C143 + C11268 * C28010) * C27854) *
                         C2997 +
                     (((C10886 * C956 + C27763 * C964) * C143 +
                       (C10886 * C1006 + C27763 * C1010) * C28010) *
                          C9456 +
                      ((C10886 * C2486 + C27763 * C2494) * C143 +
                       (C10886 * C2552 + C27763 * C2556) * C28010) *
                          C27854) *
                         C2998 +
                     (((C10886 * C3000 + C27763 * C3003) * C143 +
                       (C10886 * C3062 + C27763 * C3065) * C28010) *
                          C9456 +
                      ((C10886 * C3570 + C27763 * C3574) * C143 +
                       (C10886 * C3628 + C27763 * C3630) * C28010) *
                          C27854) *
                         C2999) *
                        C77 -
                    ((((C10886 * C3627 + C27763 * C3629) * C28010 +
                       (C10886 * C3569 + C27763 * C3573) * C143) *
                          C27854 +
                      ((C10886 * C3063 + C27763 * C3066) * C28010 +
                       (C10886 * C3001 + C27763 * C3004) * C143) *
                          C9456) *
                         C2999 +
                     (((C10886 * C2551 + C27763 * C2555) * C28010 +
                       (C10886 * C2485 + C27763 * C2493) * C143) *
                          C27854 +
                      ((C10886 * C1005 + C27763 * C1009) * C28010 +
                       (C10886 * C955 + C27763 * C963) * C143) *
                          C9456) *
                         C2998 +
                     (((C10886 * C633 + C27763 * C637) * C28010 +
                       (C10886 * C581 + C27763 * C589) * C143) *
                          C27854 +
                      ((C10886 * C145 + C27763 * C150) * C28010 +
                       (C10886 * C90 + C27763 * C95) * C143) *
                          C9456) *
                         C2997) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (-std::pow(Pi, 2.5) * ((((C10886 * C89 + C27763 * C94) * C188 +
                                 (C10886 * C189 + C27763 * C194) * C28009) *
                                    C10882 +
                                ((C10886 * C582 + C27763 * C590) * C188 +
                                 (C10886 * C676 + C27763 * C680) * C28009) *
                                    C10883 +
                                ((C10886 * C1348 + C27763 * C1351) * C188 +
                                 (C10886 * C1466 + C27763 * C1469) * C28009) *
                                    C10884 +
                                ((C10886 * C1918 + C27763 * C1922) * C188 +
                                 (C10886 * C2066 + C27763 * C2068) * C28009) *
                                    C10885) *
                                   C27816 * C28010 * C77 -
                               (((C10886 * C2065 + C27763 * C2067) * C28009 +
                                 (C10886 * C1917 + C27763 * C1921) * C188) *
                                    C10885 +
                                ((C10886 * C1467 + C27763 * C1470) * C28009 +
                                 (C10886 * C1349 + C27763 * C1352) * C188) *
                                    C10884 +
                                ((C10886 * C675 + C27763 * C679) * C28009 +
                                 (C10886 * C581 + C27763 * C589) * C188) *
                                    C10883 +
                                ((C10886 * C190 + C27763 * C195) * C28009 +
                                 (C10886 * C90 + C27763 * C95) * C188) *
                                    C10882) *
                                   C27816 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9458 * C89 + C9453 * C94 + C9459 * C90 +
                                 C9454 * C95 + C9460 * C91 + C9455 * C96) *
                                    C188 +
                                (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                                 C9454 * C195 + C9460 * C191 + C9455 * C196) *
                                    C28009) *
                                   C9456 +
                               ((C9458 * C582 + C9453 * C590 + C9459 * C581 +
                                 C9454 * C589 + C9460 * C580 + C9455 * C588) *
                                    C188 +
                                (C9458 * C676 + C9453 * C680 + C9459 * C675 +
                                 C9454 * C679 + C9460 * C674 + C9455 * C678) *
                                    C28009) *
                                   C27854) *
                                  C27816 * C28010 * C77 -
                              (((C9460 * C673 + C9455 * C677 + C9459 * C674 +
                                 C9454 * C678 + C9458 * C675 + C9453 * C679) *
                                    C28009 +
                                (C9460 * C579 + C9455 * C587 + C9459 * C580 +
                                 C9454 * C588 + C9458 * C581 + C9453 * C589) *
                                    C188) *
                                   C27854 +
                               ((C9460 * C192 + C9455 * C197 + C9459 * C191 +
                                 C9454 * C196 + C9458 * C190 + C9453 * C195) *
                                    C28009 +
                                (C9460 * C92 + C9455 * C97 + C9459 * C91 +
                                 C9454 * C96 + C9458 * C90 + C9453 * C95) *
                                    C188) *
                                   C9456) *
                                  C27816 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C188 +
             (C10886 * C189 + C27763 * C194) * C28009) *
                C9456 +
            (C11307 + C11319) * C27854) *
               C2997 +
           (((C10886 * C956 + C27763 * C964) * C188 +
             (C10886 * C1050 + C27763 * C1054) * C28009) *
                C9456 +
            ((C10886 * C2486 + C27763 * C2494) * C188 +
             (C10886 * C2608 + C27763 * C2612) * C28009) *
                C27854) *
               C2998 +
           (((C10886 * C3000 + C27763 * C3003) * C188 +
             (C10886 * C3118 + C27763 * C3121) * C28009) *
                C9456 +
            ((C10886 * C3570 + C27763 * C3574) * C188 +
             (C10886 * C3682 + C27763 * C3684) * C28009) *
                C27854) *
               C2999) *
              C28010 * C77 -
          ((((C10886 * C3681 + C27763 * C3683) * C28009 +
             (C10886 * C3569 + C27763 * C3573) * C188) *
                C27854 +
            ((C10886 * C3119 + C27763 * C3122) * C28009 +
             (C10886 * C3001 + C27763 * C3004) * C188) *
                C9456) *
               C2999 +
           (((C10886 * C2607 + C27763 * C2611) * C28009 +
             (C10886 * C2485 + C27763 * C2493) * C188) *
                C27854 +
            ((C10886 * C1049 + C27763 * C1053) * C28009 +
             (C10886 * C955 + C27763 * C963) * C188) *
                C9456) *
               C2998 +
           (((C10886 * C675 + C27763 * C679) * C28009 +
             (C10886 * C581 + C27763 * C589) * C188) *
                C27854 +
            ((C10886 * C190 + C27763 * C195) * C28009 +
             (C10886 * C90 + C27763 * C95) * C188) *
                C9456) *
               C2997) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (-std::pow(Pi, 2.5) *
         ((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
           C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
              C87 +
          (C10989 * C98 + C10882 * C239 + C10990 * C586 + C10883 * C722 +
           C10991 * C1353 + C10884 * C1528 + C10992 * C1920 + C10885 * C2134) *
              C77 -
          (C10992 * C1917 + C10885 * C2131 + C10991 * C1349 + C10884 * C1526 +
           C10990 * C581 + C10883 * C717 + C10989 * C90 + C10882 * C235) *
              C88 -
          (C10992 * C1919 + C10885 * C2133 + C10991 * C1354 + C10884 * C1529 +
           C10990 * C585 + C10883 * C721 + C10989 * C99 + C10882 * C240) *
              C78) *
         C27816 * C27763 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C87 +
           (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) * C77 -
           (C9630 + C9631) * C88 - (C9632 + C9633) * C78) *
              C27816 * C9453 +
          ((C9631 + C9630) * C87 + (C9633 + C9632) * C77 -
           (C9634 + C9635) * C88 - (C9636 + C9637) * C78) *
              C27816 * C9454 +
          ((C9635 + C9634) * C87 + (C9637 + C9636) * C77 -
           (C9612 * C579 + C27854 * C715 + C9611 * C92 + C9456 * C237) * C88 -
           (C9612 * C583 + C27854 * C719 + C9611 * C101 + C9456 * C242) * C78) *
              C27816 * C9455) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C87 +
           (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) * C77 -
           (C9630 + C9631) * C88 - (C9632 + C9633) * C78) *
              C2997 +
          ((C9611 * C956 + C9456 * C1092 + C9612 * C2486 + C27854 * C2668) *
               C87 +
           (C9611 * C960 + C9456 * C1096 + C9612 * C2492 + C27854 * C2672) *
               C77 -
           (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
               C88 -
           (C9612 * C2491 + C27854 * C2670 + C9611 * C959 + C9456 * C1095) *
               C78) *
              C2998 +
          ((C9611 * C3000 + C9456 * C3174 + C9612 * C3570 + C27854 * C3736) *
               C87 +
           (C9611 * C3005 + C9456 * C3177 + C9612 * C3572 + C27854 * C3738) *
               C77 -
           (C9612 * C3569 + C27854 * C3735 + C9611 * C3001 + C9456 * C3175) *
               C88 -
           (C9612 * C3571 + C27854 * C3737 + C9611 * C3006 + C9456 * C3178) *
               C78) *
              C2999) *
         C27763 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C143 +
           (C10989 * C144 + C10882 * C296 + C10990 * C634 + C10883 * C757 +
            C10991 * C1410 + C10884 * C1599 + C10992 * C2000 + C10885 * C2185) *
               C28010) *
              C27816 * C27763 * C77 -
          ((C10992 * C1999 + C10885 * C2186 + C10991 * C1411 + C10884 * C1600 +
            C10990 * C633 + C10883 * C758 + C10989 * C145 + C10882 * C297) *
               C28010 +
           (C10992 * C1917 + C10885 * C2131 + C10991 * C1349 + C10884 * C1526 +
            C10990 * C581 + C10883 * C717 + C10989 * C90 + C10882 * C235) *
               C143) *
              C27816 * C27763 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C143 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C28010) *
               C27816 * C9453 +
           ((C9631 + C9630) * C143 + (C9696 + C9697) * C28010) * C27816 *
               C9454 +
           ((C9635 + C9634) * C143 + (C9698 + C9699) * C28010) * C27816 *
               C9455) *
              C77 -
          (((C9612 * C631 + C27854 * C760 + C9611 * C147 + C9456 * C299) *
                C28010 +
            (C9612 * C579 + C27854 * C715 + C9611 * C92 + C9456 * C237) *
                C143) *
               C27816 * C9455 +
           ((C9699 + C9698) * C28010 + (C9634 + C9635) * C143) * C27816 *
               C9454 +
           ((C9697 + C9696) * C28010 + (C9630 + C9631) * C143) * C27816 *
               C9453) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C143 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C28010) *
               C2997 +
           ((C9611 * C956 + C9456 * C1092 + C9612 * C2486 + C27854 * C2668) *
                C143 +
            (C9611 * C1006 + C9456 * C1134 + C9612 * C2552 + C27854 * C2726) *
                C28010) *
               C2998 +
           ((C9611 * C3000 + C9456 * C3174 + C9612 * C3570 + C27854 * C3736) *
                C143 +
            (C9611 * C3062 + C9456 * C3242 + C9612 * C3628 + C27854 * C3789) *
                C28010) *
               C2999) *
              C27763 * C77 -
          (((C9612 * C3627 + C27854 * C3790 + C9611 * C3063 + C9456 * C3243) *
                C28010 +
            (C9612 * C3569 + C27854 * C3735 + C9611 * C3001 + C9456 * C3175) *
                C143) *
               C2999 +
           ((C9612 * C2551 + C27854 * C2724 + C9611 * C1005 + C9456 * C1133) *
                C28010 +
            (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
                C143) *
               C2998 +
           ((C9697 + C9696) * C28010 + (C9630 + C9631) * C143) * C2997) *
              C27763 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (-std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C188 +
           (C10989 * C189 + C10882 * C350 + C10990 * C676 + C10883 * C798 +
            C10991 * C1466 + C10884 * C1661 + C10992 * C2066 + C10885 * C2238) *
               C28009) *
              C27816 * C27763 * C28010 * C77 -
          ((C10992 * C2065 + C10885 * C2237 + C10991 * C1467 + C10884 * C1662 +
            C10990 * C675 + C10883 * C797 + C10989 * C190 + C10882 * C351) *
               C28009 +
           (C10992 * C1917 + C10885 * C2131 + C10991 * C1349 + C10884 * C1526 +
            C10990 * C581 + C10883 * C717 + C10989 * C90 + C10882 * C235) *
               C188) *
              C27816 * C27763 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C188 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C28009) *
               C27816 * C9453 +
           ((C9631 + C9630) * C188 + (C9758 + C9759) * C28009) * C27816 *
               C9454 +
           ((C9635 + C9634) * C188 + (C9760 + C9761) * C28009) * C27816 *
               C9455) *
              C28010 * C77 -
          (((C9612 * C673 + C27854 * C795 + C9611 * C192 + C9456 * C353) *
                C28009 +
            (C9612 * C579 + C27854 * C715 + C9611 * C92 + C9456 * C237) *
                C188) *
               C27816 * C9455 +
           ((C9761 + C9760) * C28009 + (C9634 + C9635) * C188) * C27816 *
               C9454 +
           ((C9759 + C9758) * C28009 + (C9630 + C9631) * C188) * C27816 *
               C9453) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C188 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C28009) *
               C2997 +
           ((C9611 * C956 + C9456 * C1092 + C9612 * C2486 + C27854 * C2668) *
                C188 +
            (C9611 * C1050 + C9456 * C1169 + C9612 * C2608 + C27854 * C2778) *
                C28009) *
               C2998 +
           ((C9611 * C3000 + C9456 * C3174 + C9612 * C3570 + C27854 * C3736) *
                C188 +
            (C9611 * C3118 + C9456 * C3305 + C9612 * C3682 + C27854 * C3842) *
                C28009) *
               C2999) *
              C27763 * C28010 * C77 -
          (((C9612 * C3681 + C27854 * C3841 + C9611 * C3119 + C9456 * C3306) *
                C28009 +
            (C9612 * C3569 + C27854 * C3735 + C9611 * C3001 + C9456 * C3175) *
                C188) *
               C2999 +
           ((C9612 * C2607 + C27854 * C2780 + C9611 * C1049 + C9456 * C1170) *
                C28009 +
            (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
                C188) *
               C2998 +
           ((C9759 + C9758) * C28009 + (C9630 + C9631) * C188) * C2997) *
              C27763 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (-std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C87 +
           (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
              C27763 * C10882 +
          (C2306 * C87 + C2307 * C77 - C1738 * C88 - C1739 * C78) * C27763 *
              C10883 +
          (C2308 * C87 + C2309 * C77 - C1740 * C88 - C1741 * C78) * C27763 *
              C10884 +
          ((C404 * C1918 + C27816 * C2290) * C87 +
           (C404 * C1920 + C27816 * C2292) * C77 -
           (C404 * C1917 + C27816 * C2289) * C88 -
           (C404 * C1919 + C27816 * C2291) * C78) *
              C27763 * C10885) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C87 +
            (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
               C9453 +
           (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C9454 +
           (C430 * C87 + C431 * C77 - C432 * C88 - C433 * C78) * C9455) *
              C9456 +
          ((C2306 * C87 + C2307 * C77 - C1738 * C88 - C1739 * C78) * C9453 +
           (C1738 * C87 + C1739 * C77 - C4980 * C88 - C4981 * C78) * C9454 +
           (C4980 * C87 + C4981 * C77 - (C404 * C579 + C27816 * C833) * C88 -
            (C404 * C583 + C27816 * C837) * C78) *
               C9455) *
              C27854) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
            C3370 * C3000 + C2999 * C3371) *
               C87 +
           (C3368 * C98 + C2997 * C410 + C3369 * C960 + C2998 * C1214 +
            C3370 * C3005 + C2999 * C3374) *
               C77 -
           (C3390 + C3391 + C3392) * C88 - (C3393 + C3394 + C3395) * C78) *
              C27763 * C9456 +
          ((C3368 * C582 + C2997 * C836 + C3369 * C2486 + C2998 * C2834 +
            C3370 * C3570 + C2999 * C3894) *
               C87 +
           (C3368 * C586 + C2997 * C840 + C3369 * C2492 + C2998 * C2838 +
            C3370 * C3572 + C2999 * C3896) *
               C77 -
           (C3370 * C3569 + C2999 * C3893 + C3369 * C2485 + C2998 * C2833 +
            C3368 * C581 + C2997 * C835) *
               C88 -
           (C3370 * C3571 + C2999 * C3895 + C3369 * C2491 + C2998 * C2837 +
            C3368 * C585 + C2997 * C839) *
               C78) *
              C27763 * C27854) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (-std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C143 +
            (C404 * C144 + C27816 * C467) * C28010) *
               C27763 * C10882 +
           (C2306 * C143 + C2370 * C28010) * C27763 * C10883 +
           (C2308 * C143 + C2371 * C28010) * C27763 * C10884 +
           ((C404 * C1918 + C27816 * C2290) * C143 +
            (C404 * C2000 + C27816 * C2363) * C28010) *
               C27763 * C10885) *
              C77 -
          (((C404 * C1999 + C27816 * C2364) * C28010 +
            (C404 * C1917 + C27816 * C2289) * C143) *
               C27763 * C10885 +
           (C1804 + C1798) * C27763 * C10884 +
           (C1803 + C1795) * C27763 * C10883 +
           (C485 + C473) * C27763 * C10882) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C143 +
             (C404 * C144 + C27816 * C467) * C28010) *
                C9453 +
            (C473 + C485) * C9454 + (C476 + C486) * C9455) *
               C9456 +
           ((C2306 * C143 + C2370 * C28010) * C9453 + (C1795 + C1803) * C9454 +
            (C5032 + C5036) * C9455) *
               C27854) *
              C77 -
          ((((C404 * C631 + C27816 * C878) * C28010 +
             (C404 * C579 + C27816 * C833) * C143) *
                C9455 +
            (C5036 + C5032) * C9454 + (C1803 + C1795) * C9453) *
               C27854 +
           ((C487 + C479) * C9455 + (C486 + C476) * C9454 +
            (C485 + C473) * C9453) *
               C9456) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C143 +
            (C3368 * C144 + C2997 * C467 + C3369 * C1006 + C2998 * C1252 +
             C3370 * C3062 + C2999 * C3445) *
                C28010) *
               C27763 * C9456 +
           ((C3368 * C582 + C2997 * C836 + C3369 * C2486 + C2998 * C2834 +
             C3370 * C3570 + C2999 * C3894) *
                C143 +
            (C3368 * C634 + C2997 * C875 + C3369 * C2552 + C2998 * C2892 +
             C3370 * C3628 + C2999 * C3947) *
                C28010) *
               C27763 * C27854) *
              C77 -
          (((C3370 * C3627 + C2999 * C3948 + C3369 * C2551 + C2998 * C2891 +
             C3368 * C633 + C2997 * C876) *
                C28010 +
            (C3370 * C3569 + C2999 * C3893 + C3369 * C2485 + C2998 * C2833 +
             C3368 * C581 + C2997 * C835) *
                C143) *
               C27763 * C27854 +
           ((C3457 + C3456 + C3455) * C28010 + (C3390 + C3391 + C3392) * C143) *
               C27763 * C9456) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (-std::pow(Pi, 2.5) * ((((C404 * C89 + C27816 * C405) * C188 +
                                 (C404 * C189 + C27816 * C521) * C28009) *
                                    C27763 * C10882 +
                                (C2424 + C2432) * C27763 * C10883 +
                                (C2427 + C2433) * C27763 * C10884 +
                                ((C404 * C1918 + C27816 * C2290) * C188 +
                                 (C404 * C2066 + C27816 * C2422) * C28009) *
                                    C27763 * C10885) *
                                   C28010 * C77 -
                               (((C404 * C2065 + C27816 * C2421) * C28009 +
                                 (C404 * C1917 + C27816 * C2289) * C188) *
                                    C27763 * C10885 +
                                (C1867 + C1861) * C27763 * C10884 +
                                (C1866 + C1858) * C27763 * C10883 +
                                (C539 + C527) * C27763 * C10882) *
                                   C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C188 +
             (C404 * C189 + C27816 * C521) * C28009) *
                C9453 +
            (C527 + C539) * C9454 + (C530 + C540) * C9455) *
               C9456 +
           ((C2424 + C2432) * C9453 + (C1858 + C1866) * C9454 +
            (C5087 + C5091) * C9455) *
               C27854) *
              C28010 * C77 -
          ((((C404 * C673 + C27816 * C913) * C28009 +
             (C404 * C579 + C27816 * C833) * C188) *
                C9455 +
            (C5091 + C5087) * C9454 + (C1866 + C1858) * C9453) *
               C27854 +
           ((C541 + C533) * C9455 + (C540 + C530) * C9454 +
            (C539 + C527) * C9453) *
               C9456) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C188 +
            (C3368 * C189 + C2997 * C521 + C3369 * C1050 + C2998 * C1287 +
             C3370 * C3118 + C2999 * C3507) *
                C28009) *
               C27763 * C9456 +
           ((C3368 * C582 + C2997 * C836 + C3369 * C2486 + C2998 * C2834 +
             C3370 * C3570 + C2999 * C3894) *
                C188 +
            (C3368 * C676 + C2997 * C916 + C3369 * C2608 + C2998 * C2943 +
             C3370 * C3682 + C2999 * C4000) *
                C28009) *
               C27763 * C27854) *
              C28010 * C77 -
          (((C3370 * C3681 + C2999 * C3999 + C3369 * C2607 + C2998 * C2944 +
             C3368 * C675 + C2997 * C915) *
                C28009 +
            (C3370 * C3569 + C2999 * C3893 + C3369 * C2485 + C2998 * C2833 +
             C3368 * C581 + C2997 * C835) *
                C188) *
               C27763 * C27854 +
           ((C3519 + C3518 + C3517) * C28009 + (C3390 + C3391 + C3392) * C188) *
               C27763 * C9456) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C578 +
            (C10886 * C98 + C27763 * C104) * C28008) *
               C10882 +
           (C11220 + C11221) * C10883 + (C11222 + C11223) * C10884 +
           (C11224 + C11225) * C10885) *
              C27816 * C28009 * C576 -
          (((C10886 * C11198 + C27763 * C11200) * C28008 +
            (C10886 * C11197 + C27763 * C11199) * C578) *
               C10885 +
           (C11225 + C11224) * C10884 + (C11223 + C11222) * C10883 +
           (C11221 + C11220) * C10882) *
              C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C578 +
            (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
             C9460 * C100 + C9455 * C106) *
                C28008) *
               C9456 +
           ((C9974 + C9975 + C9976) * C578 + (C9977 + C9978 + C9979) * C28008) *
               C27854) *
              C27816 * C28009 * C576 -
          (((C9460 * C1356 + C9455 * C1359 + C9459 * C1354 + C9454 * C1358 +
             C9458 * C1353 + C9453 * C1357) *
                C28008 +
            (C9460 * C1350 + C9455 * C1355 + C9459 * C1349 + C9454 * C1352 +
             C9458 * C1348 + C9453 * C1351) *
                C578) *
               C27854 +
           ((C9979 + C9978 + C9977) * C28008 + (C9976 + C9975 + C9974) * C578) *
               C9456) *
              C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C578 +
             (C10886 * C98 + C27763 * C104) * C28008) *
                C9456 +
            (C11220 + C11221) * C27854) *
               C2997 +
           (((C10886 * C956 + C27763 * C964) * C578 +
             (C10886 * C960 + C27763 * C968) * C28008) *
                C9456 +
            (C12388 + C12389) * C27854) *
               C2998 +
           (((C10886 * C3000 + C27763 * C3003) * C578 +
             (C10886 * C3005 + C27763 * C3009) * C28008) *
                C9456 +
            (C12390 + C12391) * C27854) *
               C2999) *
              C28009 * C576 -
          ((((C10886 * C12372 + C27763 * C12374) * C28008 +
             (C10886 * C12371 + C27763 * C12373) * C578) *
                C27854 +
            (C12391 + C12390) * C9456) *
               C2999 +
           (((C10886 * C2488 + C27763 * C2496) * C28008 +
             (C10886 * C2484 + C27763 * C2490) * C578) *
                C27854 +
            (C12389 + C12388) * C9456) *
               C2998 +
           ((C11223 + C11222) * C27854 + (C11221 + C11220) * C9456) * C2997) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C629 +
           (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
           C11268 * C577) *
              C10882 +
          (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
              C10883 +
          (C11216 * C629 + C11269 * C576 - C11218 * C630 - C11270 * C577) *
              C10884 +
          (C11218 * C629 + C11270 * C576 -
           (C10886 * C11197 + C27763 * C11199) * C630 -
           (C10886 * C11259 + C27763 * C11260) * C577) *
              C10885) *
         C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C629 +
           (C9458 * C144 + C9453 * C149 + C9459 * C145 + C9454 * C150 +
            C9460 * C146 + C9455 * C151) *
               C576 -
           (C9976 + C9975 + C9974) * C630 - (C10036 + C10037 + C10038) * C577) *
              C9456 +
          ((C9974 + C9975 + C9976) * C629 + (C10038 + C10037 + C10036) * C576 -
           (C9460 * C1350 + C9455 * C1355 + C9459 * C1349 + C9454 * C1352 +
            C9458 * C1348 + C9453 * C1351) *
               C630 -
           (C9460 * C1412 + C9455 * C1415 + C9459 * C1411 + C9454 * C1414 +
            C9458 * C1410 + C9453 * C1413) *
               C577) *
              C27854) *
         C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C629 +
            (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
            C11268 * C577) *
               C9456 +
           (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
               C27854) *
              C2997 +
          (((C10886 * C956 + C27763 * C964) * C629 +
            (C10886 * C1006 + C27763 * C1010) * C576 - C12384 * C630 -
            C12448 * C577) *
               C9456 +
           (C12384 * C629 + C12448 * C576 -
            (C10886 * C2484 + C27763 * C2490) * C630 -
            (C10886 * C2550 + C27763 * C2554) * C577) *
               C27854) *
              C2998 +
          (((C10886 * C3000 + C27763 * C3003) * C629 +
            (C10886 * C3062 + C27763 * C3065) * C576 - C12386 * C630 -
            C12449 * C577) *
               C9456 +
           (C12386 * C629 + C12449 * C576 -
            (C10886 * C12371 + C27763 * C12373) * C630 -
            (C10886 * C12441 + C27763 * C12442) * C577) *
               C27854) *
              C2999) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C188 +
            (C10886 * C189 + C27763 * C194) * C28009) *
               C10882 +
           (C11307 + C11319) * C10883 + (C11310 + C11320) * C10884 +
           (C11313 + C11321) * C10885) *
              C27816 * C576 -
          (((C10886 * C11304 + C27763 * C11305) * C28009 +
            (C10886 * C11197 + C27763 * C11199) * C188) *
               C10885 +
           (C11321 + C11313) * C10884 + (C11320 + C11310) * C10883 +
           (C11319 + C11307) * C10882) *
              C27816 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C188 +
            (C9458 * C189 + C9453 * C194 + C9459 * C190 + C9454 * C195 +
             C9460 * C191 + C9455 * C196) *
                C28009) *
               C9456 +
           ((C9974 + C9975 + C9976) * C188 +
            (C10095 + C10096 + C10097) * C28009) *
               C27854) *
              C27816 * C576 -
          (((C9460 * C1468 + C9455 * C1471 + C9459 * C1467 + C9454 * C1470 +
             C9458 * C1466 + C9453 * C1469) *
                C28009 +
            (C9460 * C1350 + C9455 * C1355 + C9459 * C1349 + C9454 * C1352 +
             C9458 * C1348 + C9453 * C1351) *
                C188) *
               C27854 +
           ((C10097 + C10096 + C10095) * C28009 +
            (C9976 + C9975 + C9974) * C188) *
               C9456) *
              C27816 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C188 +
             (C10886 * C189 + C27763 * C194) * C28009) *
                C9456 +
            (C11307 + C11319) * C27854) *
               C2997 +
           (((C10886 * C956 + C27763 * C964) * C188 +
             (C10886 * C1050 + C27763 * C1054) * C28009) *
                C9456 +
            (C12502 + C12510) * C27854) *
               C2998 +
           (((C10886 * C3000 + C27763 * C3003) * C188 +
             (C10886 * C3118 + C27763 * C3121) * C28009) *
                C9456 +
            (C12505 + C12511) * C27854) *
               C2999) *
              C576 -
          ((((C10886 * C12499 + C27763 * C12500) * C28009 +
             (C10886 * C12371 + C27763 * C12373) * C188) *
                C27854 +
            (C12511 + C12505) * C9456) *
               C2999 +
           (((C10886 * C2610 + C27763 * C2614) * C28009 +
             (C10886 * C2484 + C27763 * C2490) * C188) *
                C27854 +
            (C12510 + C12502) * C9456) *
               C2998 +
           ((C11320 + C11310) * C27854 + (C11319 + C11307) * C9456) * C2997) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C578 +
           (C10989 * C98 + C10882 * C239 + C10990 * C586 + C10883 * C722 +
            C10991 * C1353 + C10884 * C1528 + C10992 * C1920 + C10885 * C2134) *
               C28008) *
              C27816 * C27763 * C28009 * C576 -
          ((C10992 * C11198 + C10885 * C11356 + C10991 * C1920 +
            C10884 * C2134 + C10990 * C1353 + C10883 * C1528 + C10989 * C586 +
            C10882 * C722) *
               C28008 +
           (C10992 * C11197 + C10885 * C11355 + C10991 * C1918 +
            C10884 * C2132 + C10990 * C1348 + C10883 * C1525 + C10989 * C582 +
            C10882 * C718) *
               C578) *
              C27816 * C27763 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C578 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                C28008) *
               C27816 * C9453 +
           ((C9631 + C9630) * C578 + (C9633 + C9632) * C28008) * C27816 *
               C9454 +
           ((C9635 + C9634) * C578 + (C9637 + C9636) * C28008) * C27816 *
               C9455) *
              C28009 * C576 -
          (((C9612 * C1356 + C27854 * C1530 + C9611 * C584 + C9456 * C720) *
                C28008 +
            (C9612 * C1350 + C27854 * C1527 + C9611 * C580 + C9456 * C716) *
                C578) *
               C27816 * C9455 +
           ((C9612 * C1354 + C27854 * C1529 + C9611 * C585 + C9456 * C721) *
                C28008 +
            (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                C578) *
               C27816 * C9454 +
           ((C9612 * C1353 + C27854 * C1528 + C9611 * C586 + C9456 * C722) *
                C28008 +
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C578) *
               C27816 * C9453) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C578 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                C28008) *
               C2997 +
           ((C9611 * C956 + C9456 * C1092 + C9612 * C2486 + C27854 * C2668) *
                C578 +
            (C9611 * C960 + C9456 * C1096 + C9612 * C2492 + C27854 * C2672) *
                C28008) *
               C2998 +
           ((C9611 * C3000 + C9456 * C3174 + C9612 * C3570 + C27854 * C3736) *
                C578 +
            (C9611 * C3005 + C9456 * C3177 + C9612 * C3572 + C27854 * C3738) *
                C28008) *
               C2999) *
              C27763 * C28009 * C576 -
          (((C9612 * C12372 + C27854 * C12562 + C9611 * C3572 + C9456 * C3738) *
                C28008 +
            (C9612 * C12371 + C27854 * C12561 + C9611 * C3570 + C9456 * C3736) *
                C578) *
               C2999 +
           ((C9612 * C2488 + C27854 * C2671 + C9611 * C2492 + C9456 * C2672) *
                C28008 +
            (C9612 * C2484 + C27854 * C2667 + C9611 * C2486 + C9456 * C2668) *
                C578) *
               C2998 +
           ((C9612 * C1353 + C27854 * C1528 + C9611 * C586 + C9456 * C722) *
                C28008 +
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C578) *
               C2997) *
              C27763 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
           C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
              C629 +
          (C10989 * C144 + C10882 * C296 + C10990 * C634 + C10883 * C757 +
           C10991 * C1410 + C10884 * C1599 + C10992 * C2000 + C10885 * C2185) *
              C576 -
          (C10992 * C11197 + C10885 * C11355 + C10991 * C1918 + C10884 * C2132 +
           C10990 * C1348 + C10883 * C1525 + C10989 * C582 + C10882 * C718) *
              C630 -
          (C10992 * C11259 + C10885 * C11391 + C10991 * C2000 + C10884 * C2185 +
           C10990 * C1410 + C10883 * C1599 + C10989 * C634 + C10882 * C757) *
              C577) *
         C27816 * C27763 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C629 +
           (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) * C576 -
           (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
               C630 -
           (C9612 * C1410 + C27854 * C1599 + C9611 * C634 + C9456 * C757) *
               C577) *
              C27816 * C9453 +
          ((C9631 + C9630) * C629 + (C9696 + C9697) * C576 -
           (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
               C630 -
           (C9612 * C1411 + C27854 * C1600 + C9611 * C633 + C9456 * C758) *
               C577) *
              C27816 * C9454 +
          ((C9635 + C9634) * C629 + (C9698 + C9699) * C576 -
           (C9612 * C1350 + C27854 * C1527 + C9611 * C580 + C9456 * C716) *
               C630 -
           (C9612 * C1412 + C27854 * C1601 + C9611 * C632 + C9456 * C759) *
               C577) *
              C27816 * C9455) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C629 +
           (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) * C576 -
           (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
               C630 -
           (C9612 * C1410 + C27854 * C1599 + C9611 * C634 + C9456 * C757) *
               C577) *
              C2997 +
          ((C9611 * C956 + C9456 * C1092 + C9612 * C2486 + C27854 * C2668) *
               C629 +
           (C9611 * C1006 + C9456 * C1134 + C9612 * C2552 + C27854 * C2726) *
               C576 -
           (C9612 * C2484 + C27854 * C2667 + C9611 * C2486 + C9456 * C2668) *
               C630 -
           (C9612 * C2550 + C27854 * C2725 + C9611 * C2552 + C9456 * C2726) *
               C577) *
              C2998 +
          ((C9611 * C3000 + C9456 * C3174 + C9612 * C3570 + C27854 * C3736) *
               C629 +
           (C9611 * C3062 + C9456 * C3242 + C9612 * C3628 + C27854 * C3789) *
               C576 -
           (C9612 * C12371 + C27854 * C12561 + C9611 * C3570 + C9456 * C3736) *
               C630 -
           (C9612 * C12441 + C27854 * C12613 + C9611 * C3628 + C9456 * C3789) *
               C577) *
              C2999) *
         C27763 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C188 +
           (C10989 * C189 + C10882 * C350 + C10990 * C676 + C10883 * C798 +
            C10991 * C1466 + C10884 * C1661 + C10992 * C2066 + C10885 * C2238) *
               C28009) *
              C27816 * C27763 * C576 -
          ((C10992 * C11304 + C10885 * C11426 + C10991 * C2066 +
            C10884 * C2238 + C10990 * C1466 + C10883 * C1661 + C10989 * C676 +
            C10882 * C798) *
               C28009 +
           (C10992 * C11197 + C10885 * C11355 + C10991 * C1918 +
            C10884 * C2132 + C10990 * C1348 + C10883 * C1525 + C10989 * C582 +
            C10882 * C718) *
               C188) *
              C27816 * C27763 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C188 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C28009) *
               C27816 * C9453 +
           ((C9631 + C9630) * C188 + (C9758 + C9759) * C28009) * C27816 *
               C9454 +
           ((C9635 + C9634) * C188 + (C9760 + C9761) * C28009) * C27816 *
               C9455) *
              C576 -
          (((C9612 * C1468 + C27854 * C1663 + C9611 * C674 + C9456 * C796) *
                C28009 +
            (C9612 * C1350 + C27854 * C1527 + C9611 * C580 + C9456 * C716) *
                C188) *
               C27816 * C9455 +
           ((C9612 * C1467 + C27854 * C1662 + C9611 * C675 + C9456 * C797) *
                C28009 +
            (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                C188) *
               C27816 * C9454 +
           ((C9612 * C1466 + C27854 * C1661 + C9611 * C676 + C9456 * C798) *
                C28009 +
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C188) *
               C27816 * C9453) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C188 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C28009) *
               C2997 +
           ((C9611 * C956 + C9456 * C1092 + C9612 * C2486 + C27854 * C2668) *
                C188 +
            (C9611 * C1050 + C9456 * C1169 + C9612 * C2608 + C27854 * C2778) *
                C28009) *
               C2998 +
           ((C9611 * C3000 + C9456 * C3174 + C9612 * C3570 + C27854 * C3736) *
                C188 +
            (C9611 * C3118 + C9456 * C3305 + C9612 * C3682 + C27854 * C3842) *
                C28009) *
               C2999) *
              C27763 * C576 -
          (((C9612 * C12499 + C27854 * C12664 + C9611 * C3682 + C9456 * C3842) *
                C28009 +
            (C9612 * C12371 + C27854 * C12561 + C9611 * C3570 + C9456 * C3736) *
                C188) *
               C2999 +
           ((C9612 * C2610 + C27854 * C2777 + C9611 * C2608 + C9456 * C2778) *
                C28009 +
            (C9612 * C2484 + C27854 * C2667 + C9611 * C2486 + C9456 * C2668) *
                C188) *
               C2998 +
           ((C9612 * C1466 + C27854 * C1661 + C9611 * C676 + C9456 * C798) *
                C28009 +
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C188) *
               C2997) *
              C27763 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) * ((((C404 * C89 + C27816 * C405) * C578 +
                                 (C404 * C98 + C27816 * C410) * C28008) *
                                    C27763 * C10882 +
                                (C2310 + C2311) * C27763 * C10883 +
                                (C2312 + C2313) * C27763 * C10884 +
                                (C11470 + C11471) * C27763 * C10885) *
                                   C28009 * C576 -
                               (((C404 * C11198 + C27816 * C11462) * C28008 +
                                 (C404 * C11197 + C27816 * C11461) * C578) *
                                    C27763 * C10885 +
                                (C11471 + C11470) * C27763 * C10884 +
                                (C2313 + C2312) * C27763 * C10883 +
                                (C2311 + C2310) * C27763 * C10882) *
                                   C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C404 * C89 + C27816 * C405) * C578 +
             (C404 * C98 + C27816 * C410) * C28008) *
                C9453 +
            (C428 * C578 + C429 * C28008) * C9454 +
            (C430 * C578 + C431 * C28008) * C9455) *
               C9456 +
           ((C2310 + C2311) * C9453 + (C2298 + C2299) * C9454 +
            (C5478 + C5479) * C9455) *
               C27854) *
              C28009 * C576 -
          ((((C404 * C1356 + C27816 * C1728) * C28008 +
             (C404 * C1350 + C27816 * C1725) * C578) *
                C9455 +
            (C2305 + C2304) * C9454 + (C2313 + C2312) * C9453) *
               C27854 +
           ((C5479 + C5478) * C9455 + (C2299 + C2298) * C9454 +
            (C2311 + C2310) * C9453) *
               C9456) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
             C3370 * C3000 + C2999 * C3371) *
                C578 +
            (C3368 * C98 + C2997 * C410 + C3369 * C960 + C2998 * C1214 +
             C3370 * C3005 + C2999 * C3374) *
                C28008) *
               C27763 * C9456 +
           ((C12730 + C12731 + C12732) * C578 +
            (C12733 + C12734 + C12735) * C28008) *
               C27763 * C27854) *
              C28009 * C576 -
          (((C3370 * C12372 + C2999 * C12716 + C3369 * C2488 + C2998 * C2836 +
             C3368 * C1353 + C2997 * C1726) *
                C28008 +
            (C3370 * C12371 + C2999 * C12715 + C3369 * C2484 + C2998 * C2832 +
             C3368 * C1348 + C2997 * C1723) *
                C578) *
               C27763 * C27854 +
           ((C12735 + C12734 + C12733) * C28008 +
            (C12732 + C12731 + C12730) * C578) *
               C27763 * C9456) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C629 +
           (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 - C2370 * C577) *
              C27763 * C10882 +
          (C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) * C27763 *
              C10883 +
          (C2308 * C629 + C2371 * C576 - C11468 * C630 - C11509 * C577) *
              C27763 * C10884 +
          (C11468 * C629 + C11509 * C576 -
           (C404 * C11197 + C27816 * C11461) * C630 -
           (C404 * C11259 + C27816 * C11505) * C577) *
              C27763 * C10885) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C629 +
            (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 -
            C2370 * C577) *
               C9453 +
           (C428 * C629 + C482 * C576 - C1738 * C630 - C1801 * C577) * C9454 +
           (C430 * C629 + C483 * C576 - C4980 * C630 - C5035 * C577) * C9455) *
              C9456 +
          ((C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) * C9453 +
           (C1738 * C629 + C1801 * C576 - C1740 * C630 - C1802 * C577) * C9454 +
           (C4980 * C629 + C5035 * C576 -
            (C404 * C1350 + C27816 * C1725) * C630 -
            (C404 * C1412 + C27816 * C1793) * C577) *
               C9455) *
              C27854) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3368 * C89 + C2997 * C405 + C3369 * C956 + C2998 * C1210 +
            C3370 * C3000 + C2999 * C3371) *
               C629 +
           (C3368 * C144 + C2997 * C467 + C3369 * C1006 + C2998 * C1252 +
            C3370 * C3062 + C2999 * C3445) *
               C576 -
           (C12732 + C12731 + C12730) * C630 -
           (C12793 + C12794 + C12795) * C577) *
              C27763 * C9456 +
          ((C12730 + C12731 + C12732) * C629 +
           (C12795 + C12794 + C12793) * C576 -
           (C3370 * C12371 + C2999 * C12715 + C3369 * C2484 + C2998 * C2832 +
            C3368 * C1348 + C2997 * C1723) *
               C630 -
           (C3370 * C12441 + C2999 * C12785 + C3369 * C2550 + C2998 * C2890 +
            C3368 * C1410 + C2997 * C1791) *
               C577) *
              C27763 * C27854) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] += (-std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C188 +
                      (C404 * C189 + C27816 * C521) * C28009) *
                         C27763 * C10882 +
                     (C2424 + C2432) * C27763 * C10883 +
                     (C2427 + C2433) * C27763 * C10884 +
                     (C11545 + C11549) * C27763 * C10885) *
                        C576 -
                    (((C404 * C11304 + C27816 * C11543) * C28009 +
                      (C404 * C11197 + C27816 * C11461) * C188) *
                         C27763 * C10885 +
                     (C11549 + C11545) * C27763 * C10884 +
                     (C2433 + C2427) * C27763 * C10883 +
                     (C2432 + C2424) * C27763 * C10882) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C188 +
                       (C404 * C189 + C27816 * C521) * C28009) *
                          C9453 +
                      (C527 + C539) * C9454 + (C530 + C540) * C9455) *
                         C9456 +
                     ((C2424 + C2432) * C9453 + (C1858 + C1866) * C9454 +
                      (C5087 + C5091) * C9455) *
                         C27854) *
                        C576 -
                    ((((C404 * C1468 + C27816 * C1856) * C28009 +
                       (C404 * C1350 + C27816 * C1725) * C188) *
                          C9455 +
                      (C1867 + C1861) * C9454 + (C2433 + C2427) * C9453) *
                         C27854 +
                     ((C5091 + C5087) * C9455 + (C1866 + C1858) * C9454 +
                      (C2432 + C2424) * C9453) *
                         C9456) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C3368 * C89 + C2997 * C405 + C3369 * C956 +
                       C2998 * C1210 + C3370 * C3000 + C2999 * C3371) *
                          C188 +
                      (C3368 * C189 + C2997 * C521 + C3369 * C1050 +
                       C2998 * C1287 + C3370 * C3118 + C2999 * C3507) *
                          C28009) *
                         C27763 * C9456 +
                     ((C12730 + C12731 + C12732) * C188 +
                      (C12853 + C12854 + C12855) * C28009) *
                         C27763 * C27854) *
                        C576 -
                    (((C3370 * C12499 + C2999 * C12845 + C3369 * C2610 +
                       C2998 * C2945 + C3368 * C1466 + C2997 * C1854) *
                          C28009 +
                      (C3370 * C12371 + C2999 * C12715 + C3369 * C2484 +
                       C2998 * C2832 + C3368 * C1348 + C2997 * C1723) *
                          C188) *
                         C27763 * C27854 +
                     ((C12855 + C12854 + C12853) * C28009 +
                      (C12732 + C12731 + C12730) * C188) *
                         C27763 * C9456) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C578 +
            (C10886 * C98 + C27763 * C104) * C28008) *
               C10882 +
           (C11220 + C11221) * C10883 + (C11222 + C11223) * C10884 +
           (C11224 + C11225) * C10885) *
              C27816 * C951 -
          (((C10886 * C11584 + C27763 * C11586) * C28008 +
            (C10886 * C11583 + C27763 * C11585) * C578) *
               C10885 +
           ((C10886 * C2488 + C27763 * C2496) * C28008 +
            (C10886 * C2484 + C27763 * C2490) * C578) *
               C10884 +
           ((C10886 * C2492 + C27763 * C2498) * C28008 +
            (C10886 * C2486 + C27763 * C2494) * C578) *
               C10883 +
           ((C10886 * C960 + C27763 * C968) * C28008 +
            (C10886 * C956 + C27763 * C964) * C578) *
               C10882) *
              C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C578 +
            (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
             C9460 * C100 + C9455 * C106) *
                C28008) *
               C9456 +
           ((C9974 + C9975 + C9976) * C578 + (C9977 + C9978 + C9979) * C28008) *
               C27854) *
              C27816 * C951 -
          (((C9460 * C5630 + C9455 * C5632 + C9459 * C2491 + C9454 * C2497 +
             C9458 * C2492 + C9453 * C2498) *
                C28008 +
            (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
             C9458 * C2486 + C9453 * C2494) *
                C578) *
               C27854 +
           ((C9460 * C958 + C9455 * C966 + C9459 * C959 + C9454 * C967 +
             C9458 * C960 + C9453 * C968) *
                C28008 +
            (C9460 * C954 + C9455 * C962 + C9459 * C955 + C9454 * C963 +
             C9458 * C956 + C9453 * C964) *
                C578) *
               C9456) *
              C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C578 +
             (C10886 * C98 + C27763 * C104) * C28008) *
                C9456 +
            (C11220 + C11221) * C27854) *
               C2997 +
           ((C12922 + C12923) * C9456 + (C12388 + C12389) * C27854) * C2998 +
           ((C12924 + C12925) * C9456 + (C12390 + C12391) * C27854) * C2999) *
              C951 -
          ((((C10886 * C12906 + C27763 * C12908) * C28008 +
             (C10886 * C12905 + C27763 * C12907) * C578) *
                C27854 +
            ((C10886 * C4054 + C27763 * C4058) * C28008 +
             (C10886 * C4052 + C27763 * C4056) * C578) *
                C9456) *
               C2999 +
           ((C12391 + C12390) * C27854 + (C12925 + C12924) * C9456) * C2998 +
           ((C12389 + C12388) * C27854 + (C12923 + C12922) * C9456) * C2997) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (-std::pow(Pi, 2.5) * ((((C10886 * C89 + C27763 * C94) * C143 +
                                 (C10886 * C144 + C27763 * C149) * C28010) *
                                    C10882 +
                                (C11214 * C143 + C11268 * C28010) * C10883 +
                                (C11216 * C143 + C11269 * C28010) * C10884 +
                                (C11218 * C143 + C11270 * C28010) * C10885) *
                                   C27816 * C28008 * C951 -
                               (((C10886 * C11621 + C27763 * C11622) * C28010 +
                                 (C10886 * C11583 + C27763 * C11585) * C143) *
                                    C10885 +
                                ((C10886 * C2550 + C27763 * C2554) * C28010 +
                                 (C10886 * C2484 + C27763 * C2490) * C143) *
                                    C10884 +
                                ((C10886 * C2552 + C27763 * C2556) * C28010 +
                                 (C10886 * C2486 + C27763 * C2494) * C143) *
                                    C10883 +
                                ((C10886 * C1006 + C27763 * C1010) * C28010 +
                                 (C10886 * C956 + C27763 * C964) * C143) *
                                    C10882) *
                                   C27816 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C143 +
            (C9458 * C144 + C9453 * C149 + C9459 * C145 + C9454 * C150 +
             C9460 * C146 + C9455 * C151) *
                C28010) *
               C9456 +
           ((C9974 + C9975 + C9976) * C143 +
            (C10038 + C10037 + C10036) * C28010) *
               C27854) *
              C27816 * C28008 * C951 -
          (((C9460 * C5683 + C9455 * C5684 + C9459 * C2551 + C9454 * C2555 +
             C9458 * C2552 + C9453 * C2556) *
                C28010 +
            (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
             C9458 * C2486 + C9453 * C2494) *
                C143) *
               C27854 +
           ((C9460 * C1004 + C9455 * C1008 + C9459 * C1005 + C9454 * C1009 +
             C9458 * C1006 + C9453 * C1010) *
                C28010 +
            (C9460 * C954 + C9455 * C962 + C9459 * C955 + C9454 * C963 +
             C9458 * C956 + C9453 * C964) *
                C143) *
               C9456) *
              C27816 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C143 +
             (C10886 * C144 + C27763 * C149) * C28010) *
                C9456 +
            (C11214 * C143 + C11268 * C28010) * C27854) *
               C2997 +
           ((C12978 + C12990) * C9456 + (C12981 + C12982) * C27854) * C2998 +
           ((C12983 + C12991) * C9456 + (C12986 + C12987) * C27854) * C2999) *
              C28008 * C951 -
          ((((C10886 * C12975 + C27763 * C12976) * C28010 +
             (C10886 * C12905 + C27763 * C12907) * C143) *
                C27854 +
            ((C10886 * C4134 + C27763 * C4136) * C28010 +
             (C10886 * C4052 + C27763 * C4056) * C143) *
                C9456) *
               C2999 +
           ((C12987 + C12986) * C27854 + (C12991 + C12983) * C9456) * C2998 +
           ((C12982 + C12981) * C27854 + (C12990 + C12978) * C9456) * C2997) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (-std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C1045 +
           (C10886 * C189 + C27763 * C194) * C951 -
           (C10886 * C956 + C27763 * C964) * C1046 -
           (C10886 * C1050 + C27763 * C1054) * C952) *
              C10882 +
          (C11214 * C1045 + C11316 * C951 -
           (C10886 * C2486 + C27763 * C2494) * C1046 -
           (C10886 * C2608 + C27763 * C2612) * C952) *
              C10883 +
          (C11216 * C1045 + C11317 * C951 -
           (C10886 * C2484 + C27763 * C2490) * C1046 -
           (C10886 * C2610 + C27763 * C2614) * C952) *
              C10884 +
          (C11218 * C1045 + C11318 * C951 -
           (C10886 * C11583 + C27763 * C11585) * C1046 -
           (C10886 * C11657 + C27763 * C11658) * C952) *
              C10885) *
         C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C1045 +
           (C9458 * C189 + C9453 * C194 + C9459 * C190 + C9454 * C195 +
            C9460 * C191 + C9455 * C196) *
               C951 -
           (C9460 * C954 + C9455 * C962 + C9459 * C955 + C9454 * C963 +
            C9458 * C956 + C9453 * C964) *
               C1046 -
           (C9460 * C1048 + C9455 * C1052 + C9459 * C1049 + C9454 * C1053 +
            C9458 * C1050 + C9453 * C1054) *
               C952) *
              C9456 +
          ((C9974 + C9975 + C9976) * C1045 + (C10095 + C10096 + C10097) * C951 -
           (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
            C9458 * C2486 + C9453 * C2494) *
               C1046 -
           (C9460 * C5735 + C9455 * C5736 + C9459 * C2607 + C9454 * C2611 +
            C9458 * C2608 + C9453 * C2612) *
               C952) *
              C27854) *
         C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C1045 +
            (C10886 * C189 + C27763 * C194) * C951 - C12918 * C1046 -
            C13048 * C952) *
               C9456 +
           (C11214 * C1045 + C11316 * C951 - C12384 * C1046 - C12508 * C952) *
               C27854) *
              C2997 +
          ((C12918 * C1045 + C13048 * C951 - C12920 * C1046 - C13049 * C952) *
               C9456 +
           (C12384 * C1045 + C12508 * C951 - C12386 * C1046 - C12509 * C952) *
               C27854) *
              C2998 +
          ((C12920 * C1045 + C13049 * C951 -
            (C10886 * C4052 + C27763 * C4056) * C1046 -
            (C10886 * C4200 + C27763 * C4202) * C952) *
               C9456 +
           (C12386 * C1045 + C12509 * C951 -
            (C10886 * C12905 + C27763 * C12907) * C1046 -
            (C10886 * C13041 + C27763 * C13042) * C952) *
               C27854) *
              C2999) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (-std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C578 +
           (C10989 * C98 + C10882 * C239 + C10990 * C586 + C10883 * C722 +
            C10991 * C1353 + C10884 * C1528 + C10992 * C1920 + C10885 * C2134) *
               C28008) *
              C27816 * C27763 * C951 -
          ((C10992 * C11584 + C10885 * C11694 + C10991 * C2488 +
            C10884 * C2671 + C10990 * C2492 + C10883 * C2672 + C10989 * C960 +
            C10882 * C1096) *
               C28008 +
           (C10992 * C11583 + C10885 * C11693 + C10991 * C2484 +
            C10884 * C2667 + C10990 * C2486 + C10883 * C2668 + C10989 * C956 +
            C10882 * C1092) *
               C578) *
              C27816 * C27763 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C578 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                C28008) *
               C27816 * C9453 +
           ((C9631 + C9630) * C578 + (C9633 + C9632) * C28008) * C27816 *
               C9454 +
           ((C9635 + C9634) * C578 + (C9637 + C9636) * C28008) * C27816 *
               C9455) *
              C951 -
          (((C9612 * C5630 + C27854 * C5788 + C9611 * C958 + C9456 * C1094) *
                C28008 +
            (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                C578) *
               C27816 * C9455 +
           ((C9612 * C2491 + C27854 * C2670 + C9611 * C959 + C9456 * C1095) *
                C28008 +
            (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
                C578) *
               C27816 * C9454 +
           ((C9612 * C2492 + C27854 * C2672 + C9611 * C960 + C9456 * C1096) *
                C28008 +
            (C9612 * C2486 + C27854 * C2668 + C9611 * C956 + C9456 * C1092) *
                C578) *
               C27816 * C9453) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C578 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                C28008) *
               C2997 +
           ((C13118 + C13119) * C578 + (C13120 + C13121) * C28008) * C2998 +
           ((C13122 + C13123) * C578 + (C13124 + C13125) * C28008) * C2999) *
              C27763 * C951 -
          (((C9612 * C12906 + C27854 * C13100 + C9611 * C4054 + C9456 * C4268) *
                C28008 +
            (C9612 * C12905 + C27854 * C13099 + C9611 * C4052 + C9456 * C4266) *
                C578) *
               C2999 +
           ((C13125 + C13124) * C28008 + (C13123 + C13122) * C578) * C2998 +
           ((C13121 + C13120) * C28008 + (C13119 + C13118) * C578) * C2997) *
              C27763 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C143 +
           (C10989 * C144 + C10882 * C296 + C10990 * C634 + C10883 * C757 +
            C10991 * C1410 + C10884 * C1599 + C10992 * C2000 + C10885 * C2185) *
               C28010) *
              C27816 * C27763 * C28008 * C951 -
          ((C10992 * C11621 + C10885 * C11729 + C10991 * C2550 +
            C10884 * C2725 + C10990 * C2552 + C10883 * C2726 + C10989 * C1006 +
            C10882 * C1134) *
               C28010 +
           (C10992 * C11583 + C10885 * C11693 + C10991 * C2484 +
            C10884 * C2667 + C10990 * C2486 + C10883 * C2668 + C10989 * C956 +
            C10882 * C1092) *
               C143) *
              C27816 * C27763 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C143 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C28010) *
               C27816 * C9453 +
           ((C9631 + C9630) * C143 + (C9696 + C9697) * C28010) * C27816 *
               C9454 +
           ((C9635 + C9634) * C143 + (C9698 + C9699) * C28010) * C27816 *
               C9455) *
              C28008 * C951 -
          (((C9612 * C5683 + C27854 * C5839 + C9611 * C1004 + C9456 * C1132) *
                C28010 +
            (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                C143) *
               C27816 * C9455 +
           ((C9612 * C2551 + C27854 * C2724 + C9611 * C1005 + C9456 * C1133) *
                C28010 +
            (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
                C143) *
               C27816 * C9454 +
           ((C9612 * C2552 + C27854 * C2726 + C9611 * C1006 + C9456 * C1134) *
                C28010 +
            (C9612 * C2486 + C27854 * C2668 + C9611 * C956 + C9456 * C1092) *
                C143) *
               C27816 * C9453) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C143 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C28010) *
               C2997 +
           ((C13118 + C13119) * C143 + (C13185 + C13186) * C28010) * C2998 +
           ((C13122 + C13123) * C143 + (C13187 + C13188) * C28010) * C2999) *
              C27763 * C28008 * C951 -
          (((C9612 * C12975 + C27854 * C13175 + C9611 * C4134 + C9456 * C4340) *
                C28010 +
            (C9612 * C12905 + C27854 * C13099 + C9611 * C4052 + C9456 * C4266) *
                C143) *
               C2999 +
           ((C13188 + C13187) * C28010 + (C13123 + C13122) * C143) * C2998 +
           ((C13186 + C13185) * C28010 + (C13119 + C13118) * C143) * C2997) *
              C27763 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (-std::pow(Pi, 2.5) *
         ((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
           C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
              C1045 +
          (C10989 * C189 + C10882 * C350 + C10990 * C676 + C10883 * C798 +
           C10991 * C1466 + C10884 * C1661 + C10992 * C2066 + C10885 * C2238) *
              C951 -
          (C10992 * C11583 + C10885 * C11693 + C10991 * C2484 + C10884 * C2667 +
           C10990 * C2486 + C10883 * C2668 + C10989 * C956 + C10882 * C1092) *
              C1046 -
          (C10992 * C11657 + C10885 * C11764 + C10991 * C2610 + C10884 * C2777 +
           C10990 * C2608 + C10883 * C2778 + C10989 * C1050 + C10882 * C1169) *
              C952) *
         C27816 * C27763 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C1045 +
           (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) * C951 -
           (C9612 * C2486 + C27854 * C2668 + C9611 * C956 + C9456 * C1092) *
               C1046 -
           (C9612 * C2608 + C27854 * C2778 + C9611 * C1050 + C9456 * C1169) *
               C952) *
              C27816 * C9453 +
          ((C9631 + C9630) * C1045 + (C9758 + C9759) * C951 -
           (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
               C1046 -
           (C9612 * C2607 + C27854 * C2780 + C9611 * C1049 + C9456 * C1170) *
               C952) *
              C27816 * C9454 +
          ((C9635 + C9634) * C1045 + (C9760 + C9761) * C951 -
           (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
               C1046 -
           (C9612 * C5735 + C27854 * C5890 + C9611 * C1048 + C9456 * C1171) *
               C952) *
              C27816 * C9455) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C1045 +
           (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) * C951 -
           (C13119 + C13118) * C1046 - (C13248 + C13249) * C952) *
              C2997 +
          ((C13118 + C13119) * C1045 + (C13249 + C13248) * C951 -
           (C13123 + C13122) * C1046 - (C13250 + C13251) * C952) *
              C2998 +
          ((C13122 + C13123) * C1045 + (C13251 + C13250) * C951 -
           (C9612 * C12905 + C27854 * C13099 + C9611 * C4052 + C9456 * C4266) *
               C1046 -
           (C9612 * C13041 + C27854 * C13238 + C9611 * C4200 + C9456 * C4401) *
               C952) *
              C2999) *
         C27763 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] += (-std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C578 +
                      (C404 * C98 + C27816 * C410) * C28008) *
                         C27763 * C10882 +
                     (C2310 + C2311) * C27763 * C10883 +
                     (C2312 + C2313) * C27763 * C10884 +
                     (C11470 + C11471) * C27763 * C10885) *
                        C951 -
                    (((C404 * C11584 + C27816 * C11800) * C28008 +
                      (C404 * C11583 + C27816 * C11799) * C578) *
                         C27763 * C10885 +
                     ((C404 * C2488 + C27816 * C2836) * C28008 +
                      (C404 * C2484 + C27816 * C2832) * C578) *
                         C27763 * C10884 +
                     ((C404 * C2492 + C27816 * C2838) * C28008 +
                      (C404 * C2486 + C27816 * C2834) * C578) *
                         C27763 * C10883 +
                     ((C404 * C960 + C27816 * C1214) * C28008 +
                      (C404 * C956 + C27816 * C1210) * C578) *
                         C27763 * C10882) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C578 +
                       (C404 * C98 + C27816 * C410) * C28008) *
                          C9453 +
                      (C428 * C578 + C429 * C28008) * C9454 +
                      (C430 * C578 + C431 * C28008) * C9455) *
                         C9456 +
                     ((C2310 + C2311) * C9453 + (C2298 + C2299) * C9454 +
                      (C5478 + C5479) * C9455) *
                         C27854) *
                        C951 -
                    ((((C404 * C5630 + C27816 * C5942) * C28008 +
                       (C404 * C5629 + C27816 * C5941) * C578) *
                          C9455 +
                      ((C404 * C2491 + C27816 * C2837) * C28008 +
                       (C404 * C2485 + C27816 * C2833) * C578) *
                          C9454 +
                      ((C404 * C2492 + C27816 * C2838) * C28008 +
                       (C404 * C2486 + C27816 * C2834) * C578) *
                          C9453) *
                         C27854 +
                     (((C404 * C958 + C27816 * C1212) * C28008 +
                       (C404 * C954 + C27816 * C1208) * C578) *
                          C9455 +
                      ((C404 * C959 + C27816 * C1213) * C28008 +
                       (C404 * C955 + C27816 * C1209) * C578) *
                          C9454 +
                      ((C404 * C960 + C27816 * C1214) * C28008 +
                       (C404 * C956 + C27816 * C1210) * C578) *
                          C9453) *
                         C9456) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C3368 * C89 + C2997 * C405 + C3369 * C956 +
                       C2998 * C1210 + C3370 * C3000 + C2999 * C3371) *
                          C578 +
                      (C3368 * C98 + C2997 * C410 + C3369 * C960 +
                       C2998 * C1214 + C3370 * C3005 + C2999 * C3374) *
                          C28008) *
                         C27763 * C9456 +
                     ((C12730 + C12731 + C12732) * C578 +
                      (C12733 + C12734 + C12735) * C28008) *
                         C27763 * C27854) *
                        C951 -
                    (((C3370 * C12906 + C2999 * C13302 + C3369 * C3572 +
                       C2998 * C3896 + C3368 * C2492 + C2997 * C2838) *
                          C28008 +
                      (C3370 * C12905 + C2999 * C13301 + C3369 * C3570 +
                       C2998 * C3894 + C3368 * C2486 + C2997 * C2834) *
                          C578) *
                         C27763 * C27854 +
                     ((C3370 * C4054 + C2999 * C4462 + C3369 * C3005 +
                       C2998 * C3374 + C3368 * C960 + C2997 * C1214) *
                          C28008 +
                      (C3370 * C4052 + C2999 * C4460 + C3369 * C3000 +
                       C2998 * C3371 + C3368 * C956 + C2997 * C1210) *
                          C578) *
                         C27763 * C9456) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q));
    d2eezy[23] += (-std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C143 +
                      (C404 * C144 + C27816 * C467) * C28010) *
                         C27763 * C10882 +
                     (C2306 * C143 + C2370 * C28010) * C27763 * C10883 +
                     (C2308 * C143 + C2371 * C28010) * C27763 * C10884 +
                     (C11468 * C143 + C11509 * C28010) * C27763 * C10885) *
                        C28008 * C951 -
                    (((C404 * C11621 + C27816 * C11835) * C28010 +
                      (C404 * C11583 + C27816 * C11799) * C143) *
                         C27763 * C10885 +
                     ((C404 * C2550 + C27816 * C2890) * C28010 +
                      (C404 * C2484 + C27816 * C2832) * C143) *
                         C27763 * C10884 +
                     ((C404 * C2552 + C27816 * C2892) * C28010 +
                      (C404 * C2486 + C27816 * C2834) * C143) *
                         C27763 * C10883 +
                     ((C404 * C1006 + C27816 * C1252) * C28010 +
                      (C404 * C956 + C27816 * C1210) * C143) *
                         C27763 * C10882) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C143 +
                       (C404 * C144 + C27816 * C467) * C28010) *
                          C9453 +
                      (C473 + C485) * C9454 + (C476 + C486) * C9455) *
                         C9456 +
                     ((C2306 * C143 + C2370 * C28010) * C9453 +
                      (C1795 + C1803) * C9454 + (C5032 + C5036) * C9455) *
                         C27854) *
                        C28008 * C951 -
                    ((((C404 * C5683 + C27816 * C5993) * C28010 +
                       (C404 * C5629 + C27816 * C5941) * C143) *
                          C9455 +
                      ((C404 * C2551 + C27816 * C2891) * C28010 +
                       (C404 * C2485 + C27816 * C2833) * C143) *
                          C9454 +
                      ((C404 * C2552 + C27816 * C2892) * C28010 +
                       (C404 * C2486 + C27816 * C2834) * C143) *
                          C9453) *
                         C27854 +
                     (((C404 * C1004 + C27816 * C1250) * C28010 +
                       (C404 * C954 + C27816 * C1208) * C143) *
                          C9455 +
                      ((C404 * C1005 + C27816 * C1251) * C28010 +
                       (C404 * C955 + C27816 * C1209) * C143) *
                          C9454 +
                      ((C404 * C1006 + C27816 * C1252) * C28010 +
                       (C404 * C956 + C27816 * C1210) * C143) *
                          C9453) *
                         C9456) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C3368 * C89 + C2997 * C405 + C3369 * C956 +
                       C2998 * C1210 + C3370 * C3000 + C2999 * C3371) *
                          C143 +
                      (C3368 * C144 + C2997 * C467 + C3369 * C1006 +
                       C2998 * C1252 + C3370 * C3062 + C2999 * C3445) *
                          C28010) *
                         C27763 * C9456 +
                     ((C12730 + C12731 + C12732) * C143 +
                      (C12795 + C12794 + C12793) * C28010) *
                         C27763 * C27854) *
                        C28008 * C951 -
                    (((C3370 * C12975 + C2999 * C13353 + C3369 * C3628 +
                       C2998 * C3947 + C3368 * C2552 + C2997 * C2892) *
                          C28010 +
                      (C3370 * C12905 + C2999 * C13301 + C3369 * C3570 +
                       C2998 * C3894 + C3368 * C2486 + C2997 * C2834) *
                          C143) *
                         C27763 * C27854 +
                     ((C3370 * C4134 + C2999 * C4514 + C3369 * C3062 +
                       C2998 * C3445 + C3368 * C1006 + C2997 * C1252) *
                          C28010 +
                      (C3370 * C4052 + C2999 * C4460 + C3369 * C3000 +
                       C2998 * C3371 + C3368 * C956 + C2997 * C1210) *
                          C143) *
                         C27763 * C9456) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[23] += (-std::pow(Pi, 2.5) *
                   (((C404 * C89 + C27816 * C405) * C1045 +
                     (C404 * C189 + C27816 * C521) * C951 -
                     (C404 * C956 + C27816 * C1210) * C1046 -
                     (C404 * C1050 + C27816 * C1287) * C952) *
                        C27763 * C10882 +
                    (C2306 * C1045 + C2430 * C951 -
                     (C404 * C2486 + C27816 * C2834) * C1046 -
                     (C404 * C2608 + C27816 * C2943) * C952) *
                        C27763 * C10883 +
                    (C2308 * C1045 + C2431 * C951 -
                     (C404 * C2484 + C27816 * C2832) * C1046 -
                     (C404 * C2610 + C27816 * C2945) * C952) *
                        C27763 * C10884 +
                    (C11468 * C1045 + C11548 * C951 -
                     (C404 * C11583 + C27816 * C11799) * C1046 -
                     (C404 * C11657 + C27816 * C11870) * C952) *
                        C27763 * C10885) *
                   C28010 * C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C1045 +
                      (C404 * C189 + C27816 * C521) * C951 -
                      (C404 * C956 + C27816 * C1210) * C1046 -
                      (C404 * C1050 + C27816 * C1287) * C952) *
                         C9453 +
                     (C428 * C1045 + C536 * C951 -
                      (C404 * C955 + C27816 * C1209) * C1046 -
                      (C404 * C1049 + C27816 * C1288) * C952) *
                         C9454 +
                     (C430 * C1045 + C537 * C951 -
                      (C404 * C954 + C27816 * C1208) * C1046 -
                      (C404 * C1048 + C27816 * C1289) * C952) *
                         C9455) *
                        C9456 +
                    ((C2306 * C1045 + C2430 * C951 -
                      (C404 * C2486 + C27816 * C2834) * C1046 -
                      (C404 * C2608 + C27816 * C2943) * C952) *
                         C9453 +
                     (C1738 * C1045 + C1864 * C951 -
                      (C404 * C2485 + C27816 * C2833) * C1046 -
                      (C404 * C2607 + C27816 * C2944) * C952) *
                         C9454 +
                     (C4980 * C1045 + C5090 * C951 -
                      (C404 * C5629 + C27816 * C5941) * C1046 -
                      (C404 * C5735 + C27816 * C6044) * C952) *
                         C9455) *
                        C27854) *
                   C28010 * C28008) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C3368 * C89 + C2997 * C405 + C3369 * C956 +
                      C2998 * C1210 + C3370 * C3000 + C2999 * C3371) *
                         C1045 +
                     (C3368 * C189 + C2997 * C521 + C3369 * C1050 +
                      C2998 * C1287 + C3370 * C3118 + C2999 * C3507) *
                         C951 -
                     (C3370 * C4052 + C2999 * C4460 + C3369 * C3000 +
                      C2998 * C3371 + C3368 * C956 + C2997 * C1210) *
                         C1046 -
                     (C3370 * C4200 + C2999 * C4565 + C3369 * C3118 +
                      C2998 * C3507 + C3368 * C1050 + C2997 * C1287) *
                         C952) *
                        C27763 * C9456 +
                    ((C12730 + C12731 + C12732) * C1045 +
                     (C12853 + C12854 + C12855) * C951 -
                     (C3370 * C12905 + C2999 * C13301 + C3369 * C3570 +
                      C2998 * C3894 + C3368 * C2486 + C2997 * C2834) *
                         C1046 -
                     (C3370 * C13041 + C2999 * C13404 + C3369 * C3682 +
                      C2998 * C4000 + C3368 * C2608 + C2997 * C2943) *
                         C952) *
                        C27763 * C27854) *
                   C28010 * C28008) /
                      (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C87 +
            (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                C77 -
            (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) * C88 -
            (C26640 * C100 + C27768 * C106 + C26647 * C99 + C27960 * C105) *
                C78) *
               C9456 +
           ((C13968 + C13969) * C87 + (C13970 + C13971) * C77 -
            (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                C88 -
            (C26640 * C584 + C27768 * C592 + C26647 * C585 + C27960 * C593) *
                C78) *
               C27854) *
              C27974 +
          (((C26647 * C956 + C27960 * C964 + C26640 * C955 + C27768 * C963) *
                C87 +
            (C26647 * C960 + C27960 * C968 + C26640 * C959 + C27768 * C967) *
                C77 -
            (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                C88 -
            (C26640 * C958 + C27768 * C966 + C26647 * C959 + C27960 * C967) *
                C78) *
               C9456 +
           ((C26647 * C2486 + C27960 * C2494 + C26640 * C2485 +
             C27768 * C2493) *
                C87 +
            (C26647 * C2492 + C27960 * C2498 + C26640 * C2491 +
             C27768 * C2497) *
                C77 -
            (C26640 * C5629 + C27768 * C5631 + C26647 * C2485 +
             C27960 * C2493) *
                C88 -
            (C26640 * C5630 + C27768 * C5632 + C26647 * C2491 +
             C27960 * C2497) *
                C78) *
               C27854) *
              C27880) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C143 +
             (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                 C28010) *
                C9456 +
            ((C13968 + C13969) * C143 + (C14035 + C14034) * C28010) * C27854) *
               C27974 +
           (((C26647 * C956 + C27960 * C964 + C26640 * C955 + C27768 * C963) *
                 C143 +
             (C26647 * C1006 + C27960 * C1010 + C26640 * C1005 +
              C27768 * C1009) *
                 C28010) *
                C9456 +
            ((C26647 * C2486 + C27960 * C2494 + C26640 * C2485 +
              C27768 * C2493) *
                 C143 +
             (C26647 * C2552 + C27960 * C2556 + C26640 * C2551 +
              C27768 * C2555) *
                 C28010) *
                C27854) *
               C27880) *
              C77 -
          ((((C26640 * C5683 + C27768 * C5684 + C26647 * C2551 +
              C27960 * C2555) *
                 C28010 +
             (C26640 * C5629 + C27768 * C5631 + C26647 * C2485 +
              C27960 * C2493) *
                 C143) *
                C27854 +
            ((C26640 * C1004 + C27768 * C1008 + C26647 * C1005 +
              C27960 * C1009) *
                 C28010 +
             (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                 C143) *
                C9456) *
               C27880 +
           (((C26640 * C632 + C27768 * C636 + C26647 * C633 + C27960 * C637) *
                 C28010 +
             (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                 C143) *
                C27854 +
            ((C26640 * C146 + C27768 * C151 + C26647 * C145 + C27960 * C150) *
                 C28010 +
             (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                 C143) *
                C9456) *
               C27974) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C188 +
             (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                 C28009) *
                C9456 +
            ((C13968 + C13969) * C188 + (C14096 + C14097) * C28009) * C27854) *
               C27974 +
           (((C26647 * C956 + C27960 * C964 + C26640 * C955 + C27768 * C963) *
                 C188 +
             (C26647 * C1050 + C27960 * C1054 + C26640 * C1049 +
              C27768 * C1053) *
                 C28009) *
                C9456 +
            ((C26647 * C2486 + C27960 * C2494 + C26640 * C2485 +
              C27768 * C2493) *
                 C188 +
             (C26647 * C2608 + C27960 * C2612 + C26640 * C2607 +
              C27768 * C2611) *
                 C28009) *
                C27854) *
               C27880) *
              C28010 * C77 -
          ((((C26640 * C5735 + C27768 * C5736 + C26647 * C2607 +
              C27960 * C2611) *
                 C28009 +
             (C26640 * C5629 + C27768 * C5631 + C26647 * C2485 +
              C27960 * C2493) *
                 C188) *
                C27854 +
            ((C26640 * C1048 + C27768 * C1052 + C26647 * C1049 +
              C27960 * C1053) *
                 C28009 +
             (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                 C188) *
                C9456) *
               C27880 +
           (((C26640 * C674 + C27768 * C678 + C26647 * C675 + C27960 * C679) *
                 C28009 +
             (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                 C188) *
                C27854 +
            ((C26640 * C191 + C27768 * C196 + C26647 * C190 + C27960 * C195) *
                 C28009 +
             (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                 C188) *
                C9456) *
               C27974) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C87 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) * C77 -
            (C9630 + C9631) * C88 - (C9632 + C9633) * C78) *
               C27974 +
           ((C13118 + C13119) * C87 + (C13120 + C13121) * C77 -
            (C15122 + C15123) * C88 - (C15124 + C15125) * C78) *
               C27880) *
              C27960 +
          (((C9631 + C9630) * C87 + (C9633 + C9632) * C77 -
            (C9634 + C9635) * C88 - (C9636 + C9637) * C78) *
               C27974 +
           ((C15123 + C15122) * C87 + (C15125 + C15124) * C77 -
            (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                C88 -
            (C9612 * C5630 + C27854 * C5788 + C9611 * C958 + C9456 * C1094) *
                C78) *
               C27880) *
              C27768) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                 C143 +
             (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                 C28010) *
                C27974 +
            ((C13118 + C13119) * C143 + (C13185 + C13186) * C28010) * C27880) *
               C27960 +
           (((C9631 + C9630) * C143 + (C9696 + C9697) * C28010) * C27974 +
            ((C15123 + C15122) * C143 + (C15196 + C15197) * C28010) * C27880) *
               C27768) *
              C77 -
          ((((C9612 * C5683 + C27854 * C5839 + C9611 * C1004 + C9456 * C1132) *
                 C28010 +
             (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                 C143) *
                C27880 +
            ((C9699 + C9698) * C28010 + (C9634 + C9635) * C143) * C27974) *
               C27768 +
           (((C15197 + C15196) * C28010 + (C15122 + C15123) * C143) * C27880 +
            ((C9697 + C9696) * C28010 + (C9630 + C9631) * C143) * C27974) *
               C27960) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                 C188 +
             (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                 C28009) *
                C27974 +
            ((C13118 + C13119) * C188 + (C13249 + C13248) * C28009) * C27880) *
               C27960 +
           (((C9631 + C9630) * C188 + (C9758 + C9759) * C28009) * C27974 +
            ((C15123 + C15122) * C188 + (C15268 + C15269) * C28009) * C27880) *
               C27768) *
              C28010 * C77 -
          ((((C9612 * C5735 + C27854 * C5890 + C9611 * C1048 + C9456 * C1171) *
                 C28009 +
             (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                 C188) *
                C27880 +
            ((C9761 + C9760) * C28009 + (C9634 + C9635) * C188) * C27974) *
               C27768 +
           (((C15269 + C15268) * C28009 + (C15122 + C15123) * C188) * C27880 +
            ((C9759 + C9758) * C28009 + (C9630 + C9631) * C188) * C27974) *
               C27960) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C87 +
            (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                C77 -
            (C6432 + C6433) * C88 - (C6434 + C6435) * C78) *
               C27960 +
           ((C6433 + C6432) * C87 + (C6435 + C6434) * C77 -
            (C6436 + C6437) * C88 - (C6438 + C6439) * C78) *
               C27768) *
              C9456 +
          (((C8638 + C8639) * C87 + (C8640 + C8641) * C77 -
            (C7996 + C7997) * C88 - (C7998 + C7999) * C78) *
               C27960 +
           ((C7997 + C7996) * C87 + (C7999 + C7998) * C77 -
            (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                C88 -
            (C6414 * C5630 + C27880 * C5942 + C6413 * C584 + C27974 * C838) *
                C78) *
               C27768) *
              C27854) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C143 +
             (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                 C28010) *
                C27960 +
            ((C6433 + C6432) * C143 + (C6498 + C6499) * C28010) * C27768) *
               C9456 +
           (((C8638 + C8639) * C143 + (C8713 + C8712) * C28010) * C27960 +
            ((C7997 + C7996) * C143 + (C8070 + C8071) * C28010) * C27768) *
               C27854) *
              C77 -
          ((((C6414 * C5683 + C27880 * C5993 + C6413 * C632 + C27974 * C877) *
                 C28010 +
             (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                 C143) *
                C27768 +
            ((C8071 + C8070) * C28010 + (C7996 + C7997) * C143) * C27960) *
               C27854 +
           (((C6501 + C6500) * C28010 + (C6436 + C6437) * C143) * C27768 +
            ((C6499 + C6498) * C28010 + (C6432 + C6433) * C143) * C27960) *
               C9456) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C188 +
             (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                 C28009) *
                C27960 +
            ((C6433 + C6432) * C188 + (C6560 + C6561) * C28009) * C27768) *
               C9456 +
           (((C8638 + C8639) * C188 + (C8784 + C8785) * C28009) * C27960 +
            ((C7997 + C7996) * C188 + (C8142 + C8143) * C28009) * C27768) *
               C27854) *
              C28010 * C77 -
          ((((C6414 * C5735 + C27880 * C6044 + C6413 * C674 + C27974 * C914) *
                 C28009 +
             (C6414 * C5629 + C27880 * C5941 + C6413 * C580 + C27974 * C834) *
                 C188) *
                C27768 +
            ((C8143 + C8142) * C28009 + (C7996 + C7997) * C188) * C27960) *
               C27854 +
           (((C6563 + C6562) * C28009 + (C6436 + C6437) * C188) * C27768 +
            ((C6561 + C6560) * C28009 + (C6432 + C6433) * C188) * C27960) *
               C9456) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C578 +
             (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                 C28008) *
                C9456 +
            ((C13968 + C13969) * C578 + (C13970 + C13971) * C28008) * C27854) *
               C27974 +
           (((C26647 * C956 + C27960 * C964 + C26640 * C955 + C27768 * C963) *
                 C578 +
             (C26647 * C960 + C27960 * C968 + C26640 * C959 + C27768 * C967) *
                 C28008) *
                C9456 +
            ((C15542 + C15543) * C578 + (C15544 + C15545) * C28008) * C27854) *
               C27880) *
              C28009 * C576 -
          ((((C26640 * C2487 + C27768 * C2495 + C26647 * C2488 +
              C27960 * C2496) *
                 C28008 +
             (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
              C27960 * C2490) *
                 C578) *
                C27854 +
            ((C15545 + C15544) * C28008 + (C15543 + C15542) * C578) * C9456) *
               C27880 +
           (((C13975 + C13974) * C28008 + (C13973 + C13972) * C578) * C27854 +
            ((C13971 + C13970) * C28008 + (C13969 + C13968) * C578) * C9456) *
               C27974) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C629 +
            (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                C576 -
            (C13969 + C13968) * C630 - (C14034 + C14035) * C577) *
               C9456 +
           ((C13968 + C13969) * C629 + (C14035 + C14034) * C576 -
            (C13973 + C13972) * C630 - (C14036 + C14037) * C577) *
               C27854) *
              C27974 +
          (((C26647 * C956 + C27960 * C964 + C26640 * C955 + C27768 * C963) *
                C629 +
            (C26647 * C1006 + C27960 * C1010 + C26640 * C1005 +
             C27768 * C1009) *
                C576 -
            (C15543 + C15542) * C630 - (C15616 + C15617) * C577) *
               C9456 +
           ((C15542 + C15543) * C629 + (C15617 + C15616) * C576 -
            (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
             C27960 * C2490) *
                C630 -
            (C26640 * C2549 + C27768 * C2553 + C26647 * C2550 +
             C27960 * C2554) *
                C577) *
               C27854) *
              C27880) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C188 +
             (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                 C28009) *
                C9456 +
            ((C13968 + C13969) * C188 + (C14096 + C14097) * C28009) * C27854) *
               C27974 +
           (((C26647 * C956 + C27960 * C964 + C26640 * C955 + C27768 * C963) *
                 C188 +
             (C26647 * C1050 + C27960 * C1054 + C26640 * C1049 +
              C27768 * C1053) *
                 C28009) *
                C9456 +
            ((C15542 + C15543) * C188 + (C15688 + C15689) * C28009) * C27854) *
               C27880) *
              C576 -
          ((((C26640 * C2609 + C27768 * C2613 + C26647 * C2610 +
              C27960 * C2614) *
                 C28009 +
             (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
              C27960 * C2490) *
                 C188) *
                C27854 +
            ((C15689 + C15688) * C28009 + (C15543 + C15542) * C188) * C9456) *
               C27880 +
           (((C14099 + C14098) * C28009 + (C13973 + C13972) * C188) * C27854 +
            ((C14097 + C14096) * C28009 + (C13969 + C13968) * C188) * C9456) *
               C27974) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                 C578 +
             (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                 C28008) *
                C27974 +
            ((C13118 + C13119) * C578 + (C13120 + C13121) * C28008) * C27880) *
               C27960 +
           (((C9631 + C9630) * C578 + (C9633 + C9632) * C28008) * C27974 +
            ((C15123 + C15122) * C578 + (C15125 + C15124) * C28008) * C27880) *
               C27768) *
              C28009 * C576 -
          ((((C9612 * C2487 + C27854 * C2669 + C9611 * C2491 + C9456 * C2670) *
                 C28008 +
             (C9612 * C2483 + C27854 * C2665 + C9611 * C2485 + C9456 * C2666) *
                 C578) *
                C27880 +
            ((C9612 * C1354 + C27854 * C1529 + C9611 * C585 + C9456 * C721) *
                 C28008 +
             (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                 C578) *
                C27974) *
               C27768 +
           (((C9612 * C2488 + C27854 * C2671 + C9611 * C2492 + C9456 * C2672) *
                 C28008 +
             (C9612 * C2484 + C27854 * C2667 + C9611 * C2486 + C9456 * C2668) *
                 C578) *
                C27880 +
            ((C9612 * C1353 + C27854 * C1528 + C9611 * C586 + C9456 * C722) *
                 C28008 +
             (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                 C578) *
                C27974) *
               C27960) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C629 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C576 -
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C630 -
            (C9612 * C1410 + C27854 * C1599 + C9611 * C634 + C9456 * C757) *
                C577) *
               C27974 +
           ((C13118 + C13119) * C629 + (C13185 + C13186) * C576 -
            (C9612 * C2484 + C27854 * C2667 + C9611 * C2486 + C9456 * C2668) *
                C630 -
            (C9612 * C2550 + C27854 * C2725 + C9611 * C2552 + C9456 * C2726) *
                C577) *
               C27880) *
              C27960 +
          (((C9631 + C9630) * C629 + (C9696 + C9697) * C576 -
            (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                C630 -
            (C9612 * C1411 + C27854 * C1600 + C9611 * C633 + C9456 * C758) *
                C577) *
               C27974 +
           ((C15123 + C15122) * C629 + (C15196 + C15197) * C576 -
            (C9612 * C2483 + C27854 * C2665 + C9611 * C2485 + C9456 * C2666) *
                C630 -
            (C9612 * C2549 + C27854 * C2723 + C9611 * C2551 + C9456 * C2724) *
                C577) *
               C27880) *
              C27768) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                 C188 +
             (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                 C28009) *
                C27974 +
            ((C13118 + C13119) * C188 + (C13249 + C13248) * C28009) * C27880) *
               C27960 +
           (((C9631 + C9630) * C188 + (C9758 + C9759) * C28009) * C27974 +
            ((C15123 + C15122) * C188 + (C15268 + C15269) * C28009) * C27880) *
               C27768) *
              C576 -
          ((((C9612 * C2609 + C27854 * C2779 + C9611 * C2607 + C9456 * C2780) *
                 C28009 +
             (C9612 * C2483 + C27854 * C2665 + C9611 * C2485 + C9456 * C2666) *
                 C188) *
                C27880 +
            ((C9612 * C1467 + C27854 * C1662 + C9611 * C675 + C9456 * C797) *
                 C28009 +
             (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                 C188) *
                C27974) *
               C27768 +
           (((C9612 * C2610 + C27854 * C2777 + C9611 * C2608 + C9456 * C2778) *
                 C28009 +
             (C9612 * C2484 + C27854 * C2667 + C9611 * C2486 + C9456 * C2668) *
                 C188) *
                C27880 +
            ((C9612 * C1466 + C27854 * C1661 + C9611 * C676 + C9456 * C798) *
                 C28009 +
             (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                 C188) *
                C27974) *
               C27960) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C578 +
             (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                 C28008) *
                C27960 +
            ((C6433 + C6432) * C578 + (C6435 + C6434) * C28008) * C27768) *
               C9456 +
           (((C8638 + C8639) * C578 + (C8640 + C8641) * C28008) * C27960 +
            ((C7997 + C7996) * C578 + (C7999 + C7998) * C28008) * C27768) *
               C27854) *
              C28009 * C576 -
          ((((C6414 * C2487 + C27880 * C2835 + C6413 * C1354 + C27974 * C1727) *
                 C28008 +
             (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                 C578) *
                C27768 +
            ((C6414 * C2488 + C27880 * C2836 + C6413 * C1353 + C27974 * C1726) *
                 C28008 +
             (C6414 * C2484 + C27880 * C2832 + C6413 * C1348 + C27974 * C1723) *
                 C578) *
                C27960) *
               C27854 +
           (((C7998 + C7999) * C28008 + (C7996 + C7997) * C578) * C27768 +
            ((C8641 + C8640) * C28008 + (C8639 + C8638) * C578) * C27960) *
               C9456) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C629 +
            (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                C576 -
            (C8639 + C8638) * C630 - (C8712 + C8713) * C577) *
               C27960 +
           ((C6433 + C6432) * C629 + (C6498 + C6499) * C576 -
            (C7996 + C7997) * C630 - (C8071 + C8070) * C577) *
               C27768) *
              C9456 +
          (((C8638 + C8639) * C629 + (C8713 + C8712) * C576 -
            (C6414 * C2484 + C27880 * C2832 + C6413 * C1348 + C27974 * C1723) *
                C630 -
            (C6414 * C2550 + C27880 * C2890 + C6413 * C1410 + C27974 * C1791) *
                C577) *
               C27960 +
           ((C7997 + C7996) * C629 + (C8070 + C8071) * C576 -
            (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                C630 -
            (C6414 * C2549 + C27880 * C2889 + C6413 * C1411 + C27974 * C1792) *
                C577) *
               C27768) *
              C27854) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C188 +
             (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                 C28009) *
                C27960 +
            ((C6433 + C6432) * C188 + (C6560 + C6561) * C28009) * C27768) *
               C9456 +
           (((C8638 + C8639) * C188 + (C8784 + C8785) * C28009) * C27960 +
            ((C7997 + C7996) * C188 + (C8142 + C8143) * C28009) * C27768) *
               C27854) *
              C576 -
          ((((C6414 * C2609 + C27880 * C2946 + C6413 * C1467 + C27974 * C1855) *
                 C28009 +
             (C6414 * C2483 + C27880 * C2831 + C6413 * C1349 + C27974 * C1724) *
                 C188) *
                C27768 +
            ((C6414 * C2610 + C27880 * C2945 + C6413 * C1466 + C27974 * C1854) *
                 C28009 +
             (C6414 * C2484 + C27880 * C2832 + C6413 * C1348 + C27974 * C1723) *
                 C188) *
                C27960) *
               C27854 +
           (((C8143 + C8142) * C28009 + (C7996 + C7997) * C188) * C27768 +
            ((C8785 + C8784) * C28009 + (C8639 + C8638) * C188) * C27960) *
               C9456) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C578 +
             (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                 C28008) *
                C9456 +
            ((C13968 + C13969) * C578 + (C13970 + C13971) * C28008) * C27854) *
               C27974 +
           (((C16160 + C16161) * C578 + (C16162 + C16163) * C28008) * C9456 +
            ((C15542 + C15543) * C578 + (C15544 + C15545) * C28008) * C27854) *
               C27880) *
              C951 -
          ((((C26640 * C3571 + C27768 * C3575 + C26647 * C3572 +
              C27960 * C3576) *
                 C28008 +
             (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
              C27960 * C3574) *
                 C578) *
                C27854 +
            ((C26640 * C3006 + C27768 * C3010 + C26647 * C3005 +
              C27960 * C3009) *
                 C28008 +
             (C26640 * C3001 + C27768 * C3004 + C26647 * C3000 +
              C27960 * C3003) *
                 C578) *
                C9456) *
               C27880 +
           (((C15545 + C15544) * C28008 + (C15543 + C15542) * C578) * C27854 +
            ((C16163 + C16162) * C28008 + (C16161 + C16160) * C578) * C9456) *
               C27974) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C143 +
             (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                 C28010) *
                C9456 +
            ((C13968 + C13969) * C143 + (C14035 + C14034) * C28010) * C27854) *
               C27974 +
           (((C16160 + C16161) * C143 + (C16234 + C16235) * C28010) * C9456 +
            ((C15542 + C15543) * C143 + (C15617 + C15616) * C28010) * C27854) *
               C27880) *
              C28008 * C951 -
          ((((C26640 * C3627 + C27768 * C3629 + C26647 * C3628 +
              C27960 * C3630) *
                 C28010 +
             (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
              C27960 * C3574) *
                 C143) *
                C27854 +
            ((C26640 * C3063 + C27768 * C3066 + C26647 * C3062 +
              C27960 * C3065) *
                 C28010 +
             (C26640 * C3001 + C27768 * C3004 + C26647 * C3000 +
              C27960 * C3003) *
                 C143) *
                C9456) *
               C27880 +
           (((C15616 + C15617) * C28010 + (C15543 + C15542) * C143) * C27854 +
            ((C16235 + C16234) * C28010 + (C16161 + C16160) * C143) * C9456) *
               C27974) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                C1045 +
            (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                C951 -
            (C16161 + C16160) * C1046 - (C16306 + C16307) * C952) *
               C9456 +
           ((C13968 + C13969) * C1045 + (C14096 + C14097) * C951 -
            (C15543 + C15542) * C1046 - (C15689 + C15688) * C952) *
               C27854) *
              C27974 +
          (((C16160 + C16161) * C1045 + (C16307 + C16306) * C951 -
            (C26640 * C3001 + C27768 * C3004 + C26647 * C3000 +
             C27960 * C3003) *
                C1046 -
            (C26640 * C3119 + C27768 * C3122 + C26647 * C3118 +
             C27960 * C3121) *
                C952) *
               C9456 +
           ((C15542 + C15543) * C1045 + (C15688 + C15689) * C951 -
            (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
             C27960 * C3574) *
                C1046 -
            (C26640 * C3681 + C27768 * C3683 + C26647 * C3682 +
             C27960 * C3684) *
                C952) *
               C27854) *
              C27880) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                 C578 +
             (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                 C28008) *
                C27974 +
            ((C13118 + C13119) * C578 + (C13120 + C13121) * C28008) * C27880) *
               C27960 +
           (((C9631 + C9630) * C578 + (C9633 + C9632) * C28008) * C27974 +
            ((C15123 + C15122) * C578 + (C15125 + C15124) * C28008) * C27880) *
               C27768) *
              C951 -
          ((((C9612 * C3571 + C27854 * C3737 + C9611 * C3006 + C9456 * C3178) *
                 C28008 +
             (C9612 * C3569 + C27854 * C3735 + C9611 * C3001 + C9456 * C3175) *
                 C578) *
                C27880 +
            ((C15124 + C15125) * C28008 + (C15122 + C15123) * C578) * C27974) *
               C27768 +
           (((C13125 + C13124) * C28008 + (C13123 + C13122) * C578) * C27880 +
            ((C13121 + C13120) * C28008 + (C13119 + C13118) * C578) * C27974) *
               C27960) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                 C143 +
             (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                 C28010) *
                C27974 +
            ((C13118 + C13119) * C143 + (C13185 + C13186) * C28010) * C27880) *
               C27960 +
           (((C9631 + C9630) * C143 + (C9696 + C9697) * C28010) * C27974 +
            ((C15123 + C15122) * C143 + (C15196 + C15197) * C28010) * C27880) *
               C27768) *
              C28008 * C951 -
          ((((C9612 * C3627 + C27854 * C3790 + C9611 * C3063 + C9456 * C3243) *
                 C28010 +
             (C9612 * C3569 + C27854 * C3735 + C9611 * C3001 + C9456 * C3175) *
                 C143) *
                C27880 +
            ((C15197 + C15196) * C28010 + (C15122 + C15123) * C143) * C27974) *
               C27768 +
           (((C13188 + C13187) * C28010 + (C13123 + C13122) * C143) * C27880 +
            ((C13186 + C13185) * C28010 + (C13119 + C13118) * C143) * C27974) *
               C27960) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) *
                C1045 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C951 -
            (C13119 + C13118) * C1046 - (C13248 + C13249) * C952) *
               C27974 +
           ((C13118 + C13119) * C1045 + (C13249 + C13248) * C951 -
            (C13123 + C13122) * C1046 - (C13250 + C13251) * C952) *
               C27880) *
              C27960 +
          (((C9631 + C9630) * C1045 + (C9758 + C9759) * C951 -
            (C15122 + C15123) * C1046 - (C15269 + C15268) * C952) *
               C27974 +
           ((C15123 + C15122) * C1045 + (C15268 + C15269) * C951 -
            (C9612 * C3569 + C27854 * C3735 + C9611 * C3001 + C9456 * C3175) *
                C1046 -
            (C9612 * C3681 + C27854 * C3841 + C9611 * C3119 + C9456 * C3306) *
                C952) *
               C27880) *
              C27768) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C578 +
             (C6413 * C98 + C27974 * C410 + C6414 * C960 + C27880 * C1214) *
                 C28008) *
                C27960 +
            ((C6433 + C6432) * C578 + (C6435 + C6434) * C28008) * C27768) *
               C9456 +
           (((C8638 + C8639) * C578 + (C8640 + C8641) * C28008) * C27960 +
            ((C7997 + C7996) * C578 + (C7999 + C7998) * C28008) * C27768) *
               C27854) *
              C951 -
          ((((C6414 * C3571 + C27880 * C3895 + C6413 * C2491 + C27974 * C2837) *
                 C28008 +
             (C6414 * C3569 + C27880 * C3893 + C6413 * C2485 + C27974 * C2833) *
                 C578) *
                C27768 +
            ((C6414 * C3572 + C27880 * C3896 + C6413 * C2492 + C27974 * C2838) *
                 C28008 +
             (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                 C578) *
                C27960) *
               C27854 +
           (((C6414 * C3006 + C27880 * C3375 + C6413 * C959 + C27974 * C1213) *
                 C28008 +
             (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                 C578) *
                C27768 +
            ((C6414 * C3005 + C27880 * C3374 + C6413 * C960 + C27974 * C1214) *
                 C28008 +
             (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                 C578) *
                C27960) *
               C9456) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                 C143 +
             (C6413 * C144 + C27974 * C467 + C6414 * C1006 + C27880 * C1252) *
                 C28010) *
                C27960 +
            ((C6433 + C6432) * C143 + (C6498 + C6499) * C28010) * C27768) *
               C9456 +
           (((C8638 + C8639) * C143 + (C8713 + C8712) * C28010) * C27960 +
            ((C7997 + C7996) * C143 + (C8070 + C8071) * C28010) * C27768) *
               C27854) *
              C28008 * C951 -
          ((((C6414 * C3627 + C27880 * C3948 + C6413 * C2551 + C27974 * C2891) *
                 C28010 +
             (C6414 * C3569 + C27880 * C3893 + C6413 * C2485 + C27974 * C2833) *
                 C143) *
                C27768 +
            ((C6414 * C3628 + C27880 * C3947 + C6413 * C2552 + C27974 * C2892) *
                 C28010 +
             (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                 C143) *
                C27960) *
               C27854 +
           (((C6414 * C3063 + C27880 * C3446 + C6413 * C1005 + C27974 * C1251) *
                 C28010 +
             (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                 C143) *
                C27768 +
            ((C6414 * C3062 + C27880 * C3445 + C6413 * C1006 + C27974 * C1252) *
                 C28010 +
             (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                 C143) *
                C27960) *
               C9456) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6413 * C89 + C27974 * C405 + C6414 * C956 + C27880 * C1210) *
                C1045 +
            (C6413 * C189 + C27974 * C521 + C6414 * C1050 + C27880 * C1287) *
                C951 -
            (C6414 * C3000 + C27880 * C3371 + C6413 * C956 + C27974 * C1210) *
                C1046 -
            (C6414 * C3118 + C27880 * C3507 + C6413 * C1050 + C27974 * C1287) *
                C952) *
               C27960 +
           ((C6433 + C6432) * C1045 + (C6560 + C6561) * C951 -
            (C6414 * C3001 + C27880 * C3372 + C6413 * C955 + C27974 * C1209) *
                C1046 -
            (C6414 * C3119 + C27880 * C3508 + C6413 * C1049 + C27974 * C1288) *
                C952) *
               C27768) *
              C9456 +
          (((C8638 + C8639) * C1045 + (C8784 + C8785) * C951 -
            (C6414 * C3570 + C27880 * C3894 + C6413 * C2486 + C27974 * C2834) *
                C1046 -
            (C6414 * C3682 + C27880 * C4000 + C6413 * C2608 + C27974 * C2943) *
                C952) *
               C27960 +
           ((C7997 + C7996) * C1045 + (C8142 + C8143) * C951 -
            (C6414 * C3569 + C27880 * C3893 + C6413 * C2485 + C27974 * C2833) *
                C1046 -
            (C6414 * C3681 + C27880 * C3999 + C6413 * C2607 + C27974 * C2944) *
                C952) *
               C27768) *
              C27854) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                      C9460 * C91 + C9455 * C96) *
                         C87 +
                     (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
                      C9460 * C100 + C9455 * C106) *
                         C77 -
                     (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                      C9458 * C90 + C9453 * C95) *
                         C88 -
                     (C9460 * C101 + C9455 * C107 + C9459 * C100 +
                      C9454 * C106 + C9458 * C99 + C9453 * C105) *
                         C78) *
                        C9456 +
                    ((C9458 * C582 + C9453 * C590 + C9459 * C581 +
                      C9454 * C589 + C9460 * C580 + C9455 * C588) *
                         C87 +
                     (C9458 * C586 + C9453 * C594 + C9459 * C585 +
                      C9454 * C593 + C9460 * C584 + C9455 * C592) *
                         C77 -
                     (C9460 * C579 + C9455 * C587 + C9459 * C580 +
                      C9454 * C588 + C9458 * C581 + C9453 * C589) *
                         C88 -
                     (C9460 * C583 + C9455 * C591 + C9459 * C584 +
                      C9454 * C592 + C9458 * C585 + C9453 * C593) *
                         C78) *
                        C27854) *
                   C27816 * C28009 * C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C10886 * C89 + C27763 * C94) * C87 +
                     (C10886 * C98 + C27763 * C104) * C77 -
                     (C10886 * C90 + C27763 * C95) * C88 -
                     (C10886 * C99 + C27763 * C105) * C78) *
                        C10882 +
                    ((C10886 * C582 + C27763 * C590) * C87 +
                     (C10886 * C586 + C27763 * C594) * C77 -
                     (C10886 * C581 + C27763 * C589) * C88 -
                     (C10886 * C585 + C27763 * C593) * C78) *
                        C10883 +
                    ((C10886 * C1348 + C27763 * C1351) * C87 +
                     (C10886 * C1353 + C27763 * C1357) * C77 -
                     (C10886 * C1349 + C27763 * C1352) * C88 -
                     (C10886 * C1354 + C27763 * C1358) * C78) *
                        C10884 +
                    ((C10886 * C1918 + C27763 * C1922) * C87 +
                     (C10886 * C1920 + C27763 * C1924) * C77 -
                     (C10886 * C1917 + C27763 * C1921) * C88 -
                     (C10886 * C1919 + C27763 * C1923) * C78) *
                        C10885) *
                   C27816 * C28009 * C28010) /
                      (p * q * std::sqrt(p + q));
    d2eexy[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C9456 +
                     ((C9458 * C582 + C9453 * C590 + C9459 * C581 +
                       C9454 * C589 + C9460 * C580 + C9455 * C588) *
                          C143 +
                      (C9458 * C634 + C9453 * C638 + C9459 * C633 +
                       C9454 * C637 + C9460 * C632 + C9455 * C636) *
                          C28010) *
                         C27854) *
                        C27816 * C77 -
                    (((C9460 * C631 + C9455 * C635 + C9459 * C632 +
                       C9454 * C636 + C9458 * C633 + C9453 * C637) *
                          C28010 +
                      (C9460 * C579 + C9455 * C587 + C9459 * C580 +
                       C9454 * C588 + C9458 * C581 + C9453 * C589) *
                          C143) *
                         C27854 +
                     ((C9460 * C147 + C9455 * C152 + C9459 * C146 +
                       C9454 * C151 + C9458 * C145 + C9453 * C150) *
                          C28010 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C143) *
                         C9456) *
                        C27816 * C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C143 +
                      (C10886 * C144 + C27763 * C149) * C28010) *
                         C10882 +
                     ((C10886 * C582 + C27763 * C590) * C143 +
                      (C10886 * C634 + C27763 * C638) * C28010) *
                         C10883 +
                     ((C10886 * C1348 + C27763 * C1351) * C143 +
                      (C10886 * C1410 + C27763 * C1413) * C28010) *
                         C10884 +
                     ((C10886 * C1918 + C27763 * C1922) * C143 +
                      (C10886 * C2000 + C27763 * C2002) * C28010) *
                         C10885) *
                        C27816 * C77 -
                    (((C10886 * C1999 + C27763 * C2001) * C28010 +
                      (C10886 * C1917 + C27763 * C1921) * C143) *
                         C10885 +
                     ((C10886 * C1411 + C27763 * C1414) * C28010 +
                      (C10886 * C1349 + C27763 * C1352) * C143) *
                         C10884 +
                     ((C10886 * C633 + C27763 * C637) * C28010 +
                      (C10886 * C581 + C27763 * C589) * C143) *
                         C10883 +
                     ((C10886 * C145 + C27763 * C150) * C28010 +
                      (C10886 * C90 + C27763 * C95) * C143) *
                         C10882) *
                        C27816 * C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q));
    d2eexz[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C188 +
                      (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                       C9454 * C195 + C9460 * C191 + C9455 * C196) *
                          C28009) *
                         C9456 +
                     ((C9458 * C582 + C9453 * C590 + C9459 * C581 +
                       C9454 * C589 + C9460 * C580 + C9455 * C588) *
                          C188 +
                      (C9458 * C676 + C9453 * C680 + C9459 * C675 +
                       C9454 * C679 + C9460 * C674 + C9455 * C678) *
                          C28009) *
                         C27854) *
                        C27816 * C28010 * C77 -
                    (((C9460 * C673 + C9455 * C677 + C9459 * C674 +
                       C9454 * C678 + C9458 * C675 + C9453 * C679) *
                          C28009 +
                      (C9460 * C579 + C9455 * C587 + C9459 * C580 +
                       C9454 * C588 + C9458 * C581 + C9453 * C589) *
                          C188) *
                         C27854 +
                     ((C9460 * C192 + C9455 * C197 + C9459 * C191 +
                       C9454 * C196 + C9458 * C190 + C9453 * C195) *
                          C28009 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C188) *
                         C9456) *
                        C27816 * C28010 * C78)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C188 +
                      (C10886 * C189 + C27763 * C194) * C28009) *
                         C10882 +
                     ((C10886 * C582 + C27763 * C590) * C188 +
                      (C10886 * C676 + C27763 * C680) * C28009) *
                         C10883 +
                     ((C10886 * C1348 + C27763 * C1351) * C188 +
                      (C10886 * C1466 + C27763 * C1469) * C28009) *
                         C10884 +
                     ((C10886 * C1918 + C27763 * C1922) * C188 +
                      (C10886 * C2066 + C27763 * C2068) * C28009) *
                         C10885) *
                        C27816 * C28010 * C77 -
                    (((C10886 * C2065 + C27763 * C2067) * C28009 +
                      (C10886 * C1917 + C27763 * C1921) * C188) *
                         C10885 +
                     ((C10886 * C1467 + C27763 * C1470) * C28009 +
                      (C10886 * C1349 + C27763 * C1352) * C188) *
                         C10884 +
                     ((C10886 * C675 + C27763 * C679) * C28009 +
                      (C10886 * C581 + C27763 * C589) * C188) *
                         C10883 +
                     ((C10886 * C190 + C27763 * C195) * C28009 +
                      (C10886 * C90 + C27763 * C95) * C188) *
                         C10882) *
                        C27816 * C28010 * C78)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C87 +
           (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) * C77 -
           (C9630 + C9631) * C88 - (C9632 + C9633) * C78) *
              C27816 * C9453 +
          ((C9631 + C9630) * C87 + (C9633 + C9632) * C77 -
           (C9634 + C9635) * C88 - (C9636 + C9637) * C78) *
              C27816 * C9454 +
          ((C9635 + C9634) * C87 + (C9637 + C9636) * C77 -
           (C9612 * C579 + C27854 * C715 + C9611 * C92 + C9456 * C237) * C88 -
           (C9612 * C583 + C27854 * C719 + C9611 * C101 + C9456 * C242) * C78) *
              C27816 * C9455) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
           C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
              C87 +
          (C10989 * C98 + C10882 * C239 + C10990 * C586 + C10883 * C722 +
           C10991 * C1353 + C10884 * C1528 + C10992 * C1920 + C10885 * C2134) *
              C77 -
          (C10992 * C1917 + C10885 * C2131 + C10991 * C1349 + C10884 * C1526 +
           C10990 * C581 + C10883 * C717 + C10989 * C90 + C10882 * C235) *
              C88 -
          (C10992 * C1919 + C10885 * C2133 + C10991 * C1354 + C10884 * C1529 +
           C10990 * C585 + C10883 * C721 + C10989 * C99 + C10882 * C240) *
              C78) *
         C27816 * C27763 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C143 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C28010) *
               C27816 * C9453 +
           ((C9631 + C9630) * C143 + (C9696 + C9697) * C28010) * C27816 *
               C9454 +
           ((C9635 + C9634) * C143 + (C9698 + C9699) * C28010) * C27816 *
               C9455) *
              C77 -
          (((C9612 * C631 + C27854 * C760 + C9611 * C147 + C9456 * C299) *
                C28010 +
            (C9612 * C579 + C27854 * C715 + C9611 * C92 + C9456 * C237) *
                C143) *
               C27816 * C9455 +
           ((C9699 + C9698) * C28010 + (C9634 + C9635) * C143) * C27816 *
               C9454 +
           ((C9697 + C9696) * C28010 + (C9630 + C9631) * C143) * C27816 *
               C9453) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C143 +
           (C10989 * C144 + C10882 * C296 + C10990 * C634 + C10883 * C757 +
            C10991 * C1410 + C10884 * C1599 + C10992 * C2000 + C10885 * C2185) *
               C28010) *
              C27816 * C27763 * C77 -
          ((C10992 * C1999 + C10885 * C2186 + C10991 * C1411 + C10884 * C1600 +
            C10990 * C633 + C10883 * C758 + C10989 * C145 + C10882 * C297) *
               C28010 +
           (C10992 * C1917 + C10885 * C2131 + C10991 * C1349 + C10884 * C1526 +
            C10990 * C581 + C10883 * C717 + C10989 * C90 + C10882 * C235) *
               C143) *
              C27816 * C27763 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C188 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C28009) *
               C27816 * C9453 +
           ((C9631 + C9630) * C188 + (C9758 + C9759) * C28009) * C27816 *
               C9454 +
           ((C9635 + C9634) * C188 + (C9760 + C9761) * C28009) * C27816 *
               C9455) *
              C28010 * C77 -
          (((C9612 * C673 + C27854 * C795 + C9611 * C192 + C9456 * C353) *
                C28009 +
            (C9612 * C579 + C27854 * C715 + C9611 * C92 + C9456 * C237) *
                C188) *
               C27816 * C9455 +
           ((C9761 + C9760) * C28009 + (C9634 + C9635) * C188) * C27816 *
               C9454 +
           ((C9759 + C9758) * C28009 + (C9630 + C9631) * C188) * C27816 *
               C9453) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C188 +
           (C10989 * C189 + C10882 * C350 + C10990 * C676 + C10883 * C798 +
            C10991 * C1466 + C10884 * C1661 + C10992 * C2066 + C10885 * C2238) *
               C28009) *
              C27816 * C27763 * C28010 * C77 -
          ((C10992 * C2065 + C10885 * C2237 + C10991 * C1467 + C10884 * C1662 +
            C10990 * C675 + C10883 * C797 + C10989 * C190 + C10882 * C351) *
               C28009 +
           (C10992 * C1917 + C10885 * C2131 + C10991 * C1349 + C10884 * C1526 +
            C10990 * C581 + C10883 * C717 + C10989 * C90 + C10882 * C235) *
               C188) *
              C27816 * C27763 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eezx[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C87 +
            (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
               C9453 +
           (C428 * C87 + C429 * C77 - C430 * C88 - C431 * C78) * C9454 +
           (C430 * C87 + C431 * C77 - C432 * C88 - C433 * C78) * C9455) *
              C9456 +
          ((C2306 * C87 + C2307 * C77 - C1738 * C88 - C1739 * C78) * C9453 +
           (C1738 * C87 + C1739 * C77 - C4980 * C88 - C4981 * C78) * C9454 +
           (C4980 * C87 + C4981 * C77 - (C404 * C579 + C27816 * C833) * C88 -
            (C404 * C583 + C27816 * C837) * C78) *
               C9455) *
              C27854) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C87 +
           (C404 * C98 + C27816 * C410) * C77 - C428 * C88 - C429 * C78) *
              C27763 * C10882 +
          (C2306 * C87 + C2307 * C77 - C1738 * C88 - C1739 * C78) * C27763 *
              C10883 +
          (C2308 * C87 + C2309 * C77 - C1740 * C88 - C1741 * C78) * C27763 *
              C10884 +
          ((C404 * C1918 + C27816 * C2290) * C87 +
           (C404 * C1920 + C27816 * C2292) * C77 -
           (C404 * C1917 + C27816 * C2289) * C88 -
           (C404 * C1919 + C27816 * C2291) * C78) *
              C27763 * C10885) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C143 +
                       (C404 * C144 + C27816 * C467) * C28010) *
                          C9453 +
                      (C473 + C485) * C9454 + (C476 + C486) * C9455) *
                         C9456 +
                     ((C2306 * C143 + C2370 * C28010) * C9453 +
                      (C1795 + C1803) * C9454 + (C5032 + C5036) * C9455) *
                         C27854) *
                        C77 -
                    ((((C404 * C631 + C27816 * C878) * C28010 +
                       (C404 * C579 + C27816 * C833) * C143) *
                          C9455 +
                      (C5036 + C5032) * C9454 + (C1803 + C1795) * C9453) *
                         C27854 +
                     ((C487 + C479) * C9455 + (C486 + C476) * C9454 +
                      (C485 + C473) * C9453) *
                         C9456) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C143 +
                      (C404 * C144 + C27816 * C467) * C28010) *
                         C27763 * C10882 +
                     (C2306 * C143 + C2370 * C28010) * C27763 * C10883 +
                     (C2308 * C143 + C2371 * C28010) * C27763 * C10884 +
                     ((C404 * C1918 + C27816 * C2290) * C143 +
                      (C404 * C2000 + C27816 * C2363) * C28010) *
                         C27763 * C10885) *
                        C77 -
                    (((C404 * C1999 + C27816 * C2364) * C28010 +
                      (C404 * C1917 + C27816 * C2289) * C143) *
                         C27763 * C10885 +
                     (C1804 + C1798) * C27763 * C10884 +
                     (C1803 + C1795) * C27763 * C10883 +
                     (C485 + C473) * C27763 * C10882) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q));
    d2eezz[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C188 +
                       (C404 * C189 + C27816 * C521) * C28009) *
                          C9453 +
                      (C527 + C539) * C9454 + (C530 + C540) * C9455) *
                         C9456 +
                     ((C2424 + C2432) * C9453 + (C1858 + C1866) * C9454 +
                      (C5087 + C5091) * C9455) *
                         C27854) *
                        C28010 * C77 -
                    ((((C404 * C673 + C27816 * C913) * C28009 +
                       (C404 * C579 + C27816 * C833) * C188) *
                          C9455 +
                      (C5091 + C5087) * C9454 + (C1866 + C1858) * C9453) *
                         C27854 +
                     ((C541 + C533) * C9455 + (C540 + C530) * C9454 +
                      (C539 + C527) * C9453) *
                         C9456) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C188 +
                      (C404 * C189 + C27816 * C521) * C28009) *
                         C27763 * C10882 +
                     (C2424 + C2432) * C27763 * C10883 +
                     (C2427 + C2433) * C27763 * C10884 +
                     ((C404 * C1918 + C27816 * C2290) * C188 +
                      (C404 * C2066 + C27816 * C2422) * C28009) *
                         C27763 * C10885) *
                        C28010 * C77 -
                    (((C404 * C2065 + C27816 * C2421) * C28009 +
                      (C404 * C1917 + C27816 * C2289) * C188) *
                         C27763 * C10885 +
                     (C1867 + C1861) * C27763 * C10884 +
                     (C1866 + C1858) * C27763 * C10883 +
                     (C539 + C527) * C27763 * C10882) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C578 +
            (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
             C9460 * C100 + C9455 * C106) *
                C28008) *
               C9456 +
           ((C9974 + C9975 + C9976) * C578 + (C9977 + C9978 + C9979) * C28008) *
               C27854) *
              C27816 * C28009 * C576 -
          (((C9460 * C1356 + C9455 * C1359 + C9459 * C1354 + C9454 * C1358 +
             C9458 * C1353 + C9453 * C1357) *
                C28008 +
            (C9460 * C1350 + C9455 * C1355 + C9459 * C1349 + C9454 * C1352 +
             C9458 * C1348 + C9453 * C1351) *
                C578) *
               C27854 +
           ((C9979 + C9978 + C9977) * C28008 + (C9976 + C9975 + C9974) * C578) *
               C9456) *
              C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C578 +
            (C10886 * C98 + C27763 * C104) * C28008) *
               C10882 +
           (C11220 + C11221) * C10883 + (C11222 + C11223) * C10884 +
           (C11224 + C11225) * C10885) *
              C27816 * C28009 * C576 -
          (((C10886 * C11198 + C27763 * C11200) * C28008 +
            (C10886 * C11197 + C27763 * C11199) * C578) *
               C10885 +
           (C11225 + C11224) * C10884 + (C11223 + C11222) * C10883 +
           (C11221 + C11220) * C10882) *
              C27816 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C629 +
           (C9458 * C144 + C9453 * C149 + C9459 * C145 + C9454 * C150 +
            C9460 * C146 + C9455 * C151) *
               C576 -
           (C9976 + C9975 + C9974) * C630 - (C10036 + C10037 + C10038) * C577) *
              C9456 +
          ((C9974 + C9975 + C9976) * C629 + (C10038 + C10037 + C10036) * C576 -
           (C9460 * C1350 + C9455 * C1355 + C9459 * C1349 + C9454 * C1352 +
            C9458 * C1348 + C9453 * C1351) *
               C630 -
           (C9460 * C1412 + C9455 * C1415 + C9459 * C1411 + C9454 * C1414 +
            C9458 * C1410 + C9453 * C1413) *
               C577) *
              C27854) *
         C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C629 +
           (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
           C11268 * C577) *
              C10882 +
          (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
              C10883 +
          (C11216 * C629 + C11269 * C576 - C11218 * C630 - C11270 * C577) *
              C10884 +
          (C11218 * C629 + C11270 * C576 -
           (C10886 * C11197 + C27763 * C11199) * C630 -
           (C10886 * C11259 + C27763 * C11260) * C577) *
              C10885) *
         C27816 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[28] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C188 +
                      (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                       C9454 * C195 + C9460 * C191 + C9455 * C196) *
                          C28009) *
                         C9456 +
                     ((C9974 + C9975 + C9976) * C188 +
                      (C10095 + C10096 + C10097) * C28009) *
                         C27854) *
                        C27816 * C576 -
                    (((C9460 * C1468 + C9455 * C1471 + C9459 * C1467 +
                       C9454 * C1470 + C9458 * C1466 + C9453 * C1469) *
                          C28009 +
                      (C9460 * C1350 + C9455 * C1355 + C9459 * C1349 +
                       C9454 * C1352 + C9458 * C1348 + C9453 * C1351) *
                          C188) *
                         C27854 +
                     ((C10097 + C10096 + C10095) * C28009 +
                      (C9976 + C9975 + C9974) * C188) *
                         C9456) *
                        C27816 * C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C188 +
                      (C10886 * C189 + C27763 * C194) * C28009) *
                         C10882 +
                     (C11307 + C11319) * C10883 + (C11310 + C11320) * C10884 +
                     (C11313 + C11321) * C10885) *
                        C27816 * C576 -
                    (((C10886 * C11304 + C27763 * C11305) * C28009 +
                      (C10886 * C11197 + C27763 * C11199) * C188) *
                         C10885 +
                     (C11321 + C11313) * C10884 + (C11320 + C11310) * C10883 +
                     (C11319 + C11307) * C10882) *
                        C27816 * C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C578 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                C28008) *
               C27816 * C9453 +
           ((C9631 + C9630) * C578 + (C9633 + C9632) * C28008) * C27816 *
               C9454 +
           ((C9635 + C9634) * C578 + (C9637 + C9636) * C28008) * C27816 *
               C9455) *
              C28009 * C576 -
          (((C9612 * C1356 + C27854 * C1530 + C9611 * C584 + C9456 * C720) *
                C28008 +
            (C9612 * C1350 + C27854 * C1527 + C9611 * C580 + C9456 * C716) *
                C578) *
               C27816 * C9455 +
           ((C9612 * C1354 + C27854 * C1529 + C9611 * C585 + C9456 * C721) *
                C28008 +
            (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                C578) *
               C27816 * C9454 +
           ((C9612 * C1353 + C27854 * C1528 + C9611 * C586 + C9456 * C722) *
                C28008 +
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C578) *
               C27816 * C9453) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C578 +
           (C10989 * C98 + C10882 * C239 + C10990 * C586 + C10883 * C722 +
            C10991 * C1353 + C10884 * C1528 + C10992 * C1920 + C10885 * C2134) *
               C28008) *
              C27816 * C27763 * C28009 * C576 -
          ((C10992 * C11198 + C10885 * C11356 + C10991 * C1920 +
            C10884 * C2134 + C10990 * C1353 + C10883 * C1528 + C10989 * C586 +
            C10882 * C722) *
               C28008 +
           (C10992 * C11197 + C10885 * C11355 + C10991 * C1918 +
            C10884 * C2132 + C10990 * C1348 + C10883 * C1525 + C10989 * C582 +
            C10882 * C718) *
               C578) *
              C27816 * C27763 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C629 +
           (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) * C576 -
           (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
               C630 -
           (C9612 * C1410 + C27854 * C1599 + C9611 * C634 + C9456 * C757) *
               C577) *
              C27816 * C9453 +
          ((C9631 + C9630) * C629 + (C9696 + C9697) * C576 -
           (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
               C630 -
           (C9612 * C1411 + C27854 * C1600 + C9611 * C633 + C9456 * C758) *
               C577) *
              C27816 * C9454 +
          ((C9635 + C9634) * C629 + (C9698 + C9699) * C576 -
           (C9612 * C1350 + C27854 * C1527 + C9611 * C580 + C9456 * C716) *
               C630 -
           (C9612 * C1412 + C27854 * C1601 + C9611 * C632 + C9456 * C759) *
               C577) *
              C27816 * C9455) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
           C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
              C629 +
          (C10989 * C144 + C10882 * C296 + C10990 * C634 + C10883 * C757 +
           C10991 * C1410 + C10884 * C1599 + C10992 * C2000 + C10885 * C2185) *
              C576 -
          (C10992 * C11197 + C10885 * C11355 + C10991 * C1918 + C10884 * C2132 +
           C10990 * C1348 + C10883 * C1525 + C10989 * C582 + C10882 * C718) *
              C630 -
          (C10992 * C11259 + C10885 * C11391 + C10991 * C2000 + C10884 * C2185 +
           C10990 * C1410 + C10883 * C1599 + C10989 * C634 + C10882 * C757) *
              C577) *
         C27816 * C27763 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C188 +
            (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) *
                C28009) *
               C27816 * C9453 +
           ((C9631 + C9630) * C188 + (C9758 + C9759) * C28009) * C27816 *
               C9454 +
           ((C9635 + C9634) * C188 + (C9760 + C9761) * C28009) * C27816 *
               C9455) *
              C576 -
          (((C9612 * C1468 + C27854 * C1663 + C9611 * C674 + C9456 * C796) *
                C28009 +
            (C9612 * C1350 + C27854 * C1527 + C9611 * C580 + C9456 * C716) *
                C188) *
               C27816 * C9455 +
           ((C9612 * C1467 + C27854 * C1662 + C9611 * C675 + C9456 * C797) *
                C28009 +
            (C9612 * C1349 + C27854 * C1526 + C9611 * C581 + C9456 * C717) *
                C188) *
               C27816 * C9454 +
           ((C9612 * C1466 + C27854 * C1661 + C9611 * C676 + C9456 * C798) *
                C28009 +
            (C9612 * C1348 + C27854 * C1525 + C9611 * C582 + C9456 * C718) *
                C188) *
               C27816 * C9453) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C188 +
           (C10989 * C189 + C10882 * C350 + C10990 * C676 + C10883 * C798 +
            C10991 * C1466 + C10884 * C1661 + C10992 * C2066 + C10885 * C2238) *
               C28009) *
              C27816 * C27763 * C576 -
          ((C10992 * C11304 + C10885 * C11426 + C10991 * C2066 +
            C10884 * C2238 + C10990 * C1466 + C10883 * C1661 + C10989 * C676 +
            C10882 * C798) *
               C28009 +
           (C10992 * C11197 + C10885 * C11355 + C10991 * C1918 +
            C10884 * C2132 + C10990 * C1348 + C10883 * C1525 + C10989 * C582 +
            C10882 * C718) *
               C188) *
              C27816 * C27763 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[28] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C578 +
                       (C404 * C98 + C27816 * C410) * C28008) *
                          C9453 +
                      (C428 * C578 + C429 * C28008) * C9454 +
                      (C430 * C578 + C431 * C28008) * C9455) *
                         C9456 +
                     ((C2310 + C2311) * C9453 + (C2298 + C2299) * C9454 +
                      (C5478 + C5479) * C9455) *
                         C27854) *
                        C28009 * C576 -
                    ((((C404 * C1356 + C27816 * C1728) * C28008 +
                       (C404 * C1350 + C27816 * C1725) * C578) *
                          C9455 +
                      (C2305 + C2304) * C9454 + (C2313 + C2312) * C9453) *
                         C27854 +
                     ((C5479 + C5478) * C9455 + (C2299 + C2298) * C9454 +
                      (C2311 + C2310) * C9453) *
                         C9456) *
                        C28009 * C577)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C578 +
                      (C404 * C98 + C27816 * C410) * C28008) *
                         C27763 * C10882 +
                     (C2310 + C2311) * C27763 * C10883 +
                     (C2312 + C2313) * C27763 * C10884 +
                     (C11470 + C11471) * C27763 * C10885) *
                        C28009 * C576 -
                    (((C404 * C11198 + C27816 * C11462) * C28008 +
                      (C404 * C11197 + C27816 * C11461) * C578) *
                         C27763 * C10885 +
                     (C11471 + C11470) * C27763 * C10884 +
                     (C2313 + C2312) * C27763 * C10883 +
                     (C2311 + C2310) * C27763 * C10882) *
                        C28009 * C577)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C404 * C89 + C27816 * C405) * C629 +
            (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 -
            C2370 * C577) *
               C9453 +
           (C428 * C629 + C482 * C576 - C1738 * C630 - C1801 * C577) * C9454 +
           (C430 * C629 + C483 * C576 - C4980 * C630 - C5035 * C577) * C9455) *
              C9456 +
          ((C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) * C9453 +
           (C1738 * C629 + C1801 * C576 - C1740 * C630 - C1802 * C577) * C9454 +
           (C4980 * C629 + C5035 * C576 -
            (C404 * C1350 + C27816 * C1725) * C630 -
            (C404 * C1412 + C27816 * C1793) * C577) *
               C9455) *
              C27854) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C404 * C89 + C27816 * C405) * C629 +
           (C404 * C144 + C27816 * C467) * C576 - C2306 * C630 - C2370 * C577) *
              C27763 * C10882 +
          (C2306 * C629 + C2370 * C576 - C2308 * C630 - C2371 * C577) * C27763 *
              C10883 +
          (C2308 * C629 + C2371 * C576 - C11468 * C630 - C11509 * C577) *
              C27763 * C10884 +
          (C11468 * C629 + C11509 * C576 -
           (C404 * C11197 + C27816 * C11461) * C630 -
           (C404 * C11259 + C27816 * C11505) * C577) *
              C27763 * C10885) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[28] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C188 +
                       (C404 * C189 + C27816 * C521) * C28009) *
                          C9453 +
                      (C527 + C539) * C9454 + (C530 + C540) * C9455) *
                         C9456 +
                     ((C2424 + C2432) * C9453 + (C1858 + C1866) * C9454 +
                      (C5087 + C5091) * C9455) *
                         C27854) *
                        C576 -
                    ((((C404 * C1468 + C27816 * C1856) * C28009 +
                       (C404 * C1350 + C27816 * C1725) * C188) *
                          C9455 +
                      (C1867 + C1861) * C9454 + (C2433 + C2427) * C9453) *
                         C27854 +
                     ((C5091 + C5087) * C9455 + (C1866 + C1858) * C9454 +
                      (C2432 + C2424) * C9453) *
                         C9456) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C188 +
                      (C404 * C189 + C27816 * C521) * C28009) *
                         C27763 * C10882 +
                     (C2424 + C2432) * C27763 * C10883 +
                     (C2427 + C2433) * C27763 * C10884 +
                     (C11545 + C11549) * C27763 * C10885) *
                        C576 -
                    (((C404 * C11304 + C27816 * C11543) * C28009 +
                      (C404 * C11197 + C27816 * C11461) * C188) *
                         C27763 * C10885 +
                     (C11549 + C11545) * C27763 * C10884 +
                     (C2433 + C2427) * C27763 * C10883 +
                     (C2432 + C2424) * C27763 * C10882) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q));
    d2eexx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C578 +
            (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
             C9460 * C100 + C9455 * C106) *
                C28008) *
               C9456 +
           ((C9974 + C9975 + C9976) * C578 + (C9977 + C9978 + C9979) * C28008) *
               C27854) *
              C27816 * C951 -
          (((C9460 * C5630 + C9455 * C5632 + C9459 * C2491 + C9454 * C2497 +
             C9458 * C2492 + C9453 * C2498) *
                C28008 +
            (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
             C9458 * C2486 + C9453 * C2494) *
                C578) *
               C27854 +
           ((C9460 * C958 + C9455 * C966 + C9459 * C959 + C9454 * C967 +
             C9458 * C960 + C9453 * C968) *
                C28008 +
            (C9460 * C954 + C9455 * C962 + C9459 * C955 + C9454 * C963 +
             C9458 * C956 + C9453 * C964) *
                C578) *
               C9456) *
              C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C578 +
            (C10886 * C98 + C27763 * C104) * C28008) *
               C10882 +
           (C11220 + C11221) * C10883 + (C11222 + C11223) * C10884 +
           (C11224 + C11225) * C10885) *
              C27816 * C951 -
          (((C10886 * C11584 + C27763 * C11586) * C28008 +
            (C10886 * C11583 + C27763 * C11585) * C578) *
               C10885 +
           ((C10886 * C2488 + C27763 * C2496) * C28008 +
            (C10886 * C2484 + C27763 * C2490) * C578) *
               C10884 +
           ((C10886 * C2492 + C27763 * C2498) * C28008 +
            (C10886 * C2486 + C27763 * C2494) * C578) *
               C10883 +
           ((C10886 * C960 + C27763 * C968) * C28008 +
            (C10886 * C956 + C27763 * C964) * C578) *
               C10882) *
              C27816 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C9456 +
                     ((C9974 + C9975 + C9976) * C143 +
                      (C10038 + C10037 + C10036) * C28010) *
                         C27854) *
                        C27816 * C28008 * C951 -
                    (((C9460 * C5683 + C9455 * C5684 + C9459 * C2551 +
                       C9454 * C2555 + C9458 * C2552 + C9453 * C2556) *
                          C28010 +
                      (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 +
                       C9454 * C2493 + C9458 * C2486 + C9453 * C2494) *
                          C143) *
                         C27854 +
                     ((C9460 * C1004 + C9455 * C1008 + C9459 * C1005 +
                       C9454 * C1009 + C9458 * C1006 + C9453 * C1010) *
                          C28010 +
                      (C9460 * C954 + C9455 * C962 + C9459 * C955 +
                       C9454 * C963 + C9458 * C956 + C9453 * C964) *
                          C143) *
                         C9456) *
                        C27816 * C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C143 +
                      (C10886 * C144 + C27763 * C149) * C28010) *
                         C10882 +
                     (C11214 * C143 + C11268 * C28010) * C10883 +
                     (C11216 * C143 + C11269 * C28010) * C10884 +
                     (C11218 * C143 + C11270 * C28010) * C10885) *
                        C27816 * C28008 * C951 -
                    (((C10886 * C11621 + C27763 * C11622) * C28010 +
                      (C10886 * C11583 + C27763 * C11585) * C143) *
                         C10885 +
                     ((C10886 * C2550 + C27763 * C2554) * C28010 +
                      (C10886 * C2484 + C27763 * C2490) * C143) *
                         C10884 +
                     ((C10886 * C2552 + C27763 * C2556) * C28010 +
                      (C10886 * C2486 + C27763 * C2494) * C143) *
                         C10883 +
                     ((C10886 * C1006 + C27763 * C1010) * C28010 +
                      (C10886 * C956 + C27763 * C964) * C143) *
                         C10882) *
                        C27816 * C28008 * C952)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C1045 +
           (C9458 * C189 + C9453 * C194 + C9459 * C190 + C9454 * C195 +
            C9460 * C191 + C9455 * C196) *
               C951 -
           (C9460 * C954 + C9455 * C962 + C9459 * C955 + C9454 * C963 +
            C9458 * C956 + C9453 * C964) *
               C1046 -
           (C9460 * C1048 + C9455 * C1052 + C9459 * C1049 + C9454 * C1053 +
            C9458 * C1050 + C9453 * C1054) *
               C952) *
              C9456 +
          ((C9974 + C9975 + C9976) * C1045 + (C10095 + C10096 + C10097) * C951 -
           (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
            C9458 * C2486 + C9453 * C2494) *
               C1046 -
           (C9460 * C5735 + C9455 * C5736 + C9459 * C2607 + C9454 * C2611 +
            C9458 * C2608 + C9453 * C2612) *
               C952) *
              C27854) *
         C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C1045 +
           (C10886 * C189 + C27763 * C194) * C951 -
           (C10886 * C956 + C27763 * C964) * C1046 -
           (C10886 * C1050 + C27763 * C1054) * C952) *
              C10882 +
          (C11214 * C1045 + C11316 * C951 -
           (C10886 * C2486 + C27763 * C2494) * C1046 -
           (C10886 * C2608 + C27763 * C2612) * C952) *
              C10883 +
          (C11216 * C1045 + C11317 * C951 -
           (C10886 * C2484 + C27763 * C2490) * C1046 -
           (C10886 * C2610 + C27763 * C2614) * C952) *
              C10884 +
          (C11218 * C1045 + C11318 * C951 -
           (C10886 * C11583 + C27763 * C11585) * C1046 -
           (C10886 * C11657 + C27763 * C11658) * C952) *
              C10885) *
         C27816 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C578 +
            (C9611 * C98 + C9456 * C239 + C9612 * C586 + C27854 * C722) *
                C28008) *
               C27816 * C9453 +
           ((C9631 + C9630) * C578 + (C9633 + C9632) * C28008) * C27816 *
               C9454 +
           ((C9635 + C9634) * C578 + (C9637 + C9636) * C28008) * C27816 *
               C9455) *
              C951 -
          (((C9612 * C5630 + C27854 * C5788 + C9611 * C958 + C9456 * C1094) *
                C28008 +
            (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                C578) *
               C27816 * C9455 +
           ((C9612 * C2491 + C27854 * C2670 + C9611 * C959 + C9456 * C1095) *
                C28008 +
            (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
                C578) *
               C27816 * C9454 +
           ((C9612 * C2492 + C27854 * C2672 + C9611 * C960 + C9456 * C1096) *
                C28008 +
            (C9612 * C2486 + C27854 * C2668 + C9611 * C956 + C9456 * C1092) *
                C578) *
               C27816 * C9453) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C578 +
           (C10989 * C98 + C10882 * C239 + C10990 * C586 + C10883 * C722 +
            C10991 * C1353 + C10884 * C1528 + C10992 * C1920 + C10885 * C2134) *
               C28008) *
              C27816 * C27763 * C951 -
          ((C10992 * C11584 + C10885 * C11694 + C10991 * C2488 +
            C10884 * C2671 + C10990 * C2492 + C10883 * C2672 + C10989 * C960 +
            C10882 * C1096) *
               C28008 +
           (C10992 * C11583 + C10885 * C11693 + C10991 * C2484 +
            C10884 * C2667 + C10990 * C2486 + C10883 * C2668 + C10989 * C956 +
            C10882 * C1092) *
               C578) *
              C27816 * C27763 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C143 +
            (C9611 * C144 + C9456 * C296 + C9612 * C634 + C27854 * C757) *
                C28010) *
               C27816 * C9453 +
           ((C9631 + C9630) * C143 + (C9696 + C9697) * C28010) * C27816 *
               C9454 +
           ((C9635 + C9634) * C143 + (C9698 + C9699) * C28010) * C27816 *
               C9455) *
              C28008 * C951 -
          (((C9612 * C5683 + C27854 * C5839 + C9611 * C1004 + C9456 * C1132) *
                C28010 +
            (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
                C143) *
               C27816 * C9455 +
           ((C9612 * C2551 + C27854 * C2724 + C9611 * C1005 + C9456 * C1133) *
                C28010 +
            (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
                C143) *
               C27816 * C9454 +
           ((C9612 * C2552 + C27854 * C2726 + C9611 * C1006 + C9456 * C1134) *
                C28010 +
            (C9612 * C2486 + C27854 * C2668 + C9611 * C956 + C9456 * C1092) *
                C143) *
               C27816 * C9453) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
            C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
               C143 +
           (C10989 * C144 + C10882 * C296 + C10990 * C634 + C10883 * C757 +
            C10991 * C1410 + C10884 * C1599 + C10992 * C2000 + C10885 * C2185) *
               C28010) *
              C27816 * C27763 * C28008 * C951 -
          ((C10992 * C11621 + C10885 * C11729 + C10991 * C2550 +
            C10884 * C2725 + C10990 * C2552 + C10883 * C2726 + C10989 * C1006 +
            C10882 * C1134) *
               C28010 +
           (C10992 * C11583 + C10885 * C11693 + C10991 * C2484 +
            C10884 * C2667 + C10990 * C2486 + C10883 * C2668 + C10989 * C956 +
            C10882 * C1092) *
               C143) *
              C27816 * C27763 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9611 * C89 + C9456 * C234 + C9612 * C582 + C27854 * C718) * C1045 +
           (C9611 * C189 + C9456 * C350 + C9612 * C676 + C27854 * C798) * C951 -
           (C9612 * C2486 + C27854 * C2668 + C9611 * C956 + C9456 * C1092) *
               C1046 -
           (C9612 * C2608 + C27854 * C2778 + C9611 * C1050 + C9456 * C1169) *
               C952) *
              C27816 * C9453 +
          ((C9631 + C9630) * C1045 + (C9758 + C9759) * C951 -
           (C9612 * C2485 + C27854 * C2666 + C9611 * C955 + C9456 * C1091) *
               C1046 -
           (C9612 * C2607 + C27854 * C2780 + C9611 * C1049 + C9456 * C1170) *
               C952) *
              C27816 * C9454 +
          ((C9635 + C9634) * C1045 + (C9760 + C9761) * C951 -
           (C9612 * C5629 + C27854 * C5787 + C9611 * C954 + C9456 * C1090) *
               C1046 -
           (C9612 * C5735 + C27854 * C5890 + C9611 * C1048 + C9456 * C1171) *
               C952) *
              C27816 * C9455) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C10989 * C89 + C10882 * C234 + C10990 * C582 + C10883 * C718 +
           C10991 * C1348 + C10884 * C1525 + C10992 * C1918 + C10885 * C2132) *
              C1045 +
          (C10989 * C189 + C10882 * C350 + C10990 * C676 + C10883 * C798 +
           C10991 * C1466 + C10884 * C1661 + C10992 * C2066 + C10885 * C2238) *
              C951 -
          (C10992 * C11583 + C10885 * C11693 + C10991 * C2484 + C10884 * C2667 +
           C10990 * C2486 + C10883 * C2668 + C10989 * C956 + C10882 * C1092) *
              C1046 -
          (C10992 * C11657 + C10885 * C11764 + C10991 * C2610 + C10884 * C2777 +
           C10990 * C2608 + C10883 * C2778 + C10989 * C1050 + C10882 * C1169) *
              C952) *
         C27816 * C27763 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C578 +
                       (C404 * C98 + C27816 * C410) * C28008) *
                          C9453 +
                      (C428 * C578 + C429 * C28008) * C9454 +
                      (C430 * C578 + C431 * C28008) * C9455) *
                         C9456 +
                     ((C2310 + C2311) * C9453 + (C2298 + C2299) * C9454 +
                      (C5478 + C5479) * C9455) *
                         C27854) *
                        C951 -
                    ((((C404 * C5630 + C27816 * C5942) * C28008 +
                       (C404 * C5629 + C27816 * C5941) * C578) *
                          C9455 +
                      ((C404 * C2491 + C27816 * C2837) * C28008 +
                       (C404 * C2485 + C27816 * C2833) * C578) *
                          C9454 +
                      ((C404 * C2492 + C27816 * C2838) * C28008 +
                       (C404 * C2486 + C27816 * C2834) * C578) *
                          C9453) *
                         C27854 +
                     (((C404 * C958 + C27816 * C1212) * C28008 +
                       (C404 * C954 + C27816 * C1208) * C578) *
                          C9455 +
                      ((C404 * C959 + C27816 * C1213) * C28008 +
                       (C404 * C955 + C27816 * C1209) * C578) *
                          C9454 +
                      ((C404 * C960 + C27816 * C1214) * C28008 +
                       (C404 * C956 + C27816 * C1210) * C578) *
                          C9453) *
                         C9456) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C578 +
                      (C404 * C98 + C27816 * C410) * C28008) *
                         C27763 * C10882 +
                     (C2310 + C2311) * C27763 * C10883 +
                     (C2312 + C2313) * C27763 * C10884 +
                     (C11470 + C11471) * C27763 * C10885) *
                        C951 -
                    (((C404 * C11584 + C27816 * C11800) * C28008 +
                      (C404 * C11583 + C27816 * C11799) * C578) *
                         C27763 * C10885 +
                     ((C404 * C2488 + C27816 * C2836) * C28008 +
                      (C404 * C2484 + C27816 * C2832) * C578) *
                         C27763 * C10884 +
                     ((C404 * C2492 + C27816 * C2838) * C28008 +
                      (C404 * C2486 + C27816 * C2834) * C578) *
                         C27763 * C10883 +
                     ((C404 * C960 + C27816 * C1214) * C28008 +
                      (C404 * C956 + C27816 * C1210) * C578) *
                         C27763 * C10882) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q));
    d2eezy[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C404 * C89 + C27816 * C405) * C143 +
                       (C404 * C144 + C27816 * C467) * C28010) *
                          C9453 +
                      (C473 + C485) * C9454 + (C476 + C486) * C9455) *
                         C9456 +
                     ((C2306 * C143 + C2370 * C28010) * C9453 +
                      (C1795 + C1803) * C9454 + (C5032 + C5036) * C9455) *
                         C27854) *
                        C28008 * C951 -
                    ((((C404 * C5683 + C27816 * C5993) * C28010 +
                       (C404 * C5629 + C27816 * C5941) * C143) *
                          C9455 +
                      ((C404 * C2551 + C27816 * C2891) * C28010 +
                       (C404 * C2485 + C27816 * C2833) * C143) *
                          C9454 +
                      ((C404 * C2552 + C27816 * C2892) * C28010 +
                       (C404 * C2486 + C27816 * C2834) * C143) *
                          C9453) *
                         C27854 +
                     (((C404 * C1004 + C27816 * C1250) * C28010 +
                       (C404 * C954 + C27816 * C1208) * C143) *
                          C9455 +
                      ((C404 * C1005 + C27816 * C1251) * C28010 +
                       (C404 * C955 + C27816 * C1209) * C143) *
                          C9454 +
                      ((C404 * C1006 + C27816 * C1252) * C28010 +
                       (C404 * C956 + C27816 * C1210) * C143) *
                          C9453) *
                         C9456) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C143 +
                      (C404 * C144 + C27816 * C467) * C28010) *
                         C27763 * C10882 +
                     (C2306 * C143 + C2370 * C28010) * C27763 * C10883 +
                     (C2308 * C143 + C2371 * C28010) * C27763 * C10884 +
                     (C11468 * C143 + C11509 * C28010) * C27763 * C10885) *
                        C28008 * C951 -
                    (((C404 * C11621 + C27816 * C11835) * C28010 +
                      (C404 * C11583 + C27816 * C11799) * C143) *
                         C27763 * C10885 +
                     ((C404 * C2550 + C27816 * C2890) * C28010 +
                      (C404 * C2484 + C27816 * C2832) * C143) *
                         C27763 * C10884 +
                     ((C404 * C2552 + C27816 * C2892) * C28010 +
                      (C404 * C2486 + C27816 * C2834) * C143) *
                         C27763 * C10883 +
                     ((C404 * C1006 + C27816 * C1252) * C28010 +
                      (C404 * C956 + C27816 * C1210) * C143) *
                         C27763 * C10882) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C404 * C89 + C27816 * C405) * C1045 +
                      (C404 * C189 + C27816 * C521) * C951 -
                      (C404 * C956 + C27816 * C1210) * C1046 -
                      (C404 * C1050 + C27816 * C1287) * C952) *
                         C9453 +
                     (C428 * C1045 + C536 * C951 -
                      (C404 * C955 + C27816 * C1209) * C1046 -
                      (C404 * C1049 + C27816 * C1288) * C952) *
                         C9454 +
                     (C430 * C1045 + C537 * C951 -
                      (C404 * C954 + C27816 * C1208) * C1046 -
                      (C404 * C1048 + C27816 * C1289) * C952) *
                         C9455) *
                        C9456 +
                    ((C2306 * C1045 + C2430 * C951 -
                      (C404 * C2486 + C27816 * C2834) * C1046 -
                      (C404 * C2608 + C27816 * C2943) * C952) *
                         C9453 +
                     (C1738 * C1045 + C1864 * C951 -
                      (C404 * C2485 + C27816 * C2833) * C1046 -
                      (C404 * C2607 + C27816 * C2944) * C952) *
                         C9454 +
                     (C4980 * C1045 + C5090 * C951 -
                      (C404 * C5629 + C27816 * C5941) * C1046 -
                      (C404 * C5735 + C27816 * C6044) * C952) *
                         C9455) *
                        C27854) *
                   C28010 * C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C404 * C89 + C27816 * C405) * C1045 +
                     (C404 * C189 + C27816 * C521) * C951 -
                     (C404 * C956 + C27816 * C1210) * C1046 -
                     (C404 * C1050 + C27816 * C1287) * C952) *
                        C27763 * C10882 +
                    (C2306 * C1045 + C2430 * C951 -
                     (C404 * C2486 + C27816 * C2834) * C1046 -
                     (C404 * C2608 + C27816 * C2943) * C952) *
                        C27763 * C10883 +
                    (C2308 * C1045 + C2431 * C951 -
                     (C404 * C2484 + C27816 * C2832) * C1046 -
                     (C404 * C2610 + C27816 * C2945) * C952) *
                        C27763 * C10884 +
                    (C11468 * C1045 + C11548 * C951 -
                     (C404 * C11583 + C27816 * C11799) * C1046 -
                     (C404 * C11657 + C27816 * C11870) * C952) *
                        C27763 * C10885) *
                   C28010 * C28008) /
                      (p * q * std::sqrt(p + q));
    d2eexx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C87 +
            (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                C77 -
            (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) * C88 -
            (C26640 * C100 + C27768 * C106 + C26647 * C99 + C27960 * C105) *
                C78) *
               C27973 +
           ((C13968 + C13969) * C87 + (C13970 + C13971) * C77 -
            (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                C88 -
            (C26640 * C584 + C27768 * C592 + C26647 * C585 + C27960 * C593) *
                C78) *
               C27854) *
              C18181 +
          (((C16160 + C16161) * C87 + (C16162 + C16163) * C77 -
            (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                C88 -
            (C26640 * C958 + C27768 * C966 + C26647 * C959 + C27960 * C967) *
                C78) *
               C27973 +
           ((C15542 + C15543) * C87 + (C15544 + C15545) * C77 -
            (C26640 * C5629 + C27768 * C5631 + C26647 * C2485 +
             C27960 * C2493) *
                C88 -
            (C26640 * C5630 + C27768 * C5632 + C26647 * C2491 +
             C27960 * C2497) *
                C78) *
               C27854) *
              C27880) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C143 +
             (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                 C28010) *
                C27973 +
            ((C13968 + C13969) * C143 + (C14035 + C14034) * C28010) * C27854) *
               C18181 +
           (((C16160 + C16161) * C143 + (C16234 + C16235) * C28010) * C27973 +
            ((C15542 + C15543) * C143 + (C15617 + C15616) * C28010) * C27854) *
               C27880) *
              C77 -
          ((((C26640 * C5683 + C27768 * C5684 + C26647 * C2551 +
              C27960 * C2555) *
                 C28010 +
             (C26640 * C5629 + C27768 * C5631 + C26647 * C2485 +
              C27960 * C2493) *
                 C143) *
                C27854 +
            ((C26640 * C1004 + C27768 * C1008 + C26647 * C1005 +
              C27960 * C1009) *
                 C28010 +
             (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                 C143) *
                C27973) *
               C27880 +
           (((C26640 * C632 + C27768 * C636 + C26647 * C633 + C27960 * C637) *
                 C28010 +
             (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                 C143) *
                C27854 +
            ((C26640 * C146 + C27768 * C151 + C26647 * C145 + C27960 * C150) *
                 C28010 +
             (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                 C143) *
                C27973) *
               C18181) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C188 +
             (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                 C28009) *
                C27973 +
            ((C13968 + C13969) * C188 + (C14096 + C14097) * C28009) * C27854) *
               C18181 +
           (((C16160 + C16161) * C188 + (C16307 + C16306) * C28009) * C27973 +
            ((C15542 + C15543) * C188 + (C15688 + C15689) * C28009) * C27854) *
               C27880) *
              C28010 * C77 -
          ((((C26640 * C5735 + C27768 * C5736 + C26647 * C2607 +
              C27960 * C2611) *
                 C28009 +
             (C26640 * C5629 + C27768 * C5631 + C26647 * C2485 +
              C27960 * C2493) *
                 C188) *
                C27854 +
            ((C26640 * C1048 + C27768 * C1052 + C26647 * C1049 +
              C27960 * C1053) *
                 C28009 +
             (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                 C188) *
                C27973) *
               C27880 +
           (((C26640 * C674 + C27768 * C678 + C26647 * C675 + C27960 * C679) *
                 C28009 +
             (C26640 * C580 + C27768 * C588 + C26647 * C581 + C27960 * C589) *
                 C188) *
                C27854 +
            ((C26640 * C191 + C27768 * C196 + C26647 * C190 + C27960 * C195) *
                 C28009 +
             (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                 C188) *
                C27973) *
               C18181) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) * C87 +
            (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) * C77 -
            (C4794 + C4795) * C88 - (C4796 + C4797) * C78) *
               C18181 +
           ((C9058 + C9059) * C87 + (C9060 + C9061) * C77 -
            (C7774 + C7775) * C88 - (C7776 + C7777) * C78) *
               C27880) *
              C27960 +
          (((C4795 + C4794) * C87 + (C4797 + C4796) * C77 -
            (C4798 + C4799) * C88 - (C4800 + C4801) * C78) *
               C18181 +
           ((C7775 + C7774) * C87 + (C7777 + C7776) * C77 -
            (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                C88 -
            (C4776 * C5630 + C27854 * C5788 + C4775 * C958 + C27973 * C1094) *
                C78) *
               C27880) *
              C27768) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C143 +
             (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                 C28010) *
                C18181 +
            ((C9058 + C9059) * C143 + (C9132 + C9133) * C28010) * C27880) *
               C27960 +
           (((C4795 + C4794) * C143 + (C4860 + C4861) * C28010) * C18181 +
            ((C7775 + C7774) * C143 + (C7848 + C7849) * C28010) * C27880) *
               C27768) *
              C77 -
          ((((C4776 * C5683 + C27854 * C5839 + C4775 * C1004 + C27973 * C1132) *
                 C28010 +
             (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                 C143) *
                C27880 +
            ((C4863 + C4862) * C28010 + (C4798 + C4799) * C143) * C18181) *
               C27768 +
           (((C7849 + C7848) * C28010 + (C7774 + C7775) * C143) * C27880 +
            ((C4861 + C4860) * C28010 + (C4794 + C4795) * C143) * C18181) *
               C27960) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C188 +
             (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                 C28009) *
                C18181 +
            ((C9058 + C9059) * C188 + (C9205 + C9204) * C28009) * C27880) *
               C27960 +
           (((C4795 + C4794) * C188 + (C4922 + C4923) * C28009) * C18181 +
            ((C7775 + C7774) * C188 + (C7920 + C7921) * C28009) * C27880) *
               C27768) *
              C28010 * C77 -
          ((((C4776 * C5735 + C27854 * C5890 + C4775 * C1048 + C27973 * C1171) *
                 C28009 +
             (C4776 * C5629 + C27854 * C5787 + C4775 * C954 + C27973 * C1090) *
                 C188) *
                C27880 +
            ((C4925 + C4924) * C28009 + (C4798 + C4799) * C188) * C18181) *
               C27768 +
           (((C7921 + C7920) * C28009 + (C7774 + C7775) * C188) * C27880 +
            ((C4923 + C4922) * C28009 + (C4794 + C4795) * C188) * C18181) *
               C27960) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C87 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C77 -
            (C18502 + C18503) * C88 - (C18504 + C18505) * C78) *
               C27960 +
           ((C18503 + C18502) * C87 + (C18505 + C18504) * C77 -
            (C18506 + C18507) * C88 - (C18508 + C18509) * C78) *
               C27768) *
              C27973 +
          (((C20386 + C20387) * C87 + (C20388 + C20389) * C77 -
            (C22448 + C22449) * C88 - (C22450 + C22451) * C78) *
               C27960 +
           ((C22449 + C22448) * C87 + (C22451 + C22450) * C77 -
            (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                C88 -
            (C18484 * C5630 + C27880 * C5942 + C18483 * C584 + C18181 * C838) *
                C78) *
               C27768) *
              C27854) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                 C143 +
             (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                 C28010) *
                C27960 +
            ((C18503 + C18502) * C143 + (C18568 + C18569) * C28010) * C27768) *
               C27973 +
           (((C20386 + C20387) * C143 + (C20453 + C20452) * C28010) * C27960 +
            ((C22449 + C22448) * C143 + (C22522 + C22523) * C28010) * C27768) *
               C27854) *
              C77 -
          ((((C18484 * C5683 + C27880 * C5993 + C18483 * C632 + C18181 * C877) *
                 C28010 +
             (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                 C143) *
                C27768 +
            ((C22523 + C22522) * C28010 + (C22448 + C22449) * C143) * C27960) *
               C27854 +
           (((C18571 + C18570) * C28010 + (C18506 + C18507) * C143) * C27768 +
            ((C18569 + C18568) * C28010 + (C18502 + C18503) * C143) * C27960) *
               C27973) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                 C188 +
             (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                 C28009) *
                C27960 +
            ((C18503 + C18502) * C188 + (C18630 + C18631) * C28009) * C27768) *
               C27973 +
           (((C20386 + C20387) * C188 + (C20514 + C20515) * C28009) * C27960 +
            ((C22449 + C22448) * C188 + (C22594 + C22595) * C28009) * C27768) *
               C27854) *
              C28010 * C77 -
          ((((C18484 * C5735 + C27880 * C6044 + C18483 * C674 + C18181 * C914) *
                 C28009 +
             (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                 C188) *
                C27768 +
            ((C22595 + C22594) * C28009 + (C22448 + C22449) * C188) * C27960) *
               C27854 +
           (((C18633 + C18632) * C28009 + (C18506 + C18507) * C188) * C27768 +
            ((C18631 + C18630) * C28009 + (C18502 + C18503) * C188) * C27960) *
               C27973) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eexx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C578 +
             (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                 C28008) *
                C27973 +
            ((C13968 + C13969) * C578 + (C13970 + C13971) * C28008) * C27854) *
               C18181 +
           (((C16160 + C16161) * C578 + (C16162 + C16163) * C28008) * C27973 +
            ((C15542 + C15543) * C578 + (C15544 + C15545) * C28008) * C27854) *
               C27880) *
              C28009 * C576 -
          ((((C26640 * C2487 + C27768 * C2495 + C26647 * C2488 +
              C27960 * C2496) *
                 C28008 +
             (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
              C27960 * C2490) *
                 C578) *
                C27854 +
            ((C15545 + C15544) * C28008 + (C15543 + C15542) * C578) * C27973) *
               C27880 +
           (((C13975 + C13974) * C28008 + (C13973 + C13972) * C578) * C27854 +
            ((C13971 + C13970) * C28008 + (C13969 + C13968) * C578) * C27973) *
               C18181) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C629 +
            (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                C576 -
            (C13969 + C13968) * C630 - (C14034 + C14035) * C577) *
               C27973 +
           ((C13968 + C13969) * C629 + (C14035 + C14034) * C576 -
            (C13973 + C13972) * C630 - (C14036 + C14037) * C577) *
               C27854) *
              C18181 +
          (((C16160 + C16161) * C629 + (C16234 + C16235) * C576 -
            (C15543 + C15542) * C630 - (C15616 + C15617) * C577) *
               C27973 +
           ((C15542 + C15543) * C629 + (C15617 + C15616) * C576 -
            (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
             C27960 * C2490) *
                C630 -
            (C26640 * C2549 + C27768 * C2553 + C26647 * C2550 +
             C27960 * C2554) *
                C577) *
               C27854) *
              C27880) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C188 +
             (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                 C28009) *
                C27973 +
            ((C13968 + C13969) * C188 + (C14096 + C14097) * C28009) * C27854) *
               C18181 +
           (((C16160 + C16161) * C188 + (C16307 + C16306) * C28009) * C27973 +
            ((C15542 + C15543) * C188 + (C15688 + C15689) * C28009) * C27854) *
               C27880) *
              C576 -
          ((((C26640 * C2609 + C27768 * C2613 + C26647 * C2610 +
              C27960 * C2614) *
                 C28009 +
             (C26640 * C2483 + C27768 * C2489 + C26647 * C2484 +
              C27960 * C2490) *
                 C188) *
                C27854 +
            ((C15689 + C15688) * C28009 + (C15543 + C15542) * C188) * C27973) *
               C27880 +
           (((C14099 + C14098) * C28009 + (C13973 + C13972) * C188) * C27854 +
            ((C14097 + C14096) * C28009 + (C13969 + C13968) * C188) * C27973) *
               C18181) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C578 +
             (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                 C28008) *
                C18181 +
            ((C9058 + C9059) * C578 + (C9060 + C9061) * C28008) * C27880) *
               C27960 +
           (((C4795 + C4794) * C578 + (C4797 + C4796) * C28008) * C18181 +
            ((C7775 + C7774) * C578 + (C7777 + C7776) * C28008) * C27880) *
               C27768) *
              C28009 * C576 -
          ((((C4776 * C2487 + C27854 * C2669 + C4775 * C2491 + C27973 * C2670) *
                 C28008 +
             (C4776 * C2483 + C27854 * C2665 + C4775 * C2485 + C27973 * C2666) *
                 C578) *
                C27880 +
            ((C4776 * C1354 + C27854 * C1529 + C4775 * C585 + C27973 * C721) *
                 C28008 +
             (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                 C578) *
                C18181) *
               C27768 +
           (((C4776 * C2488 + C27854 * C2671 + C4775 * C2492 + C27973 * C2672) *
                 C28008 +
             (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                 C578) *
                C27880 +
            ((C4776 * C1353 + C27854 * C1528 + C4775 * C586 + C27973 * C722) *
                 C28008 +
             (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                 C578) *
                C18181) *
               C27960) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C629 +
            (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                C576 -
            (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                C630 -
            (C4776 * C1410 + C27854 * C1599 + C4775 * C634 + C27973 * C757) *
                C577) *
               C18181 +
           ((C9058 + C9059) * C629 + (C9132 + C9133) * C576 -
            (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                C630 -
            (C4776 * C2550 + C27854 * C2725 + C4775 * C2552 + C27973 * C2726) *
                C577) *
               C27880) *
              C27960 +
          (((C4795 + C4794) * C629 + (C4860 + C4861) * C576 -
            (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                C630 -
            (C4776 * C1411 + C27854 * C1600 + C4775 * C633 + C27973 * C758) *
                C577) *
               C18181 +
           ((C7775 + C7774) * C629 + (C7848 + C7849) * C576 -
            (C4776 * C2483 + C27854 * C2665 + C4775 * C2485 + C27973 * C2666) *
                C630 -
            (C4776 * C2549 + C27854 * C2723 + C4775 * C2551 + C27973 * C2724) *
                C577) *
               C27880) *
              C27768) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C188 +
             (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                 C28009) *
                C18181 +
            ((C9058 + C9059) * C188 + (C9205 + C9204) * C28009) * C27880) *
               C27960 +
           (((C4795 + C4794) * C188 + (C4922 + C4923) * C28009) * C18181 +
            ((C7775 + C7774) * C188 + (C7920 + C7921) * C28009) * C27880) *
               C27768) *
              C576 -
          ((((C4776 * C2609 + C27854 * C2779 + C4775 * C2607 + C27973 * C2780) *
                 C28009 +
             (C4776 * C2483 + C27854 * C2665 + C4775 * C2485 + C27973 * C2666) *
                 C188) *
                C27880 +
            ((C4776 * C1467 + C27854 * C1662 + C4775 * C675 + C27973 * C797) *
                 C28009 +
             (C4776 * C1349 + C27854 * C1526 + C4775 * C581 + C27973 * C717) *
                 C188) *
                C18181) *
               C27768 +
           (((C4776 * C2610 + C27854 * C2777 + C4775 * C2608 + C27973 * C2778) *
                 C28009 +
             (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                 C188) *
                C27880 +
            ((C4776 * C1466 + C27854 * C1661 + C4775 * C676 + C27973 * C798) *
                 C28009 +
             (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                 C188) *
                C18181) *
               C27960) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                 C578 +
             (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                 C28008) *
                C27960 +
            ((C18503 + C18502) * C578 + (C18505 + C18504) * C28008) * C27768) *
               C27973 +
           (((C20386 + C20387) * C578 + (C20388 + C20389) * C28008) * C27960 +
            ((C22449 + C22448) * C578 + (C22451 + C22450) * C28008) * C27768) *
               C27854) *
              C28009 * C576 -
          ((((C18484 * C2487 + C27880 * C2835 + C18483 * C1354 +
              C18181 * C1727) *
                 C28008 +
             (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
              C18181 * C1724) *
                 C578) *
                C27768 +
            ((C20393 + C20392) * C28008 + (C20391 + C20390) * C578) * C27960) *
               C27854 +
           (((C22450 + C22451) * C28008 + (C22448 + C22449) * C578) * C27768 +
            ((C20389 + C20388) * C28008 + (C20387 + C20386) * C578) * C27960) *
               C27973) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C629 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C576 -
            (C20387 + C20386) * C630 - (C20452 + C20453) * C577) *
               C27960 +
           ((C18503 + C18502) * C629 + (C18568 + C18569) * C576 -
            (C22448 + C22449) * C630 - (C22523 + C22522) * C577) *
               C27768) *
              C27973 +
          (((C20386 + C20387) * C629 + (C20453 + C20452) * C576 -
            (C20391 + C20390) * C630 - (C20454 + C20455) * C577) *
               C27960 +
           ((C22449 + C22448) * C629 + (C22522 + C22523) * C576 -
            (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
             C18181 * C1724) *
                C630 -
            (C18484 * C2549 + C27880 * C2889 + C18483 * C1411 +
             C18181 * C1792) *
                C577) *
               C27768) *
              C27854) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eezz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                 C188 +
             (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                 C28009) *
                C27960 +
            ((C18503 + C18502) * C188 + (C18630 + C18631) * C28009) * C27768) *
               C27973 +
           (((C20386 + C20387) * C188 + (C20514 + C20515) * C28009) * C27960 +
            ((C22449 + C22448) * C188 + (C22594 + C22595) * C28009) * C27768) *
               C27854) *
              C576 -
          ((((C18484 * C2609 + C27880 * C2946 + C18483 * C1467 +
              C18181 * C1855) *
                 C28009 +
             (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
              C18181 * C1724) *
                 C188) *
                C27768 +
            ((C20517 + C20516) * C28009 + (C20391 + C20390) * C188) * C27960) *
               C27854 +
           (((C22595 + C22594) * C28009 + (C22448 + C22449) * C188) * C27768 +
            ((C20515 + C20514) * C28009 + (C20387 + C20386) * C188) * C27960) *
               C27973) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C578 +
             (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                 C28008) *
                C27973 +
            ((C13968 + C13969) * C578 + (C13970 + C13971) * C28008) * C27854) *
               C18181 +
           (((C16160 + C16161) * C578 + (C16162 + C16163) * C28008) * C27973 +
            ((C15542 + C15543) * C578 + (C15544 + C15545) * C28008) * C27854) *
               C27880) *
              C951 -
          ((((C26640 * C3571 + C27768 * C3575 + C26647 * C3572 +
              C27960 * C3576) *
                 C28008 +
             (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
              C27960 * C3574) *
                 C578) *
                C27854 +
            ((C26640 * C3006 + C27768 * C3010 + C26647 * C3005 +
              C27960 * C3009) *
                 C28008 +
             (C26640 * C3001 + C27768 * C3004 + C26647 * C3000 +
              C27960 * C3003) *
                 C578) *
                C27973) *
               C27880 +
           (((C15545 + C15544) * C28008 + (C15543 + C15542) * C578) * C27854 +
            ((C16163 + C16162) * C28008 + (C16161 + C16160) * C578) * C27973) *
               C18181) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                 C143 +
             (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                 C28010) *
                C27973 +
            ((C13968 + C13969) * C143 + (C14035 + C14034) * C28010) * C27854) *
               C18181 +
           (((C16160 + C16161) * C143 + (C16234 + C16235) * C28010) * C27973 +
            ((C15542 + C15543) * C143 + (C15617 + C15616) * C28010) * C27854) *
               C27880) *
              C28008 * C951 -
          ((((C26640 * C3627 + C27768 * C3629 + C26647 * C3628 +
              C27960 * C3630) *
                 C28010 +
             (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
              C27960 * C3574) *
                 C143) *
                C27854 +
            ((C26640 * C3063 + C27768 * C3066 + C26647 * C3062 +
              C27960 * C3065) *
                 C28010 +
             (C26640 * C3001 + C27768 * C3004 + C26647 * C3000 +
              C27960 * C3003) *
                 C143) *
                C27973) *
               C27880 +
           (((C15616 + C15617) * C28010 + (C15543 + C15542) * C143) * C27854 +
            ((C16235 + C16234) * C28010 + (C16161 + C16160) * C143) * C27973) *
               C18181) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) *
                C1045 +
            (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                C951 -
            (C16161 + C16160) * C1046 - (C16306 + C16307) * C952) *
               C27973 +
           ((C13968 + C13969) * C1045 + (C14096 + C14097) * C951 -
            (C15543 + C15542) * C1046 - (C15689 + C15688) * C952) *
               C27854) *
              C18181 +
          (((C16160 + C16161) * C1045 + (C16307 + C16306) * C951 -
            (C26640 * C3001 + C27768 * C3004 + C26647 * C3000 +
             C27960 * C3003) *
                C1046 -
            (C26640 * C3119 + C27768 * C3122 + C26647 * C3118 +
             C27960 * C3121) *
                C952) *
               C27973 +
           ((C15542 + C15543) * C1045 + (C15688 + C15689) * C951 -
            (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
             C27960 * C3574) *
                C1046 -
            (C26640 * C3681 + C27768 * C3683 + C26647 * C3682 +
             C27960 * C3684) *
                C952) *
               C27854) *
              C27880) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C578 +
             (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                 C28008) *
                C18181 +
            ((C9058 + C9059) * C578 + (C9060 + C9061) * C28008) * C27880) *
               C27960 +
           (((C4795 + C4794) * C578 + (C4797 + C4796) * C28008) * C18181 +
            ((C7775 + C7774) * C578 + (C7777 + C7776) * C28008) * C27880) *
               C27768) *
              C951 -
          ((((C4776 * C3571 + C27854 * C3737 + C4775 * C3006 + C27973 * C3178) *
                 C28008 +
             (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                 C578) *
                C27880 +
            ((C7776 + C7777) * C28008 + (C7774 + C7775) * C578) * C18181) *
               C27768 +
           (((C4776 * C3572 + C27854 * C3738 + C4775 * C3005 + C27973 * C3177) *
                 C28008 +
             (C4776 * C3570 + C27854 * C3736 + C4775 * C3000 + C27973 * C3174) *
                 C578) *
                C27880 +
            ((C9061 + C9060) * C28008 + (C9059 + C9058) * C578) * C18181) *
               C27960) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                 C143 +
             (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                 C28010) *
                C18181 +
            ((C9058 + C9059) * C143 + (C9132 + C9133) * C28010) * C27880) *
               C27960 +
           (((C4795 + C4794) * C143 + (C4860 + C4861) * C28010) * C18181 +
            ((C7775 + C7774) * C143 + (C7848 + C7849) * C28010) * C27880) *
               C27768) *
              C28008 * C951 -
          ((((C4776 * C3627 + C27854 * C3790 + C4775 * C3063 + C27973 * C3243) *
                 C28010 +
             (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                 C143) *
                C27880 +
            ((C7849 + C7848) * C28010 + (C7774 + C7775) * C143) * C18181) *
               C27768 +
           (((C4776 * C3628 + C27854 * C3789 + C4775 * C3062 + C27973 * C3242) *
                 C28010 +
             (C4776 * C3570 + C27854 * C3736 + C4775 * C3000 + C27973 * C3174) *
                 C143) *
                C27880 +
            ((C9133 + C9132) * C28010 + (C9059 + C9058) * C143) * C18181) *
               C27960) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C1045 +
            (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                C951 -
            (C9059 + C9058) * C1046 - (C9204 + C9205) * C952) *
               C18181 +
           ((C9058 + C9059) * C1045 + (C9205 + C9204) * C951 -
            (C4776 * C3570 + C27854 * C3736 + C4775 * C3000 + C27973 * C3174) *
                C1046 -
            (C4776 * C3682 + C27854 * C3842 + C4775 * C3118 + C27973 * C3305) *
                C952) *
               C27880) *
              C27960 +
          (((C4795 + C4794) * C1045 + (C4922 + C4923) * C951 -
            (C7774 + C7775) * C1046 - (C7921 + C7920) * C952) *
               C18181 +
           ((C7775 + C7774) * C1045 + (C7920 + C7921) * C951 -
            (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                C1046 -
            (C4776 * C3681 + C27854 * C3841 + C4775 * C3119 + C27973 * C3306) *
                C952) *
               C27880) *
              C27768) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                 C578 +
             (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                 C28008) *
                C27960 +
            ((C18503 + C18502) * C578 + (C18505 + C18504) * C28008) * C27768) *
               C27973 +
           (((C20386 + C20387) * C578 + (C20388 + C20389) * C28008) * C27960 +
            ((C22449 + C22448) * C578 + (C22451 + C22450) * C28008) * C27768) *
               C27854) *
              C951 -
          ((((C18484 * C3571 + C27880 * C3895 + C18483 * C2491 +
              C18181 * C2837) *
                 C28008 +
             (C18484 * C3569 + C27880 * C3893 + C18483 * C2485 +
              C18181 * C2833) *
                 C578) *
                C27768 +
            ((C18484 * C3572 + C27880 * C3896 + C18483 * C2492 +
              C18181 * C2838) *
                 C28008 +
             (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
              C18181 * C2834) *
                 C578) *
                C27960) *
               C27854 +
           (((C18484 * C3006 + C27880 * C3375 + C18483 * C959 +
              C18181 * C1213) *
                 C28008 +
             (C18484 * C3001 + C27880 * C3372 + C18483 * C955 +
              C18181 * C1209) *
                 C578) *
                C27768 +
            ((C18484 * C3005 + C27880 * C3374 + C18483 * C960 +
              C18181 * C1214) *
                 C28008 +
             (C18484 * C3000 + C27880 * C3371 + C18483 * C956 +
              C18181 * C1210) *
                 C578) *
                C27960) *
               C27973) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                 C143 +
             (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                 C28010) *
                C27960 +
            ((C18503 + C18502) * C143 + (C18568 + C18569) * C28010) * C27768) *
               C27973 +
           (((C20386 + C20387) * C143 + (C20453 + C20452) * C28010) * C27960 +
            ((C22449 + C22448) * C143 + (C22522 + C22523) * C28010) * C27768) *
               C27854) *
              C28008 * C951 -
          ((((C18484 * C3627 + C27880 * C3948 + C18483 * C2551 +
              C18181 * C2891) *
                 C28010 +
             (C18484 * C3569 + C27880 * C3893 + C18483 * C2485 +
              C18181 * C2833) *
                 C143) *
                C27768 +
            ((C18484 * C3628 + C27880 * C3947 + C18483 * C2552 +
              C18181 * C2892) *
                 C28010 +
             (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
              C18181 * C2834) *
                 C143) *
                C27960) *
               C27854 +
           (((C18484 * C3063 + C27880 * C3446 + C18483 * C1005 +
              C18181 * C1251) *
                 C28010 +
             (C18484 * C3001 + C27880 * C3372 + C18483 * C955 +
              C18181 * C1209) *
                 C143) *
                C27768 +
            ((C18484 * C3062 + C27880 * C3445 + C18483 * C1006 +
              C18181 * C1252) *
                 C28010 +
             (C18484 * C3000 + C27880 * C3371 + C18483 * C956 +
              C18181 * C1210) *
                 C143) *
                C27960) *
               C27973) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eezz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C1045 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C951 -
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C1046 -
            (C18484 * C3118 + C27880 * C3507 + C18483 * C1050 +
             C18181 * C1287) *
                C952) *
               C27960 +
           ((C18503 + C18502) * C1045 + (C18630 + C18631) * C951 -
            (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
                C1046 -
            (C18484 * C3119 + C27880 * C3508 + C18483 * C1049 +
             C18181 * C1288) *
                C952) *
               C27768) *
              C27973 +
          (((C20386 + C20387) * C1045 + (C20514 + C20515) * C951 -
            (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
             C18181 * C2834) *
                C1046 -
            (C18484 * C3682 + C27880 * C4000 + C18483 * C2608 +
             C18181 * C2943) *
                C952) *
               C27960 +
           ((C22449 + C22448) * C1045 + (C22594 + C22595) * C951 -
            (C18484 * C3569 + C27880 * C3893 + C18483 * C2485 +
             C18181 * C2833) *
                C1046 -
            (C18484 * C3681 + C27880 * C3999 + C18483 * C2607 +
             C18181 * C2944) *
                C952) *
               C27768) *
              C27854) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eexx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C87 +
                      (C10886 * C98 + C27763 * C104) * C77 -
                      (C10886 * C90 + C27763 * C95) * C88 -
                      (C10886 * C99 + C27763 * C105) * C78) *
                         C27973 +
                     (C11214 * C87 + C11215 * C77 -
                      (C10886 * C581 + C27763 * C589) * C88 -
                      (C10886 * C585 + C27763 * C593) * C78) *
                         C27854) *
                        C28003 +
                    ((C12918 * C87 + C12919 * C77 -
                      (C10886 * C955 + C27763 * C963) * C88 -
                      (C10886 * C959 + C27763 * C967) * C78) *
                         C27973 +
                     (C12384 * C87 + C12385 * C77 -
                      (C10886 * C2485 + C27763 * C2493) * C88 -
                      (C10886 * C2491 + C27763 * C2497) * C78) *
                         C27854) *
                        C28004 +
                    ((C12920 * C87 + C12921 * C77 -
                      (C10886 * C3001 + C27763 * C3004) * C88 -
                      (C10886 * C3006 + C27763 * C3010) * C78) *
                         C27973 +
                     (C12386 * C87 + C12387 * C77 -
                      (C10886 * C3569 + C27763 * C3573) * C88 -
                      (C10886 * C3571 + C27763 * C3575) * C78) *
                         C27854) *
                        C23835) *
                   C28009 * C28010) /
                  (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C143 +
             (C10886 * C144 + C27763 * C149) * C28010) *
                C27973 +
            (C11214 * C143 + C11268 * C28010) * C27854) *
               C28003 +
           ((C12978 + C12990) * C27973 + (C12981 + C12982) * C27854) * C28004 +
           ((C12983 + C12991) * C27973 + (C12986 + C12987) * C27854) * C23835) *
              C77 -
          ((((C10886 * C3627 + C27763 * C3629) * C28010 +
             (C10886 * C3569 + C27763 * C3573) * C143) *
                C27854 +
            ((C10886 * C3063 + C27763 * C3066) * C28010 +
             (C10886 * C3001 + C27763 * C3004) * C143) *
                C27973) *
               C23835 +
           (((C10886 * C2551 + C27763 * C2555) * C28010 +
             (C10886 * C2485 + C27763 * C2493) * C143) *
                C27854 +
            ((C10886 * C1005 + C27763 * C1009) * C28010 +
             (C10886 * C955 + C27763 * C963) * C143) *
                C27973) *
               C28004 +
           (((C10886 * C633 + C27763 * C637) * C28010 +
             (C10886 * C581 + C27763 * C589) * C143) *
                C27854 +
            ((C10886 * C145 + C27763 * C150) * C28010 +
             (C10886 * C90 + C27763 * C95) * C143) *
                C27973) *
               C28003) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C27973 +
                      (C11307 + C11319) * C27854) *
                         C28003 +
                     ((C12918 * C188 + C13048 * C28009) * C27973 +
                      (C12502 + C12510) * C27854) *
                         C28004 +
                     ((C12920 * C188 + C13049 * C28009) * C27973 +
                      (C12505 + C12511) * C27854) *
                         C23835) *
                        C28010 * C77 -
                    ((((C10886 * C3681 + C27763 * C3683) * C28009 +
                       (C10886 * C3569 + C27763 * C3573) * C188) *
                          C27854 +
                      ((C10886 * C3119 + C27763 * C3122) * C28009 +
                       (C10886 * C3001 + C27763 * C3004) * C188) *
                          C27973) *
                         C23835 +
                     (((C10886 * C2607 + C27763 * C2611) * C28009 +
                       (C10886 * C2485 + C27763 * C2493) * C188) *
                          C27854 +
                      ((C10886 * C1049 + C27763 * C1053) * C28009 +
                       (C10886 * C955 + C27763 * C963) * C188) *
                          C27973) *
                         C28004 +
                     (((C10886 * C675 + C27763 * C679) * C28009 +
                       (C10886 * C581 + C27763 * C589) * C188) *
                          C27854 +
                      ((C10886 * C190 + C27763 * C195) * C28009 +
                       (C10886 * C90 + C27763 * C95) * C188) *
                          C27973) *
                         C28003) *
                        C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) * C87 +
           (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) * C77 -
           (C4794 + C4795) * C88 - (C4796 + C4797) * C78) *
              C28003 +
          ((C9058 + C9059) * C87 + (C9060 + C9061) * C77 -
           (C7774 + C7775) * C88 - (C7776 + C7777) * C78) *
              C28004 +
          ((C4775 * C3000 + C27973 * C3174 + C4776 * C3570 + C27854 * C3736) *
               C87 +
           (C4775 * C3005 + C27973 * C3177 + C4776 * C3572 + C27854 * C3738) *
               C77 -
           (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
               C88 -
           (C4776 * C3571 + C27854 * C3737 + C4775 * C3006 + C27973 * C3178) *
               C78) *
              C23835) *
         C27763 * C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C143 +
            (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                C28010) *
               C28003 +
           ((C9058 + C9059) * C143 + (C9132 + C9133) * C28010) * C28004 +
           ((C4775 * C3000 + C27973 * C3174 + C4776 * C3570 + C27854 * C3736) *
                C143 +
            (C4775 * C3062 + C27973 * C3242 + C4776 * C3628 + C27854 * C3789) *
                C28010) *
               C23835) *
              C27763 * C77 -
          (((C4776 * C3627 + C27854 * C3790 + C4775 * C3063 + C27973 * C3243) *
                C28010 +
            (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                C143) *
               C23835 +
           ((C7849 + C7848) * C28010 + (C7774 + C7775) * C143) * C28004 +
           ((C4861 + C4860) * C28010 + (C4794 + C4795) * C143) * C28003) *
              C27763 * C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C188 +
            (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                C28009) *
               C28003 +
           ((C9058 + C9059) * C188 + (C9205 + C9204) * C28009) * C28004 +
           ((C4775 * C3000 + C27973 * C3174 + C4776 * C3570 + C27854 * C3736) *
                C188 +
            (C4775 * C3118 + C27973 * C3305 + C4776 * C3682 + C27854 * C3842) *
                C28009) *
               C23835) *
              C27763 * C28010 * C77 -
          (((C4776 * C3681 + C27854 * C3841 + C4775 * C3119 + C27973 * C3306) *
                C28009 +
            (C4776 * C3569 + C27854 * C3735 + C4775 * C3001 + C27973 * C3175) *
                C188) *
               C23835 +
           ((C7921 + C7920) * C28009 + (C7774 + C7775) * C188) * C28004 +
           ((C4923 + C4922) * C28009 + (C4794 + C4795) * C188) * C28003) *
              C27763 * C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eezx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                      C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                         C87 +
                     (C24136 * C98 + C28003 * C410 + C24137 * C960 +
                      C28004 * C1214 + C24138 * C3005 + C23835 * C3374) *
                         C77 -
                     (C24152 + C24153 + C24154) * C88 -
                     (C24155 + C24156 + C24157) * C78) *
                        C27763 * C27973 +
                    ((C24136 * C582 + C28003 * C836 + C24137 * C2486 +
                      C28004 * C2834 + C24138 * C3570 + C23835 * C3894) *
                         C87 +
                     (C24136 * C586 + C28003 * C840 + C24137 * C2492 +
                      C28004 * C2838 + C24138 * C3572 + C23835 * C3896) *
                         C77 -
                     (C24138 * C3569 + C23835 * C3893 + C24137 * C2485 +
                      C28004 * C2833 + C24136 * C581 + C28003 * C835) *
                         C88 -
                     (C24138 * C3571 + C23835 * C3895 + C24137 * C2491 +
                      C28004 * C2837 + C24136 * C585 + C28003 * C839) *
                         C78) *
                        C27763 * C27854) *
                   C28009 * C28010) /
                  (p * q * std::sqrt(p + q));
    d2eezy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C143 +
                      (C24136 * C144 + C28003 * C467 + C24137 * C1006 +
                       C28004 * C1252 + C24138 * C3062 + C23835 * C3445) *
                          C28010) *
                         C27763 * C27973 +
                     ((C24136 * C582 + C28003 * C836 + C24137 * C2486 +
                       C28004 * C2834 + C24138 * C3570 + C23835 * C3894) *
                          C143 +
                      (C24136 * C634 + C28003 * C875 + C24137 * C2552 +
                       C28004 * C2892 + C24138 * C3628 + C23835 * C3947) *
                          C28010) *
                         C27763 * C27854) *
                        C77 -
                    (((C24138 * C3627 + C23835 * C3948 + C24137 * C2551 +
                       C28004 * C2891 + C24136 * C633 + C28003 * C876) *
                          C28010 +
                      (C24138 * C3569 + C23835 * C3893 + C24137 * C2485 +
                       C28004 * C2833 + C24136 * C581 + C28003 * C835) *
                          C143) *
                         C27763 * C27854 +
                     ((C24216 + C24215 + C24214) * C28010 +
                      (C24152 + C24153 + C24154) * C143) *
                         C27763 * C27973) *
                        C78) *
                   C28009) /
                  (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C188 +
                      (C24136 * C189 + C28003 * C521 + C24137 * C1050 +
                       C28004 * C1287 + C24138 * C3118 + C23835 * C3507) *
                          C28009) *
                         C27763 * C27973 +
                     ((C24136 * C582 + C28003 * C836 + C24137 * C2486 +
                       C28004 * C2834 + C24138 * C3570 + C23835 * C3894) *
                          C188 +
                      (C24136 * C676 + C28003 * C916 + C24137 * C2608 +
                       C28004 * C2943 + C24138 * C3682 + C23835 * C4000) *
                          C28009) *
                         C27763 * C27854) *
                        C28010 * C77 -
                    (((C24138 * C3681 + C23835 * C3999 + C24137 * C2607 +
                       C28004 * C2944 + C24136 * C675 + C28003 * C915) *
                          C28009 +
                      (C24138 * C3569 + C23835 * C3893 + C24137 * C2485 +
                       C28004 * C2833 + C24136 * C581 + C28003 * C835) *
                          C188) *
                         C27763 * C27854 +
                     ((C24275 + C24274 + C24273) * C28009 +
                      (C24152 + C24153 + C24154) * C188) *
                         C27763 * C27973) *
                        C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C578 +
             (C10886 * C98 + C27763 * C104) * C28008) *
                C27973 +
            (C11220 + C11221) * C27854) *
               C28003 +
           ((C12922 + C12923) * C27973 + (C12388 + C12389) * C27854) * C28004 +
           ((C12924 + C12925) * C27973 + (C12390 + C12391) * C27854) * C23835) *
              C28009 * C576 -
          ((((C10886 * C12372 + C27763 * C12374) * C28008 +
             (C10886 * C12371 + C27763 * C12373) * C578) *
                C27854 +
            (C12391 + C12390) * C27973) *
               C23835 +
           ((C17211 + C17210) * C27854 + (C12389 + C12388) * C27973) * C28004 +
           ((C11223 + C11222) * C27854 + (C11221 + C11220) * C27973) * C28003) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C629 +
            (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
            C11268 * C577) *
               C27973 +
           (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
               C27854) *
              C28003 +
          ((C12918 * C629 + C12988 * C576 - C12384 * C630 - C12448 * C577) *
               C27973 +
           (C12384 * C629 + C12448 * C576 - C17208 * C630 - C17264 * C577) *
               C27854) *
              C28004 +
          ((C12920 * C629 + C12989 * C576 - C12386 * C630 - C12449 * C577) *
               C27973 +
           (C12386 * C629 + C12449 * C576 -
            (C10886 * C12371 + C27763 * C12373) * C630 -
            (C10886 * C12441 + C27763 * C12442) * C577) *
               C27854) *
              C23835) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C188 +
             (C10886 * C189 + C27763 * C194) * C28009) *
                C27973 +
            (C11307 + C11319) * C27854) *
               C28003 +
           ((C12918 * C188 + C13048 * C28009) * C27973 +
            (C12502 + C12510) * C27854) *
               C28004 +
           ((C12920 * C188 + C13049 * C28009) * C27973 +
            (C12505 + C12511) * C27854) *
               C23835) *
              C576 -
          ((((C10886 * C12499 + C27763 * C12500) * C28009 +
             (C10886 * C12371 + C27763 * C12373) * C188) *
                C27854 +
            (C12511 + C12505) * C27973) *
               C23835 +
           ((C17319 + C17315) * C27854 + (C12510 + C12502) * C27973) * C28004 +
           ((C11320 + C11310) * C27854 + (C11319 + C11307) * C27973) * C28003) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C578 +
            (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                C28008) *
               C28003 +
           ((C9058 + C9059) * C578 + (C9060 + C9061) * C28008) * C28004 +
           ((C4775 * C3000 + C27973 * C3174 + C4776 * C3570 + C27854 * C3736) *
                C578 +
            (C4775 * C3005 + C27973 * C3177 + C4776 * C3572 + C27854 * C3738) *
                C28008) *
               C23835) *
              C27763 * C28009 * C576 -
          (((C4776 * C12372 + C27854 * C12562 + C4775 * C3572 +
             C27973 * C3738) *
                C28008 +
            (C4776 * C12371 + C27854 * C12561 + C4775 * C3570 +
             C27973 * C3736) *
                C578) *
               C23835 +
           ((C4776 * C2488 + C27854 * C2671 + C4775 * C2492 + C27973 * C2672) *
                C28008 +
            (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                C578) *
               C28004 +
           ((C4776 * C1353 + C27854 * C1528 + C4775 * C586 + C27973 * C722) *
                C28008 +
            (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                C578) *
               C28003) *
              C27763 * C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) * C629 +
           (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
               C576 -
           (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
               C630 -
           (C4776 * C1410 + C27854 * C1599 + C4775 * C634 + C27973 * C757) *
               C577) *
              C28003 +
          ((C9058 + C9059) * C629 + (C9132 + C9133) * C576 -
           (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
               C630 -
           (C4776 * C2550 + C27854 * C2725 + C4775 * C2552 + C27973 * C2726) *
               C577) *
              C28004 +
          ((C4775 * C3000 + C27973 * C3174 + C4776 * C3570 + C27854 * C3736) *
               C629 +
           (C4775 * C3062 + C27973 * C3242 + C4776 * C3628 + C27854 * C3789) *
               C576 -
           (C4776 * C12371 + C27854 * C12561 + C4775 * C3570 + C27973 * C3736) *
               C630 -
           (C4776 * C12441 + C27854 * C12613 + C4775 * C3628 + C27973 * C3789) *
               C577) *
              C23835) *
         C27763 * C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C188 +
            (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
                C28009) *
               C28003 +
           ((C9058 + C9059) * C188 + (C9205 + C9204) * C28009) * C28004 +
           ((C4775 * C3000 + C27973 * C3174 + C4776 * C3570 + C27854 * C3736) *
                C188 +
            (C4775 * C3118 + C27973 * C3305 + C4776 * C3682 + C27854 * C3842) *
                C28009) *
               C23835) *
              C27763 * C576 -
          (((C4776 * C12499 + C27854 * C12664 + C4775 * C3682 +
             C27973 * C3842) *
                C28009 +
            (C4776 * C12371 + C27854 * C12561 + C4775 * C3570 +
             C27973 * C3736) *
                C188) *
               C23835 +
           ((C4776 * C2610 + C27854 * C2777 + C4775 * C2608 + C27973 * C2778) *
                C28009 +
            (C4776 * C2484 + C27854 * C2667 + C4775 * C2486 + C27973 * C2668) *
                C188) *
               C28004 +
           ((C4776 * C1466 + C27854 * C1661 + C4775 * C676 + C27973 * C798) *
                C28009 +
            (C4776 * C1348 + C27854 * C1525 + C4775 * C582 + C27973 * C718) *
                C188) *
               C28003) *
              C27763 * C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C578 +
                      (C24136 * C98 + C28003 * C410 + C24137 * C960 +
                       C28004 * C1214 + C24138 * C3005 + C23835 * C3374) *
                          C28008) *
                         C27763 * C27973 +
                     ((C26012 + C26013 + C26014) * C578 +
                      (C26015 + C26016 + C26017) * C28008) *
                         C27763 * C27854) *
                        C28009 * C576 -
                    (((C24138 * C12372 + C23835 * C12716 + C24137 * C2488 +
                       C28004 * C2836 + C24136 * C1353 + C28003 * C1726) *
                          C28008 +
                      (C24138 * C12371 + C23835 * C12715 + C24137 * C2484 +
                       C28004 * C2832 + C24136 * C1348 + C28003 * C1723) *
                          C578) *
                         C27763 * C27854 +
                     ((C26017 + C26016 + C26015) * C28008 +
                      (C26014 + C26013 + C26012) * C578) *
                         C27763 * C27973) *
                        C28009 * C577)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                      C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                         C629 +
                     (C24136 * C144 + C28003 * C467 + C24137 * C1006 +
                      C28004 * C1252 + C24138 * C3062 + C23835 * C3445) *
                         C576 -
                     (C26014 + C26013 + C26012) * C630 -
                     (C26074 + C26075 + C26076) * C577) *
                        C27763 * C27973 +
                    ((C26012 + C26013 + C26014) * C629 +
                     (C26076 + C26075 + C26074) * C576 -
                     (C24138 * C12371 + C23835 * C12715 + C24137 * C2484 +
                      C28004 * C2832 + C24136 * C1348 + C28003 * C1723) *
                         C630 -
                     (C24138 * C12441 + C23835 * C12785 + C24137 * C2550 +
                      C28004 * C2890 + C24136 * C1410 + C28003 * C1791) *
                         C577) *
                        C27763 * C27854) *
                   C28008 * C28009) /
                  (p * q * std::sqrt(p + q));
    d2eezz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C188 +
                      (C24136 * C189 + C28003 * C521 + C24137 * C1050 +
                       C28004 * C1287 + C24138 * C3118 + C23835 * C3507) *
                          C28009) *
                         C27763 * C27973 +
                     ((C26012 + C26013 + C26014) * C188 +
                      (C26133 + C26134 + C26135) * C28009) *
                         C27763 * C27854) *
                        C576 -
                    (((C24138 * C12499 + C23835 * C12845 + C24137 * C2610 +
                       C28004 * C2945 + C24136 * C1466 + C28003 * C1854) *
                          C28009 +
                      (C24138 * C12371 + C23835 * C12715 + C24137 * C2484 +
                       C28004 * C2832 + C24136 * C1348 + C28003 * C1723) *
                          C188) *
                         C27763 * C27854 +
                     ((C26135 + C26134 + C26133) * C28009 +
                      (C26014 + C26013 + C26012) * C188) *
                         C27763 * C27973) *
                        C577) *
                   C28008) /
                  (p * q * std::sqrt(p + q));
    d2eexx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C578 +
             (C10886 * C98 + C27763 * C104) * C28008) *
                C27973 +
            (C11220 + C11221) * C27854) *
               C28003 +
           ((C12922 + C12923) * C27973 + (C12388 + C12389) * C27854) * C28004 +
           ((C12924 + C12925) * C27973 + (C12390 + C12391) * C27854) * C23835) *
              C951 -
          ((((C10886 * C12906 + C27763 * C12908) * C28008 +
             (C10886 * C12905 + C27763 * C12907) * C578) *
                C27854 +
            (C21669 + C21668) * C27973) *
               C23835 +
           ((C12391 + C12390) * C27854 + (C12925 + C12924) * C27973) * C28004 +
           ((C12389 + C12388) * C27854 + (C12923 + C12922) * C27973) * C28003) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C143 +
             (C10886 * C144 + C27763 * C149) * C28010) *
                C27973 +
            (C11214 * C143 + C11268 * C28010) * C27854) *
               C28003 +
           ((C12978 + C12990) * C27973 + (C12981 + C12982) * C27854) * C28004 +
           ((C12983 + C12991) * C27973 + (C12986 + C12987) * C27854) * C23835) *
              C28008 * C951 -
          ((((C10886 * C12975 + C27763 * C12976) * C28010 +
             (C10886 * C12905 + C27763 * C12907) * C143) *
                C27854 +
            (C21710 + C21706) * C27973) *
               C23835 +
           ((C12987 + C12986) * C27854 + (C12991 + C12983) * C27973) * C28004 +
           ((C12982 + C12981) * C27854 + (C12990 + C12978) * C27973) * C28003) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C1045 +
            (C10886 * C189 + C27763 * C194) * C951 - C12918 * C1046 -
            C13048 * C952) *
               C27973 +
           (C11214 * C1045 + C11316 * C951 - C12384 * C1046 - C12508 * C952) *
               C27854) *
              C28003 +
          ((C12918 * C1045 + C13048 * C951 - C12920 * C1046 - C13049 * C952) *
               C27973 +
           (C12384 * C1045 + C12508 * C951 - C12386 * C1046 - C12509 * C952) *
               C27854) *
              C28004 +
          ((C12920 * C1045 + C13049 * C951 - C21666 * C1046 - C21749 * C952) *
               C27973 +
           (C12386 * C1045 + C12509 * C951 -
            (C10886 * C12905 + C27763 * C12907) * C1046 -
            (C10886 * C13041 + C27763 * C13042) * C952) *
               C27854) *
              C23835) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C578 +
            (C4775 * C98 + C27973 * C239 + C4776 * C586 + C27854 * C722) *
                C28008) *
               C28003 +
           ((C9058 + C9059) * C578 + (C9060 + C9061) * C28008) * C28004 +
           ((C26344 + C26345) * C578 + (C26346 + C26347) * C28008) * C23835) *
              C27763 * C951 -
          (((C4776 * C12906 + C27854 * C13100 + C4775 * C4054 +
             C27973 * C4268) *
                C28008 +
            (C4776 * C12905 + C27854 * C13099 + C4775 * C4052 +
             C27973 * C4266) *
                C578) *
               C23835 +
           ((C26347 + C26346) * C28008 + (C26345 + C26344) * C578) * C28004 +
           ((C9061 + C9060) * C28008 + (C9059 + C9058) * C578) * C28003) *
              C27763 * C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
                C143 +
            (C4775 * C144 + C27973 * C296 + C4776 * C634 + C27854 * C757) *
                C28010) *
               C28003 +
           ((C9058 + C9059) * C143 + (C9132 + C9133) * C28010) * C28004 +
           ((C26344 + C26345) * C143 + (C26402 + C26403) * C28010) * C23835) *
              C27763 * C28008 * C951 -
          (((C4776 * C12975 + C27854 * C13175 + C4775 * C4134 +
             C27973 * C4340) *
                C28010 +
            (C4776 * C12905 + C27854 * C13099 + C4775 * C4052 +
             C27973 * C4266) *
                C143) *
               C23835 +
           ((C26403 + C26402) * C28010 + (C26345 + C26344) * C143) * C28004 +
           ((C9133 + C9132) * C28010 + (C9059 + C9058) * C143) * C28003) *
              C27763 * C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4775 * C89 + C27973 * C234 + C4776 * C582 + C27854 * C718) *
               C1045 +
           (C4775 * C189 + C27973 * C350 + C4776 * C676 + C27854 * C798) *
               C951 -
           (C9059 + C9058) * C1046 - (C9204 + C9205) * C952) *
              C28003 +
          ((C9058 + C9059) * C1045 + (C9205 + C9204) * C951 -
           (C26345 + C26344) * C1046 - (C26458 + C26459) * C952) *
              C28004 +
          ((C26344 + C26345) * C1045 + (C26459 + C26458) * C951 -
           (C4776 * C12905 + C27854 * C13099 + C4775 * C4052 + C27973 * C4266) *
               C1046 -
           (C4776 * C13041 + C27854 * C13238 + C4775 * C4200 + C27973 * C4401) *
               C952) *
              C23835) *
         C27763 * C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C578 +
                      (C24136 * C98 + C28003 * C410 + C24137 * C960 +
                       C28004 * C1214 + C24138 * C3005 + C23835 * C3374) *
                          C28008) *
                         C27763 * C27973 +
                     ((C26012 + C26013 + C26014) * C578 +
                      (C26015 + C26016 + C26017) * C28008) *
                         C27763 * C27854) *
                        C951 -
                    (((C24138 * C12906 + C23835 * C13302 + C24137 * C3572 +
                       C28004 * C3896 + C24136 * C2492 + C28003 * C2838) *
                          C28008 +
                      (C24138 * C12905 + C23835 * C13301 + C24137 * C3570 +
                       C28004 * C3894 + C24136 * C2486 + C28003 * C2834) *
                          C578) *
                         C27763 * C27854 +
                     ((C24138 * C4054 + C23835 * C4462 + C24137 * C3005 +
                       C28004 * C3374 + C24136 * C960 + C28003 * C1214) *
                          C28008 +
                      (C24138 * C4052 + C23835 * C4460 + C24137 * C3000 +
                       C28004 * C3371 + C24136 * C956 + C28003 * C1210) *
                          C578) *
                         C27763 * C27973) *
                        C952) *
                   C28010) /
                  (p * q * std::sqrt(p + q));
    d2eezy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C143 +
                      (C24136 * C144 + C28003 * C467 + C24137 * C1006 +
                       C28004 * C1252 + C24138 * C3062 + C23835 * C3445) *
                          C28010) *
                         C27763 * C27973 +
                     ((C26012 + C26013 + C26014) * C143 +
                      (C26076 + C26075 + C26074) * C28010) *
                         C27763 * C27854) *
                        C28008 * C951 -
                    (((C24138 * C12975 + C23835 * C13353 + C24137 * C3628 +
                       C28004 * C3947 + C24136 * C2552 + C28003 * C2892) *
                          C28010 +
                      (C24138 * C12905 + C23835 * C13301 + C24137 * C3570 +
                       C28004 * C3894 + C24136 * C2486 + C28003 * C2834) *
                          C143) *
                         C27763 * C27854 +
                     ((C24138 * C4134 + C23835 * C4514 + C24137 * C3062 +
                       C28004 * C3445 + C24136 * C1006 + C28003 * C1252) *
                          C28010 +
                      (C24138 * C4052 + C23835 * C4460 + C24137 * C3000 +
                       C28004 * C3371 + C24136 * C956 + C28003 * C1210) *
                          C143) *
                         C27763 * C27973) *
                        C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                      C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                         C1045 +
                     (C24136 * C189 + C28003 * C521 + C24137 * C1050 +
                      C28004 * C1287 + C24138 * C3118 + C23835 * C3507) *
                         C951 -
                     (C24138 * C4052 + C23835 * C4460 + C24137 * C3000 +
                      C28004 * C3371 + C24136 * C956 + C28003 * C1210) *
                         C1046 -
                     (C24138 * C4200 + C23835 * C4565 + C24137 * C3118 +
                      C28004 * C3507 + C24136 * C1050 + C28003 * C1287) *
                         C952) *
                        C27763 * C27973 +
                    ((C26012 + C26013 + C26014) * C1045 +
                     (C26133 + C26134 + C26135) * C951 -
                     (C24138 * C12905 + C23835 * C13301 + C24137 * C3570 +
                      C28004 * C3894 + C24136 * C2486 + C28003 * C2834) *
                         C1046 -
                     (C24138 * C13041 + C23835 * C13404 + C24137 * C3682 +
                      C28004 * C4000 + C24136 * C2608 + C28003 * C2943) *
                         C952) *
                        C27763 * C27854) *
                   C28010 * C28008) /
                  (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C87 +
            (C10886 * C98 + C27763 * C104) * C77 -
            (C10886 * C90 + C27763 * C95) * C88 -
            (C10886 * C99 + C27763 * C105) * C78) *
               C1343 +
           (C11214 * C87 + C11215 * C77 -
            (C10886 * C581 + C27763 * C589) * C88 -
            (C10886 * C585 + C27763 * C593) * C78) *
               C1344 +
           (C11216 * C87 + C11217 * C77 -
            (C10886 * C1349 + C27763 * C1352) * C88 -
            (C10886 * C1354 + C27763 * C1358) * C78) *
               C1345) *
              C18181 +
          ((C12918 * C87 + C12919 * C77 -
            (C10886 * C955 + C27763 * C963) * C88 -
            (C10886 * C959 + C27763 * C967) * C78) *
               C1343 +
           (C12384 * C87 + C12385 * C77 -
            (C10886 * C2485 + C27763 * C2493) * C88 -
            (C10886 * C2491 + C27763 * C2497) * C78) *
               C1344 +
           (C17208 * C87 + C17209 * C77 -
            (C10886 * C2483 + C27763 * C2489) * C88 -
            (C10886 * C2487 + C27763 * C2495) * C78) *
               C1345) *
              C27880) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C87 +
           (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
            C9460 * C100 + C9455 * C106) *
               C77 -
           (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
            C9458 * C90 + C9453 * C95) *
               C88 -
           (C9460 * C101 + C9455 * C107 + C9459 * C100 + C9454 * C106 +
            C9458 * C99 + C9453 * C105) *
               C78) *
              C27805 * C18181 +
          ((C9458 * C956 + C9453 * C964 + C9459 * C955 + C9454 * C963 +
            C9460 * C954 + C9455 * C962) *
               C87 +
           (C9458 * C960 + C9453 * C968 + C9459 * C959 + C9454 * C967 +
            C9460 * C958 + C9455 * C966) *
               C77 -
           (C9460 * C953 + C9455 * C961 + C9459 * C954 + C9454 * C962 +
            C9458 * C955 + C9453 * C963) *
               C88 -
           (C9460 * C957 + C9455 * C965 + C9459 * C958 + C9454 * C966 +
            C9458 * C959 + C9453 * C967) *
               C78) *
              C27805 * C27880) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C87 +
           (C10886 * C98 + C27763 * C104) * C77 -
           (C10886 * C90 + C27763 * C95) * C88 -
           (C10886 * C99 + C27763 * C105) * C78) *
              C27805 * C21037 +
          (C12918 * C87 + C12919 * C77 - (C10886 * C955 + C27763 * C963) * C88 -
           (C10886 * C959 + C27763 * C967) * C78) *
              C27805 * C21038 +
          (C12920 * C87 + C12921 * C77 -
           (C10886 * C3001 + C27763 * C3004) * C88 -
           (C10886 * C3006 + C27763 * C3010) * C78) *
              C27805 * C21039 +
          ((C10886 * C4052 + C27763 * C4056) * C87 +
           (C10886 * C4054 + C27763 * C4058) * C77 -
           (C10886 * C4051 + C27763 * C4055) * C88 -
           (C10886 * C4053 + C27763 * C4057) * C78) *
              C27805 * C21040) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eexy[36] += (-std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C1343 +
                      (C11214 * C143 + C11268 * C28010) * C1344 +
                      (C11216 * C143 + C11269 * C28010) * C1345) *
                         C18181 +
                     ((C12978 + C12990) * C1343 + (C12981 + C12982) * C1344 +
                      (C17744 + C17745) * C1345) *
                         C27880) *
                        C77 -
                    ((((C10886 * C2549 + C27763 * C2553) * C28010 +
                       (C10886 * C2483 + C27763 * C2489) * C143) *
                          C1345 +
                      ((C10886 * C2551 + C27763 * C2555) * C28010 +
                       (C10886 * C2485 + C27763 * C2493) * C143) *
                          C1344 +
                      ((C10886 * C1005 + C27763 * C1009) * C28010 +
                       (C10886 * C955 + C27763 * C963) * C143) *
                          C1343) *
                         C27880 +
                     (((C10886 * C1411 + C27763 * C1414) * C28010 +
                       (C10886 * C1349 + C27763 * C1352) * C143) *
                          C1345 +
                      ((C10886 * C633 + C27763 * C637) * C28010 +
                       (C10886 * C581 + C27763 * C589) * C143) *
                          C1344 +
                      ((C10886 * C145 + C27763 * C150) * C28010 +
                       (C10886 * C90 + C27763 * C95) * C143) *
                          C1343) *
                         C18181) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C27805 * C18181 +
                     ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                       C9454 * C963 + C9460 * C954 + C9455 * C962) *
                          C143 +
                      (C9458 * C1006 + C9453 * C1010 + C9459 * C1005 +
                       C9454 * C1009 + C9460 * C1004 + C9455 * C1008) *
                          C28010) *
                         C27805 * C27880) *
                        C77 -
                    (((C9460 * C1003 + C9455 * C1007 + C9459 * C1004 +
                       C9454 * C1008 + C9458 * C1005 + C9453 * C1009) *
                          C28010 +
                      (C9460 * C953 + C9455 * C961 + C9459 * C954 +
                       C9454 * C962 + C9458 * C955 + C9453 * C963) *
                          C143) *
                         C27805 * C27880 +
                     ((C9460 * C147 + C9455 * C152 + C9459 * C146 +
                       C9454 * C151 + C9458 * C145 + C9453 * C150) *
                          C28010 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C143) *
                         C27805 * C18181) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C143 +
                      (C10886 * C144 + C27763 * C149) * C28010) *
                         C27805 * C21037 +
                     (C12978 + C12990) * C27805 * C21038 +
                     (C12983 + C12991) * C27805 * C21039 +
                     ((C10886 * C4052 + C27763 * C4056) * C143 +
                      (C10886 * C4134 + C27763 * C4136) * C28010) *
                         C27805 * C21040) *
                        C77 -
                    (((C10886 * C4133 + C27763 * C4135) * C28010 +
                      (C10886 * C4051 + C27763 * C4055) * C143) *
                         C27805 * C21040 +
                     ((C10886 * C3063 + C27763 * C3066) * C28010 +
                      (C10886 * C3001 + C27763 * C3004) * C143) *
                         C27805 * C21039 +
                     ((C10886 * C1005 + C27763 * C1009) * C28010 +
                      (C10886 * C955 + C27763 * C963) * C143) *
                         C27805 * C21038 +
                     ((C10886 * C145 + C27763 * C150) * C28010 +
                      (C10886 * C90 + C27763 * C95) * C143) *
                         C27805 * C21037) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q));
    d2eexz[36] += (-std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C1343 +
                      (C11307 + C11319) * C1344 + (C11310 + C11320) * C1345) *
                         C18181 +
                     ((C12918 * C188 + C13048 * C28009) * C1343 +
                      (C12502 + C12510) * C1344 + (C17315 + C17319) * C1345) *
                         C27880) *
                        C28010 * C77 -
                    ((((C10886 * C2609 + C27763 * C2613) * C28009 +
                       (C10886 * C2483 + C27763 * C2489) * C188) *
                          C1345 +
                      ((C10886 * C2607 + C27763 * C2611) * C28009 +
                       (C10886 * C2485 + C27763 * C2493) * C188) *
                          C1344 +
                      ((C10886 * C1049 + C27763 * C1053) * C28009 +
                       (C10886 * C955 + C27763 * C963) * C188) *
                          C1343) *
                         C27880 +
                     (((C10886 * C1467 + C27763 * C1470) * C28009 +
                       (C10886 * C1349 + C27763 * C1352) * C188) *
                          C1345 +
                      ((C10886 * C675 + C27763 * C679) * C28009 +
                       (C10886 * C581 + C27763 * C589) * C188) *
                          C1344 +
                      ((C10886 * C190 + C27763 * C195) * C28009 +
                       (C10886 * C90 + C27763 * C95) * C188) *
                          C1343) *
                         C18181) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C188 +
                      (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                       C9454 * C195 + C9460 * C191 + C9455 * C196) *
                          C28009) *
                         C27805 * C18181 +
                     ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                       C9454 * C963 + C9460 * C954 + C9455 * C962) *
                          C188 +
                      (C9458 * C1050 + C9453 * C1054 + C9459 * C1049 +
                       C9454 * C1053 + C9460 * C1048 + C9455 * C1052) *
                          C28009) *
                         C27805 * C27880) *
                        C28010 * C77 -
                    (((C9460 * C1047 + C9455 * C1051 + C9459 * C1048 +
                       C9454 * C1052 + C9458 * C1049 + C9453 * C1053) *
                          C28009 +
                      (C9460 * C953 + C9455 * C961 + C9459 * C954 +
                       C9454 * C962 + C9458 * C955 + C9453 * C963) *
                          C188) *
                         C27805 * C27880 +
                     ((C9460 * C192 + C9455 * C197 + C9459 * C191 +
                       C9454 * C196 + C9458 * C190 + C9453 * C195) *
                          C28009 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C188) *
                         C27805 * C18181) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C188 +
                      (C10886 * C189 + C27763 * C194) * C28009) *
                         C27805 * C21037 +
                     (C12918 * C188 + C13048 * C28009) * C27805 * C21038 +
                     (C12920 * C188 + C13049 * C28009) * C27805 * C21039 +
                     ((C10886 * C4052 + C27763 * C4056) * C188 +
                      (C10886 * C4200 + C27763 * C4202) * C28009) *
                         C27805 * C21040) *
                        C28010 * C77 -
                    (((C10886 * C4199 + C27763 * C4201) * C28009 +
                      (C10886 * C4051 + C27763 * C4055) * C188) *
                         C27805 * C21040 +
                     ((C10886 * C3119 + C27763 * C3122) * C28009 +
                      (C10886 * C3001 + C27763 * C3004) * C188) *
                         C27805 * C21039 +
                     ((C10886 * C1049 + C27763 * C1053) * C28009 +
                      (C10886 * C955 + C27763 * C963) * C188) *
                         C27805 * C21038 +
                     ((C10886 * C190 + C27763 * C195) * C28009 +
                      (C10886 * C90 + C27763 * C95) * C188) *
                         C27805 * C21037) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[36] +=
        (-std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C87 +
           (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
            C1524 * C1353 + C1345 * C1528) *
               C77 -
           (C1544 + C1545 + C1546) * C88 - (C1547 + C1548 + C1549) * C78) *
              C18181 +
          ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
            C1524 * C2484 + C1345 * C2667) *
               C87 +
           (C1522 * C960 + C1343 * C1096 + C1523 * C2492 + C1344 * C2672 +
            C1524 * C2488 + C1345 * C2671) *
               C77 -
           (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
            C1522 * C955 + C1343 * C1091) *
               C88 -
           (C1524 * C2487 + C1345 * C2669 + C1523 * C2491 + C1344 * C2670 +
            C1522 * C959 + C1343 * C1095) *
               C78) *
              C27880) *
         C27763 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C87 +
            (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
               C18181 +
           (C4282 * C87 + C4283 * C77 - C3189 * C88 - C3190 * C78) * C27880) *
              C9453 +
          ((C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C18181 +
           (C3189 * C87 + C3190 * C77 - C6252 * C88 - C6253 * C78) * C27880) *
              C9454 +
          ((C259 * C87 + C260 * C77 - C261 * C88 - C262 * C78) * C18181 +
           (C6252 * C87 + C6253 * C77 - (C233 * C953 + C27805 * C1089) * C88 -
            (C233 * C957 + C27805 * C1093) * C78) *
               C27880) *
              C9455) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C87 +
           (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
              C21037 +
          (C4282 * C87 + C4283 * C77 - C3189 * C88 - C3190 * C78) * C21038 +
          (C4284 * C87 + C4285 * C77 - C3191 * C88 - C3192 * C78) * C21039 +
          ((C233 * C4052 + C27805 * C4266) * C87 +
           (C233 * C4054 + C27805 * C4268) * C77 -
           (C233 * C4051 + C27805 * C4265) * C88 -
           (C233 * C4053 + C27805 * C4267) * C78) *
              C21040) *
         C27763 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C143 +
            (C1522 * C1006 + C1343 * C1134 + C1523 * C2552 + C1344 * C2726 +
             C1524 * C2550 + C1345 * C2725) *
                C28010) *
               C27880) *
              C27763 * C77 -
          (((C1524 * C2549 + C1345 * C2723 + C1523 * C2551 + C1344 * C2724 +
             C1522 * C1005 + C1343 * C1133) *
                C28010 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C143) *
               C27880 +
           ((C1611 + C1610 + C1609) * C28010 + (C1544 + C1545 + C1546) * C143) *
               C18181) *
              C27763 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C18181 +
            (C4342 + C4350) * C27880) *
               C9453 +
           ((C302 + C314) * C18181 + (C3246 + C3254) * C27880) * C9454 +
           ((C305 + C315) * C18181 + (C6304 + C6308) * C27880) * C9455) *
              C77 -
          ((((C233 * C1003 + C27805 * C1131) * C28010 +
             (C233 * C953 + C27805 * C1089) * C143) *
                C27880 +
            (C316 + C308) * C18181) *
               C9455 +
           ((C6308 + C6304) * C27880 + (C315 + C305) * C18181) * C9454 +
           ((C3254 + C3246) * C27880 + (C314 + C302) * C18181) * C9453) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C143 +
            (C233 * C144 + C27805 * C296) * C28010) *
               C21037 +
           (C4342 + C4350) * C21038 + (C4345 + C4351) * C21039 +
           ((C233 * C4052 + C27805 * C4266) * C143 +
            (C233 * C4134 + C27805 * C4340) * C28010) *
               C21040) *
              C27763 * C77 -
          (((C233 * C4133 + C27805 * C4339) * C28010 +
            (C233 * C4051 + C27805 * C4265) * C143) *
               C21040 +
           (C3255 + C3249) * C21039 + (C3254 + C3246) * C21038 +
           (C314 + C302) * C21037) *
              C27763 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C188 +
            (C1522 * C1050 + C1343 * C1169 + C1523 * C2608 + C1344 * C2778 +
             C1524 * C2610 + C1345 * C2777) *
                C28009) *
               C27880) *
              C27763 * C28010 * C77 -
          (((C1524 * C2609 + C1345 * C2779 + C1523 * C2607 + C1344 * C2780 +
             C1522 * C1049 + C1343 * C1170) *
                C28009 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C188) *
               C27880 +
           ((C1673 + C1672 + C1671) * C28009 + (C1544 + C1545 + C1546) * C188) *
               C18181) *
              C27763 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C18181 +
            (C4282 * C188 + C4408 * C28009) * C27880) *
               C9453 +
           ((C356 + C368) * C18181 + (C3309 + C3317) * C27880) * C9454 +
           ((C359 + C369) * C18181 + (C6359 + C6363) * C27880) * C9455) *
              C28010 * C77 -
          ((((C233 * C1047 + C27805 * C1172) * C28009 +
             (C233 * C953 + C27805 * C1089) * C188) *
                C27880 +
            (C370 + C362) * C18181) *
               C9455 +
           ((C6363 + C6359) * C27880 + (C369 + C359) * C18181) * C9454 +
           ((C3317 + C3309) * C27880 + (C368 + C356) * C18181) * C9453) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C188 +
            (C233 * C189 + C27805 * C350) * C28009) *
               C21037 +
           (C4282 * C188 + C4408 * C28009) * C21038 +
           (C4284 * C188 + C4409 * C28009) * C21039 +
           ((C233 * C4052 + C27805 * C4266) * C188 +
            (C233 * C4200 + C27805 * C4401) * C28009) *
               C21040) *
              C27763 * C28010 * C77 -
          (((C233 * C4199 + C27805 * C4402) * C28009 +
            (C233 * C4051 + C27805 * C4265) * C188) *
               C21040 +
           (C3318 + C3312) * C21039 + (C3317 + C3309) * C21038 +
           (C368 + C356) * C21037) *
              C27763 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eezx[36] +=
        (-std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C87 +
           (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
               C77 -
           (C18502 + C18503) * C88 - (C18504 + C18505) * C78) *
              C27763 * C1343 +
          ((C18483 * C582 + C18181 * C836 + C18484 * C2486 + C27880 * C2834) *
               C87 +
           (C18483 * C586 + C18181 * C840 + C18484 * C2492 + C27880 * C2838) *
               C77 -
           (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
               C88 -
           (C18484 * C2491 + C27880 * C2837 + C18483 * C585 + C18181 * C839) *
               C78) *
              C27763 * C1344 +
          ((C18483 * C1348 + C18181 * C1723 + C18484 * C2484 + C27880 * C2832) *
               C87 +
           (C18483 * C1353 + C18181 * C1726 + C18484 * C2488 + C27880 * C2836) *
               C77 -
           (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 + C18181 * C1724) *
               C88 -
           (C18484 * C2487 + C27880 * C2835 + C18483 * C1354 + C18181 * C1727) *
               C78) *
              C27763 * C1345) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C87 +
           (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
               C77 -
           (C18502 + C18503) * C88 - (C18504 + C18505) * C78) *
              C9453 +
          ((C18503 + C18502) * C87 + (C18505 + C18504) * C77 -
           (C18506 + C18507) * C88 - (C18508 + C18509) * C78) *
              C9454 +
          ((C18507 + C18506) * C87 + (C18509 + C18508) * C77 -
           (C18484 * C953 + C27880 * C1207 + C18483 * C92 + C18181 * C408) *
               C88 -
           (C18484 * C957 + C27880 * C1211 + C18483 * C101 + C18181 * C413) *
               C78) *
              C9455) *
         C27805 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
           C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
              C87 +
          (C21245 * C98 + C21037 * C410 + C21246 * C960 + C21038 * C1214 +
           C21247 * C3005 + C21039 * C3374 + C21248 * C4054 + C21040 * C4462) *
              C77 -
          (C21248 * C4051 + C21040 * C4459 + C21247 * C3001 + C21039 * C3372 +
           C21246 * C955 + C21038 * C1209 + C21245 * C90 + C21037 * C406) *
              C88 -
          (C21248 * C4053 + C21040 * C4461 + C21247 * C3006 + C21039 * C3375 +
           C21246 * C959 + C21038 * C1213 + C21245 * C99 + C21037 * C411) *
              C78) *
         C27763 * C27805 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C27763 * C1343 +
           ((C18483 * C582 + C18181 * C836 + C18484 * C2486 + C27880 * C2834) *
                C143 +
            (C18483 * C634 + C18181 * C875 + C18484 * C2552 + C27880 * C2892) *
                C28010) *
               C27763 * C1344 +
           ((C18483 * C1348 + C18181 * C1723 + C18484 * C2484 +
             C27880 * C2832) *
                C143 +
            (C18483 * C1410 + C18181 * C1791 + C18484 * C2550 +
             C27880 * C2890) *
                C28010) *
               C27763 * C1345) *
              C77 -
          (((C18484 * C2549 + C27880 * C2889 + C18483 * C1411 +
             C18181 * C1792) *
                C28010 +
            (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
             C18181 * C1724) *
                C143) *
               C27763 * C1345 +
           ((C18484 * C2551 + C27880 * C2891 + C18483 * C633 + C18181 * C876) *
                C28010 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C143) *
               C27763 * C1344 +
           ((C18569 + C18568) * C28010 + (C18502 + C18503) * C143) * C27763 *
               C1343) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C9453 +
           ((C18503 + C18502) * C143 + (C18568 + C18569) * C28010) * C9454 +
           ((C18507 + C18506) * C143 + (C18570 + C18571) * C28010) * C9455) *
              C27805 * C77 -
          (((C18484 * C1003 + C27880 * C1249 + C18483 * C147 + C18181 * C470) *
                C28010 +
            (C18484 * C953 + C27880 * C1207 + C18483 * C92 + C18181 * C408) *
                C143) *
               C9455 +
           ((C18571 + C18570) * C28010 + (C18506 + C18507) * C143) * C9454 +
           ((C18569 + C18568) * C28010 + (C18502 + C18503) * C143) * C9453) *
              C27805 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
            C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
               C143 +
           (C21245 * C144 + C21037 * C467 + C21246 * C1006 + C21038 * C1252 +
            C21247 * C3062 + C21039 * C3445 + C21248 * C4134 + C21040 * C4514) *
               C28010) *
              C27763 * C27805 * C77 -
          ((C21248 * C4133 + C21040 * C4513 + C21247 * C3063 + C21039 * C3446 +
            C21246 * C1005 + C21038 * C1251 + C21245 * C145 + C21037 * C468) *
               C28010 +
           (C21248 * C4051 + C21040 * C4459 + C21247 * C3001 + C21039 * C3372 +
            C21246 * C955 + C21038 * C1209 + C21245 * C90 + C21037 * C406) *
               C143) *
              C27763 * C27805 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C27763 * C1343 +
           ((C18483 * C582 + C18181 * C836 + C18484 * C2486 + C27880 * C2834) *
                C188 +
            (C18483 * C676 + C18181 * C916 + C18484 * C2608 + C27880 * C2943) *
                C28009) *
               C27763 * C1344 +
           ((C18483 * C1348 + C18181 * C1723 + C18484 * C2484 +
             C27880 * C2832) *
                C188 +
            (C18483 * C1466 + C18181 * C1854 + C18484 * C2610 +
             C27880 * C2945) *
                C28009) *
               C27763 * C1345) *
              C28010 * C77 -
          (((C18484 * C2609 + C27880 * C2946 + C18483 * C1467 +
             C18181 * C1855) *
                C28009 +
            (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
             C18181 * C1724) *
                C188) *
               C27763 * C1345 +
           ((C18484 * C2607 + C27880 * C2944 + C18483 * C675 + C18181 * C915) *
                C28009 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C188) *
               C27763 * C1344 +
           ((C18631 + C18630) * C28009 + (C18502 + C18503) * C188) * C27763 *
               C1343) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C9453 +
           ((C18503 + C18502) * C188 + (C18630 + C18631) * C28009) * C9454 +
           ((C18507 + C18506) * C188 + (C18632 + C18633) * C28009) * C9455) *
              C27805 * C28010 * C77 -
          (((C18484 * C1047 + C27880 * C1290 + C18483 * C192 + C18181 * C524) *
                C28009 +
            (C18484 * C953 + C27880 * C1207 + C18483 * C92 + C18181 * C408) *
                C188) *
               C9455 +
           ((C18633 + C18632) * C28009 + (C18506 + C18507) * C188) * C9454 +
           ((C18631 + C18630) * C28009 + (C18502 + C18503) * C188) * C9453) *
              C27805 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
            C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
               C188 +
           (C21245 * C189 + C21037 * C521 + C21246 * C1050 + C21038 * C1287 +
            C21247 * C3118 + C21039 * C3507 + C21248 * C4200 + C21040 * C4565) *
               C28009) *
              C27763 * C27805 * C28010 * C77 -
          ((C21248 * C4199 + C21040 * C4566 + C21247 * C3119 + C21039 * C3508 +
            C21246 * C1049 + C21038 * C1288 + C21245 * C190 + C21037 * C522) *
               C28009 +
           (C21248 * C4051 + C21040 * C4459 + C21247 * C3001 + C21039 * C3372 +
            C21246 * C955 + C21038 * C1209 + C21245 * C90 + C21037 * C406) *
               C188) *
              C27763 * C27805 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (-std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C578 +
             (C10886 * C98 + C27763 * C104) * C28008) *
                C1343 +
            (C11220 + C11221) * C1344 + (C11222 + C11223) * C1345) *
               C18181 +
           ((C12922 + C12923) * C1343 + (C12388 + C12389) * C1344 +
            (C17210 + C17211) * C1345) *
               C27880) *
              C28009 * C576 -
          ((((C10886 * C11584 + C27763 * C11586) * C28008 +
             (C10886 * C11583 + C27763 * C11585) * C578) *
                C1345 +
            (C17211 + C17210) * C1344 + (C12389 + C12388) * C1343) *
               C27880 +
           ((C11225 + C11224) * C1345 + (C11223 + C11222) * C1344 +
            (C11221 + C11220) * C1343) *
               C18181) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C578 +
            (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
             C9460 * C100 + C9455 * C106) *
                C28008) *
               C27805 * C18181 +
           ((C9458 * C956 + C9453 * C964 + C9459 * C955 + C9454 * C963 +
             C9460 * C954 + C9455 * C962) *
                C578 +
            (C9458 * C960 + C9453 * C968 + C9459 * C959 + C9454 * C967 +
             C9460 * C958 + C9455 * C966) *
                C28008) *
               C27805 * C27880) *
              C28009 * C576 -
          (((C9460 * C5630 + C9455 * C5632 + C9459 * C2491 + C9454 * C2497 +
             C9458 * C2492 + C9453 * C2498) *
                C28008 +
            (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
             C9458 * C2486 + C9453 * C2494) *
                C578) *
               C27805 * C27880 +
           ((C9979 + C9978 + C9977) * C28008 + (C9976 + C9975 + C9974) * C578) *
               C27805 * C18181) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C578 +
            (C10886 * C98 + C27763 * C104) * C28008) *
               C27805 * C21037 +
           (C12922 + C12923) * C27805 * C21038 +
           (C12924 + C12925) * C27805 * C21039 +
           ((C10886 * C4052 + C27763 * C4056) * C578 +
            (C10886 * C4054 + C27763 * C4058) * C28008) *
               C27805 * C21040) *
              C28009 * C576 -
          (((C10886 * C12906 + C27763 * C12908) * C28008 +
            (C10886 * C12905 + C27763 * C12907) * C578) *
               C27805 * C21040 +
           (C12391 + C12390) * C27805 * C21039 +
           (C12389 + C12388) * C27805 * C21038 +
           (C11221 + C11220) * C27805 * C21037) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C629 +
            (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
            C11268 * C577) *
               C1343 +
           (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
               C1344 +
           (C11216 * C629 + C11269 * C576 - C11218 * C630 - C11270 * C577) *
               C1345) *
              C18181 +
          ((C12918 * C629 + C12988 * C576 - C12384 * C630 - C12448 * C577) *
               C1343 +
           (C12384 * C629 + C12448 * C576 - C17208 * C630 - C17264 * C577) *
               C1344 +
           (C17208 * C629 + C17264 * C576 -
            (C10886 * C11583 + C27763 * C11585) * C630 -
            (C10886 * C11621 + C27763 * C11622) * C577) *
               C1345) *
              C27880) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C629 +
           (C9458 * C144 + C9453 * C149 + C9459 * C145 + C9454 * C150 +
            C9460 * C146 + C9455 * C151) *
               C576 -
           (C9976 + C9975 + C9974) * C630 - (C10036 + C10037 + C10038) * C577) *
              C27805 * C18181 +
          ((C9458 * C956 + C9453 * C964 + C9459 * C955 + C9454 * C963 +
            C9460 * C954 + C9455 * C962) *
               C629 +
           (C9458 * C1006 + C9453 * C1010 + C9459 * C1005 + C9454 * C1009 +
            C9460 * C1004 + C9455 * C1008) *
               C576 -
           (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
            C9458 * C2486 + C9453 * C2494) *
               C630 -
           (C9460 * C5683 + C9455 * C5684 + C9459 * C2551 + C9454 * C2555 +
            C9458 * C2552 + C9453 * C2556) *
               C577) *
              C27805 * C27880) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C629 +
           (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
           C11268 * C577) *
              C27805 * C21037 +
          (C12918 * C629 + C12988 * C576 - C12384 * C630 - C12448 * C577) *
              C27805 * C21038 +
          (C12920 * C629 + C12989 * C576 - C12386 * C630 - C12449 * C577) *
              C27805 * C21039 +
          ((C10886 * C4052 + C27763 * C4056) * C629 +
           (C10886 * C4134 + C27763 * C4136) * C576 -
           (C10886 * C12905 + C27763 * C12907) * C630 -
           (C10886 * C12975 + C27763 * C12976) * C577) *
              C27805 * C21040) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[37] += (-std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C1343 +
                      (C11307 + C11319) * C1344 + (C11310 + C11320) * C1345) *
                         C18181 +
                     ((C12918 * C188 + C13048 * C28009) * C1343 +
                      (C12502 + C12510) * C1344 + (C17315 + C17319) * C1345) *
                         C27880) *
                        C576 -
                    ((((C10886 * C11657 + C27763 * C11658) * C28009 +
                       (C10886 * C11583 + C27763 * C11585) * C188) *
                          C1345 +
                      (C17319 + C17315) * C1344 + (C12510 + C12502) * C1343) *
                         C27880 +
                     ((C11321 + C11313) * C1345 + (C11320 + C11310) * C1344 +
                      (C11319 + C11307) * C1343) *
                         C18181) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C188 +
                      (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                       C9454 * C195 + C9460 * C191 + C9455 * C196) *
                          C28009) *
                         C27805 * C18181 +
                     ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                       C9454 * C963 + C9460 * C954 + C9455 * C962) *
                          C188 +
                      (C9458 * C1050 + C9453 * C1054 + C9459 * C1049 +
                       C9454 * C1053 + C9460 * C1048 + C9455 * C1052) *
                          C28009) *
                         C27805 * C27880) *
                        C576 -
                    (((C9460 * C5735 + C9455 * C5736 + C9459 * C2607 +
                       C9454 * C2611 + C9458 * C2608 + C9453 * C2612) *
                          C28009 +
                      (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 +
                       C9454 * C2493 + C9458 * C2486 + C9453 * C2494) *
                          C188) *
                         C27805 * C27880 +
                     ((C10097 + C10096 + C10095) * C28009 +
                      (C9976 + C9975 + C9974) * C188) *
                         C27805 * C18181) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C188 +
                      (C10886 * C189 + C27763 * C194) * C28009) *
                         C27805 * C21037 +
                     (C12918 * C188 + C13048 * C28009) * C27805 * C21038 +
                     (C12920 * C188 + C13049 * C28009) * C27805 * C21039 +
                     ((C10886 * C4052 + C27763 * C4056) * C188 +
                      (C10886 * C4200 + C27763 * C4202) * C28009) *
                         C27805 * C21040) *
                        C576 -
                    (((C10886 * C13041 + C27763 * C13042) * C28009 +
                      (C10886 * C12905 + C27763 * C12907) * C188) *
                         C27805 * C21040 +
                     (C12511 + C12505) * C27805 * C21039 +
                     (C12510 + C12502) * C27805 * C21038 +
                     (C11319 + C11307) * C27805 * C21037) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C578 +
            (C1522 * C960 + C1343 * C1096 + C1523 * C2492 + C1344 * C2672 +
             C1524 * C2488 + C1345 * C2671) *
                C28008) *
               C27880) *
              C27763 * C28009 * C576 -
          (((C1524 * C11584 + C1345 * C11694 + C1523 * C2488 + C1344 * C2671 +
             C1522 * C2492 + C1343 * C2672) *
                C28008 +
            (C1524 * C11583 + C1345 * C11693 + C1523 * C2484 + C1344 * C2667 +
             C1522 * C2486 + C1343 * C2668) *
                C578) *
               C27880 +
           ((C1524 * C1920 + C1345 * C2134 + C1523 * C1353 + C1344 * C1528 +
             C1522 * C586 + C1343 * C722) *
                C28008 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C578) *
               C18181) *
              C27763 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C18181 +
            (C4286 + C4287) * C27880) *
               C9453 +
           ((C257 * C578 + C258 * C28008) * C18181 + (C4278 + C4279) * C27880) *
               C9454 +
           ((C259 * C578 + C260 * C28008) * C18181 + (C7250 + C7251) * C27880) *
               C9455) *
              C28009 * C576 -
          ((((C233 * C5630 + C27805 * C5788) * C28008 +
             (C233 * C5629 + C27805 * C5787) * C578) *
                C27880 +
            ((C233 * C584 + C27805 * C720) * C28008 +
             (C233 * C580 + C27805 * C716) * C578) *
                C18181) *
               C9455 +
           (((C233 * C2491 + C27805 * C2670) * C28008 +
             (C233 * C2485 + C27805 * C2666) * C578) *
                C27880 +
            ((C233 * C585 + C27805 * C721) * C28008 +
             (C233 * C581 + C27805 * C717) * C578) *
                C18181) *
               C9454 +
           (((C233 * C2492 + C27805 * C2672) * C28008 +
             (C233 * C2486 + C27805 * C2668) * C578) *
                C27880 +
            ((C233 * C586 + C27805 * C722) * C28008 +
             (C233 * C582 + C27805 * C718) * C578) *
                C18181) *
               C9453) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C578 +
            (C233 * C98 + C27805 * C239) * C28008) *
               C21037 +
           (C4286 + C4287) * C21038 + (C4288 + C4289) * C21039 +
           ((C233 * C4052 + C27805 * C4266) * C578 +
            (C233 * C4054 + C27805 * C4268) * C28008) *
               C21040) *
              C27763 * C28009 * C576 -
          (((C233 * C12906 + C27805 * C13100) * C28008 +
            (C233 * C12905 + C27805 * C13099) * C578) *
               C21040 +
           ((C233 * C3572 + C27805 * C3738) * C28008 +
            (C233 * C3570 + C27805 * C3736) * C578) *
               C21039 +
           ((C233 * C2492 + C27805 * C2672) * C28008 +
            (C233 * C2486 + C27805 * C2668) * C578) *
               C21038 +
           ((C233 * C586 + C27805 * C722) * C28008 +
            (C233 * C582 + C27805 * C718) * C578) *
               C21037) *
              C27763 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C629 +
           (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
            C1524 * C1410 + C1345 * C1599) *
               C576 -
           (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
            C1522 * C582 + C1343 * C718) *
               C630 -
           (C1524 * C2000 + C1345 * C2185 + C1523 * C1410 + C1344 * C1599 +
            C1522 * C634 + C1343 * C757) *
               C577) *
              C18181 +
          ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
            C1524 * C2484 + C1345 * C2667) *
               C629 +
           (C1522 * C1006 + C1343 * C1134 + C1523 * C2552 + C1344 * C2726 +
            C1524 * C2550 + C1345 * C2725) *
               C576 -
           (C1524 * C11583 + C1345 * C11693 + C1523 * C2484 + C1344 * C2667 +
            C1522 * C2486 + C1343 * C2668) *
               C630 -
           (C1524 * C11621 + C1345 * C11729 + C1523 * C2550 + C1344 * C2725 +
            C1522 * C2552 + C1343 * C2726) *
               C577) *
              C27880) *
         C27763 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C629 +
            (C233 * C144 + C27805 * C296) * C576 -
            (C233 * C582 + C27805 * C718) * C630 -
            (C233 * C634 + C27805 * C757) * C577) *
               C18181 +
           (C4282 * C629 + C4348 * C576 -
            (C233 * C2486 + C27805 * C2668) * C630 -
            (C233 * C2552 + C27805 * C2726) * C577) *
               C27880) *
              C9453 +
          ((C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
            (C233 * C633 + C27805 * C758) * C577) *
               C18181 +
           (C3189 * C629 + C3252 * C576 -
            (C233 * C2485 + C27805 * C2666) * C630 -
            (C233 * C2551 + C27805 * C2724) * C577) *
               C27880) *
              C9454 +
          ((C259 * C629 + C312 * C576 - (C233 * C580 + C27805 * C716) * C630 -
            (C233 * C632 + C27805 * C759) * C577) *
               C18181 +
           (C6252 * C629 + C6307 * C576 -
            (C233 * C5629 + C27805 * C5787) * C630 -
            (C233 * C5683 + C27805 * C5839) * C577) *
               C27880) *
              C9455) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C629 +
           (C233 * C144 + C27805 * C296) * C576 -
           (C233 * C582 + C27805 * C718) * C630 -
           (C233 * C634 + C27805 * C757) * C577) *
              C21037 +
          (C4282 * C629 + C4348 * C576 -
           (C233 * C2486 + C27805 * C2668) * C630 -
           (C233 * C2552 + C27805 * C2726) * C577) *
              C21038 +
          (C4284 * C629 + C4349 * C576 -
           (C233 * C3570 + C27805 * C3736) * C630 -
           (C233 * C3628 + C27805 * C3789) * C577) *
              C21039 +
          ((C233 * C4052 + C27805 * C4266) * C629 +
           (C233 * C4134 + C27805 * C4340) * C576 -
           (C233 * C12905 + C27805 * C13099) * C630 -
           (C233 * C12975 + C27805 * C13175) * C577) *
              C21040) *
         C27763 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C188 +
            (C1522 * C1050 + C1343 * C1169 + C1523 * C2608 + C1344 * C2778 +
             C1524 * C2610 + C1345 * C2777) *
                C28009) *
               C27880) *
              C27763 * C576 -
          (((C1524 * C11657 + C1345 * C11764 + C1523 * C2610 + C1344 * C2777 +
             C1522 * C2608 + C1343 * C2778) *
                C28009 +
            (C1524 * C11583 + C1345 * C11693 + C1523 * C2484 + C1344 * C2667 +
             C1522 * C2486 + C1343 * C2668) *
                C188) *
               C27880 +
           ((C1524 * C2066 + C1345 * C2238 + C1523 * C1466 + C1344 * C1661 +
             C1522 * C676 + C1343 * C798) *
                C28009 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C188) *
               C18181) *
              C27763 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C18181 +
            (C4282 * C188 + C4408 * C28009) * C27880) *
               C9453 +
           ((C356 + C368) * C18181 + (C3309 + C3317) * C27880) * C9454 +
           ((C359 + C369) * C18181 + (C6359 + C6363) * C27880) * C9455) *
              C576 -
          ((((C233 * C5735 + C27805 * C5890) * C28009 +
             (C233 * C5629 + C27805 * C5787) * C188) *
                C27880 +
            ((C233 * C674 + C27805 * C796) * C28009 +
             (C233 * C580 + C27805 * C716) * C188) *
                C18181) *
               C9455 +
           (((C233 * C2607 + C27805 * C2780) * C28009 +
             (C233 * C2485 + C27805 * C2666) * C188) *
                C27880 +
            ((C233 * C675 + C27805 * C797) * C28009 +
             (C233 * C581 + C27805 * C717) * C188) *
                C18181) *
               C9454 +
           (((C233 * C2608 + C27805 * C2778) * C28009 +
             (C233 * C2486 + C27805 * C2668) * C188) *
                C27880 +
            ((C233 * C676 + C27805 * C798) * C28009 +
             (C233 * C582 + C27805 * C718) * C188) *
                C18181) *
               C9453) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C188 +
            (C233 * C189 + C27805 * C350) * C28009) *
               C21037 +
           (C4282 * C188 + C4408 * C28009) * C21038 +
           (C4284 * C188 + C4409 * C28009) * C21039 +
           ((C233 * C4052 + C27805 * C4266) * C188 +
            (C233 * C4200 + C27805 * C4401) * C28009) *
               C21040) *
              C27763 * C576 -
          (((C233 * C13041 + C27805 * C13238) * C28009 +
            (C233 * C12905 + C27805 * C13099) * C188) *
               C21040 +
           ((C233 * C3682 + C27805 * C3842) * C28009 +
            (C233 * C3570 + C27805 * C3736) * C188) *
               C21039 +
           ((C233 * C2608 + C27805 * C2778) * C28009 +
            (C233 * C2486 + C27805 * C2668) * C188) *
               C21038 +
           ((C233 * C676 + C27805 * C798) * C28009 +
            (C233 * C582 + C27805 * C718) * C188) *
               C21037) *
              C27763 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C27763 * C1343 +
           ((C20386 + C20387) * C578 + (C20388 + C20389) * C28008) * C27763 *
               C1344 +
           ((C20390 + C20391) * C578 + (C20392 + C20393) * C28008) * C27763 *
               C1345) *
              C28009 * C576 -
          (((C18484 * C11584 + C27880 * C11800 + C18483 * C1920 +
             C18181 * C2292) *
                C28008 +
            (C18484 * C11583 + C27880 * C11799 + C18483 * C1918 +
             C18181 * C2290) *
                C578) *
               C27763 * C1345 +
           ((C20393 + C20392) * C28008 + (C20391 + C20390) * C578) * C27763 *
               C1344 +
           ((C20389 + C20388) * C28008 + (C20387 + C20386) * C578) * C27763 *
               C1343) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C9453 +
           ((C18503 + C18502) * C578 + (C18505 + C18504) * C28008) * C9454 +
           ((C18507 + C18506) * C578 + (C18509 + C18508) * C28008) * C9455) *
              C27805 * C28009 * C576 -
          (((C18484 * C5630 + C27880 * C5942 + C18483 * C584 + C18181 * C838) *
                C28008 +
            (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                C578) *
               C9455 +
           ((C18484 * C2491 + C27880 * C2837 + C18483 * C585 + C18181 * C839) *
                C28008 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C578) *
               C9454 +
           ((C18484 * C2492 + C27880 * C2838 + C18483 * C586 + C18181 * C840) *
                C28008 +
            (C18484 * C2486 + C27880 * C2834 + C18483 * C582 + C18181 * C836) *
                C578) *
               C9453) *
              C27805 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
            C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
               C578 +
           (C21245 * C98 + C21037 * C410 + C21246 * C960 + C21038 * C1214 +
            C21247 * C3005 + C21039 * C3374 + C21248 * C4054 + C21040 * C4462) *
               C28008) *
              C27763 * C27805 * C28009 * C576 -
          ((C21248 * C12906 + C21040 * C13302 + C21247 * C3572 +
            C21039 * C3896 + C21246 * C2492 + C21038 * C2838 + C21245 * C586 +
            C21037 * C840) *
               C28008 +
           (C21248 * C12905 + C21040 * C13301 + C21247 * C3570 +
            C21039 * C3894 + C21246 * C2486 + C21038 * C2834 + C21245 * C582 +
            C21037 * C836) *
               C578) *
              C27763 * C27805 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C629 +
           (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
               C576 -
           (C20387 + C20386) * C630 - (C20452 + C20453) * C577) *
              C27763 * C1343 +
          ((C20386 + C20387) * C629 + (C20453 + C20452) * C576 -
           (C20391 + C20390) * C630 - (C20454 + C20455) * C577) *
              C27763 * C1344 +
          ((C20390 + C20391) * C629 + (C20455 + C20454) * C576 -
           (C18484 * C11583 + C27880 * C11799 + C18483 * C1918 +
            C18181 * C2290) *
               C630 -
           (C18484 * C11621 + C27880 * C11835 + C18483 * C2000 +
            C18181 * C2363) *
               C577) *
              C27763 * C1345) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C629 +
           (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
               C576 -
           (C18484 * C2486 + C27880 * C2834 + C18483 * C582 + C18181 * C836) *
               C630 -
           (C18484 * C2552 + C27880 * C2892 + C18483 * C634 + C18181 * C875) *
               C577) *
              C9453 +
          ((C18503 + C18502) * C629 + (C18568 + C18569) * C576 -
           (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
               C630 -
           (C18484 * C2551 + C27880 * C2891 + C18483 * C633 + C18181 * C876) *
               C577) *
              C9454 +
          ((C18507 + C18506) * C629 + (C18570 + C18571) * C576 -
           (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
               C630 -
           (C18484 * C5683 + C27880 * C5993 + C18483 * C632 + C18181 * C877) *
               C577) *
              C9455) *
         C27805 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
           C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
              C629 +
          (C21245 * C144 + C21037 * C467 + C21246 * C1006 + C21038 * C1252 +
           C21247 * C3062 + C21039 * C3445 + C21248 * C4134 + C21040 * C4514) *
              C576 -
          (C21248 * C12905 + C21040 * C13301 + C21247 * C3570 + C21039 * C3894 +
           C21246 * C2486 + C21038 * C2834 + C21245 * C582 + C21037 * C836) *
              C630 -
          (C21248 * C12975 + C21040 * C13353 + C21247 * C3628 + C21039 * C3947 +
           C21246 * C2552 + C21038 * C2892 + C21245 * C634 + C21037 * C875) *
              C577) *
         C27763 * C27805 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C27763 * C1343 +
           ((C20386 + C20387) * C188 + (C20514 + C20515) * C28009) * C27763 *
               C1344 +
           ((C20390 + C20391) * C188 + (C20516 + C20517) * C28009) * C27763 *
               C1345) *
              C576 -
          (((C18484 * C11657 + C27880 * C11870 + C18483 * C2066 +
             C18181 * C2422) *
                C28009 +
            (C18484 * C11583 + C27880 * C11799 + C18483 * C1918 +
             C18181 * C2290) *
                C188) *
               C27763 * C1345 +
           ((C20517 + C20516) * C28009 + (C20391 + C20390) * C188) * C27763 *
               C1344 +
           ((C20515 + C20514) * C28009 + (C20387 + C20386) * C188) * C27763 *
               C1343) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C9453 +
           ((C18503 + C18502) * C188 + (C18630 + C18631) * C28009) * C9454 +
           ((C18507 + C18506) * C188 + (C18632 + C18633) * C28009) * C9455) *
              C27805 * C576 -
          (((C18484 * C5735 + C27880 * C6044 + C18483 * C674 + C18181 * C914) *
                C28009 +
            (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                C188) *
               C9455 +
           ((C18484 * C2607 + C27880 * C2944 + C18483 * C675 + C18181 * C915) *
                C28009 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C188) *
               C9454 +
           ((C18484 * C2608 + C27880 * C2943 + C18483 * C676 + C18181 * C916) *
                C28009 +
            (C18484 * C2486 + C27880 * C2834 + C18483 * C582 + C18181 * C836) *
                C188) *
               C9453) *
              C27805 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
            C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
               C188 +
           (C21245 * C189 + C21037 * C521 + C21246 * C1050 + C21038 * C1287 +
            C21247 * C3118 + C21039 * C3507 + C21248 * C4200 + C21040 * C4565) *
               C28009) *
              C27763 * C27805 * C576 -
          ((C21248 * C13041 + C21040 * C13404 + C21247 * C3682 +
            C21039 * C4000 + C21246 * C2608 + C21038 * C2943 + C21245 * C676 +
            C21037 * C916) *
               C28009 +
           (C21248 * C12905 + C21040 * C13301 + C21247 * C3570 +
            C21039 * C3894 + C21246 * C2486 + C21038 * C2834 + C21245 * C582 +
            C21037 * C836) *
               C188) *
              C27763 * C27805 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[38] += (-std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C578 +
                       (C10886 * C98 + C27763 * C104) * C28008) *
                          C1343 +
                      (C11220 + C11221) * C1344 + (C11222 + C11223) * C1345) *
                         C18181 +
                     ((C12922 + C12923) * C1343 + (C12388 + C12389) * C1344 +
                      (C17210 + C17211) * C1345) *
                         C27880) *
                        C951 -
                    ((((C10886 * C12372 + C27763 * C12374) * C28008 +
                       (C10886 * C12371 + C27763 * C12373) * C578) *
                          C1345 +
                      (C12391 + C12390) * C1344 + (C12925 + C12924) * C1343) *
                         C27880 +
                     ((C17211 + C17210) * C1345 + (C12389 + C12388) * C1344 +
                      (C12923 + C12922) * C1343) *
                         C18181) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C578 +
                      (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
                       C9460 * C100 + C9455 * C106) *
                          C28008) *
                         C27805 * C18181 +
                     ((C19146 + C19147 + C19148) * C578 +
                      (C19149 + C19150 + C19151) * C28008) *
                         C27805 * C27880) *
                        C951 -
                    (((C9460 * C3008 + C9455 * C3011 + C9459 * C3006 +
                       C9454 * C3010 + C9458 * C3005 + C9453 * C3009) *
                          C28008 +
                      (C9460 * C3002 + C9455 * C3007 + C9459 * C3001 +
                       C9454 * C3004 + C9458 * C3000 + C9453 * C3003) *
                          C578) *
                         C27805 * C27880 +
                     ((C19151 + C19150 + C19149) * C28008 +
                      (C19148 + C19147 + C19146) * C578) *
                         C27805 * C18181) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C578 +
                      (C10886 * C98 + C27763 * C104) * C28008) *
                         C27805 * C21037 +
                     (C12922 + C12923) * C27805 * C21038 +
                     (C12924 + C12925) * C27805 * C21039 +
                     (C21668 + C21669) * C27805 * C21040) *
                        C951 -
                    (((C10886 * C21658 + C27763 * C21660) * C28008 +
                      (C10886 * C21657 + C27763 * C21659) * C578) *
                         C27805 * C21040 +
                     (C21669 + C21668) * C27805 * C21039 +
                     (C12925 + C12924) * C27805 * C21038 +
                     (C12923 + C12922) * C27805 * C21037) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q));
    d2eexy[38] += (-std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C1343 +
                      (C11214 * C143 + C11268 * C28010) * C1344 +
                      (C11216 * C143 + C11269 * C28010) * C1345) *
                         C18181 +
                     ((C12978 + C12990) * C1343 + (C12981 + C12982) * C1344 +
                      (C17744 + C17745) * C1345) *
                         C27880) *
                        C28008 * C951 -
                    ((((C10886 * C12441 + C27763 * C12442) * C28010 +
                       (C10886 * C12371 + C27763 * C12373) * C143) *
                          C1345 +
                      (C12987 + C12986) * C1344 + (C12991 + C12983) * C1343) *
                         C27880 +
                     ((C17745 + C17744) * C1345 + (C12982 + C12981) * C1344 +
                      (C12990 + C12978) * C1343) *
                         C18181) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C27805 * C18181 +
                     ((C19146 + C19147 + C19148) * C143 +
                      (C19208 + C19209 + C19210) * C28010) *
                         C27805 * C27880) *
                        C28008 * C951 -
                    (((C9460 * C3064 + C9455 * C3067 + C9459 * C3063 +
                       C9454 * C3066 + C9458 * C3062 + C9453 * C3065) *
                          C28010 +
                      (C9460 * C3002 + C9455 * C3007 + C9459 * C3001 +
                       C9454 * C3004 + C9458 * C3000 + C9453 * C3003) *
                          C143) *
                         C27805 * C27880 +
                     ((C19210 + C19209 + C19208) * C28010 +
                      (C19148 + C19147 + C19146) * C143) *
                         C27805 * C18181) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C143 +
                      (C10886 * C144 + C27763 * C149) * C28010) *
                         C27805 * C21037 +
                     (C12978 + C12990) * C27805 * C21038 +
                     (C12983 + C12991) * C27805 * C21039 +
                     (C21706 + C21710) * C27805 * C21040) *
                        C28008 * C951 -
                    (((C10886 * C21703 + C27763 * C21704) * C28010 +
                      (C10886 * C21657 + C27763 * C21659) * C143) *
                         C27805 * C21040 +
                     (C21710 + C21706) * C27805 * C21039 +
                     (C12991 + C12983) * C27805 * C21038 +
                     (C12990 + C12978) * C27805 * C21037) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C1045 +
            (C10886 * C189 + C27763 * C194) * C951 - C12918 * C1046 -
            C13048 * C952) *
               C1343 +
           (C11214 * C1045 + C11316 * C951 - C12384 * C1046 - C12508 * C952) *
               C1344 +
           (C11216 * C1045 + C11317 * C951 - C17208 * C1046 - C17318 * C952) *
               C1345) *
              C18181 +
          ((C12918 * C1045 + C13048 * C951 - C12920 * C1046 - C13049 * C952) *
               C1343 +
           (C12384 * C1045 + C12508 * C951 - C12386 * C1046 - C12509 * C952) *
               C1344 +
           (C17208 * C1045 + C17318 * C951 -
            (C10886 * C12371 + C27763 * C12373) * C1046 -
            (C10886 * C12499 + C27763 * C12500) * C952) *
               C1345) *
              C27880) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C1045 +
           (C9458 * C189 + C9453 * C194 + C9459 * C190 + C9454 * C195 +
            C9460 * C191 + C9455 * C196) *
               C951 -
           (C19148 + C19147 + C19146) * C1046 -
           (C19267 + C19268 + C19269) * C952) *
              C27805 * C18181 +
          ((C19146 + C19147 + C19148) * C1045 +
           (C19269 + C19268 + C19267) * C951 -
           (C9460 * C3002 + C9455 * C3007 + C9459 * C3001 + C9454 * C3004 +
            C9458 * C3000 + C9453 * C3003) *
               C1046 -
           (C9460 * C3120 + C9455 * C3123 + C9459 * C3119 + C9454 * C3122 +
            C9458 * C3118 + C9453 * C3121) *
               C952) *
              C27805 * C27880) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C10886 * C89 + C27763 * C94) * C1045 +
           (C10886 * C189 + C27763 * C194) * C951 - C12918 * C1046 -
           C13048 * C952) *
              C27805 * C21037 +
          (C12918 * C1045 + C13048 * C951 - C12920 * C1046 - C13049 * C952) *
              C27805 * C21038 +
          (C12920 * C1045 + C13049 * C951 - C21666 * C1046 - C21749 * C952) *
              C27805 * C21039 +
          (C21666 * C1045 + C21749 * C951 -
           (C10886 * C21657 + C27763 * C21659) * C1046 -
           (C10886 * C21744 + C27763 * C21745) * C952) *
              C27805 * C21040) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C18181 +
           ((C20730 + C20731 + C20732) * C578 +
            (C20733 + C20734 + C20735) * C28008) *
               C27880) *
              C27763 * C951 -
          (((C1524 * C12372 + C1345 * C12562 + C1523 * C3572 + C1344 * C3738 +
             C1522 * C3005 + C1343 * C3177) *
                C28008 +
            (C1524 * C12371 + C1345 * C12561 + C1523 * C3570 + C1344 * C3736 +
             C1522 * C3000 + C1343 * C3174) *
                C578) *
               C27880 +
           ((C20735 + C20734 + C20733) * C28008 +
            (C20732 + C20731 + C20730) * C578) *
               C18181) *
              C27763 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C18181 +
            (C4286 + C4287) * C27880) *
               C9453 +
           ((C257 * C578 + C258 * C28008) * C18181 + (C4278 + C4279) * C27880) *
               C9454 +
           ((C259 * C578 + C260 * C28008) * C18181 + (C7250 + C7251) * C27880) *
               C9455) *
              C951 -
          ((((C233 * C3008 + C27805 * C3179) * C28008 +
             (C233 * C3002 + C27805 * C3176) * C578) *
                C27880 +
            (C7251 + C7250) * C18181) *
               C9455 +
           ((C4281 + C4280) * C27880 + (C4279 + C4278) * C18181) * C9454 +
           ((C4289 + C4288) * C27880 + (C4287 + C4286) * C18181) * C9453) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C578 +
            (C233 * C98 + C27805 * C239) * C28008) *
               C21037 +
           (C4286 + C4287) * C21038 + (C4288 + C4289) * C21039 +
           (C21792 + C21793) * C21040) *
              C27763 * C951 -
          (((C233 * C21658 + C27805 * C21784) * C28008 +
            (C233 * C21657 + C27805 * C21783) * C578) *
               C21040 +
           (C21793 + C21792) * C21039 + (C4289 + C4288) * C21038 +
           (C4287 + C4286) * C21037) *
              C27763 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C18181 +
           ((C20730 + C20731 + C20732) * C143 +
            (C20792 + C20793 + C20794) * C28010) *
               C27880) *
              C27763 * C28008 * C951 -
          (((C1524 * C12441 + C1345 * C12613 + C1523 * C3628 + C1344 * C3789 +
             C1522 * C3062 + C1343 * C3242) *
                C28010 +
            (C1524 * C12371 + C1345 * C12561 + C1523 * C3570 + C1344 * C3736 +
             C1522 * C3000 + C1343 * C3174) *
                C143) *
               C27880 +
           ((C20794 + C20793 + C20792) * C28010 +
            (C20732 + C20731 + C20730) * C143) *
               C18181) *
              C27763 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C18181 +
            (C4342 + C4350) * C27880) *
               C9453 +
           ((C302 + C314) * C18181 + (C3246 + C3254) * C27880) * C9454 +
           ((C305 + C315) * C18181 + (C6304 + C6308) * C27880) * C9455) *
              C28008 * C951 -
          ((((C233 * C3064 + C27805 * C3244) * C28010 +
             (C233 * C3002 + C27805 * C3176) * C143) *
                C27880 +
            (C6308 + C6304) * C18181) *
               C9455 +
           ((C3255 + C3249) * C27880 + (C3254 + C3246) * C18181) * C9454 +
           ((C4351 + C4345) * C27880 + (C4350 + C4342) * C18181) * C9453) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C143 +
            (C233 * C144 + C27805 * C296) * C28010) *
               C21037 +
           (C4342 + C4350) * C21038 + (C4345 + C4351) * C21039 +
           (C21829 + C21833) * C21040) *
              C27763 * C28008 * C951 -
          (((C233 * C21703 + C27805 * C21827) * C28010 +
            (C233 * C21657 + C27805 * C21783) * C143) *
               C21040 +
           (C21833 + C21829) * C21039 + (C4351 + C4345) * C21038 +
           (C4350 + C4342) * C21037) *
              C27763 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (-std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C1045 +
           (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
            C1524 * C1466 + C1345 * C1661) *
               C951 -
           (C20732 + C20731 + C20730) * C1046 -
           (C20851 + C20852 + C20853) * C952) *
              C18181 +
          ((C20730 + C20731 + C20732) * C1045 +
           (C20853 + C20852 + C20851) * C951 -
           (C1524 * C12371 + C1345 * C12561 + C1523 * C3570 + C1344 * C3736 +
            C1522 * C3000 + C1343 * C3174) *
               C1046 -
           (C1524 * C12499 + C1345 * C12664 + C1523 * C3682 + C1344 * C3842 +
            C1522 * C3118 + C1343 * C3305) *
               C952) *
              C27880) *
         C27763 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C1045 +
            (C233 * C189 + C27805 * C350) * C951 - C4282 * C1046 -
            C4408 * C952) *
               C18181 +
           (C4282 * C1045 + C4408 * C951 - C4284 * C1046 - C4409 * C952) *
               C27880) *
              C9453 +
          ((C257 * C1045 + C365 * C951 - C3189 * C1046 - C3315 * C952) *
               C18181 +
           (C3189 * C1045 + C3315 * C951 - C3191 * C1046 - C3316 * C952) *
               C27880) *
              C9454 +
          ((C259 * C1045 + C366 * C951 - C6252 * C1046 - C6362 * C952) *
               C18181 +
           (C6252 * C1045 + C6362 * C951 -
            (C233 * C3002 + C27805 * C3176) * C1046 -
            (C233 * C3120 + C27805 * C3307) * C952) *
               C27880) *
              C9455) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C233 * C89 + C27805 * C234) * C1045 +
           (C233 * C189 + C27805 * C350) * C951 - C4282 * C1046 -
           C4408 * C952) *
              C21037 +
          (C4282 * C1045 + C4408 * C951 - C4284 * C1046 - C4409 * C952) *
              C21038 +
          (C4284 * C1045 + C4409 * C951 - C21790 * C1046 - C21871 * C952) *
              C21039 +
          (C21790 * C1045 + C21871 * C951 -
           (C233 * C21657 + C27805 * C21783) * C1046 -
           (C233 * C21744 + C27805 * C21867) * C952) *
              C21040) *
         C27763 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C27763 * C1343 +
           ((C20386 + C20387) * C578 + (C20388 + C20389) * C28008) * C27763 *
               C1344 +
           ((C20390 + C20391) * C578 + (C20392 + C20393) * C28008) * C27763 *
               C1345) *
              C951 -
          (((C18484 * C12372 + C27880 * C12716 + C18483 * C2488 +
             C18181 * C2836) *
                C28008 +
            (C18484 * C12371 + C27880 * C12715 + C18483 * C2484 +
             C18181 * C2832) *
                C578) *
               C27763 * C1345 +
           ((C18484 * C3572 + C27880 * C3896 + C18483 * C2492 +
             C18181 * C2838) *
                C28008 +
            (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
             C18181 * C2834) *
                C578) *
               C27763 * C1344 +
           ((C18484 * C3005 + C27880 * C3374 + C18483 * C960 + C18181 * C1214) *
                C28008 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C578) *
               C27763 * C1343) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C9453 +
           ((C18503 + C18502) * C578 + (C18505 + C18504) * C28008) * C9454 +
           ((C18507 + C18506) * C578 + (C18509 + C18508) * C28008) * C9455) *
              C27805 * C951 -
          (((C18484 * C3008 + C27880 * C3376 + C18483 * C958 + C18181 * C1212) *
                C28008 +
            (C18484 * C3002 + C27880 * C3373 + C18483 * C954 + C18181 * C1208) *
                C578) *
               C9455 +
           ((C18484 * C3006 + C27880 * C3375 + C18483 * C959 + C18181 * C1213) *
                C28008 +
            (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
                C578) *
               C9454 +
           ((C18484 * C3005 + C27880 * C3374 + C18483 * C960 + C18181 * C1214) *
                C28008 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C578) *
               C9453) *
              C27805 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
            C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
               C578 +
           (C21245 * C98 + C21037 * C410 + C21246 * C960 + C21038 * C1214 +
            C21247 * C3005 + C21039 * C3374 + C21248 * C4054 + C21040 * C4462) *
               C28008) *
              C27763 * C27805 * C951 -
          ((C21248 * C21658 + C21040 * C21906 + C21247 * C4054 +
            C21039 * C4462 + C21246 * C3005 + C21038 * C3374 + C21245 * C960 +
            C21037 * C1214) *
               C28008 +
           (C21248 * C21657 + C21040 * C21905 + C21247 * C4052 +
            C21039 * C4460 + C21246 * C3000 + C21038 * C3371 + C21245 * C956 +
            C21037 * C1210) *
               C578) *
              C27763 * C27805 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C27763 * C1343 +
           ((C20386 + C20387) * C143 + (C20453 + C20452) * C28010) * C27763 *
               C1344 +
           ((C20390 + C20391) * C143 + (C20455 + C20454) * C28010) * C27763 *
               C1345) *
              C28008 * C951 -
          (((C18484 * C12441 + C27880 * C12785 + C18483 * C2550 +
             C18181 * C2890) *
                C28010 +
            (C18484 * C12371 + C27880 * C12715 + C18483 * C2484 +
             C18181 * C2832) *
                C143) *
               C27763 * C1345 +
           ((C18484 * C3628 + C27880 * C3947 + C18483 * C2552 +
             C18181 * C2892) *
                C28010 +
            (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
             C18181 * C2834) *
                C143) *
               C27763 * C1344 +
           ((C18484 * C3062 + C27880 * C3445 + C18483 * C1006 +
             C18181 * C1252) *
                C28010 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C143) *
               C27763 * C1343) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C9453 +
           ((C18503 + C18502) * C143 + (C18568 + C18569) * C28010) * C9454 +
           ((C18507 + C18506) * C143 + (C18570 + C18571) * C28010) * C9455) *
              C27805 * C28008 * C951 -
          (((C18484 * C3064 + C27880 * C3447 + C18483 * C1004 +
             C18181 * C1250) *
                C28010 +
            (C18484 * C3002 + C27880 * C3373 + C18483 * C954 + C18181 * C1208) *
                C143) *
               C9455 +
           ((C18484 * C3063 + C27880 * C3446 + C18483 * C1005 +
             C18181 * C1251) *
                C28010 +
            (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
                C143) *
               C9454 +
           ((C18484 * C3062 + C27880 * C3445 + C18483 * C1006 +
             C18181 * C1252) *
                C28010 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C143) *
               C9453) *
              C27805 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
            C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
               C143 +
           (C21245 * C144 + C21037 * C467 + C21246 * C1006 + C21038 * C1252 +
            C21247 * C3062 + C21039 * C3445 + C21248 * C4134 + C21040 * C4514) *
               C28010) *
              C27763 * C27805 * C28008 * C951 -
          ((C21248 * C21703 + C21040 * C21941 + C21247 * C4134 +
            C21039 * C4514 + C21246 * C3062 + C21038 * C3445 + C21245 * C1006 +
            C21037 * C1252) *
               C28010 +
           (C21248 * C21657 + C21040 * C21905 + C21247 * C4052 +
            C21039 * C4460 + C21246 * C3000 + C21038 * C3371 + C21245 * C956 +
            C21037 * C1210) *
               C143) *
              C27763 * C27805 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eezz[38] +=
        (-std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C1045 +
           (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
               C951 -
           (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
               C1046 -
           (C18484 * C3118 + C27880 * C3507 + C18483 * C1050 + C18181 * C1287) *
               C952) *
              C27763 * C1343 +
          ((C20386 + C20387) * C1045 + (C20514 + C20515) * C951 -
           (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 + C18181 * C2834) *
               C1046 -
           (C18484 * C3682 + C27880 * C4000 + C18483 * C2608 + C18181 * C2943) *
               C952) *
              C27763 * C1344 +
          ((C20390 + C20391) * C1045 + (C20516 + C20517) * C951 -
           (C18484 * C12371 + C27880 * C12715 + C18483 * C2484 +
            C18181 * C2832) *
               C1046 -
           (C18484 * C12499 + C27880 * C12845 + C18483 * C2610 +
            C18181 * C2945) *
               C952) *
              C27763 * C1345) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C1045 +
           (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
               C951 -
           (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
               C1046 -
           (C18484 * C3118 + C27880 * C3507 + C18483 * C1050 + C18181 * C1287) *
               C952) *
              C9453 +
          ((C18503 + C18502) * C1045 + (C18630 + C18631) * C951 -
           (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
               C1046 -
           (C18484 * C3119 + C27880 * C3508 + C18483 * C1049 + C18181 * C1288) *
               C952) *
              C9454 +
          ((C18507 + C18506) * C1045 + (C18632 + C18633) * C951 -
           (C18484 * C3002 + C27880 * C3373 + C18483 * C954 + C18181 * C1208) *
               C1046 -
           (C18484 * C3120 + C27880 * C3509 + C18483 * C1048 + C18181 * C1289) *
               C952) *
              C9455) *
         C27805 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21245 * C89 + C21037 * C405 + C21246 * C956 + C21038 * C1210 +
           C21247 * C3000 + C21039 * C3371 + C21248 * C4052 + C21040 * C4460) *
              C1045 +
          (C21245 * C189 + C21037 * C521 + C21246 * C1050 + C21038 * C1287 +
           C21247 * C3118 + C21039 * C3507 + C21248 * C4200 + C21040 * C4565) *
              C951 -
          (C21248 * C21657 + C21040 * C21905 + C21247 * C4052 + C21039 * C4460 +
           C21246 * C3000 + C21038 * C3371 + C21245 * C956 + C21037 * C1210) *
              C1046 -
          (C21248 * C21744 + C21040 * C21976 + C21247 * C4200 + C21039 * C4565 +
           C21246 * C3118 + C21038 * C3507 + C21245 * C1050 + C21037 * C1287) *
              C952) *
         C27763 * C27805 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C87 +
           (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) * C77 -
           (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) * C88 -
           (C26640 * C100 + C27768 * C106 + C26647 * C99 + C27960 * C105) *
               C78) *
              C27805 * C28003 +
          ((C16160 + C16161) * C87 + (C16162 + C16163) * C77 -
           (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
               C88 -
           (C26640 * C958 + C27768 * C966 + C26647 * C959 + C27960 * C967) *
               C78) *
              C27805 * C28004 +
          ((C26647 * C3000 + C27960 * C3003 + C26640 * C3001 + C27768 * C3004) *
               C87 +
           (C26647 * C3005 + C27960 * C3009 + C26640 * C3006 + C27768 * C3010) *
               C77 -
           (C26640 * C3002 + C27768 * C3007 + C26647 * C3001 + C27960 * C3004) *
               C88 -
           (C26640 * C3008 + C27768 * C3011 + C26647 * C3006 + C27960 * C3010) *
               C78) *
              C27805 * C23835) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C143 +
            (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                C28010) *
               C27805 * C28003 +
           ((C16160 + C16161) * C143 + (C16234 + C16235) * C28010) * C27805 *
               C28004 +
           ((C26647 * C3000 + C27960 * C3003 + C26640 * C3001 +
             C27768 * C3004) *
                C143 +
            (C26647 * C3062 + C27960 * C3065 + C26640 * C3063 +
             C27768 * C3066) *
                C28010) *
               C27805 * C23835) *
              C77 -
          (((C26640 * C3064 + C27768 * C3067 + C26647 * C3063 +
             C27960 * C3066) *
                C28010 +
            (C26640 * C3002 + C27768 * C3007 + C26647 * C3001 +
             C27960 * C3004) *
                C143) *
               C27805 * C23835 +
           ((C26640 * C1004 + C27768 * C1008 + C26647 * C1005 +
             C27960 * C1009) *
                C28010 +
            (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                C143) *
               C27805 * C28004 +
           ((C26640 * C146 + C27768 * C151 + C26647 * C145 + C27960 * C150) *
                C28010 +
            (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                C143) *
               C27805 * C28003) *
              C78) *
         C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C188 +
            (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                C28009) *
               C27805 * C28003 +
           ((C16160 + C16161) * C188 + (C16307 + C16306) * C28009) * C27805 *
               C28004 +
           ((C26647 * C3000 + C27960 * C3003 + C26640 * C3001 +
             C27768 * C3004) *
                C188 +
            (C26647 * C3118 + C27960 * C3121 + C26640 * C3119 +
             C27768 * C3122) *
                C28009) *
               C27805 * C23835) *
              C28010 * C77 -
          (((C26640 * C3120 + C27768 * C3123 + C26647 * C3119 +
             C27960 * C3122) *
                C28009 +
            (C26640 * C3002 + C27768 * C3007 + C26647 * C3001 +
             C27960 * C3004) *
                C188) *
               C27805 * C23835 +
           ((C26640 * C1048 + C27768 * C1052 + C26647 * C1049 +
             C27960 * C1053) *
                C28009 +
            (C26640 * C954 + C27768 * C962 + C26647 * C955 + C27960 * C963) *
                C188) *
               C27805 * C28004 +
           ((C26640 * C191 + C27768 * C196 + C26647 * C190 + C27960 * C195) *
                C28009 +
            (C26640 * C91 + C27768 * C96 + C26647 * C90 + C27960 * C95) *
                C188) *
               C27805 * C28003) *
              C28010 * C78)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C87 +
            (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
               C28003 +
           (C4282 * C87 + C4283 * C77 - C3189 * C88 - C3190 * C78) * C28004 +
           (C4284 * C87 + C4285 * C77 - C3191 * C88 - C3192 * C78) * C23835) *
              C27960 +
          ((C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C28003 +
           (C3189 * C87 + C3190 * C77 - C6252 * C88 - C6253 * C78) * C28004 +
           (C3191 * C87 + C3192 * C77 - (C233 * C3002 + C27805 * C3176) * C88 -
            (C233 * C3008 + C27805 * C3179) * C78) *
               C23835) *
              C27768) *
         C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eeyy[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C233 * C89 + C27805 * C234) * C143 +
                       (C233 * C144 + C27805 * C296) * C28010) *
                          C28003 +
                      (C4342 + C4350) * C28004 + (C4345 + C4351) * C23835) *
                         C27960 +
                     ((C302 + C314) * C28003 + (C3246 + C3254) * C28004 +
                      (C3249 + C3255) * C23835) *
                         C27768) *
                        C77 -
                    ((((C233 * C3064 + C27805 * C3244) * C28010 +
                       (C233 * C3002 + C27805 * C3176) * C143) *
                          C23835 +
                      (C6308 + C6304) * C28004 + (C315 + C305) * C28003) *
                         C27768 +
                     ((C3255 + C3249) * C23835 + (C3254 + C3246) * C28004 +
                      (C314 + C302) * C28003) *
                         C27960) *
                        C78) *
                   C28009) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C233 * C89 + C27805 * C234) * C188 +
                       (C233 * C189 + C27805 * C350) * C28009) *
                          C28003 +
                      (C4282 * C188 + C4408 * C28009) * C28004 +
                      (C4284 * C188 + C4409 * C28009) * C23835) *
                         C27960 +
                     ((C356 + C368) * C28003 + (C3309 + C3317) * C28004 +
                      (C3312 + C3318) * C23835) *
                         C27768) *
                        C28010 * C77 -
                    ((((C233 * C3120 + C27805 * C3307) * C28009 +
                       (C233 * C3002 + C27805 * C3176) * C188) *
                          C23835 +
                      (C6363 + C6359) * C28004 + (C369 + C359) * C28003) *
                         C27768 +
                     ((C3318 + C3312) * C23835 + (C3317 + C3309) * C28004 +
                      (C368 + C356) * C28003) *
                         C27960) *
                        C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C24136 * C89 + C28003 * C405 + C24137 * C956 + C28004 * C1210 +
            C24138 * C3000 + C23835 * C3371) *
               C87 +
           (C24136 * C98 + C28003 * C410 + C24137 * C960 + C28004 * C1214 +
            C24138 * C3005 + C23835 * C3374) *
               C77 -
           (C24152 + C24153 + C24154) * C88 -
           (C24155 + C24156 + C24157) * C78) *
              C27960 +
          ((C24154 + C24153 + C24152) * C87 + (C24157 + C24156 + C24155) * C77 -
           (C24138 * C3002 + C23835 * C3373 + C24137 * C954 + C28004 * C1208 +
            C24136 * C91 + C28003 * C407) *
               C88 -
           (C24138 * C3008 + C23835 * C3376 + C24137 * C958 + C28004 * C1212 +
            C24136 * C100 + C28003 * C412) *
               C78) *
              C27768) *
         C27805 * C28009 * C28010) /
        (p * q * std::sqrt(p + q));
    d2eezy[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C143 +
                      (C24136 * C144 + C28003 * C467 + C24137 * C1006 +
                       C28004 * C1252 + C24138 * C3062 + C23835 * C3445) *
                          C28010) *
                         C27960 +
                     ((C24154 + C24153 + C24152) * C143 +
                      (C24214 + C24215 + C24216) * C28010) *
                         C27768) *
                        C27805 * C77 -
                    (((C24138 * C3064 + C23835 * C3447 + C24137 * C1004 +
                       C28004 * C1250 + C24136 * C146 + C28003 * C469) *
                          C28010 +
                      (C24138 * C3002 + C23835 * C3373 + C24137 * C954 +
                       C28004 * C1208 + C24136 * C91 + C28003 * C407) *
                          C143) *
                         C27768 +
                     ((C24216 + C24215 + C24214) * C28010 +
                      (C24152 + C24153 + C24154) * C143) *
                         C27960) *
                        C27805 * C78) *
                   C28009) /
                  (p * q * std::sqrt(p + q));
    d2eezz[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C188 +
                      (C24136 * C189 + C28003 * C521 + C24137 * C1050 +
                       C28004 * C1287 + C24138 * C3118 + C23835 * C3507) *
                          C28009) *
                         C27960 +
                     ((C24154 + C24153 + C24152) * C188 +
                      (C24273 + C24274 + C24275) * C28009) *
                         C27768) *
                        C27805 * C28010 * C77 -
                    (((C24138 * C3120 + C23835 * C3509 + C24137 * C1048 +
                       C28004 * C1289 + C24136 * C191 + C28003 * C523) *
                          C28009 +
                      (C24138 * C3002 + C23835 * C3373 + C24137 * C954 +
                       C28004 * C1208 + C24136 * C91 + C28003 * C407) *
                          C188) *
                         C27768 +
                     ((C24275 + C24274 + C24273) * C28009 +
                      (C24152 + C24153 + C24154) * C188) *
                         C27960) *
                        C27805 * C28010 * C78)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C578 +
            (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                C28008) *
               C27805 * C28003 +
           ((C16160 + C16161) * C578 + (C16162 + C16163) * C28008) * C27805 *
               C28004 +
           ((C26647 * C3000 + C27960 * C3003 + C26640 * C3001 +
             C27768 * C3004) *
                C578 +
            (C26647 * C3005 + C27960 * C3009 + C26640 * C3006 +
             C27768 * C3010) *
                C28008) *
               C27805 * C23835) *
              C28009 * C576 -
          (((C26640 * C3571 + C27768 * C3575 + C26647 * C3572 +
             C27960 * C3576) *
                C28008 +
            (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
             C27960 * C3574) *
                C578) *
               C27805 * C23835 +
           ((C15545 + C15544) * C28008 + (C15543 + C15542) * C578) * C27805 *
               C28004 +
           ((C13971 + C13970) * C28008 + (C13969 + C13968) * C578) * C27805 *
               C28003) *
              C28009 * C577)) /
        (p * q * std::sqrt(p + q));
    d2eexy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C629 +
           (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
               C576 -
           (C13969 + C13968) * C630 - (C14034 + C14035) * C577) *
              C27805 * C28003 +
          ((C16160 + C16161) * C629 + (C16234 + C16235) * C576 -
           (C15543 + C15542) * C630 - (C15616 + C15617) * C577) *
              C27805 * C28004 +
          ((C26647 * C3000 + C27960 * C3003 + C26640 * C3001 + C27768 * C3004) *
               C629 +
           (C26647 * C3062 + C27960 * C3065 + C26640 * C3063 + C27768 * C3066) *
               C576 -
           (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 + C27960 * C3574) *
               C630 -
           (C26640 * C3627 + C27768 * C3629 + C26647 * C3628 + C27960 * C3630) *
               C577) *
              C27805 * C23835) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eexz[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C188 +
            (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
                C28009) *
               C27805 * C28003 +
           ((C16160 + C16161) * C188 + (C16307 + C16306) * C28009) * C27805 *
               C28004 +
           ((C26647 * C3000 + C27960 * C3003 + C26640 * C3001 +
             C27768 * C3004) *
                C188 +
            (C26647 * C3118 + C27960 * C3121 + C26640 * C3119 +
             C27768 * C3122) *
                C28009) *
               C27805 * C23835) *
              C576 -
          (((C26640 * C3681 + C27768 * C3683 + C26647 * C3682 +
             C27960 * C3684) *
                C28009 +
            (C26640 * C3569 + C27768 * C3573 + C26647 * C3570 +
             C27960 * C3574) *
                C188) *
               C27805 * C23835 +
           ((C15689 + C15688) * C28009 + (C15543 + C15542) * C188) * C27805 *
               C28004 +
           ((C14097 + C14096) * C28009 + (C13969 + C13968) * C188) * C27805 *
               C28003) *
              C577) *
         C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C233 * C89 + C27805 * C234) * C578 +
                       (C233 * C98 + C27805 * C239) * C28008) *
                          C28003 +
                      (C4286 + C4287) * C28004 + (C4288 + C4289) * C23835) *
                         C27960 +
                     ((C257 * C578 + C258 * C28008) * C28003 +
                      (C4278 + C4279) * C28004 + (C4280 + C4281) * C23835) *
                         C27768) *
                        C28009 * C576 -
                    ((((C233 * C3571 + C27805 * C3737) * C28008 +
                       (C233 * C3569 + C27805 * C3735) * C578) *
                          C23835 +
                      ((C233 * C2491 + C27805 * C2670) * C28008 +
                       (C233 * C2485 + C27805 * C2666) * C578) *
                          C28004 +
                      ((C233 * C585 + C27805 * C721) * C28008 +
                       (C233 * C581 + C27805 * C717) * C578) *
                          C28003) *
                         C27768 +
                     (((C233 * C3572 + C27805 * C3738) * C28008 +
                       (C233 * C3570 + C27805 * C3736) * C578) *
                          C23835 +
                      ((C233 * C2492 + C27805 * C2672) * C28008 +
                       (C233 * C2486 + C27805 * C2668) * C578) *
                          C28004 +
                      ((C233 * C586 + C27805 * C722) * C28008 +
                       (C233 * C582 + C27805 * C718) * C578) *
                          C28003) *
                         C27960) *
                        C28009 * C577)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C629 +
            (C233 * C144 + C27805 * C296) * C576 -
            (C233 * C582 + C27805 * C718) * C630 -
            (C233 * C634 + C27805 * C757) * C577) *
               C28003 +
           (C4282 * C629 + C4348 * C576 -
            (C233 * C2486 + C27805 * C2668) * C630 -
            (C233 * C2552 + C27805 * C2726) * C577) *
               C28004 +
           (C4284 * C629 + C4349 * C576 -
            (C233 * C3570 + C27805 * C3736) * C630 -
            (C233 * C3628 + C27805 * C3789) * C577) *
               C23835) *
              C27960 +
          ((C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
            (C233 * C633 + C27805 * C758) * C577) *
               C28003 +
           (C3189 * C629 + C3252 * C576 -
            (C233 * C2485 + C27805 * C2666) * C630 -
            (C233 * C2551 + C27805 * C2724) * C577) *
               C28004 +
           (C3191 * C629 + C3253 * C576 -
            (C233 * C3569 + C27805 * C3735) * C630 -
            (C233 * C3627 + C27805 * C3790) * C577) *
               C23835) *
              C27768) *
         C28008 * C28009) /
        (p * q * std::sqrt(p + q));
    d2eeyz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C233 * C89 + C27805 * C234) * C188 +
                       (C233 * C189 + C27805 * C350) * C28009) *
                          C28003 +
                      (C4282 * C188 + C4408 * C28009) * C28004 +
                      (C4284 * C188 + C4409 * C28009) * C23835) *
                         C27960 +
                     ((C356 + C368) * C28003 + (C3309 + C3317) * C28004 +
                      (C3312 + C3318) * C23835) *
                         C27768) *
                        C576 -
                    ((((C233 * C3681 + C27805 * C3841) * C28009 +
                       (C233 * C3569 + C27805 * C3735) * C188) *
                          C23835 +
                      ((C233 * C2607 + C27805 * C2780) * C28009 +
                       (C233 * C2485 + C27805 * C2666) * C188) *
                          C28004 +
                      ((C233 * C675 + C27805 * C797) * C28009 +
                       (C233 * C581 + C27805 * C717) * C188) *
                          C28003) *
                         C27768 +
                     (((C233 * C3682 + C27805 * C3842) * C28009 +
                       (C233 * C3570 + C27805 * C3736) * C188) *
                          C23835 +
                      ((C233 * C2608 + C27805 * C2778) * C28009 +
                       (C233 * C2486 + C27805 * C2668) * C188) *
                          C28004 +
                      ((C233 * C676 + C27805 * C798) * C28009 +
                       (C233 * C582 + C27805 * C718) * C188) *
                          C28003) *
                         C27960) *
                        C577) *
                   C28008) /
                  (p * q * std::sqrt(p + q));
    d2eezx[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C578 +
                      (C24136 * C98 + C28003 * C410 + C24137 * C960 +
                       C28004 * C1214 + C24138 * C3005 + C23835 * C3374) *
                          C28008) *
                         C27960 +
                     ((C24154 + C24153 + C24152) * C578 +
                      (C24157 + C24156 + C24155) * C28008) *
                         C27768) *
                        C27805 * C28009 * C576 -
                    (((C24138 * C3571 + C23835 * C3895 + C24137 * C2491 +
                       C28004 * C2837 + C24136 * C585 + C28003 * C839) *
                          C28008 +
                      (C24138 * C3569 + C23835 * C3893 + C24137 * C2485 +
                       C28004 * C2833 + C24136 * C581 + C28003 * C835) *
                          C578) *
                         C27768 +
                     ((C24138 * C3572 + C23835 * C3896 + C24137 * C2492 +
                       C28004 * C2838 + C24136 * C586 + C28003 * C840) *
                          C28008 +
                      (C24138 * C3570 + C23835 * C3894 + C24137 * C2486 +
                       C28004 * C2834 + C24136 * C582 + C28003 * C836) *
                          C578) *
                         C27960) *
                        C27805 * C28009 * C577)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                      C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                         C629 +
                     (C24136 * C144 + C28003 * C467 + C24137 * C1006 +
                      C28004 * C1252 + C24138 * C3062 + C23835 * C3445) *
                         C576 -
                     (C24138 * C3570 + C23835 * C3894 + C24137 * C2486 +
                      C28004 * C2834 + C24136 * C582 + C28003 * C836) *
                         C630 -
                     (C24138 * C3628 + C23835 * C3947 + C24137 * C2552 +
                      C28004 * C2892 + C24136 * C634 + C28003 * C875) *
                         C577) *
                        C27960 +
                    ((C24154 + C24153 + C24152) * C629 +
                     (C24214 + C24215 + C24216) * C576 -
                     (C24138 * C3569 + C23835 * C3893 + C24137 * C2485 +
                      C28004 * C2833 + C24136 * C581 + C28003 * C835) *
                         C630 -
                     (C24138 * C3627 + C23835 * C3948 + C24137 * C2551 +
                      C28004 * C2891 + C24136 * C633 + C28003 * C876) *
                         C577) *
                        C27768) *
                   C27805 * C28008 * C28009) /
                  (p * q * std::sqrt(p + q));
    d2eezz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C188 +
                      (C24136 * C189 + C28003 * C521 + C24137 * C1050 +
                       C28004 * C1287 + C24138 * C3118 + C23835 * C3507) *
                          C28009) *
                         C27960 +
                     ((C24154 + C24153 + C24152) * C188 +
                      (C24273 + C24274 + C24275) * C28009) *
                         C27768) *
                        C27805 * C576 -
                    (((C24138 * C3681 + C23835 * C3999 + C24137 * C2607 +
                       C28004 * C2944 + C24136 * C675 + C28003 * C915) *
                          C28009 +
                      (C24138 * C3569 + C23835 * C3893 + C24137 * C2485 +
                       C28004 * C2833 + C24136 * C581 + C28003 * C835) *
                          C188) *
                         C27768 +
                     ((C24138 * C3682 + C23835 * C4000 + C24137 * C2608 +
                       C28004 * C2943 + C24136 * C676 + C28003 * C916) *
                          C28009 +
                      (C24138 * C3570 + C23835 * C3894 + C24137 * C2486 +
                       C28004 * C2834 + C24136 * C582 + C28003 * C836) *
                          C188) *
                         C27960) *
                        C27805 * C577) *
                   C28008) /
                  (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C578 +
            (C26647 * C98 + C27960 * C104 + C26640 * C99 + C27768 * C105) *
                C28008) *
               C27805 * C28003 +
           ((C16160 + C16161) * C578 + (C16162 + C16163) * C28008) * C27805 *
               C28004 +
           ((C24784 + C24785) * C578 + (C24786 + C24787) * C28008) * C27805 *
               C23835) *
              C951 -
          (((C26640 * C4053 + C27768 * C4057 + C26647 * C4054 +
             C27960 * C4058) *
                C28008 +
            (C26640 * C4051 + C27768 * C4055 + C26647 * C4052 +
             C27960 * C4056) *
                C578) *
               C27805 * C23835 +
           ((C24787 + C24786) * C28008 + (C24785 + C24784) * C578) * C27805 *
               C28004 +
           ((C16163 + C16162) * C28008 + (C16161 + C16160) * C578) * C27805 *
               C28003) *
              C952) *
         C28010) /
        (p * q * std::sqrt(p + q));
    d2eexy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C143 +
            (C26647 * C144 + C27960 * C149 + C26640 * C145 + C27768 * C150) *
                C28010) *
               C27805 * C28003 +
           ((C16160 + C16161) * C143 + (C16234 + C16235) * C28010) * C27805 *
               C28004 +
           ((C24784 + C24785) * C143 + (C24842 + C24843) * C28010) * C27805 *
               C23835) *
              C28008 * C951 -
          (((C26640 * C4133 + C27768 * C4135 + C26647 * C4134 +
             C27960 * C4136) *
                C28010 +
            (C26640 * C4051 + C27768 * C4055 + C26647 * C4052 +
             C27960 * C4056) *
                C143) *
               C27805 * C23835 +
           ((C24843 + C24842) * C28010 + (C24785 + C24784) * C143) * C27805 *
               C28004 +
           ((C16235 + C16234) * C28010 + (C16161 + C16160) * C143) * C27805 *
               C28003) *
              C28008 * C952)) /
        (p * q * std::sqrt(p + q));
    d2eexz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C26647 * C89 + C27960 * C94 + C26640 * C90 + C27768 * C95) * C1045 +
           (C26647 * C189 + C27960 * C194 + C26640 * C190 + C27768 * C195) *
               C951 -
           (C16161 + C16160) * C1046 - (C16306 + C16307) * C952) *
              C27805 * C28003 +
          ((C16160 + C16161) * C1045 + (C16307 + C16306) * C951 -
           (C24785 + C24784) * C1046 - (C24898 + C24899) * C952) *
              C27805 * C28004 +
          ((C24784 + C24785) * C1045 + (C24899 + C24898) * C951 -
           (C26640 * C4051 + C27768 * C4055 + C26647 * C4052 + C27960 * C4056) *
               C1046 -
           (C26640 * C4199 + C27768 * C4201 + C26647 * C4200 + C27960 * C4202) *
               C952) *
              C27805 * C23835) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eeyx[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C233 * C89 + C27805 * C234) * C578 +
                       (C233 * C98 + C27805 * C239) * C28008) *
                          C28003 +
                      (C4286 + C4287) * C28004 + (C4288 + C4289) * C23835) *
                         C27960 +
                     ((C257 * C578 + C258 * C28008) * C28003 +
                      (C4278 + C4279) * C28004 + (C4280 + C4281) * C23835) *
                         C27768) *
                        C951 -
                    ((((C233 * C4053 + C27805 * C4267) * C28008 +
                       (C233 * C4051 + C27805 * C4265) * C578) *
                          C23835 +
                      (C4281 + C4280) * C28004 + (C4279 + C4278) * C28003) *
                         C27768 +
                     ((C21793 + C21792) * C23835 + (C4289 + C4288) * C28004 +
                      (C4287 + C4286) * C28003) *
                         C27960) *
                        C952) *
                   C28010) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C233 * C89 + C27805 * C234) * C143 +
                       (C233 * C144 + C27805 * C296) * C28010) *
                          C28003 +
                      (C4342 + C4350) * C28004 + (C4345 + C4351) * C23835) *
                         C27960 +
                     ((C302 + C314) * C28003 + (C3246 + C3254) * C28004 +
                      (C3249 + C3255) * C23835) *
                         C27768) *
                        C28008 * C951 -
                    ((((C233 * C4133 + C27805 * C4339) * C28010 +
                       (C233 * C4051 + C27805 * C4265) * C143) *
                          C23835 +
                      (C3255 + C3249) * C28004 + (C3254 + C3246) * C28003) *
                         C27768 +
                     ((C21833 + C21829) * C23835 + (C4351 + C4345) * C28004 +
                      (C4350 + C4342) * C28003) *
                         C27960) *
                        C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C1045 +
            (C233 * C189 + C27805 * C350) * C951 - C4282 * C1046 -
            C4408 * C952) *
               C28003 +
           (C4282 * C1045 + C4408 * C951 - C4284 * C1046 - C4409 * C952) *
               C28004 +
           (C4284 * C1045 + C4409 * C951 - C21790 * C1046 - C21871 * C952) *
               C23835) *
              C27960 +
          ((C257 * C1045 + C365 * C951 - C3189 * C1046 - C3315 * C952) *
               C28003 +
           (C3189 * C1045 + C3315 * C951 - C3191 * C1046 - C3316 * C952) *
               C28004 +
           (C3191 * C1045 + C3316 * C951 -
            (C233 * C4051 + C27805 * C4265) * C1046 -
            (C233 * C4199 + C27805 * C4402) * C952) *
               C23835) *
              C27768) *
         C28010 * C28008) /
        (p * q * std::sqrt(p + q));
    d2eezx[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C578 +
                      (C24136 * C98 + C28003 * C410 + C24137 * C960 +
                       C28004 * C1214 + C24138 * C3005 + C23835 * C3374) *
                          C28008) *
                         C27960 +
                     ((C24154 + C24153 + C24152) * C578 +
                      (C24157 + C24156 + C24155) * C28008) *
                         C27768) *
                        C27805 * C951 -
                    (((C24138 * C4053 + C23835 * C4461 + C24137 * C3006 +
                       C28004 * C3375 + C24136 * C959 + C28003 * C1213) *
                          C28008 +
                      (C24138 * C4051 + C23835 * C4459 + C24137 * C3001 +
                       C28004 * C3372 + C24136 * C955 + C28003 * C1209) *
                          C578) *
                         C27768 +
                     ((C24138 * C4054 + C23835 * C4462 + C24137 * C3005 +
                       C28004 * C3374 + C24136 * C960 + C28003 * C1214) *
                          C28008 +
                      (C24138 * C4052 + C23835 * C4460 + C24137 * C3000 +
                       C28004 * C3371 + C24136 * C956 + C28003 * C1210) *
                          C578) *
                         C27960) *
                        C27805 * C952) *
                   C28010) /
                  (p * q * std::sqrt(p + q));
    d2eezy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                       C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                          C143 +
                      (C24136 * C144 + C28003 * C467 + C24137 * C1006 +
                       C28004 * C1252 + C24138 * C3062 + C23835 * C3445) *
                          C28010) *
                         C27960 +
                     ((C24154 + C24153 + C24152) * C143 +
                      (C24214 + C24215 + C24216) * C28010) *
                         C27768) *
                        C27805 * C28008 * C951 -
                    (((C24138 * C4133 + C23835 * C4513 + C24137 * C3063 +
                       C28004 * C3446 + C24136 * C1005 + C28003 * C1251) *
                          C28010 +
                      (C24138 * C4051 + C23835 * C4459 + C24137 * C3001 +
                       C28004 * C3372 + C24136 * C955 + C28003 * C1209) *
                          C143) *
                         C27768 +
                     ((C24138 * C4134 + C23835 * C4514 + C24137 * C3062 +
                       C28004 * C3445 + C24136 * C1006 + C28003 * C1252) *
                          C28010 +
                      (C24138 * C4052 + C23835 * C4460 + C24137 * C3000 +
                       C28004 * C3371 + C24136 * C956 + C28003 * C1210) *
                          C143) *
                         C27960) *
                        C27805 * C28008 * C952)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24136 * C89 + C28003 * C405 + C24137 * C956 +
                      C28004 * C1210 + C24138 * C3000 + C23835 * C3371) *
                         C1045 +
                     (C24136 * C189 + C28003 * C521 + C24137 * C1050 +
                      C28004 * C1287 + C24138 * C3118 + C23835 * C3507) *
                         C951 -
                     (C24138 * C4052 + C23835 * C4460 + C24137 * C3000 +
                      C28004 * C3371 + C24136 * C956 + C28003 * C1210) *
                         C1046 -
                     (C24138 * C4200 + C23835 * C4565 + C24137 * C3118 +
                      C28004 * C3507 + C24136 * C1050 + C28003 * C1287) *
                         C952) *
                        C27960 +
                    ((C24154 + C24153 + C24152) * C1045 +
                     (C24273 + C24274 + C24275) * C951 -
                     (C24138 * C4051 + C23835 * C4459 + C24137 * C3001 +
                      C28004 * C3372 + C24136 * C955 + C28003 * C1209) *
                         C1046 -
                     (C24138 * C4199 + C23835 * C4566 + C24137 * C3119 +
                      C28004 * C3508 + C24136 * C1049 + C28003 * C1288) *
                         C952) *
                        C27768) *
                   C27805 * C28010 * C28008) /
                  (p * q * std::sqrt(p + q));
    d2eexx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                      C9460 * C91 + C9455 * C96) *
                         C87 +
                     (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
                      C9460 * C100 + C9455 * C106) *
                         C77 -
                     (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                      C9458 * C90 + C9453 * C95) *
                         C88 -
                     (C9460 * C101 + C9455 * C107 + C9459 * C100 +
                      C9454 * C106 + C9458 * C99 + C9453 * C105) *
                         C78) *
                        C27805 * C18181 +
                    ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                      C9454 * C963 + C9460 * C954 + C9455 * C962) *
                         C87 +
                     (C9458 * C960 + C9453 * C968 + C9459 * C959 +
                      C9454 * C967 + C9460 * C958 + C9455 * C966) *
                         C77 -
                     (C9460 * C953 + C9455 * C961 + C9459 * C954 +
                      C9454 * C962 + C9458 * C955 + C9453 * C963) *
                         C88 -
                     (C9460 * C957 + C9455 * C965 + C9459 * C958 +
                      C9454 * C966 + C9458 * C959 + C9453 * C967) *
                         C78) *
                        C27805 * C27880) *
                   C28009 * C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C10886 * C89 + C27763 * C94) * C87 +
                      (C10886 * C98 + C27763 * C104) * C77 -
                      (C10886 * C90 + C27763 * C95) * C88 -
                      (C10886 * C99 + C27763 * C105) * C78) *
                         C1343 +
                     (C11214 * C87 + C11215 * C77 -
                      (C10886 * C581 + C27763 * C589) * C88 -
                      (C10886 * C585 + C27763 * C593) * C78) *
                         C1344 +
                     (C11216 * C87 + C11217 * C77 -
                      (C10886 * C1349 + C27763 * C1352) * C88 -
                      (C10886 * C1354 + C27763 * C1358) * C78) *
                         C1345) *
                        C18181 +
                    ((C12918 * C87 + C12919 * C77 -
                      (C10886 * C955 + C27763 * C963) * C88 -
                      (C10886 * C959 + C27763 * C967) * C78) *
                         C1343 +
                     (C12384 * C87 + C12385 * C77 -
                      (C10886 * C2485 + C27763 * C2493) * C88 -
                      (C10886 * C2491 + C27763 * C2497) * C78) *
                         C1344 +
                     (C17208 * C87 + C17209 * C77 -
                      (C10886 * C2483 + C27763 * C2489) * C88 -
                      (C10886 * C2487 + C27763 * C2495) * C78) *
                         C1345) *
                        C27880) *
                   C28009 * C28010) /
                      (p * q * std::sqrt(p + q));
    d2eexy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C27805 * C18181 +
                     ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                       C9454 * C963 + C9460 * C954 + C9455 * C962) *
                          C143 +
                      (C9458 * C1006 + C9453 * C1010 + C9459 * C1005 +
                       C9454 * C1009 + C9460 * C1004 + C9455 * C1008) *
                          C28010) *
                         C27805 * C27880) *
                        C77 -
                    (((C9460 * C1003 + C9455 * C1007 + C9459 * C1004 +
                       C9454 * C1008 + C9458 * C1005 + C9453 * C1009) *
                          C28010 +
                      (C9460 * C953 + C9455 * C961 + C9459 * C954 +
                       C9454 * C962 + C9458 * C955 + C9453 * C963) *
                          C143) *
                         C27805 * C27880 +
                     ((C9460 * C147 + C9455 * C152 + C9459 * C146 +
                       C9454 * C151 + C9458 * C145 + C9453 * C150) *
                          C28010 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C143) *
                         C27805 * C18181) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C1343 +
                      (C11214 * C143 + C11268 * C28010) * C1344 +
                      (C11216 * C143 + C11269 * C28010) * C1345) *
                         C18181 +
                     ((C12978 + C12990) * C1343 + (C12981 + C12982) * C1344 +
                      (C17744 + C17745) * C1345) *
                         C27880) *
                        C77 -
                    ((((C10886 * C2549 + C27763 * C2553) * C28010 +
                       (C10886 * C2483 + C27763 * C2489) * C143) *
                          C1345 +
                      ((C10886 * C2551 + C27763 * C2555) * C28010 +
                       (C10886 * C2485 + C27763 * C2493) * C143) *
                          C1344 +
                      ((C10886 * C1005 + C27763 * C1009) * C28010 +
                       (C10886 * C955 + C27763 * C963) * C143) *
                          C1343) *
                         C27880 +
                     (((C10886 * C1411 + C27763 * C1414) * C28010 +
                       (C10886 * C1349 + C27763 * C1352) * C143) *
                          C1345 +
                      ((C10886 * C633 + C27763 * C637) * C28010 +
                       (C10886 * C581 + C27763 * C589) * C143) *
                          C1344 +
                      ((C10886 * C145 + C27763 * C150) * C28010 +
                       (C10886 * C90 + C27763 * C95) * C143) *
                          C1343) *
                         C18181) *
                        C78) *
                   C28009) /
                      (p * q * std::sqrt(p + q));
    d2eexz[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C188 +
                      (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                       C9454 * C195 + C9460 * C191 + C9455 * C196) *
                          C28009) *
                         C27805 * C18181 +
                     ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                       C9454 * C963 + C9460 * C954 + C9455 * C962) *
                          C188 +
                      (C9458 * C1050 + C9453 * C1054 + C9459 * C1049 +
                       C9454 * C1053 + C9460 * C1048 + C9455 * C1052) *
                          C28009) *
                         C27805 * C27880) *
                        C28010 * C77 -
                    (((C9460 * C1047 + C9455 * C1051 + C9459 * C1048 +
                       C9454 * C1052 + C9458 * C1049 + C9453 * C1053) *
                          C28009 +
                      (C9460 * C953 + C9455 * C961 + C9459 * C954 +
                       C9454 * C962 + C9458 * C955 + C9453 * C963) *
                          C188) *
                         C27805 * C27880 +
                     ((C9460 * C192 + C9455 * C197 + C9459 * C191 +
                       C9454 * C196 + C9458 * C190 + C9453 * C195) *
                          C28009 +
                      (C9460 * C92 + C9455 * C97 + C9459 * C91 + C9454 * C96 +
                       C9458 * C90 + C9453 * C95) *
                          C188) *
                         C27805 * C18181) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C1343 +
                      (C11307 + C11319) * C1344 + (C11310 + C11320) * C1345) *
                         C18181 +
                     ((C12918 * C188 + C13048 * C28009) * C1343 +
                      (C12502 + C12510) * C1344 + (C17315 + C17319) * C1345) *
                         C27880) *
                        C28010 * C77 -
                    ((((C10886 * C2609 + C27763 * C2613) * C28009 +
                       (C10886 * C2483 + C27763 * C2489) * C188) *
                          C1345 +
                      ((C10886 * C2607 + C27763 * C2611) * C28009 +
                       (C10886 * C2485 + C27763 * C2493) * C188) *
                          C1344 +
                      ((C10886 * C1049 + C27763 * C1053) * C28009 +
                       (C10886 * C955 + C27763 * C963) * C188) *
                          C1343) *
                         C27880 +
                     (((C10886 * C1467 + C27763 * C1470) * C28009 +
                       (C10886 * C1349 + C27763 * C1352) * C188) *
                          C1345 +
                      ((C10886 * C675 + C27763 * C679) * C28009 +
                       (C10886 * C581 + C27763 * C589) * C188) *
                          C1344 +
                      ((C10886 * C190 + C27763 * C195) * C28009 +
                       (C10886 * C90 + C27763 * C95) * C188) *
                          C1343) *
                         C18181) *
                        C28010 * C78)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C87 +
            (C233 * C98 + C27805 * C239) * C77 - C257 * C88 - C258 * C78) *
               C18181 +
           (C4282 * C87 + C4283 * C77 - C3189 * C88 - C3190 * C78) * C27880) *
              C9453 +
          ((C257 * C87 + C258 * C77 - C259 * C88 - C260 * C78) * C18181 +
           (C3189 * C87 + C3190 * C77 - C6252 * C88 - C6253 * C78) * C27880) *
              C9454 +
          ((C259 * C87 + C260 * C77 - C261 * C88 - C262 * C78) * C18181 +
           (C6252 * C87 + C6253 * C77 - (C233 * C953 + C27805 * C1089) * C88 -
            (C233 * C957 + C27805 * C1093) * C78) *
               C27880) *
              C9455) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C87 +
           (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
            C1524 * C1353 + C1345 * C1528) *
               C77 -
           (C1544 + C1545 + C1546) * C88 - (C1547 + C1548 + C1549) * C78) *
              C18181 +
          ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
            C1524 * C2484 + C1345 * C2667) *
               C87 +
           (C1522 * C960 + C1343 * C1096 + C1523 * C2492 + C1344 * C2672 +
            C1524 * C2488 + C1345 * C2671) *
               C77 -
           (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
            C1522 * C955 + C1343 * C1091) *
               C88 -
           (C1524 * C2487 + C1345 * C2669 + C1523 * C2491 + C1344 * C2670 +
            C1522 * C959 + C1343 * C1095) *
               C78) *
              C27880) *
         C27763 * C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C18181 +
            (C4342 + C4350) * C27880) *
               C9453 +
           ((C302 + C314) * C18181 + (C3246 + C3254) * C27880) * C9454 +
           ((C305 + C315) * C18181 + (C6304 + C6308) * C27880) * C9455) *
              C77 -
          ((((C233 * C1003 + C27805 * C1131) * C28010 +
             (C233 * C953 + C27805 * C1089) * C143) *
                C27880 +
            (C316 + C308) * C18181) *
               C9455 +
           ((C6308 + C6304) * C27880 + (C315 + C305) * C18181) * C9454 +
           ((C3254 + C3246) * C27880 + (C314 + C302) * C18181) * C9453) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C143 +
            (C1522 * C1006 + C1343 * C1134 + C1523 * C2552 + C1344 * C2726 +
             C1524 * C2550 + C1345 * C2725) *
                C28010) *
               C27880) *
              C27763 * C77 -
          (((C1524 * C2549 + C1345 * C2723 + C1523 * C2551 + C1344 * C2724 +
             C1522 * C1005 + C1343 * C1133) *
                C28010 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C143) *
               C27880 +
           ((C1611 + C1610 + C1609) * C28010 + (C1544 + C1545 + C1546) * C143) *
               C18181) *
              C27763 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C18181 +
            (C4282 * C188 + C4408 * C28009) * C27880) *
               C9453 +
           ((C356 + C368) * C18181 + (C3309 + C3317) * C27880) * C9454 +
           ((C359 + C369) * C18181 + (C6359 + C6363) * C27880) * C9455) *
              C28010 * C77 -
          ((((C233 * C1047 + C27805 * C1172) * C28009 +
             (C233 * C953 + C27805 * C1089) * C188) *
                C27880 +
            (C370 + C362) * C18181) *
               C9455 +
           ((C6363 + C6359) * C27880 + (C369 + C359) * C18181) * C9454 +
           ((C3317 + C3309) * C27880 + (C368 + C356) * C18181) * C9453) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C188 +
            (C1522 * C1050 + C1343 * C1169 + C1523 * C2608 + C1344 * C2778 +
             C1524 * C2610 + C1345 * C2777) *
                C28009) *
               C27880) *
              C27763 * C28010 * C77 -
          (((C1524 * C2609 + C1345 * C2779 + C1523 * C2607 + C1344 * C2780 +
             C1522 * C1049 + C1343 * C1170) *
                C28009 +
            (C1524 * C2483 + C1345 * C2665 + C1523 * C2485 + C1344 * C2666 +
             C1522 * C955 + C1343 * C1091) *
                C188) *
               C27880 +
           ((C1673 + C1672 + C1671) * C28009 + (C1544 + C1545 + C1546) * C188) *
               C18181) *
              C27763 * C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C87 +
           (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
               C77 -
           (C18502 + C18503) * C88 - (C18504 + C18505) * C78) *
              C9453 +
          ((C18503 + C18502) * C87 + (C18505 + C18504) * C77 -
           (C18506 + C18507) * C88 - (C18508 + C18509) * C78) *
              C9454 +
          ((C18507 + C18506) * C87 + (C18509 + C18508) * C77 -
           (C18484 * C953 + C27880 * C1207 + C18483 * C92 + C18181 * C408) *
               C88 -
           (C18484 * C957 + C27880 * C1211 + C18483 * C101 + C18181 * C413) *
               C78) *
              C9455) *
         C27805 * C28009 * C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C87 +
           (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
               C77 -
           (C18502 + C18503) * C88 - (C18504 + C18505) * C78) *
              C27763 * C1343 +
          ((C18483 * C582 + C18181 * C836 + C18484 * C2486 + C27880 * C2834) *
               C87 +
           (C18483 * C586 + C18181 * C840 + C18484 * C2492 + C27880 * C2838) *
               C77 -
           (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
               C88 -
           (C18484 * C2491 + C27880 * C2837 + C18483 * C585 + C18181 * C839) *
               C78) *
              C27763 * C1344 +
          ((C18483 * C1348 + C18181 * C1723 + C18484 * C2484 + C27880 * C2832) *
               C87 +
           (C18483 * C1353 + C18181 * C1726 + C18484 * C2488 + C27880 * C2836) *
               C77 -
           (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 + C18181 * C1724) *
               C88 -
           (C18484 * C2487 + C27880 * C2835 + C18483 * C1354 + C18181 * C1727) *
               C78) *
              C27763 * C1345) *
         C28009 * C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C9453 +
           ((C18503 + C18502) * C143 + (C18568 + C18569) * C28010) * C9454 +
           ((C18507 + C18506) * C143 + (C18570 + C18571) * C28010) * C9455) *
              C27805 * C77 -
          (((C18484 * C1003 + C27880 * C1249 + C18483 * C147 + C18181 * C470) *
                C28010 +
            (C18484 * C953 + C27880 * C1207 + C18483 * C92 + C18181 * C408) *
                C143) *
               C9455 +
           ((C18571 + C18570) * C28010 + (C18506 + C18507) * C143) * C9454 +
           ((C18569 + C18568) * C28010 + (C18502 + C18503) * C143) * C9453) *
              C27805 * C78) *
         C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C27763 * C1343 +
           ((C18483 * C582 + C18181 * C836 + C18484 * C2486 + C27880 * C2834) *
                C143 +
            (C18483 * C634 + C18181 * C875 + C18484 * C2552 + C27880 * C2892) *
                C28010) *
               C27763 * C1344 +
           ((C18483 * C1348 + C18181 * C1723 + C18484 * C2484 +
             C27880 * C2832) *
                C143 +
            (C18483 * C1410 + C18181 * C1791 + C18484 * C2550 +
             C27880 * C2890) *
                C28010) *
               C27763 * C1345) *
              C77 -
          (((C18484 * C2549 + C27880 * C2889 + C18483 * C1411 +
             C18181 * C1792) *
                C28010 +
            (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
             C18181 * C1724) *
                C143) *
               C27763 * C1345 +
           ((C18484 * C2551 + C27880 * C2891 + C18483 * C633 + C18181 * C876) *
                C28010 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C143) *
               C27763 * C1344 +
           ((C18569 + C18568) * C28010 + (C18502 + C18503) * C143) * C27763 *
               C1343) *
              C78) *
         C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C9453 +
           ((C18503 + C18502) * C188 + (C18630 + C18631) * C28009) * C9454 +
           ((C18507 + C18506) * C188 + (C18632 + C18633) * C28009) * C9455) *
              C27805 * C28010 * C77 -
          (((C18484 * C1047 + C27880 * C1290 + C18483 * C192 + C18181 * C524) *
                C28009 +
            (C18484 * C953 + C27880 * C1207 + C18483 * C92 + C18181 * C408) *
                C188) *
               C9455 +
           ((C18633 + C18632) * C28009 + (C18506 + C18507) * C188) * C9454 +
           ((C18631 + C18630) * C28009 + (C18502 + C18503) * C188) * C9453) *
              C27805 * C28010 * C78)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C27763 * C1343 +
           ((C18483 * C582 + C18181 * C836 + C18484 * C2486 + C27880 * C2834) *
                C188 +
            (C18483 * C676 + C18181 * C916 + C18484 * C2608 + C27880 * C2943) *
                C28009) *
               C27763 * C1344 +
           ((C18483 * C1348 + C18181 * C1723 + C18484 * C2484 +
             C27880 * C2832) *
                C188 +
            (C18483 * C1466 + C18181 * C1854 + C18484 * C2610 +
             C27880 * C2945) *
                C28009) *
               C27763 * C1345) *
              C28010 * C77 -
          (((C18484 * C2609 + C27880 * C2946 + C18483 * C1467 +
             C18181 * C1855) *
                C28009 +
            (C18484 * C2483 + C27880 * C2831 + C18483 * C1349 +
             C18181 * C1724) *
                C188) *
               C27763 * C1345 +
           ((C18484 * C2607 + C27880 * C2944 + C18483 * C675 + C18181 * C915) *
                C28009 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C188) *
               C27763 * C1344 +
           ((C18631 + C18630) * C28009 + (C18502 + C18503) * C188) * C27763 *
               C1343) *
              C28010 * C78)) /
            (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
             C9460 * C91 + C9455 * C96) *
                C578 +
            (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
             C9460 * C100 + C9455 * C106) *
                C28008) *
               C27805 * C18181 +
           ((C9458 * C956 + C9453 * C964 + C9459 * C955 + C9454 * C963 +
             C9460 * C954 + C9455 * C962) *
                C578 +
            (C9458 * C960 + C9453 * C968 + C9459 * C959 + C9454 * C967 +
             C9460 * C958 + C9455 * C966) *
                C28008) *
               C27805 * C27880) *
              C28009 * C576 -
          (((C9460 * C5630 + C9455 * C5632 + C9459 * C2491 + C9454 * C2497 +
             C9458 * C2492 + C9453 * C2498) *
                C28008 +
            (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
             C9458 * C2486 + C9453 * C2494) *
                C578) *
               C27805 * C27880 +
           ((C9979 + C9978 + C9977) * C28008 + (C9976 + C9975 + C9974) * C578) *
               C27805 * C18181) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C10886 * C89 + C27763 * C94) * C578 +
             (C10886 * C98 + C27763 * C104) * C28008) *
                C1343 +
            (C11220 + C11221) * C1344 + (C11222 + C11223) * C1345) *
               C18181 +
           ((C12922 + C12923) * C1343 + (C12388 + C12389) * C1344 +
            (C17210 + C17211) * C1345) *
               C27880) *
              C28009 * C576 -
          ((((C10886 * C11584 + C27763 * C11586) * C28008 +
             (C10886 * C11583 + C27763 * C11585) * C578) *
                C1345 +
            (C17211 + C17210) * C1344 + (C12389 + C12388) * C1343) *
               C27880 +
           ((C11225 + C11224) * C1345 + (C11223 + C11222) * C1344 +
            (C11221 + C11220) * C1343) *
               C18181) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eexy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C629 +
           (C9458 * C144 + C9453 * C149 + C9459 * C145 + C9454 * C150 +
            C9460 * C146 + C9455 * C151) *
               C576 -
           (C9976 + C9975 + C9974) * C630 - (C10036 + C10037 + C10038) * C577) *
              C27805 * C18181 +
          ((C9458 * C956 + C9453 * C964 + C9459 * C955 + C9454 * C963 +
            C9460 * C954 + C9455 * C962) *
               C629 +
           (C9458 * C1006 + C9453 * C1010 + C9459 * C1005 + C9454 * C1009 +
            C9460 * C1004 + C9455 * C1008) *
               C576 -
           (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 + C9454 * C2493 +
            C9458 * C2486 + C9453 * C2494) *
               C630 -
           (C9460 * C5683 + C9455 * C5684 + C9459 * C2551 + C9454 * C2555 +
            C9458 * C2552 + C9453 * C2556) *
               C577) *
              C27805 * C27880) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C629 +
            (C10886 * C144 + C27763 * C149) * C576 - C11214 * C630 -
            C11268 * C577) *
               C1343 +
           (C11214 * C629 + C11268 * C576 - C11216 * C630 - C11269 * C577) *
               C1344 +
           (C11216 * C629 + C11269 * C576 - C11218 * C630 - C11270 * C577) *
               C1345) *
              C18181 +
          ((C12918 * C629 + C12988 * C576 - C12384 * C630 - C12448 * C577) *
               C1343 +
           (C12384 * C629 + C12448 * C576 - C17208 * C630 - C17264 * C577) *
               C1344 +
           (C17208 * C629 + C17264 * C576 -
            (C10886 * C11583 + C27763 * C11585) * C630 -
            (C10886 * C11621 + C27763 * C11622) * C577) *
               C1345) *
              C27880) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eexz[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C188 +
                      (C9458 * C189 + C9453 * C194 + C9459 * C190 +
                       C9454 * C195 + C9460 * C191 + C9455 * C196) *
                          C28009) *
                         C27805 * C18181 +
                     ((C9458 * C956 + C9453 * C964 + C9459 * C955 +
                       C9454 * C963 + C9460 * C954 + C9455 * C962) *
                          C188 +
                      (C9458 * C1050 + C9453 * C1054 + C9459 * C1049 +
                       C9454 * C1053 + C9460 * C1048 + C9455 * C1052) *
                          C28009) *
                         C27805 * C27880) *
                        C576 -
                    (((C9460 * C5735 + C9455 * C5736 + C9459 * C2607 +
                       C9454 * C2611 + C9458 * C2608 + C9453 * C2612) *
                          C28009 +
                      (C9460 * C5629 + C9455 * C5631 + C9459 * C2485 +
                       C9454 * C2493 + C9458 * C2486 + C9453 * C2494) *
                          C188) *
                         C27805 * C27880 +
                     ((C10097 + C10096 + C10095) * C28009 +
                      (C9976 + C9975 + C9974) * C188) *
                         C27805 * C18181) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C188 +
                       (C10886 * C189 + C27763 * C194) * C28009) *
                          C1343 +
                      (C11307 + C11319) * C1344 + (C11310 + C11320) * C1345) *
                         C18181 +
                     ((C12918 * C188 + C13048 * C28009) * C1343 +
                      (C12502 + C12510) * C1344 + (C17315 + C17319) * C1345) *
                         C27880) *
                        C576 -
                    ((((C10886 * C11657 + C27763 * C11658) * C28009 +
                       (C10886 * C11583 + C27763 * C11585) * C188) *
                          C1345 +
                      (C17319 + C17315) * C1344 + (C12510 + C12502) * C1343) *
                         C27880 +
                     ((C11321 + C11313) * C1345 + (C11320 + C11310) * C1344 +
                      (C11319 + C11307) * C1343) *
                         C18181) *
                        C577) *
                   C28008) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C18181 +
            (C4286 + C4287) * C27880) *
               C9453 +
           ((C257 * C578 + C258 * C28008) * C18181 + (C4278 + C4279) * C27880) *
               C9454 +
           ((C259 * C578 + C260 * C28008) * C18181 + (C7250 + C7251) * C27880) *
               C9455) *
              C28009 * C576 -
          ((((C233 * C5630 + C27805 * C5788) * C28008 +
             (C233 * C5629 + C27805 * C5787) * C578) *
                C27880 +
            ((C233 * C584 + C27805 * C720) * C28008 +
             (C233 * C580 + C27805 * C716) * C578) *
                C18181) *
               C9455 +
           (((C233 * C2491 + C27805 * C2670) * C28008 +
             (C233 * C2485 + C27805 * C2666) * C578) *
                C27880 +
            ((C233 * C585 + C27805 * C721) * C28008 +
             (C233 * C581 + C27805 * C717) * C578) *
                C18181) *
               C9454 +
           (((C233 * C2492 + C27805 * C2672) * C28008 +
             (C233 * C2486 + C27805 * C2668) * C578) *
                C27880 +
            ((C233 * C586 + C27805 * C722) * C28008 +
             (C233 * C582 + C27805 * C718) * C578) *
                C18181) *
               C9453) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C578 +
            (C1522 * C960 + C1343 * C1096 + C1523 * C2492 + C1344 * C2672 +
             C1524 * C2488 + C1345 * C2671) *
                C28008) *
               C27880) *
              C27763 * C28009 * C576 -
          (((C1524 * C11584 + C1345 * C11694 + C1523 * C2488 + C1344 * C2671 +
             C1522 * C2492 + C1343 * C2672) *
                C28008 +
            (C1524 * C11583 + C1345 * C11693 + C1523 * C2484 + C1344 * C2667 +
             C1522 * C2486 + C1343 * C2668) *
                C578) *
               C27880 +
           ((C1524 * C1920 + C1345 * C2134 + C1523 * C1353 + C1344 * C1528 +
             C1522 * C586 + C1343 * C722) *
                C28008 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C578) *
               C18181) *
              C27763 * C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C629 +
            (C233 * C144 + C27805 * C296) * C576 -
            (C233 * C582 + C27805 * C718) * C630 -
            (C233 * C634 + C27805 * C757) * C577) *
               C18181 +
           (C4282 * C629 + C4348 * C576 -
            (C233 * C2486 + C27805 * C2668) * C630 -
            (C233 * C2552 + C27805 * C2726) * C577) *
               C27880) *
              C9453 +
          ((C257 * C629 + C311 * C576 - (C233 * C581 + C27805 * C717) * C630 -
            (C233 * C633 + C27805 * C758) * C577) *
               C18181 +
           (C3189 * C629 + C3252 * C576 -
            (C233 * C2485 + C27805 * C2666) * C630 -
            (C233 * C2551 + C27805 * C2724) * C577) *
               C27880) *
              C9454 +
          ((C259 * C629 + C312 * C576 - (C233 * C580 + C27805 * C716) * C630 -
            (C233 * C632 + C27805 * C759) * C577) *
               C18181 +
           (C6252 * C629 + C6307 * C576 -
            (C233 * C5629 + C27805 * C5787) * C630 -
            (C233 * C5683 + C27805 * C5839) * C577) *
               C27880) *
              C9455) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C629 +
           (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
            C1524 * C1410 + C1345 * C1599) *
               C576 -
           (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
            C1522 * C582 + C1343 * C718) *
               C630 -
           (C1524 * C2000 + C1345 * C2185 + C1523 * C1410 + C1344 * C1599 +
            C1522 * C634 + C1343 * C757) *
               C577) *
              C18181 +
          ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
            C1524 * C2484 + C1345 * C2667) *
               C629 +
           (C1522 * C1006 + C1343 * C1134 + C1523 * C2552 + C1344 * C2726 +
            C1524 * C2550 + C1345 * C2725) *
               C576 -
           (C1524 * C11583 + C1345 * C11693 + C1523 * C2484 + C1344 * C2667 +
            C1522 * C2486 + C1343 * C2668) *
               C630 -
           (C1524 * C11621 + C1345 * C11729 + C1523 * C2550 + C1344 * C2725 +
            C1522 * C2552 + C1343 * C2726) *
               C577) *
              C27880) *
         C27763 * C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eeyz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C188 +
             (C233 * C189 + C27805 * C350) * C28009) *
                C18181 +
            (C4282 * C188 + C4408 * C28009) * C27880) *
               C9453 +
           ((C356 + C368) * C18181 + (C3309 + C3317) * C27880) * C9454 +
           ((C359 + C369) * C18181 + (C6359 + C6363) * C27880) * C9455) *
              C576 -
          ((((C233 * C5735 + C27805 * C5890) * C28009 +
             (C233 * C5629 + C27805 * C5787) * C188) *
                C27880 +
            ((C233 * C674 + C27805 * C796) * C28009 +
             (C233 * C580 + C27805 * C716) * C188) *
                C18181) *
               C9455 +
           (((C233 * C2607 + C27805 * C2780) * C28009 +
             (C233 * C2485 + C27805 * C2666) * C188) *
                C27880 +
            ((C233 * C675 + C27805 * C797) * C28009 +
             (C233 * C581 + C27805 * C717) * C188) *
                C18181) *
               C9454 +
           (((C233 * C2608 + C27805 * C2778) * C28009 +
             (C233 * C2486 + C27805 * C2668) * C188) *
                C27880 +
            ((C233 * C676 + C27805 * C798) * C28009 +
             (C233 * C582 + C27805 * C718) * C188) *
                C18181) *
               C9453) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C188 +
            (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
             C1524 * C1466 + C1345 * C1661) *
                C28009) *
               C18181 +
           ((C1522 * C956 + C1343 * C1092 + C1523 * C2486 + C1344 * C2668 +
             C1524 * C2484 + C1345 * C2667) *
                C188 +
            (C1522 * C1050 + C1343 * C1169 + C1523 * C2608 + C1344 * C2778 +
             C1524 * C2610 + C1345 * C2777) *
                C28009) *
               C27880) *
              C27763 * C576 -
          (((C1524 * C11657 + C1345 * C11764 + C1523 * C2610 + C1344 * C2777 +
             C1522 * C2608 + C1343 * C2778) *
                C28009 +
            (C1524 * C11583 + C1345 * C11693 + C1523 * C2484 + C1344 * C2667 +
             C1522 * C2486 + C1343 * C2668) *
                C188) *
               C27880 +
           ((C1524 * C2066 + C1345 * C2238 + C1523 * C1466 + C1344 * C1661 +
             C1522 * C676 + C1343 * C798) *
                C28009 +
            (C1524 * C1918 + C1345 * C2132 + C1523 * C1348 + C1344 * C1525 +
             C1522 * C582 + C1343 * C718) *
                C188) *
               C18181) *
              C27763 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C9453 +
           ((C18503 + C18502) * C578 + (C18505 + C18504) * C28008) * C9454 +
           ((C18507 + C18506) * C578 + (C18509 + C18508) * C28008) * C9455) *
              C27805 * C28009 * C576 -
          (((C18484 * C5630 + C27880 * C5942 + C18483 * C584 + C18181 * C838) *
                C28008 +
            (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                C578) *
               C9455 +
           ((C18484 * C2491 + C27880 * C2837 + C18483 * C585 + C18181 * C839) *
                C28008 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C578) *
               C9454 +
           ((C18484 * C2492 + C27880 * C2838 + C18483 * C586 + C18181 * C840) *
                C28008 +
            (C18484 * C2486 + C27880 * C2834 + C18483 * C582 + C18181 * C836) *
                C578) *
               C9453) *
              C27805 * C28009 * C577)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C27763 * C1343 +
           ((C20386 + C20387) * C578 + (C20388 + C20389) * C28008) * C27763 *
               C1344 +
           ((C20390 + C20391) * C578 + (C20392 + C20393) * C28008) * C27763 *
               C1345) *
              C28009 * C576 -
          (((C18484 * C11584 + C27880 * C11800 + C18483 * C1920 +
             C18181 * C2292) *
                C28008 +
            (C18484 * C11583 + C27880 * C11799 + C18483 * C1918 +
             C18181 * C2290) *
                C578) *
               C27763 * C1345 +
           ((C20393 + C20392) * C28008 + (C20391 + C20390) * C578) * C27763 *
               C1344 +
           ((C20389 + C20388) * C28008 + (C20387 + C20386) * C578) * C27763 *
               C1343) *
              C28009 * C577)) /
            (p * q * std::sqrt(p + q));
    d2eezy[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C629 +
           (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
               C576 -
           (C18484 * C2486 + C27880 * C2834 + C18483 * C582 + C18181 * C836) *
               C630 -
           (C18484 * C2552 + C27880 * C2892 + C18483 * C634 + C18181 * C875) *
               C577) *
              C9453 +
          ((C18503 + C18502) * C629 + (C18568 + C18569) * C576 -
           (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
               C630 -
           (C18484 * C2551 + C27880 * C2891 + C18483 * C633 + C18181 * C876) *
               C577) *
              C9454 +
          ((C18507 + C18506) * C629 + (C18570 + C18571) * C576 -
           (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
               C630 -
           (C18484 * C5683 + C27880 * C5993 + C18483 * C632 + C18181 * C877) *
               C577) *
              C9455) *
         C27805 * C28008 * C28009) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C629 +
           (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
               C576 -
           (C20387 + C20386) * C630 - (C20452 + C20453) * C577) *
              C27763 * C1343 +
          ((C20386 + C20387) * C629 + (C20453 + C20452) * C576 -
           (C20391 + C20390) * C630 - (C20454 + C20455) * C577) *
              C27763 * C1344 +
          ((C20390 + C20391) * C629 + (C20455 + C20454) * C576 -
           (C18484 * C11583 + C27880 * C11799 + C18483 * C1918 +
            C18181 * C2290) *
               C630 -
           (C18484 * C11621 + C27880 * C11835 + C18483 * C2000 +
            C18181 * C2363) *
               C577) *
              C27763 * C1345) *
         C28008 * C28009) /
            (p * q * std::sqrt(p + q));
    d2eezz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C9453 +
           ((C18503 + C18502) * C188 + (C18630 + C18631) * C28009) * C9454 +
           ((C18507 + C18506) * C188 + (C18632 + C18633) * C28009) * C9455) *
              C27805 * C576 -
          (((C18484 * C5735 + C27880 * C6044 + C18483 * C674 + C18181 * C914) *
                C28009 +
            (C18484 * C5629 + C27880 * C5941 + C18483 * C580 + C18181 * C834) *
                C188) *
               C9455 +
           ((C18484 * C2607 + C27880 * C2944 + C18483 * C675 + C18181 * C915) *
                C28009 +
            (C18484 * C2485 + C27880 * C2833 + C18483 * C581 + C18181 * C835) *
                C188) *
               C9454 +
           ((C18484 * C2608 + C27880 * C2943 + C18483 * C676 + C18181 * C916) *
                C28009 +
            (C18484 * C2486 + C27880 * C2834 + C18483 * C582 + C18181 * C836) *
                C188) *
               C9453) *
              C27805 * C577) *
         C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C188 +
            (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
                C28009) *
               C27763 * C1343 +
           ((C20386 + C20387) * C188 + (C20514 + C20515) * C28009) * C27763 *
               C1344 +
           ((C20390 + C20391) * C188 + (C20516 + C20517) * C28009) * C27763 *
               C1345) *
              C576 -
          (((C18484 * C11657 + C27880 * C11870 + C18483 * C2066 +
             C18181 * C2422) *
                C28009 +
            (C18484 * C11583 + C27880 * C11799 + C18483 * C1918 +
             C18181 * C2290) *
                C188) *
               C27763 * C1345 +
           ((C20517 + C20516) * C28009 + (C20391 + C20390) * C188) * C27763 *
               C1344 +
           ((C20515 + C20514) * C28009 + (C20387 + C20386) * C188) * C27763 *
               C1343) *
              C577) *
         C28008) /
            (p * q * std::sqrt(p + q));
    d2eexx[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C578 +
                      (C9458 * C98 + C9453 * C104 + C9459 * C99 + C9454 * C105 +
                       C9460 * C100 + C9455 * C106) *
                          C28008) *
                         C27805 * C18181 +
                     ((C19146 + C19147 + C19148) * C578 +
                      (C19149 + C19150 + C19151) * C28008) *
                         C27805 * C27880) *
                        C951 -
                    (((C9460 * C3008 + C9455 * C3011 + C9459 * C3006 +
                       C9454 * C3010 + C9458 * C3005 + C9453 * C3009) *
                          C28008 +
                      (C9460 * C3002 + C9455 * C3007 + C9459 * C3001 +
                       C9454 * C3004 + C9458 * C3000 + C9453 * C3003) *
                          C578) *
                         C27805 * C27880 +
                     ((C19151 + C19150 + C19149) * C28008 +
                      (C19148 + C19147 + C19146) * C578) *
                         C27805 * C18181) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C578 +
                       (C10886 * C98 + C27763 * C104) * C28008) *
                          C1343 +
                      (C11220 + C11221) * C1344 + (C11222 + C11223) * C1345) *
                         C18181 +
                     ((C12922 + C12923) * C1343 + (C12388 + C12389) * C1344 +
                      (C17210 + C17211) * C1345) *
                         C27880) *
                        C951 -
                    ((((C10886 * C12372 + C27763 * C12374) * C28008 +
                       (C10886 * C12371 + C27763 * C12373) * C578) *
                          C1345 +
                      (C12391 + C12390) * C1344 + (C12925 + C12924) * C1343) *
                         C27880 +
                     ((C17211 + C17210) * C1345 + (C12389 + C12388) * C1344 +
                      (C12923 + C12922) * C1343) *
                         C18181) *
                        C952) *
                   C28010) /
                      (p * q * std::sqrt(p + q));
    d2eexy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
                       C9460 * C91 + C9455 * C96) *
                          C143 +
                      (C9458 * C144 + C9453 * C149 + C9459 * C145 +
                       C9454 * C150 + C9460 * C146 + C9455 * C151) *
                          C28010) *
                         C27805 * C18181 +
                     ((C19146 + C19147 + C19148) * C143 +
                      (C19208 + C19209 + C19210) * C28010) *
                         C27805 * C27880) *
                        C28008 * C951 -
                    (((C9460 * C3064 + C9455 * C3067 + C9459 * C3063 +
                       C9454 * C3066 + C9458 * C3062 + C9453 * C3065) *
                          C28010 +
                      (C9460 * C3002 + C9455 * C3007 + C9459 * C3001 +
                       C9454 * C3004 + C9458 * C3000 + C9453 * C3003) *
                          C143) *
                         C27805 * C27880 +
                     ((C19210 + C19209 + C19208) * C28010 +
                      (C19148 + C19147 + C19146) * C143) *
                         C27805 * C18181) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C10886 * C89 + C27763 * C94) * C143 +
                       (C10886 * C144 + C27763 * C149) * C28010) *
                          C1343 +
                      (C11214 * C143 + C11268 * C28010) * C1344 +
                      (C11216 * C143 + C11269 * C28010) * C1345) *
                         C18181 +
                     ((C12978 + C12990) * C1343 + (C12981 + C12982) * C1344 +
                      (C17744 + C17745) * C1345) *
                         C27880) *
                        C28008 * C951 -
                    ((((C10886 * C12441 + C27763 * C12442) * C28010 +
                       (C10886 * C12371 + C27763 * C12373) * C143) *
                          C1345 +
                      (C12987 + C12986) * C1344 + (C12991 + C12983) * C1343) *
                         C27880 +
                     ((C17745 + C17744) * C1345 + (C12982 + C12981) * C1344 +
                      (C12990 + C12978) * C1343) *
                         C18181) *
                        C28008 * C952)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9458 * C89 + C9453 * C94 + C9459 * C90 + C9454 * C95 +
            C9460 * C91 + C9455 * C96) *
               C1045 +
           (C9458 * C189 + C9453 * C194 + C9459 * C190 + C9454 * C195 +
            C9460 * C191 + C9455 * C196) *
               C951 -
           (C19148 + C19147 + C19146) * C1046 -
           (C19267 + C19268 + C19269) * C952) *
              C27805 * C18181 +
          ((C19146 + C19147 + C19148) * C1045 +
           (C19269 + C19268 + C19267) * C951 -
           (C9460 * C3002 + C9455 * C3007 + C9459 * C3001 + C9454 * C3004 +
            C9458 * C3000 + C9453 * C3003) *
               C1046 -
           (C9460 * C3120 + C9455 * C3123 + C9459 * C3119 + C9454 * C3122 +
            C9458 * C3118 + C9453 * C3121) *
               C952) *
              C27805 * C27880) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10886 * C89 + C27763 * C94) * C1045 +
            (C10886 * C189 + C27763 * C194) * C951 - C12918 * C1046 -
            C13048 * C952) *
               C1343 +
           (C11214 * C1045 + C11316 * C951 - C12384 * C1046 - C12508 * C952) *
               C1344 +
           (C11216 * C1045 + C11317 * C951 - C17208 * C1046 - C17318 * C952) *
               C1345) *
              C18181 +
          ((C12918 * C1045 + C13048 * C951 - C12920 * C1046 - C13049 * C952) *
               C1343 +
           (C12384 * C1045 + C12508 * C951 - C12386 * C1046 - C12509 * C952) *
               C1344 +
           (C17208 * C1045 + C17318 * C951 -
            (C10886 * C12371 + C27763 * C12373) * C1046 -
            (C10886 * C12499 + C27763 * C12500) * C952) *
               C1345) *
              C27880) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eeyx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C578 +
             (C233 * C98 + C27805 * C239) * C28008) *
                C18181 +
            (C4286 + C4287) * C27880) *
               C9453 +
           ((C257 * C578 + C258 * C28008) * C18181 + (C4278 + C4279) * C27880) *
               C9454 +
           ((C259 * C578 + C260 * C28008) * C18181 + (C7250 + C7251) * C27880) *
               C9455) *
              C951 -
          ((((C233 * C3008 + C27805 * C3179) * C28008 +
             (C233 * C3002 + C27805 * C3176) * C578) *
                C27880 +
            (C7251 + C7250) * C18181) *
               C9455 +
           ((C4281 + C4280) * C27880 + (C4279 + C4278) * C18181) * C9454 +
           ((C4289 + C4288) * C27880 + (C4287 + C4286) * C18181) * C9453) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C578 +
            (C1522 * C98 + C1343 * C239 + C1523 * C586 + C1344 * C722 +
             C1524 * C1353 + C1345 * C1528) *
                C28008) *
               C18181 +
           ((C20730 + C20731 + C20732) * C578 +
            (C20733 + C20734 + C20735) * C28008) *
               C27880) *
              C27763 * C951 -
          (((C1524 * C12372 + C1345 * C12562 + C1523 * C3572 + C1344 * C3738 +
             C1522 * C3005 + C1343 * C3177) *
                C28008 +
            (C1524 * C12371 + C1345 * C12561 + C1523 * C3570 + C1344 * C3736 +
             C1522 * C3000 + C1343 * C3174) *
                C578) *
               C27880 +
           ((C20735 + C20734 + C20733) * C28008 +
            (C20732 + C20731 + C20730) * C578) *
               C18181) *
              C27763 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eeyy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C233 * C89 + C27805 * C234) * C143 +
             (C233 * C144 + C27805 * C296) * C28010) *
                C18181 +
            (C4342 + C4350) * C27880) *
               C9453 +
           ((C302 + C314) * C18181 + (C3246 + C3254) * C27880) * C9454 +
           ((C305 + C315) * C18181 + (C6304 + C6308) * C27880) * C9455) *
              C28008 * C951 -
          ((((C233 * C3064 + C27805 * C3244) * C28010 +
             (C233 * C3002 + C27805 * C3176) * C143) *
                C27880 +
            (C6308 + C6304) * C18181) *
               C9455 +
           ((C3255 + C3249) * C27880 + (C3254 + C3246) * C18181) * C9454 +
           ((C4351 + C4345) * C27880 + (C4350 + C4342) * C18181) * C9453) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
             C1524 * C1348 + C1345 * C1525) *
                C143 +
            (C1522 * C144 + C1343 * C296 + C1523 * C634 + C1344 * C757 +
             C1524 * C1410 + C1345 * C1599) *
                C28010) *
               C18181 +
           ((C20730 + C20731 + C20732) * C143 +
            (C20792 + C20793 + C20794) * C28010) *
               C27880) *
              C27763 * C28008 * C951 -
          (((C1524 * C12441 + C1345 * C12613 + C1523 * C3628 + C1344 * C3789 +
             C1522 * C3062 + C1343 * C3242) *
                C28010 +
            (C1524 * C12371 + C1345 * C12561 + C1523 * C3570 + C1344 * C3736 +
             C1522 * C3000 + C1343 * C3174) *
                C143) *
               C27880 +
           ((C20794 + C20793 + C20792) * C28010 +
            (C20732 + C20731 + C20730) * C143) *
               C18181) *
              C27763 * C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C233 * C89 + C27805 * C234) * C1045 +
            (C233 * C189 + C27805 * C350) * C951 - C4282 * C1046 -
            C4408 * C952) *
               C18181 +
           (C4282 * C1045 + C4408 * C951 - C4284 * C1046 - C4409 * C952) *
               C27880) *
              C9453 +
          ((C257 * C1045 + C365 * C951 - C3189 * C1046 - C3315 * C952) *
               C18181 +
           (C3189 * C1045 + C3315 * C951 - C3191 * C1046 - C3316 * C952) *
               C27880) *
              C9454 +
          ((C259 * C1045 + C366 * C951 - C6252 * C1046 - C6362 * C952) *
               C18181 +
           (C6252 * C1045 + C6362 * C951 -
            (C233 * C3002 + C27805 * C3176) * C1046 -
            (C233 * C3120 + C27805 * C3307) * C952) *
               C27880) *
              C9455) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1522 * C89 + C1343 * C234 + C1523 * C582 + C1344 * C718 +
            C1524 * C1348 + C1345 * C1525) *
               C1045 +
           (C1522 * C189 + C1343 * C350 + C1523 * C676 + C1344 * C798 +
            C1524 * C1466 + C1345 * C1661) *
               C951 -
           (C20732 + C20731 + C20730) * C1046 -
           (C20851 + C20852 + C20853) * C952) *
              C18181 +
          ((C20730 + C20731 + C20732) * C1045 +
           (C20853 + C20852 + C20851) * C951 -
           (C1524 * C12371 + C1345 * C12561 + C1523 * C3570 + C1344 * C3736 +
            C1522 * C3000 + C1343 * C3174) *
               C1046 -
           (C1524 * C12499 + C1345 * C12664 + C1523 * C3682 + C1344 * C3842 +
            C1522 * C3118 + C1343 * C3305) *
               C952) *
              C27880) *
         C27763 * C28010 * C28008) /
            (p * q * std::sqrt(p + q));
    d2eezx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C9453 +
           ((C18503 + C18502) * C578 + (C18505 + C18504) * C28008) * C9454 +
           ((C18507 + C18506) * C578 + (C18509 + C18508) * C28008) * C9455) *
              C27805 * C951 -
          (((C18484 * C3008 + C27880 * C3376 + C18483 * C958 + C18181 * C1212) *
                C28008 +
            (C18484 * C3002 + C27880 * C3373 + C18483 * C954 + C18181 * C1208) *
                C578) *
               C9455 +
           ((C18484 * C3006 + C27880 * C3375 + C18483 * C959 + C18181 * C1213) *
                C28008 +
            (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
                C578) *
               C9454 +
           ((C18484 * C3005 + C27880 * C3374 + C18483 * C960 + C18181 * C1214) *
                C28008 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C578) *
               C9453) *
              C27805 * C952) *
         C28010) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C578 +
            (C18483 * C98 + C18181 * C410 + C18484 * C960 + C27880 * C1214) *
                C28008) *
               C27763 * C1343 +
           ((C20386 + C20387) * C578 + (C20388 + C20389) * C28008) * C27763 *
               C1344 +
           ((C20390 + C20391) * C578 + (C20392 + C20393) * C28008) * C27763 *
               C1345) *
              C951 -
          (((C18484 * C12372 + C27880 * C12716 + C18483 * C2488 +
             C18181 * C2836) *
                C28008 +
            (C18484 * C12371 + C27880 * C12715 + C18483 * C2484 +
             C18181 * C2832) *
                C578) *
               C27763 * C1345 +
           ((C18484 * C3572 + C27880 * C3896 + C18483 * C2492 +
             C18181 * C2838) *
                C28008 +
            (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
             C18181 * C2834) *
                C578) *
               C27763 * C1344 +
           ((C18484 * C3005 + C27880 * C3374 + C18483 * C960 + C18181 * C1214) *
                C28008 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C578) *
               C27763 * C1343) *
              C952) *
         C28010) /
            (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C9453 +
           ((C18503 + C18502) * C143 + (C18568 + C18569) * C28010) * C9454 +
           ((C18507 + C18506) * C143 + (C18570 + C18571) * C28010) * C9455) *
              C27805 * C28008 * C951 -
          (((C18484 * C3064 + C27880 * C3447 + C18483 * C1004 +
             C18181 * C1250) *
                C28010 +
            (C18484 * C3002 + C27880 * C3373 + C18483 * C954 + C18181 * C1208) *
                C143) *
               C9455 +
           ((C18484 * C3063 + C27880 * C3446 + C18483 * C1005 +
             C18181 * C1251) *
                C28010 +
            (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
                C143) *
               C9454 +
           ((C18484 * C3062 + C27880 * C3445 + C18483 * C1006 +
             C18181 * C1252) *
                C28010 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C143) *
               C9453) *
              C27805 * C28008 * C952)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
                C143 +
            (C18483 * C144 + C18181 * C467 + C18484 * C1006 + C27880 * C1252) *
                C28010) *
               C27763 * C1343 +
           ((C20386 + C20387) * C143 + (C20453 + C20452) * C28010) * C27763 *
               C1344 +
           ((C20390 + C20391) * C143 + (C20455 + C20454) * C28010) * C27763 *
               C1345) *
              C28008 * C951 -
          (((C18484 * C12441 + C27880 * C12785 + C18483 * C2550 +
             C18181 * C2890) *
                C28010 +
            (C18484 * C12371 + C27880 * C12715 + C18483 * C2484 +
             C18181 * C2832) *
                C143) *
               C27763 * C1345 +
           ((C18484 * C3628 + C27880 * C3947 + C18483 * C2552 +
             C18181 * C2892) *
                C28010 +
            (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 +
             C18181 * C2834) *
                C143) *
               C27763 * C1344 +
           ((C18484 * C3062 + C27880 * C3445 + C18483 * C1006 +
             C18181 * C1252) *
                C28010 +
            (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
                C143) *
               C27763 * C1343) *
              C28008 * C952)) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C1045 +
           (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
               C951 -
           (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
               C1046 -
           (C18484 * C3118 + C27880 * C3507 + C18483 * C1050 + C18181 * C1287) *
               C952) *
              C9453 +
          ((C18503 + C18502) * C1045 + (C18630 + C18631) * C951 -
           (C18484 * C3001 + C27880 * C3372 + C18483 * C955 + C18181 * C1209) *
               C1046 -
           (C18484 * C3119 + C27880 * C3508 + C18483 * C1049 + C18181 * C1288) *
               C952) *
              C9454 +
          ((C18507 + C18506) * C1045 + (C18632 + C18633) * C951 -
           (C18484 * C3002 + C27880 * C3373 + C18483 * C954 + C18181 * C1208) *
               C1046 -
           (C18484 * C3120 + C27880 * C3509 + C18483 * C1048 + C18181 * C1289) *
               C952) *
              C9455) *
         C27805 * C28010 * C28008) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18483 * C89 + C18181 * C405 + C18484 * C956 + C27880 * C1210) *
               C1045 +
           (C18483 * C189 + C18181 * C521 + C18484 * C1050 + C27880 * C1287) *
               C951 -
           (C18484 * C3000 + C27880 * C3371 + C18483 * C956 + C18181 * C1210) *
               C1046 -
           (C18484 * C3118 + C27880 * C3507 + C18483 * C1050 + C18181 * C1287) *
               C952) *
              C27763 * C1343 +
          ((C20386 + C20387) * C1045 + (C20514 + C20515) * C951 -
           (C18484 * C3570 + C27880 * C3894 + C18483 * C2486 + C18181 * C2834) *
               C1046 -
           (C18484 * C3682 + C27880 * C4000 + C18483 * C2608 + C18181 * C2943) *
               C952) *
              C27763 * C1344 +
          ((C20390 + C20391) * C1045 + (C20516 + C20517) * C951 -
           (C18484 * C12371 + C27880 * C12715 + C18483 * C2484 +
            C18181 * C2832) *
               C1046 -
           (C18484 * C12499 + C27880 * C12845 + C18483 * C2610 +
            C18181 * C2945) *
               C952) *
              C27763 * C1345) *
         C28010 * C28008) /
            (p * q * std::sqrt(p + q));
}
