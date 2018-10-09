/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2121_1_vr(const double ae,
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
    const double C374954 = g[184];
    const double C375002 = g[187];
    const double C375017 = g[188];
    const double C375032 = g[189];
    const double C375464 = g[194];
    const double C375659 = g[197];
    const double C375690 = g[199];
    const double C375850 = g[201];
    const double C375865 = g[202];
    const double C375880 = g[203];
    const double C376220 = g[207];
    const double C376235 = g[208];
    const double C376404 = g[211];
    const double C376580 = g[214];
    const double C376595 = g[215];
    const double C376610 = g[216];
    const double C376947 = g[220];
    const double C377067 = g[223];
    const double C377082 = g[224];
    const double C377216 = g[226];
    const double C377273 = g[228];
    const double C377331 = g[230];
    const double C377374 = g[231];
    const double C377390 = g[232];
    const double C377405 = g[233];
    const double C377421 = g[234];
    const double C377542 = g[235];
    const double C377646 = g[237];
    const double C377690 = g[238];
    const double C377808 = g[240];
    const double C377823 = g[241];
    const double C377838 = g[242];
    const double C377942 = g[244];
    const double C377957 = g[245];
    const double C378016 = g[247];
    const double C378103 = g[248];
    const double C378162 = g[250];
    const double C378177 = g[251];
    const double C384883 = g[283];
    const double C384899 = g[284];
    const double C384987 = g[285];
    const double C385145 = g[286];
    const double C385217 = g[287];
    const double C392213 = g[293];
    const double C393224 = g[294];
    const double C393244 = g[295];
    const double C393288 = g[296];
    const double C393347 = g[297];
    const double C393406 = g[298];
    const double C393421 = g[299];
    const double C393437 = g[300];
    const double C393466 = g[301];
    const double C393482 = g[302];
    const double C393497 = g[303];
    const double C393563 = g[304];
    const double C393594 = g[305];
    const double C393681 = g[306];
    const double C393742 = g[307];
    const double C393759 = g[308];
    const double C393774 = g[309];
    const double C393790 = g[310];
    const double C393820 = g[311];
    const double C393851 = g[312];
    const double C393938 = g[313];
    const double C393953 = g[314];
    const double C393968 = g[315];
    const double C393998 = g[316];
    const double C394055 = g[317];
    const double C394114 = g[318];
    const double C394175 = g[319];
    const double C394205 = g[320];
    const double C394235 = g[321];
    const double C394265 = g[322];
    const double C394281 = g[323];
    const double C394297 = g[324];
    const double C394313 = g[325];
    const double C394329 = g[326];
    const double C394416 = g[327];
    const double C394431 = g[328];
    const double C394475 = g[329];
    const double C394492 = g[330];
    const double C394586 = g[331];
    const double C394602 = g[332];
    const double C394632 = g[333];
    const double C394662 = g[334];
    const double C394692 = g[335];
    const double C394722 = g[336];
    const double C394738 = g[337];
    const double C394754 = g[338];
    const double C394883 = g[339];
    const double C394913 = g[340];
    const double C394973 = g[341];
    const double C394989 = g[342];
    const double C395005 = g[343];
    const double C395021 = g[344];
    const double C395123 = g[345];
    const double C395174 = g[346];
    const double C395190 = g[347];
    const double C395251 = g[348];
    const double C395267 = g[349];
    const double C395310 = g[350];
    const double C395326 = g[351];
    const double C395370 = g[352];
    const double C395464 = g[353];
    const double C395480 = g[354];
    const double C395554 = g[355];
    const double C395621 = g[356];
    const double C395665 = g[357];
    const double C395718 = g[358];
    const double C396080 = g[359];
    const double C396169 = g[360];
    const double C396184 = g[361];
    const double C396230 = g[362];
    const double C396621 = g[363];
    const double C396682 = g[364];
    const double C396713 = g[365];
    const double C397026 = g[366];
    const double C397085 = g[367];
    const double C397318 = g[368];
    const double C397434 = g[369];
    const double C397582 = g[370];
    const double C397706 = g[371];
    const double C397896 = g[372];
    const double C398019 = g[373];
    const double C398065 = g[374];
    const double C398096 = g[375];
    const double C398176 = g[376];
    const double C398737 = g[377];
    const double C399143 = g[378];
    const double C399950 = g[379];
    const double C400054 = g[380];
    const double C400208 = g[381];
    const double C400520 = g[382];
    const double C400675 = g[383];
    const double C393227 = p + q;
    const double C393226 = p * q;
    const double C400782 = bs[7];
    const double C400781 = bs[6];
    const double C400779 = bs[5];
    const double C400777 = bs[4];
    const double C400774 = bs[3];
    const double C400768 = bs[2];
    const double C400758 = std::pow(Pi, 2.5);
    const double C400755 = bs[1];
    const double C400754 = ae * be;
    const double C400753 = bs[0];
    const double C400751 = zP - zQ;
    const double C400750 = be * zAB;
    const double C400749 = yP - yQ;
    const double C400748 = be * yAB;
    const double C400747 = 2 * p;
    const double C400745 = xP - xQ;
    const double C400744 = std::pow(p, 2);
    const double C400742 = be * xAB;
    const double C400741 = ae / p;
    const double C393228 = C393227 * p;
    const double C400759 = std::sqrt(C393227);
    const double C400757 = p * C393227;
    const double C400756 = kab * C393226;
    const double C400743 = ae * C393226;
    const double C400838 = 4 * C400758;
    const double C400836 = kab * C400754;
    const double C400827 = C400751 * C393226;
    const double C400826 = C400749 * C393226;
    const double C400824 = C400745 * C393226;
    const double C400823 = C393227 * C400744;
    const double C400821 = C400741 - 1;
    const double C400839 = C393226 * C400759;
    const double C400837 = kcd * C400756;
    const double C400912 = C398096 * C400743;
    const double C400903 = C397085 * C400743;
    const double C400899 = C396713 * C400743;
    const double C400895 = C396169 * C400743;
    const double C400890 = C395718 * C400743;
    const double C400888 = C395621 * C400743;
    const double C400886 = C395464 * C400743;
    const double C400884 = C395370 * C400743;
    const double C400883 = C395326 * C400743;
    const double C400882 = C395310 * C400743;
    const double C400881 = C395267 * C400743;
    const double C400880 = C395251 * C400743;
    const double C400878 = C395123 * C400743;
    const double C400877 = C395021 * C400743;
    const double C400876 = C394989 * C400743;
    const double C400872 = C394883 * C400743;
    const double C400871 = C394754 * C400743;
    const double C400868 = C394692 * C400743;
    const double C400867 = C394662 * C400743;
    const double C400866 = C394632 * C400743;
    const double C400865 = C394602 * C400743;
    const double C400864 = C394586 * C400743;
    const double C400863 = C394492 * C400743;
    const double C400861 = C394431 * C400743;
    const double C400860 = C394416 * C400743;
    const double C400859 = C394329 * C400743;
    const double C400858 = C394297 * C400743;
    const double C400857 = C394281 * C400743;
    const double C400854 = C394175 * C400743;
    const double C400853 = C394114 * C400743;
    const double C400851 = C394055 * C400743;
    const double C400850 = C393998 * C400743;
    const double C400849 = C393968 * C400743;
    const double C400848 = C393953 * C400743;
    const double C400847 = C393938 * C400743;
    const double C400846 = C393851 * C400743;
    const double C400845 = C393790 * C400743;
    const double C400844 = C393759 * C400743;
    const double C400834 = C393497 * C400743;
    const double C400833 = C393482 * C400743;
    const double C400832 = C393466 * C400743;
    const double C400831 = C393437 * C400743;
    const double C400830 = C393406 * C400743;
    const double C400829 = C393347 * C400743;
    const double C400828 = C393288 * C400743;
    const double C400822 = C393224 * C400743;
    const double C400951 = kcd * C400836;
    const double C401068 = C400821 * C395251;
    const double C401058 = C400821 * C393437;
    const double C401053 = C400821 * C377421;
    const double C401048 = C400821 * C375690;
    const double C401041 = C400821 * C395621;
    const double C401037 = C400821 * C395464;
    const double C401033 = C400821 * C395123;
    const double C401029 = C400821 * C394754;
    const double C401027 = C400821 * C394692;
    const double C401025 = C400821 * C394602;
    const double C401023 = C400821 * C394632;
    const double C401021 = C400821 * C394662;
    const double C401017 = C400821 * C394492;
    const double C401015 = C400821 * C393968;
    const double C401013 = C400821 * C393790;
    const double C401008 = C400821 * C393497;
    const double C401006 = C400821 * C393953;
    const double C401002 = C400821 * C393759;
    const double C401000 = C400821 * C393347;
    const double C400998 = C400821 * C393288;
    const double C400996 = C400821 * C393466;
    const double C400994 = C400821 * C393224;
    const double C400991 = C400821 * C393482;
    const double C400988 = C400821 * C392213;
    const double C400986 = C400821 * C385217;
    const double C400984 = C400821 * C385145;
    const double C400982 = C400821 * C384899;
    const double C400980 = C400821 * C384883;
    const double C400976 = C400821 * C378016;
    const double C400974 = C400821 * C377690;
    const double C400971 = C400821 * C377374;
    const double C400969 = C400821 * C378103;
    const double C400967 = C400821 * C378162;
    const double C400965 = C400821 * C377067;
    const double C400963 = C400821 * C376947;
    const double C400961 = C400821 * C377838;
    const double C400959 = C400821 * C377808;
    const double C400957 = C400821 * C376220;
    const double C400948 = C400821 * C375017;
    const double C400946 = C400821 * C377390;
    const double C400944 = C400821 * C374954;
    const double C400942 = C400821 * C377331;
    const double C400940 = C400821 * C377216;
    const double C400938 = C400821 * C376595;
    const double C400936 = C400821 * C375865;
    const double C400933 = C400821 * C375002;
    const double C401043 = C400782 * C400837;
    const double C401040 = C400781 * C400837;
    const double C401036 = C400779 * C400837;
    const double C401032 = C400777 * C400837;
    const double C401019 = C400774 * C400837;
    const double C400993 = C400768 * C400837;
    const double C400952 = C400755 * C400837;
    const double C401069 = C400912 / C400823;
    const double C401059 = C400903 / C400823;
    const double C401054 = C400899 / C400823;
    const double C401049 = C400895 / C400823;
    const double C401042 = C400890 / C400823;
    const double C401038 = C400888 / C400823;
    const double C401034 = C400886 / C400823;
    const double C401030 = C400884 / C400823;
    const double C401028 = C400883 / C400823;
    const double C401026 = C400882 / C400823;
    const double C401024 = C400881 / C400823;
    const double C401022 = C400880 / C400823;
    const double C401018 = C400878 / C400823;
    const double C401016 = C400877 / C400823;
    const double C401014 = C400876 / C400823;
    const double C401009 = C400872 / C400823;
    const double C401007 = C400871 / C400823;
    const double C401003 = C400868 / C400823;
    const double C401001 = C400867 / C400823;
    const double C400999 = C400866 / C400823;
    const double C400997 = C400865 / C400823;
    const double C400995 = C400864 / C400823;
    const double C400992 = C400863 / C400823;
    const double C400989 = C400861 / C400823;
    const double C400987 = C400860 / C400823;
    const double C400985 = C400859 / C400823;
    const double C400983 = C400858 / C400823;
    const double C400981 = C400857 / C400823;
    const double C400977 = C400854 / C400823;
    const double C400975 = C400853 / C400823;
    const double C400972 = C400851 / C400823;
    const double C400970 = C400850 / C400823;
    const double C400968 = C400849 / C400823;
    const double C400966 = C400848 / C400823;
    const double C400964 = C400847 / C400823;
    const double C400962 = C400846 / C400823;
    const double C400960 = C400845 / C400823;
    const double C400958 = C400844 / C400823;
    const double C400949 = C400834 / C400823;
    const double C400947 = C400833 / C400823;
    const double C400945 = C400832 / C400823;
    const double C400943 = C400831 / C400823;
    const double C400941 = C400830 / C400823;
    const double C400939 = C400829 / C400823;
    const double C400937 = C400828 / C400823;
    const double C400934 = C400822 / C400823;
    const double C401118 = C400781 * C400951;
    const double C401116 = C400779 * C400951;
    const double C401113 = C400777 * C400951;
    const double C401110 = C400774 * C400951;
    const double C401107 = C400768 * C400951;
    const double C401101 = C400755 * C400951;
    const double C401091 = C400753 * C400951;
    const double C401119 = C401043 * ae;
    const double C401117 = C401040 * ae;
    const double C401114 = C401036 * ae;
    const double C401111 = C401032 * ae;
    const double C401108 = C401019 * ae;
    const double C401102 = C400993 * ae;
    const double C401092 = C400952 * ae;
    const double C395722 =
        -(((xAB * C401118) / p + (C400745 * C401119) / C400757) * C400838) /
        C400839;
    const double C398218 =
        -(((yAB * C401118) / p + (C400749 * C401119) / C400757) * C400838) /
        C400839;
    const double C400703 =
        -(((zAB * C401118) / p + (C400751 * C401119) / C400757) * C400838) /
        C400839;
    const double C395625 =
        -(((xAB * C401116) / p + (C400745 * C401117) / C400757) * C400838) /
        C400839;
    const double C398122 =
        -(((yAB * C401116) / p + (C400749 * C401117) / C400757) * C400838) /
        C400839;
    const double C400607 =
        -(((zAB * C401116) / p + (C400751 * C401117) / C400757) * C400838) /
        C400839;
    const double C395468 =
        -(((xAB * C401113) / p + (C400745 * C401114) / C400757) * C400838) /
        C400839;
    const double C397965 =
        -(((yAB * C401113) / p + (C400749 * C401114) / C400757) * C400838) /
        C400839;
    const double C400452 =
        -(((zAB * C401113) / p + (C400751 * C401114) / C400757) * C400838) /
        C400839;
    const double C395127 =
        -(((xAB * C401110) / p + (C400745 * C401111) / C400757) * C400838) /
        C400839;
    const double C397637 =
        -(((yAB * C401110) / p + (C400749 * C401111) / C400757) * C400838) /
        C400839;
    const double C400125 =
        -(((zAB * C401110) / p + (C400751 * C401111) / C400757) * C400838) /
        C400839;
    const double C394480 =
        -(((xAB * C401107) / p + (C400745 * C401108) / C400757) * C400838) /
        C400839;
    const double C396993 =
        -(((yAB * C401107) / p + (C400749 * C401108) / C400757) * C400838) /
        C400839;
    const double C399484 =
        -(((zAB * C401107) / p + (C400751 * C401108) / C400757) * C400838) /
        C400839;
    const double C393248 =
        -(((xAB * C401101) / p + (C400745 * C401102) / C400757) * C400838) /
        C400839;
    const double C395789 =
        -(((yAB * C401101) / p + (C400749 * C401102) / C400757) * C400838) /
        C400839;
    const double C398285 =
        -(((zAB * C401101) / p + (C400751 * C401102) / C400757) * C400838) /
        C400839;
    const double C375036 =
        -(((xAB * C401091) / p + (C400745 * C401092) / C400757) * C400838) /
        C400839;
    const double C382075 =
        -(((yAB * C401091) / p + (C400749 * C401092) / C400757) * C400838) /
        C400839;
    const double C389088 =
        -(((zAB * C401091) / p + (C400751 * C401092) / C400757) * C400838) /
        C400839;
    const double C400780 = C395625 * C393226;
    const double C395669 = C401041 - (C395625 * C400742) / p - C401042 -
                           (C395722 * C400824) / C393228;
    const double C395684 =
        -((C395625 * C400748) / p + (C395722 * C400826) / C393228);
    const double C395699 =
        -((C395625 * C400750) / p + (C395722 * C400827) / C393228);
    const double C400801 = C398122 * C393226;
    const double C398165 =
        -((C398122 * C400742) / p + (C398218 * C400824) / C393228);
    const double C398181 = C401041 - (C398122 * C400748) / p - C401042 -
                           (C398218 * C400826) / C393228;
    const double C398196 =
        -((C398122 * C400750) / p + (C398218 * C400827) / C393228);
    const double C400820 = C400607 * C393226;
    const double C400650 =
        -((C400607 * C400742) / p + (C400703 * C400824) / C393228);
    const double C400665 =
        -((C400607 * C400748) / p + (C400703 * C400826) / C393228);
    const double C400681 = C401041 - (C400607 * C400750) / p - C401042 -
                           (C400703 * C400827) / C393228;
    const double C400778 = C395468 * C393226;
    const double C395484 = C401037 - (C395468 * C400742) / p - C401038 -
                           (C395625 * C400824) / C393228;
    const double C395527 =
        -((C395468 * C400748) / p + (C395625 * C400826) / C393228);
    const double C395542 =
        -((C395468 * C400750) / p + (C395625 * C400827) / C393228);
    const double C400800 = C397965 * C393226;
    const double C397980 =
        -((C397965 * C400742) / p + (C398122 * C400824) / C393228);
    const double C398024 = C401037 - (C397965 * C400748) / p - C401038 -
                           (C398122 * C400826) / C393228;
    const double C398039 =
        -((C397965 * C400750) / p + (C398122 * C400827) / C393228);
    const double C400819 = C400452 * C393226;
    const double C400467 =
        -((C400452 * C400742) / p + (C400607 * C400824) / C393228);
    const double C400510 =
        -((C400452 * C400748) / p + (C400607 * C400826) / C393228);
    const double C400526 = C401037 - (C400452 * C400750) / p - C401038 -
                           (C400607 * C400827) / C393228;
    const double C400775 = C395127 * C393226;
    const double C395178 = C401033 - (C395127 * C400742) / p - C401034 -
                           (C395468 * C400824) / C393228;
    const double C395209 =
        -((C395127 * C400748) / p + (C395468 * C400826) / C393228);
    const double C395224 =
        -((C395127 * C400750) / p + (C395468 * C400827) / C393228);
    const double C400798 = C397637 * C393226;
    const double C397680 =
        -((C397637 * C400742) / p + (C397965 * C400824) / C393228);
    const double C397711 = C401033 - (C397637 * C400748) / p - C401034 -
                           (C397965 * C400826) / C393228;
    const double C397726 =
        -((C397637 * C400750) / p + (C397965 * C400827) / C393228);
    const double C400817 = C400125 * C393226;
    const double C400168 =
        -((C400125 * C400742) / p + (C400452 * C400824) / C393228);
    const double C400198 =
        -((C400125 * C400748) / p + (C400452 * C400826) / C393228);
    const double C400214 = C401033 - (C400125 * C400750) / p - C401034 -
                           (C400452 * C400827) / C393228;
    const double C400767 = C394480 * C393226;
    const double C394479 = C401017 - (C394480 * C400742) / p - C401018 -
                           (C395127 * C400824) / C393228;
    const double C394517 =
        -((C394480 * C400748) / p + (C395127 * C400826) / C393228);
    const double C394546 =
        -((C394480 * C400750) / p + (C395127 * C400827) / C393228);
    const double C400792 = C396993 * C393226;
    const double C397008 =
        -((C396993 * C400742) / p + (C397637 * C400824) / C393228);
    const double C397031 = C401017 - (C396993 * C400748) / p - C401018 -
                           (C397637 * C400826) / C393228;
    const double C397060 =
        -((C396993 * C400750) / p + (C397637 * C400827) / C393228);
    const double C400811 = C399484 * C393226;
    const double C399499 =
        -((C399484 * C400742) / p + (C400125 * C400824) / C393228);
    const double C399521 =
        -((C399484 * C400748) / p + (C400125 * C400826) / C393228);
    const double C399550 = C401017 - (C399484 * C400750) / p - C401018 -
                           (C400125 * C400827) / C393228;
    const double C400746 = C393248 * C393226;
    const double C393232 = C400991 - (C393248 * C400742) / p - C400992 -
                           (C394480 * C400824) / C393228;
    const double C393307 =
        -((C393248 * C400748) / p + (C394480 * C400826) / C393228);
    const double C393366 =
        -((C393248 * C400750) / p + (C394480 * C400827) / C393228);
    const double C400783 = C395789 * C393226;
    const double C395773 =
        -((C395789 * C400742) / p + (C396993 * C400824) / C393228);
    const double C395847 = C400991 - (C395789 * C400748) / p - C400992 -
                           (C396993 * C400826) / C393228;
    const double C395905 =
        -((C395789 * C400750) / p + (C396993 * C400827) / C393228);
    const double C400802 = C398285 * C393226;
    const double C398269 =
        -((C398285 * C400742) / p + (C399484 * C400824) / C393228);
    const double C398343 =
        -((C398285 * C400748) / p + (C399484 * C400826) / C393228);
    const double C398401 = C400991 - (C398285 * C400750) / p - C400992 -
                           (C399484 * C400827) / C393228;
    const double C374990 = C400946 - (C375036 * C400742) / p - C400947 -
                           (C393248 * C400824) / C393228;
    const double C375452 =
        -((C375036 * C400748) / p + (C393248 * C400826) / C393228);
    const double C375678 =
        -((C375036 * C400750) / p + (C393248 * C400827) / C393228);
    const double C382032 =
        -((C382075 * C400742) / p + (C395789 * C400824) / C393228);
    const double C382493 = C400946 - (C382075 * C400748) / p - C400947 -
                           (C395789 * C400826) / C393228;
    const double C382717 =
        -((C382075 * C400750) / p + (C395789 * C400827) / C393228);
    const double C389045 =
        -((C389088 * C400742) / p + (C398285 * C400824) / C393228);
    const double C389500 =
        -((C389088 * C400748) / p + (C398285 * C400826) / C393228);
    const double C389721 = C400946 - (C389088 * C400750) / p - C400947 -
                           (C398285 * C400827) / C393228;
    const double C400889 = C400780 / C393228;
    const double C400913 = C400801 / C393228;
    const double C400932 = C400820 / C393228;
    const double C400887 = C400778 / C393228;
    const double C400911 = C400800 / C393228;
    const double C400931 = C400819 / C393228;
    const double C400879 = C400775 / C393228;
    const double C400909 = C400798 / C393228;
    const double C400929 = C400817 / C393228;
    const double C400862 = C400767 / C393228;
    const double C400902 = C400792 / C393228;
    const double C400923 = C400811 / C393228;
    const double C400825 = C400746 / C393228;
    const double C393425 =
        -((C393366 * C400748) / p + (C394546 * C400826) / C393228);
    const double C400891 = C400783 / C393228;
    const double C395962 = C401058 - (C395905 * C400748) / p - C401059 -
                           (C397060 * C400826) / C393228;
    const double C400914 = C400802 / C393228;
    const double C398458 =
        -((C398401 * C400748) / p + (C399550 * C400826) / C393228);
    const double C374046 = C400940 - (C375452 * C400742) / p - C400941 -
                           (C393307 * C400824) / C393228;
    const double C374514 = C400942 - (C375678 * C400742) / p - C400943 -
                           (C393366 * C400824) / C393228;
    const double C374744 =
        -((C375678 * C400748) / p + (C393366 * C400826) / C393228);
    const double C381106 =
        -((C382493 * C400742) / p + (C395847 * C400824) / C393228);
    const double C381564 =
        -((C382717 * C400742) / p + (C395905 * C400824) / C393228);
    const double C381791 = C400942 - (C382717 * C400748) / p - C400943 -
                           (C395905 * C400826) / C393228;
    const double C388119 =
        -((C389500 * C400742) / p + (C398343 * C400824) / C393228);
    const double C388577 =
        -((C389721 * C400742) / p + (C398401 * C400824) / C393228);
    const double C388804 =
        -((C389721 * C400748) / p + (C398401 * C400826) / C393228);
    const double C401039 = C395468 - C400889;
    const double C401070 = C397965 - C400913;
    const double C401089 = C400452 - C400932;
    const double C401035 = C395127 - C400887;
    const double C401067 = C397637 - C400911;
    const double C401088 = C400125 - C400931;
    const double C401020 = C394480 - C400879;
    const double C401065 = C396993 - C400909;
    const double C401086 = C399484 - C400929;
    const double C400990 = C393248 - C400862;
    const double C401057 = C395789 - C400902;
    const double C401080 = C398285 - C400923;
    const double C400935 = C375036 - C400825;
    const double C401044 = C382075 - C400891;
    const double C401071 = C389088 - C400914;
    const double C374279 = C400821 * C377273 - (C374744 * C400742) / p -
                           (C393421 * C400743) / C400823 -
                           (C393425 * C400824) / C393228;
    const double C381335 =
        -((C381791 * C400742) / p + (C395962 * C400824) / C393228);
    const double C388348 =
        -((C388804 * C400742) / p + (C398458 * C400824) / C393228);
    const double C401115 = C401039 / C400747;
    const double C401135 = C401070 / C400747;
    const double C401151 = C401089 / C400747;
    const double C401112 = C401035 / C400747;
    const double C401134 = C401067 / C400747;
    const double C401150 = C401088 / C400747;
    const double C401109 = C401020 / C400747;
    const double C401133 = C401065 / C400747;
    const double C401149 = C401086 / C400747;
    const double C401100 = C400990 / C400747;
    const double C401128 = C401057 / C400747;
    const double C401144 = C401080 / C400747;
    const double C401090 = C400935 / C400747;
    const double C401120 = C401044 / C400747;
    const double C401136 = C401071 / C400747;
    const double C395558 = C400821 * C395480 - (C395484 * C400742) / p -
                           (C395665 * C400743) / C400823 -
                           (C395669 * C400824) / C393228 + C401115;
    const double C395573 =
        C401115 - ((C395527 * C400748) / p + (C395684 * C400826) / C393228);
    const double C395588 =
        C401115 - ((C395542 * C400750) / p + (C395699 * C400827) / C393228);
    const double C398054 =
        C401135 - ((C397980 * C400742) / p + (C398165 * C400824) / C393228);
    const double C398070 = C400821 * C398019 - (C398024 * C400748) / p -
                           (C398176 * C400743) / C400823 -
                           (C398181 * C400826) / C393228 + C401135;
    const double C398085 =
        C401135 - ((C398039 * C400750) / p + (C398196 * C400827) / C393228);
    const double C400541 =
        C401151 - ((C400467 * C400742) / p + (C400650 * C400824) / C393228);
    const double C400556 =
        C401151 - ((C400510 * C400748) / p + (C400665 * C400826) / C393228);
    const double C400571 = C400821 * C400520 - (C400526 * C400750) / p -
                           (C400675 * C400743) / C400823 -
                           (C400681 * C400827) / C393228 + C401151;
    const double C395194 = C400821 * C395174 - (C395178 * C400742) / p -
                           (C395480 * C400743) / C400823 -
                           (C395484 * C400824) / C393228 + C401112;
    const double C395239 =
        C401112 - ((C395209 * C400748) / p + (C395527 * C400826) / C393228);
    const double C395255 =
        C401112 - ((C395224 * C400750) / p + (C395542 * C400827) / C393228);
    const double C397695 =
        C401134 - ((C397680 * C400742) / p + (C397980 * C400824) / C393228);
    const double C397741 = C400821 * C397706 - (C397711 * C400748) / p -
                           (C398019 * C400743) / C400823 -
                           (C398024 * C400826) / C393228 + C401134;
    const double C397756 =
        C401134 - ((C397726 * C400750) / p + (C398039 * C400827) / C393228);
    const double C400183 =
        C401150 - ((C400168 * C400742) / p + (C400467 * C400824) / C393228);
    const double C400229 =
        C401150 - ((C400198 * C400748) / p + (C400510 * C400826) / C393228);
    const double C400244 = C400821 * C400208 - (C400214 * C400750) / p -
                           (C400520 * C400743) / C400823 -
                           (C400526 * C400827) / C393228 + C401150;
    const double C394590 = C400821 * C394475 - (C394479 * C400742) / p -
                           (C395174 * C400743) / C400823 -
                           (C395178 * C400824) / C393228 + C401109;
    const double C394636 =
        C401109 - ((C394517 * C400748) / p + (C395209 * C400826) / C393228);
    const double C394666 =
        C401109 - ((C394546 * C400750) / p + (C395224 * C400827) / C393228);
    const double C397104 =
        C401133 - ((C397008 * C400742) / p + (C397680 * C400824) / C393228);
    const double C397148 = C400821 * C397026 - (C397031 * C400748) / p -
                           (C397706 * C400743) / C400823 -
                           (C397711 * C400826) / C393228 + C401133;
    const double C397177 =
        C401133 - ((C397060 * C400750) / p + (C397726 * C400827) / C393228);
    const double C399593 =
        C401149 - ((C399499 * C400742) / p + (C400168 * C400824) / C393228);
    const double C399637 =
        C401149 - ((C399521 * C400748) / p + (C400198 * C400826) / C393228);
    const double C399666 = C400821 * C397085 - (C399550 * C400750) / p -
                           (C400208 * C400743) / C400823 -
                           (C400214 * C400827) / C393228 + C401149;
    const double C393231 = C400821 * C393244 - (C393232 * C400742) / p -
                           (C394475 * C400743) / C400823 -
                           (C394479 * C400824) / C393228 + C401100;
    const double C393292 =
        C401100 - ((C393307 * C400748) / p + (C394517 * C400826) / C393228);
    const double C393351 =
        C401100 - ((C393366 * C400750) / p + (C394546 * C400827) / C393228);
    const double C395774 =
        C401128 - ((C395773 * C400742) / p + (C397008 * C400824) / C393228);
    const double C395832 = C400821 * C393406 - (C395847 * C400748) / p -
                           (C397026 * C400743) / C400823 -
                           (C397031 * C400826) / C393228 + C401128;
    const double C395890 =
        C401128 - ((C395905 * C400750) / p + (C397060 * C400827) / C393228);
    const double C398270 =
        C401144 - ((C398269 * C400742) / p + (C399499 * C400824) / C393228);
    const double C398328 =
        C401144 - ((C398343 * C400748) / p + (C399521 * C400826) / C393228);
    const double C398386 = C401058 - (C398401 * C400750) / p - C401059 -
                           (C399550 * C400827) / C393228 + C401144;
    const double C371158 = C400821 * C375032 - (C374990 * C400742) / p -
                           (C393244 * C400743) / C400823 -
                           (C393232 * C400824) / C393228 + C401090;
    const double C372139 =
        C401090 - ((C375452 * C400748) / p + (C393307 * C400826) / C393228);
    const double C373112 =
        C401090 - ((C375678 * C400750) / p + (C393366 * C400827) / C393228);
    const double C378288 =
        C401120 - ((C382032 * C400742) / p + (C395773 * C400824) / C393228);
    const double C379245 = C400940 - (C382493 * C400748) / p - C400941 -
                           (C395847 * C400826) / C393228 + C401120;
    const double C380194 =
        C401120 - ((C382717 * C400750) / p + (C395905 * C400827) / C393228);
    const double C385301 =
        C401136 - ((C389045 * C400742) / p + (C398269 * C400824) / C393228);
    const double C386258 =
        C401136 - ((C389500 * C400748) / p + (C398343 * C400826) / C393228);
    const double C387207 = C400942 - (C389721 * C400750) / p - C400943 -
                           (C398401 * C400827) / C393228 + C401136;
    const double C395314 = C400821 * C395190 - (C395194 * C400742) / p -
                           (C395554 * C400743) / C400823 -
                           (C395558 * C400824) / C393228 +
                           (C395178 - (C395484 * C393226) / C393228) / p;
    const double C395330 =
        (C395209 - (C395527 * C393226) / C393228) / p -
        ((C395239 * C400748) / p + (C395573 * C400826) / C393228);
    const double C400776 = C395255 * C393226;
    const double C395374 =
        (C395224 - (C395542 * C393226) / C393228) / p -
        ((C395255 * C400750) / p + (C395588 * C400827) / C393228);
    const double C395403 =
        -((C395255 * C400748) / p + (C395588 * C400826) / C393228);
    const double C397813 =
        (C397680 - (C397980 * C393226) / C393228) / p -
        ((C397695 * C400742) / p + (C398054 * C400824) / C393228);
    const double C397828 = C400821 * C395267 - (C397741 * C400748) / p -
                           (C398065 * C400743) / C400823 -
                           (C398070 * C400826) / C393228 +
                           (C397711 - (C398024 * C393226) / C393228) / p;
    const double C400799 = C397756 * C393226;
    const double C397871 =
        (C397726 - (C398039 * C393226) / C393228) / p -
        ((C397756 * C400750) / p + (C398085 * C400827) / C393228);
    const double C397901 = C401068 - (C397756 * C400748) / p - C401069 -
                           (C398085 * C400826) / C393228;
    const double C400301 =
        (C400168 - (C400467 * C393226) / C393228) / p -
        ((C400183 * C400742) / p + (C400541 * C400824) / C393228);
    const double C400316 =
        (C400198 - (C400510 * C393226) / C393228) / p -
        ((C400229 * C400748) / p + (C400556 * C400826) / C393228);
    const double C400818 = C400244 * C393226;
    const double C400359 = C401068 - (C400244 * C400750) / p - C401069 -
                           (C400571 * C400827) / C393228 +
                           (C400214 - (C400526 * C393226) / C393228) / p;
    const double C400388 =
        -((C400244 * C400748) / p + (C400571 * C400826) / C393228);
    const double C394606 = C400821 * C394586 - (C394590 * C400742) / p -
                           (C395190 * C400743) / C400823 -
                           (C395194 * C400824) / C393228 +
                           (C394479 - (C395178 * C393226) / C393228) / p;
    const double C400770 = C394636 * C393226;
    const double C394696 =
        (C394517 - (C395209 * C393226) / C393228) / p -
        ((C394636 * C400748) / p + (C395239 * C400826) / C393228);
    const double C394742 = C401023 - (C394636 * C400742) / p - C401024 -
                           (C395239 * C400824) / C393228;
    const double C400769 = C394666 * C393226;
    const double C394726 = C401021 - (C394666 * C400742) / p - C401022 -
                           (C395255 * C400824) / C393228;
    const double C394758 =
        (C394546 - (C395224 * C393226) / C393228) / p -
        ((C394666 * C400750) / p + (C395255 * C400827) / C393228);
    const double C394815 =
        -((C394666 * C400748) / p + (C395255 * C400826) / C393228);
    const double C397119 =
        (C397008 - (C397680 * C393226) / C393228) / p -
        ((C397104 * C400742) / p + (C397695 * C400824) / C393228);
    const double C400794 = C397148 * C393226;
    const double C397220 = C401023 - (C397148 * C400748) / p - C401024 -
                           (C397741 * C400826) / C393228 +
                           (C397031 - (C397711 * C393226) / C393228) / p;
    const double C397250 =
        -((C397148 * C400742) / p + (C397741 * C400824) / C393228);
    const double C400793 = C397177 * C393226;
    const double C397235 =
        -((C397177 * C400742) / p + (C397756 * C400824) / C393228);
    const double C397279 =
        (C397060 - (C397726 * C393226) / C393228) / p -
        ((C397177 * C400750) / p + (C397756 * C400827) / C393228);
    const double C397323 = C401021 - (C397177 * C400748) / p - C401022 -
                           (C397756 * C400826) / C393228;
    const double C399608 =
        (C399499 - (C400168 * C393226) / C393228) / p -
        ((C399593 * C400742) / p + (C400183 * C400824) / C393228);
    const double C400813 = C399637 * C393226;
    const double C399709 =
        (C399521 - (C400198 * C393226) / C393228) / p -
        ((C399637 * C400748) / p + (C400229 * C400826) / C393228);
    const double C399739 =
        -((C399637 * C400742) / p + (C400229 * C400824) / C393228);
    const double C400812 = C399666 * C393226;
    const double C399724 =
        -((C399666 * C400742) / p + (C400244 * C400824) / C393228);
    const double C399768 = C401021 - (C399666 * C400750) / p - C401022 -
                           (C400244 * C400827) / C393228 +
                           (C399550 - (C400214 * C393226) / C393228) / p;
    const double C399811 =
        -((C399666 * C400748) / p + (C400244 * C400826) / C393228);
    const double C393470 = C400994 - (C393231 * C400742) / p - C400995 -
                           (C394590 * C400824) / C393228 +
                           (C393232 - (C394479 * C393226) / C393228) / p;
    const double C393655 =
        -((C393231 * C400750) / p + (C394590 * C400827) / C393228);
    const double C400760 = C393292 * C393226;
    const double C393567 = C400998 - (C393292 * C400742) / p - C400999 -
                           (C394636 * C400824) / C393228;
    const double C393686 =
        (C393307 - (C394517 * C393226) / C393228) / p -
        ((C393292 * C400748) / p + (C394636 * C400826) / C393228);
    const double C393778 =
        -((C393292 * C400750) / p + (C394636 * C400827) / C393228);
    const double C400761 = C393351 * C393226;
    const double C393598 = C401000 - (C393351 * C400742) / p - C401001 -
                           (C394666 * C400824) / C393228;
    const double C393747 =
        (C393366 - (C394546 * C393226) / C393228) / p -
        ((C393351 * C400750) / p + (C394666 * C400827) / C393228);
    const double C393839 =
        -((C393351 * C400748) / p + (C394666 * C400826) / C393228);
    const double C396005 =
        (C395773 - (C397008 * C393226) / C393228) / p -
        ((C395774 * C400742) / p + (C397104 * C400824) / C393228);
    const double C396189 =
        -((C395774 * C400750) / p + (C397104 * C400827) / C393228);
    const double C400785 = C395832 * C393226;
    const double C396100 =
        -((C395832 * C400742) / p + (C397148 * C400824) / C393228);
    const double C396218 = C400998 - (C395832 * C400748) / p - C400999 -
                           (C397148 * C400826) / C393228 +
                           (C395847 - (C397031 * C393226) / C393228) / p;
    const double C396309 =
        -((C395832 * C400750) / p + (C397148 * C400827) / C393228);
    const double C400786 = C395890 * C393226;
    const double C396130 =
        -((C395890 * C400742) / p + (C397177 * C400824) / C393228);
    const double C396279 =
        (C395905 - (C397060 * C393226) / C393228) / p -
        ((C395890 * C400750) / p + (C397177 * C400827) / C393228);
    const double C396368 = C401000 - (C395890 * C400748) / p - C401001 -
                           (C397177 * C400826) / C393228;
    const double C398501 =
        (C398269 - (C399499 * C393226) / C393228) / p -
        ((C398270 * C400742) / p + (C399593 * C400824) / C393228);
    const double C398682 = C400994 - (C398270 * C400750) / p - C400995 -
                           (C399593 * C400827) / C393228;
    const double C400804 = C398328 * C393226;
    const double C398595 =
        -((C398328 * C400742) / p + (C399637 * C400824) / C393228);
    const double C398711 =
        (C398343 - (C399521 * C393226) / C393228) / p -
        ((C398328 * C400748) / p + (C399637 * C400826) / C393228);
    const double C398802 = C400998 - (C398328 * C400750) / p - C400999 -
                           (C399637 * C400827) / C393228;
    const double C400805 = C398386 * C393226;
    const double C398625 =
        -((C398386 * C400742) / p + (C399666 * C400824) / C393228);
    const double C398772 = C401000 - (C398386 * C400750) / p - C401001 -
                           (C399666 * C400827) / C393228 +
                           (C398401 - (C399550 * C393226) / C393228) / p;
    const double C398861 =
        -((C398386 * C400748) / p + (C399666 * C400826) / C393228);
    const double C371140 = C400933 - (C371158 * C400742) / p - C400934 -
                           (C393231 * C400824) / C393228 +
                           (C374990 - (C393232 * C393226) / C393228) / p;
    const double C371616 =
        -((C371158 * C400748) / p + (C393231 * C400826) / C393228);
    const double C371863 =
        -((C371158 * C400750) / p + (C393231 * C400827) / C393228);
    const double C372122 = C400936 - (C372139 * C400742) / p - C400937 -
                           (C393292 * C400824) / C393228;
    const double C372592 =
        (C375452 - (C393307 * C393226) / C393228) / p -
        ((C372139 * C400748) / p + (C393292 * C400826) / C393228);
    const double C372836 =
        -((C372139 * C400750) / p + (C393292 * C400827) / C393228);
    const double C373095 = C400938 - (C373112 * C400742) / p - C400939 -
                           (C393351 * C400824) / C393228;
    const double C373565 =
        -((C373112 * C400748) / p + (C393351 * C400826) / C393228);
    const double C373805 =
        (C375678 - (C393366 * C393226) / C393228) / p -
        ((C373112 * C400750) / p + (C393351 * C400827) / C393228);
    const double C378271 =
        (C382032 - (C395773 * C393226) / C393228) / p -
        ((C378288 * C400742) / p + (C395774 * C400824) / C393228);
    const double C378737 = C400933 - (C378288 * C400748) / p - C400934 -
                           (C395774 * C400826) / C393228;
    const double C378977 =
        -((C378288 * C400750) / p + (C395774 * C400827) / C393228);
    const double C379229 =
        -((C379245 * C400742) / p + (C395832 * C400824) / C393228);
    const double C379689 = C400936 - (C379245 * C400748) / p - C400937 -
                           (C395832 * C400826) / C393228 +
                           (C382493 - (C395847 * C393226) / C393228) / p;
    const double C379926 =
        -((C379245 * C400750) / p + (C395832 * C400827) / C393228);
    const double C380178 =
        -((C380194 * C400742) / p + (C395890 * C400824) / C393228);
    const double C380638 = C400938 - (C380194 * C400748) / p - C400939 -
                           (C395890 * C400826) / C393228;
    const double C380871 =
        (C382717 - (C395905 * C393226) / C393228) / p -
        ((C380194 * C400750) / p + (C395890 * C400827) / C393228);
    const double C385284 =
        (C389045 - (C398269 * C393226) / C393228) / p -
        ((C385301 * C400742) / p + (C398270 * C400824) / C393228);
    const double C385750 =
        -((C385301 * C400748) / p + (C398270 * C400826) / C393228);
    const double C385990 = C400933 - (C385301 * C400750) / p - C400934 -
                           (C398270 * C400827) / C393228;
    const double C386242 =
        -((C386258 * C400742) / p + (C398328 * C400824) / C393228);
    const double C386702 =
        (C389500 - (C398343 * C393226) / C393228) / p -
        ((C386258 * C400748) / p + (C398328 * C400826) / C393228);
    const double C386939 = C400936 - (C386258 * C400750) / p - C400937 -
                           (C398328 * C400827) / C393228;
    const double C387191 =
        -((C387207 * C400742) / p + (C398386 * C400824) / C393228);
    const double C387651 =
        -((C387207 * C400748) / p + (C398386 * C400826) / C393228);
    const double C387884 = C400938 - (C387207 * C400750) / p - C400939 -
                           (C398386 * C400827) / C393228 +
                           (C389721 - (C398401 * C393226) / C393228) / p;
    const double C400885 = C400776 / C393228;
    const double C400910 = C400799 / C393228;
    const double C400930 = C400818 / C393228;
    const double C400771 = C394606 * C393226;
    const double C394887 =
        C401025 - (C394606 * C400742) / p - C401026 -
        (C395314 * C400824) / C393228 +
        (3 * (C394590 - (C395194 * C393226) / C393228)) / C400747;
    const double C394932 =
        -((C394606 * C400748) / p + (C395314 * C400826) / C393228);
    const double C394961 =
        -((C394606 * C400750) / p + (C395314 * C400827) / C393228);
    const double C400870 = C400770 / C393228;
    const double C400772 = C394696 * C393226;
    const double C394917 = C401027 - (C394696 * C400742) / p - C401028 -
                           (C395330 * C400824) / C393228;
    const double C394993 =
        (3 * (C394636 - (C395239 * C393226) / C393228)) / C400747 -
        ((C394696 * C400748) / p + (C395330 * C400826) / C393228);
    const double C395068 =
        -((C394696 * C400750) / p + (C395330 * C400827) / C393228);
    const double C400869 = C400769 / C393228;
    const double C400773 = C394758 * C393226;
    const double C394977 = C401029 - (C394758 * C400742) / p - C401030 -
                           (C395374 * C400824) / C393228;
    const double C395083 =
        -((C394758 * C400748) / p + (C395374 * C400826) / C393228);
    const double C400795 = C397119 * C393226;
    const double C397394 =
        (3 * (C397104 - (C397695 * C393226) / C393228)) / C400747 -
        ((C397119 * C400742) / p + (C397813 * C400824) / C393228);
    const double C397439 = C401025 - (C397119 * C400748) / p - C401026 -
                           (C397813 * C400826) / C393228;
    const double C397468 =
        -((C397119 * C400750) / p + (C397813 * C400827) / C393228);
    const double C400905 = C400794 / C393228;
    const double C400796 = C397220 * C393226;
    const double C397423 =
        -((C397220 * C400742) / p + (C397828 * C400824) / C393228);
    const double C397498 =
        C401027 - (C397220 * C400748) / p - C401028 -
        (C397828 * C400826) / C393228 +
        (3 * (C397148 - (C397741 * C393226) / C393228)) / C400747;
    const double C397571 =
        -((C397220 * C400750) / p + (C397828 * C400827) / C393228);
    const double C400904 = C400793 / C393228;
    const double C400797 = C397279 * C393226;
    const double C397483 =
        -((C397279 * C400742) / p + (C397871 * C400824) / C393228);
    const double C397587 = C401029 - (C397279 * C400748) / p - C401030 -
                           (C397871 * C400826) / C393228;
    const double C400814 = C399608 * C393226;
    const double C399882 =
        (3 * (C399593 - (C400183 * C393226) / C393228)) / C400747 -
        ((C399608 * C400742) / p + (C400301 * C400824) / C393228);
    const double C399926 =
        -((C399608 * C400748) / p + (C400301 * C400826) / C393228);
    const double C399956 = C401025 - (C399608 * C400750) / p - C401026 -
                           (C400301 * C400827) / C393228;
    const double C400925 = C400813 / C393228;
    const double C400815 = C399709 * C393226;
    const double C399911 =
        -((C399709 * C400742) / p + (C400316 * C400824) / C393228);
    const double C399986 =
        (3 * (C399637 - (C400229 * C393226) / C393228)) / C400747 -
        ((C399709 * C400748) / p + (C400316 * C400826) / C393228);
    const double C400060 = C401027 - (C399709 * C400750) / p - C401028 -
                           (C400316 * C400827) / C393228;
    const double C400924 = C400812 / C393228;
    const double C400816 = C399768 * C393226;
    const double C399971 =
        -((C399768 * C400742) / p + (C400359 * C400824) / C393228);
    const double C400075 =
        -((C399768 * C400748) / p + (C400359 * C400826) / C393228);
    const double C400752 = C393470 * C393226;
    const double C393501 =
        C400996 - (C393470 * C400742) / p - C400997 -
        (C394606 * C400824) / C393228 +
        (3 * (C393231 - (C394590 * C393226) / C393228)) / C400747;
    const double C393551 =
        -((C393470 * C400748) / p + (C394606 * C400826) / C393228);
    const double C393582 =
        -((C393470 * C400750) / p + (C394606 * C400827) / C393228);
    const double C400840 = C400760 / C393228;
    const double C400762 = C393686 * C393226;
    const double C393685 = C401002 - (C393686 * C400742) / p - C401003 -
                           (C394696 * C400824) / C393228;
    const double C393855 =
        -((C393686 * C400750) / p + (C394696 * C400827) / C393228);
    const double C400841 = C400761 / C393228;
    const double C400763 = C393747 * C393226;
    const double C393746 = C401006 - (C393747 * C400742) / p - C401007 -
                           (C394758 * C400824) / C393228;
    const double C393926 =
        -((C393747 * C400748) / p + (C394758 * C400826) / C393228);
    const double C400784 = C396005 * C393226;
    const double C396034 =
        (3 * (C395774 - (C397104 * C393226) / C393228)) / C400747 -
        ((C396005 * C400742) / p + (C397119 * C400824) / C393228);
    const double C396085 = C400996 - (C396005 * C400748) / p - C400997 -
                           (C397119 * C400826) / C393228;
    const double C396115 =
        -((C396005 * C400750) / p + (C397119 * C400827) / C393228);
    const double C400893 = C400785 / C393228;
    const double C400787 = C396218 * C393226;
    const double C396219 =
        -((C396218 * C400742) / p + (C397220 * C400824) / C393228);
    const double C396383 =
        -((C396218 * C400750) / p + (C397220 * C400827) / C393228);
    const double C400894 = C400786 / C393228;
    const double C400788 = C396279 * C393226;
    const double C396280 =
        -((C396279 * C400742) / p + (C397279 * C400824) / C393228);
    const double C396454 = C401006 - (C396279 * C400748) / p - C401007 -
                           (C397279 * C400826) / C393228;
    const double C400803 = C398501 * C393226;
    const double C398530 =
        (3 * (C398270 - (C399593 * C393226) / C393228)) / C400747 -
        ((C398501 * C400742) / p + (C399608 * C400824) / C393228);
    const double C398580 =
        -((C398501 * C400748) / p + (C399608 * C400826) / C393228);
    const double C398610 = C400996 - (C398501 * C400750) / p - C400997 -
                           (C399608 * C400827) / C393228;
    const double C400916 = C400804 / C393228;
    const double C400806 = C398711 * C393226;
    const double C398712 =
        -((C398711 * C400742) / p + (C399709 * C400824) / C393228);
    const double C398876 = C401002 - (C398711 * C400750) / p - C401003 -
                           (C399709 * C400827) / C393228;
    const double C400917 = C400805 / C393228;
    const double C400807 = C398772 * C393226;
    const double C398773 =
        -((C398772 * C400742) / p + (C399768 * C400824) / C393228);
    const double C398947 =
        -((C398772 * C400748) / p + (C399768 * C400826) / C393228);
    const double C374958 =
        C400944 - (C371140 * C400742) / p - C400945 -
        (C393470 * C400824) / C393228 +
        (3 * (C371158 - (C393231 * C393226) / C393228)) / C400747;
    const double C375052 =
        -((C371140 * C400748) / p + (C393470 * C400826) / C393228);
    const double C375069 =
        -((C371140 * C400750) / p + (C393470 * C400827) / C393228);
    const double C375421 =
        -((C371863 * C400748) / p + (C393655 * C400826) / C393228);
    const double C375899 = C400957 - (C372592 * C400742) / p - C400958 -
                           (C393686 * C400824) / C393228;
    const double C376208 =
        -((C372592 * C400750) / p + (C393686 * C400827) / C393228);
    const double C375931 = C400821 * C376404 - (C372836 * C400742) / p -
                           (C393774 * C400743) / C400823 -
                           (C393778 * C400824) / C393228;
    const double C376629 = C400963 - (C373565 * C400742) / p - C400964 -
                           (C393839 * C400824) / C393228;
    const double C376646 = C400965 - (C373805 * C400742) / p - C400966 -
                           (C393747 * C400824) / C393228;
    const double C376935 =
        -((C373805 * C400748) / p + (C393747 * C400826) / C393228);
    const double C382002 =
        (3 * (C378288 - (C395774 * C393226) / C393228)) / C400747 -
        ((C378271 * C400742) / p + (C396005 * C400824) / C393228);
    const double C382090 = C400944 - (C378271 * C400748) / p - C400945 -
                           (C396005 * C400826) / C393228;
    const double C382106 =
        -((C378271 * C400750) / p + (C396005 * C400827) / C393228);
    const double C382464 = C400821 * C375659 - (C378977 * C400748) / p -
                           (C396184 * C400743) / C400823 -
                           (C396189 * C400826) / C393228;
    const double C382934 =
        -((C379689 * C400742) / p + (C396218 * C400824) / C393228);
    const double C383245 =
        -((C379689 * C400750) / p + (C396218 * C400827) / C393228);
    const double C382964 =
        -((C379926 * C400742) / p + (C396309 * C400824) / C393228);
    const double C383660 =
        -((C380638 * C400742) / p + (C396368 * C400824) / C393228);
    const double C383676 =
        -((C380871 * C400742) / p + (C396279 * C400824) / C393228);
    const double C383968 = C400965 - (C380871 * C400748) / p - C400966 -
                           (C396279 * C400826) / C393228;
    const double C389015 =
        (3 * (C385301 - (C398270 * C393226) / C393228)) / C400747 -
        ((C385284 * C400742) / p + (C398501 * C400824) / C393228);
    const double C389103 =
        -((C385284 * C400748) / p + (C398501 * C400826) / C393228);
    const double C389119 = C400944 - (C385284 * C400750) / p - C400945 -
                           (C398501 * C400827) / C393228;
    const double C389471 =
        -((C385990 * C400748) / p + (C398682 * C400826) / C393228);
    const double C389936 =
        -((C386702 * C400742) / p + (C398711 * C400824) / C393228);
    const double C390243 = C400957 - (C386702 * C400750) / p - C400958 -
                           (C398711 * C400827) / C393228;
    const double C389966 =
        -((C386939 * C400742) / p + (C398802 * C400824) / C393228);
    const double C390656 =
        -((C387651 * C400742) / p + (C398861 * C400824) / C393228);
    const double C390672 =
        -((C387884 * C400742) / p + (C398772 * C400824) / C393228);
    const double C390960 =
        -((C387884 * C400748) / p + (C398772 * C400826) / C393228);
    const double C401031 = C394666 - C400885;
    const double C401066 = C397177 - C400910;
    const double C401087 = C399666 - C400930;
    const double C400873 = C400771 / C393228;
    const double C401005 = C393292 - C400870;
    const double C400874 = C400772 / C393228;
    const double C401004 = C393351 - C400869;
    const double C400875 = C400773 / C393228;
    const double C400906 = C400795 / C393228;
    const double C401061 = C395832 - C400905;
    const double C400907 = C400796 / C393228;
    const double C401060 = C395890 - C400904;
    const double C400908 = C400797 / C393228;
    const double C400926 = C400814 / C393228;
    const double C401082 = C398328 - C400925;
    const double C400927 = C400815 / C393228;
    const double C401081 = C398386 - C400924;
    const double C400928 = C400816 / C393228;
    const double C400835 = C400752 / C393228;
    const double C400764 = C393501 * C393226;
    const double C394102 =
        -((C393501 * C400748) / p + (C394887 * C400826) / C393228);
    const double C394148 =
        -((C393501 * C400750) / p + (C394887 * C400827) / C393228);
    const double C400953 = C372139 - C400840;
    const double C400842 = C400762 / C393228;
    const double C400954 = C373112 - C400841;
    const double C400843 = C400763 / C393228;
    const double C400892 = C400784 / C393228;
    const double C400789 = C396034 * C393226;
    const double C396626 = C401008 - (C396034 * C400748) / p - C401009 -
                           (C397394 * C400826) / C393228;
    const double C396671 =
        -((C396034 * C400750) / p + (C397394 * C400827) / C393228);
    const double C401046 = C379245 - C400893;
    const double C400896 = C400787 / C393228;
    const double C401047 = C380194 - C400894;
    const double C400897 = C400788 / C393228;
    const double C400915 = C400803 / C393228;
    const double C400808 = C398530 * C393226;
    const double C399118 =
        -((C398530 * C400748) / p + (C399882 * C400826) / C393228);
    const double C399164 = C401008 - (C398530 * C400750) / p - C401009 -
                           (C399882 * C400827) / C393228;
    const double C401073 = C386258 - C400916;
    const double C400918 = C400806 / C393228;
    const double C401074 = C387207 - C400917;
    const double C400919 = C400807 / C393228;
    const double C375319 =
        -((C374958 * C400748) / p + (C393501 * C400826) / C393228);
    const double C375377 =
        -((C374958 * C400750) / p + (C393501 * C400827) / C393228);
    const double C375406 =
        -((C375069 * C400748) / p + (C393582 * C400826) / C393228);
    const double C376179 = C400961 - (C376208 * C400742) / p - C400962 -
                           (C393855 * C400824) / C393228;
    const double C376920 = C400969 - (C376935 * C400742) / p - C400970 -
                           (C393926 * C400824) / C393228;
    const double C382360 = C400948 - (C382002 * C400748) / p - C400949 -
                           (C396034 * C400826) / C393228;
    const double C382420 =
        -((C382002 * C400750) / p + (C396034 * C400827) / C393228);
    const double C382449 = C401048 - (C382106 * C400748) / p - C401049 -
                           (C396115 * C400826) / C393228;
    const double C383216 =
        -((C383245 * C400742) / p + (C396383 * C400824) / C393228);
    const double C383953 =
        -((C383968 * C400742) / p + (C396454 * C400824) / C393228);
    const double C389369 =
        -((C389015 * C400748) / p + (C398530 * C400826) / C393228);
    const double C389427 = C400948 - (C389015 * C400750) / p - C400949 -
                           (C398530 * C400827) / C393228;
    const double C389456 =
        -((C389119 * C400748) / p + (C398610 * C400826) / C393228);
    const double C390214 =
        -((C390243 * C400742) / p + (C398876 * C400824) / C393228);
    const double C390945 =
        -((C390960 * C400742) / p + (C398947 * C400824) / C393228);
    const double C395009 = C401031 / C400747 - ((C394815 * C400748) / p +
                                                (C395403 * C400826) / C393228);
    const double C395025 =
        (3 * C401031) / C400747 -
        ((C394758 * C400750) / p + (C395374 * C400827) / C393228);
    const double C397513 = C400821 * C397318 - (C397323 * C400748) / p -
                           (C397896 * C400743) / C400823 -
                           (C397901 * C400826) / C393228 + C401066 / C400747;
    const double C397528 =
        (3 * C401066) / C400747 -
        ((C397279 * C400750) / p + (C397871 * C400827) / C393228);
    const double C400001 = C401087 / C400747 - ((C399811 * C400748) / p +
                                                (C400388 * C400826) / C393228);
    const double C400016 = C401029 - (C399768 * C400750) / p - C401030 -
                           (C400359 * C400827) / C393228 +
                           (3 * C401087) / C400747;
    const double C401010 = C393470 - C400873;
    const double C393716 = C400821 * C393563 - (C393567 * C400742) / p -
                           (C394738 * C400743) / C400823 -
                           (C394742 * C400824) / C393228 + C401005 / C400747;
    const double C393794 =
        (3 * C401005) / C400747 -
        ((C393686 * C400748) / p + (C394696 * C400826) / C393228);
    const double C401011 = C393686 - C400874;
    const double C401103 = C401004 / C400747;
    const double C393972 =
        (3 * C401004) / C400747 -
        ((C393747 * C400750) / p + (C394758 * C400827) / C393228);
    const double C401012 = C393747 - C400875;
    const double C401062 = C396005 - C400906;
    const double C396250 = C401061 / C400747 - ((C396100 * C400742) / p +
                                                (C397250 * C400824) / C393228);
    const double C396324 = C401002 - (C396218 * C400748) / p - C401003 -
                           (C397220 * C400826) / C393228 +
                           (3 * C401061) / C400747;
    const double C401063 = C396218 - C400907;
    const double C401129 = C401060 / C400747;
    const double C396497 =
        (3 * C401060) / C400747 -
        ((C396279 * C400750) / p + (C397279 * C400827) / C393228);
    const double C401064 = C396279 - C400908;
    const double C401083 = C398501 - C400926;
    const double C398743 = C401082 / C400747 - ((C398595 * C400742) / p +
                                                (C399739 * C400824) / C393228);
    const double C398817 =
        (3 * C401082) / C400747 -
        ((C398711 * C400748) / p + (C399709 * C400826) / C393228);
    const double C401084 = C398711 - C400927;
    const double C401145 = C401081 / C400747;
    const double C398990 = C401006 - (C398772 * C400750) / p - C401007 -
                           (C399768 * C400827) / C393228 +
                           (3 * C401081) / C400747;
    const double C401085 = C398772 - C400928;
    const double C400950 = C371140 - C400835;
    const double C400852 = C400764 / C393228;
    const double C375157 = C400821 * C375850 - (C372122 * C400742) / p -
                           (C393563 * C400743) / C400823 -
                           (C393567 * C400824) / C393228 + C400953 / C400747;
    const double C376003 =
        (3 * C400953) / C400747 -
        ((C372592 * C400748) / p + (C393686 * C400826) / C393228);
    const double C400955 = C372592 - C400842;
    const double C401094 = C400954 / C400747;
    const double C376833 =
        (3 * C400954) / C400747 -
        ((C373805 * C400750) / p + (C393747 * C400827) / C393228);
    const double C400956 = C373805 - C400843;
    const double C401045 = C378271 - C400892;
    const double C400898 = C400789 / C393228;
    const double C382196 = C401046 / C400747 - ((C379229 * C400742) / p +
                                                (C396100 * C400824) / C393228);
    const double C383036 = C400957 - (C379689 * C400748) / p - C400958 -
                           (C396218 * C400826) / C393228 +
                           (3 * C401046) / C400747;
    const double C401050 = C379689 - C400896;
    const double C401122 = C401047 / C400747;
    const double C383865 =
        (3 * C401047) / C400747 -
        ((C380871 * C400750) / p + (C396279 * C400827) / C393228);
    const double C401051 = C380871 - C400897;
    const double C401072 = C385284 - C400915;
    const double C400920 = C400808 / C393228;
    const double C389207 = C401073 / C400747 - ((C386242 * C400742) / p +
                                                (C398595 * C400824) / C393228);
    const double C390038 =
        (3 * C401073) / C400747 -
        ((C386702 * C400748) / p + (C398711 * C400826) / C393228);
    const double C401075 = C386702 - C400918;
    const double C401138 = C401074 / C400747;
    const double C390858 = C400965 - (C387884 * C400750) / p - C400966 -
                           (C398772 * C400827) / C393228 +
                           (3 * C401074) / C400747;
    const double C401076 = C387884 - C400919;
    const double C377530 =
        -((C375377 * C400748) / p + (C394148 * C400826) / C393228);
    const double C384555 = C401053 - (C382420 * C400748) / p - C401054 -
                           (C396671 * C400826) / C393228;
    const double C391542 =
        -((C389427 * C400748) / p + (C399164 * C400826) / C393228);
    const double C401105 = C401010 / C400747;
    const double C394059 = C401008 - (C393501 * C400742) / p - C401009 -
                           (C394887 * C400824) / C393228 + (2 * C401010) / p;
    const double C400765 = C393794 * C393226;
    const double C394209 = C401013 - (C393794 * C400742) / p - C401014 -
                           (C394993 * C400824) / C393228;
    const double C394301 =
        -((C393794 * C400750) / p + (C394993 * C400827) / C393228);
    const double C401104 = C401011 / C400747;
    const double C394285 = (2 * C401011) / p - ((C393794 * C400748) / p +
                                                (C394993 * C400826) / C393228);
    const double C393701 = C400821 * C393594 - (C393598 * C400742) / p -
                           (C394722 * C400743) / C400823 -
                           (C394726 * C400824) / C393228 + C401103;
    const double C393824 =
        C401103 - ((C393839 * C400748) / p + (C394815 * C400826) / C393228);
    const double C400766 = C393972 * C393226;
    const double C394269 = C401015 - (C393972 * C400742) / p - C401016 -
                           (C395025 * C400824) / C393228;
    const double C394404 =
        -((C393972 * C400748) / p + (C395025 * C400826) / C393228);
    const double C401106 = C401012 / C400747;
    const double C394435 = (2 * C401012) / p - ((C393972 * C400750) / p +
                                                (C395025 * C400827) / C393228);
    const double C401131 = C401062 / C400747;
    const double C396582 = (2 * C401062) / p - ((C396034 * C400742) / p +
                                                (C397394 * C400824) / C393228);
    const double C400790 = C396324 * C393226;
    const double C396732 =
        -((C396324 * C400742) / p + (C397498 * C400824) / C393228);
    const double C396820 =
        -((C396324 * C400750) / p + (C397498 * C400827) / C393228);
    const double C401130 = C401063 / C400747;
    const double C396805 = C401013 - (C396324 * C400748) / p - C401014 -
                           (C397498 * C400826) / C393228 + (2 * C401063) / p;
    const double C396235 =
        C401129 - ((C396130 * C400742) / p + (C397235 * C400824) / C393228);
    const double C396353 = C400821 * C393938 - (C396368 * C400748) / p -
                           (C397318 * C400743) / C400823 -
                           (C397323 * C400826) / C393228 + C401129;
    const double C400791 = C396497 * C393226;
    const double C396790 =
        -((C396497 * C400742) / p + (C397528 * C400824) / C393228);
    const double C396921 = C401015 - (C396497 * C400748) / p - C401016 -
                           (C397528 * C400826) / C393228;
    const double C401132 = C401064 / C400747;
    const double C396950 = (2 * C401064) / p - ((C396497 * C400750) / p +
                                                (C397528 * C400827) / C393228);
    const double C401147 = C401083 / C400747;
    const double C399075 = (2 * C401083) / p - ((C398530 * C400742) / p +
                                                (C399882 * C400824) / C393228);
    const double C400809 = C398817 * C393226;
    const double C399223 =
        -((C398817 * C400742) / p + (C399986 * C400824) / C393228);
    const double C399311 = C401013 - (C398817 * C400750) / p - C401014 -
                           (C399986 * C400827) / C393228;
    const double C401146 = C401084 / C400747;
    const double C399296 = (2 * C401084) / p - ((C398817 * C400748) / p +
                                                (C399986 * C400826) / C393228);
    const double C398727 =
        C401145 - ((C398625 * C400742) / p + (C399724 * C400824) / C393228);
    const double C398846 =
        C401145 - ((C398861 * C400748) / p + (C399811 * C400826) / C393228);
    const double C400810 = C398990 * C393226;
    const double C399281 =
        -((C398990 * C400742) / p + (C400016 * C400824) / C393228);
    const double C399412 =
        -((C398990 * C400748) / p + (C400016 * C400826) / C393228);
    const double C401148 = C401085 / C400747;
    const double C399441 = C401015 - (C398990 * C400750) / p - C401016 -
                           (C400016 * C400827) / C393228 + (2 * C401085) / p;
    const double C401093 = C400950 / C400747;
    const double C375021 = C400948 - (C374958 * C400742) / p - C400949 -
                           (C393501 * C400824) / C393228 + (2 * C400950) / p;
    const double C400973 = C374958 - C400852;
    const double C375647 =
        -((C375157 * C400750) / p + (C393716 * C400827) / C393228);
    const double C375961 = C400959 - (C376003 * C400742) / p - C400960 -
                           (C393794 * C400824) / C393228;
    const double C376392 =
        -((C376003 * C400750) / p + (C393794 * C400827) / C393228);
    const double C401095 = C400955 / C400747;
    const double C376287 = (2 * C400955) / p - ((C376003 * C400748) / p +
                                                (C393794 * C400826) / C393228);
    const double C375274 = C400821 * C376580 - (C373095 * C400742) / p -
                           (C393594 * C400743) / C400823 -
                           (C393598 * C400824) / C393228 + C401094;
    const double C376105 =
        C401094 - ((C373565 * C400748) / p + (C393839 * C400826) / C393228);
    const double C376791 = C400967 - (C376833 * C400742) / p - C400968 -
                           (C393972 * C400824) / C393228;
    const double C377026 =
        -((C376833 * C400748) / p + (C393972 * C400826) / C393228);
    const double C401096 = C400956 / C400747;
    const double C377161 = (2 * C400956) / p - ((C376833 * C400750) / p +
                                                (C393972 * C400827) / C393228);
    const double C401121 = C401045 / C400747;
    const double C382061 = (2 * C401045) / p - ((C382002 * C400742) / p +
                                                (C396034 * C400824) / C393228);
    const double C401052 = C382002 - C400898;
    const double C382688 =
        -((C382196 * C400750) / p + (C396250 * C400827) / C393228);
    const double C382994 =
        -((C383036 * C400742) / p + (C396324 * C400824) / C393228);
    const double C383428 =
        -((C383036 * C400750) / p + (C396324 * C400827) / C393228);
    const double C401123 = C401050 / C400747;
    const double C383320 = C400959 - (C383036 * C400748) / p - C400960 -
                           (C396324 * C400826) / C393228 + (2 * C401050) / p;
    const double C382315 =
        C401122 - ((C380178 * C400742) / p + (C396130 * C400824) / C393228);
    const double C383141 = C400963 - (C380638 * C400748) / p - C400964 -
                           (C396368 * C400826) / C393228 + C401122;
    const double C383823 =
        -((C383865 * C400742) / p + (C396497 * C400824) / C393228);
    const double C384057 = C400967 - (C383865 * C400748) / p - C400968 -
                           (C396497 * C400826) / C393228;
    const double C401124 = C401051 / C400747;
    const double C384191 = (2 * C401051) / p - ((C383865 * C400750) / p +
                                                (C396497 * C400827) / C393228);
    const double C401137 = C401072 / C400747;
    const double C389074 = (2 * C401072) / p - ((C389015 * C400742) / p +
                                                (C398530 * C400824) / C393228);
    const double C401077 = C389015 - C400920;
    const double C389692 = C400821 * C375880 - (C389207 * C400750) / p -
                           (C398737 * C400743) / C400823 -
                           (C398743 * C400827) / C393228;
    const double C389996 =
        -((C390038 * C400742) / p + (C398817 * C400824) / C393228);
    const double C390425 = C400959 - (C390038 * C400750) / p - C400960 -
                           (C398817 * C400827) / C393228;
    const double C401139 = C401075 / C400747;
    const double C390318 = (2 * C401075) / p - ((C390038 * C400748) / p +
                                                (C398817 * C400826) / C393228);
    const double C389324 =
        C401138 - ((C387191 * C400742) / p + (C398625 * C400824) / C393228);
    const double C390140 =
        C401138 - ((C387651 * C400748) / p + (C398861 * C400826) / C393228);
    const double C390816 =
        -((C390858 * C400742) / p + (C398990 * C400824) / C393228);
    const double C391048 =
        -((C390858 * C400748) / p + (C398990 * C400826) / C393228);
    const double C401140 = C401076 / C400747;
    const double C391181 = C400967 - (C390858 * C400750) / p - C400968 -
                           (C398990 * C400827) / C393228 + (2 * C401076) / p;
    const double C394133 =
        C401105 - ((C393551 * C400748) / p + (C394932 * C400826) / C393228);
    const double C394163 =
        C401105 - ((C393582 * C400750) / p + (C394961 * C400827) / C393228);
    const double C400855 = C400765 / C393228;
    const double C394118 = C400821 * C393681 - (C393685 * C400742) / p -
                           (C394913 * C400743) / C400823 -
                           (C394917 * C400824) / C393228 + C401104;
    const double C394317 =
        C401104 - ((C393855 * C400750) / p + (C395068 * C400827) / C393228);
    const double C394239 = C400821 * C393820 - (C393824 * C400742) / p -
                           (C395005 * C400743) / C400823 -
                           (C395009 * C400824) / C393228;
    const double C400856 = C400766 / C393228;
    const double C394179 = C400821 * C393742 - (C393746 * C400742) / p -
                           (C394973 * C400743) / C400823 -
                           (C394977 * C400824) / C393228 + C401106;
    const double C394333 =
        C401106 - ((C393926 * C400748) / p + (C395083 * C400826) / C393228);
    const double C396656 = C400821 * C396080 - (C396085 * C400748) / p -
                           (C397434 * C400743) / C400823 -
                           (C397439 * C400826) / C393228 + C401131;
    const double C396687 =
        C401131 - ((C396115 * C400750) / p + (C397468 * C400827) / C393228);
    const double C400900 = C400790 / C393228;
    const double C396641 =
        C401130 - ((C396219 * C400742) / p + (C397423 * C400824) / C393228);
    const double C396835 =
        C401130 - ((C396383 * C400750) / p + (C397571 * C400827) / C393228);
    const double C396761 =
        -((C396353 * C400742) / p + (C397513 * C400824) / C393228);
    const double C400901 = C400791 / C393228;
    const double C396702 =
        C401132 - ((C396280 * C400742) / p + (C397483 * C400824) / C393228);
    const double C396850 = C400821 * C393998 - (C396454 * C400748) / p -
                           (C397582 * C400743) / C400823 -
                           (C397587 * C400826) / C393228 + C401132;
    const double C399149 =
        C401147 - ((C398580 * C400748) / p + (C399926 * C400826) / C393228);
    const double C399179 = C400821 * C396169 - (C398610 * C400750) / p -
                           (C399950 * C400743) / C400823 -
                           (C399956 * C400827) / C393228 + C401147;
    const double C400921 = C400809 / C393228;
    const double C399133 =
        C401146 - ((C398712 * C400742) / p + (C399911 * C400824) / C393228);
    const double C399326 = C400821 * C393851 - (C398876 * C400750) / p -
                           (C400054 * C400743) / C400823 -
                           (C400060 * C400827) / C393228 + C401146;
    const double C399252 =
        -((C398846 * C400742) / p + (C400001 * C400824) / C393228);
    const double C400922 = C400810 / C393228;
    const double C399194 =
        C401148 - ((C398773 * C400742) / p + (C399971 * C400824) / C393228);
    const double C399341 =
        C401148 - ((C398947 * C400748) / p + (C400075 * C400826) / C393228);
    const double C375128 =
        C401093 - ((C375052 * C400748) / p + (C393551 * C400826) / C393228);
    const double C375245 =
        C401093 - ((C375069 * C400750) / p + (C393582 * C400827) / C393228);
    const double C377409 =
        -((C375021 * C400748) / p + (C394059 * C400826) / C393228);
    const double C377425 =
        -((C375021 * C400750) / p + (C394059 * C400827) / C393228);
    const double C401097 = C400973 / C400747;
    const double C377378 = C400971 - (C375021 * C400742) / p - C400972 -
                           (C394059 * C400824) / C393228 +
                           (5 * C400973) / C400747;
    const double C377752 = C400982 - (C376392 * C400742) / p - C400983 -
                           (C394301 * C400824) / C393228;
    const double C375514 = C400821 * C376235 - (C375899 * C400742) / p -
                           (C393681 * C400743) / C400823 -
                           (C393685 * C400824) / C393228 + C401095;
    const double C376332 =
        C401095 - ((C376208 * C400750) / p + (C393855 * C400827) / C393228);
    const double C377723 = C400980 - (C376287 * C400742) / p - C400981 -
                           (C394285 * C400824) / C393228;
    const double C377886 =
        -((C376287 * C400750) / p + (C394285 * C400827) / C393228);
    const double C375559 =
        -((C375274 * C400748) / p + (C393701 * C400826) / C393228);
    const double C376076 = C400821 * C377942 - (C376105 * C400742) / p -
                           (C393820 * C400743) / C400823 -
                           (C393824 * C400824) / C393228;
    const double C378062 = C400986 - (C377026 * C400742) / p - C400987 -
                           (C394404 * C400824) / C393228;
    const double C375767 = C400821 * C377082 - (C376646 * C400742) / p -
                           (C393742 * C400743) / C400823 -
                           (C393746 * C400824) / C393228 + C401096;
    const double C376511 =
        C401096 - ((C376935 * C400748) / p + (C393926 * C400826) / C393228);
    const double C378077 = C400988 - (C377161 * C400742) / p - C400989 -
                           (C394435 * C400824) / C393228;
    const double C378150 =
        -((C377161 * C400748) / p + (C394435 * C400826) / C393228);
    const double C382167 = C400821 * C375464 - (C382090 * C400748) / p -
                           (C396080 * C400743) / C400823 -
                           (C396085 * C400826) / C393228 + C401121;
    const double C382286 =
        C401121 - ((C382106 * C400750) / p + (C396115 * C400827) / C393228);
    const double C384435 = C400971 - (C382061 * C400748) / p - C400972 -
                           (C396582 * C400826) / C393228;
    const double C384450 =
        -((C382061 * C400750) / p + (C396582 * C400827) / C393228);
    const double C401125 = C401052 / C400747;
    const double C384406 =
        (5 * C401052) / C400747 -
        ((C382061 * C400742) / p + (C396582 * C400824) / C393228);
    const double C384772 =
        -((C383428 * C400742) / p + (C396820 * C400824) / C393228);
    const double C382552 =
        C401123 - ((C382934 * C400742) / p + (C396219 * C400824) / C393228);
    const double C383367 =
        C401123 - ((C383245 * C400750) / p + (C396383 * C400827) / C393228);
    const double C384743 =
        -((C383320 * C400742) / p + (C396805 * C400824) / C393228);
    const double C384904 =
        -((C383320 * C400750) / p + (C396805 * C400827) / C393228);
    const double C382599 = C400821 * C376610 - (C382315 * C400748) / p -
                           (C396230 * C400743) / C400823 -
                           (C396235 * C400826) / C393228;
    const double C383112 =
        -((C383141 * C400742) / p + (C396353 * C400824) / C393228);
    const double C385077 =
        -((C384057 * C400742) / p + (C396921 * C400824) / C393228);
    const double C382805 =
        C401124 - ((C383676 * C400742) / p + (C396280 * C400824) / C393228);
    const double C383545 = C400969 - (C383968 * C400748) / p - C400970 -
                           (C396454 * C400826) / C393228 + C401124;
    const double C385092 =
        -((C384191 * C400742) / p + (C396950 * C400824) / C393228);
    const double C385164 = C400988 - (C384191 * C400748) / p - C400989 -
                           (C396950 * C400826) / C393228;
    const double C389178 =
        C401137 - ((C389103 * C400748) / p + (C398580 * C400826) / C393228);
    const double C389295 = C401048 - (C389119 * C400750) / p - C401049 -
                           (C398610 * C400827) / C393228 + C401137;
    const double C391422 =
        -((C389074 * C400748) / p + (C399075 * C400826) / C393228);
    const double C391437 = C400971 - (C389074 * C400750) / p - C400972 -
                           (C399075 * C400827) / C393228;
    const double C401141 = C401077 / C400747;
    const double C391393 =
        (5 * C401077) / C400747 -
        ((C389074 * C400742) / p + (C399075 * C400824) / C393228);
    const double C391759 =
        -((C390425 * C400742) / p + (C399311 * C400824) / C393228);
    const double C389559 =
        C401139 - ((C389936 * C400742) / p + (C398712 * C400824) / C393228);
    const double C390363 = C400961 - (C390243 * C400750) / p - C400962 -
                           (C398876 * C400827) / C393228 + C401139;
    const double C391730 =
        -((C390318 * C400742) / p + (C399296 * C400824) / C393228);
    const double C391889 = C400980 - (C390318 * C400750) / p - C400981 -
                           (C399296 * C400827) / C393228;
    const double C389604 =
        -((C389324 * C400748) / p + (C398727 * C400826) / C393228);
    const double C390111 =
        -((C390140 * C400742) / p + (C398846 * C400824) / C393228);
    const double C392061 =
        -((C391048 * C400742) / p + (C399412 * C400824) / C393228);
    const double C389808 =
        C401140 - ((C390672 * C400742) / p + (C398773 * C400824) / C393228);
    const double C390541 =
        C401140 - ((C390960 * C400748) / p + (C398947 * C400826) / C393228);
    const double C392076 =
        -((C391181 * C400742) / p + (C399441 * C400824) / C393228);
    const double C392147 =
        -((C391181 * C400748) / p + (C399441 * C400826) / C393228);
    const double C400978 = C376003 - C400855;
    const double C400979 = C376833 - C400856;
    const double C401055 = C383036 - C400900;
    const double C401056 = C383865 - C400901;
    const double C401078 = C390038 - C400921;
    const double C401079 = C390858 - C400922;
    const double C377470 =
        -((C375128 * C400750) / p + (C394133 * C400827) / C393228);
    const double C377500 =
        -((C375245 * C400748) / p + (C394163 * C400826) / C393228);
    const double C377440 =
        C401097 - ((C375319 * C400748) / p + (C394102 * C400826) / C393228);
    const double C377485 =
        C401097 - ((C375377 * C400750) / p + (C394148 * C400827) / C393228);
    const double C377455 = C400974 - (C375514 * C400742) / p - C400975 -
                           (C394118 * C400824) / C393228 +
                           (C375899 - (C393685 * C393226) / C393228) / p;
    const double C377590 =
        -((C375514 * C400750) / p + (C394118 * C400827) / C393228);
    const double C377767 = C400821 * C384987 - (C376332 * C400742) / p -
                           (C394313 * C400743) / C400823 -
                           (C394317 * C400824) / C393228;
    const double C377605 = C400821 * C377957 - (C376076 * C400742) / p -
                           (C394235 * C400743) / C400823 -
                           (C394239 * C400824) / C393228 +
                           (C376105 - (C393824 * C393226) / C393228) / C400747;
    const double C377515 = C400976 - (C375767 * C400742) / p - C400977 -
                           (C394179 * C400824) / C393228 +
                           (C376646 - (C393746 * C393226) / C393228) / p;
    const double C377620 =
        -((C375767 * C400748) / p + (C394179 * C400826) / C393228);
    const double C377782 = C400984 - (C376511 * C400742) / p - C400985 -
                           (C394333 * C400824) / C393228;
    const double C377916 =
        (C376935 - (C393926 * C393226) / C393228) / p -
        ((C376511 * C400748) / p + (C394333 * C400826) / C393228);
    const double C384495 =
        -((C382167 * C400750) / p + (C396656 * C400827) / C393228);
    const double C384525 = C400821 * C377646 - (C382286 * C400748) / p -
                           (C396682 * C400743) / C400823 -
                           (C396687 * C400826) / C393228;
    const double C384465 = C400821 * C377405 - (C382360 * C400748) / p -
                           (C396621 * C400743) / C400823 -
                           (C396626 * C400826) / C393228 + C401125;
    const double C384510 =
        C401125 - ((C382420 * C400750) / p + (C396671 * C400827) / C393228);
    const double C384480 =
        (C382934 - (C396219 * C393226) / C393228) / p -
        ((C382552 * C400742) / p + (C396641 * C400824) / C393228);
    const double C384613 =
        -((C382552 * C400750) / p + (C396641 * C400827) / C393228);
    const double C384787 =
        -((C383367 * C400742) / p + (C396835 * C400824) / C393228);
    const double C384628 =
        (C383141 - (C396353 * C393226) / C393228) / C400747 -
        ((C383112 * C400742) / p + (C396761 * C400824) / C393228);
    const double C384540 =
        (C383676 - (C396280 * C393226) / C393228) / p -
        ((C382805 * C400742) / p + (C396702 * C400824) / C393228);
    const double C384643 = C400976 - (C382805 * C400748) / p - C400977 -
                           (C396702 * C400826) / C393228;
    const double C384802 =
        -((C383545 * C400742) / p + (C396850 * C400824) / C393228);
    const double C384934 = C400984 - (C383545 * C400748) / p - C400985 -
                           (C396850 * C400826) / C393228 +
                           (C383968 - (C396454 * C393226) / C393228) / p;
    const double C391482 = C400821 * C377542 - (C389178 * C400750) / p -
                           (C399143 * C400743) / C400823 -
                           (C399149 * C400827) / C393228;
    const double C391512 =
        -((C389295 * C400748) / p + (C399179 * C400826) / C393228);
    const double C391452 =
        C401141 - ((C389369 * C400748) / p + (C399118 * C400826) / C393228);
    const double C391497 = C401053 - (C389427 * C400750) / p - C401054 -
                           (C399164 * C400827) / C393228 + C401141;
    const double C391467 =
        (C389936 - (C398712 * C393226) / C393228) / p -
        ((C389559 * C400742) / p + (C399133 * C400824) / C393228);
    const double C391600 = C400974 - (C389559 * C400750) / p - C400975 -
                           (C399133 * C400827) / C393228;
    const double C391774 =
        -((C390363 * C400742) / p + (C399326 * C400824) / C393228);
    const double C391615 =
        (C390140 - (C398846 * C393226) / C393228) / C400747 -
        ((C390111 * C400742) / p + (C399252 * C400824) / C393228);
    const double C391527 =
        (C390672 - (C398773 * C393226) / C393228) / p -
        ((C389808 * C400742) / p + (C399194 * C400824) / C393228);
    const double C391630 =
        -((C389808 * C400748) / p + (C399194 * C400826) / C393228);
    const double C391789 =
        -((C390541 * C400742) / p + (C399341 * C400824) / C393228);
    const double C391919 =
        (C390960 - (C398947 * C393226) / C393228) / p -
        ((C390541 * C400748) / p + (C399341 * C400826) / C393228);
    const double C401098 = C400978 / C400747;
    const double C377871 =
        (5 * C400978) / C400747 -
        ((C376287 * C400748) / p + (C394285 * C400826) / C393228);
    const double C401099 = C400979 / C400747;
    const double C378223 =
        (5 * C400979) / C400747 -
        ((C377161 * C400750) / p + (C394435 * C400827) / C393228);
    const double C401126 = C401055 / C400747;
    const double C384888 = C400980 - (C383320 * C400748) / p - C400981 -
                           (C396805 * C400826) / C393228 +
                           (5 * C401055) / C400747;
    const double C401127 = C401056 / C400747;
    const double C385236 =
        (5 * C401056) / C400747 -
        ((C384191 * C400750) / p + (C396950 * C400827) / C393228);
    const double C401142 = C401078 / C400747;
    const double C391874 =
        (5 * C401078) / C400747 -
        ((C390318 * C400748) / p + (C399296 * C400826) / C393228);
    const double C401143 = C401079 / C400747;
    const double C392219 = C400988 - (C391181 * C400750) / p - C400989 -
                           (C399441 * C400827) / C393228 +
                           (5 * C401079) / C400747;
    const double C377575 = C400821 * C377823 - (C375961 * C400742) / p -
                           (C394205 * C400743) / C400823 -
                           (C394209 * C400824) / C393228 + C401098;
    const double C377901 =
        C401098 - ((C376392 * C400750) / p + (C394301 * C400827) / C393228);
    const double C377678 = C400821 * C378177 - (C376791 * C400742) / p -
                           (C394265 * C400743) / C400823 -
                           (C394269 * C400824) / C393228 + C401099;
    const double C377989 =
        C401099 - ((C377026 * C400748) / p + (C394404 * C400826) / C393228);
    const double C384598 =
        C401126 - ((C382994 * C400742) / p + (C396732 * C400824) / C393228);
    const double C384919 =
        C401126 - ((C383428 * C400750) / p + (C396820 * C400827) / C393228);
    const double C384700 =
        C401127 - ((C383823 * C400742) / p + (C396790 * C400824) / C393228);
    const double C385006 = C400986 - (C384057 * C400748) / p - C400987 -
                           (C396921 * C400826) / C393228 + C401127;
    const double C391585 =
        C401142 - ((C389996 * C400742) / p + (C399223 * C400824) / C393228);
    const double C391904 = C400982 - (C390425 * C400750) / p - C400983 -
                           (C399311 * C400827) / C393228 + C401142;
    const double C391687 =
        C401143 - ((C390816 * C400742) / p + (C399281 * C400824) / C393228);
    const double C391990 =
        C401143 - ((C391048 * C400748) / p + (C399412 * C400826) / C393228);
    vrx[0] = C371140;
    vrx[1] = C371158;
    vrx[2] = C371616;
    vrx[3] = C371863;
    vrx[4] = C372122;
    vrx[5] = C372139;
    vrx[6] = C372592;
    vrx[7] = C372836;
    vrx[8] = C373095;
    vrx[9] = C373112;
    vrx[10] = C373565;
    vrx[11] = C373805;
    vrx[12] = C374046;
    vrx[13] = C374279;
    vrx[14] = C374514;
    vrx[15] = C374744;
    vrx[16] = C374958;
    vrx[17] = C374990;
    vrx[18] = C375021;
    vrx[19] = C375036;
    vrx[20] = C375052;
    vrx[21] = C375069;
    vrx[22] = C375128;
    vrx[23] = C375157;
    vrx[24] = C375245;
    vrx[25] = C375274;
    vrx[26] = C375319;
    vrx[27] = C375377;
    vrx[28] = C375406;
    vrx[29] = C375421;
    vrx[30] = C375452;
    vrx[31] = C375514;
    vrx[32] = C375559;
    vrx[33] = C375647;
    vrx[34] = C375678;
    vrx[35] = C375767;
    vrx[36] = C375899;
    vrx[37] = C375931;
    vrx[38] = C375961;
    vrx[39] = C376003;
    vrx[40] = C376076;
    vrx[41] = C376105;
    vrx[42] = C376179;
    vrx[43] = C376208;
    vrx[44] = C376287;
    vrx[45] = C376332;
    vrx[46] = C376392;
    vrx[47] = C376511;
    vrx[48] = C376629;
    vrx[49] = C376646;
    vrx[50] = C376791;
    vrx[51] = C376833;
    vrx[52] = C376920;
    vrx[53] = C376935;
    vrx[54] = C377026;
    vrx[55] = C377161;
    vrx[56] = C377378;
    vrx[57] = C377409;
    vrx[58] = C377425;
    vrx[59] = C377440;
    vrx[60] = C377455;
    vrx[61] = C377470;
    vrx[62] = C377485;
    vrx[63] = C377500;
    vrx[64] = C377515;
    vrx[65] = C377530;
    vrx[66] = C377575;
    vrx[67] = C377590;
    vrx[68] = C377605;
    vrx[69] = C377620;
    vrx[70] = C377678;
    vrx[71] = C377723;
    vrx[72] = C377752;
    vrx[73] = C377767;
    vrx[74] = C377782;
    vrx[75] = C377871;
    vrx[76] = C377886;
    vrx[77] = C377901;
    vrx[78] = C377916;
    vrx[79] = C377989;
    vrx[80] = C378062;
    vrx[81] = C378077;
    vrx[82] = C378150;
    vrx[83] = C378223;
    vry[0] = C378271;
    vry[1] = C378288;
    vry[2] = C378737;
    vry[3] = C378977;
    vry[4] = C379229;
    vry[5] = C379245;
    vry[6] = C379689;
    vry[7] = C379926;
    vry[8] = C380178;
    vry[9] = C380194;
    vry[10] = C380638;
    vry[11] = C380871;
    vry[12] = C381106;
    vry[13] = C381335;
    vry[14] = C381564;
    vry[15] = C381791;
    vry[16] = C382002;
    vry[17] = C382032;
    vry[18] = C382061;
    vry[19] = C382075;
    vry[20] = C382090;
    vry[21] = C382106;
    vry[22] = C382167;
    vry[23] = C382196;
    vry[24] = C382286;
    vry[25] = C382315;
    vry[26] = C382360;
    vry[27] = C382420;
    vry[28] = C382449;
    vry[29] = C382464;
    vry[30] = C382493;
    vry[31] = C382552;
    vry[32] = C382599;
    vry[33] = C382688;
    vry[34] = C382717;
    vry[35] = C382805;
    vry[36] = C382934;
    vry[37] = C382964;
    vry[38] = C382994;
    vry[39] = C383036;
    vry[40] = C383112;
    vry[41] = C383141;
    vry[42] = C383216;
    vry[43] = C383245;
    vry[44] = C383320;
    vry[45] = C383367;
    vry[46] = C383428;
    vry[47] = C383545;
    vry[48] = C383660;
    vry[49] = C383676;
    vry[50] = C383823;
    vry[51] = C383865;
    vry[52] = C383953;
    vry[53] = C383968;
    vry[54] = C384057;
    vry[55] = C384191;
    vry[56] = C384406;
    vry[57] = C384435;
    vry[58] = C384450;
    vry[59] = C384465;
    vry[60] = C384480;
    vry[61] = C384495;
    vry[62] = C384510;
    vry[63] = C384525;
    vry[64] = C384540;
    vry[65] = C384555;
    vry[66] = C384598;
    vry[67] = C384613;
    vry[68] = C384628;
    vry[69] = C384643;
    vry[70] = C384700;
    vry[71] = C384743;
    vry[72] = C384772;
    vry[73] = C384787;
    vry[74] = C384802;
    vry[75] = C384888;
    vry[76] = C384904;
    vry[77] = C384919;
    vry[78] = C384934;
    vry[79] = C385006;
    vry[80] = C385077;
    vry[81] = C385092;
    vry[82] = C385164;
    vry[83] = C385236;
    vrz[0] = C385284;
    vrz[1] = C385301;
    vrz[2] = C385750;
    vrz[3] = C385990;
    vrz[4] = C386242;
    vrz[5] = C386258;
    vrz[6] = C386702;
    vrz[7] = C386939;
    vrz[8] = C387191;
    vrz[9] = C387207;
    vrz[10] = C387651;
    vrz[11] = C387884;
    vrz[12] = C388119;
    vrz[13] = C388348;
    vrz[14] = C388577;
    vrz[15] = C388804;
    vrz[16] = C389015;
    vrz[17] = C389045;
    vrz[18] = C389074;
    vrz[19] = C389088;
    vrz[20] = C389103;
    vrz[21] = C389119;
    vrz[22] = C389178;
    vrz[23] = C389207;
    vrz[24] = C389295;
    vrz[25] = C389324;
    vrz[26] = C389369;
    vrz[27] = C389427;
    vrz[28] = C389456;
    vrz[29] = C389471;
    vrz[30] = C389500;
    vrz[31] = C389559;
    vrz[32] = C389604;
    vrz[33] = C389692;
    vrz[34] = C389721;
    vrz[35] = C389808;
    vrz[36] = C389936;
    vrz[37] = C389966;
    vrz[38] = C389996;
    vrz[39] = C390038;
    vrz[40] = C390111;
    vrz[41] = C390140;
    vrz[42] = C390214;
    vrz[43] = C390243;
    vrz[44] = C390318;
    vrz[45] = C390363;
    vrz[46] = C390425;
    vrz[47] = C390541;
    vrz[48] = C390656;
    vrz[49] = C390672;
    vrz[50] = C390816;
    vrz[51] = C390858;
    vrz[52] = C390945;
    vrz[53] = C390960;
    vrz[54] = C391048;
    vrz[55] = C391181;
    vrz[56] = C391393;
    vrz[57] = C391422;
    vrz[58] = C391437;
    vrz[59] = C391452;
    vrz[60] = C391467;
    vrz[61] = C391482;
    vrz[62] = C391497;
    vrz[63] = C391512;
    vrz[64] = C391527;
    vrz[65] = C391542;
    vrz[66] = C391585;
    vrz[67] = C391600;
    vrz[68] = C391615;
    vrz[69] = C391630;
    vrz[70] = C391687;
    vrz[71] = C391730;
    vrz[72] = C391759;
    vrz[73] = C391774;
    vrz[74] = C391789;
    vrz[75] = C391874;
    vrz[76] = C391889;
    vrz[77] = C391904;
    vrz[78] = C391919;
    vrz[79] = C391990;
    vrz[80] = C392061;
    vrz[81] = C392076;
    vrz[82] = C392147;
    vrz[83] = C392219;
}
