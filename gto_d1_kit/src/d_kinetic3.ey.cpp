/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_03(double ae,
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
    const double C1085 = ae + be;
    const double C1089 = Pi / C1085;
    const double C1090 = std::sqrt(C1089);
    const double C1096 = std::pow(C1085, 2);
    const double C1095 = ae * xAB;
    const double C1099 = ae * yAB;
    const double C1103 = ae * zAB;
    const double C1114 = C1090 * C1103;
    const double C1113 = std::pow(C1103, 2);
    const double C1112 = C1090 * C1099;
    const double C1111 = std::pow(C1099, 2);
    const double C1110 = 2. * C1096;
    const double C1109 = 2. * C1085;
    const double C1108 = ae * xAB;
    const double C1107 = Pi / C1085;
    const double C1118 = C1090 * C1113;
    const double C1117 = C1090 * C1111;
    const double C1116 = C1090 / C1109;
    const double C1115 = std::sqrt(C1107);
    const double C1120 = C1118 / C1096;
    const double C1119 = C1117 / C1096;
    const double C1122 = C1120 + C1116;
    const double C1121 = C1119 + C1116;
    const double C735 = -(C1115 * be * xAB) / C1085;
    const double C737 = (C1115 * C1108) / C1085;
    const double C738 =
        (C1090 * std::pow(C1108, 2)) / std::pow(C1085, 2) + C1116;
    const double C741 = -(C1090 * be * yAB) / C1085;
    const double C742 =
        (((C1090 * std::pow(C1095, 2)) / C1096 + C1116) * C1095) / C1085 +
        (2. * C1090 * C1095) / C1110;
    const double C743 = -(C1090 * be * zAB) / C1085;
    const double C877 = (C1121 * C1099) / C1085 + (2. * C1112) / C1110;
    const double C878 = C1112 / C1085;
    const double C974 = (C1122 * C1103) / C1085 + (2. * C1114) / C1110;
    const double C975 = C1114 / C1085;
    const double C756 = ae * C743;
    const double C755 = ae * C741;
    const double C754 = be * zAB;
    const double C753 = be * xAB;
    const double C752 = be * C1115;
    const double C751 = be * yAB;
    const double C750 = std::pow(ae, 2);
    const double C749 = ae * C738;
    const double C748 = ae * C737;
    const double C747 = ae * C1115;
    const double C746 = ae + be;
    const double C745 = ae * xAB;
    const double C744 = ae * C735;
    const double C772 = 2 * C756;
    const double C771 = 2 * C755;
    const double C770 = std::pow(C745, 2);
    const double C769 = std::pow(C746, 2);
    const double C768 = C753 / C746;
    const double C767 = C754 / C746;
    const double C766 = C744 * C753;
    const double C765 = 2 * C752;
    const double C764 = Pi / C746;
    const double C763 = C751 / C746;
    const double C762 = 2 * C749;
    const double C761 = 2 * C748;
    const double C760 = 2 * C744;
    const double C759 = 2. * C746;
    const double C758 = 2. * C747;
    const double C757 = C744 * C745;
    const double C785 = 2. * C769;
    const double C784 = std::pow(C768, 2);
    const double C783 = std::pow(C767, 2);
    const double C782 = ae * C760;
    const double C781 = 2 * C766;
    const double C780 = -C765;
    const double C779 = be * C760;
    const double C778 = std::sqrt(C764);
    const double C777 = 1 / C759;
    const double C776 = std::pow(C763, 2);
    const double C775 = C760 + C761;
    const double C774 = C758 / C759;
    const double C773 = 2 * C757;
    const double C797 = C778 / C759;
    const double C796 = C778 * C770;
    const double C795 = C778 * C745;
    const double C794 = C784 + C777;
    const double C793 = C783 + C777;
    const double C792 = 4. * C782;
    const double C791 = C781 / C746;
    const double C790 = C780 / C759;
    const double C789 = 4 * C779;
    const double C788 = C776 + C777;
    const double C787 = C775 / C759;
    const double C786 = C773 / C746;
    const double C807 = 2. * C795;
    const double C806 = C796 / C769;
    const double C805 = be * C795;
    const double C804 = C750 * C794;
    const double C803 = C750 * C793;
    const double C802 = C792 / C759;
    const double C801 = C790 - C791;
    const double C800 = -C789;
    const double C799 = C750 * C788;
    const double C798 = C786 + C774;
    const double C818 = C807 / C746;
    const double C817 = C807 / C785;
    const double C816 = C806 + C797;
    const double C815 = 2 * C805;
    const double C814 = 2 * C804;
    const double C813 = 2 * C803;
    const double C812 = ae * C801;
    const double C811 = C800 / C759;
    const double C810 = 2 * C799;
    const double C809 = 2 * C798;
    const double C808 = C798 * C745;
    const double C829 = C816 * C745;
    const double C828 = be * C816;
    const double C827 = ae * C815;
    const double C826 = ae - C814;
    const double C825 = ae - C813;
    const double C824 = C812 * C745;
    const double C823 = 2 * C812;
    const double C822 = C812 * C753;
    const double C821 = ae - C810;
    const double C820 = C809 + C762;
    const double C819 = C808 / C746;
    const double C840 = C829 / C746;
    const double C839 = 2 * C828;
    const double C838 = C827 / C769;
    const double C837 = C826 * C778;
    const double C836 = C825 * C778;
    const double C835 = 2 * C824;
    const double C834 = ae * C823;
    const double C833 = 2 * C822;
    const double C832 = C821 * C778;
    const double C831 = C820 / C759;
    const double C830 = C819 + C787;
    const double C848 = C840 + C817;
    const double C847 = C839 - C778;
    const double C846 = C837 / C759;
    const double C845 = C837 * C745;
    const double C844 = C835 / C746;
    const double C843 = 6. * C834;
    const double C842 = C833 / C746;
    const double C841 = C830 * C745;
    const double C855 = be * C848;
    const double C854 = C847 * ae;
    const double C853 = C845 / C746;
    const double C852 = C844 + C802;
    const double C851 = C843 / C759;
    const double C850 = C811 - C842;
    const double C849 = C841 / C746;
    const double C860 = 2 * C855;
    const double C859 = C854 / C746;
    const double C858 = C853 + C838;
    const double C857 = ae * C850;
    const double C856 = C849 + C831;
    const double C863 = C860 - C818;
    const double C862 = C858 * C745;
    const double C861 = C857 * C745;
    const double C866 = C863 * ae;
    const double C865 = C862 / C746;
    const double C864 = 2 * C861;
    const double C868 = C865 + C846;
    const double C867 = C864 / C746;
    const double C870 = C868 + C859;
    const double C869 = C867 + C851;
    const double C871 = C870 * C745;
    const double C872 = C871 + C858;
    const double C873 = C872 + C866;
    const double C888 = ae * C771;
    const double C887 = C755 * C751;
    const double C886 = be * C1090;
    const double C885 = be * C771;
    const double C884 = ae * C1121;
    const double C883 = ae * C878;
    const double C882 = ae * C1090;
    const double C881 = C832 / C759;
    const double C880 = ae * yAB;
    const double C899 = 4. * C888;
    const double C898 = 2 * C887;
    const double C897 = 2 * C886;
    const double C896 = 4 * C885;
    const double C895 = 2 * C884;
    const double C894 = 2 * C883;
    const double C893 = 2. * C882;
    const double C892 = C755 * C880;
    const double C891 = std::pow(C880, 2);
    const double C890 = C778 * C880;
    const double C889 = C832 * C880;
    const double C910 = C899 / C759;
    const double C909 = C898 / C746;
    const double C908 = -C897;
    const double C907 = -C896;
    const double C906 = C771 + C894;
    const double C905 = C893 / C759;
    const double C904 = 2 * C892;
    const double C903 = 2. * C890;
    const double C902 = C778 * C891;
    const double C901 = be * C890;
    const double C900 = C889 / C746;
    const double C918 = C908 / C759;
    const double C917 = C907 / C759;
    const double C916 = C906 / C759;
    const double C915 = C904 / C746;
    const double C914 = C903 / C746;
    const double C913 = C903 / C785;
    const double C912 = C902 / C769;
    const double C911 = 2 * C901;
    const double C922 = C918 - C909;
    const double C921 = C915 + C905;
    const double C920 = C912 + C797;
    const double C919 = ae * C911;
    const double C928 = ae * C922;
    const double C927 = 2 * C921;
    const double C926 = C921 * C880;
    const double C925 = C920 * C880;
    const double C924 = be * C920;
    const double C923 = C919 / C769;
    const double C936 = C928 * C880;
    const double C935 = 2 * C928;
    const double C934 = C928 * C751;
    const double C933 = C927 + C895;
    const double C932 = C926 / C746;
    const double C931 = C925 / C746;
    const double C930 = 2 * C924;
    const double C929 = C900 + C923;
    const double C944 = 2 * C936;
    const double C943 = ae * C935;
    const double C942 = 2 * C934;
    const double C941 = C933 / C759;
    const double C940 = C932 + C916;
    const double C939 = C931 + C913;
    const double C938 = C930 - C778;
    const double C937 = C929 * C880;
    const double C951 = C944 / C746;
    const double C950 = 6. * C943;
    const double C949 = C942 / C746;
    const double C948 = C940 * C880;
    const double C947 = be * C939;
    const double C946 = C938 * ae;
    const double C945 = C937 / C746;
    const double C958 = C951 + C910;
    const double C957 = C950 / C759;
    const double C956 = C917 - C949;
    const double C955 = C948 / C746;
    const double C954 = 2 * C947;
    const double C953 = C946 / C746;
    const double C952 = C945 + C881;
    const double C962 = ae * C956;
    const double C961 = C955 + C941;
    const double C960 = C954 - C914;
    const double C959 = C952 + C953;
    const double C965 = C962 * C880;
    const double C964 = C960 * ae;
    const double C963 = C959 * C880;
    const double C967 = 2 * C965;
    const double C966 = C963 + C929;
    const double C969 = C967 / C746;
    const double C968 = C966 + C964;
    const double C970 = C969 + C957;
    const double C985 = ae * C772;
    const double C984 = C756 * C754;
    const double C983 = be * C1090;
    const double C982 = be * C772;
    const double C981 = ae * C1122;
    const double C980 = ae * C975;
    const double C979 = ae * C1090;
    const double C978 = C836 / C759;
    const double C977 = ae * zAB;
    const double C996 = 4. * C985;
    const double C995 = 2 * C984;
    const double C994 = 2 * C983;
    const double C993 = 4 * C982;
    const double C992 = 2 * C981;
    const double C991 = 2 * C980;
    const double C990 = 2. * C979;
    const double C989 = C756 * C977;
    const double C988 = std::pow(C977, 2);
    const double C987 = C778 * C977;
    const double C986 = C836 * C977;
    const double C1007 = C996 / C759;
    const double C1006 = C995 / C746;
    const double C1005 = -C994;
    const double C1004 = -C993;
    const double C1003 = C772 + C991;
    const double C1002 = C990 / C759;
    const double C1001 = 2 * C989;
    const double C1000 = 2. * C987;
    const double C999 = C778 * C988;
    const double C998 = be * C987;
    const double C997 = C986 / C746;
    const double C1015 = C1005 / C759;
    const double C1014 = C1004 / C759;
    const double C1013 = C1003 / C759;
    const double C1012 = C1001 / C746;
    const double C1011 = C1000 / C746;
    const double C1010 = C1000 / C785;
    const double C1009 = C999 / C769;
    const double C1008 = 2 * C998;
    const double C1019 = C1015 - C1006;
    const double C1018 = C1012 + C1002;
    const double C1017 = C1009 + C797;
    const double C1016 = ae * C1008;
    const double C1025 = ae * C1019;
    const double C1024 = 2 * C1018;
    const double C1023 = C1018 * C977;
    const double C1022 = C1017 * C977;
    const double C1021 = be * C1017;
    const double C1020 = C1016 / C769;
    const double C1033 = C1025 * C977;
    const double C1032 = 2 * C1025;
    const double C1031 = C1025 * C754;
    const double C1030 = C1024 + C992;
    const double C1029 = C1023 / C746;
    const double C1028 = C1022 / C746;
    const double C1027 = 2 * C1021;
    const double C1026 = C997 + C1020;
    const double C1041 = 2 * C1033;
    const double C1040 = ae * C1032;
    const double C1039 = 2 * C1031;
    const double C1038 = C1030 / C759;
    const double C1037 = C1029 + C1013;
    const double C1036 = C1028 + C1010;
    const double C1035 = C1027 - C778;
    const double C1034 = C1026 * C977;
    const double C1048 = C1041 / C746;
    const double C1047 = 6. * C1040;
    const double C1046 = C1039 / C746;
    const double C1045 = C1037 * C977;
    const double C1044 = be * C1036;
    const double C1043 = C1035 * ae;
    const double C1042 = C1034 / C746;
    const double C1055 = C1048 + C1007;
    const double C1054 = C1047 / C759;
    const double C1053 = C1014 - C1046;
    const double C1052 = C1045 / C746;
    const double C1051 = 2 * C1044;
    const double C1050 = C1043 / C746;
    const double C1049 = C1042 + C978;
    const double C1059 = ae * C1053;
    const double C1058 = C1052 + C1038;
    const double C1057 = C1051 - C1011;
    const double C1056 = C1049 + C1050;
    const double C1062 = C1059 * C977;
    const double C1061 = C1057 * ae;
    const double C1060 = C1056 * C977;
    const double C1064 = 2 * C1062;
    const double C1063 = C1060 + C1026;
    const double C1066 = C1064 / C746;
    const double C1065 = C1063 + C1061;
    const double C1067 = C1066 + C1054;
    const double C1139 = -2 * C1059;
    const double C1138 = ae * C1055;
    const double C1137 = 2 * C1059;
    const double C1136 = C1067 * C977;
    const double C1135 = ae * C958;
    const double C1134 = 2 * C962;
    const double C1133 = C970 * C880;
    const double C1132 = -2 * C857;
    const double C1131 = C918 - C1006;
    const double C1130 = -2 * C962;
    const double C1129 = ae * C852;
    const double C1128 = 2 * C857;
    const double C1127 = C869 * C745;
    const double C1146 = 6 * C1138;
    const double C1145 = C1136 / C746;
    const double C1144 = 6 * C1135;
    const double C1143 = C1133 / C746;
    const double C1142 = ae * C1131;
    const double C1141 = 6 * C1129;
    const double C1140 = C1127 / C746;
    const double C1150 = C1137 + C1146;
    const double C1149 = C1134 + C1144;
    const double C1148 = C1142 * C754;
    const double C1147 = C1128 + C1141;
    const double C1154 = C1150 / C759;
    const double C1153 = C1149 / C759;
    const double C1152 = 2 * C1148;
    const double C1151 = C1147 / C759;
    const double C1158 = C1145 + C1154;
    const double C1157 = C1143 + C1153;
    const double C1156 = C1152 / C746;
    const double C1155 = C1140 + C1151;
    const double C1159 = C1014 - C1156;
    const double C1160 = ae * C1159;
    const double C1161 = -2 * C1160;
    const double gx000300 =
        C856 * C832 * C1090 -
        (((C1155 * C745) / C746 +
          (2 * C869 +
           6 * ae * ((C852 * C745) / C746 + (C823 + 4 * ae * C798) / C759)) /
              C759) *
         std::pow(C1090, 2)) /
            2.0 +
        C856 * C1090 * C836;
    const double gx000030 = (C1090 * C877 * C1132) / 2.0 +
                            (C1090 * 2 * C744 * C968) / C746 +
                            2 * C744 * C877 * C836;
    const double gx000003 = (C974 * C1090 * C1132) / 2.0 +
                            2 * C744 * C832 * C974 +
                            (2 * C744 * C1090 * C1065) / C746;
    const double gx000210 =
        C830 * C929 * C1090 - (C1090 * C878 * C1155) / 2.0 + C830 * C878 * C836;
    const double gx000201 = C830 * C832 * C975 - (C975 * C1090 * C1155) / 2.0 +
                            C830 * C1090 * C1026;
    const double gx000021 = (C975 * C1121 * C1132) / 2.0 +
                            2 * C744 * C959 * C975 + 2 * C744 * C1121 * C1026;
    const double gx000120 = C798 * C959 * C1090 - (C1090 * C1121 * C869) / 2.0 +
                            C798 * C1121 * C836;
    const double gx000102 = C798 * C832 * C1122 - (C1122 * C1090 * C869) / 2.0 +
                            C798 * C1090 * C1056;
    const double gx000012 = (C1122 * C878 * C1132) / 2.0 +
                            2 * C744 * C929 * C1122 + 2 * C744 * C878 * C1056;
    const double gx000111 =
        C798 * C929 * C975 - (C975 * C878 * C869) / 2.0 + C798 * C878 * C1026;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx000210 - std::sqrt(5.0 / 8.0) * gx000030);
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx000111;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx000012 + std::sqrt(3.0 / 8.0) * gx000210 +
               std::sqrt(3.0 / 8.0) * gx000030);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gx000003 - 1.5 * gx000201 - 1.5 * gx000021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx000102 - (std::sqrt(3.0 / 8.0) * gx000120 +
                                           std::sqrt(3.0 / 8.0) * gx000300));
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx000201 - std::sqrt(7.5) * gx000021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx000300 + std::sqrt(45.0 / 8.0) * gx000120);
    const double gy000300 = (C1090 * 2 * C755 * C873) / C746 +
                            (C1090 * C742 * C1130) / 2.0 + C742 * C771 * C836;
    const double gy000030 =
        C837 * C961 * C1090 -
        (C1090 * C1115 *
         ((C1157 * C880) / C746 +
          (2 * C970 +
           6 * ae * ((C958 * C880) / C746 + (C935 + 4 * ae * C921) / C759)) /
              C759)) /
            2.0 +
        C1115 * C961 * C836;
    const double gy000003 = C837 * C771 * C974 + (C974 * C1115 * C1130) / 2.0 +
                            (C1115 * C771 * C1065) / C746;
    const double gy000210 =
        C870 * C921 * C1090 - (C1090 * C738 * C970) / 2.0 + C738 * C921 * C836;
    const double gy000201 =
        C870 * C771 * C975 + (C975 * C738 * C1130) / 2.0 + C738 * C771 * C1026;
    const double gy000021 = C837 * C940 * C975 - (C975 * C1115 * C1157) / 2.0 +
                            C1115 * C940 * C1026;
    const double gy000120 =
        C858 * C940 * C1090 - (C1090 * C737 * C1157) / 2.0 + C737 * C940 * C836;
    const double gy000102 = C858 * C771 * C1122 + (C1122 * C737 * C1130) / 2.0 +
                            C737 * C771 * C1056;
    const double gy000012 = C837 * C921 * C1122 - (C1122 * C1115 * C970) / 2.0 +
                            C1115 * C921 * C1056;
    const double gy000111 =
        C858 * C921 * C975 - (C975 * C737 * C970) / 2.0 + C737 * C921 * C1026;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy000210 - std::sqrt(5.0 / 8.0) * gy000030);
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy000111;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy000012 + std::sqrt(3.0 / 8.0) * gy000210 +
               std::sqrt(3.0 / 8.0) * gy000030);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gy000003 - 1.5 * gy000201 - 1.5 * gy000021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy000102 - (std::sqrt(3.0 / 8.0) * gy000120 +
                                           std::sqrt(3.0 / 8.0) * gy000300));
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy000201 - std::sqrt(7.5) * gy000021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy000300 + std::sqrt(45.0 / 8.0) * gy000120);
    const double gz000300 = (2 * C756 * C1090 * C873) / C746 +
                            C742 * C832 * C772 + (C742 * C1090 * C1161) / 2.0;
    const double gz000030 = C837 * C877 * C772 +
                            (2 * C756 * C1115 * C968) / C746 +
                            (C1115 * C877 * C1161) / 2.0;
    const double gz000003 =
        C837 * C1090 * C1058 + C1115 * C832 * C1058 -
        (C1115 * C1090 *
         ((C1158 * C977) / C746 +
          (2 * C1067 +
           6 * ae * ((C1055 * C977) / C746 + (C1032 + 4 * ae * C1018) / C759)) /
              C759)) /
            2.0;
    const double gz000210 =
        C870 * C878 * C772 + C738 * C929 * C772 + (C738 * C878 * C1139) / 2.0;
    const double gz000201 = C870 * C1090 * C1018 + C738 * C832 * C1018 -
                            (C738 * C1090 * C1067) / 2.0;
    const double gz000021 = C837 * C1121 * C1018 + C1115 * C959 * C1018 -
                            (C1115 * C1121 * C1067) / 2.0;
    const double gz000120 =
        C858 * C1121 * C772 + C737 * C959 * C772 + (C737 * C1121 * C1139) / 2.0;
    const double gz000102 = C858 * C1090 * C1037 + C737 * C832 * C1037 -
                            (C737 * C1090 * C1158) / 2.0;
    const double gz000012 = C837 * C878 * C1037 + C1115 * C929 * C1037 -
                            (C1115 * C878 * C1158) / 2.0;
    const double gz000111 =
        C858 * C878 * C1018 + C737 * C929 * C1018 - (C737 * C878 * C1067) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz000210 - std::sqrt(5.0 / 8.0) * gz000030);
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz000111;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz000012 + std::sqrt(3.0 / 8.0) * gz000210 +
               std::sqrt(3.0 / 8.0) * gz000030);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gz000003 - 1.5 * gz000201 - 1.5 * gz000021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz000102 - (std::sqrt(3.0 / 8.0) * gz000120 +
                                           std::sqrt(3.0 / 8.0) * gz000300));
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz000201 - std::sqrt(7.5) * gz000021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz000300 + std::sqrt(45.0 / 8.0) * gz000120);
}

// Automatically generated, do not edit
