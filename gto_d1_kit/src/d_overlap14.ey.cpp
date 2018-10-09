/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_32(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C18920 = ae + be;
    const double C18922 = Pi / C18920;
    const double C18923 = std::sqrt(C18922);
    const double C18926 = std::pow(C18920, 2);
    const double C18925 = be * xAB;
    const double C18929 = 2. * C18920;
    const double C18928 = std::pow(C18925, 2);
    const double C18931 = C18923 / C18929;
    const double C18930 = C18923 * C18928;
    const double C18932 = C18930 / C18926;
    const double C18933 = C18932 + C18931;
    const double C18940 = ae * xAB;
    const double C18939 = C18933 * C18925;
    const double C18938 = 2. * C18926;
    const double C18937 = C18923 * C18925;
    const double C18942 = C18939 / C18920;
    const double C18941 = -2. * C18937;
    const double C18943 = C18941 / C18938;
    const double C18944 = C18943 - C18942;
    const double C18953 = be * yAB;
    const double C18959 = ae * yAB;
    const double C18958 = std::pow(C18953, 2);
    const double C18957 = C18923 * C18953;
    const double C18961 = C18923 * C18958;
    const double C18960 = -2. * C18957;
    const double C18963 = C18961 / C18926;
    const double C18962 = C18960 / C18938;
    const double C18964 = C18963 + C18931;
    const double C18965 = C18964 * C18953;
    const double C18966 = C18965 / C18920;
    const double C18967 = C18962 - C18966;
    const double C18970 = be * zAB;
    const double C18975 = ae * zAB;
    const double C18974 = std::pow(C18970, 2);
    const double C18973 = C18923 * C18970;
    const double C18977 = C18923 * C18974;
    const double C18976 = -2. * C18973;
    const double C18979 = C18977 / C18926;
    const double C18978 = C18976 / C18938;
    const double C18980 = C18979 + C18931;
    const double C18981 = C18980 * C18970;
    const double C18982 = C18981 / C18920;
    const double C18983 = C18978 - C18982;
    const double C19017 = C18975 * C18973;
    const double C19016 = C18959 * C18957;
    const double C19015 = C18940 * C18937;
    const double C19014 = C18980 * C18975;
    const double C19013 = 3. * C18980;
    const double C19012 = C18983 * C18975;
    const double C19011 = std::pow(C18970, 2);
    const double C19010 = C18964 * C18959;
    const double C19009 = 3. * C18964;
    const double C19008 = C18967 * C18959;
    const double C19007 = std::pow(C18953, 2);
    const double C19006 = C18923 * C18940;
    const double C19005 = ae * zAB;
    const double C19004 = ae * yAB;
    const double C19003 = C18933 * C18940;
    const double C19002 = 3. * C18933;
    const double C19001 = 2. * C18926;
    const double C19000 = C18923 * C18925;
    const double C18999 = 2. * C18920;
    const double C18998 = be * xAB;
    const double C19033 = C19017 / C18926;
    const double C19032 = C19016 / C18926;
    const double C19031 = C19015 / C18926;
    const double C19030 = C19014 / C18920;
    const double C19029 = C19013 / C18929;
    const double C19028 = C19012 / C18920;
    const double C19027 = C18923 * C19011;
    const double C19026 = C19010 / C18920;
    const double C19025 = C19009 / C18929;
    const double C19024 = C19008 / C18920;
    const double C19023 = C18923 * C19007;
    const double C19022 = C19006 / C18920;
    const double C19021 = C19003 / C18920;
    const double C19020 = C19002 / C18929;
    const double C19019 = -2. * C19000;
    const double C19018 = C18923 / C18999;
    const double C19044 = C18931 - C19033;
    const double C19043 = C18931 - C19032;
    const double C19042 = C18931 - C19031;
    const double C19041 = C19030 + C18978;
    const double C19040 = C19028 + C19029;
    const double C19039 = C19027 / C18926;
    const double C19038 = C19026 + C18962;
    const double C19037 = C19024 + C19025;
    const double C19036 = C19023 / C18926;
    const double C19035 = C19021 + C18943;
    const double C19034 = C19019 / C19001;
    const double C19046 = C19039 + C18931;
    const double C19045 = C19036 + C18931;
    const double C18673 = std::sqrt(Pi / (ae + be));
    const double C18674 = -(std::sqrt(Pi / C18920) * C18998) / C18920;
    const double C18675 =
        (C18923 * std::pow(C18998, 2)) / std::pow(C18920, 2) + C19018;
    const double C18676 =
        C19034 -
        (((C18923 * std::pow(C18925, 2)) / C18926 + C19018) * C18925) / C18920;
    const double C18677 =
        ((C19034 - (C18933 * C18925) / C18920) * ae * xAB) / C18920 + C19020;
    const double C18680 =
        (((C18944 * C18940) / C18920 + C19020) * C18940) / C18920 +
        (3 * C19035 + C18944) / C18929;
    const double C18681 = -(C18923 * be * yAB) / C18920;
    const double C18682 = -(C18923 * be * zAB) / C18920;
    const double C18715 = (C18923 * std::pow(C19004, 2)) / C18926 + C18931;
    const double C18716 = (C18923 * C19004) / C18920;
    const double C18722 = (C18923 * std::pow(C19005, 2)) / C18926 + C18931;
    const double C18723 = (C18923 * C19005) / C18920;
    const double C18736 =
        (-2. * C18923 * C18953) / C18938 - (C19045 * C18953) / C18920;
    const double C18737 = (C18923 * std::pow(C18940, 2)) / C18926 + C18931;
    const double C18751 =
        (C19037 * C18959) / C18920 + (3 * C19038 + C18967) / C18929;
    const double C18780 =
        (-2. * C18923 * C18970) / C18938 - (C19046 * C18970) / C18920;
    const double C18796 =
        (C19040 * C18975) / C18920 + (3 * C19041 + C18983) / C18929;
    const double C18824 =
        (C19035 * C18940) / C18920 + (2 * C19042 + C18933) / C18929;
    const double C18827 =
        (C19043 * C18959) / C18920 +
        ((C18923 * C18959) / C18920 - C18957 / C18920) / C18929;
    const double C18843 =
        (C19044 * C18975) / C18920 +
        ((C18923 * C18975) / C18920 - C18973 / C18920) / C18929;
    const double C18855 =
        (C19038 * C18959) / C18920 + (2 * C19043 + C18964) / C18929;
    const double C18868 =
        (C19042 * C18940) / C18920 + (C19022 - C18937 / C18920) / C18929;
    const double C18885 =
        (C19041 * C18975) / C18920 + (2 * C19044 + C18980) / C18929;
    const double C18689 = ae * xAB;
    const double C18688 = be * C18674;
    const double C18687 = be * C18675;
    const double C18686 = be * xAB;
    const double C18685 = ae * C18674;
    const double C18684 = ae + be;
    const double C18683 = be * C18673;
    const double C18695 = 2 * C18688;
    const double C18694 = 2 * C18685;
    const double C18693 = 2 * C18687;
    const double C18692 = C18685 * C18686;
    const double C18691 = 2. * C18684;
    const double C18690 = 2 * C18683;
    const double C18698 = C18694 - C18695;
    const double C18697 = 2 * C18692;
    const double C18696 = -C18690;
    const double C18701 = C18698 / C18691;
    const double C18700 = C18697 / C18684;
    const double C18699 = C18696 / C18691;
    const double C18702 = C18699 - C18700;
    const double C18704 = C18702 * C18686;
    const double C18703 = 2 * C18702;
    const double C18706 = C18704 / C18684;
    const double C18705 = C18703 - C18693;
    const double C18708 = C18701 - C18706;
    const double C18707 = C18705 / C18691;
    const double C18709 = C18708 * C18686;
    const double C18710 = C18709 / C18684;
    const double C18711 = C18707 - C18710;
    const double C18718 = ae * yAB;
    const double C18717 = ae * C18681;
    const double C18725 = ae * zAB;
    const double C18724 = ae * C18682;
    const double C18740 = be * yAB;
    const double C18739 = be * C18923;
    const double C18742 = C18717 * C18740;
    const double C18741 = 2 * C18739;
    const double C18744 = 2 * C18742;
    const double C18743 = -C18741;
    const double C18746 = C18744 / C18684;
    const double C18745 = C18743 / C18691;
    const double C18747 = C18745 - C18746;
    const double C18757 = C18747 * C18740;
    const double C18756 = be * C18681;
    const double C18755 = 2 * C18717;
    const double C18754 = be * C19045;
    const double C18753 = 2 * C18747;
    const double C18760 = C18757 / C18684;
    const double C18759 = 2 * C18756;
    const double C18758 = 2 * C18754;
    const double C18762 = C18755 - C18759;
    const double C18761 = C18753 - C18758;
    const double C18764 = C18762 / C18691;
    const double C18763 = C18761 / C18691;
    const double C18765 = C18764 - C18760;
    const double C18766 = C18765 * C18740;
    const double C18767 = C18766 / C18684;
    const double C18768 = C18763 - C18767;
    const double C18783 = be * zAB;
    const double C18782 = be * C18923;
    const double C18785 = C18724 * C18783;
    const double C18784 = 2 * C18782;
    const double C18787 = 2 * C18785;
    const double C18786 = -C18784;
    const double C18789 = C18787 / C18684;
    const double C18788 = C18786 / C18691;
    const double C18790 = C18788 - C18789;
    const double C18802 = C18790 * C18783;
    const double C18801 = be * C18682;
    const double C18800 = 2 * C18724;
    const double C18799 = be * C19046;
    const double C18798 = 2 * C18790;
    const double C18805 = C18802 / C18684;
    const double C18804 = 2 * C18801;
    const double C18803 = 2 * C18799;
    const double C18807 = C18800 - C18804;
    const double C18806 = C18798 - C18803;
    const double C18809 = C18807 / C18691;
    const double C18808 = C18806 / C18691;
    const double C18810 = C18809 - C18805;
    const double C18811 = C18810 * C18783;
    const double C18812 = C18811 / C18684;
    const double C18813 = C18808 - C18812;
    const double C19085 = ae * C19041;
    const double C19084 = ae * C19042;
    const double C19083 = ae * C19038;
    const double C19082 = ae * C19044;
    const double C19081 = 4. * C18724;
    const double C19080 = C18790 * C18725;
    const double C19079 = ae * C19043;
    const double C19078 = 4. * C18717;
    const double C19077 = C18747 * C18718;
    const double C19076 = ae * C19035;
    const double C19075 = 4. * C18685;
    const double C19074 = C18702 * C18689;
    const double C19073 = ae * C19046;
    const double C19072 = C18810 * C18725;
    const double C19071 = ae * C18780;
    const double C19070 = 3 * C18810;
    const double C19069 = C18813 * C18725;
    const double C19068 = ae * C19045;
    const double C19067 = C18765 * C18718;
    const double C19066 = ae * C18736;
    const double C19065 = 3 * C18765;
    const double C19064 = C18768 * C18718;
    const double C19063 = ae * C19022;
    const double C19062 = ae * C18673;
    const double C19061 = C18685 * C18689;
    const double C19060 = ae * C18723;
    const double C19059 = C18724 * C18725;
    const double C19058 = ae * C18716;
    const double C19057 = ae * C18923;
    const double C19056 = C18717 * C18718;
    const double C19055 = ae * C18675;
    const double C19054 = C18708 * C18689;
    const double C19053 = ae * C18676;
    const double C19052 = 3 * C18708;
    const double C19051 = C18711 * C18689;
    const double C19117 = 2 * C19085;
    const double C19116 = 2 * C19084;
    const double C19115 = 2 * C19083;
    const double C19114 = 2 * C19082;
    const double C19113 = C19081 / C18691;
    const double C19112 = C19080 / C18684;
    const double C19111 = 2 * C19079;
    const double C19110 = C19078 / C18691;
    const double C19109 = C19077 / C18684;
    const double C19108 = 2 * C19076;
    const double C19107 = C19075 / C18691;
    const double C19106 = C19074 / C18684;
    const double C19105 = 2 * C19073;
    const double C19104 = C19072 / C18684;
    const double C19103 = 2 * C19071;
    const double C19102 = C19069 / C18684;
    const double C19101 = 2 * C19068;
    const double C19100 = C19067 / C18684;
    const double C19099 = 2 * C19066;
    const double C19098 = C19064 / C18684;
    const double C19097 = 2 * C19063;
    const double C19096 = 2. * C19062;
    const double C19095 = 2 * C19061;
    const double C19094 = 2 * C19060;
    const double C19093 = 2 * C19059;
    const double C19092 = 2 * C19058;
    const double C19091 = 2. * C19057;
    const double C19090 = 2 * C19056;
    const double C19089 = 2 * C19055;
    const double C19088 = C19054 / C18684;
    const double C19087 = 2 * C19053;
    const double C19086 = C19051 / C18684;
    const double C19134 = C19112 + C19113;
    const double C19133 = C19109 + C19110;
    const double C19132 = C19106 + C19107;
    const double C19131 = C18798 + C19105;
    const double C19130 = C19070 + C19103;
    const double C19129 = C18753 + C19101;
    const double C19128 = C19065 + C19099;
    const double C19127 = C18694 + C19097;
    const double C19126 = C19096 / C18691;
    const double C19125 = C19095 / C18684;
    const double C19124 = C18800 + C19094;
    const double C19123 = C19093 / C18684;
    const double C19122 = C18755 + C19092;
    const double C19121 = C19091 / C18691;
    const double C19120 = C19090 / C18684;
    const double C19119 = C18703 + C19089;
    const double C19118 = C19052 + C19087;
    const double C19152 = 2 * C19134;
    const double C19151 = C19132 * C18689;
    const double C19150 = 2 * C19133;
    const double C19149 = C19134 * C18725;
    const double C19148 = C19133 * C18718;
    const double C19147 = 2 * C19132;
    const double C19146 = C19131 / C18691;
    const double C19145 = C19130 / C18691;
    const double C19144 = C19129 / C18691;
    const double C19143 = C19128 / C18691;
    const double C19142 = C19127 / C18691;
    const double C19141 = C19125 + C19126;
    const double C19140 = C19124 / C18691;
    const double C19139 = C19123 + C19121;
    const double C19138 = C19122 / C18691;
    const double C19137 = C19120 + C19121;
    const double C19136 = C19119 / C18691;
    const double C19135 = C19118 / C18691;
    const double C19170 = C19152 + C18810;
    const double C19169 = C19141 + C18702;
    const double C19168 = C19151 / C18684;
    const double C19167 = C19150 + C18765;
    const double C19166 = C19139 + C18790;
    const double C19165 = C19149 / C18684;
    const double C19164 = C19137 + C18747;
    const double C19163 = C19148 / C18684;
    const double C19162 = C19147 + C18708;
    const double C19161 = C19104 + C19146;
    const double C19160 = C19102 + C19145;
    const double C19159 = C19100 + C19144;
    const double C19158 = C19098 + C19143;
    const double C19157 = C19141 * C18689;
    const double C19156 = C19139 * C18725;
    const double C19155 = C19137 * C18718;
    const double C19154 = C19088 + C19136;
    const double C19153 = C19086 + C19135;
    const double C19182 = C19170 + C19117;
    const double C19181 = C19161 * C18725;
    const double C19180 = C19169 + C19116;
    const double C19179 = C19167 + C19115;
    const double C19178 = C19159 * C18718;
    const double C19177 = C19166 + C19114;
    const double C19176 = C19164 + C19111;
    const double C19175 = C19162 + C19108;
    const double C19174 = C19154 * C18689;
    const double C19173 = C19157 / C18684;
    const double C19172 = C19156 / C18684;
    const double C19171 = C19155 / C18684;
    const double C19194 = C19182 / C18691;
    const double C19193 = C19181 / C18684;
    const double C19192 = C19180 / C18691;
    const double C19191 = C19179 / C18691;
    const double C19190 = C19178 / C18684;
    const double C19189 = C19177 / C18691;
    const double C19188 = C19176 / C18691;
    const double C19187 = C19175 / C18691;
    const double C19186 = C19174 / C18684;
    const double C19185 = C19173 + C19142;
    const double C19184 = C19172 + C19140;
    const double C19183 = C19171 + C19138;
    const double C19200 = C19193 + C19194;
    const double C19199 = C19168 + C19192;
    const double C19198 = C19190 + C19191;
    const double C19197 = C19165 + C19189;
    const double C19196 = C19163 + C19188;
    const double C19195 = C19186 + C19187;
    const double gx300200 = ((C19153 * C18689) / C18684 +
                             (3 * C19154 + C18711 + 2 * ae * C18677) / C18691) *
                            std::pow(C18923, 2);
    const double gx300020 = C18711 * C18715 * C18923;
    const double gx300002 = C18711 * C18923 * C18722;
    const double gx300110 = C19153 * C18716 * C18923;
    const double gx300101 = C19153 * C18923 * C18723;
    const double gx300011 = C18711 * C18716 * C18723;
    const double gx030200 = C19185 * C18736 * C18923;
    const double gx030020 = 2 * C18685 * C18751 * C18923;
    const double gx030002 = 2 * C18685 * C18736 * C18722;
    const double gx030110 = C19141 * C19037 * C18923;
    const double gx030101 = C19141 * C18736 * C18723;
    const double gx030011 = 2 * C18685 * C19037 * C18723;
    const double gx003200 = C19185 * C18923 * C18780;
    const double gx003020 = 2 * C18685 * C18715 * C18780;
    const double gx003002 = 2 * C18685 * C18923 * C18796;
    const double gx003110 = C19141 * C18716 * C18780;
    const double gx003101 = C19141 * C18923 * C19040;
    const double gx003011 = 2 * C18685 * C18716 * C19040;
    const double gx210200 = C19195 * C18681 * C18923;
    const double gx210020 = C18708 * C18827 * C18923;
    const double gx210002 = C18708 * C18681 * C18722;
    const double gx210110 = C19154 * C19043 * C18923;
    const double gx210101 = C19154 * C18681 * C18723;
    const double gx210011 = C18708 * C19043 * C18723;
    const double gx201200 = C19195 * C18923 * C18682;
    const double gx201020 = C18708 * C18715 * C18682;
    const double gx201002 = C18708 * C18923 * C18843;
    const double gx201110 = C19154 * C18716 * C18682;
    const double gx201101 = C19154 * C18923 * C19044;
    const double gx201011 = C18708 * C18716 * C19044;
    const double gx021200 = C19185 * C19045 * C18682;
    const double gx021020 = 2 * C18685 * C18855 * C18682;
    const double gx021002 = 2 * C18685 * C19045 * C18843;
    const double gx021110 = C19141 * C19038 * C18682;
    const double gx021101 = C19141 * C19045 * C19044;
    const double gx021011 = 2 * C18685 * C19038 * C19044;
    const double gx120200 = C19199 * C19045 * C18923;
    const double gx120020 = C18702 * C18855 * C18923;
    const double gx120002 = C18702 * C19045 * C18722;
    const double gx120110 = C19132 * C19038 * C18923;
    const double gx120101 = C19132 * C19045 * C18723;
    const double gx120011 = C18702 * C19038 * C18723;
    const double gx102200 = C19199 * C18923 * C19046;
    const double gx102020 = C18702 * C18715 * C19046;
    const double gx102002 = C18702 * C18923 * C18885;
    const double gx102110 = C19132 * C18716 * C19046;
    const double gx102101 = C19132 * C18923 * C19041;
    const double gx102011 = C18702 * C18716 * C19041;
    const double gx012200 = C19185 * C18681 * C19046;
    const double gx012020 = 2 * C18685 * C18827 * C19046;
    const double gx012002 = 2 * C18685 * C18681 * C18885;
    const double gx012110 = C19141 * C19043 * C19046;
    const double gx012101 = C19141 * C18681 * C19041;
    const double gx012011 = 2 * C18685 * C19043 * C19041;
    const double gx111200 = C19199 * C18681 * C18682;
    const double gx111020 = C18702 * C18827 * C18682;
    const double gx111002 = C18702 * C18681 * C18843;
    const double gx111110 = C19132 * C19043 * C18682;
    const double gx111101 = C19132 * C18681 * C19044;
    const double gx111011 = C18702 * C19043 * C19044;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gx210110 - std::sqrt(15. / 8.0) * gx030110);
    gx[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(135. / 8.0) * gx210011 - std::sqrt(15. / 8.0) * gx030011);
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gx030200 + std::sqrt(1.25 / 8.0) * gx030020 -
         std::sqrt(5.0 / 8.0) * gx030002 - std::sqrt(11.25 / 8.0) * gx210200 -
         std::sqrt(11.25 / 8.0) * gx210020 + std::sqrt(45. / 8.0) * gx210002);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(135. / 8.0) * gx210101 - std::sqrt(15. / 8.0) * gx030101);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gx030020 - std::sqrt(3.75 / 8.0) * gx030200 +
         std::sqrt(33.75 / 8.0) * gx210200 - std::sqrt(33.75 / 8.0) * gx210020);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(45.) * gx111110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gx111011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(15.0) * gx111002 -
              (std::sqrt(3.75) * gx111020 + std::sqrt(3.75) * gx111200));
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(45.) * gx111101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(11.25) * gx111200 - std::sqrt(11.25) * gx111020);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(18.) * gx012110 + std::sqrt(9. / 8.0) * gx210110 +
               std::sqrt(9. / 8.0) * gx030110);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(18.) * gx012011 + std::sqrt(9. / 8.0) * gx210011 +
               std::sqrt(9. / 8.0) * gx030011);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx030200 + std::sqrt(0.75 / 8.0) * gx030020 -
         std::sqrt(3.0 / 8.0) * gx030002 + std::sqrt(0.75 / 8.0) * gx210200 +
         std::sqrt(0.75 / 8.0) * gx210020 - std::sqrt(3.0 / 8.0) * gx210002 +
         std::sqrt(1.5) * gx012200 + std::sqrt(1.5) * gx012020 -
         std::sqrt(6.0) * gx012002);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        -cc * (std::sqrt(18.) * gx012101 + std::sqrt(9. / 8.0) * gx210101 +
               std::sqrt(9. / 8.0) * gx030101);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gx030020 - std::sqrt(2.25 / 8.0) * gx030200 -
         std::sqrt(2.25 / 8.0) * gx210200 + std::sqrt(2.25 / 8.0) * gx210020 -
         std::sqrt(4.5) * gx012200 + std::sqrt(4.5) * gx012020);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gx003110 - std::sqrt(6.75) * gx201110 -
              std::sqrt(6.75) * gx021110);
    gx[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gx003011 - std::sqrt(6.75) * gx201011 -
              std::sqrt(6.75) * gx021011);
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx003200 - 0.5 * gx003020 + gx003002 + 0.75 * gx201200 +
              0.75 * gx201020 - 1.5 * gx201002 + 0.75 * gx021200 +
              0.75 * gx021020 - 1.5 * gx021002);
    gx[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx003101 - std::sqrt(6.75) * gx201101 -
              std::sqrt(6.75) * gx021101);
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx003200 - std::sqrt(0.75) * gx003020 -
              std::sqrt(1.6875) * gx201200 + std::sqrt(1.6875) * gx201020 -
              std::sqrt(1.6875) * gx021200 + std::sqrt(1.6875) * gx021020);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(18.) * gx102110 - (std::sqrt(9. / 8.0) * gx120110 +
                                           std::sqrt(9. / 8.0) * gx300110));
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(18.) * gx102011 - (std::sqrt(9. / 8.0) * gx120011 +
                                           std::sqrt(9. / 8.0) * gx300011));
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gx300200 + std::sqrt(0.75 / 8.0) * gx300020 -
         std::sqrt(3.0 / 8.0) * gx300002 + std::sqrt(0.75 / 8.0) * gx120200 +
         std::sqrt(0.75 / 8.0) * gx120020 - std::sqrt(3.0 / 8.0) * gx120002 -
         std::sqrt(1.5) * gx102200 - std::sqrt(1.5) * gx102020 +
         std::sqrt(6.0) * gx102002);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(18.) * gx102101 - (std::sqrt(9. / 8.0) * gx120101 +
                                           std::sqrt(9. / 8.0) * gx300101));
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gx300020 - std::sqrt(2.25 / 8.0) * gx300200 -
         std::sqrt(2.25 / 8.0) * gx120200 + std::sqrt(2.25 / 8.0) * gx120020 +
         std::sqrt(4.5) * gx102200 - std::sqrt(4.5) * gx102020);
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(22.5) * gx201110 - std::sqrt(22.5) * gx021110);
    gx[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(22.5) * gx201011 - std::sqrt(22.5) * gx021011);
    gx[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gx201002 -
              (std::sqrt(1.875) * gx201020 + std::sqrt(1.875) * gx201200) +
              std::sqrt(1.875) * gx021200 + std::sqrt(1.875) * gx021020 -
              std::sqrt(7.5) * gx021002);
    gx[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(22.5) * gx201101 - std::sqrt(22.5) * gx021101);
    gx[(Ai + 5) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(5.625) * gx201200 - std::sqrt(5.625) * gx201020 -
              std::sqrt(5.625) * gx021200 + std::sqrt(5.625) * gx021020);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 8.0) * gx300110 + std::sqrt(135. / 8.0) * gx120110);
    gx[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(15. / 8.0) * gx300011 + std::sqrt(135. / 8.0) * gx120011);
    gx[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300002 -
         (std::sqrt(1.25 / 8.0) * gx300020 + std::sqrt(1.25 / 8.0) * gx300200) -
         std::sqrt(11.25 / 8.0) * gx120200 - std::sqrt(11.25 / 8.0) * gx120020 +
         std::sqrt(45.0 / 8.0) * gx120002);
    gx[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(15. / 8.0) * gx300101 + std::sqrt(135. / 8.0) * gx120101);
    gx[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gx300200 - std::sqrt(3.75 / 8.0) * gx300020 +
         std::sqrt(33.75 / 8.0) * gx120200 - std::sqrt(33.75 / 8.0) * gx120020);
    const double gy300200 = C18680 * C18755 * C18923;
    const double gy300020 = C18676 * C19183 * C18923;
    const double gy300002 = C18676 * C18755 * C18722;
    const double gy300110 = C18677 * C19137 * C18923;
    const double gy300101 = C18677 * C18755 * C18723;
    const double gy300011 = C18676 * C19137 * C18723;
    const double gy030200 = C18737 * C18768 * C18923;
    const double gy030020 = C18673 *
                            ((C19158 * C18718) / C18684 +
                             (3 * C19159 + C18768 + 2 * ae * C19037) / C18691) *
                            C18923;
    const double gy030002 = C18673 * C18768 * C18722;
    const double gy030110 = C19022 * C19158 * C18923;
    const double gy030101 = C19022 * C18768 * C18723;
    const double gy030011 = C18673 * C19158 * C18723;
    const double gy003200 = C18737 * C18755 * C18780;
    const double gy003020 = C18673 * C19183 * C18780;
    const double gy003002 = C18673 * C18755 * C18796;
    const double gy003110 = C19022 * C19137 * C18780;
    const double gy003101 = C19022 * C18755 * C19040;
    const double gy003011 = C18673 * C19137 * C19040;
    const double gy210200 = C18824 * C18747 * C18923;
    const double gy210020 = C18675 * C19196 * C18923;
    const double gy210002 = C18675 * C18747 * C18722;
    const double gy210110 = C19035 * C19133 * C18923;
    const double gy210101 = C19035 * C18747 * C18723;
    const double gy210011 = C18675 * C19133 * C18723;
    const double gy201200 = C18824 * C18755 * C18682;
    const double gy201020 = C18675 * C19183 * C18682;
    const double gy201002 = C18675 * C18755 * C18843;
    const double gy201110 = C19035 * C19137 * C18682;
    const double gy201101 = C19035 * C18755 * C19044;
    const double gy201011 = C18675 * C19137 * C19044;
    const double gy021200 = C18737 * C18765 * C18682;
    const double gy021020 = C18673 * C19198 * C18682;
    const double gy021002 = C18673 * C18765 * C18843;
    const double gy021110 = C19022 * C19159 * C18682;
    const double gy021101 = C19022 * C18765 * C19044;
    const double gy021011 = C18673 * C19159 * C19044;
    const double gy120200 = C18868 * C18765 * C18923;
    const double gy120020 = C18674 * C19198 * C18923;
    const double gy120002 = C18674 * C18765 * C18722;
    const double gy120110 = C19042 * C19159 * C18923;
    const double gy120101 = C19042 * C18765 * C18723;
    const double gy120011 = C18674 * C19159 * C18723;
    const double gy102200 = C18868 * C18755 * C19046;
    const double gy102020 = C18674 * C19183 * C19046;
    const double gy102002 = C18674 * C18755 * C18885;
    const double gy102110 = C19042 * C19137 * C19046;
    const double gy102101 = C19042 * C18755 * C19041;
    const double gy102011 = C18674 * C19137 * C19041;
    const double gy012200 = C18737 * C18747 * C19046;
    const double gy012020 = C18673 * C19196 * C19046;
    const double gy012002 = C18673 * C18747 * C18885;
    const double gy012110 = C19022 * C19133 * C19046;
    const double gy012101 = C19022 * C18747 * C19041;
    const double gy012011 = C18673 * C19133 * C19041;
    const double gy111200 = C18868 * C18747 * C18682;
    const double gy111020 = C18674 * C19196 * C18682;
    const double gy111002 = C18674 * C18747 * C18843;
    const double gy111110 = C19042 * C19133 * C18682;
    const double gy111101 = C19042 * C18747 * C19044;
    const double gy111011 = C18674 * C19133 * C19044;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gy210110 - std::sqrt(15. / 8.0) * gy030110);
    gy[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(135. / 8.0) * gy210011 - std::sqrt(15. / 8.0) * gy030011);
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gy030200 + std::sqrt(1.25 / 8.0) * gy030020 -
         std::sqrt(5.0 / 8.0) * gy030002 - std::sqrt(11.25 / 8.0) * gy210200 -
         std::sqrt(11.25 / 8.0) * gy210020 + std::sqrt(45. / 8.0) * gy210002);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(135. / 8.0) * gy210101 - std::sqrt(15. / 8.0) * gy030101);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gy030020 - std::sqrt(3.75 / 8.0) * gy030200 +
         std::sqrt(33.75 / 8.0) * gy210200 - std::sqrt(33.75 / 8.0) * gy210020);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(45.) * gy111110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gy111011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(15.0) * gy111002 -
              (std::sqrt(3.75) * gy111020 + std::sqrt(3.75) * gy111200));
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(45.) * gy111101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(11.25) * gy111200 - std::sqrt(11.25) * gy111020);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(18.) * gy012110 + std::sqrt(9. / 8.0) * gy210110 +
               std::sqrt(9. / 8.0) * gy030110);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(18.) * gy012011 + std::sqrt(9. / 8.0) * gy210011 +
               std::sqrt(9. / 8.0) * gy030011);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy030200 + std::sqrt(0.75 / 8.0) * gy030020 -
         std::sqrt(3.0 / 8.0) * gy030002 + std::sqrt(0.75 / 8.0) * gy210200 +
         std::sqrt(0.75 / 8.0) * gy210020 - std::sqrt(3.0 / 8.0) * gy210002 +
         std::sqrt(1.5) * gy012200 + std::sqrt(1.5) * gy012020 -
         std::sqrt(6.0) * gy012002);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        -cc * (std::sqrt(18.) * gy012101 + std::sqrt(9. / 8.0) * gy210101 +
               std::sqrt(9. / 8.0) * gy030101);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gy030020 - std::sqrt(2.25 / 8.0) * gy030200 -
         std::sqrt(2.25 / 8.0) * gy210200 + std::sqrt(2.25 / 8.0) * gy210020 -
         std::sqrt(4.5) * gy012200 + std::sqrt(4.5) * gy012020);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gy003110 - std::sqrt(6.75) * gy201110 -
              std::sqrt(6.75) * gy021110);
    gy[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gy003011 - std::sqrt(6.75) * gy201011 -
              std::sqrt(6.75) * gy021011);
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy003200 - 0.5 * gy003020 + gy003002 + 0.75 * gy201200 +
              0.75 * gy201020 - 1.5 * gy201002 + 0.75 * gy021200 +
              0.75 * gy021020 - 1.5 * gy021002);
    gy[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy003101 - std::sqrt(6.75) * gy201101 -
              std::sqrt(6.75) * gy021101);
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy003200 - std::sqrt(0.75) * gy003020 -
              std::sqrt(1.6875) * gy201200 + std::sqrt(1.6875) * gy201020 -
              std::sqrt(1.6875) * gy021200 + std::sqrt(1.6875) * gy021020);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(18.) * gy102110 - (std::sqrt(9. / 8.0) * gy120110 +
                                           std::sqrt(9. / 8.0) * gy300110));
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(18.) * gy102011 - (std::sqrt(9. / 8.0) * gy120011 +
                                           std::sqrt(9. / 8.0) * gy300011));
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gy300200 + std::sqrt(0.75 / 8.0) * gy300020 -
         std::sqrt(3.0 / 8.0) * gy300002 + std::sqrt(0.75 / 8.0) * gy120200 +
         std::sqrt(0.75 / 8.0) * gy120020 - std::sqrt(3.0 / 8.0) * gy120002 -
         std::sqrt(1.5) * gy102200 - std::sqrt(1.5) * gy102020 +
         std::sqrt(6.0) * gy102002);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(18.) * gy102101 - (std::sqrt(9. / 8.0) * gy120101 +
                                           std::sqrt(9. / 8.0) * gy300101));
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gy300020 - std::sqrt(2.25 / 8.0) * gy300200 -
         std::sqrt(2.25 / 8.0) * gy120200 + std::sqrt(2.25 / 8.0) * gy120020 +
         std::sqrt(4.5) * gy102200 - std::sqrt(4.5) * gy102020);
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(22.5) * gy201110 - std::sqrt(22.5) * gy021110);
    gy[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(22.5) * gy201011 - std::sqrt(22.5) * gy021011);
    gy[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gy201002 -
              (std::sqrt(1.875) * gy201020 + std::sqrt(1.875) * gy201200) +
              std::sqrt(1.875) * gy021200 + std::sqrt(1.875) * gy021020 -
              std::sqrt(7.5) * gy021002);
    gy[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(22.5) * gy201101 - std::sqrt(22.5) * gy021101);
    gy[(Ai + 5) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(5.625) * gy201200 - std::sqrt(5.625) * gy201020 -
              std::sqrt(5.625) * gy021200 + std::sqrt(5.625) * gy021020);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 8.0) * gy300110 + std::sqrt(135. / 8.0) * gy120110);
    gy[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(15. / 8.0) * gy300011 + std::sqrt(135. / 8.0) * gy120011);
    gy[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300002 -
         (std::sqrt(1.25 / 8.0) * gy300020 + std::sqrt(1.25 / 8.0) * gy300200) -
         std::sqrt(11.25 / 8.0) * gy120200 - std::sqrt(11.25 / 8.0) * gy120020 +
         std::sqrt(45.0 / 8.0) * gy120002);
    gy[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(15. / 8.0) * gy300101 + std::sqrt(135. / 8.0) * gy120101);
    gy[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gy300200 - std::sqrt(3.75 / 8.0) * gy300020 +
         std::sqrt(33.75 / 8.0) * gy120200 - std::sqrt(33.75 / 8.0) * gy120020);
    const double gz300200 = C18680 * C18923 * C18800;
    const double gz300020 = C18676 * C18715 * C18800;
    const double gz300002 = C18676 * C18923 * C19184;
    const double gz300110 = C18677 * C18716 * C18800;
    const double gz300101 = C18677 * C18923 * C19139;
    const double gz300011 = C18676 * C18716 * C19139;
    const double gz030200 = C18737 * C18736 * C18800;
    const double gz030020 = C18673 * C18751 * C18800;
    const double gz030002 = C18673 * C18736 * C19184;
    const double gz030110 = C19022 * C19037 * C18800;
    const double gz030101 = C19022 * C18736 * C19139;
    const double gz030011 = C18673 * C19037 * C19139;
    const double gz003200 = C18737 * C18923 * C18813;
    const double gz003020 = C18673 * C18715 * C18813;
    const double gz003002 = C18673 * C18923 *
                            ((C19160 * C18725) / C18684 +
                             (3 * C19161 + C18813 + 2 * ae * C19040) / C18691);
    const double gz003110 = C19022 * C18716 * C18813;
    const double gz003101 = C19022 * C18923 * C19160;
    const double gz003011 = C18673 * C18716 * C19160;
    const double gz210200 = C18824 * C18681 * C18800;
    const double gz210020 = C18675 * C18827 * C18800;
    const double gz210002 = C18675 * C18681 * C19184;
    const double gz210110 = C19035 * C19043 * C18800;
    const double gz210101 = C19035 * C18681 * C19139;
    const double gz210011 = C18675 * C19043 * C19139;
    const double gz201200 = C18824 * C18923 * C18790;
    const double gz201020 = C18675 * C18715 * C18790;
    const double gz201002 = C18675 * C18923 * C19197;
    const double gz201110 = C19035 * C18716 * C18790;
    const double gz201101 = C19035 * C18923 * C19134;
    const double gz201011 = C18675 * C18716 * C19134;
    const double gz021200 = C18737 * C19045 * C18790;
    const double gz021020 = C18673 * C18855 * C18790;
    const double gz021002 = C18673 * C19045 * C19197;
    const double gz021110 = C19022 * C19038 * C18790;
    const double gz021101 = C19022 * C19045 * C19134;
    const double gz021011 = C18673 * C19038 * C19134;
    const double gz120200 = C18868 * C19045 * C18800;
    const double gz120020 = C18674 * C18855 * C18800;
    const double gz120002 = C18674 * C19045 * C19184;
    const double gz120110 = C19042 * C19038 * C18800;
    const double gz120101 = C19042 * C19045 * C19139;
    const double gz120011 = C18674 * C19038 * C19139;
    const double gz102200 = C18868 * C18923 * C18810;
    const double gz102020 = C18674 * C18715 * C18810;
    const double gz102002 = C18674 * C18923 * C19200;
    const double gz102110 = C19042 * C18716 * C18810;
    const double gz102101 = C19042 * C18923 * C19161;
    const double gz102011 = C18674 * C18716 * C19161;
    const double gz012200 = C18737 * C18681 * C18810;
    const double gz012020 = C18673 * C18827 * C18810;
    const double gz012002 = C18673 * C18681 * C19200;
    const double gz012110 = C19022 * C19043 * C18810;
    const double gz012101 = C19022 * C18681 * C19161;
    const double gz012011 = C18673 * C19043 * C19161;
    const double gz111200 = C18868 * C18681 * C18790;
    const double gz111020 = C18674 * C18827 * C18790;
    const double gz111002 = C18674 * C18681 * C19197;
    const double gz111110 = C19042 * C19043 * C18790;
    const double gz111101 = C19042 * C18681 * C19134;
    const double gz111011 = C18674 * C19043 * C19134;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(135. / 8.0) * gz210110 - std::sqrt(15. / 8.0) * gz030110);
    gz[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(135. / 8.0) * gz210011 - std::sqrt(15. / 8.0) * gz030011);
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(1.25 / 8.0) * gz030200 + std::sqrt(1.25 / 8.0) * gz030020 -
         std::sqrt(5.0 / 8.0) * gz030002 - std::sqrt(11.25 / 8.0) * gz210200 -
         std::sqrt(11.25 / 8.0) * gz210020 + std::sqrt(45. / 8.0) * gz210002);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(135. / 8.0) * gz210101 - std::sqrt(15. / 8.0) * gz030101);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gz030020 - std::sqrt(3.75 / 8.0) * gz030200 +
         std::sqrt(33.75 / 8.0) * gz210200 - std::sqrt(33.75 / 8.0) * gz210020);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(45.) * gz111110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(45.) * gz111011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(15.0) * gz111002 -
              (std::sqrt(3.75) * gz111020 + std::sqrt(3.75) * gz111200));
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(45.) * gz111101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(11.25) * gz111200 - std::sqrt(11.25) * gz111020);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(18.) * gz012110 + std::sqrt(9. / 8.0) * gz210110 +
               std::sqrt(9. / 8.0) * gz030110);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(18.) * gz012011 + std::sqrt(9. / 8.0) * gz210011 +
               std::sqrt(9. / 8.0) * gz030011);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz030200 + std::sqrt(0.75 / 8.0) * gz030020 -
         std::sqrt(3.0 / 8.0) * gz030002 + std::sqrt(0.75 / 8.0) * gz210200 +
         std::sqrt(0.75 / 8.0) * gz210020 - std::sqrt(3.0 / 8.0) * gz210002 +
         std::sqrt(1.5) * gz012200 + std::sqrt(1.5) * gz012020 -
         std::sqrt(6.0) * gz012002);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        -cc * (std::sqrt(18.) * gz012101 + std::sqrt(9. / 8.0) * gz210101 +
               std::sqrt(9. / 8.0) * gz030101);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gz030020 - std::sqrt(2.25 / 8.0) * gz030200 -
         std::sqrt(2.25 / 8.0) * gz210200 + std::sqrt(2.25 / 8.0) * gz210020 -
         std::sqrt(4.5) * gz012200 + std::sqrt(4.5) * gz012020);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gz003110 - std::sqrt(6.75) * gz201110 -
              std::sqrt(6.75) * gz021110);
    gz[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gz003011 - std::sqrt(6.75) * gz201011 -
              std::sqrt(6.75) * gz021011);
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz003200 - 0.5 * gz003020 + gz003002 + 0.75 * gz201200 +
              0.75 * gz201020 - 1.5 * gz201002 + 0.75 * gz021200 +
              0.75 * gz021020 - 1.5 * gz021002);
    gz[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz003101 - std::sqrt(6.75) * gz201101 -
              std::sqrt(6.75) * gz021101);
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz003200 - std::sqrt(0.75) * gz003020 -
              std::sqrt(1.6875) * gz201200 + std::sqrt(1.6875) * gz201020 -
              std::sqrt(1.6875) * gz021200 + std::sqrt(1.6875) * gz021020);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(18.) * gz102110 - (std::sqrt(9. / 8.0) * gz120110 +
                                           std::sqrt(9. / 8.0) * gz300110));
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(18.) * gz102011 - (std::sqrt(9. / 8.0) * gz120011 +
                                           std::sqrt(9. / 8.0) * gz300011));
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(0.75 / 8.0) * gz300200 + std::sqrt(0.75 / 8.0) * gz300020 -
         std::sqrt(3.0 / 8.0) * gz300002 + std::sqrt(0.75 / 8.0) * gz120200 +
         std::sqrt(0.75 / 8.0) * gz120020 - std::sqrt(3.0 / 8.0) * gz120002 -
         std::sqrt(1.5) * gz102200 - std::sqrt(1.5) * gz102020 +
         std::sqrt(6.0) * gz102002);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(18.) * gz102101 - (std::sqrt(9. / 8.0) * gz120101 +
                                           std::sqrt(9. / 8.0) * gz300101));
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(2.25 / 8.0) * gz300020 - std::sqrt(2.25 / 8.0) * gz300200 -
         std::sqrt(2.25 / 8.0) * gz120200 + std::sqrt(2.25 / 8.0) * gz120020 +
         std::sqrt(4.5) * gz102200 - std::sqrt(4.5) * gz102020);
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(22.5) * gz201110 - std::sqrt(22.5) * gz021110);
    gz[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(22.5) * gz201011 - std::sqrt(22.5) * gz021011);
    gz[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gz201002 -
              (std::sqrt(1.875) * gz201020 + std::sqrt(1.875) * gz201200) +
              std::sqrt(1.875) * gz021200 + std::sqrt(1.875) * gz021020 -
              std::sqrt(7.5) * gz021002);
    gz[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(22.5) * gz201101 - std::sqrt(22.5) * gz021101);
    gz[(Ai + 5) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(5.625) * gz201200 - std::sqrt(5.625) * gz201020 -
              std::sqrt(5.625) * gz021200 + std::sqrt(5.625) * gz021020);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 8.0) * gz300110 + std::sqrt(135. / 8.0) * gz120110);
    gz[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(15. / 8.0) * gz300011 + std::sqrt(135. / 8.0) * gz120011);
    gz[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300002 -
         (std::sqrt(1.25 / 8.0) * gz300020 + std::sqrt(1.25 / 8.0) * gz300200) -
         std::sqrt(11.25 / 8.0) * gz120200 - std::sqrt(11.25 / 8.0) * gz120020 +
         std::sqrt(45.0 / 8.0) * gz120002);
    gz[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(15. / 8.0) * gz300101 + std::sqrt(135. / 8.0) * gz120101);
    gz[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(3.75 / 8.0) * gz300200 - std::sqrt(3.75 / 8.0) * gz300020 +
         std::sqrt(33.75 / 8.0) * gz120200 - std::sqrt(33.75 / 8.0) * gz120020);
}

// Automatically generated, do not edit
