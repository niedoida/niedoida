/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ppps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1110_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C8829 = ae * be;
    const double C8828 = xA - xB;
    const double C8827 = ae + be;
    const double C8826 = 0 * be;
    const double C8861 = yA - yB;
    const double C8864 = zA - zB;
    const double C8921 = 0 * be;
    const double C8951 = 0 * be;
    const double C8971 = p + q;
    const double C8970 = p * q;
    const double C8976 = xP - xQ;
    const double C8975 = bs[2];
    const double C8983 = std::pow(ae, 2);
    const double C8981 = bs[3];
    const double C8994 = bs[4];
    const double C9014 = yP - yQ;
    const double C9028 = zP - zQ;
    const double C80 = bs[0];
    const double C9380 = ce + de;
    const double C9379 = xC - xD;
    const double C9385 = yC - yD;
    const double C9392 = zC - zD;
    const double C9478 = ce * de;
    const double C8832 = 2 * C8829;
    const double C8831 = C8829 * C8828;
    const double C9359 = std::pow(C8828, 2);
    const double C9475 = C8828 * be;
    const double C9474 = C8828 * ae;
    const double C8830 = std::pow(C8827, 2);
    const double C9368 = 2 * C8827;
    const double C8881 = C8829 * C8861;
    const double C9419 = std::pow(C8861, 2);
    const double C9484 = C8861 * be;
    const double C9482 = C8861 * ae;
    const double C8893 = C8829 * C8864;
    const double C9434 = std::pow(C8864, 2);
    const double C9485 = C8864 * be;
    const double C9483 = C8864 * ae;
    const double C8972 = 2 * C8970;
    const double C8984 = C8976 * ae;
    const double C8980 = std::pow(C8976, 2);
    const double C9017 = C9014 * ae;
    const double C9016 = C8976 * C9014;
    const double C9043 = C9014 * C8976;
    const double C9051 = std::pow(C9014, 2);
    const double C9031 = C9028 * ae;
    const double C9030 = C8976 * C9028;
    const double C9060 = C9014 * C9028;
    const double C9068 = C9028 * C8976;
    const double C9076 = C9028 * C9014;
    const double C9084 = std::pow(C9028, 2);
    const double C9481 = 2 * C9380;
    const double C9480 = std::pow(C9379, 2);
    const double C9479 = std::pow(C9385, 2);
    const double C9477 = std::pow(C9392, 2);
    const double C9360 = C9359 * C8829;
    const double C8834 = 2 * C8830;
    const double C9476 = std::pow(C9368, -1);
    const double C9420 = C9419 * C8829;
    const double C9435 = C9434 * C8829;
    const double C8974 = C8972 / C8971;
    const double C88 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C8972 / C8971, 2) -
          (bs[1] * C8972) / C8971) *
         std::pow(ae, 2)) /
        C8830;
    const double C81 = -(C8976 * bs[1] * C8972) / C8971;
    const double C455 = -(C9014 * bs[1] * C8972) / C8971;
    const double C739 = -(C9028 * bs[1] * C8972) / C8971;
    const double C8986 = C8981 * C8984;
    const double C8997 = C8994 * C8984;
    const double C84 = (-(bs[1] * C8984 * C8972) / C8971) / C8827;
    const double C8996 = C8980 * C8994;
    const double C9019 = C8981 * C9017;
    const double C9023 = C8994 * C9017;
    const double C125 = (-(bs[1] * C9017 * C8972) / C8971) / C8827;
    const double C9018 = C9016 * C8983;
    const double C9044 = C9043 * C8983;
    const double C9053 = C9051 * C8994;
    const double C9033 = C8981 * C9031;
    const double C9037 = C8994 * C9031;
    const double C172 = (-(bs[1] * C9031 * C8972) / C8971) / C8827;
    const double C9032 = C9030 * C8983;
    const double C9061 = C9060 * C8983;
    const double C9069 = C9068 * C8983;
    const double C9077 = C9076 * C8983;
    const double C9086 = C9084 * C8994;
    const double C9491 = std::pow(C9481, -1);
    const double C9490 = C9480 * C9478;
    const double C9489 = C9479 * C9478;
    const double C9488 = C9477 * C9478;
    const double C9361 = C9360 / C8827;
    const double C9421 = C9420 / C8827;
    const double C9436 = C9435 / C8827;
    const double C8977 = std::pow(C8974, 2);
    const double C8982 = -C8974;
    const double C8995 = std::pow(C8974, 4);
    const double C9022 = C8994 * C9018;
    const double C9046 = C8994 * C9044;
    const double C9036 = C8994 * C9032;
    const double C9063 = C8994 * C9061;
    const double C9071 = C8994 * C9069;
    const double C9079 = C8994 * C9077;
    const double C9498 = C9490 / C9380;
    const double C9497 = C9489 / C9380;
    const double C9496 = C9488 / C9380;
    const double C9362 = -C9361;
    const double C9422 = -C9421;
    const double C9437 = -C9436;
    const double C8979 = C8975 * C8977;
    const double C89 = (2 * ae * C8977 * C8975 * C8976 * ae +
                        C8976 *
                            (C8975 * C8977 +
                             std::pow(C8976, 2) * bs[3] * std::pow(-C8974, 3)) *
                            std::pow(ae, 2)) /
                       C8830;
    const double C129 = (C8977 * C8975 * C8976 * (yP - yQ) * C8983) / C8830;
    const double C176 = (C8977 * C8975 * C8976 * (zP - zQ) * C8983) / C8830;
    const double C218 = (C8977 * C8975 * C9014 * C8976 * C8983) / C8830;
    const double C249 =
        ((std::pow(C9014, 2) * C8975 * C8977 - (bs[1] * C8972) / C8971) *
         C8983) /
        C8830;
    const double C293 = (C8977 * C8975 * C9014 * C9028 * C8983) / C8830;
    const double C333 = (C8977 * C8975 * C9028 * C8976 * C8983) / C8830;
    const double C363 = (C8977 * C8975 * C9028 * C9014 * C8983) / C8830;
    const double C404 =
        ((std::pow(C9028, 2) * C8975 * C8977 - (bs[1] * C8972) / C8971) *
         C8983) /
        C8830;
    const double C85 = (C8976 * C8977 * C8975 * C8984) / C8827 -
                       (ae * bs[1] * C8972) / (C8971 * C8827);
    const double C126 = (C8976 * C8977 * C8975 * C9017) / C8827;
    const double C173 = (C8976 * C8977 * C8975 * C9031) / C8827;
    const double C458 = (C9014 * C8977 * C8975 * C8984) / C8827;
    const double C493 = (C9014 * C8977 * C8975 * C9017) / C8827 -
                        (ae * bs[1] * C8972) / (C8971 * C8827);
    const double C525 = (C9014 * C8977 * C8975 * C9031) / C8827;
    const double C742 = (C9028 * C8977 * C8975 * C8984) / C8827;
    const double C777 = (C9028 * C8977 * C8975 * C9017) / C8827;
    const double C809 = (C9028 * C8977 * C8975 * C9031) / C8827 -
                        (ae * bs[1] * C8972) / (C8971 * C8827);
    const double C8985 = std::pow(C8982, 3);
    const double C9001 = C8995 * C8997;
    const double C9000 = C8996 * C8995;
    const double C9025 = C8995 * C9023;
    const double C9039 = C8995 * C9037;
    const double C9054 = C9053 * C8995;
    const double C9087 = C9086 * C8995;
    const double C9024 = C8995 * C9022;
    const double C9047 = C8995 * C9046;
    const double C9038 = C8995 * C9036;
    const double C9064 = C8995 * C9063;
    const double C9072 = C8995 * C9071;
    const double C9080 = C8995 * C9079;
    const double C9501 = -C9498;
    const double C9500 = -C9497;
    const double C9499 = -C9496;
    const double C9363 = std::exp(C9362);
    const double C9423 = std::exp(C9422);
    const double C9438 = std::exp(C9437);
    const double C8987 = C8979 * ae;
    const double C82 = C8979 * C8980 - (bs[1] * C8972) / C8971;
    const double C454 = C9014 * C8976 * C8979;
    const double C738 = C9028 * C8976 * C8979;
    const double C1408 = C8979 * C9051 - (bs[1] * C8972) / C8971;
    const double C1794 = C9028 * C9014 * C8979;
    const double C2814 = C8979 * C9084 - (bs[1] * C8972) / C8971;
    const double C8988 = C8985 * C8986;
    const double C8993 = C8981 * C8985;
    const double C9020 = C8985 * C9019;
    const double C9034 = C8985 * C9033;
    const double C130 = (ae * C8977 * C8975 * C9014 * ae +
                         C8976 * C8985 * C8981 * C8976 * C9014 * C8983) /
                        C8830;
    const double C177 = (ae * C8977 * C8975 * C9028 * ae +
                         C8976 * C8985 * C8981 * C8976 * C9028 * C8983) /
                        C8830;
    const double C219 = (ae * C8977 * C8975 * C9017 +
                         C8976 * C8985 * C8981 * C9014 * C8976 * C8983) /
                        C8830;
    const double C250 =
        (C8976 * (C8979 + std::pow(C9014, 2) * C8981 * C8985) * C8983) / C8830;
    const double C294 = (C8976 * C8985 * C8981 * C9014 * C9028 * C8983) / C8830;
    const double C295 =
        (C8985 * C8981 * C9061 + C8995 * C8994 * C9061 * C8980) / C8830;
    const double C334 = (ae * C8977 * C8975 * C9031 +
                         C8976 * C8985 * C8981 * C9028 * C8976 * C8983) /
                        C8830;
    const double C364 = (C8976 * C8985 * C8981 * C9028 * C9014 * C8983) / C8830;
    const double C365 =
        (C8985 * C8981 * C9077 + C8995 * C8994 * C9077 * C8980) / C8830;
    const double C405 =
        (C8976 * (C8979 + std::pow(C9028, 2) * C8981 * C8985) * C8983) / C8830;
    const double C461 =
        (C9014 * (C8979 + C8980 * C8981 * C8985) * C8983) / C8830;
    const double C496 =
        (ae * C8977 * C8975 * C8984 + C9014 * C8985 * C8981 * C9018) / C8830;
    const double C528 = (C9014 * C8985 * C8981 * C9032) / C8830;
    const double C557 =
        (ae * C8977 * C8975 * C8984 + C9014 * C8985 * C8981 * C9044) / C8830;
    const double C586 = (2 * ae * C8977 * C8975 * C9017 +
                         C9014 * (C8979 + C9051 * C8981 * C8985) * C8983) /
                        C8830;
    const double C618 =
        (ae * C8977 * C8975 * C9031 + C9014 * C8985 * C8981 * C9061) / C8830;
    const double C647 = (C9014 * C8985 * C8981 * C9069) / C8830;
    const double C676 =
        (ae * C8977 * C8975 * C9031 + C9014 * C8985 * C8981 * C9077) / C8830;
    const double C705 =
        (C9014 * (C8979 + C9084 * C8981 * C8985) * C8983) / C8830;
    const double C745 =
        (C9028 * (C8979 + C8980 * C8981 * C8985) * C8983) / C8830;
    const double C780 = (C9028 * C8985 * C8981 * C9018) / C8830;
    const double C812 =
        (ae * C8977 * C8975 * C8984 + C9028 * C8985 * C8981 * C9032) / C8830;
    const double C841 = (C9028 * C8985 * C8981 * C9044) / C8830;
    const double C870 =
        (C9028 * (C8979 + C9051 * C8981 * C8985) * C8983) / C8830;
    const double C902 =
        (ae * C8977 * C8975 * C9017 + C9028 * C8985 * C8981 * C9061) / C8830;
    const double C931 =
        (ae * C8977 * C8975 * C8984 + C9028 * C8985 * C8981 * C9069) / C8830;
    const double C960 =
        (ae * C8977 * C8975 * C9017 + C9028 * C8985 * C8981 * C9077) / C8830;
    const double C989 = (2 * ae * C8977 * C8975 * C9031 +
                         C9028 * (C8979 + C9084 * C8981 * C8985) * C8983) /
                        C8830;
    const double C9004 = C8976 * C9001;
    const double C9248 = C9014 * C9001;
    const double C1797 =
        (2 * ae * C9028 * C9014 * C9001 +
         C8976 * C9028 * C9014 *
             (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) * C8983) /
        C8830;
    const double C9157 = C8976 * C9025;
    const double C9221 = C9014 * C9025;
    const double C9166 = C8976 * C9039;
    const double C9255 = C9014 * C9039;
    const double C9268 = C9028 * C9039;
    const double C778 =
        (C9028 *
         (C9024 + ae * C8976 * C9025 +
          C8976 * (ae * C9025 + C8976 * std::pow(C8982, 5) * bs[5] * C9018))) /
        C8830;
    const double C2868 = (C8985 * C8981 * C9018 + C9024 * C9084) / C8830;
    const double C4812 =
        (C9028 *
         (C9024 + ae * C9014 * C9001 +
          C9014 * (ae * C9001 + C9014 * std::pow(C8982, 5) * bs[5] * C9018))) /
        C8830;
    const double C8594 =
        (2 * C9028 * C9024 +
         C9028 * (C9024 + std::pow(C8982, 5) * bs[5] * C9018 * C9084)) /
        C8830;
    const double C839 =
        (C9028 *
         (C9047 + ae * C8976 * C9025 +
          C8976 * (ae * C9025 + C8976 * std::pow(C8982, 5) * bs[5] * C9044))) /
        C8830;
    const double C2952 = (C8985 * C8981 * C9044 + C9047 * C9084) / C8830;
    const double C4867 =
        (C9028 * C9047 + ae * C9028 * C9014 * C9001 +
         C9014 * (ae * C9028 * C9001 +
                  C9014 * C9028 * std::pow(C8982, 5) * bs[5] * C9044)) /
        C8830;
    const double C8659 =
        (2 * C9028 * C9047 +
         C9028 * (C9047 + std::pow(C8982, 5) * bs[5] * C9044 * C9084)) /
        C8830;
    const double C526 =
        (C9014 *
         (C9038 + ae * C8976 * C9039 +
          C8976 * (ae * C9039 + C8976 * std::pow(C8982, 5) * bs[5] * C9032))) /
        C8830;
    const double C1500 = (C8985 * C8981 * C9032 + C9038 * C9051) / C8830;
    const double C4546 =
        (2 * C9014 * C9038 +
         C9014 * (C9038 + std::pow(C8982, 5) * bs[5] * C9032 * C9051)) /
        C8830;
    const double C296 =
        (2 * C8976 * C9064 +
         C8976 * (C9064 + std::pow(C8982, 5) * bs[5] * C9061 * C8980)) /
        C8830;
    const double C645 =
        (C9014 *
         (C9072 + ae * C8976 * C9039 +
          C8976 * (ae * C9039 + C8976 * std::pow(C8982, 5) * bs[5] * C9069))) /
        C8830;
    const double C1673 = (C8985 * C8981 * C9069 + C9072 * C9051) / C8830;
    const double C4682 =
        (2 * C9014 * C9072 +
         C9014 * (C9072 + std::pow(C8982, 5) * bs[5] * C9069 * C9051)) /
        C8830;
    const double C366 =
        (2 * C8976 * C9080 +
         C8976 * (C9080 + std::pow(C8982, 5) * bs[5] * C9077 * C8980)) /
        C8830;
    const double C9504 = std::exp(C9501);
    const double C9503 = std::exp(C9500);
    const double C9502 = std::exp(C9499);
    const double C4586 = C9363 * C458;
    const double C5838 = C9363 * C742;
    const double C8833 = C8831 * C9363;
    const double C9487 = C9476 * C9363;
    const double C9486 = C9363 * C9474;
    const double C1027 = -(C9363 * C9475) / C8827;
    const double C135 = C9423 * C126;
    const double C2871 = C9423 * C777;
    const double C8882 = C8881 * C9423;
    const double C124 = -(2 * C8829 * (yA - yB) * C9423) / C8827;
    const double C248 =
        -((C9423 - (C8861 * 2 * C8829 * C8861 * C9423) / C8827) * C8832) /
        C8827;
    const double C1077 =
        ((C9423 - (C8861 * 2 * C8829 * C8861 * C9423) / C8827) * ae) / C8827 -
        (0 * be) / C8834;
    const double C1078 = (0 * ae) / C8827 - (C8829 * C8861 * C9423) / C8830;
    const double C9493 = C9476 * C9423;
    const double C9492 = C9423 * C9482;
    const double C3203 = -(C9423 * C9484) / C8827;
    const double C182 = C9438 * C173;
    const double C1503 = C9438 * C525;
    const double C8894 = C8893 * C9438;
    const double C171 = -(2 * C8829 * (zA - zB) * C9438) / C8827;
    const double C403 =
        -((C9438 - (C8864 * 2 * C8829 * C8864 * C9438) / C8827) * C8832) /
        C8827;
    const double C2213 =
        ((C9438 - (C8864 * 2 * C8829 * C8864 * C9438) / C8827) * ae) / C8827 -
        (0 * be) / C8834;
    const double C2214 = (0 * ae) / C8827 - (C8829 * C8864 * C9438) / C8830;
    const double C9495 = C9476 * C9438;
    const double C9494 = C9438 * C9483;
    const double C6078 = -(C9438 * C9485) / C8827;
    const double C8989 = C8976 * C8988;
    const double C1462 = (C8985 * C8981 * C9018 + ae * C9014 * C8988 +
                          C9014 * (ae * C8988 + C9014 * C9024)) /
                         C8830;
    const double C1546 = (C8985 * C8981 * C9044 + ae * C9014 * C8988 +
                          C9014 * (ae * C8988 + C9014 * C9047)) /
                         C8830;
    const double C1840 = (C9028 * (ae * C8988 + C9014 * C9024)) / C8830;
    const double C1878 = (ae * C9014 * C8988 + C9028 * C9014 * C9038) / C8830;
    const double C1914 = (ae * C9028 * C8988 + C9014 * C9028 * C9047) / C8830;
    const double C2026 = (ae * C9014 * C8988 + C9028 * C9014 * C9072) / C8830;
    const double C2916 = (C8985 * C8981 * C9032 + ae * C9028 * C8988 +
                          C9028 * (ae * C8988 + C9028 * C9038)) /
                         C8830;
    const double C3081 = (C8985 * C8981 * C9069 + ae * C9028 * C8988 +
                          C9028 * (ae * C8988 + C9028 * C9072)) /
                         C8830;
    const double C4518 =
        (2 * (ae * C8988 + C9014 * C9024) + ae * (C8988 + C9001 * C9051) +
         C9014 * (C9024 + ae * C9014 * C9001 +
                  C9014 * (ae * C9001 +
                           C9014 * std::pow(C8982, 5) * bs[5] * C9018))) /
        C8830;
    const double C4583 =
        (2 * (ae * C8988 + C9014 * C9047) + ae * (C8988 + C9001 * C9051) +
         C9014 * (C9047 + ae * C9014 * C9001 +
                  C9014 * (ae * C9001 +
                           C9014 * std::pow(C8982, 5) * bs[5] * C9044))) /
        C8830;
    const double C4840 =
        (ae * (C8988 + C9001 * C9051) +
         C9028 * (C9038 + std::pow(C8982, 5) * bs[5] * C9032 * C9051)) /
        C8830;
    const double C4951 =
        (ae * (C8988 + C9001 * C9051) +
         C9028 * (C9072 + std::pow(C8982, 5) * bs[5] * C9069 * C9051)) /
        C8830;
    const double C5752 =
        (ae * C8988 + C9014 * C9024 +
         (ae * C9001 + C9014 * std::pow(C8982, 5) * bs[5] * C9018) * C9084) /
        C8830;
    const double C5835 =
        (ae * (C8988 + C9001 * C9084) +
         C9014 * (C9047 + std::pow(C8982, 5) * bs[5] * C9044 * C9084)) /
        C8830;
    const double C8632 =
        (2 * (ae * C8988 + C9028 * C9038) + ae * (C8988 + C9001 * C9084) +
         C9028 * (C9038 + ae * C9028 * C9001 +
                  C9028 * (ae * C9001 +
                           C9028 * std::pow(C8982, 5) * bs[5] * C9032))) /
        C8830;
    const double C8758 =
        (2 * (ae * C8988 + C9028 * C9072) + ae * (C8988 + C9001 * C9084) +
         C9028 * (C9072 + ae * C9028 * C9001 +
                  C9028 * (ae * C9001 +
                           C9028 * std::pow(C8982, 5) * bs[5] * C9069))) /
        C8830;
    const double C1410 = (C8977 * C8975 * C8984 + C8988 * C9051) / C8827;
    const double C1796 = (C9028 * C9014 * C8988) / C8827;
    const double C2816 = (C8977 * C8975 * C8984 + C8988 * C9084) / C8827;
    const double C4476 =
        (2 * C9014 * C8988 + C9014 * (C8988 + C9001 * C9051)) / C8827;
    const double C4780 = (C9028 * (C8988 + C9001 * C9051)) / C8827;
    const double C8559 =
        (2 * C9028 * C8988 + C9028 * (C8988 + C9001 * C9084)) / C8827;
    const double C8999 = C8976 * C8993;
    const double C8998 = C8993 * ae;
    const double C9003 = C8993 + C9000;
    const double C9055 = C8993 + C9054;
    const double C9088 = C8993 + C9087;
    const double C9222 = C9014 * C8993;
    const double C9269 = C9028 * C8993;
    const double C251 = ((C8979 + C9051 * C8981 * C8985) * C8983 +
                         (C8993 + C9051 * C8994 * C8995) * C8983 * C8980) /
                        C8830;
    const double C406 = ((C8979 + C9084 * C8981 * C8985) * C8983 +
                         (C8993 + C9084 * C8994 * C8995) * C8983 * C8980) /
                        C8830;
    const double C83 = 2 * C8976 * C8979 + C8976 * (C8979 + C8993 * C8980);
    const double C453 = C9014 * (C8979 + C8993 * C8980);
    const double C737 = C9028 * (C8979 + C8993 * C8980);
    const double C4475 = 2 * C9014 * C8979 + C9014 * (C8979 + C8993 * C9051);
    const double C4779 = C9028 * (C8979 + C8993 * C9051);
    const double C8558 = 2 * C9028 * C8979 + C9028 * (C8979 + C8993 * C9084);
    const double C9162 = C9014 * C9020;
    const double C131 = (C8985 * C8981 * C9018 + ae * C8976 * C9020 +
                         C8976 * (ae * C9020 + C8976 * C8995 * C8994 * C9018)) /
                        C8830;
    const double C132 =
        (2 * (ae * C9020 + C8976 * C9024) + ae * (C9020 + C9025 * C8980) +
         C8976 * (C9024 + ae * C8976 * C9025 +
                  C8976 * (ae * C9025 +
                           C8976 * std::pow(C8982, 5) * bs[5] * C9018))) /
        C8830;
    const double C220 = (C8985 * C8981 * C9044 + ae * C8976 * C9020 +
                         C8976 * (ae * C9020 + C8976 * C8995 * C8994 * C9044)) /
                        C8830;
    const double C221 =
        (2 * (ae * C9020 + C8976 * C9047) + ae * (C9020 + C9025 * C8980) +
         C8976 * (C9047 + ae * C8976 * C9025 +
                  C8976 * (ae * C9025 +
                           C8976 * std::pow(C8982, 5) * bs[5] * C9044))) /
        C8830;
    const double C779 = (C9028 * (ae * C9020 + C8976 * C9024)) / C8830;
    const double C840 = (C9028 * (ae * C9020 + C8976 * C9047)) / C8830;
    const double C900 =
        (ae * (C9020 + C9025 * C8980) +
         C9028 * (C9064 + std::pow(C8982, 5) * bs[5] * C9061 * C8980)) /
        C8830;
    const double C901 = (ae * C8976 * C9020 + C9028 * C8976 * C9064) / C8830;
    const double C958 =
        (ae * (C9020 + C9025 * C8980) +
         C9028 * (C9080 + std::pow(C8982, 5) * bs[5] * C9077 * C8980)) /
        C8830;
    const double C959 = (ae * C8976 * C9020 + C9028 * C8976 * C9080) / C8830;
    const double C2867 =
        (ae * C9020 + C8976 * C9024 +
         (ae * C9025 + C8976 * std::pow(C8982, 5) * bs[5] * C9018) * C9084) /
        C8830;
    const double C2951 =
        (ae * C9020 + C8976 * C9047 +
         (ae * C9025 + C8976 * std::pow(C8982, 5) * bs[5] * C9044) * C9084) /
        C8830;
    const double C3045 = (C8985 * C8981 * C9061 + ae * C9028 * C9020 +
                          C9028 * (ae * C9020 + C9028 * C9064)) /
                         C8830;
    const double C3123 = (C8985 * C8981 * C9077 + ae * C9028 * C9020 +
                          C9028 * (ae * C9020 + C9028 * C9080)) /
                         C8830;
    const double C8731 =
        (2 * (ae * C9020 + C9028 * C9064) + ae * (C9020 + C9025 * C9084) +
         C9028 * (C9064 + ae * C9028 * C9025 +
                  C9028 * (ae * C9025 +
                           C9028 * std::pow(C8982, 5) * bs[5] * C9061))) /
        C8830;
    const double C8788 =
        (2 * (ae * C9020 + C9028 * C9080) + ae * (C9020 + C9025 * C9084) +
         C9028 * (C9080 + ae * C9028 * C9025 +
                  C9028 * (ae * C9025 +
                           C9028 * std::pow(C8982, 5) * bs[5] * C9077))) /
        C8830;
    const double C127 = (C8977 * C8975 * C9017 + C9020 * C8980) / C8827;
    const double C128 =
        (2 * C8976 * C9020 + C8976 * (C9020 + C9025 * C8980)) / C8827;
    const double C491 =
        (C9014 * (C9020 + C9025 * C8980) + (C8979 + C8993 * C8980) * ae) /
        C8827;
    const double C492 = (C9014 * C8976 * C9020 + C8976 * C8979 * ae) / C8827;
    const double C775 = (C9028 * (C9020 + C9025 * C8980)) / C8827;
    const double C776 = (C9028 * C8976 * C9020) / C8827;
    const double C2866 = (C8977 * C8975 * C9017 + C9020 * C9084) / C8827;
    const double C8593 =
        (2 * C9028 * C9020 + C9028 * (C9020 + C9025 * C9084)) / C8827;
    const double C9213 = C9028 * C9034;
    const double C178 = (C8985 * C8981 * C9032 + ae * C8976 * C9034 +
                         C8976 * (ae * C9034 + C8976 * C8995 * C8994 * C9032)) /
                        C8830;
    const double C179 =
        (2 * (ae * C9034 + C8976 * C9038) + ae * (C9034 + C9039 * C8980) +
         C8976 * (C9038 + ae * C8976 * C9039 +
                  C8976 * (ae * C9039 +
                           C8976 * std::pow(C8982, 5) * bs[5] * C9032))) /
        C8830;
    const double C335 = (C8985 * C8981 * C9069 + ae * C8976 * C9034 +
                         C8976 * (ae * C9034 + C8976 * C8995 * C8994 * C9069)) /
                        C8830;
    const double C336 =
        (2 * (ae * C9034 + C8976 * C9072) + ae * (C9034 + C9039 * C8980) +
         C8976 * (C9072 + ae * C8976 * C9039 +
                  C8976 * (ae * C9039 +
                           C8976 * std::pow(C8982, 5) * bs[5] * C9069))) /
        C8830;
    const double C527 = (C9014 * (ae * C9034 + C8976 * C9038)) / C8830;
    const double C616 =
        (ae * (C9034 + C9039 * C8980) +
         C9014 * (C9064 + std::pow(C8982, 5) * bs[5] * C9061 * C8980)) /
        C8830;
    const double C617 = (ae * C8976 * C9034 + C9014 * C8976 * C9064) / C8830;
    const double C646 = (C9014 * (ae * C9034 + C8976 * C9072)) / C8830;
    const double C674 =
        (ae * (C9034 + C9039 * C8980) +
         C9014 * (C9080 + std::pow(C8982, 5) * bs[5] * C9077 * C8980)) /
        C8830;
    const double C675 = (ae * C8976 * C9034 + C9014 * C8976 * C9080) / C8830;
    const double C1499 =
        (ae * C9034 + C8976 * C9038 +
         (ae * C9039 + C8976 * std::pow(C8982, 5) * bs[5] * C9032) * C9051) /
        C8830;
    const double C1634 = (C8985 * C8981 * C9061 + ae * C9014 * C9034 +
                          C9014 * (ae * C9034 + C9014 * C9064)) /
                         C8830;
    const double C1672 =
        (ae * C9034 + C8976 * C9072 +
         (ae * C9039 + C8976 * std::pow(C8982, 5) * bs[5] * C9069) * C9051) /
        C8830;
    const double C1715 = (C8985 * C8981 * C9077 + ae * C9014 * C9034 +
                          C9014 * (ae * C9034 + C9014 * C9080)) /
                         C8830;
    const double C1990 =
        (ae * (C9028 * C9034 + C8987) + C9014 * (ae * C9020 + C9028 * C9064)) /
        C8830;
    const double C4652 =
        (2 * (ae * C9034 + C9014 * C9064) + ae * (C9034 + C9039 * C9051) +
         C9014 * (C9064 + ae * C9014 * C9039 +
                  C9014 * (ae * C9039 +
                           C9014 * std::pow(C8982, 5) * bs[5] * C9061))) /
        C8830;
    const double C4719 =
        (2 * (ae * C9034 + C9014 * C9080) + ae * (C9034 + C9039 * C9051) +
         C9014 * (C9080 + ae * C9014 * C9039 +
                  C9014 * (ae * C9039 +
                           C9014 * std::pow(C8982, 5) * bs[5] * C9077))) /
        C8830;
    const double C174 = (C8977 * C8975 * C9031 + C9034 * C8980) / C8827;
    const double C175 =
        (2 * C8976 * C9034 + C8976 * (C9034 + C9039 * C8980)) / C8827;
    const double C523 = (C9014 * (C9034 + C9039 * C8980)) / C8827;
    const double C524 = (C9014 * C8976 * C9034) / C8827;
    const double C807 =
        (C9028 * (C9034 + C9039 * C8980) + (C8979 + C8993 * C8980) * ae) /
        C8827;
    const double C808 = (C9028 * C8976 * C9034 + C8976 * C8979 * ae) / C8827;
    const double C1498 = (C8977 * C8975 * C9031 + C9034 * C9051) / C8827;
    const double C1876 = (C9028 * C9014 * C9034 + C9014 * C8979 * ae) / C8827;
    const double C4545 =
        (2 * C9014 * C9034 + C9014 * (C9034 + C9039 * C9051)) / C8827;
    const double C4839 =
        (C9028 * (C9034 + C9039 * C9051) + (C8979 + C8993 * C9051) * ae) /
        C8827;
    const double C137 = C9423 * C130;
    const double C184 = C9438 * C177;
    const double C257 = C9423 * C250;
    const double C300 = C9438 * C294;
    const double C303 = C9438 * C295;
    const double C370 = C9423 * C364;
    const double C373 = C9423 * C365;
    const double C412 = C9438 * C405;
    const double C4480 = C9363 * C461;
    const double C1505 = C9438 * C528;
    const double C4588 = C9363 * C557;
    const double C1637 = C9438 * C618;
    const double C4686 = C9363 * C647;
    const double C1754 = C9438 * C705;
    const double C5712 = C9363 * C745;
    const double C2873 = C9423 * C780;
    const double C5840 = C9363 * C841;
    const double C3003 = C9423 * C870;
    const double C5965 = C9363 * C931;
    const double C3126 = C9423 * C960;
    const double C5800 =
        (C9014 * C9038 + ae * C9028 * C9248 +
         C9028 * (ae * C9248 +
                  C9028 * C9014 * std::pow(C8982, 5) * bs[5] * C9032)) /
        C8830;
    const double C5962 =
        (C9014 * C9072 + ae * C9028 * C9248 +
         C9028 * (ae * C9248 +
                  C9028 * C9014 * std::pow(C8982, 5) * bs[5] * C9069)) /
        C8830;
    const double C5708 = (C9014 * C8988 + C9248 * C9084) / C8827;
    const double C9158 = C9014 * C9157;
    const double C1949 =
        (2 * ae * C9028 * C9157 +
         C9014 * C9028 * C8976 *
             (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) * C8983) /
        C8830;
    const double C3044 =
        (C8976 * C9064 + ae * C9028 * C9157 +
         C9028 * (ae * C9157 +
                  C9028 * C8976 * std::pow(C8982, 5) * bs[5] * C9061)) /
        C8830;
    const double C3122 =
        (C8976 * C9080 + ae * C9028 * C9157 +
         C9028 * (ae * C9157 +
                  C9028 * C8976 * std::pow(C8982, 5) * bs[5] * C9077)) /
        C8830;
    const double C2865 = (C8976 * C9020 + C9157 * C9084) / C8827;
    const double C9209 = C9028 * C9166;
    const double C1633 =
        (C8976 * C9064 + ae * C9014 * C9166 +
         C9014 * (ae * C9166 +
                  C9014 * C8976 * std::pow(C8982, 5) * bs[5] * C9061)) /
        C8830;
    const double C1714 =
        (C8976 * C9080 + ae * C9014 * C9166 +
         C9014 * (ae * C9166 +
                  C9014 * C8976 * std::pow(C8982, 5) * bs[5] * C9077)) /
        C8830;
    const double C2097 =
        (2 * ae * C9014 * C9166 +
         C9028 * C9014 * C8976 *
             (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) * C8983) /
        C8830;
    const double C1497 = (C8976 * C9034 + C9166 * C9051) / C8827;
    const double C9256 = C9028 * C9255;
    const double C8601 = C9423 * C2868;
    const double C8666 = C9363 * C2952;
    const double C4553 = C9438 * C1500;
    const double C4689 = C9363 * C1673;
    const double C72 = -(C9504 * C9379 * de) / C9380;
    const double C73 = C9491 * C9504;
    const double C450 = -(C9503 * C9385 * de) / C9380;
    const double C451 = C9491 * C9503;
    const double C735 = -(C9502 * C9392 * de) / C9380;
    const double C736 = C9491 * C9502;
    const double C8835 = 2 * C8833;
    const double C79 =
        ((0 * ae) / C8827 - C8833 / C8830) / (2 * C8827) - (0 * be) / C8827;
    const double C3208 = (0 * ae) / C8827 - C8833 / C8830;
    const double C67 = C9487 / C9368;
    const double C65 = C9363 / C9368 - (C9486 * C9475) / C8830;
    const double C66 = C9486 / C8834 - (C9487 * C9475) / C8827;
    const double C3201 = C9486 / C8827;
    const double C1415 = C1027 * C461;
    const double C1553 = C1027 * C557;
    const double C1549 = C1027 * C458;
    const double C1676 = C1027 * C647;
    const double C2821 = C1027 * C745;
    const double C2959 = C1027 * C841;
    const double C2955 = C1027 * C742;
    const double C3084 = C1027 * C931;
    const double C8929 = 2 * C8882;
    const double C1199 =
        (((-4 * C8882) / C8827 -
          (C8861 * (C9423 - (C8861 * 2 * C8882) / C8827) * C8832) / C8827) *
         ae) /
        C8827;
    const double C1200 =
        (-((C9423 - (C8861 * 2 * C8882) / C8827) * C8832) / C8827) /
        (2 * C8827);
    const double C3251 = (-(0 * be) / C8827) / (2 * C8827) -
                         ((C9423 - (C8861 * 2 * C8882) / C8827) * be) / C8827;
    const double C3252 =
        (-(2 * C8882) / C8827) / (2 * C8827) - (0 * be) / C8827;
    const double C3367 =
        -(((-4 * C8882) / C8827 -
           (C8861 * (C9423 - (C8861 * 2 * C8882) / C8827) * C8832) / C8827) *
          be) /
        C8827;
    const double C3368 =
        (-((C9423 - (C8861 * 2 * C8882) / C8827) * C8832) / C8827) /
        (2 * C8827);
    const double C4257 =
        ((0 * ae) / C8827 - C8882 / C8830) / (2 * C8827) - (0 * be) / C8827;
    const double C138 = C124 * C82;
    const double C136 = C124 * C85;
    const double C134 = C124 * C81;
    const double C256 = C124 * C126;
    const double C254 = C124 * C125;
    const double C369 = C124 * C173;
    const double C590 = C124 * C493;
    const double C874 = C124 * C777;
    const double C2174 = C124 * C738;
    const double C2872 = C124 * C742;
    const double C2870 = C124 * C739;
    const double C3125 = C124 * C809;
    const double C8598 = C124 * C2814;
    const double C258 = C248 * C82;
    const double C255 = C248 * C81;
    const double C2296 = C248 * C738;
    const double C3002 = C248 * C739;
    const double C8699 = C248 * C2814;
    const double C1084 = C1077 * C85;
    const double C1080 = C1077 * C81;
    const double C1205 = C1077 * C126;
    const double C1202 = C1077 * C125;
    const double C1327 = C1077 * C173;
    const double C1599 = C1077 * C493;
    const double C1955 = C1077 * C777;
    const double C7775 = C1077 * C742;
    const double C7771 = C1077 * C739;
    const double C8003 = C1077 * C809;
    const double C1082 = C1078 * C454;
    const double C1203 = C1078 * C493;
    const double C7773 = C1078 * C1794;
    const double C4256 =
        (((C9423 - (C8861 * 2 * C8882) / C8827) * ae) / C8827 - C8921 / C8834) /
            (2 * C8827) -
        ((C8861 * ((0 * ae) / C8827 - C8882 / C8830) + C9493) * be) / C8827;
    const double C4220 = C9493 / C9368;
    const double C1029 = C9492 / C8827;
    const double C4218 = C9423 / C9368 - (C9492 * C9484) / C8830;
    const double C4219 = C9492 / C8834 - (C9493 * C9484) / C8827;
    const double C3259 = C3203 * C130;
    const double C3255 = C3203 * C126;
    const double C3374 = C3203 * C250;
    const double C3493 = C3203 * C364;
    const double C5759 = C3203 * C780;
    const double C5755 = C3203 * C777;
    const double C5883 = C3203 * C870;
    const double C6003 = C3203 * C960;
    const double C8959 = 2 * C8894;
    const double C2449 =
        (((-4 * C8894) / C8827 -
          (C8864 * (C9438 - (C8864 * 2 * C8894) / C8827) * C8832) / C8827) *
         ae) /
        C8827;
    const double C2450 =
        (-((C9438 - (C8864 * 2 * C8894) / C8827) * C8832) / C8827) /
        (2 * C8827);
    const double C6150 = (-(0 * be) / C8827) / (2 * C8827) -
                         ((C9438 - (C8864 * 2 * C8894) / C8827) * be) / C8827;
    const double C6151 =
        (-(2 * C8894) / C8827) / (2 * C8827) - (0 * be) / C8827;
    const double C6378 =
        -(((-4 * C8894) / C8827 -
           (C8864 * (C9438 - (C8864 * 2 * C8894) / C8827) * C8832) / C8827) *
          be) /
        C8827;
    const double C6379 =
        (-((C9438 - (C8864 * 2 * C8894) / C8827) * C8832) / C8827) /
        (2 * C8827);
    const double C8128 =
        ((0 * ae) / C8827 - C8894 / C8830) / (2 * C8827) - (0 * be) / C8827;
    const double C185 = C171 * C82;
    const double C183 = C171 * C85;
    const double C181 = C171 * C81;
    const double C299 = C171 * C126;
    const double C411 = C171 * C173;
    const double C409 = C171 * C172;
    const double C709 = C171 * C525;
    const double C993 = C171 * C809;
    const double C1126 = C171 * C454;
    const double C1504 = C171 * C458;
    const double C1502 = C171 * C455;
    const double C1636 = C171 * C493;
    const double C4550 = C171 * C1408;
    const double C413 = C403 * C82;
    const double C410 = C403 * C81;
    const double C1368 = C403 * C454;
    const double C1753 = C403 * C455;
    const double C4748 = C403 * C1408;
    const double C2220 = C2213 * C85;
    const double C2216 = C2213 * C81;
    const double C2335 = C2213 * C126;
    const double C2455 = C2213 * C173;
    const double C2452 = C2213 * C172;
    const double C2779 = C2213 * C525;
    const double C3167 = C2213 * C809;
    const double C5429 = C2213 * C458;
    const double C5425 = C2213 * C455;
    const double C5547 = C2213 * C493;
    const double C2218 = C2214 * C738;
    const double C2453 = C2214 * C809;
    const double C5427 = C2214 * C1794;
    const double C8127 =
        (((C9438 - (C8864 * 2 * C8894) / C8827) * ae) / C8827 - C8951 / C8834) /
            (2 * C8827) -
        ((C8864 * ((0 * ae) / C8827 - C8894 / C8830) + C9495) * be) / C8827;
    const double C8072 = C9495 / C9368;
    const double C2135 = C9494 / C8827;
    const double C8070 = C9438 / C9368 - (C9494 * C9485) / C8830;
    const double C8071 = C9494 / C8834 - (C9495 * C9485) / C8827;
    const double C6158 = C6078 * C177;
    const double C6154 = C6078 * C173;
    const double C6268 = C6078 * C294;
    const double C6385 = C6078 * C405;
    const double C7468 = C6078 * C528;
    const double C7464 = C6078 * C525;
    const double C7580 = C6078 * C618;
    const double C7692 = C6078 * C705;
    const double C8990 = C8989 + C8987;
    const double C4592 = C9363 * C1546;
    const double C5761 = C9493 * C1840;
    const double C7778 = C9493 * C1840;
    const double C5432 = C9495 * C1878;
    const double C7470 = C9495 * C1878;
    const double C5474 = C9363 * C1914;
    const double C5591 = C9363 * C2026;
    const double C8761 = C9363 * C3081;
    const double C4552 = C171 * C1410;
    const double C4590 = C9363 * C1410;
    const double C5431 = C2214 * C1796;
    const double C5472 = C9363 * C1796;
    const double C7777 = C1078 * C1796;
    const double C8600 = C124 * C2816;
    const double C8664 = C9363 * C2816;
    const double C9002 = C8999 * ae;
    const double C1875 = (C9028 * C9014 * C9166 + C9014 * C8999 * ae) / C8827;
    const double C1407 = C8976 * C8979 + C8999 * C9051;
    const double C1793 = C9028 * C9014 * C8999;
    const double C2813 = C8976 * C8979 + C8999 * C9084;
    const double C9006 = C9004 + C8998;
    const double C9223 = C9221 + C8998;
    const double C9270 = C9268 + C8998;
    const double C5927 =
        (ae * (C9034 + C9028 * (C9028 * C9039 + C8998) + C9028 * C8993 * ae) +
         C9014 * (C9064 + ae * C9028 * C9025 +
                  C9028 * (ae * C9025 +
                           C9028 * std::pow(C8982, 5) * bs[5] * C9061))) /
        C8830;
    const double C9005 = C9003 * C8983;
    const double C9056 = C9055 * C8983;
    const double C9089 = C9088 * C8983;
    const double C9224 = C9222 * ae;
    const double C5707 = C9014 * C8979 + C9222 * C9084;
    const double C9271 = C9269 * ae;
    const double C260 = C9423 * C251;
    const double C415 = C9438 * C406;
    const double C9163 = C9162 + C8987;
    const double C141 = C9423 * C131;
    const double C2177 = C9423 * C779;
    const double C2961 = C9487 * C840;
    const double C6866 = C9487 * C840;
    const double C2338 = C9495 * C901;
    const double C6270 = C9495 * C901;
    const double C2413 = C9423 * C959;
    const double C8791 = C9423 * C3123;
    const double C139 = C9423 * C127;
    const double C259 = C124 * C127;
    const double C302 = C171 * C127;
    const double C1211 = C1077 * C127;
    const double C261 = C124 * C128;
    const double C588 = C124 * C491;
    const double C1210 = C1078 * C491;
    const double C589 = C124 * C492;
    const double C1083 = C9493 * C492;
    const double C1208 = C1078 * C492;
    const double C1255 = C171 * C492;
    const double C1597 = C1077 * C492;
    const double C3257 = C9493 * C492;
    const double C872 = C124 * C775;
    const double C873 = C124 * C776;
    const double C1953 = C1077 * C776;
    const double C2175 = C9423 * C776;
    const double C2337 = C2214 * C776;
    const double C3006 = C124 * C2866;
    const double C7894 = C1077 * C2866;
    const double C8599 = C9423 * C2866;
    const double C8701 = C124 * C8593;
    const double C9214 = C9213 + C8987;
    const double C188 = C9438 * C178;
    const double C1129 = C9438 * C527;
    const double C1256 = C9438 * C617;
    const double C1678 = C9487 * C646;
    const double C3807 = C9487 * C646;
    const double C1330 = C9493 * C675;
    const double C3495 = C9493 * C675;
    const double C4655 = C9438 * C1634;
    const double C5550 = C9495 * C1990;
    const double C7582 = C9495 * C1990;
    const double C186 = C9438 * C174;
    const double C372 = C124 * C174;
    const double C414 = C171 * C174;
    const double C2461 = C2213 * C174;
    const double C416 = C171 * C175;
    const double C707 = C171 * C523;
    const double C708 = C171 * C524;
    const double C1127 = C9438 * C524;
    const double C1329 = C1078 * C524;
    const double C2777 = C2213 * C524;
    const double C991 = C171 * C807;
    const double C2460 = C2214 * C807;
    const double C992 = C171 * C808;
    const double C2219 = C9495 * C808;
    const double C2412 = C124 * C808;
    const double C2458 = C2214 * C808;
    const double C3165 = C2213 * C808;
    const double C6156 = C9495 * C808;
    const double C1756 = C171 * C1498;
    const double C4551 = C9438 * C1498;
    const double C5667 = C2213 * C1498;
    const double C2101 = C171 * C1876;
    const double C2778 = C2214 * C1876;
    const double C5428 = C9495 * C1876;
    const double C6044 = C2213 * C1876;
    const double C7466 = C9495 * C1876;
    const double C8005 = C1078 * C1876;
    const double C4750 = C171 * C4545;
    const double C5007 = C171 * C4839;
    const double C5666 = C2214 * C4839;
    const double C3005 = C124 * C2865;
    const double C1755 = C171 * C1497;
    const double C8836 = C8828 * C8835;
    const double C1034 = (-C8835 / C8827) / (2 * C8827) - (0 * be) / C8827;
    const double C4222 = -C8835 / C8827;
    const double C3211 = C3208 * C85;
    const double C3692 = C3208 * C492;
    const double C3688 = C3208 * C454;
    const double C3806 = C3208 * C524;
    const double C6865 = C3208 * C776;
    const double C6861 = C3208 * C738;
    const double C6977 = C3208 * C808;
    const double C3569 = C3201 * C461;
    const double C3691 = C3201 * C557;
    const double C3687 = C3201 * C458;
    const double C3805 = C3201 * C647;
    const double C6742 = C3201 * C745;
    const double C6864 = C3201 * C841;
    const double C6860 = C3201 * C742;
    const double C6976 = C3201 * C931;
    const double C8930 = C8861 * C8929;
    const double C1204 = C1199 * C81;
    const double C7889 = C1199 * C739;
    const double C1207 = C1200 * C454;
    const double C7891 = C1200 * C1794;
    const double C3258 = C3251 * C85;
    const double C3254 = C3251 * C81;
    const double C3379 = C3251 * C127;
    const double C3373 = C3251 * C126;
    const double C3370 = C3251 * C125;
    const double C3492 = C3251 * C173;
    const double C3735 = C3251 * C493;
    const double C3733 = C3251 * C492;
    const double C4055 = C3251 * C777;
    const double C4053 = C3251 * C776;
    const double C5758 = C3251 * C742;
    const double C5754 = C3251 * C739;
    const double C5887 = C3251 * C2866;
    const double C6002 = C3251 * C809;
    const double C3256 = C3252 * C454;
    const double C3378 = C3252 * C491;
    const double C3376 = C3252 * C492;
    const double C3371 = C3252 * C493;
    const double C3494 = C3252 * C524;
    const double C5760 = C3252 * C1796;
    const double C5756 = C3252 * C1794;
    const double C6004 = C3252 * C1876;
    const double C3372 = C3367 * C81;
    const double C5882 = C3367 * C739;
    const double C3375 = C3368 * C454;
    const double C5884 = C3368 * C1794;
    const double C143 = C136 + C137;
    const double C142 = C134 + C135;
    const double C374 = C369 + C370;
    const double C2877 = C2872 + C2873;
    const double C2876 = C2870 + C2871;
    const double C3127 = C3125 + C3126;
    const double C262 = C255 + C256;
    const double C3007 = C3002 + C874;
    const double C4344 = C4256 * C492;
    const double C4341 = C4256 * C493;
    const double C1085 = C1029 * C130;
    const double C1081 = C1029 * C126;
    const double C1206 = C1029 * C250;
    const double C1328 = C1029 * C364;
    const double C7776 = C1029 * C780;
    const double C7772 = C1029 * C777;
    const double C7890 = C1029 * C870;
    const double C8004 = C1029 * C960;
    const double C4255 =
        (((0 - (C8861 * C8921) / C8827) * ae) / C8827 - (0 * be) / C8834) /
            (2 * C8827) -
        ((C8861 * (((C9423 - (C8861 * 2 * C8882) / C8827) * ae) / C8827 -
                   C8921 / C8834) +
          C1029) *
         be) /
            C8827 +
        (0 * ae) / C8827 - C8882 / C8830;
    const double C8960 = C8864 * C8959;
    const double C2454 = C2449 * C81;
    const double C5662 = C2449 * C455;
    const double C2457 = C2450 * C738;
    const double C5664 = C2450 * C1794;
    const double C6157 = C6150 * C85;
    const double C6153 = C6150 * C81;
    const double C6267 = C6150 * C126;
    const double C6390 = C6150 * C174;
    const double C6384 = C6150 * C173;
    const double C6381 = C6150 * C172;
    const double C6706 = C6150 * C525;
    const double C6704 = C6150 * C524;
    const double C7052 = C6150 * C809;
    const double C7050 = C6150 * C808;
    const double C7467 = C6150 * C458;
    const double C7463 = C6150 * C455;
    const double C7579 = C6150 * C493;
    const double C7696 = C6150 * C1498;
    const double C8044 = C6150 * C1876;
    const double C6155 = C6151 * C738;
    const double C6269 = C6151 * C776;
    const double C6389 = C6151 * C807;
    const double C6387 = C6151 * C808;
    const double C6382 = C6151 * C809;
    const double C6705 = C6151 * C1876;
    const double C7469 = C6151 * C1796;
    const double C7465 = C6151 * C1794;
    const double C7695 = C6151 * C4839;
    const double C6383 = C6378 * C81;
    const double C7691 = C6378 * C455;
    const double C6386 = C6379 * C738;
    const double C7693 = C6379 * C1794;
    const double C190 = C183 + C184;
    const double C189 = C181 + C182;
    const double C304 = C299 + C300;
    const double C1509 = C1504 + C1505;
    const double C1508 = C1502 + C1503;
    const double C1638 = C1636 + C1637;
    const double C417 = C410 + C411;
    const double C1757 = C1753 + C709;
    const double C8293 = C8127 * C808;
    const double C8290 = C8127 * C809;
    const double C8531 = C8127 * C1876;
    const double C2221 = C2135 * C177;
    const double C2217 = C2135 * C173;
    const double C2336 = C2135 * C294;
    const double C2456 = C2135 * C405;
    const double C5430 = C2135 * C528;
    const double C5426 = C2135 * C525;
    const double C5548 = C2135 * C618;
    const double C5663 = C2135 * C705;
    const double C8126 =
        (((0 - (C8864 * C8951) / C8827) * ae) / C8827 - (0 * be) / C8834) /
            (2 * C8827) -
        ((C8864 * (((C9438 - (C8864 * 2 * C8894) / C8827) * ae) / C8827 -
                   C8951 / C8834) +
          C2135) *
         be) /
            C8827 +
        (0 * ae) / C8827 - C8894 / C8830;
    const double C8991 = ae * C8990;
    const double C86 =
        (C8977 * C8975 * C8984 + C8976 * C8990 + C8976 * C8979 * ae) / C8827;
    const double C457 = (C9014 * C8990) / C8827;
    const double C741 = (C9028 * C8990) / C8827;
    const double C4555 = C4552 + C4553;
    const double C5436 = C5431 + C5432;
    const double C7782 = C7777 + C7778;
    const double C8603 = C8600 + C8601;
    const double C9159 = C9158 + C9002;
    const double C9210 = C9209 + C9002;
    const double C1989 =
        (ae * (C9028 * C9166 + C9002) +
         C9014 * (ae * C9157 +
                  C9028 * C8976 * std::pow(C8982, 5) * bs[5] * C9061)) /
        C8830;
    const double C2100 = C171 * C1875;
    const double C2776 = C2214 * C1875;
    const double C6703 = C6151 * C1875;
    const double C9008 = ae * C9006;
    const double C9007 = C8976 * C9006;
    const double C9091 = C9014 * C9006;
    const double C9120 = C9028 * C9006;
    const double C1409 = (C8990 + C9006 * C9051) / C8827;
    const double C2815 = (C8990 + C9006 * C9084) / C8827;
    const double C9226 = ae * C9223;
    const double C9225 = C9014 * C9223;
    const double C9239 = C9028 * C9223;
    const double C9273 = ae * C9270;
    const double C9272 = C9028 * C9270;
    const double C460 =
        (2 * ae * C9014 * C8988 + C8976 * C9014 * C9005) / C8830;
    const double C744 =
        (2 * ae * C9028 * C8988 + C8976 * C9028 * C9005) / C8830;
    const double C1411 =
        (2 * ae * (C8988 + C9001 * C9051) +
         C8976 * (C9005 + (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9051)) /
        C8830;
    const double C1412 =
        ((C8979 + C8980 * C8981 * C8985) * C8983 + C9005 * C9051) / C8830;
    const double C1798 = (C9028 * C9014 * C9005) / C8830;
    const double C2817 =
        (2 * ae * (C8988 + C9001 * C9084) +
         C8976 * (C9005 + (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9084)) /
        C8830;
    const double C2818 =
        ((C8979 + C8980 * C8981 * C8985) * C8983 + C9005 * C9084) / C8830;
    const double C4477 =
        (2 * C9014 * C9005 +
         C9014 * (C9005 + (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9051)) /
        C8830;
    const double C4781 =
        (C9028 * (C9005 + (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9051)) /
        C8830;
    const double C5709 =
        (C9014 * C9005 +
         C9014 * (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) * C8983 *
             C9084) /
        C8830;
    const double C8560 =
        (2 * C9028 * C9005 +
         C9028 * (C9005 + (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9084)) /
        C8830;
    const double C252 =
        (2 * C8976 * C9056 +
         C8976 * (C9056 + (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C8980)) /
        C8830;
    const double C584 =
        (2 * ae * (C9020 + C9025 * C8980) +
         C9014 * (C9056 + (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C8980)) /
        C8830;
    const double C585 =
        (2 * ae * C8976 * C9020 + C9014 * C8976 * C9056) / C8830;
    const double C868 =
        (C9028 * (C9056 + (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C8980)) /
        C8830;
    const double C869 = (C9028 * C8976 * C9056) / C8830;
    const double C1950 =
        (2 * ae * C9028 * C9020 + C9014 * C9028 * C9056) / C8830;
    const double C2999 =
        (C8976 * C9056 +
         C8976 * (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) * C8983 *
             C9084) /
        C8830;
    const double C3000 =
        ((C8979 + C9051 * C8981 * C8985) * C8983 + C9056 * C9084) / C8830;
    const double C5880 =
        (2 * ae * (C9020 + C9025 * C9084) +
         C9014 * (C9056 + (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9084)) /
        C8830;
    const double C8696 =
        (2 * C9028 * C9056 +
         C9028 * (C9056 + (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9084)) /
        C8830;
    const double C407 =
        (2 * C8976 * C9089 +
         C8976 * (C9089 + (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C8980)) /
        C8830;
    const double C703 =
        (C9014 * (C9089 + (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C8980)) /
        C8830;
    const double C704 = (C9014 * C8976 * C9089) / C8830;
    const double C987 =
        (2 * ae * (C9034 + C9039 * C8980) +
         C9028 * (C9089 + (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C8980)) /
        C8830;
    const double C988 =
        (2 * ae * C8976 * C9034 + C9028 * C8976 * C9089) / C8830;
    const double C1750 =
        (C8976 * C9089 +
         C8976 * (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) * C8983 *
             C9051) /
        C8830;
    const double C1751 =
        ((C8979 + C9084 * C8981 * C8985) * C8983 + C9089 * C9051) / C8830;
    const double C2098 =
        (2 * ae * C9014 * C9034 + C9028 * C9014 * C9089) / C8830;
    const double C4746 =
        (2 * C9014 * C9089 +
         C9014 * (C9089 + (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9051)) /
        C8830;
    const double C5005 =
        (2 * ae * (C9034 + C9039 * C9051) +
         C9028 * (C9089 + (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                              C8983 * C9051)) /
        C8830;
    const double C9257 = C9256 + C9224;
    const double C4924 =
        (ae * C9020 + C9028 * C9064 + ae * (C9028 * C9014 * C9039 + C9224) +
         C9014 * (ae * (C9028 * C9039 + C8998) +
                  C9014 * (ae * C9025 +
                           C9028 * std::pow(C8982, 5) * bs[5] * C9061))) /
        C8830;
    const double C9164 = ae * C9163;
    const double C1460 =
        (C8977 * C8975 * C9017 + C9014 * C9163 + C9014 * C8979 * ae) / C8827;
    const double C1838 = (C9028 * C9163) / C8827;
    const double C5751 = (C9163 + C9223 * C9084) / C8827;
    const double C144 = C138 + C139;
    const double C263 = C258 + C259;
    const double C305 = C302 + C303;
    const double C1089 = C1082 + C1083;
    const double C2298 = C2296 + C873;
    const double C2178 = C2174 + C2175;
    const double C2340 = C2337 + C2338;
    const double C8702 = C8699 + C3006;
    const double C8602 = C8598 + C8599;
    const double C9215 = ae * C9214;
    const double C2914 =
        (C8977 * C8975 * C9031 + C9028 * C9214 + C9028 * C8979 * ae) / C8827;
    const double C1257 = C1255 + C1256;
    const double C191 = C185 + C186;
    const double C375 = C372 + C373;
    const double C418 = C413 + C414;
    const double C1370 = C1368 + C708;
    const double C1130 = C1126 + C1127;
    const double C1332 = C1329 + C1330;
    const double C2225 = C2218 + C2219;
    const double C2414 = C2412 + C2413;
    const double C4751 = C4748 + C1756;
    const double C4554 = C4550 + C4551;
    const double C5434 = C5427 + C5428;
    const double C8837 = C8836 / C8827;
    const double C1037 = C1034 * C85;
    const double C1554 = C1034 * C492;
    const double C1550 = C1034 * C454;
    const double C1677 = C1034 * C524;
    const double C2960 = C1034 * C776;
    const double C2956 = C1034 * C738;
    const double C3085 = C1034 * C808;
    const double C4229 = C4222 * C85;
    const double C4226 = C4222 * C1410;
    const double C4225 = C4222 * C458;
    const double C4224 = C4222 * C84;
    const double C4483 = C4222 * C4476;
    const double C4589 = C4222 * C1408;
    const double C4587 = C4222 * C493;
    const double C4585 = C4222 * C455;
    const double C4688 = C4222 * C1498;
    const double C4685 = C4222 * C525;
    const double C4785 = C4222 * C742;
    const double C4784 = C4222 * C1796;
    const double C4783 = C4222 * C4780;
    const double C5471 = C4222 * C1794;
    const double C5590 = C4222 * C1876;
    const double C5714 = C4222 * C2816;
    const double C5713 = C4222 * C5708;
    const double C5839 = C4222 * C777;
    const double C5837 = C4222 * C739;
    const double C5964 = C4222 * C809;
    const double C8564 = C4222 * C8559;
    const double C8665 = C4222 * C2866;
    const double C8663 = C4222 * C2814;
    const double C3809 = C3806 + C3807;
    const double C6870 = C6865 + C6866;
    const double C8931 = C8930 / C8827;
    const double C1212 = C1204 + C1205;
    const double C7895 = C7889 + C1955;
    const double C1213 = C1207 + C1208;
    const double C3264 = C3258 + C3259;
    const double C3262 = C3254 + C3255;
    const double C3496 = C3492 + C3493;
    const double C5764 = C5758 + C5759;
    const double C5762 = C5754 + C5755;
    const double C6006 = C6002 + C6003;
    const double C3263 = C3256 + C3257;
    const double C3497 = C3494 + C3495;
    const double C5765 = C5760 + C5761;
    const double C3380 = C3372 + C3373;
    const double C5888 = C5882 + C4055;
    const double C3381 = C3375 + C3376;
    const double C368 = C142 * C171;
    const double C2409 = C142 * C2213;
    const double C6341 = C142 * C6150;
    const double C376 = C374 * C9438;
    const double C2410 = C374 * C2135;
    const double C6342 = C374 * C6078;
    const double C2879 = C2877 * C1027;
    const double C6788 = C2877 * C3201;
    const double C8597 = C2877 * C9363;
    const double C8596 = C2876 * C4222;
    const double C264 = C262 + C256;
    const double C3008 = C3007 + C874;
    const double C1090 = C1084 + C1085;
    const double C1088 = C1080 + C1081;
    const double C1331 = C1327 + C1328;
    const double C7781 = C7775 + C7776;
    const double C7779 = C7771 + C7772;
    const double C8007 = C8003 + C8004;
    const double C4345 = C4255 * C126;
    const double C4340 = C4255 * C125;
    const double C4626 = C4255 * C493;
    const double C4898 = C4255 * C777;
    const double C8961 = C8960 / C8827;
    const double C2462 = C2454 + C2455;
    const double C5668 = C5662 + C2779;
    const double C2463 = C2457 + C2458;
    const double C5669 = C5664 + C2778;
    const double C6163 = C6157 + C6158;
    const double C6161 = C6153 + C6154;
    const double C6271 = C6267 + C6268;
    const double C7473 = C7467 + C7468;
    const double C7471 = C7463 + C7464;
    const double C7583 = C7579 + C7580;
    const double C6162 = C6155 + C6156;
    const double C6272 = C6269 + C6270;
    const double C7474 = C7469 + C7470;
    const double C7472 = C7465 + C7466;
    const double C6391 = C6383 + C6384;
    const double C7697 = C7691 + C6706;
    const double C6392 = C6386 + C6387;
    const double C7698 = C7693 + C6705;
    const double C298 = C189 * C124;
    const double C1252 = C189 * C1077;
    const double C3420 = C189 * C3251;
    const double C306 = C304 * C9423;
    const double C1253 = C304 * C1029;
    const double C3421 = C304 * C3203;
    const double C1511 = C1509 * C1027;
    const double C3649 = C1509 * C3201;
    const double C4549 = C1509 * C9363;
    const double C4548 = C1508 * C4222;
    const double C419 = C417 + C411;
    const double C1758 = C1757 + C709;
    const double C2226 = C2220 + C2221;
    const double C2224 = C2216 + C2217;
    const double C2339 = C2335 + C2336;
    const double C5435 = C5429 + C5430;
    const double C5433 = C5425 + C5426;
    const double C5551 = C5547 + C5548;
    const double C8294 = C8126 * C173;
    const double C8289 = C8126 * C172;
    const double C8532 = C8126 * C525;
    const double C8822 = C8126 * C809;
    const double C90 =
        ((C8979 + C8980 * C8981 * C8985) * C8983 + C8991 + C8991 +
         C8976 * (2 * ae * C8988 +
                  C8976 * (C8981 * C8985 + C8980 * bs[4] * std::pow(C8974, 4)) *
                      C8983)) /
        C8830;
    const double C495 = (C8991 + C9014 * (ae * C9020 + C8976 * C9024)) / C8830;
    const double C556 = (C8991 + C9014 * (ae * C9020 + C8976 * C9047)) / C8830;
    const double C811 = (C8991 + C9028 * (ae * C9034 + C8976 * C9038)) / C8830;
    const double C930 = (C8991 + C9028 * (ae * C9034 + C8976 * C9072)) / C8830;
    const double C95 = C79 * C86;
    const double C140 = C124 * C86;
    const double C187 = C171 * C86;
    const double C1042 = C1034 * C86;
    const double C3216 = C3208 * C86;
    const double C1039 = C1034 * C457;
    const double C1086 = C1078 * C457;
    const double C1128 = C171 * C457;
    const double C1551 = C9487 * C457;
    const double C3213 = C3208 * C457;
    const double C3260 = C3252 * C457;
    const double C3689 = C9487 * C457;
    const double C4228 = C4222 * C457;
    const double C1802 = C1034 * C741;
    const double C2176 = C124 * C741;
    const double C2222 = C2214 * C741;
    const double C2957 = C9487 * C741;
    const double C3914 = C3208 * C741;
    const double C5043 = C4222 * C741;
    const double C6159 = C6151 * C741;
    const double C6862 = C9487 * C741;
    const double C4557 = C4555 * C9363;
    const double C8605 = C8603 * C9363;
    const double C9160 = ae * C9159;
    const double C1459 =
        (C8976 * C9020 + C9014 * C9159 + C9014 * C8999 * ae) / C8827;
    const double C1837 = (C9028 * C9159) / C8827;
    const double C9211 = ae * C9210;
    const double C2913 =
        (C8976 * C9034 + C9028 * C9210 + C9028 * C8999 * ae) / C8827;
    const double C1839 =
        (C9028 * (C9008 + C9014 * (ae * C9025 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9018))) /
        C8830;
    const double C9009 = C8988 + C9007;
    const double C9092 = ae * C9091;
    const double C1795 = (C9028 * C9091) / C8827;
    const double C9121 = ae * C9120;
    const double C1418 = C1034 * C1409;
    const double C3572 = C3208 * C1409;
    const double C4227 = C4222 * C1409;
    const double C2824 = C1034 * C2815;
    const double C6745 = C3208 * C2815;
    const double C8074 = C4222 * C2815;
    const double C9227 = C9020 + C9225;
    const double C9240 = ae * C9239;
    const double C9274 = C9034 + C9272;
    const double C1417 = C9487 * C460;
    const double C3571 = C9487 * C460;
    const double C2823 = C9487 * C744;
    const double C6744 = C9487 * C744;
    const double C4482 = C9363 * C1412;
    const double C5352 = C9363 * C1798;
    const double C8563 = C9363 * C2818;
    const double C1209 = C9493 * C585;
    const double C3377 = C9493 * C585;
    const double C2297 = C9423 * C869;
    const double C5885 = C9493 * C1950;
    const double C7892 = C9493 * C1950;
    const double C8700 = C9423 * C3000;
    const double C1369 = C9438 * C704;
    const double C2459 = C9495 * C988;
    const double C6388 = C9495 * C988;
    const double C4749 = C9438 * C1751;
    const double C5665 = C9495 * C2098;
    const double C7694 = C9495 * C2098;
    const double C9258 = ae * C9257;
    const double C5799 =
        (C9014 * C9034 + C9028 * C9257 + C9028 * C9222 * ae) / C8827;
    const double C1594 = ((C8979 + C9051 * C8981 * C8985) * C8983 + C9164 +
                          C9164 + C9014 * (2 * ae * C9020 + C9014 * C9056)) /
                         C8830;
    const double C2062 = (C9164 + C9028 * (ae * C9034 + C9014 * C9080)) / C8830;
    const double C1598 = C1078 * C1460;
    const double C3734 = C3252 * C1460;
    const double C4342 = C4257 * C1460;
    const double C4591 = C4222 * C1460;
    const double C4625 = C4256 * C1460;
    const double C4654 = C171 * C1460;
    const double C1954 = C1078 * C1838;
    const double C2639 = C124 * C1838;
    const double C4054 = C3252 * C1838;
    const double C4897 = C4256 * C1838;
    const double C5473 = C4222 * C1838;
    const double C5512 = C3251 * C1838;
    const double C5549 = C2214 * C1838;
    const double C5757 = C9493 * C1838;
    const double C7544 = C1077 * C1838;
    const double C7581 = C6151 * C1838;
    const double C7774 = C9493 * C1838;
    const double C5886 = C3252 * C5751;
    const double C7893 = C1078 * C5751;
    const double C8425 = C124 * C5751;
    const double C371 = C144 * C171;
    const double C265 = C263 + C259;
    const double C307 = C305 * C9423;
    const double C2299 = C2298 + C873;
    const double C2411 = C2178 * C2214;
    const double C2874 = C2178 * C1034;
    const double C6343 = C2178 * C6151;
    const double C6789 = C2178 * C3208;
    const double C8703 = C8702 + C3006;
    const double C8604 = C8602 * C4222;
    const double C3162 = ((C8979 + C9084 * C8981 * C8985) * C8983 + C9215 +
                          C9215 + C9028 * (2 * ae * C9034 + C9028 * C9089)) /
                         C8830;
    const double C3166 = C2214 * C2914;
    const double C7051 = C6151 * C2914;
    const double C8291 = C8128 * C2914;
    const double C8760 = C4222 * C2914;
    const double C8790 = C124 * C2914;
    const double C8821 = C8127 * C2914;
    const double C1258 = C1257 * C9493;
    const double C3423 = C1257 * C9493;
    const double C301 = C191 * C124;
    const double C377 = C375 * C9438;
    const double C420 = C418 + C414;
    const double C1371 = C1370 + C708;
    const double C1254 = C1130 * C1078;
    const double C1506 = C1130 * C1034;
    const double C3422 = C1130 * C3252;
    const double C3650 = C1130 * C3208;
    const double C2415 = C2414 * C9495;
    const double C6344 = C2414 * C9495;
    const double C4752 = C4751 + C1756;
    const double C4556 = C4554 * C4222;
    const double C8838 = C9363 - C8837;
    const double C1680 = C1677 + C1678;
    const double C2965 = C2960 + C2961;
    const double C4595 = C4589 + C4590;
    const double C4594 = C4587 + C4588;
    const double C4593 = C4585 + C4586;
    const double C4691 = C4688 + C4689;
    const double C4690 = C4685 + C4686;
    const double C5475 = C5471 + C5472;
    const double C5592 = C5590 + C5591;
    const double C5844 = C5839 + C5840;
    const double C5843 = C5837 + C5838;
    const double C5966 = C5964 + C5965;
    const double C8668 = C8665 + C8666;
    const double C8667 = C8663 + C8664;
    const double C8932 = C9423 - C8931;
    const double C1214 = C1212 + C1205;
    const double C7897 = C7895 + C1955;
    const double C1215 = C1213 + C1208;
    const double C3382 = C3380 + C3373;
    const double C5890 = C5888 + C4055;
    const double C3383 = C3381 + C3376;
    const double C266 = C264 + C257;
    const double C3009 = C3008 + C3003;
    const double C8962 = C9438 - C8961;
    const double C2464 = C2462 + C2455;
    const double C5670 = C5668 + C2779;
    const double C2465 = C2463 + C2458;
    const double C5671 = C5669 + C2778;
    const double C6393 = C6391 + C6384;
    const double C7699 = C7697 + C6706;
    const double C6394 = C6392 + C6387;
    const double C7700 = C7698 + C6705;
    const double C421 = C419 + C412;
    const double C1759 = C1758 + C1754;
    const double C1087 = C9493 * C495;
    const double C3261 = C9493 * C495;
    const double C1555 = C9487 * C556;
    const double C3693 = C9487 * C556;
    const double C2223 = C9495 * C811;
    const double C6160 = C9495 * C811;
    const double C3086 = C9487 * C930;
    const double C6978 = C9487 * C930;
    const double C145 = C140 + C141;
    const double C192 = C187 + C188;
    const double C1131 = C1128 + C1129;
    const double C1557 = C1550 + C1551;
    const double C3695 = C3688 + C3689;
    const double C2179 = C2176 + C2177;
    const double C2963 = C2956 + C2957;
    const double C6868 = C6861 + C6862;
    const double C1593 =
        (C8976 * C9056 + C9160 + C9160 +
         C9014 * (2 * ae * C9157 +
                  C9014 * C8976 *
                      (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                      C8983)) /
        C8830;
    const double C2061 =
        (C9160 + C9028 * (ae * C9166 +
                          C9014 * C8976 * std::pow(C8982, 5) * bs[5] * C9077)) /
        C8830;
    const double C1596 = C1078 * C1459;
    const double C3732 = C3252 * C1459;
    const double C4343 = C4257 * C1459;
    const double C1952 = C1078 * C1837;
    const double C2638 = C124 * C1837;
    const double C4052 = C3252 * C1837;
    const double C3161 =
        (C8976 * C9089 + C9211 + C9211 +
         C9028 * (2 * ae * C9166 +
                  C9028 * C8976 *
                      (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                      C8983)) /
        C8830;
    const double C3164 = C2214 * C2913;
    const double C7049 = C6151 * C2913;
    const double C8292 = C8128 * C2913;
    const double C9010 = C9009 + C9002;
    const double C459 =
        (C9014 * C9005 + C9092 + C9092 +
         C8976 * (2 * ae * C9014 * C9001 +
                  C8976 * C9014 *
                      (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                      C8983)) /
        C8830;
    const double C1461 =
        (ae * C9020 + C8976 * C9024 + C9092 +
         C9014 * (C9008 + C9014 * (ae * C9025 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9018))) /
        C8830;
    const double C1545 =
        (ae * C9020 + C8976 * C9047 + C9092 +
         C9014 * (C9008 + C9014 * (ae * C9025 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9044))) /
        C8830;
    const double C1877 = (C9092 + C9028 * C9014 *
                                      (ae * C9039 + C8976 * std::pow(C8982, 5) *
                                                        bs[5] * C9032)) /
                         C8830;
    const double C2025 = (C9092 + C9028 * C9014 *
                                      (ae * C9039 + C8976 * std::pow(C8982, 5) *
                                                        bs[5] * C9069)) /
                         C8830;
    const double C1800 = C1034 * C1795;
    const double C3912 = C3208 * C1795;
    const double C5042 = C4222 * C1795;
    const double C743 =
        (C9028 * C9005 + C9121 + C9121 +
         C8976 * (2 * ae * C9028 * C9001 +
                  C8976 * C9028 *
                      (C8994 * C8995 + C8980 * bs[5] * std::pow(C8982, 5)) *
                      C8983)) /
        C8830;
    const double C1913 = (C9121 + C9014 * C9028 *
                                      (ae * C9025 + C8976 * std::pow(C8982, 5) *
                                                        bs[5] * C9044)) /
                         C8830;
    const double C2915 =
        (ae * C9034 + C8976 * C9038 + C9121 +
         C9028 * (C9008 + C9028 * (ae * C9039 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9032))) /
        C8830;
    const double C3080 =
        (ae * C9034 + C8976 * C9072 + C9121 +
         C9028 * (C9008 + C9028 * (ae * C9039 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9069))) /
        C8830;
    const double C9228 = C9227 + C9224;
    const double C4894 =
        (C9028 * C9056 + C9240 + C9240 +
         C9014 * (2 * ae * C9028 * C9025 +
                  C9014 * C9028 *
                      (C8994 * C8995 + C9051 * bs[5] * std::pow(C8982, 5)) *
                      C8983)) /
        C8830;
    const double C6000 =
        (ae * C9034 + C9014 * C9080 + C9240 +
         C9028 * (C9226 + C9028 * (ae * C9039 + C9014 * std::pow(C8982, 5) *
                                                    bs[5] * C9077))) /
        C8830;
    const double C9275 = C9274 + C9271;
    const double C6041 =
        (C9014 * C9089 + C9258 + C9258 +
         C9028 * (2 * ae * C9255 +
                  C9028 * C9014 *
                      (C8994 * C8995 + C9084 * bs[5] * std::pow(C8982, 5)) *
                      C8983)) /
        C8830;
    const double C6043 = C2214 * C5799;
    const double C8043 = C6151 * C5799;
    const double C8530 = C8128 * C5799;
    const double C6005 = C9493 * C2062;
    const double C8006 = C9493 * C2062;
    const double C4596 = C4591 + C4592;
    const double C4656 = C4654 + C4655;
    const double C7896 = C7891 + C1954;
    const double C5889 = C5884 + C4054;
    const double C5476 = C5473 + C5474;
    const double C5552 = C5549 + C5550;
    const double C5763 = C5756 + C5757;
    const double C7584 = C7581 + C7582;
    const double C7780 = C7773 + C7774;
    const double C267 = C265 + C260;
    const double C2300 = C2299 + C2297;
    const double C8704 = C8703 + C8700;
    const double C8762 = C8760 + C8761;
    const double C8792 = C8790 + C8791;
    const double C422 = C420 + C415;
    const double C1372 = C1371 + C1369;
    const double C4753 = C4752 + C4749;
    const double C8839 = C8838 * C8832;
    const double C75 =
        (((0 - (C8828 * C8826) / C8827) * ae) / C8827 - (0 * be) / C8834) /
            (2 * C8827) -
        ((C8828 * ((C8838 * ae) / C8827 - C8826 / C8834) + C3201) * be) /
            C8827 +
        (0 * ae) / C8827 - C8833 / C8830;
    const double C77 =
        ((C8838 * ae) / C8827 - C8826 / C8834) / (2 * C8827) -
        ((C8828 * ((0 * ae) / C8827 - C8833 / C8830) + C9487) * be) / C8827;
    const double C1032 = (-C8826 / C8827) / (2 * C8827) - (C8838 * be) / C8827;
    const double C3206 = (C8838 * ae) / C8827 - C8826 / C8834;
    const double C4687 = C4595 * C171;
    const double C4684 = C4593 * C171;
    const double C5587 = C4593 * C2213;
    const double C7619 = C4593 * C6150;
    const double C4693 = C4691 * C9438;
    const double C4692 = C4690 * C9438;
    const double C5588 = C4690 * C2135;
    const double C7620 = C4690 * C6078;
    const double C5589 = C5475 * C2214;
    const double C5841 = C5475 * C3252;
    const double C7621 = C5475 * C6151;
    const double C7853 = C5475 * C1078;
    const double C5593 = C5592 * C9495;
    const double C7622 = C5592 * C9495;
    const double C5846 = C5844 * C3203;
    const double C7852 = C5844 * C1029;
    const double C8662 = C5844 * C9423;
    const double C5845 = C5843 * C3251;
    const double C7851 = C5843 * C1077;
    const double C8661 = C5843 * C124;
    const double C8670 = C8668 * C9423;
    const double C8669 = C8667 * C124;
    const double C8933 = C8932 * C8832;
    const double C1216 = C1214 + C1206;
    const double C7899 = C7897 + C7890;
    const double C1217 = C1215 + C1209;
    const double C3384 = C3382 + C3374;
    const double C5892 = C5890 + C5883;
    const double C3385 = C3383 + C3377;
    const double C3010 = C3009 * C1027;
    const double C6905 = C3009 * C3201;
    const double C8698 = C3009 * C9363;
    const double C8963 = C8962 * C8832;
    const double C2466 = C2464 + C2456;
    const double C5672 = C5670 + C5663;
    const double C2467 = C2465 + C2459;
    const double C5673 = C5671 + C5665;
    const double C6395 = C6393 + C6385;
    const double C7701 = C7699 + C7692;
    const double C6396 = C6394 + C6388;
    const double C7702 = C7700 + C7694;
    const double C423 = C421 * C9423;
    const double C1367 = C421 * C1029;
    const double C3532 = C421 * C3203;
    const double C1091 = C1086 + C1087;
    const double C3265 = C3260 + C3261;
    const double C1559 = C1554 + C1555;
    const double C3697 = C3692 + C3693;
    const double C2227 = C2222 + C2223;
    const double C6164 = C6159 + C6160;
    const double C3088 = C3085 + C3086;
    const double C6980 = C6977 + C6978;
    const double C1507 = C1131 * C9487;
    const double C3651 = C1131 * C9487;
    const double C2875 = C2179 * C9487;
    const double C6790 = C2179 * C9487;
    const double C9011 = ae * C9010;
    const double C87 =
        (2 * C8990 + C8976 * C9010 + (C8979 + C8993 * C8980) * ae) / C8827;
    const double C456 = (C9014 * C9010) / C8827;
    const double C740 = (C9028 * C9010) / C8827;
    const double C9229 = ae * C9228;
    const double C4517 =
        (2 * C9163 + C9014 * C9228 + (C8979 + C8993 * C9051) * ae) / C8827;
    const double C4811 = (C9028 * C9228) / C8827;
    const double C9276 = ae * C9275;
    const double C8631 =
        (2 * C9214 + C9028 * C9275 + (C8979 + C8993 * C9084) * ae) / C8827;
    const double C6007 = C6004 + C6005;
    const double C8008 = C8005 + C8006;
    const double C7898 = C7896 + C1954;
    const double C5891 = C5889 + C4054;
    const double C5842 = C5476 * C9493;
    const double C7854 = C5476 * C9493;
    const double C3004 = C2300 * C9487;
    const double C6906 = C2300 * C9487;
    const double C8705 = C8704 * C9363;
    const double C424 = C422 * C9423;
    const double C1373 = C1372 * C9493;
    const double C3533 = C1372 * C9493;
    const double C8847 = C8828 * C8839;
    const double C74 =
        (ae * -2 * C8826) / (C8830 * 2 * C8827) -
        (((C8828 * ((-4 * C8833) / C8827 - (C8828 * C8839) / C8827) * ae) /
              C8827 +
          2 * ((C8838 * ae) / C8827 - C8826 / C8834)) *
         be) /
            C8827 -
        C8839 / C8834;
    const double C78 = (-C8839 / C8827) / (4 * C8830);
    const double C1033 = (-C8839 / C8827) / (2 * C8827);
    const double C3207 = (-C8839 / C8827) / (2 * C8827);
    const double C4221 = -C8839 / C8827;
    const double C98 = C75 * C85;
    const double C93 = C75 * C84;
    const double C465 = C75 * C458;
    const double C749 = C75 * C742;
    const double C97 = C77 * C86;
    const double C94 = C77 * C85;
    const double C464 = C77 * C457;
    const double C748 = C77 * C741;
    const double C1043 = C1032 * C85;
    const double C1041 = C1032 * C457;
    const double C1038 = C1032 * C458;
    const double C1036 = C1032 * C84;
    const double C1419 = C1032 * C1410;
    const double C1510 = C1508 * C1032;
    const double C1552 = C1032 * C493;
    const double C1548 = C1032 * C455;
    const double C1675 = C1032 * C525;
    const double C1803 = C1032 * C742;
    const double C1801 = C1032 * C1796;
    const double C2139 = C1032 * C741;
    const double C2825 = C1032 * C2816;
    const double C2878 = C2876 * C1032;
    const double C2958 = C1032 * C777;
    const double C2954 = C1032 * C739;
    const double C3083 = C1032 * C809;
    const double C3217 = C3206 * C85;
    const double C3215 = C3206 * C457;
    const double C3212 = C3206 * C458;
    const double C3210 = C3206 * C84;
    const double C3573 = C3206 * C1410;
    const double C3648 = C1508 * C3206;
    const double C3690 = C3206 * C493;
    const double C3686 = C3206 * C455;
    const double C3804 = C3206 * C525;
    const double C3915 = C3206 * C742;
    const double C3913 = C3206 * C1796;
    const double C6082 = C3206 * C741;
    const double C6746 = C3206 * C2816;
    const double C6787 = C2876 * C3206;
    const double C6863 = C3206 * C777;
    const double C6859 = C3206 * C739;
    const double C6975 = C3206 * C809;
    const double C8936 = C8861 * C8933;
    const double C4336 =
        (ae * -2 * C8921) / (C8830 * 2 * C8827) -
        (((C8861 * ((-4 * C8882) / C8827 - (C8861 * C8933) / C8827) * ae) /
              C8827 +
          2 * ((C8932 * ae) / C8827 - C8921 / C8834)) *
         be) /
            C8827 -
        C8933 / C8834;
    const double C4338 = (-C8933 / C8827) / (4 * C8830);
    const double C8966 = C8864 * C8963;
    const double C8285 =
        (ae * -2 * C8951) / (C8830 * 2 * C8827) -
        (((C8864 * ((-4 * C8894) / C8827 - (C8864 * C8963) / C8827) * ae) /
              C8827 +
          2 * ((C8962 * ae) / C8827 - C8951 / C8834)) *
         be) /
            C8827 -
        C8963 / C8834;
    const double C8287 = (-C8963 / C8827) / (4 * C8830);
    const double C91 =
        (2 * (2 * ae * C8988 + C8976 * C9005) + C9011 + C9011 +
         C8976 * (C9005 + C9008 + C9008 +
                  C8976 * (2 * ae * C9001 +
                           C8976 *
                               (C8994 * C8995 +
                                C8980 * bs[5] * std::pow(C8982, 5)) *
                               C8983))) /
        C8830;
    const double C494 =
        (C9011 + C9014 * (C9024 + ae * C8976 * C9025 +
                          C8976 * (ae * C9025 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9018))) /
        C8830;
    const double C555 =
        (C9011 + C9014 * (C9047 + ae * C8976 * C9025 +
                          C8976 * (ae * C9025 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9044))) /
        C8830;
    const double C810 =
        (C9011 + C9028 * (C9038 + ae * C8976 * C9039 +
                          C8976 * (ae * C9039 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9032))) /
        C8830;
    const double C929 =
        (C9011 + C9028 * (C9072 + ae * C8976 * C9039 +
                          C8976 * (ae * C9039 + C8976 * std::pow(C8982, 5) *
                                                    bs[5] * C9069))) /
        C8830;
    const double C96 = C79 * C87;
    const double C463 = C79 * C456;
    const double C1040 = C1034 * C456;
    const double C3214 = C3208 * C456;
    const double C747 = C79 * C740;
    const double C2138 = C1034 * C740;
    const double C6081 = C3208 * C740;
    const double C4622 =
        (2 * (2 * ae * C9020 + C9014 * C9056) + C9229 + C9229 +
         C9014 * (C9056 + C9226 + C9226 +
                  C9014 * (2 * ae * C9025 +
                           C9014 *
                               (C8994 * C8995 +
                                C9051 * bs[5] * std::pow(C8982, 5)) *
                               C8983))) /
        C8830;
    const double C4978 =
        (C9229 + C9028 * (C9080 + ae * C9014 * C9039 +
                          C9014 * (ae * C9039 + C9014 * std::pow(C8982, 5) *
                                                    bs[5] * C9077))) /
        C8830;
    const double C4624 = C4257 * C4517;
    const double C4896 = C4257 * C4811;
    const double C5511 = C3252 * C4811;
    const double C7543 = C1078 * C4811;
    const double C8818 =
        (2 * (2 * ae * C9034 + C9028 * C9089) + C9276 + C9276 +
         C9028 * (C9089 + C9273 + C9273 +
                  C9028 * (2 * ae * C9039 +
                           C9028 *
                               (C8994 * C8995 +
                                C9084 * bs[5] * std::pow(C8982, 5)) *
                               C8983))) /
        C8830;
    const double C8820 = C8128 * C8631;
    const double C7900 = C7898 + C7892;
    const double C5893 = C5891 + C5885;
    const double C76 =
        (((-4 * C8833) / C8827 - C8847 / C8827) * ae) / C8834 -
        ((2 * ((0 * ae) / C8827 - C8833 / C8830) - C8847 / C8834) * be) / C8827;
    const double C1031 = -(((-4 * C8833) / C8827 - C8847 / C8827) * be) / C8827;
    const double C3205 = (((-4 * C8833) / C8827 - C8847 / C8827) * ae) / C8827;
    const double C1416 = C1033 * C454;
    const double C2822 = C1033 * C738;
    const double C3570 = C3207 * C454;
    const double C6743 = C3207 * C738;
    const double C4481 = C4221 * C1408;
    const double C4479 = C4221 * C455;
    const double C5351 = C4221 * C1794;
    const double C5711 = C4221 * C739;
    const double C8562 = C4221 * C2814;
    const double C1558 = C1552 + C1553;
    const double C1556 = C1548 + C1549;
    const double C1679 = C1675 + C1676;
    const double C2964 = C2958 + C2959;
    const double C2962 = C2954 + C2955;
    const double C3087 = C3083 + C3084;
    const double C3696 = C3690 + C3691;
    const double C3694 = C3686 + C3687;
    const double C3808 = C3804 + C3805;
    const double C6869 = C6863 + C6864;
    const double C6867 = C6859 + C6860;
    const double C6979 = C6975 + C6976;
    const double C4337 =
        (((-4 * C8882) / C8827 - C8936 / C8827) * ae) / C8834 -
        ((2 * ((0 * ae) / C8827 - C8882 / C8830) - C8936 / C8834) * be) / C8827;
    const double C8286 =
        (((-4 * C8894) / C8827 - C8966 / C8827) * ae) / C8834 -
        ((2 * ((0 * ae) / C8827 - C8894 / C8830) - C8966 / C8834) * be) / C8827;
    const double C1414 = C1031 * C455;
    const double C2820 = C1031 * C739;
    const double C3568 = C3205 * C455;
    const double C6741 = C3205 * C739;
    const double C1421 = C1416 + C1039;
    const double C2827 = C2822 + C1802;
    const double C3575 = C3570 + C3213;
    const double C6748 = C6743 + C3914;
    const double C4485 = C4481 + C4226;
    const double C4484 = C4479 + C4225;
    const double C5353 = C5351 + C4784;
    const double C5715 = C5711 + C4785;
    const double C8565 = C8562 + C5714;
    const double C1420 = C1414 + C1038;
    const double C2826 = C2820 + C1803;
    const double C3574 = C3568 + C3212;
    const double C6747 = C6741 + C3915;
    const double C1423 = C1421 + C1039;
    const double C2829 = C2827 + C1802;
    const double C3577 = C3575 + C3213;
    const double C6750 = C6748 + C3914;
    const double C4487 = C4485 + C4226;
    const double C4486 = C4484 + C4225;
    const double C5354 = C5353 + C4784;
    const double C5716 = C5715 + C4785;
    const double C8566 = C8565 + C5714;
    const double C1422 = C1420 + C1038;
    const double C2828 = C2826 + C1803;
    const double C3576 = C3574 + C3212;
    const double C6749 = C6747 + C3915;
    const double C1425 = C1423 + C1417;
    const double C2831 = C2829 + C2823;
    const double C3579 = C3577 + C3571;
    const double C6752 = C6750 + C6744;
    const double C4489 = C4487 + C4482;
    const double C4488 = C4486 + C4480;
    const double C5355 = C5354 + C5352;
    const double C5717 = C5716 + C5712;
    const double C8567 = C8566 + C8563;
    const double C1424 = C1422 + C1415;
    const double C2830 = C2828 + C2821;
    const double C3578 = C3576 + C3569;
    const double C6751 = C6749 + C6742;
    const double C4491 = C4489 * C9438;
    const double C4490 = C4488 * C9438;
    const double C5350 = C4488 * C2135;
    const double C7393 = C4488 * C6078;
    const double C5356 = C5355 * C9495;
    const double C7394 = C5355 * C9495;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
                    C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
                       C9438 * C9423 * C9502 * C9503 * C72 -
                   (C78 * C83 + C96 + C96 + C67 * C91 + C76 * C82 + C97 + C97 +
                    C66 * C90 + C74 * C81 + C98 + C98 + C65 * C89) *
                       C9438 * C9423 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C124 * C80 + C9423 * C125) * C75 +
                    (C124 * C84 + C9423 * C129) * C65 + C142 * C77 +
                    C143 * C66 + C144 * C79 + C145 * C67) *
                       C9438 * C9502 * C9503 * C72 -
                   ((C124 * C87 + C9423 * C132) * C67 +
                    (C124 * C83 + C9423 * C128) * C79 + C145 * C66 +
                    C144 * C77 + C143 * C65 + C142 * C75) *
                       C9438 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C171 * C80 + C9438 * C172) * C75 +
                    (C171 * C84 + C9438 * C176) * C65 + C189 * C77 +
                    C190 * C66 + C191 * C79 + C192 * C67) *
                       C9423 * C9502 * C9503 * C72 -
                   ((C171 * C87 + C9438 * C179) * C67 +
                    (C171 * C83 + C9438 * C175) * C79 + C192 * C66 +
                    C191 * C77 + C190 * C65 + C189 * C75) *
                       C9423 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C124 +
                    (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                     C79 * C127 + C67 * C220) *
                        C9423) *
                       C9438 * C9502 * C9503 * C72 -
                   ((C79 * C128 + C67 * C221 + C77 * C127 + C66 * C220 +
                     C75 * C126 + C65 * C219) *
                        C9423 +
                    (C79 * C83 + C67 * C87 + C77 * C82 + C66 * C86 + C75 * C81 +
                     C65 * C85) *
                        C124) *
                       C9438 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C248 * C80 + C254 + C254 + C9423 * C249) * C65 +
                    C266 * C66 + C267 * C67) *
                       C9438 * C9502 * C9503 * C72 -
                   ((C248 * C83 + C261 + C261 + C9423 * C252) * C67 +
                    C267 * C66 + C266 * C65) *
                       C9438 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C124 +
                     (C171 * C125 + C9438 * C293) * C9423) *
                        C65 +
                    (C298 + C306) * C66 + (C301 + C307) * C67) *
                       C9502 * C9503 * C72 -
                   (((C171 * C128 + C9438 * C296) * C9423 +
                     (C171 * C83 + C9438 * C175) * C124) *
                        C67 +
                    (C307 + C301) * C66 + (C306 + C298) * C65) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (2 * std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C171 +
                    (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                     C79 * C174 + C67 * C335) *
                        C9438) *
                       C9423 * C9502 * C9503 * C72 -
                   ((C79 * C175 + C67 * C336 + C77 * C174 + C66 * C335 +
                     C75 * C173 + C65 * C334) *
                        C9438 +
                    (C79 * C83 + C67 * C87 + C77 * C82 + C66 * C86 + C75 * C81 +
                     C65 * C85) *
                        C171) *
                       C9423 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C9423 * C125) * C171 +
                     (C124 * C172 + C9423 * C363) * C9438) *
                        C65 +
                    (C368 + C376) * C66 + (C371 + C377) * C67) *
                       C9502 * C9503 * C72 -
                   (((C124 * C175 + C9423 * C366) * C9438 +
                     (C124 * C83 + C9423 * C128) * C171) *
                        C67 +
                    (C377 + C371) * C66 + (C376 + C368) * C65) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C9438 * C404) * C9423 * C65 +
                    C423 * C66 + C424 * C67) *
                       C9502 * C9503 * C72 -
                   ((C403 * C83 + C416 + C416 + C9438 * C407) * C9423 * C67 +
                    C424 * C66 + C423 * C65) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
                    C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
                       C9438 * C9423 * C9502 * C450 -
                   (C78 * C453 + C463 + C463 + C67 * C459 + C76 * C454 + C464 +
                    C464 + C66 * C460 + C74 * C455 + C465 + C465 + C65 * C461) *
                       C9438 * C9423 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (2 * std::pow(Pi, 2.5) *
                  (((C124 * C80 + C9423 * C125) * C75 +
                    (C124 * C84 + C9423 * C129) * C65 + C142 * C77 +
                    C143 * C66 + C144 * C79 + C145 * C67) *
                       C9438 * C9502 * C450 -
                   ((C124 * C456 + C9423 * C494) * C67 +
                    (C124 * C453 + C9423 * C491) * C79 +
                    (C124 * C457 + C9423 * C495) * C66 +
                    (C124 * C454 + C9423 * C492) * C77 +
                    (C124 * C458 + C9423 * C496) * C65 +
                    (C124 * C455 + C9423 * C493) * C75) *
                       C9438 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C171 * C80 + C9438 * C172) * C75 +
                    (C171 * C84 + C9438 * C176) * C65 + C189 * C77 +
                    C190 * C66 + C191 * C79 + C192 * C67) *
                       C9423 * C9502 * C450 -
                   ((C171 * C456 + C9438 * C526) * C67 +
                    (C171 * C453 + C9438 * C523) * C79 +
                    (C171 * C457 + C9438 * C527) * C66 +
                    (C171 * C454 + C9438 * C524) * C77 +
                    (C171 * C458 + C9438 * C528) * C65 +
                    (C171 * C455 + C9438 * C525) * C75) *
                       C9423 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C124 +
                    (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                     C79 * C127 + C67 * C220) *
                        C9423) *
                       C9438 * C9502 * C450 -
                   ((C79 * C491 + C67 * C555 + C77 * C492 + C66 * C556 +
                     C75 * C493 + C65 * C557) *
                        C9423 +
                    (C79 * C453 + C67 * C456 + C77 * C454 + C66 * C457 +
                     C75 * C455 + C65 * C458) *
                        C124) *
                       C9438 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (2 * std::pow(Pi, 2.5) *
                  (((C248 * C80 + C254 + C254 + C9423 * C249) * C65 +
                    C266 * C66 + C267 * C67) *
                       C9438 * C9502 * C450 -
                   ((C248 * C453 + C588 + C588 + C9423 * C584) * C67 +
                    (C248 * C454 + C589 + C589 + C9423 * C585) * C66 +
                    (C248 * C455 + C590 + C590 + C9423 * C586) * C65) *
                       C9438 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C124 +
                     (C171 * C125 + C9438 * C293) * C9423) *
                        C65 +
                    (C298 + C306) * C66 + (C301 + C307) * C67) *
                       C9502 * C450 -
                   (((C171 * C491 + C9438 * C616) * C9423 +
                     (C171 * C453 + C9438 * C523) * C124) *
                        C67 +
                    ((C171 * C492 + C9438 * C617) * C9423 +
                     (C171 * C454 + C9438 * C524) * C124) *
                        C66 +
                    ((C171 * C493 + C9438 * C618) * C9423 +
                     (C171 * C455 + C9438 * C525) * C124) *
                        C65) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C171 +
                    (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                     C79 * C174 + C67 * C335) *
                        C9438) *
                       C9423 * C9502 * C450 -
                   ((C79 * C523 + C67 * C645 + C77 * C524 + C66 * C646 +
                     C75 * C525 + C65 * C647) *
                        C9438 +
                    (C79 * C453 + C67 * C456 + C77 * C454 + C66 * C457 +
                     C75 * C455 + C65 * C458) *
                        C171) *
                       C9423 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C9423 * C125) * C171 +
                     (C124 * C172 + C9423 * C363) * C9438) *
                        C65 +
                    (C368 + C376) * C66 + (C371 + C377) * C67) *
                       C9502 * C450 -
                   (((C124 * C523 + C9423 * C674) * C9438 +
                     (C124 * C453 + C9423 * C491) * C171) *
                        C67 +
                    ((C124 * C524 + C9423 * C675) * C9438 +
                     (C124 * C454 + C9423 * C492) * C171) *
                        C66 +
                    ((C124 * C525 + C9423 * C676) * C9438 +
                     (C124 * C455 + C9423 * C493) * C171) *
                        C65) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C9438 * C404) * C9423 * C65 +
                    C423 * C66 + C424 * C67) *
                       C9502 * C450 -
                   ((C403 * C453 + C707 + C707 + C9438 * C703) * C9423 * C67 +
                    (C403 * C454 + C708 + C708 + C9438 * C704) * C9423 * C66 +
                    (C403 * C455 + C709 + C709 + C9438 * C705) * C9423 * C65) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C80 + C93 + C93 + C65 * C88 + C76 * C81 + C94 + C94 +
                    C66 * C89 + C78 * C82 + C95 + C95 + C67 * C90) *
                       C9438 * C9423 * C735 -
                   (C78 * C737 + C747 + C747 + C67 * C743 + C76 * C738 + C748 +
                    C748 + C66 * C744 + C74 * C739 + C749 + C749 + C65 * C745) *
                       C9438 * C9423 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C124 * C80 + C9423 * C125) * C75 +
                    (C124 * C84 + C9423 * C129) * C65 + C142 * C77 +
                    C143 * C66 + C144 * C79 + C145 * C67) *
                       C9438 * C735 -
                   ((C124 * C740 + C9423 * C778) * C67 +
                    (C124 * C737 + C9423 * C775) * C79 +
                    (C124 * C741 + C9423 * C779) * C66 +
                    (C124 * C738 + C9423 * C776) * C77 +
                    (C124 * C742 + C9423 * C780) * C65 +
                    (C124 * C739 + C9423 * C777) * C75) *
                       C9438 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C171 * C80 + C9438 * C172) * C75 +
                    (C171 * C84 + C9438 * C176) * C65 + C189 * C77 +
                    C190 * C66 + C191 * C79 + C192 * C67) *
                       C9423 * C735 -
                   ((C171 * C740 + C9438 * C810) * C67 +
                    (C171 * C737 + C9438 * C807) * C79 +
                    (C171 * C741 + C9438 * C811) * C66 +
                    (C171 * C738 + C9438 * C808) * C77 +
                    (C171 * C742 + C9438 * C812) * C65 +
                    (C171 * C739 + C9438 * C809) * C75) *
                       C9423 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C124 +
                    (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219 +
                     C79 * C127 + C67 * C220) *
                        C9423) *
                       C9438 * C735 -
                   ((C79 * C775 + C67 * C839 + C77 * C776 + C66 * C840 +
                     C75 * C777 + C65 * C841) *
                        C9423 +
                    (C79 * C737 + C67 * C740 + C77 * C738 + C66 * C741 +
                     C75 * C739 + C65 * C742) *
                        C124) *
                       C9438 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (2 * std::pow(Pi, 2.5) *
                  (((C248 * C80 + C254 + C254 + C9423 * C249) * C65 +
                    C266 * C66 + C267 * C67) *
                       C9438 * C735 -
                   ((C248 * C737 + C872 + C872 + C9423 * C868) * C67 +
                    (C248 * C738 + C873 + C873 + C9423 * C869) * C66 +
                    (C248 * C739 + C874 + C874 + C9423 * C870) * C65) *
                       C9438 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C124 +
                     (C171 * C125 + C9438 * C293) * C9423) *
                        C65 +
                    (C298 + C306) * C66 + (C301 + C307) * C67) *
                       C735 -
                   (((C171 * C775 + C9438 * C900) * C9423 +
                     (C171 * C737 + C9438 * C807) * C124) *
                        C67 +
                    ((C171 * C776 + C9438 * C901) * C9423 +
                     (C171 * C738 + C9438 * C808) * C124) *
                        C66 +
                    ((C171 * C777 + C9438 * C902) * C9423 +
                     (C171 * C739 + C9438 * C809) * C124) *
                        C65) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85 + C79 * C82 +
                     C67 * C86) *
                        C171 +
                    (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334 +
                     C79 * C174 + C67 * C335) *
                        C9438) *
                       C9423 * C735 -
                   ((C79 * C807 + C67 * C929 + C77 * C808 + C66 * C930 +
                     C75 * C809 + C65 * C931) *
                        C9438 +
                    (C79 * C737 + C67 * C740 + C77 * C738 + C66 * C741 +
                     C75 * C739 + C65 * C742) *
                        C171) *
                       C9423 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C9423 * C125) * C171 +
                     (C124 * C172 + C9423 * C363) * C9438) *
                        C65 +
                    (C368 + C376) * C66 + (C371 + C377) * C67) *
                       C735 -
                   (((C124 * C807 + C9423 * C958) * C9438 +
                     (C124 * C737 + C9423 * C775) * C171) *
                        C67 +
                    ((C124 * C808 + C9423 * C959) * C9438 +
                     (C124 * C738 + C9423 * C776) * C171) *
                        C66 +
                    ((C124 * C809 + C9423 * C960) * C9438 +
                     (C124 * C739 + C9423 * C777) * C171) *
                        C65) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] += (2 * std::pow(Pi, 2.5) *
                  (((C403 * C80 + C409 + C409 + C9438 * C404) * C9423 * C65 +
                    C423 * C66 + C424 * C67) *
                       C735 -
                   ((C403 * C737 + C991 + C991 + C9438 * C987) * C9423 * C67 +
                    (C403 * C738 + C992 + C992 + C9438 * C988) * C9423 * C66 +
                    (C403 * C739 + C993 + C993 + C9438 * C989) * C9423 * C65) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C1031 * C80 + C1036 + C1036 + C1027 * C88 + C1033 * C81 +
                     C1037 + C1037 + C9487 * C89) *
                        C9438 * C1029 +
                    (C1031 * C455 + C1038 + C1038 + C1027 * C461 +
                     C1033 * C454 + C1039 + C1039 + C9487 * C460) *
                        C9438 * C9493) *
                       C9502 * C9503 * C72 -
                   ((C1033 * C453 + C1040 + C1040 + C9487 * C459 +
                     C1031 * C454 + C1041 + C1041 + C1027 * C460) *
                        C9438 * C9493 +
                    (C1033 * C82 + C1042 + C1042 + C9487 * C90 + C1031 * C81 +
                     C1043 + C1043 + C1027 * C89) *
                        C9438 * C1029) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C1032 +
           (C1077 * C84 + C1029 * C129 + C1078 * C458 + C9493 * C496) * C1027 +
           (C1088 + C1089) * C1034 + (C1090 + C1091) * C9487) *
              C9438 * C9502 * C9503 * C72 -
          ((C1078 * C456 + C9493 * C494 + C1077 * C86 + C1029 * C131) * C9487 +
           (C1078 * C453 + C9493 * C491 + C1077 * C82 + C1029 * C127) * C1034 +
           (C1091 + C1090) * C1027 + (C1089 + C1088) * C1032) *
              C9438 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C9438 * C172) * C1032 +
            (C171 * C84 + C9438 * C176) * C1027 + C189 * C1034 + C190 * C9487) *
               C1029 +
           ((C171 * C455 + C9438 * C525) * C1032 +
            (C171 * C458 + C9438 * C528) * C1027 + C1130 * C1034 +
            C1131 * C9487) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C171 * C456 + C9438 * C526) * C9487 +
            (C171 * C453 + C9438 * C523) * C1034 + C1131 * C1027 +
            C1130 * C1032) *
               C9493 +
           (C192 * C9487 + C191 * C1034 + C190 * C1027 + C189 * C1032) *
               C1029) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C1077 +
           (C1032 * C125 + C1027 * C218 + C1034 * C126 + C9487 * C219) * C1029 +
           (C1032 * C455 + C1027 * C458 + C1034 * C454 + C9487 * C457) * C1078 +
           (C1032 * C493 + C1027 * C557 + C1034 * C492 + C9487 * C556) *
               C9493) *
              C9438 * C9502 * C9503 * C72 -
          ((C1034 * C491 + C9487 * C555 + C1032 * C492 + C1027 * C556) * C9493 +
           (C1034 * C453 + C9487 * C456 + C1032 * C454 + C1027 * C457) * C1078 +
           (C1034 * C127 + C9487 * C220 + C1032 * C126 + C1027 * C219) * C1029 +
           (C1034 * C82 + C9487 * C86 + C1032 * C81 + C1027 * C85) * C1077) *
              C9438 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (2 * std::pow(Pi, 2.5) *
                  (((C1199 * C80 + C1202 + C1202 + C1029 * C249 + C1200 * C455 +
                     C1203 + C1203 + C9493 * C586) *
                        C1027 +
                    (C1216 + C1217) * C9487) *
                       C9438 * C9502 * C9503 * C72 -
                   ((C1200 * C453 + C1210 + C1210 + C9493 * C584 + C1199 * C82 +
                     C1211 + C1211 + C1029 * C251) *
                        C9487 +
                    (C1217 + C1216) * C1027) *
                       C9438 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C1077 +
                     (C171 * C125 + C9438 * C293) * C1029 +
                     (C171 * C455 + C9438 * C525) * C1078 +
                     (C171 * C493 + C9438 * C618) * C9493) *
                        C1027 +
                    (C1252 + C1253 + C1254 + C1258) * C9487) *
                       C9502 * C9503 * C72 -
                   (((C171 * C491 + C9438 * C616) * C9493 +
                     (C171 * C453 + C9438 * C523) * C1078 + C305 * C1029 +
                     C191 * C1077) *
                        C9487 +
                    (C1258 + C1254 + C1253 + C1252) * C1027) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C171 +
            (C1032 * C172 + C1027 * C333 + C1034 * C173 + C9487 * C334) *
                C9438) *
               C1029 +
           ((C1032 * C455 + C1027 * C458 + C1034 * C454 + C9487 * C457) * C171 +
            (C1032 * C525 + C1027 * C647 + C1034 * C524 + C9487 * C646) *
                C9438) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C1034 * C523 + C9487 * C645 + C1032 * C524 + C1027 * C646) *
                C9438 +
            (C1034 * C453 + C9487 * C456 + C1032 * C454 + C1027 * C457) *
                C171) *
               C9493 +
           ((C1034 * C174 + C9487 * C335 + C1032 * C173 + C1027 * C334) *
                C9438 +
            (C1034 * C82 + C9487 * C86 + C1032 * C81 + C1027 * C85) * C171) *
               C1029) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C171 +
            (C1077 * C172 + C1029 * C363 + C1078 * C525 + C9493 * C676) *
                C9438) *
               C1027 +
           ((C1088 + C1089) * C171 + (C1331 + C1332) * C9438) * C9487) *
              C9502 * C9503 * C72 -
          (((C1078 * C523 + C9493 * C674 + C1077 * C174 + C1029 * C365) *
                C9438 +
            (C1078 * C453 + C9493 * C491 + C1077 * C82 + C1029 * C127) * C171) *
               C9487 +
           ((C1332 + C1331) * C9438 + (C1089 + C1088) * C171) * C1027) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C9438 * C404) * C1029 +
            (C403 * C455 + C709 + C709 + C9438 * C705) * C9493) *
               C1027 +
           (C1367 + C1373) * C9487) *
              C9502 * C9503 * C72 -
          (((C403 * C453 + C707 + C707 + C9438 * C703) * C9493 + C422 * C1029) *
               C9487 +
           (C1373 + C1367) * C1027) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  (((C1031 * C80 + C1036 + C1036 + C1027 * C88 + C1033 * C81 +
                     C1037 + C1037 + C9487 * C89) *
                        C9438 * C1029 +
                    (C1424 + C1425) * C9438 * C9493) *
                       C9502 * C450 -
                   ((C1033 * C1407 + C1418 + C1418 + C9487 * C1411 +
                     C1031 * C1408 + C1419 + C1419 + C1027 * C1412) *
                        C9438 * C9493 +
                    (C1425 + C1424) * C9438 * C1029) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C1032 +
           (C1077 * C84 + C1029 * C129 + C1078 * C458 + C9493 * C496) * C1027 +
           (C1088 + C1089) * C1034 + (C1090 + C1091) * C9487) *
              C9438 * C9502 * C450 -
          ((C1078 * C1409 + C9493 * C1461 + C1077 * C457 + C1029 * C495) *
               C9487 +
           (C1078 * C1407 + C9493 * C1459 + C1077 * C454 + C1029 * C492) *
               C1034 +
           (C1078 * C1410 + C9493 * C1462 + C1077 * C458 + C1029 * C496) *
               C1027 +
           (C1078 * C1408 + C9493 * C1460 + C1077 * C455 + C1029 * C493) *
               C1032) *
              C9438 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C9438 * C172) * C1032 +
            (C171 * C84 + C9438 * C176) * C1027 + C189 * C1034 + C190 * C9487) *
               C1029 +
           (C1510 + C1511 + C1506 + C1507) * C9493) *
              C9502 * C450 -
          (((C171 * C1409 + C9438 * C1499) * C9487 +
            (C171 * C1407 + C9438 * C1497) * C1034 +
            (C171 * C1410 + C9438 * C1500) * C1027 +
            (C171 * C1408 + C9438 * C1498) * C1032) *
               C9493 +
           (C1507 + C1506 + C1511 + C1510) * C1029) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C1077 +
           (C1032 * C125 + C1027 * C218 + C1034 * C126 + C9487 * C219) * C1029 +
           (C1556 + C1557) * C1078 + (C1558 + C1559) * C9493) *
              C9438 * C9502 * C450 -
          ((C1034 * C1459 + C9487 * C1545 + C1032 * C1460 + C1027 * C1546) *
               C9493 +
           (C1034 * C1407 + C9487 * C1409 + C1032 * C1408 + C1027 * C1410) *
               C1078 +
           (C1559 + C1558) * C1029 + (C1557 + C1556) * C1077) *
              C9438 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (2 * std::pow(Pi, 2.5) *
                  (((C1199 * C80 + C1202 + C1202 + C1029 * C249 + C1200 * C455 +
                     C1203 + C1203 + C9493 * C586) *
                        C1027 +
                    (C1216 + C1217) * C9487) *
                       C9438 * C9502 * C450 -
                   ((C1200 * C1407 + C1596 + C1596 + C9493 * C1593 +
                     C1199 * C454 + C1597 + C1597 + C1029 * C585) *
                        C9487 +
                    (C1200 * C1408 + C1598 + C1598 + C9493 * C1594 +
                     C1199 * C455 + C1599 + C1599 + C1029 * C586) *
                        C1027) *
                       C9438 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C1077 +
                     (C171 * C125 + C9438 * C293) * C1029 + C1508 * C1078 +
                     C1638 * C9493) *
                        C1027 +
                    (C1252 + C1253 + C1254 + C1258) * C9487) *
                       C9502 * C450 -
                   (((C171 * C1459 + C9438 * C1633) * C9493 +
                     (C171 * C1407 + C9438 * C1497) * C1078 + C1257 * C1029 +
                     C1130 * C1077) *
                        C9487 +
                    ((C171 * C1460 + C9438 * C1634) * C9493 +
                     (C171 * C1408 + C9438 * C1498) * C1078 + C1638 * C1029 +
                     C1508 * C1077) *
                        C1027) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C171 +
            (C1032 * C172 + C1027 * C333 + C1034 * C173 + C9487 * C334) *
                C9438) *
               C1029 +
           ((C1556 + C1557) * C171 + (C1679 + C1680) * C9438) * C9493) *
              C9502 * C450 -
          (((C1034 * C1497 + C9487 * C1672 + C1032 * C1498 + C1027 * C1673) *
                C9438 +
            (C1034 * C1407 + C9487 * C1409 + C1032 * C1408 + C1027 * C1410) *
                C171) *
               C9493 +
           ((C1680 + C1679) * C9438 + (C1557 + C1556) * C171) * C1029) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C171 +
            (C1077 * C172 + C1029 * C363 + C1078 * C525 + C9493 * C676) *
                C9438) *
               C1027 +
           ((C1088 + C1089) * C171 + (C1331 + C1332) * C9438) * C9487) *
              C9502 * C450 -
          (((C1078 * C1497 + C9493 * C1714 + C1077 * C524 + C1029 * C675) *
                C9438 +
            (C1078 * C1407 + C9493 * C1459 + C1077 * C454 + C1029 * C492) *
                C171) *
               C9487 +
           ((C1078 * C1498 + C9493 * C1715 + C1077 * C525 + C1029 * C676) *
                C9438 +
            (C1078 * C1408 + C9493 * C1460 + C1077 * C455 + C1029 * C493) *
                C171) *
               C1027) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C9438 * C404) * C1029 + C1759 * C9493) *
               C1027 +
           (C1367 + C1373) * C9487) *
              C9502 * C450 -
          (((C403 * C1407 + C1755 + C1755 + C9438 * C1750) * C9493 +
            C1372 * C1029) *
               C9487 +
           ((C403 * C1408 + C1756 + C1756 + C9438 * C1751) * C9493 +
            C1759 * C1029) *
               C1027) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C1031 * C80 + C1036 + C1036 + C1027 * C88 + C1033 * C81 +
                     C1037 + C1037 + C9487 * C89) *
                        C9438 * C1029 +
                    (C1424 + C1425) * C9438 * C9493) *
                       C735 -
                   ((C1033 * C1793 + C1800 + C1800 + C9487 * C1797 +
                     C1031 * C1794 + C1801 + C1801 + C1027 * C1798) *
                        C9438 * C9493 +
                    (C1033 * C738 + C1802 + C1802 + C9487 * C744 +
                     C1031 * C739 + C1803 + C1803 + C1027 * C745) *
                        C9438 * C1029) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C1032 +
           (C1077 * C84 + C1029 * C129 + C1078 * C458 + C9493 * C496) * C1027 +
           (C1088 + C1089) * C1034 + (C1090 + C1091) * C9487) *
              C9438 * C735 -
          ((C1078 * C1795 + C9493 * C1839 + C1077 * C741 + C1029 * C779) *
               C9487 +
           (C1078 * C1793 + C9493 * C1837 + C1077 * C738 + C1029 * C776) *
               C1034 +
           (C1078 * C1796 + C9493 * C1840 + C1077 * C742 + C1029 * C780) *
               C1027 +
           (C1078 * C1794 + C9493 * C1838 + C1077 * C739 + C1029 * C777) *
               C1032) *
              C9438 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C9438 * C172) * C1032 +
            (C171 * C84 + C9438 * C176) * C1027 + C189 * C1034 + C190 * C9487) *
               C1029 +
           (C1510 + C1511 + C1506 + C1507) * C9493) *
              C735 -
          (((C171 * C1795 + C9438 * C1877) * C9487 +
            (C171 * C1793 + C9438 * C1875) * C1034 +
            (C171 * C1796 + C9438 * C1878) * C1027 +
            (C171 * C1794 + C9438 * C1876) * C1032) *
               C9493 +
           ((C171 * C741 + C9438 * C811) * C9487 +
            (C171 * C738 + C9438 * C808) * C1034 +
            (C171 * C742 + C9438 * C812) * C1027 +
            (C171 * C739 + C9438 * C809) * C1032) *
               C1029) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C1077 +
           (C1032 * C125 + C1027 * C218 + C1034 * C126 + C9487 * C219) * C1029 +
           (C1556 + C1557) * C1078 + (C1558 + C1559) * C9493) *
              C9438 * C735 -
          ((C1034 * C1837 + C9487 * C1913 + C1032 * C1838 + C1027 * C1914) *
               C9493 +
           (C1034 * C1793 + C9487 * C1795 + C1032 * C1794 + C1027 * C1796) *
               C1078 +
           (C1034 * C776 + C9487 * C840 + C1032 * C777 + C1027 * C841) * C1029 +
           (C1034 * C738 + C9487 * C741 + C1032 * C739 + C1027 * C742) *
               C1077) *
              C9438 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (2 * std::pow(Pi, 2.5) *
                  (((C1199 * C80 + C1202 + C1202 + C1029 * C249 + C1200 * C455 +
                     C1203 + C1203 + C9493 * C586) *
                        C1027 +
                    (C1216 + C1217) * C9487) *
                       C9438 * C735 -
                   ((C1200 * C1793 + C1952 + C1952 + C9493 * C1949 +
                     C1199 * C738 + C1953 + C1953 + C1029 * C869) *
                        C9487 +
                    (C1200 * C1794 + C1954 + C1954 + C9493 * C1950 +
                     C1199 * C739 + C1955 + C1955 + C1029 * C870) *
                        C1027) *
                       C9438 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C1077 +
                     (C171 * C125 + C9438 * C293) * C1029 + C1508 * C1078 +
                     C1638 * C9493) *
                        C1027 +
                    (C1252 + C1253 + C1254 + C1258) * C9487) *
                       C735 -
                   (((C171 * C1837 + C9438 * C1989) * C9493 +
                     (C171 * C1793 + C9438 * C1875) * C1078 +
                     (C171 * C776 + C9438 * C901) * C1029 +
                     (C171 * C738 + C9438 * C808) * C1077) *
                        C9487 +
                    ((C171 * C1838 + C9438 * C1990) * C9493 +
                     (C171 * C1794 + C9438 * C1876) * C1078 +
                     (C171 * C777 + C9438 * C902) * C1029 +
                     (C171 * C739 + C9438 * C809) * C1077) *
                        C1027) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C171 +
            (C1032 * C172 + C1027 * C333 + C1034 * C173 + C9487 * C334) *
                C9438) *
               C1029 +
           ((C1556 + C1557) * C171 + (C1679 + C1680) * C9438) * C9493) *
              C735 -
          (((C1034 * C1875 + C9487 * C2025 + C1032 * C1876 + C1027 * C2026) *
                C9438 +
            (C1034 * C1793 + C9487 * C1795 + C1032 * C1794 + C1027 * C1796) *
                C171) *
               C9493 +
           ((C1034 * C808 + C9487 * C930 + C1032 * C809 + C1027 * C931) *
                C9438 +
            (C1034 * C738 + C9487 * C741 + C1032 * C739 + C1027 * C742) *
                C171) *
               C1029) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C171 +
            (C1077 * C172 + C1029 * C363 + C1078 * C525 + C9493 * C676) *
                C9438) *
               C1027 +
           ((C1088 + C1089) * C171 + (C1331 + C1332) * C9438) * C9487) *
              C735 -
          (((C1078 * C1875 + C9493 * C2061 + C1077 * C808 + C1029 * C959) *
                C9438 +
            (C1078 * C1793 + C9493 * C1837 + C1077 * C738 + C1029 * C776) *
                C171) *
               C9487 +
           ((C1078 * C1876 + C9493 * C2062 + C1077 * C809 + C1029 * C960) *
                C9438 +
            (C1078 * C1794 + C9493 * C1838 + C1077 * C739 + C1029 * C777) *
                C171) *
               C1027) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C9438 * C404) * C1029 + C1759 * C9493) *
               C1027 +
           (C1367 + C1373) * C9487) *
              C735 -
          (((C403 * C1793 + C2100 + C2100 + C9438 * C2097) * C9493 +
            (C403 * C738 + C992 + C992 + C9438 * C988) * C1029) *
               C9487 +
           ((C403 * C1794 + C2101 + C2101 + C9438 * C2098) * C9493 +
            (C403 * C739 + C993 + C993 + C9438 * C989) * C1029) *
               C1027) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (2 * std::pow(Pi, 2.5) *
                  (((C1031 * C80 + C1036 + C1036 + C1027 * C88 + C1033 * C81 +
                     C1037 + C1037 + C9487 * C89) *
                        C2135 +
                    (C1031 * C739 + C1803 + C1803 + C1027 * C745 +
                     C1033 * C738 + C1802 + C1802 + C9487 * C744) *
                        C9495) *
                       C9423 * C9502 * C9503 * C72 -
                   ((C1033 * C737 + C2138 + C2138 + C9487 * C743 +
                     C1031 * C738 + C2139 + C2139 + C1027 * C744) *
                        C9495 +
                    (C1033 * C82 + C1042 + C1042 + C9487 * C90 + C1031 * C81 +
                     C1043 + C1043 + C1027 * C89) *
                        C2135) *
                       C9423 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C9423 * C125) * C1032 +
            (C124 * C84 + C9423 * C129) * C1027 + C142 * C1034 + C143 * C9487) *
               C2135 +
           ((C124 * C739 + C9423 * C777) * C1032 +
            (C124 * C742 + C9423 * C780) * C1027 + C2178 * C1034 +
            C2179 * C9487) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C124 * C740 + C9423 * C778) * C9487 +
            (C124 * C737 + C9423 * C775) * C1034 + C2179 * C1027 +
            C2178 * C1032) *
               C9495 +
           (C145 * C9487 + C144 * C1034 + C143 * C1027 + C142 * C1032) *
               C2135) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C1032 +
           (C2213 * C84 + C2135 * C176 + C2214 * C742 + C9495 * C812) * C1027 +
           (C2224 + C2225) * C1034 + (C2226 + C2227) * C9487) *
              C9423 * C9502 * C9503 * C72 -
          ((C2214 * C740 + C9495 * C810 + C2213 * C86 + C2135 * C178) * C9487 +
           (C2214 * C737 + C9495 * C807 + C2213 * C82 + C2135 * C174) * C1034 +
           (C2227 + C2226) * C1027 + (C2225 + C2224) * C1032) *
              C9423 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C124 +
            (C1032 * C125 + C1027 * C218 + C1034 * C126 + C9487 * C219) *
                C9423) *
               C2135 +
           ((C1032 * C739 + C1027 * C742 + C1034 * C738 + C9487 * C741) * C124 +
            (C1032 * C777 + C1027 * C841 + C1034 * C776 + C9487 * C840) *
                C9423) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C1034 * C775 + C9487 * C839 + C1032 * C776 + C1027 * C840) *
                C9423 +
            (C1034 * C737 + C9487 * C740 + C1032 * C738 + C1027 * C741) *
                C124) *
               C9495 +
           ((C1034 * C127 + C9487 * C220 + C1032 * C126 + C1027 * C219) *
                C9423 +
            (C1034 * C82 + C9487 * C86 + C1032 * C81 + C1027 * C85) * C124) *
               C2135) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C9423 * C249) * C1027 + C266 * C9487) *
               C2135 +
           ((C248 * C739 + C874 + C874 + C9423 * C870) * C1027 +
            C2300 * C9487) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C248 * C737 + C872 + C872 + C9423 * C868) * C9487 +
            C2300 * C1027) *
               C9495 +
           (C267 * C9487 + C266 * C1027) * C2135) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C124 +
            (C2213 * C125 + C2135 * C293 + C2214 * C777 + C9495 * C902) *
                C9423) *
               C1027 +
           ((C2224 + C2225) * C124 + (C2339 + C2340) * C9423) * C9487) *
              C9502 * C9503 * C72 -
          (((C2214 * C775 + C9495 * C900 + C2213 * C127 + C2135 * C295) *
                C9423 +
            (C2214 * C737 + C9495 * C807 + C2213 * C82 + C2135 * C174) * C124) *
               C9487 +
           ((C2340 + C2339) * C9423 + (C2225 + C2224) * C124) * C1027) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C2213 +
           (C1032 * C172 + C1027 * C333 + C1034 * C173 + C9487 * C334) * C2135 +
           (C1032 * C739 + C1027 * C742 + C1034 * C738 + C9487 * C741) * C2214 +
           (C1032 * C809 + C1027 * C931 + C1034 * C808 + C9487 * C930) *
               C9495) *
              C9423 * C9502 * C9503 * C72 -
          ((C1034 * C807 + C9487 * C929 + C1032 * C808 + C1027 * C930) * C9495 +
           (C1034 * C737 + C9487 * C740 + C1032 * C738 + C1027 * C741) * C2214 +
           (C1034 * C174 + C9487 * C335 + C1032 * C173 + C1027 * C334) * C2135 +
           (C1034 * C82 + C9487 * C86 + C1032 * C81 + C1027 * C85) * C2213) *
              C9423 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C9423 * C125) * C2213 +
                     (C124 * C172 + C9423 * C363) * C2135 +
                     (C124 * C739 + C9423 * C777) * C2214 +
                     (C124 * C809 + C9423 * C960) * C9495) *
                        C1027 +
                    (C2409 + C2410 + C2411 + C2415) * C9487) *
                       C9502 * C9503 * C72 -
                   (((C124 * C807 + C9423 * C958) * C9495 +
                     (C124 * C737 + C9423 * C775) * C2214 + C375 * C2135 +
                     C144 * C2213) *
                        C9487 +
                    (C2415 + C2411 + C2410 + C2409) * C1027) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (2 * std::pow(Pi, 2.5) *
                  (((C2449 * C80 + C2452 + C2452 + C2135 * C404 + C2450 * C739 +
                     C2453 + C2453 + C9495 * C989) *
                        C9423 * C1027 +
                    (C2466 + C2467) * C9423 * C9487) *
                       C9502 * C9503 * C72 -
                   ((C2450 * C737 + C2460 + C2460 + C9495 * C987 + C2449 * C82 +
                     C2461 + C2461 + C2135 * C406) *
                        C9423 * C9487 +
                    (C2467 + C2466) * C9423 * C1027) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C1031 * C80 + C1036 + C1036 + C1027 * C88 + C1033 * C81 +
                     C1037 + C1037 + C9487 * C89) *
                        C2135 +
                    (C1031 * C739 + C1803 + C1803 + C1027 * C745 +
                     C1033 * C738 + C1802 + C1802 + C9487 * C744) *
                        C9495) *
                       C9423 * C9502 * C450 -
                   ((C1033 * C1793 + C1800 + C1800 + C9487 * C1797 +
                     C1031 * C1794 + C1801 + C1801 + C1027 * C1798) *
                        C9495 +
                    (C1425 + C1424) * C2135) *
                       C9423 * C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C9423 * C125) * C1032 +
            (C124 * C84 + C9423 * C129) * C1027 + C142 * C1034 + C143 * C9487) *
               C2135 +
           ((C124 * C739 + C9423 * C777) * C1032 +
            (C124 * C742 + C9423 * C780) * C1027 + C2178 * C1034 +
            C2179 * C9487) *
               C9495) *
              C9502 * C450 -
          (((C124 * C1795 + C9423 * C1839) * C9487 +
            (C124 * C1793 + C9423 * C1837) * C1034 +
            (C124 * C1796 + C9423 * C1840) * C1027 +
            (C124 * C1794 + C9423 * C1838) * C1032) *
               C9495 +
           ((C124 * C457 + C9423 * C495) * C9487 +
            (C124 * C454 + C9423 * C492) * C1034 +
            (C124 * C458 + C9423 * C496) * C1027 +
            (C124 * C455 + C9423 * C493) * C1032) *
               C2135) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C1032 +
           (C2213 * C84 + C2135 * C176 + C2214 * C742 + C9495 * C812) * C1027 +
           (C2224 + C2225) * C1034 + (C2226 + C2227) * C9487) *
              C9423 * C9502 * C450 -
          ((C2214 * C1795 + C9495 * C1877 + C2213 * C457 + C2135 * C527) *
               C9487 +
           (C2214 * C1793 + C9495 * C1875 + C2213 * C454 + C2135 * C524) *
               C1034 +
           (C2214 * C1796 + C9495 * C1878 + C2213 * C458 + C2135 * C528) *
               C1027 +
           (C2214 * C1794 + C9495 * C1876 + C2213 * C455 + C2135 * C525) *
               C1032) *
              C9423 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C124 +
            (C1032 * C125 + C1027 * C218 + C1034 * C126 + C9487 * C219) *
                C9423) *
               C2135 +
           ((C1032 * C739 + C1027 * C742 + C1034 * C738 + C9487 * C741) * C124 +
            (C1032 * C777 + C1027 * C841 + C1034 * C776 + C9487 * C840) *
                C9423) *
               C9495) *
              C9502 * C450 -
          (((C1034 * C1837 + C9487 * C1913 + C1032 * C1838 + C1027 * C1914) *
                C9423 +
            (C1034 * C1793 + C9487 * C1795 + C1032 * C1794 + C1027 * C1796) *
                C124) *
               C9495 +
           ((C1559 + C1558) * C9423 + (C1557 + C1556) * C124) * C2135) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C9423 * C249) * C1027 + C266 * C9487) *
               C2135 +
           ((C248 * C739 + C874 + C874 + C9423 * C870) * C1027 +
            C2300 * C9487) *
               C9495) *
              C9502 * C450 -
          (((C248 * C1793 + C2638 + C2638 + C9423 * C1949) * C9487 +
            (C248 * C1794 + C2639 + C2639 + C9423 * C1950) * C1027) *
               C9495 +
           ((C248 * C454 + C589 + C589 + C9423 * C585) * C9487 +
            (C248 * C455 + C590 + C590 + C9423 * C586) * C1027) *
               C2135) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C124 +
            (C2213 * C125 + C2135 * C293 + C2214 * C777 + C9495 * C902) *
                C9423) *
               C1027 +
           ((C2224 + C2225) * C124 + (C2339 + C2340) * C9423) * C9487) *
              C9502 * C450 -
          (((C2214 * C1837 + C9495 * C1989 + C2213 * C492 + C2135 * C617) *
                C9423 +
            (C2214 * C1793 + C9495 * C1875 + C2213 * C454 + C2135 * C524) *
                C124) *
               C9487 +
           ((C2214 * C1838 + C9495 * C1990 + C2213 * C493 + C2135 * C618) *
                C9423 +
            (C2214 * C1794 + C9495 * C1876 + C2213 * C455 + C2135 * C525) *
                C124) *
               C1027) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C2213 +
           (C1032 * C172 + C1027 * C333 + C1034 * C173 + C9487 * C334) * C2135 +
           (C1032 * C739 + C1027 * C742 + C1034 * C738 + C9487 * C741) * C2214 +
           (C1032 * C809 + C1027 * C931 + C1034 * C808 + C9487 * C930) *
               C9495) *
              C9423 * C9502 * C450 -
          ((C1034 * C1875 + C9487 * C2025 + C1032 * C1876 + C1027 * C2026) *
               C9495 +
           (C1034 * C1793 + C9487 * C1795 + C1032 * C1794 + C1027 * C1796) *
               C2214 +
           (C1680 + C1679) * C2135 + (C1557 + C1556) * C2213) *
              C9423 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C9423 * C125) * C2213 +
                     (C124 * C172 + C9423 * C363) * C2135 +
                     (C124 * C739 + C9423 * C777) * C2214 +
                     (C124 * C809 + C9423 * C960) * C9495) *
                        C1027 +
                    (C2409 + C2410 + C2411 + C2415) * C9487) *
                       C9502 * C450 -
                   (((C124 * C1875 + C9423 * C2061) * C9495 +
                     (C124 * C1793 + C9423 * C1837) * C2214 +
                     (C124 * C524 + C9423 * C675) * C2135 +
                     (C124 * C454 + C9423 * C492) * C2213) *
                        C9487 +
                    ((C124 * C1876 + C9423 * C2062) * C9495 +
                     (C124 * C1794 + C9423 * C1838) * C2214 +
                     (C124 * C525 + C9423 * C676) * C2135 +
                     (C124 * C455 + C9423 * C493) * C2213) *
                        C1027) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezz[7] += (2 * std::pow(Pi, 2.5) *
                  (((C2449 * C80 + C2452 + C2452 + C2135 * C404 + C2450 * C739 +
                     C2453 + C2453 + C9495 * C989) *
                        C9423 * C1027 +
                    (C2466 + C2467) * C9423 * C9487) *
                       C9502 * C450 -
                   ((C2450 * C1793 + C2776 + C2776 + C9495 * C2097 +
                     C2449 * C454 + C2777 + C2777 + C2135 * C704) *
                        C9423 * C9487 +
                    (C2450 * C1794 + C2778 + C2778 + C9495 * C2098 +
                     C2449 * C455 + C2779 + C2779 + C2135 * C705) *
                        C9423 * C1027) *
                       C9502 * C451) *
                  C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexx[8] += (2 * std::pow(Pi, 2.5) *
                  (((C1031 * C80 + C1036 + C1036 + C1027 * C88 + C1033 * C81 +
                     C1037 + C1037 + C9487 * C89) *
                        C2135 +
                    (C2830 + C2831) * C9495) *
                       C9423 * C735 -
                   ((C1033 * C2813 + C2824 + C2824 + C9487 * C2817 +
                     C1031 * C2814 + C2825 + C2825 + C1027 * C2818) *
                        C9495 +
                    (C2831 + C2830) * C2135) *
                       C9423 * C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C9423 * C125) * C1032 +
            (C124 * C84 + C9423 * C129) * C1027 + C142 * C1034 + C143 * C9487) *
               C2135 +
           (C2878 + C2879 + C2874 + C2875) * C9495) *
              C735 -
          (((C124 * C2815 + C9423 * C2867) * C9487 +
            (C124 * C2813 + C9423 * C2865) * C1034 +
            (C124 * C2816 + C9423 * C2868) * C1027 +
            (C124 * C2814 + C9423 * C2866) * C1032) *
               C9495 +
           (C2875 + C2874 + C2879 + C2878) * C2135) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C1032 +
           (C2213 * C84 + C2135 * C176 + C2214 * C742 + C9495 * C812) * C1027 +
           (C2224 + C2225) * C1034 + (C2226 + C2227) * C9487) *
              C9423 * C735 -
          ((C2214 * C2815 + C9495 * C2915 + C2213 * C741 + C2135 * C811) *
               C9487 +
           (C2214 * C2813 + C9495 * C2913 + C2213 * C738 + C2135 * C808) *
               C1034 +
           (C2214 * C2816 + C9495 * C2916 + C2213 * C742 + C2135 * C812) *
               C1027 +
           (C2214 * C2814 + C9495 * C2914 + C2213 * C739 + C2135 * C809) *
               C1032) *
              C9423 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C124 +
            (C1032 * C125 + C1027 * C218 + C1034 * C126 + C9487 * C219) *
                C9423) *
               C2135 +
           ((C2962 + C2963) * C124 + (C2964 + C2965) * C9423) * C9495) *
              C735 -
          (((C1034 * C2865 + C9487 * C2951 + C1032 * C2866 + C1027 * C2952) *
                C9423 +
            (C1034 * C2813 + C9487 * C2815 + C1032 * C2814 + C1027 * C2816) *
                C124) *
               C9495 +
           ((C2965 + C2964) * C9423 + (C2963 + C2962) * C124) * C2135) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C9423 * C249) * C1027 + C266 * C9487) *
               C2135 +
           (C3010 + C3004) * C9495) *
              C735 -
          (((C248 * C2813 + C3005 + C3005 + C9423 * C2999) * C9487 +
            (C248 * C2814 + C3006 + C3006 + C9423 * C3000) * C1027) *
               C9495 +
           (C3004 + C3010) * C2135) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C124 +
            (C2213 * C125 + C2135 * C293 + C2214 * C777 + C9495 * C902) *
                C9423) *
               C1027 +
           ((C2224 + C2225) * C124 + (C2339 + C2340) * C9423) * C9487) *
              C735 -
          (((C2214 * C2865 + C9495 * C3044 + C2213 * C776 + C2135 * C901) *
                C9423 +
            (C2214 * C2813 + C9495 * C2913 + C2213 * C738 + C2135 * C808) *
                C124) *
               C9487 +
           ((C2214 * C2866 + C9495 * C3045 + C2213 * C777 + C2135 * C902) *
                C9423 +
            (C2214 * C2814 + C9495 * C2914 + C2213 * C739 + C2135 * C809) *
                C124) *
               C1027) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1032 * C80 + C1027 * C84 + C1034 * C81 + C9487 * C85) * C2213 +
           (C1032 * C172 + C1027 * C333 + C1034 * C173 + C9487 * C334) * C2135 +
           (C2962 + C2963) * C2214 + (C3087 + C3088) * C9495) *
              C9423 * C735 -
          ((C1034 * C2913 + C9487 * C3080 + C1032 * C2914 + C1027 * C3081) *
               C9495 +
           (C1034 * C2813 + C9487 * C2815 + C1032 * C2814 + C1027 * C2816) *
               C2214 +
           (C3088 + C3087) * C2135 + (C2963 + C2962) * C2213) *
              C9423 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C124 * C80 + C9423 * C125) * C2213 +
                     (C124 * C172 + C9423 * C363) * C2135 + C2876 * C2214 +
                     C3127 * C9495) *
                        C1027 +
                    (C2409 + C2410 + C2411 + C2415) * C9487) *
                       C735 -
                   (((C124 * C2913 + C9423 * C3122) * C9495 +
                     (C124 * C2813 + C9423 * C2865) * C2214 + C2414 * C2135 +
                     C2178 * C2213) *
                        C9487 +
                    ((C124 * C2914 + C9423 * C3123) * C9495 +
                     (C124 * C2814 + C9423 * C2866) * C2214 + C3127 * C2135 +
                     C2876 * C2213) *
                        C1027) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] += (2 * std::pow(Pi, 2.5) *
                  (((C2449 * C80 + C2452 + C2452 + C2135 * C404 + C2450 * C739 +
                     C2453 + C2453 + C9495 * C989) *
                        C9423 * C1027 +
                    (C2466 + C2467) * C9423 * C9487) *
                       C735 -
                   ((C2450 * C2813 + C3164 + C3164 + C9495 * C3161 +
                     C2449 * C738 + C3165 + C3165 + C2135 * C988) *
                        C9423 * C9487 +
                    (C2450 * C2814 + C3166 + C3166 + C9495 * C3162 +
                     C2449 * C739 + C3167 + C3167 + C2135 * C989) *
                        C9423 * C1027) *
                       C736) *
                  C9503 * C9504) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] += (2 * std::pow(Pi, 2.5) *
                  (((C3205 * C80 + C3210 + C3210 + C3201 * C88 + C3207 * C81 +
                     C3211 + C3211 + C9487 * C89) *
                        C9438 * C3203 +
                    (C3205 * C455 + C3212 + C3212 + C3201 * C461 +
                     C3207 * C454 + C3213 + C3213 + C9487 * C460) *
                        C9438 * C9493) *
                       C9502 * C9503 * C72 -
                   ((C3207 * C453 + C3214 + C3214 + C9487 * C459 +
                     C3205 * C454 + C3215 + C3215 + C3201 * C460) *
                        C9438 * C9493 +
                    (C3207 * C82 + C3216 + C3216 + C9487 * C90 + C3205 * C81 +
                     C3217 + C3217 + C3201 * C89) *
                        C9438 * C3203) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C3206 +
           (C3251 * C84 + C3203 * C129 + C3252 * C458 + C9493 * C496) * C3201 +
           (C3262 + C3263) * C3208 + (C3264 + C3265) * C9487) *
              C9438 * C9502 * C9503 * C72 -
          ((C3252 * C456 + C9493 * C494 + C3251 * C86 + C3203 * C131) * C9487 +
           (C3252 * C453 + C9493 * C491 + C3251 * C82 + C3203 * C127) * C3208 +
           (C3265 + C3264) * C3201 + (C3263 + C3262) * C3206) *
              C9438 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C9438 * C172) * C3206 +
            (C171 * C84 + C9438 * C176) * C3201 + C189 * C3208 + C190 * C9487) *
               C3203 +
           (C1508 * C3206 + C1509 * C3201 + C1130 * C3208 + C1131 * C9487) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C171 * C456 + C9438 * C526) * C9487 +
            (C171 * C453 + C9438 * C523) * C3208 + C1131 * C3201 +
            C1130 * C3206) *
               C9493 +
           (C192 * C9487 + C191 * C3208 + C190 * C3201 + C189 * C3206) *
               C3203) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C3251 +
           (C3206 * C125 + C3201 * C218 + C3208 * C126 + C9487 * C219) * C3203 +
           (C3206 * C455 + C3201 * C458 + C3208 * C454 + C9487 * C457) * C3252 +
           (C3206 * C493 + C3201 * C557 + C3208 * C492 + C9487 * C556) *
               C9493) *
              C9438 * C9502 * C9503 * C72 -
          ((C3208 * C491 + C9487 * C555 + C3206 * C492 + C3201 * C556) * C9493 +
           (C3208 * C453 + C9487 * C456 + C3206 * C454 + C3201 * C457) * C3252 +
           (C3208 * C127 + C9487 * C220 + C3206 * C126 + C3201 * C219) * C3203 +
           (C3208 * C82 + C9487 * C86 + C3206 * C81 + C3201 * C85) * C3251) *
              C9438 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] += (2 * std::pow(Pi, 2.5) *
                  (((C3367 * C80 + C3370 + C3370 + C3203 * C249 + C3368 * C455 +
                     C3371 + C3371 + C9493 * C586) *
                        C3201 +
                    (C3384 + C3385) * C9487) *
                       C9438 * C9502 * C9503 * C72 -
                   ((C3368 * C453 + C3378 + C3378 + C9493 * C584 + C3367 * C82 +
                     C3379 + C3379 + C3203 * C251) *
                        C9487 +
                    (C3385 + C3384) * C3201) *
                       C9438 * C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C171 * C80 + C9438 * C172) * C3251 +
                     (C171 * C125 + C9438 * C293) * C3203 + C1508 * C3252 +
                     C1638 * C9493) *
                        C3201 +
                    (C3420 + C3421 + C3422 + C3423) * C9487) *
                       C9502 * C9503 * C72 -
                   (((C171 * C491 + C9438 * C616) * C9493 +
                     (C171 * C453 + C9438 * C523) * C3252 + C305 * C3203 +
                     C191 * C3251) *
                        C9487 +
                    (C3423 + C3422 + C3421 + C3420) * C3201) *
                       C9502 * C9503 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C171 +
            (C3206 * C172 + C3201 * C333 + C3208 * C173 + C9487 * C334) *
                C9438) *
               C3203 +
           ((C3206 * C455 + C3201 * C458 + C3208 * C454 + C9487 * C457) * C171 +
            (C3206 * C525 + C3201 * C647 + C3208 * C524 + C9487 * C646) *
                C9438) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C3208 * C523 + C9487 * C645 + C3206 * C524 + C3201 * C646) *
                C9438 +
            (C3208 * C453 + C9487 * C456 + C3206 * C454 + C3201 * C457) *
                C171) *
               C9493 +
           ((C3208 * C174 + C9487 * C335 + C3206 * C173 + C3201 * C334) *
                C9438 +
            (C3208 * C82 + C9487 * C86 + C3206 * C81 + C3201 * C85) * C171) *
               C3203) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C171 +
            (C3251 * C172 + C3203 * C363 + C3252 * C525 + C9493 * C676) *
                C9438) *
               C3201 +
           ((C3262 + C3263) * C171 + (C3496 + C3497) * C9438) * C9487) *
              C9502 * C9503 * C72 -
          (((C3252 * C523 + C9493 * C674 + C3251 * C174 + C3203 * C365) *
                C9438 +
            (C3252 * C453 + C9493 * C491 + C3251 * C82 + C3203 * C127) * C171) *
               C9487 +
           ((C3497 + C3496) * C9438 + (C3263 + C3262) * C171) * C3201) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C9438 * C404) * C3203 + C1759 * C9493) *
               C3201 +
           (C3532 + C3533) * C9487) *
              C9502 * C9503 * C72 -
          (((C403 * C453 + C707 + C707 + C9438 * C703) * C9493 + C422 * C3203) *
               C9487 +
           (C3533 + C3532) * C3201) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] += (2 * std::pow(Pi, 2.5) *
                   (((C3205 * C80 + C3210 + C3210 + C3201 * C88 + C3207 * C81 +
                      C3211 + C3211 + C9487 * C89) *
                         C9438 * C3203 +
                     (C3578 + C3579) * C9438 * C9493) *
                        C9502 * C450 -
                    ((C3207 * C1407 + C3572 + C3572 + C9487 * C1411 +
                      C3205 * C1408 + C3573 + C3573 + C3201 * C1412) *
                         C9438 * C9493 +
                     (C3579 + C3578) * C9438 * C3203) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C3206 +
           (C3251 * C84 + C3203 * C129 + C3252 * C458 + C9493 * C496) * C3201 +
           (C3262 + C3263) * C3208 + (C3264 + C3265) * C9487) *
              C9438 * C9502 * C450 -
          ((C3252 * C1409 + C9493 * C1461 + C3251 * C457 + C3203 * C495) *
               C9487 +
           (C3252 * C1407 + C9493 * C1459 + C3251 * C454 + C3203 * C492) *
               C3208 +
           (C3252 * C1410 + C9493 * C1462 + C3251 * C458 + C3203 * C496) *
               C3201 +
           (C3252 * C1408 + C9493 * C1460 + C3251 * C455 + C3203 * C493) *
               C3206) *
              C9438 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C9438 * C172) * C3206 +
            (C171 * C84 + C9438 * C176) * C3201 + C189 * C3208 + C190 * C9487) *
               C3203 +
           (C3648 + C3649 + C3650 + C3651) * C9493) *
              C9502 * C450 -
          (((C171 * C1409 + C9438 * C1499) * C9487 +
            (C171 * C1407 + C9438 * C1497) * C3208 +
            (C171 * C1410 + C9438 * C1500) * C3201 +
            (C171 * C1408 + C9438 * C1498) * C3206) *
               C9493 +
           (C3651 + C3650 + C3649 + C3648) * C3203) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C3251 +
           (C3206 * C125 + C3201 * C218 + C3208 * C126 + C9487 * C219) * C3203 +
           (C3694 + C3695) * C3252 + (C3696 + C3697) * C9493) *
              C9438 * C9502 * C450 -
          ((C3208 * C1459 + C9487 * C1545 + C3206 * C1460 + C3201 * C1546) *
               C9493 +
           (C3208 * C1407 + C9487 * C1409 + C3206 * C1408 + C3201 * C1410) *
               C3252 +
           (C3697 + C3696) * C3203 + (C3695 + C3694) * C3251) *
              C9438 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] += (2 * std::pow(Pi, 2.5) *
                   (((C3367 * C80 + C3370 + C3370 + C3203 * C249 +
                      C3368 * C455 + C3371 + C3371 + C9493 * C586) *
                         C3201 +
                     (C3384 + C3385) * C9487) *
                        C9438 * C9502 * C450 -
                    ((C3368 * C1407 + C3732 + C3732 + C9493 * C1593 +
                      C3367 * C454 + C3733 + C3733 + C3203 * C585) *
                         C9487 +
                     (C3368 * C1408 + C3734 + C3734 + C9493 * C1594 +
                      C3367 * C455 + C3735 + C3735 + C3203 * C586) *
                         C3201) *
                        C9438 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] += (2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C9438 * C172) * C3251 +
                      (C171 * C125 + C9438 * C293) * C3203 + C1508 * C3252 +
                      C1638 * C9493) *
                         C3201 +
                     (C3420 + C3421 + C3422 + C3423) * C9487) *
                        C9502 * C450 -
                    (((C171 * C1459 + C9438 * C1633) * C9493 +
                      (C171 * C1407 + C9438 * C1497) * C3252 + C1257 * C3203 +
                      C1130 * C3251) *
                         C9487 +
                     ((C171 * C1460 + C9438 * C1634) * C9493 +
                      (C171 * C1408 + C9438 * C1498) * C3252 + C1638 * C3203 +
                      C1508 * C3251) *
                         C3201) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C171 +
            (C3206 * C172 + C3201 * C333 + C3208 * C173 + C9487 * C334) *
                C9438) *
               C3203 +
           ((C3694 + C3695) * C171 + (C3808 + C3809) * C9438) * C9493) *
              C9502 * C450 -
          (((C3208 * C1497 + C9487 * C1672 + C3206 * C1498 + C3201 * C1673) *
                C9438 +
            (C3208 * C1407 + C9487 * C1409 + C3206 * C1408 + C3201 * C1410) *
                C171) *
               C9493 +
           ((C3809 + C3808) * C9438 + (C3695 + C3694) * C171) * C3203) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C171 +
            (C3251 * C172 + C3203 * C363 + C3252 * C525 + C9493 * C676) *
                C9438) *
               C3201 +
           ((C3262 + C3263) * C171 + (C3496 + C3497) * C9438) * C9487) *
              C9502 * C450 -
          (((C3252 * C1497 + C9493 * C1714 + C3251 * C524 + C3203 * C675) *
                C9438 +
            (C3252 * C1407 + C9493 * C1459 + C3251 * C454 + C3203 * C492) *
                C171) *
               C9487 +
           ((C3252 * C1498 + C9493 * C1715 + C3251 * C525 + C3203 * C676) *
                C9438 +
            (C3252 * C1408 + C9493 * C1460 + C3251 * C455 + C3203 * C493) *
                C171) *
               C3201) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C9438 * C404) * C3203 + C1759 * C9493) *
               C3201 +
           (C3532 + C3533) * C9487) *
              C9502 * C450 -
          (((C403 * C1407 + C1755 + C1755 + C9438 * C1750) * C9493 +
            C1372 * C3203) *
               C9487 +
           ((C403 * C1408 + C1756 + C1756 + C9438 * C1751) * C9493 +
            C1759 * C3203) *
               C3201) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] += (2 * std::pow(Pi, 2.5) *
                   (((C3205 * C80 + C3210 + C3210 + C3201 * C88 + C3207 * C81 +
                      C3211 + C3211 + C9487 * C89) *
                         C9438 * C3203 +
                     (C3578 + C3579) * C9438 * C9493) *
                        C735 -
                    ((C3207 * C1793 + C3912 + C3912 + C9487 * C1797 +
                      C3205 * C1794 + C3913 + C3913 + C3201 * C1798) *
                         C9438 * C9493 +
                     (C3207 * C738 + C3914 + C3914 + C9487 * C744 +
                      C3205 * C739 + C3915 + C3915 + C3201 * C745) *
                         C9438 * C3203) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C3206 +
           (C3251 * C84 + C3203 * C129 + C3252 * C458 + C9493 * C496) * C3201 +
           (C3262 + C3263) * C3208 + (C3264 + C3265) * C9487) *
              C9438 * C735 -
          ((C3252 * C1795 + C9493 * C1839 + C3251 * C741 + C3203 * C779) *
               C9487 +
           (C3252 * C1793 + C9493 * C1837 + C3251 * C738 + C3203 * C776) *
               C3208 +
           (C3252 * C1796 + C9493 * C1840 + C3251 * C742 + C3203 * C780) *
               C3201 +
           (C3252 * C1794 + C9493 * C1838 + C3251 * C739 + C3203 * C777) *
               C3206) *
              C9438 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C171 * C80 + C9438 * C172) * C3206 +
            (C171 * C84 + C9438 * C176) * C3201 + C189 * C3208 + C190 * C9487) *
               C3203 +
           (C3648 + C3649 + C3650 + C3651) * C9493) *
              C735 -
          (((C171 * C1795 + C9438 * C1877) * C9487 +
            (C171 * C1793 + C9438 * C1875) * C3208 +
            (C171 * C1796 + C9438 * C1878) * C3201 +
            (C171 * C1794 + C9438 * C1876) * C3206) *
               C9493 +
           ((C171 * C741 + C9438 * C811) * C9487 +
            (C171 * C738 + C9438 * C808) * C3208 +
            (C171 * C742 + C9438 * C812) * C3201 +
            (C171 * C739 + C9438 * C809) * C3206) *
               C3203) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C3251 +
           (C3206 * C125 + C3201 * C218 + C3208 * C126 + C9487 * C219) * C3203 +
           (C3694 + C3695) * C3252 + (C3696 + C3697) * C9493) *
              C9438 * C735 -
          ((C3208 * C1837 + C9487 * C1913 + C3206 * C1838 + C3201 * C1914) *
               C9493 +
           (C3208 * C1793 + C9487 * C1795 + C3206 * C1794 + C3201 * C1796) *
               C3252 +
           (C3208 * C776 + C9487 * C840 + C3206 * C777 + C3201 * C841) * C3203 +
           (C3208 * C738 + C9487 * C741 + C3206 * C739 + C3201 * C742) *
               C3251) *
              C9438 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] += (2 * std::pow(Pi, 2.5) *
                   (((C3367 * C80 + C3370 + C3370 + C3203 * C249 +
                      C3368 * C455 + C3371 + C3371 + C9493 * C586) *
                         C3201 +
                     (C3384 + C3385) * C9487) *
                        C9438 * C735 -
                    ((C3368 * C1793 + C4052 + C4052 + C9493 * C1949 +
                      C3367 * C738 + C4053 + C4053 + C3203 * C869) *
                         C9487 +
                     (C3368 * C1794 + C4054 + C4054 + C9493 * C1950 +
                      C3367 * C739 + C4055 + C4055 + C3203 * C870) *
                         C3201) *
                        C9438 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] += (2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C9438 * C172) * C3251 +
                      (C171 * C125 + C9438 * C293) * C3203 + C1508 * C3252 +
                      C1638 * C9493) *
                         C3201 +
                     (C3420 + C3421 + C3422 + C3423) * C9487) *
                        C735 -
                    (((C171 * C1837 + C9438 * C1989) * C9493 +
                      (C171 * C1793 + C9438 * C1875) * C3252 +
                      (C171 * C776 + C9438 * C901) * C3203 +
                      (C171 * C738 + C9438 * C808) * C3251) *
                         C9487 +
                     ((C171 * C1838 + C9438 * C1990) * C9493 +
                      (C171 * C1794 + C9438 * C1876) * C3252 +
                      (C171 * C777 + C9438 * C902) * C3203 +
                      (C171 * C739 + C9438 * C809) * C3251) *
                         C3201) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C171 +
            (C3206 * C172 + C3201 * C333 + C3208 * C173 + C9487 * C334) *
                C9438) *
               C3203 +
           ((C3694 + C3695) * C171 + (C3808 + C3809) * C9438) * C9493) *
              C735 -
          (((C3208 * C1875 + C9487 * C2025 + C3206 * C1876 + C3201 * C2026) *
                C9438 +
            (C3208 * C1793 + C9487 * C1795 + C3206 * C1794 + C3201 * C1796) *
                C171) *
               C9493 +
           ((C3208 * C808 + C9487 * C930 + C3206 * C809 + C3201 * C931) *
                C9438 +
            (C3208 * C738 + C9487 * C741 + C3206 * C739 + C3201 * C742) *
                C171) *
               C3203) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C171 +
            (C3251 * C172 + C3203 * C363 + C3252 * C525 + C9493 * C676) *
                C9438) *
               C3201 +
           ((C3262 + C3263) * C171 + (C3496 + C3497) * C9438) * C9487) *
              C735 -
          (((C3252 * C1875 + C9493 * C2061 + C3251 * C808 + C3203 * C959) *
                C9438 +
            (C3252 * C1793 + C9493 * C1837 + C3251 * C738 + C3203 * C776) *
                C171) *
               C9487 +
           ((C3252 * C1876 + C9493 * C2062 + C3251 * C809 + C3203 * C960) *
                C9438 +
            (C3252 * C1794 + C9493 * C1838 + C3251 * C739 + C3203 * C777) *
                C171) *
               C3201) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C403 * C80 + C409 + C409 + C9438 * C404) * C3203 + C1759 * C9493) *
               C3201 +
           (C3532 + C3533) * C9487) *
              C735 -
          (((C403 * C1793 + C2100 + C2100 + C9438 * C2097) * C9493 +
            (C403 * C738 + C992 + C992 + C9438 * C988) * C3203) *
               C9487 +
           ((C403 * C1794 + C2101 + C2101 + C9438 * C2098) * C9493 +
            (C403 * C739 + C993 + C993 + C9438 * C989) * C3203) *
               C3201) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C9438 * C4218 +
           (C4221 * C455 + C4225 + C4225 + C9363 * C461) * C9438 * C4219 +
           (C4221 * C1408 + C4226 + C4226 + C9363 * C1412) * C9438 * C4220) *
              C9502 * C9503 * C72 -
          ((C4221 * C1407 + C4227 + C4227 + C9363 * C1411) * C9438 * C4220 +
           (C4221 * C454 + C4228 + C4228 + C9363 * C460) * C9438 * C4219 +
           (C4221 * C81 + C4229 + C4229 + C9363 * C89) * C9438 * C4218) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4255 * C80 + C4218 * C125 + C4256 * C455 + C4219 * C493 +
                      C4257 * C1408 + C4220 * C1460) *
                         C4222 +
                     (C4255 * C84 + C4218 * C129 + C4256 * C458 + C4219 * C496 +
                      C4257 * C1410 + C4220 * C1462) *
                         C9363) *
                        C9438 * C9502 * C9503 * C72 -
                    ((C4257 * C1409 + C4220 * C1461 + C4256 * C457 +
                      C4219 * C495 + C4255 * C85 + C4218 * C130) *
                         C9363 +
                     (C4257 * C1407 + C4220 * C1459 + C4256 * C454 +
                      C4219 * C492 + C4255 * C81 + C4218 * C126) *
                         C4222) *
                        C9438 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C9438 * C172) * C4222 +
                      (C171 * C84 + C9438 * C176) * C9363) *
                         C4218 +
                     (C1508 * C4222 + C1509 * C9363) * C4219 +
                     ((C171 * C1408 + C9438 * C1498) * C4222 +
                      (C171 * C1410 + C9438 * C1500) * C9363) *
                         C4220) *
                        C9502 * C9503 * C72 -
                    (((C171 * C1409 + C9438 * C1499) * C9363 +
                      (C171 * C1407 + C9438 * C1497) * C4222) *
                         C4220 +
                     (C1131 * C9363 + C1130 * C4222) * C4219 +
                     (C190 * C9363 + C189 * C4222) * C4218) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4222 * C80 + C9363 * C84) * C4255 +
                     (C4222 * C125 + C9363 * C218) * C4218 +
                     (C4222 * C455 + C9363 * C458) * C4256 +
                     (C4222 * C493 + C9363 * C557) * C4219 +
                     (C4222 * C1408 + C9363 * C1410) * C4257 +
                     (C4222 * C1460 + C9363 * C1546) * C4220) *
                        C9438 * C9502 * C9503 * C72 -
                    ((C4222 * C1459 + C9363 * C1545) * C4220 +
                     (C4222 * C1407 + C9363 * C1409) * C4257 +
                     (C4222 * C492 + C9363 * C556) * C4219 +
                     (C4222 * C454 + C9363 * C457) * C4256 +
                     (C4222 * C126 + C9363 * C219) * C4218 +
                     (C4222 * C81 + C9363 * C85) * C4255) *
                        C9438 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] += (2 * std::pow(Pi, 2.5) *
                   ((C4336 * C80 + C4340 + C4340 + C4218 * C249 + C4337 * C455 +
                     C4341 + C4341 + C4219 * C586 + C4338 * C1408 + C4342 +
                     C4342 + C4220 * C1594) *
                        C9363 * C9438 * C9502 * C9503 * C72 -
                    (C4338 * C1407 + C4343 + C4343 + C4220 * C1593 +
                     C4337 * C454 + C4344 + C4344 + C4219 * C585 + C4336 * C81 +
                     C4345 + C4345 + C4218 * C250) *
                        C9363 * C9438 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[12] += (2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C9438 * C172) * C4255 +
                     (C171 * C125 + C9438 * C293) * C4218 + C1508 * C4256 +
                     C1638 * C4219 + (C171 * C1408 + C9438 * C1498) * C4257 +
                     (C171 * C1460 + C9438 * C1634) * C4220) *
                        C9363 * C9502 * C9503 * C72 -
                    ((C171 * C1459 + C9438 * C1633) * C4220 +
                     (C171 * C1407 + C9438 * C1497) * C4257 + C1257 * C4219 +
                     C1130 * C4256 + C304 * C4218 + C189 * C4255) *
                        C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C171 +
                      (C4222 * C172 + C9363 * C333) * C9438) *
                         C4218 +
                     ((C4222 * C455 + C9363 * C458) * C171 +
                      (C4222 * C525 + C9363 * C647) * C9438) *
                         C4219 +
                     ((C4222 * C1408 + C9363 * C1410) * C171 +
                      (C4222 * C1498 + C9363 * C1673) * C9438) *
                         C4220) *
                        C9502 * C9503 * C72 -
                    (((C4222 * C1497 + C9363 * C1672) * C9438 +
                      (C4222 * C1407 + C9363 * C1409) * C171) *
                         C4220 +
                     ((C4222 * C524 + C9363 * C646) * C9438 +
                      (C4222 * C454 + C9363 * C457) * C171) *
                         C4219 +
                     ((C4222 * C173 + C9363 * C334) * C9438 +
                      (C4222 * C81 + C9363 * C85) * C171) *
                         C4218) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[12] += (2 * std::pow(Pi, 2.5) *
                   (((C4255 * C80 + C4218 * C125 + C4256 * C455 + C4219 * C493 +
                      C4257 * C1408 + C4220 * C1460) *
                         C171 +
                     (C4255 * C172 + C4218 * C363 + C4256 * C525 +
                      C4219 * C676 + C4257 * C1498 + C4220 * C1715) *
                         C9438) *
                        C9363 * C9502 * C9503 * C72 -
                    ((C4257 * C1497 + C4220 * C1714 + C4256 * C524 +
                      C4219 * C675 + C4255 * C173 + C4218 * C364) *
                         C9438 +
                     (C4257 * C1407 + C4220 * C1459 + C4256 * C454 +
                      C4219 * C492 + C4255 * C81 + C4218 * C126) *
                         C171) *
                        C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C403 * C80 + C409 + C409 + C9438 * C404) * C4218 + C1759 * C4219 +
           (C403 * C1408 + C1756 + C1756 + C9438 * C1751) * C4220) *
              C9363 * C9502 * C9503 * C72 -
          ((C403 * C1407 + C1755 + C1755 + C9438 * C1750) * C4220 +
           C1372 * C4219 + C421 * C4218) *
              C9363 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C9438 * C4218 +
           C4490 * C4219 + C4491 * C4220) *
              C9502 * C450 -
          ((C4221 * C4475 + C4483 + C4483 + C9363 * C4477) * C9438 * C4220 +
           C4491 * C4219 + C4490 * C4218) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4255 * C80 + C4218 * C125 + C4256 * C455 + C4219 * C493 +
                      C4257 * C1408 + C4220 * C1460) *
                         C4222 +
                     (C4255 * C84 + C4218 * C129 + C4256 * C458 + C4219 * C496 +
                      C4257 * C1410 + C4220 * C1462) *
                         C9363) *
                        C9438 * C9502 * C450 -
                    ((C4257 * C4476 + C4220 * C4518 + C4256 * C1410 +
                      C4219 * C1462 + C4255 * C458 + C4218 * C496) *
                         C9363 +
                     (C4257 * C4475 + C4220 * C4517 + C4256 * C1408 +
                      C4219 * C1460 + C4255 * C455 + C4218 * C493) *
                         C4222) *
                        C9438 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexz[13] += (2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C9438 * C172) * C4222 +
                      (C171 * C84 + C9438 * C176) * C9363) *
                         C4218 +
                     (C4548 + C4549) * C4219 + (C4556 + C4557) * C4220) *
                        C9502 * C450 -
                    (((C171 * C4476 + C9438 * C4546) * C9363 +
                      (C171 * C4475 + C9438 * C4545) * C4222) *
                         C4220 +
                     (C4557 + C4556) * C4219 + (C4549 + C4548) * C4218) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4222 * C80 + C9363 * C84) * C4255 +
                     (C4222 * C125 + C9363 * C218) * C4218 + C4593 * C4256 +
                     C4594 * C4219 + C4595 * C4257 + C4596 * C4220) *
                        C9438 * C9502 * C450 -
                    ((C4222 * C4517 + C9363 * C4583) * C4220 +
                     (C4222 * C4475 + C9363 * C4476) * C4257 + C4596 * C4219 +
                     C4595 * C4256 + C4594 * C4218 + C4593 * C4255) *
                        C9438 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[13] += (2 * std::pow(Pi, 2.5) *
                   ((C4336 * C80 + C4340 + C4340 + C4218 * C249 + C4337 * C455 +
                     C4341 + C4341 + C4219 * C586 + C4338 * C1408 + C4342 +
                     C4342 + C4220 * C1594) *
                        C9363 * C9438 * C9502 * C450 -
                    (C4338 * C4475 + C4624 + C4624 + C4220 * C4622 +
                     C4337 * C1408 + C4625 + C4625 + C4219 * C1594 +
                     C4336 * C455 + C4626 + C4626 + C4218 * C586) *
                        C9363 * C9438 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] += (2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C9438 * C172) * C4255 +
                     (C171 * C125 + C9438 * C293) * C4218 + C1508 * C4256 +
                     C1638 * C4219 + C4554 * C4257 + C4656 * C4220) *
                        C9363 * C9502 * C450 -
                    ((C171 * C4517 + C9438 * C4652) * C4220 +
                     (C171 * C4475 + C9438 * C4545) * C4257 + C4656 * C4219 +
                     C4554 * C4256 + C1638 * C4218 + C1508 * C4255) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C171 +
                      (C4222 * C172 + C9363 * C333) * C9438) *
                         C4218 +
                     (C4684 + C4692) * C4219 + (C4687 + C4693) * C4220) *
                        C9502 * C450 -
                    (((C4222 * C4545 + C9363 * C4682) * C9438 +
                      (C4222 * C4475 + C9363 * C4476) * C171) *
                         C4220 +
                     (C4693 + C4687) * C4219 + (C4692 + C4684) * C4218) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[13] += (2 * std::pow(Pi, 2.5) *
                   (((C4255 * C80 + C4218 * C125 + C4256 * C455 + C4219 * C493 +
                      C4257 * C1408 + C4220 * C1460) *
                         C171 +
                     (C4255 * C172 + C4218 * C363 + C4256 * C525 +
                      C4219 * C676 + C4257 * C1498 + C4220 * C1715) *
                         C9438) *
                        C9363 * C9502 * C450 -
                    ((C4257 * C4545 + C4220 * C4719 + C4256 * C1498 +
                      C4219 * C1715 + C4255 * C525 + C4218 * C676) *
                         C9438 +
                     (C4257 * C4475 + C4220 * C4517 + C4256 * C1408 +
                      C4219 * C1460 + C4255 * C455 + C4218 * C493) *
                         C171) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] += (2 * std::pow(Pi, 2.5) *
                   (((C403 * C80 + C409 + C409 + C9438 * C404) * C4218 +
                     C1759 * C4219 + C4753 * C4220) *
                        C9363 * C9502 * C450 -
                    ((C403 * C4475 + C4750 + C4750 + C9438 * C4746) * C4220 +
                     C4753 * C4219 + C1759 * C4218) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C9438 * C4218 +
           C4490 * C4219 + C4491 * C4220) *
              C735 -
          ((C4221 * C4779 + C4783 + C4783 + C9363 * C4781) * C9438 * C4220 +
           (C4221 * C1794 + C4784 + C4784 + C9363 * C1798) * C9438 * C4219 +
           (C4221 * C739 + C4785 + C4785 + C9363 * C745) * C9438 * C4218) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4255 * C80 + C4218 * C125 + C4256 * C455 + C4219 * C493 +
                      C4257 * C1408 + C4220 * C1460) *
                         C4222 +
                     (C4255 * C84 + C4218 * C129 + C4256 * C458 + C4219 * C496 +
                      C4257 * C1410 + C4220 * C1462) *
                         C9363) *
                        C9438 * C735 -
                    ((C4257 * C4780 + C4220 * C4812 + C4256 * C1796 +
                      C4219 * C1840 + C4255 * C742 + C4218 * C780) *
                         C9363 +
                     (C4257 * C4779 + C4220 * C4811 + C4256 * C1794 +
                      C4219 * C1838 + C4255 * C739 + C4218 * C777) *
                         C4222) *
                        C9438 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexz[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C171 * C80 + C9438 * C172) * C4222 +
                      (C171 * C84 + C9438 * C176) * C9363) *
                         C4218 +
                     (C4548 + C4549) * C4219 + (C4556 + C4557) * C4220) *
                        C735 -
                    (((C171 * C4780 + C9438 * C4840) * C9363 +
                      (C171 * C4779 + C9438 * C4839) * C4222) *
                         C4220 +
                     ((C171 * C1796 + C9438 * C1878) * C9363 +
                      (C171 * C1794 + C9438 * C1876) * C4222) *
                         C4219 +
                     ((C171 * C742 + C9438 * C812) * C9363 +
                      (C171 * C739 + C9438 * C809) * C4222) *
                         C4218) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4222 * C80 + C9363 * C84) * C4255 +
                     (C4222 * C125 + C9363 * C218) * C4218 + C4593 * C4256 +
                     C4594 * C4219 + C4595 * C4257 + C4596 * C4220) *
                        C9438 * C735 -
                    ((C4222 * C4811 + C9363 * C4867) * C4220 +
                     (C4222 * C4779 + C9363 * C4780) * C4257 +
                     (C4222 * C1838 + C9363 * C1914) * C4219 +
                     (C4222 * C1794 + C9363 * C1796) * C4256 +
                     (C4222 * C777 + C9363 * C841) * C4218 +
                     (C4222 * C739 + C9363 * C742) * C4255) *
                        C9438 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[14] += (2 * std::pow(Pi, 2.5) *
                   ((C4336 * C80 + C4340 + C4340 + C4218 * C249 + C4337 * C455 +
                     C4341 + C4341 + C4219 * C586 + C4338 * C1408 + C4342 +
                     C4342 + C4220 * C1594) *
                        C9363 * C9438 * C735 -
                    (C4338 * C4779 + C4896 + C4896 + C4220 * C4894 +
                     C4337 * C1794 + C4897 + C4897 + C4219 * C1950 +
                     C4336 * C739 + C4898 + C4898 + C4218 * C870) *
                        C9363 * C9438 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[14] += (2 * std::pow(Pi, 2.5) *
                   (((C171 * C80 + C9438 * C172) * C4255 +
                     (C171 * C125 + C9438 * C293) * C4218 + C1508 * C4256 +
                     C1638 * C4219 + C4554 * C4257 + C4656 * C4220) *
                        C9363 * C735 -
                    ((C171 * C4811 + C9438 * C4924) * C4220 +
                     (C171 * C4779 + C9438 * C4839) * C4257 +
                     (C171 * C1838 + C9438 * C1990) * C4219 +
                     (C171 * C1794 + C9438 * C1876) * C4256 +
                     (C171 * C777 + C9438 * C902) * C4218 +
                     (C171 * C739 + C9438 * C809) * C4255) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezx[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C171 +
                      (C4222 * C172 + C9363 * C333) * C9438) *
                         C4218 +
                     (C4684 + C4692) * C4219 + (C4687 + C4693) * C4220) *
                        C735 -
                    (((C4222 * C4839 + C9363 * C4951) * C9438 +
                      (C4222 * C4779 + C9363 * C4780) * C171) *
                         C4220 +
                     ((C4222 * C1876 + C9363 * C2026) * C9438 +
                      (C4222 * C1794 + C9363 * C1796) * C171) *
                         C4219 +
                     ((C4222 * C809 + C9363 * C931) * C9438 +
                      (C4222 * C739 + C9363 * C742) * C171) *
                         C4218) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[14] += (2 * std::pow(Pi, 2.5) *
                   (((C4255 * C80 + C4218 * C125 + C4256 * C455 + C4219 * C493 +
                      C4257 * C1408 + C4220 * C1460) *
                         C171 +
                     (C4255 * C172 + C4218 * C363 + C4256 * C525 +
                      C4219 * C676 + C4257 * C1498 + C4220 * C1715) *
                         C9438) *
                        C9363 * C735 -
                    ((C4257 * C4839 + C4220 * C4978 + C4256 * C1876 +
                      C4219 * C2062 + C4255 * C809 + C4218 * C960) *
                         C9438 +
                     (C4257 * C4779 + C4220 * C4811 + C4256 * C1794 +
                      C4219 * C1838 + C4255 * C739 + C4218 * C777) *
                         C171) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezz[14] += (2 * std::pow(Pi, 2.5) *
                   (((C403 * C80 + C409 + C409 + C9438 * C404) * C4218 +
                     C1759 * C4219 + C4753 * C4220) *
                        C9363 * C735 -
                    ((C403 * C4779 + C5007 + C5007 + C9438 * C5005) * C4220 +
                     (C403 * C1794 + C2101 + C2101 + C9438 * C2098) * C4219 +
                     (C403 * C739 + C993 + C993 + C9438 * C989) * C4218) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C2135 +
                      (C4221 * C739 + C4785 + C4785 + C9363 * C745) * C9495) *
                         C3203 +
                     (C4488 * C2135 +
                      (C4221 * C1794 + C4784 + C4784 + C9363 * C1798) * C9495) *
                         C9493) *
                        C9502 * C9503 * C72 -
                    (((C4221 * C1793 + C5042 + C5042 + C9363 * C1797) * C9495 +
                      (C4221 * C454 + C4228 + C4228 + C9363 * C460) * C2135) *
                         C9493 +
                     ((C4221 * C738 + C5043 + C5043 + C9363 * C744) * C9495 +
                      (C4221 * C81 + C4229 + C4229 + C9363 * C89) * C2135) *
                         C3203) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C4222 +
            (C3251 * C84 + C3203 * C129 + C3252 * C458 + C9493 * C496) *
                C9363) *
               C2135 +
           ((C3251 * C739 + C3203 * C777 + C3252 * C1794 + C9493 * C1838) *
                C4222 +
            (C3251 * C742 + C3203 * C780 + C3252 * C1796 + C9493 * C1840) *
                C9363) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C3252 * C1795 + C9493 * C1839 + C3251 * C741 + C3203 * C779) *
                C9363 +
            (C3252 * C1793 + C9493 * C1837 + C3251 * C738 + C3203 * C776) *
                C4222) *
               C9495 +
           ((C3265 + C3264) * C9363 + (C3263 + C3262) * C4222) * C2135) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C4222 +
            (C2213 * C84 + C2135 * C176 + C2214 * C742 + C9495 * C812) *
                C9363) *
               C3203 +
           ((C2213 * C455 + C2135 * C525 + C2214 * C1794 + C9495 * C1876) *
                C4222 +
            (C2213 * C458 + C2135 * C528 + C2214 * C1796 + C9495 * C1878) *
                C9363) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C2214 * C1795 + C9495 * C1877 + C2213 * C457 + C2135 * C527) *
                C9363 +
            (C2214 * C1793 + C9495 * C1875 + C2213 * C454 + C2135 * C524) *
                C4222) *
               C9493 +
           ((C2227 + C2226) * C9363 + (C2225 + C2224) * C4222) * C3203) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C3251 +
                      (C4222 * C125 + C9363 * C218) * C3203 + C4593 * C3252 +
                      C4594 * C9493) *
                         C2135 +
                     ((C4222 * C739 + C9363 * C742) * C3251 +
                      (C4222 * C777 + C9363 * C841) * C3203 +
                      (C4222 * C1794 + C9363 * C1796) * C3252 +
                      (C4222 * C1838 + C9363 * C1914) * C9493) *
                         C9495) *
                        C9502 * C9503 * C72 -
                    (((C4222 * C1837 + C9363 * C1913) * C9493 +
                      (C4222 * C1793 + C9363 * C1795) * C3252 +
                      (C4222 * C776 + C9363 * C840) * C3203 +
                      (C4222 * C738 + C9363 * C741) * C3251) *
                         C9495 +
                     ((C4222 * C492 + C9363 * C556) * C9493 +
                      (C4222 * C454 + C9363 * C457) * C3252 +
                      (C4222 * C126 + C9363 * C219) * C3203 +
                      (C4222 * C81 + C9363 * C85) * C3251) *
                         C2135) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] += (2 * std::pow(Pi, 2.5) *
                   (((C3367 * C80 + C3370 + C3370 + C3203 * C249 +
                      C3368 * C455 + C3371 + C3371 + C9493 * C586) *
                         C9363 * C2135 +
                     (C3367 * C739 + C4055 + C4055 + C3203 * C870 +
                      C3368 * C1794 + C4054 + C4054 + C9493 * C1950) *
                         C9363 * C9495) *
                        C9502 * C9503 * C72 -
                    ((C3368 * C1793 + C4052 + C4052 + C9493 * C1949 +
                      C3367 * C738 + C4053 + C4053 + C3203 * C869) *
                         C9363 * C9495 +
                     (C3385 + C3384) * C9363 * C2135) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C3251 +
           (C2213 * C125 + C2135 * C293 + C2214 * C777 + C9495 * C902) * C3203 +
           (C2213 * C455 + C2135 * C525 + C2214 * C1794 + C9495 * C1876) *
               C3252 +
           (C2213 * C493 + C2135 * C618 + C2214 * C1838 + C9495 * C1990) *
               C9493) *
              C9363 * C9502 * C9503 * C72 -
          ((C2214 * C1837 + C9495 * C1989 + C2213 * C492 + C2135 * C617) *
               C9493 +
           (C2214 * C1793 + C9495 * C1875 + C2213 * C454 + C2135 * C524) *
               C3252 +
           (C2340 + C2339) * C3203 + (C2225 + C2224) * C3251) *
              C9363 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C2213 +
                      (C4222 * C172 + C9363 * C333) * C2135 +
                      (C4222 * C739 + C9363 * C742) * C2214 +
                      (C4222 * C809 + C9363 * C931) * C9495) *
                         C3203 +
                     (C4593 * C2213 + C4690 * C2135 +
                      (C4222 * C1794 + C9363 * C1796) * C2214 +
                      (C4222 * C1876 + C9363 * C2026) * C9495) *
                         C9493) *
                        C9502 * C9503 * C72 -
                    (((C4222 * C1875 + C9363 * C2025) * C9495 +
                      (C4222 * C1793 + C9363 * C1795) * C2214 +
                      (C4222 * C524 + C9363 * C646) * C2135 +
                      (C4222 * C454 + C9363 * C457) * C2213) *
                         C9493 +
                     ((C4222 * C808 + C9363 * C930) * C9495 +
                      (C4222 * C738 + C9363 * C741) * C2214 +
                      (C4222 * C173 + C9363 * C334) * C2135 +
                      (C4222 * C81 + C9363 * C85) * C2213) *
                         C3203) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C2213 +
           (C3251 * C172 + C3203 * C363 + C3252 * C525 + C9493 * C676) * C2135 +
           (C3251 * C739 + C3203 * C777 + C3252 * C1794 + C9493 * C1838) *
               C2214 +
           (C3251 * C809 + C3203 * C960 + C3252 * C1876 + C9493 * C2062) *
               C9495) *
              C9363 * C9502 * C9503 * C72 -
          ((C3252 * C1875 + C9493 * C2061 + C3251 * C808 + C3203 * C959) *
               C9495 +
           (C3252 * C1793 + C9493 * C1837 + C3251 * C738 + C3203 * C776) *
               C2214 +
           (C3497 + C3496) * C2135 + (C3263 + C3262) * C2213) *
              C9363 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] += (2 * std::pow(Pi, 2.5) *
                   (((C2449 * C80 + C2452 + C2452 + C2135 * C404 +
                      C2450 * C739 + C2453 + C2453 + C9495 * C989) *
                         C3203 +
                     (C2449 * C455 + C2779 + C2779 + C2135 * C705 +
                      C2450 * C1794 + C2778 + C2778 + C9495 * C2098) *
                         C9493) *
                        C9363 * C9502 * C9503 * C72 -
                    ((C2450 * C1793 + C2776 + C2776 + C9495 * C2097 +
                      C2449 * C454 + C2777 + C2777 + C2135 * C704) *
                         C9493 +
                     (C2467 + C2466) * C3203) *
                        C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] += (2 * std::pow(Pi, 2.5) *
                   ((((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C2135 +
                      (C4221 * C739 + C4785 + C4785 + C9363 * C745) * C9495) *
                         C3203 +
                     (C5350 + C5356) * C9493) *
                        C9502 * C450 -
                    (((C4221 * C4779 + C4783 + C4783 + C9363 * C4781) * C9495 +
                      C4489 * C2135) *
                         C9493 +
                     (C5356 + C5350) * C3203) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C4222 +
            (C3251 * C84 + C3203 * C129 + C3252 * C458 + C9493 * C496) *
                C9363) *
               C2135 +
           ((C3251 * C739 + C3203 * C777 + C3252 * C1794 + C9493 * C1838) *
                C4222 +
            (C3251 * C742 + C3203 * C780 + C3252 * C1796 + C9493 * C1840) *
                C9363) *
               C9495) *
              C9502 * C450 -
          (((C3252 * C4780 + C9493 * C4812 + C3251 * C1796 + C3203 * C1840) *
                C9363 +
            (C3252 * C4779 + C9493 * C4811 + C3251 * C1794 + C3203 * C1838) *
                C4222) *
               C9495 +
           ((C3252 * C1410 + C9493 * C1462 + C3251 * C458 + C3203 * C496) *
                C9363 +
            (C3252 * C1408 + C9493 * C1460 + C3251 * C455 + C3203 * C493) *
                C4222) *
               C2135) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C4222 +
            (C2213 * C84 + C2135 * C176 + C2214 * C742 + C9495 * C812) *
                C9363) *
               C3203 +
           ((C5433 + C5434) * C4222 + (C5435 + C5436) * C9363) * C9493) *
              C9502 * C450 -
          (((C2214 * C4780 + C9495 * C4840 + C2213 * C1410 + C2135 * C1500) *
                C9363 +
            (C2214 * C4779 + C9495 * C4839 + C2213 * C1408 + C2135 * C1498) *
                C4222) *
               C9493 +
           ((C5436 + C5435) * C9363 + (C5434 + C5433) * C4222) * C3203) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4222 * C80 + C9363 * C84) * C3251 +
            (C4222 * C125 + C9363 * C218) * C3203 + C4593 * C3252 +
            C4594 * C9493) *
               C2135 +
           ((C4222 * C739 + C9363 * C742) * C3251 +
            (C4222 * C777 + C9363 * C841) * C3203 + C5475 * C3252 +
            C5476 * C9493) *
               C9495) *
              C9502 * C450 -
          (((C4222 * C4811 + C9363 * C4867) * C9493 +
            (C4222 * C4779 + C9363 * C4780) * C3252 + C5476 * C3203 +
            C5475 * C3251) *
               C9495 +
           (C4596 * C9493 + C4595 * C3252 + C4594 * C3203 + C4593 * C3251) *
               C2135) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (2 * std::pow(Pi, 2.5) *
                   (((C3367 * C80 + C3370 + C3370 + C3203 * C249 +
                      C3368 * C455 + C3371 + C3371 + C9493 * C586) *
                         C9363 * C2135 +
                     (C3367 * C739 + C4055 + C4055 + C3203 * C870 +
                      C3368 * C1794 + C4054 + C4054 + C9493 * C1950) *
                         C9363 * C9495) *
                        C9502 * C450 -
                    ((C3368 * C4779 + C5511 + C5511 + C9493 * C4894 +
                      C3367 * C1794 + C5512 + C5512 + C3203 * C1950) *
                         C9363 * C9495 +
                     (C3368 * C1408 + C3734 + C3734 + C9493 * C1594 +
                      C3367 * C455 + C3735 + C3735 + C3203 * C586) *
                         C9363 * C2135) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C3251 +
           (C2213 * C125 + C2135 * C293 + C2214 * C777 + C9495 * C902) * C3203 +
           (C5433 + C5434) * C3252 + (C5551 + C5552) * C9493) *
              C9363 * C9502 * C450 -
          ((C2214 * C4811 + C9495 * C4924 + C2213 * C1460 + C2135 * C1634) *
               C9493 +
           (C2214 * C4779 + C9495 * C4839 + C2213 * C1408 + C2135 * C1498) *
               C3252 +
           (C5552 + C5551) * C3203 + (C5434 + C5433) * C3251) *
              C9363 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C2213 +
                      (C4222 * C172 + C9363 * C333) * C2135 +
                      (C4222 * C739 + C9363 * C742) * C2214 +
                      (C4222 * C809 + C9363 * C931) * C9495) *
                         C3203 +
                     (C5587 + C5588 + C5589 + C5593) * C9493) *
                        C9502 * C450 -
                    (((C4222 * C4839 + C9363 * C4951) * C9495 +
                      (C4222 * C4779 + C9363 * C4780) * C2214 + C4691 * C2135 +
                      C4595 * C2213) *
                         C9493 +
                     (C5593 + C5589 + C5588 + C5587) * C3203) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C2213 +
           (C3251 * C172 + C3203 * C363 + C3252 * C525 + C9493 * C676) * C2135 +
           (C3251 * C739 + C3203 * C777 + C3252 * C1794 + C9493 * C1838) *
               C2214 +
           (C3251 * C809 + C3203 * C960 + C3252 * C1876 + C9493 * C2062) *
               C9495) *
              C9363 * C9502 * C450 -
          ((C3252 * C4839 + C9493 * C4978 + C3251 * C1876 + C3203 * C2062) *
               C9495 +
           (C3252 * C4779 + C9493 * C4811 + C3251 * C1794 + C3203 * C1838) *
               C2214 +
           (C3252 * C1498 + C9493 * C1715 + C3251 * C525 + C3203 * C676) *
               C2135 +
           (C3252 * C1408 + C9493 * C1460 + C3251 * C455 + C3203 * C493) *
               C2213) *
              C9363 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] += (2 * std::pow(Pi, 2.5) *
                   (((C2449 * C80 + C2452 + C2452 + C2135 * C404 +
                      C2450 * C739 + C2453 + C2453 + C9495 * C989) *
                         C3203 +
                     (C5672 + C5673) * C9493) *
                        C9363 * C9502 * C450 -
                    ((C2450 * C4779 + C5666 + C5666 + C9495 * C5005 +
                      C2449 * C1408 + C5667 + C5667 + C2135 * C1751) *
                         C9493 +
                     (C5673 + C5672) * C3203) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] += (2 * std::pow(Pi, 2.5) *
                   ((((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C2135 +
                      C5717 * C9495) *
                         C3203 +
                     (C5350 + C5356) * C9493) *
                        C735 -
                    (((C4221 * C5707 + C5713 + C5713 + C9363 * C5709) * C9495 +
                      C5355 * C2135) *
                         C9493 +
                     ((C4221 * C2814 + C5714 + C5714 + C9363 * C2818) * C9495 +
                      C5717 * C2135) *
                         C3203) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C4222 +
            (C3251 * C84 + C3203 * C129 + C3252 * C458 + C9493 * C496) *
                C9363) *
               C2135 +
           ((C5762 + C5763) * C4222 + (C5764 + C5765) * C9363) * C9495) *
              C735 -
          (((C3252 * C5708 + C9493 * C5752 + C3251 * C2816 + C3203 * C2868) *
                C9363 +
            (C3252 * C5707 + C9493 * C5751 + C3251 * C2814 + C3203 * C2866) *
                C4222) *
               C9495 +
           ((C5765 + C5764) * C9363 + (C5763 + C5762) * C4222) * C2135) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C4222 +
            (C2213 * C84 + C2135 * C176 + C2214 * C742 + C9495 * C812) *
                C9363) *
               C3203 +
           ((C5433 + C5434) * C4222 + (C5435 + C5436) * C9363) * C9493) *
              C735 -
          (((C2214 * C5708 + C9495 * C5800 + C2213 * C1796 + C2135 * C1878) *
                C9363 +
            (C2214 * C5707 + C9495 * C5799 + C2213 * C1794 + C2135 * C1876) *
                C4222) *
               C9493 +
           ((C2214 * C2816 + C9495 * C2916 + C2213 * C742 + C2135 * C812) *
                C9363 +
            (C2214 * C2814 + C9495 * C2914 + C2213 * C739 + C2135 * C809) *
                C4222) *
               C3203) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C3251 +
                      (C4222 * C125 + C9363 * C218) * C3203 + C4593 * C3252 +
                      C4594 * C9493) *
                         C2135 +
                     (C5845 + C5846 + C5841 + C5842) * C9495) *
                        C735 -
                    (((C4222 * C5751 + C9363 * C5835) * C9493 +
                      (C4222 * C5707 + C9363 * C5708) * C3252 +
                      (C4222 * C2866 + C9363 * C2952) * C3203 +
                      (C4222 * C2814 + C9363 * C2816) * C3251) *
                         C9495 +
                     (C5842 + C5841 + C5846 + C5845) * C2135) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] += (2 * std::pow(Pi, 2.5) *
                   (((C3367 * C80 + C3370 + C3370 + C3203 * C249 +
                      C3368 * C455 + C3371 + C3371 + C9493 * C586) *
                         C9363 * C2135 +
                     (C5892 + C5893) * C9363 * C9495) *
                        C735 -
                    ((C3368 * C5707 + C5886 + C5886 + C9493 * C5880 +
                      C3367 * C2814 + C5887 + C5887 + C3203 * C3000) *
                         C9363 * C9495 +
                     (C5893 + C5892) * C9363 * C2135) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C2213 * C80 + C2135 * C172 + C2214 * C739 + C9495 * C809) * C3251 +
           (C2213 * C125 + C2135 * C293 + C2214 * C777 + C9495 * C902) * C3203 +
           (C5433 + C5434) * C3252 + (C5551 + C5552) * C9493) *
              C9363 * C735 -
          ((C2214 * C5751 + C9495 * C5927 + C2213 * C1838 + C2135 * C1990) *
               C9493 +
           (C2214 * C5707 + C9495 * C5799 + C2213 * C1794 + C2135 * C1876) *
               C3252 +
           (C2214 * C2866 + C9495 * C3045 + C2213 * C777 + C2135 * C902) *
               C3203 +
           (C2214 * C2814 + C9495 * C2914 + C2213 * C739 + C2135 * C809) *
               C3251) *
              C9363 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[17] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C2213 +
                      (C4222 * C172 + C9363 * C333) * C2135 + C5843 * C2214 +
                      C5966 * C9495) *
                         C3203 +
                     (C5587 + C5588 + C5589 + C5593) * C9493) *
                        C735 -
                    (((C4222 * C5799 + C9363 * C5962) * C9495 +
                      (C4222 * C5707 + C9363 * C5708) * C2214 + C5592 * C2135 +
                      C5475 * C2213) *
                         C9493 +
                     ((C4222 * C2914 + C9363 * C3081) * C9495 +
                      (C4222 * C2814 + C9363 * C2816) * C2214 + C5966 * C2135 +
                      C5843 * C2213) *
                         C3203) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3251 * C80 + C3203 * C125 + C3252 * C455 + C9493 * C493) * C2213 +
           (C3251 * C172 + C3203 * C363 + C3252 * C525 + C9493 * C676) * C2135 +
           (C5762 + C5763) * C2214 + (C6006 + C6007) * C9495) *
              C9363 * C735 -
          ((C3252 * C5799 + C9493 * C6000 + C3251 * C2914 + C3203 * C3123) *
               C9495 +
           (C3252 * C5707 + C9493 * C5751 + C3251 * C2814 + C3203 * C2866) *
               C2214 +
           (C6007 + C6006) * C2135 + (C5763 + C5762) * C2213) *
              C9363 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] += (2 * std::pow(Pi, 2.5) *
                   (((C2449 * C80 + C2452 + C2452 + C2135 * C404 +
                      C2450 * C739 + C2453 + C2453 + C9495 * C989) *
                         C3203 +
                     (C5672 + C5673) * C9493) *
                        C9363 * C735 -
                    ((C2450 * C5707 + C6043 + C6043 + C9495 * C6041 +
                      C2449 * C1794 + C6044 + C6044 + C2135 * C2098) *
                         C9493 +
                     (C2450 * C2814 + C3166 + C3166 + C9495 * C3162 +
                      C2449 * C739 + C3167 + C3167 + C2135 * C989) *
                         C3203) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[18] += (2 * std::pow(Pi, 2.5) *
                   (((C3205 * C80 + C3210 + C3210 + C3201 * C88 + C3207 * C81 +
                      C3211 + C3211 + C9487 * C89) *
                         C6078 +
                     (C3205 * C739 + C3915 + C3915 + C3201 * C745 +
                      C3207 * C738 + C3914 + C3914 + C9487 * C744) *
                         C9495) *
                        C9423 * C9502 * C9503 * C72 -
                    ((C3207 * C737 + C6081 + C6081 + C9487 * C743 +
                      C3205 * C738 + C6082 + C6082 + C3201 * C744) *
                         C9495 +
                     (C3207 * C82 + C3216 + C3216 + C9487 * C90 + C3205 * C81 +
                      C3217 + C3217 + C3201 * C89) *
                         C6078) *
                        C9423 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C9423 * C125) * C3206 +
            (C124 * C84 + C9423 * C129) * C3201 + C142 * C3208 + C143 * C9487) *
               C6078 +
           (C2876 * C3206 + C2877 * C3201 + C2178 * C3208 + C2179 * C9487) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C124 * C740 + C9423 * C778) * C9487 +
            (C124 * C737 + C9423 * C775) * C3208 + C2179 * C3201 +
            C2178 * C3206) *
               C9495 +
           (C145 * C9487 + C144 * C3208 + C143 * C3201 + C142 * C3206) *
               C6078) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C3206 +
           (C6150 * C84 + C6078 * C176 + C6151 * C742 + C9495 * C812) * C3201 +
           (C6161 + C6162) * C3208 + (C6163 + C6164) * C9487) *
              C9423 * C9502 * C9503 * C72 -
          ((C6151 * C740 + C9495 * C810 + C6150 * C86 + C6078 * C178) * C9487 +
           (C6151 * C737 + C9495 * C807 + C6150 * C82 + C6078 * C174) * C3208 +
           (C6164 + C6163) * C3201 + (C6162 + C6161) * C3206) *
              C9423 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C124 +
            (C3206 * C125 + C3201 * C218 + C3208 * C126 + C9487 * C219) *
                C9423) *
               C6078 +
           ((C3206 * C739 + C3201 * C742 + C3208 * C738 + C9487 * C741) * C124 +
            (C3206 * C777 + C3201 * C841 + C3208 * C776 + C9487 * C840) *
                C9423) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C3208 * C775 + C9487 * C839 + C3206 * C776 + C3201 * C840) *
                C9423 +
            (C3208 * C737 + C9487 * C740 + C3206 * C738 + C3201 * C741) *
                C124) *
               C9495 +
           ((C3208 * C127 + C9487 * C220 + C3206 * C126 + C3201 * C219) *
                C9423 +
            (C3208 * C82 + C9487 * C86 + C3206 * C81 + C3201 * C85) * C124) *
               C6078) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C9423 * C249) * C3201 + C266 * C9487) *
               C6078 +
           (C3009 * C3201 + C2300 * C9487) * C9495) *
              C9502 * C9503 * C72 -
          (((C248 * C737 + C872 + C872 + C9423 * C868) * C9487 +
            C2300 * C3201) *
               C9495 +
           (C267 * C9487 + C266 * C3201) * C6078) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C124 +
            (C6150 * C125 + C6078 * C293 + C6151 * C777 + C9495 * C902) *
                C9423) *
               C3201 +
           ((C6161 + C6162) * C124 + (C6271 + C6272) * C9423) * C9487) *
              C9502 * C9503 * C72 -
          (((C6151 * C775 + C9495 * C900 + C6150 * C127 + C6078 * C295) *
                C9423 +
            (C6151 * C737 + C9495 * C807 + C6150 * C82 + C6078 * C174) * C124) *
               C9487 +
           ((C6272 + C6271) * C9423 + (C6162 + C6161) * C124) * C3201) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C6150 +
           (C3206 * C172 + C3201 * C333 + C3208 * C173 + C9487 * C334) * C6078 +
           (C3206 * C739 + C3201 * C742 + C3208 * C738 + C9487 * C741) * C6151 +
           (C3206 * C809 + C3201 * C931 + C3208 * C808 + C9487 * C930) *
               C9495) *
              C9423 * C9502 * C9503 * C72 -
          ((C3208 * C807 + C9487 * C929 + C3206 * C808 + C3201 * C930) * C9495 +
           (C3208 * C737 + C9487 * C740 + C3206 * C738 + C3201 * C741) * C6151 +
           (C3208 * C174 + C9487 * C335 + C3206 * C173 + C3201 * C334) * C6078 +
           (C3208 * C82 + C9487 * C86 + C3206 * C81 + C3201 * C85) * C6150) *
              C9423 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C9423 * C125) * C6150 +
                      (C124 * C172 + C9423 * C363) * C6078 + C2876 * C6151 +
                      C3127 * C9495) *
                         C3201 +
                     (C6341 + C6342 + C6343 + C6344) * C9487) *
                        C9502 * C9503 * C72 -
                    (((C124 * C807 + C9423 * C958) * C9495 +
                      (C124 * C737 + C9423 * C775) * C6151 + C375 * C6078 +
                      C144 * C6150) *
                         C9487 +
                     (C6344 + C6343 + C6342 + C6341) * C3201) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (2 * std::pow(Pi, 2.5) *
                   (((C6378 * C80 + C6381 + C6381 + C6078 * C404 +
                      C6379 * C739 + C6382 + C6382 + C9495 * C989) *
                         C9423 * C3201 +
                     (C6395 + C6396) * C9423 * C9487) *
                        C9502 * C9503 * C72 -
                    ((C6379 * C737 + C6389 + C6389 + C9495 * C987 +
                      C6378 * C82 + C6390 + C6390 + C6078 * C406) *
                         C9423 * C9487 +
                     (C6396 + C6395) * C9423 * C3201) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] += (2 * std::pow(Pi, 2.5) *
                   (((C3205 * C80 + C3210 + C3210 + C3201 * C88 + C3207 * C81 +
                      C3211 + C3211 + C9487 * C89) *
                         C6078 +
                     (C3205 * C739 + C3915 + C3915 + C3201 * C745 +
                      C3207 * C738 + C3914 + C3914 + C9487 * C744) *
                         C9495) *
                        C9423 * C9502 * C450 -
                    ((C3207 * C1793 + C3912 + C3912 + C9487 * C1797 +
                      C3205 * C1794 + C3913 + C3913 + C3201 * C1798) *
                         C9495 +
                     (C3579 + C3578) * C6078) *
                        C9423 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C9423 * C125) * C3206 +
            (C124 * C84 + C9423 * C129) * C3201 + C142 * C3208 + C143 * C9487) *
               C6078 +
           (C2876 * C3206 + C2877 * C3201 + C2178 * C3208 + C2179 * C9487) *
               C9495) *
              C9502 * C450 -
          (((C124 * C1795 + C9423 * C1839) * C9487 +
            (C124 * C1793 + C9423 * C1837) * C3208 +
            (C124 * C1796 + C9423 * C1840) * C3201 +
            (C124 * C1794 + C9423 * C1838) * C3206) *
               C9495 +
           ((C124 * C457 + C9423 * C495) * C9487 +
            (C124 * C454 + C9423 * C492) * C3208 +
            (C124 * C458 + C9423 * C496) * C3201 +
            (C124 * C455 + C9423 * C493) * C3206) *
               C6078) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C3206 +
           (C6150 * C84 + C6078 * C176 + C6151 * C742 + C9495 * C812) * C3201 +
           (C6161 + C6162) * C3208 + (C6163 + C6164) * C9487) *
              C9423 * C9502 * C450 -
          ((C6151 * C1795 + C9495 * C1877 + C6150 * C457 + C6078 * C527) *
               C9487 +
           (C6151 * C1793 + C9495 * C1875 + C6150 * C454 + C6078 * C524) *
               C3208 +
           (C6151 * C1796 + C9495 * C1878 + C6150 * C458 + C6078 * C528) *
               C3201 +
           (C6151 * C1794 + C9495 * C1876 + C6150 * C455 + C6078 * C525) *
               C3206) *
              C9423 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C124 +
            (C3206 * C125 + C3201 * C218 + C3208 * C126 + C9487 * C219) *
                C9423) *
               C6078 +
           ((C3206 * C739 + C3201 * C742 + C3208 * C738 + C9487 * C741) * C124 +
            (C3206 * C777 + C3201 * C841 + C3208 * C776 + C9487 * C840) *
                C9423) *
               C9495) *
              C9502 * C450 -
          (((C3208 * C1837 + C9487 * C1913 + C3206 * C1838 + C3201 * C1914) *
                C9423 +
            (C3208 * C1793 + C9487 * C1795 + C3206 * C1794 + C3201 * C1796) *
                C124) *
               C9495 +
           ((C3697 + C3696) * C9423 + (C3695 + C3694) * C124) * C6078) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C9423 * C249) * C3201 + C266 * C9487) *
               C6078 +
           (C3009 * C3201 + C2300 * C9487) * C9495) *
              C9502 * C450 -
          (((C248 * C1793 + C2638 + C2638 + C9423 * C1949) * C9487 +
            (C248 * C1794 + C2639 + C2639 + C9423 * C1950) * C3201) *
               C9495 +
           ((C248 * C454 + C589 + C589 + C9423 * C585) * C9487 +
            (C248 * C455 + C590 + C590 + C9423 * C586) * C3201) *
               C6078) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C124 +
            (C6150 * C125 + C6078 * C293 + C6151 * C777 + C9495 * C902) *
                C9423) *
               C3201 +
           ((C6161 + C6162) * C124 + (C6271 + C6272) * C9423) * C9487) *
              C9502 * C450 -
          (((C6151 * C1837 + C9495 * C1989 + C6150 * C492 + C6078 * C617) *
                C9423 +
            (C6151 * C1793 + C9495 * C1875 + C6150 * C454 + C6078 * C524) *
                C124) *
               C9487 +
           ((C6151 * C1838 + C9495 * C1990 + C6150 * C493 + C6078 * C618) *
                C9423 +
            (C6151 * C1794 + C9495 * C1876 + C6150 * C455 + C6078 * C525) *
                C124) *
               C3201) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C6150 +
           (C3206 * C172 + C3201 * C333 + C3208 * C173 + C9487 * C334) * C6078 +
           (C3206 * C739 + C3201 * C742 + C3208 * C738 + C9487 * C741) * C6151 +
           (C3206 * C809 + C3201 * C931 + C3208 * C808 + C9487 * C930) *
               C9495) *
              C9423 * C9502 * C450 -
          ((C3208 * C1875 + C9487 * C2025 + C3206 * C1876 + C3201 * C2026) *
               C9495 +
           (C3208 * C1793 + C9487 * C1795 + C3206 * C1794 + C3201 * C1796) *
               C6151 +
           (C3809 + C3808) * C6078 + (C3695 + C3694) * C6150) *
              C9423 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[19] += (2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C9423 * C125) * C6150 +
                      (C124 * C172 + C9423 * C363) * C6078 + C2876 * C6151 +
                      C3127 * C9495) *
                         C3201 +
                     (C6341 + C6342 + C6343 + C6344) * C9487) *
                        C9502 * C450 -
                    (((C124 * C1875 + C9423 * C2061) * C9495 +
                      (C124 * C1793 + C9423 * C1837) * C6151 +
                      (C124 * C524 + C9423 * C675) * C6078 +
                      (C124 * C454 + C9423 * C492) * C6150) *
                         C9487 +
                     ((C124 * C1876 + C9423 * C2062) * C9495 +
                      (C124 * C1794 + C9423 * C1838) * C6151 +
                      (C124 * C525 + C9423 * C676) * C6078 +
                      (C124 * C455 + C9423 * C493) * C6150) *
                         C3201) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezz[19] += (2 * std::pow(Pi, 2.5) *
                   (((C6378 * C80 + C6381 + C6381 + C6078 * C404 +
                      C6379 * C739 + C6382 + C6382 + C9495 * C989) *
                         C9423 * C3201 +
                     (C6395 + C6396) * C9423 * C9487) *
                        C9502 * C450 -
                    ((C6379 * C1793 + C6703 + C6703 + C9495 * C2097 +
                      C6378 * C454 + C6704 + C6704 + C6078 * C704) *
                         C9423 * C9487 +
                     (C6379 * C1794 + C6705 + C6705 + C9495 * C2098 +
                      C6378 * C455 + C6706 + C6706 + C6078 * C705) *
                         C9423 * C3201) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[20] += (2 * std::pow(Pi, 2.5) *
                   (((C3205 * C80 + C3210 + C3210 + C3201 * C88 + C3207 * C81 +
                      C3211 + C3211 + C9487 * C89) *
                         C6078 +
                     (C6751 + C6752) * C9495) *
                        C9423 * C735 -
                    ((C3207 * C2813 + C6745 + C6745 + C9487 * C2817 +
                      C3205 * C2814 + C6746 + C6746 + C3201 * C2818) *
                         C9495 +
                     (C6752 + C6751) * C6078) *
                        C9423 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C124 * C80 + C9423 * C125) * C3206 +
            (C124 * C84 + C9423 * C129) * C3201 + C142 * C3208 + C143 * C9487) *
               C6078 +
           (C6787 + C6788 + C6789 + C6790) * C9495) *
              C735 -
          (((C124 * C2815 + C9423 * C2867) * C9487 +
            (C124 * C2813 + C9423 * C2865) * C3208 +
            (C124 * C2816 + C9423 * C2868) * C3201 +
            (C124 * C2814 + C9423 * C2866) * C3206) *
               C9495 +
           (C6790 + C6789 + C6788 + C6787) * C6078) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C3206 +
           (C6150 * C84 + C6078 * C176 + C6151 * C742 + C9495 * C812) * C3201 +
           (C6161 + C6162) * C3208 + (C6163 + C6164) * C9487) *
              C9423 * C735 -
          ((C6151 * C2815 + C9495 * C2915 + C6150 * C741 + C6078 * C811) *
               C9487 +
           (C6151 * C2813 + C9495 * C2913 + C6150 * C738 + C6078 * C808) *
               C3208 +
           (C6151 * C2816 + C9495 * C2916 + C6150 * C742 + C6078 * C812) *
               C3201 +
           (C6151 * C2814 + C9495 * C2914 + C6150 * C739 + C6078 * C809) *
               C3206) *
              C9423 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C124 +
            (C3206 * C125 + C3201 * C218 + C3208 * C126 + C9487 * C219) *
                C9423) *
               C6078 +
           ((C6867 + C6868) * C124 + (C6869 + C6870) * C9423) * C9495) *
              C735 -
          (((C3208 * C2865 + C9487 * C2951 + C3206 * C2866 + C3201 * C2952) *
                C9423 +
            (C3208 * C2813 + C9487 * C2815 + C3206 * C2814 + C3201 * C2816) *
                C124) *
               C9495 +
           ((C6870 + C6869) * C9423 + (C6868 + C6867) * C124) * C6078) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C248 * C80 + C254 + C254 + C9423 * C249) * C3201 + C266 * C9487) *
               C6078 +
           (C6905 + C6906) * C9495) *
              C735 -
          (((C248 * C2813 + C3005 + C3005 + C9423 * C2999) * C9487 +
            (C248 * C2814 + C3006 + C3006 + C9423 * C3000) * C3201) *
               C9495 +
           (C6906 + C6905) * C6078) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C124 +
            (C6150 * C125 + C6078 * C293 + C6151 * C777 + C9495 * C902) *
                C9423) *
               C3201 +
           ((C6161 + C6162) * C124 + (C6271 + C6272) * C9423) * C9487) *
              C735 -
          (((C6151 * C2865 + C9495 * C3044 + C6150 * C776 + C6078 * C901) *
                C9423 +
            (C6151 * C2813 + C9495 * C2913 + C6150 * C738 + C6078 * C808) *
                C124) *
               C9487 +
           ((C6151 * C2866 + C9495 * C3045 + C6150 * C777 + C6078 * C902) *
                C9423 +
            (C6151 * C2814 + C9495 * C2914 + C6150 * C739 + C6078 * C809) *
                C124) *
               C3201) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3206 * C80 + C3201 * C84 + C3208 * C81 + C9487 * C85) * C6150 +
           (C3206 * C172 + C3201 * C333 + C3208 * C173 + C9487 * C334) * C6078 +
           (C6867 + C6868) * C6151 + (C6979 + C6980) * C9495) *
              C9423 * C735 -
          ((C3208 * C2913 + C9487 * C3080 + C3206 * C2914 + C3201 * C3081) *
               C9495 +
           (C3208 * C2813 + C9487 * C2815 + C3206 * C2814 + C3201 * C2816) *
               C6151 +
           (C6980 + C6979) * C6078 + (C6868 + C6867) * C6150) *
              C9423 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezy[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C9423 * C125) * C6150 +
                      (C124 * C172 + C9423 * C363) * C6078 + C2876 * C6151 +
                      C3127 * C9495) *
                         C3201 +
                     (C6341 + C6342 + C6343 + C6344) * C9487) *
                        C735 -
                    (((C124 * C2913 + C9423 * C3122) * C9495 +
                      (C124 * C2813 + C9423 * C2865) * C6151 + C2414 * C6078 +
                      C2178 * C6150) *
                         C9487 +
                     ((C124 * C2914 + C9423 * C3123) * C9495 +
                      (C124 * C2814 + C9423 * C2866) * C6151 + C3127 * C6078 +
                      C2876 * C6150) *
                         C3201) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezz[20] += (2 * std::pow(Pi, 2.5) *
                   (((C6378 * C80 + C6381 + C6381 + C6078 * C404 +
                      C6379 * C739 + C6382 + C6382 + C9495 * C989) *
                         C9423 * C3201 +
                     (C6395 + C6396) * C9423 * C9487) *
                        C735 -
                    ((C6379 * C2813 + C7049 + C7049 + C9495 * C3161 +
                      C6378 * C738 + C7050 + C7050 + C6078 * C988) *
                         C9423 * C9487 +
                     (C6379 * C2814 + C7051 + C7051 + C9495 * C3162 +
                      C6378 * C739 + C7052 + C7052 + C6078 * C989) *
                         C9423 * C3201) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[21] += (2 * std::pow(Pi, 2.5) *
                   ((((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C6078 +
                      C5717 * C9495) *
                         C1029 +
                     (C4488 * C6078 + C5355 * C9495) * C9493) *
                        C9502 * C9503 * C72 -
                    (((C4221 * C1793 + C5042 + C5042 + C9363 * C1797) * C9495 +
                      (C4221 * C454 + C4228 + C4228 + C9363 * C460) * C6078) *
                         C9493 +
                     ((C4221 * C738 + C5043 + C5043 + C9363 * C744) * C9495 +
                      (C4221 * C81 + C4229 + C4229 + C9363 * C89) * C6078) *
                         C1029) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C4222 +
            (C1077 * C84 + C1029 * C129 + C1078 * C458 + C9493 * C496) *
                C9363) *
               C6078 +
           ((C1077 * C739 + C1029 * C777 + C1078 * C1794 + C9493 * C1838) *
                C4222 +
            (C1077 * C742 + C1029 * C780 + C1078 * C1796 + C9493 * C1840) *
                C9363) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C1078 * C1795 + C9493 * C1839 + C1077 * C741 + C1029 * C779) *
                C9363 +
            (C1078 * C1793 + C9493 * C1837 + C1077 * C738 + C1029 * C776) *
                C4222) *
               C9495 +
           ((C1091 + C1090) * C9363 + (C1089 + C1088) * C4222) * C6078) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C4222 +
            (C6150 * C84 + C6078 * C176 + C6151 * C742 + C9495 * C812) *
                C9363) *
               C1029 +
           ((C6150 * C455 + C6078 * C525 + C6151 * C1794 + C9495 * C1876) *
                C4222 +
            (C6150 * C458 + C6078 * C528 + C6151 * C1796 + C9495 * C1878) *
                C9363) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C6151 * C1795 + C9495 * C1877 + C6150 * C457 + C6078 * C527) *
                C9363 +
            (C6151 * C1793 + C9495 * C1875 + C6150 * C454 + C6078 * C524) *
                C4222) *
               C9493 +
           ((C6164 + C6163) * C9363 + (C6162 + C6161) * C4222) * C1029) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4222 * C80 + C9363 * C84) * C1077 +
            (C4222 * C125 + C9363 * C218) * C1029 + C4593 * C1078 +
            C4594 * C9493) *
               C6078 +
           (C5843 * C1077 + C5844 * C1029 + C5475 * C1078 + C5476 * C9493) *
               C9495) *
              C9502 * C9503 * C72 -
          (((C4222 * C1837 + C9363 * C1913) * C9493 +
            (C4222 * C1793 + C9363 * C1795) * C1078 +
            (C4222 * C776 + C9363 * C840) * C1029 +
            (C4222 * C738 + C9363 * C741) * C1077) *
               C9495 +
           ((C4222 * C492 + C9363 * C556) * C9493 +
            (C4222 * C454 + C9363 * C457) * C1078 +
            (C4222 * C126 + C9363 * C219) * C1029 +
            (C4222 * C81 + C9363 * C85) * C1077) *
               C6078) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[21] += (2 * std::pow(Pi, 2.5) *
                   (((C1199 * C80 + C1202 + C1202 + C1029 * C249 +
                      C1200 * C455 + C1203 + C1203 + C9493 * C586) *
                         C9363 * C6078 +
                     (C1199 * C739 + C1955 + C1955 + C1029 * C870 +
                      C1200 * C1794 + C1954 + C1954 + C9493 * C1950) *
                         C9363 * C9495) *
                        C9502 * C9503 * C72 -
                    ((C1200 * C1793 + C1952 + C1952 + C9493 * C1949 +
                      C1199 * C738 + C1953 + C1953 + C1029 * C869) *
                         C9363 * C9495 +
                     (C1217 + C1216) * C9363 * C6078) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C1077 +
           (C6150 * C125 + C6078 * C293 + C6151 * C777 + C9495 * C902) * C1029 +
           (C6150 * C455 + C6078 * C525 + C6151 * C1794 + C9495 * C1876) *
               C1078 +
           (C6150 * C493 + C6078 * C618 + C6151 * C1838 + C9495 * C1990) *
               C9493) *
              C9363 * C9502 * C9503 * C72 -
          ((C6151 * C1837 + C9495 * C1989 + C6150 * C492 + C6078 * C617) *
               C9493 +
           (C6151 * C1793 + C9495 * C1875 + C6150 * C454 + C6078 * C524) *
               C1078 +
           (C6272 + C6271) * C1029 + (C6162 + C6161) * C1077) *
              C9363 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4222 * C80 + C9363 * C84) * C6150 +
            (C4222 * C172 + C9363 * C333) * C6078 + C5843 * C6151 +
            C5966 * C9495) *
               C1029 +
           (C4593 * C6150 + C4690 * C6078 + C5475 * C6151 + C5592 * C9495) *
               C9493) *
              C9502 * C9503 * C72 -
          (((C4222 * C1875 + C9363 * C2025) * C9495 +
            (C4222 * C1793 + C9363 * C1795) * C6151 +
            (C4222 * C524 + C9363 * C646) * C6078 +
            (C4222 * C454 + C9363 * C457) * C6150) *
               C9493 +
           ((C4222 * C808 + C9363 * C930) * C9495 +
            (C4222 * C738 + C9363 * C741) * C6151 +
            (C4222 * C173 + C9363 * C334) * C6078 +
            (C4222 * C81 + C9363 * C85) * C6150) *
               C1029) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C6150 +
           (C1077 * C172 + C1029 * C363 + C1078 * C525 + C9493 * C676) * C6078 +
           (C1077 * C739 + C1029 * C777 + C1078 * C1794 + C9493 * C1838) *
               C6151 +
           (C1077 * C809 + C1029 * C960 + C1078 * C1876 + C9493 * C2062) *
               C9495) *
              C9363 * C9502 * C9503 * C72 -
          ((C1078 * C1875 + C9493 * C2061 + C1077 * C808 + C1029 * C959) *
               C9495 +
           (C1078 * C1793 + C9493 * C1837 + C1077 * C738 + C1029 * C776) *
               C6151 +
           (C1332 + C1331) * C6078 + (C1089 + C1088) * C6150) *
              C9363 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[21] += (2 * std::pow(Pi, 2.5) *
                   (((C6378 * C80 + C6381 + C6381 + C6078 * C404 +
                      C6379 * C739 + C6382 + C6382 + C9495 * C989) *
                         C1029 +
                     (C6378 * C455 + C6706 + C6706 + C6078 * C705 +
                      C6379 * C1794 + C6705 + C6705 + C9495 * C2098) *
                         C9493) *
                        C9363 * C9502 * C9503 * C72 -
                    ((C6379 * C1793 + C6703 + C6703 + C9495 * C2097 +
                      C6378 * C454 + C6704 + C6704 + C6078 * C704) *
                         C9493 +
                     (C6396 + C6395) * C1029) *
                        C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[22] += (2 * std::pow(Pi, 2.5) *
                   ((((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C6078 +
                      C5717 * C9495) *
                         C1029 +
                     (C7393 + C7394) * C9493) *
                        C9502 * C450 -
                    (((C4221 * C4779 + C4783 + C4783 + C9363 * C4781) * C9495 +
                      C4489 * C6078) *
                         C9493 +
                     (C7394 + C7393) * C1029) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C4222 +
            (C1077 * C84 + C1029 * C129 + C1078 * C458 + C9493 * C496) *
                C9363) *
               C6078 +
           ((C1077 * C739 + C1029 * C777 + C1078 * C1794 + C9493 * C1838) *
                C4222 +
            (C1077 * C742 + C1029 * C780 + C1078 * C1796 + C9493 * C1840) *
                C9363) *
               C9495) *
              C9502 * C450 -
          (((C1078 * C4780 + C9493 * C4812 + C1077 * C1796 + C1029 * C1840) *
                C9363 +
            (C1078 * C4779 + C9493 * C4811 + C1077 * C1794 + C1029 * C1838) *
                C4222) *
               C9495 +
           ((C1078 * C1410 + C9493 * C1462 + C1077 * C458 + C1029 * C496) *
                C9363 +
            (C1078 * C1408 + C9493 * C1460 + C1077 * C455 + C1029 * C493) *
                C4222) *
               C6078) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C4222 +
            (C6150 * C84 + C6078 * C176 + C6151 * C742 + C9495 * C812) *
                C9363) *
               C1029 +
           ((C7471 + C7472) * C4222 + (C7473 + C7474) * C9363) * C9493) *
              C9502 * C450 -
          (((C6151 * C4780 + C9495 * C4840 + C6150 * C1410 + C6078 * C1500) *
                C9363 +
            (C6151 * C4779 + C9495 * C4839 + C6150 * C1408 + C6078 * C1498) *
                C4222) *
               C9493 +
           ((C7474 + C7473) * C9363 + (C7472 + C7471) * C4222) * C1029) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C4222 * C80 + C9363 * C84) * C1077 +
            (C4222 * C125 + C9363 * C218) * C1029 + C4593 * C1078 +
            C4594 * C9493) *
               C6078 +
           (C5843 * C1077 + C5844 * C1029 + C5475 * C1078 + C5476 * C9493) *
               C9495) *
              C9502 * C450 -
          (((C4222 * C4811 + C9363 * C4867) * C9493 +
            (C4222 * C4779 + C9363 * C4780) * C1078 + C5476 * C1029 +
            C5475 * C1077) *
               C9495 +
           (C4596 * C9493 + C4595 * C1078 + C4594 * C1029 + C4593 * C1077) *
               C6078) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyy[22] += (2 * std::pow(Pi, 2.5) *
                   (((C1199 * C80 + C1202 + C1202 + C1029 * C249 +
                      C1200 * C455 + C1203 + C1203 + C9493 * C586) *
                         C9363 * C6078 +
                     (C1199 * C739 + C1955 + C1955 + C1029 * C870 +
                      C1200 * C1794 + C1954 + C1954 + C9493 * C1950) *
                         C9363 * C9495) *
                        C9502 * C450 -
                    ((C1200 * C4779 + C7543 + C7543 + C9493 * C4894 +
                      C1199 * C1794 + C7544 + C7544 + C1029 * C1950) *
                         C9363 * C9495 +
                     (C1200 * C1408 + C1598 + C1598 + C9493 * C1594 +
                      C1199 * C455 + C1599 + C1599 + C1029 * C586) *
                         C9363 * C6078) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C1077 +
           (C6150 * C125 + C6078 * C293 + C6151 * C777 + C9495 * C902) * C1029 +
           (C7471 + C7472) * C1078 + (C7583 + C7584) * C9493) *
              C9363 * C9502 * C450 -
          ((C6151 * C4811 + C9495 * C4924 + C6150 * C1460 + C6078 * C1634) *
               C9493 +
           (C6151 * C4779 + C9495 * C4839 + C6150 * C1408 + C6078 * C1498) *
               C1078 +
           (C7584 + C7583) * C1029 + (C7472 + C7471) * C1077) *
              C9363 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[22] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C6150 +
                      (C4222 * C172 + C9363 * C333) * C6078 + C5843 * C6151 +
                      C5966 * C9495) *
                         C1029 +
                     (C7619 + C7620 + C7621 + C7622) * C9493) *
                        C9502 * C450 -
                    (((C4222 * C4839 + C9363 * C4951) * C9495 +
                      (C4222 * C4779 + C9363 * C4780) * C6151 + C4691 * C6078 +
                      C4595 * C6150) *
                         C9493 +
                     (C7622 + C7621 + C7620 + C7619) * C1029) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C6150 +
           (C1077 * C172 + C1029 * C363 + C1078 * C525 + C9493 * C676) * C6078 +
           (C1077 * C739 + C1029 * C777 + C1078 * C1794 + C9493 * C1838) *
               C6151 +
           (C1077 * C809 + C1029 * C960 + C1078 * C1876 + C9493 * C2062) *
               C9495) *
              C9363 * C9502 * C450 -
          ((C1078 * C4839 + C9493 * C4978 + C1077 * C1876 + C1029 * C2062) *
               C9495 +
           (C1078 * C4779 + C9493 * C4811 + C1077 * C1794 + C1029 * C1838) *
               C6151 +
           (C1078 * C1498 + C9493 * C1715 + C1077 * C525 + C1029 * C676) *
               C6078 +
           (C1078 * C1408 + C9493 * C1460 + C1077 * C455 + C1029 * C493) *
               C6150) *
              C9363 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[22] += (2 * std::pow(Pi, 2.5) *
                   (((C6378 * C80 + C6381 + C6381 + C6078 * C404 +
                      C6379 * C739 + C6382 + C6382 + C9495 * C989) *
                         C1029 +
                     (C7701 + C7702) * C9493) *
                        C9363 * C9502 * C450 -
                    ((C6379 * C4779 + C7695 + C7695 + C9495 * C5005 +
                      C6378 * C1408 + C7696 + C7696 + C6078 * C1751) *
                         C9493 +
                     (C7702 + C7701) * C1029) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C6078 +
                      C5717 * C9495) *
                         C1029 +
                     (C7393 + C7394) * C9493) *
                        C735 -
                    (((C4221 * C5707 + C5713 + C5713 + C9363 * C5709) * C9495 +
                      C5355 * C6078) *
                         C9493 +
                     ((C4221 * C2814 + C5714 + C5714 + C9363 * C2818) * C9495 +
                      C5717 * C6078) *
                         C1029) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C4222 +
            (C1077 * C84 + C1029 * C129 + C1078 * C458 + C9493 * C496) *
                C9363) *
               C6078 +
           ((C7779 + C7780) * C4222 + (C7781 + C7782) * C9363) * C9495) *
              C735 -
          (((C1078 * C5708 + C9493 * C5752 + C1077 * C2816 + C1029 * C2868) *
                C9363 +
            (C1078 * C5707 + C9493 * C5751 + C1077 * C2814 + C1029 * C2866) *
                C4222) *
               C9495 +
           ((C7782 + C7781) * C9363 + (C7780 + C7779) * C4222) * C6078) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C4222 +
            (C6150 * C84 + C6078 * C176 + C6151 * C742 + C9495 * C812) *
                C9363) *
               C1029 +
           ((C7471 + C7472) * C4222 + (C7473 + C7474) * C9363) * C9493) *
              C735 -
          (((C6151 * C5708 + C9495 * C5800 + C6150 * C1796 + C6078 * C1878) *
                C9363 +
            (C6151 * C5707 + C9495 * C5799 + C6150 * C1794 + C6078 * C1876) *
                C4222) *
               C9493 +
           ((C6151 * C2816 + C9495 * C2916 + C6150 * C742 + C6078 * C812) *
                C9363 +
            (C6151 * C2814 + C9495 * C2914 + C6150 * C739 + C6078 * C809) *
                C4222) *
               C1029) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C1077 +
                      (C4222 * C125 + C9363 * C218) * C1029 + C4593 * C1078 +
                      C4594 * C9493) *
                         C6078 +
                     (C7851 + C7852 + C7853 + C7854) * C9495) *
                        C735 -
                    (((C4222 * C5751 + C9363 * C5835) * C9493 +
                      (C4222 * C5707 + C9363 * C5708) * C1078 +
                      (C4222 * C2866 + C9363 * C2952) * C1029 +
                      (C4222 * C2814 + C9363 * C2816) * C1077) *
                         C9495 +
                     (C7854 + C7853 + C7852 + C7851) * C6078) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[23] += (2 * std::pow(Pi, 2.5) *
                   (((C1199 * C80 + C1202 + C1202 + C1029 * C249 +
                      C1200 * C455 + C1203 + C1203 + C9493 * C586) *
                         C9363 * C6078 +
                     (C7899 + C7900) * C9363 * C9495) *
                        C735 -
                    ((C1200 * C5707 + C7893 + C7893 + C9493 * C5880 +
                      C1199 * C2814 + C7894 + C7894 + C1029 * C3000) *
                         C9363 * C9495 +
                     (C7900 + C7899) * C9363 * C6078) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C6150 * C80 + C6078 * C172 + C6151 * C739 + C9495 * C809) * C1077 +
           (C6150 * C125 + C6078 * C293 + C6151 * C777 + C9495 * C902) * C1029 +
           (C7471 + C7472) * C1078 + (C7583 + C7584) * C9493) *
              C9363 * C735 -
          ((C6151 * C5751 + C9495 * C5927 + C6150 * C1838 + C6078 * C1990) *
               C9493 +
           (C6151 * C5707 + C9495 * C5799 + C6150 * C1794 + C6078 * C1876) *
               C1078 +
           (C6151 * C2866 + C9495 * C3045 + C6150 * C777 + C6078 * C902) *
               C1029 +
           (C6151 * C2814 + C9495 * C2914 + C6150 * C739 + C6078 * C809) *
               C1077) *
              C9363 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C6150 +
                      (C4222 * C172 + C9363 * C333) * C6078 + C5843 * C6151 +
                      C5966 * C9495) *
                         C1029 +
                     (C7619 + C7620 + C7621 + C7622) * C9493) *
                        C735 -
                    (((C4222 * C5799 + C9363 * C5962) * C9495 +
                      (C4222 * C5707 + C9363 * C5708) * C6151 + C5592 * C6078 +
                      C5475 * C6150) *
                         C9493 +
                     ((C4222 * C2914 + C9363 * C3081) * C9495 +
                      (C4222 * C2814 + C9363 * C2816) * C6151 + C5966 * C6078 +
                      C5843 * C6150) *
                         C1029) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C1077 * C80 + C1029 * C125 + C1078 * C455 + C9493 * C493) * C6150 +
           (C1077 * C172 + C1029 * C363 + C1078 * C525 + C9493 * C676) * C6078 +
           (C7779 + C7780) * C6151 + (C8007 + C8008) * C9495) *
              C9363 * C735 -
          ((C1078 * C5799 + C9493 * C6000 + C1077 * C2914 + C1029 * C3123) *
               C9495 +
           (C1078 * C5707 + C9493 * C5751 + C1077 * C2814 + C1029 * C2866) *
               C6151 +
           (C8008 + C8007) * C6078 + (C7780 + C7779) * C6150) *
              C9363 * C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eezz[23] += (2 * std::pow(Pi, 2.5) *
                   (((C6378 * C80 + C6381 + C6381 + C6078 * C404 +
                      C6379 * C739 + C6382 + C6382 + C9495 * C989) *
                         C1029 +
                     (C7701 + C7702) * C9493) *
                        C9363 * C735 -
                    ((C6379 * C5707 + C8043 + C8043 + C9495 * C6041 +
                      C6378 * C1794 + C8044 + C8044 + C6078 * C2098) *
                         C9493 +
                     (C6379 * C2814 + C7051 + C7051 + C9495 * C3162 +
                      C6378 * C739 + C7052 + C7052 + C6078 * C989) *
                         C1029) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C8070 + C5717 * C8071 +
           (C4221 * C2814 + C5714 + C5714 + C9363 * C2818) * C8072) *
              C9423 * C9502 * C9503 * C72 -
          ((C4221 * C2813 + C8074 + C8074 + C9363 * C2817) * C8072 +
           (C4221 * C738 + C5043 + C5043 + C9363 * C744) * C8071 +
           (C4221 * C81 + C4229 + C4229 + C9363 * C89) * C8070) *
              C9423 * C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C9423 * C125) * C4222 +
                      (C124 * C84 + C9423 * C129) * C9363) *
                         C8070 +
                     (C2876 * C4222 + C2877 * C9363) * C8071 +
                     ((C124 * C2814 + C9423 * C2866) * C4222 +
                      (C124 * C2816 + C9423 * C2868) * C9363) *
                         C8072) *
                        C9502 * C9503 * C72 -
                    (((C124 * C2815 + C9423 * C2867) * C9363 +
                      (C124 * C2813 + C9423 * C2865) * C4222) *
                         C8072 +
                     (C2179 * C9363 + C2178 * C4222) * C8071 +
                     (C143 * C9363 + C142 * C4222) * C8070) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[24] += (2 * std::pow(Pi, 2.5) *
                   (((C8126 * C80 + C8070 * C172 + C8127 * C739 + C8071 * C809 +
                      C8128 * C2814 + C8072 * C2914) *
                         C4222 +
                     (C8126 * C84 + C8070 * C176 + C8127 * C742 + C8071 * C812 +
                      C8128 * C2816 + C8072 * C2916) *
                         C9363) *
                        C9423 * C9502 * C9503 * C72 -
                    ((C8128 * C2815 + C8072 * C2915 + C8127 * C741 +
                      C8071 * C811 + C8126 * C85 + C8070 * C177) *
                         C9363 +
                     (C8128 * C2813 + C8072 * C2913 + C8127 * C738 +
                      C8071 * C808 + C8126 * C81 + C8070 * C173) *
                         C4222) *
                        C9423 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C124 +
                      (C4222 * C125 + C9363 * C218) * C9423) *
                         C8070 +
                     (C5843 * C124 + C5844 * C9423) * C8071 +
                     ((C4222 * C2814 + C9363 * C2816) * C124 +
                      (C4222 * C2866 + C9363 * C2952) * C9423) *
                         C8072) *
                        C9502 * C9503 * C72 -
                    (((C4222 * C2865 + C9363 * C2951) * C9423 +
                      (C4222 * C2813 + C9363 * C2815) * C124) *
                         C8072 +
                     ((C4222 * C776 + C9363 * C840) * C9423 +
                      (C4222 * C738 + C9363 * C741) * C124) *
                         C8071 +
                     ((C4222 * C126 + C9363 * C219) * C9423 +
                      (C4222 * C81 + C9363 * C85) * C124) *
                         C8070) *
                        C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C9423 * C249) * C9363 * C8070 +
           C3009 * C9363 * C8071 +
           (C248 * C2814 + C3006 + C3006 + C9423 * C3000) * C9363 * C8072) *
              C9502 * C9503 * C72 -
          ((C248 * C2813 + C3005 + C3005 + C9423 * C2999) * C9363 * C8072 +
           C2300 * C9363 * C8071 + C266 * C9363 * C8070) *
              C9502 * C9503 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] += (2 * std::pow(Pi, 2.5) *
                   (((C8126 * C80 + C8070 * C172 + C8127 * C739 + C8071 * C809 +
                      C8128 * C2814 + C8072 * C2914) *
                         C124 +
                     (C8126 * C125 + C8070 * C293 + C8127 * C777 +
                      C8071 * C902 + C8128 * C2866 + C8072 * C3045) *
                         C9423) *
                        C9363 * C9502 * C9503 * C72 -
                    ((C8128 * C2865 + C8072 * C3044 + C8127 * C776 +
                      C8071 * C901 + C8126 * C126 + C8070 * C294) *
                         C9423 +
                     (C8128 * C2813 + C8072 * C2913 + C8127 * C738 +
                      C8071 * C808 + C8126 * C81 + C8070 * C173) *
                         C124) *
                        C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[24] += (2 * std::pow(Pi, 2.5) *
                   (((C4222 * C80 + C9363 * C84) * C8126 +
                     (C4222 * C172 + C9363 * C333) * C8070 + C5843 * C8127 +
                     C5966 * C8071 + (C4222 * C2814 + C9363 * C2816) * C8128 +
                     (C4222 * C2914 + C9363 * C3081) * C8072) *
                        C9423 * C9502 * C9503 * C72 -
                    ((C4222 * C2913 + C9363 * C3080) * C8072 +
                     (C4222 * C2813 + C9363 * C2815) * C8128 +
                     (C4222 * C808 + C9363 * C930) * C8071 +
                     (C4222 * C738 + C9363 * C741) * C8127 +
                     (C4222 * C173 + C9363 * C334) * C8070 +
                     (C4222 * C81 + C9363 * C85) * C8126) *
                        C9423 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[24] += (2 * std::pow(Pi, 2.5) *
                   (((C124 * C80 + C9423 * C125) * C8126 +
                     (C124 * C172 + C9423 * C363) * C8070 + C2876 * C8127 +
                     C3127 * C8071 + (C124 * C2814 + C9423 * C2866) * C8128 +
                     (C124 * C2914 + C9423 * C3123) * C8072) *
                        C9363 * C9502 * C9503 * C72 -
                    ((C124 * C2913 + C9423 * C3122) * C8072 +
                     (C124 * C2813 + C9423 * C2865) * C8128 + C2414 * C8071 +
                     C2178 * C8127 + C374 * C8070 + C142 * C8126) *
                        C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[24] += (2 * std::pow(Pi, 2.5) *
                   ((C8285 * C80 + C8289 + C8289 + C8070 * C404 + C8286 * C739 +
                     C8290 + C8290 + C8071 * C989 + C8287 * C2814 + C8291 +
                     C8291 + C8072 * C3162) *
                        C9423 * C9363 * C9502 * C9503 * C72 -
                    (C8287 * C2813 + C8292 + C8292 + C8072 * C3161 +
                     C8286 * C738 + C8293 + C8293 + C8071 * C988 + C8285 * C81 +
                     C8294 + C8294 + C8070 * C405) *
                        C9423 * C9363 * C9502 * C9503 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C8070 + C5717 * C8071 +
           (C4221 * C2814 + C5714 + C5714 + C9363 * C2818) * C8072) *
              C9423 * C9502 * C450 -
          ((C4221 * C5707 + C5713 + C5713 + C9363 * C5709) * C8072 +
           C5355 * C8071 + C4488 * C8070) *
              C9423 * C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C9423 * C125) * C4222 +
                      (C124 * C84 + C9423 * C129) * C9363) *
                         C8070 +
                     (C2876 * C4222 + C2877 * C9363) * C8071 +
                     ((C124 * C2814 + C9423 * C2866) * C4222 +
                      (C124 * C2816 + C9423 * C2868) * C9363) *
                         C8072) *
                        C9502 * C450 -
                    (((C124 * C5708 + C9423 * C5752) * C9363 +
                      (C124 * C5707 + C9423 * C5751) * C4222) *
                         C8072 +
                     ((C124 * C1796 + C9423 * C1840) * C9363 +
                      (C124 * C1794 + C9423 * C1838) * C4222) *
                         C8071 +
                     ((C124 * C458 + C9423 * C496) * C9363 +
                      (C124 * C455 + C9423 * C493) * C4222) *
                         C8070) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexz[25] += (2 * std::pow(Pi, 2.5) *
                   (((C8126 * C80 + C8070 * C172 + C8127 * C739 + C8071 * C809 +
                      C8128 * C2814 + C8072 * C2914) *
                         C4222 +
                     (C8126 * C84 + C8070 * C176 + C8127 * C742 + C8071 * C812 +
                      C8128 * C2816 + C8072 * C2916) *
                         C9363) *
                        C9423 * C9502 * C450 -
                    ((C8128 * C5708 + C8072 * C5800 + C8127 * C1796 +
                      C8071 * C1878 + C8126 * C458 + C8070 * C528) *
                         C9363 +
                     (C8128 * C5707 + C8072 * C5799 + C8127 * C1794 +
                      C8071 * C1876 + C8126 * C455 + C8070 * C525) *
                         C4222) *
                        C9423 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C124 +
                      (C4222 * C125 + C9363 * C218) * C9423) *
                         C8070 +
                     (C5843 * C124 + C5844 * C9423) * C8071 +
                     ((C4222 * C2814 + C9363 * C2816) * C124 +
                      (C4222 * C2866 + C9363 * C2952) * C9423) *
                         C8072) *
                        C9502 * C450 -
                    (((C4222 * C5751 + C9363 * C5835) * C9423 +
                      (C4222 * C5707 + C9363 * C5708) * C124) *
                         C8072 +
                     (C5476 * C9423 + C5475 * C124) * C8071 +
                     (C4594 * C9423 + C4593 * C124) * C8070) *
                        C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C9423 * C249) * C9363 * C8070 +
           C3009 * C9363 * C8071 +
           (C248 * C2814 + C3006 + C3006 + C9423 * C3000) * C9363 * C8072) *
              C9502 * C450 -
          ((C248 * C5707 + C8425 + C8425 + C9423 * C5880) * C9363 * C8072 +
           (C248 * C1794 + C2639 + C2639 + C9423 * C1950) * C9363 * C8071 +
           (C248 * C455 + C590 + C590 + C9423 * C586) * C9363 * C8070) *
              C9502 * C451) *
         C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] += (2 * std::pow(Pi, 2.5) *
                   (((C8126 * C80 + C8070 * C172 + C8127 * C739 + C8071 * C809 +
                      C8128 * C2814 + C8072 * C2914) *
                         C124 +
                     (C8126 * C125 + C8070 * C293 + C8127 * C777 +
                      C8071 * C902 + C8128 * C2866 + C8072 * C3045) *
                         C9423) *
                        C9363 * C9502 * C450 -
                    ((C8128 * C5751 + C8072 * C5927 + C8127 * C1838 +
                      C8071 * C1990 + C8126 * C493 + C8070 * C618) *
                         C9423 +
                     (C8128 * C5707 + C8072 * C5799 + C8127 * C1794 +
                      C8071 * C1876 + C8126 * C455 + C8070 * C525) *
                         C124) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezx[25] += (2 * std::pow(Pi, 2.5) *
                   (((C4222 * C80 + C9363 * C84) * C8126 +
                     (C4222 * C172 + C9363 * C333) * C8070 + C5843 * C8127 +
                     C5966 * C8071 + (C4222 * C2814 + C9363 * C2816) * C8128 +
                     (C4222 * C2914 + C9363 * C3081) * C8072) *
                        C9423 * C9502 * C450 -
                    ((C4222 * C5799 + C9363 * C5962) * C8072 +
                     (C4222 * C5707 + C9363 * C5708) * C8128 + C5592 * C8071 +
                     C5475 * C8127 + C4690 * C8070 + C4593 * C8126) *
                        C9423 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[25] += (2 * std::pow(Pi, 2.5) *
                   (((C124 * C80 + C9423 * C125) * C8126 +
                     (C124 * C172 + C9423 * C363) * C8070 + C2876 * C8127 +
                     C3127 * C8071 + (C124 * C2814 + C9423 * C2866) * C8128 +
                     (C124 * C2914 + C9423 * C3123) * C8072) *
                        C9363 * C9502 * C450 -
                    ((C124 * C5799 + C9423 * C6000) * C8072 +
                     (C124 * C5707 + C9423 * C5751) * C8128 +
                     (C124 * C1876 + C9423 * C2062) * C8071 +
                     (C124 * C1794 + C9423 * C1838) * C8127 +
                     (C124 * C525 + C9423 * C676) * C8070 +
                     (C124 * C455 + C9423 * C493) * C8126) *
                        C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezz[25] += (2 * std::pow(Pi, 2.5) *
                   ((C8285 * C80 + C8289 + C8289 + C8070 * C404 + C8286 * C739 +
                     C8290 + C8290 + C8071 * C989 + C8287 * C2814 + C8291 +
                     C8291 + C8072 * C3162) *
                        C9423 * C9363 * C9502 * C450 -
                    (C8287 * C5707 + C8530 + C8530 + C8072 * C6041 +
                     C8286 * C1794 + C8531 + C8531 + C8071 * C2098 +
                     C8285 * C455 + C8532 + C8532 + C8070 * C705) *
                        C9423 * C9363 * C9502 * C451) *
                   C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexx[26] += (2 * std::pow(Pi, 2.5) *
                   (((C4221 * C80 + C4224 + C4224 + C9363 * C88) * C8070 +
                     C5717 * C8071 + C8567 * C8072) *
                        C9423 * C735 -
                    ((C4221 * C8558 + C8564 + C8564 + C9363 * C8560) * C8072 +
                     C8567 * C8071 + C5717 * C8070) *
                        C9423 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexy[26] += (2 * std::pow(Pi, 2.5) *
                   ((((C124 * C80 + C9423 * C125) * C4222 +
                      (C124 * C84 + C9423 * C129) * C9363) *
                         C8070 +
                     (C8596 + C8597) * C8071 + (C8604 + C8605) * C8072) *
                        C735 -
                    (((C124 * C8559 + C9423 * C8594) * C9363 +
                      (C124 * C8558 + C9423 * C8593) * C4222) *
                         C8072 +
                     (C8605 + C8604) * C8071 + (C8597 + C8596) * C8070) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eexz[26] += (2 * std::pow(Pi, 2.5) *
                   (((C8126 * C80 + C8070 * C172 + C8127 * C739 + C8071 * C809 +
                      C8128 * C2814 + C8072 * C2914) *
                         C4222 +
                     (C8126 * C84 + C8070 * C176 + C8127 * C742 + C8071 * C812 +
                      C8128 * C2816 + C8072 * C2916) *
                         C9363) *
                        C9423 * C735 -
                    ((C8128 * C8559 + C8072 * C8632 + C8127 * C2816 +
                      C8071 * C2916 + C8126 * C742 + C8070 * C812) *
                         C9363 +
                     (C8128 * C8558 + C8072 * C8631 + C8127 * C2814 +
                      C8071 * C2914 + C8126 * C739 + C8070 * C809) *
                         C4222) *
                        C9423 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[26] += (2 * std::pow(Pi, 2.5) *
                   ((((C4222 * C80 + C9363 * C84) * C124 +
                      (C4222 * C125 + C9363 * C218) * C9423) *
                         C8070 +
                     (C8661 + C8662) * C8071 + (C8669 + C8670) * C8072) *
                        C735 -
                    (((C4222 * C8593 + C9363 * C8659) * C9423 +
                      (C4222 * C8558 + C9363 * C8559) * C124) *
                         C8072 +
                     (C8670 + C8669) * C8071 + (C8662 + C8661) * C8070) *
                        C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C248 * C80 + C254 + C254 + C9423 * C249) * C9363 * C8070 +
           C8698 * C8071 + C8705 * C8072) *
              C735 -
          ((C248 * C8558 + C8701 + C8701 + C9423 * C8696) * C9363 * C8072 +
           C8705 * C8071 + C8698 * C8070) *
              C736) *
         C9503 * C9504) /
        (p * q * std::sqrt(p + q));
    d2eeyz[26] += (2 * std::pow(Pi, 2.5) *
                   (((C8126 * C80 + C8070 * C172 + C8127 * C739 + C8071 * C809 +
                      C8128 * C2814 + C8072 * C2914) *
                         C124 +
                     (C8126 * C125 + C8070 * C293 + C8127 * C777 +
                      C8071 * C902 + C8128 * C2866 + C8072 * C3045) *
                         C9423) *
                        C9363 * C735 -
                    ((C8128 * C8593 + C8072 * C8731 + C8127 * C2866 +
                      C8071 * C3045 + C8126 * C777 + C8070 * C902) *
                         C9423 +
                     (C8128 * C8558 + C8072 * C8631 + C8127 * C2814 +
                      C8071 * C2914 + C8126 * C739 + C8070 * C809) *
                         C124) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezx[26] += (2 * std::pow(Pi, 2.5) *
                   (((C4222 * C80 + C9363 * C84) * C8126 +
                     (C4222 * C172 + C9363 * C333) * C8070 + C5843 * C8127 +
                     C5966 * C8071 + C8667 * C8128 + C8762 * C8072) *
                        C9423 * C735 -
                    ((C4222 * C8631 + C9363 * C8758) * C8072 +
                     (C4222 * C8558 + C9363 * C8559) * C8128 + C8762 * C8071 +
                     C8667 * C8127 + C5966 * C8070 + C5843 * C8126) *
                        C9423 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezy[26] += (2 * std::pow(Pi, 2.5) *
                   (((C124 * C80 + C9423 * C125) * C8126 +
                     (C124 * C172 + C9423 * C363) * C8070 + C2876 * C8127 +
                     C3127 * C8071 + C8602 * C8128 + C8792 * C8072) *
                        C9363 * C735 -
                    ((C124 * C8631 + C9423 * C8788) * C8072 +
                     (C124 * C8558 + C9423 * C8593) * C8128 + C8792 * C8071 +
                     C8602 * C8127 + C3127 * C8070 + C2876 * C8126) *
                        C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    d2eezz[26] += (2 * std::pow(Pi, 2.5) *
                   ((C8285 * C80 + C8289 + C8289 + C8070 * C404 + C8286 * C739 +
                     C8290 + C8290 + C8071 * C989 + C8287 * C2814 + C8291 +
                     C8291 + C8072 * C3162) *
                        C9423 * C9363 * C735 -
                    (C8287 * C8558 + C8820 + C8820 + C8072 * C8818 +
                     C8286 * C2814 + C8821 + C8821 + C8071 * C3162 +
                     C8285 * C739 + C8822 + C8822 + C8070 * C989) *
                        C9423 * C9363 * C736) *
                   C9503 * C9504) /
                  (p * q * std::sqrt(p + q));
    
}
