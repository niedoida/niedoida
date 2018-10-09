/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_31(double ae,
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
    const double C21364 = ae + be;
    const double C21366 = Pi / C21364;
    const double C21367 = std::sqrt(C21366);
    const double C21370 = std::pow(C21364, 2);
    const double C21369 = be * xAB;
    const double C21376 = 2. * C21364;
    const double C21375 = std::pow(C21369, 2);
    const double C21378 = C21367 / C21376;
    const double C21377 = C21367 * C21375;
    const double C21379 = C21377 / C21370;
    const double C21380 = C21379 + C21378;
    const double C21385 = be * yAB;
    const double C21389 = std::pow(C21385, 2);
    const double C21390 = C21367 * C21389;
    const double C21391 = C21390 / C21370;
    const double C21392 = C21391 + C21378;
    const double C21394 = be * zAB;
    const double C21397 = std::pow(C21394, 2);
    const double C21398 = C21367 * C21397;
    const double C21399 = C21398 / C21370;
    const double C21400 = C21399 + C21378;
    const double C21418 = std::pow(C21394, 2);
    const double C21417 = C21367 * C21394;
    const double C21416 = std::pow(C21385, 2);
    const double C21415 = C21367 * C21385;
    const double C21414 = ae * zAB;
    const double C21413 = ae * yAB;
    const double C21412 = ae * xAB;
    const double C21411 = 2. * C21370;
    const double C21410 = C21367 * C21369;
    const double C21409 = 2. * C21364;
    const double C21408 = be * xAB;
    const double C21424 = C21367 * C21418;
    const double C21423 = -2. * C21417;
    const double C21422 = C21367 * C21416;
    const double C21421 = -2. * C21415;
    const double C21420 = -2. * C21410;
    const double C21419 = C21367 / C21409;
    const double C21429 = C21424 / C21370;
    const double C21428 = C21423 / C21411;
    const double C21427 = C21422 / C21370;
    const double C21426 = C21421 / C21411;
    const double C21425 = C21420 / C21411;
    const double C21431 = C21429 + C21378;
    const double C21430 = C21427 + C21378;
    const double C20729 = std::sqrt(Pi / (ae + be));
    const double C20730 = -(std::sqrt(Pi / C21364) * C21408) / C21364;
    const double C20731 =
        (C21367 * std::pow(C21408, 2)) / std::pow(C21364, 2) + C21419;
    const double C20732 =
        C21425 -
        (((C21367 * std::pow(C21369, 2)) / C21370 + C21419) * C21369) / C21364;
    const double C20735 = -(C21367 * be * yAB) / C21364;
    const double C20736 =
        ((C21425 - (C21380 * C21369) / C21364) * C21412) / C21364 +
        (3. * C21380) / C21376;
    const double C20737 = -(C21367 * be * zAB) / C21364;
    const double C20899 = (C21367 * C21413) / C21364;
    const double C20928 = (C21367 * C21414) / C21364;
    const double C20957 = C21426 - (C21430 * C21385) / C21364;
    const double C20959 = (C21367 * C21412) / C21364;
    const double C21049 =
        ((C21426 - (C21392 * C21385) / C21364) * C21413) / C21364 +
        (3. * C21392) / C21376;
    const double C21093 = C21428 - (C21431 * C21394) / C21364;
    const double C21171 =
        ((C21428 - (C21400 * C21394) / C21364) * C21414) / C21364 +
        (3. * C21400) / C21376;
    const double C21213 = (C21380 * C21412) / C21364 + C21425;
    const double C21233 = C21378 - (C21413 * C21415) / C21370;
    const double C21259 = C21378 - (C21414 * C21417) / C21370;
    const double C21281 = (C21392 * C21413) / C21364 + C21426;
    const double C21303 = C21378 - (C21412 * C21410) / C21370;
    const double C21331 = (C21400 * C21414) / C21364 + C21428;
    const double C20750 = ae * C20737;
    const double C20749 = ae * C20735;
    const double C20748 = be * zAB;
    const double C20747 = be * yAB;
    const double C20746 = std::pow(ae, 2);
    const double C20745 = ae * C20732;
    const double C20744 = ae * xAB;
    const double C20743 = be * C20730;
    const double C20742 = be * C20731;
    const double C20741 = be * xAB;
    const double C20740 = ae * C20730;
    const double C20739 = ae + be;
    const double C20738 = be * C20729;
    const double C20765 = 2 * C20750;
    const double C20764 = 2 * C20749;
    const double C20763 = std::pow(C20741, 2);
    const double C20762 = C20741 / C20739;
    const double C20761 = std::pow(C20739, 2);
    const double C20760 = C20748 / C20739;
    const double C20759 = Pi / C20739;
    const double C20758 = C20747 / C20739;
    const double C20757 = 2 * C20745;
    const double C20756 = 2 * C20743;
    const double C20755 = 2 * C20740;
    const double C20754 = 2 * C20742;
    const double C20753 = C20740 * C20741;
    const double C20752 = 2. * C20739;
    const double C20751 = 2 * C20738;
    const double C20775 = 2. * C20761;
    const double C20774 = std::pow(C20762, 2);
    const double C20773 = std::pow(C20760, 2);
    const double C20772 = be * C20755;
    const double C20771 = std::sqrt(C20759);
    const double C20770 = 1 / C20752;
    const double C20769 = std::pow(C20758, 2);
    const double C20768 = C20755 - C20756;
    const double C20767 = 2 * C20753;
    const double C20766 = -C20751;
    const double C20785 = C20771 / C20752;
    const double C20784 = C20771 * C20763;
    const double C20783 = C20774 + C20770;
    const double C20782 = C20771 * C20741;
    const double C20781 = C20773 + C20770;
    const double C20780 = 4 * C20772;
    const double C20779 = C20769 + C20770;
    const double C20778 = C20768 / C20752;
    const double C20777 = C20767 / C20739;
    const double C20776 = C20766 / C20752;
    const double C20793 = -2. * C20782;
    const double C20792 = C20784 / C20761;
    const double C20791 = C20746 * C20783;
    const double C20790 = ae * C20782;
    const double C20789 = C20746 * C20781;
    const double C20788 = -C20780;
    const double C20787 = C20746 * C20779;
    const double C20786 = C20776 - C20777;
    const double C20805 = C20793 / C20739;
    const double C20804 = C20793 / C20775;
    const double C20803 = C20792 + C20785;
    const double C20802 = 2 * C20791;
    const double C20801 = -2 * C20790;
    const double C20800 = 2 * C20789;
    const double C20799 = be * C20786;
    const double C20798 = C20788 / C20752;
    const double C20797 = ae * C20786;
    const double C20796 = 2 * C20787;
    const double C20795 = C20786 * C20741;
    const double C20794 = 2 * C20786;
    const double C20817 = 3. * C20803;
    const double C20816 = C20803 * C20741;
    const double C20815 = ae * C20803;
    const double C20814 = ae - C20802;
    const double C20813 = be * C20801;
    const double C20812 = ae - C20800;
    const double C20811 = 4 * C20799;
    const double C20810 = C20797 * C20741;
    const double C20809 = 2 * C20797;
    const double C20808 = ae - C20796;
    const double C20807 = C20795 / C20739;
    const double C20806 = C20794 - C20754;
    const double C20829 = C20817 / C20752;
    const double C20828 = C20816 / C20739;
    const double C20827 = 2 * C20815;
    const double C20826 = C20814 * C20771;
    const double C20825 = C20813 / C20761;
    const double C20824 = C20812 * C20771;
    const double C20823 = C20809 - C20811;
    const double C20822 = 2 * C20810;
    const double C20821 = be * C20809;
    const double C20820 = C20808 * C20771;
    const double C20819 = C20778 - C20807;
    const double C20818 = C20806 / C20752;
    const double C20838 = C20804 - C20828;
    const double C20837 = C20827 - C20771;
    const double C20836 = C20826 / C20752;
    const double C20835 = C20826 * C20741;
    const double C20834 = C20823 / C20752;
    const double C20833 = C20822 / C20739;
    const double C20832 = 6 * C20821;
    const double C20831 = 3 * C20819;
    const double C20830 = C20819 * C20741;
    const double C20846 = C20838 * C20744;
    const double C20845 = ae * C20838;
    const double C20844 = C20837 * be;
    const double C20843 = C20835 / C20739;
    const double C20842 = C20798 - C20833;
    const double C20841 = -C20832;
    const double C20840 = C20831 + C20757;
    const double C20839 = C20830 / C20739;
    const double C20856 = C20846 / C20739;
    const double C20855 = 2 * C20845;
    const double C20854 = C20844 / C20739;
    const double C20853 = C20825 - C20843;
    const double C20852 = be * C20842;
    const double C20851 = C20842 * C20741;
    const double C20850 = ae * C20842;
    const double C20849 = C20841 / C20752;
    const double C20848 = C20840 / C20752;
    const double C20847 = C20818 - C20839;
    const double C20865 = C20856 + C20829;
    const double C20864 = C20855 - C20805;
    const double C20863 = C20853 * C20741;
    const double C20862 = C20853 / C20739;
    const double C20861 = 6 * C20852;
    const double C20860 = 2 * C20850;
    const double C20859 = C20851 / C20739;
    const double C20858 = C20850 * C20741;
    const double C20857 = C20847 * C20744;
    const double C20872 = be * C20865;
    const double C20871 = C20864 * be;
    const double C20870 = C20863 / C20739;
    const double C20869 = C20860 - C20861;
    const double C20868 = C20834 - C20859;
    const double C20867 = 2 * C20858;
    const double C20866 = C20857 / C20739;
    const double C20878 = C20872 * ae;
    const double C20877 = C20871 / C20739;
    const double C20876 = C20836 - C20870;
    const double C20875 = C20869 / C20752;
    const double C20874 = C20867 / C20739;
    const double C20873 = C20866 + C20848;
    const double C20881 = 2 * C20878;
    const double C20880 = C20876 + C20854;
    const double C20879 = C20849 - C20874;
    const double C20885 = C20881 / C20739;
    const double C20884 = 3 * C20880;
    const double C20883 = C20880 * C20741;
    const double C20882 = C20879 * C20741;
    const double C20888 = C20884 / C20752;
    const double C20887 = C20883 / C20739;
    const double C20886 = C20882 / C20739;
    const double C20890 = C20862 - C20887;
    const double C20889 = C20875 - C20886;
    const double C20891 = C20890 + C20877;
    const double C20892 = C20891 * C20744;
    const double C20893 = C20892 / C20739;
    const double C20894 = C20893 + C20888;
    const double C20895 = C20894 + C20885;
    const double C20903 = C20749 * C20747;
    const double C20902 = be * C21367;
    const double C20901 = ae * C21367;
    const double C20900 = ae * yAB;
    const double C20909 = 2 * C20903;
    const double C20908 = 2 * C20902;
    const double C20907 = 2. * C20901;
    const double C20906 = C20749 * C20900;
    const double C20905 = C20771 * C20900;
    const double C20904 = C20820 * C20900;
    const double C20915 = C20909 / C20739;
    const double C20914 = -C20908;
    const double C20913 = C20907 / C20752;
    const double C20912 = 2 * C20906;
    const double C20911 = be * C20905;
    const double C20910 = C20904 / C20739;
    const double C20918 = C20914 / C20752;
    const double C20917 = C20912 / C20739;
    const double C20916 = 2 * C20911;
    const double C20921 = C20918 - C20915;
    const double C20920 = C20917 + C20913;
    const double C20919 = ae * C20916;
    const double C20923 = ae * C20921;
    const double C20922 = C20919 / C20761;
    const double C20924 = C20910 + C20922;
    const double C20932 = C20750 * C20748;
    const double C20931 = be * C21367;
    const double C20930 = ae * C21367;
    const double C20929 = ae * zAB;
    const double C20938 = 2 * C20932;
    const double C20937 = 2 * C20931;
    const double C20936 = 2. * C20930;
    const double C20935 = C20750 * C20929;
    const double C20934 = C20771 * C20929;
    const double C20933 = C20824 * C20929;
    const double C20944 = C20938 / C20739;
    const double C20943 = -C20937;
    const double C20942 = C20936 / C20752;
    const double C20941 = 2 * C20935;
    const double C20940 = be * C20934;
    const double C20939 = C20933 / C20739;
    const double C20947 = C20943 / C20752;
    const double C20946 = C20941 / C20739;
    const double C20945 = 2 * C20940;
    const double C20950 = C20947 - C20944;
    const double C20949 = C20946 + C20942;
    const double C20948 = ae * C20945;
    const double C20952 = ae * C20950;
    const double C20951 = C20948 / C20761;
    const double C20953 = C20939 + C20951;
    const double C20974 = 2 * C20923;
    const double C20973 = C20923 * C20747;
    const double C20972 = be * C20764;
    const double C20971 = C20921 * C20747;
    const double C20970 = be * C20735;
    const double C20969 = be * C21430;
    const double C20968 = 2 * C20921;
    const double C20967 = C20771 * C20744;
    const double C20966 = C20826 * C20744;
    const double C20965 = std::pow(C20747, 2);
    const double C20964 = C20820 / C20752;
    const double C20963 = C20820 * C20747;
    const double C20962 = C20771 * C20747;
    const double C20961 = ae * C20729;
    const double C20960 = C20740 * C20744;
    const double C20988 = be * C20974;
    const double C20987 = 2 * C20973;
    const double C20986 = 4 * C20972;
    const double C20985 = C20971 / C20739;
    const double C20984 = 2 * C20970;
    const double C20983 = 2 * C20969;
    const double C20982 = be * C20967;
    const double C20981 = C20966 / C20739;
    const double C20980 = -2. * C20962;
    const double C20979 = C20771 * C20965;
    const double C20978 = C20963 / C20739;
    const double C20977 = ae * C20962;
    const double C20976 = 2. * C20961;
    const double C20975 = 2 * C20960;
    const double C21000 = 6 * C20988;
    const double C20999 = C20987 / C20739;
    const double C20998 = -C20986;
    const double C20997 = C20764 - C20984;
    const double C20996 = C20968 - C20983;
    const double C20995 = 2 * C20982;
    const double C20994 = C20980 / C20739;
    const double C20993 = C20980 / C20775;
    const double C20992 = C20979 / C20761;
    const double C20991 = -2 * C20977;
    const double C20990 = C20976 / C20752;
    const double C20989 = C20975 / C20739;
    const double C21008 = -C21000;
    const double C21007 = C20998 / C20752;
    const double C21006 = C20997 / C20752;
    const double C21005 = C20996 / C20752;
    const double C21004 = ae * C20995;
    const double C21003 = C20992 + C20785;
    const double C21002 = be * C20991;
    const double C21001 = C20989 + C20990;
    const double C21015 = C21008 / C20752;
    const double C21014 = C21007 - C20999;
    const double C21013 = C21006 - C20985;
    const double C21012 = C21004 / C20761;
    const double C21011 = C21003 * C20747;
    const double C21010 = ae * C21003;
    const double C21009 = C21002 / C20761;
    const double C21021 = ae * C21014;
    const double C21020 = C21013 * C20747;
    const double C21019 = C20981 + C21012;
    const double C21018 = C21011 / C20739;
    const double C21017 = 2 * C21010;
    const double C21016 = C21009 - C20978;
    const double C21027 = C21021 * C20747;
    const double C21026 = C21020 / C20739;
    const double C21025 = C20993 - C21018;
    const double C21024 = C21017 - C20771;
    const double C21023 = C21016 * C20747;
    const double C21022 = C21016 / C20739;
    const double C21032 = 2 * C21027;
    const double C21031 = C21005 - C21026;
    const double C21030 = ae * C21025;
    const double C21029 = C21024 * be;
    const double C21028 = C21023 / C20739;
    const double C21036 = C21032 / C20739;
    const double C21035 = 2 * C21030;
    const double C21034 = C21029 / C20739;
    const double C21033 = C20964 - C21028;
    const double C21039 = C21015 - C21036;
    const double C21038 = C21035 - C20994;
    const double C21037 = C21033 + C21034;
    const double C21041 = C21038 * be;
    const double C21040 = C21037 * C20747;
    const double C21043 = C21041 / C20739;
    const double C21042 = C21040 / C20739;
    const double C21044 = C21022 - C21042;
    const double C21045 = C21044 + C21043;
    const double C21061 = C21039 * C20747;
    const double C21060 = be * C21014;
    const double C21059 = 2 * C21021;
    const double C21058 = C21014 * C20747;
    const double C21057 = be * C20921;
    const double C21056 = ae * C20957;
    const double C21055 = 3 * C21013;
    const double C21054 = C21031 * C20900;
    const double C21053 = 3. * C21003;
    const double C21052 = C21025 * C20900;
    const double C21051 = 3 * C21037;
    const double C21050 = C21045 * C20900;
    const double C21071 = C21061 / C20739;
    const double C21070 = 6 * C21060;
    const double C21069 = C21058 / C20739;
    const double C21068 = 4 * C21057;
    const double C21067 = 2 * C21056;
    const double C21066 = C21054 / C20739;
    const double C21065 = C21053 / C20752;
    const double C21064 = C21052 / C20739;
    const double C21063 = C21051 / C20752;
    const double C21062 = C21050 / C20739;
    const double C21076 = C21059 - C21070;
    const double C21075 = C20974 - C21068;
    const double C21074 = C21055 + C21067;
    const double C21073 = C21064 + C21065;
    const double C21072 = C21062 + C21063;
    const double C21080 = C21076 / C20752;
    const double C21079 = C21075 / C20752;
    const double C21078 = C21074 / C20752;
    const double C21077 = be * C21073;
    const double C21084 = C21080 - C21071;
    const double C21083 = C21079 - C21069;
    const double C21082 = C21066 + C21078;
    const double C21081 = C21077 * ae;
    const double C21085 = 2 * C21081;
    const double C21086 = C21085 / C20739;
    const double C21087 = C21072 + C21086;
    const double C21105 = 2 * C20952;
    const double C21104 = C20952 * C20748;
    const double C21103 = be * C20765;
    const double C21102 = C20950 * C20748;
    const double C21101 = be * C20737;
    const double C21100 = be * C21431;
    const double C21099 = 2 * C20950;
    const double C21098 = std::pow(C20748, 2);
    const double C21097 = C20824 / C20752;
    const double C21096 = C20824 * C20748;
    const double C21095 = C20771 * C20748;
    const double C21115 = be * C21105;
    const double C21114 = 2 * C21104;
    const double C21113 = 4 * C21103;
    const double C21112 = C21102 / C20739;
    const double C21111 = 2 * C21101;
    const double C21110 = 2 * C21100;
    const double C21109 = -2. * C21095;
    const double C21108 = C20771 * C21098;
    const double C21107 = C21096 / C20739;
    const double C21106 = ae * C21095;
    const double C21124 = 6 * C21115;
    const double C21123 = C21114 / C20739;
    const double C21122 = -C21113;
    const double C21121 = C20765 - C21111;
    const double C21120 = C21099 - C21110;
    const double C21119 = C21109 / C20739;
    const double C21118 = C21109 / C20775;
    const double C21117 = C21108 / C20761;
    const double C21116 = -2 * C21106;
    const double C21130 = -C21124;
    const double C21129 = C21122 / C20752;
    const double C21128 = C21121 / C20752;
    const double C21127 = C21120 / C20752;
    const double C21126 = C21117 + C20785;
    const double C21125 = be * C21116;
    const double C21136 = C21130 / C20752;
    const double C21135 = C21129 - C21123;
    const double C21134 = C21128 - C21112;
    const double C21133 = C21126 * C20748;
    const double C21132 = ae * C21126;
    const double C21131 = C21125 / C20761;
    const double C21141 = ae * C21135;
    const double C21140 = C21134 * C20748;
    const double C21139 = C21133 / C20739;
    const double C21138 = 2 * C21132;
    const double C21137 = C21131 - C21107;
    const double C21147 = C21141 * C20748;
    const double C21146 = C21140 / C20739;
    const double C21145 = C21118 - C21139;
    const double C21144 = C21138 - C20771;
    const double C21143 = C21137 * C20748;
    const double C21142 = C21137 / C20739;
    const double C21152 = 2 * C21147;
    const double C21151 = C21127 - C21146;
    const double C21150 = ae * C21145;
    const double C21149 = C21144 * be;
    const double C21148 = C21143 / C20739;
    const double C21156 = C21152 / C20739;
    const double C21155 = 2 * C21150;
    const double C21154 = C21149 / C20739;
    const double C21153 = C21097 - C21148;
    const double C21159 = C21136 - C21156;
    const double C21158 = C21155 - C21119;
    const double C21157 = C21153 + C21154;
    const double C21161 = C21158 * be;
    const double C21160 = C21157 * C20748;
    const double C21163 = C21161 / C20739;
    const double C21162 = C21160 / C20739;
    const double C21164 = C21142 - C21162;
    const double C21165 = C21164 + C21163;
    const double C21183 = C21159 * C20748;
    const double C21182 = be * C21135;
    const double C21181 = 2 * C21141;
    const double C21180 = C21135 * C20748;
    const double C21179 = be * C20950;
    const double C21178 = ae * C21093;
    const double C21177 = 3 * C21134;
    const double C21176 = C21151 * C20929;
    const double C21175 = 3. * C21126;
    const double C21174 = C21145 * C20929;
    const double C21173 = 3 * C21157;
    const double C21172 = C21165 * C20929;
    const double C21193 = C21183 / C20739;
    const double C21192 = 6 * C21182;
    const double C21191 = C21180 / C20739;
    const double C21190 = 4 * C21179;
    const double C21189 = 2 * C21178;
    const double C21188 = C21176 / C20739;
    const double C21187 = C21175 / C20752;
    const double C21186 = C21174 / C20739;
    const double C21185 = C21173 / C20752;
    const double C21184 = C21172 / C20739;
    const double C21198 = C21181 - C21192;
    const double C21197 = C21105 - C21190;
    const double C21196 = C21177 + C21189;
    const double C21195 = C21186 + C21187;
    const double C21194 = C21184 + C21185;
    const double C21202 = C21198 / C20752;
    const double C21201 = C21197 / C20752;
    const double C21200 = C21196 / C20752;
    const double C21199 = be * C21195;
    const double C21206 = C21202 - C21193;
    const double C21205 = C21201 - C21191;
    const double C21204 = C21188 + C21200;
    const double C21203 = C21199 * ae;
    const double C21207 = 2 * C21203;
    const double C21208 = C21207 / C20739;
    const double C21209 = C21194 + C21208;
    const double C21217 = C20803 * C20744;
    const double C21216 = C20880 * C20744;
    const double C21215 = ae * C20731;
    const double C21214 = C20819 * C20744;
    const double C21221 = C21217 / C20739;
    const double C21220 = C21216 + C20853;
    const double C21219 = 2 * C21215;
    const double C21218 = C21214 / C20739;
    const double C21223 = C21221 + C20804;
    const double C21222 = C20794 + C21219;
    const double C21225 = be * C21223;
    const double C21224 = C21222 / C20752;
    const double C21227 = C21225 * ae;
    const double C21226 = C21218 + C21224;
    const double C21228 = 2 * C21227;
    const double C21229 = C21220 + C21228;
    const double C21237 = 4. * C20749;
    const double C21236 = C20921 * C20900;
    const double C21235 = C20900 * C20962;
    const double C21234 = C21016 * C20900;
    const double C21241 = C21237 / C20752;
    const double C21240 = C21236 / C20739;
    const double C21239 = C21235 / C20761;
    const double C21238 = C21234 / C20739;
    const double C21244 = C21240 + C21241;
    const double C21243 = C20785 - C21239;
    const double C21242 = C21238 + C20964;
    const double C21245 = be * C21243;
    const double C21246 = C21245 * ae;
    const double C21247 = 2 * C21246;
    const double C21248 = C21247 / C20739;
    const double C21249 = C21242 + C21248;
    const double C21263 = 4. * C20750;
    const double C21262 = C20950 * C20929;
    const double C21261 = C20929 * C21095;
    const double C21260 = C21137 * C20929;
    const double C21267 = C21263 / C20752;
    const double C21266 = C21262 / C20739;
    const double C21265 = C21261 / C20761;
    const double C21264 = C21260 / C20739;
    const double C21270 = C21266 + C21267;
    const double C21269 = C20785 - C21265;
    const double C21268 = C21264 + C21097;
    const double C21271 = be * C21269;
    const double C21272 = C21271 * ae;
    const double C21273 = 2 * C21272;
    const double C21274 = C21273 / C20739;
    const double C21275 = C21268 + C21274;
    const double C21285 = ae * C21430;
    const double C21284 = C21013 * C20900;
    const double C21283 = C21003 * C20900;
    const double C21282 = C21037 * C20900;
    const double C21289 = 2 * C21285;
    const double C21288 = C21284 / C20739;
    const double C21287 = C21283 / C20739;
    const double C21286 = C21282 + C21016;
    const double C21291 = C20968 + C21289;
    const double C21290 = C21287 + C20993;
    const double C21293 = C21291 / C20752;
    const double C21292 = be * C21290;
    const double C21295 = C21288 + C21293;
    const double C21294 = C21292 * ae;
    const double C21296 = 2 * C21294;
    const double C21297 = C21286 + C21296;
    const double C21307 = C20744 * C20782;
    const double C21306 = C20853 * C20744;
    const double C21305 = 4. * C20740;
    const double C21304 = C20786 * C20744;
    const double C21311 = C21307 / C20761;
    const double C21310 = C21306 / C20739;
    const double C21309 = C21305 / C20752;
    const double C21308 = C21304 / C20739;
    const double C21314 = C20785 - C21311;
    const double C21313 = C21310 + C20836;
    const double C21312 = C21308 + C21309;
    const double C21315 = be * C21314;
    const double C21316 = C21315 * ae;
    const double C21317 = 2 * C21316;
    const double C21318 = C21317 / C20739;
    const double C21319 = C21313 + C21318;
    const double C21335 = ae * C21431;
    const double C21334 = C21134 * C20929;
    const double C21333 = C21126 * C20929;
    const double C21332 = C21157 * C20929;
    const double C21339 = 2 * C21335;
    const double C21338 = C21334 / C20739;
    const double C21337 = C21333 / C20739;
    const double C21336 = C21332 + C21137;
    const double C21341 = C21099 + C21339;
    const double C21340 = C21337 + C21118;
    const double C21343 = C21341 / C20752;
    const double C21342 = be * C21340;
    const double C21345 = C21338 + C21343;
    const double C21344 = C21342 * ae;
    const double C21346 = 2 * C21344;
    const double C21347 = C21336 + C21346;
    const double C21473 = ae * C21205;
    const double C21472 = C21206 * C20929;
    const double C21471 = C21193 - C21202;
    const double C21470 = C20874 - C20849;
    const double C21469 = 6 * C20850;
    const double C21468 = C20879 * C20744;
    const double C21467 = ae * C21083;
    const double C21466 = C21084 * C20900;
    const double C21465 = C21071 - C21080;
    const double C21464 = 6 * C21141;
    const double C21463 = C21159 * C20929;
    const double C21462 = C21156 - C21136;
    const double C21461 = 6 * C21021;
    const double C21460 = C21039 * C20900;
    const double C21459 = C20886 - C20875;
    const double C21458 = C21036 - C21015;
    const double C21457 = ae * C20868;
    const double C21456 = C20889 * C20744;
    const double C21455 = be * C21205;
    const double C21454 = 2 * C21159;
    const double C21453 = C21206 * C20748;
    const double C21452 = -2 * C20850;
    const double C21451 = -2 * C21141;
    const double C21450 = be * C21083;
    const double C21449 = 2 * C21039;
    const double C21448 = C21084 * C20747;
    const double C21447 = ae * C20809;
    const double C21446 = C20850 * C20744;
    const double C21445 = ae * C21105;
    const double C21444 = C21141 * C20929;
    const double C21443 = ae * C20974;
    const double C21442 = C21021 * C20900;
    const double C21441 = C20918 - C20944;
    const double C21440 = -2 * C21021;
    const double C21439 = C20889 * C20741;
    const double C21438 = be * C20868;
    const double C21437 = 2 * C20879;
    const double C21498 = 6 * C21473;
    const double C21497 = C21472 / C20739;
    const double C21496 = C20860 + C21469;
    const double C21495 = C21468 / C20739;
    const double C21494 = 6 * C21467;
    const double C21493 = C21466 / C20739;
    const double C21492 = C21181 + C21464;
    const double C21491 = C21463 / C20739;
    const double C21490 = C21059 + C21461;
    const double C21489 = C21460 / C20739;
    const double C21488 = 6 * C21457;
    const double C21487 = C21456 / C20739;
    const double C21486 = 6 * C21455;
    const double C21485 = C21453 / C20739;
    const double C21484 = 6 * C21450;
    const double C21483 = C21448 / C20739;
    const double C21482 = 6. * C21447;
    const double C21481 = 2 * C21446;
    const double C21480 = 6. * C21445;
    const double C21479 = 2 * C21444;
    const double C21478 = 6. * C21443;
    const double C21477 = 2 * C21442;
    const double C21476 = ae * C21441;
    const double C21475 = C21439 / C20739;
    const double C21474 = 6 * C21438;
    const double C21514 = C21454 + C21498;
    const double C21513 = C21496 / C20752;
    const double C21512 = C21449 + C21494;
    const double C21511 = C21492 / C20752;
    const double C21510 = C21490 / C20752;
    const double C21509 = C21437 + C21488;
    const double C21508 = C21454 - C21486;
    const double C21507 = C21449 - C21484;
    const double C21506 = C21482 / C20752;
    const double C21505 = C21481 / C20739;
    const double C21504 = C21480 / C20752;
    const double C21503 = C21479 / C20739;
    const double C21502 = C21478 / C20752;
    const double C21501 = C21477 / C20739;
    const double C21500 = C21476 * C20748;
    const double C21499 = C21437 - C21474;
    const double C21527 = C21514 / C20752;
    const double C21526 = C21495 + C21513;
    const double C21525 = C21512 / C20752;
    const double C21524 = C21491 + C21511;
    const double C21523 = C21489 + C21510;
    const double C21522 = C21509 / C20752;
    const double C21521 = C21508 / C20752;
    const double C21520 = C21507 / C20752;
    const double C21519 = C21505 + C21506;
    const double C21518 = C21503 + C21504;
    const double C21517 = C21501 + C21502;
    const double C21516 = 2 * C21500;
    const double C21515 = C21499 / C20752;
    const double C21534 = C21497 + C21527;
    const double C21533 = C21493 + C21525;
    const double C21532 = C21487 + C21522;
    const double C21531 = C21485 - C21521;
    const double C21530 = C21483 - C21520;
    const double C21529 = C21475 - C21515;
    const double C21528 = C21516 / C20739;
    const double C21535 = C21129 - C21528;
    const double C21536 = ae * C21535;
    const double C21537 = -2 * C21536;
    const double gx300100 =
        C20873 * C20820 * C21367 -
        ((((C21515 - C21475) * C20744) / C20739 +
          (3 * C20889 + 6 * ae *
                            ((2 * C20842 - 4 * be * C20819) / C20752 -
                             (C20868 * C20741) / C20739)) /
              C20752) *
         std::pow(C21367, 2)) /
            2.0 +
        C20873 * C21367 * C20824;
    const double gx300010 = (C21367 * C20899 * C21529) / 2.0 +
                            C20847 * C20924 * C21367 + C20847 * C20899 * C20824;
    const double gx300001 = (C20928 * C21367 * C21529) / 2.0 +
                            C20847 * C20820 * C20928 + C20847 * C21367 * C20953;
    const double gx030100 = C21001 * C21045 * C21367 -
                            (C21367 * C20957 * C21519) / 2.0 +
                            C21001 * C20957 * C20824;
    const double gx030010 = (C21367 * C21049 * C21452) / 2.0 +
                            2 * C20740 * C21087 * C21367 +
                            2 * C20740 * C21049 * C20824;
    const double gx030001 = (C20928 * C20957 * C21452) / 2.0 +
                            2 * C20740 * C21045 * C20928 +
                            2 * C20740 * C20957 * C20953;
    const double gx003100 = C21001 * C20820 * C21093 -
                            (C21093 * C21367 * C21519) / 2.0 +
                            C21001 * C21367 * C21165;
    const double gx003010 = (C21093 * C20899 * C21452) / 2.0 +
                            2 * C20740 * C20924 * C21093 +
                            2 * C20740 * C20899 * C21165;
    const double gx003001 = (C21171 * C21367 * C21452) / 2.0 +
                            2 * C20740 * C20820 * C21171 +
                            2 * C20740 * C21367 * C21209;
    const double gx210100 = C21226 * C21016 * C21367 -
                            (C21367 * C20735 * C21532) / 2.0 +
                            C21226 * C20735 * C20824;
    const double gx210010 = (C21367 * C21233 * C21459) / 2.0 +
                            C20819 * C21249 * C21367 + C20819 * C21233 * C20824;
    const double gx210001 = (C20928 * C20735 * C21459) / 2.0 +
                            C20819 * C21016 * C20928 + C20819 * C20735 * C20953;
    const double gx201100 = C21226 * C20820 * C20737 -
                            (C20737 * C21367 * C21532) / 2.0 +
                            C21226 * C21367 * C21137;
    const double gx201010 = (C20737 * C20899 * C21459) / 2.0 +
                            C20819 * C20924 * C20737 + C20819 * C20899 * C21137;
    const double gx201001 = (C21259 * C21367 * C21459) / 2.0 +
                            C20819 * C20820 * C21259 + C20819 * C21367 * C21275;
    const double gx021100 = C21001 * C21037 * C20737 -
                            (C20737 * C21430 * C21519) / 2.0 +
                            C21001 * C21430 * C21137;
    const double gx021010 = (C20737 * C21281 * C21452) / 2.0 +
                            (C20737 * 2 * C20740 * C21297) / C20739 +
                            2 * C20740 * C21281 * C21137;
    const double gx021001 = (C21259 * C21430 * C21452) / 2.0 +
                            2 * C20740 * C21037 * C21259 +
                            2 * C20740 * C21430 * C21275;
    const double gx120100 = C21312 * C21037 * C21367 -
                            (C21367 * C21430 * C21526) / 2.0 +
                            C21312 * C21430 * C20824;
    const double gx120010 = (C21367 * C21281 * C21470) / 2.0 +
                            (C21367 * C20786 * C21297) / C20739 +
                            C20786 * C21281 * C20824;
    const double gx120001 = (C20928 * C21430 * C21470) / 2.0 +
                            C20786 * C21037 * C20928 + C20786 * C21430 * C20953;
    const double gx102100 = C21312 * C20820 * C21431 -
                            (C21431 * C21367 * C21526) / 2.0 +
                            C21312 * C21367 * C21157;
    const double gx102010 = (C21431 * C20899 * C21470) / 2.0 +
                            C20786 * C20924 * C21431 + C20786 * C20899 * C21157;
    const double gx102001 = (C21331 * C21367 * C21470) / 2.0 +
                            C20786 * C20820 * C21331 +
                            (C20786 * C21367 * C21347) / C20739;
    const double gx012100 = C21001 * C21016 * C21431 -
                            (C21431 * C20735 * C21519) / 2.0 +
                            C21001 * C20735 * C21157;
    const double gx012010 = (C21431 * C21233 * C21452) / 2.0 +
                            2 * C20740 * C21249 * C21431 +
                            2 * C20740 * C21233 * C21157;
    const double gx012001 = (C21331 * C20735 * C21452) / 2.0 +
                            2 * C20740 * C21016 * C21331 +
                            (2 * C20740 * C20735 * C21347) / C20739;
    const double gx111100 = C21312 * C21016 * C20737 -
                            (C20737 * C20735 * C21526) / 2.0 +
                            C21312 * C20735 * C21137;
    const double gx111010 = (C20737 * C21233 * C21470) / 2.0 +
                            C20786 * C21249 * C20737 + C20786 * C21233 * C21137;
    const double gx111001 = (C21259 * C20735 * C21470) / 2.0 +
                            C20786 * C21016 * C21259 + C20786 * C20735 * C21275;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210100 - std::sqrt(5.0 / 8.0) * gx030100);
    gx[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210010 - std::sqrt(5.0 / 8.0) * gx030010);
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(45. / 8.0) * gx210001 - std::sqrt(5.0 / 8.0) * gx030001);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gx111100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx111010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(15.0) * gx111001;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gx012100 + std::sqrt(3.0 / 8.0) * gx210100 +
               std::sqrt(3.0 / 8.0) * gx030100);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(6.0) * gx012010 + std::sqrt(3.0 / 8.0) * gx210010 +
               std::sqrt(3.0 / 8.0) * gx030010);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx012001 + std::sqrt(3.0 / 8.0) * gx210001 +
               std::sqrt(3.0 / 8.0) * gx030001);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gx003100 - 1.5 * gx201100 - 1.5 * gx021100);
    gx[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (gx003010 - 1.5 * gx201010 - 1.5 * gx021010);
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (gx003001 - 1.5 * gx201001 - 1.5 * gx021001);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gx102100 - (std::sqrt(3.0 / 8.0) * gx120100 +
                                           std::sqrt(3.0 / 8.0) * gx300100));
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(6.0) * gx102010 - (std::sqrt(3.0 / 8.0) * gx120010 +
                                           std::sqrt(3.0 / 8.0) * gx300010));
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.0) * gx102001 - (std::sqrt(3.0 / 8.0) * gx120001 +
                                           std::sqrt(3.0 / 8.0) * gx300001));
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gx201100 - std::sqrt(7.5) * gx021100);
    gx[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(7.5) * gx201010 - std::sqrt(7.5) * gx021010);
    gx[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gx201001 - std::sqrt(7.5) * gx021001);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300100 + std::sqrt(45.0 / 8.0) * gx120100);
    gx[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300010 + std::sqrt(45.0 / 8.0) * gx120010);
    gx[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300001 + std::sqrt(45.0 / 8.0) * gx120001);
    const double gy300100 = C20895 * C20764 * C21367 +
                            (C21367 * C20736 * C21440) / 2.0 +
                            C20736 * C20764 * C20824;
    const double gy300010 = C20891 * C20920 * C21367 -
                            (C21367 * C20732 * C21517) / 2.0 +
                            C20732 * C20920 * C20824;
    const double gy300001 = C20891 * C20764 * C20928 +
                            (C20928 * C20732 * C21440) / 2.0 +
                            C20732 * C20764 * C20953;
    const double gy030100 = C21019 * C21031 * C21367 +
                            (C21367 * C20959 * C21530) / 2.0 +
                            C20959 * C21031 * C20824;
    const double gy030010 =
        C20826 * C21082 * C21367 -
        (C21367 * C20729 *
         (((C21520 - C21483) * C20900) / C20739 +
          (3 * C21084 + 6 * ae *
                            ((2 * C21014 - 4 * be * C21013) / C20752 -
                             (C21083 * C20747) / C20739)) /
              C20752)) /
            2.0 +
        C20729 * C21082 * C20824;
    const double gy030001 = C20826 * C21031 * C20928 +
                            (C20928 * C20729 * C21530) / 2.0 +
                            C20729 * C21031 * C20953;
    const double gy003100 = C21019 * C20764 * C21093 +
                            (C21093 * C20959 * C21440) / 2.0 +
                            C20959 * C20764 * C21165;
    const double gy003010 = C20826 * C20920 * C21093 -
                            (C21093 * C20729 * C21517) / 2.0 +
                            C20729 * C20920 * C21165;
    const double gy003001 = C20826 * C20764 * C21171 +
                            (C21171 * C20729 * C21440) / 2.0 +
                            C20729 * C20764 * C21209;
    const double gy210100 = (C21367 * C20921 * C21229) / C20739 +
                            (C21367 * C21213 * C21458) / 2.0 +
                            C21213 * C20921 * C20824;
    const double gy210010 = C20880 * C21244 * C21367 -
                            (C21367 * C20731 * C21523) / 2.0 +
                            C20731 * C21244 * C20824;
    const double gy210001 = C20880 * C20921 * C20928 +
                            (C20928 * C20731 * C21458) / 2.0 +
                            C20731 * C20921 * C20953;
    const double gy201100 = (C20737 * 2 * C20749 * C21229) / C20739 +
                            (C20737 * C21213 * C21440) / 2.0 +
                            C21213 * C20764 * C21137;
    const double gy201010 = C20880 * C20920 * C20737 -
                            (C20737 * C20731 * C21517) / 2.0 +
                            C20731 * C20920 * C21137;
    const double gy201001 = C20880 * C20764 * C21259 +
                            (C21259 * C20731 * C21440) / 2.0 +
                            C20731 * C20764 * C21275;
    const double gy021100 = C21019 * C21013 * C20737 +
                            (C20737 * C20959 * C21465) / 2.0 +
                            C20959 * C21013 * C21137;
    const double gy021010 = C20826 * C21295 * C20737 -
                            (C20737 * C20729 * C21533) / 2.0 +
                            C20729 * C21295 * C21137;
    const double gy021001 = C20826 * C21013 * C21259 +
                            (C21259 * C20729 * C21465) / 2.0 +
                            C20729 * C21013 * C21275;
    const double gy120100 = C21319 * C21013 * C21367 +
                            (C21367 * C21303 * C21465) / 2.0 +
                            C21303 * C21013 * C20824;
    const double gy120010 = C20853 * C21295 * C21367 -
                            (C21367 * C20730 * C21533) / 2.0 +
                            C20730 * C21295 * C20824;
    const double gy120001 = C20853 * C21013 * C20928 +
                            (C20928 * C20730 * C21465) / 2.0 +
                            C20730 * C21013 * C20953;
    const double gy102100 = C21319 * C20764 * C21431 +
                            (C21431 * C21303 * C21440) / 2.0 +
                            C21303 * C20764 * C21157;
    const double gy102010 = C20853 * C20920 * C21431 -
                            (C21431 * C20730 * C21517) / 2.0 +
                            C20730 * C20920 * C21157;
    const double gy102001 = C20853 * C20764 * C21331 +
                            (C21331 * C20730 * C21440) / 2.0 +
                            (C20730 * C20764 * C21347) / C20739;
    const double gy012100 = C21019 * C20921 * C21431 +
                            (C21431 * C20959 * C21458) / 2.0 +
                            C20959 * C20921 * C21157;
    const double gy012010 = C20826 * C21244 * C21431 -
                            (C21431 * C20729 * C21523) / 2.0 +
                            C20729 * C21244 * C21157;
    const double gy012001 = C20826 * C20921 * C21331 +
                            (C21331 * C20729 * C21458) / 2.0 +
                            (C20729 * C20921 * C21347) / C20739;
    const double gy111100 = C21319 * C20921 * C20737 +
                            (C20737 * C21303 * C21458) / 2.0 +
                            C21303 * C20921 * C21137;
    const double gy111010 = C20853 * C21244 * C20737 -
                            (C20737 * C20730 * C21523) / 2.0 +
                            C20730 * C21244 * C21137;
    const double gy111001 = C20853 * C20921 * C21259 +
                            (C21259 * C20730 * C21458) / 2.0 +
                            C20730 * C20921 * C21275;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210100 - std::sqrt(5.0 / 8.0) * gy030100);
    gy[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210010 - std::sqrt(5.0 / 8.0) * gy030010);
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(45. / 8.0) * gy210001 - std::sqrt(5.0 / 8.0) * gy030001);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gy111100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy111010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(15.0) * gy111001;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gy012100 + std::sqrt(3.0 / 8.0) * gy210100 +
               std::sqrt(3.0 / 8.0) * gy030100);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(6.0) * gy012010 + std::sqrt(3.0 / 8.0) * gy210010 +
               std::sqrt(3.0 / 8.0) * gy030010);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy012001 + std::sqrt(3.0 / 8.0) * gy210001 +
               std::sqrt(3.0 / 8.0) * gy030001);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gy003100 - 1.5 * gy201100 - 1.5 * gy021100);
    gy[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (gy003010 - 1.5 * gy201010 - 1.5 * gy021010);
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (gy003001 - 1.5 * gy201001 - 1.5 * gy021001);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gy102100 - (std::sqrt(3.0 / 8.0) * gy120100 +
                                           std::sqrt(3.0 / 8.0) * gy300100));
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(6.0) * gy102010 - (std::sqrt(3.0 / 8.0) * gy120010 +
                                           std::sqrt(3.0 / 8.0) * gy300010));
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.0) * gy102001 - (std::sqrt(3.0 / 8.0) * gy120001 +
                                           std::sqrt(3.0 / 8.0) * gy300001));
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gy201100 - std::sqrt(7.5) * gy021100);
    gy[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(7.5) * gy201010 - std::sqrt(7.5) * gy021010);
    gy[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gy201001 - std::sqrt(7.5) * gy021001);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300100 + std::sqrt(45.0 / 8.0) * gy120100);
    gy[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300010 + std::sqrt(45.0 / 8.0) * gy120010);
    gy[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300001 + std::sqrt(45.0 / 8.0) * gy120001);
    const double gz300100 = C20895 * C21367 * C20765 +
                            C20736 * C20820 * C20765 +
                            (C20736 * C21367 * C21537) / 2.0;
    const double gz300010 = C20891 * C20899 * C20765 +
                            C20732 * C20924 * C20765 +
                            (C20732 * C20899 * C21537) / 2.0;
    const double gz300001 = C20891 * C21367 * C20949 +
                            C20732 * C20820 * C20949 -
                            (C20732 * C21367 * C21518) / 2.0;
    const double gz030100 = C21019 * C20957 * C20765 +
                            C20959 * C21045 * C20765 +
                            (C20959 * C20957 * C21451) / 2.0;
    const double gz030010 = C20826 * C21049 * C20765 +
                            C20729 * C21087 * C20765 +
                            (C20729 * C21049 * C21451) / 2.0;
    const double gz030001 = C20826 * C20957 * C20949 +
                            C20729 * C21045 * C20949 -
                            (C20729 * C20957 * C21518) / 2.0;
    const double gz003100 = C21019 * C21367 * C21151 +
                            C20959 * C20820 * C21151 +
                            (C20959 * C21367 * C21531) / 2.0;
    const double gz003010 = C20826 * C20899 * C21151 +
                            C20729 * C20924 * C21151 +
                            (C20729 * C20899 * C21531) / 2.0;
    const double gz003001 =
        C20826 * C21367 * C21204 + C20729 * C20820 * C21204 -
        (C20729 * C21367 *
         (((C21521 - C21485) * C20929) / C20739 +
          (3 * C21206 + 6 * ae *
                            ((2 * C21135 - 4 * be * C21134) / C20752 -
                             (C21205 * C20748) / C20739)) /
              C20752)) /
            2.0;
    const double gz210100 = (2 * C20750 * C20735 * C21229) / C20739 +
                            C21213 * C21016 * C20765 +
                            (C21213 * C20735 * C21451) / 2.0;
    const double gz210010 = C20880 * C21233 * C20765 +
                            C20731 * C21249 * C20765 +
                            (C20731 * C21233 * C21451) / 2.0;
    const double gz210001 = C20880 * C20735 * C20949 +
                            C20731 * C21016 * C20949 -
                            (C20731 * C20735 * C21518) / 2.0;
    const double gz201100 = (C20950 * C21367 * C21229) / C20739 +
                            C21213 * C20820 * C20950 +
                            (C21213 * C21367 * C21462) / 2.0;
    const double gz201010 = C20880 * C20899 * C20950 +
                            C20731 * C20924 * C20950 +
                            (C20731 * C20899 * C21462) / 2.0;
    const double gz201001 = C20880 * C21367 * C21270 +
                            C20731 * C20820 * C21270 -
                            (C20731 * C21367 * C21524) / 2.0;
    const double gz021100 = C21019 * C21430 * C20950 +
                            C20959 * C21037 * C20950 +
                            (C20959 * C21430 * C21462) / 2.0;
    const double gz021010 = C20826 * C21281 * C20950 +
                            (C20950 * C20729 * C21297) / C20739 +
                            (C20729 * C21281 * C21462) / 2.0;
    const double gz021001 = C20826 * C21430 * C21270 +
                            C20729 * C21037 * C21270 -
                            (C20729 * C21430 * C21524) / 2.0;
    const double gz120100 = C21319 * C21430 * C20765 +
                            C21303 * C21037 * C20765 +
                            (C21303 * C21430 * C21451) / 2.0;
    const double gz120010 = C20853 * C21281 * C20765 +
                            (2 * C20750 * C20730 * C21297) / C20739 +
                            (C20730 * C21281 * C21451) / 2.0;
    const double gz120001 = C20853 * C21430 * C20949 +
                            C20730 * C21037 * C20949 -
                            (C20730 * C21430 * C21518) / 2.0;
    const double gz102100 = C21319 * C21367 * C21134 +
                            C21303 * C20820 * C21134 +
                            (C21303 * C21367 * C21471) / 2.0;
    const double gz102010 = C20853 * C20899 * C21134 +
                            C20730 * C20924 * C21134 +
                            (C20730 * C20899 * C21471) / 2.0;
    const double gz102001 = C20853 * C21367 * C21345 +
                            C20730 * C20820 * C21345 -
                            (C20730 * C21367 * C21534) / 2.0;
    const double gz012100 = C21019 * C20735 * C21134 +
                            C20959 * C21016 * C21134 +
                            (C20959 * C20735 * C21471) / 2.0;
    const double gz012010 = C20826 * C21233 * C21134 +
                            C20729 * C21249 * C21134 +
                            (C20729 * C21233 * C21471) / 2.0;
    const double gz012001 = C20826 * C20735 * C21345 +
                            C20729 * C21016 * C21345 -
                            (C20729 * C20735 * C21534) / 2.0;
    const double gz111100 = C21319 * C20735 * C20950 +
                            C21303 * C21016 * C20950 +
                            (C21303 * C20735 * C21462) / 2.0;
    const double gz111010 = C20853 * C21233 * C20950 +
                            C20730 * C21249 * C20950 +
                            (C20730 * C21233 * C21462) / 2.0;
    const double gz111001 = C20853 * C20735 * C21270 +
                            C20730 * C21016 * C21270 -
                            (C20730 * C20735 * C21524) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210100 - std::sqrt(5.0 / 8.0) * gz030100);
    gz[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210010 - std::sqrt(5.0 / 8.0) * gz030010);
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(45. / 8.0) * gz210001 - std::sqrt(5.0 / 8.0) * gz030001);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(15.0) * gz111100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz111010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(15.0) * gz111001;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -cc * (std::sqrt(6.0) * gz012100 + std::sqrt(3.0 / 8.0) * gz210100 +
               std::sqrt(3.0 / 8.0) * gz030100);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(6.0) * gz012010 + std::sqrt(3.0 / 8.0) * gz210010 +
               std::sqrt(3.0 / 8.0) * gz030010);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz012001 + std::sqrt(3.0 / 8.0) * gz210001 +
               std::sqrt(3.0 / 8.0) * gz030001);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc * (gz003100 - 1.5 * gz201100 - 1.5 * gz021100);
    gz[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (gz003010 - 1.5 * gz201010 - 1.5 * gz021010);
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (gz003001 - 1.5 * gz201001 - 1.5 * gz021001);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(6.0) * gz102100 - (std::sqrt(3.0 / 8.0) * gz120100 +
                                           std::sqrt(3.0 / 8.0) * gz300100));
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(6.0) * gz102010 - (std::sqrt(3.0 / 8.0) * gz120010 +
                                           std::sqrt(3.0 / 8.0) * gz300010));
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.0) * gz102001 - (std::sqrt(3.0 / 8.0) * gz120001 +
                                           std::sqrt(3.0 / 8.0) * gz300001));
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(7.5) * gz201100 - std::sqrt(7.5) * gz021100);
    gz[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(7.5) * gz201010 - std::sqrt(7.5) * gz021010);
    gz[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(7.5) * gz201001 - std::sqrt(7.5) * gz021001);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300100 + std::sqrt(45.0 / 8.0) * gz120100);
    gz[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300010 + std::sqrt(45.0 / 8.0) * gz120010);
    gz[(Ai + 6) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300001 + std::sqrt(45.0 / 8.0) * gz120001);
}

// Automatically generated, do not edit
