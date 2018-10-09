/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_1_vr(const double ae,
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
    const double C18128 = g[118];
    const double C18148 = g[119];
    const double C18164 = g[120];
    const double C18180 = g[121];
    const double C18181 = g[122];
    const double C18252 = g[123];
    const double C18268 = g[124];
    const double C18300 = g[125];
    const double C18316 = g[126];
    const double C18333 = g[127];
    const double C18362 = g[128];
    const double C18406 = g[129];
    const double C18493 = g[130];
    const double C18522 = g[131];
    const double C18551 = g[132];
    const double C18623 = g[133];
    const double C18639 = g[134];
    const double C18734 = g[135];
    const double C18780 = g[136];
    const double C18796 = g[137];
    const double C18812 = g[138];
    const double C18828 = g[139];
    const double C18901 = g[140];
    const double C18916 = g[141];
    const double C18960 = g[142];
    const double C18977 = g[143];
    const double C18999 = g[144];
    const double C19029 = g[145];
    const double C19088 = g[146];
    const double C19189 = g[147];
    const double C19233 = g[148];
    const double C19249 = g[149];
    const double C19265 = g[150];
    const double C19281 = g[151];
    const double C19368 = g[152];
    const double C19391 = g[153];
    const double C19465 = g[154];
    const double C19496 = g[155];
    const double C19511 = g[156];
    const double C19562 = g[157];
    const double C19606 = g[158];
    const double C19659 = g[159];
    const double C19857 = g[160];
    const double C20253 = g[161];
    const double C20269 = g[162];
    const double C20329 = g[163];
    const double C20585 = g[164];
    const double C20730 = g[165];
    const double C20876 = g[166];
    const double C20971 = g[167];
    const double C21168 = g[168];
    const double C21857 = g[169];
    const double C22540 = g[170];
    const double C22723 = g[171];
    const double C18131 = p + q;
    const double C18130 = p * q;
    const double C22821 = bs[6];
    const double C22820 = bs[5];
    const double C22818 = bs[4];
    const double C22816 = bs[3];
    const double C22813 = bs[2];
    const double C22808 = std::pow(Pi, 2.5);
    const double C22805 = bs[1];
    const double C22804 = ae * be;
    const double C22803 = bs[0];
    const double C22799 = zP - zQ;
    const double C22798 = be * zAB;
    const double C22797 = yP - yQ;
    const double C22796 = be * yAB;
    const double C22795 = 2 * p;
    const double C22793 = xP - xQ;
    const double C22792 = std::pow(p, 2);
    const double C22790 = be * xAB;
    const double C22789 = ae / p;
    const double C18132 = C18131 * p;
    const double C22809 = std::sqrt(C18131);
    const double C22807 = p * C18131;
    const double C22806 = kab * C18130;
    const double C22791 = ae * C18130;
    const double C22866 = 4 * C22808;
    const double C22864 = kab * C22804;
    const double C22852 = C22799 * C18130;
    const double C22851 = C22797 * C18130;
    const double C22847 = C22793 * C18130;
    const double C22846 = C18131 * C22792;
    const double C22844 = C22789 - 1;
    const double C22867 = C18130 * C22809;
    const double C22865 = kcd * C22806;
    const double C22899 = C20730 * C22791;
    const double C22895 = C20269 * C22791;
    const double C22890 = C19659 * C22791;
    const double C22888 = C19562 * C22791;
    const double C22887 = C19511 * C22791;
    const double C22886 = C19496 * C22791;
    const double C22884 = C19368 * C22791;
    const double C22883 = C19281 * C22791;
    const double C22880 = C19233 * C22791;
    const double C22879 = C19189 * C22791;
    const double C22878 = C19088 * C22791;
    const double C22877 = C19029 * C22791;
    const double C22876 = C18999 * C22791;
    const double C22875 = C18977 * C22791;
    const double C22873 = C18916 * C22791;
    const double C22872 = C18901 * C22791;
    const double C22871 = C18812 * C22791;
    const double C22870 = C18796 * C22791;
    const double C22862 = C18639 * C22791;
    const double C22861 = C18551 * C22791;
    const double C22860 = C18522 * C22791;
    const double C22859 = C18493 * C22791;
    const double C22858 = C18362 * C22791;
    const double C22857 = C18333 * C22791;
    const double C22855 = C18300 * C22791;
    const double C22853 = C18252 * C22791;
    const double C22850 = C18181 * C22791;
    const double C22849 = C18164 * C22791;
    const double C22845 = C18128 * C22791;
    const double C22941 = kcd * C22864;
    const double C22996 = C22844 * C18300;
    const double C22991 = C22844 * C11634;
    const double C22984 = C22844 * C19562;
    const double C22980 = C22844 * C19368;
    const double C22977 = C22844 * C19088;
    const double C22975 = C22844 * C19029;
    const double C22971 = C22844 * C18977;
    const double C22969 = C22844 * C18551;
    const double C22965 = C22844 * C18362;
    const double C22963 = C22844 * C18164;
    const double C22961 = C22844 * C18493;
    const double C22959 = C22844 * C18333;
    const double C22957 = C22844 * C18128;
    const double C22954 = C22844 * C18181;
    const double C22951 = C22844 * C17655;
    const double C22949 = C22844 * C14851;
    const double C22947 = C22844 * C14664;
    const double C22945 = C22844 * C14590;
    const double C22938 = C22844 * C11440;
    const double C22936 = C22844 * C10805;
    const double C22934 = C22844 * C10671;
    const double C22932 = C22844 * C10432;
    const double C22930 = C22844 * C10129;
    const double C22928 = C22844 * C9890;
    const double C22925 = C22844 * C12115;
    const double C22922 = C22844 * C12085;
    const double C22920 = C22844 * C18180;
    const double C22918 = C22844 * C9329;
    const double C22915 = C22844 * C9345;
    const double C22986 = C22821 * C22865;
    const double C22983 = C22820 * C22865;
    const double C22979 = C22818 * C22865;
    const double C22973 = C22816 * C22865;
    const double C22956 = C22813 * C22865;
    const double C22942 = C22805 * C22865;
    const double C22997 = C22899 / C22846;
    const double C22992 = C22895 / C22846;
    const double C22985 = C22890 / C22846;
    const double C22981 = C22888 / C22846;
    const double C22978 = C22887 / C22846;
    const double C22976 = C22886 / C22846;
    const double C22972 = C22884 / C22846;
    const double C22970 = C22883 / C22846;
    const double C22966 = C22880 / C22846;
    const double C22964 = C22879 / C22846;
    const double C22962 = C22878 / C22846;
    const double C22960 = C22877 / C22846;
    const double C22958 = C22876 / C22846;
    const double C22955 = C22875 / C22846;
    const double C22952 = C22873 / C22846;
    const double C22950 = C22872 / C22846;
    const double C22948 = C22871 / C22846;
    const double C22946 = C22870 / C22846;
    const double C22939 = C22862 / C22846;
    const double C22937 = C22861 / C22846;
    const double C22935 = C22860 / C22846;
    const double C22933 = C22859 / C22846;
    const double C22931 = C22858 / C22846;
    const double C22929 = C22857 / C22846;
    const double C22926 = C22855 / C22846;
    const double C22923 = C22853 / C22846;
    const double C22921 = C22850 / C22846;
    const double C22919 = C22849 / C22846;
    const double C22916 = C22845 / C22846;
    const double C23032 = C22820 * C22941;
    const double C23030 = C22818 * C22941;
    const double C23027 = C22816 * C22941;
    const double C23024 = C22813 * C22941;
    const double C23021 = C22805 * C22941;
    const double C23015 = C22803 * C22941;
    const double C23033 = C22986 * ae;
    const double C23031 = C22983 * ae;
    const double C23028 = C22979 * ae;
    const double C23025 = C22973 * ae;
    const double C23022 = C22956 * ae;
    const double C23016 = C22942 * ae;
    const double C19663 =
        -(((xAB * C23032) / p + (C22793 * C23033) / C22807) * C22866) / C22867;
    const double C21210 =
        -(((yAB * C23032) / p + (C22797 * C23033) / C22807) * C22866) / C22867;
    const double C22751 =
        -(((zAB * C23032) / p + (C22799 * C23033) / C22807) * C22866) / C22867;
    const double C19566 =
        -(((xAB * C23030) / p + (C22793 * C23031) / C22807) * C22866) / C22867;
    const double C21114 =
        -(((yAB * C23030) / p + (C22797 * C23031) / C22807) * C22866) / C22867;
    const double C22655 =
        -(((zAB * C23030) / p + (C22799 * C23031) / C22807) * C22866) / C22867;
    const double C19372 =
        -(((xAB * C23027) / p + (C22793 * C23028) / C22807) * C22866) / C22867;
    const double C20931 =
        -(((yAB * C23027) / p + (C22797 * C23028) / C22807) * C22866) / C22867;
    const double C22472 =
        -(((zAB * C23027) / p + (C22799 * C23028) / C22807) * C22866) / C22867;
    const double C18965 =
        -(((xAB * C23024) / p + (C22793 * C23025) / C22807) * C22866) / C22867;
    const double C20523 =
        -(((yAB * C23024) / p + (C22797 * C23025) / C22807) * C22866) / C22867;
    const double C22067 =
        -(((zAB * C23024) / p + (C22799 * C23025) / C22807) * C22866) / C22867;
    const double C18152 =
        -(((xAB * C23021) / p + (C22793 * C23022) / C22807) * C22866) / C22867;
    const double C19730 =
        -(((yAB * C23021) / p + (C22797 * C23022) / C22807) * C22866) / C22867;
    const double C21277 =
        -(((zAB * C23021) / p + (C22799 * C23022) / C22807) * C22866) / C22867;
    const double C11459 =
        -(((xAB * C23015) / p + (C22793 * C23016) / C22807) * C22866) / C22867;
    const double C14260 =
        -(((yAB * C23015) / p + (C22797 * C23016) / C22807) * C22866) / C22867;
    const double C17054 =
        -(((zAB * C23015) / p + (C22799 * C23016) / C22807) * C22866) / C22867;
    const double C22819 = C19566 * C18130;
    const double C19610 =
        C22984 - (C19566 * C22790) / p - C22985 - (C19663 * C22847) / C18132;
    const double C19625 = -((C19566 * C22796) / p + (C19663 * C22851) / C18132);
    const double C19640 = -((C19566 * C22798) / p + (C19663 * C22852) / C18132);
    const double C22832 = C21114 * C18130;
    const double C21157 = -((C21114 * C22790) / p + (C21210 * C22847) / C18132);
    const double C21173 =
        C22984 - (C21114 * C22796) / p - C22985 - (C21210 * C22851) / C18132;
    const double C21188 = -((C21114 * C22798) / p + (C21210 * C22852) / C18132);
    const double C22843 = C22655 * C18130;
    const double C22698 = -((C22655 * C22790) / p + (C22751 * C22847) / C18132);
    const double C22713 = -((C22655 * C22796) / p + (C22751 * C22851) / C18132);
    const double C22729 =
        C22984 - (C22655 * C22798) / p - C22985 - (C22751 * C22852) / C18132;
    const double C22817 = C19372 * C18130;
    const double C19395 =
        C22980 - (C19372 * C22790) / p - C22981 - (C19566 * C22847) / C18132;
    const double C19410 = -((C19372 * C22796) / p + (C19566 * C22851) / C18132);
    const double C19439 = -((C19372 * C22798) / p + (C19566 * C22852) / C18132);
    const double C22831 = C20931 * C18130;
    const double C20946 = -((C20931 * C22790) / p + (C21114 * C22847) / C18132);
    const double C20976 =
        C22980 - (C20931 * C22796) / p - C22981 - (C21114 * C22851) / C18132;
    const double C21005 = -((C20931 * C22798) / p + (C21114 * C22852) / C18132);
    const double C22842 = C22472 * C18130;
    const double C22487 = -((C22472 * C22790) / p + (C22655 * C22847) / C18132);
    const double C22516 = -((C22472 * C22796) / p + (C22655 * C22851) / C18132);
    const double C22546 =
        C22980 - (C22472 * C22798) / p - C22981 - (C22655 * C22852) / C18132;
    const double C22812 = C18965 * C18130;
    const double C18964 =
        C22971 - (C18965 * C22790) / p - C22972 - (C19372 * C22847) / C18132;
    const double C19048 = -((C18965 * C22796) / p + (C19372 * C22851) / C18132);
    const double C19107 = -((C18965 * C22798) / p + (C19372 * C22852) / C18132);
    const double C22828 = C20523 * C18130;
    const double C20538 = -((C20523 * C22790) / p + (C20931 * C22847) / C18132);
    const double C20590 =
        C22971 - (C20523 * C22796) / p - C22972 - (C20931 * C22851) / C18132;
    const double C20648 = -((C20523 * C22798) / p + (C20931 * C22852) / C18132);
    const double C22839 = C22067 * C18130;
    const double C22082 = -((C22067 * C22790) / p + (C22472 * C22847) / C18132);
    const double C22133 = -((C22067 * C22796) / p + (C22472 * C22851) / C18132);
    const double C22191 =
        C22971 - (C22067 * C22798) / p - C22972 - (C22472 * C22852) / C18132;
    const double C22794 = C18152 * C18130;
    const double C18136 =
        C22954 - (C18152 * C22790) / p - C22955 - (C18965 * C22847) / C18132;
    const double C18256 = -((C18152 * C22796) / p + (C18965 * C22851) / C18132);
    const double C18304 = -((C18152 * C22798) / p + (C18965 * C22852) / C18132);
    const double C22822 = C19730 * C18130;
    const double C19714 = -((C19730 * C22790) / p + (C20523 * C22847) / C18132);
    const double C19830 =
        C22954 - (C19730 * C22796) / p - C22955 - (C20523 * C22851) / C18132;
    const double C19877 = -((C19730 * C22798) / p + (C20523 * C22852) / C18132);
    const double C22833 = C21277 * C18130;
    const double C21261 = -((C21277 * C22790) / p + (C22067 * C22847) / C18132);
    const double C21377 = -((C21277 * C22796) / p + (C22067 * C22851) / C18132);
    const double C21423 =
        C22954 - (C21277 * C22798) / p - C22955 - (C22067 * C22852) / C18132;
    const double C9349 =
        C22920 - (C11459 * C22790) / p - C22921 - (C18152 * C22847) / C18132;
    const double C9981 = -((C11459 * C22796) / p + (C18152 * C22851) / C18132);
    const double C10612 = -((C11459 * C22798) / p + (C18152 * C22852) / C18132);
    const double C12195 = -((C14260 * C22790) / p + (C19730 * C22847) / C18132);
    const double C12812 =
        C22920 - (C14260 * C22796) / p - C22921 - (C19730 * C22851) / C18132;
    const double C13430 = -((C14260 * C22798) / p + (C19730 * C22852) / C18132);
    const double C14989 = -((C17054 * C22790) / p + (C21277 * C22847) / C18132);
    const double C15606 = -((C17054 * C22796) / p + (C21277 * C22851) / C18132);
    const double C16224 =
        C22920 - (C17054 * C22798) / p - C22921 - (C21277 * C22852) / C18132;
    const double C22889 = C22819 / C18132;
    const double C22903 = C22832 / C18132;
    const double C22914 = C22843 / C18132;
    const double C22885 = C22817 / C18132;
    const double C22902 = C22831 / C18132;
    const double C22913 = C22842 / C18132;
    const double C22874 = C22812 / C18132;
    const double C22898 = C22828 / C18132;
    const double C22910 = C22839 / C18132;
    const double C22848 = C22794 / C18132;
    const double C18627 = -((C18304 * C22796) / p + (C19107 * C22851) / C18132);
    const double C22891 = C22822 / C18132;
    const double C20192 =
        C22996 - (C19877 * C22796) / p - C22997 - (C20648 * C22851) / C18132;
    const double C22904 = C22833 / C18132;
    const double C21738 = -((C21423 * C22796) / p + (C22191 * C22851) / C18132);
    const double C9590 =
        C22922 - (C9981 * C22790) / p - C22923 - (C18256 * C22847) / C18132;
    const double C9727 =
        C22925 - (C10612 * C22790) / p - C22926 - (C18304 * C22847) / C18132;
    const double C10314 = -((C10612 * C22796) / p + (C18304 * C22851) / C18132);
    const double C12432 = -((C12812 * C22790) / p + (C19830 * C22847) / C18132);
    const double C12565 = -((C13430 * C22790) / p + (C19877 * C22847) / C18132);
    const double C13137 =
        C22925 - (C13430 * C22796) / p - C22926 - (C19877 * C22851) / C18132;
    const double C15226 = -((C15606 * C22790) / p + (C21377 * C22847) / C18132);
    const double C15359 = -((C16224 * C22790) / p + (C21423 * C22847) / C18132);
    const double C15931 = -((C16224 * C22796) / p + (C21423 * C22851) / C18132);
    const double C22982 = C19372 - C22889;
    const double C23001 = C20931 - C22903;
    const double C23012 = C22472 - C22914;
    const double C22974 = C18965 - C22885;
    const double C23000 = C20523 - C22902;
    const double C23011 = C22067 - C22913;
    const double C22953 = C18152 - C22874;
    const double C22995 = C19730 - C22898;
    const double C23008 = C21277 - C22910;
    const double C22917 = C11459 - C22848;
    const double C22987 = C14260 - C22891;
    const double C23002 = C17054 - C22904;
    const double C11027 = C22844 * C11327 - (C10314 * C22790) / p -
                          (C18623 * C22791) / C22846 -
                          (C18627 * C22847) / C18132;
    const double C13836 = -((C13137 * C22790) / p + (C20192 * C22847) / C18132);
    const double C16630 = -((C15931 * C22790) / p + (C21738 * C22847) / C18132);
    const double C23029 = C22982 / C22795;
    const double C23042 = C23001 / C22795;
    const double C23051 = C23012 / C22795;
    const double C23026 = C22974 / C22795;
    const double C23041 = C23000 / C22795;
    const double C23050 = C23011 / C22795;
    const double C23020 = C22953 / C22795;
    const double C23039 = C22995 / C22795;
    const double C23048 = C23008 / C22795;
    const double C23013 = C22917 / C22795;
    const double C23034 = C22987 / C22795;
    const double C23043 = C23002 / C22795;
    const double C19469 = C22844 * C19391 - (C19395 * C22790) / p -
                          (C19606 * C22791) / C22846 -
                          (C19610 * C22847) / C18132 + C23029;
    const double C19484 =
        C23029 - ((C19410 * C22796) / p + (C19625 * C22851) / C18132);
    const double C19515 =
        C23029 - ((C19439 * C22798) / p + (C19640 * C22852) / C18132);
    const double C21020 =
        C23042 - ((C20946 * C22790) / p + (C21157 * C22847) / C18132);
    const double C21035 = C22844 * C20971 - (C20976 * C22796) / p -
                          (C21168 * C22791) / C22846 -
                          (C21173 * C22851) / C18132 + C23042;
    const double C21064 =
        C23042 - ((C21005 * C22798) / p + (C21188 * C22852) / C18132);
    const double C22561 =
        C23051 - ((C22487 * C22790) / p + (C22698 * C22847) / C18132);
    const double C22576 =
        C23051 - ((C22516 * C22796) / p + (C22713 * C22851) / C18132);
    const double C22605 = C22844 * C22540 - (C22546 * C22798) / p -
                          (C22723 * C22791) / C22846 -
                          (C22729 * C22852) / C18132 + C23051;
    const double C19003 = C22844 * C18960 - (C18964 * C22790) / p -
                          (C19391 * C22791) / C22846 -
                          (C19395 * C22847) / C18132 + C23026;
    const double C19033 =
        C23026 - ((C19048 * C22796) / p + (C19410 * C22851) / C18132);
    const double C19092 =
        C23026 - ((C19107 * C22798) / p + (C19439 * C22852) / C18132);
    const double C20560 =
        C23041 - ((C20538 * C22790) / p + (C20946 * C22847) / C18132);
    const double C20605 = C22844 * C20585 - (C20590 * C22796) / p -
                          (C20971 * C22791) / C22846 -
                          (C20976 * C22851) / C18132 + C23041;
    const double C20663 =
        C23041 - ((C20648 * C22798) / p + (C21005 * C22852) / C18132);
    const double C22104 =
        C23050 - ((C22082 * C22790) / p + (C22487 * C22847) / C18132);
    const double C22148 =
        C23050 - ((C22133 * C22796) / p + (C22516 * C22851) / C18132);
    const double C22206 = C22844 * C20730 - (C22191 * C22798) / p -
                          (C22540 * C22791) / C22846 -
                          (C22546 * C22852) / C18132 + C23050;
    const double C18135 = C22844 * C18148 - (C18136 * C22790) / p -
                          (C18960 * C22791) / C22846 -
                          (C18964 * C22847) / C18132 + C23020;
    const double C18273 =
        C23020 - ((C18256 * C22796) / p + (C19048 * C22851) / C18132);
    const double C18321 =
        C23020 - ((C18304 * C22798) / p + (C19107 * C22852) / C18132);
    const double C19715 =
        C23039 - ((C19714 * C22790) / p + (C20538 * C22847) / C18132);
    const double C19845 = C22844 * C18252 - (C19830 * C22796) / p -
                          (C20585 * C22791) / C22846 -
                          (C20590 * C22851) / C18132 + C23039;
    const double C19892 =
        C23039 - ((C19877 * C22798) / p + (C20648 * C22852) / C18132);
    const double C21262 =
        C23048 - ((C21261 * C22790) / p + (C22082 * C22847) / C18132);
    const double C21392 =
        C23048 - ((C21377 * C22796) / p + (C22133 * C22851) / C18132);
    const double C21438 = C22996 - (C21423 * C22798) / p - C22997 -
                          (C22191 * C22852) / C18132 + C23048;
    const double C9317 = C22844 * C11455 - (C9349 * C22790) / p -
                         (C18148 * C22791) / C22846 -
                         (C18136 * C22847) / C18132 + C23013;
    const double C9863 =
        C23013 - ((C9981 * C22796) / p + (C18256 * C22851) / C18132);
    const double C10405 =
        C23013 - ((C10612 * C22798) / p + (C18304 * C22852) / C18132);
    const double C12165 =
        C23034 - ((C12195 * C22790) / p + (C19714 * C22847) / C18132);
    const double C12698 = C22922 - (C12812 * C22796) / p - C22923 -
                          (C19830 * C22851) / C18132 + C23034;
    const double C13227 =
        C23034 - ((C13430 * C22798) / p + (C19877 * C22852) / C18132);
    const double C14959 =
        C23043 - ((C14989 * C22790) / p + (C21261 * C22847) / C18132);
    const double C15492 =
        C23043 - ((C15606 * C22796) / p + (C21377 * C22851) / C18132);
    const double C16021 = C22925 - (C16224 * C22798) / p - C22926 -
                          (C21423 * C22852) / C18132 + C23043;
    const double C19193 =
        C22844 * C18999 - (C19003 * C22790) / p - (C19465 * C22791) / C22846 -
        (C19469 * C22847) / C18132 + (C18964 - (C19395 * C18130) / C18132) / p;
    const double C22814 = C19033 * C18130;
    const double C19237 = (C19048 - (C19410 * C18130) / C18132) / p -
                          ((C19033 * C22796) / p + (C19484 * C22851) / C18132);
    const double C19253 =
        C22975 - (C19033 * C22790) / p - C22976 - (C19484 * C22847) / C18132;
    const double C22815 = C19092 * C18130;
    const double C19269 =
        C22977 - (C19092 * C22790) / p - C22978 - (C19515 * C22847) / C18132;
    const double C19285 = (C19107 - (C19439 * C18130) / C18132) / p -
                          ((C19092 * C22798) / p + (C19515 * C22852) / C18132);
    const double C19328 = -((C19092 * C22796) / p + (C19515 * C22851) / C18132);
    const double C20749 = (C20538 - (C20946 * C18130) / C18132) / p -
                          ((C20560 * C22790) / p + (C21020 * C22847) / C18132);
    const double C22829 = C20605 * C18130;
    const double C20792 = C22975 - (C20605 * C22796) / p - C22976 -
                          (C21035 * C22851) / C18132 +
                          (C20590 - (C20976 * C18130) / C18132) / p;
    const double C20807 = -((C20605 * C22790) / p + (C21035 * C22847) / C18132);
    const double C22830 = C20663 * C18130;
    const double C20822 = -((C20663 * C22790) / p + (C21064 * C22847) / C18132);
    const double C20837 = (C20648 - (C21005 * C18130) / C18132) / p -
                          ((C20663 * C22798) / p + (C21064 * C22852) / C18132);
    const double C20881 =
        C22977 - (C20663 * C22796) / p - C22978 - (C21064 * C22851) / C18132;
    const double C22291 = (C22082 - (C22487 * C18130) / C18132) / p -
                          ((C22104 * C22790) / p + (C22561 * C22847) / C18132);
    const double C22840 = C22148 * C18130;
    const double C22334 = (C22133 - (C22516 * C18130) / C18132) / p -
                          ((C22148 * C22796) / p + (C22576 * C22851) / C18132);
    const double C22349 = -((C22148 * C22790) / p + (C22576 * C22847) / C18132);
    const double C22841 = C22206 * C18130;
    const double C22364 = -((C22206 * C22790) / p + (C22605 * C22847) / C18132);
    const double C22379 = C22977 - (C22206 * C22798) / p - C22978 -
                          (C22605 * C22852) / C18132 +
                          (C22191 - (C22546 * C18130) / C18132) / p;
    const double C22422 = -((C22206 * C22796) / p + (C22605 * C22851) / C18132);
    const double C18168 = C22957 - (C18135 * C22790) / p - C22958 -
                          (C19003 * C22847) / C18132 +
                          (C18136 - (C18964 * C18130) / C18132) / p;
    const double C18288 = -((C18135 * C22798) / p + (C19003 * C22852) / C18132);
    const double C22800 = C18273 * C18130;
    const double C18272 =
        C22959 - (C18273 * C22790) / p - C22960 - (C19033 * C22847) / C18132;
    const double C18366 = (C18256 - (C19048 * C18130) / C18132) / p -
                          ((C18273 * C22796) / p + (C19033 * C22851) / C18132);
    const double C18410 = -((C18273 * C22798) / p + (C19033 * C22852) / C18132);
    const double C22801 = C18321 * C18130;
    const double C18320 =
        C22961 - (C18321 * C22790) / p - C22962 - (C19092 * C22847) / C18132;
    const double C18481 = -((C18321 * C22796) / p + (C19092 * C22851) / C18132);
    const double C18555 = (C18304 - (C19107 * C18130) / C18132) / p -
                          ((C18321 * C22798) / p + (C19092 * C22852) / C18132);
    const double C19745 = (C19714 - (C20538 * C18130) / C18132) / p -
                          ((C19715 * C22790) / p + (C20560 * C22847) / C18132);
    const double C19862 = -((C19715 * C22798) / p + (C20560 * C22852) / C18132);
    const double C22823 = C19845 * C18130;
    const double C19846 = -((C19845 * C22790) / p + (C20605 * C22847) / C18132);
    const double C19936 = C22959 - (C19845 * C22796) / p - C22960 -
                          (C20605 * C22851) / C18132 +
                          (C19830 - (C20590 * C18130) / C18132) / p;
    const double C19979 = -((C19845 * C22798) / p + (C20605 * C22852) / C18132);
    const double C22824 = C19892 * C18130;
    const double C19893 = -((C19892 * C22790) / p + (C20663 * C22847) / C18132);
    const double C20050 =
        C22961 - (C19892 * C22796) / p - C22962 - (C20663 * C22851) / C18132;
    const double C20121 = (C19877 - (C20648 * C18130) / C18132) / p -
                          ((C19892 * C22798) / p + (C20663 * C22852) / C18132);
    const double C21292 = (C21261 - (C22082 * C18130) / C18132) / p -
                          ((C21262 * C22790) / p + (C22104 * C22847) / C18132);
    const double C21408 =
        C22957 - (C21262 * C22798) / p - C22958 - (C22104 * C22852) / C18132;
    const double C22834 = C21392 * C18130;
    const double C21393 = -((C21392 * C22790) / p + (C22148 * C22847) / C18132);
    const double C21482 = (C21377 - (C22133 * C18130) / C18132) / p -
                          ((C21392 * C22796) / p + (C22148 * C22851) / C18132);
    const double C21525 =
        C22959 - (C21392 * C22798) / p - C22960 - (C22148 * C22852) / C18132;
    const double C22835 = C21438 * C18130;
    const double C21439 = -((C21438 * C22790) / p + (C22206 * C22847) / C18132);
    const double C21596 = -((C21438 * C22796) / p + (C22206 * C22851) / C18132);
    const double C21667 = C22961 - (C21438 * C22798) / p - C22962 -
                          (C22206 * C22852) / C18132 +
                          (C21423 - (C22191 * C18130) / C18132) / p;
    const double C9300 = C22915 - (C9317 * C22790) / p - C22916 -
                         (C18135 * C22847) / C18132 +
                         (C9349 - (C18136 * C18130) / C18132) / p;
    const double C9441 = -((C9317 * C22796) / p + (C18135 * C22851) / C18132);
    const double C9529 = -((C9317 * C22798) / p + (C18135 * C22852) / C18132);
    const double C9847 =
        C22928 - (C9863 * C22790) / p - C22929 - (C18273 * C22847) / C18132;
    const double C9982 = (C9981 - (C18256 * C18130) / C18132) / p -
                         ((C9863 * C22796) / p + (C18273 * C22851) / C18132);
    const double C10072 = -((C9863 * C22798) / p + (C18273 * C22852) / C18132);
    const double C10389 =
        C22932 - (C10405 * C22790) / p - C22933 - (C18321 * C22847) / C18132;
    const double C10524 = -((C10405 * C22796) / p + (C18321 * C22851) / C18132);
    const double C10613 = (C10612 - (C18304 * C18130) / C18132) / p -
                          ((C10405 * C22798) / p + (C18321 * C22852) / C18132);
    const double C12148 = (C12195 - (C19714 * C18130) / C18132) / p -
                          ((C12165 * C22790) / p + (C19715 * C22847) / C18132);
    const double C12285 =
        C22915 - (C12165 * C22796) / p - C22916 - (C19715 * C22851) / C18132;
    const double C12373 = -((C12165 * C22798) / p + (C19715 * C22852) / C18132);
    const double C12682 = -((C12698 * C22790) / p + (C19845 * C22847) / C18132);
    const double C12813 = C22928 - (C12698 * C22796) / p - C22929 -
                          (C19845 * C22851) / C18132 +
                          (C12812 - (C19830 * C18130) / C18132) / p;
    const double C12903 = -((C12698 * C22798) / p + (C19845 * C22852) / C18132);
    const double C13211 = -((C13227 * C22790) / p + (C19892 * C22847) / C18132);
    const double C13342 =
        C22932 - (C13227 * C22796) / p - C22933 - (C19892 * C22851) / C18132;
    const double C13431 = (C13430 - (C19877 * C18130) / C18132) / p -
                          ((C13227 * C22798) / p + (C19892 * C22852) / C18132);
    const double C14942 = (C14989 - (C21261 * C18130) / C18132) / p -
                          ((C14959 * C22790) / p + (C21262 * C22847) / C18132);
    const double C15079 = -((C14959 * C22796) / p + (C21262 * C22851) / C18132);
    const double C15167 =
        C22915 - (C14959 * C22798) / p - C22916 - (C21262 * C22852) / C18132;
    const double C15476 = -((C15492 * C22790) / p + (C21392 * C22847) / C18132);
    const double C15607 = (C15606 - (C21377 * C18130) / C18132) / p -
                          ((C15492 * C22796) / p + (C21392 * C22851) / C18132);
    const double C15697 =
        C22928 - (C15492 * C22798) / p - C22929 - (C21392 * C22852) / C18132;
    const double C16005 = -((C16021 * C22790) / p + (C21438 * C22847) / C18132);
    const double C16136 = -((C16021 * C22796) / p + (C21438 * C22851) / C18132);
    const double C16225 = C22932 - (C16021 * C22798) / p - C22933 -
                          (C21438 * C22852) / C18132 +
                          (C16224 - (C21423 * C18130) / C18132) / p;
    const double C22881 = C22814 / C18132;
    const double C22882 = C22815 / C18132;
    const double C22900 = C22829 / C18132;
    const double C22901 = C22830 / C18132;
    const double C22911 = C22840 / C18132;
    const double C22912 = C22841 / C18132;
    const double C22802 = C18168 * C18130;
    const double C18643 = C22963 - (C18168 * C22790) / p - C22964 -
                          (C19193 * C22847) / C18132 +
                          (3 * (C18135 - (C19003 * C18130) / C18132)) / C22795;
    const double C18693 = -((C18168 * C22796) / p + (C19193 * C22851) / C18132);
    const double C18708 = -((C18168 * C22798) / p + (C19193 * C22852) / C18132);
    const double C22854 = C22800 / C18132;
    const double C22810 = C18366 * C18130;
    const double C18738 =
        C22965 - (C18366 * C22790) / p - C22966 - (C19237 * C22847) / C18132;
    const double C18816 = -((C18366 * C22798) / p + (C19237 * C22852) / C18132);
    const double C22856 = C22801 / C18132;
    const double C22811 = C18555 * C18130;
    const double C18784 =
        C22969 - (C18555 * C22790) / p - C22970 - (C19285 * C22847) / C18132;
    const double C18889 = -((C18555 * C22796) / p + (C19285 * C22851) / C18132);
    const double C22825 = C19745 * C18130;
    const double C20207 = (3 * (C19715 - (C20560 * C18130) / C18132)) / C22795 -
                          ((C19745 * C22790) / p + (C20749 * C22847) / C18132);
    const double C20258 =
        C22963 - (C19745 * C22796) / p - C22964 - (C20749 * C22851) / C18132;
    const double C20274 = -((C19745 * C22798) / p + (C20749 * C22852) / C18132);
    const double C22892 = C22823 / C18132;
    const double C22826 = C19936 * C18130;
    const double C20303 = -((C19936 * C22790) / p + (C20792 * C22847) / C18132);
    const double C20379 = -((C19936 * C22798) / p + (C20792 * C22852) / C18132);
    const double C22893 = C22824 / C18132;
    const double C22827 = C20121 * C18130;
    const double C20349 = -((C20121 * C22790) / p + (C20837 * C22847) / C18132);
    const double C20451 =
        C22969 - (C20121 * C22796) / p - C22970 - (C20837 * C22851) / C18132;
    const double C22836 = C21292 * C18130;
    const double C21753 = (3 * (C21262 - (C22104 * C18130) / C18132)) / C22795 -
                          ((C21292 * C22790) / p + (C22291 * C22847) / C18132);
    const double C21803 = -((C21292 * C22796) / p + (C22291 * C22851) / C18132);
    const double C21818 =
        C22963 - (C21292 * C22798) / p - C22964 - (C22291 * C22852) / C18132;
    const double C22905 = C22834 / C18132;
    const double C22837 = C21482 * C18130;
    const double C21847 = -((C21482 * C22790) / p + (C22334 * C22847) / C18132);
    const double C21923 =
        C22965 - (C21482 * C22798) / p - C22966 - (C22334 * C22852) / C18132;
    const double C22906 = C22835 / C18132;
    const double C22838 = C21667 * C18130;
    const double C21893 = -((C21667 * C22790) / p + (C22379 * C22847) / C18132);
    const double C21995 = -((C21667 * C22796) / p + (C22379 * C22851) / C18132);
    const double C9333 = C22918 - (C9300 * C22790) / p - C22919 -
                         (C18168 * C22847) / C18132 +
                         (3 * (C9317 - (C18135 * C18130) / C18132)) / C22795;
    const double C9426 = -((C9300 * C22796) / p + (C18168 * C22851) / C18132);
    const double C9514 = -((C9300 * C22798) / p + (C18168 * C22852) / C18132);
    const double C9680 = -((C9529 * C22796) / p + (C18288 * C22851) / C18132);
    const double C9966 =
        C22930 - (C9982 * C22790) / p - C22931 - (C18366 * C22847) / C18132;
    const double C10222 = -((C9982 * C22798) / p + (C18366 * C22852) / C18132);
    const double C10057 = C22844 * C10265 - (C10072 * C22790) / p -
                          (C18406 * C22791) / C22846 -
                          (C18410 * C22847) / C18132;
    const double C10509 =
        C22934 - (C10524 * C22790) / p - C22935 - (C18481 * C22847) / C18132;
    const double C10597 =
        C22936 - (C10613 * C22790) / p - C22937 - (C18555 * C22847) / C18132;
    const double C10762 = -((C10613 * C22796) / p + (C18555 * C22851) / C18132);
    const double C12180 = (3 * (C12165 - (C19715 * C18130) / C18132)) / C22795 -
                          ((C12148 * C22790) / p + (C19745 * C22847) / C18132);
    const double C12270 =
        C22918 - (C12148 * C22796) / p - C22919 - (C19745 * C22851) / C18132;
    const double C12358 = -((C12148 * C22798) / p + (C19745 * C22852) / C18132);
    const double C12520 = C22844 * C9723 - (C12373 * C22796) / p -
                          (C19857 * C22791) / C22846 -
                          (C19862 * C22851) / C18132;
    const double C12797 = -((C12813 * C22790) / p + (C19936 * C22847) / C18132);
    const double C13049 = -((C12813 * C22798) / p + (C19936 * C22852) / C18132);
    const double C12888 = -((C12903 * C22790) / p + (C19979 * C22847) / C18132);
    const double C13327 = -((C13342 * C22790) / p + (C20050 * C22847) / C18132);
    const double C13415 = -((C13431 * C22790) / p + (C20121 * C22847) / C18132);
    const double C13576 =
        C22936 - (C13431 * C22796) / p - C22937 - (C20121 * C22851) / C18132;
    const double C14974 = (3 * (C14959 - (C21262 * C18130) / C18132)) / C22795 -
                          ((C14942 * C22790) / p + (C21292 * C22847) / C18132);
    const double C15064 = -((C14942 * C22796) / p + (C21292 * C22851) / C18132);
    const double C15152 =
        C22918 - (C14942 * C22798) / p - C22919 - (C21292 * C22852) / C18132;
    const double C15314 = -((C15167 * C22796) / p + (C21408 * C22851) / C18132);
    const double C15591 = -((C15607 * C22790) / p + (C21482 * C22847) / C18132);
    const double C15843 =
        C22930 - (C15607 * C22798) / p - C22931 - (C21482 * C22852) / C18132;
    const double C15682 = -((C15697 * C22790) / p + (C21525 * C22847) / C18132);
    const double C16121 = -((C16136 * C22790) / p + (C21596 * C22847) / C18132);
    const double C16209 = -((C16225 * C22790) / p + (C21667 * C22847) / C18132);
    const double C16370 = -((C16225 * C22796) / p + (C21667 * C22851) / C18132);
    const double C22967 = C18273 - C22881;
    const double C22968 = C18321 - C22882;
    const double C22998 = C19845 - C22900;
    const double C22999 = C19892 - C22901;
    const double C23009 = C21392 - C22911;
    const double C23010 = C21438 - C22912;
    const double C22863 = C22802 / C18132;
    const double C22924 = C9863 - C22854;
    const double C22868 = C22810 / C18132;
    const double C22927 = C10405 - C22856;
    const double C22869 = C22811 / C18132;
    const double C22894 = C22825 / C18132;
    const double C22988 = C12698 - C22892;
    const double C22896 = C22826 / C18132;
    const double C22989 = C13227 - C22893;
    const double C22897 = C22827 / C18132;
    const double C22907 = C22836 / C18132;
    const double C23003 = C15492 - C22905;
    const double C22908 = C22837 / C18132;
    const double C23004 = C16021 - C22906;
    const double C22909 = C22838 / C18132;
    const double C11474 = -((C9333 * C22796) / p + (C18643 * C22851) / C18132);
    const double C11503 = -((C9333 * C22798) / p + (C18643 * C22852) / C18132);
    const double C11547 = -((C9514 * C22796) / p + (C18708 * C22851) / C18132);
    const double C11738 =
        C22947 - (C10222 * C22790) / p - C22948 - (C18816 * C22847) / C18132;
    const double C11943 =
        C22949 - (C10762 * C22790) / p - C22950 - (C18889 * C22847) / C18132;
    const double C14275 =
        C22938 - (C12180 * C22796) / p - C22939 - (C20207 * C22851) / C18132;
    const double C14304 = -((C12180 * C22798) / p + (C20207 * C22852) / C18132);
    const double C14348 =
        C22991 - (C12358 * C22796) / p - C22992 - (C20274 * C22851) / C18132;
    const double C14536 = -((C13049 * C22790) / p + (C20379 * C22847) / C18132);
    const double C14740 = -((C13576 * C22790) / p + (C20451 * C22847) / C18132);
    const double C17069 = -((C14974 * C22796) / p + (C21753 * C22851) / C18132);
    const double C17098 =
        C22938 - (C14974 * C22798) / p - C22939 - (C21753 * C22852) / C18132;
    const double C17142 = -((C15152 * C22796) / p + (C21818 * C22851) / C18132);
    const double C17330 = -((C15843 * C22790) / p + (C21923 * C22847) / C18132);
    const double C17532 = -((C16370 * C22790) / p + (C21995 * C22847) / C18132);
    const double C18753 = C22844 * C18268 - (C18272 * C22790) / p -
                          (C19249 * C22791) / C22846 -
                          (C19253 * C22847) / C18132 + C22967 / C22795;
    const double C18800 = (3 * C22967) / C22795 -
                          ((C18366 * C22796) / p + (C19237 * C22851) / C18132);
    const double C23023 = C22968 / C22795;
    const double C18920 = (3 * C22968) / C22795 -
                          ((C18555 * C22798) / p + (C19285 * C22852) / C18132);
    const double C20318 =
        C22998 / C22795 - ((C19846 * C22790) / p + (C20807 * C22847) / C18132);
    const double C20364 = C22965 - (C19936 * C22796) / p - C22966 -
                          (C20792 * C22851) / C18132 + (3 * C22998) / C22795;
    const double C23040 = C22999 / C22795;
    const double C20480 = (3 * C22999) / C22795 -
                          ((C20121 * C22798) / p + (C20837 * C22852) / C18132);
    const double C21863 =
        C23009 / C22795 - ((C21393 * C22790) / p + (C22349 * C22847) / C18132);
    const double C21908 = (3 * C23009) / C22795 -
                          ((C21482 * C22796) / p + (C22334 * C22851) / C18132);
    const double C23049 = C23010 / C22795;
    const double C22024 = C22969 - (C21667 * C22798) / p - C22970 -
                          (C22379 * C22852) / C18132 + (3 * C23010) / C22795;
    const double C22940 = C9300 - C22863;
    const double C9635 = C22844 * C9875 - (C9847 * C22790) / p -
                         (C18268 * C22791) / C22846 -
                         (C18272 * C22847) / C18132 + C22924 / C22795;
    const double C10177 = (3 * C22924) / C22795 -
                          ((C9982 * C22796) / p + (C18366 * C22851) / C18132);
    const double C22943 = C9982 - C22868;
    const double C23014 = C22927 / C22795;
    const double C10897 = (3 * C22927) / C22795 -
                          ((C10613 * C22798) / p + (C18555 * C22852) / C18132);
    const double C22944 = C10613 - C22869;
    const double C22990 = C12148 - C22894;
    const double C12475 =
        C22988 / C22795 - ((C12682 * C22790) / p + (C19846 * C22847) / C18132);
    const double C13004 = C22930 - (C12813 * C22796) / p - C22931 -
                          (C19936 * C22851) / C18132 + (3 * C22988) / C22795;
    const double C22993 = C12813 - C22896;
    const double C23035 = C22989 / C22795;
    const double C13707 = (3 * C22989) / C22795 -
                          ((C13431 * C22798) / p + (C20121 * C22852) / C18132);
    const double C22994 = C13431 - C22897;
    const double C23005 = C14942 - C22907;
    const double C15269 =
        C23003 / C22795 - ((C15476 * C22790) / p + (C21393 * C22847) / C18132);
    const double C15798 = (3 * C23003) / C22795 -
                          ((C15607 * C22796) / p + (C21482 * C22851) / C18132);
    const double C23006 = C15607 - C22908;
    const double C23044 = C23004 / C22795;
    const double C16501 = C22936 - (C16225 * C22798) / p - C22937 -
                          (C21667 * C22852) / C18132 + (3 * C23004) / C22795;
    const double C23007 = C16225 - C22909;
    const double C18768 = C22844 * C18316 - (C18320 * C22790) / p -
                          (C19265 * C22791) / C22846 -
                          (C19269 * C22847) / C18132 + C23023;
    const double C18832 =
        C23023 - ((C18481 * C22796) / p + (C19328 * C22851) / C18132);
    const double C20334 =
        C23040 - ((C19893 * C22790) / p + (C20822 * C22847) / C18132);
    const double C20394 = C22844 * C18522 - (C20050 * C22796) / p -
                          (C20876 * C22791) / C22846 -
                          (C20881 * C22851) / C18132 + C23040;
    const double C21878 =
        C23049 - ((C21439 * C22790) / p + (C22364 * C22847) / C18132);
    const double C21938 =
        C23049 - ((C21596 * C22796) / p + (C22422 * C22851) / C18132);
    const double C23017 = C22940 / C22795;
    const double C11444 = C22938 - (C9333 * C22790) / p - C22939 -
                          (C18643 * C22847) / C18132 + (2 * C22940) / p;
    const double C11607 = -((C9635 * C22798) / p + (C18753 * C22852) / C18132);
    const double C11710 =
        C22945 - (C10177 * C22790) / p - C22946 - (C18800 * C22847) / C18132;
    const double C11812 = -((C10177 * C22798) / p + (C18800 * C22852) / C18132);
    const double C23018 = C22943 / C22795;
    const double C11797 =
        (2 * C22943) / p - ((C10177 * C22796) / p + (C18800 * C22851) / C18132);
    const double C9816 = C22844 * C10417 - (C10389 * C22790) / p -
                         (C18316 * C22791) / C22846 -
                         (C18320 * C22847) / C18132 + C23014;
    const double C10358 =
        C23014 - ((C10524 * C22796) / p + (C18481 * C22851) / C18132);
    const double C11958 =
        C22951 - (C10897 * C22790) / p - C22952 - (C18920 * C22847) / C18132;
    const double C12015 = -((C10897 * C22796) / p + (C18920 * C22851) / C18132);
    const double C23019 = C22944 / C22795;
    const double C12073 =
        (2 * C22944) / p - ((C10897 * C22798) / p + (C18920 * C22852) / C18132);
    const double C23036 = C22990 / C22795;
    const double C14246 =
        (2 * C22990) / p - ((C12180 * C22790) / p + (C20207 * C22847) / C18132);
    const double C14407 = -((C12475 * C22798) / p + (C20318 * C22852) / C18132);
    const double C14508 = -((C13004 * C22790) / p + (C20364 * C22847) / C18132);
    const double C14610 = -((C13004 * C22798) / p + (C20364 * C22852) / C18132);
    const double C23037 = C22993 / C22795;
    const double C14595 = C22945 - (C13004 * C22796) / p - C22946 -
                          (C20364 * C22851) / C18132 + (2 * C22993) / p;
    const double C12652 =
        C23035 - ((C13211 * C22790) / p + (C19893 * C22847) / C18132);
    const double C13181 = C22934 - (C13342 * C22796) / p - C22935 -
                          (C20050 * C22851) / C18132 + C23035;
    const double C14755 = -((C13707 * C22790) / p + (C20480 * C22847) / C18132);
    const double C14812 =
        C22951 - (C13707 * C22796) / p - C22952 - (C20480 * C22851) / C18132;
    const double C23038 = C22994 / C22795;
    const double C14870 =
        (2 * C22994) / p - ((C13707 * C22798) / p + (C20480 * C22852) / C18132);
    const double C23045 = C23005 / C22795;
    const double C17040 =
        (2 * C23005) / p - ((C14974 * C22790) / p + (C21753 * C22847) / C18132);
    const double C17201 = C22844 * C11692 - (C15269 * C22798) / p -
                          (C21857 * C22791) / C22846 -
                          (C21863 * C22852) / C18132;
    const double C17302 = -((C15798 * C22790) / p + (C21908 * C22847) / C18132);
    const double C17403 =
        C22945 - (C15798 * C22798) / p - C22946 - (C21908 * C22852) / C18132;
    const double C23046 = C23006 / C22795;
    const double C17388 =
        (2 * C23006) / p - ((C15798 * C22796) / p + (C21908 * C22851) / C18132);
    const double C15446 =
        C23044 - ((C16005 * C22790) / p + (C21439 * C22847) / C18132);
    const double C15975 =
        C23044 - ((C16136 * C22796) / p + (C21596 * C22851) / C18132);
    const double C17547 = -((C16501 * C22790) / p + (C22024 * C22847) / C18132);
    const double C17603 = -((C16501 * C22796) / p + (C22024 * C22851) / C18132);
    const double C23047 = C23007 / C22795;
    const double C17661 = C22951 - (C16501 * C22798) / p - C22952 -
                          (C22024 * C22852) / C18132 + (2 * C23007) / p;
    const double C11532 =
        C23017 - ((C9426 * C22796) / p + (C18693 * C22851) / C18132);
    const double C11562 =
        C23017 - ((C9514 * C22798) / p + (C18708 * C22852) / C18132);
    const double C11592 = C22844 * C11779 - (C9966 * C22790) / p -
                          (C18734 * C22791) / C22846 -
                          (C18738 * C22847) / C18132 + C23018;
    const double C11827 =
        C23018 - ((C10222 * C22798) / p + (C18816 * C22852) / C18132);
    const double C11622 = -((C9816 * C22796) / p + (C18768 * C22851) / C18132);
    const double C11767 = C22844 * C14793 - (C10358 * C22790) / p -
                          (C18828 * C22791) / C22846 -
                          (C18832 * C22847) / C18132;
    const double C11680 = C22844 * C12027 - (C10597 * C22790) / p -
                          (C18780 * C22791) / C22846 -
                          (C18784 * C22847) / C18132 + C23019;
    const double C11885 =
        C23019 - ((C10762 * C22796) / p + (C18889 * C22851) / C18132);
    const double C14333 = C22844 * C11574 - (C12270 * C22796) / p -
                          (C20253 * C22791) / C22846 -
                          (C20258 * C22851) / C18132 + C23036;
    const double C14363 =
        C23036 - ((C12358 * C22798) / p + (C20274 * C22852) / C18132);
    const double C14392 =
        C23037 - ((C12797 * C22790) / p + (C20303 * C22847) / C18132);
    const double C14625 =
        C23037 - ((C13049 * C22798) / p + (C20379 * C22852) / C18132);
    const double C14422 = C22844 * C11897 - (C12652 * C22796) / p -
                          (C20329 * C22791) / C22846 -
                          (C20334 * C22851) / C18132;
    const double C14565 = -((C13181 * C22790) / p + (C20394 * C22847) / C18132);
    const double C14479 =
        C23038 - ((C13415 * C22790) / p + (C20349 * C22847) / C18132);
    const double C14683 = C22949 - (C13576 * C22796) / p - C22950 -
                          (C20451 * C22851) / C18132 + C23038;
    const double C17127 =
        C23045 - ((C15064 * C22796) / p + (C21803 * C22851) / C18132);
    const double C17157 = C22991 - (C15152 * C22798) / p - C22992 -
                          (C21818 * C22852) / C18132 + C23045;
    const double C17186 =
        C23046 - ((C15591 * C22790) / p + (C21847 * C22847) / C18132);
    const double C17418 = C22947 - (C15843 * C22798) / p - C22948 -
                          (C21923 * C22852) / C18132 + C23046;
    const double C17216 = -((C15446 * C22796) / p + (C21878 * C22851) / C18132);
    const double C17359 = -((C15975 * C22790) / p + (C21938 * C22847) / C18132);
    const double C17273 =
        C23047 - ((C16209 * C22790) / p + (C21893 * C22847) / C18132);
    const double C17475 =
        C23047 - ((C16370 * C22796) / p + (C21995 * C22851) / C18132);
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
