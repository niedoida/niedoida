/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_22(double ae,
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
    const double C5973 = ae + be;
    const double C5976 = Pi / C5973;
    const double C5977 = std::sqrt(C5976);
    const double C5980 = std::pow(C5973, 2);
    const double C5979 = be * xAB;
    const double C5987 = C5977 * C5979;
    const double C5986 = ae * xAB;
    const double C5985 = 2. * C5973;
    const double C5984 = std::pow(C5979, 2);
    const double C5989 = C5977 / C5985;
    const double C5988 = C5977 * C5984;
    const double C5990 = C5988 / C5980;
    const double C5991 = C5990 + C5989;
    const double C6003 = ae * yAB;
    const double C6002 = be * yAB;
    const double C6005 = C5977 * C6002;
    const double C6004 = std::pow(C6002, 2);
    const double C6006 = C5977 * C6004;
    const double C6007 = C6006 / C5980;
    const double C6008 = C6007 + C5989;
    const double C6013 = ae * zAB;
    const double C6012 = be * zAB;
    const double C6015 = C5977 * C6012;
    const double C6014 = std::pow(C6012, 2);
    const double C6016 = C5977 * C6014;
    const double C6017 = C6016 / C5980;
    const double C6018 = C6017 + C5989;
    const double C6042 = C6013 * C6015;
    const double C6041 = -2. * C6015;
    const double C6040 = C6018 * C6013;
    const double C6039 = C6003 * C6005;
    const double C6038 = -2. * C6005;
    const double C6037 = C6008 * C6003;
    const double C6036 = C5977 * C5986;
    const double C6035 = ae * zAB;
    const double C6034 = ae * yAB;
    const double C6033 = be * zAB;
    const double C6032 = be * yAB;
    const double C6031 = C5986 * C5987;
    const double C6030 = 2. * C5980;
    const double C6029 = 2. * C5973;
    const double C6028 = be * xAB;
    const double C6027 = Pi / C5973;
    const double C6052 = C6042 / C5980;
    const double C6051 = C6041 / C6030;
    const double C6050 = C6040 / C5973;
    const double C6049 = C6039 / C5980;
    const double C6048 = C6038 / C6030;
    const double C6047 = C6037 / C5973;
    const double C6046 = C6036 / C5973;
    const double C6045 = C6031 / C5980;
    const double C6044 = C5977 / C6029;
    const double C6043 = std::sqrt(C6027);
    const double C6057 = C5989 - C6052;
    const double C6056 = C6050 + C6051;
    const double C6055 = C5989 - C6049;
    const double C6054 = C6047 + C6048;
    const double C6053 = C5989 - C6045;
    const double C5808 = -(C6043 * C6028) / C5973;
    const double C5810 =
        (C5977 * std::pow(C6028, 2)) / std::pow(C5973, 2) + C6044;
    const double C5811 =
        (((C5977 * std::pow(C5979, 2)) / C5980 + C6044) * ae * xAB) / C5973 +
        (-2. * C5977 * C5979) / C6030;
    const double C5814 =
        (((C5991 * C5986) / C5973 + (-2. * C5987) / C6030) * C5986) / C5973 +
        (2 * C6053 + C5991) / C5985;
    const double C5815 = -(C5977 * C6032) / C5973;
    const double C5816 = -(C5977 * C6033) / C5973;
    const double C5841 = (C5977 * std::pow(C6034, 2)) / C5980 + C5989;
    const double C5842 = (C5977 * C6034) / C5973;
    const double C5848 = (C5977 * std::pow(C6035, 2)) / C5980 + C5989;
    const double C5849 = (C5977 * C6035) / C5973;
    const double C5862 = (C5977 * std::pow(C6032, 2)) / C5980 + C5989;
    const double C5863 = (C5977 * std::pow(C5986, 2)) / C5980 + C5989;
    const double C5868 = (C6054 * C6003) / C5973 + (2 * C6055 + C6008) / C5985;
    const double C5897 = (C5977 * std::pow(C6033, 2)) / C5980 + C5989;
    const double C5904 = (C6056 * C6013) / C5973 + (2 * C6057 + C6018) / C5985;
    const double C5932 =
        (C6053 * C5986) / C5973 + (C6046 - C5987 / C5973) / C5985;
    const double C5935 = (C6055 * C6003) / C5973 +
                         ((C5977 * C6003) / C5973 - C6005 / C5973) / C5985;
    const double C5951 = (C6057 * C6013) / C5973 +
                         ((C5977 * C6013) / C5973 - C6015 / C5973) / C5985;
    const double C5822 = ae * xAB;
    const double C5821 = be * xAB;
    const double C5820 = be * C6043;
    const double C5819 = ae + be;
    const double C5818 = be * C5808;
    const double C5817 = ae * C5808;
    const double C5827 = C5817 * C5821;
    const double C5826 = 2 * C5820;
    const double C5825 = 2. * C5819;
    const double C5824 = 2 * C5818;
    const double C5823 = 2 * C5817;
    const double C5830 = 2 * C5827;
    const double C5829 = -C5826;
    const double C5828 = C5823 - C5824;
    const double C5833 = C5830 / C5819;
    const double C5832 = C5829 / C5825;
    const double C5831 = C5828 / C5825;
    const double C5834 = C5832 - C5833;
    const double C5835 = C5834 * C5821;
    const double C5836 = C5835 / C5819;
    const double C5837 = C5831 - C5836;
    const double C5844 = ae * yAB;
    const double C5843 = ae * C5815;
    const double C5851 = ae * zAB;
    const double C5850 = ae * C5816;
    const double C5864 = be * yAB;
    const double C5873 = C5843 * C5864;
    const double C5872 = be * C5977;
    const double C5871 = be * C5815;
    const double C5870 = 2 * C5843;
    const double C5876 = 2 * C5873;
    const double C5875 = 2 * C5872;
    const double C5874 = 2 * C5871;
    const double C5879 = C5876 / C5819;
    const double C5878 = -C5875;
    const double C5877 = C5870 - C5874;
    const double C5881 = C5878 / C5825;
    const double C5880 = C5877 / C5825;
    const double C5882 = C5881 - C5879;
    const double C5883 = C5882 * C5864;
    const double C5884 = C5883 / C5819;
    const double C5885 = C5880 - C5884;
    const double C5898 = be * zAB;
    const double C5909 = C5850 * C5898;
    const double C5908 = be * C5977;
    const double C5907 = be * C5816;
    const double C5906 = 2 * C5850;
    const double C5912 = 2 * C5909;
    const double C5911 = 2 * C5908;
    const double C5910 = 2 * C5907;
    const double C5915 = C5912 / C5819;
    const double C5914 = -C5911;
    const double C5913 = C5906 - C5910;
    const double C5917 = C5914 / C5825;
    const double C5916 = C5913 / C5825;
    const double C5918 = C5917 - C5915;
    const double C5919 = C5918 * C5898;
    const double C5920 = C5919 / C5819;
    const double C5921 = C5916 - C5920;
    const double C6088 = ae * C6057;
    const double C6087 = ae * C6055;
    const double C6086 = ae * C6053;
    const double C6085 = 4. * C5850;
    const double C6084 = C5918 * C5851;
    const double C6083 = ae * C5897;
    const double C6082 = 2 * C5918;
    const double C6081 = C5921 * C5851;
    const double C6080 = C5881 - C5915;
    const double C6079 = 4. * C5843;
    const double C6078 = C5882 * C5844;
    const double C6077 = ae * C5862;
    const double C6076 = 2 * C5882;
    const double C6075 = C5885 * C5844;
    const double C6074 = ae * C6046;
    const double C6073 = ae * C6043;
    const double C6072 = C5817 * C5822;
    const double C6071 = ae * C5849;
    const double C6070 = C5850 * C5851;
    const double C6069 = ae * C5842;
    const double C6068 = ae * C5977;
    const double C6067 = C5843 * C5844;
    const double C6066 = 4. * C5817;
    const double C6065 = C5834 * C5822;
    const double C6064 = ae * C5810;
    const double C6063 = 2 * C5834;
    const double C6062 = C5837 * C5822;
    const double C6112 = 2 * C6088;
    const double C6111 = 2 * C6087;
    const double C6110 = 2 * C6086;
    const double C6109 = C6085 / C5825;
    const double C6108 = C6084 / C5819;
    const double C6107 = 2 * C6083;
    const double C6106 = C6081 / C5819;
    const double C6105 = C6080 * C5898;
    const double C6104 = C6079 / C5825;
    const double C6103 = C6078 / C5819;
    const double C6102 = 2 * C6077;
    const double C6101 = C6075 / C5819;
    const double C6100 = 2 * C6074;
    const double C6099 = 2. * C6073;
    const double C6098 = 2 * C6072;
    const double C6097 = 2 * C6071;
    const double C6096 = 2 * C6070;
    const double C6095 = 2 * C6069;
    const double C6094 = 2. * C6068;
    const double C6093 = 2 * C6067;
    const double C6092 = C6066 / C5825;
    const double C6091 = C6065 / C5819;
    const double C6090 = 2 * C6064;
    const double C6089 = C6062 / C5819;
    const double C6127 = C6108 + C6109;
    const double C6126 = C6082 + C6107;
    const double C6125 = C6105 / C5819;
    const double C6124 = C6103 + C6104;
    const double C6123 = C6076 + C6102;
    const double C6122 = C5823 + C6100;
    const double C6121 = C6099 / C5825;
    const double C6120 = C6098 / C5819;
    const double C6119 = C5906 + C6097;
    const double C6118 = C6096 / C5819;
    const double C6117 = C5870 + C6095;
    const double C6116 = C6094 / C5825;
    const double C6115 = C6093 / C5819;
    const double C6114 = C6091 + C6092;
    const double C6113 = C6063 + C6090;
    const double C6140 = C6127 * C5851;
    const double C6139 = C6124 * C5844;
    const double C6138 = C6114 * C5822;
    const double C6137 = C6126 / C5825;
    const double C6136 = C5916 - C6125;
    const double C6135 = C6123 / C5825;
    const double C6134 = C6122 / C5825;
    const double C6133 = C6120 + C6121;
    const double C6132 = C6119 / C5825;
    const double C6131 = C6118 + C6116;
    const double C6130 = C6117 / C5825;
    const double C6129 = C6115 + C6116;
    const double C6128 = C6113 / C5825;
    const double C6152 = C6131 + C5918;
    const double C6151 = C6140 / C5819;
    const double C6150 = C6129 + C5882;
    const double C6149 = C6139 / C5819;
    const double C6148 = C6133 + C5834;
    const double C6147 = C6138 / C5819;
    const double C6146 = C6106 + C6137;
    const double C6145 = C6101 + C6135;
    const double C6144 = C6133 * C5822;
    const double C6143 = C6131 * C5851;
    const double C6142 = C6129 * C5844;
    const double C6141 = C6089 + C6128;
    const double C6158 = C6152 + C6112;
    const double C6157 = C6150 + C6111;
    const double C6156 = C6148 + C6110;
    const double C6155 = C6144 / C5819;
    const double C6154 = C6143 / C5819;
    const double C6153 = C6142 / C5819;
    const double C6164 = C6158 / C5825;
    const double C6163 = C6157 / C5825;
    const double C6162 = C6156 / C5825;
    const double C6161 = C6155 + C6134;
    const double C6160 = C6154 + C6132;
    const double C6159 = C6153 + C6130;
    const double C6167 = C6151 + C6164;
    const double C6166 = C6149 + C6163;
    const double C6165 = C6147 + C6162;
    const double gx200200 = ((C6141 * C5822) / C5819 +
                             (2 * C6114 + C5837 + 2 * ae * C5811) / C5825) *
                            std::pow(C5977, 2);
    const double gx200020 = C5837 * C5841 * C5977;
    const double gx200002 = C5837 * C5977 * C5848;
    const double gx200110 = C6141 * C5842 * C5977;
    const double gx200101 = C6141 * C5977 * C5849;
    const double gx200011 = C5837 * C5842 * C5849;
    const double gx020200 = C6161 * C5862 * C5977;
    const double gx020020 = 2 * C5817 * C5868 * C5977;
    const double gx020002 = 2 * C5817 * C5862 * C5848;
    const double gx020110 = C6133 * C6054 * C5977;
    const double gx020101 = C6133 * C5862 * C5849;
    const double gx020011 = 2 * C5817 * C6054 * C5849;
    const double gx002200 = C6161 * C5977 * C5897;
    const double gx002020 = 2 * C5817 * C5841 * C5897;
    const double gx002002 = 2 * C5817 * C5977 * C5904;
    const double gx002110 = C6133 * C5842 * C5897;
    const double gx002101 = C6133 * C5977 * C6056;
    const double gx002011 = 2 * C5817 * C5842 * C6056;
    const double gx110200 = C6165 * C5815 * C5977;
    const double gx110020 = C5834 * C5935 * C5977;
    const double gx110002 = C5834 * C5815 * C5848;
    const double gx110110 = C6114 * C6055 * C5977;
    const double gx110101 = C6114 * C5815 * C5849;
    const double gx110011 = C5834 * C6055 * C5849;
    const double gx101200 = C6165 * C5977 * C5816;
    const double gx101020 = C5834 * C5841 * C5816;
    const double gx101002 = C5834 * C5977 * C5951;
    const double gx101110 = C6114 * C5842 * C5816;
    const double gx101101 = C6114 * C5977 * C6057;
    const double gx101011 = C5834 * C5842 * C6057;
    const double gx011200 = C6161 * C5815 * C5816;
    const double gx011020 = 2 * C5817 * C5935 * C5816;
    const double gx011002 = 2 * C5817 * C5815 * C5951;
    const double gx011110 = C6133 * C6055 * C5816;
    const double gx011101 = C6133 * C5815 * C6057;
    const double gx011011 = 2 * C5817 * C6055 * C6057;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gx110110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gx110011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gx110002 -
              (std::sqrt(0.75) * gx110020 + std::sqrt(0.75) * gx110200));
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gx110101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gx110200 - std::sqrt(2.25) * gx110020);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gx011110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gx011011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gx011002 -
              (std::sqrt(0.75) * gx011020 + std::sqrt(0.75) * gx011200));
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gx011101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gx011200 - std::sqrt(2.25) * gx011020);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gx002110 -
              (std::sqrt(0.75) * gx020110 + std::sqrt(0.75) * gx200110));
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gx002011 -
              (std::sqrt(0.75) * gx020011 + std::sqrt(0.75) * gx200011));
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (0.25 * gx200200 + 0.25 * gx200020 - 0.5 * gx200002 +
              0.25 * gx020200 + 0.25 * gx020020 - 0.5 * gx020002 -
              0.5 * gx002200 - 0.5 * gx002020 + gx002002);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gx002101 -
              (std::sqrt(0.75) * gx020101 + std::sqrt(0.75) * gx200101));
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.1875) * gx200020 - std::sqrt(0.1875) * gx200200 -
              std::sqrt(0.1875) * gx020200 + std::sqrt(0.1875) * gx020020 +
              std::sqrt(0.75) * gx002200 - std::sqrt(0.75) * gx002020);
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gx101110;
    gx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gx101011;
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gx101002 -
              (std::sqrt(0.75) * gx101020 + std::sqrt(0.75) * gx101200));
    gx[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gx101101;
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gx101200 - std::sqrt(2.25) * gx101020);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(2.25) * gx200110 - std::sqrt(2.25) * gx020110);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(2.25) * gx200011 - std::sqrt(2.25) * gx020011);
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gx200002 -
              (std::sqrt(0.1875) * gx200020 + std::sqrt(0.1875) * gx200200) +
              std::sqrt(0.1875) * gx020200 + std::sqrt(0.1875) * gx020020 -
              std::sqrt(0.75) * gx020002);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(2.25) * gx200101 - std::sqrt(2.25) * gx020101);
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.5625) * gx200200 - std::sqrt(0.5625) * gx200020 -
              std::sqrt(0.5625) * gx020200 + std::sqrt(0.5625) * gx020020);
    const double gy200200 = C5814 * C5870 * C5977;
    const double gy200020 = C5810 * C6159 * C5977;
    const double gy200002 = C5810 * C5870 * C5848;
    const double gy200110 = C5811 * C6129 * C5977;
    const double gy200101 = C5811 * C5870 * C5849;
    const double gy200011 = C5810 * C6129 * C5849;
    const double gy020200 = C5863 * C5885 * C5977;
    const double gy020020 = C6043 *
                            ((C6145 * C5844) / C5819 +
                             (2 * C6124 + C5885 + 2 * ae * C6054) / C5825) *
                            C5977;
    const double gy020002 = C6043 * C5885 * C5848;
    const double gy020110 = C6046 * C6145 * C5977;
    const double gy020101 = C6046 * C5885 * C5849;
    const double gy020011 = C6043 * C6145 * C5849;
    const double gy002200 = C5863 * C5870 * C5897;
    const double gy002020 = C6043 * C6159 * C5897;
    const double gy002002 = C6043 * C5870 * C5904;
    const double gy002110 = C6046 * C6129 * C5897;
    const double gy002101 = C6046 * C5870 * C6056;
    const double gy002011 = C6043 * C6129 * C6056;
    const double gy110200 = C5932 * C5882 * C5977;
    const double gy110020 = C5808 * C6166 * C5977;
    const double gy110002 = C5808 * C5882 * C5848;
    const double gy110110 = C6053 * C6124 * C5977;
    const double gy110101 = C6053 * C5882 * C5849;
    const double gy110011 = C5808 * C6124 * C5849;
    const double gy101200 = C5932 * C5870 * C5816;
    const double gy101020 = C5808 * C6159 * C5816;
    const double gy101002 = C5808 * C5870 * C5951;
    const double gy101110 = C6053 * C6129 * C5816;
    const double gy101101 = C6053 * C5870 * C6057;
    const double gy101011 = C5808 * C6129 * C6057;
    const double gy011200 = C5863 * C5882 * C5816;
    const double gy011020 = C6043 * C6166 * C5816;
    const double gy011002 = C6043 * C5882 * C5951;
    const double gy011110 = C6046 * C6124 * C5816;
    const double gy011101 = C6046 * C5882 * C6057;
    const double gy011011 = C6043 * C6124 * C6057;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gy110110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gy110011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gy110002 -
              (std::sqrt(0.75) * gy110020 + std::sqrt(0.75) * gy110200));
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gy110101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gy110200 - std::sqrt(2.25) * gy110020);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gy011110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gy011011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gy011002 -
              (std::sqrt(0.75) * gy011020 + std::sqrt(0.75) * gy011200));
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gy011101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gy011200 - std::sqrt(2.25) * gy011020);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gy002110 -
              (std::sqrt(0.75) * gy020110 + std::sqrt(0.75) * gy200110));
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gy002011 -
              (std::sqrt(0.75) * gy020011 + std::sqrt(0.75) * gy200011));
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (0.25 * gy200200 + 0.25 * gy200020 - 0.5 * gy200002 +
              0.25 * gy020200 + 0.25 * gy020020 - 0.5 * gy020002 -
              0.5 * gy002200 - 0.5 * gy002020 + gy002002);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gy002101 -
              (std::sqrt(0.75) * gy020101 + std::sqrt(0.75) * gy200101));
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.1875) * gy200020 - std::sqrt(0.1875) * gy200200 -
              std::sqrt(0.1875) * gy020200 + std::sqrt(0.1875) * gy020020 +
              std::sqrt(0.75) * gy002200 - std::sqrt(0.75) * gy002020);
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gy101110;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gy101011;
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gy101002 -
              (std::sqrt(0.75) * gy101020 + std::sqrt(0.75) * gy101200));
    gy[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gy101101;
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gy101200 - std::sqrt(2.25) * gy101020);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(2.25) * gy200110 - std::sqrt(2.25) * gy020110);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(2.25) * gy200011 - std::sqrt(2.25) * gy020011);
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gy200002 -
              (std::sqrt(0.1875) * gy200020 + std::sqrt(0.1875) * gy200200) +
              std::sqrt(0.1875) * gy020200 + std::sqrt(0.1875) * gy020020 -
              std::sqrt(0.75) * gy020002);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(2.25) * gy200101 - std::sqrt(2.25) * gy020101);
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.5625) * gy200200 - std::sqrt(0.5625) * gy200020 -
              std::sqrt(0.5625) * gy020200 + std::sqrt(0.5625) * gy020020);
    const double gz200200 = C5814 * C5977 * C5906;
    const double gz200020 = C5810 * C5841 * C5906;
    const double gz200002 = C5810 * C5977 * C6160;
    const double gz200110 = C5811 * C5842 * C5906;
    const double gz200101 = C5811 * C5977 * C6131;
    const double gz200011 = C5810 * C5842 * C6131;
    const double gz020200 = C5863 * C5862 * C5906;
    const double gz020020 = C6043 * C5868 * C5906;
    const double gz020002 = C6043 * C5862 * C6160;
    const double gz020110 = C6046 * C6054 * C5906;
    const double gz020101 = C6046 * C5862 * C6131;
    const double gz020011 = C6043 * C6054 * C6131;
    const double gz002200 = C5863 * C5977 * C6136;
    const double gz002020 = C6043 * C5841 * C6136;
    const double gz002002 = C6043 * C5977 *
                            ((C6146 * C5851) / C5819 +
                             (2 * C6127 + C5921 + 2 * ae * C6056) / C5825);
    const double gz002110 = C6046 * C5842 * C5921;
    const double gz002101 = C6046 * C5977 * C6146;
    const double gz002011 = C6043 * C5842 * C6146;
    const double gz110200 = C5932 * C5815 * C5906;
    const double gz110020 = C5808 * C5935 * C5906;
    const double gz110002 = C5808 * C5815 * C6160;
    const double gz110110 = C6053 * C6055 * C5906;
    const double gz110101 = C6053 * C5815 * C6131;
    const double gz110011 = C5808 * C6055 * C6131;
    const double gz101200 = C5932 * C5977 * C5918;
    const double gz101020 = C5808 * C5841 * C5918;
    const double gz101002 = C5808 * C5977 * C6167;
    const double gz101110 = C6053 * C5842 * C5918;
    const double gz101101 = C6053 * C5977 * C6127;
    const double gz101011 = C5808 * C5842 * C6127;
    const double gz011200 = C5863 * C5815 * C5918;
    const double gz011020 = C6043 * C5935 * C5918;
    const double gz011002 = C6043 * C5815 * C6167;
    const double gz011110 = C6046 * C6055 * C5918;
    const double gz011101 = C6046 * C5815 * C6127;
    const double gz011011 = C6043 * C6055 * C6127;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gz110110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gz110011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gz110002 -
              (std::sqrt(0.75) * gz110020 + std::sqrt(0.75) * gz110200));
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gz110101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gz110200 - std::sqrt(2.25) * gz110020);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gz011110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gz011011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gz011002 -
              (std::sqrt(0.75) * gz011020 + std::sqrt(0.75) * gz011200));
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gz011101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gz011200 - std::sqrt(2.25) * gz011020);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(3.0) * gz002110 -
              (std::sqrt(0.75) * gz020110 + std::sqrt(0.75) * gz200110));
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(3.0) * gz002011 -
              (std::sqrt(0.75) * gz020011 + std::sqrt(0.75) * gz200011));
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (0.25 * gz200200 + 0.25 * gz200020 - 0.5 * gz200002 +
              0.25 * gz020200 + 0.25 * gz020020 - 0.5 * gz020002 -
              0.5 * gz002200 - 0.5 * gz002020 + gz002002);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(3.0) * gz002101 -
              (std::sqrt(0.75) * gz020101 + std::sqrt(0.75) * gz200101));
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.1875) * gz200020 - std::sqrt(0.1875) * gz200200 -
              std::sqrt(0.1875) * gz020200 + std::sqrt(0.1875) * gz020020 +
              std::sqrt(0.75) * gz002200 - std::sqrt(0.75) * gz002020);
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(9.) * gz101110;
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(9.) * gz101011;
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(3.0) * gz101002 -
              (std::sqrt(0.75) * gz101020 + std::sqrt(0.75) * gz101200));
    gz[(Ai + 3) * matrix_size + Bi + 3] += cc * std::sqrt(9.) * gz101101;
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(2.25) * gz101200 - std::sqrt(2.25) * gz101020);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(2.25) * gz200110 - std::sqrt(2.25) * gz020110);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(2.25) * gz200011 - std::sqrt(2.25) * gz020011);
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gz200002 -
              (std::sqrt(0.1875) * gz200020 + std::sqrt(0.1875) * gz200200) +
              std::sqrt(0.1875) * gz020200 + std::sqrt(0.1875) * gz020020 -
              std::sqrt(0.75) * gz020002);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(2.25) * gz200101 - std::sqrt(2.25) * gz020101);
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.5625) * gz200200 - std::sqrt(0.5625) * gz200020 -
              std::sqrt(0.5625) * gz020200 + std::sqrt(0.5625) * gz020020);
}

// Automatically generated, do not edit
