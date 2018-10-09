/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0210_11(const double ae,
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
    const double C5805 = ae * be;
    const double C5804 = xA - xB;
    const double C5803 = ae + be;
    const double C5802 = 0 * be;
    const double C5837 = yA - yB;
    const double C5840 = zA - zB;
    const double C5851 = 0 * be;
    const double C5877 = 0 * be;
    const double C5923 = p + q;
    const double C5922 = p * q;
    const double C5928 = xP - xQ;
    const double C5927 = bs[2];
    const double C5935 = std::pow(ae, 2);
    const double C5933 = bs[3];
    const double C5946 = bs[4];
    const double C5966 = yP - yQ;
    const double C5980 = zP - zQ;
    const double C80 = bs[0];
    const double C6331 = ce + de;
    const double C6330 = xC - xD;
    const double C6336 = yC - yD;
    const double C6343 = zC - zD;
    const double C6416 = ce * de;
    const double C5808 = 2 * C5805;
    const double C5807 = C5805 * C5804;
    const double C6311 = std::pow(C5804, 2);
    const double C6413 = C5804 * ae;
    const double C5806 = std::pow(C5803, 2);
    const double C6414 = 2 * C5803;
    const double C5852 = C5805 * C5837;
    const double C6350 = std::pow(C5837, 2);
    const double C6420 = C5837 * ae;
    const double C5878 = C5805 * C5840;
    const double C6361 = std::pow(C5840, 2);
    const double C6421 = C5840 * ae;
    const double C5924 = 2 * C5922;
    const double C5936 = C5928 * ae;
    const double C5932 = std::pow(C5928, 2);
    const double C5969 = C5966 * ae;
    const double C5968 = C5928 * C5966;
    const double C5995 = C5966 * C5928;
    const double C6003 = std::pow(C5966, 2);
    const double C5983 = C5980 * ae;
    const double C5982 = C5928 * C5980;
    const double C6012 = C5966 * C5980;
    const double C6020 = C5980 * C5928;
    const double C6028 = C5980 * C5966;
    const double C6036 = std::pow(C5980, 2);
    const double C6419 = 2 * C6331;
    const double C6418 = std::pow(C6330, 2);
    const double C6417 = std::pow(C6336, 2);
    const double C6415 = std::pow(C6343, 2);
    const double C6312 = C6311 * C5805;
    const double C5810 = 2 * C5806;
    const double C6424 = std::pow(C6414, -2);
    const double C6422 = std::pow(C6414, -1);
    const double C6351 = C6350 * C5805;
    const double C6362 = C6361 * C5805;
    const double C5926 = C5924 / C5923;
    const double C88 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C5924 / C5923, 2) -
          (bs[1] * C5924) / C5923) *
         std::pow(ae, 2)) /
        C5806;
    const double C81 = -(C5928 * bs[1] * C5924) / C5923;
    const double C455 = -(C5966 * bs[1] * C5924) / C5923;
    const double C739 = -(C5980 * bs[1] * C5924) / C5923;
    const double C5938 = C5933 * C5936;
    const double C5949 = C5946 * C5936;
    const double C84 = (-(bs[1] * C5936 * C5924) / C5923) / C5803;
    const double C5948 = C5932 * C5946;
    const double C5971 = C5933 * C5969;
    const double C5975 = C5946 * C5969;
    const double C125 = (-(bs[1] * C5969 * C5924) / C5923) / C5803;
    const double C5970 = C5968 * C5935;
    const double C5996 = C5995 * C5935;
    const double C6005 = C6003 * C5946;
    const double C5985 = C5933 * C5983;
    const double C5989 = C5946 * C5983;
    const double C172 = (-(bs[1] * C5983 * C5924) / C5923) / C5803;
    const double C5984 = C5982 * C5935;
    const double C6013 = C6012 * C5935;
    const double C6021 = C6020 * C5935;
    const double C6029 = C6028 * C5935;
    const double C6038 = C6036 * C5946;
    const double C6428 = std::pow(C6419, -1);
    const double C6427 = C6418 * C6416;
    const double C6426 = C6417 * C6416;
    const double C6425 = C6415 * C6416;
    const double C6313 = C6312 / C5803;
    const double C6352 = C6351 / C5803;
    const double C6363 = C6362 / C5803;
    const double C5929 = std::pow(C5926, 2);
    const double C5934 = -C5926;
    const double C5947 = std::pow(C5926, 4);
    const double C5974 = C5946 * C5970;
    const double C5998 = C5946 * C5996;
    const double C5988 = C5946 * C5984;
    const double C6015 = C5946 * C6013;
    const double C6023 = C5946 * C6021;
    const double C6031 = C5946 * C6029;
    const double C6433 = C6427 / C6331;
    const double C6432 = C6426 / C6331;
    const double C6431 = C6425 / C6331;
    const double C6314 = -C6313;
    const double C6353 = -C6352;
    const double C6364 = -C6363;
    const double C5931 = C5927 * C5929;
    const double C89 = (2 * ae * C5929 * C5927 * C5928 * ae +
                        C5928 *
                            (C5927 * C5929 +
                             std::pow(C5928, 2) * bs[3] * std::pow(-C5926, 3)) *
                            std::pow(ae, 2)) /
                       C5806;
    const double C129 = (C5929 * C5927 * C5928 * (yP - yQ) * C5935) / C5806;
    const double C176 = (C5929 * C5927 * C5928 * (zP - zQ) * C5935) / C5806;
    const double C218 = (C5929 * C5927 * C5966 * C5928 * C5935) / C5806;
    const double C249 =
        ((std::pow(C5966, 2) * C5927 * C5929 - (bs[1] * C5924) / C5923) *
         C5935) /
        C5806;
    const double C293 = (C5929 * C5927 * C5966 * C5980 * C5935) / C5806;
    const double C333 = (C5929 * C5927 * C5980 * C5928 * C5935) / C5806;
    const double C363 = (C5929 * C5927 * C5980 * C5966 * C5935) / C5806;
    const double C404 =
        ((std::pow(C5980, 2) * C5927 * C5929 - (bs[1] * C5924) / C5923) *
         C5935) /
        C5806;
    const double C85 = (C5928 * C5929 * C5927 * C5936) / C5803 -
                       (ae * bs[1] * C5924) / (C5923 * C5803);
    const double C126 = (C5928 * C5929 * C5927 * C5969) / C5803;
    const double C173 = (C5928 * C5929 * C5927 * C5983) / C5803;
    const double C458 = (C5966 * C5929 * C5927 * C5936) / C5803;
    const double C493 = (C5966 * C5929 * C5927 * C5969) / C5803 -
                        (ae * bs[1] * C5924) / (C5923 * C5803);
    const double C525 = (C5966 * C5929 * C5927 * C5983) / C5803;
    const double C742 = (C5980 * C5929 * C5927 * C5936) / C5803;
    const double C777 = (C5980 * C5929 * C5927 * C5969) / C5803;
    const double C809 = (C5980 * C5929 * C5927 * C5983) / C5803 -
                        (ae * bs[1] * C5924) / (C5923 * C5803);
    const double C5937 = std::pow(C5934, 3);
    const double C5953 = C5947 * C5949;
    const double C5952 = C5948 * C5947;
    const double C5977 = C5947 * C5975;
    const double C5991 = C5947 * C5989;
    const double C6006 = C6005 * C5947;
    const double C6039 = C6038 * C5947;
    const double C5976 = C5947 * C5974;
    const double C5999 = C5947 * C5998;
    const double C5990 = C5947 * C5988;
    const double C6016 = C5947 * C6015;
    const double C6024 = C5947 * C6023;
    const double C6032 = C5947 * C6031;
    const double C6436 = -C6433;
    const double C6435 = -C6432;
    const double C6434 = -C6431;
    const double C6315 = std::exp(C6314);
    const double C6354 = std::exp(C6353);
    const double C6365 = std::exp(C6364);
    const double C5939 = C5931 * ae;
    const double C82 = C5931 * C5932 - (bs[1] * C5924) / C5923;
    const double C454 = C5966 * C5928 * C5931;
    const double C738 = C5980 * C5928 * C5931;
    const double C1025 = C5931 * C6003 - (bs[1] * C5924) / C5923;
    const double C1624 = C5980 * C5966 * C5931;
    const double C1894 = C5931 * C6036 - (bs[1] * C5924) / C5923;
    const double C5940 = C5937 * C5938;
    const double C5945 = C5933 * C5937;
    const double C5972 = C5937 * C5971;
    const double C5986 = C5937 * C5985;
    const double C130 = (ae * C5929 * C5927 * C5966 * ae +
                         C5928 * C5937 * C5933 * C5928 * C5966 * C5935) /
                        C5806;
    const double C177 = (ae * C5929 * C5927 * C5980 * ae +
                         C5928 * C5937 * C5933 * C5928 * C5980 * C5935) /
                        C5806;
    const double C219 = (ae * C5929 * C5927 * C5969 +
                         C5928 * C5937 * C5933 * C5966 * C5928 * C5935) /
                        C5806;
    const double C250 =
        (C5928 * (C5931 + std::pow(C5966, 2) * C5933 * C5937) * C5935) / C5806;
    const double C294 = (C5928 * C5937 * C5933 * C5966 * C5980 * C5935) / C5806;
    const double C295 =
        (C5937 * C5933 * C6013 + C5947 * C5946 * C6013 * C5932) / C5806;
    const double C334 = (ae * C5929 * C5927 * C5983 +
                         C5928 * C5937 * C5933 * C5980 * C5928 * C5935) /
                        C5806;
    const double C364 = (C5928 * C5937 * C5933 * C5980 * C5966 * C5935) / C5806;
    const double C365 =
        (C5937 * C5933 * C6029 + C5947 * C5946 * C6029 * C5932) / C5806;
    const double C405 =
        (C5928 * (C5931 + std::pow(C5980, 2) * C5933 * C5937) * C5935) / C5806;
    const double C461 =
        (C5966 * (C5931 + C5932 * C5933 * C5937) * C5935) / C5806;
    const double C496 =
        (ae * C5929 * C5927 * C5936 + C5966 * C5937 * C5933 * C5970) / C5806;
    const double C528 = (C5966 * C5937 * C5933 * C5984) / C5806;
    const double C557 =
        (ae * C5929 * C5927 * C5936 + C5966 * C5937 * C5933 * C5996) / C5806;
    const double C586 = (2 * ae * C5929 * C5927 * C5969 +
                         C5966 * (C5931 + C6003 * C5933 * C5937) * C5935) /
                        C5806;
    const double C618 =
        (ae * C5929 * C5927 * C5983 + C5966 * C5937 * C5933 * C6013) / C5806;
    const double C647 = (C5966 * C5937 * C5933 * C6021) / C5806;
    const double C676 =
        (ae * C5929 * C5927 * C5983 + C5966 * C5937 * C5933 * C6029) / C5806;
    const double C705 =
        (C5966 * (C5931 + C6036 * C5933 * C5937) * C5935) / C5806;
    const double C745 =
        (C5980 * (C5931 + C5932 * C5933 * C5937) * C5935) / C5806;
    const double C780 = (C5980 * C5937 * C5933 * C5970) / C5806;
    const double C812 =
        (ae * C5929 * C5927 * C5936 + C5980 * C5937 * C5933 * C5984) / C5806;
    const double C841 = (C5980 * C5937 * C5933 * C5996) / C5806;
    const double C870 =
        (C5980 * (C5931 + C6003 * C5933 * C5937) * C5935) / C5806;
    const double C902 =
        (ae * C5929 * C5927 * C5969 + C5980 * C5937 * C5933 * C6013) / C5806;
    const double C931 =
        (ae * C5929 * C5927 * C5936 + C5980 * C5937 * C5933 * C6021) / C5806;
    const double C960 =
        (ae * C5929 * C5927 * C5969 + C5980 * C5937 * C5933 * C6029) / C5806;
    const double C989 = (2 * ae * C5929 * C5927 * C5983 +
                         C5980 * (C5931 + C6036 * C5933 * C5937) * C5935) /
                        C5806;
    const double C5956 = C5928 * C5953;
    const double C6191 = C5966 * C5953;
    const double C6113 = C5928 * C5977;
    const double C6131 = C5966 * C5977;
    const double C6119 = C5928 * C5991;
    const double C6198 = C5966 * C5991;
    const double C6211 = C5980 * C5991;
    const double C778 =
        (C5980 *
         (C5976 + ae * C5928 * C5977 +
          C5928 * (ae * C5977 + C5928 * std::pow(C5934, 5) * bs[5] * C5970))) /
        C5806;
    const double C1660 =
        (C5980 *
         (C5976 + ae * C5966 * C5953 +
          C5966 * (ae * C5953 + C5966 * std::pow(C5934, 5) * bs[5] * C5970))) /
        C5806;
    const double C1931 = (C5937 * C5933 * C5970 + C5976 * C6036) / C5806;
    const double C2465 =
        (2 * C5980 * C5976 +
         C5980 * (C5976 + std::pow(C5934, 5) * bs[5] * C5970 * C6036)) /
        C5806;
    const double C839 =
        (C5980 *
         (C5999 + ae * C5928 * C5977 +
          C5928 * (ae * C5977 + C5928 * std::pow(C5934, 5) * bs[5] * C5996))) /
        C5806;
    const double C1718 =
        (C5980 * C5999 + ae * C5980 * C5966 * C5953 +
         C5966 * (ae * C5980 * C5953 +
                  C5966 * C5980 * std::pow(C5934, 5) * bs[5] * C5996)) /
        C5806;
    const double C1992 = (C5937 * C5933 * C5996 + C5999 * C6036) / C5806;
    const double C2536 =
        (2 * C5980 * C5999 +
         C5980 * (C5999 + std::pow(C5934, 5) * bs[5] * C5996 * C6036)) /
        C5806;
    const double C526 =
        (C5966 *
         (C5990 + ae * C5928 * C5991 +
          C5928 * (ae * C5991 + C5928 * std::pow(C5934, 5) * bs[5] * C5984))) /
        C5806;
    const double C1098 = (C5937 * C5933 * C5984 + C5990 * C6003) / C5806;
    const double C1376 =
        (2 * C5966 * C5990 +
         C5966 * (C5990 + std::pow(C5934, 5) * bs[5] * C5984 * C6003)) /
        C5806;
    const double C296 =
        (2 * C5928 * C6016 +
         C5928 * (C6016 + std::pow(C5934, 5) * bs[5] * C6013 * C5932)) /
        C5806;
    const double C645 =
        (C5966 *
         (C6024 + ae * C5928 * C5991 +
          C5928 * (ae * C5991 + C5928 * std::pow(C5934, 5) * bs[5] * C6021))) /
        C5806;
    const double C1219 = (C5937 * C5933 * C6021 + C6024 * C6003) / C5806;
    const double C1521 =
        (2 * C5966 * C6024 +
         C5966 * (C6024 + std::pow(C5934, 5) * bs[5] * C6021 * C6003)) /
        C5806;
    const double C366 =
        (2 * C5928 * C6032 +
         C5928 * (C6032 + std::pow(C5934, 5) * bs[5] * C6029 * C5932)) /
        C5806;
    const double C6439 = std::exp(C6436);
    const double C6438 = std::exp(C6435);
    const double C6437 = std::exp(C6434);
    const double C1422 = C6315 * C458;
    const double C2539 = C6315 * C742;
    const double C5809 = C5807 * C6315;
    const double C6423 = C6315 * C6413;
    const double C65 = (C6315 * std::pow(C6413, 2)) / C5806 + C6315 / C6414;
    const double C67 = C6424 * C6315;
    const double C2751 = C6422 * C6315;
    const double C135 = C6354 * C126;
    const double C2468 = C6354 * C777;
    const double C5853 = C5852 * C6354;
    const double C124 = -(2 * C5805 * (yA - yB) * C6354) / C5803;
    const double C248 =
        -((C6354 - (C5837 * 2 * C5805 * C5837 * C6354) / C5803) * C5808) /
        C5803;
    const double C6429 = C6354 * C6420;
    const double C1020 = (C6354 * std::pow(C6420, 2)) / C5806 + C6354 / C6414;
    const double C1022 = C6424 * C6354;
    const double C2753 = C6422 * C6354;
    const double C182 = C6365 * C173;
    const double C1379 = C6365 * C525;
    const double C5879 = C5878 * C6365;
    const double C171 = -(2 * C5805 * (zA - zB) * C6365) / C5803;
    const double C403 =
        -((C6365 - (C5840 * 2 * C5805 * C5840 * C6365) / C5803) * C5808) /
        C5803;
    const double C6430 = C6365 * C6421;
    const double C1891 = (C6365 * std::pow(C6421, 2)) / C5806 + C6365 / C6414;
    const double C1893 = C6424 * C6365;
    const double C3803 = C6422 * C6365;
    const double C5941 = C5928 * C5940;
    const double C1068 = (C5937 * C5933 * C5970 + ae * C5966 * C5940 +
                          C5966 * (ae * C5940 + C5966 * C5976)) /
                         C5806;
    const double C1126 = (C5937 * C5933 * C5996 + ae * C5966 * C5940 +
                          C5966 * (ae * C5940 + C5966 * C5999)) /
                         C5806;
    const double C1348 =
        (2 * (ae * C5940 + C5966 * C5976) + ae * (C5940 + C5953 * C6003) +
         C5966 * (C5976 + ae * C5966 * C5953 +
                  C5966 * (ae * C5953 +
                           C5966 * std::pow(C5934, 5) * bs[5] * C5970))) /
        C5806;
    const double C1419 =
        (2 * (ae * C5940 + C5966 * C5999) + ae * (C5940 + C5953 * C6003) +
         C5966 * (C5999 + ae * C5966 * C5953 +
                  C5966 * (ae * C5953 +
                           C5966 * std::pow(C5934, 5) * bs[5] * C5996))) /
        C5806;
    const double C1661 = (C5980 * (ae * C5940 + C5966 * C5976)) / C5806;
    const double C1690 =
        (ae * (C5940 + C5953 * C6003) +
         C5980 * (C5990 + std::pow(C5934, 5) * bs[5] * C5984 * C6003)) /
        C5806;
    const double C1691 = (ae * C5966 * C5940 + C5980 * C5966 * C5990) / C5806;
    const double C1719 = (ae * C5980 * C5940 + C5966 * C5980 * C5999) / C5806;
    const double C1805 =
        (ae * (C5940 + C5953 * C6003) +
         C5980 * (C6024 + std::pow(C5934, 5) * bs[5] * C6021 * C6003)) /
        C5806;
    const double C1806 = (ae * C5966 * C5940 + C5980 * C5966 * C6024) / C5806;
    const double C1964 = (C5937 * C5933 * C5984 + ae * C5980 * C5940 +
                          C5980 * (ae * C5940 + C5980 * C5990)) /
                         C5806;
    const double C2078 = (C5937 * C5933 * C6021 + ae * C5980 * C5940 +
                          C5980 * (ae * C5940 + C5980 * C6024)) /
                         C5806;
    const double C2202 =
        (ae * C5940 + C5966 * C5976 +
         (ae * C5953 + C5966 * std::pow(C5934, 5) * bs[5] * C5970) * C6036) /
        C5806;
    const double C2257 =
        (ae * (C5940 + C5953 * C6036) +
         C5966 * (C5999 + std::pow(C5934, 5) * bs[5] * C5996 * C6036)) /
        C5806;
    const double C2509 =
        (2 * (ae * C5940 + C5980 * C5990) + ae * (C5940 + C5953 * C6036) +
         C5980 * (C5990 + ae * C5980 * C5953 +
                  C5980 * (ae * C5953 +
                           C5980 * std::pow(C5934, 5) * bs[5] * C5984))) /
        C5806;
    const double C2646 =
        (2 * (ae * C5940 + C5980 * C6024) + ae * (C5940 + C5953 * C6036) +
         C5980 * (C6024 + ae * C5980 * C5953 +
                  C5980 * (ae * C5953 +
                           C5980 * std::pow(C5934, 5) * bs[5] * C6021))) /
        C5806;
    const double C1027 = (C5929 * C5927 * C5936 + C5940 * C6003) / C5803;
    const double C1306 =
        (2 * C5966 * C5940 + C5966 * (C5940 + C5953 * C6003)) / C5803;
    const double C1625 = (C5980 * (C5940 + C5953 * C6003)) / C5803;
    const double C1626 = (C5980 * C5966 * C5940) / C5803;
    const double C1896 = (C5929 * C5927 * C5936 + C5940 * C6036) / C5803;
    const double C2425 =
        (2 * C5980 * C5940 + C5980 * (C5940 + C5953 * C6036)) / C5803;
    const double C5951 = C5928 * C5945;
    const double C5950 = C5945 * ae;
    const double C5955 = C5945 + C5952;
    const double C6007 = C5945 + C6006;
    const double C6040 = C5945 + C6039;
    const double C6132 = C5966 * C5945;
    const double C6212 = C5980 * C5945;
    const double C251 = ((C5931 + C6003 * C5933 * C5937) * C5935 +
                         (C5945 + C6003 * C5946 * C5947) * C5935 * C5932) /
                        C5806;
    const double C406 = ((C5931 + C6036 * C5933 * C5937) * C5935 +
                         (C5945 + C6036 * C5946 * C5947) * C5935 * C5932) /
                        C5806;
    const double C83 = 2 * C5928 * C5931 + C5928 * (C5931 + C5945 * C5932);
    const double C453 = C5966 * (C5931 + C5945 * C5932);
    const double C737 = C5980 * (C5931 + C5945 * C5932);
    const double C1305 = 2 * C5966 * C5931 + C5966 * (C5931 + C5945 * C6003);
    const double C1623 = C5980 * (C5931 + C5945 * C6003);
    const double C2424 = 2 * C5980 * C5931 + C5980 * (C5931 + C5945 * C6036);
    const double C6109 = C5966 * C5972;
    const double C131 = (C5937 * C5933 * C5970 + ae * C5928 * C5972 +
                         C5928 * (ae * C5972 + C5928 * C5947 * C5946 * C5970)) /
                        C5806;
    const double C132 =
        (2 * (ae * C5972 + C5928 * C5976) + ae * (C5972 + C5977 * C5932) +
         C5928 * (C5976 + ae * C5928 * C5977 +
                  C5928 * (ae * C5977 +
                           C5928 * std::pow(C5934, 5) * bs[5] * C5970))) /
        C5806;
    const double C220 = (C5937 * C5933 * C5996 + ae * C5928 * C5972 +
                         C5928 * (ae * C5972 + C5928 * C5947 * C5946 * C5996)) /
                        C5806;
    const double C221 =
        (2 * (ae * C5972 + C5928 * C5999) + ae * (C5972 + C5977 * C5932) +
         C5928 * (C5999 + ae * C5928 * C5977 +
                  C5928 * (ae * C5977 +
                           C5928 * std::pow(C5934, 5) * bs[5] * C5996))) /
        C5806;
    const double C779 = (C5980 * (ae * C5972 + C5928 * C5976)) / C5806;
    const double C840 = (C5980 * (ae * C5972 + C5928 * C5999)) / C5806;
    const double C900 =
        (ae * (C5972 + C5977 * C5932) +
         C5980 * (C6016 + std::pow(C5934, 5) * bs[5] * C6013 * C5932)) /
        C5806;
    const double C901 = (ae * C5928 * C5972 + C5980 * C5928 * C6016) / C5806;
    const double C958 =
        (ae * (C5972 + C5977 * C5932) +
         C5980 * (C6032 + std::pow(C5934, 5) * bs[5] * C6029 * C5932)) /
        C5806;
    const double C959 = (ae * C5928 * C5972 + C5980 * C5928 * C6032) / C5806;
    const double C1932 =
        (ae * C5972 + C5928 * C5976 +
         (ae * C5977 + C5928 * std::pow(C5934, 5) * bs[5] * C5970) * C6036) /
        C5806;
    const double C1993 =
        (ae * C5972 + C5928 * C5999 +
         (ae * C5977 + C5928 * std::pow(C5934, 5) * bs[5] * C5996) * C6036) /
        C5806;
    const double C2050 = (C5937 * C5933 * C6013 + ae * C5980 * C5972 +
                          C5980 * (ae * C5972 + C5980 * C6016)) /
                         C5806;
    const double C2106 = (C5937 * C5933 * C6029 + ae * C5980 * C5972 +
                          C5980 * (ae * C5972 + C5980 * C6032)) /
                         C5806;
    const double C2619 =
        (2 * (ae * C5972 + C5980 * C6016) + ae * (C5972 + C5977 * C6036) +
         C5980 * (C6016 + ae * C5980 * C5977 +
                  C5980 * (ae * C5977 +
                           C5980 * std::pow(C5934, 5) * bs[5] * C6013))) /
        C5806;
    const double C2679 =
        (2 * (ae * C5972 + C5980 * C6032) + ae * (C5972 + C5977 * C6036) +
         C5980 * (C6032 + ae * C5980 * C5977 +
                  C5980 * (ae * C5977 +
                           C5980 * std::pow(C5934, 5) * bs[5] * C6029))) /
        C5806;
    const double C127 = (C5929 * C5927 * C5969 + C5972 * C5932) / C5803;
    const double C128 =
        (2 * C5928 * C5972 + C5928 * (C5972 + C5977 * C5932)) / C5803;
    const double C491 =
        (C5966 * (C5972 + C5977 * C5932) + (C5931 + C5945 * C5932) * ae) /
        C5803;
    const double C492 = (C5966 * C5928 * C5972 + C5928 * C5931 * ae) / C5803;
    const double C775 = (C5980 * (C5972 + C5977 * C5932)) / C5803;
    const double C776 = (C5980 * C5928 * C5972) / C5803;
    const double C1929 = (C5929 * C5927 * C5969 + C5972 * C6036) / C5803;
    const double C2464 =
        (2 * C5980 * C5972 + C5980 * (C5972 + C5977 * C6036)) / C5803;
    const double C6181 = C5980 * C5986;
    const double C178 = (C5937 * C5933 * C5984 + ae * C5928 * C5986 +
                         C5928 * (ae * C5986 + C5928 * C5947 * C5946 * C5984)) /
                        C5806;
    const double C179 =
        (2 * (ae * C5986 + C5928 * C5990) + ae * (C5986 + C5991 * C5932) +
         C5928 * (C5990 + ae * C5928 * C5991 +
                  C5928 * (ae * C5991 +
                           C5928 * std::pow(C5934, 5) * bs[5] * C5984))) /
        C5806;
    const double C335 = (C5937 * C5933 * C6021 + ae * C5928 * C5986 +
                         C5928 * (ae * C5986 + C5928 * C5947 * C5946 * C6021)) /
                        C5806;
    const double C336 =
        (2 * (ae * C5986 + C5928 * C6024) + ae * (C5986 + C5991 * C5932) +
         C5928 * (C6024 + ae * C5928 * C5991 +
                  C5928 * (ae * C5991 +
                           C5928 * std::pow(C5934, 5) * bs[5] * C6021))) /
        C5806;
    const double C527 = (C5966 * (ae * C5986 + C5928 * C5990)) / C5806;
    const double C616 =
        (ae * (C5986 + C5991 * C5932) +
         C5966 * (C6016 + std::pow(C5934, 5) * bs[5] * C6013 * C5932)) /
        C5806;
    const double C617 = (ae * C5928 * C5986 + C5966 * C5928 * C6016) / C5806;
    const double C646 = (C5966 * (ae * C5986 + C5928 * C6024)) / C5806;
    const double C674 =
        (ae * (C5986 + C5991 * C5932) +
         C5966 * (C6032 + std::pow(C5934, 5) * bs[5] * C6029 * C5932)) /
        C5806;
    const double C675 = (ae * C5928 * C5986 + C5966 * C5928 * C6032) / C5806;
    const double C1099 =
        (ae * C5986 + C5928 * C5990 +
         (ae * C5991 + C5928 * std::pow(C5934, 5) * bs[5] * C5984) * C6003) /
        C5806;
    const double C1191 = (C5937 * C5933 * C6013 + ae * C5966 * C5986 +
                          C5966 * (ae * C5986 + C5966 * C6016)) /
                         C5806;
    const double C1220 =
        (ae * C5986 + C5928 * C6024 +
         (ae * C5991 + C5928 * std::pow(C5934, 5) * bs[5] * C6021) * C6003) /
        C5806;
    const double C1247 = (C5937 * C5933 * C6029 + ae * C5966 * C5986 +
                          C5966 * (ae * C5986 + C5966 * C6032)) /
                         C5806;
    const double C1488 =
        (2 * (ae * C5986 + C5966 * C6016) + ae * (C5986 + C5991 * C6003) +
         C5966 * (C6016 + ae * C5966 * C5991 +
                  C5966 * (ae * C5991 +
                           C5966 * std::pow(C5934, 5) * bs[5] * C6013))) /
        C5806;
    const double C1558 =
        (2 * (ae * C5986 + C5966 * C6032) + ae * (C5986 + C5991 * C6003) +
         C5966 * (C6032 + ae * C5966 * C5991 +
                  C5966 * (ae * C5991 +
                           C5966 * std::pow(C5934, 5) * bs[5] * C6029))) /
        C5806;
    const double C1778 =
        (ae * (C5980 * C5986 + C5939) + C5966 * (ae * C5972 + C5980 * C6016)) /
        C5806;
    const double C174 = (C5929 * C5927 * C5983 + C5986 * C5932) / C5803;
    const double C175 =
        (2 * C5928 * C5986 + C5928 * (C5986 + C5991 * C5932)) / C5803;
    const double C523 = (C5966 * (C5986 + C5991 * C5932)) / C5803;
    const double C524 = (C5966 * C5928 * C5986) / C5803;
    const double C807 =
        (C5980 * (C5986 + C5991 * C5932) + (C5931 + C5945 * C5932) * ae) /
        C5803;
    const double C808 = (C5980 * C5928 * C5986 + C5928 * C5931 * ae) / C5803;
    const double C1096 = (C5929 * C5927 * C5983 + C5986 * C6003) / C5803;
    const double C1375 =
        (2 * C5966 * C5986 + C5966 * (C5986 + C5991 * C6003)) / C5803;
    const double C1688 =
        (C5980 * (C5986 + C5991 * C6003) + (C5931 + C5945 * C6003) * ae) /
        C5803;
    const double C1689 = (C5980 * C5966 * C5986 + C5966 * C5931 * ae) / C5803;
    const double C137 = C6354 * C130;
    const double C184 = C6365 * C177;
    const double C257 = C6354 * C250;
    const double C300 = C6365 * C294;
    const double C303 = C6365 * C295;
    const double C370 = C6354 * C364;
    const double C373 = C6354 * C365;
    const double C412 = C6365 * C405;
    const double C1310 = C6315 * C461;
    const double C1381 = C6365 * C528;
    const double C1424 = C6315 * C557;
    const double C1491 = C6365 * C618;
    const double C1525 = C6315 * C647;
    const double C1588 = C6365 * C705;
    const double C2429 = C6315 * C745;
    const double C2470 = C6354 * C780;
    const double C2541 = C6315 * C841;
    const double C2582 = C6354 * C870;
    const double C2649 = C6315 * C931;
    const double C2682 = C6354 * C960;
    const double C2230 =
        (C5966 * C5990 + ae * C5980 * C6191 +
         C5980 * (ae * C6191 +
                  C5980 * C5966 * std::pow(C5934, 5) * bs[5] * C5984)) /
        C5806;
    const double C2340 =
        (C5966 * C6024 + ae * C5980 * C6191 +
         C5980 * (ae * C6191 +
                  C5980 * C5966 * std::pow(C5934, 5) * bs[5] * C6021)) /
        C5806;
    const double C3476 =
        (2 * ae * C5980 * C6191 +
         C5928 * C5980 * C5966 *
             (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) * C5935) /
        C5806;
    const double C2172 = (C5966 * C5940 + C6191 * C6036) / C5803;
    const double C6114 = C5966 * C6113;
    const double C2051 =
        (C5928 * C6016 + ae * C5980 * C6113 +
         C5980 * (ae * C6113 +
                  C5980 * C5928 * std::pow(C5934, 5) * bs[5] * C6013)) /
        C5806;
    const double C2107 =
        (C5928 * C6032 + ae * C5980 * C6113 +
         C5980 * (ae * C6113 +
                  C5980 * C5928 * std::pow(C5934, 5) * bs[5] * C6029)) /
        C5806;
    const double C3622 =
        (2 * ae * C5980 * C6113 +
         C5966 * C5980 * C5928 *
             (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) * C5935) /
        C5806;
    const double C1930 = (C5928 * C5972 + C6113 * C6036) / C5803;
    const double C6185 = C5980 * C6119;
    const double C1192 =
        (C5928 * C6016 + ae * C5966 * C6119 +
         C5966 * (ae * C6119 +
                  C5966 * C5928 * std::pow(C5934, 5) * bs[5] * C6013)) /
        C5806;
    const double C1248 =
        (C5928 * C6032 + ae * C5966 * C6119 +
         C5966 * (ae * C6119 +
                  C5966 * C5928 * std::pow(C5934, 5) * bs[5] * C6029)) /
        C5806;
    const double C3766 =
        (2 * ae * C5966 * C6119 +
         C5980 * C5966 * C5928 *
             (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) * C5935) /
        C5806;
    const double C1097 = (C5928 * C5986 + C6119 * C6003) / C5803;
    const double C6199 = C5980 * C6198;
    const double C2474 = C6354 * C1931;
    const double C2545 = C6315 * C1992;
    const double C1385 = C6365 * C1098;
    const double C1528 = C6315 * C1219;
    const double C72 = -(C6439 * C6330 * de) / C6331;
    const double C73 = C6428 * C6439;
    const double C450 = -(C6438 * C6336 * de) / C6331;
    const double C451 = C6428 * C6438;
    const double C735 = -(C6437 * C6343 * de) / C6331;
    const double C736 = C6428 * C6437;
    const double C5811 = 2 * C5809;
    const double C79 =
        ((0 * ae) / C5803 - C5809 / C5806) / (2 * C5803) + (0 * ae) / C5803;
    const double C2757 = (0 * ae) / C5803 - C5809 / C5806;
    const double C66 = (2 * C6422 * C6423) / C5803;
    const double C2750 = C6423 / C5803;
    const double C5861 = 2 * C5853;
    const double C1065 =
        ((0 * ae) / C5803 - C5853 / C5806) / (2 * C5803) + (0 * ae) / C5803;
    const double C2801 = (0 * ae) / C5803 - C5853 / C5806;
    const double C138 = C124 * C82;
    const double C136 = C124 * C85;
    const double C134 = C124 * C81;
    const double C256 = C124 * C126;
    const double C254 = C124 * C125;
    const double C369 = C124 * C173;
    const double C590 = C124 * C493;
    const double C874 = C124 * C777;
    const double C2471 = C124 * C1894;
    const double C2469 = C124 * C742;
    const double C2467 = C124 * C739;
    const double C2681 = C124 * C809;
    const double C3841 = C124 * C738;
    const double C258 = C248 * C82;
    const double C255 = C248 * C81;
    const double C2583 = C248 * C1894;
    const double C2581 = C248 * C739;
    const double C3963 = C248 * C738;
    const double C1021 = (2 * C6422 * C6429) / C5803;
    const double C2752 = C6429 / C5803;
    const double C1064 =
        (((C6354 - (C5837 * 2 * C5853) / C5803) * ae) / C5803 - C5851 / C5810) /
            (2 * C5803) +
        ((C5837 * ((0 * ae) / C5803 - C5853 / C5806) + C2753) * ae) / C5803;
    const double C5887 = 2 * C5879;
    const double C1961 =
        ((0 * ae) / C5803 - C5879 / C5806) / (2 * C5803) + (0 * ae) / C5803;
    const double C3881 = (0 * ae) / C5803 - C5879 / C5806;
    const double C185 = C171 * C82;
    const double C183 = C171 * C85;
    const double C181 = C171 * C81;
    const double C299 = C171 * C126;
    const double C411 = C171 * C173;
    const double C409 = C171 * C172;
    const double C709 = C171 * C525;
    const double C993 = C171 * C809;
    const double C1382 = C171 * C1025;
    const double C1380 = C171 * C458;
    const double C1378 = C171 * C455;
    const double C1490 = C171 * C493;
    const double C2849 = C171 * C454;
    const double C413 = C403 * C82;
    const double C410 = C403 * C81;
    const double C1589 = C403 * C1025;
    const double C1587 = C403 * C455;
    const double C3091 = C403 * C454;
    const double C1892 = (2 * C6422 * C6430) / C5803;
    const double C3802 = C6430 / C5803;
    const double C1960 =
        (((C6365 - (C5840 * 2 * C5879) / C5803) * ae) / C5803 - C5877 / C5810) /
            (2 * C5803) +
        ((C5840 * ((0 * ae) / C5803 - C5879 / C5806) + C3803) * ae) / C5803;
    const double C5942 = C5941 + C5939;
    const double C1428 = C6315 * C1126;
    const double C5532 = C2753 * C1661;
    const double C5215 = C3803 * C1691;
    const double C5257 = C6315 * C1719;
    const double C5374 = C6315 * C1806;
    const double C2651 = C6315 * C2078;
    const double C1384 = C171 * C1027;
    const double C1426 = C6315 * C1027;
    const double C5255 = C6315 * C1626;
    const double C2473 = C124 * C1896;
    const double C2543 = C6315 * C1896;
    const double C5954 = C5951 * ae;
    const double C3551 = (C5980 * C5966 * C6119 + C5966 * C5951 * ae) / C5803;
    const double C1026 = C5928 * C5931 + C5951 * C6003;
    const double C1895 = C5928 * C5931 + C5951 * C6036;
    const double C3474 = C5980 * C5966 * C5951;
    const double C5958 = C5956 + C5950;
    const double C6133 = C6131 + C5950;
    const double C6213 = C6211 + C5950;
    const double C2313 =
        (ae * (C5986 + C5980 * (C5980 * C5991 + C5950) + C5980 * C5945 * ae) +
         C5966 * (C6016 + ae * C5980 * C5977 +
                  C5980 * (ae * C5977 +
                           C5980 * std::pow(C5934, 5) * bs[5] * C6013))) /
        C5806;
    const double C5957 = C5955 * C5935;
    const double C6008 = C6007 * C5935;
    const double C6041 = C6040 * C5935;
    const double C6134 = C6132 * ae;
    const double C2171 = C5966 * C5931 + C6132 * C6036;
    const double C6214 = C6212 * ae;
    const double C260 = C6354 * C251;
    const double C415 = C6365 * C406;
    const double C6110 = C6109 + C5939;
    const double C141 = C6354 * C131;
    const double C3844 = C6354 * C779;
    const double C4605 = C2751 * C840;
    const double C4005 = C3803 * C901;
    const double C4080 = C6354 * C959;
    const double C2684 = C6354 * C2106;
    const double C139 = C6354 * C127;
    const double C259 = C124 * C127;
    const double C302 = C171 * C127;
    const double C261 = C124 * C128;
    const double C588 = C124 * C491;
    const double C589 = C124 * C492;
    const double C2806 = C2753 * C492;
    const double C2978 = C171 * C492;
    const double C872 = C124 * C775;
    const double C873 = C124 * C776;
    const double C3842 = C6354 * C776;
    const double C2023 = C124 * C1929;
    const double C2472 = C6354 * C1929;
    const double C2585 = C124 * C2464;
    const double C6182 = C6181 + C5939;
    const double C188 = C6365 * C178;
    const double C2852 = C6365 * C527;
    const double C2979 = C6365 * C617;
    const double C3370 = C2751 * C646;
    const double C3053 = C2753 * C675;
    const double C1493 = C6365 * C1191;
    const double C5333 = C3803 * C1778;
    const double C186 = C6365 * C174;
    const double C372 = C124 * C174;
    const double C414 = C171 * C174;
    const double C416 = C171 * C175;
    const double C707 = C171 * C523;
    const double C708 = C171 * C524;
    const double C2850 = C6365 * C524;
    const double C991 = C171 * C807;
    const double C992 = C171 * C808;
    const double C3886 = C3803 * C808;
    const double C4079 = C124 * C808;
    const double C1278 = C171 * C1096;
    const double C1383 = C6365 * C1096;
    const double C1591 = C171 * C1375;
    const double C1864 = C171 * C1688;
    const double C1865 = C171 * C1689;
    const double C5211 = C3803 * C1689;
    const double C2024 = C124 * C1930;
    const double C1279 = C171 * C1097;
    const double C5812 = C5804 * C5811;
    const double C1024 = -C5811 / C5803;
    const double C2760 = C2757 * C85;
    const double C3255 = C2757 * C492;
    const double C3251 = C2757 * C454;
    const double C3369 = C2757 * C524;
    const double C4604 = C2757 * C776;
    const double C4600 = C2757 * C738;
    const double C4716 = C2757 * C808;
    const double C3132 = C2750 * C461;
    const double C3254 = C2750 * C557;
    const double C3250 = C2750 * C458;
    const double C3368 = C2750 * C647;
    const double C4481 = C2750 * C745;
    const double C4603 = C2750 * C841;
    const double C4599 = C2750 * C742;
    const double C4715 = C2750 * C931;
    const double C5862 = C5837 * C5861;
    const double C2805 = C2801 * C454;
    const double C2933 = C2801 * C491;
    const double C2931 = C2801 * C492;
    const double C2926 = C2801 * C493;
    const double C3052 = C2801 * C524;
    const double C5531 = C2801 * C1626;
    const double C5527 = C2801 * C1624;
    const double C5759 = C2801 * C1689;
    const double C143 = C136 + C137;
    const double C142 = C134 + C135;
    const double C374 = C369 + C370;
    const double C2476 = C2469 + C2470;
    const double C2475 = C2467 + C2468;
    const double C2685 = C2681 + C2682;
    const double C262 = C255 + C256;
    const double C2586 = C2581 + C874;
    const double C2808 = C2752 * C130;
    const double C2804 = C2752 * C126;
    const double C2929 = C2752 * C250;
    const double C3051 = C2752 * C364;
    const double C5530 = C2752 * C780;
    const double C5526 = C2752 * C777;
    const double C5644 = C2752 * C870;
    const double C5758 = C2752 * C960;
    const double C1063 =
        (((0 - (C5837 * C5851) / C5803) * ae) / C5803 - (0 * be) / C5810) /
            (2 * C5803) +
        ((C5837 * (((C6354 - (C5837 * 2 * C5853) / C5803) * ae) / C5803 -
                   C5851 / C5810) +
          C2752) *
         ae) /
            C5803 +
        (0 * ae) / C5803 - C5853 / C5806;
    const double C1164 = C1064 * C492;
    const double C1161 = C1064 * C493;
    const double C5888 = C5840 * C5887;
    const double C3885 = C3881 * C738;
    const double C4004 = C3881 * C776;
    const double C4127 = C3881 * C807;
    const double C4125 = C3881 * C808;
    const double C4120 = C3881 * C809;
    const double C4444 = C3881 * C1689;
    const double C5214 = C3881 * C1626;
    const double C5210 = C3881 * C1624;
    const double C5449 = C3881 * C1688;
    const double C190 = C183 + C184;
    const double C189 = C181 + C182;
    const double C304 = C299 + C300;
    const double C1387 = C1380 + C1381;
    const double C1386 = C1378 + C1379;
    const double C1494 = C1490 + C1491;
    const double C417 = C410 + C411;
    const double C1592 = C1587 + C709;
    const double C3888 = C3802 * C177;
    const double C3884 = C3802 * C173;
    const double C4003 = C3802 * C294;
    const double C4123 = C3802 * C405;
    const double C5213 = C3802 * C528;
    const double C5209 = C3802 * C525;
    const double C5331 = C3802 * C618;
    const double C5446 = C3802 * C705;
    const double C1959 =
        (((0 - (C5840 * C5877) / C5803) * ae) / C5803 - (0 * be) / C5810) /
            (2 * C5803) +
        ((C5840 * (((C6365 - (C5840 * 2 * C5879) / C5803) * ae) / C5803 -
                   C5877 / C5810) +
          C3802) *
         ae) /
            C5803 +
        (0 * ae) / C5803 - C5879 / C5806;
    const double C2144 = C1960 * C808;
    const double C2141 = C1960 * C809;
    const double C2397 = C1960 * C1689;
    const double C5943 = ae * C5942;
    const double C86 =
        (C5929 * C5927 * C5936 + C5928 * C5942 + C5928 * C5931 * ae) / C5803;
    const double C457 = (C5966 * C5942) / C5803;
    const double C741 = (C5980 * C5942) / C5803;
    const double C1389 = C1384 + C1385;
    const double C2478 = C2473 + C2474;
    const double C6115 = C6114 + C5954;
    const double C6186 = C6185 + C5954;
    const double C3768 = C171 * C3551;
    const double C4442 = C3881 * C3551;
    const double C5960 = ae * C5958;
    const double C5959 = C5928 * C5958;
    const double C6043 = C5966 * C5958;
    const double C6072 = C5980 * C5958;
    const double C1028 = (C5942 + C5958 * C6003) / C5803;
    const double C1897 = (C5942 + C5958 * C6036) / C5803;
    const double C6136 = ae * C6133;
    const double C6135 = C5966 * C6133;
    const double C6153 = C5980 * C6133;
    const double C6216 = ae * C6213;
    const double C6215 = C5980 * C6213;
    const double C460 =
        (2 * ae * C5966 * C5940 + C5928 * C5966 * C5957) / C5806;
    const double C744 =
        (2 * ae * C5980 * C5940 + C5928 * C5980 * C5957) / C5806;
    const double C1029 =
        ((C5931 + C5932 * C5933 * C5937) * C5935 + C5957 * C6003) / C5806;
    const double C1030 =
        (2 * ae * (C5940 + C5953 * C6003) +
         C5928 * (C5957 + (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6003)) /
        C5806;
    const double C1307 =
        (2 * C5966 * C5957 +
         C5966 * (C5957 + (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6003)) /
        C5806;
    const double C1627 =
        (C5980 * (C5957 + (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6003)) /
        C5806;
    const double C1628 = (C5980 * C5966 * C5957) / C5806;
    const double C1898 =
        ((C5931 + C5932 * C5933 * C5937) * C5935 + C5957 * C6036) / C5806;
    const double C1899 =
        (2 * ae * (C5940 + C5953 * C6036) +
         C5928 * (C5957 + (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6036)) /
        C5806;
    const double C2173 =
        (C5966 * C5957 +
         C5966 * (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) * C5935 *
             C6036) /
        C5806;
    const double C2426 =
        (2 * C5980 * C5957 +
         C5980 * (C5957 + (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6036)) /
        C5806;
    const double C252 =
        (2 * C5928 * C6008 +
         C5928 * (C6008 + (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C5932)) /
        C5806;
    const double C584 =
        (2 * ae * (C5972 + C5977 * C5932) +
         C5966 * (C6008 + (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C5932)) /
        C5806;
    const double C585 =
        (2 * ae * C5928 * C5972 + C5966 * C5928 * C6008) / C5806;
    const double C868 =
        (C5980 * (C6008 + (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C5932)) /
        C5806;
    const double C869 = (C5980 * C5928 * C6008) / C5806;
    const double C1747 =
        (2 * ae * C5980 * C5972 + C5966 * C5980 * C6008) / C5806;
    const double C2020 =
        ((C5931 + C6003 * C5933 * C5937) * C5935 + C6008 * C6036) / C5806;
    const double C2021 =
        (C5928 * C6008 +
         C5928 * (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) * C5935 *
             C6036) /
        C5806;
    const double C2284 =
        (2 * ae * (C5972 + C5977 * C6036) +
         C5966 * (C6008 + (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6036)) /
        C5806;
    const double C2579 =
        (2 * C5980 * C6008 +
         C5980 * (C6008 + (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6036)) /
        C5806;
    const double C407 =
        (2 * C5928 * C6041 +
         C5928 * (C6041 + (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C5932)) /
        C5806;
    const double C703 =
        (C5966 * (C6041 + (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C5932)) /
        C5806;
    const double C704 = (C5966 * C5928 * C6041) / C5806;
    const double C987 =
        (2 * ae * (C5986 + C5991 * C5932) +
         C5980 * (C6041 + (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C5932)) /
        C5806;
    const double C988 =
        (2 * ae * C5928 * C5986 + C5980 * C5928 * C6041) / C5806;
    const double C1275 =
        ((C5931 + C6036 * C5933 * C5937) * C5935 + C6041 * C6003) / C5806;
    const double C1276 =
        (C5928 * C6041 +
         C5928 * (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) * C5935 *
             C6003) /
        C5806;
    const double C1585 =
        (2 * C5966 * C6041 +
         C5966 * (C6041 + (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6003)) /
        C5806;
    const double C1861 =
        (2 * ae * (C5986 + C5991 * C6003) +
         C5980 * (C6041 + (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                              C5935 * C6003)) /
        C5806;
    const double C1862 =
        (2 * ae * C5966 * C5986 + C5980 * C5966 * C6041) / C5806;
    const double C6200 = C6199 + C6134;
    const double C1777 =
        (ae * C5972 + C5980 * C6016 + ae * (C5980 * C5966 * C5991 + C6134) +
         C5966 * (ae * (C5980 * C5991 + C5950) +
                  C5966 * (ae * C5977 +
                           C5980 * std::pow(C5934, 5) * bs[5] * C6013))) /
        C5806;
    const double C6111 = ae * C6110;
    const double C1066 =
        (C5929 * C5927 * C5969 + C5966 * C6110 + C5966 * C5931 * ae) / C5803;
    const double C1659 = (C5980 * C6110) / C5803;
    const double C2201 = (C6110 + C6133 * C6036) / C5803;
    const double C144 = C138 + C139;
    const double C263 = C258 + C259;
    const double C305 = C302 + C303;
    const double C3965 = C3963 + C873;
    const double C3845 = C3841 + C3842;
    const double C2587 = C2583 + C2023;
    const double C2477 = C2471 + C2472;
    const double C6183 = ae * C6182;
    const double C1962 =
        (C5929 * C5927 * C5983 + C5980 * C6182 + C5980 * C5931 * ae) / C5803;
    const double C2980 = C2978 + C2979;
    const double C191 = C185 + C186;
    const double C375 = C372 + C373;
    const double C418 = C413 + C414;
    const double C3093 = C3091 + C708;
    const double C2853 = C2849 + C2850;
    const double C4081 = C4079 + C4080;
    const double C1593 = C1589 + C1278;
    const double C1388 = C1382 + C1383;
    const double C5813 = C5812 / C5803;
    const double C1037 = C1024 * C85;
    const double C1034 = C1024 * C1027;
    const double C1033 = C1024 * C458;
    const double C1032 = C1024 * C84;
    const double C1313 = C1024 * C1306;
    const double C1425 = C1024 * C1025;
    const double C1423 = C1024 * C493;
    const double C1421 = C1024 * C455;
    const double C1527 = C1024 * C1096;
    const double C1524 = C1024 * C525;
    const double C1632 = C1024 * C742;
    const double C1631 = C1024 * C1626;
    const double C1630 = C1024 * C1625;
    const double C1901 = C1024 * C1896;
    const double C2175 = C1024 * C2172;
    const double C2432 = C1024 * C2425;
    const double C2544 = C1024 * C1929;
    const double C2542 = C1024 * C1894;
    const double C2540 = C1024 * C777;
    const double C2538 = C1024 * C739;
    const double C2648 = C1024 * C809;
    const double C5254 = C1024 * C1624;
    const double C5373 = C1024 * C1689;
    const double C3372 = C3369 + C3370;
    const double C4609 = C4604 + C4605;
    const double C5863 = C5862 / C5803;
    const double C2812 = C2805 + C2806;
    const double C3055 = C3052 + C3053;
    const double C5536 = C5531 + C5532;
    const double C368 = C142 * C171;
    const double C376 = C374 * C6365;
    const double C4077 = C374 * C3802;
    const double C2480 = C2476 * C6315;
    const double C4527 = C2476 * C2750;
    const double C2479 = C2475 * C1024;
    const double C264 = C262 + C256;
    const double C2588 = C2586 + C874;
    const double C1165 = C1063 * C126;
    const double C1160 = C1063 * C125;
    const double C1462 = C1063 * C493;
    const double C1751 = C1063 * C777;
    const double C5889 = C5888 / C5803;
    const double C3892 = C3885 + C3886;
    const double C4007 = C4004 + C4005;
    const double C5219 = C5214 + C5215;
    const double C5217 = C5210 + C5211;
    const double C298 = C189 * C124;
    const double C306 = C304 * C6354;
    const double C2976 = C304 * C2752;
    const double C1391 = C1387 * C6315;
    const double C3212 = C1387 * C2750;
    const double C1390 = C1386 * C1024;
    const double C419 = C417 + C411;
    const double C1594 = C1592 + C709;
    const double C2145 = C1959 * C173;
    const double C2140 = C1959 * C172;
    const double C2398 = C1959 * C525;
    const double C2716 = C1959 * C809;
    const double C90 =
        ((C5931 + C5932 * C5933 * C5937) * C5935 + C5943 + C5943 +
         C5928 * (2 * ae * C5940 +
                  C5928 * (C5933 * C5937 + C5932 * bs[4] * std::pow(C5926, 4)) *
                      C5935)) /
        C5806;
    const double C495 = (C5943 + C5966 * (ae * C5972 + C5928 * C5976)) / C5806;
    const double C556 = (C5943 + C5966 * (ae * C5972 + C5928 * C5999)) / C5806;
    const double C811 = (C5943 + C5980 * (ae * C5986 + C5928 * C5990)) / C5806;
    const double C930 = (C5943 + C5980 * (ae * C5986 + C5928 * C6024)) / C5806;
    const double C95 = C79 * C86;
    const double C140 = C124 * C86;
    const double C187 = C171 * C86;
    const double C2765 = C2757 * C86;
    const double C1036 = C1024 * C457;
    const double C2762 = C2757 * C457;
    const double C2809 = C2801 * C457;
    const double C2851 = C171 * C457;
    const double C3252 = C2751 * C457;
    const double C1903 = C1024 * C741;
    const double C3480 = C2757 * C741;
    const double C3843 = C124 * C741;
    const double C3889 = C3881 * C741;
    const double C4601 = C2751 * C741;
    const double C1393 = C1389 * C6315;
    const double C2482 = C2478 * C6315;
    const double C6116 = ae * C6115;
    const double C1067 =
        (C5928 * C5972 + C5966 * C6115 + C5966 * C5951 * ae) / C5803;
    const double C3515 = (C5980 * C6115) / C5803;
    const double C6187 = ae * C6186;
    const double C1963 =
        (C5928 * C5986 + C5980 * C6186 + C5980 * C5951 * ae) / C5803;
    const double C3516 =
        (C5980 * (C5960 + C5966 * (ae * C5977 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5970))) /
        C5806;
    const double C5961 = C5940 + C5959;
    const double C6044 = ae * C6043;
    const double C3475 = (C5980 * C6043) / C5803;
    const double C6073 = ae * C6072;
    const double C1035 = C1024 * C1028;
    const double C3135 = C2757 * C1028;
    const double C1902 = C1024 * C1897;
    const double C4484 = C2757 * C1897;
    const double C6137 = C5972 + C6135;
    const double C6154 = ae * C6153;
    const double C6217 = C5986 + C6215;
    const double C3134 = C2751 * C460;
    const double C4483 = C2751 * C744;
    const double C1312 = C6315 * C1029;
    const double C5135 = C6315 * C1628;
    const double C2431 = C6315 * C1898;
    const double C2932 = C2753 * C585;
    const double C3964 = C6354 * C869;
    const double C5646 = C2753 * C1747;
    const double C2584 = C6354 * C2020;
    const double C3092 = C6365 * C704;
    const double C4126 = C3803 * C988;
    const double C1590 = C6365 * C1275;
    const double C5448 = C3803 * C1862;
    const double C6201 = ae * C6200;
    const double C2229 =
        (C5966 * C5986 + C5980 * C6200 + C5980 * C6132 * ae) / C5803;
    const double C1157 = ((C5931 + C6003 * C5933 * C5937) * C5935 + C6111 +
                          C6111 + C5966 * (2 * ae * C5972 + C5966 * C6008)) /
                         C5806;
    const double C1834 = (C6111 + C5980 * (ae * C5986 + C5966 * C6032)) / C5806;
    const double C1162 = C1065 * C1066;
    const double C1427 = C1024 * C1066;
    const double C1461 = C1064 * C1066;
    const double C1492 = C171 * C1066;
    const double C3297 = C2801 * C1066;
    const double C1750 = C1064 * C1659;
    const double C2287 = C124 * C1659;
    const double C3626 = C2801 * C1659;
    const double C5256 = C1024 * C1659;
    const double C5332 = C3881 * C1659;
    const double C5528 = C2753 * C1659;
    const double C2286 = C124 * C2201;
    const double C5647 = C2801 * C2201;
    const double C371 = C144 * C171;
    const double C265 = C263 + C259;
    const double C307 = C305 * C6354;
    const double C3966 = C3965 + C873;
    const double C4078 = C3845 * C3881;
    const double C4528 = C3845 * C2757;
    const double C2589 = C2587 + C2023;
    const double C2481 = C2477 * C1024;
    const double C2137 = ((C5931 + C6036 * C5933 * C5937) * C5935 + C6183 +
                          C6183 + C5980 * (2 * ae * C5986 + C5980 * C6041)) /
                         C5806;
    const double C2142 = C1961 * C1962;
    const double C2650 = C1024 * C1962;
    const double C2683 = C124 * C1962;
    const double C2715 = C1960 * C1962;
    const double C4790 = C3881 * C1962;
    const double C2981 = C2980 * C2753;
    const double C301 = C191 * C124;
    const double C377 = C375 * C6365;
    const double C420 = C418 + C414;
    const double C3094 = C3093 + C708;
    const double C2977 = C2853 * C2801;
    const double C3213 = C2853 * C2757;
    const double C4082 = C4081 * C3803;
    const double C1595 = C1593 + C1278;
    const double C1392 = C1388 * C1024;
    const double C5814 = C6315 - C5813;
    const double C1431 = C1425 + C1426;
    const double C1430 = C1423 + C1424;
    const double C1429 = C1421 + C1422;
    const double C1530 = C1527 + C1528;
    const double C1529 = C1524 + C1525;
    const double C2549 = C2544 + C2545;
    const double C2548 = C2542 + C2543;
    const double C2547 = C2540 + C2541;
    const double C2546 = C2538 + C2539;
    const double C2652 = C2648 + C2649;
    const double C5258 = C5254 + C5255;
    const double C5375 = C5373 + C5374;
    const double C5864 = C6354 - C5863;
    const double C266 = C264 + C257;
    const double C2590 = C2588 + C2582;
    const double C5890 = C6365 - C5889;
    const double C421 = C419 + C412;
    const double C1596 = C1594 + C1588;
    const double C2810 = C2753 * C495;
    const double C3256 = C2751 * C556;
    const double C3890 = C3803 * C811;
    const double C4717 = C2751 * C930;
    const double C145 = C140 + C141;
    const double C192 = C187 + C188;
    const double C2854 = C2851 + C2852;
    const double C3258 = C3251 + C3252;
    const double C3846 = C3843 + C3844;
    const double C4607 = C4600 + C4601;
    const double C1158 =
        (C5928 * C6008 + C6116 + C6116 +
         C5966 * (2 * ae * C6113 +
                  C5966 * C5928 *
                      (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                      C5935)) /
        C5806;
    const double C3731 =
        (C6116 + C5980 * (ae * C6119 +
                          C5966 * C5928 * std::pow(C5934, 5) * bs[5] * C6029)) /
        C5806;
    const double C1163 = C1065 * C1067;
    const double C3295 = C2801 * C1067;
    const double C3624 = C2801 * C3515;
    const double C4305 = C124 * C3515;
    const double C2138 =
        (C5928 * C6041 + C6187 + C6187 +
         C5980 * (2 * ae * C6119 +
                  C5980 * C5928 *
                      (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                      C5935)) /
        C5806;
    const double C3661 =
        (C6187 + C5966 * (ae * C6113 +
                          C5980 * C5928 * std::pow(C5934, 5) * bs[5] * C6013)) /
        C5806;
    const double C2143 = C1961 * C1963;
    const double C4788 = C3881 * C1963;
    const double C5962 = C5961 + C5954;
    const double C459 =
        (C5966 * C5957 + C6044 + C6044 +
         C5928 * (2 * ae * C5966 * C5953 +
                  C5928 * C5966 *
                      (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                      C5935)) /
        C5806;
    const double C1069 =
        (ae * C5972 + C5928 * C5976 + C6044 +
         C5966 * (C5960 + C5966 * (ae * C5977 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5970))) /
        C5806;
    const double C1127 =
        (ae * C5972 + C5928 * C5999 + C6044 +
         C5966 * (C5960 + C5966 * (ae * C5977 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5996))) /
        C5806;
    const double C3552 = (C6044 + C5980 * C5966 *
                                      (ae * C5991 + C5928 * std::pow(C5934, 5) *
                                                        bs[5] * C5984)) /
                         C5806;
    const double C3696 = (C6044 + C5980 * C5966 *
                                      (ae * C5991 + C5928 * std::pow(C5934, 5) *
                                                        bs[5] * C6021)) /
                         C5806;
    const double C3478 = C2757 * C3475;
    const double C4826 = C1024 * C3475;
    const double C743 =
        (C5980 * C5957 + C6073 + C6073 +
         C5928 * (2 * ae * C5980 * C5953 +
                  C5928 * C5980 *
                      (C5946 * C5947 + C5932 * bs[5] * std::pow(C5934, 5)) *
                      C5935)) /
        C5806;
    const double C1965 =
        (ae * C5986 + C5928 * C5990 + C6073 +
         C5980 * (C5960 + C5980 * (ae * C5991 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5984))) /
        C5806;
    const double C2079 =
        (ae * C5986 + C5928 * C6024 + C6073 +
         C5980 * (C5960 + C5980 * (ae * C5991 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C6021))) /
        C5806;
    const double C3587 = (C6073 + C5966 * C5980 *
                                      (ae * C5977 + C5928 * std::pow(C5934, 5) *
                                                        bs[5] * C5996)) /
                         C5806;
    const double C6138 = C6137 + C6134;
    const double C1746 =
        (C5980 * C6008 + C6154 + C6154 +
         C5966 * (2 * ae * C5980 * C5977 +
                  C5966 * C5980 *
                      (C5946 * C5947 + C6003 * bs[5] * std::pow(C5934, 5)) *
                      C5935)) /
        C5806;
    const double C2367 =
        (ae * C5986 + C5966 * C6032 + C6154 +
         C5980 * (C6136 + C5980 * (ae * C5991 + C5966 * std::pow(C5934, 5) *
                                                    bs[5] * C6029))) /
        C5806;
    const double C6218 = C6217 + C6214;
    const double C2394 =
        (C5966 * C6041 + C6201 + C6201 +
         C5980 * (2 * ae * C6198 +
                  C5980 * C5966 *
                      (C5946 * C5947 + C6036 * bs[5] * std::pow(C5934, 5)) *
                      C5935)) /
        C5806;
    const double C2396 = C1961 * C2229;
    const double C5797 = C3881 * C2229;
    const double C5760 = C2753 * C1834;
    const double C1432 = C1427 + C1428;
    const double C1495 = C1492 + C1493;
    const double C5259 = C5256 + C5257;
    const double C5335 = C5332 + C5333;
    const double C5534 = C5527 + C5528;
    const double C267 = C265 + C260;
    const double C3967 = C3966 + C3964;
    const double C2591 = C2589 + C2584;
    const double C2653 = C2650 + C2651;
    const double C2686 = C2683 + C2684;
    const double C422 = C420 + C415;
    const double C3095 = C3094 + C3092;
    const double C1597 = C1595 + C1590;
    const double C5815 = C5814 * C5808;
    const double C75 =
        (((0 - (C5804 * C5802) / C5803) * ae) / C5803 - (0 * be) / C5810) /
            (2 * C5803) +
        ((C5804 * ((C5814 * ae) / C5803 - C5802 / C5810) + C2750) * ae) /
            C5803 +
        (0 * ae) / C5803 - C5809 / C5806;
    const double C77 =
        ((C5814 * ae) / C5803 - C5802 / C5810) / (2 * C5803) +
        ((C5804 * ((0 * ae) / C5803 - C5809 / C5806) + C2751) * ae) / C5803;
    const double C2755 = (C5814 * ae) / C5803 - C5802 / C5810;
    const double C1526 = C1431 * C171;
    const double C1523 = C1429 * C171;
    const double C1532 = C1530 * C6365;
    const double C1531 = C1529 * C6365;
    const double C5371 = C1529 * C3802;
    const double C2553 = C2549 * C6354;
    const double C2552 = C2548 * C124;
    const double C2551 = C2547 * C6354;
    const double C5606 = C2547 * C2752;
    const double C2550 = C2546 * C124;
    const double C5372 = C5258 * C3881;
    const double C5607 = C5258 * C2801;
    const double C5376 = C5375 * C3803;
    const double C5865 = C5864 * C5808;
    const double C2800 = (C5864 * ae) / C5803 - C5851 / C5810;
    const double C2592 = C2590 * C6315;
    const double C4644 = C2590 * C2750;
    const double C5891 = C5890 * C5808;
    const double C3880 = (C5890 * ae) / C5803 - C5877 / C5810;
    const double C423 = C421 * C6354;
    const double C3090 = C421 * C2752;
    const double C2814 = C2809 + C2810;
    const double C3260 = C3255 + C3256;
    const double C3894 = C3889 + C3890;
    const double C4719 = C4716 + C4717;
    const double C3214 = C2854 * C2751;
    const double C4529 = C3846 * C2751;
    const double C5963 = ae * C5962;
    const double C87 =
        (2 * C5942 + C5928 * C5962 + (C5931 + C5945 * C5932) * ae) / C5803;
    const double C456 = (C5966 * C5962) / C5803;
    const double C740 = (C5980 * C5962) / C5803;
    const double C6139 = ae * C6138;
    const double C1347 =
        (2 * C6110 + C5966 * C6138 + (C5931 + C5945 * C6003) * ae) / C5803;
    const double C1658 = (C5980 * C6138) / C5803;
    const double C6219 = ae * C6218;
    const double C2508 =
        (2 * C6182 + C5980 * C6218 + (C5931 + C5945 * C6036) * ae) / C5803;
    const double C5762 = C5759 + C5760;
    const double C5608 = C5259 * C2753;
    const double C4645 = C3967 * C2751;
    const double C2593 = C2591 * C6315;
    const double C424 = C422 * C6354;
    const double C3096 = C3095 * C2753;
    const double C5823 = C5804 * C5815;
    const double C74 =
        (ae * -2 * C5802) / (C5806 * 2 * C5803) +
        (((C5804 * ((-4 * C5809) / C5803 - (C5804 * C5815) / C5803) * ae) /
              C5803 +
          2 * ((C5814 * ae) / C5803 - C5802 / C5810)) *
         ae) /
            C5803 -
        C5815 / C5810;
    const double C78 = (-C5815 / C5803) / (4 * C5806);
    const double C1023 = -C5815 / C5803;
    const double C2756 = (-C5815 / C5803) / (2 * C5803);
    const double C98 = C75 * C85;
    const double C93 = C75 * C84;
    const double C465 = C75 * C458;
    const double C749 = C75 * C742;
    const double C97 = C77 * C86;
    const double C94 = C77 * C85;
    const double C464 = C77 * C457;
    const double C748 = C77 * C741;
    const double C2766 = C2755 * C85;
    const double C2764 = C2755 * C457;
    const double C2761 = C2755 * C458;
    const double C2759 = C2755 * C84;
    const double C3136 = C2755 * C1027;
    const double C3211 = C1386 * C2755;
    const double C3253 = C2755 * C493;
    const double C3249 = C2755 * C455;
    const double C3367 = C2755 * C525;
    const double C3481 = C2755 * C742;
    const double C3479 = C2755 * C1626;
    const double C3806 = C2755 * C741;
    const double C4485 = C2755 * C1896;
    const double C4526 = C2475 * C2755;
    const double C4602 = C2755 * C777;
    const double C4598 = C2755 * C739;
    const double C4714 = C2755 * C809;
    const double C5868 = C5837 * C5865;
    const double C1154 =
        (ae * -2 * C5851) / (C5806 * 2 * C5803) +
        (((C5837 * ((-4 * C5853) / C5803 - (C5837 * C5865) / C5803) * ae) /
              C5803 +
          2 * ((C5864 * ae) / C5803 - C5851 / C5810)) *
         ae) /
            C5803 -
        C5865 / C5810;
    const double C1156 = (-C5865 / C5803) / (4 * C5806);
    const double C2923 = (-C5865 / C5803) / (2 * C5803);
    const double C2807 = C2800 * C85;
    const double C2803 = C2800 * C81;
    const double C2934 = C2800 * C127;
    const double C2928 = C2800 * C126;
    const double C2925 = C2800 * C125;
    const double C2975 = C189 * C2800;
    const double C3050 = C2800 * C173;
    const double C3298 = C2800 * C493;
    const double C3296 = C2800 * C492;
    const double C3627 = C2800 * C777;
    const double C3625 = C2800 * C776;
    const double C5295 = C2800 * C1659;
    const double C5529 = C2800 * C742;
    const double C5525 = C2800 * C739;
    const double C5605 = C2546 * C2800;
    const double C5648 = C2800 * C1929;
    const double C5757 = C2800 * C809;
    const double C5894 = C5840 * C5891;
    const double C2134 =
        (ae * -2 * C5877) / (C5806 * 2 * C5803) +
        (((C5840 * ((-4 * C5879) / C5803 - (C5840 * C5891) / C5803) * ae) /
              C5803 +
          2 * ((C5890 * ae) / C5803 - C5877 / C5810)) *
         ae) /
            C5803 -
        C5891 / C5810;
    const double C2136 = (-C5891 / C5803) / (4 * C5806);
    const double C4117 = (-C5891 / C5803) / (2 * C5803);
    const double C3887 = C3880 * C85;
    const double C3883 = C3880 * C81;
    const double C4002 = C3880 * C126;
    const double C4076 = C142 * C3880;
    const double C4128 = C3880 * C174;
    const double C4122 = C3880 * C173;
    const double C4119 = C3880 * C172;
    const double C4445 = C3880 * C525;
    const double C4443 = C3880 * C524;
    const double C4791 = C3880 * C809;
    const double C4789 = C3880 * C808;
    const double C5212 = C3880 * C458;
    const double C5208 = C3880 * C455;
    const double C5330 = C3880 * C493;
    const double C5370 = C1429 * C3880;
    const double C5450 = C3880 * C1096;
    const double C5798 = C3880 * C1689;
    const double C91 =
        (2 * (2 * ae * C5940 + C5928 * C5957) + C5963 + C5963 +
         C5928 * (C5957 + C5960 + C5960 +
                  C5928 * (2 * ae * C5953 +
                           C5928 *
                               (C5946 * C5947 +
                                C5932 * bs[5] * std::pow(C5934, 5)) *
                               C5935))) /
        C5806;
    const double C494 =
        (C5963 + C5966 * (C5976 + ae * C5928 * C5977 +
                          C5928 * (ae * C5977 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5970))) /
        C5806;
    const double C555 =
        (C5963 + C5966 * (C5999 + ae * C5928 * C5977 +
                          C5928 * (ae * C5977 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5996))) /
        C5806;
    const double C810 =
        (C5963 + C5980 * (C5990 + ae * C5928 * C5991 +
                          C5928 * (ae * C5991 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C5984))) /
        C5806;
    const double C929 =
        (C5963 + C5980 * (C6024 + ae * C5928 * C5991 +
                          C5928 * (ae * C5991 + C5928 * std::pow(C5934, 5) *
                                                    bs[5] * C6021))) /
        C5806;
    const double C96 = C79 * C87;
    const double C463 = C79 * C456;
    const double C2763 = C2757 * C456;
    const double C747 = C79 * C740;
    const double C3805 = C2757 * C740;
    const double C1458 =
        (2 * (2 * ae * C5972 + C5966 * C6008) + C6139 + C6139 +
         C5966 * (C6008 + C6136 + C6136 +
                  C5966 * (2 * ae * C5977 +
                           C5966 *
                               (C5946 * C5947 +
                                C6003 * bs[5] * std::pow(C5934, 5)) *
                               C5935))) /
        C5806;
    const double C1833 =
        (C6139 + C5980 * (C6032 + ae * C5966 * C5991 +
                          C5966 * (ae * C5991 + C5966 * std::pow(C5934, 5) *
                                                    bs[5] * C6029))) /
        C5806;
    const double C1460 = C1065 * C1347;
    const double C1749 = C1065 * C1658;
    const double C5294 = C2801 * C1658;
    const double C2712 =
        (2 * (2 * ae * C5986 + C5980 * C6041) + C6219 + C6219 +
         C5980 * (C6041 + C6216 + C6216 +
                  C5980 * (2 * ae * C5991 +
                           C5980 *
                               (C5946 * C5947 +
                                C6036 * bs[5] * std::pow(C5934, 5)) *
                               C5935))) /
        C5806;
    const double C2714 = C1961 * C2508;
    const double C76 =
        (((-4 * C5809) / C5803 - C5823 / C5803) * ae) / C5810 +
        ((2 * ((0 * ae) / C5803 - C5809 / C5806) - C5823 / C5810) * ae) / C5803;
    const double C2754 = (((-4 * C5809) / C5803 - C5823 / C5803) * ae) / C5803;
    const double C1311 = C1023 * C1025;
    const double C1309 = C1023 * C455;
    const double C2430 = C1023 * C1894;
    const double C2428 = C1023 * C739;
    const double C5134 = C1023 * C1624;
    const double C3133 = C2756 * C454;
    const double C4482 = C2756 * C738;
    const double C3259 = C3253 + C3254;
    const double C3257 = C3249 + C3250;
    const double C3371 = C3367 + C3368;
    const double C4608 = C4602 + C4603;
    const double C4606 = C4598 + C4599;
    const double C4718 = C4714 + C4715;
    const double C1155 =
        (((-4 * C5853) / C5803 - C5868 / C5803) * ae) / C5810 +
        ((2 * ((0 * ae) / C5803 - C5853 / C5806) - C5868 / C5810) * ae) / C5803;
    const double C2922 = (((-4 * C5853) / C5803 - C5868 / C5803) * ae) / C5803;
    const double C2930 = C2923 * C454;
    const double C5645 = C2923 * C1624;
    const double C2813 = C2807 + C2808;
    const double C2811 = C2803 + C2804;
    const double C3054 = C3050 + C3051;
    const double C5535 = C5529 + C5530;
    const double C5533 = C5525 + C5526;
    const double C5761 = C5757 + C5758;
    const double C2135 =
        (((-4 * C5879) / C5803 - C5894 / C5803) * ae) / C5810 +
        ((2 * ((0 * ae) / C5803 - C5879 / C5806) - C5894 / C5810) * ae) / C5803;
    const double C4116 = (((-4 * C5879) / C5803 - C5894 / C5803) * ae) / C5803;
    const double C4124 = C4117 * C738;
    const double C5447 = C4117 * C1624;
    const double C3893 = C3887 + C3888;
    const double C3891 = C3883 + C3884;
    const double C4006 = C4002 + C4003;
    const double C5218 = C5212 + C5213;
    const double C5216 = C5208 + C5209;
    const double C5334 = C5330 + C5331;
    const double C3131 = C2754 * C455;
    const double C4480 = C2754 * C739;
    const double C1315 = C1311 + C1034;
    const double C1314 = C1309 + C1033;
    const double C2434 = C2430 + C1901;
    const double C2433 = C2428 + C1632;
    const double C5136 = C5134 + C1631;
    const double C3138 = C3133 + C2762;
    const double C4487 = C4482 + C3480;
    const double C2927 = C2922 * C81;
    const double C5643 = C2922 * C739;
    const double C2936 = C2930 + C2931;
    const double C5650 = C5645 + C3626;
    const double C4121 = C4116 * C81;
    const double C5445 = C4116 * C455;
    const double C4130 = C4124 + C4125;
    const double C5452 = C5447 + C4444;
    const double C3137 = C3131 + C2761;
    const double C4486 = C4480 + C3481;
    const double C1317 = C1315 + C1034;
    const double C1316 = C1314 + C1033;
    const double C2436 = C2434 + C1901;
    const double C2435 = C2433 + C1632;
    const double C5137 = C5136 + C1631;
    const double C3140 = C3138 + C2762;
    const double C4489 = C4487 + C3480;
    const double C2935 = C2927 + C2928;
    const double C5649 = C5643 + C3627;
    const double C2938 = C2936 + C2931;
    const double C5652 = C5650 + C3626;
    const double C4129 = C4121 + C4122;
    const double C5451 = C5445 + C4445;
    const double C4132 = C4130 + C4125;
    const double C5454 = C5452 + C4444;
    const double C3139 = C3137 + C2761;
    const double C4488 = C4486 + C3481;
    const double C1319 = C1317 + C1312;
    const double C1318 = C1316 + C1310;
    const double C2438 = C2436 + C2431;
    const double C2437 = C2435 + C2429;
    const double C5138 = C5137 + C5135;
    const double C3142 = C3140 + C3134;
    const double C4491 = C4489 + C4483;
    const double C2937 = C2935 + C2928;
    const double C5651 = C5649 + C3627;
    const double C2940 = C2938 + C2932;
    const double C5654 = C5652 + C5646;
    const double C4131 = C4129 + C4122;
    const double C5453 = C5451 + C4445;
    const double C4134 = C4132 + C4126;
    const double C5456 = C5454 + C5448;
    const double C3141 = C3139 + C3132;
    const double C4490 = C4488 + C4481;
    const double C1321 = C1319 * C6365;
    const double C1320 = C1318 * C6365;
    const double C5133 = C1318 * C3802;
    const double C5139 = C5138 * C3803;
    const double C2939 = C2937 + C2929;
    const double C5653 = C5651 + C5644;
    const double C4133 = C4131 + C4123;
    const double C5455 = C5453 + C5446;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2754 * C80 + C2759 + C2759 + C2750 * C88 + C2756 * C81 +
                     C2760 + C2760 + C2751 * C89) *
                        C6365 * C2752 +
                    (C2754 * C455 + C2761 + C2761 + C2750 * C461 +
                     C2756 * C454 + C2762 + C2762 + C2751 * C460) *
                        C6365 * C2753) *
                       C6437 * C6438 * C72 -
                   ((C2756 * C453 + C2763 + C2763 + C2751 * C459 +
                     C2754 * C454 + C2764 + C2764 + C2750 * C460) *
                        C6365 * C2753 +
                    (C2756 * C82 + C2765 + C2765 + C2751 * C90 + C2754 * C81 +
                     C2766 + C2766 + C2750 * C89) *
                        C6365 * C2752) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C2755 +
           (C2800 * C84 + C2752 * C129 + C2801 * C458 + C2753 * C496) * C2750 +
           (C2811 + C2812) * C2757 + (C2813 + C2814) * C2751) *
              C6365 * C6437 * C6438 * C72 -
          ((C2801 * C456 + C2753 * C494 + C2800 * C86 + C2752 * C131) * C2751 +
           (C2801 * C453 + C2753 * C491 + C2800 * C82 + C2752 * C127) * C2757 +
           (C2814 + C2813) * C2750 + (C2812 + C2811) * C2755) *
              C6365 * C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C6365 * C172) * C2755 +
            (C171 * C84 + C6365 * C176) * C2750 + C189 * C2757 + C190 * C2751) *
               C2752 +
           (C1386 * C2755 + C1387 * C2750 + C2853 * C2757 + C2854 * C2751) *
               C2753) *
              C6437 * C6438 * C72 -
          (((C171 * C456 + C6365 * C526) * C2751 +
            (C171 * C453 + C6365 * C523) * C2757 + C2854 * C2750 +
            C2853 * C2755) *
               C2753 +
           (C192 * C2751 + C191 * C2757 + C190 * C2750 + C189 * C2755) *
               C2752) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C2800 +
           (C2755 * C125 + C2750 * C218 + C2757 * C126 + C2751 * C219) * C2752 +
           (C2755 * C455 + C2750 * C458 + C2757 * C454 + C2751 * C457) * C2801 +
           (C2755 * C493 + C2750 * C557 + C2757 * C492 + C2751 * C556) *
               C2753) *
              C6365 * C6437 * C6438 * C72 -
          ((C2757 * C491 + C2751 * C555 + C2755 * C492 + C2750 * C556) * C2753 +
           (C2757 * C453 + C2751 * C456 + C2755 * C454 + C2750 * C457) * C2801 +
           (C2757 * C127 + C2751 * C220 + C2755 * C126 + C2750 * C219) * C2752 +
           (C2757 * C82 + C2751 * C86 + C2755 * C81 + C2750 * C85) * C2800) *
              C6365 * C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2922 * C80 + C2925 + C2925 + C2752 * C249 + C2923 * C455 +
                     C2926 + C2926 + C2753 * C586) *
                        C2750 +
                    (C2939 + C2940) * C2751) *
                       C6365 * C6437 * C6438 * C72 -
                   ((C2923 * C453 + C2933 + C2933 + C2753 * C584 + C2922 * C82 +
                     C2934 + C2934 + C2752 * C251) *
                        C2751 +
                    (C2940 + C2939) * C2750) *
                       C6365 * C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C6365 * C172) * C2800 +
                     (C171 * C125 + C6365 * C293) * C2752 + C1386 * C2801 +
                     C1494 * C2753) *
                        C2750 +
                    (C2975 + C2976 + C2977 + C2981) * C2751) *
                       C6437 * C6438 * C72 -
                   (((C171 * C491 + C6365 * C616) * C2753 +
                     (C171 * C453 + C6365 * C523) * C2801 + C305 * C2752 +
                     C191 * C2800) *
                        C2751 +
                    (C2981 + C2977 + C2976 + C2975) * C2750) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C171 +
            (C2755 * C172 + C2750 * C333 + C2757 * C173 + C2751 * C334) *
                C6365) *
               C2752 +
           ((C2755 * C455 + C2750 * C458 + C2757 * C454 + C2751 * C457) * C171 +
            (C2755 * C525 + C2750 * C647 + C2757 * C524 + C2751 * C646) *
                C6365) *
               C2753) *
              C6437 * C6438 * C72 -
          (((C2757 * C523 + C2751 * C645 + C2755 * C524 + C2750 * C646) *
                C6365 +
            (C2757 * C453 + C2751 * C456 + C2755 * C454 + C2750 * C457) *
                C171) *
               C2753 +
           ((C2757 * C174 + C2751 * C335 + C2755 * C173 + C2750 * C334) *
                C6365 +
            (C2757 * C82 + C2751 * C86 + C2755 * C81 + C2750 * C85) * C171) *
               C2752) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C171 +
            (C2800 * C172 + C2752 * C363 + C2801 * C525 + C2753 * C676) *
                C6365) *
               C2750 +
           ((C2811 + C2812) * C171 + (C3054 + C3055) * C6365) * C2751) *
              C6437 * C6438 * C72 -
          (((C2801 * C523 + C2753 * C674 + C2800 * C174 + C2752 * C365) *
                C6365 +
            (C2801 * C453 + C2753 * C491 + C2800 * C82 + C2752 * C127) * C171) *
               C2751 +
           ((C3055 + C3054) * C6365 + (C2812 + C2811) * C171) * C2750) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C6365 * C404) * C2752 + C1596 * C2753) *
               C2750 +
           (C3090 + C3096) * C2751) *
              C6437 * C6438 * C72 -
          (((C403 * C453 + C707 + C707 + C6365 * C703) * C2753 + C422 * C2752) *
               C2751 +
           (C3096 + C3090) * C2750) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2754 * C80 + C2759 + C2759 + C2750 * C88 + C2756 * C81 +
                     C2760 + C2760 + C2751 * C89) *
                        C6365 * C2752 +
                    (C3141 + C3142) * C6365 * C2753) *
                       C6437 * C450 -
                   ((C2756 * C1026 + C3135 + C3135 + C2751 * C1030 +
                     C2754 * C1025 + C3136 + C3136 + C2750 * C1029) *
                        C6365 * C2753 +
                    (C3142 + C3141) * C6365 * C2752) *
                       C6437 * C451) *
                  C6439) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C2755 +
           (C2800 * C84 + C2752 * C129 + C2801 * C458 + C2753 * C496) * C2750 +
           (C2811 + C2812) * C2757 + (C2813 + C2814) * C2751) *
              C6365 * C6437 * C450 -
          ((C2801 * C1028 + C2753 * C1069 + C2800 * C457 + C2752 * C495) *
               C2751 +
           (C2801 * C1026 + C2753 * C1067 + C2800 * C454 + C2752 * C492) *
               C2757 +
           (C2801 * C1027 + C2753 * C1068 + C2800 * C458 + C2752 * C496) *
               C2750 +
           (C2801 * C1025 + C2753 * C1066 + C2800 * C455 + C2752 * C493) *
               C2755) *
              C6365 * C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C6365 * C172) * C2755 +
            (C171 * C84 + C6365 * C176) * C2750 + C189 * C2757 + C190 * C2751) *
               C2752 +
           (C3211 + C3212 + C3213 + C3214) * C2753) *
              C6437 * C450 -
          (((C171 * C1028 + C6365 * C1099) * C2751 +
            (C171 * C1026 + C6365 * C1097) * C2757 + C1389 * C2750 +
            C1388 * C2755) *
               C2753 +
           (C3214 + C3213 + C3212 + C3211) * C2752) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C2800 +
           (C2755 * C125 + C2750 * C218 + C2757 * C126 + C2751 * C219) * C2752 +
           (C3257 + C3258) * C2801 + (C3259 + C3260) * C2753) *
              C6365 * C6437 * C450 -
          ((C2757 * C1067 + C2751 * C1127 + C2755 * C1066 + C2750 * C1126) *
               C2753 +
           (C2757 * C1026 + C2751 * C1028 + C2755 * C1025 + C2750 * C1027) *
               C2801 +
           (C3260 + C3259) * C2752 + (C3258 + C3257) * C2800) *
              C6365 * C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2922 * C80 + C2925 + C2925 + C2752 * C249 + C2923 * C455 +
                     C2926 + C2926 + C2753 * C586) *
                        C2750 +
                    (C2939 + C2940) * C2751) *
                       C6365 * C6437 * C450 -
                   ((C2923 * C1026 + C3295 + C3295 + C2753 * C1158 +
                     C2922 * C454 + C3296 + C3296 + C2752 * C585) *
                        C2751 +
                    (C2923 * C1025 + C3297 + C3297 + C2753 * C1157 +
                     C2922 * C455 + C3298 + C3298 + C2752 * C586) *
                        C2750) *
                       C6365 * C6437 * C451) *
                  C6439) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C6365 * C172) * C2800 +
            (C171 * C125 + C6365 * C293) * C2752 + C1386 * C2801 +
            C1494 * C2753) *
               C2750 +
           (C2975 + C2976 + C2977 + C2981) * C2751) *
              C6437 * C450 -
          (((C171 * C1067 + C6365 * C1192) * C2753 +
            (C171 * C1026 + C6365 * C1097) * C2801 + C2980 * C2752 +
            C2853 * C2800) *
               C2751 +
           (C1495 * C2753 + C1388 * C2801 + C1494 * C2752 + C1386 * C2800) *
               C2750) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C171 +
            (C2755 * C172 + C2750 * C333 + C2757 * C173 + C2751 * C334) *
                C6365) *
               C2752 +
           ((C3257 + C3258) * C171 + (C3371 + C3372) * C6365) * C2753) *
              C6437 * C450 -
          (((C2757 * C1097 + C2751 * C1220 + C2755 * C1096 + C2750 * C1219) *
                C6365 +
            (C2757 * C1026 + C2751 * C1028 + C2755 * C1025 + C2750 * C1027) *
                C171) *
               C2753 +
           ((C3372 + C3371) * C6365 + (C3258 + C3257) * C171) * C2752) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C171 +
            (C2800 * C172 + C2752 * C363 + C2801 * C525 + C2753 * C676) *
                C6365) *
               C2750 +
           ((C2811 + C2812) * C171 + (C3054 + C3055) * C6365) * C2751) *
              C6437 * C450 -
          (((C2801 * C1097 + C2753 * C1248 + C2800 * C524 + C2752 * C675) *
                C6365 +
            (C2801 * C1026 + C2753 * C1067 + C2800 * C454 + C2752 * C492) *
                C171) *
               C2751 +
           ((C2801 * C1096 + C2753 * C1247 + C2800 * C525 + C2752 * C676) *
                C6365 +
            (C2801 * C1025 + C2753 * C1066 + C2800 * C455 + C2752 * C493) *
                C171) *
               C2750) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C6365 * C404) * C2752 + C1596 * C2753) *
               C2750 +
           (C3090 + C3096) * C2751) *
              C6437 * C450 -
          (((C403 * C1026 + C1279 + C1279 + C6365 * C1276) * C2753 +
            C3095 * C2752) *
               C2751 +
           (C1597 * C2753 + C1596 * C2752) * C2750) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2754 * C80 + C2759 + C2759 + C2750 * C88 + C2756 * C81 +
                     C2760 + C2760 + C2751 * C89) *
                        C6365 * C2752 +
                    (C3141 + C3142) * C6365 * C2753) *
                       C735 -
                   ((C2756 * C3474 + C3478 + C3478 + C2751 * C3476 +
                     C2754 * C1624 + C3479 + C3479 + C2750 * C1628) *
                        C6365 * C2753 +
                    (C2756 * C738 + C3480 + C3480 + C2751 * C744 +
                     C2754 * C739 + C3481 + C3481 + C2750 * C745) *
                        C6365 * C2752) *
                       C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C2755 +
           (C2800 * C84 + C2752 * C129 + C2801 * C458 + C2753 * C496) * C2750 +
           (C2811 + C2812) * C2757 + (C2813 + C2814) * C2751) *
              C6365 * C735 -
          ((C2801 * C3475 + C2753 * C3516 + C2800 * C741 + C2752 * C779) *
               C2751 +
           (C2801 * C3474 + C2753 * C3515 + C2800 * C738 + C2752 * C776) *
               C2757 +
           (C2801 * C1626 + C2753 * C1661 + C2800 * C742 + C2752 * C780) *
               C2750 +
           (C2801 * C1624 + C2753 * C1659 + C2800 * C739 + C2752 * C777) *
               C2755) *
              C6365 * C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C6365 * C172) * C2755 +
            (C171 * C84 + C6365 * C176) * C2750 + C189 * C2757 + C190 * C2751) *
               C2752 +
           (C3211 + C3212 + C3213 + C3214) * C2753) *
              C735 -
          (((C171 * C3475 + C6365 * C3552) * C2751 +
            (C171 * C3474 + C6365 * C3551) * C2757 +
            (C171 * C1626 + C6365 * C1691) * C2750 +
            (C171 * C1624 + C6365 * C1689) * C2755) *
               C2753 +
           ((C171 * C741 + C6365 * C811) * C2751 +
            (C171 * C738 + C6365 * C808) * C2757 +
            (C171 * C742 + C6365 * C812) * C2750 +
            (C171 * C739 + C6365 * C809) * C2755) *
               C2752) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C2800 +
           (C2755 * C125 + C2750 * C218 + C2757 * C126 + C2751 * C219) * C2752 +
           (C3257 + C3258) * C2801 + (C3259 + C3260) * C2753) *
              C6365 * C735 -
          ((C2757 * C3515 + C2751 * C3587 + C2755 * C1659 + C2750 * C1719) *
               C2753 +
           (C2757 * C3474 + C2751 * C3475 + C2755 * C1624 + C2750 * C1626) *
               C2801 +
           (C2757 * C776 + C2751 * C840 + C2755 * C777 + C2750 * C841) * C2752 +
           (C2757 * C738 + C2751 * C741 + C2755 * C739 + C2750 * C742) *
               C2800) *
              C6365 * C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2922 * C80 + C2925 + C2925 + C2752 * C249 + C2923 * C455 +
                     C2926 + C2926 + C2753 * C586) *
                        C2750 +
                    (C2939 + C2940) * C2751) *
                       C6365 * C735 -
                   ((C2923 * C3474 + C3624 + C3624 + C2753 * C3622 +
                     C2922 * C738 + C3625 + C3625 + C2752 * C869) *
                        C2751 +
                    (C2923 * C1624 + C3626 + C3626 + C2753 * C1747 +
                     C2922 * C739 + C3627 + C3627 + C2752 * C870) *
                        C2750) *
                       C6365 * C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C6365 * C172) * C2800 +
                     (C171 * C125 + C6365 * C293) * C2752 + C1386 * C2801 +
                     C1494 * C2753) *
                        C2750 +
                    (C2975 + C2976 + C2977 + C2981) * C2751) *
                       C735 -
                   (((C171 * C3515 + C6365 * C3661) * C2753 +
                     (C171 * C3474 + C6365 * C3551) * C2801 +
                     (C171 * C776 + C6365 * C901) * C2752 +
                     (C171 * C738 + C6365 * C808) * C2800) *
                        C2751 +
                    ((C171 * C1659 + C6365 * C1778) * C2753 +
                     (C171 * C1624 + C6365 * C1689) * C2801 +
                     (C171 * C777 + C6365 * C902) * C2752 +
                     (C171 * C739 + C6365 * C809) * C2800) *
                        C2750) *
                       C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C171 +
            (C2755 * C172 + C2750 * C333 + C2757 * C173 + C2751 * C334) *
                C6365) *
               C2752 +
           ((C3257 + C3258) * C171 + (C3371 + C3372) * C6365) * C2753) *
              C735 -
          (((C2757 * C3551 + C2751 * C3696 + C2755 * C1689 + C2750 * C1806) *
                C6365 +
            (C2757 * C3474 + C2751 * C3475 + C2755 * C1624 + C2750 * C1626) *
                C171) *
               C2753 +
           ((C2757 * C808 + C2751 * C930 + C2755 * C809 + C2750 * C931) *
                C6365 +
            (C2757 * C738 + C2751 * C741 + C2755 * C739 + C2750 * C742) *
                C171) *
               C2752) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C171 +
            (C2800 * C172 + C2752 * C363 + C2801 * C525 + C2753 * C676) *
                C6365) *
               C2750 +
           ((C2811 + C2812) * C171 + (C3054 + C3055) * C6365) * C2751) *
              C735 -
          (((C2801 * C3551 + C2753 * C3731 + C2800 * C808 + C2752 * C959) *
                C6365 +
            (C2801 * C3474 + C2753 * C3515 + C2800 * C738 + C2752 * C776) *
                C171) *
               C2751 +
           ((C2801 * C1689 + C2753 * C1834 + C2800 * C809 + C2752 * C960) *
                C6365 +
            (C2801 * C1624 + C2753 * C1659 + C2800 * C739 + C2752 * C777) *
                C171) *
               C2750) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C6365 * C404) * C2752 + C1596 * C2753) *
               C2750 +
           (C3090 + C3096) * C2751) *
              C735 -
          (((C403 * C3474 + C3768 + C3768 + C6365 * C3766) * C2753 +
            (C403 * C738 + C992 + C992 + C6365 * C988) * C2752) *
               C2751 +
           ((C403 * C1624 + C1865 + C1865 + C6365 * C1862) * C2753 +
            (C403 * C739 + C993 + C993 + C6365 * C989) * C2752) *
               C2750) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C3802 +
                     C2437 * C3803) *
                        C2752 +
                    (C1318 * C3802 +
                     (C1023 * C1624 + C1631 + C1631 + C6315 * C1628) * C3803) *
                        C2753) *
                       C6437 * C6438 * C72 -
                   (((C1023 * C3474 + C4826 + C4826 + C6315 * C3476) * C3803 +
                     (C1023 * C454 + C1036 + C1036 + C6315 * C460) * C3802) *
                        C2753 +
                    ((C1023 * C738 + C1903 + C1903 + C6315 * C744) * C3803 +
                     (C1023 * C81 + C1037 + C1037 + C6315 * C89) * C3802) *
                        C2752) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C1024 +
            (C2800 * C84 + C2752 * C129 + C2801 * C458 + C2753 * C496) *
                C6315) *
               C3802 +
           ((C2800 * C739 + C2752 * C777 + C2801 * C1624 + C2753 * C1659) *
                C1024 +
            (C2800 * C742 + C2752 * C780 + C2801 * C1626 + C2753 * C1661) *
                C6315) *
               C3803) *
              C6437 * C6438 * C72 -
          (((C2801 * C3475 + C2753 * C3516 + C2800 * C741 + C2752 * C779) *
                C6315 +
            (C2801 * C3474 + C2753 * C3515 + C2800 * C738 + C2752 * C776) *
                C1024) *
               C3803 +
           ((C2814 + C2813) * C6315 + (C2812 + C2811) * C1024) * C3802) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C1024 +
            (C3880 * C84 + C3802 * C176 + C3881 * C742 + C3803 * C812) *
                C6315) *
               C2752 +
           ((C3880 * C455 + C3802 * C525 + C3881 * C1624 + C3803 * C1689) *
                C1024 +
            (C3880 * C458 + C3802 * C528 + C3881 * C1626 + C3803 * C1691) *
                C6315) *
               C2753) *
              C6437 * C6438 * C72 -
          (((C3881 * C3475 + C3803 * C3552 + C3880 * C457 + C3802 * C527) *
                C6315 +
            (C3881 * C3474 + C3803 * C3551 + C3880 * C454 + C3802 * C524) *
                C1024) *
               C2753 +
           ((C3894 + C3893) * C6315 + (C3892 + C3891) * C1024) * C2752) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C2800 +
                     (C1024 * C125 + C6315 * C218) * C2752 + C1429 * C2801 +
                     C1430 * C2753) *
                        C3802 +
                    (C2546 * C2800 + C2547 * C2752 +
                     (C1024 * C1624 + C6315 * C1626) * C2801 +
                     (C1024 * C1659 + C6315 * C1719) * C2753) *
                        C3803) *
                       C6437 * C6438 * C72 -
                   (((C1024 * C3515 + C6315 * C3587) * C2753 +
                     (C1024 * C3474 + C6315 * C3475) * C2801 +
                     (C1024 * C776 + C6315 * C840) * C2752 +
                     (C1024 * C738 + C6315 * C741) * C2800) *
                        C3803 +
                    ((C1024 * C492 + C6315 * C556) * C2753 +
                     (C1024 * C454 + C6315 * C457) * C2801 +
                     (C1024 * C126 + C6315 * C219) * C2752 +
                     (C1024 * C81 + C6315 * C85) * C2800) *
                        C3802) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2922 * C80 + C2925 + C2925 + C2752 * C249 + C2923 * C455 +
                     C2926 + C2926 + C2753 * C586) *
                        C6315 * C3802 +
                    (C2922 * C739 + C3627 + C3627 + C2752 * C870 +
                     C2923 * C1624 + C3626 + C3626 + C2753 * C1747) *
                        C6315 * C3803) *
                       C6437 * C6438 * C72 -
                   ((C2923 * C3474 + C3624 + C3624 + C2753 * C3622 +
                     C2922 * C738 + C3625 + C3625 + C2752 * C869) *
                        C6315 * C3803 +
                    (C2940 + C2939) * C6315 * C3802) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C2800 +
           (C3880 * C125 + C3802 * C293 + C3881 * C777 + C3803 * C902) * C2752 +
           (C3880 * C455 + C3802 * C525 + C3881 * C1624 + C3803 * C1689) *
               C2801 +
           (C3880 * C493 + C3802 * C618 + C3881 * C1659 + C3803 * C1778) *
               C2753) *
              C6315 * C6437 * C6438 * C72 -
          ((C3881 * C3515 + C3803 * C3661 + C3880 * C492 + C3802 * C617) *
               C2753 +
           (C3881 * C3474 + C3803 * C3551 + C3880 * C454 + C3802 * C524) *
               C2801 +
           (C4007 + C4006) * C2752 + (C3892 + C3891) * C2800) *
              C6315 * C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C3880 +
                     (C1024 * C172 + C6315 * C333) * C3802 + C2546 * C3881 +
                     C2652 * C3803) *
                        C2752 +
                    (C1429 * C3880 + C1529 * C3802 +
                     (C1024 * C1624 + C6315 * C1626) * C3881 +
                     (C1024 * C1689 + C6315 * C1806) * C3803) *
                        C2753) *
                       C6437 * C6438 * C72 -
                   (((C1024 * C3551 + C6315 * C3696) * C3803 +
                     (C1024 * C3474 + C6315 * C3475) * C3881 +
                     (C1024 * C524 + C6315 * C646) * C3802 +
                     (C1024 * C454 + C6315 * C457) * C3880) *
                        C2753 +
                    ((C1024 * C808 + C6315 * C930) * C3803 +
                     (C1024 * C738 + C6315 * C741) * C3881 +
                     (C1024 * C173 + C6315 * C334) * C3802 +
                     (C1024 * C81 + C6315 * C85) * C3880) *
                        C2752) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C3880 +
           (C2800 * C172 + C2752 * C363 + C2801 * C525 + C2753 * C676) * C3802 +
           (C2800 * C739 + C2752 * C777 + C2801 * C1624 + C2753 * C1659) *
               C3881 +
           (C2800 * C809 + C2752 * C960 + C2801 * C1689 + C2753 * C1834) *
               C3803) *
              C6315 * C6437 * C6438 * C72 -
          ((C2801 * C3551 + C2753 * C3731 + C2800 * C808 + C2752 * C959) *
               C3803 +
           (C2801 * C3474 + C2753 * C3515 + C2800 * C738 + C2752 * C776) *
               C3881 +
           (C3055 + C3054) * C3802 + (C2812 + C2811) * C3880) *
              C6315 * C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4116 * C80 + C4119 + C4119 + C3802 * C404 + C4117 * C739 +
                     C4120 + C4120 + C3803 * C989) *
                        C2752 +
                    (C4116 * C455 + C4445 + C4445 + C3802 * C705 +
                     C4117 * C1624 + C4444 + C4444 + C3803 * C1862) *
                        C2753) *
                       C6315 * C6437 * C6438 * C72 -
                   ((C4117 * C3474 + C4442 + C4442 + C3803 * C3766 +
                     C4116 * C454 + C4443 + C4443 + C3802 * C704) *
                        C2753 +
                    (C4134 + C4133) * C2752) *
                       C6315 * C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C3802 +
                     C2437 * C3803) *
                        C2752 +
                    (C5133 + C5139) * C2753) *
                       C6437 * C450 -
                   (((C1023 * C1623 + C1630 + C1630 + C6315 * C1627) * C3803 +
                     C1319 * C3802) *
                        C2753 +
                    (C5139 + C5133) * C2752) *
                       C6437 * C451) *
                  C6439) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C1024 +
            (C2800 * C84 + C2752 * C129 + C2801 * C458 + C2753 * C496) *
                C6315) *
               C3802 +
           ((C2800 * C739 + C2752 * C777 + C2801 * C1624 + C2753 * C1659) *
                C1024 +
            (C2800 * C742 + C2752 * C780 + C2801 * C1626 + C2753 * C1661) *
                C6315) *
               C3803) *
              C6437 * C450 -
          (((C2801 * C1625 + C2753 * C1660 + C2800 * C1626 + C2752 * C1661) *
                C6315 +
            (C2801 * C1623 + C2753 * C1658 + C2800 * C1624 + C2752 * C1659) *
                C1024) *
               C3803 +
           ((C2801 * C1027 + C2753 * C1068 + C2800 * C458 + C2752 * C496) *
                C6315 +
            (C2801 * C1025 + C2753 * C1066 + C2800 * C455 + C2752 * C493) *
                C1024) *
               C3802) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C1024 +
            (C3880 * C84 + C3802 * C176 + C3881 * C742 + C3803 * C812) *
                C6315) *
               C2752 +
           ((C5216 + C5217) * C1024 + (C5218 + C5219) * C6315) * C2753) *
              C6437 * C450 -
          (((C3881 * C1625 + C3803 * C1690 + C3880 * C1027 + C3802 * C1098) *
                C6315 +
            (C3881 * C1623 + C3803 * C1688 + C3880 * C1025 + C3802 * C1096) *
                C1024) *
               C2753 +
           ((C5219 + C5218) * C6315 + (C5217 + C5216) * C1024) * C2752) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1024 * C80 + C6315 * C84) * C2800 +
            (C1024 * C125 + C6315 * C218) * C2752 + C1429 * C2801 +
            C1430 * C2753) *
               C3802 +
           (C2546 * C2800 + C2547 * C2752 + C5258 * C2801 + C5259 * C2753) *
               C3803) *
              C6437 * C450 -
          (((C1024 * C1658 + C6315 * C1718) * C2753 +
            (C1024 * C1623 + C6315 * C1625) * C2801 + C5259 * C2752 +
            C5258 * C2800) *
               C3803 +
           (C1432 * C2753 + C1431 * C2801 + C1430 * C2752 + C1429 * C2800) *
               C3802) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2922 * C80 + C2925 + C2925 + C2752 * C249 + C2923 * C455 +
                     C2926 + C2926 + C2753 * C586) *
                        C6315 * C3802 +
                    (C2922 * C739 + C3627 + C3627 + C2752 * C870 +
                     C2923 * C1624 + C3626 + C3626 + C2753 * C1747) *
                        C6315 * C3803) *
                       C6437 * C450 -
                   ((C2923 * C1623 + C5294 + C5294 + C2753 * C1746 +
                     C2922 * C1624 + C5295 + C5295 + C2752 * C1747) *
                        C6315 * C3803 +
                    (C2923 * C1025 + C3297 + C3297 + C2753 * C1157 +
                     C2922 * C455 + C3298 + C3298 + C2752 * C586) *
                        C6315 * C3802) *
                       C6437 * C451) *
                  C6439) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C2800 +
           (C3880 * C125 + C3802 * C293 + C3881 * C777 + C3803 * C902) * C2752 +
           (C5216 + C5217) * C2801 + (C5334 + C5335) * C2753) *
              C6315 * C6437 * C450 -
          ((C3881 * C1658 + C3803 * C1777 + C3880 * C1066 + C3802 * C1191) *
               C2753 +
           (C3881 * C1623 + C3803 * C1688 + C3880 * C1025 + C3802 * C1096) *
               C2801 +
           (C5335 + C5334) * C2752 + (C5217 + C5216) * C2800) *
              C6315 * C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C3880 +
                     (C1024 * C172 + C6315 * C333) * C3802 + C2546 * C3881 +
                     C2652 * C3803) *
                        C2752 +
                    (C5370 + C5371 + C5372 + C5376) * C2753) *
                       C6437 * C450 -
                   (((C1024 * C1688 + C6315 * C1805) * C3803 +
                     (C1024 * C1623 + C6315 * C1625) * C3881 + C1530 * C3802 +
                     C1431 * C3880) *
                        C2753 +
                    (C5376 + C5372 + C5371 + C5370) * C2752) *
                       C6437 * C451) *
                  C6439) /
                 (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C3880 +
           (C2800 * C172 + C2752 * C363 + C2801 * C525 + C2753 * C676) * C3802 +
           (C2800 * C739 + C2752 * C777 + C2801 * C1624 + C2753 * C1659) *
               C3881 +
           (C2800 * C809 + C2752 * C960 + C2801 * C1689 + C2753 * C1834) *
               C3803) *
              C6315 * C6437 * C450 -
          ((C2801 * C1688 + C2753 * C1833 + C2800 * C1689 + C2752 * C1834) *
               C3803 +
           (C2801 * C1623 + C2753 * C1658 + C2800 * C1624 + C2752 * C1659) *
               C3881 +
           (C2801 * C1096 + C2753 * C1247 + C2800 * C525 + C2752 * C676) *
               C3802 +
           (C2801 * C1025 + C2753 * C1066 + C2800 * C455 + C2752 * C493) *
               C3880) *
              C6315 * C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4116 * C80 + C4119 + C4119 + C3802 * C404 + C4117 * C739 +
                     C4120 + C4120 + C3803 * C989) *
                        C2752 +
                    (C5455 + C5456) * C2753) *
                       C6315 * C6437 * C450 -
                   ((C4117 * C1623 + C5449 + C5449 + C3803 * C1861 +
                     C4116 * C1025 + C5450 + C5450 + C3802 * C1275) *
                        C2753 +
                    (C5456 + C5455) * C2752) *
                       C6315 * C6437 * C451) *
                  C6439) /
                 (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C3802 +
                     C2437 * C3803) *
                        C2752 +
                    (C5133 + C5139) * C2753) *
                       C735 -
                   (((C1023 * C2171 + C2175 + C2175 + C6315 * C2173) * C3803 +
                     C5138 * C3802) *
                        C2753 +
                    (C2438 * C3803 + C2437 * C3802) * C2752) *
                       C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C1024 +
            (C2800 * C84 + C2752 * C129 + C2801 * C458 + C2753 * C496) *
                C6315) *
               C3802 +
           ((C5533 + C5534) * C1024 + (C5535 + C5536) * C6315) * C3803) *
              C735 -
          (((C2801 * C2172 + C2753 * C2202 + C2800 * C1896 + C2752 * C1931) *
                C6315 +
            (C2801 * C2171 + C2753 * C2201 + C2800 * C1894 + C2752 * C1929) *
                C1024) *
               C3803 +
           ((C5536 + C5535) * C6315 + (C5534 + C5533) * C1024) * C3802) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C1024 +
            (C3880 * C84 + C3802 * C176 + C3881 * C742 + C3803 * C812) *
                C6315) *
               C2752 +
           ((C5216 + C5217) * C1024 + (C5218 + C5219) * C6315) * C2753) *
              C735 -
          (((C3881 * C2172 + C3803 * C2230 + C3880 * C1626 + C3802 * C1691) *
                C6315 +
            (C3881 * C2171 + C3803 * C2229 + C3880 * C1624 + C3802 * C1689) *
                C1024) *
               C2753 +
           ((C3881 * C1896 + C3803 * C1964 + C3880 * C742 + C3802 * C812) *
                C6315 +
            (C3881 * C1894 + C3803 * C1962 + C3880 * C739 + C3802 * C809) *
                C1024) *
               C2752) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C2800 +
                     (C1024 * C125 + C6315 * C218) * C2752 + C1429 * C2801 +
                     C1430 * C2753) *
                        C3802 +
                    (C5605 + C5606 + C5607 + C5608) * C3803) *
                       C735 -
                   (((C1024 * C2201 + C6315 * C2257) * C2753 +
                     (C1024 * C2171 + C6315 * C2172) * C2801 + C2549 * C2752 +
                     C2548 * C2800) *
                        C3803 +
                    (C5608 + C5607 + C5606 + C5605) * C3802) *
                       C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2922 * C80 + C2925 + C2925 + C2752 * C249 + C2923 * C455 +
                     C2926 + C2926 + C2753 * C586) *
                        C6315 * C3802 +
                    (C5653 + C5654) * C6315 * C3803) *
                       C735 -
                   ((C2923 * C2171 + C5647 + C5647 + C2753 * C2284 +
                     C2922 * C1894 + C5648 + C5648 + C2752 * C2020) *
                        C6315 * C3803 +
                    (C5654 + C5653) * C6315 * C3802) *
                       C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C2800 +
           (C3880 * C125 + C3802 * C293 + C3881 * C777 + C3803 * C902) * C2752 +
           (C5216 + C5217) * C2801 + (C5334 + C5335) * C2753) *
              C6315 * C735 -
          ((C3881 * C2201 + C3803 * C2313 + C3880 * C1659 + C3802 * C1778) *
               C2753 +
           (C3881 * C2171 + C3803 * C2229 + C3880 * C1624 + C3802 * C1689) *
               C2801 +
           (C3881 * C1929 + C3803 * C2050 + C3880 * C777 + C3802 * C902) *
               C2752 +
           (C3881 * C1894 + C3803 * C1962 + C3880 * C739 + C3802 * C809) *
               C2800) *
              C6315 * C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1024 * C80 + C6315 * C84) * C3880 +
            (C1024 * C172 + C6315 * C333) * C3802 + C2546 * C3881 +
            C2652 * C3803) *
               C2752 +
           (C5370 + C5371 + C5372 + C5376) * C2753) *
              C735 -
          (((C1024 * C2229 + C6315 * C2340) * C3803 +
            (C1024 * C2171 + C6315 * C2172) * C3881 + C5375 * C3802 +
            C5258 * C3880) *
               C2753 +
           (C2653 * C3803 + C2548 * C3881 + C2652 * C3802 + C2546 * C3880) *
               C2752) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2800 * C80 + C2752 * C125 + C2801 * C455 + C2753 * C493) * C3880 +
           (C2800 * C172 + C2752 * C363 + C2801 * C525 + C2753 * C676) * C3802 +
           (C5533 + C5534) * C3881 + (C5761 + C5762) * C3803) *
              C6315 * C735 -
          ((C2801 * C2229 + C2753 * C2367 + C2800 * C1962 + C2752 * C2106) *
               C3803 +
           (C2801 * C2171 + C2753 * C2201 + C2800 * C1894 + C2752 * C1929) *
               C3881 +
           (C5762 + C5761) * C3802 + (C5534 + C5533) * C3880) *
              C6315 * C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4116 * C80 + C4119 + C4119 + C3802 * C404 + C4117 * C739 +
                     C4120 + C4120 + C3803 * C989) *
                        C2752 +
                    (C5455 + C5456) * C2753) *
                       C6315 * C735 -
                   ((C4117 * C2171 + C5797 + C5797 + C3803 * C2394 +
                     C4116 * C1624 + C5798 + C5798 + C3802 * C1862) *
                        C2753 +
                    (C4117 * C1894 + C4790 + C4790 + C3803 * C2137 +
                     C4116 * C739 + C4791 + C4791 + C3802 * C989) *
                        C2752) *
                       C6315 * C736) *
                  C6438 * C6439) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C6365 * C1020 +
           (C1023 * C455 + C1033 + C1033 + C6315 * C461) * C6365 * C1021 +
           (C1023 * C1025 + C1034 + C1034 + C6315 * C1029) * C6365 * C1022) *
              C6437 * C6438 * C72 -
          ((C1023 * C1026 + C1035 + C1035 + C6315 * C1030) * C6365 * C1022 +
           (C1023 * C454 + C1036 + C1036 + C6315 * C460) * C6365 * C1021 +
           (C1023 * C81 + C1037 + C1037 + C6315 * C89) * C6365 * C1020) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
           C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
              C6365 * C6354 * C6437 * C6438 * C72 -
          (C78 * C83 + C96 + C96 + C67 * C91 + C76 * C82 + C97 + C97 +
           C66 * C90 + C74 * C81 + C98 + C98 + C65 * C89) *
              C6365 * C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C1891 +
           (C1023 * C739 + C1632 + C1632 + C6315 * C745) * C1892 +
           (C1023 * C1894 + C1901 + C1901 + C6315 * C1898) * C1893) *
              C6354 * C6437 * C6438 * C72 -
          ((C1023 * C1895 + C1902 + C1902 + C6315 * C1899) * C1893 +
           (C1023 * C738 + C1903 + C1903 + C6315 * C744) * C1892 +
           (C1023 * C81 + C1037 + C1037 + C6315 * C89) * C1891) *
              C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (-std::pow(Pi, 2.5) * (((C1063 * C80 + C1020 * C125 + C1064 * C455 +
                                 C1021 * C493 + C1065 * C1025 + C1022 * C1066) *
                                    C1024 +
                                (C1063 * C84 + C1020 * C129 + C1064 * C458 +
                                 C1021 * C496 + C1065 * C1027 + C1022 * C1068) *
                                    C6315) *
                                   C6365 * C6437 * C6438 * C72 -
                               ((C1065 * C1028 + C1022 * C1069 + C1064 * C457 +
                                 C1021 * C495 + C1063 * C85 + C1020 * C130) *
                                    C6315 +
                                (C1065 * C1026 + C1022 * C1067 + C1064 * C454 +
                                 C1021 * C492 + C1063 * C81 + C1020 * C126) *
                                    C1024) *
                                   C6365 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C124 * C80 + C6354 * C125) * C75 +
                               (C124 * C84 + C6354 * C129) * C65 + C142 * C77 +
                               C143 * C66 + C144 * C79 + C145 * C67) *
                                  C6365 * C6437 * C6438 * C72 -
                              ((C124 * C87 + C6354 * C132) * C67 +
                               (C124 * C83 + C6354 * C128) * C79 + C145 * C66 +
                               C144 * C77 + C143 * C65 + C142 * C75) *
                                  C6365 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C6354 * C125) * C1024 +
            (C124 * C84 + C6354 * C129) * C6315) *
               C1891 +
           ((C124 * C739 + C6354 * C777) * C1024 +
            (C124 * C742 + C6354 * C780) * C6315) *
               C1892 +
           ((C124 * C1894 + C6354 * C1929) * C1024 +
            (C124 * C1896 + C6354 * C1931) * C6315) *
               C1893) *
              C6437 * C6438 * C72 -
          (((C124 * C1897 + C6354 * C1932) * C6315 +
            (C124 * C1895 + C6354 * C1930) * C1024) *
               C1893 +
           ((C124 * C741 + C6354 * C779) * C6315 +
            (C124 * C738 + C6354 * C776) * C1024) *
               C1892 +
           (C143 * C6315 + C142 * C1024) * C1891) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (-std::pow(Pi, 2.5) * ((((C171 * C80 + C6365 * C172) * C1024 +
                                 (C171 * C84 + C6365 * C176) * C6315) *
                                    C1020 +
                                ((C171 * C455 + C6365 * C525) * C1024 +
                                 (C171 * C458 + C6365 * C528) * C6315) *
                                    C1021 +
                                ((C171 * C1025 + C6365 * C1096) * C1024 +
                                 (C171 * C1027 + C6365 * C1098) * C6315) *
                                    C1022) *
                                   C6437 * C6438 * C72 -
                               (((C171 * C1028 + C6365 * C1099) * C6315 +
                                 (C171 * C1026 + C6365 * C1097) * C1024) *
                                    C1022 +
                                ((C171 * C457 + C6365 * C527) * C6315 +
                                 (C171 * C454 + C6365 * C524) * C1024) *
                                    C1021 +
                                (C190 * C6315 + C189 * C1024) * C1020) *
                                   C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C171 * C80 + C6365 * C172) * C75 +
                               (C171 * C84 + C6365 * C176) * C65 + C189 * C77 +
                               C190 * C66 + C191 * C79 + C192 * C67) *
                                  C6354 * C6437 * C6438 * C72 -
                              ((C171 * C87 + C6365 * C179) * C67 +
                               (C171 * C83 + C6365 * C175) * C79 + C192 * C66 +
                               C191 * C77 + C190 * C65 + C189 * C75) *
                                  C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1959 * C80 + C1891 * C172 + C1960 * C739 + C1892 * C809 +
            C1961 * C1894 + C1893 * C1962) *
               C1024 +
           (C1959 * C84 + C1891 * C176 + C1960 * C742 + C1892 * C812 +
            C1961 * C1896 + C1893 * C1964) *
               C6315) *
              C6354 * C6437 * C6438 * C72 -
          ((C1961 * C1897 + C1893 * C1965 + C1960 * C741 + C1892 * C811 +
            C1959 * C85 + C1891 * C177) *
               C6315 +
           (C1961 * C1895 + C1893 * C1963 + C1960 * C738 + C1892 * C808 +
            C1959 * C81 + C1891 * C173) *
               C1024) *
              C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) * (((C1024 * C80 + C6315 * C84) * C1063 +
                                (C1024 * C125 + C6315 * C218) * C1020 +
                                (C1024 * C455 + C6315 * C458) * C1064 +
                                (C1024 * C493 + C6315 * C557) * C1021 +
                                (C1024 * C1025 + C6315 * C1027) * C1065 +
                                (C1024 * C1066 + C6315 * C1126) * C1022) *
                                   C6365 * C6437 * C6438 * C72 -
                               ((C1024 * C1067 + C6315 * C1127) * C1022 +
                                (C1024 * C1026 + C6315 * C1028) * C1065 +
                                (C1024 * C492 + C6315 * C556) * C1021 +
                                (C1024 * C454 + C6315 * C457) * C1064 +
                                (C1024 * C126 + C6315 * C219) * C1020 +
                                (C1024 * C81 + C6315 * C85) * C1063) *
                                   C6365 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                                C79 * C82 + C67 * C86) *
                                   C124 +
                               (C75 * C125 + C65 * C218 + C77 * C126 +
                                C66 * C219 + C79 * C127 + C67 * C220) *
                                   C6354) *
                                  C6365 * C6437 * C6438 * C72 -
                              ((C79 * C128 + C67 * C221 + C77 * C127 +
                                C66 * C220 + C75 * C126 + C65 * C219) *
                                   C6354 +
                               (C79 * C83 + C67 * C87 + C77 * C82 + C66 * C86 +
                                C75 * C81 + C65 * C85) *
                                   C124) *
                                  C6365 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1024 * C80 + C6315 * C84) * C124 +
            (C1024 * C125 + C6315 * C218) * C6354) *
               C1891 +
           ((C1024 * C739 + C6315 * C742) * C124 +
            (C1024 * C777 + C6315 * C841) * C6354) *
               C1892 +
           ((C1024 * C1894 + C6315 * C1896) * C124 +
            (C1024 * C1929 + C6315 * C1992) * C6354) *
               C1893) *
              C6437 * C6438 * C72 -
          (((C1024 * C1930 + C6315 * C1993) * C6354 +
            (C1024 * C1895 + C6315 * C1897) * C124) *
               C1893 +
           ((C1024 * C776 + C6315 * C840) * C6354 +
            (C1024 * C738 + C6315 * C741) * C124) *
               C1892 +
           ((C1024 * C126 + C6315 * C219) * C6354 +
            (C1024 * C81 + C6315 * C85) * C124) *
               C1891) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (-std::pow(Pi, 2.5) * ((C1154 * C80 + C1160 + C1160 + C1020 * C249 +
                                C1155 * C455 + C1161 + C1161 + C1021 * C586 +
                                C1156 * C1025 + C1162 + C1162 + C1022 * C1157) *
                                   C6315 * C6365 * C6437 * C6438 * C72 -
                               (C1156 * C1026 + C1163 + C1163 + C1022 * C1158 +
                                C1155 * C454 + C1164 + C1164 + C1021 * C585 +
                                C1154 * C81 + C1165 + C1165 + C1020 * C250) *
                                   C6315 * C6365 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C248 * C80 + C254 + C254 + C6354 * C249) * C65 +
                               C266 * C66 + C267 * C67) *
                                  C6365 * C6437 * C6438 * C72 -
                              ((C248 * C83 + C261 + C261 + C6354 * C252) * C67 +
                               C267 * C66 + C266 * C65) *
                                  C6365 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C6354 * C249) * C6315 * C1891 +
           (C248 * C739 + C874 + C874 + C6354 * C870) * C6315 * C1892 +
           (C248 * C1894 + C2023 + C2023 + C6354 * C2020) * C6315 * C1893) *
              C6437 * C6438 * C72 -
          ((C248 * C1895 + C2024 + C2024 + C6354 * C2021) * C6315 * C1893 +
           (C248 * C738 + C873 + C873 + C6354 * C869) * C6315 * C1892 +
           C266 * C6315 * C1891) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (-std::pow(Pi, 2.5) *
         (((C171 * C80 + C6365 * C172) * C1063 +
           (C171 * C125 + C6365 * C293) * C1020 +
           (C171 * C455 + C6365 * C525) * C1064 +
           (C171 * C493 + C6365 * C618) * C1021 +
           (C171 * C1025 + C6365 * C1096) * C1065 +
           (C171 * C1066 + C6365 * C1191) * C1022) *
              C6315 * C6437 * C6438 * C72 -
          ((C171 * C1067 + C6365 * C1192) * C1022 +
           (C171 * C1026 + C6365 * C1097) * C1065 +
           (C171 * C492 + C6365 * C617) * C1021 +
           (C171 * C454 + C6365 * C524) * C1064 + C304 * C1020 + C189 * C1063) *
              C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C171 * C80 + C6365 * C172) * C124 +
                                (C171 * C125 + C6365 * C293) * C6354) *
                                   C65 +
                               (C298 + C306) * C66 + (C301 + C307) * C67) *
                                  C6437 * C6438 * C72 -
                              (((C171 * C128 + C6365 * C296) * C6354 +
                                (C171 * C83 + C6365 * C175) * C124) *
                                   C67 +
                               (C307 + C301) * C66 + (C306 + C298) * C65) *
                                  C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1959 * C80 + C1891 * C172 + C1960 * C739 + C1892 * C809 +
            C1961 * C1894 + C1893 * C1962) *
               C124 +
           (C1959 * C125 + C1891 * C293 + C1960 * C777 + C1892 * C902 +
            C1961 * C1929 + C1893 * C2050) *
               C6354) *
              C6315 * C6437 * C6438 * C72 -
          ((C1961 * C1930 + C1893 * C2051 + C1960 * C776 + C1892 * C901 +
            C1959 * C126 + C1891 * C294) *
               C6354 +
           (C1961 * C1895 + C1893 * C1963 + C1960 * C738 + C1892 * C808 +
            C1959 * C81 + C1891 * C173) *
               C124) *
              C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) * ((((C1024 * C80 + C6315 * C84) * C171 +
                                 (C1024 * C172 + C6315 * C333) * C6365) *
                                    C1020 +
                                ((C1024 * C455 + C6315 * C458) * C171 +
                                 (C1024 * C525 + C6315 * C647) * C6365) *
                                    C1021 +
                                ((C1024 * C1025 + C6315 * C1027) * C171 +
                                 (C1024 * C1096 + C6315 * C1219) * C6365) *
                                    C1022) *
                                   C6437 * C6438 * C72 -
                               (((C1024 * C1097 + C6315 * C1220) * C6365 +
                                 (C1024 * C1026 + C6315 * C1028) * C171) *
                                    C1022 +
                                ((C1024 * C524 + C6315 * C646) * C6365 +
                                 (C1024 * C454 + C6315 * C457) * C171) *
                                    C1021 +
                                ((C1024 * C173 + C6315 * C334) * C6365 +
                                 (C1024 * C81 + C6315 * C85) * C171) *
                                    C1020) *
                                   C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                                C79 * C82 + C67 * C86) *
                                   C171 +
                               (C75 * C172 + C65 * C333 + C77 * C173 +
                                C66 * C334 + C79 * C174 + C67 * C335) *
                                   C6365) *
                                  C6354 * C6437 * C6438 * C72 -
                              ((C79 * C175 + C67 * C336 + C77 * C174 +
                                C66 * C335 + C75 * C173 + C65 * C334) *
                                   C6365 +
                               (C79 * C83 + C67 * C87 + C77 * C82 + C66 * C86 +
                                C75 * C81 + C65 * C85) *
                                   C171) *
                                  C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1024 * C80 + C6315 * C84) * C1959 +
           (C1024 * C172 + C6315 * C333) * C1891 +
           (C1024 * C739 + C6315 * C742) * C1960 +
           (C1024 * C809 + C6315 * C931) * C1892 +
           (C1024 * C1894 + C6315 * C1896) * C1961 +
           (C1024 * C1962 + C6315 * C2078) * C1893) *
              C6354 * C6437 * C6438 * C72 -
          ((C1024 * C1963 + C6315 * C2079) * C1893 +
           (C1024 * C1895 + C6315 * C1897) * C1961 +
           (C1024 * C808 + C6315 * C930) * C1892 +
           (C1024 * C738 + C6315 * C741) * C1960 +
           (C1024 * C173 + C6315 * C334) * C1891 +
           (C1024 * C81 + C6315 * C85) * C1959) *
              C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (-std::pow(Pi, 2.5) * (((C1063 * C80 + C1020 * C125 + C1064 * C455 +
                                 C1021 * C493 + C1065 * C1025 + C1022 * C1066) *
                                    C171 +
                                (C1063 * C172 + C1020 * C363 + C1064 * C525 +
                                 C1021 * C676 + C1065 * C1096 + C1022 * C1247) *
                                    C6365) *
                                   C6315 * C6437 * C6438 * C72 -
                               ((C1065 * C1097 + C1022 * C1248 + C1064 * C524 +
                                 C1021 * C675 + C1063 * C173 + C1020 * C364) *
                                    C6365 +
                                (C1065 * C1026 + C1022 * C1067 + C1064 * C454 +
                                 C1021 * C492 + C1063 * C81 + C1020 * C126) *
                                    C171) *
                                   C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C124 * C80 + C6354 * C125) * C171 +
                                (C124 * C172 + C6354 * C363) * C6365) *
                                   C65 +
                               (C368 + C376) * C66 + (C371 + C377) * C67) *
                                  C6437 * C6438 * C72 -
                              (((C124 * C175 + C6354 * C366) * C6365 +
                                (C124 * C83 + C6354 * C128) * C171) *
                                   C67 +
                               (C377 + C371) * C66 + (C376 + C368) * C65) *
                                  C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C124 * C80 + C6354 * C125) * C1959 +
           (C124 * C172 + C6354 * C363) * C1891 +
           (C124 * C739 + C6354 * C777) * C1960 +
           (C124 * C809 + C6354 * C960) * C1892 +
           (C124 * C1894 + C6354 * C1929) * C1961 +
           (C124 * C1962 + C6354 * C2106) * C1893) *
              C6315 * C6437 * C6438 * C72 -
          ((C124 * C1963 + C6354 * C2107) * C1893 +
           (C124 * C1895 + C6354 * C1930) * C1961 +
           (C124 * C808 + C6354 * C959) * C1892 +
           (C124 * C738 + C6354 * C776) * C1960 + C374 * C1891 + C142 * C1959) *
              C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (-std::pow(Pi, 2.5) *
         (((C403 * C80 + C409 + C409 + C6365 * C404) * C1020 +
           (C403 * C455 + C709 + C709 + C6365 * C705) * C1021 +
           (C403 * C1025 + C1278 + C1278 + C6365 * C1275) * C1022) *
              C6315 * C6437 * C6438 * C72 -
          ((C403 * C1026 + C1279 + C1279 + C6365 * C1276) * C1022 +
           (C403 * C454 + C708 + C708 + C6365 * C704) * C1021 + C421 * C1020) *
              C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C403 * C80 + C409 + C409 + C6365 * C404) * C6354 * C65 +
           C423 * C66 + C424 * C67) *
              C6437 * C6438 * C72 -
          ((C403 * C83 + C416 + C416 + C6365 * C407) * C6354 * C67 +
           C424 * C66 + C423 * C65) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2134 * C80 + C2140 + C2140 + C1891 * C404 + C2135 * C739 + C2141 +
           C2141 + C1892 * C989 + C2136 * C1894 + C2142 + C2142 +
           C1893 * C2137) *
              C6354 * C6315 * C6437 * C6438 * C72 -
          (C2136 * C1895 + C2143 + C2143 + C1893 * C2138 + C2135 * C738 +
           C2144 + C2144 + C1892 * C988 + C2134 * C81 + C2145 + C2145 +
           C1891 * C405) *
              C6354 * C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C6365 * C1020 +
           C1320 * C1021 + C1321 * C1022) *
              C6437 * C450 -
          ((C1023 * C1305 + C1313 + C1313 + C6315 * C1307) * C6365 * C1022 +
           C1321 * C1021 + C1320 * C1020) *
              C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
           C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
              C6365 * C6354 * C6437 * C450 -
          (C78 * C453 + C463 + C463 + C67 * C459 + C76 * C454 + C464 + C464 +
           C66 * C460 + C74 * C455 + C465 + C465 + C65 * C461) *
              C6365 * C6354 * C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C1891 +
           (C1023 * C739 + C1632 + C1632 + C6315 * C745) * C1892 +
           (C1023 * C1894 + C1901 + C1901 + C6315 * C1898) * C1893) *
              C6354 * C6437 * C450 -
          ((C1023 * C2171 + C2175 + C2175 + C6315 * C2173) * C1893 +
           (C1023 * C1624 + C1631 + C1631 + C6315 * C1628) * C1892 +
           C1318 * C1891) *
              C6354 * C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] += (-std::pow(Pi, 2.5) *
                  (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                     C1065 * C1025 + C1022 * C1066) *
                        C1024 +
                    (C1063 * C84 + C1020 * C129 + C1064 * C458 + C1021 * C496 +
                     C1065 * C1027 + C1022 * C1068) *
                        C6315) *
                       C6365 * C6437 * C450 -
                   ((C1065 * C1306 + C1022 * C1348 + C1064 * C1027 +
                     C1021 * C1068 + C1063 * C458 + C1020 * C496) *
                        C6315 +
                    (C1065 * C1305 + C1022 * C1347 + C1064 * C1025 +
                     C1021 * C1066 + C1063 * C455 + C1020 * C493) *
                        C1024) *
                       C6365 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C124 * C80 + C6354 * C125) * C75 +
                    (C124 * C84 + C6354 * C129) * C65 + C142 * C77 +
                    C143 * C66 + C144 * C79 + C145 * C67) *
                       C6365 * C6437 * C450 -
                   ((C124 * C456 + C6354 * C494) * C67 +
                    (C124 * C453 + C6354 * C491) * C79 +
                    (C124 * C457 + C6354 * C495) * C66 +
                    (C124 * C454 + C6354 * C492) * C77 +
                    (C124 * C458 + C6354 * C496) * C65 +
                    (C124 * C455 + C6354 * C493) * C75) *
                       C6365 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C6354 * C125) * C1024 +
                     (C124 * C84 + C6354 * C129) * C6315) *
                        C1891 +
                    ((C124 * C739 + C6354 * C777) * C1024 +
                     (C124 * C742 + C6354 * C780) * C6315) *
                        C1892 +
                    ((C124 * C1894 + C6354 * C1929) * C1024 +
                     (C124 * C1896 + C6354 * C1931) * C6315) *
                        C1893) *
                       C6437 * C450 -
                   (((C124 * C2172 + C6354 * C2202) * C6315 +
                     (C124 * C2171 + C6354 * C2201) * C1024) *
                        C1893 +
                    ((C124 * C1626 + C6354 * C1661) * C6315 +
                     (C124 * C1624 + C6354 * C1659) * C1024) *
                        C1892 +
                    ((C124 * C458 + C6354 * C496) * C6315 +
                     (C124 * C455 + C6354 * C493) * C1024) *
                        C1891) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eexz[7] += (-std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C6365 * C172) * C1024 +
                     (C171 * C84 + C6365 * C176) * C6315) *
                        C1020 +
                    (C1390 + C1391) * C1021 + (C1392 + C1393) * C1022) *
                       C6437 * C450 -
                   (((C171 * C1306 + C6365 * C1376) * C6315 +
                     (C171 * C1305 + C6365 * C1375) * C1024) *
                        C1022 +
                    (C1393 + C1392) * C1021 + (C1391 + C1390) * C1020) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C171 * C80 + C6365 * C172) * C75 +
                    (C171 * C84 + C6365 * C176) * C65 + C189 * C77 +
                    C190 * C66 + C191 * C79 + C192 * C67) *
                       C6354 * C6437 * C450 -
                   ((C171 * C456 + C6365 * C526) * C67 +
                    (C171 * C453 + C6365 * C523) * C79 +
                    (C171 * C457 + C6365 * C527) * C66 +
                    (C171 * C454 + C6365 * C524) * C77 +
                    (C171 * C458 + C6365 * C528) * C65 +
                    (C171 * C455 + C6365 * C525) * C75) *
                       C6354 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1959 * C80 + C1891 * C172 + C1960 * C739 + C1892 * C809 +
                     C1961 * C1894 + C1893 * C1962) *
                        C1024 +
                    (C1959 * C84 + C1891 * C176 + C1960 * C742 + C1892 * C812 +
                     C1961 * C1896 + C1893 * C1964) *
                        C6315) *
                       C6354 * C6437 * C450 -
                   ((C1961 * C2172 + C1893 * C2230 + C1960 * C1626 +
                     C1892 * C1691 + C1959 * C458 + C1891 * C528) *
                        C6315 +
                    (C1961 * C2171 + C1893 * C2229 + C1960 * C1624 +
                     C1892 * C1689 + C1959 * C455 + C1891 * C525) *
                        C1024) *
                       C6354 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::pow(Pi, 2.5) *
                  (((C1024 * C80 + C6315 * C84) * C1063 +
                    (C1024 * C125 + C6315 * C218) * C1020 + C1429 * C1064 +
                    C1430 * C1021 + C1431 * C1065 + C1432 * C1022) *
                       C6365 * C6437 * C450 -
                   ((C1024 * C1347 + C6315 * C1419) * C1022 +
                    (C1024 * C1305 + C6315 * C1306) * C1065 + C1432 * C1021 +
                    C1431 * C1064 + C1430 * C1020 + C1429 * C1063) *
                       C6365 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C124 +
                    (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                     C79 * C127 + C67 * C220) *
                        C6354) *
                       C6365 * C6437 * C450 -
                   ((C79 * C491 + C67 * C555 + C77 * C492 + C66 * C556 +
                     C75 * C493 + C65 * C557) *
                        C6354 +
                    (C79 * C453 + C67 * C456 + C77 * C454 + C66 * C457 +
                     C75 * C455 + C65 * C458) *
                        C124) *
                       C6365 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C124 +
                     (C1024 * C125 + C6315 * C218) * C6354) *
                        C1891 +
                    ((C1024 * C739 + C6315 * C742) * C124 +
                     (C1024 * C777 + C6315 * C841) * C6354) *
                        C1892 +
                    ((C1024 * C1894 + C6315 * C1896) * C124 +
                     (C1024 * C1929 + C6315 * C1992) * C6354) *
                        C1893) *
                       C6437 * C450 -
                   (((C1024 * C2201 + C6315 * C2257) * C6354 +
                     (C1024 * C2171 + C6315 * C2172) * C124) *
                        C1893 +
                    ((C1024 * C1659 + C6315 * C1719) * C6354 +
                     (C1024 * C1624 + C6315 * C1626) * C124) *
                        C1892 +
                    (C1430 * C6354 + C1429 * C124) * C1891) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::pow(Pi, 2.5) *
         ((C1154 * C80 + C1160 + C1160 + C1020 * C249 + C1155 * C455 + C1161 +
           C1161 + C1021 * C586 + C1156 * C1025 + C1162 + C1162 +
           C1022 * C1157) *
              C6315 * C6365 * C6437 * C450 -
          (C1156 * C1305 + C1460 + C1460 + C1022 * C1458 + C1155 * C1025 +
           C1461 + C1461 + C1021 * C1157 + C1154 * C455 + C1462 + C1462 +
           C1020 * C586) *
              C6315 * C6365 * C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C6354 * C249) * C65 + C266 * C66 +
           C267 * C67) *
              C6365 * C6437 * C450 -
          ((C248 * C453 + C588 + C588 + C6354 * C584) * C67 +
           (C248 * C454 + C589 + C589 + C6354 * C585) * C66 +
           (C248 * C455 + C590 + C590 + C6354 * C586) * C65) *
              C6365 * C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C6354 * C249) * C6315 * C1891 +
           (C248 * C739 + C874 + C874 + C6354 * C870) * C6315 * C1892 +
           (C248 * C1894 + C2023 + C2023 + C6354 * C2020) * C6315 * C1893) *
              C6437 * C450 -
          ((C248 * C2171 + C2286 + C2286 + C6354 * C2284) * C6315 * C1893 +
           (C248 * C1624 + C2287 + C2287 + C6354 * C1747) * C6315 * C1892 +
           (C248 * C455 + C590 + C590 + C6354 * C586) * C6315 * C1891) *
              C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] += (-std::pow(Pi, 2.5) *
                  (((C171 * C80 + C6365 * C172) * C1063 +
                    (C171 * C125 + C6365 * C293) * C1020 + C1386 * C1064 +
                    C1494 * C1021 + C1388 * C1065 + C1495 * C1022) *
                       C6315 * C6437 * C450 -
                   ((C171 * C1347 + C6365 * C1488) * C1022 +
                    (C171 * C1305 + C6365 * C1375) * C1065 + C1495 * C1021 +
                    C1388 * C1064 + C1494 * C1020 + C1386 * C1063) *
                       C6315 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C6365 * C172) * C124 +
                     (C171 * C125 + C6365 * C293) * C6354) *
                        C65 +
                    (C298 + C306) * C66 + (C301 + C307) * C67) *
                       C6437 * C450 -
                   (((C171 * C491 + C6365 * C616) * C6354 +
                     (C171 * C453 + C6365 * C523) * C124) *
                        C67 +
                    ((C171 * C492 + C6365 * C617) * C6354 +
                     (C171 * C454 + C6365 * C524) * C124) *
                        C66 +
                    ((C171 * C493 + C6365 * C618) * C6354 +
                     (C171 * C455 + C6365 * C525) * C124) *
                        C65) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1959 * C80 + C1891 * C172 + C1960 * C739 + C1892 * C809 +
                     C1961 * C1894 + C1893 * C1962) *
                        C124 +
                    (C1959 * C125 + C1891 * C293 + C1960 * C777 + C1892 * C902 +
                     C1961 * C1929 + C1893 * C2050) *
                        C6354) *
                       C6315 * C6437 * C450 -
                   ((C1961 * C2201 + C1893 * C2313 + C1960 * C1659 +
                     C1892 * C1778 + C1959 * C493 + C1891 * C618) *
                        C6354 +
                    (C1961 * C2171 + C1893 * C2229 + C1960 * C1624 +
                     C1892 * C1689 + C1959 * C455 + C1891 * C525) *
                        C124) *
                       C6315 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C171 +
                     (C1024 * C172 + C6315 * C333) * C6365) *
                        C1020 +
                    (C1523 + C1531) * C1021 + (C1526 + C1532) * C1022) *
                       C6437 * C450 -
                   (((C1024 * C1375 + C6315 * C1521) * C6365 +
                     (C1024 * C1305 + C6315 * C1306) * C171) *
                        C1022 +
                    (C1532 + C1526) * C1021 + (C1531 + C1523) * C1020) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C171 +
                    (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                     C79 * C174 + C67 * C335) *
                        C6365) *
                       C6354 * C6437 * C450 -
                   ((C79 * C523 + C67 * C645 + C77 * C524 + C66 * C646 +
                     C75 * C525 + C65 * C647) *
                        C6365 +
                    (C79 * C453 + C67 * C456 + C77 * C454 + C66 * C457 +
                     C75 * C455 + C65 * C458) *
                        C171) *
                       C6354 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1024 * C80 + C6315 * C84) * C1959 +
                    (C1024 * C172 + C6315 * C333) * C1891 +
                    (C1024 * C739 + C6315 * C742) * C1960 +
                    (C1024 * C809 + C6315 * C931) * C1892 +
                    (C1024 * C1894 + C6315 * C1896) * C1961 +
                    (C1024 * C1962 + C6315 * C2078) * C1893) *
                       C6354 * C6437 * C450 -
                   ((C1024 * C2229 + C6315 * C2340) * C1893 +
                    (C1024 * C2171 + C6315 * C2172) * C1961 +
                    (C1024 * C1689 + C6315 * C1806) * C1892 +
                    (C1024 * C1624 + C6315 * C1626) * C1960 + C1529 * C1891 +
                    C1429 * C1959) *
                       C6354 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] += (-std::pow(Pi, 2.5) *
                  (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                     C1065 * C1025 + C1022 * C1066) *
                        C171 +
                    (C1063 * C172 + C1020 * C363 + C1064 * C525 + C1021 * C676 +
                     C1065 * C1096 + C1022 * C1247) *
                        C6365) *
                       C6315 * C6437 * C450 -
                   ((C1065 * C1375 + C1022 * C1558 + C1064 * C1096 +
                     C1021 * C1247 + C1063 * C525 + C1020 * C676) *
                        C6365 +
                    (C1065 * C1305 + C1022 * C1347 + C1064 * C1025 +
                     C1021 * C1066 + C1063 * C455 + C1020 * C493) *
                        C171) *
                       C6315 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C6354 * C125) * C171 +
                     (C124 * C172 + C6354 * C363) * C6365) *
                        C65 +
                    (C368 + C376) * C66 + (C371 + C377) * C67) *
                       C6437 * C450 -
                   (((C124 * C523 + C6354 * C674) * C6365 +
                     (C124 * C453 + C6354 * C491) * C171) *
                        C67 +
                    ((C124 * C524 + C6354 * C675) * C6365 +
                     (C124 * C454 + C6354 * C492) * C171) *
                        C66 +
                    ((C124 * C525 + C6354 * C676) * C6365 +
                     (C124 * C455 + C6354 * C493) * C171) *
                        C65) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C124 * C80 + C6354 * C125) * C1959 +
                    (C124 * C172 + C6354 * C363) * C1891 +
                    (C124 * C739 + C6354 * C777) * C1960 +
                    (C124 * C809 + C6354 * C960) * C1892 +
                    (C124 * C1894 + C6354 * C1929) * C1961 +
                    (C124 * C1962 + C6354 * C2106) * C1893) *
                       C6315 * C6437 * C450 -
                   ((C124 * C2229 + C6354 * C2367) * C1893 +
                    (C124 * C2171 + C6354 * C2201) * C1961 +
                    (C124 * C1689 + C6354 * C1834) * C1892 +
                    (C124 * C1624 + C6354 * C1659) * C1960 +
                    (C124 * C525 + C6354 * C676) * C1891 +
                    (C124 * C455 + C6354 * C493) * C1959) *
                       C6315 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eezz[7] += (-std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C6365 * C404) * C1020 +
                    C1596 * C1021 + C1597 * C1022) *
                       C6315 * C6437 * C450 -
                   ((C403 * C1305 + C1591 + C1591 + C6365 * C1585) * C1022 +
                    C1597 * C1021 + C1596 * C1020) *
                       C6315 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C6365 * C404) * C6354 * C65 +
                    C423 * C66 + C424 * C67) *
                       C6437 * C450 -
                   ((C403 * C453 + C707 + C707 + C6365 * C703) * C6354 * C67 +
                    (C403 * C454 + C708 + C708 + C6365 * C704) * C6354 * C66 +
                    (C403 * C455 + C709 + C709 + C6365 * C705) * C6354 * C65) *
                       C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C2134 * C80 + C2140 + C2140 + C1891 * C404 + C2135 * C739 +
                    C2141 + C2141 + C1892 * C989 + C2136 * C1894 + C2142 +
                    C2142 + C1893 * C2137) *
                       C6354 * C6315 * C6437 * C450 -
                   (C2136 * C2171 + C2396 + C2396 + C1893 * C2394 +
                    C2135 * C1624 + C2397 + C2397 + C1892 * C1862 +
                    C2134 * C455 + C2398 + C2398 + C1891 * C705) *
                       C6354 * C6315 * C6437 * C451) *
                  C6439) /
                     (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C6365 * C1020 +
           C1320 * C1021 + C1321 * C1022) *
              C735 -
          ((C1023 * C1623 + C1630 + C1630 + C6315 * C1627) * C6365 * C1022 +
           (C1023 * C1624 + C1631 + C1631 + C6315 * C1628) * C6365 * C1021 +
           (C1023 * C739 + C1632 + C1632 + C6315 * C745) * C6365 * C1020) *
              C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
           C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
              C6365 * C6354 * C735 -
          (C78 * C737 + C747 + C747 + C67 * C743 + C76 * C738 + C748 + C748 +
           C66 * C744 + C74 * C739 + C749 + C749 + C65 * C745) *
              C6365 * C6354 * C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C1891 + C2437 * C1892 +
           C2438 * C1893) *
              C6354 * C735 -
          ((C1023 * C2424 + C2432 + C2432 + C6315 * C2426) * C1893 +
           C2438 * C1892 + C2437 * C1891) *
              C6354 * C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q));
    d2eexy[8] += (-std::pow(Pi, 2.5) *
                  (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                     C1065 * C1025 + C1022 * C1066) *
                        C1024 +
                    (C1063 * C84 + C1020 * C129 + C1064 * C458 + C1021 * C496 +
                     C1065 * C1027 + C1022 * C1068) *
                        C6315) *
                       C6365 * C735 -
                   ((C1065 * C1625 + C1022 * C1660 + C1064 * C1626 +
                     C1021 * C1661 + C1063 * C742 + C1020 * C780) *
                        C6315 +
                    (C1065 * C1623 + C1022 * C1658 + C1064 * C1624 +
                     C1021 * C1659 + C1063 * C739 + C1020 * C777) *
                        C1024) *
                       C6365 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C124 * C80 + C6354 * C125) * C75 +
                    (C124 * C84 + C6354 * C129) * C65 + C142 * C77 +
                    C143 * C66 + C144 * C79 + C145 * C67) *
                       C6365 * C735 -
                   ((C124 * C740 + C6354 * C778) * C67 +
                    (C124 * C737 + C6354 * C775) * C79 +
                    (C124 * C741 + C6354 * C779) * C66 +
                    (C124 * C738 + C6354 * C776) * C77 +
                    (C124 * C742 + C6354 * C780) * C65 +
                    (C124 * C739 + C6354 * C777) * C75) *
                       C6365 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C6354 * C125) * C1024 +
                     (C124 * C84 + C6354 * C129) * C6315) *
                        C1891 +
                    (C2479 + C2480) * C1892 + (C2481 + C2482) * C1893) *
                       C735 -
                   (((C124 * C2425 + C6354 * C2465) * C6315 +
                     (C124 * C2424 + C6354 * C2464) * C1024) *
                        C1893 +
                    (C2482 + C2481) * C1892 + (C2480 + C2479) * C1891) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eexz[8] += (-std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C6365 * C172) * C1024 +
                     (C171 * C84 + C6365 * C176) * C6315) *
                        C1020 +
                    (C1390 + C1391) * C1021 + (C1392 + C1393) * C1022) *
                       C735 -
                   (((C171 * C1625 + C6365 * C1690) * C6315 +
                     (C171 * C1623 + C6365 * C1688) * C1024) *
                        C1022 +
                    ((C171 * C1626 + C6365 * C1691) * C6315 +
                     (C171 * C1624 + C6365 * C1689) * C1024) *
                        C1021 +
                    ((C171 * C742 + C6365 * C812) * C6315 +
                     (C171 * C739 + C6365 * C809) * C1024) *
                        C1020) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C171 * C80 + C6365 * C172) * C75 +
                    (C171 * C84 + C6365 * C176) * C65 + C189 * C77 +
                    C190 * C66 + C191 * C79 + C192 * C67) *
                       C6354 * C735 -
                   ((C171 * C740 + C6365 * C810) * C67 +
                    (C171 * C737 + C6365 * C807) * C79 +
                    (C171 * C741 + C6365 * C811) * C66 +
                    (C171 * C738 + C6365 * C808) * C77 +
                    (C171 * C742 + C6365 * C812) * C65 +
                    (C171 * C739 + C6365 * C809) * C75) *
                       C6354 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1959 * C80 + C1891 * C172 + C1960 * C739 + C1892 * C809 +
                     C1961 * C1894 + C1893 * C1962) *
                        C1024 +
                    (C1959 * C84 + C1891 * C176 + C1960 * C742 + C1892 * C812 +
                     C1961 * C1896 + C1893 * C1964) *
                        C6315) *
                       C6354 * C735 -
                   ((C1961 * C2425 + C1893 * C2509 + C1960 * C1896 +
                     C1892 * C1964 + C1959 * C742 + C1891 * C812) *
                        C6315 +
                    (C1961 * C2424 + C1893 * C2508 + C1960 * C1894 +
                     C1892 * C1962 + C1959 * C739 + C1891 * C809) *
                        C1024) *
                       C6354 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[8] += (-std::pow(Pi, 2.5) *
                  (((C1024 * C80 + C6315 * C84) * C1063 +
                    (C1024 * C125 + C6315 * C218) * C1020 + C1429 * C1064 +
                    C1430 * C1021 + C1431 * C1065 + C1432 * C1022) *
                       C6365 * C735 -
                   ((C1024 * C1658 + C6315 * C1718) * C1022 +
                    (C1024 * C1623 + C6315 * C1625) * C1065 +
                    (C1024 * C1659 + C6315 * C1719) * C1021 +
                    (C1024 * C1624 + C6315 * C1626) * C1064 +
                    (C1024 * C777 + C6315 * C841) * C1020 +
                    (C1024 * C739 + C6315 * C742) * C1063) *
                       C6365 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C124 +
                    (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                     C79 * C127 + C67 * C220) *
                        C6354) *
                       C6365 * C735 -
                   ((C79 * C775 + C67 * C839 + C77 * C776 + C66 * C840 +
                     C75 * C777 + C65 * C841) *
                        C6354 +
                    (C79 * C737 + C67 * C740 + C77 * C738 + C66 * C741 +
                     C75 * C739 + C65 * C742) *
                        C124) *
                       C6365 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C124 +
                     (C1024 * C125 + C6315 * C218) * C6354) *
                        C1891 +
                    (C2550 + C2551) * C1892 + (C2552 + C2553) * C1893) *
                       C735 -
                   (((C1024 * C2464 + C6315 * C2536) * C6354 +
                     (C1024 * C2424 + C6315 * C2425) * C124) *
                        C1893 +
                    (C2553 + C2552) * C1892 + (C2551 + C2550) * C1891) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (-std::pow(Pi, 2.5) *
         ((C1154 * C80 + C1160 + C1160 + C1020 * C249 + C1155 * C455 + C1161 +
           C1161 + C1021 * C586 + C1156 * C1025 + C1162 + C1162 +
           C1022 * C1157) *
              C6315 * C6365 * C735 -
          (C1156 * C1623 + C1749 + C1749 + C1022 * C1746 + C1155 * C1624 +
           C1750 + C1750 + C1021 * C1747 + C1154 * C739 + C1751 + C1751 +
           C1020 * C870) *
              C6315 * C6365 * C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C6354 * C249) * C65 + C266 * C66 +
           C267 * C67) *
              C6365 * C735 -
          ((C248 * C737 + C872 + C872 + C6354 * C868) * C67 +
           (C248 * C738 + C873 + C873 + C6354 * C869) * C66 +
           (C248 * C739 + C874 + C874 + C6354 * C870) * C65) *
              C6365 * C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C6354 * C249) * C6315 * C1891 +
           C2592 * C1892 + C2593 * C1893) *
              C735 -
          ((C248 * C2424 + C2585 + C2585 + C6354 * C2579) * C6315 * C1893 +
           C2593 * C1892 + C2592 * C1891) *
              C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q));
    d2eeyz[8] += (-std::pow(Pi, 2.5) *
                  (((C171 * C80 + C6365 * C172) * C1063 +
                    (C171 * C125 + C6365 * C293) * C1020 + C1386 * C1064 +
                    C1494 * C1021 + C1388 * C1065 + C1495 * C1022) *
                       C6315 * C735 -
                   ((C171 * C1658 + C6365 * C1777) * C1022 +
                    (C171 * C1623 + C6365 * C1688) * C1065 +
                    (C171 * C1659 + C6365 * C1778) * C1021 +
                    (C171 * C1624 + C6365 * C1689) * C1064 +
                    (C171 * C777 + C6365 * C902) * C1020 +
                    (C171 * C739 + C6365 * C809) * C1063) *
                       C6315 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C6365 * C172) * C124 +
                     (C171 * C125 + C6365 * C293) * C6354) *
                        C65 +
                    (C298 + C306) * C66 + (C301 + C307) * C67) *
                       C735 -
                   (((C171 * C775 + C6365 * C900) * C6354 +
                     (C171 * C737 + C6365 * C807) * C124) *
                        C67 +
                    ((C171 * C776 + C6365 * C901) * C6354 +
                     (C171 * C738 + C6365 * C808) * C124) *
                        C66 +
                    ((C171 * C777 + C6365 * C902) * C6354 +
                     (C171 * C739 + C6365 * C809) * C124) *
                        C65) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1959 * C80 + C1891 * C172 + C1960 * C739 + C1892 * C809 +
                     C1961 * C1894 + C1893 * C1962) *
                        C124 +
                    (C1959 * C125 + C1891 * C293 + C1960 * C777 + C1892 * C902 +
                     C1961 * C1929 + C1893 * C2050) *
                        C6354) *
                       C6315 * C735 -
                   ((C1961 * C2464 + C1893 * C2619 + C1960 * C1929 +
                     C1892 * C2050 + C1959 * C777 + C1891 * C902) *
                        C6354 +
                    (C1961 * C2424 + C1893 * C2508 + C1960 * C1894 +
                     C1892 * C1962 + C1959 * C739 + C1891 * C809) *
                        C124) *
                       C6315 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eezx[8] += (-std::pow(Pi, 2.5) *
                  ((((C1024 * C80 + C6315 * C84) * C171 +
                     (C1024 * C172 + C6315 * C333) * C6365) *
                        C1020 +
                    (C1523 + C1531) * C1021 + (C1526 + C1532) * C1022) *
                       C735 -
                   (((C1024 * C1688 + C6315 * C1805) * C6365 +
                     (C1024 * C1623 + C6315 * C1625) * C171) *
                        C1022 +
                    ((C1024 * C1689 + C6315 * C1806) * C6365 +
                     (C1024 * C1624 + C6315 * C1626) * C171) *
                        C1021 +
                    ((C1024 * C809 + C6315 * C931) * C6365 +
                     (C1024 * C739 + C6315 * C742) * C171) *
                        C1020) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C171 +
                    (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                     C79 * C174 + C67 * C335) *
                        C6365) *
                       C6354 * C735 -
                   ((C79 * C807 + C67 * C929 + C77 * C808 + C66 * C930 +
                     C75 * C809 + C65 * C931) *
                        C6365 +
                    (C79 * C737 + C67 * C740 + C77 * C738 + C66 * C741 +
                     C75 * C739 + C65 * C742) *
                        C171) *
                       C6354 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1024 * C80 + C6315 * C84) * C1959 +
                    (C1024 * C172 + C6315 * C333) * C1891 + C2546 * C1960 +
                    C2652 * C1892 + C2548 * C1961 + C2653 * C1893) *
                       C6354 * C735 -
                   ((C1024 * C2508 + C6315 * C2646) * C1893 +
                    (C1024 * C2424 + C6315 * C2425) * C1961 + C2653 * C1892 +
                    C2548 * C1960 + C2652 * C1891 + C2546 * C1959) *
                       C6354 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eezy[8] += (-std::pow(Pi, 2.5) *
                  (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                     C1065 * C1025 + C1022 * C1066) *
                        C171 +
                    (C1063 * C172 + C1020 * C363 + C1064 * C525 + C1021 * C676 +
                     C1065 * C1096 + C1022 * C1247) *
                        C6365) *
                       C6315 * C735 -
                   ((C1065 * C1688 + C1022 * C1833 + C1064 * C1689 +
                     C1021 * C1834 + C1063 * C809 + C1020 * C960) *
                        C6365 +
                    (C1065 * C1623 + C1022 * C1658 + C1064 * C1624 +
                     C1021 * C1659 + C1063 * C739 + C1020 * C777) *
                        C171) *
                       C6315 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C6354 * C125) * C171 +
                     (C124 * C172 + C6354 * C363) * C6365) *
                        C65 +
                    (C368 + C376) * C66 + (C371 + C377) * C67) *
                       C735 -
                   (((C124 * C807 + C6354 * C958) * C6365 +
                     (C124 * C737 + C6354 * C775) * C171) *
                        C67 +
                    ((C124 * C808 + C6354 * C959) * C6365 +
                     (C124 * C738 + C6354 * C776) * C171) *
                        C66 +
                    ((C124 * C809 + C6354 * C960) * C6365 +
                     (C124 * C739 + C6354 * C777) * C171) *
                        C65) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C124 * C80 + C6354 * C125) * C1959 +
                    (C124 * C172 + C6354 * C363) * C1891 + C2475 * C1960 +
                    C2685 * C1892 + C2477 * C1961 + C2686 * C1893) *
                       C6315 * C735 -
                   ((C124 * C2508 + C6354 * C2679) * C1893 +
                    (C124 * C2424 + C6354 * C2464) * C1961 + C2686 * C1892 +
                    C2477 * C1960 + C2685 * C1891 + C2475 * C1959) *
                       C6315 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eezz[8] += (-std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C6365 * C404) * C1020 +
                    C1596 * C1021 + C1597 * C1022) *
                       C6315 * C735 -
                   ((C403 * C1623 + C1864 + C1864 + C6365 * C1861) * C1022 +
                    (C403 * C1624 + C1865 + C1865 + C6365 * C1862) * C1021 +
                    (C403 * C739 + C993 + C993 + C6365 * C989) * C1020) *
                       C6315 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C6365 * C404) * C6354 * C65 +
                    C423 * C66 + C424 * C67) *
                       C735 -
                   ((C403 * C737 + C991 + C991 + C6365 * C987) * C6354 * C67 +
                    (C403 * C738 + C992 + C992 + C6365 * C988) * C6354 * C66 +
                    (C403 * C739 + C993 + C993 + C6365 * C989) * C6354 * C65) *
                       C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((C2134 * C80 + C2140 + C2140 + C1891 * C404 + C2135 * C739 +
                    C2141 + C2141 + C1892 * C989 + C2136 * C1894 + C2142 +
                    C2142 + C1893 * C2137) *
                       C6354 * C6315 * C735 -
                   (C2136 * C2424 + C2714 + C2714 + C1893 * C2712 +
                    C2135 * C1894 + C2715 + C2715 + C1892 * C2137 +
                    C2134 * C739 + C2716 + C2716 + C1891 * C989) *
                       C6354 * C6315 * C736) *
                  C6438 * C6439) /
                     (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2754 * C80 + C2759 + C2759 + C2750 * C88 + C2756 * C81 +
                     C2760 + C2760 + C2751 * C89) *
                        C3802 +
                    (C2754 * C739 + C3481 + C3481 + C2750 * C745 +
                     C2756 * C738 + C3480 + C3480 + C2751 * C744) *
                        C3803) *
                       C6354 * C6437 * C6438 * C72 -
                   ((C2756 * C737 + C3805 + C3805 + C2751 * C743 +
                     C2754 * C738 + C3806 + C3806 + C2750 * C744) *
                        C3803 +
                    (C2756 * C82 + C2765 + C2765 + C2751 * C90 + C2754 * C81 +
                     C2766 + C2766 + C2750 * C89) *
                        C3802) *
                       C6354 * C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C6354 * C125) * C2755 +
            (C124 * C84 + C6354 * C129) * C2750 + C142 * C2757 + C143 * C2751) *
               C3802 +
           (C2475 * C2755 + C2476 * C2750 + C3845 * C2757 + C3846 * C2751) *
               C3803) *
              C6437 * C6438 * C72 -
          (((C124 * C740 + C6354 * C778) * C2751 +
            (C124 * C737 + C6354 * C775) * C2757 + C3846 * C2750 +
            C3845 * C2755) *
               C3803 +
           (C145 * C2751 + C144 * C2757 + C143 * C2750 + C142 * C2755) *
               C3802) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C2755 +
           (C3880 * C84 + C3802 * C176 + C3881 * C742 + C3803 * C812) * C2750 +
           (C3891 + C3892) * C2757 + (C3893 + C3894) * C2751) *
              C6354 * C6437 * C6438 * C72 -
          ((C3881 * C740 + C3803 * C810 + C3880 * C86 + C3802 * C178) * C2751 +
           (C3881 * C737 + C3803 * C807 + C3880 * C82 + C3802 * C174) * C2757 +
           (C3894 + C3893) * C2750 + (C3892 + C3891) * C2755) *
              C6354 * C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C124 +
            (C2755 * C125 + C2750 * C218 + C2757 * C126 + C2751 * C219) *
                C6354) *
               C3802 +
           ((C2755 * C739 + C2750 * C742 + C2757 * C738 + C2751 * C741) * C124 +
            (C2755 * C777 + C2750 * C841 + C2757 * C776 + C2751 * C840) *
                C6354) *
               C3803) *
              C6437 * C6438 * C72 -
          (((C2757 * C775 + C2751 * C839 + C2755 * C776 + C2750 * C840) *
                C6354 +
            (C2757 * C737 + C2751 * C740 + C2755 * C738 + C2750 * C741) *
                C124) *
               C3803 +
           ((C2757 * C127 + C2751 * C220 + C2755 * C126 + C2750 * C219) *
                C6354 +
            (C2757 * C82 + C2751 * C86 + C2755 * C81 + C2750 * C85) * C124) *
               C3802) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C6354 * C249) * C2750 + C266 * C2751) *
               C3802 +
           (C2590 * C2750 + C3967 * C2751) * C3803) *
              C6437 * C6438 * C72 -
          (((C248 * C737 + C872 + C872 + C6354 * C868) * C2751 +
            C3967 * C2750) *
               C3803 +
           (C267 * C2751 + C266 * C2750) * C3802) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C124 +
            (C3880 * C125 + C3802 * C293 + C3881 * C777 + C3803 * C902) *
                C6354) *
               C2750 +
           ((C3891 + C3892) * C124 + (C4006 + C4007) * C6354) * C2751) *
              C6437 * C6438 * C72 -
          (((C3881 * C775 + C3803 * C900 + C3880 * C127 + C3802 * C295) *
                C6354 +
            (C3881 * C737 + C3803 * C807 + C3880 * C82 + C3802 * C174) * C124) *
               C2751 +
           ((C4007 + C4006) * C6354 + (C3892 + C3891) * C124) * C2750) *
              C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C3880 +
           (C2755 * C172 + C2750 * C333 + C2757 * C173 + C2751 * C334) * C3802 +
           (C2755 * C739 + C2750 * C742 + C2757 * C738 + C2751 * C741) * C3881 +
           (C2755 * C809 + C2750 * C931 + C2757 * C808 + C2751 * C930) *
               C3803) *
              C6354 * C6437 * C6438 * C72 -
          ((C2757 * C807 + C2751 * C929 + C2755 * C808 + C2750 * C930) * C3803 +
           (C2757 * C737 + C2751 * C740 + C2755 * C738 + C2750 * C741) * C3881 +
           (C2757 * C174 + C2751 * C335 + C2755 * C173 + C2750 * C334) * C3802 +
           (C2757 * C82 + C2751 * C86 + C2755 * C81 + C2750 * C85) * C3880) *
              C6354 * C6437 * C6438 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C6354 * C125) * C3880 +
                     (C124 * C172 + C6354 * C363) * C3802 + C2475 * C3881 +
                     C2685 * C3803) *
                        C2750 +
                    (C4076 + C4077 + C4078 + C4082) * C2751) *
                       C6437 * C6438 * C72 -
                   (((C124 * C807 + C6354 * C958) * C3803 +
                     (C124 * C737 + C6354 * C775) * C3881 + C375 * C3802 +
                     C144 * C3880) *
                        C2751 +
                    (C4082 + C4078 + C4077 + C4076) * C2750) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4116 * C80 + C4119 + C4119 + C3802 * C404 + C4117 * C739 +
                     C4120 + C4120 + C3803 * C989) *
                        C6354 * C2750 +
                    (C4133 + C4134) * C6354 * C2751) *
                       C6437 * C6438 * C72 -
                   ((C4117 * C737 + C4127 + C4127 + C3803 * C987 + C4116 * C82 +
                     C4128 + C4128 + C3802 * C406) *
                        C6354 * C2751 +
                    (C4134 + C4133) * C6354 * C2750) *
                       C6437 * C6438 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2754 * C80 + C2759 + C2759 + C2750 * C88 + C2756 * C81 +
                      C2760 + C2760 + C2751 * C89) *
                         C3802 +
                     (C2754 * C739 + C3481 + C3481 + C2750 * C745 +
                      C2756 * C738 + C3480 + C3480 + C2751 * C744) *
                         C3803) *
                        C6354 * C6437 * C450 -
                    ((C2756 * C3474 + C3478 + C3478 + C2751 * C3476 +
                      C2754 * C1624 + C3479 + C3479 + C2750 * C1628) *
                         C3803 +
                     (C3142 + C3141) * C3802) *
                        C6354 * C6437 * C451) *
                   C6439) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C6354 * C125) * C2755 +
            (C124 * C84 + C6354 * C129) * C2750 + C142 * C2757 + C143 * C2751) *
               C3802 +
           (C2475 * C2755 + C2476 * C2750 + C3845 * C2757 + C3846 * C2751) *
               C3803) *
              C6437 * C450 -
          (((C124 * C3475 + C6354 * C3516) * C2751 +
            (C124 * C3474 + C6354 * C3515) * C2757 +
            (C124 * C1626 + C6354 * C1661) * C2750 +
            (C124 * C1624 + C6354 * C1659) * C2755) *
               C3803 +
           ((C124 * C457 + C6354 * C495) * C2751 +
            (C124 * C454 + C6354 * C492) * C2757 +
            (C124 * C458 + C6354 * C496) * C2750 +
            (C124 * C455 + C6354 * C493) * C2755) *
               C3802) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C2755 +
           (C3880 * C84 + C3802 * C176 + C3881 * C742 + C3803 * C812) * C2750 +
           (C3891 + C3892) * C2757 + (C3893 + C3894) * C2751) *
              C6354 * C6437 * C450 -
          ((C3881 * C3475 + C3803 * C3552 + C3880 * C457 + C3802 * C527) *
               C2751 +
           (C3881 * C3474 + C3803 * C3551 + C3880 * C454 + C3802 * C524) *
               C2757 +
           (C3881 * C1626 + C3803 * C1691 + C3880 * C458 + C3802 * C528) *
               C2750 +
           (C3881 * C1624 + C3803 * C1689 + C3880 * C455 + C3802 * C525) *
               C2755) *
              C6354 * C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C124 +
            (C2755 * C125 + C2750 * C218 + C2757 * C126 + C2751 * C219) *
                C6354) *
               C3802 +
           ((C2755 * C739 + C2750 * C742 + C2757 * C738 + C2751 * C741) * C124 +
            (C2755 * C777 + C2750 * C841 + C2757 * C776 + C2751 * C840) *
                C6354) *
               C3803) *
              C6437 * C450 -
          (((C2757 * C3515 + C2751 * C3587 + C2755 * C1659 + C2750 * C1719) *
                C6354 +
            (C2757 * C3474 + C2751 * C3475 + C2755 * C1624 + C2750 * C1626) *
                C124) *
               C3803 +
           ((C3260 + C3259) * C6354 + (C3258 + C3257) * C124) * C3802) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C6354 * C249) * C2750 + C266 * C2751) *
               C3802 +
           (C2590 * C2750 + C3967 * C2751) * C3803) *
              C6437 * C450 -
          (((C248 * C3474 + C4305 + C4305 + C6354 * C3622) * C2751 +
            (C248 * C1624 + C2287 + C2287 + C6354 * C1747) * C2750) *
               C3803 +
           ((C248 * C454 + C589 + C589 + C6354 * C585) * C2751 +
            (C248 * C455 + C590 + C590 + C6354 * C586) * C2750) *
               C3802) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C124 +
            (C3880 * C125 + C3802 * C293 + C3881 * C777 + C3803 * C902) *
                C6354) *
               C2750 +
           ((C3891 + C3892) * C124 + (C4006 + C4007) * C6354) * C2751) *
              C6437 * C450 -
          (((C3881 * C3515 + C3803 * C3661 + C3880 * C492 + C3802 * C617) *
                C6354 +
            (C3881 * C3474 + C3803 * C3551 + C3880 * C454 + C3802 * C524) *
                C124) *
               C2751 +
           ((C3881 * C1659 + C3803 * C1778 + C3880 * C493 + C3802 * C618) *
                C6354 +
            (C3881 * C1624 + C3803 * C1689 + C3880 * C455 + C3802 * C525) *
                C124) *
               C2750) *
              C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C3880 +
           (C2755 * C172 + C2750 * C333 + C2757 * C173 + C2751 * C334) * C3802 +
           (C2755 * C739 + C2750 * C742 + C2757 * C738 + C2751 * C741) * C3881 +
           (C2755 * C809 + C2750 * C931 + C2757 * C808 + C2751 * C930) *
               C3803) *
              C6354 * C6437 * C450 -
          ((C2757 * C3551 + C2751 * C3696 + C2755 * C1689 + C2750 * C1806) *
               C3803 +
           (C2757 * C3474 + C2751 * C3475 + C2755 * C1624 + C2750 * C1626) *
               C3881 +
           (C3372 + C3371) * C3802 + (C3258 + C3257) * C3880) *
              C6354 * C6437 * C451) *
         C6439) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C6354 * C125) * C3880 +
                      (C124 * C172 + C6354 * C363) * C3802 + C2475 * C3881 +
                      C2685 * C3803) *
                         C2750 +
                     (C4076 + C4077 + C4078 + C4082) * C2751) *
                        C6437 * C450 -
                    (((C124 * C3551 + C6354 * C3731) * C3803 +
                      (C124 * C3474 + C6354 * C3515) * C3881 +
                      (C124 * C524 + C6354 * C675) * C3802 +
                      (C124 * C454 + C6354 * C492) * C3880) *
                         C2751 +
                     ((C124 * C1689 + C6354 * C1834) * C3803 +
                      (C124 * C1624 + C6354 * C1659) * C3881 +
                      (C124 * C525 + C6354 * C676) * C3802 +
                      (C124 * C455 + C6354 * C493) * C3880) *
                         C2750) *
                        C6437 * C451) *
                   C6439) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4116 * C80 + C4119 + C4119 + C3802 * C404 +
                      C4117 * C739 + C4120 + C4120 + C3803 * C989) *
                         C6354 * C2750 +
                     (C4133 + C4134) * C6354 * C2751) *
                        C6437 * C450 -
                    ((C4117 * C3474 + C4442 + C4442 + C3803 * C3766 +
                      C4116 * C454 + C4443 + C4443 + C3802 * C704) *
                         C6354 * C2751 +
                     (C4117 * C1624 + C4444 + C4444 + C3803 * C1862 +
                      C4116 * C455 + C4445 + C4445 + C3802 * C705) *
                         C6354 * C2750) *
                        C6437 * C451) *
                   C6439) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2754 * C80 + C2759 + C2759 + C2750 * C88 + C2756 * C81 +
                      C2760 + C2760 + C2751 * C89) *
                         C3802 +
                     (C4490 + C4491) * C3803) *
                        C6354 * C735 -
                    ((C2756 * C1895 + C4484 + C4484 + C2751 * C1899 +
                      C2754 * C1894 + C4485 + C4485 + C2750 * C1898) *
                         C3803 +
                     (C4491 + C4490) * C3802) *
                        C6354 * C736) *
                   C6438 * C6439) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C6354 * C125) * C2755 +
            (C124 * C84 + C6354 * C129) * C2750 + C142 * C2757 + C143 * C2751) *
               C3802 +
           (C4526 + C4527 + C4528 + C4529) * C3803) *
              C735 -
          (((C124 * C1897 + C6354 * C1932) * C2751 +
            (C124 * C1895 + C6354 * C1930) * C2757 + C2478 * C2750 +
            C2477 * C2755) *
               C3803 +
           (C4529 + C4528 + C4527 + C4526) * C3802) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C2755 +
           (C3880 * C84 + C3802 * C176 + C3881 * C742 + C3803 * C812) * C2750 +
           (C3891 + C3892) * C2757 + (C3893 + C3894) * C2751) *
              C6354 * C735 -
          ((C3881 * C1897 + C3803 * C1965 + C3880 * C741 + C3802 * C811) *
               C2751 +
           (C3881 * C1895 + C3803 * C1963 + C3880 * C738 + C3802 * C808) *
               C2757 +
           (C3881 * C1896 + C3803 * C1964 + C3880 * C742 + C3802 * C812) *
               C2750 +
           (C3881 * C1894 + C3803 * C1962 + C3880 * C739 + C3802 * C809) *
               C2755) *
              C6354 * C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C124 +
            (C2755 * C125 + C2750 * C218 + C2757 * C126 + C2751 * C219) *
                C6354) *
               C3802 +
           ((C4606 + C4607) * C124 + (C4608 + C4609) * C6354) * C3803) *
              C735 -
          (((C2757 * C1930 + C2751 * C1993 + C2755 * C1929 + C2750 * C1992) *
                C6354 +
            (C2757 * C1895 + C2751 * C1897 + C2755 * C1894 + C2750 * C1896) *
                C124) *
               C3803 +
           ((C4609 + C4608) * C6354 + (C4607 + C4606) * C124) * C3802) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C6354 * C249) * C2750 + C266 * C2751) *
               C3802 +
           (C4644 + C4645) * C3803) *
              C735 -
          (((C248 * C1895 + C2024 + C2024 + C6354 * C2021) * C2751 +
            C2591 * C2750) *
               C3803 +
           (C4645 + C4644) * C3802) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3880 * C80 + C3802 * C172 + C3881 * C739 + C3803 * C809) * C124 +
            (C3880 * C125 + C3802 * C293 + C3881 * C777 + C3803 * C902) *
                C6354) *
               C2750 +
           ((C3891 + C3892) * C124 + (C4006 + C4007) * C6354) * C2751) *
              C735 -
          (((C3881 * C1930 + C3803 * C2051 + C3880 * C776 + C3802 * C901) *
                C6354 +
            (C3881 * C1895 + C3803 * C1963 + C3880 * C738 + C3802 * C808) *
                C124) *
               C2751 +
           ((C3881 * C1929 + C3803 * C2050 + C3880 * C777 + C3802 * C902) *
                C6354 +
            (C3881 * C1894 + C3803 * C1962 + C3880 * C739 + C3802 * C809) *
                C124) *
               C2750) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2755 * C80 + C2750 * C84 + C2757 * C81 + C2751 * C85) * C3880 +
           (C2755 * C172 + C2750 * C333 + C2757 * C173 + C2751 * C334) * C3802 +
           (C4606 + C4607) * C3881 + (C4718 + C4719) * C3803) *
              C6354 * C735 -
          ((C2757 * C1963 + C2751 * C2079 + C2755 * C1962 + C2750 * C2078) *
               C3803 +
           (C2757 * C1895 + C2751 * C1897 + C2755 * C1894 + C2750 * C1896) *
               C3881 +
           (C4719 + C4718) * C3802 + (C4607 + C4606) * C3880) *
              C6354 * C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C6354 * C125) * C3880 +
            (C124 * C172 + C6354 * C363) * C3802 + C2475 * C3881 +
            C2685 * C3803) *
               C2750 +
           (C4076 + C4077 + C4078 + C4082) * C2751) *
              C735 -
          (((C124 * C1963 + C6354 * C2107) * C3803 +
            (C124 * C1895 + C6354 * C1930) * C3881 + C4081 * C3802 +
            C3845 * C3880) *
               C2751 +
           (C2686 * C3803 + C2477 * C3881 + C2685 * C3802 + C2475 * C3880) *
               C2750) *
              C736) *
         C6438 * C6439) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4116 * C80 + C4119 + C4119 + C3802 * C404 +
                      C4117 * C739 + C4120 + C4120 + C3803 * C989) *
                         C6354 * C2750 +
                     (C4133 + C4134) * C6354 * C2751) *
                        C735 -
                    ((C4117 * C1895 + C4788 + C4788 + C3803 * C2138 +
                      C4116 * C738 + C4789 + C4789 + C3802 * C988) *
                         C6354 * C2751 +
                     (C4117 * C1894 + C4790 + C4790 + C3803 * C2137 +
                      C4116 * C739 + C4791 + C4791 + C3802 * C989) *
                         C6354 * C2750) *
                        C736) *
                   C6438 * C6439) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
           C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
              C6365 * C6354 * C6437 * C6438 * C72 -
          (C78 * C83 + C96 + C96 + C67 * C91 + C76 * C82 + C97 + C97 +
           C66 * C90 + C74 * C81 + C98 + C98 + C65 * C89) *
              C6365 * C6354 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C6365 * C1020 +
           (C1023 * C455 + C1033 + C1033 + C6315 * C461) * C6365 * C1021 +
           (C1023 * C1025 + C1034 + C1034 + C6315 * C1029) * C6365 * C1022) *
              C6437 * C6438 * C72 -
          ((C1023 * C1026 + C1035 + C1035 + C6315 * C1030) * C6365 * C1022 +
           (C1023 * C454 + C1036 + C1036 + C6315 * C460) * C6365 * C1021 +
           (C1023 * C81 + C1037 + C1037 + C6315 * C89) * C6365 * C1020) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C124 * C80 + C6354 * C125) * C75 +
                     (C124 * C84 + C6354 * C129) * C65 + C142 * C77 +
                     C143 * C66 + C144 * C79 + C145 * C67) *
                        C6365 * C6437 * C6438 * C72 -
                    ((C124 * C87 + C6354 * C132) * C67 +
                     (C124 * C83 + C6354 * C128) * C79 + C145 * C66 +
                     C144 * C77 + C143 * C65 + C142 * C75) *
                        C6365 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                      C1065 * C1025 + C1022 * C1066) *
                         C1024 +
                     (C1063 * C84 + C1020 * C129 + C1064 * C458 + C1021 * C496 +
                      C1065 * C1027 + C1022 * C1068) *
                         C6315) *
                        C6365 * C6437 * C6438 * C72 -
                    ((C1065 * C1028 + C1022 * C1069 + C1064 * C457 +
                      C1021 * C495 + C1063 * C85 + C1020 * C130) *
                         C6315 +
                     (C1065 * C1026 + C1022 * C1067 + C1064 * C454 +
                      C1021 * C492 + C1063 * C81 + C1020 * C126) *
                         C1024) *
                        C6365 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C6365 * C172) * C75 +
                     (C171 * C84 + C6365 * C176) * C65 + C189 * C77 +
                     C190 * C66 + C191 * C79 + C192 * C67) *
                        C6354 * C6437 * C6438 * C72 -
                    ((C171 * C87 + C6365 * C179) * C67 +
                     (C171 * C83 + C6365 * C175) * C79 + C192 * C66 +
                     C191 * C77 + C190 * C65 + C189 * C75) *
                        C6354 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C6365 * C172) * C1024 +
                      (C171 * C84 + C6365 * C176) * C6315) *
                         C1020 +
                     ((C171 * C455 + C6365 * C525) * C1024 +
                      (C171 * C458 + C6365 * C528) * C6315) *
                         C1021 +
                     ((C171 * C1025 + C6365 * C1096) * C1024 +
                      (C171 * C1027 + C6365 * C1098) * C6315) *
                         C1022) *
                        C6437 * C6438 * C72 -
                    (((C171 * C1028 + C6365 * C1099) * C6315 +
                      (C171 * C1026 + C6365 * C1097) * C1024) *
                         C1022 +
                     ((C171 * C457 + C6365 * C527) * C6315 +
                      (C171 * C454 + C6365 * C524) * C1024) *
                         C1021 +
                     (C190 * C6315 + C189 * C1024) * C1020) *
                        C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                      C79 * C82 + C67 * C86) *
                         C124 +
                     (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                      C79 * C127 + C67 * C220) *
                         C6354) *
                        C6365 * C6437 * C6438 * C72 -
                    ((C79 * C128 + C67 * C221 + C77 * C127 + C66 * C220 +
                      C75 * C126 + C65 * C219) *
                         C6354 +
                     (C79 * C83 + C67 * C87 + C77 * C82 + C66 * C86 +
                      C75 * C81 + C65 * C85) *
                         C124) *
                        C6365 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1024 * C80 + C6315 * C84) * C1063 +
                     (C1024 * C125 + C6315 * C218) * C1020 +
                     (C1024 * C455 + C6315 * C458) * C1064 +
                     (C1024 * C493 + C6315 * C557) * C1021 +
                     (C1024 * C1025 + C6315 * C1027) * C1065 +
                     (C1024 * C1066 + C6315 * C1126) * C1022) *
                        C6365 * C6437 * C6438 * C72 -
                    ((C1024 * C1067 + C6315 * C1127) * C1022 +
                     (C1024 * C1026 + C6315 * C1028) * C1065 +
                     (C1024 * C492 + C6315 * C556) * C1021 +
                     (C1024 * C454 + C6315 * C457) * C1064 +
                     (C1024 * C126 + C6315 * C219) * C1020 +
                     (C1024 * C81 + C6315 * C85) * C1063) *
                        C6365 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C248 * C80 + C254 + C254 + C6354 * C249) * C65 +
                     C266 * C66 + C267 * C67) *
                        C6365 * C6437 * C6438 * C72 -
                    ((C248 * C83 + C261 + C261 + C6354 * C252) * C67 +
                     C267 * C66 + C266 * C65) *
                        C6365 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1154 * C80 + C1160 + C1160 + C1020 * C249 + C1155 * C455 +
                     C1161 + C1161 + C1021 * C586 + C1156 * C1025 + C1162 +
                     C1162 + C1022 * C1157) *
                        C6315 * C6365 * C6437 * C6438 * C72 -
                    (C1156 * C1026 + C1163 + C1163 + C1022 * C1158 +
                     C1155 * C454 + C1164 + C1164 + C1021 * C585 + C1154 * C81 +
                     C1165 + C1165 + C1020 * C250) *
                        C6315 * C6365 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C6365 * C172) * C124 +
            (C171 * C125 + C6365 * C293) * C6354) *
               C65 +
           (C298 + C306) * C66 + (C301 + C307) * C67) *
              C6437 * C6438 * C72 -
          (((C171 * C128 + C6365 * C296) * C6354 +
            (C171 * C83 + C6365 * C175) * C124) *
               C67 +
           (C307 + C301) * C66 + (C306 + C298) * C65) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C171 * C80 + C6365 * C172) * C1063 +
           (C171 * C125 + C6365 * C293) * C1020 +
           (C171 * C455 + C6365 * C525) * C1064 +
           (C171 * C493 + C6365 * C618) * C1021 +
           (C171 * C1025 + C6365 * C1096) * C1065 +
           (C171 * C1066 + C6365 * C1191) * C1022) *
              C6315 * C6437 * C6438 * C72 -
          ((C171 * C1067 + C6365 * C1192) * C1022 +
           (C171 * C1026 + C6365 * C1097) * C1065 +
           (C171 * C492 + C6365 * C617) * C1021 +
           (C171 * C454 + C6365 * C524) * C1064 + C304 * C1020 + C189 * C1063) *
              C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                      C79 * C82 + C67 * C86) *
                         C171 +
                     (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                      C79 * C174 + C67 * C335) *
                         C6365) *
                        C6354 * C6437 * C6438 * C72 -
                    ((C79 * C175 + C67 * C336 + C77 * C174 + C66 * C335 +
                      C75 * C173 + C65 * C334) *
                         C6365 +
                     (C79 * C83 + C67 * C87 + C77 * C82 + C66 * C86 +
                      C75 * C81 + C65 * C85) *
                         C171) *
                        C6354 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1024 * C80 + C6315 * C84) * C171 +
                      (C1024 * C172 + C6315 * C333) * C6365) *
                         C1020 +
                     ((C1024 * C455 + C6315 * C458) * C171 +
                      (C1024 * C525 + C6315 * C647) * C6365) *
                         C1021 +
                     ((C1024 * C1025 + C6315 * C1027) * C171 +
                      (C1024 * C1096 + C6315 * C1219) * C6365) *
                         C1022) *
                        C6437 * C6438 * C72 -
                    (((C1024 * C1097 + C6315 * C1220) * C6365 +
                      (C1024 * C1026 + C6315 * C1028) * C171) *
                         C1022 +
                     ((C1024 * C524 + C6315 * C646) * C6365 +
                      (C1024 * C454 + C6315 * C457) * C171) *
                         C1021 +
                     ((C1024 * C173 + C6315 * C334) * C6365 +
                      (C1024 * C81 + C6315 * C85) * C171) *
                         C1020) *
                        C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C6354 * C125) * C171 +
                      (C124 * C172 + C6354 * C363) * C6365) *
                         C65 +
                     (C368 + C376) * C66 + (C371 + C377) * C67) *
                        C6437 * C6438 * C72 -
                    (((C124 * C175 + C6354 * C366) * C6365 +
                      (C124 * C83 + C6354 * C128) * C171) *
                         C67 +
                     (C377 + C371) * C66 + (C376 + C368) * C65) *
                        C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                      C1065 * C1025 + C1022 * C1066) *
                         C171 +
                     (C1063 * C172 + C1020 * C363 + C1064 * C525 +
                      C1021 * C676 + C1065 * C1096 + C1022 * C1247) *
                         C6365) *
                        C6315 * C6437 * C6438 * C72 -
                    ((C1065 * C1097 + C1022 * C1248 + C1064 * C524 +
                      C1021 * C675 + C1063 * C173 + C1020 * C364) *
                         C6365 +
                     (C1065 * C1026 + C1022 * C1067 + C1064 * C454 +
                      C1021 * C492 + C1063 * C81 + C1020 * C126) *
                         C171) *
                        C6315 * C6437 * C6438 * C73)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C403 * C80 + C409 + C409 + C6365 * C404) * C6354 * C65 +
           C423 * C66 + C424 * C67) *
              C6437 * C6438 * C72 -
          ((C403 * C83 + C416 + C416 + C6365 * C407) * C6354 * C67 +
           C424 * C66 + C423 * C65) *
              C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C403 * C80 + C409 + C409 + C6365 * C404) * C1020 +
           (C403 * C455 + C709 + C709 + C6365 * C705) * C1021 +
           (C403 * C1025 + C1278 + C1278 + C6365 * C1275) * C1022) *
              C6315 * C6437 * C6438 * C72 -
          ((C403 * C1026 + C1279 + C1279 + C6365 * C1276) * C1022 +
           (C403 * C454 + C708 + C708 + C6365 * C704) * C1021 + C421 * C1020) *
              C6315 * C6437 * C6438 * C73)) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
           C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
              C6365 * C6354 * C6437 * C450 -
          (C78 * C453 + C463 + C463 + C67 * C459 + C76 * C454 + C464 + C464 +
           C66 * C460 + C74 * C455 + C465 + C465 + C65 * C461) *
              C6365 * C6354 * C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C6365 * C1020 +
           C1320 * C1021 + C1321 * C1022) *
              C6437 * C450 -
          ((C1023 * C1305 + C1313 + C1313 + C6315 * C1307) * C6365 * C1022 +
           C1321 * C1021 + C1320 * C1020) *
              C6437 * C451) *
         C6439) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C124 * C80 + C6354 * C125) * C75 +
                     (C124 * C84 + C6354 * C129) * C65 + C142 * C77 +
                     C143 * C66 + C144 * C79 + C145 * C67) *
                        C6365 * C6437 * C450 -
                    ((C124 * C456 + C6354 * C494) * C67 +
                     (C124 * C453 + C6354 * C491) * C79 +
                     (C124 * C457 + C6354 * C495) * C66 +
                     (C124 * C454 + C6354 * C492) * C77 +
                     (C124 * C458 + C6354 * C496) * C65 +
                     (C124 * C455 + C6354 * C493) * C75) *
                        C6365 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                      C1065 * C1025 + C1022 * C1066) *
                         C1024 +
                     (C1063 * C84 + C1020 * C129 + C1064 * C458 + C1021 * C496 +
                      C1065 * C1027 + C1022 * C1068) *
                         C6315) *
                        C6365 * C6437 * C450 -
                    ((C1065 * C1306 + C1022 * C1348 + C1064 * C1027 +
                      C1021 * C1068 + C1063 * C458 + C1020 * C496) *
                         C6315 +
                     (C1065 * C1305 + C1022 * C1347 + C1064 * C1025 +
                      C1021 * C1066 + C1063 * C455 + C1020 * C493) *
                         C1024) *
                        C6365 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eexz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C6365 * C172) * C75 +
                     (C171 * C84 + C6365 * C176) * C65 + C189 * C77 +
                     C190 * C66 + C191 * C79 + C192 * C67) *
                        C6354 * C6437 * C450 -
                    ((C171 * C456 + C6365 * C526) * C67 +
                     (C171 * C453 + C6365 * C523) * C79 +
                     (C171 * C457 + C6365 * C527) * C66 +
                     (C171 * C454 + C6365 * C524) * C77 +
                     (C171 * C458 + C6365 * C528) * C65 +
                     (C171 * C455 + C6365 * C525) * C75) *
                        C6354 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C6365 * C172) * C1024 +
                      (C171 * C84 + C6365 * C176) * C6315) *
                         C1020 +
                     (C1390 + C1391) * C1021 + (C1392 + C1393) * C1022) *
                        C6437 * C450 -
                    (((C171 * C1306 + C6365 * C1376) * C6315 +
                      (C171 * C1305 + C6365 * C1375) * C1024) *
                         C1022 +
                     (C1393 + C1392) * C1021 + (C1391 + C1390) * C1020) *
                        C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                      C79 * C82 + C67 * C86) *
                         C124 +
                     (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                      C79 * C127 + C67 * C220) *
                         C6354) *
                        C6365 * C6437 * C450 -
                    ((C79 * C491 + C67 * C555 + C77 * C492 + C66 * C556 +
                      C75 * C493 + C65 * C557) *
                         C6354 +
                     (C79 * C453 + C67 * C456 + C77 * C454 + C66 * C457 +
                      C75 * C455 + C65 * C458) *
                         C124) *
                        C6365 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1024 * C80 + C6315 * C84) * C1063 +
                     (C1024 * C125 + C6315 * C218) * C1020 + C1429 * C1064 +
                     C1430 * C1021 + C1431 * C1065 + C1432 * C1022) *
                        C6365 * C6437 * C450 -
                    ((C1024 * C1347 + C6315 * C1419) * C1022 +
                     (C1024 * C1305 + C6315 * C1306) * C1065 + C1432 * C1021 +
                     C1431 * C1064 + C1430 * C1020 + C1429 * C1063) *
                        C6365 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C248 * C80 + C254 + C254 + C6354 * C249) * C65 +
                     C266 * C66 + C267 * C67) *
                        C6365 * C6437 * C450 -
                    ((C248 * C453 + C588 + C588 + C6354 * C584) * C67 +
                     (C248 * C454 + C589 + C589 + C6354 * C585) * C66 +
                     (C248 * C455 + C590 + C590 + C6354 * C586) * C65) *
                        C6365 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1154 * C80 + C1160 + C1160 + C1020 * C249 + C1155 * C455 +
                     C1161 + C1161 + C1021 * C586 + C1156 * C1025 + C1162 +
                     C1162 + C1022 * C1157) *
                        C6315 * C6365 * C6437 * C450 -
                    (C1156 * C1305 + C1460 + C1460 + C1022 * C1458 +
                     C1155 * C1025 + C1461 + C1461 + C1021 * C1157 +
                     C1154 * C455 + C1462 + C1462 + C1020 * C586) *
                        C6315 * C6365 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C6365 * C172) * C124 +
                      (C171 * C125 + C6365 * C293) * C6354) *
                         C65 +
                     (C298 + C306) * C66 + (C301 + C307) * C67) *
                        C6437 * C450 -
                    (((C171 * C491 + C6365 * C616) * C6354 +
                      (C171 * C453 + C6365 * C523) * C124) *
                         C67 +
                     ((C171 * C492 + C6365 * C617) * C6354 +
                      (C171 * C454 + C6365 * C524) * C124) *
                         C66 +
                     ((C171 * C493 + C6365 * C618) * C6354 +
                      (C171 * C455 + C6365 * C525) * C124) *
                         C65) *
                        C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C6365 * C172) * C1063 +
                     (C171 * C125 + C6365 * C293) * C1020 + C1386 * C1064 +
                     C1494 * C1021 + C1388 * C1065 + C1495 * C1022) *
                        C6315 * C6437 * C450 -
                    ((C171 * C1347 + C6365 * C1488) * C1022 +
                     (C171 * C1305 + C6365 * C1375) * C1065 + C1495 * C1021 +
                     C1388 * C1064 + C1494 * C1020 + C1386 * C1063) *
                        C6315 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                      C79 * C82 + C67 * C86) *
                         C171 +
                     (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                      C79 * C174 + C67 * C335) *
                         C6365) *
                        C6354 * C6437 * C450 -
                    ((C79 * C523 + C67 * C645 + C77 * C524 + C66 * C646 +
                      C75 * C525 + C65 * C647) *
                         C6365 +
                     (C79 * C453 + C67 * C456 + C77 * C454 + C66 * C457 +
                      C75 * C455 + C65 * C458) *
                         C171) *
                        C6354 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1024 * C80 + C6315 * C84) * C171 +
                      (C1024 * C172 + C6315 * C333) * C6365) *
                         C1020 +
                     (C1523 + C1531) * C1021 + (C1526 + C1532) * C1022) *
                        C6437 * C450 -
                    (((C1024 * C1375 + C6315 * C1521) * C6365 +
                      (C1024 * C1305 + C6315 * C1306) * C171) *
                         C1022 +
                     (C1532 + C1526) * C1021 + (C1531 + C1523) * C1020) *
                        C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C6354 * C125) * C171 +
                      (C124 * C172 + C6354 * C363) * C6365) *
                         C65 +
                     (C368 + C376) * C66 + (C371 + C377) * C67) *
                        C6437 * C450 -
                    (((C124 * C523 + C6354 * C674) * C6365 +
                      (C124 * C453 + C6354 * C491) * C171) *
                         C67 +
                     ((C124 * C524 + C6354 * C675) * C6365 +
                      (C124 * C454 + C6354 * C492) * C171) *
                         C66 +
                     ((C124 * C525 + C6354 * C676) * C6365 +
                      (C124 * C455 + C6354 * C493) * C171) *
                         C65) *
                        C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                      C1065 * C1025 + C1022 * C1066) *
                         C171 +
                     (C1063 * C172 + C1020 * C363 + C1064 * C525 +
                      C1021 * C676 + C1065 * C1096 + C1022 * C1247) *
                         C6365) *
                        C6315 * C6437 * C450 -
                    ((C1065 * C1375 + C1022 * C1558 + C1064 * C1096 +
                      C1021 * C1247 + C1063 * C525 + C1020 * C676) *
                         C6365 +
                     (C1065 * C1305 + C1022 * C1347 + C1064 * C1025 +
                      C1021 * C1066 + C1063 * C455 + C1020 * C493) *
                         C171) *
                        C6315 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C403 * C80 + C409 + C409 + C6365 * C404) * C6354 * C65 +
                     C423 * C66 + C424 * C67) *
                        C6437 * C450 -
                    ((C403 * C453 + C707 + C707 + C6365 * C703) * C6354 * C67 +
                     (C403 * C454 + C708 + C708 + C6365 * C704) * C6354 * C66 +
                     (C403 * C455 + C709 + C709 + C6365 * C705) * C6354 * C65) *
                        C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C403 * C80 + C409 + C409 + C6365 * C404) * C1020 +
                     C1596 * C1021 + C1597 * C1022) *
                        C6315 * C6437 * C450 -
                    ((C403 * C1305 + C1591 + C1591 + C6365 * C1585) * C1022 +
                     C1597 * C1021 + C1596 * C1020) *
                        C6315 * C6437 * C451) *
                   C6439) /
                      (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
           C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
              C6365 * C6354 * C735 -
          (C78 * C737 + C747 + C747 + C67 * C743 + C76 * C738 + C748 + C748 +
           C66 * C744 + C74 * C739 + C749 + C749 + C65 * C745) *
              C6365 * C6354 * C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1023 * C80 + C1032 + C1032 + C6315 * C88) * C6365 * C1020 +
           C1320 * C1021 + C1321 * C1022) *
              C735 -
          ((C1023 * C1623 + C1630 + C1630 + C6315 * C1627) * C6365 * C1022 +
           (C1023 * C1624 + C1631 + C1631 + C6315 * C1628) * C6365 * C1021 +
           (C1023 * C739 + C1632 + C1632 + C6315 * C745) * C6365 * C1020) *
              C736) *
         C6438 * C6439) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C124 * C80 + C6354 * C125) * C75 +
                     (C124 * C84 + C6354 * C129) * C65 + C142 * C77 +
                     C143 * C66 + C144 * C79 + C145 * C67) *
                        C6365 * C735 -
                    ((C124 * C740 + C6354 * C778) * C67 +
                     (C124 * C737 + C6354 * C775) * C79 +
                     (C124 * C741 + C6354 * C779) * C66 +
                     (C124 * C738 + C6354 * C776) * C77 +
                     (C124 * C742 + C6354 * C780) * C65 +
                     (C124 * C739 + C6354 * C777) * C75) *
                        C6365 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                      C1065 * C1025 + C1022 * C1066) *
                         C1024 +
                     (C1063 * C84 + C1020 * C129 + C1064 * C458 + C1021 * C496 +
                      C1065 * C1027 + C1022 * C1068) *
                         C6315) *
                        C6365 * C735 -
                    ((C1065 * C1625 + C1022 * C1660 + C1064 * C1626 +
                      C1021 * C1661 + C1063 * C742 + C1020 * C780) *
                         C6315 +
                     (C1065 * C1623 + C1022 * C1658 + C1064 * C1624 +
                      C1021 * C1659 + C1063 * C739 + C1020 * C777) *
                         C1024) *
                        C6365 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C6365 * C172) * C75 +
                     (C171 * C84 + C6365 * C176) * C65 + C189 * C77 +
                     C190 * C66 + C191 * C79 + C192 * C67) *
                        C6354 * C735 -
                    ((C171 * C740 + C6365 * C810) * C67 +
                     (C171 * C737 + C6365 * C807) * C79 +
                     (C171 * C741 + C6365 * C811) * C66 +
                     (C171 * C738 + C6365 * C808) * C77 +
                     (C171 * C742 + C6365 * C812) * C65 +
                     (C171 * C739 + C6365 * C809) * C75) *
                        C6354 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C6365 * C172) * C1024 +
                      (C171 * C84 + C6365 * C176) * C6315) *
                         C1020 +
                     (C1390 + C1391) * C1021 + (C1392 + C1393) * C1022) *
                        C735 -
                    (((C171 * C1625 + C6365 * C1690) * C6315 +
                      (C171 * C1623 + C6365 * C1688) * C1024) *
                         C1022 +
                     ((C171 * C1626 + C6365 * C1691) * C6315 +
                      (C171 * C1624 + C6365 * C1689) * C1024) *
                         C1021 +
                     ((C171 * C742 + C6365 * C812) * C6315 +
                      (C171 * C739 + C6365 * C809) * C1024) *
                         C1020) *
                        C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                      C79 * C82 + C67 * C86) *
                         C124 +
                     (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                      C79 * C127 + C67 * C220) *
                         C6354) *
                        C6365 * C735 -
                    ((C79 * C775 + C67 * C839 + C77 * C776 + C66 * C840 +
                      C75 * C777 + C65 * C841) *
                         C6354 +
                     (C79 * C737 + C67 * C740 + C77 * C738 + C66 * C741 +
                      C75 * C739 + C65 * C742) *
                         C124) *
                        C6365 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1024 * C80 + C6315 * C84) * C1063 +
                     (C1024 * C125 + C6315 * C218) * C1020 + C1429 * C1064 +
                     C1430 * C1021 + C1431 * C1065 + C1432 * C1022) *
                        C6365 * C735 -
                    ((C1024 * C1658 + C6315 * C1718) * C1022 +
                     (C1024 * C1623 + C6315 * C1625) * C1065 +
                     (C1024 * C1659 + C6315 * C1719) * C1021 +
                     (C1024 * C1624 + C6315 * C1626) * C1064 +
                     (C1024 * C777 + C6315 * C841) * C1020 +
                     (C1024 * C739 + C6315 * C742) * C1063) *
                        C6365 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C248 * C80 + C254 + C254 + C6354 * C249) * C65 +
                     C266 * C66 + C267 * C67) *
                        C6365 * C735 -
                    ((C248 * C737 + C872 + C872 + C6354 * C868) * C67 +
                     (C248 * C738 + C873 + C873 + C6354 * C869) * C66 +
                     (C248 * C739 + C874 + C874 + C6354 * C870) * C65) *
                        C6365 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1154 * C80 + C1160 + C1160 + C1020 * C249 + C1155 * C455 +
                     C1161 + C1161 + C1021 * C586 + C1156 * C1025 + C1162 +
                     C1162 + C1022 * C1157) *
                        C6315 * C6365 * C735 -
                    (C1156 * C1623 + C1749 + C1749 + C1022 * C1746 +
                     C1155 * C1624 + C1750 + C1750 + C1021 * C1747 +
                     C1154 * C739 + C1751 + C1751 + C1020 * C870) *
                        C6315 * C6365 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C6365 * C172) * C124 +
                      (C171 * C125 + C6365 * C293) * C6354) *
                         C65 +
                     (C298 + C306) * C66 + (C301 + C307) * C67) *
                        C735 -
                    (((C171 * C775 + C6365 * C900) * C6354 +
                      (C171 * C737 + C6365 * C807) * C124) *
                         C67 +
                     ((C171 * C776 + C6365 * C901) * C6354 +
                      (C171 * C738 + C6365 * C808) * C124) *
                         C66 +
                     ((C171 * C777 + C6365 * C902) * C6354 +
                      (C171 * C739 + C6365 * C809) * C124) *
                         C65) *
                        C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C6365 * C172) * C1063 +
                     (C171 * C125 + C6365 * C293) * C1020 + C1386 * C1064 +
                     C1494 * C1021 + C1388 * C1065 + C1495 * C1022) *
                        C6315 * C735 -
                    ((C171 * C1658 + C6365 * C1777) * C1022 +
                     (C171 * C1623 + C6365 * C1688) * C1065 +
                     (C171 * C1659 + C6365 * C1778) * C1021 +
                     (C171 * C1624 + C6365 * C1689) * C1064 +
                     (C171 * C777 + C6365 * C902) * C1020 +
                     (C171 * C739 + C6365 * C809) * C1063) *
                        C6315 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 +
                      C79 * C82 + C67 * C86) *
                         C171 +
                     (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                      C79 * C174 + C67 * C335) *
                         C6365) *
                        C6354 * C735 -
                    ((C79 * C807 + C67 * C929 + C77 * C808 + C66 * C930 +
                      C75 * C809 + C65 * C931) *
                         C6365 +
                     (C79 * C737 + C67 * C740 + C77 * C738 + C66 * C741 +
                      C75 * C739 + C65 * C742) *
                         C171) *
                        C6354 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1024 * C80 + C6315 * C84) * C171 +
                      (C1024 * C172 + C6315 * C333) * C6365) *
                         C1020 +
                     (C1523 + C1531) * C1021 + (C1526 + C1532) * C1022) *
                        C735 -
                    (((C1024 * C1688 + C6315 * C1805) * C6365 +
                      (C1024 * C1623 + C6315 * C1625) * C171) *
                         C1022 +
                     ((C1024 * C1689 + C6315 * C1806) * C6365 +
                      (C1024 * C1624 + C6315 * C1626) * C171) *
                         C1021 +
                     ((C1024 * C809 + C6315 * C931) * C6365 +
                      (C1024 * C739 + C6315 * C742) * C171) *
                         C1020) *
                        C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C6354 * C125) * C171 +
                      (C124 * C172 + C6354 * C363) * C6365) *
                         C65 +
                     (C368 + C376) * C66 + (C371 + C377) * C67) *
                        C735 -
                    (((C124 * C807 + C6354 * C958) * C6365 +
                      (C124 * C737 + C6354 * C775) * C171) *
                         C67 +
                     ((C124 * C808 + C6354 * C959) * C6365 +
                      (C124 * C738 + C6354 * C776) * C171) *
                         C66 +
                     ((C124 * C809 + C6354 * C960) * C6365 +
                      (C124 * C739 + C6354 * C777) * C171) *
                         C65) *
                        C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1063 * C80 + C1020 * C125 + C1064 * C455 + C1021 * C493 +
                      C1065 * C1025 + C1022 * C1066) *
                         C171 +
                     (C1063 * C172 + C1020 * C363 + C1064 * C525 +
                      C1021 * C676 + C1065 * C1096 + C1022 * C1247) *
                         C6365) *
                        C6315 * C735 -
                    ((C1065 * C1688 + C1022 * C1833 + C1064 * C1689 +
                      C1021 * C1834 + C1063 * C809 + C1020 * C960) *
                         C6365 +
                     (C1065 * C1623 + C1022 * C1658 + C1064 * C1624 +
                      C1021 * C1659 + C1063 * C739 + C1020 * C777) *
                         C171) *
                        C6315 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C403 * C80 + C409 + C409 + C6365 * C404) * C6354 * C65 +
                     C423 * C66 + C424 * C67) *
                        C735 -
                    ((C403 * C737 + C991 + C991 + C6365 * C987) * C6354 * C67 +
                     (C403 * C738 + C992 + C992 + C6365 * C988) * C6354 * C66 +
                     (C403 * C739 + C993 + C993 + C6365 * C989) * C6354 * C65) *
                        C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C403 * C80 + C409 + C409 + C6365 * C404) * C1020 +
                     C1596 * C1021 + C1597 * C1022) *
                        C6315 * C735 -
                    ((C403 * C1623 + C1864 + C1864 + C6365 * C1861) * C1022 +
                     (C403 * C1624 + C1865 + C1865 + C6365 * C1862) * C1021 +
                     (C403 * C739 + C993 + C993 + C6365 * C989) * C1020) *
                        C6315 * C736) *
                   C6438 * C6439) /
                      (p * q * std::sqrt(p + q));
}
