/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_2_vr(const double ae,
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
    const double C9329 = g[55];
    const double C9345 = g[56];
    const double C9723 = g[64];
    const double C9875 = g[68];
    const double C9890 = g[69];
    const double C10129 = g[73];
    const double C10265 = g[77];
    const double C10417 = g[81];
    const double C10432 = g[82];
    const double C10671 = g[86];
    const double C10805 = g[90];
    const double C11327 = g[99];
    const double C11440 = g[100];
    const double C11455 = g[101];
    const double C11574 = g[102];
    const double C11634 = g[103];
    const double C11692 = g[104];
    const double C11779 = g[105];
    const double C11897 = g[107];
    const double C12027 = g[109];
    const double C12085 = g[110];
    const double C12115 = g[112];
    const double C14590 = g[113];
    const double C14664 = g[114];
    const double C14793 = g[115];
    const double C14851 = g[116];
    const double C17655 = g[117];
    const double C18170 = g[118];
    const double C18190 = g[119];
    const double C18206 = g[120];
    const double C18222 = g[121];
    const double C18223 = g[122];
    const double C18294 = g[123];
    const double C18310 = g[124];
    const double C18342 = g[125];
    const double C18358 = g[126];
    const double C18375 = g[127];
    const double C18404 = g[128];
    const double C18448 = g[129];
    const double C18535 = g[130];
    const double C18564 = g[131];
    const double C18593 = g[132];
    const double C18665 = g[133];
    const double C18681 = g[134];
    const double C18776 = g[135];
    const double C18822 = g[136];
    const double C18838 = g[137];
    const double C18854 = g[138];
    const double C18870 = g[139];
    const double C18943 = g[140];
    const double C18958 = g[141];
    const double C19002 = g[142];
    const double C19019 = g[143];
    const double C19041 = g[144];
    const double C19071 = g[145];
    const double C19130 = g[146];
    const double C19231 = g[147];
    const double C19275 = g[148];
    const double C19291 = g[149];
    const double C19307 = g[150];
    const double C19323 = g[151];
    const double C19410 = g[152];
    const double C19433 = g[153];
    const double C19507 = g[154];
    const double C19538 = g[155];
    const double C19553 = g[156];
    const double C19604 = g[157];
    const double C19648 = g[158];
    const double C19701 = g[159];
    const double C19899 = g[160];
    const double C20295 = g[161];
    const double C20311 = g[162];
    const double C20371 = g[163];
    const double C20627 = g[164];
    const double C20772 = g[165];
    const double C20918 = g[166];
    const double C21013 = g[167];
    const double C21210 = g[168];
    const double C21899 = g[169];
    const double C22582 = g[170];
    const double C22765 = g[171];
    const double C18173 = p + q;
    const double C18172 = p * q;
    const double C22898 = C18342 * be;
    const double C22894 = C11634 * be;
    const double C22889 = bs[6];
    const double C22888 = C19604 * be;
    const double C22887 = bs[5];
    const double C22885 = C19410 * be;
    const double C22884 = bs[4];
    const double C22883 = C19130 * be;
    const double C22882 = C19071 * be;
    const double C22880 = bs[3];
    const double C22879 = C19019 * be;
    const double C22878 = C18593 * be;
    const double C22875 = C18404 * be;
    const double C22874 = C18206 * be;
    const double C22873 = C18535 * be;
    const double C22872 = C18375 * be;
    const double C22871 = C18170 * be;
    const double C22870 = bs[2];
    const double C22869 = C18223 * be;
    const double C22867 = C17655 * be;
    const double C22866 = C14851 * be;
    const double C22865 = C14664 * be;
    const double C22864 = C14590 * be;
    const double C22860 = std::pow(Pi, 2.5);
    const double C22859 = ae * be;
    const double C22858 = bs[0];
    const double C22855 = bs[1];
    const double C22853 = C11440 * be;
    const double C22852 = C10805 * be;
    const double C22851 = C10671 * be;
    const double C22850 = C10432 * be;
    const double C22849 = C10129 * be;
    const double C22848 = C9890 * be;
    const double C22846 = C12115 * be;
    const double C22844 = C12085 * be;
    const double C22843 = zP - zQ;
    const double C22842 = be * zAB;
    const double C22841 = yP - yQ;
    const double C22840 = be * yAB;
    const double C22839 = C18222 * be;
    const double C22838 = C9329 * be;
    const double C22837 = 2 * p;
    const double C22835 = xP - xQ;
    const double C22834 = std::pow(p, 2);
    const double C22832 = be * xAB;
    const double C22831 = C9345 * be;
    const double C18174 = C18173 * p;
    const double C22861 = std::sqrt(C18173);
    const double C22857 = p * C18173;
    const double C22856 = C18172 * be;
    const double C22833 = be * C18172;
    const double C22996 = C22898 / p;
    const double C22991 = C22894 / p;
    const double C22985 = C22888 / p;
    const double C22982 = C22885 / p;
    const double C22980 = C22883 / p;
    const double C22978 = C22882 / p;
    const double C22975 = C22879 / p;
    const double C22973 = C22878 / p;
    const double C22969 = C22875 / p;
    const double C22967 = C22874 / p;
    const double C22965 = C22873 / p;
    const double C22963 = C22872 / p;
    const double C22961 = C22871 / p;
    const double C22959 = C22869 / p;
    const double C22956 = C22867 / p;
    const double C22954 = C22866 / p;
    const double C22952 = C22865 / p;
    const double C22950 = C22864 / p;
    const double C22946 = 4 * C22860;
    const double C22945 = kab * C22859;
    const double C22941 = C22853 / p;
    const double C22939 = C22852 / p;
    const double C22937 = C22851 / p;
    const double C22935 = C22850 / p;
    const double C22933 = C22849 / p;
    const double C22931 = C22848 / p;
    const double C22928 = C22846 / p;
    const double C22925 = C22844 / p;
    const double C22924 = C22843 * C18172;
    const double C22923 = C22841 * C18172;
    const double C22921 = C22839 / p;
    const double C22919 = C22838 / p;
    const double C22917 = C22835 * C18172;
    const double C22916 = C18173 * C22834;
    const double C22914 = C22831 / p;
    const double C22947 = C18172 * C22861;
    const double C22944 = kab * C22856;
    const double C22997 = C20772 * C22833;
    const double C22992 = C20311 * C22833;
    const double C22986 = C19701 * C22833;
    const double C22983 = C19604 * C22833;
    const double C22981 = C19553 * C22833;
    const double C22979 = C19538 * C22833;
    const double C22976 = C19410 * C22833;
    const double C22974 = C19323 * C22833;
    const double C22970 = C19275 * C22833;
    const double C22968 = C19231 * C22833;
    const double C22966 = C19130 * C22833;
    const double C22964 = C19071 * C22833;
    const double C22962 = C19041 * C22833;
    const double C22960 = C19019 * C22833;
    const double C22957 = C18958 * C22833;
    const double C22955 = C18943 * C22833;
    const double C22953 = C18854 * C22833;
    const double C22951 = C18838 * C22833;
    const double C22942 = C18681 * C22833;
    const double C22940 = C18593 * C22833;
    const double C22938 = C18564 * C22833;
    const double C22936 = C18535 * C22833;
    const double C22934 = C18404 * C22833;
    const double C22932 = C18375 * C22833;
    const double C22929 = C18342 * C22833;
    const double C22926 = C18294 * C22833;
    const double C22922 = C18223 * C22833;
    const double C22920 = C18206 * C22833;
    const double C22915 = C18170 * C22833;
    const double C23029 = kcd * C22945;
    const double C23028 = kcd * C22944;
    const double C23061 = C22997 / C22916;
    const double C23057 = C22992 / C22916;
    const double C23052 = C22986 / C22916;
    const double C23050 = C22983 / C22916;
    const double C23049 = C22981 / C22916;
    const double C23048 = C22979 / C22916;
    const double C23046 = C22976 / C22916;
    const double C23045 = C22974 / C22916;
    const double C23042 = C22970 / C22916;
    const double C23041 = C22968 / C22916;
    const double C23040 = C22966 / C22916;
    const double C23039 = C22964 / C22916;
    const double C23038 = C22962 / C22916;
    const double C23037 = C22960 / C22916;
    const double C23035 = C22957 / C22916;
    const double C23034 = C22955 / C22916;
    const double C23033 = C22953 / C22916;
    const double C23032 = C22951 / C22916;
    const double C23026 = C22942 / C22916;
    const double C23025 = C22940 / C22916;
    const double C23024 = C22938 / C22916;
    const double C23023 = C22936 / C22916;
    const double C23022 = C22934 / C22916;
    const double C23021 = C22932 / C22916;
    const double C23019 = C22929 / C22916;
    const double C23017 = C22926 / C22916;
    const double C23016 = C22922 / C22916;
    const double C23015 = C22920 / C22916;
    const double C23013 = C22915 / C22916;
    const double C23097 = C22887 * C23029;
    const double C23095 = C22884 * C23029;
    const double C23092 = C22880 * C23029;
    const double C23089 = C22870 * C23029;
    const double C23086 = C22855 * C23029;
    const double C23080 = C22858 * C23029;
    const double C23096 = C22889 * C23028;
    const double C23094 = C22887 * C23028;
    const double C23091 = C22884 * C23028;
    const double C23088 = C22880 * C23028;
    const double C23085 = C22870 * C23028;
    const double C23079 = C22855 * C23028;
    const double C19705 =
        -(((C22835 * C23096) / C22857 - (xAB * C23097) / p) * C22946) / C22947;
    const double C21252 =
        -(((C22841 * C23096) / C22857 - (yAB * C23097) / p) * C22946) / C22947;
    const double C22793 =
        -(((C22843 * C23096) / C22857 - (zAB * C23097) / p) * C22946) / C22947;
    const double C19608 =
        -(((C22835 * C23094) / C22857 - (xAB * C23095) / p) * C22946) / C22947;
    const double C21156 =
        -(((C22841 * C23094) / C22857 - (yAB * C23095) / p) * C22946) / C22947;
    const double C22697 =
        -(((C22843 * C23094) / C22857 - (zAB * C23095) / p) * C22946) / C22947;
    const double C19414 =
        -(((C22835 * C23091) / C22857 - (xAB * C23092) / p) * C22946) / C22947;
    const double C20973 =
        -(((C22841 * C23091) / C22857 - (yAB * C23092) / p) * C22946) / C22947;
    const double C22514 =
        -(((C22843 * C23091) / C22857 - (zAB * C23092) / p) * C22946) / C22947;
    const double C19007 =
        -(((C22835 * C23088) / C22857 - (xAB * C23089) / p) * C22946) / C22947;
    const double C20565 =
        -(((C22841 * C23088) / C22857 - (yAB * C23089) / p) * C22946) / C22947;
    const double C22109 =
        -(((C22843 * C23088) / C22857 - (zAB * C23089) / p) * C22946) / C22947;
    const double C18194 =
        -(((C22835 * C23085) / C22857 - (xAB * C23086) / p) * C22946) / C22947;
    const double C19772 =
        -(((C22841 * C23085) / C22857 - (yAB * C23086) / p) * C22946) / C22947;
    const double C21319 =
        -(((C22843 * C23085) / C22857 - (zAB * C23086) / p) * C22946) / C22947;
    const double C11459 =
        -(((C22835 * C23079) / C22857 - (xAB * C23080) / p) * C22946) / C22947;
    const double C14260 =
        -(((C22841 * C23079) / C22857 - (yAB * C23080) / p) * C22946) / C22947;
    const double C17054 =
        -(((C22843 * C23079) / C22857 - (zAB * C23080) / p) * C22946) / C22947;
    const double C22886 = C19608 * C18172;
    const double C19652 =
        C22985 - (C19608 * C22832) / p - C23052 - (C19705 * C22917) / C18174;
    const double C19667 = -((C19608 * C22840) / p + (C19705 * C22923) / C18174);
    const double C19682 = -((C19608 * C22842) / p + (C19705 * C22924) / C18174);
    const double C22902 = C21156 * C18172;
    const double C21199 = -((C21156 * C22832) / p + (C21252 * C22917) / C18174);
    const double C21215 =
        C22985 - (C21156 * C22840) / p - C23052 - (C21252 * C22923) / C18174;
    const double C21230 = -((C21156 * C22842) / p + (C21252 * C22924) / C18174);
    const double C22913 = C22697 * C18172;
    const double C22740 = -((C22697 * C22832) / p + (C22793 * C22917) / C18174);
    const double C22755 = -((C22697 * C22840) / p + (C22793 * C22923) / C18174);
    const double C22771 =
        C22985 - (C22697 * C22842) / p - C23052 - (C22793 * C22924) / C18174;
    const double C22881 = C19414 * C18172;
    const double C19437 =
        C22982 - (C19414 * C22832) / p - C23050 - (C19608 * C22917) / C18174;
    const double C19452 = -((C19414 * C22840) / p + (C19608 * C22923) / C18174);
    const double C19481 = -((C19414 * C22842) / p + (C19608 * C22924) / C18174);
    const double C22901 = C20973 * C18172;
    const double C20988 = -((C20973 * C22832) / p + (C21156 * C22917) / C18174);
    const double C21018 =
        C22982 - (C20973 * C22840) / p - C23050 - (C21156 * C22923) / C18174;
    const double C21047 = -((C20973 * C22842) / p + (C21156 * C22924) / C18174);
    const double C22912 = C22514 * C18172;
    const double C22529 = -((C22514 * C22832) / p + (C22697 * C22917) / C18174);
    const double C22558 = -((C22514 * C22840) / p + (C22697 * C22923) / C18174);
    const double C22588 =
        C22982 - (C22514 * C22842) / p - C23050 - (C22697 * C22924) / C18174;
    const double C22868 = C19007 * C18172;
    const double C19006 =
        C22975 - (C19007 * C22832) / p - C23046 - (C19414 * C22917) / C18174;
    const double C19090 = -((C19007 * C22840) / p + (C19414 * C22923) / C18174);
    const double C19149 = -((C19007 * C22842) / p + (C19414 * C22924) / C18174);
    const double C22897 = C20565 * C18172;
    const double C20580 = -((C20565 * C22832) / p + (C20973 * C22917) / C18174);
    const double C20632 =
        C22975 - (C20565 * C22840) / p - C23046 - (C20973 * C22923) / C18174;
    const double C20690 = -((C20565 * C22842) / p + (C20973 * C22924) / C18174);
    const double C22909 = C22109 * C18172;
    const double C22124 = -((C22109 * C22832) / p + (C22514 * C22917) / C18174);
    const double C22175 = -((C22109 * C22840) / p + (C22514 * C22923) / C18174);
    const double C22233 =
        C22975 - (C22109 * C22842) / p - C23046 - (C22514 * C22924) / C18174;
    const double C22836 = C18194 * C18172;
    const double C18178 =
        C22959 - (C18194 * C22832) / p - C23037 - (C19007 * C22917) / C18174;
    const double C18298 = -((C18194 * C22840) / p + (C19007 * C22923) / C18174);
    const double C18346 = -((C18194 * C22842) / p + (C19007 * C22924) / C18174);
    const double C22890 = C19772 * C18172;
    const double C19756 = -((C19772 * C22832) / p + (C20565 * C22917) / C18174);
    const double C19872 =
        C22959 - (C19772 * C22840) / p - C23037 - (C20565 * C22923) / C18174;
    const double C19919 = -((C19772 * C22842) / p + (C20565 * C22924) / C18174);
    const double C22903 = C21319 * C18172;
    const double C21303 = -((C21319 * C22832) / p + (C22109 * C22917) / C18174);
    const double C21419 = -((C21319 * C22840) / p + (C22109 * C22923) / C18174);
    const double C21465 =
        C22959 - (C21319 * C22842) / p - C23037 - (C22109 * C22924) / C18174;
    const double C9349 =
        C22921 - (C11459 * C22832) / p - C23016 - (C18194 * C22917) / C18174;
    const double C9981 = -((C11459 * C22840) / p + (C18194 * C22923) / C18174);
    const double C10612 = -((C11459 * C22842) / p + (C18194 * C22924) / C18174);
    const double C12195 = -((C14260 * C22832) / p + (C19772 * C22917) / C18174);
    const double C12812 =
        C22921 - (C14260 * C22840) / p - C23016 - (C19772 * C22923) / C18174;
    const double C13430 = -((C14260 * C22842) / p + (C19772 * C22924) / C18174);
    const double C14989 = -((C17054 * C22832) / p + (C21319 * C22917) / C18174);
    const double C15606 = -((C17054 * C22840) / p + (C21319 * C22923) / C18174);
    const double C16224 =
        C22921 - (C17054 * C22842) / p - C23016 - (C21319 * C22924) / C18174;
    const double C22984 = C22886 / C18174;
    const double C23001 = C22902 / C18174;
    const double C23012 = C22913 / C18174;
    const double C22977 = C22881 / C18174;
    const double C23000 = C22901 / C18174;
    const double C23011 = C22912 / C18174;
    const double C22958 = C22868 / C18174;
    const double C22995 = C22897 / C18174;
    const double C23008 = C22909 / C18174;
    const double C22918 = C22836 / C18174;
    const double C18669 = -((C18346 * C22840) / p + (C19149 * C22923) / C18174);
    const double C22987 = C22890 / C18174;
    const double C20234 =
        C22996 - (C19919 * C22840) / p - C23061 - (C20690 * C22923) / C18174;
    const double C23002 = C22903 / C18174;
    const double C21780 = -((C21465 * C22840) / p + (C22233 * C22923) / C18174);
    const double C9590 =
        C22925 - (C9981 * C22832) / p - C23017 - (C18298 * C22917) / C18174;
    const double C9727 =
        C22928 - (C10612 * C22832) / p - C23019 - (C18346 * C22917) / C18174;
    const double C10314 = -((C10612 * C22840) / p + (C18346 * C22923) / C18174);
    const double C12432 = -((C12812 * C22832) / p + (C19872 * C22917) / C18174);
    const double C12565 = -((C13430 * C22832) / p + (C19919 * C22917) / C18174);
    const double C13137 =
        C22928 - (C13430 * C22840) / p - C23019 - (C19919 * C22923) / C18174;
    const double C15226 = -((C15606 * C22832) / p + (C21419 * C22917) / C18174);
    const double C15359 = -((C16224 * C22832) / p + (C21465 * C22917) / C18174);
    const double C15931 = -((C16224 * C22840) / p + (C21465 * C22923) / C18174);
    const double C23051 = C19414 - C22984;
    const double C23065 = C20973 - C23001;
    const double C23076 = C22514 - C23012;
    const double C23047 = C19007 - C22977;
    const double C23064 = C20565 - C23000;
    const double C23075 = C22109 - C23011;
    const double C23036 = C18194 - C22958;
    const double C23060 = C19772 - C22995;
    const double C23072 = C21319 - C23008;
    const double C23014 = C11459 - C22918;
    const double C23053 = C14260 - C22987;
    const double C23066 = C17054 - C23002;
    const double C11027 = (C11327 * be) / p - (C10314 * C22832) / p -
                          (C18665 * C22833) / C22916 -
                          (C18669 * C22917) / C18174;
    const double C13836 = -((C13137 * C22832) / p + (C20234 * C22917) / C18174);
    const double C16630 = -((C15931 * C22832) / p + (C21780 * C22917) / C18174);
    const double C23093 = C23051 / C22837;
    const double C23106 = C23065 / C22837;
    const double C23115 = C23076 / C22837;
    const double C23090 = C23047 / C22837;
    const double C23105 = C23064 / C22837;
    const double C23114 = C23075 / C22837;
    const double C23084 = C23036 / C22837;
    const double C23103 = C23060 / C22837;
    const double C23112 = C23072 / C22837;
    const double C23077 = C23014 / C22837;
    const double C23098 = C23053 / C22837;
    const double C23107 = C23066 / C22837;
    const double C19511 = (C19433 * be) / p - (C19437 * C22832) / p -
                          (C19648 * C22833) / C22916 -
                          (C19652 * C22917) / C18174 + C23093;
    const double C19526 =
        C23093 - ((C19452 * C22840) / p + (C19667 * C22923) / C18174);
    const double C19557 =
        C23093 - ((C19481 * C22842) / p + (C19682 * C22924) / C18174);
    const double C21062 =
        C23106 - ((C20988 * C22832) / p + (C21199 * C22917) / C18174);
    const double C21077 = (C21013 * be) / p - (C21018 * C22840) / p -
                          (C21210 * C22833) / C22916 -
                          (C21215 * C22923) / C18174 + C23106;
    const double C21106 =
        C23106 - ((C21047 * C22842) / p + (C21230 * C22924) / C18174);
    const double C22603 =
        C23115 - ((C22529 * C22832) / p + (C22740 * C22917) / C18174);
    const double C22618 =
        C23115 - ((C22558 * C22840) / p + (C22755 * C22923) / C18174);
    const double C22647 = (C22582 * be) / p - (C22588 * C22842) / p -
                          (C22765 * C22833) / C22916 -
                          (C22771 * C22924) / C18174 + C23115;
    const double C19045 = (C19002 * be) / p - (C19006 * C22832) / p -
                          (C19433 * C22833) / C22916 -
                          (C19437 * C22917) / C18174 + C23090;
    const double C19075 =
        C23090 - ((C19090 * C22840) / p + (C19452 * C22923) / C18174);
    const double C19134 =
        C23090 - ((C19149 * C22842) / p + (C19481 * C22924) / C18174);
    const double C20602 =
        C23105 - ((C20580 * C22832) / p + (C20988 * C22917) / C18174);
    const double C20647 = (C20627 * be) / p - (C20632 * C22840) / p -
                          (C21013 * C22833) / C22916 -
                          (C21018 * C22923) / C18174 + C23105;
    const double C20705 =
        C23105 - ((C20690 * C22842) / p + (C21047 * C22924) / C18174);
    const double C22146 =
        C23114 - ((C22124 * C22832) / p + (C22529 * C22917) / C18174);
    const double C22190 =
        C23114 - ((C22175 * C22840) / p + (C22558 * C22923) / C18174);
    const double C22248 = (C20772 * be) / p - (C22233 * C22842) / p -
                          (C22582 * C22833) / C22916 -
                          (C22588 * C22924) / C18174 + C23114;
    const double C18177 = (C18190 * be) / p - (C18178 * C22832) / p -
                          (C19002 * C22833) / C22916 -
                          (C19006 * C22917) / C18174 + C23084;
    const double C18315 =
        C23084 - ((C18298 * C22840) / p + (C19090 * C22923) / C18174);
    const double C18363 =
        C23084 - ((C18346 * C22842) / p + (C19149 * C22924) / C18174);
    const double C19757 =
        C23103 - ((C19756 * C22832) / p + (C20580 * C22917) / C18174);
    const double C19887 = (C18294 * be) / p - (C19872 * C22840) / p -
                          (C20627 * C22833) / C22916 -
                          (C20632 * C22923) / C18174 + C23103;
    const double C19934 =
        C23103 - ((C19919 * C22842) / p + (C20690 * C22924) / C18174);
    const double C21304 =
        C23112 - ((C21303 * C22832) / p + (C22124 * C22917) / C18174);
    const double C21434 =
        C23112 - ((C21419 * C22840) / p + (C22175 * C22923) / C18174);
    const double C21480 = C22996 - (C21465 * C22842) / p - C23061 -
                          (C22233 * C22924) / C18174 + C23112;
    const double C9317 = (C11455 * be) / p - (C9349 * C22832) / p -
                         (C18190 * C22833) / C22916 -
                         (C18178 * C22917) / C18174 + C23077;
    const double C9863 =
        C23077 - ((C9981 * C22840) / p + (C18298 * C22923) / C18174);
    const double C10405 =
        C23077 - ((C10612 * C22842) / p + (C18346 * C22924) / C18174);
    const double C12165 =
        C23098 - ((C12195 * C22832) / p + (C19756 * C22917) / C18174);
    const double C12698 = C22925 - (C12812 * C22840) / p - C23017 -
                          (C19872 * C22923) / C18174 + C23098;
    const double C13227 =
        C23098 - ((C13430 * C22842) / p + (C19919 * C22924) / C18174);
    const double C14959 =
        C23107 - ((C14989 * C22832) / p + (C21303 * C22917) / C18174);
    const double C15492 =
        C23107 - ((C15606 * C22840) / p + (C21419 * C22923) / C18174);
    const double C16021 = C22928 - (C16224 * C22842) / p - C23019 -
                          (C21465 * C22924) / C18174 + C23107;
    const double C19235 =
        (C19041 * be) / p - (C19045 * C22832) / p - (C19507 * C22833) / C22916 -
        (C19511 * C22917) / C18174 + (C19006 - (C19437 * C18172) / C18174) / p;
    const double C22876 = C19075 * C18172;
    const double C19279 = (C19090 - (C19452 * C18172) / C18174) / p -
                          ((C19075 * C22840) / p + (C19526 * C22923) / C18174);
    const double C19295 =
        C22978 - (C19075 * C22832) / p - C23048 - (C19526 * C22917) / C18174;
    const double C22877 = C19134 * C18172;
    const double C19311 =
        C22980 - (C19134 * C22832) / p - C23049 - (C19557 * C22917) / C18174;
    const double C19327 = (C19149 - (C19481 * C18172) / C18174) / p -
                          ((C19134 * C22842) / p + (C19557 * C22924) / C18174);
    const double C19370 = -((C19134 * C22840) / p + (C19557 * C22923) / C18174);
    const double C20791 = (C20580 - (C20988 * C18172) / C18174) / p -
                          ((C20602 * C22832) / p + (C21062 * C22917) / C18174);
    const double C22899 = C20647 * C18172;
    const double C20834 = C22978 - (C20647 * C22840) / p - C23048 -
                          (C21077 * C22923) / C18174 +
                          (C20632 - (C21018 * C18172) / C18174) / p;
    const double C20849 = -((C20647 * C22832) / p + (C21077 * C22917) / C18174);
    const double C22900 = C20705 * C18172;
    const double C20864 = -((C20705 * C22832) / p + (C21106 * C22917) / C18174);
    const double C20879 = (C20690 - (C21047 * C18172) / C18174) / p -
                          ((C20705 * C22842) / p + (C21106 * C22924) / C18174);
    const double C20923 =
        C22980 - (C20705 * C22840) / p - C23049 - (C21106 * C22923) / C18174;
    const double C22333 = (C22124 - (C22529 * C18172) / C18174) / p -
                          ((C22146 * C22832) / p + (C22603 * C22917) / C18174);
    const double C22910 = C22190 * C18172;
    const double C22376 = (C22175 - (C22558 * C18172) / C18174) / p -
                          ((C22190 * C22840) / p + (C22618 * C22923) / C18174);
    const double C22391 = -((C22190 * C22832) / p + (C22618 * C22917) / C18174);
    const double C22911 = C22248 * C18172;
    const double C22406 = -((C22248 * C22832) / p + (C22647 * C22917) / C18174);
    const double C22421 = C22980 - (C22248 * C22842) / p - C23049 -
                          (C22647 * C22924) / C18174 +
                          (C22233 - (C22588 * C18172) / C18174) / p;
    const double C22464 = -((C22248 * C22840) / p + (C22647 * C22923) / C18174);
    const double C18210 = C22961 - (C18177 * C22832) / p - C23038 -
                          (C19045 * C22917) / C18174 +
                          (C18178 - (C19006 * C18172) / C18174) / p;
    const double C18330 = -((C18177 * C22842) / p + (C19045 * C22924) / C18174);
    const double C22845 = C18315 * C18172;
    const double C18314 =
        C22963 - (C18315 * C22832) / p - C23039 - (C19075 * C22917) / C18174;
    const double C18408 = (C18298 - (C19090 * C18172) / C18174) / p -
                          ((C18315 * C22840) / p + (C19075 * C22923) / C18174);
    const double C18452 = -((C18315 * C22842) / p + (C19075 * C22924) / C18174);
    const double C22847 = C18363 * C18172;
    const double C18362 =
        C22965 - (C18363 * C22832) / p - C23040 - (C19134 * C22917) / C18174;
    const double C18523 = -((C18363 * C22840) / p + (C19134 * C22923) / C18174);
    const double C18597 = (C18346 - (C19149 * C18172) / C18174) / p -
                          ((C18363 * C22842) / p + (C19134 * C22924) / C18174);
    const double C19787 = (C19756 - (C20580 * C18172) / C18174) / p -
                          ((C19757 * C22832) / p + (C20602 * C22917) / C18174);
    const double C19904 = -((C19757 * C22842) / p + (C20602 * C22924) / C18174);
    const double C22891 = C19887 * C18172;
    const double C19888 = -((C19887 * C22832) / p + (C20647 * C22917) / C18174);
    const double C19978 = C22963 - (C19887 * C22840) / p - C23039 -
                          (C20647 * C22923) / C18174 +
                          (C19872 - (C20632 * C18172) / C18174) / p;
    const double C20021 = -((C19887 * C22842) / p + (C20647 * C22924) / C18174);
    const double C22892 = C19934 * C18172;
    const double C19935 = -((C19934 * C22832) / p + (C20705 * C22917) / C18174);
    const double C20092 =
        C22965 - (C19934 * C22840) / p - C23040 - (C20705 * C22923) / C18174;
    const double C20163 = (C19919 - (C20690 * C18172) / C18174) / p -
                          ((C19934 * C22842) / p + (C20705 * C22924) / C18174);
    const double C21334 = (C21303 - (C22124 * C18172) / C18174) / p -
                          ((C21304 * C22832) / p + (C22146 * C22917) / C18174);
    const double C21450 =
        C22961 - (C21304 * C22842) / p - C23038 - (C22146 * C22924) / C18174;
    const double C22904 = C21434 * C18172;
    const double C21435 = -((C21434 * C22832) / p + (C22190 * C22917) / C18174);
    const double C21524 = (C21419 - (C22175 * C18172) / C18174) / p -
                          ((C21434 * C22840) / p + (C22190 * C22923) / C18174);
    const double C21567 =
        C22963 - (C21434 * C22842) / p - C23039 - (C22190 * C22924) / C18174;
    const double C22905 = C21480 * C18172;
    const double C21481 = -((C21480 * C22832) / p + (C22248 * C22917) / C18174);
    const double C21638 = -((C21480 * C22840) / p + (C22248 * C22923) / C18174);
    const double C21709 = C22965 - (C21480 * C22842) / p - C23040 -
                          (C22248 * C22924) / C18174 +
                          (C21465 - (C22233 * C18172) / C18174) / p;
    const double C9300 = C22914 - (C9317 * C22832) / p - C23013 -
                         (C18177 * C22917) / C18174 +
                         (C9349 - (C18178 * C18172) / C18174) / p;
    const double C9441 = -((C9317 * C22840) / p + (C18177 * C22923) / C18174);
    const double C9529 = -((C9317 * C22842) / p + (C18177 * C22924) / C18174);
    const double C9847 =
        C22931 - (C9863 * C22832) / p - C23021 - (C18315 * C22917) / C18174;
    const double C9982 = (C9981 - (C18298 * C18172) / C18174) / p -
                         ((C9863 * C22840) / p + (C18315 * C22923) / C18174);
    const double C10072 = -((C9863 * C22842) / p + (C18315 * C22924) / C18174);
    const double C10389 =
        C22935 - (C10405 * C22832) / p - C23023 - (C18363 * C22917) / C18174;
    const double C10524 = -((C10405 * C22840) / p + (C18363 * C22923) / C18174);
    const double C10613 = (C10612 - (C18346 * C18172) / C18174) / p -
                          ((C10405 * C22842) / p + (C18363 * C22924) / C18174);
    const double C12148 = (C12195 - (C19756 * C18172) / C18174) / p -
                          ((C12165 * C22832) / p + (C19757 * C22917) / C18174);
    const double C12285 =
        C22914 - (C12165 * C22840) / p - C23013 - (C19757 * C22923) / C18174;
    const double C12373 = -((C12165 * C22842) / p + (C19757 * C22924) / C18174);
    const double C12682 = -((C12698 * C22832) / p + (C19887 * C22917) / C18174);
    const double C12813 = C22931 - (C12698 * C22840) / p - C23021 -
                          (C19887 * C22923) / C18174 +
                          (C12812 - (C19872 * C18172) / C18174) / p;
    const double C12903 = -((C12698 * C22842) / p + (C19887 * C22924) / C18174);
    const double C13211 = -((C13227 * C22832) / p + (C19934 * C22917) / C18174);
    const double C13342 =
        C22935 - (C13227 * C22840) / p - C23023 - (C19934 * C22923) / C18174;
    const double C13431 = (C13430 - (C19919 * C18172) / C18174) / p -
                          ((C13227 * C22842) / p + (C19934 * C22924) / C18174);
    const double C14942 = (C14989 - (C21303 * C18172) / C18174) / p -
                          ((C14959 * C22832) / p + (C21304 * C22917) / C18174);
    const double C15079 = -((C14959 * C22840) / p + (C21304 * C22923) / C18174);
    const double C15167 =
        C22914 - (C14959 * C22842) / p - C23013 - (C21304 * C22924) / C18174;
    const double C15476 = -((C15492 * C22832) / p + (C21434 * C22917) / C18174);
    const double C15607 = (C15606 - (C21419 * C18172) / C18174) / p -
                          ((C15492 * C22840) / p + (C21434 * C22923) / C18174);
    const double C15697 =
        C22931 - (C15492 * C22842) / p - C23021 - (C21434 * C22924) / C18174;
    const double C16005 = -((C16021 * C22832) / p + (C21480 * C22917) / C18174);
    const double C16136 = -((C16021 * C22840) / p + (C21480 * C22923) / C18174);
    const double C16225 = C22935 - (C16021 * C22842) / p - C23023 -
                          (C21480 * C22924) / C18174 +
                          (C16224 - (C21465 * C18172) / C18174) / p;
    const double C22971 = C22876 / C18174;
    const double C22972 = C22877 / C18174;
    const double C22998 = C22899 / C18174;
    const double C22999 = C22900 / C18174;
    const double C23009 = C22910 / C18174;
    const double C23010 = C22911 / C18174;
    const double C22854 = C18210 * C18172;
    const double C18685 = C22967 - (C18210 * C22832) / p - C23041 -
                          (C19235 * C22917) / C18174 +
                          (3 * (C18177 - (C19045 * C18172) / C18174)) / C22837;
    const double C18735 = -((C18210 * C22840) / p + (C19235 * C22923) / C18174);
    const double C18750 = -((C18210 * C22842) / p + (C19235 * C22924) / C18174);
    const double C22927 = C22845 / C18174;
    const double C22862 = C18408 * C18172;
    const double C18780 =
        C22969 - (C18408 * C22832) / p - C23042 - (C19279 * C22917) / C18174;
    const double C18858 = -((C18408 * C22842) / p + (C19279 * C22924) / C18174);
    const double C22930 = C22847 / C18174;
    const double C22863 = C18597 * C18172;
    const double C18826 =
        C22973 - (C18597 * C22832) / p - C23045 - (C19327 * C22917) / C18174;
    const double C18931 = -((C18597 * C22840) / p + (C19327 * C22923) / C18174);
    const double C22893 = C19787 * C18172;
    const double C20249 = (3 * (C19757 - (C20602 * C18172) / C18174)) / C22837 -
                          ((C19787 * C22832) / p + (C20791 * C22917) / C18174);
    const double C20300 =
        C22967 - (C19787 * C22840) / p - C23041 - (C20791 * C22923) / C18174;
    const double C20316 = -((C19787 * C22842) / p + (C20791 * C22924) / C18174);
    const double C22988 = C22891 / C18174;
    const double C22895 = C19978 * C18172;
    const double C20345 = -((C19978 * C22832) / p + (C20834 * C22917) / C18174);
    const double C20421 = -((C19978 * C22842) / p + (C20834 * C22924) / C18174);
    const double C22989 = C22892 / C18174;
    const double C22896 = C20163 * C18172;
    const double C20391 = -((C20163 * C22832) / p + (C20879 * C22917) / C18174);
    const double C20493 =
        C22973 - (C20163 * C22840) / p - C23045 - (C20879 * C22923) / C18174;
    const double C22906 = C21334 * C18172;
    const double C21795 = (3 * (C21304 - (C22146 * C18172) / C18174)) / C22837 -
                          ((C21334 * C22832) / p + (C22333 * C22917) / C18174);
    const double C21845 = -((C21334 * C22840) / p + (C22333 * C22923) / C18174);
    const double C21860 =
        C22967 - (C21334 * C22842) / p - C23041 - (C22333 * C22924) / C18174;
    const double C23003 = C22904 / C18174;
    const double C22907 = C21524 * C18172;
    const double C21889 = -((C21524 * C22832) / p + (C22376 * C22917) / C18174);
    const double C21965 =
        C22969 - (C21524 * C22842) / p - C23042 - (C22376 * C22924) / C18174;
    const double C23004 = C22905 / C18174;
    const double C22908 = C21709 * C18172;
    const double C21935 = -((C21709 * C22832) / p + (C22421 * C22917) / C18174);
    const double C22037 = -((C21709 * C22840) / p + (C22421 * C22923) / C18174);
    const double C9333 = C22919 - (C9300 * C22832) / p - C23015 -
                         (C18210 * C22917) / C18174 +
                         (3 * (C9317 - (C18177 * C18172) / C18174)) / C22837;
    const double C9426 = -((C9300 * C22840) / p + (C18210 * C22923) / C18174);
    const double C9514 = -((C9300 * C22842) / p + (C18210 * C22924) / C18174);
    const double C9680 = -((C9529 * C22840) / p + (C18330 * C22923) / C18174);
    const double C9966 =
        C22933 - (C9982 * C22832) / p - C23022 - (C18408 * C22917) / C18174;
    const double C10222 = -((C9982 * C22842) / p + (C18408 * C22924) / C18174);
    const double C10057 = (C10265 * be) / p - (C10072 * C22832) / p -
                          (C18448 * C22833) / C22916 -
                          (C18452 * C22917) / C18174;
    const double C10509 =
        C22937 - (C10524 * C22832) / p - C23024 - (C18523 * C22917) / C18174;
    const double C10597 =
        C22939 - (C10613 * C22832) / p - C23025 - (C18597 * C22917) / C18174;
    const double C10762 = -((C10613 * C22840) / p + (C18597 * C22923) / C18174);
    const double C12180 = (3 * (C12165 - (C19757 * C18172) / C18174)) / C22837 -
                          ((C12148 * C22832) / p + (C19787 * C22917) / C18174);
    const double C12270 =
        C22919 - (C12148 * C22840) / p - C23015 - (C19787 * C22923) / C18174;
    const double C12358 = -((C12148 * C22842) / p + (C19787 * C22924) / C18174);
    const double C12520 = (C9723 * be) / p - (C12373 * C22840) / p -
                          (C19899 * C22833) / C22916 -
                          (C19904 * C22923) / C18174;
    const double C12797 = -((C12813 * C22832) / p + (C19978 * C22917) / C18174);
    const double C13049 = -((C12813 * C22842) / p + (C19978 * C22924) / C18174);
    const double C12888 = -((C12903 * C22832) / p + (C20021 * C22917) / C18174);
    const double C13327 = -((C13342 * C22832) / p + (C20092 * C22917) / C18174);
    const double C13415 = -((C13431 * C22832) / p + (C20163 * C22917) / C18174);
    const double C13576 =
        C22939 - (C13431 * C22840) / p - C23025 - (C20163 * C22923) / C18174;
    const double C14974 = (3 * (C14959 - (C21304 * C18172) / C18174)) / C22837 -
                          ((C14942 * C22832) / p + (C21334 * C22917) / C18174);
    const double C15064 = -((C14942 * C22840) / p + (C21334 * C22923) / C18174);
    const double C15152 =
        C22919 - (C14942 * C22842) / p - C23015 - (C21334 * C22924) / C18174;
    const double C15314 = -((C15167 * C22840) / p + (C21450 * C22923) / C18174);
    const double C15591 = -((C15607 * C22832) / p + (C21524 * C22917) / C18174);
    const double C15843 =
        C22933 - (C15607 * C22842) / p - C23022 - (C21524 * C22924) / C18174;
    const double C15682 = -((C15697 * C22832) / p + (C21567 * C22917) / C18174);
    const double C16121 = -((C16136 * C22832) / p + (C21638 * C22917) / C18174);
    const double C16209 = -((C16225 * C22832) / p + (C21709 * C22917) / C18174);
    const double C16370 = -((C16225 * C22840) / p + (C21709 * C22923) / C18174);
    const double C23043 = C18315 - C22971;
    const double C23044 = C18363 - C22972;
    const double C23062 = C19887 - C22998;
    const double C23063 = C19934 - C22999;
    const double C23073 = C21434 - C23009;
    const double C23074 = C21480 - C23010;
    const double C22943 = C22854 / C18174;
    const double C23018 = C9863 - C22927;
    const double C22948 = C22862 / C18174;
    const double C23020 = C10405 - C22930;
    const double C22949 = C22863 / C18174;
    const double C22990 = C22893 / C18174;
    const double C23054 = C12698 - C22988;
    const double C22993 = C22895 / C18174;
    const double C23055 = C13227 - C22989;
    const double C22994 = C22896 / C18174;
    const double C23005 = C22906 / C18174;
    const double C23067 = C15492 - C23003;
    const double C23006 = C22907 / C18174;
    const double C23068 = C16021 - C23004;
    const double C23007 = C22908 / C18174;
    const double C11474 = -((C9333 * C22840) / p + (C18685 * C22923) / C18174);
    const double C11503 = -((C9333 * C22842) / p + (C18685 * C22924) / C18174);
    const double C11547 = -((C9514 * C22840) / p + (C18750 * C22923) / C18174);
    const double C11738 =
        C22952 - (C10222 * C22832) / p - C23033 - (C18858 * C22917) / C18174;
    const double C11943 =
        C22954 - (C10762 * C22832) / p - C23034 - (C18931 * C22917) / C18174;
    const double C14275 =
        C22941 - (C12180 * C22840) / p - C23026 - (C20249 * C22923) / C18174;
    const double C14304 = -((C12180 * C22842) / p + (C20249 * C22924) / C18174);
    const double C14348 =
        C22991 - (C12358 * C22840) / p - C23057 - (C20316 * C22923) / C18174;
    const double C14536 = -((C13049 * C22832) / p + (C20421 * C22917) / C18174);
    const double C14740 = -((C13576 * C22832) / p + (C20493 * C22917) / C18174);
    const double C17069 = -((C14974 * C22840) / p + (C21795 * C22923) / C18174);
    const double C17098 =
        C22941 - (C14974 * C22842) / p - C23026 - (C21795 * C22924) / C18174;
    const double C17142 = -((C15152 * C22840) / p + (C21860 * C22923) / C18174);
    const double C17330 = -((C15843 * C22832) / p + (C21965 * C22917) / C18174);
    const double C17532 = -((C16370 * C22832) / p + (C22037 * C22917) / C18174);
    const double C18795 = (C18310 * be) / p - (C18314 * C22832) / p -
                          (C19291 * C22833) / C22916 -
                          (C19295 * C22917) / C18174 + C23043 / C22837;
    const double C18842 = (3 * C23043) / C22837 -
                          ((C18408 * C22840) / p + (C19279 * C22923) / C18174);
    const double C23087 = C23044 / C22837;
    const double C18962 = (3 * C23044) / C22837 -
                          ((C18597 * C22842) / p + (C19327 * C22924) / C18174);
    const double C20360 =
        C23062 / C22837 - ((C19888 * C22832) / p + (C20849 * C22917) / C18174);
    const double C20406 = C22969 - (C19978 * C22840) / p - C23042 -
                          (C20834 * C22923) / C18174 + (3 * C23062) / C22837;
    const double C23104 = C23063 / C22837;
    const double C20522 = (3 * C23063) / C22837 -
                          ((C20163 * C22842) / p + (C20879 * C22924) / C18174);
    const double C21905 =
        C23073 / C22837 - ((C21435 * C22832) / p + (C22391 * C22917) / C18174);
    const double C21950 = (3 * C23073) / C22837 -
                          ((C21524 * C22840) / p + (C22376 * C22923) / C18174);
    const double C23113 = C23074 / C22837;
    const double C22066 = C22973 - (C21709 * C22842) / p - C23045 -
                          (C22421 * C22924) / C18174 + (3 * C23074) / C22837;
    const double C23027 = C9300 - C22943;
    const double C9635 = (C9875 * be) / p - (C9847 * C22832) / p -
                         (C18310 * C22833) / C22916 -
                         (C18314 * C22917) / C18174 + C23018 / C22837;
    const double C10177 = (3 * C23018) / C22837 -
                          ((C9982 * C22840) / p + (C18408 * C22923) / C18174);
    const double C23030 = C9982 - C22948;
    const double C23078 = C23020 / C22837;
    const double C10897 = (3 * C23020) / C22837 -
                          ((C10613 * C22842) / p + (C18597 * C22924) / C18174);
    const double C23031 = C10613 - C22949;
    const double C23056 = C12148 - C22990;
    const double C12475 =
        C23054 / C22837 - ((C12682 * C22832) / p + (C19888 * C22917) / C18174);
    const double C13004 = C22933 - (C12813 * C22840) / p - C23022 -
                          (C19978 * C22923) / C18174 + (3 * C23054) / C22837;
    const double C23058 = C12813 - C22993;
    const double C23099 = C23055 / C22837;
    const double C13707 = (3 * C23055) / C22837 -
                          ((C13431 * C22842) / p + (C20163 * C22924) / C18174);
    const double C23059 = C13431 - C22994;
    const double C23069 = C14942 - C23005;
    const double C15269 =
        C23067 / C22837 - ((C15476 * C22832) / p + (C21435 * C22917) / C18174);
    const double C15798 = (3 * C23067) / C22837 -
                          ((C15607 * C22840) / p + (C21524 * C22923) / C18174);
    const double C23070 = C15607 - C23006;
    const double C23108 = C23068 / C22837;
    const double C16501 = C22939 - (C16225 * C22842) / p - C23025 -
                          (C21709 * C22924) / C18174 + (3 * C23068) / C22837;
    const double C23071 = C16225 - C23007;
    const double C18810 = (C18358 * be) / p - (C18362 * C22832) / p -
                          (C19307 * C22833) / C22916 -
                          (C19311 * C22917) / C18174 + C23087;
    const double C18874 =
        C23087 - ((C18523 * C22840) / p + (C19370 * C22923) / C18174);
    const double C20376 =
        C23104 - ((C19935 * C22832) / p + (C20864 * C22917) / C18174);
    const double C20436 = (C18564 * be) / p - (C20092 * C22840) / p -
                          (C20918 * C22833) / C22916 -
                          (C20923 * C22923) / C18174 + C23104;
    const double C21920 =
        C23113 - ((C21481 * C22832) / p + (C22406 * C22917) / C18174);
    const double C21980 =
        C23113 - ((C21638 * C22840) / p + (C22464 * C22923) / C18174);
    const double C23081 = C23027 / C22837;
    const double C11444 = C22941 - (C9333 * C22832) / p - C23026 -
                          (C18685 * C22917) / C18174 + (2 * C23027) / p;
    const double C11607 = -((C9635 * C22842) / p + (C18795 * C22924) / C18174);
    const double C11710 =
        C22950 - (C10177 * C22832) / p - C23032 - (C18842 * C22917) / C18174;
    const double C11812 = -((C10177 * C22842) / p + (C18842 * C22924) / C18174);
    const double C23082 = C23030 / C22837;
    const double C11797 =
        (2 * C23030) / p - ((C10177 * C22840) / p + (C18842 * C22923) / C18174);
    const double C9816 = (C10417 * be) / p - (C10389 * C22832) / p -
                         (C18358 * C22833) / C22916 -
                         (C18362 * C22917) / C18174 + C23078;
    const double C10358 =
        C23078 - ((C10524 * C22840) / p + (C18523 * C22923) / C18174);
    const double C11958 =
        C22956 - (C10897 * C22832) / p - C23035 - (C18962 * C22917) / C18174;
    const double C12015 = -((C10897 * C22840) / p + (C18962 * C22923) / C18174);
    const double C23083 = C23031 / C22837;
    const double C12073 =
        (2 * C23031) / p - ((C10897 * C22842) / p + (C18962 * C22924) / C18174);
    const double C23100 = C23056 / C22837;
    const double C14246 =
        (2 * C23056) / p - ((C12180 * C22832) / p + (C20249 * C22917) / C18174);
    const double C14407 = -((C12475 * C22842) / p + (C20360 * C22924) / C18174);
    const double C14508 = -((C13004 * C22832) / p + (C20406 * C22917) / C18174);
    const double C14610 = -((C13004 * C22842) / p + (C20406 * C22924) / C18174);
    const double C23101 = C23058 / C22837;
    const double C14595 = C22950 - (C13004 * C22840) / p - C23032 -
                          (C20406 * C22923) / C18174 + (2 * C23058) / p;
    const double C12652 =
        C23099 - ((C13211 * C22832) / p + (C19935 * C22917) / C18174);
    const double C13181 = C22937 - (C13342 * C22840) / p - C23024 -
                          (C20092 * C22923) / C18174 + C23099;
    const double C14755 = -((C13707 * C22832) / p + (C20522 * C22917) / C18174);
    const double C14812 =
        C22956 - (C13707 * C22840) / p - C23035 - (C20522 * C22923) / C18174;
    const double C23102 = C23059 / C22837;
    const double C14870 =
        (2 * C23059) / p - ((C13707 * C22842) / p + (C20522 * C22924) / C18174);
    const double C23109 = C23069 / C22837;
    const double C17040 =
        (2 * C23069) / p - ((C14974 * C22832) / p + (C21795 * C22917) / C18174);
    const double C17201 = (C11692 * be) / p - (C15269 * C22842) / p -
                          (C21899 * C22833) / C22916 -
                          (C21905 * C22924) / C18174;
    const double C17302 = -((C15798 * C22832) / p + (C21950 * C22917) / C18174);
    const double C17403 =
        C22950 - (C15798 * C22842) / p - C23032 - (C21950 * C22924) / C18174;
    const double C23110 = C23070 / C22837;
    const double C17388 =
        (2 * C23070) / p - ((C15798 * C22840) / p + (C21950 * C22923) / C18174);
    const double C15446 =
        C23108 - ((C16005 * C22832) / p + (C21481 * C22917) / C18174);
    const double C15975 =
        C23108 - ((C16136 * C22840) / p + (C21638 * C22923) / C18174);
    const double C17547 = -((C16501 * C22832) / p + (C22066 * C22917) / C18174);
    const double C17603 = -((C16501 * C22840) / p + (C22066 * C22923) / C18174);
    const double C23111 = C23071 / C22837;
    const double C17661 = C22956 - (C16501 * C22842) / p - C23035 -
                          (C22066 * C22924) / C18174 + (2 * C23071) / p;
    const double C11532 =
        C23081 - ((C9426 * C22840) / p + (C18735 * C22923) / C18174);
    const double C11562 =
        C23081 - ((C9514 * C22842) / p + (C18750 * C22924) / C18174);
    const double C11592 = (C11779 * be) / p - (C9966 * C22832) / p -
                          (C18776 * C22833) / C22916 -
                          (C18780 * C22917) / C18174 + C23082;
    const double C11827 =
        C23082 - ((C10222 * C22842) / p + (C18858 * C22924) / C18174);
    const double C11622 = -((C9816 * C22840) / p + (C18810 * C22923) / C18174);
    const double C11767 = (C14793 * be) / p - (C10358 * C22832) / p -
                          (C18870 * C22833) / C22916 -
                          (C18874 * C22917) / C18174;
    const double C11680 = (C12027 * be) / p - (C10597 * C22832) / p -
                          (C18822 * C22833) / C22916 -
                          (C18826 * C22917) / C18174 + C23083;
    const double C11885 =
        C23083 - ((C10762 * C22840) / p + (C18931 * C22923) / C18174);
    const double C14333 = (C11574 * be) / p - (C12270 * C22840) / p -
                          (C20295 * C22833) / C22916 -
                          (C20300 * C22923) / C18174 + C23100;
    const double C14363 =
        C23100 - ((C12358 * C22842) / p + (C20316 * C22924) / C18174);
    const double C14392 =
        C23101 - ((C12797 * C22832) / p + (C20345 * C22917) / C18174);
    const double C14625 =
        C23101 - ((C13049 * C22842) / p + (C20421 * C22924) / C18174);
    const double C14422 = (C11897 * be) / p - (C12652 * C22840) / p -
                          (C20371 * C22833) / C22916 -
                          (C20376 * C22923) / C18174;
    const double C14565 = -((C13181 * C22832) / p + (C20436 * C22917) / C18174);
    const double C14479 =
        C23102 - ((C13415 * C22832) / p + (C20391 * C22917) / C18174);
    const double C14683 = C22954 - (C13576 * C22840) / p - C23034 -
                          (C20493 * C22923) / C18174 + C23102;
    const double C17127 =
        C23109 - ((C15064 * C22840) / p + (C21845 * C22923) / C18174);
    const double C17157 = C22991 - (C15152 * C22842) / p - C23057 -
                          (C21860 * C22924) / C18174 + C23109;
    const double C17186 =
        C23110 - ((C15591 * C22832) / p + (C21889 * C22917) / C18174);
    const double C17418 = C22952 - (C15843 * C22842) / p - C23033 -
                          (C21965 * C22924) / C18174 + C23110;
    const double C17216 = -((C15446 * C22840) / p + (C21920 * C22923) / C18174);
    const double C17359 = -((C15975 * C22832) / p + (C21980 * C22917) / C18174);
    const double C17273 =
        C23111 - ((C16209 * C22832) / p + (C21935 * C22917) / C18174);
    const double C17475 =
        C23111 - ((C16370 * C22840) / p + (C22037 * C22923) / C18174);
    vrx[0] = C9300;
    vrx[1] = C9317;
    vrx[2] = C9333;
    vrx[3] = C9349;
    vrx[4] = C9426;
    vrx[5] = C9441;
    vrx[6] = C9514;
    vrx[7] = C9529;
    vrx[8] = C9590;
    vrx[9] = C9635;
    vrx[10] = C9680;
    vrx[11] = C9727;
    vrx[12] = C9816;
    vrx[13] = C9847;
    vrx[14] = C9863;
    vrx[15] = C9966;
    vrx[16] = C9981;
    vrx[17] = C9982;
    vrx[18] = C10057;
    vrx[19] = C10072;
    vrx[20] = C10177;
    vrx[21] = C10222;
    vrx[22] = C10314;
    vrx[23] = C10358;
    vrx[24] = C10389;
    vrx[25] = C10405;
    vrx[26] = C10509;
    vrx[27] = C10524;
    vrx[28] = C10597;
    vrx[29] = C10612;
    vrx[30] = C10613;
    vrx[31] = C10762;
    vrx[32] = C10897;
    vrx[33] = C11027;
    vrx[34] = C11444;
    vrx[35] = C11459;
    vrx[36] = C11474;
    vrx[37] = C11503;
    vrx[38] = C11532;
    vrx[39] = C11547;
    vrx[40] = C11562;
    vrx[41] = C11592;
    vrx[42] = C11607;
    vrx[43] = C11622;
    vrx[44] = C11680;
    vrx[45] = C11710;
    vrx[46] = C11738;
    vrx[47] = C11767;
    vrx[48] = C11797;
    vrx[49] = C11812;
    vrx[50] = C11827;
    vrx[51] = C11885;
    vrx[52] = C11943;
    vrx[53] = C11958;
    vrx[54] = C12015;
    vrx[55] = C12073;
    vry[0] = C12148;
    vry[1] = C12165;
    vry[2] = C12180;
    vry[3] = C12195;
    vry[4] = C12270;
    vry[5] = C12285;
    vry[6] = C12358;
    vry[7] = C12373;
    vry[8] = C12432;
    vry[9] = C12475;
    vry[10] = C12520;
    vry[11] = C12565;
    vry[12] = C12652;
    vry[13] = C12682;
    vry[14] = C12698;
    vry[15] = C12797;
    vry[16] = C12812;
    vry[17] = C12813;
    vry[18] = C12888;
    vry[19] = C12903;
    vry[20] = C13004;
    vry[21] = C13049;
    vry[22] = C13137;
    vry[23] = C13181;
    vry[24] = C13211;
    vry[25] = C13227;
    vry[26] = C13327;
    vry[27] = C13342;
    vry[28] = C13415;
    vry[29] = C13430;
    vry[30] = C13431;
    vry[31] = C13576;
    vry[32] = C13707;
    vry[33] = C13836;
    vry[34] = C14246;
    vry[35] = C14260;
    vry[36] = C14275;
    vry[37] = C14304;
    vry[38] = C14333;
    vry[39] = C14348;
    vry[40] = C14363;
    vry[41] = C14392;
    vry[42] = C14407;
    vry[43] = C14422;
    vry[44] = C14479;
    vry[45] = C14508;
    vry[46] = C14536;
    vry[47] = C14565;
    vry[48] = C14595;
    vry[49] = C14610;
    vry[50] = C14625;
    vry[51] = C14683;
    vry[52] = C14740;
    vry[53] = C14755;
    vry[54] = C14812;
    vry[55] = C14870;
    vrz[0] = C14942;
    vrz[1] = C14959;
    vrz[2] = C14974;
    vrz[3] = C14989;
    vrz[4] = C15064;
    vrz[5] = C15079;
    vrz[6] = C15152;
    vrz[7] = C15167;
    vrz[8] = C15226;
    vrz[9] = C15269;
    vrz[10] = C15314;
    vrz[11] = C15359;
    vrz[12] = C15446;
    vrz[13] = C15476;
    vrz[14] = C15492;
    vrz[15] = C15591;
    vrz[16] = C15606;
    vrz[17] = C15607;
    vrz[18] = C15682;
    vrz[19] = C15697;
    vrz[20] = C15798;
    vrz[21] = C15843;
    vrz[22] = C15931;
    vrz[23] = C15975;
    vrz[24] = C16005;
    vrz[25] = C16021;
    vrz[26] = C16121;
    vrz[27] = C16136;
    vrz[28] = C16209;
    vrz[29] = C16224;
    vrz[30] = C16225;
    vrz[31] = C16370;
    vrz[32] = C16501;
    vrz[33] = C16630;
    vrz[34] = C17040;
    vrz[35] = C17054;
    vrz[36] = C17069;
    vrz[37] = C17098;
    vrz[38] = C17127;
    vrz[39] = C17142;
    vrz[40] = C17157;
    vrz[41] = C17186;
    vrz[42] = C17201;
    vrz[43] = C17216;
    vrz[44] = C17273;
    vrz[45] = C17302;
    vrz[46] = C17330;
    vrz[47] = C17359;
    vrz[48] = C17388;
    vrz[49] = C17403;
    vrz[50] = C17418;
    vrz[51] = C17475;
    vrz[52] = C17532;
    vrz[53] = C17547;
    vrz[54] = C17603;
    vrz[55] = C17661;
}
