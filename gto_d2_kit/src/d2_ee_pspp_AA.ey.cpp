/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pspp_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1011_11(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C8440 = ae + be;
    const double C8439 = xA - xB;
    const double C8438 = ae * be;
    const double C8457 = yA - yB;
    const double C8460 = zA - zB;
    const double C8491 = p + q;
    const double C8490 = p * q;
    const double C8496 = xP - xQ;
    const double C8495 = bs[2];
    const double C8503 = std::pow(ae, 2);
    const double C8501 = bs[3];
    const double C8514 = bs[4];
    const double C8534 = yP - yQ;
    const double C8548 = zP - zQ;
    const double C78 = bs[0];
    const double C8893 = ce + de;
    const double C8892 = ce * de;
    const double C8891 = xC - xD;
    const double C8906 = yC - yD;
    const double C8915 = zC - zD;
    const double C8978 = 2 * C8440;
    const double C8977 = std::pow(C8439, 2);
    const double C8441 = C8438 * C8439;
    const double C8473 = C8438 * C8457;
    const double C8980 = std::pow(C8457, 2);
    const double C8485 = C8438 * C8460;
    const double C8979 = std::pow(C8460, 2);
    const double C8492 = 2 * C8490;
    const double C8504 = C8496 * ae;
    const double C8500 = std::pow(C8496, 2);
    const double C8537 = C8534 * ae;
    const double C8536 = C8496 * C8534;
    const double C8563 = C8534 * C8496;
    const double C8571 = std::pow(C8534, 2);
    const double C8551 = C8548 * ae;
    const double C8550 = C8496 * C8548;
    const double C8580 = C8534 * C8548;
    const double C8588 = C8548 * C8496;
    const double C8596 = C8548 * C8534;
    const double C8604 = std::pow(C8548, 2);
    const double C8903 = 2 * C8893;
    const double C8983 = std::pow(C8893, 2);
    const double C8894 = std::pow(C8891, 2);
    const double C8982 = C8891 * de;
    const double C8981 = C8891 * ce;
    const double C8928 = std::pow(C8906, 2);
    const double C8987 = C8906 * de;
    const double C8985 = C8906 * ce;
    const double C8945 = std::pow(C8915, 2);
    const double C8988 = C8915 * de;
    const double C8986 = C8915 * ce;
    const double C8990 = std::pow(C8978, -1);
    const double C8989 = C8977 * C8438;
    const double C8992 = C8980 * C8438;
    const double C8991 = C8979 * C8438;
    const double C8494 = C8492 / C8491;
    const double C86 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C8492 / C8491, 2) -
          (bs[1] * C8492) / C8491) *
         std::pow(ae, 2)) /
        std::pow(C8440, 2);
    const double C79 = -(C8496 * bs[1] * C8492) / C8491;
    const double C461 = -(C8534 * bs[1] * C8492) / C8491;
    const double C851 = -(C8548 * bs[1] * C8492) / C8491;
    const double C8506 = C8501 * C8504;
    const double C8517 = C8514 * C8504;
    const double C82 = (-(bs[1] * C8504 * C8492) / C8491) / C8440;
    const double C8516 = C8500 * C8514;
    const double C8539 = C8501 * C8537;
    const double C8543 = C8514 * C8537;
    const double C123 = (-(bs[1] * C8537 * C8492) / C8491) / C8440;
    const double C8538 = C8536 * C8503;
    const double C8564 = C8563 * C8503;
    const double C8573 = C8571 * C8514;
    const double C8553 = C8501 * C8551;
    const double C8557 = C8514 * C8551;
    const double C170 = (-(bs[1] * C8551 * C8492) / C8491) / C8440;
    const double C8552 = C8550 * C8503;
    const double C8581 = C8580 * C8503;
    const double C8589 = C8588 * C8503;
    const double C8597 = C8596 * C8503;
    const double C8606 = C8604 * C8514;
    const double C8984 = std::pow(C8903, -1);
    const double C8994 = 2 * C8983;
    const double C8895 = C8894 * C8892;
    const double C8929 = C8928 * C8892;
    const double C8946 = C8945 * C8892;
    const double C9000 = C8989 / C8440;
    const double C9002 = C8992 / C8440;
    const double C9001 = C8991 / C8440;
    const double C8497 = std::pow(C8494, 2);
    const double C8502 = -C8494;
    const double C8515 = std::pow(C8494, 4);
    const double C8542 = C8514 * C8538;
    const double C8566 = C8514 * C8564;
    const double C8556 = C8514 * C8552;
    const double C8583 = C8514 * C8581;
    const double C8591 = C8514 * C8589;
    const double C8599 = C8514 * C8597;
    const double C8896 = C8895 / C8893;
    const double C8930 = C8929 / C8893;
    const double C8947 = C8946 / C8893;
    const double C9003 = -C9000;
    const double C9005 = -C9002;
    const double C9004 = -C9001;
    const double C8499 = C8495 * C8497;
    const double C87 = (2 * ae * C8497 * C8495 * C8496 * ae +
                        C8496 *
                            (C8495 * C8497 +
                             std::pow(C8496, 2) * bs[3] * std::pow(-C8494, 3)) *
                            std::pow(ae, 2)) /
                       std::pow(C8440, 2);
    const double C127 =
        (C8497 * C8495 * C8496 * (yP - yQ) * C8503) / std::pow(C8440, 2);
    const double C174 =
        (C8497 * C8495 * C8496 * (zP - zQ) * C8503) / std::pow(C8440, 2);
    const double C216 =
        (C8497 * C8495 * C8534 * C8496 * C8503) / std::pow(C8440, 2);
    const double C247 =
        ((std::pow(C8534, 2) * C8495 * C8497 - (bs[1] * C8492) / C8491) *
         C8503) /
        std::pow(C8440, 2);
    const double C291 =
        (C8497 * C8495 * C8534 * C8548 * C8503) / std::pow(C8440, 2);
    const double C331 =
        (C8497 * C8495 * C8548 * C8496 * C8503) / std::pow(C8440, 2);
    const double C361 =
        (C8497 * C8495 * C8548 * C8534 * C8503) / std::pow(C8440, 2);
    const double C402 =
        ((std::pow(C8548, 2) * C8495 * C8497 - (bs[1] * C8492) / C8491) *
         C8503) /
        std::pow(C8440, 2);
    const double C83 = (C8496 * C8497 * C8495 * C8504) / C8440 -
                       (ae * bs[1] * C8492) / (C8491 * C8440);
    const double C124 = (C8496 * C8497 * C8495 * C8537) / C8440;
    const double C171 = (C8496 * C8497 * C8495 * C8551) / C8440;
    const double C464 = (C8534 * C8497 * C8495 * C8504) / C8440;
    const double C508 = (C8534 * C8497 * C8495 * C8537) / C8440 -
                        (ae * bs[1] * C8492) / (C8491 * C8440);
    const double C554 = (C8534 * C8497 * C8495 * C8551) / C8440;
    const double C854 = (C8548 * C8497 * C8495 * C8504) / C8440;
    const double C898 = (C8548 * C8497 * C8495 * C8537) / C8440;
    const double C944 = (C8548 * C8497 * C8495 * C8551) / C8440 -
                        (ae * bs[1] * C8492) / (C8491 * C8440);
    const double C8505 = std::pow(C8502, 3);
    const double C8521 = C8515 * C8517;
    const double C8520 = C8516 * C8515;
    const double C8545 = C8515 * C8543;
    const double C8559 = C8515 * C8557;
    const double C8574 = C8573 * C8515;
    const double C8607 = C8606 * C8515;
    const double C8544 = C8515 * C8542;
    const double C8567 = C8515 * C8566;
    const double C8558 = C8515 * C8556;
    const double C8584 = C8515 * C8583;
    const double C8592 = C8515 * C8591;
    const double C8600 = C8515 * C8599;
    const double C8897 = -C8896;
    const double C8931 = -C8930;
    const double C8948 = -C8947;
    const double C9006 = std::exp(C9003);
    const double C9008 = std::exp(C9005);
    const double C9007 = std::exp(C9004);
    const double C8507 = C8499 * ae;
    const double C80 = C8499 * C8500 - (bs[1] * C8492) / C8491;
    const double C460 = C8534 * C8496 * C8499;
    const double C850 = C8548 * C8496 * C8499;
    const double C1544 = C8499 * C8571 - (bs[1] * C8492) / C8491;
    const double C1818 = C8548 * C8534 * C8499;
    const double C2765 = C8499 * C8604 - (bs[1] * C8492) / C8491;
    const double C8508 = C8505 * C8506;
    const double C8513 = C8501 * C8505;
    const double C8540 = C8505 * C8539;
    const double C8554 = C8505 * C8553;
    const double C128 = (ae * C8497 * C8495 * C8534 * ae +
                         C8496 * C8505 * C8501 * C8496 * C8534 * C8503) /
                        std::pow(C8440, 2);
    const double C175 = (ae * C8497 * C8495 * C8548 * ae +
                         C8496 * C8505 * C8501 * C8496 * C8548 * C8503) /
                        std::pow(C8440, 2);
    const double C217 = (ae * C8497 * C8495 * C8537 +
                         C8496 * C8505 * C8501 * C8534 * C8496 * C8503) /
                        std::pow(C8440, 2);
    const double C248 =
        (C8496 * (C8499 + std::pow(C8534, 2) * C8501 * C8505) * C8503) /
        std::pow(C8440, 2);
    const double C292 =
        (C8496 * C8505 * C8501 * C8534 * C8548 * C8503) / std::pow(C8440, 2);
    const double C293 =
        (C8505 * C8501 * C8581 + C8515 * C8514 * C8581 * C8500) /
        std::pow(C8440, 2);
    const double C332 = (ae * C8497 * C8495 * C8551 +
                         C8496 * C8505 * C8501 * C8548 * C8496 * C8503) /
                        std::pow(C8440, 2);
    const double C362 =
        (C8496 * C8505 * C8501 * C8548 * C8534 * C8503) / std::pow(C8440, 2);
    const double C363 =
        (C8505 * C8501 * C8597 + C8515 * C8514 * C8597 * C8500) /
        std::pow(C8440, 2);
    const double C403 =
        (C8496 * (C8499 + std::pow(C8548, 2) * C8501 * C8505) * C8503) /
        std::pow(C8440, 2);
    const double C467 =
        (C8534 * (C8499 + C8500 * C8501 * C8505) * C8503) / std::pow(C8440, 2);
    const double C511 =
        (ae * C8497 * C8495 * C8504 + C8534 * C8505 * C8501 * C8538) /
        std::pow(C8440, 2);
    const double C557 = (C8534 * C8505 * C8501 * C8552) / std::pow(C8440, 2);
    const double C600 =
        (ae * C8497 * C8495 * C8504 + C8534 * C8505 * C8501 * C8564) /
        std::pow(C8440, 2);
    const double C637 = (2 * ae * C8497 * C8495 * C8537 +
                         C8534 * (C8499 + C8571 * C8501 * C8505) * C8503) /
                        std::pow(C8440, 2);
    const double C682 =
        (ae * C8497 * C8495 * C8551 + C8534 * C8505 * C8501 * C8581) /
        std::pow(C8440, 2);
    const double C724 = (C8534 * C8505 * C8501 * C8589) / std::pow(C8440, 2);
    const double C761 =
        (ae * C8497 * C8495 * C8551 + C8534 * C8505 * C8501 * C8597) /
        std::pow(C8440, 2);
    const double C803 =
        (C8534 * (C8499 + C8604 * C8501 * C8505) * C8503) / std::pow(C8440, 2);
    const double C857 =
        (C8548 * (C8499 + C8500 * C8501 * C8505) * C8503) / std::pow(C8440, 2);
    const double C901 = (C8548 * C8505 * C8501 * C8538) / std::pow(C8440, 2);
    const double C947 =
        (ae * C8497 * C8495 * C8504 + C8548 * C8505 * C8501 * C8552) /
        std::pow(C8440, 2);
    const double C990 = (C8548 * C8505 * C8501 * C8564) / std::pow(C8440, 2);
    const double C1027 =
        (C8548 * (C8499 + C8571 * C8501 * C8505) * C8503) / std::pow(C8440, 2);
    const double C1072 =
        (ae * C8497 * C8495 * C8537 + C8548 * C8505 * C8501 * C8581) /
        std::pow(C8440, 2);
    const double C1114 =
        (ae * C8497 * C8495 * C8504 + C8548 * C8505 * C8501 * C8589) /
        std::pow(C8440, 2);
    const double C1151 =
        (ae * C8497 * C8495 * C8537 + C8548 * C8505 * C8501 * C8597) /
        std::pow(C8440, 2);
    const double C1193 = (2 * ae * C8497 * C8495 * C8551 +
                          C8548 * (C8499 + C8604 * C8501 * C8505) * C8503) /
                         std::pow(C8440, 2);
    const double C8524 = C8496 * C8521;
    const double C8768 = C8534 * C8521;
    const double C1823 =
        (2 * ae * C8548 * C8534 * C8521 +
         C8496 * C8548 * C8534 *
             (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) * C8503) /
        std::pow(C8440, 2);
    const double C8681 = C8496 * C8545;
    const double C8741 = C8534 * C8545;
    const double C8687 = C8496 * C8559;
    const double C8775 = C8534 * C8559;
    const double C8788 = C8548 * C8559;
    const double C902 =
        (C8548 *
         (C8544 + ae * C8496 * C8545 +
          C8496 * (ae * C8545 + C8496 * std::pow(C8502, 5) * bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C2801 =
        (C8505 * C8501 * C8538 + C8544 * C8604) / std::pow(C8440, 2);
    const double C4607 =
        (C8548 *
         (C8544 + ae * C8534 * C8521 +
          C8534 * (ae * C8521 + C8534 * std::pow(C8502, 5) * bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C8213 =
        (2 * C8548 * C8544 +
         C8548 * (C8544 + std::pow(C8502, 5) * bs[5] * C8538 * C8604)) /
        std::pow(C8440, 2);
    const double C991 =
        (C8548 *
         (C8567 + ae * C8496 * C8545 +
          C8496 * (ae * C8545 + C8496 * std::pow(C8502, 5) * bs[5] * C8564))) /
        std::pow(C8440, 2);
    const double C2859 =
        (C8505 * C8501 * C8564 + C8567 * C8604) / std::pow(C8440, 2);
    const double C4686 =
        (C8548 * C8567 + ae * C8548 * C8534 * C8521 +
         C8534 * (ae * C8548 * C8521 +
                  C8534 * C8548 * std::pow(C8502, 5) * bs[5] * C8564)) /
        std::pow(C8440, 2);
    const double C8276 =
        (2 * C8548 * C8567 +
         C8548 * (C8567 + std::pow(C8502, 5) * bs[5] * C8564 * C8604)) /
        std::pow(C8440, 2);
    const double C558 =
        (C8534 *
         (C8558 + ae * C8496 * C8559 +
          C8496 * (ae * C8559 + C8496 * std::pow(C8502, 5) * bs[5] * C8552))) /
        std::pow(C8440, 2);
    const double C1610 =
        (C8505 * C8501 * C8552 + C8558 * C8571) / std::pow(C8440, 2);
    const double C4335 =
        (2 * C8534 * C8558 +
         C8534 * (C8558 + std::pow(C8502, 5) * bs[5] * C8552 * C8571)) /
        std::pow(C8440, 2);
    const double C294 =
        (2 * C8496 * C8584 +
         C8496 * (C8584 + std::pow(C8502, 5) * bs[5] * C8581 * C8500)) /
        std::pow(C8440, 2);
    const double C725 =
        (C8534 *
         (C8592 + ae * C8496 * C8559 +
          C8496 * (ae * C8559 + C8496 * std::pow(C8502, 5) * bs[5] * C8589))) /
        std::pow(C8440, 2);
    const double C1724 =
        (C8505 * C8501 * C8589 + C8592 * C8571) / std::pow(C8440, 2);
    const double C4462 =
        (2 * C8534 * C8592 +
         C8534 * (C8592 + std::pow(C8502, 5) * bs[5] * C8589 * C8571)) /
        std::pow(C8440, 2);
    const double C364 =
        (2 * C8496 * C8600 +
         C8496 * (C8600 + std::pow(C8502, 5) * bs[5] * C8597 * C8500)) /
        std::pow(C8440, 2);
    const double C8898 = std::exp(C8897);
    const double C8932 = std::exp(C8931);
    const double C8949 = std::exp(C8948);
    const double C3422 = C9006 * C464;
    const double C6464 = C9006 * C854;
    const double C8442 = C8441 * C9006;
    const double C65 = -(C9006 * C8439 * be) / C8440;
    const double C66 = C8990 * C9006;
    const double C133 = C9008 * C124;
    const double C6386 = C9008 * C898;
    const double C8474 = C8473 * C9008;
    const double C122 = -(2 * C8438 * (yA - yB) * C9008) / C8440;
    const double C246 =
        -((C9008 - (C8457 * 2 * C8438 * C8457 * C9008) / C8440) * 2 * C8438) /
        C8440;
    const double C3068 =
        (-(0 * be) / C8440) / (2 * C8440) -
        ((C9008 - (C8457 * 2 * C8438 * C8457 * C9008) / C8440) * be) / C8440;
    const double C3069 =
        (-(2 * C8438 * C8457 * C9008) / C8440) / (2 * C8440) - (0 * be) / C8440;
    const double C3032 = -(C9008 * C8457 * be) / C8440;
    const double C3033 = C8990 * C9008;
    const double C180 = C9007 * C171;
    const double C3378 = C9007 * C554;
    const double C8486 = C8485 * C9007;
    const double C169 = -(2 * C8438 * (zA - zB) * C9007) / C8440;
    const double C401 =
        -((C9007 - (C8460 * 2 * C8438 * C8460 * C9007) / C8440) * 2 * C8438) /
        C8440;
    const double C5829 =
        (-(0 * be) / C8440) / (2 * C8440) -
        ((C9007 - (C8460 * 2 * C8438 * C8460 * C9007) / C8440) * be) / C8440;
    const double C5830 =
        (-(2 * C8438 * C8460 * C9007) / C8440) / (2 * C8440) - (0 * be) / C8440;
    const double C5774 = -(C9007 * C8460 * be) / C8440;
    const double C5775 = C8990 * C9007;
    const double C8509 = C8496 * C8508;
    const double C1580 = (C8505 * C8501 * C8538 + ae * C8534 * C8508 +
                          C8534 * (ae * C8508 + C8534 * C8544)) /
                         std::pow(C8440, 2);
    const double C1638 = (C8505 * C8501 * C8564 + ae * C8534 * C8508 +
                          C8534 * (ae * C8508 + C8534 * C8567)) /
                         std::pow(C8440, 2);
    const double C1862 =
        (C8548 * (ae * C8508 + C8534 * C8544)) / std::pow(C8440, 2);
    const double C1900 =
        (ae * C8534 * C8508 + C8548 * C8534 * C8558) / std::pow(C8440, 2);
    const double C1936 =
        (ae * C8548 * C8508 + C8534 * C8548 * C8567) / std::pow(C8440, 2);
    const double C2046 =
        (ae * C8534 * C8508 + C8548 * C8534 * C8592) / std::pow(C8440, 2);
    const double C2831 = (C8505 * C8501 * C8552 + ae * C8548 * C8508 +
                          C8548 * (ae * C8508 + C8548 * C8558)) /
                         std::pow(C8440, 2);
    const double C2945 = (C8505 * C8501 * C8589 + ae * C8548 * C8508 +
                          C8548 * (ae * C8508 + C8548 * C8592)) /
                         std::pow(C8440, 2);
    const double C4307 =
        (2 * (ae * C8508 + C8534 * C8544) + ae * (C8508 + C8521 * C8571) +
         C8534 * (C8544 + ae * C8534 * C8521 +
                  C8534 * (ae * C8521 +
                           C8534 * std::pow(C8502, 5) * bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C4370 =
        (2 * (ae * C8508 + C8534 * C8567) + ae * (C8508 + C8521 * C8571) +
         C8534 * (C8567 + ae * C8534 * C8521 +
                  C8534 * (ae * C8521 +
                           C8534 * std::pow(C8502, 5) * bs[5] * C8564))) /
        std::pow(C8440, 2);
    const double C4643 =
        (ae * (C8508 + C8521 * C8571) +
         C8548 * (C8558 + std::pow(C8502, 5) * bs[5] * C8552 * C8571)) /
        std::pow(C8440, 2);
    const double C4802 =
        (ae * (C8508 + C8521 * C8571) +
         C8548 * (C8592 + std::pow(C8502, 5) * bs[5] * C8589 * C8571)) /
        std::pow(C8440, 2);
    const double C5554 =
        (ae * C8508 + C8534 * C8544 +
         (ae * C8521 + C8534 * std::pow(C8502, 5) * bs[5] * C8538) * C8604) /
        std::pow(C8440, 2);
    const double C5609 =
        (ae * (C8508 + C8521 * C8604) +
         C8534 * (C8567 + std::pow(C8502, 5) * bs[5] * C8564 * C8604)) /
        std::pow(C8440, 2);
    const double C8249 =
        (2 * (ae * C8508 + C8548 * C8558) + ae * (C8508 + C8521 * C8604) +
         C8548 * (C8558 + ae * C8548 * C8521 +
                  C8548 * (ae * C8521 +
                           C8548 * std::pow(C8502, 5) * bs[5] * C8552))) /
        std::pow(C8440, 2);
    const double C8372 =
        (2 * (ae * C8508 + C8548 * C8592) + ae * (C8508 + C8521 * C8604) +
         C8548 * (C8592 + ae * C8548 * C8521 +
                  C8548 * (ae * C8521 +
                           C8548 * std::pow(C8502, 5) * bs[5] * C8589))) /
        std::pow(C8440, 2);
    const double C1546 = (C8497 * C8495 * C8504 + C8508 * C8571) / C8440;
    const double C1820 = (C8548 * C8534 * C8508) / C8440;
    const double C2767 = (C8497 * C8495 * C8504 + C8508 * C8604) / C8440;
    const double C4271 =
        (2 * C8534 * C8508 + C8534 * (C8508 + C8521 * C8571)) / C8440;
    const double C4563 = (C8548 * (C8508 + C8521 * C8571)) / C8440;
    const double C8178 =
        (2 * C8548 * C8508 + C8548 * (C8508 + C8521 * C8604)) / C8440;
    const double C8519 = C8496 * C8513;
    const double C8518 = C8513 * ae;
    const double C8523 = C8513 + C8520;
    const double C8575 = C8513 + C8574;
    const double C8608 = C8513 + C8607;
    const double C8742 = C8534 * C8513;
    const double C8789 = C8548 * C8513;
    const double C249 = ((C8499 + C8571 * C8501 * C8505) * C8503 +
                         (C8513 + C8571 * C8514 * C8515) * C8503 * C8500) /
                        std::pow(C8440, 2);
    const double C404 = ((C8499 + C8604 * C8501 * C8505) * C8503 +
                         (C8513 + C8604 * C8514 * C8515) * C8503 * C8500) /
                        std::pow(C8440, 2);
    const double C81 = 2 * C8496 * C8499 + C8496 * (C8499 + C8513 * C8500);
    const double C462 = C8534 * (C8499 + C8513 * C8500);
    const double C852 = C8548 * (C8499 + C8513 * C8500);
    const double C4270 = 2 * C8534 * C8499 + C8534 * (C8499 + C8513 * C8571);
    const double C4562 = C8548 * (C8499 + C8513 * C8571);
    const double C8177 = 2 * C8548 * C8499 + C8548 * (C8499 + C8513 * C8604);
    const double C8677 = C8534 * C8540;
    const double C129 = (C8505 * C8501 * C8538 + ae * C8496 * C8540 +
                         C8496 * (ae * C8540 + C8496 * C8515 * C8514 * C8538)) /
                        std::pow(C8440, 2);
    const double C130 =
        (2 * (ae * C8540 + C8496 * C8544) + ae * (C8540 + C8545 * C8500) +
         C8496 * (C8544 + ae * C8496 * C8545 +
                  C8496 * (ae * C8545 +
                           C8496 * std::pow(C8502, 5) * bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C218 = (C8505 * C8501 * C8564 + ae * C8496 * C8540 +
                         C8496 * (ae * C8540 + C8496 * C8515 * C8514 * C8564)) /
                        std::pow(C8440, 2);
    const double C219 =
        (2 * (ae * C8540 + C8496 * C8567) + ae * (C8540 + C8545 * C8500) +
         C8496 * (C8567 + ae * C8496 * C8545 +
                  C8496 * (ae * C8545 +
                           C8496 * std::pow(C8502, 5) * bs[5] * C8564))) /
        std::pow(C8440, 2);
    const double C900 =
        (C8548 * (ae * C8540 + C8496 * C8544)) / std::pow(C8440, 2);
    const double C989 =
        (C8548 * (ae * C8540 + C8496 * C8567)) / std::pow(C8440, 2);
    const double C1071 =
        (ae * C8496 * C8540 + C8548 * C8496 * C8584) / std::pow(C8440, 2);
    const double C1073 =
        (ae * (C8540 + C8545 * C8500) +
         C8548 * (C8584 + std::pow(C8502, 5) * bs[5] * C8581 * C8500)) /
        std::pow(C8440, 2);
    const double C1150 =
        (ae * C8496 * C8540 + C8548 * C8496 * C8600) / std::pow(C8440, 2);
    const double C1152 =
        (ae * (C8540 + C8545 * C8500) +
         C8548 * (C8600 + std::pow(C8502, 5) * bs[5] * C8597 * C8500)) /
        std::pow(C8440, 2);
    const double C2802 =
        (ae * C8540 + C8496 * C8544 +
         (ae * C8545 + C8496 * std::pow(C8502, 5) * bs[5] * C8538) * C8604) /
        std::pow(C8440, 2);
    const double C2860 =
        (ae * C8540 + C8496 * C8567 +
         (ae * C8545 + C8496 * std::pow(C8502, 5) * bs[5] * C8564) * C8604) /
        std::pow(C8440, 2);
    const double C2917 = (C8505 * C8501 * C8581 + ae * C8548 * C8540 +
                          C8548 * (ae * C8540 + C8548 * C8584)) /
                         std::pow(C8440, 2);
    const double C2973 = (C8505 * C8501 * C8597 + ae * C8548 * C8540 +
                          C8548 * (ae * C8540 + C8548 * C8600)) /
                         std::pow(C8440, 2);
    const double C8345 =
        (2 * (ae * C8540 + C8548 * C8584) + ae * (C8540 + C8545 * C8604) +
         C8548 * (C8584 + ae * C8548 * C8545 +
                  C8548 * (ae * C8545 +
                           C8548 * std::pow(C8502, 5) * bs[5] * C8581))) /
        std::pow(C8440, 2);
    const double C8402 =
        (2 * (ae * C8540 + C8548 * C8600) + ae * (C8540 + C8545 * C8604) +
         C8548 * (C8600 + ae * C8548 * C8545 +
                  C8548 * (ae * C8545 +
                           C8548 * std::pow(C8502, 5) * bs[5] * C8597))) /
        std::pow(C8440, 2);
    const double C125 = (C8497 * C8495 * C8537 + C8540 * C8500) / C8440;
    const double C126 =
        (2 * C8496 * C8540 + C8496 * (C8540 + C8545 * C8500)) / C8440;
    const double C507 = (C8534 * C8496 * C8540 + C8496 * C8499 * ae) / C8440;
    const double C509 =
        (C8534 * (C8540 + C8545 * C8500) + (C8499 + C8513 * C8500) * ae) /
        C8440;
    const double C897 = (C8548 * C8496 * C8540) / C8440;
    const double C899 = (C8548 * (C8540 + C8545 * C8500)) / C8440;
    const double C2799 = (C8497 * C8495 * C8537 + C8540 * C8604) / C8440;
    const double C8212 =
        (2 * C8548 * C8540 + C8548 * (C8540 + C8545 * C8604)) / C8440;
    const double C8729 = C8548 * C8554;
    const double C176 = (C8505 * C8501 * C8552 + ae * C8496 * C8554 +
                         C8496 * (ae * C8554 + C8496 * C8515 * C8514 * C8552)) /
                        std::pow(C8440, 2);
    const double C177 =
        (2 * (ae * C8554 + C8496 * C8558) + ae * (C8554 + C8559 * C8500) +
         C8496 * (C8558 + ae * C8496 * C8559 +
                  C8496 * (ae * C8559 +
                           C8496 * std::pow(C8502, 5) * bs[5] * C8552))) /
        std::pow(C8440, 2);
    const double C333 = (C8505 * C8501 * C8589 + ae * C8496 * C8554 +
                         C8496 * (ae * C8554 + C8496 * C8515 * C8514 * C8589)) /
                        std::pow(C8440, 2);
    const double C334 =
        (2 * (ae * C8554 + C8496 * C8592) + ae * (C8554 + C8559 * C8500) +
         C8496 * (C8592 + ae * C8496 * C8559 +
                  C8496 * (ae * C8559 +
                           C8496 * std::pow(C8502, 5) * bs[5] * C8589))) /
        std::pow(C8440, 2);
    const double C556 =
        (C8534 * (ae * C8554 + C8496 * C8558)) / std::pow(C8440, 2);
    const double C681 =
        (ae * C8496 * C8554 + C8534 * C8496 * C8584) / std::pow(C8440, 2);
    const double C683 =
        (ae * (C8554 + C8559 * C8500) +
         C8534 * (C8584 + std::pow(C8502, 5) * bs[5] * C8581 * C8500)) /
        std::pow(C8440, 2);
    const double C723 =
        (C8534 * (ae * C8554 + C8496 * C8592)) / std::pow(C8440, 2);
    const double C760 =
        (ae * C8496 * C8554 + C8534 * C8496 * C8600) / std::pow(C8440, 2);
    const double C762 =
        (ae * (C8554 + C8559 * C8500) +
         C8534 * (C8600 + std::pow(C8502, 5) * bs[5] * C8597 * C8500)) /
        std::pow(C8440, 2);
    const double C1611 =
        (ae * C8554 + C8496 * C8558 +
         (ae * C8559 + C8496 * std::pow(C8502, 5) * bs[5] * C8552) * C8571) /
        std::pow(C8440, 2);
    const double C1696 = (C8505 * C8501 * C8581 + ae * C8534 * C8554 +
                          C8534 * (ae * C8554 + C8534 * C8584)) /
                         std::pow(C8440, 2);
    const double C1725 =
        (ae * C8554 + C8496 * C8592 +
         (ae * C8559 + C8496 * std::pow(C8502, 5) * bs[5] * C8589) * C8571) /
        std::pow(C8440, 2);
    const double C1752 = (C8505 * C8501 * C8597 + ae * C8534 * C8554 +
                          C8534 * (ae * C8554 + C8534 * C8600)) /
                         std::pow(C8440, 2);
    const double C2010 =
        (ae * (C8548 * C8554 + C8507) + C8534 * (ae * C8540 + C8548 * C8584)) /
        std::pow(C8440, 2);
    const double C4432 =
        (2 * (ae * C8554 + C8534 * C8584) + ae * (C8554 + C8559 * C8571) +
         C8534 * (C8584 + ae * C8534 * C8559 +
                  C8534 * (ae * C8559 +
                           C8534 * std::pow(C8502, 5) * bs[5] * C8581))) /
        std::pow(C8440, 2);
    const double C4494 =
        (2 * (ae * C8554 + C8534 * C8600) + ae * (C8554 + C8559 * C8571) +
         C8534 * (C8600 + ae * C8534 * C8559 +
                  C8534 * (ae * C8559 +
                           C8534 * std::pow(C8502, 5) * bs[5] * C8597))) /
        std::pow(C8440, 2);
    const double C172 = (C8497 * C8495 * C8551 + C8554 * C8500) / C8440;
    const double C173 =
        (2 * C8496 * C8554 + C8496 * (C8554 + C8559 * C8500)) / C8440;
    const double C553 = (C8534 * C8496 * C8554) / C8440;
    const double C555 = (C8534 * (C8554 + C8559 * C8500)) / C8440;
    const double C943 = (C8548 * C8496 * C8554 + C8496 * C8499 * ae) / C8440;
    const double C945 =
        (C8548 * (C8554 + C8559 * C8500) + (C8499 + C8513 * C8500) * ae) /
        C8440;
    const double C1608 = (C8497 * C8495 * C8551 + C8554 * C8571) / C8440;
    const double C1898 = (C8548 * C8534 * C8554 + C8534 * C8499 * ae) / C8440;
    const double C4334 =
        (2 * C8534 * C8554 + C8534 * (C8554 + C8559 * C8571)) / C8440;
    const double C4642 =
        (C8548 * (C8554 + C8559 * C8571) + (C8499 + C8513 * C8571) * ae) /
        C8440;
    const double C135 = C9008 * C128;
    const double C182 = C9007 * C175;
    const double C255 = C9008 * C248;
    const double C298 = C9007 * C292;
    const double C300 = C9007 * C293;
    const double C368 = C9008 * C362;
    const double C370 = C9008 * C363;
    const double C410 = C9007 * C403;
    const double C3296 = C9006 * C467;
    const double C3380 = C9007 * C557;
    const double C3424 = C9006 * C600;
    const double C3506 = C9007 * C682;
    const double C3544 = C9006 * C724;
    const double C3621 = C9007 * C803;
    const double C6341 = C9006 * C857;
    const double C6388 = C9008 * C901;
    const double C6466 = C9006 * C990;
    const double C6514 = C9008 * C1027;
    const double C6589 = C9006 * C1114;
    const double C6629 = C9008 * C1151;
    const double C5582 =
        (C8534 * C8558 + ae * C8548 * C8768 +
         C8548 * (ae * C8768 +
                  C8548 * C8534 * std::pow(C8502, 5) * bs[5] * C8552)) /
        std::pow(C8440, 2);
    const double C5692 =
        (C8534 * C8592 + ae * C8548 * C8768 +
         C8548 * (ae * C8768 +
                  C8548 * C8534 * std::pow(C8502, 5) * bs[5] * C8589)) /
        std::pow(C8440, 2);
    const double C5523 = (C8534 * C8508 + C8768 * C8604) / C8440;
    const double C8682 = C8534 * C8681;
    const double C1973 =
        (2 * ae * C8548 * C8681 +
         C8534 * C8548 * C8496 *
             (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) * C8503) /
        std::pow(C8440, 2);
    const double C2918 =
        (C8496 * C8584 + ae * C8548 * C8681 +
         C8548 * (ae * C8681 +
                  C8548 * C8496 * std::pow(C8502, 5) * bs[5] * C8581)) /
        std::pow(C8440, 2);
    const double C2974 =
        (C8496 * C8600 + ae * C8548 * C8681 +
         C8548 * (ae * C8681 +
                  C8548 * C8496 * std::pow(C8502, 5) * bs[5] * C8597)) /
        std::pow(C8440, 2);
    const double C2800 = (C8496 * C8540 + C8681 * C8604) / C8440;
    const double C8733 = C8548 * C8687;
    const double C1697 =
        (C8496 * C8584 + ae * C8534 * C8687 +
         C8534 * (ae * C8687 +
                  C8534 * C8496 * std::pow(C8502, 5) * bs[5] * C8581)) /
        std::pow(C8440, 2);
    const double C1753 =
        (C8496 * C8600 + ae * C8534 * C8687 +
         C8534 * (ae * C8687 +
                  C8534 * C8496 * std::pow(C8502, 5) * bs[5] * C8597)) /
        std::pow(C8440, 2);
    const double C2119 =
        (2 * ae * C8534 * C8687 +
         C8548 * C8534 * C8496 *
             (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) * C8503) /
        std::pow(C8440, 2);
    const double C1609 = (C8496 * C8554 + C8687 * C8571) / C8440;
    const double C8776 = C8548 * C8775;
    const double C8216 = C9008 * C2801;
    const double C8279 = C9006 * C2859;
    const double C4338 = C9007 * C1610;
    const double C4465 = C9006 * C1724;
    const double C8995 = C8984 * C8898;
    const double C8993 = C8898 * C8981;
    const double C458 = -(C8898 * C8982) / C8893;
    const double C8997 = C8984 * C8932;
    const double C8996 = C8932 * C8985;
    const double C1238 = -(C8932 * C8987) / C8893;
    const double C8999 = C8984 * C8949;
    const double C8998 = C8949 * C8986;
    const double C2156 = -(C8949 * C8988) / C8893;
    const double C74 =
        -(((-4 * C8442) / C8440 -
           (C8439 * (C9006 - (C8439 * 2 * C8442) / C8440) * 2 * C8438) /
               C8440) *
          be) /
        C8440;
    const double C75 = (-(0 * be) / C8440) / (2 * C8440) -
                       ((C9006 - (C8439 * 2 * C8442) / C8440) * be) / C8440;
    const double C76 =
        (-((C9006 - (C8439 * 2 * C8442) / C8440) * 2 * C8438) / C8440) /
        (2 * C8440);
    const double C77 = (-(2 * C8442) / C8440) / (2 * C8440) - (0 * be) / C8440;
    const double C3034 =
        -((C9006 - (C8439 * 2 * C8442) / C8440) * 2 * C8438) / C8440;
    const double C3035 = -(2 * C8442) / C8440;
    const double C3148 =
        -(((-4 * C8474) / C8440 -
           (C8457 * (C9008 - (C8457 * 2 * C8474) / C8440) * 2 * C8438) /
               C8440) *
          be) /
        C8440;
    const double C3149 =
        (-((C9008 - (C8457 * 2 * C8474) / C8440) * 2 * C8438) / C8440) /
        (2 * C8440);
    const double C138 = C122 * C80;
    const double C134 = C122 * C83;
    const double C132 = C122 * C79;
    const double C254 = C122 * C124;
    const double C252 = C122 * C123;
    const double C367 = C122 * C171;
    const double C516 = C122 * C460;
    const double C643 = C122 * C508;
    const double C906 = C122 * C850;
    const double C1033 = C122 * C898;
    const double C6387 = C122 * C854;
    const double C6385 = C122 * C851;
    const double C6628 = C122 * C944;
    const double C7280 = C122 * C1818;
    const double C8217 = C122 * C2765;
    const double C256 = C246 * C80;
    const double C253 = C246 * C79;
    const double C640 = C246 * C460;
    const double C1030 = C246 * C850;
    const double C6513 = C246 * C851;
    const double C7392 = C246 * C1818;
    const double C8313 = C246 * C2765;
    const double C3154 = C3068 * C124;
    const double C3151 = C3068 * C123;
    const double C3468 = C3068 * C508;
    const double C3800 = C3068 * C898;
    const double C3152 = C3069 * C508;
    const double C5987 =
        -(((-4 * C8486) / C8440 -
           (C8460 * (C9007 - (C8460 * 2 * C8486) / C8440) * 2 * C8438) /
               C8440) *
          be) /
        C8440;
    const double C5988 =
        (-((C9007 - (C8460 * 2 * C8486) / C8440) * 2 * C8438) / C8440) /
        (2 * C8440);
    const double C185 = C169 * C80;
    const double C181 = C169 * C83;
    const double C179 = C169 * C79;
    const double C297 = C169 * C124;
    const double C409 = C169 * C171;
    const double C407 = C169 * C170;
    const double C562 = C169 * C460;
    const double C809 = C169 * C554;
    const double C952 = C169 * C850;
    const double C1199 = C169 * C944;
    const double C3379 = C169 * C464;
    const double C3377 = C169 * C461;
    const double C3505 = C169 * C508;
    const double C4339 = C169 * C1544;
    const double C4647 = C169 * C1818;
    const double C411 = C401 * C80;
    const double C408 = C401 * C79;
    const double C806 = C401 * C460;
    const double C1196 = C401 * C850;
    const double C3620 = C401 * C461;
    const double C4523 = C401 * C1544;
    const double C4879 = C401 * C1818;
    const double C5993 = C5829 * C171;
    const double C5990 = C5829 * C170;
    const double C6303 = C5829 * C554;
    const double C6666 = C5829 * C944;
    const double C5991 = C5830 * C944;
    const double C8510 = C8509 + C8507;
    const double C4373 = C9006 * C1638;
    const double C7283 = C9008 * C1862;
    const double C4646 = C9007 * C1900;
    const double C4689 = C9006 * C1936;
    const double C4805 = C9006 * C2046;
    const double C8375 = C9006 * C2945;
    const double C4337 = C169 * C1546;
    const double C4375 = C9006 * C1546;
    const double C4645 = C169 * C1820;
    const double C4691 = C9006 * C1820;
    const double C7282 = C122 * C1820;
    const double C8215 = C122 * C2767;
    const double C8281 = C9006 * C2767;
    const double C8522 = C8519 * ae;
    const double C1899 = (C8548 * C8534 * C8687 + C8534 * C8519 * ae) / C8440;
    const double C1545 = C8496 * C8499 + C8519 * C8571;
    const double C1819 = C8548 * C8534 * C8519;
    const double C2766 = C8496 * C8499 + C8519 * C8604;
    const double C8526 = C8524 + C8518;
    const double C8743 = C8741 + C8518;
    const double C8790 = C8788 + C8518;
    const double C5665 =
        (ae * (C8554 + C8548 * (C8548 * C8559 + C8518) + C8548 * C8513 * ae) +
         C8534 * (C8584 + ae * C8548 * C8545 +
                  C8548 * (ae * C8545 +
                           C8548 * std::pow(C8502, 5) * bs[5] * C8581))) /
        std::pow(C8440, 2);
    const double C8525 = C8523 * C8503;
    const double C8576 = C8575 * C8503;
    const double C8609 = C8608 * C8503;
    const double C8744 = C8742 * ae;
    const double C5522 = C8534 * C8499 + C8742 * C8604;
    const double C8791 = C8789 * ae;
    const double C258 = C9008 * C249;
    const double C413 = C9007 * C404;
    const double C8678 = C8677 + C8507;
    const double C137 = C9008 * C129;
    const double C905 = C9008 * C900;
    const double C6470 = C9006 * C989;
    const double C1076 = C9007 * C1071;
    const double C1155 = C9008 * C1150;
    const double C8405 = C9008 * C2973;
    const double C139 = C9008 * C125;
    const double C257 = C122 * C125;
    const double C299 = C169 * C125;
    const double C3155 = C3068 * C125;
    const double C259 = C122 * C126;
    const double C517 = C9008 * C507;
    const double C641 = C122 * C507;
    const double C685 = C169 * C507;
    const double C3153 = C3069 * C507;
    const double C3469 = C3068 * C507;
    const double C644 = C122 * C509;
    const double C3156 = C3069 * C509;
    const double C907 = C9008 * C897;
    const double C1031 = C122 * C897;
    const double C1075 = C169 * C897;
    const double C3801 = C3068 * C897;
    const double C1034 = C122 * C899;
    const double C2890 = C122 * C2799;
    const double C5638 = C3068 * C2799;
    const double C8218 = C9008 * C2799;
    const double C8315 = C122 * C8212;
    const double C8730 = C8729 + C8507;
    const double C184 = C9007 * C176;
    const double C561 = C9007 * C556;
    const double C686 = C9007 * C681;
    const double C3547 = C9006 * C723;
    const double C765 = C9008 * C760;
    const double C4435 = C9007 * C1696;
    const double C4767 = C9007 * C2010;
    const double C186 = C9007 * C172;
    const double C369 = C122 * C172;
    const double C412 = C169 * C172;
    const double C5994 = C5829 * C172;
    const double C414 = C169 * C173;
    const double C563 = C9007 * C553;
    const double C764 = C122 * C553;
    const double C807 = C169 * C553;
    const double C6304 = C5829 * C553;
    const double C810 = C169 * C555;
    const double C953 = C9007 * C943;
    const double C1154 = C122 * C943;
    const double C1197 = C169 * C943;
    const double C5992 = C5830 * C943;
    const double C6667 = C5829 * C943;
    const double C1200 = C169 * C945;
    const double C5995 = C5830 * C945;
    const double C1783 = C169 * C1608;
    const double C4340 = C9007 * C1608;
    const double C7210 = C5829 * C1608;
    const double C2121 = C169 * C1898;
    const double C4648 = C9007 * C1898;
    const double C6302 = C5830 * C1898;
    const double C7501 = C122 * C1898;
    const double C7538 = C5829 * C1898;
    const double C4525 = C169 * C4334;
    const double C4881 = C169 * C4642;
    const double C7211 = C5830 * C4642;
    const double C2891 = C122 * C2800;
    const double C1784 = C169 * C1609;
    const double C73 = C8995 / C8903;
    const double C71 = C8898 / C8903 - (C8993 * C8982) / C8983;
    const double C72 = C8993 / C8994 - (C8995 * C8982) / C8893;
    const double C1240 = C8993 / C8893;
    const double C1542 = C8997 / C8903;
    const double C456 = C8996 / C8893;
    const double C1540 = C8932 / C8903 - (C8996 * C8987) / C8983;
    const double C1541 = C8996 / C8994 - (C8997 * C8987) / C8893;
    const double C2764 = C8999 / C8903;
    const double C848 = C8998 / C8893;
    const double C2762 = C8949 / C8903 - (C8998 * C8988) / C8983;
    const double C2763 = C8998 / C8994 - (C8999 * C8988) / C8893;
    const double C94 = C75 * C83;
    const double C91 = C75 * C82;
    const double C471 = C75 * C464;
    const double C861 = C75 * C854;
    const double C1551 = C75 * C1546;
    const double C1825 = C75 * C1820;
    const double C2772 = C75 * C2767;
    const double C92 = C77 * C83;
    const double C3298 = C3034 * C460;
    const double C3295 = C3034 * C461;
    const double C4274 = C3034 * C1544;
    const double C4566 = C3034 * C1818;
    const double C6342 = C3034 * C850;
    const double C6340 = C3034 * C851;
    const double C8181 = C3034 * C2765;
    const double C3040 = C3035 * C83;
    const double C3038 = C3035 * C464;
    const double C3037 = C3035 * C82;
    const double C3297 = C3035 * C1546;
    const double C3427 = C3035 * C507;
    const double C3425 = C3035 * C460;
    const double C3423 = C3035 * C508;
    const double C3421 = C3035 * C461;
    const double C3546 = C3035 * C553;
    const double C3543 = C3035 * C554;
    const double C3660 = C3035 * C854;
    const double C3659 = C3035 * C1820;
    const double C4276 = C3035 * C4271;
    const double C4374 = C3035 * C1544;
    const double C4464 = C3035 * C1608;
    const double C4568 = C3035 * C4563;
    const double C4690 = C3035 * C1818;
    const double C4804 = C3035 * C1898;
    const double C5527 = C3035 * C5523;
    const double C5526 = C3035 * C2767;
    const double C6469 = C3035 * C897;
    const double C6467 = C3035 * C850;
    const double C6465 = C3035 * C898;
    const double C6463 = C3035 * C851;
    const double C6590 = C3035 * C943;
    const double C6588 = C3035 * C944;
    const double C8183 = C3035 * C8178;
    const double C8280 = C3035 * C2765;
    const double C8278 = C3035 * C2799;
    const double C141 = C134 + C135;
    const double C140 = C132 + C133;
    const double C372 = C367 + C368;
    const double C6392 = C6387 + C6388;
    const double C6391 = C6385 + C6386;
    const double C6630 = C6628 + C6629;
    const double C260 = C253 + C254;
    const double C6516 = C6513 + C1033;
    const double C188 = C181 + C182;
    const double C187 = C179 + C180;
    const double C302 = C297 + C298;
    const double C3384 = C3379 + C3380;
    const double C3383 = C3377 + C3378;
    const double C3507 = C3505 + C3506;
    const double C415 = C408 + C409;
    const double C3622 = C3620 + C809;
    const double C8511 = ae * C8510;
    const double C84 =
        (C8497 * C8495 * C8504 + C8496 * C8510 + C8496 * C8499 * ae) / C8440;
    const double C463 = (C8534 * C8510) / C8440;
    const double C853 = (C8548 * C8510) / C8440;
    const double C4341 = C4337 + C4338;
    const double C4649 = C4645 + C4646;
    const double C7285 = C7282 + C7283;
    const double C8219 = C8215 + C8216;
    const double C8683 = C8682 + C8522;
    const double C8734 = C8733 + C8522;
    const double C2011 =
        (ae * (C8548 * C8687 + C8522) +
         C8534 * (ae * C8681 +
                  C8548 * C8496 * std::pow(C8502, 5) * bs[5] * C8581)) /
        std::pow(C8440, 2);
    const double C2122 = C169 * C1899;
    const double C6305 = C5830 * C1899;
    const double C8528 = ae * C8526;
    const double C8527 = C8496 * C8526;
    const double C8613 = C8534 * C8526;
    const double C8642 = C8548 * C8526;
    const double C1547 = (C8510 + C8526 * C8571) / C8440;
    const double C2768 = (C8510 + C8526 * C8604) / C8440;
    const double C8746 = ae * C8743;
    const double C8745 = C8534 * C8743;
    const double C8759 = C8548 * C8743;
    const double C8793 = ae * C8790;
    const double C8792 = C8548 * C8790;
    const double C466 =
        (2 * ae * C8534 * C8508 + C8496 * C8534 * C8525) / std::pow(C8440, 2);
    const double C856 =
        (2 * ae * C8548 * C8508 + C8496 * C8548 * C8525) / std::pow(C8440, 2);
    const double C1548 =
        ((C8499 + C8500 * C8501 * C8505) * C8503 + C8525 * C8571) /
        std::pow(C8440, 2);
    const double C1549 =
        (2 * ae * (C8508 + C8521 * C8571) +
         C8496 * (C8525 + (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8571)) /
        std::pow(C8440, 2);
    const double C1822 = (C8548 * C8534 * C8525) / std::pow(C8440, 2);
    const double C2769 =
        ((C8499 + C8500 * C8501 * C8505) * C8503 + C8525 * C8604) /
        std::pow(C8440, 2);
    const double C2770 =
        (2 * ae * (C8508 + C8521 * C8604) +
         C8496 * (C8525 + (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8604)) /
        std::pow(C8440, 2);
    const double C4272 =
        (2 * C8534 * C8525 +
         C8534 * (C8525 + (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8571)) /
        std::pow(C8440, 2);
    const double C4564 =
        (C8548 * (C8525 + (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8571)) /
        std::pow(C8440, 2);
    const double C5524 =
        (C8534 * C8525 +
         C8534 * (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) * C8503 *
             C8604) /
        std::pow(C8440, 2);
    const double C8179 =
        (2 * C8548 * C8525 +
         C8548 * (C8525 + (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8604)) /
        std::pow(C8440, 2);
    const double C250 =
        (2 * C8496 * C8576 +
         C8496 * (C8576 + (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8500)) /
        std::pow(C8440, 2);
    const double C636 =
        (2 * ae * C8496 * C8540 + C8534 * C8496 * C8576) / std::pow(C8440, 2);
    const double C638 =
        (2 * ae * (C8540 + C8545 * C8500) +
         C8534 * (C8576 + (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8500)) /
        std::pow(C8440, 2);
    const double C1026 = (C8548 * C8496 * C8576) / std::pow(C8440, 2);
    const double C1028 =
        (C8548 * (C8576 + (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8500)) /
        std::pow(C8440, 2);
    const double C1972 =
        (2 * ae * C8548 * C8540 + C8534 * C8548 * C8576) / std::pow(C8440, 2);
    const double C2887 =
        ((C8499 + C8571 * C8501 * C8505) * C8503 + C8576 * C8604) /
        std::pow(C8440, 2);
    const double C2888 =
        (C8496 * C8576 +
         C8496 * (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) * C8503 *
             C8604) /
        std::pow(C8440, 2);
    const double C5636 =
        (2 * ae * (C8540 + C8545 * C8604) +
         C8534 * (C8576 + (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8604)) /
        std::pow(C8440, 2);
    const double C8311 =
        (2 * C8548 * C8576 +
         C8548 * (C8576 + (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8604)) /
        std::pow(C8440, 2);
    const double C405 =
        (2 * C8496 * C8609 +
         C8496 * (C8609 + (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8500)) /
        std::pow(C8440, 2);
    const double C802 = (C8534 * C8496 * C8609) / std::pow(C8440, 2);
    const double C804 =
        (C8534 * (C8609 + (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8500)) /
        std::pow(C8440, 2);
    const double C1192 =
        (2 * ae * C8496 * C8554 + C8548 * C8496 * C8609) / std::pow(C8440, 2);
    const double C1194 =
        (2 * ae * (C8554 + C8559 * C8500) +
         C8548 * (C8609 + (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8500)) /
        std::pow(C8440, 2);
    const double C1780 =
        ((C8499 + C8604 * C8501 * C8505) * C8503 + C8609 * C8571) /
        std::pow(C8440, 2);
    const double C1781 =
        (C8496 * C8609 +
         C8496 * (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) * C8503 *
             C8571) /
        std::pow(C8440, 2);
    const double C2118 =
        (2 * ae * C8534 * C8554 + C8548 * C8534 * C8609) / std::pow(C8440, 2);
    const double C4521 =
        (2 * C8534 * C8609 +
         C8534 * (C8609 + (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8571)) /
        std::pow(C8440, 2);
    const double C4877 =
        (2 * ae * (C8554 + C8559 * C8571) +
         C8548 * (C8609 + (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                              C8503 * C8571)) /
        std::pow(C8440, 2);
    const double C8777 = C8776 + C8744;
    const double C4764 =
        (ae * C8540 + C8548 * C8584 + ae * (C8548 * C8534 * C8559 + C8744) +
         C8534 * (ae * (C8548 * C8559 + C8518) +
                  C8534 * (ae * C8545 +
                           C8548 * std::pow(C8502, 5) * bs[5] * C8581))) /
        std::pow(C8440, 2);
    const double C8679 = ae * C8678;
    const double C1578 =
        (C8497 * C8495 * C8537 + C8534 * C8678 + C8534 * C8499 * ae) / C8440;
    const double C1860 = (C8548 * C8678) / C8440;
    const double C5553 = (C8678 + C8743 * C8604) / C8440;
    const double C143 = C138 + C139;
    const double C261 = C256 + C257;
    const double C303 = C299 + C300;
    const double C519 = C516 + C517;
    const double C645 = C640 + C641;
    const double C909 = C906 + C907;
    const double C1035 = C1030 + C1031;
    const double C1078 = C1075 + C1076;
    const double C8316 = C8313 + C2890;
    const double C8220 = C8217 + C8218;
    const double C8731 = ae * C8730;
    const double C2829 =
        (C8497 * C8495 * C8551 + C8548 * C8730 + C8548 * C8499 * ae) / C8440;
    const double C688 = C685 + C686;
    const double C190 = C185 + C186;
    const double C373 = C369 + C370;
    const double C416 = C411 + C412;
    const double C565 = C562 + C563;
    const double C767 = C764 + C765;
    const double C811 = C806 + C807;
    const double C955 = C952 + C953;
    const double C1157 = C1154 + C1155;
    const double C1201 = C1196 + C1197;
    const double C4526 = C4523 + C1783;
    const double C4342 = C4339 + C4340;
    const double C4882 = C4879 + C2121;
    const double C4650 = C4647 + C4648;
    const double C3301 = C3295 + C3038;
    const double C4277 = C4274 + C3297;
    const double C3430 = C3423 + C3424;
    const double C3429 = C3421 + C3422;
    const double C3549 = C3546 + C3547;
    const double C3548 = C3543 + C3544;
    const double C6345 = C6340 + C3660;
    const double C4569 = C4566 + C3659;
    const double C4377 = C4374 + C4375;
    const double C4467 = C4464 + C4465;
    const double C4693 = C4690 + C4691;
    const double C4807 = C4804 + C4805;
    const double C8184 = C8181 + C5526;
    const double C6474 = C6469 + C6470;
    const double C6472 = C6465 + C6466;
    const double C6471 = C6463 + C6464;
    const double C6592 = C6588 + C6589;
    const double C8283 = C8280 + C8281;
    const double C8282 = C8278 + C8279;
    const double C366 = C140 * C169;
    const double C374 = C372 * C9007;
    const double C6394 = C6392 * C9006;
    const double C6393 = C6391 * C3035;
    const double C262 = C260 + C254;
    const double C6517 = C6516 + C1033;
    const double C296 = C187 * C122;
    const double C304 = C302 * C9008;
    const double C3386 = C3384 * C9006;
    const double C3385 = C3383 * C3035;
    const double C417 = C415 + C409;
    const double C3623 = C3622 + C809;
    const double C88 =
        ((C8499 + C8500 * C8501 * C8505) * C8503 + C8511 + C8511 +
         C8496 * (2 * ae * C8508 +
                  C8496 * (C8501 * C8505 + C8500 * bs[4] * std::pow(C8494, 4)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C510 =
        (C8511 + C8534 * (ae * C8540 + C8496 * C8544)) / std::pow(C8440, 2);
    const double C599 =
        (C8511 + C8534 * (ae * C8540 + C8496 * C8567)) / std::pow(C8440, 2);
    const double C946 =
        (C8511 + C8548 * (ae * C8554 + C8496 * C8558)) / std::pow(C8440, 2);
    const double C1113 =
        (C8511 + C8548 * (ae * C8554 + C8496 * C8592)) / std::pow(C8440, 2);
    const double C95 = C75 * C84;
    const double C93 = C77 * C84;
    const double C136 = C122 * C84;
    const double C183 = C169 * C84;
    const double C3041 = C3035 * C84;
    const double C472 = C75 * C463;
    const double C470 = C77 * C463;
    const double C514 = C122 * C463;
    const double C560 = C169 * C463;
    const double C3039 = C3035 * C463;
    const double C3426 = C9006 * C463;
    const double C862 = C75 * C853;
    const double C860 = C77 * C853;
    const double C904 = C122 * C853;
    const double C950 = C169 * C853;
    const double C3661 = C3035 * C853;
    const double C6468 = C9006 * C853;
    const double C4343 = C4341 * C9006;
    const double C4651 = C4649 * C9006;
    const double C7287 = C7285 * C9006;
    const double C8221 = C8219 * C9006;
    const double C8684 = ae * C8683;
    const double C1579 =
        (C8496 * C8540 + C8534 * C8683 + C8534 * C8519 * ae) / C8440;
    const double C1861 = (C8548 * C8683) / C8440;
    const double C8735 = ae * C8734;
    const double C2830 =
        (C8496 * C8554 + C8548 * C8734 + C8548 * C8519 * ae) / C8440;
    const double C1863 =
        (C8548 * (C8528 + C8534 * (ae * C8545 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C8529 = C8508 + C8527;
    const double C8614 = ae * C8613;
    const double C1821 = (C8548 * C8613) / C8440;
    const double C8643 = ae * C8642;
    const double C1552 = C77 * C1547;
    const double C3300 = C3035 * C1547;
    const double C2773 = C77 * C2768;
    const double C6344 = C3035 * C2768;
    const double C8747 = C8540 + C8745;
    const double C8760 = ae * C8759;
    const double C8794 = C8554 + C8792;
    const double C3299 = C9006 * C466;
    const double C6343 = C9006 * C856;
    const double C4275 = C9006 * C1548;
    const double C4567 = C9006 * C1822;
    const double C8182 = C9006 * C2769;
    const double C642 = C9008 * C636;
    const double C1032 = C9008 * C1026;
    const double C7393 = C9008 * C1972;
    const double C8314 = C9008 * C2887;
    const double C808 = C9007 * C802;
    const double C1198 = C9007 * C1192;
    const double C4524 = C9007 * C1780;
    const double C4880 = C9007 * C2118;
    const double C8778 = ae * C8777;
    const double C5581 =
        (C8534 * C8554 + C8548 * C8777 + C8548 * C8742 * ae) / C8440;
    const double C1666 = ((C8499 + C8571 * C8501 * C8505) * C8503 + C8679 +
                          C8679 + C8534 * (2 * ae * C8540 + C8534 * C8576)) /
                         std::pow(C8440, 2);
    const double C2082 =
        (C8679 + C8548 * (ae * C8554 + C8534 * C8600)) / std::pow(C8440, 2);
    const double C1669 = C122 * C1578;
    const double C3467 = C3069 * C1578;
    const double C4372 = C3035 * C1578;
    const double C4405 = C3068 * C1578;
    const double C4434 = C169 * C1578;
    const double C1975 = C122 * C1860;
    const double C3799 = C3069 * C1860;
    const double C4688 = C3035 * C1860;
    const double C4729 = C3068 * C1860;
    const double C4766 = C169 * C1860;
    const double C7281 = C9008 * C1860;
    const double C5639 = C3069 * C5553;
    const double C7394 = C122 * C5553;
    const double C371 = C143 * C169;
    const double C263 = C261 + C257;
    const double C305 = C303 * C9008;
    const double C766 = C519 * C169;
    const double C646 = C645 + C641;
    const double C1156 = C909 * C169;
    const double C6389 = C909 * C3035;
    const double C1036 = C1035 + C1031;
    const double C1079 = C1078 * C9008;
    const double C8317 = C8316 + C2890;
    const double C8222 = C8220 * C3035;
    const double C3001 = ((C8499 + C8604 * C8501 * C8505) * C8503 + C8731 +
                          C8731 + C8548 * (2 * ae * C8554 + C8548 * C8609)) /
                         std::pow(C8440, 2);
    const double C3004 = C169 * C2829;
    const double C6665 = C5830 * C2829;
    const double C8374 = C3035 * C2829;
    const double C8404 = C122 * C2829;
    const double C8434 = C5829 * C2829;
    const double C689 = C688 * C9008;
    const double C301 = C190 * C122;
    const double C375 = C373 * C9007;
    const double C418 = C416 + C412;
    const double C687 = C565 * C122;
    const double C3381 = C565 * C3035;
    const double C768 = C767 * C9007;
    const double C812 = C811 + C807;
    const double C1077 = C955 * C122;
    const double C1158 = C1157 * C9007;
    const double C1202 = C1201 + C1197;
    const double C4527 = C4526 + C1783;
    const double C4344 = C4342 * C3035;
    const double C4883 = C4882 + C2121;
    const double C4652 = C4650 * C3035;
    const double C3303 = C3301 + C3038;
    const double C4278 = C4277 + C3297;
    const double C3542 = C3429 * C169;
    const double C3551 = C3549 * C9007;
    const double C3550 = C3548 * C9007;
    const double C6347 = C6345 + C3660;
    const double C4570 = C4569 + C3659;
    const double C4466 = C4377 * C169;
    const double C4468 = C4467 * C9007;
    const double C4806 = C4693 * C169;
    const double C7356 = C4693 * C122;
    const double C4808 = C4807 * C9007;
    const double C8185 = C8184 + C5526;
    const double C6478 = C6474 * C9008;
    const double C6476 = C6472 * C9008;
    const double C6475 = C6471 * C122;
    const double C8285 = C8283 * C122;
    const double C8284 = C8282 * C9008;
    const double C264 = C262 + C255;
    const double C6518 = C6517 + C6514;
    const double C419 = C417 + C410;
    const double C3624 = C3623 + C3621;
    const double C515 = C9008 * C510;
    const double C3428 = C9006 * C599;
    const double C951 = C9007 * C946;
    const double C6591 = C9006 * C1113;
    const double C142 = C136 + C137;
    const double C189 = C183 + C184;
    const double C564 = C560 + C561;
    const double C3302 = C3298 + C3039;
    const double C3431 = C3425 + C3426;
    const double C908 = C904 + C905;
    const double C6346 = C6342 + C3661;
    const double C6473 = C6467 + C6468;
    const double C1667 =
        (C8496 * C8576 + C8684 + C8684 +
         C8534 * (2 * ae * C8681 +
                  C8534 * C8496 *
                      (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C2083 =
        (C8684 + C8548 * (ae * C8687 +
                          C8534 * C8496 * std::pow(C8502, 5) * bs[5] * C8597)) /
        std::pow(C8440, 2);
    const double C1670 = C122 * C1579;
    const double C3470 = C3069 * C1579;
    const double C1976 = C122 * C1861;
    const double C3802 = C3069 * C1861;
    const double C3002 =
        (C8496 * C8609 + C8735 + C8735 +
         C8548 * (2 * ae * C8687 +
                  C8548 * C8496 *
                      (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C3005 = C169 * C2830;
    const double C6668 = C5830 * C2830;
    const double C8530 = C8529 + C8522;
    const double C468 =
        (C8534 * C8525 + C8614 + C8614 +
         C8496 * (2 * ae * C8534 * C8521 +
                  C8496 * C8534 *
                      (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C1581 =
        (ae * C8540 + C8496 * C8544 + C8614 +
         C8534 * (C8528 + C8534 * (ae * C8545 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C1639 =
        (ae * C8540 + C8496 * C8567 + C8614 +
         C8534 * (C8528 + C8534 * (ae * C8545 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8564))) /
        std::pow(C8440, 2);
    const double C1901 = (C8614 + C8548 * C8534 *
                                      (ae * C8559 + C8496 * std::pow(C8502, 5) *
                                                        bs[5] * C8552)) /
                         std::pow(C8440, 2);
    const double C2047 = (C8614 + C8548 * C8534 *
                                      (ae * C8559 + C8496 * std::pow(C8502, 5) *
                                                        bs[5] * C8589)) /
                         std::pow(C8440, 2);
    const double C1826 = C77 * C1821;
    const double C3662 = C3035 * C1821;
    const double C858 =
        (C8548 * C8525 + C8643 + C8643 +
         C8496 * (2 * ae * C8548 * C8521 +
                  C8496 * C8548 *
                      (C8514 * C8515 + C8500 * bs[5] * std::pow(C8502, 5)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C1937 = (C8643 + C8534 * C8548 *
                                      (ae * C8545 + C8496 * std::pow(C8502, 5) *
                                                        bs[5] * C8564)) /
                         std::pow(C8440, 2);
    const double C2832 =
        (ae * C8554 + C8496 * C8558 + C8643 +
         C8548 * (C8528 + C8548 * (ae * C8559 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8552))) /
        std::pow(C8440, 2);
    const double C2946 =
        (ae * C8554 + C8496 * C8592 + C8643 +
         C8548 * (C8528 + C8548 * (ae * C8559 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8589))) /
        std::pow(C8440, 2);
    const double C8748 = C8747 + C8744;
    const double C4727 =
        (C8548 * C8576 + C8760 + C8760 +
         C8534 * (2 * ae * C8548 * C8545 +
                  C8534 * C8548 *
                      (C8514 * C8515 + C8571 * bs[5] * std::pow(C8502, 5)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C5719 =
        (ae * C8554 + C8534 * C8600 + C8760 +
         C8548 * (C8746 + C8548 * (ae * C8559 + C8534 * std::pow(C8502, 5) *
                                                    bs[5] * C8597))) /
        std::pow(C8440, 2);
    const double C8795 = C8794 + C8791;
    const double C5746 =
        (C8534 * C8609 + C8778 + C8778 +
         C8548 * (2 * ae * C8775 +
                  C8548 * C8534 *
                      (C8514 * C8515 + C8604 * bs[5] * std::pow(C8502, 5)) *
                      C8503)) /
        std::pow(C8440, 2);
    const double C5748 = C169 * C5581;
    const double C7539 = C5830 * C5581;
    const double C7502 = C9008 * C2082;
    const double C4376 = C4372 + C4373;
    const double C4436 = C4434 + C4435;
    const double C7395 = C7392 + C1975;
    const double C4692 = C4688 + C4689;
    const double C4768 = C4766 + C4767;
    const double C7284 = C7280 + C7281;
    const double C265 = C263 + C258;
    const double C647 = C646 + C642;
    const double C1037 = C1036 + C1032;
    const double C8318 = C8317 + C8314;
    const double C8376 = C8374 + C8375;
    const double C8406 = C8404 + C8405;
    const double C420 = C418 + C413;
    const double C813 = C812 + C808;
    const double C1203 = C1202 + C1198;
    const double C4528 = C4527 + C4524;
    const double C4884 = C4883 + C4880;
    const double C3305 = C3303 + C3296;
    const double C4279 = C4278 + C4275;
    const double C6349 = C6347 + C6341;
    const double C4571 = C4570 + C4567;
    const double C8186 = C8185 + C8182;
    const double C6519 = C6518 * C9006;
    const double C421 = C419 * C9008;
    const double C518 = C514 + C515;
    const double C3432 = C3427 + C3428;
    const double C954 = C950 + C951;
    const double C6593 = C6590 + C6591;
    const double C3382 = C564 * C9006;
    const double C3304 = C3302 + C3039;
    const double C3545 = C3431 * C169;
    const double C6390 = C908 * C9006;
    const double C6348 = C6346 + C3661;
    const double C6477 = C6473 * C122;
    const double C8531 = ae * C8530;
    const double C85 =
        (2 * C8510 + C8496 * C8530 + (C8499 + C8513 * C8500) * ae) / C8440;
    const double C465 = (C8534 * C8530) / C8440;
    const double C855 = (C8548 * C8530) / C8440;
    const double C8749 = ae * C8748;
    const double C4306 =
        (2 * C8678 + C8534 * C8748 + (C8499 + C8513 * C8571) * ae) / C8440;
    const double C4606 = (C8548 * C8748) / C8440;
    const double C8796 = ae * C8795;
    const double C8248 =
        (2 * C8730 + C8548 * C8795 + (C8499 + C8513 * C8604) * ae) / C8440;
    const double C7503 = C7501 + C7502;
    const double C7396 = C7395 + C1975;
    const double C7357 = C4692 * C9008;
    const double C7286 = C7284 * C3035;
    const double C6515 = C1037 * C9006;
    const double C8319 = C8318 * C9006;
    const double C422 = C420 * C9008;
    const double C814 = C813 * C9008;
    const double C1204 = C1203 * C9008;
    const double C3307 = C3305 * C9007;
    const double C4280 = C4279 * C9007;
    const double C4572 = C4571 * C9007;
    const double C3306 = C3304 + C3299;
    const double C6350 = C6348 + C6343;
    const double C89 =
        (2 * (2 * ae * C8508 + C8496 * C8525) + C8531 + C8531 +
         C8496 * (C8525 + C8528 + C8528 +
                  C8496 * (2 * ae * C8521 +
                           C8496 *
                               (C8514 * C8515 +
                                C8500 * bs[5] * std::pow(C8502, 5)) *
                               C8503))) /
        std::pow(C8440, 2);
    const double C512 =
        (C8531 + C8534 * (C8544 + ae * C8496 * C8545 +
                          C8496 * (ae * C8545 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8538))) /
        std::pow(C8440, 2);
    const double C601 =
        (C8531 + C8534 * (C8567 + ae * C8496 * C8545 +
                          C8496 * (ae * C8545 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8564))) /
        std::pow(C8440, 2);
    const double C948 =
        (C8531 + C8548 * (C8558 + ae * C8496 * C8559 +
                          C8496 * (ae * C8559 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8552))) /
        std::pow(C8440, 2);
    const double C1115 =
        (C8531 + C8548 * (C8592 + ae * C8496 * C8559 +
                          C8496 * (ae * C8559 + C8496 * std::pow(C8502, 5) *
                                                    bs[5] * C8589))) /
        std::pow(C8440, 2);
    const double C96 = C77 * C85;
    const double C473 = C77 * C465;
    const double C3042 = C3035 * C465;
    const double C863 = C77 * C855;
    const double C5777 = C3035 * C855;
    const double C4403 =
        (2 * (2 * ae * C8540 + C8534 * C8576) + C8749 + C8749 +
         C8534 * (C8576 + C8746 + C8746 +
                  C8534 * (2 * ae * C8545 +
                           C8534 *
                               (C8514 * C8515 +
                                C8571 * bs[5] * std::pow(C8502, 5)) *
                               C8503))) /
        std::pow(C8440, 2);
    const double C4842 =
        (C8749 + C8548 * (C8600 + ae * C8534 * C8559 +
                          C8534 * (ae * C8559 + C8534 * std::pow(C8502, 5) *
                                                    bs[5] * C8597))) /
        std::pow(C8440, 2);
    const double C4406 = C3069 * C4306;
    const double C4730 = C3069 * C4606;
    const double C7105 = C122 * C4606;
    const double C8432 =
        (2 * (2 * ae * C8554 + C8548 * C8609) + C8796 + C8796 +
         C8548 * (C8609 + C8793 + C8793 +
                  C8548 * (2 * ae * C8559 +
                           C8548 *
                               (C8514 * C8515 +
                                C8604 * bs[5] * std::pow(C8502, 5)) *
                               C8503))) /
        std::pow(C8440, 2);
    const double C8435 = C5830 * C8248;
    const double C7397 = C7396 + C7393;
    const double C3308 = C3306 * C9007;
    const double C7398 = C7397 * C9006;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                    C66 * C87) *
                       C9007 * C9008 * C8949 * C8932 * C71 -
                   (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                    C65 * C87) *
                       C9007 * C9008 * C8949 * C8932 * C72 +
                   (C74 * C80 + C95 + C95 + C65 * C88 + C76 * C81 + C96 + C96 +
                    C66 * C89) *
                       C9007 * C9008 * C8949 * C8932 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C9008 * C123) * C75 +
           (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
              C9007 * C8949 * C8932 * C71 -
          (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C9007 * C8949 *
              C8932 * C72 +
          (C143 * C75 + C142 * C65 + (C122 * C81 + C9008 * C126) * C77 +
           (C122 * C85 + C9008 * C130) * C66) *
              C9007 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C9007 * C170) * C75 +
           (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
              C9008 * C8949 * C8932 * C71 -
          (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C9008 * C8949 *
              C8932 * C72 +
          (C190 * C75 + C189 * C65 + (C169 * C81 + C9007 * C173) * C77 +
           (C169 * C85 + C9007 * C177) * C66) *
              C9008 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
              C9007 * C8949 * C8932 * C71 -
          ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C9008 +
           (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
              C9007 * C8949 * C8932 * C72 +
          ((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85) * C122 +
           (C75 * C125 + C65 * C218 + C77 * C126 + C66 * C219) * C9008) *
              C9007 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
              C9007 * C8949 * C8932 * C71 -
          (C265 * C66 + C264 * C65) * C9007 * C8949 * C8932 * C72 +
          (C265 * C65 + (C246 * C81 + C259 + C259 + C9008 * C250) * C66) *
              C9007 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C122 +
            (C169 * C123 + C9007 * C291) * C9008) *
               C65 +
           (C296 + C304) * C66) *
              C8949 * C8932 * C71 -
          ((C305 + C301) * C66 + (C304 + C296) * C65) * C8949 * C8932 * C72 +
          ((C301 + C305) * C65 + ((C169 * C81 + C9007 * C173) * C122 +
                                  (C169 * C126 + C9007 * C294) * C9008) *
                                     C66) *
              C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
              C9008 * C8949 * C8932 * C71 -
          ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C9007 +
           (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
              C9008 * C8949 * C8932 * C72 +
          ((C75 * C80 + C65 * C84 + C77 * C81 + C66 * C85) * C169 +
           (C75 * C172 + C65 * C333 + C77 * C173 + C66 * C334) * C9007) *
              C9008 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C169 +
            (C122 * C170 + C9008 * C361) * C9007) *
               C65 +
           (C366 + C374) * C66) *
              C8949 * C8932 * C71 -
          ((C375 + C371) * C66 + (C374 + C366) * C65) * C8949 * C8932 * C72 +
          ((C371 + C375) * C65 + ((C122 * C81 + C9008 * C126) * C169 +
                                  (C122 * C173 + C9008 * C364) * C9007) *
                                     C66) *
              C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
                    C421 * C66) *
                       C8949 * C8932 * C71 -
                   (C422 * C66 + C421 * C65) * C8949 * C8932 * C72 +
                   (C422 * C65 +
                    (C401 * C81 + C414 + C414 + C9007 * C405) * C9008 * C66) *
                       C8949 * C8932 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C9007 * C9008 * C8949 * C456 -
                    (C76 * C460 + C470 + C470 + C66 * C466 + C74 * C461 + C471 +
                     C471 + C65 * C467) *
                        C9007 * C9008 * C8949 * C8997) *
                       C458 +
                   ((C74 * C460 + C472 + C472 + C65 * C466 + C76 * C462 + C473 +
                     C473 + C66 * C468) *
                        C9007 * C9008 * C8949 * C8997 -
                    (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                     C65 * C87) *
                        C9007 * C9008 * C8949 * C456) *
                       C8995)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C75 +
            (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
               C9007 * C8949 * C456 -
           (C518 * C66 + C519 * C77 + (C122 * C464 + C9008 * C511) * C65 +
            (C122 * C461 + C9008 * C508) * C75) *
               C9007 * C8949 * C8997) *
              C458 +
          ((C519 * C75 + C518 * C65 + (C122 * C462 + C9008 * C509) * C77 +
            (C122 * C465 + C9008 * C512) * C66) *
               C9007 * C8949 * C8997 -
           (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C9007 * C8949 *
               C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C75 +
            (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
               C9008 * C8949 * C456 -
           (C564 * C66 + C565 * C77 + (C169 * C464 + C9007 * C557) * C65 +
            (C169 * C461 + C9007 * C554) * C75) *
               C9008 * C8949 * C8997) *
              C458 +
          ((C565 * C75 + C564 * C65 + (C169 * C462 + C9007 * C555) * C77 +
            (C169 * C465 + C9007 * C558) * C66) *
               C9008 * C8949 * C8997 -
           (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C9008 * C8949 *
               C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
               C9007 * C8949 * C456 -
           ((C77 * C507 + C66 * C599 + C75 * C508 + C65 * C600) * C9008 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C122) *
               C9007 * C8949 * C8997) *
              C458 +
          (((C75 * C460 + C65 * C463 + C77 * C462 + C66 * C465) * C122 +
            (C75 * C507 + C65 * C599 + C77 * C509 + C66 * C601) * C9008) *
               C9007 * C8949 * C8997 -
           ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C9008 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
               C9007 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
               C9007 * C8949 * C456 -
           (C647 * C66 + (C246 * C461 + C643 + C643 + C9008 * C637) * C65) *
               C9007 * C8949 * C8997) *
              C458 +
          ((C647 * C65 + (C246 * C462 + C644 + C644 + C9008 * C638) * C66) *
               C9007 * C8949 * C8997 -
           (C265 * C66 + C264 * C65) * C9007 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C122 +
             (C169 * C123 + C9007 * C291) * C9008) *
                C65 +
            (C296 + C304) * C66) *
               C8949 * C456 -
           ((C689 + C687) * C66 + ((C169 * C508 + C9007 * C682) * C9008 +
                                   (C169 * C461 + C9007 * C554) * C122) *
                                      C65) *
               C8949 * C8997) *
              C458 +
          (((C687 + C689) * C65 + ((C169 * C462 + C9007 * C555) * C122 +
                                   (C169 * C509 + C9007 * C683) * C9008) *
                                      C66) *
               C8949 * C8997 -
           ((C305 + C301) * C66 + (C304 + C296) * C65) * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
               C9008 * C8949 * C456 -
           ((C77 * C553 + C66 * C723 + C75 * C554 + C65 * C724) * C9007 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C169) *
               C9008 * C8949 * C8997) *
              C458 +
          (((C75 * C460 + C65 * C463 + C77 * C462 + C66 * C465) * C169 +
            (C75 * C553 + C65 * C723 + C77 * C555 + C66 * C725) * C9007) *
               C9008 * C8949 * C8997 -
           ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C9007 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
               C9008 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C169 +
             (C122 * C170 + C9008 * C361) * C9007) *
                C65 +
            (C366 + C374) * C66) *
               C8949 * C456 -
           ((C768 + C766) * C66 + ((C122 * C554 + C9008 * C761) * C9007 +
                                   (C122 * C461 + C9008 * C508) * C169) *
                                      C65) *
               C8949 * C8997) *
              C458 +
          (((C766 + C768) * C65 + ((C122 * C462 + C9008 * C509) * C169 +
                                   (C122 * C555 + C9008 * C762) * C9007) *
                                      C66) *
               C8949 * C8997 -
           ((C375 + C371) * C66 + (C374 + C366) * C65) * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
                     C421 * C66) *
                        C8949 * C456 -
                    (C814 * C66 +
                     (C401 * C461 + C809 + C809 + C9007 * C803) * C9008 * C65) *
                        C8949 * C8997) *
                       C458 +
                   ((C814 * C65 +
                     (C401 * C462 + C810 + C810 + C9007 * C804) * C9008 * C66) *
                        C8949 * C8997 -
                    (C422 * C66 + C421 * C65) * C8949 * C456) *
                       C8995)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C9007 * C9008 * C848 -
                    (C76 * C850 + C860 + C860 + C66 * C856 + C74 * C851 + C861 +
                     C861 + C65 * C857) *
                        C9007 * C9008 * C8999) *
                       C8932 * C458 +
                   ((C74 * C850 + C862 + C862 + C65 * C856 + C76 * C852 + C863 +
                     C863 + C66 * C858) *
                        C9007 * C9008 * C8999 -
                    (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                     C65 * C87) *
                        C9007 * C9008 * C848) *
                       C8932 * C8995)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C75 +
            (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
               C9007 * C848 -
           (C908 * C66 + C909 * C77 + (C122 * C854 + C9008 * C901) * C65 +
            (C122 * C851 + C9008 * C898) * C75) *
               C9007 * C8999) *
              C8932 * C458 +
          ((C909 * C75 + C908 * C65 + (C122 * C852 + C9008 * C899) * C77 +
            (C122 * C855 + C9008 * C902) * C66) *
               C9007 * C8999 -
           (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C9007 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C75 +
            (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
               C9008 * C848 -
           (C954 * C66 + C955 * C77 + (C169 * C854 + C9007 * C947) * C65 +
            (C169 * C851 + C9007 * C944) * C75) *
               C9008 * C8999) *
              C8932 * C458 +
          ((C955 * C75 + C954 * C65 + (C169 * C852 + C9007 * C945) * C77 +
            (C169 * C855 + C9007 * C948) * C66) *
               C9008 * C8999 -
           (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C9008 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
               C9007 * C848 -
           ((C77 * C897 + C66 * C989 + C75 * C898 + C65 * C990) * C9008 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C122) *
               C9007 * C8999) *
              C8932 * C458 +
          (((C75 * C850 + C65 * C853 + C77 * C852 + C66 * C855) * C122 +
            (C75 * C897 + C65 * C989 + C77 * C899 + C66 * C991) * C9008) *
               C9007 * C8999 -
           ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C9008 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
               C9007 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
               C9007 * C848 -
           (C1037 * C66 + (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C65) *
               C9007 * C8999) *
              C8932 * C458 +
          ((C1037 * C65 + (C246 * C852 + C1034 + C1034 + C9008 * C1028) * C66) *
               C9007 * C8999 -
           (C265 * C66 + C264 * C65) * C9007 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C122 +
             (C169 * C123 + C9007 * C291) * C9008) *
                C65 +
            (C296 + C304) * C66) *
               C848 -
           ((C1079 + C1077) * C66 + ((C169 * C898 + C9007 * C1072) * C9008 +
                                     (C169 * C851 + C9007 * C944) * C122) *
                                        C65) *
               C8999) *
              C8932 * C458 +
          (((C1077 + C1079) * C65 + ((C169 * C852 + C9007 * C945) * C122 +
                                     (C169 * C899 + C9007 * C1073) * C9008) *
                                        C66) *
               C8999 -
           ((C305 + C301) * C66 + (C304 + C296) * C65) * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
               C9008 * C848 -
           ((C77 * C943 + C66 * C1113 + C75 * C944 + C65 * C1114) * C9007 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C169) *
               C9008 * C8999) *
              C8932 * C458 +
          (((C75 * C850 + C65 * C853 + C77 * C852 + C66 * C855) * C169 +
            (C75 * C943 + C65 * C1113 + C77 * C945 + C66 * C1115) * C9007) *
               C9008 * C8999 -
           ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C9007 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
               C9008 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C169 +
             (C122 * C170 + C9008 * C361) * C9007) *
                C65 +
            (C366 + C374) * C66) *
               C848 -
           ((C1158 + C1156) * C66 + ((C122 * C944 + C9008 * C1151) * C9007 +
                                     (C122 * C851 + C9008 * C898) * C169) *
                                        C65) *
               C8999) *
              C8932 * C458 +
          (((C1156 + C1158) * C65 + ((C122 * C852 + C9008 * C899) * C169 +
                                     (C122 * C945 + C9008 * C1152) * C9007) *
                                        C66) *
               C8999 -
           ((C375 + C371) * C66 + (C374 + C366) * C65) * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
            C421 * C66) *
               C848 -
           (C1204 * C66 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C9008 * C65) *
               C8999) *
              C8932 * C458 +
          ((C1204 * C65 +
            (C401 * C852 + C1200 + C1200 + C9007 * C1194) * C9008 * C66) *
               C8999 -
           (C422 * C66 + C421 * C65) * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C9007 * C9008 * C8949 * C1238 -
                    (C76 * C460 + C470 + C470 + C66 * C466 + C74 * C461 + C471 +
                     C471 + C65 * C467) *
                        C9007 * C9008 * C8949 * C8997) *
                       C1240 +
                   ((C74 * C460 + C472 + C472 + C65 * C466 + C76 * C462 + C473 +
                     C473 + C66 * C468) *
                        C9007 * C9008 * C8949 * C8997 -
                    (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                     C65 * C87) *
                        C9007 * C9008 * C8949 * C1238) *
                       C8995)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C75 +
            (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
               C9007 * C8949 * C1238 -
           (C518 * C66 + C519 * C77 + (C122 * C464 + C9008 * C511) * C65 +
            (C122 * C461 + C9008 * C508) * C75) *
               C9007 * C8949 * C8997) *
              C1240 +
          ((C519 * C75 + C518 * C65 + (C122 * C462 + C9008 * C509) * C77 +
            (C122 * C465 + C9008 * C512) * C66) *
               C9007 * C8949 * C8997 -
           (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C9007 * C8949 *
               C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C75 +
            (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
               C9008 * C8949 * C1238 -
           (C564 * C66 + C565 * C77 + (C169 * C464 + C9007 * C557) * C65 +
            (C169 * C461 + C9007 * C554) * C75) *
               C9008 * C8949 * C8997) *
              C1240 +
          ((C565 * C75 + C564 * C65 + (C169 * C462 + C9007 * C555) * C77 +
            (C169 * C465 + C9007 * C558) * C66) *
               C9008 * C8949 * C8997 -
           (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C9008 * C8949 *
               C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
               C9007 * C8949 * C1238 -
           ((C77 * C507 + C66 * C599 + C75 * C508 + C65 * C600) * C9008 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C122) *
               C9007 * C8949 * C8997) *
              C1240 +
          (((C75 * C460 + C65 * C463 + C77 * C462 + C66 * C465) * C122 +
            (C75 * C507 + C65 * C599 + C77 * C509 + C66 * C601) * C9008) *
               C9007 * C8949 * C8997 -
           ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C9008 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
               C9007 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
               C9007 * C8949 * C1238 -
           (C647 * C66 + (C246 * C461 + C643 + C643 + C9008 * C637) * C65) *
               C9007 * C8949 * C8997) *
              C1240 +
          ((C647 * C65 + (C246 * C462 + C644 + C644 + C9008 * C638) * C66) *
               C9007 * C8949 * C8997 -
           (C265 * C66 + C264 * C65) * C9007 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C122 +
             (C169 * C123 + C9007 * C291) * C9008) *
                C65 +
            (C296 + C304) * C66) *
               C8949 * C1238 -
           ((C689 + C687) * C66 + ((C169 * C508 + C9007 * C682) * C9008 +
                                   (C169 * C461 + C9007 * C554) * C122) *
                                      C65) *
               C8949 * C8997) *
              C1240 +
          (((C687 + C689) * C65 + ((C169 * C462 + C9007 * C555) * C122 +
                                   (C169 * C509 + C9007 * C683) * C9008) *
                                      C66) *
               C8949 * C8997 -
           ((C305 + C301) * C66 + (C304 + C296) * C65) * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
               C9008 * C8949 * C1238 -
           ((C77 * C553 + C66 * C723 + C75 * C554 + C65 * C724) * C9007 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C169) *
               C9008 * C8949 * C8997) *
              C1240 +
          (((C75 * C460 + C65 * C463 + C77 * C462 + C66 * C465) * C169 +
            (C75 * C553 + C65 * C723 + C77 * C555 + C66 * C725) * C9007) *
               C9008 * C8949 * C8997 -
           ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C9007 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
               C9008 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C169 +
             (C122 * C170 + C9008 * C361) * C9007) *
                C65 +
            (C366 + C374) * C66) *
               C8949 * C1238 -
           ((C768 + C766) * C66 + ((C122 * C554 + C9008 * C761) * C9007 +
                                   (C122 * C461 + C9008 * C508) * C169) *
                                      C65) *
               C8949 * C8997) *
              C1240 +
          (((C766 + C768) * C65 + ((C122 * C462 + C9008 * C509) * C169 +
                                   (C122 * C555 + C9008 * C762) * C9007) *
                                      C66) *
               C8949 * C8997 -
           ((C375 + C371) * C66 + (C374 + C366) * C65) * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
                     C421 * C66) *
                        C8949 * C1238 -
                    (C814 * C66 +
                     (C401 * C461 + C809 + C809 + C9007 * C803) * C9008 * C65) *
                        C8949 * C8997) *
                       C1240 +
                   ((C814 * C65 +
                     (C401 * C462 + C810 + C810 + C9007 * C804) * C9008 * C66) *
                        C8949 * C8997 -
                    (C422 * C66 + C421 * C65) * C8949 * C1238) *
                       C8995)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                    C66 * C87) *
                       C9007 * C9008 * C8949 * C1540 -
                   (C76 * C460 + C470 + C470 + C66 * C466 + C74 * C461 + C471 +
                    C471 + C65 * C467) *
                       C9007 * C9008 * C8949 * C1541 +
                   (C74 * C1544 + C1551 + C1551 + C65 * C1548 + C76 * C1545 +
                    C1552 + C1552 + C66 * C1549) *
                       C9007 * C9008 * C8949 * C1542) *
                  C8898) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C9008 * C123) * C75 +
           (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
              C9007 * C8949 * C1540 -
          (C518 * C66 + C519 * C77 + (C122 * C464 + C9008 * C511) * C65 +
           (C122 * C461 + C9008 * C508) * C75) *
              C9007 * C8949 * C1541 +
          ((C122 * C1544 + C9008 * C1578) * C75 +
           (C122 * C1546 + C9008 * C1580) * C65 +
           (C122 * C1545 + C9008 * C1579) * C77 +
           (C122 * C1547 + C9008 * C1581) * C66) *
              C9007 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C9007 * C170) * C75 +
           (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
              C9008 * C8949 * C1540 -
          (C564 * C66 + C565 * C77 + (C169 * C464 + C9007 * C557) * C65 +
           (C169 * C461 + C9007 * C554) * C75) *
              C9008 * C8949 * C1541 +
          ((C169 * C1544 + C9007 * C1608) * C75 +
           (C169 * C1546 + C9007 * C1610) * C65 +
           (C169 * C1545 + C9007 * C1609) * C77 +
           (C169 * C1547 + C9007 * C1611) * C66) *
              C9008 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
              C9007 * C8949 * C1540 -
          ((C77 * C507 + C66 * C599 + C75 * C508 + C65 * C600) * C9008 +
           (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C122) *
              C9007 * C8949 * C1541 +
          ((C75 * C1544 + C65 * C1546 + C77 * C1545 + C66 * C1547) * C122 +
           (C75 * C1578 + C65 * C1638 + C77 * C1579 + C66 * C1639) * C9008) *
              C9007 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
              C9007 * C8949 * C1540 -
          (C647 * C66 + (C246 * C461 + C643 + C643 + C9008 * C637) * C65) *
              C9007 * C8949 * C1541 +
          ((C246 * C1544 + C1669 + C1669 + C9008 * C1666) * C65 +
           (C246 * C1545 + C1670 + C1670 + C9008 * C1667) * C66) *
              C9007 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C122 +
            (C169 * C123 + C9007 * C291) * C9008) *
               C65 +
           (C296 + C304) * C66) *
              C8949 * C1540 -
          ((C689 + C687) * C66 + ((C169 * C508 + C9007 * C682) * C9008 +
                                  (C169 * C461 + C9007 * C554) * C122) *
                                     C65) *
              C8949 * C1541 +
          (((C169 * C1544 + C9007 * C1608) * C122 +
            (C169 * C1578 + C9007 * C1696) * C9008) *
               C65 +
           ((C169 * C1545 + C9007 * C1609) * C122 +
            (C169 * C1579 + C9007 * C1697) * C9008) *
               C66) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
              C9008 * C8949 * C1540 -
          ((C77 * C553 + C66 * C723 + C75 * C554 + C65 * C724) * C9007 +
           (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C169) *
              C9008 * C8949 * C1541 +
          ((C75 * C1544 + C65 * C1546 + C77 * C1545 + C66 * C1547) * C169 +
           (C75 * C1608 + C65 * C1724 + C77 * C1609 + C66 * C1725) * C9007) *
              C9008 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C169 +
            (C122 * C170 + C9008 * C361) * C9007) *
               C65 +
           (C366 + C374) * C66) *
              C8949 * C1540 -
          ((C768 + C766) * C66 + ((C122 * C554 + C9008 * C761) * C9007 +
                                  (C122 * C461 + C9008 * C508) * C169) *
                                     C65) *
              C8949 * C1541 +
          (((C122 * C1544 + C9008 * C1578) * C169 +
            (C122 * C1608 + C9008 * C1752) * C9007) *
               C65 +
           ((C122 * C1545 + C9008 * C1579) * C169 +
            (C122 * C1609 + C9008 * C1753) * C9007) *
               C66) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
           C421 * C66) *
              C8949 * C1540 -
          (C814 * C66 +
           (C401 * C461 + C809 + C809 + C9007 * C803) * C9008 * C65) *
              C8949 * C1541 +
          ((C401 * C1544 + C1783 + C1783 + C9007 * C1780) * C9008 * C65 +
           (C401 * C1545 + C1784 + C1784 + C9007 * C1781) * C9008 * C66) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C9007 * C9008 * C848 -
                    (C76 * C850 + C860 + C860 + C66 * C856 + C74 * C851 + C861 +
                     C861 + C65 * C857) *
                        C9007 * C9008 * C8999) *
                       C1238 +
                   ((C74 * C1818 + C1825 + C1825 + C65 * C1822 + C76 * C1819 +
                     C1826 + C1826 + C66 * C1823) *
                        C9007 * C9008 * C8999 -
                    (C76 * C460 + C470 + C470 + C66 * C466 + C74 * C461 + C471 +
                     C471 + C65 * C467) *
                        C9007 * C9008 * C848) *
                       C8997) *
                  C8898) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C75 +
            (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
               C9007 * C848 -
           (C908 * C66 + C909 * C77 + (C122 * C854 + C9008 * C901) * C65 +
            (C122 * C851 + C9008 * C898) * C75) *
               C9007 * C8999) *
              C1238 +
          (((C122 * C1818 + C9008 * C1860) * C75 +
            (C122 * C1820 + C9008 * C1862) * C65 +
            (C122 * C1819 + C9008 * C1861) * C77 +
            (C122 * C1821 + C9008 * C1863) * C66) *
               C9007 * C8999 -
           (C518 * C66 + C519 * C77 + (C122 * C464 + C9008 * C511) * C65 +
            (C122 * C461 + C9008 * C508) * C75) *
               C9007 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C75 +
            (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
               C9008 * C848 -
           (C954 * C66 + C955 * C77 + (C169 * C854 + C9007 * C947) * C65 +
            (C169 * C851 + C9007 * C944) * C75) *
               C9008 * C8999) *
              C1238 +
          (((C169 * C1818 + C9007 * C1898) * C75 +
            (C169 * C1820 + C9007 * C1900) * C65 +
            (C169 * C1819 + C9007 * C1899) * C77 +
            (C169 * C1821 + C9007 * C1901) * C66) *
               C9008 * C8999 -
           (C564 * C66 + C565 * C77 + (C169 * C464 + C9007 * C557) * C65 +
            (C169 * C461 + C9007 * C554) * C75) *
               C9008 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
               C9007 * C848 -
           ((C77 * C897 + C66 * C989 + C75 * C898 + C65 * C990) * C9008 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C122) *
               C9007 * C8999) *
              C1238 +
          (((C75 * C1818 + C65 * C1820 + C77 * C1819 + C66 * C1821) * C122 +
            (C75 * C1860 + C65 * C1936 + C77 * C1861 + C66 * C1937) * C9008) *
               C9007 * C8999 -
           ((C77 * C507 + C66 * C599 + C75 * C508 + C65 * C600) * C9008 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C122) *
               C9007 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
               C9007 * C848 -
           (C1037 * C66 + (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C65) *
               C9007 * C8999) *
              C1238 +
          (((C246 * C1818 + C1975 + C1975 + C9008 * C1972) * C65 +
            (C246 * C1819 + C1976 + C1976 + C9008 * C1973) * C66) *
               C9007 * C8999 -
           (C647 * C66 + (C246 * C461 + C643 + C643 + C9008 * C637) * C65) *
               C9007 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C122 +
             (C169 * C123 + C9007 * C291) * C9008) *
                C65 +
            (C296 + C304) * C66) *
               C848 -
           ((C1079 + C1077) * C66 + ((C169 * C898 + C9007 * C1072) * C9008 +
                                     (C169 * C851 + C9007 * C944) * C122) *
                                        C65) *
               C8999) *
              C1238 +
          ((((C169 * C1818 + C9007 * C1898) * C122 +
             (C169 * C1860 + C9007 * C2010) * C9008) *
                C65 +
            ((C169 * C1819 + C9007 * C1899) * C122 +
             (C169 * C1861 + C9007 * C2011) * C9008) *
                C66) *
               C8999 -
           ((C689 + C687) * C66 + ((C169 * C508 + C9007 * C682) * C9008 +
                                   (C169 * C461 + C9007 * C554) * C122) *
                                      C65) *
               C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
               C9008 * C848 -
           ((C77 * C943 + C66 * C1113 + C75 * C944 + C65 * C1114) * C9007 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C169) *
               C9008 * C8999) *
              C1238 +
          (((C75 * C1818 + C65 * C1820 + C77 * C1819 + C66 * C1821) * C169 +
            (C75 * C1898 + C65 * C2046 + C77 * C1899 + C66 * C2047) * C9007) *
               C9008 * C8999 -
           ((C77 * C553 + C66 * C723 + C75 * C554 + C65 * C724) * C9007 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C169) *
               C9008 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C169 +
             (C122 * C170 + C9008 * C361) * C9007) *
                C65 +
            (C366 + C374) * C66) *
               C848 -
           ((C1158 + C1156) * C66 + ((C122 * C944 + C9008 * C1151) * C9007 +
                                     (C122 * C851 + C9008 * C898) * C169) *
                                        C65) *
               C8999) *
              C1238 +
          ((((C122 * C1818 + C9008 * C1860) * C169 +
             (C122 * C1898 + C9008 * C2082) * C9007) *
                C65 +
            ((C122 * C1819 + C9008 * C1861) * C169 +
             (C122 * C1899 + C9008 * C2083) * C9007) *
                C66) *
               C8999 -
           ((C768 + C766) * C66 + ((C122 * C554 + C9008 * C761) * C9007 +
                                   (C122 * C461 + C9008 * C508) * C169) *
                                      C65) *
               C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
            C421 * C66) *
               C848 -
           (C1204 * C66 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C9008 * C65) *
               C8999) *
              C1238 +
          (((C401 * C1818 + C2121 + C2121 + C9007 * C2118) * C9008 * C65 +
            (C401 * C1819 + C2122 + C2122 + C9007 * C2119) * C9008 * C66) *
               C8999 -
           (C814 * C66 +
            (C401 * C461 + C809 + C809 + C9007 * C803) * C9008 * C65) *
               C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C9007 * C9008 * C2156 -
                    (C76 * C850 + C860 + C860 + C66 * C856 + C74 * C851 + C861 +
                     C861 + C65 * C857) *
                        C9007 * C9008 * C8999) *
                       C8932 * C1240 +
                   ((C74 * C850 + C862 + C862 + C65 * C856 + C76 * C852 + C863 +
                     C863 + C66 * C858) *
                        C9007 * C9008 * C8999 -
                    (C76 * C80 + C93 + C93 + C66 * C88 + C74 * C79 + C94 + C94 +
                     C65 * C87) *
                        C9007 * C9008 * C2156) *
                       C8932 * C8995)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C75 +
            (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
               C9007 * C2156 -
           (C908 * C66 + C909 * C77 + (C122 * C854 + C9008 * C901) * C65 +
            (C122 * C851 + C9008 * C898) * C75) *
               C9007 * C8999) *
              C8932 * C1240 +
          ((C909 * C75 + C908 * C65 + (C122 * C852 + C9008 * C899) * C77 +
            (C122 * C855 + C9008 * C902) * C66) *
               C9007 * C8999 -
           (C142 * C66 + C143 * C77 + C141 * C65 + C140 * C75) * C9007 *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C75 +
            (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
               C9008 * C2156 -
           (C954 * C66 + C955 * C77 + (C169 * C854 + C9007 * C947) * C65 +
            (C169 * C851 + C9007 * C944) * C75) *
               C9008 * C8999) *
              C8932 * C1240 +
          ((C955 * C75 + C954 * C65 + (C169 * C852 + C9007 * C945) * C77 +
            (C169 * C855 + C9007 * C948) * C66) *
               C9008 * C8999 -
           (C189 * C66 + C190 * C77 + C188 * C65 + C187 * C75) * C9008 *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
               C9007 * C2156 -
           ((C77 * C897 + C66 * C989 + C75 * C898 + C65 * C990) * C9008 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C122) *
               C9007 * C8999) *
              C8932 * C1240 +
          (((C75 * C850 + C65 * C853 + C77 * C852 + C66 * C855) * C122 +
            (C75 * C897 + C65 * C989 + C77 * C899 + C66 * C991) * C9008) *
               C9007 * C8999 -
           ((C77 * C125 + C66 * C218 + C75 * C124 + C65 * C217) * C9008 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C122) *
               C9007 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
               C9007 * C2156 -
           (C1037 * C66 + (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C65) *
               C9007 * C8999) *
              C8932 * C1240 +
          ((C1037 * C65 + (C246 * C852 + C1034 + C1034 + C9008 * C1028) * C66) *
               C9007 * C8999 -
           (C265 * C66 + C264 * C65) * C9007 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C122 +
             (C169 * C123 + C9007 * C291) * C9008) *
                C65 +
            (C296 + C304) * C66) *
               C2156 -
           ((C1079 + C1077) * C66 + ((C169 * C898 + C9007 * C1072) * C9008 +
                                     (C169 * C851 + C9007 * C944) * C122) *
                                        C65) *
               C8999) *
              C8932 * C1240 +
          (((C1077 + C1079) * C65 + ((C169 * C852 + C9007 * C945) * C122 +
                                     (C169 * C899 + C9007 * C1073) * C9008) *
                                        C66) *
               C8999 -
           ((C305 + C301) * C66 + (C304 + C296) * C65) * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
               C9008 * C2156 -
           ((C77 * C943 + C66 * C1113 + C75 * C944 + C65 * C1114) * C9007 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C169) *
               C9008 * C8999) *
              C8932 * C1240 +
          (((C75 * C850 + C65 * C853 + C77 * C852 + C66 * C855) * C169 +
            (C75 * C943 + C65 * C1113 + C77 * C945 + C66 * C1115) * C9007) *
               C9008 * C8999 -
           ((C77 * C172 + C66 * C333 + C75 * C171 + C65 * C332) * C9007 +
            (C77 * C80 + C66 * C84 + C75 * C79 + C65 * C83) * C169) *
               C9008 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C169 +
             (C122 * C170 + C9008 * C361) * C9007) *
                C65 +
            (C366 + C374) * C66) *
               C2156 -
           ((C1158 + C1156) * C66 + ((C122 * C944 + C9008 * C1151) * C9007 +
                                     (C122 * C851 + C9008 * C898) * C169) *
                                        C65) *
               C8999) *
              C8932 * C1240 +
          (((C1156 + C1158) * C65 + ((C122 * C852 + C9008 * C899) * C169 +
                                     (C122 * C945 + C9008 * C1152) * C9007) *
                                        C66) *
               C8999 -
           ((C375 + C371) * C66 + (C374 + C366) * C65) * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
            C421 * C66) *
               C2156 -
           (C1204 * C66 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C9008 * C65) *
               C8999) *
              C8932 * C1240 +
          ((C1204 * C65 +
            (C401 * C852 + C1200 + C1200 + C9007 * C1194) * C9008 * C66) *
               C8999 -
           (C422 * C66 + C421 * C65) * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                     C66 * C87) *
                        C9007 * C9008 * C2156 -
                    (C76 * C850 + C860 + C860 + C66 * C856 + C74 * C851 + C861 +
                     C861 + C65 * C857) *
                        C9007 * C9008 * C8999) *
                       C456 +
                   ((C74 * C1818 + C1825 + C1825 + C65 * C1822 + C76 * C1819 +
                     C1826 + C1826 + C66 * C1823) *
                        C9007 * C9008 * C8999 -
                    (C76 * C460 + C470 + C470 + C66 * C466 + C74 * C461 + C471 +
                     C471 + C65 * C467) *
                        C9007 * C9008 * C2156) *
                       C8997) *
                  C8898) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C75 +
            (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
               C9007 * C2156 -
           (C908 * C66 + C909 * C77 + (C122 * C854 + C9008 * C901) * C65 +
            (C122 * C851 + C9008 * C898) * C75) *
               C9007 * C8999) *
              C456 +
          (((C122 * C1818 + C9008 * C1860) * C75 +
            (C122 * C1820 + C9008 * C1862) * C65 +
            (C122 * C1819 + C9008 * C1861) * C77 +
            (C122 * C1821 + C9008 * C1863) * C66) *
               C9007 * C8999 -
           (C518 * C66 + C519 * C77 + (C122 * C464 + C9008 * C511) * C65 +
            (C122 * C461 + C9008 * C508) * C75) *
               C9007 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C75 +
            (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
               C9008 * C2156 -
           (C954 * C66 + C955 * C77 + (C169 * C854 + C9007 * C947) * C65 +
            (C169 * C851 + C9007 * C944) * C75) *
               C9008 * C8999) *
              C456 +
          (((C169 * C1818 + C9007 * C1898) * C75 +
            (C169 * C1820 + C9007 * C1900) * C65 +
            (C169 * C1819 + C9007 * C1899) * C77 +
            (C169 * C1821 + C9007 * C1901) * C66) *
               C9008 * C8999 -
           (C564 * C66 + C565 * C77 + (C169 * C464 + C9007 * C557) * C65 +
            (C169 * C461 + C9007 * C554) * C75) *
               C9008 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
            (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
               C9007 * C2156 -
           ((C77 * C897 + C66 * C989 + C75 * C898 + C65 * C990) * C9008 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C122) *
               C9007 * C8999) *
              C456 +
          (((C75 * C1818 + C65 * C1820 + C77 * C1819 + C66 * C1821) * C122 +
            (C75 * C1860 + C65 * C1936 + C77 * C1861 + C66 * C1937) * C9008) *
               C9007 * C8999 -
           ((C77 * C507 + C66 * C599 + C75 * C508 + C65 * C600) * C9008 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C122) *
               C9007 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
               C9007 * C2156 -
           (C1037 * C66 + (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C65) *
               C9007 * C8999) *
              C456 +
          (((C246 * C1818 + C1975 + C1975 + C9008 * C1972) * C65 +
            (C246 * C1819 + C1976 + C1976 + C9008 * C1973) * C66) *
               C9007 * C8999 -
           (C647 * C66 + (C246 * C461 + C643 + C643 + C9008 * C637) * C65) *
               C9007 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C122 +
             (C169 * C123 + C9007 * C291) * C9008) *
                C65 +
            (C296 + C304) * C66) *
               C2156 -
           ((C1079 + C1077) * C66 + ((C169 * C898 + C9007 * C1072) * C9008 +
                                     (C169 * C851 + C9007 * C944) * C122) *
                                        C65) *
               C8999) *
              C456 +
          ((((C169 * C1818 + C9007 * C1898) * C122 +
             (C169 * C1860 + C9007 * C2010) * C9008) *
                C65 +
            ((C169 * C1819 + C9007 * C1899) * C122 +
             (C169 * C1861 + C9007 * C2011) * C9008) *
                C66) *
               C8999 -
           ((C689 + C687) * C66 + ((C169 * C508 + C9007 * C682) * C9008 +
                                   (C169 * C461 + C9007 * C554) * C122) *
                                      C65) *
               C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
            (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
               C9008 * C2156 -
           ((C77 * C943 + C66 * C1113 + C75 * C944 + C65 * C1114) * C9007 +
            (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C169) *
               C9008 * C8999) *
              C456 +
          (((C75 * C1818 + C65 * C1820 + C77 * C1819 + C66 * C1821) * C169 +
            (C75 * C1898 + C65 * C2046 + C77 * C1899 + C66 * C2047) * C9007) *
               C9008 * C8999 -
           ((C77 * C553 + C66 * C723 + C75 * C554 + C65 * C724) * C9007 +
            (C77 * C460 + C66 * C463 + C75 * C461 + C65 * C464) * C169) *
               C9008 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C169 +
             (C122 * C170 + C9008 * C361) * C9007) *
                C65 +
            (C366 + C374) * C66) *
               C2156 -
           ((C1158 + C1156) * C66 + ((C122 * C944 + C9008 * C1151) * C9007 +
                                     (C122 * C851 + C9008 * C898) * C169) *
                                        C65) *
               C8999) *
              C456 +
          ((((C122 * C1818 + C9008 * C1860) * C169 +
             (C122 * C1898 + C9008 * C2082) * C9007) *
                C65 +
            ((C122 * C1819 + C9008 * C1861) * C169 +
             (C122 * C1899 + C9008 * C2083) * C9007) *
                C66) *
               C8999 -
           ((C768 + C766) * C66 + ((C122 * C554 + C9008 * C761) * C9007 +
                                   (C122 * C461 + C9008 * C508) * C169) *
                                      C65) *
               C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
            C421 * C66) *
               C2156 -
           (C1204 * C66 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C9008 * C65) *
               C8999) *
              C456 +
          (((C401 * C1818 + C2121 + C2121 + C9007 * C2118) * C9008 * C65 +
            (C401 * C1819 + C2122 + C2122 + C9007 * C2119) * C9008 * C66) *
               C8999 -
           (C814 * C66 +
            (C401 * C461 + C809 + C809 + C9007 * C803) * C9008 * C65) *
               C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C78 + C91 + C91 + C65 * C86 + C76 * C79 + C92 + C92 +
                    C66 * C87) *
                       C9007 * C9008 * C2762 -
                   (C76 * C850 + C860 + C860 + C66 * C856 + C74 * C851 + C861 +
                    C861 + C65 * C857) *
                       C9007 * C9008 * C2763 +
                   (C74 * C2765 + C2772 + C2772 + C65 * C2769 + C76 * C2766 +
                    C2773 + C2773 + C66 * C2770) *
                       C9007 * C9008 * C2764) *
                  C8932 * C8898) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C9008 * C123) * C75 +
           (C122 * C82 + C9008 * C127) * C65 + C140 * C77 + C141 * C66) *
              C9007 * C2762 -
          (C908 * C66 + C909 * C77 + (C122 * C854 + C9008 * C901) * C65 +
           (C122 * C851 + C9008 * C898) * C75) *
              C9007 * C2763 +
          ((C122 * C2765 + C9008 * C2799) * C75 +
           (C122 * C2767 + C9008 * C2801) * C65 +
           (C122 * C2766 + C9008 * C2800) * C77 +
           (C122 * C2768 + C9008 * C2802) * C66) *
              C9007 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C9007 * C170) * C75 +
           (C169 * C82 + C9007 * C174) * C65 + C187 * C77 + C188 * C66) *
              C9008 * C2762 -
          (C954 * C66 + C955 * C77 + (C169 * C854 + C9007 * C947) * C65 +
           (C169 * C851 + C9007 * C944) * C75) *
              C9008 * C2763 +
          ((C169 * C2765 + C9007 * C2829) * C75 +
           (C169 * C2767 + C9007 * C2831) * C65 +
           (C169 * C2766 + C9007 * C2830) * C77 +
           (C169 * C2768 + C9007 * C2832) * C66) *
              C9008 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C122 +
           (C75 * C123 + C65 * C216 + C77 * C124 + C66 * C217) * C9008) *
              C9007 * C2762 -
          ((C77 * C897 + C66 * C989 + C75 * C898 + C65 * C990) * C9008 +
           (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C122) *
              C9007 * C2763 +
          ((C75 * C2765 + C65 * C2767 + C77 * C2766 + C66 * C2768) * C122 +
           (C75 * C2799 + C65 * C2859 + C77 * C2800 + C66 * C2860) * C9008) *
              C9007 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C9008 * C247) * C65 + C264 * C66) *
              C9007 * C2762 -
          (C1037 * C66 + (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C65) *
              C9007 * C2763 +
          ((C246 * C2765 + C2890 + C2890 + C9008 * C2887) * C65 +
           (C246 * C2766 + C2891 + C2891 + C9008 * C2888) * C66) *
              C9007 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C122 +
            (C169 * C123 + C9007 * C291) * C9008) *
               C65 +
           (C296 + C304) * C66) *
              C2762 -
          ((C1079 + C1077) * C66 + ((C169 * C898 + C9007 * C1072) * C9008 +
                                    (C169 * C851 + C9007 * C944) * C122) *
                                       C65) *
              C2763 +
          (((C169 * C2765 + C9007 * C2829) * C122 +
            (C169 * C2799 + C9007 * C2917) * C9008) *
               C65 +
           ((C169 * C2766 + C9007 * C2830) * C122 +
            (C169 * C2800 + C9007 * C2918) * C9008) *
               C66) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C75 * C78 + C65 * C82 + C77 * C79 + C66 * C83) * C169 +
           (C75 * C170 + C65 * C331 + C77 * C171 + C66 * C332) * C9007) *
              C9008 * C2762 -
          ((C77 * C943 + C66 * C1113 + C75 * C944 + C65 * C1114) * C9007 +
           (C77 * C850 + C66 * C853 + C75 * C851 + C65 * C854) * C169) *
              C9008 * C2763 +
          ((C75 * C2765 + C65 * C2767 + C77 * C2766 + C66 * C2768) * C169 +
           (C75 * C2829 + C65 * C2945 + C77 * C2830 + C66 * C2946) * C9007) *
              C9008 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C169 +
            (C122 * C170 + C9008 * C361) * C9007) *
               C65 +
           (C366 + C374) * C66) *
              C2762 -
          ((C1158 + C1156) * C66 + ((C122 * C944 + C9008 * C1151) * C9007 +
                                    (C122 * C851 + C9008 * C898) * C169) *
                                       C65) *
              C2763 +
          (((C122 * C2765 + C9008 * C2799) * C169 +
            (C122 * C2829 + C9008 * C2973) * C9007) *
               C65 +
           ((C122 * C2766 + C9008 * C2800) * C169 +
            (C122 * C2830 + C9008 * C2974) * C9007) *
               C66) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C9007 * C402) * C9008 * C65 +
           C421 * C66) *
              C2762 -
          (C1204 * C66 +
           (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C9008 * C65) *
              C2763 +
          ((C401 * C2765 + C3004 + C3004 + C9007 * C3001) * C9008 * C65 +
           (C401 * C2766 + C3005 + C3005 + C9007 * C3002) * C9008 * C66) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
           (C3034 * C461 + C3038 + C3038 + C9006 * C467) * C9007 * C3033) *
              C8949 * C8932 * C71 -
          ((C3034 * C460 + C3039 + C3039 + C9006 * C466) * C9007 * C3033 +
           (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C9007 * C3032) *
              C8949 * C8932 * C72 +
          ((C3034 * C80 + C3041 + C3041 + C9006 * C88) * C9007 * C3032 +
           (C3034 * C462 + C3042 + C3042 + C9006 * C468) * C9007 * C3033) *
              C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
           (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) * C9006) *
              C9007 * C8949 * C8932 * C71 -
          ((C3069 * C463 + C3033 * C510 + C3068 * C83 + C3032 * C128) * C9006 +
           (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) * C3035) *
              C9007 * C8949 * C8932 * C72 +
          ((C3068 * C80 + C3032 * C125 + C3069 * C462 + C3033 * C509) * C3035 +
           (C3068 * C84 + C3032 * C129 + C3069 * C465 + C3033 * C512) * C9006) *
              C9007 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C169 * C78 + C9007 * C170) * C3035 +
                     (C169 * C82 + C9007 * C174) * C9006) *
                        C3032 +
                    ((C169 * C461 + C9007 * C554) * C3035 +
                     (C169 * C464 + C9007 * C557) * C9006) *
                        C3033) *
                       C8949 * C8932 * C71 -
                   ((C564 * C9006 + C565 * C3035) * C3033 +
                    (C188 * C9006 + C187 * C3035) * C3032) *
                       C8949 * C8932 * C72 +
                   ((C190 * C3035 + C189 * C9006) * C3032 +
                    ((C169 * C462 + C9007 * C555) * C3035 +
                     (C169 * C465 + C9007 * C558) * C9006) *
                        C3033) *
                       C8949 * C8932 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[9] += (2 * std::pow(Pi, 2.5) *
                  (((C3035 * C78 + C9006 * C82) * C3068 +
                    (C3035 * C123 + C9006 * C216) * C3032 +
                    (C3035 * C461 + C9006 * C464) * C3069 +
                    (C3035 * C508 + C9006 * C600) * C3033) *
                       C9007 * C8949 * C8932 * C71 -
                   ((C3035 * C507 + C9006 * C599) * C3033 +
                    (C3035 * C460 + C9006 * C463) * C3069 +
                    (C3035 * C124 + C9006 * C217) * C3032 +
                    (C3035 * C79 + C9006 * C83) * C3068) *
                       C9007 * C8949 * C8932 * C72 +
                   ((C3035 * C80 + C9006 * C84) * C3068 +
                    (C3035 * C125 + C9006 * C218) * C3032 +
                    (C3035 * C462 + C9006 * C465) * C3069 +
                    (C3035 * C509 + C9006 * C601) * C3033) *
                       C9007 * C8949 * C8932 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] += (2 * std::pow(Pi, 2.5) *
                  ((C3148 * C78 + C3151 + C3151 + C3032 * C247 + C3149 * C461 +
                    C3152 + C3152 + C3033 * C637) *
                       C9006 * C9007 * C8949 * C8932 * C71 -
                   (C3149 * C460 + C3153 + C3153 + C3033 * C636 + C3148 * C79 +
                    C3154 + C3154 + C3032 * C248) *
                       C9006 * C9007 * C8949 * C8932 * C72 +
                   (C3148 * C80 + C3155 + C3155 + C3032 * C249 + C3149 * C462 +
                    C3156 + C3156 + C3033 * C638) *
                       C9006 * C9007 * C8949 * C8932 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C9007 * C170) * C3068 +
           (C169 * C123 + C9007 * C291) * C3032 +
           (C169 * C461 + C9007 * C554) * C3069 +
           (C169 * C508 + C9007 * C682) * C3033) *
              C9006 * C8949 * C8932 * C71 -
          (C688 * C3033 + C565 * C3069 + C302 * C3032 + C187 * C3068) * C9006 *
              C8949 * C8932 * C72 +
          (C190 * C3068 + C303 * C3032 + (C169 * C462 + C9007 * C555) * C3069 +
           (C169 * C509 + C9007 * C683) * C3033) *
              C9006 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C3035 * C78 + C9006 * C82) * C169 +
                     (C3035 * C170 + C9006 * C331) * C9007) *
                        C3032 +
                    ((C3035 * C461 + C9006 * C464) * C169 +
                     (C3035 * C554 + C9006 * C724) * C9007) *
                        C3033) *
                       C8949 * C8932 * C71 -
                   (((C3035 * C553 + C9006 * C723) * C9007 +
                     (C3035 * C460 + C9006 * C463) * C169) *
                        C3033 +
                    ((C3035 * C171 + C9006 * C332) * C9007 +
                     (C3035 * C79 + C9006 * C83) * C169) *
                        C3032) *
                       C8949 * C8932 * C72 +
                   (((C3035 * C80 + C9006 * C84) * C169 +
                     (C3035 * C172 + C9006 * C333) * C9007) *
                        C3032 +
                    ((C3035 * C462 + C9006 * C465) * C169 +
                     (C3035 * C555 + C9006 * C725) * C9007) *
                        C3033) *
                       C8949 * C8932 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
           (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
               C9007) *
              C9006 * C8949 * C8932 * C71 -
          ((C3069 * C553 + C3033 * C760 + C3068 * C171 + C3032 * C362) * C9007 +
           (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) * C169) *
              C9006 * C8949 * C8932 * C72 +
          ((C3068 * C80 + C3032 * C125 + C3069 * C462 + C3033 * C509) * C169 +
           (C3068 * C172 + C3032 * C363 + C3069 * C555 + C3033 * C762) *
               C9007) *
              C9006 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 +
           (C401 * C461 + C809 + C809 + C9007 * C803) * C3033) *
              C9006 * C8949 * C8932 * C71 -
          (C813 * C3033 + C419 * C3032) * C9006 * C8949 * C8932 * C72 +
          (C420 * C3032 + (C401 * C462 + C810 + C810 + C9007 * C804) * C3033) *
              C9006 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
            C3307 * C3033) *
               C8949 * C456 -
           ((C3034 * C1544 + C3297 + C3297 + C9006 * C1548) * C9007 * C3033 +
            C3307 * C3032) *
               C8949 * C8997) *
              C458 +
          ((C3308 * C3032 +
            (C3034 * C1545 + C3300 + C3300 + C9006 * C1549) * C9007 * C3033) *
               C8949 * C8997 -
           (C3308 * C3033 +
            (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C9007 * C3032) *
               C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
            (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) *
                C9006) *
               C9007 * C8949 * C456 -
           ((C3069 * C1546 + C3033 * C1580 + C3068 * C464 + C3032 * C511) *
                C9006 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C3035) *
               C9007 * C8949 * C8997) *
              C458 +
          (((C3068 * C460 + C3032 * C507 + C3069 * C1545 + C3033 * C1579) *
                C3035 +
            (C3068 * C463 + C3032 * C510 + C3069 * C1547 + C3033 * C1581) *
                C9006) *
               C9007 * C8949 * C8997 -
           ((C3069 * C463 + C3033 * C510 + C3068 * C83 + C3032 * C128) * C9006 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) *
                C3035) *
               C9007 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C3035 +
             (C169 * C82 + C9007 * C174) * C9006) *
                C3032 +
            (C3385 + C3386) * C3033) *
               C8949 * C456 -
           (((C169 * C1546 + C9007 * C1610) * C9006 +
             (C169 * C1544 + C9007 * C1608) * C3035) *
                C3033 +
            (C3386 + C3385) * C3032) *
               C8949 * C8997) *
              C458 +
          (((C3381 + C3382) * C3032 + ((C169 * C1545 + C9007 * C1609) * C3035 +
                                       (C169 * C1547 + C9007 * C1611) * C9006) *
                                          C3033) *
               C8949 * C8997 -
           ((C3382 + C3381) * C3033 + (C188 * C9006 + C187 * C3035) * C3032) *
               C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C3068 +
                      (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
                      C3430 * C3033) *
                         C9007 * C8949 * C456 -
                     ((C3035 * C1578 + C9006 * C1638) * C3033 +
                      (C3035 * C1544 + C9006 * C1546) * C3069 + C3430 * C3032 +
                      C3429 * C3068) *
                         C9007 * C8949 * C8997) *
                        C458 +
                    ((C3431 * C3068 + C3432 * C3032 +
                      (C3035 * C1545 + C9006 * C1547) * C3069 +
                      (C3035 * C1579 + C9006 * C1639) * C3033) *
                         C9007 * C8949 * C8997 -
                     (C3432 * C3033 + C3431 * C3069 +
                      (C3035 * C124 + C9006 * C217) * C3032 +
                      (C3035 * C79 + C9006 * C83) * C3068) *
                         C9007 * C8949 * C456) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[10] += (2 * std::pow(Pi, 2.5) *
                   (((C3148 * C78 + C3151 + C3151 + C3032 * C247 +
                      C3149 * C461 + C3152 + C3152 + C3033 * C637) *
                         C9006 * C9007 * C8949 * C456 -
                     (C3149 * C1544 + C3467 + C3467 + C3033 * C1666 +
                      C3148 * C461 + C3468 + C3468 + C3032 * C637) *
                         C9006 * C9007 * C8949 * C8997) *
                        C458 +
                    ((C3148 * C460 + C3469 + C3469 + C3032 * C636 +
                      C3149 * C1545 + C3470 + C3470 + C3033 * C1667) *
                         C9006 * C9007 * C8949 * C8997 -
                     (C3149 * C460 + C3153 + C3153 + C3033 * C636 +
                      C3148 * C79 + C3154 + C3154 + C3032 * C248) *
                         C9006 * C9007 * C8949 * C456) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3068 +
            (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
            C3507 * C3033) *
               C9006 * C8949 * C456 -
           ((C169 * C1578 + C9007 * C1696) * C3033 +
            (C169 * C1544 + C9007 * C1608) * C3069 + C3507 * C3032 +
            C3383 * C3068) *
               C9006 * C8949 * C8997) *
              C458 +
          ((C565 * C3068 + C688 * C3032 +
            (C169 * C1545 + C9007 * C1609) * C3069 +
            (C169 * C1579 + C9007 * C1697) * C3033) *
               C9006 * C8949 * C8997 -
           (C688 * C3033 + C565 * C3069 + C302 * C3032 + C187 * C3068) * C9006 *
               C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C169 +
             (C3035 * C170 + C9006 * C331) * C9007) *
                C3032 +
            (C3542 + C3550) * C3033) *
               C8949 * C456 -
           (((C3035 * C1608 + C9006 * C1724) * C9007 +
             (C3035 * C1544 + C9006 * C1546) * C169) *
                C3033 +
            (C3550 + C3542) * C3032) *
               C8949 * C8997) *
              C458 +
          (((C3545 + C3551) * C3032 +
            ((C3035 * C1545 + C9006 * C1547) * C169 +
             (C3035 * C1609 + C9006 * C1725) * C9007) *
                C3033) *
               C8949 * C8997 -
           ((C3551 + C3545) * C3033 + ((C3035 * C171 + C9006 * C332) * C9007 +
                                       (C3035 * C79 + C9006 * C83) * C169) *
                                          C3032) *
               C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
            (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
                C9007) *
               C9006 * C8949 * C456 -
           ((C3069 * C1608 + C3033 * C1752 + C3068 * C554 + C3032 * C761) *
                C9007 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C169) *
               C9006 * C8949 * C8997) *
              C458 +
          (((C3068 * C460 + C3032 * C507 + C3069 * C1545 + C3033 * C1579) *
                C169 +
            (C3068 * C553 + C3032 * C760 + C3069 * C1609 + C3033 * C1753) *
                C9007) *
               C9006 * C8949 * C8997 -
           ((C3069 * C553 + C3033 * C760 + C3068 * C171 + C3032 * C362) *
                C9007 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) * C169) *
               C9006 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
               C9006 * C8949 * C456 -
           ((C401 * C1544 + C1783 + C1783 + C9007 * C1780) * C3033 +
            C3624 * C3032) *
               C9006 * C8949 * C8997) *
              C458 +
          ((C813 * C3032 +
            (C401 * C1545 + C1784 + C1784 + C9007 * C1781) * C3033) *
               C9006 * C8949 * C8997 -
           (C813 * C3033 + C419 * C3032) * C9006 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
            C3307 * C3033) *
               C848 -
           ((C3034 * C1818 + C3659 + C3659 + C9006 * C1822) * C9007 * C3033 +
            (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C9007 * C3032) *
               C8999) *
              C8932 * C458 +
          (((C3034 * C850 + C3661 + C3661 + C9006 * C856) * C9007 * C3032 +
            (C3034 * C1819 + C3662 + C3662 + C9006 * C1823) * C9007 * C3033) *
               C8999 -
           (C3308 * C3033 +
            (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C9007 * C3032) *
               C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
            (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) *
                C9006) *
               C9007 * C848 -
           ((C3069 * C1820 + C3033 * C1862 + C3068 * C854 + C3032 * C901) *
                C9006 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C3035) *
               C9007 * C8999) *
              C8932 * C458 +
          (((C3068 * C850 + C3032 * C897 + C3069 * C1819 + C3033 * C1861) *
                C3035 +
            (C3068 * C853 + C3032 * C900 + C3069 * C1821 + C3033 * C1863) *
                C9006) *
               C9007 * C8999 -
           ((C3069 * C463 + C3033 * C510 + C3068 * C83 + C3032 * C128) * C9006 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) *
                C3035) *
               C9007 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C3035 +
             (C169 * C82 + C9007 * C174) * C9006) *
                C3032 +
            (C3385 + C3386) * C3033) *
               C848 -
           (((C169 * C1820 + C9007 * C1900) * C9006 +
             (C169 * C1818 + C9007 * C1898) * C3035) *
                C3033 +
            ((C169 * C854 + C9007 * C947) * C9006 +
             (C169 * C851 + C9007 * C944) * C3035) *
                C3032) *
               C8999) *
              C8932 * C458 +
          (((C955 * C3035 + C954 * C9006) * C3032 +
            ((C169 * C1819 + C9007 * C1899) * C3035 +
             (C169 * C1821 + C9007 * C1901) * C9006) *
                C3033) *
               C8999 -
           ((C3382 + C3381) * C3033 + (C188 * C9006 + C187 * C3035) * C3032) *
               C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C3068 +
                      (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
                      C3430 * C3033) *
                         C9007 * C848 -
                     ((C3035 * C1860 + C9006 * C1936) * C3033 +
                      (C3035 * C1818 + C9006 * C1820) * C3069 +
                      (C3035 * C898 + C9006 * C990) * C3032 +
                      (C3035 * C851 + C9006 * C854) * C3068) *
                         C9007 * C8999) *
                        C8932 * C458 +
                    (((C3035 * C850 + C9006 * C853) * C3068 +
                      (C3035 * C897 + C9006 * C989) * C3032 +
                      (C3035 * C1819 + C9006 * C1821) * C3069 +
                      (C3035 * C1861 + C9006 * C1937) * C3033) *
                         C9007 * C8999 -
                     (C3432 * C3033 + C3431 * C3069 +
                      (C3035 * C124 + C9006 * C217) * C3032 +
                      (C3035 * C79 + C9006 * C83) * C3068) *
                         C9007 * C848) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[11] += (2 * std::pow(Pi, 2.5) *
                   (((C3148 * C78 + C3151 + C3151 + C3032 * C247 +
                      C3149 * C461 + C3152 + C3152 + C3033 * C637) *
                         C9006 * C9007 * C848 -
                     (C3149 * C1818 + C3799 + C3799 + C3033 * C1972 +
                      C3148 * C851 + C3800 + C3800 + C3032 * C1027) *
                         C9006 * C9007 * C8999) *
                        C8932 * C458 +
                    ((C3148 * C850 + C3801 + C3801 + C3032 * C1026 +
                      C3149 * C1819 + C3802 + C3802 + C3033 * C1973) *
                         C9006 * C9007 * C8999 -
                     (C3149 * C460 + C3153 + C3153 + C3033 * C636 +
                      C3148 * C79 + C3154 + C3154 + C3032 * C248) *
                         C9006 * C9007 * C848) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3068 +
            (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
            C3507 * C3033) *
               C9006 * C848 -
           ((C169 * C1860 + C9007 * C2010) * C3033 +
            (C169 * C1818 + C9007 * C1898) * C3069 +
            (C169 * C898 + C9007 * C1072) * C3032 +
            (C169 * C851 + C9007 * C944) * C3068) *
               C9006 * C8999) *
              C8932 * C458 +
          ((C955 * C3068 + C1078 * C3032 +
            (C169 * C1819 + C9007 * C1899) * C3069 +
            (C169 * C1861 + C9007 * C2011) * C3033) *
               C9006 * C8999 -
           (C688 * C3033 + C565 * C3069 + C302 * C3032 + C187 * C3068) * C9006 *
               C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C169 +
             (C3035 * C170 + C9006 * C331) * C9007) *
                C3032 +
            (C3542 + C3550) * C3033) *
               C848 -
           (((C3035 * C1898 + C9006 * C2046) * C9007 +
             (C3035 * C1818 + C9006 * C1820) * C169) *
                C3033 +
            ((C3035 * C944 + C9006 * C1114) * C9007 +
             (C3035 * C851 + C9006 * C854) * C169) *
                C3032) *
               C8999) *
              C8932 * C458 +
          ((((C3035 * C850 + C9006 * C853) * C169 +
             (C3035 * C943 + C9006 * C1113) * C9007) *
                C3032 +
            ((C3035 * C1819 + C9006 * C1821) * C169 +
             (C3035 * C1899 + C9006 * C2047) * C9007) *
                C3033) *
               C8999 -
           ((C3551 + C3545) * C3033 + ((C3035 * C171 + C9006 * C332) * C9007 +
                                       (C3035 * C79 + C9006 * C83) * C169) *
                                          C3032) *
               C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
            (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
                C9007) *
               C9006 * C848 -
           ((C3069 * C1898 + C3033 * C2082 + C3068 * C944 + C3032 * C1151) *
                C9007 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C169) *
               C9006 * C8999) *
              C8932 * C458 +
          (((C3068 * C850 + C3032 * C897 + C3069 * C1819 + C3033 * C1861) *
                C169 +
            (C3068 * C943 + C3032 * C1150 + C3069 * C1899 + C3033 * C2083) *
                C9007) *
               C9006 * C8999 -
           ((C3069 * C553 + C3033 * C760 + C3068 * C171 + C3032 * C362) *
                C9007 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) * C169) *
               C9006 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
               C9006 * C848 -
           ((C401 * C1818 + C2121 + C2121 + C9007 * C2118) * C3033 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C3032) *
               C9006 * C8999) *
              C8932 * C458 +
          ((C1203 * C3032 +
            (C401 * C1819 + C2122 + C2122 + C9007 * C2119) * C3033) *
               C9006 * C8999 -
           (C813 * C3033 + C419 * C3032) * C9006 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
            C3307 * C3033) *
               C8949 * C1238 -
           ((C3034 * C1544 + C3297 + C3297 + C9006 * C1548) * C9007 * C3033 +
            C3307 * C3032) *
               C8949 * C8997) *
              C1240 +
          ((C3308 * C3032 +
            (C3034 * C1545 + C3300 + C3300 + C9006 * C1549) * C9007 * C3033) *
               C8949 * C8997 -
           (C3308 * C3033 +
            (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C9007 * C3032) *
               C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
            (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) *
                C9006) *
               C9007 * C8949 * C1238 -
           ((C3069 * C1546 + C3033 * C1580 + C3068 * C464 + C3032 * C511) *
                C9006 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C3035) *
               C9007 * C8949 * C8997) *
              C1240 +
          (((C3068 * C460 + C3032 * C507 + C3069 * C1545 + C3033 * C1579) *
                C3035 +
            (C3068 * C463 + C3032 * C510 + C3069 * C1547 + C3033 * C1581) *
                C9006) *
               C9007 * C8949 * C8997 -
           ((C3069 * C463 + C3033 * C510 + C3068 * C83 + C3032 * C128) * C9006 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) *
                C3035) *
               C9007 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C3035 +
             (C169 * C82 + C9007 * C174) * C9006) *
                C3032 +
            (C3385 + C3386) * C3033) *
               C8949 * C1238 -
           (((C169 * C1546 + C9007 * C1610) * C9006 +
             (C169 * C1544 + C9007 * C1608) * C3035) *
                C3033 +
            (C3386 + C3385) * C3032) *
               C8949 * C8997) *
              C1240 +
          (((C3381 + C3382) * C3032 + ((C169 * C1545 + C9007 * C1609) * C3035 +
                                       (C169 * C1547 + C9007 * C1611) * C9006) *
                                          C3033) *
               C8949 * C8997 -
           ((C3382 + C3381) * C3033 + (C188 * C9006 + C187 * C3035) * C3032) *
               C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C3068 +
                      (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
                      C3430 * C3033) *
                         C9007 * C8949 * C1238 -
                     ((C3035 * C1578 + C9006 * C1638) * C3033 +
                      (C3035 * C1544 + C9006 * C1546) * C3069 + C3430 * C3032 +
                      C3429 * C3068) *
                         C9007 * C8949 * C8997) *
                        C1240 +
                    ((C3431 * C3068 + C3432 * C3032 +
                      (C3035 * C1545 + C9006 * C1547) * C3069 +
                      (C3035 * C1579 + C9006 * C1639) * C3033) *
                         C9007 * C8949 * C8997 -
                     (C3432 * C3033 + C3431 * C3069 +
                      (C3035 * C124 + C9006 * C217) * C3032 +
                      (C3035 * C79 + C9006 * C83) * C3068) *
                         C9007 * C8949 * C1238) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] += (2 * std::pow(Pi, 2.5) *
                   (((C3148 * C78 + C3151 + C3151 + C3032 * C247 +
                      C3149 * C461 + C3152 + C3152 + C3033 * C637) *
                         C9006 * C9007 * C8949 * C1238 -
                     (C3149 * C1544 + C3467 + C3467 + C3033 * C1666 +
                      C3148 * C461 + C3468 + C3468 + C3032 * C637) *
                         C9006 * C9007 * C8949 * C8997) *
                        C1240 +
                    ((C3148 * C460 + C3469 + C3469 + C3032 * C636 +
                      C3149 * C1545 + C3470 + C3470 + C3033 * C1667) *
                         C9006 * C9007 * C8949 * C8997 -
                     (C3149 * C460 + C3153 + C3153 + C3033 * C636 +
                      C3148 * C79 + C3154 + C3154 + C3032 * C248) *
                         C9006 * C9007 * C8949 * C1238) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3068 +
            (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
            C3507 * C3033) *
               C9006 * C8949 * C1238 -
           ((C169 * C1578 + C9007 * C1696) * C3033 +
            (C169 * C1544 + C9007 * C1608) * C3069 + C3507 * C3032 +
            C3383 * C3068) *
               C9006 * C8949 * C8997) *
              C1240 +
          ((C565 * C3068 + C688 * C3032 +
            (C169 * C1545 + C9007 * C1609) * C3069 +
            (C169 * C1579 + C9007 * C1697) * C3033) *
               C9006 * C8949 * C8997 -
           (C688 * C3033 + C565 * C3069 + C302 * C3032 + C187 * C3068) * C9006 *
               C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C169 +
             (C3035 * C170 + C9006 * C331) * C9007) *
                C3032 +
            (C3542 + C3550) * C3033) *
               C8949 * C1238 -
           (((C3035 * C1608 + C9006 * C1724) * C9007 +
             (C3035 * C1544 + C9006 * C1546) * C169) *
                C3033 +
            (C3550 + C3542) * C3032) *
               C8949 * C8997) *
              C1240 +
          (((C3545 + C3551) * C3032 +
            ((C3035 * C1545 + C9006 * C1547) * C169 +
             (C3035 * C1609 + C9006 * C1725) * C9007) *
                C3033) *
               C8949 * C8997 -
           ((C3551 + C3545) * C3033 + ((C3035 * C171 + C9006 * C332) * C9007 +
                                       (C3035 * C79 + C9006 * C83) * C169) *
                                          C3032) *
               C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
            (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
                C9007) *
               C9006 * C8949 * C1238 -
           ((C3069 * C1608 + C3033 * C1752 + C3068 * C554 + C3032 * C761) *
                C9007 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C169) *
               C9006 * C8949 * C8997) *
              C1240 +
          (((C3068 * C460 + C3032 * C507 + C3069 * C1545 + C3033 * C1579) *
                C169 +
            (C3068 * C553 + C3032 * C760 + C3069 * C1609 + C3033 * C1753) *
                C9007) *
               C9006 * C8949 * C8997 -
           ((C3069 * C553 + C3033 * C760 + C3068 * C171 + C3032 * C362) *
                C9007 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) * C169) *
               C9006 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
               C9006 * C8949 * C1238 -
           ((C401 * C1544 + C1783 + C1783 + C9007 * C1780) * C3033 +
            C3624 * C3032) *
               C9006 * C8949 * C8997) *
              C1240 +
          ((C813 * C3032 +
            (C401 * C1545 + C1784 + C1784 + C9007 * C1781) * C3033) *
               C9006 * C8949 * C8997 -
           (C813 * C3033 + C419 * C3032) * C9006 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
           C3307 * C3033) *
              C8949 * C1540 -
          (C4280 * C3033 + C3307 * C3032) * C8949 * C1541 +
          (C4280 * C3032 +
           (C3034 * C4270 + C4276 + C4276 + C9006 * C4272) * C9007 * C3033) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
           (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) * C9006) *
              C9007 * C8949 * C1540 -
          ((C3069 * C1546 + C3033 * C1580 + C3068 * C464 + C3032 * C511) *
               C9006 +
           (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
               C3035) *
              C9007 * C8949 * C1541 +
          ((C3068 * C1544 + C3032 * C1578 + C3069 * C4270 + C3033 * C4306) *
               C3035 +
           (C3068 * C1546 + C3032 * C1580 + C3069 * C4271 + C3033 * C4307) *
               C9006) *
              C9007 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3035 +
            (C169 * C82 + C9007 * C174) * C9006) *
               C3032 +
           (C3385 + C3386) * C3033) *
              C8949 * C1540 -
          ((C4343 + C4344) * C3033 + (C3386 + C3385) * C3032) * C8949 * C1541 +
          ((C4344 + C4343) * C3032 + ((C169 * C4270 + C9007 * C4334) * C3035 +
                                      (C169 * C4271 + C9007 * C4335) * C9006) *
                                         C3033) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3035 * C78 + C9006 * C82) * C3068 +
           (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
           C3430 * C3033) *
              C9007 * C8949 * C1540 -
          (C4376 * C3033 + C4377 * C3069 + C3430 * C3032 + C3429 * C3068) *
              C9007 * C8949 * C1541 +
          (C4377 * C3068 + C4376 * C3032 +
           (C3035 * C4270 + C9006 * C4271) * C3069 +
           (C3035 * C4306 + C9006 * C4370) * C3033) *
              C9007 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] += (2 * std::pow(Pi, 2.5) *
                   ((C3148 * C78 + C3151 + C3151 + C3032 * C247 + C3149 * C461 +
                     C3152 + C3152 + C3033 * C637) *
                        C9006 * C9007 * C8949 * C1540 -
                    (C3149 * C1544 + C3467 + C3467 + C3033 * C1666 +
                     C3148 * C461 + C3468 + C3468 + C3032 * C637) *
                        C9006 * C9007 * C8949 * C1541 +
                    (C3148 * C1544 + C4405 + C4405 + C3032 * C1666 +
                     C3149 * C4270 + C4406 + C4406 + C3033 * C4403) *
                        C9006 * C9007 * C8949 * C1542) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C169 * C78 + C9007 * C170) * C3068 +
           (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
           C3507 * C3033) *
              C9006 * C8949 * C1540 -
          (C4436 * C3033 + C4342 * C3069 + C3507 * C3032 + C3383 * C3068) *
              C9006 * C8949 * C1541 +
          (C4342 * C3068 + C4436 * C3032 +
           (C169 * C4270 + C9007 * C4334) * C3069 +
           (C169 * C4306 + C9007 * C4432) * C3033) *
              C9006 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C169 +
            (C3035 * C170 + C9006 * C331) * C9007) *
               C3032 +
           (C3542 + C3550) * C3033) *
              C8949 * C1540 -
          ((C4468 + C4466) * C3033 + (C3550 + C3542) * C3032) * C8949 * C1541 +
          ((C4466 + C4468) * C3032 + ((C3035 * C4270 + C9006 * C4271) * C169 +
                                      (C3035 * C4334 + C9006 * C4462) * C9007) *
                                         C3033) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
           (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
               C9007) *
              C9006 * C8949 * C1540 -
          ((C3069 * C1608 + C3033 * C1752 + C3068 * C554 + C3032 * C761) *
               C9007 +
           (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
               C169) *
              C9006 * C8949 * C1541 +
          ((C3068 * C1544 + C3032 * C1578 + C3069 * C4270 + C3033 * C4306) *
               C169 +
           (C3068 * C1608 + C3032 * C1752 + C3069 * C4334 + C3033 * C4494) *
               C9007) *
              C9006 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
              C9006 * C8949 * C1540 -
          (C4528 * C3033 + C3624 * C3032) * C9006 * C8949 * C1541 +
          (C4528 * C3032 +
           (C401 * C4270 + C4525 + C4525 + C9007 * C4521) * C3033) *
              C9006 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
            C3307 * C3033) *
               C848 -
           (C4572 * C3033 +
            (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C9007 * C3032) *
               C8999) *
              C1238 +
          ((C4572 * C3032 +
            (C3034 * C4562 + C4568 + C4568 + C9006 * C4564) * C9007 * C3033) *
               C8999 -
           (C4280 * C3033 + C3307 * C3032) * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
            (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) *
                C9006) *
               C9007 * C848 -
           ((C3069 * C1820 + C3033 * C1862 + C3068 * C854 + C3032 * C901) *
                C9006 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C3035) *
               C9007 * C8999) *
              C1238 +
          (((C3068 * C1818 + C3032 * C1860 + C3069 * C4562 + C3033 * C4606) *
                C3035 +
            (C3068 * C1820 + C3032 * C1862 + C3069 * C4563 + C3033 * C4607) *
                C9006) *
               C9007 * C8999 -
           ((C3069 * C1546 + C3033 * C1580 + C3068 * C464 + C3032 * C511) *
                C9006 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C3035) *
               C9007 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C3035 +
             (C169 * C82 + C9007 * C174) * C9006) *
                C3032 +
            (C3385 + C3386) * C3033) *
               C848 -
           ((C4651 + C4652) * C3033 + ((C169 * C854 + C9007 * C947) * C9006 +
                                       (C169 * C851 + C9007 * C944) * C3035) *
                                          C3032) *
               C8999) *
              C1238 +
          (((C4652 + C4651) * C3032 + ((C169 * C4562 + C9007 * C4642) * C3035 +
                                       (C169 * C4563 + C9007 * C4643) * C9006) *
                                          C3033) *
               C8999 -
           ((C4343 + C4344) * C3033 + (C3386 + C3385) * C3032) * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C3068 +
            (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
            C3430 * C3033) *
               C9007 * C848 -
           (C4692 * C3033 + C4693 * C3069 +
            (C3035 * C898 + C9006 * C990) * C3032 +
            (C3035 * C851 + C9006 * C854) * C3068) *
               C9007 * C8999) *
              C1238 +
          ((C4693 * C3068 + C4692 * C3032 +
            (C3035 * C4562 + C9006 * C4563) * C3069 +
            (C3035 * C4606 + C9006 * C4686) * C3033) *
               C9007 * C8999 -
           (C4376 * C3033 + C4377 * C3069 + C3430 * C3032 + C3429 * C3068) *
               C9007 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[14] += (2 * std::pow(Pi, 2.5) *
                   (((C3148 * C78 + C3151 + C3151 + C3032 * C247 +
                      C3149 * C461 + C3152 + C3152 + C3033 * C637) *
                         C9006 * C9007 * C848 -
                     (C3149 * C1818 + C3799 + C3799 + C3033 * C1972 +
                      C3148 * C851 + C3800 + C3800 + C3032 * C1027) *
                         C9006 * C9007 * C8999) *
                        C1238 +
                    ((C3148 * C1818 + C4729 + C4729 + C3032 * C1972 +
                      C3149 * C4562 + C4730 + C4730 + C3033 * C4727) *
                         C9006 * C9007 * C8999 -
                     (C3149 * C1544 + C3467 + C3467 + C3033 * C1666 +
                      C3148 * C461 + C3468 + C3468 + C3032 * C637) *
                         C9006 * C9007 * C848) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3068 +
            (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
            C3507 * C3033) *
               C9006 * C848 -
           (C4768 * C3033 + C4650 * C3069 +
            (C169 * C898 + C9007 * C1072) * C3032 +
            (C169 * C851 + C9007 * C944) * C3068) *
               C9006 * C8999) *
              C1238 +
          ((C4650 * C3068 + C4768 * C3032 +
            (C169 * C4562 + C9007 * C4642) * C3069 +
            (C169 * C4606 + C9007 * C4764) * C3033) *
               C9006 * C8999 -
           (C4436 * C3033 + C4342 * C3069 + C3507 * C3032 + C3383 * C3068) *
               C9006 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C169 +
             (C3035 * C170 + C9006 * C331) * C9007) *
                C3032 +
            (C3542 + C3550) * C3033) *
               C848 -
           ((C4808 + C4806) * C3033 + ((C3035 * C944 + C9006 * C1114) * C9007 +
                                       (C3035 * C851 + C9006 * C854) * C169) *
                                          C3032) *
               C8999) *
              C1238 +
          (((C4806 + C4808) * C3032 +
            ((C3035 * C4562 + C9006 * C4563) * C169 +
             (C3035 * C4642 + C9006 * C4802) * C9007) *
                C3033) *
               C8999 -
           ((C4468 + C4466) * C3033 + (C3550 + C3542) * C3032) * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
            (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
                C9007) *
               C9006 * C848 -
           ((C3069 * C1898 + C3033 * C2082 + C3068 * C944 + C3032 * C1151) *
                C9007 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C169) *
               C9006 * C8999) *
              C1238 +
          (((C3068 * C1818 + C3032 * C1860 + C3069 * C4562 + C3033 * C4606) *
                C169 +
            (C3068 * C1898 + C3032 * C2082 + C3069 * C4642 + C3033 * C4842) *
                C9007) *
               C9006 * C8999 -
           ((C3069 * C1608 + C3033 * C1752 + C3068 * C554 + C3032 * C761) *
                C9007 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C169) *
               C9006 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
               C9006 * C848 -
           (C4884 * C3033 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C3032) *
               C9006 * C8999) *
              C1238 +
          ((C4884 * C3032 +
            (C401 * C4562 + C4881 + C4881 + C9007 * C4877) * C3033) *
               C9006 * C8999 -
           (C4528 * C3033 + C3624 * C3032) * C9006 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
            C3307 * C3033) *
               C2156 -
           (C4572 * C3033 +
            (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C9007 * C3032) *
               C8999) *
              C8932 * C1240 +
          (((C3034 * C850 + C3661 + C3661 + C9006 * C856) * C9007 * C3032 +
            (C3034 * C1819 + C3662 + C3662 + C9006 * C1823) * C9007 * C3033) *
               C8999 -
           (C3308 * C3033 +
            (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C9007 * C3032) *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
            (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) *
                C9006) *
               C9007 * C2156 -
           ((C3069 * C1820 + C3033 * C1862 + C3068 * C854 + C3032 * C901) *
                C9006 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C3035) *
               C9007 * C8999) *
              C8932 * C1240 +
          (((C3068 * C850 + C3032 * C897 + C3069 * C1819 + C3033 * C1861) *
                C3035 +
            (C3068 * C853 + C3032 * C900 + C3069 * C1821 + C3033 * C1863) *
                C9006) *
               C9007 * C8999 -
           ((C3069 * C463 + C3033 * C510 + C3068 * C83 + C3032 * C128) * C9006 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) *
                C3035) *
               C9007 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C3035 +
             (C169 * C82 + C9007 * C174) * C9006) *
                C3032 +
            (C3385 + C3386) * C3033) *
               C2156 -
           ((C4651 + C4652) * C3033 + ((C169 * C854 + C9007 * C947) * C9006 +
                                       (C169 * C851 + C9007 * C944) * C3035) *
                                          C3032) *
               C8999) *
              C8932 * C1240 +
          (((C955 * C3035 + C954 * C9006) * C3032 +
            ((C169 * C1819 + C9007 * C1899) * C3035 +
             (C169 * C1821 + C9007 * C1901) * C9006) *
                C3033) *
               C8999 -
           ((C3382 + C3381) * C3033 + (C188 * C9006 + C187 * C3035) * C3032) *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C3068 +
                      (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
                      C3430 * C3033) *
                         C9007 * C2156 -
                     (C4692 * C3033 + C4693 * C3069 +
                      (C3035 * C898 + C9006 * C990) * C3032 +
                      (C3035 * C851 + C9006 * C854) * C3068) *
                         C9007 * C8999) *
                        C8932 * C1240 +
                    (((C3035 * C850 + C9006 * C853) * C3068 +
                      (C3035 * C897 + C9006 * C989) * C3032 +
                      (C3035 * C1819 + C9006 * C1821) * C3069 +
                      (C3035 * C1861 + C9006 * C1937) * C3033) *
                         C9007 * C8999 -
                     (C3432 * C3033 + C3431 * C3069 +
                      (C3035 * C124 + C9006 * C217) * C3032 +
                      (C3035 * C79 + C9006 * C83) * C3068) *
                         C9007 * C2156) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] += (2 * std::pow(Pi, 2.5) *
                   (((C3148 * C78 + C3151 + C3151 + C3032 * C247 +
                      C3149 * C461 + C3152 + C3152 + C3033 * C637) *
                         C9006 * C9007 * C2156 -
                     (C3149 * C1818 + C3799 + C3799 + C3033 * C1972 +
                      C3148 * C851 + C3800 + C3800 + C3032 * C1027) *
                         C9006 * C9007 * C8999) *
                        C8932 * C1240 +
                    ((C3148 * C850 + C3801 + C3801 + C3032 * C1026 +
                      C3149 * C1819 + C3802 + C3802 + C3033 * C1973) *
                         C9006 * C9007 * C8999 -
                     (C3149 * C460 + C3153 + C3153 + C3033 * C636 +
                      C3148 * C79 + C3154 + C3154 + C3032 * C248) *
                         C9006 * C9007 * C2156) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3068 +
            (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
            C3507 * C3033) *
               C9006 * C2156 -
           (C4768 * C3033 + C4650 * C3069 +
            (C169 * C898 + C9007 * C1072) * C3032 +
            (C169 * C851 + C9007 * C944) * C3068) *
               C9006 * C8999) *
              C8932 * C1240 +
          ((C955 * C3068 + C1078 * C3032 +
            (C169 * C1819 + C9007 * C1899) * C3069 +
            (C169 * C1861 + C9007 * C2011) * C3033) *
               C9006 * C8999 -
           (C688 * C3033 + C565 * C3069 + C302 * C3032 + C187 * C3068) * C9006 *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C169 +
             (C3035 * C170 + C9006 * C331) * C9007) *
                C3032 +
            (C3542 + C3550) * C3033) *
               C2156 -
           ((C4808 + C4806) * C3033 + ((C3035 * C944 + C9006 * C1114) * C9007 +
                                       (C3035 * C851 + C9006 * C854) * C169) *
                                          C3032) *
               C8999) *
              C8932 * C1240 +
          ((((C3035 * C850 + C9006 * C853) * C169 +
             (C3035 * C943 + C9006 * C1113) * C9007) *
                C3032 +
            ((C3035 * C1819 + C9006 * C1821) * C169 +
             (C3035 * C1899 + C9006 * C2047) * C9007) *
                C3033) *
               C8999 -
           ((C3551 + C3545) * C3033 + ((C3035 * C171 + C9006 * C332) * C9007 +
                                       (C3035 * C79 + C9006 * C83) * C169) *
                                          C3032) *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
            (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
                C9007) *
               C9006 * C2156 -
           ((C3069 * C1898 + C3033 * C2082 + C3068 * C944 + C3032 * C1151) *
                C9007 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C169) *
               C9006 * C8999) *
              C8932 * C1240 +
          (((C3068 * C850 + C3032 * C897 + C3069 * C1819 + C3033 * C1861) *
                C169 +
            (C3068 * C943 + C3032 * C1150 + C3069 * C1899 + C3033 * C2083) *
                C9007) *
               C9006 * C8999 -
           ((C3069 * C553 + C3033 * C760 + C3068 * C171 + C3032 * C362) *
                C9007 +
            (C3069 * C460 + C3033 * C507 + C3068 * C79 + C3032 * C124) * C169) *
               C9006 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
               C9006 * C2156 -
           (C4884 * C3033 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C3032) *
               C9006 * C8999) *
              C8932 * C1240 +
          ((C1203 * C3032 +
            (C401 * C1819 + C2122 + C2122 + C9007 * C2119) * C3033) *
               C9006 * C8999 -
           (C813 * C3033 + C419 * C3032) * C9006 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
            C3307 * C3033) *
               C2156 -
           (C4572 * C3033 +
            (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C9007 * C3032) *
               C8999) *
              C456 +
          ((C4572 * C3032 +
            (C3034 * C4562 + C4568 + C4568 + C9006 * C4564) * C9007 * C3033) *
               C8999 -
           (C4280 * C3033 + C3307 * C3032) * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
            (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) *
                C9006) *
               C9007 * C2156 -
           ((C3069 * C1820 + C3033 * C1862 + C3068 * C854 + C3032 * C901) *
                C9006 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C3035) *
               C9007 * C8999) *
              C456 +
          (((C3068 * C1818 + C3032 * C1860 + C3069 * C4562 + C3033 * C4606) *
                C3035 +
            (C3068 * C1820 + C3032 * C1862 + C3069 * C4563 + C3033 * C4607) *
                C9006) *
               C9007 * C8999 -
           ((C3069 * C1546 + C3033 * C1580 + C3068 * C464 + C3032 * C511) *
                C9006 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C3035) *
               C9007 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C169 * C78 + C9007 * C170) * C3035 +
             (C169 * C82 + C9007 * C174) * C9006) *
                C3032 +
            (C3385 + C3386) * C3033) *
               C2156 -
           ((C4651 + C4652) * C3033 + ((C169 * C854 + C9007 * C947) * C9006 +
                                       (C169 * C851 + C9007 * C944) * C3035) *
                                          C3032) *
               C8999) *
              C456 +
          (((C4652 + C4651) * C3032 + ((C169 * C4562 + C9007 * C4642) * C3035 +
                                       (C169 * C4563 + C9007 * C4643) * C9006) *
                                          C3033) *
               C8999 -
           ((C4343 + C4344) * C3033 + (C3386 + C3385) * C3032) * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C3068 +
            (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
            C3430 * C3033) *
               C9007 * C2156 -
           (C4692 * C3033 + C4693 * C3069 +
            (C3035 * C898 + C9006 * C990) * C3032 +
            (C3035 * C851 + C9006 * C854) * C3068) *
               C9007 * C8999) *
              C456 +
          ((C4693 * C3068 + C4692 * C3032 +
            (C3035 * C4562 + C9006 * C4563) * C3069 +
            (C3035 * C4606 + C9006 * C4686) * C3033) *
               C9007 * C8999 -
           (C4376 * C3033 + C4377 * C3069 + C3430 * C3032 + C3429 * C3068) *
               C9007 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (2 * std::pow(Pi, 2.5) *
                   (((C3148 * C78 + C3151 + C3151 + C3032 * C247 +
                      C3149 * C461 + C3152 + C3152 + C3033 * C637) *
                         C9006 * C9007 * C2156 -
                     (C3149 * C1818 + C3799 + C3799 + C3033 * C1972 +
                      C3148 * C851 + C3800 + C3800 + C3032 * C1027) *
                         C9006 * C9007 * C8999) *
                        C456 +
                    ((C3148 * C1818 + C4729 + C4729 + C3032 * C1972 +
                      C3149 * C4562 + C4730 + C4730 + C3033 * C4727) *
                         C9006 * C9007 * C8999 -
                     (C3149 * C1544 + C3467 + C3467 + C3033 * C1666 +
                      C3148 * C461 + C3468 + C3468 + C3032 * C637) *
                         C9006 * C9007 * C2156) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3068 +
            (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
            C3507 * C3033) *
               C9006 * C2156 -
           (C4768 * C3033 + C4650 * C3069 +
            (C169 * C898 + C9007 * C1072) * C3032 +
            (C169 * C851 + C9007 * C944) * C3068) *
               C9006 * C8999) *
              C456 +
          ((C4650 * C3068 + C4768 * C3032 +
            (C169 * C4562 + C9007 * C4642) * C3069 +
            (C169 * C4606 + C9007 * C4764) * C3033) *
               C9006 * C8999 -
           (C4436 * C3033 + C4342 * C3069 + C3507 * C3032 + C3383 * C3068) *
               C9006 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C169 +
             (C3035 * C170 + C9006 * C331) * C9007) *
                C3032 +
            (C3542 + C3550) * C3033) *
               C2156 -
           ((C4808 + C4806) * C3033 + ((C3035 * C944 + C9006 * C1114) * C9007 +
                                       (C3035 * C851 + C9006 * C854) * C169) *
                                          C3032) *
               C8999) *
              C456 +
          (((C4806 + C4808) * C3032 +
            ((C3035 * C4562 + C9006 * C4563) * C169 +
             (C3035 * C4642 + C9006 * C4802) * C9007) *
                C3033) *
               C8999 -
           ((C4468 + C4466) * C3033 + (C3550 + C3542) * C3032) * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
            (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
                C9007) *
               C9006 * C2156 -
           ((C3069 * C1898 + C3033 * C2082 + C3068 * C944 + C3032 * C1151) *
                C9007 +
            (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
                C169) *
               C9006 * C8999) *
              C456 +
          (((C3068 * C1818 + C3032 * C1860 + C3069 * C4562 + C3033 * C4606) *
                C169 +
            (C3068 * C1898 + C3032 * C2082 + C3069 * C4642 + C3033 * C4842) *
                C9007) *
               C9006 * C8999 -
           ((C3069 * C1608 + C3033 * C1752 + C3068 * C554 + C3032 * C761) *
                C9007 +
            (C3069 * C1544 + C3033 * C1578 + C3068 * C461 + C3032 * C508) *
                C169) *
               C9006 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
               C9006 * C2156 -
           (C4884 * C3033 +
            (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C3032) *
               C9006 * C8999) *
              C456 +
          ((C4884 * C3032 +
            (C401 * C4562 + C4881 + C4881 + C9007 * C4877) * C3033) *
               C9006 * C8999 -
           (C4528 * C3033 + C3624 * C3032) * C9006 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C9007 * C3032 +
           C3307 * C3033) *
              C2762 -
          (C4572 * C3033 +
           (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C9007 * C3032) *
              C2763 +
          ((C3034 * C2765 + C5526 + C5526 + C9006 * C2769) * C9007 * C3032 +
           (C3034 * C5522 + C5527 + C5527 + C9006 * C5524) * C9007 * C3033) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C3035 +
           (C3068 * C82 + C3032 * C127 + C3069 * C464 + C3033 * C511) * C9006) *
              C9007 * C2762 -
          ((C3069 * C1820 + C3033 * C1862 + C3068 * C854 + C3032 * C901) *
               C9006 +
           (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
               C3035) *
              C9007 * C2763 +
          ((C3068 * C2765 + C3032 * C2799 + C3069 * C5522 + C3033 * C5553) *
               C3035 +
           (C3068 * C2767 + C3032 * C2801 + C3069 * C5523 + C3033 * C5554) *
               C9006) *
              C9007 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C169 * C78 + C9007 * C170) * C3035 +
            (C169 * C82 + C9007 * C174) * C9006) *
               C3032 +
           (C3385 + C3386) * C3033) *
              C2762 -
          ((C4651 + C4652) * C3033 + ((C169 * C854 + C9007 * C947) * C9006 +
                                      (C169 * C851 + C9007 * C944) * C3035) *
                                         C3032) *
              C2763 +
          (((C169 * C2765 + C9007 * C2829) * C3035 +
            (C169 * C2767 + C9007 * C2831) * C9006) *
               C3032 +
           ((C169 * C5522 + C9007 * C5581) * C3035 +
            (C169 * C5523 + C9007 * C5582) * C9006) *
               C3033) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (2 * std::pow(Pi, 2.5) *
                   (((C3035 * C78 + C9006 * C82) * C3068 +
                     (C3035 * C123 + C9006 * C216) * C3032 + C3429 * C3069 +
                     C3430 * C3033) *
                        C9007 * C2762 -
                    (C4692 * C3033 + C4693 * C3069 +
                     (C3035 * C898 + C9006 * C990) * C3032 +
                     (C3035 * C851 + C9006 * C854) * C3068) *
                        C9007 * C2763 +
                    ((C3035 * C2765 + C9006 * C2767) * C3068 +
                     (C3035 * C2799 + C9006 * C2859) * C3032 +
                     (C3035 * C5522 + C9006 * C5523) * C3069 +
                     (C3035 * C5553 + C9006 * C5609) * C3033) *
                        C9007 * C2764) *
                   C8932 * C8898) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] += (2 * std::pow(Pi, 2.5) *
                   ((C3148 * C78 + C3151 + C3151 + C3032 * C247 + C3149 * C461 +
                     C3152 + C3152 + C3033 * C637) *
                        C9006 * C9007 * C2762 -
                    (C3149 * C1818 + C3799 + C3799 + C3033 * C1972 +
                     C3148 * C851 + C3800 + C3800 + C3032 * C1027) *
                        C9006 * C9007 * C2763 +
                    (C3148 * C2765 + C5638 + C5638 + C3032 * C2887 +
                     C3149 * C5522 + C5639 + C5639 + C3033 * C5636) *
                        C9006 * C9007 * C2764) *
                   C8932 * C8898) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[17] += (2 * std::pow(Pi, 2.5) *
                   (((C169 * C78 + C9007 * C170) * C3068 +
                     (C169 * C123 + C9007 * C291) * C3032 + C3383 * C3069 +
                     C3507 * C3033) *
                        C9006 * C2762 -
                    (C4768 * C3033 + C4650 * C3069 +
                     (C169 * C898 + C9007 * C1072) * C3032 +
                     (C169 * C851 + C9007 * C944) * C3068) *
                        C9006 * C2763 +
                    ((C169 * C2765 + C9007 * C2829) * C3068 +
                     (C169 * C2799 + C9007 * C2917) * C3032 +
                     (C169 * C5522 + C9007 * C5581) * C3069 +
                     (C169 * C5553 + C9007 * C5665) * C3033) *
                        C9006 * C2764) *
                   C8932 * C8898) /
                  (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C169 +
            (C3035 * C170 + C9006 * C331) * C9007) *
               C3032 +
           (C3542 + C3550) * C3033) *
              C2762 -
          ((C4808 + C4806) * C3033 + ((C3035 * C944 + C9006 * C1114) * C9007 +
                                      (C3035 * C851 + C9006 * C854) * C169) *
                                         C3032) *
              C2763 +
          (((C3035 * C2765 + C9006 * C2767) * C169 +
            (C3035 * C2829 + C9006 * C2945) * C9007) *
               C3032 +
           ((C3035 * C5522 + C9006 * C5523) * C169 +
            (C3035 * C5581 + C9006 * C5692) * C9007) *
               C3033) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3068 * C78 + C3032 * C123 + C3069 * C461 + C3033 * C508) * C169 +
           (C3068 * C170 + C3032 * C361 + C3069 * C554 + C3033 * C761) *
               C9007) *
              C9006 * C2762 -
          ((C3069 * C1898 + C3033 * C2082 + C3068 * C944 + C3032 * C1151) *
               C9007 +
           (C3069 * C1818 + C3033 * C1860 + C3068 * C851 + C3032 * C898) *
               C169) *
              C9006 * C2763 +
          ((C3068 * C2765 + C3032 * C2799 + C3069 * C5522 + C3033 * C5553) *
               C169 +
           (C3068 * C2829 + C3032 * C2973 + C3069 * C5581 + C3033 * C5719) *
               C9007) *
              C9006 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C401 * C78 + C407 + C407 + C9007 * C402) * C3032 + C3624 * C3033) *
              C9006 * C2762 -
          (C4884 * C3033 +
           (C401 * C851 + C1199 + C1199 + C9007 * C1193) * C3032) *
              C9006 * C2763 +
          ((C401 * C2765 + C3004 + C3004 + C9007 * C3001) * C3032 +
           (C401 * C5522 + C5748 + C5748 + C9007 * C5746) * C3033) *
              C9006 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eexx[18] += (2 * std::pow(Pi, 2.5) *
                   (((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                     (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C5775) *
                        C9008 * C8949 * C8932 * C71 -
                    ((C3034 * C850 + C3661 + C3661 + C9006 * C856) * C5775 +
                     (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C5774) *
                        C9008 * C8949 * C8932 * C72 +
                    ((C3034 * C80 + C3041 + C3041 + C9006 * C88) * C5774 +
                     (C3034 * C852 + C5777 + C5777 + C9006 * C858) * C5775) *
                        C9008 * C8949 * C8932 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C122 * C78 + C9008 * C123) * C3035 +
                      (C122 * C82 + C9008 * C127) * C9006) *
                         C5774 +
                     ((C122 * C851 + C9008 * C898) * C3035 +
                      (C122 * C854 + C9008 * C901) * C9006) *
                         C5775) *
                        C8949 * C8932 * C71 -
                    ((C908 * C9006 + C909 * C3035) * C5775 +
                     (C141 * C9006 + C140 * C3035) * C5774) *
                        C8949 * C8932 * C72 +
                    ((C143 * C3035 + C142 * C9006) * C5774 +
                     ((C122 * C852 + C9008 * C899) * C3035 +
                      (C122 * C855 + C9008 * C902) * C9006) *
                         C5775) *
                        C8949 * C8932 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
           (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) * C9006) *
              C9008 * C8949 * C8932 * C71 -
          ((C5830 * C853 + C5775 * C946 + C5829 * C83 + C5774 * C175) * C9006 +
           (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) * C3035) *
              C9008 * C8949 * C8932 * C72 +
          ((C5829 * C80 + C5774 * C172 + C5830 * C852 + C5775 * C945) * C3035 +
           (C5829 * C84 + C5774 * C176 + C5830 * C855 + C5775 * C948) * C9006) *
              C9008 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C122 +
                      (C3035 * C123 + C9006 * C216) * C9008) *
                         C5774 +
                     ((C3035 * C851 + C9006 * C854) * C122 +
                      (C3035 * C898 + C9006 * C990) * C9008) *
                         C5775) *
                        C8949 * C8932 * C71 -
                    (((C3035 * C897 + C9006 * C989) * C9008 +
                      (C3035 * C850 + C9006 * C853) * C122) *
                         C5775 +
                     ((C3035 * C124 + C9006 * C217) * C9008 +
                      (C3035 * C79 + C9006 * C83) * C122) *
                         C5774) *
                        C8949 * C8932 * C72 +
                    (((C3035 * C80 + C9006 * C84) * C122 +
                      (C3035 * C125 + C9006 * C218) * C9008) *
                         C5774 +
                     ((C3035 * C852 + C9006 * C855) * C122 +
                      (C3035 * C899 + C9006 * C991) * C9008) *
                         C5775) *
                        C8949 * C8932 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
           (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C9006 * C5775) *
              C8949 * C8932 * C71 -
          (C1037 * C9006 * C5775 + C264 * C9006 * C5774) * C8949 * C8932 * C72 +
          (C265 * C9006 * C5774 +
           (C246 * C852 + C1034 + C1034 + C9008 * C1028) * C9006 * C5775) *
              C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
           (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
               C9008) *
              C9006 * C8949 * C8932 * C71 -
          ((C5830 * C897 + C5775 * C1071 + C5829 * C124 + C5774 * C292) *
               C9008 +
           (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) * C122) *
              C9006 * C8949 * C8932 * C72 +
          ((C5829 * C80 + C5774 * C172 + C5830 * C852 + C5775 * C945) * C122 +
           (C5829 * C125 + C5774 * C293 + C5830 * C899 + C5775 * C1073) *
               C9008) *
              C9006 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] += (2 * std::pow(Pi, 2.5) *
                   (((C3035 * C78 + C9006 * C82) * C5829 +
                     (C3035 * C170 + C9006 * C331) * C5774 +
                     (C3035 * C851 + C9006 * C854) * C5830 +
                     (C3035 * C944 + C9006 * C1114) * C5775) *
                        C9008 * C8949 * C8932 * C71 -
                    ((C3035 * C943 + C9006 * C1113) * C5775 +
                     (C3035 * C850 + C9006 * C853) * C5830 +
                     (C3035 * C171 + C9006 * C332) * C5774 +
                     (C3035 * C79 + C9006 * C83) * C5829) *
                        C9008 * C8949 * C8932 * C72 +
                    ((C3035 * C80 + C9006 * C84) * C5829 +
                     (C3035 * C172 + C9006 * C333) * C5774 +
                     (C3035 * C852 + C9006 * C855) * C5830 +
                     (C3035 * C945 + C9006 * C1115) * C5775) *
                        C9008 * C8949 * C8932 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C9008 * C123) * C5829 +
           (C122 * C170 + C9008 * C361) * C5774 +
           (C122 * C851 + C9008 * C898) * C5830 +
           (C122 * C944 + C9008 * C1151) * C5775) *
              C9006 * C8949 * C8932 * C71 -
          (C1157 * C5775 + C909 * C5830 + C372 * C5774 + C140 * C5829) * C9006 *
              C8949 * C8932 * C72 +
          (C143 * C5829 + C373 * C5774 + (C122 * C852 + C9008 * C899) * C5830 +
           (C122 * C945 + C9008 * C1152) * C5775) *
              C9006 * C8949 * C8932 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] += (2 * std::pow(Pi, 2.5) *
                   ((C5987 * C78 + C5990 + C5990 + C5774 * C402 + C5988 * C851 +
                     C5991 + C5991 + C5775 * C1193) *
                        C9008 * C9006 * C8949 * C8932 * C71 -
                    (C5988 * C850 + C5992 + C5992 + C5775 * C1192 +
                     C5987 * C79 + C5993 + C5993 + C5774 * C403) *
                        C9008 * C9006 * C8949 * C8932 * C72 +
                    (C5987 * C80 + C5994 + C5994 + C5774 * C404 + C5988 * C852 +
                     C5995 + C5995 + C5775 * C1194) *
                        C9008 * C9006 * C8949 * C8932 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] += (2 * std::pow(Pi, 2.5) *
                   ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                      (C3034 * C851 + C3660 + C3660 + C9006 * C857) * C5775) *
                         C9008 * C8949 * C456 -
                     (C4571 * C5775 + C3305 * C5774) * C9008 * C8949 * C8997) *
                        C458 +
                    ((C3306 * C5774 +
                      (C3034 * C1819 + C3662 + C3662 + C9006 * C1823) * C5775) *
                         C9008 * C8949 * C8997 -
                     ((C3034 * C850 + C3661 + C3661 + C9006 * C856) * C5775 +
                      (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C5774) *
                         C9008 * C8949 * C456) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[19] += (2 * std::pow(Pi, 2.5) *
                   (((((C122 * C78 + C9008 * C123) * C3035 +
                       (C122 * C82 + C9008 * C127) * C9006) *
                          C5774 +
                      ((C122 * C851 + C9008 * C898) * C3035 +
                       (C122 * C854 + C9008 * C901) * C9006) *
                          C5775) *
                         C8949 * C456 -
                     (((C122 * C1820 + C9008 * C1862) * C9006 +
                       (C122 * C1818 + C9008 * C1860) * C3035) *
                          C5775 +
                      ((C122 * C464 + C9008 * C511) * C9006 +
                       (C122 * C461 + C9008 * C508) * C3035) *
                          C5774) *
                         C8949 * C8997) *
                        C458 +
                    (((C519 * C3035 + C518 * C9006) * C5774 +
                      ((C122 * C1819 + C9008 * C1861) * C3035 +
                       (C122 * C1821 + C9008 * C1863) * C9006) *
                          C5775) *
                         C8949 * C8997 -
                     ((C908 * C9006 + C909 * C3035) * C5775 +
                      (C141 * C9006 + C140 * C3035) * C5774) *
                         C8949 * C456) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
            (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) *
                C9006) *
               C9008 * C8949 * C456 -
           ((C5830 * C1820 + C5775 * C1900 + C5829 * C464 + C5774 * C557) *
                C9006 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C3035) *
               C9008 * C8949 * C8997) *
              C458 +
          (((C5829 * C460 + C5774 * C553 + C5830 * C1819 + C5775 * C1899) *
                C3035 +
            (C5829 * C463 + C5774 * C556 + C5830 * C1821 + C5775 * C1901) *
                C9006) *
               C9008 * C8949 * C8997 -
           ((C5830 * C853 + C5775 * C946 + C5829 * C83 + C5774 * C175) * C9006 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) *
                C3035) *
               C9008 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] += (2 * std::pow(Pi, 2.5) *
                   (((((C3035 * C78 + C9006 * C82) * C122 +
                       (C3035 * C123 + C9006 * C216) * C9008) *
                          C5774 +
                      ((C3035 * C851 + C9006 * C854) * C122 +
                       (C3035 * C898 + C9006 * C990) * C9008) *
                          C5775) *
                         C8949 * C456 -
                     ((C4692 * C9008 + C4693 * C122) * C5775 +
                      (C3430 * C9008 + C3429 * C122) * C5774) *
                         C8949 * C8997) *
                        C458 +
                    (((C3431 * C122 + C3432 * C9008) * C5774 +
                      ((C3035 * C1819 + C9006 * C1821) * C122 +
                       (C3035 * C1861 + C9006 * C1937) * C9008) *
                          C5775) *
                         C8949 * C8997 -
                     (((C3035 * C897 + C9006 * C989) * C9008 +
                       (C3035 * C850 + C9006 * C853) * C122) *
                          C5775 +
                      ((C3035 * C124 + C9006 * C217) * C9008 +
                       (C3035 * C79 + C9006 * C83) * C122) *
                          C5774) *
                         C8949 * C456) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
            (C246 * C851 + C1033 + C1033 + C9008 * C1027) * C9006 * C5775) *
               C8949 * C456 -
           ((C246 * C1818 + C1975 + C1975 + C9008 * C1972) * C9006 * C5775 +
            (C246 * C461 + C643 + C643 + C9008 * C637) * C9006 * C5774) *
               C8949 * C8997) *
              C458 +
          ((C647 * C9006 * C5774 +
            (C246 * C1819 + C1976 + C1976 + C9008 * C1973) * C9006 * C5775) *
               C8949 * C8997 -
           (C1037 * C9006 * C5775 + C264 * C9006 * C5774) * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
            (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
                C9008) *
               C9006 * C8949 * C456 -
           ((C5830 * C1860 + C5775 * C2010 + C5829 * C508 + C5774 * C682) *
                C9008 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C122) *
               C9006 * C8949 * C8997) *
              C458 +
          (((C5829 * C460 + C5774 * C553 + C5830 * C1819 + C5775 * C1899) *
                C122 +
            (C5829 * C507 + C5774 * C681 + C5830 * C1861 + C5775 * C2011) *
                C9008) *
               C9006 * C8949 * C8997 -
           ((C5830 * C897 + C5775 * C1071 + C5829 * C124 + C5774 * C292) *
                C9008 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) * C122) *
               C9006 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C5829 +
            (C3035 * C170 + C9006 * C331) * C5774 +
            (C3035 * C851 + C9006 * C854) * C5830 +
            (C3035 * C944 + C9006 * C1114) * C5775) *
               C9008 * C8949 * C456 -
           (C4807 * C5775 + C4693 * C5830 + C3548 * C5774 + C3429 * C5829) *
               C9008 * C8949 * C8997) *
              C458 +
          ((C3431 * C5829 + C3549 * C5774 +
            (C3035 * C1819 + C9006 * C1821) * C5830 +
            (C3035 * C1899 + C9006 * C2047) * C5775) *
               C9008 * C8949 * C8997 -
           ((C3035 * C943 + C9006 * C1113) * C5775 +
            (C3035 * C850 + C9006 * C853) * C5830 +
            (C3035 * C171 + C9006 * C332) * C5774 +
            (C3035 * C79 + C9006 * C83) * C5829) *
               C9008 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C5829 +
            (C122 * C170 + C9008 * C361) * C5774 +
            (C122 * C851 + C9008 * C898) * C5830 +
            (C122 * C944 + C9008 * C1151) * C5775) *
               C9006 * C8949 * C456 -
           ((C122 * C1898 + C9008 * C2082) * C5775 +
            (C122 * C1818 + C9008 * C1860) * C5830 +
            (C122 * C554 + C9008 * C761) * C5774 +
            (C122 * C461 + C9008 * C508) * C5829) *
               C9006 * C8949 * C8997) *
              C458 +
          ((C519 * C5829 + C767 * C5774 +
            (C122 * C1819 + C9008 * C1861) * C5830 +
            (C122 * C1899 + C9008 * C2083) * C5775) *
               C9006 * C8949 * C8997 -
           (C1157 * C5775 + C909 * C5830 + C372 * C5774 + C140 * C5829) *
               C9006 * C8949 * C456) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[19] += (2 * std::pow(Pi, 2.5) *
                   (((C5987 * C78 + C5990 + C5990 + C5774 * C402 +
                      C5988 * C851 + C5991 + C5991 + C5775 * C1193) *
                         C9008 * C9006 * C8949 * C456 -
                     (C5988 * C1818 + C6302 + C6302 + C5775 * C2118 +
                      C5987 * C461 + C6303 + C6303 + C5774 * C803) *
                         C9008 * C9006 * C8949 * C8997) *
                        C458 +
                    ((C5987 * C460 + C6304 + C6304 + C5774 * C802 +
                      C5988 * C1819 + C6305 + C6305 + C5775 * C2119) *
                         C9008 * C9006 * C8949 * C8997 -
                     (C5988 * C850 + C5992 + C5992 + C5775 * C1192 +
                      C5987 * C79 + C5993 + C5993 + C5774 * C403) *
                         C9008 * C9006 * C8949 * C456) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                      C6349 * C5775) *
                         C9008 * C848 -
                     ((C3034 * C2765 + C5526 + C5526 + C9006 * C2769) * C5775 +
                      C6349 * C5774) *
                         C9008 * C8999) *
                        C8932 * C458 +
                    ((C6350 * C5774 +
                      (C3034 * C2766 + C6344 + C6344 + C9006 * C2770) * C5775) *
                         C9008 * C8999 -
                     (C6350 * C5775 +
                      (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C5774) *
                         C9008 * C848) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C3035 +
             (C122 * C82 + C9008 * C127) * C9006) *
                C5774 +
            (C6393 + C6394) * C5775) *
               C848 -
           (((C122 * C2767 + C9008 * C2801) * C9006 +
             (C122 * C2765 + C9008 * C2799) * C3035) *
                C5775 +
            (C6394 + C6393) * C5774) *
               C8999) *
              C8932 * C458 +
          (((C6389 + C6390) * C5774 + ((C122 * C2766 + C9008 * C2800) * C3035 +
                                       (C122 * C2768 + C9008 * C2802) * C9006) *
                                          C5775) *
               C8999 -
           ((C6390 + C6389) * C5775 + (C141 * C9006 + C140 * C3035) * C5774) *
               C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
            (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) *
                C9006) *
               C9008 * C848 -
           ((C5830 * C2767 + C5775 * C2831 + C5829 * C854 + C5774 * C947) *
                C9006 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C3035) *
               C9008 * C8999) *
              C8932 * C458 +
          (((C5829 * C850 + C5774 * C943 + C5830 * C2766 + C5775 * C2830) *
                C3035 +
            (C5829 * C853 + C5774 * C946 + C5830 * C2768 + C5775 * C2832) *
                C9006) *
               C9008 * C8999 -
           ((C5830 * C853 + C5775 * C946 + C5829 * C83 + C5774 * C175) * C9006 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) *
                C3035) *
               C9008 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C122 +
             (C3035 * C123 + C9006 * C216) * C9008) *
                C5774 +
            (C6475 + C6476) * C5775) *
               C848 -
           (((C3035 * C2799 + C9006 * C2859) * C9008 +
             (C3035 * C2765 + C9006 * C2767) * C122) *
                C5775 +
            (C6476 + C6475) * C5774) *
               C8999) *
              C8932 * C458 +
          (((C6477 + C6478) * C5774 +
            ((C3035 * C2766 + C9006 * C2768) * C122 +
             (C3035 * C2800 + C9006 * C2860) * C9008) *
                C5775) *
               C8999 -
           ((C6478 + C6477) * C5775 + ((C3035 * C124 + C9006 * C217) * C9008 +
                                       (C3035 * C79 + C9006 * C83) * C122) *
                                          C5774) *
               C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
            C6519 * C5775) *
               C848 -
           ((C246 * C2765 + C2890 + C2890 + C9008 * C2887) * C9006 * C5775 +
            C6519 * C5774) *
               C8999) *
              C8932 * C458 +
          ((C6515 * C5774 +
            (C246 * C2766 + C2891 + C2891 + C9008 * C2888) * C9006 * C5775) *
               C8999 -
           (C6515 * C5775 + C264 * C9006 * C5774) * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
            (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
                C9008) *
               C9006 * C848 -
           ((C5830 * C2799 + C5775 * C2917 + C5829 * C898 + C5774 * C1072) *
                C9008 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C122) *
               C9006 * C8999) *
              C8932 * C458 +
          (((C5829 * C850 + C5774 * C943 + C5830 * C2766 + C5775 * C2830) *
                C122 +
            (C5829 * C897 + C5774 * C1071 + C5830 * C2800 + C5775 * C2918) *
                C9008) *
               C9006 * C8999 -
           ((C5830 * C897 + C5775 * C1071 + C5829 * C124 + C5774 * C292) *
                C9008 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) * C122) *
               C9006 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C5829 +
                      (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
                      C6592 * C5775) *
                         C9008 * C848 -
                     ((C3035 * C2829 + C9006 * C2945) * C5775 +
                      (C3035 * C2765 + C9006 * C2767) * C5830 + C6592 * C5774 +
                      C6471 * C5829) *
                         C9008 * C8999) *
                        C8932 * C458 +
                    ((C6473 * C5829 + C6593 * C5774 +
                      (C3035 * C2766 + C9006 * C2768) * C5830 +
                      (C3035 * C2830 + C9006 * C2946) * C5775) *
                         C9008 * C8999 -
                     (C6593 * C5775 + C6473 * C5830 +
                      (C3035 * C171 + C9006 * C332) * C5774 +
                      (C3035 * C79 + C9006 * C83) * C5829) *
                         C9008 * C848) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C5829 +
            (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
            C6630 * C5775) *
               C9006 * C848 -
           ((C122 * C2829 + C9008 * C2973) * C5775 +
            (C122 * C2765 + C9008 * C2799) * C5830 + C6630 * C5774 +
            C6391 * C5829) *
               C9006 * C8999) *
              C8932 * C458 +
          ((C909 * C5829 + C1157 * C5774 +
            (C122 * C2766 + C9008 * C2800) * C5830 +
            (C122 * C2830 + C9008 * C2974) * C5775) *
               C9006 * C8999 -
           (C1157 * C5775 + C909 * C5830 + C372 * C5774 + C140 * C5829) *
               C9006 * C848) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[20] += (2 * std::pow(Pi, 2.5) *
                   (((C5987 * C78 + C5990 + C5990 + C5774 * C402 +
                      C5988 * C851 + C5991 + C5991 + C5775 * C1193) *
                         C9008 * C9006 * C848 -
                     (C5988 * C2765 + C6665 + C6665 + C5775 * C3001 +
                      C5987 * C851 + C6666 + C6666 + C5774 * C1193) *
                         C9008 * C9006 * C8999) *
                        C8932 * C458 +
                    ((C5987 * C850 + C6667 + C6667 + C5774 * C1192 +
                      C5988 * C2766 + C6668 + C6668 + C5775 * C3002) *
                         C9008 * C9006 * C8999 -
                     (C5988 * C850 + C5992 + C5992 + C5775 * C1192 +
                      C5987 * C79 + C5993 + C5993 + C5774 * C403) *
                         C9008 * C9006 * C848) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[21] += (2 * std::pow(Pi, 2.5) *
                   ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                      C6349 * C5775) *
                         C9008 * C8949 * C1238 -
                     (C4571 * C5775 + C3305 * C5774) * C9008 * C8949 * C8997) *
                        C1240 +
                    ((C3306 * C5774 +
                      (C3034 * C1819 + C3662 + C3662 + C9006 * C1823) * C5775) *
                         C9008 * C8949 * C8997 -
                     (C6350 * C5775 +
                      (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C5774) *
                         C9008 * C8949 * C1238) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C3035 +
             (C122 * C82 + C9008 * C127) * C9006) *
                C5774 +
            (C6393 + C6394) * C5775) *
               C8949 * C1238 -
           (((C122 * C1820 + C9008 * C1862) * C9006 +
             (C122 * C1818 + C9008 * C1860) * C3035) *
                C5775 +
            ((C122 * C464 + C9008 * C511) * C9006 +
             (C122 * C461 + C9008 * C508) * C3035) *
                C5774) *
               C8949 * C8997) *
              C1240 +
          (((C519 * C3035 + C518 * C9006) * C5774 +
            ((C122 * C1819 + C9008 * C1861) * C3035 +
             (C122 * C1821 + C9008 * C1863) * C9006) *
                C5775) *
               C8949 * C8997 -
           ((C6390 + C6389) * C5775 + (C141 * C9006 + C140 * C3035) * C5774) *
               C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
            (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) *
                C9006) *
               C9008 * C8949 * C1238 -
           ((C5830 * C1820 + C5775 * C1900 + C5829 * C464 + C5774 * C557) *
                C9006 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C3035) *
               C9008 * C8949 * C8997) *
              C1240 +
          (((C5829 * C460 + C5774 * C553 + C5830 * C1819 + C5775 * C1899) *
                C3035 +
            (C5829 * C463 + C5774 * C556 + C5830 * C1821 + C5775 * C1901) *
                C9006) *
               C9008 * C8949 * C8997 -
           ((C5830 * C853 + C5775 * C946 + C5829 * C83 + C5774 * C175) * C9006 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) *
                C3035) *
               C9008 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C122 +
             (C3035 * C123 + C9006 * C216) * C9008) *
                C5774 +
            (C6475 + C6476) * C5775) *
               C8949 * C1238 -
           ((C4692 * C9008 + C4693 * C122) * C5775 +
            (C3430 * C9008 + C3429 * C122) * C5774) *
               C8949 * C8997) *
              C1240 +
          (((C3431 * C122 + C3432 * C9008) * C5774 +
            ((C3035 * C1819 + C9006 * C1821) * C122 +
             (C3035 * C1861 + C9006 * C1937) * C9008) *
                C5775) *
               C8949 * C8997 -
           ((C6478 + C6477) * C5775 + ((C3035 * C124 + C9006 * C217) * C9008 +
                                       (C3035 * C79 + C9006 * C83) * C122) *
                                          C5774) *
               C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
            C6519 * C5775) *
               C8949 * C1238 -
           ((C246 * C1818 + C1975 + C1975 + C9008 * C1972) * C9006 * C5775 +
            (C246 * C461 + C643 + C643 + C9008 * C637) * C9006 * C5774) *
               C8949 * C8997) *
              C1240 +
          ((C647 * C9006 * C5774 +
            (C246 * C1819 + C1976 + C1976 + C9008 * C1973) * C9006 * C5775) *
               C8949 * C8997 -
           (C6515 * C5775 + C264 * C9006 * C5774) * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
            (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
                C9008) *
               C9006 * C8949 * C1238 -
           ((C5830 * C1860 + C5775 * C2010 + C5829 * C508 + C5774 * C682) *
                C9008 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C122) *
               C9006 * C8949 * C8997) *
              C1240 +
          (((C5829 * C460 + C5774 * C553 + C5830 * C1819 + C5775 * C1899) *
                C122 +
            (C5829 * C507 + C5774 * C681 + C5830 * C1861 + C5775 * C2011) *
                C9008) *
               C9006 * C8949 * C8997 -
           ((C5830 * C897 + C5775 * C1071 + C5829 * C124 + C5774 * C292) *
                C9008 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) * C122) *
               C9006 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C5829 +
            (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
            C6592 * C5775) *
               C9008 * C8949 * C1238 -
           (C4807 * C5775 + C4693 * C5830 + C3548 * C5774 + C3429 * C5829) *
               C9008 * C8949 * C8997) *
              C1240 +
          ((C3431 * C5829 + C3549 * C5774 +
            (C3035 * C1819 + C9006 * C1821) * C5830 +
            (C3035 * C1899 + C9006 * C2047) * C5775) *
               C9008 * C8949 * C8997 -
           (C6593 * C5775 + C6473 * C5830 +
            (C3035 * C171 + C9006 * C332) * C5774 +
            (C3035 * C79 + C9006 * C83) * C5829) *
               C9008 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C5829 +
            (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
            C6630 * C5775) *
               C9006 * C8949 * C1238 -
           ((C122 * C1898 + C9008 * C2082) * C5775 +
            (C122 * C1818 + C9008 * C1860) * C5830 +
            (C122 * C554 + C9008 * C761) * C5774 +
            (C122 * C461 + C9008 * C508) * C5829) *
               C9006 * C8949 * C8997) *
              C1240 +
          ((C519 * C5829 + C767 * C5774 +
            (C122 * C1819 + C9008 * C1861) * C5830 +
            (C122 * C1899 + C9008 * C2083) * C5775) *
               C9006 * C8949 * C8997 -
           (C1157 * C5775 + C909 * C5830 + C372 * C5774 + C140 * C5829) *
               C9006 * C8949 * C1238) *
              C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[21] += (2 * std::pow(Pi, 2.5) *
                   (((C5987 * C78 + C5990 + C5990 + C5774 * C402 +
                      C5988 * C851 + C5991 + C5991 + C5775 * C1193) *
                         C9008 * C9006 * C8949 * C1238 -
                     (C5988 * C1818 + C6302 + C6302 + C5775 * C2118 +
                      C5987 * C461 + C6303 + C6303 + C5774 * C803) *
                         C9008 * C9006 * C8949 * C8997) *
                        C1240 +
                    ((C5987 * C460 + C6304 + C6304 + C5774 * C802 +
                      C5988 * C1819 + C6305 + C6305 + C5775 * C2119) *
                         C9008 * C9006 * C8949 * C8997 -
                     (C5988 * C850 + C5992 + C5992 + C5775 * C1192 +
                      C5987 * C79 + C5993 + C5993 + C5774 * C403) *
                         C9008 * C9006 * C8949 * C1238) *
                        C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[22] += (2 * std::pow(Pi, 2.5) *
                   (((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                     C6349 * C5775) *
                        C9008 * C8949 * C1540 -
                    (C4571 * C5775 + C3305 * C5774) * C9008 * C8949 * C1541 +
                    (C4279 * C5774 +
                     (C3034 * C4562 + C4568 + C4568 + C9006 * C4564) * C5775) *
                        C9008 * C8949 * C1542) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexy[22] += (2 * std::pow(Pi, 2.5) *
                   ((((C122 * C78 + C9008 * C123) * C3035 +
                      (C122 * C82 + C9008 * C127) * C9006) *
                         C5774 +
                     (C6393 + C6394) * C5775) *
                        C8949 * C1540 -
                    (((C122 * C1820 + C9008 * C1862) * C9006 +
                      (C122 * C1818 + C9008 * C1860) * C3035) *
                         C5775 +
                     ((C122 * C464 + C9008 * C511) * C9006 +
                      (C122 * C461 + C9008 * C508) * C3035) *
                         C5774) *
                        C8949 * C1541 +
                    (((C122 * C1544 + C9008 * C1578) * C3035 +
                      (C122 * C1546 + C9008 * C1580) * C9006) *
                         C5774 +
                     ((C122 * C4562 + C9008 * C4606) * C3035 +
                      (C122 * C4563 + C9008 * C4607) * C9006) *
                         C5775) *
                        C8949 * C1542) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
           (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) * C9006) *
              C9008 * C8949 * C1540 -
          ((C5830 * C1820 + C5775 * C1900 + C5829 * C464 + C5774 * C557) *
               C9006 +
           (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
               C3035) *
              C9008 * C8949 * C1541 +
          ((C5829 * C1544 + C5774 * C1608 + C5830 * C4562 + C5775 * C4642) *
               C3035 +
           (C5829 * C1546 + C5774 * C1610 + C5830 * C4563 + C5775 * C4643) *
               C9006) *
              C9008 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[22] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C122 +
                      (C3035 * C123 + C9006 * C216) * C9008) *
                         C5774 +
                     (C6475 + C6476) * C5775) *
                        C8949 * C1540 -
                    ((C4692 * C9008 + C4693 * C122) * C5775 +
                     (C3430 * C9008 + C3429 * C122) * C5774) *
                        C8949 * C1541 +
                    ((C4377 * C122 + C4376 * C9008) * C5774 +
                     ((C3035 * C4562 + C9006 * C4563) * C122 +
                      (C3035 * C4606 + C9006 * C4686) * C9008) *
                         C5775) *
                        C8949 * C1542) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
           C6519 * C5775) *
              C8949 * C1540 -
          ((C246 * C1818 + C1975 + C1975 + C9008 * C1972) * C9006 * C5775 +
           (C246 * C461 + C643 + C643 + C9008 * C637) * C9006 * C5774) *
              C8949 * C1541 +
          ((C246 * C1544 + C1669 + C1669 + C9008 * C1666) * C9006 * C5774 +
           (C246 * C4562 + C7105 + C7105 + C9008 * C4727) * C9006 * C5775) *
              C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
           (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
               C9008) *
              C9006 * C8949 * C1540 -
          ((C5830 * C1860 + C5775 * C2010 + C5829 * C508 + C5774 * C682) *
               C9008 +
           (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
               C122) *
              C9006 * C8949 * C1541 +
          ((C5829 * C1544 + C5774 * C1608 + C5830 * C4562 + C5775 * C4642) *
               C122 +
           (C5829 * C1578 + C5774 * C1696 + C5830 * C4606 + C5775 * C4764) *
               C9008) *
              C9006 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3035 * C78 + C9006 * C82) * C5829 +
           (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
           C6592 * C5775) *
              C9008 * C8949 * C1540 -
          (C4807 * C5775 + C4693 * C5830 + C3548 * C5774 + C3429 * C5829) *
              C9008 * C8949 * C1541 +
          (C4377 * C5829 + C4467 * C5774 +
           (C3035 * C4562 + C9006 * C4563) * C5830 +
           (C3035 * C4642 + C9006 * C4802) * C5775) *
              C9008 * C8949 * C1542) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[22] += (2 * std::pow(Pi, 2.5) *
                   (((C122 * C78 + C9008 * C123) * C5829 +
                     (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
                     C6630 * C5775) *
                        C9006 * C8949 * C1540 -
                    ((C122 * C1898 + C9008 * C2082) * C5775 +
                     (C122 * C1818 + C9008 * C1860) * C5830 +
                     (C122 * C554 + C9008 * C761) * C5774 +
                     (C122 * C461 + C9008 * C508) * C5829) *
                        C9006 * C8949 * C1541 +
                    ((C122 * C1544 + C9008 * C1578) * C5829 +
                     (C122 * C1608 + C9008 * C1752) * C5774 +
                     (C122 * C4562 + C9008 * C4606) * C5830 +
                     (C122 * C4642 + C9008 * C4842) * C5775) *
                        C9006 * C8949 * C1542) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eezz[22] += (2 * std::pow(Pi, 2.5) *
                   ((C5987 * C78 + C5990 + C5990 + C5774 * C402 + C5988 * C851 +
                     C5991 + C5991 + C5775 * C1193) *
                        C9008 * C9006 * C8949 * C1540 -
                    (C5988 * C1818 + C6302 + C6302 + C5775 * C2118 +
                     C5987 * C461 + C6303 + C6303 + C5774 * C803) *
                        C9008 * C9006 * C8949 * C1541 +
                    (C5987 * C1544 + C7210 + C7210 + C5774 * C1780 +
                     C5988 * C4562 + C7211 + C7211 + C5775 * C4877) *
                        C9008 * C9006 * C8949 * C1542) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                      C6349 * C5775) *
                         C9008 * C848 -
                     ((C3034 * C2765 + C5526 + C5526 + C9006 * C2769) * C5775 +
                      C6349 * C5774) *
                         C9008 * C8999) *
                        C1238 +
                    ((C4571 * C5774 +
                      (C3034 * C5522 + C5527 + C5527 + C9006 * C5524) * C5775) *
                         C9008 * C8999 -
                     (C4571 * C5775 + C3305 * C5774) * C9008 * C848) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C3035 +
             (C122 * C82 + C9008 * C127) * C9006) *
                C5774 +
            (C6393 + C6394) * C5775) *
               C848 -
           (((C122 * C2767 + C9008 * C2801) * C9006 +
             (C122 * C2765 + C9008 * C2799) * C3035) *
                C5775 +
            (C6394 + C6393) * C5774) *
               C8999) *
              C1238 +
          (((C7286 + C7287) * C5774 + ((C122 * C5522 + C9008 * C5553) * C3035 +
                                       (C122 * C5523 + C9008 * C5554) * C9006) *
                                          C5775) *
               C8999 -
           ((C7287 + C7286) * C5775 + ((C122 * C464 + C9008 * C511) * C9006 +
                                       (C122 * C461 + C9008 * C508) * C3035) *
                                          C5774) *
               C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
            (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) *
                C9006) *
               C9008 * C848 -
           ((C5830 * C2767 + C5775 * C2831 + C5829 * C854 + C5774 * C947) *
                C9006 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C3035) *
               C9008 * C8999) *
              C1238 +
          (((C5829 * C1818 + C5774 * C1898 + C5830 * C5522 + C5775 * C5581) *
                C3035 +
            (C5829 * C1820 + C5774 * C1900 + C5830 * C5523 + C5775 * C5582) *
                C9006) *
               C9008 * C8999 -
           ((C5830 * C1820 + C5775 * C1900 + C5829 * C464 + C5774 * C557) *
                C9006 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C3035) *
               C9008 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C122 +
             (C3035 * C123 + C9006 * C216) * C9008) *
                C5774 +
            (C6475 + C6476) * C5775) *
               C848 -
           (((C3035 * C2799 + C9006 * C2859) * C9008 +
             (C3035 * C2765 + C9006 * C2767) * C122) *
                C5775 +
            (C6476 + C6475) * C5774) *
               C8999) *
              C1238 +
          (((C7356 + C7357) * C5774 +
            ((C3035 * C5522 + C9006 * C5523) * C122 +
             (C3035 * C5553 + C9006 * C5609) * C9008) *
                C5775) *
               C8999 -
           ((C7357 + C7356) * C5775 + (C3430 * C9008 + C3429 * C122) * C5774) *
               C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
            C6519 * C5775) *
               C848 -
           ((C246 * C2765 + C2890 + C2890 + C9008 * C2887) * C9006 * C5775 +
            C6519 * C5774) *
               C8999) *
              C1238 +
          ((C7398 * C5774 +
            (C246 * C5522 + C7394 + C7394 + C9008 * C5636) * C9006 * C5775) *
               C8999 -
           (C7398 * C5775 +
            (C246 * C461 + C643 + C643 + C9008 * C637) * C9006 * C5774) *
               C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
            (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
                C9008) *
               C9006 * C848 -
           ((C5830 * C2799 + C5775 * C2917 + C5829 * C898 + C5774 * C1072) *
                C9008 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C122) *
               C9006 * C8999) *
              C1238 +
          (((C5829 * C1818 + C5774 * C1898 + C5830 * C5522 + C5775 * C5581) *
                C122 +
            (C5829 * C1860 + C5774 * C2010 + C5830 * C5553 + C5775 * C5665) *
                C9008) *
               C9006 * C8999 -
           ((C5830 * C1860 + C5775 * C2010 + C5829 * C508 + C5774 * C682) *
                C9008 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C122) *
               C9006 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C5829 +
            (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
            C6592 * C5775) *
               C9008 * C848 -
           ((C3035 * C2829 + C9006 * C2945) * C5775 +
            (C3035 * C2765 + C9006 * C2767) * C5830 + C6592 * C5774 +
            C6471 * C5829) *
               C9008 * C8999) *
              C1238 +
          ((C4693 * C5829 + C4807 * C5774 +
            (C3035 * C5522 + C9006 * C5523) * C5830 +
            (C3035 * C5581 + C9006 * C5692) * C5775) *
               C9008 * C8999 -
           (C4807 * C5775 + C4693 * C5830 + C3548 * C5774 + C3429 * C5829) *
               C9008 * C848) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C122 * C78 + C9008 * C123) * C5829 +
                      (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
                      C6630 * C5775) *
                         C9006 * C848 -
                     ((C122 * C2829 + C9008 * C2973) * C5775 +
                      (C122 * C2765 + C9008 * C2799) * C5830 + C6630 * C5774 +
                      C6391 * C5829) *
                         C9006 * C8999) *
                        C1238 +
                    ((C7284 * C5829 + C7503 * C5774 +
                      (C122 * C5522 + C9008 * C5553) * C5830 +
                      (C122 * C5581 + C9008 * C5719) * C5775) *
                         C9006 * C8999 -
                     (C7503 * C5775 + C7284 * C5830 +
                      (C122 * C554 + C9008 * C761) * C5774 +
                      (C122 * C461 + C9008 * C508) * C5829) *
                         C9006 * C848) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eezz[23] += (2 * std::pow(Pi, 2.5) *
                   (((C5987 * C78 + C5990 + C5990 + C5774 * C402 +
                      C5988 * C851 + C5991 + C5991 + C5775 * C1193) *
                         C9008 * C9006 * C848 -
                     (C5988 * C2765 + C6665 + C6665 + C5775 * C3001 +
                      C5987 * C851 + C6666 + C6666 + C5774 * C1193) *
                         C9008 * C9006 * C8999) *
                        C1238 +
                    ((C5987 * C1818 + C7538 + C7538 + C5774 * C2118 +
                      C5988 * C5522 + C7539 + C7539 + C5775 * C5746) *
                         C9008 * C9006 * C8999 -
                     (C5988 * C1818 + C6302 + C6302 + C5775 * C2118 +
                      C5987 * C461 + C6303 + C6303 + C5774 * C803) *
                         C9008 * C9006 * C848) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexx[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                      C6349 * C5775) *
                         C9008 * C2156 -
                     ((C3034 * C2765 + C5526 + C5526 + C9006 * C2769) * C5775 +
                      C6349 * C5774) *
                         C9008 * C8999) *
                        C8932 * C1240 +
                    ((C6350 * C5774 +
                      (C3034 * C2766 + C6344 + C6344 + C9006 * C2770) * C5775) *
                         C9008 * C8999 -
                     (C6350 * C5775 +
                      (C3034 * C79 + C3040 + C3040 + C9006 * C87) * C5774) *
                         C9008 * C2156) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C3035 +
             (C122 * C82 + C9008 * C127) * C9006) *
                C5774 +
            (C6393 + C6394) * C5775) *
               C2156 -
           (((C122 * C2767 + C9008 * C2801) * C9006 +
             (C122 * C2765 + C9008 * C2799) * C3035) *
                C5775 +
            (C6394 + C6393) * C5774) *
               C8999) *
              C8932 * C1240 +
          (((C6389 + C6390) * C5774 + ((C122 * C2766 + C9008 * C2800) * C3035 +
                                       (C122 * C2768 + C9008 * C2802) * C9006) *
                                          C5775) *
               C8999 -
           ((C6390 + C6389) * C5775 + (C141 * C9006 + C140 * C3035) * C5774) *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
            (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) *
                C9006) *
               C9008 * C2156 -
           ((C5830 * C2767 + C5775 * C2831 + C5829 * C854 + C5774 * C947) *
                C9006 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C3035) *
               C9008 * C8999) *
              C8932 * C1240 +
          (((C5829 * C850 + C5774 * C943 + C5830 * C2766 + C5775 * C2830) *
                C3035 +
            (C5829 * C853 + C5774 * C946 + C5830 * C2768 + C5775 * C2832) *
                C9006) *
               C9008 * C8999 -
           ((C5830 * C853 + C5775 * C946 + C5829 * C83 + C5774 * C175) * C9006 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) *
                C3035) *
               C9008 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C122 +
             (C3035 * C123 + C9006 * C216) * C9008) *
                C5774 +
            (C6475 + C6476) * C5775) *
               C2156 -
           (((C3035 * C2799 + C9006 * C2859) * C9008 +
             (C3035 * C2765 + C9006 * C2767) * C122) *
                C5775 +
            (C6476 + C6475) * C5774) *
               C8999) *
              C8932 * C1240 +
          (((C6477 + C6478) * C5774 +
            ((C3035 * C2766 + C9006 * C2768) * C122 +
             (C3035 * C2800 + C9006 * C2860) * C9008) *
                C5775) *
               C8999 -
           ((C6478 + C6477) * C5775 + ((C3035 * C124 + C9006 * C217) * C9008 +
                                       (C3035 * C79 + C9006 * C83) * C122) *
                                          C5774) *
               C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
            C6519 * C5775) *
               C2156 -
           ((C246 * C2765 + C2890 + C2890 + C9008 * C2887) * C9006 * C5775 +
            C6519 * C5774) *
               C8999) *
              C8932 * C1240 +
          ((C6515 * C5774 +
            (C246 * C2766 + C2891 + C2891 + C9008 * C2888) * C9006 * C5775) *
               C8999 -
           (C6515 * C5775 + C264 * C9006 * C5774) * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
            (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
                C9008) *
               C9006 * C2156 -
           ((C5830 * C2799 + C5775 * C2917 + C5829 * C898 + C5774 * C1072) *
                C9008 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C122) *
               C9006 * C8999) *
              C8932 * C1240 +
          (((C5829 * C850 + C5774 * C943 + C5830 * C2766 + C5775 * C2830) *
                C122 +
            (C5829 * C897 + C5774 * C1071 + C5830 * C2800 + C5775 * C2918) *
                C9008) *
               C9006 * C8999 -
           ((C5830 * C897 + C5775 * C1071 + C5829 * C124 + C5774 * C292) *
                C9008 +
            (C5830 * C850 + C5775 * C943 + C5829 * C79 + C5774 * C171) * C122) *
               C9006 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezx[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C3035 * C78 + C9006 * C82) * C5829 +
                      (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
                      C6592 * C5775) *
                         C9008 * C2156 -
                     ((C3035 * C2829 + C9006 * C2945) * C5775 +
                      (C3035 * C2765 + C9006 * C2767) * C5830 + C6592 * C5774 +
                      C6471 * C5829) *
                         C9008 * C8999) *
                        C8932 * C1240 +
                    ((C6473 * C5829 + C6593 * C5774 +
                      (C3035 * C2766 + C9006 * C2768) * C5830 +
                      (C3035 * C2830 + C9006 * C2946) * C5775) *
                         C9008 * C8999 -
                     (C6593 * C5775 + C6473 * C5830 +
                      (C3035 * C171 + C9006 * C332) * C5774 +
                      (C3035 * C79 + C9006 * C83) * C5829) *
                         C9008 * C2156) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C5829 +
            (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
            C6630 * C5775) *
               C9006 * C2156 -
           ((C122 * C2829 + C9008 * C2973) * C5775 +
            (C122 * C2765 + C9008 * C2799) * C5830 + C6630 * C5774 +
            C6391 * C5829) *
               C9006 * C8999) *
              C8932 * C1240 +
          ((C909 * C5829 + C1157 * C5774 +
            (C122 * C2766 + C9008 * C2800) * C5830 +
            (C122 * C2830 + C9008 * C2974) * C5775) *
               C9006 * C8999 -
           (C1157 * C5775 + C909 * C5830 + C372 * C5774 + C140 * C5829) *
               C9006 * C2156) *
              C8932 * C8995)) /
        (p * q * std::sqrt(p + q));
    d2eezz[24] += (2 * std::pow(Pi, 2.5) *
                   (((C5987 * C78 + C5990 + C5990 + C5774 * C402 +
                      C5988 * C851 + C5991 + C5991 + C5775 * C1193) *
                         C9008 * C9006 * C2156 -
                     (C5988 * C2765 + C6665 + C6665 + C5775 * C3001 +
                      C5987 * C851 + C6666 + C6666 + C5774 * C1193) *
                         C9008 * C9006 * C8999) *
                        C8932 * C1240 +
                    ((C5987 * C850 + C6667 + C6667 + C5774 * C1192 +
                      C5988 * C2766 + C6668 + C6668 + C5775 * C3002) *
                         C9008 * C9006 * C8999 -
                     (C5988 * C850 + C5992 + C5992 + C5775 * C1192 +
                      C5987 * C79 + C5993 + C5993 + C5774 * C403) *
                         C9008 * C9006 * C2156) *
                        C8932 * C8995)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                      C6349 * C5775) *
                         C9008 * C2156 -
                     ((C3034 * C2765 + C5526 + C5526 + C9006 * C2769) * C5775 +
                      C6349 * C5774) *
                         C9008 * C8999) *
                        C456 +
                    ((C4571 * C5774 +
                      (C3034 * C5522 + C5527 + C5527 + C9006 * C5524) * C5775) *
                         C9008 * C8999 -
                     (C4571 * C5775 + C3305 * C5774) * C9008 * C2156) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C122 * C78 + C9008 * C123) * C3035 +
             (C122 * C82 + C9008 * C127) * C9006) *
                C5774 +
            (C6393 + C6394) * C5775) *
               C2156 -
           (((C122 * C2767 + C9008 * C2801) * C9006 +
             (C122 * C2765 + C9008 * C2799) * C3035) *
                C5775 +
            (C6394 + C6393) * C5774) *
               C8999) *
              C456 +
          (((C7286 + C7287) * C5774 + ((C122 * C5522 + C9008 * C5553) * C3035 +
                                       (C122 * C5523 + C9008 * C5554) * C9006) *
                                          C5775) *
               C8999 -
           ((C7287 + C7286) * C5775 + ((C122 * C464 + C9008 * C511) * C9006 +
                                       (C122 * C461 + C9008 * C508) * C3035) *
                                          C5774) *
               C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
            (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) *
                C9006) *
               C9008 * C2156 -
           ((C5830 * C2767 + C5775 * C2831 + C5829 * C854 + C5774 * C947) *
                C9006 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C3035) *
               C9008 * C8999) *
              C456 +
          (((C5829 * C1818 + C5774 * C1898 + C5830 * C5522 + C5775 * C5581) *
                C3035 +
            (C5829 * C1820 + C5774 * C1900 + C5830 * C5523 + C5775 * C5582) *
                C9006) *
               C9008 * C8999 -
           ((C5830 * C1820 + C5775 * C1900 + C5829 * C464 + C5774 * C557) *
                C9006 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C3035) *
               C9008 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C3035 * C78 + C9006 * C82) * C122 +
             (C3035 * C123 + C9006 * C216) * C9008) *
                C5774 +
            (C6475 + C6476) * C5775) *
               C2156 -
           (((C3035 * C2799 + C9006 * C2859) * C9008 +
             (C3035 * C2765 + C9006 * C2767) * C122) *
                C5775 +
            (C6476 + C6475) * C5774) *
               C8999) *
              C456 +
          (((C7356 + C7357) * C5774 +
            ((C3035 * C5522 + C9006 * C5523) * C122 +
             (C3035 * C5553 + C9006 * C5609) * C9008) *
                C5775) *
               C8999 -
           ((C7357 + C7356) * C5775 + (C3430 * C9008 + C3429 * C122) * C5774) *
               C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
            C6519 * C5775) *
               C2156 -
           ((C246 * C2765 + C2890 + C2890 + C9008 * C2887) * C9006 * C5775 +
            C6519 * C5774) *
               C8999) *
              C456 +
          ((C7398 * C5774 +
            (C246 * C5522 + C7394 + C7394 + C9008 * C5636) * C9006 * C5775) *
               C8999 -
           (C7398 * C5775 +
            (C246 * C461 + C643 + C643 + C9008 * C637) * C9006 * C5774) *
               C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
            (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
                C9008) *
               C9006 * C2156 -
           ((C5830 * C2799 + C5775 * C2917 + C5829 * C898 + C5774 * C1072) *
                C9008 +
            (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
                C122) *
               C9006 * C8999) *
              C456 +
          (((C5829 * C1818 + C5774 * C1898 + C5830 * C5522 + C5775 * C5581) *
                C122 +
            (C5829 * C1860 + C5774 * C2010 + C5830 * C5553 + C5775 * C5665) *
                C9008) *
               C9006 * C8999 -
           ((C5830 * C1860 + C5775 * C2010 + C5829 * C508 + C5774 * C682) *
                C9008 +
            (C5830 * C1818 + C5775 * C1898 + C5829 * C461 + C5774 * C554) *
                C122) *
               C9006 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C5829 +
            (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
            C6592 * C5775) *
               C9008 * C2156 -
           ((C3035 * C2829 + C9006 * C2945) * C5775 +
            (C3035 * C2765 + C9006 * C2767) * C5830 + C6592 * C5774 +
            C6471 * C5829) *
               C9008 * C8999) *
              C456 +
          ((C4693 * C5829 + C4807 * C5774 +
            (C3035 * C5522 + C9006 * C5523) * C5830 +
            (C3035 * C5581 + C9006 * C5692) * C5775) *
               C9008 * C8999 -
           (C4807 * C5775 + C4693 * C5830 + C3548 * C5774 + C3429 * C5829) *
               C9008 * C2156) *
              C8997) *
         C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C122 * C78 + C9008 * C123) * C5829 +
                      (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
                      C6630 * C5775) *
                         C9006 * C2156 -
                     ((C122 * C2829 + C9008 * C2973) * C5775 +
                      (C122 * C2765 + C9008 * C2799) * C5830 + C6630 * C5774 +
                      C6391 * C5829) *
                         C9006 * C8999) *
                        C456 +
                    ((C7284 * C5829 + C7503 * C5774 +
                      (C122 * C5522 + C9008 * C5553) * C5830 +
                      (C122 * C5581 + C9008 * C5719) * C5775) *
                         C9006 * C8999 -
                     (C7503 * C5775 + C7284 * C5830 +
                      (C122 * C554 + C9008 * C761) * C5774 +
                      (C122 * C461 + C9008 * C508) * C5829) *
                         C9006 * C2156) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eezz[25] += (2 * std::pow(Pi, 2.5) *
                   (((C5987 * C78 + C5990 + C5990 + C5774 * C402 +
                      C5988 * C851 + C5991 + C5991 + C5775 * C1193) *
                         C9008 * C9006 * C2156 -
                     (C5988 * C2765 + C6665 + C6665 + C5775 * C3001 +
                      C5987 * C851 + C6666 + C6666 + C5774 * C1193) *
                         C9008 * C9006 * C8999) *
                        C456 +
                    ((C5987 * C1818 + C7538 + C7538 + C5774 * C2118 +
                      C5988 * C5522 + C7539 + C7539 + C5775 * C5746) *
                         C9008 * C9006 * C8999 -
                     (C5988 * C1818 + C6302 + C6302 + C5775 * C2118 +
                      C5987 * C461 + C6303 + C6303 + C5774 * C803) *
                         C9008 * C9006 * C2156) *
                        C8997) *
                   C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexx[26] += (2 * std::pow(Pi, 2.5) *
                   (((C3034 * C78 + C3037 + C3037 + C9006 * C86) * C5774 +
                     C6349 * C5775) *
                        C9008 * C2762 -
                    (C8186 * C5775 + C6349 * C5774) * C9008 * C2763 +
                    (C8186 * C5774 +
                     (C3034 * C8177 + C8183 + C8183 + C9006 * C8179) * C5775) *
                        C9008 * C2764) *
                   C8932 * C8898) /
                  (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C122 * C78 + C9008 * C123) * C3035 +
            (C122 * C82 + C9008 * C127) * C9006) *
               C5774 +
           (C6393 + C6394) * C5775) *
              C2762 -
          ((C8221 + C8222) * C5775 + (C6394 + C6393) * C5774) * C2763 +
          ((C8222 + C8221) * C5774 + ((C122 * C8177 + C9008 * C8212) * C3035 +
                                      (C122 * C8178 + C9008 * C8213) * C9006) *
                                         C5775) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C3035 +
           (C5829 * C82 + C5774 * C174 + C5830 * C854 + C5775 * C947) * C9006) *
              C9008 * C2762 -
          ((C5830 * C2767 + C5775 * C2831 + C5829 * C854 + C5774 * C947) *
               C9006 +
           (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
               C3035) *
              C9008 * C2763 +
          ((C5829 * C2765 + C5774 * C2829 + C5830 * C8177 + C5775 * C8248) *
               C3035 +
           (C5829 * C2767 + C5774 * C2831 + C5830 * C8178 + C5775 * C8249) *
               C9006) *
              C9008 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3035 * C78 + C9006 * C82) * C122 +
            (C3035 * C123 + C9006 * C216) * C9008) *
               C5774 +
           (C6475 + C6476) * C5775) *
              C2762 -
          ((C8284 + C8285) * C5775 + (C6476 + C6475) * C5774) * C2763 +
          ((C8285 + C8284) * C5774 + ((C3035 * C8177 + C9006 * C8178) * C122 +
                                      (C3035 * C8212 + C9006 * C8276) * C9008) *
                                         C5775) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C246 * C78 + C252 + C252 + C9008 * C247) * C9006 * C5774 +
           C6519 * C5775) *
              C2762 -
          (C8319 * C5775 + C6519 * C5774) * C2763 +
          (C8319 * C5774 +
           (C246 * C8177 + C8315 + C8315 + C9008 * C8311) * C9006 * C5775) *
              C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5829 * C78 + C5774 * C170 + C5830 * C851 + C5775 * C944) * C122 +
           (C5829 * C123 + C5774 * C291 + C5830 * C898 + C5775 * C1072) *
               C9008) *
              C9006 * C2762 -
          ((C5830 * C2799 + C5775 * C2917 + C5829 * C898 + C5774 * C1072) *
               C9008 +
           (C5830 * C2765 + C5775 * C2829 + C5829 * C851 + C5774 * C944) *
               C122) *
              C9006 * C2763 +
          ((C5829 * C2765 + C5774 * C2829 + C5830 * C8177 + C5775 * C8248) *
               C122 +
           (C5829 * C2799 + C5774 * C2917 + C5830 * C8212 + C5775 * C8345) *
               C9008) *
              C9006 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3035 * C78 + C9006 * C82) * C5829 +
           (C3035 * C170 + C9006 * C331) * C5774 + C6471 * C5830 +
           C6592 * C5775) *
              C9008 * C2762 -
          (C8376 * C5775 + C8283 * C5830 + C6592 * C5774 + C6471 * C5829) *
              C9008 * C2763 +
          (C8283 * C5829 + C8376 * C5774 +
           (C3035 * C8177 + C9006 * C8178) * C5830 +
           (C3035 * C8248 + C9006 * C8372) * C5775) *
              C9008 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C122 * C78 + C9008 * C123) * C5829 +
           (C122 * C170 + C9008 * C361) * C5774 + C6391 * C5830 +
           C6630 * C5775) *
              C9006 * C2762 -
          (C8406 * C5775 + C8220 * C5830 + C6630 * C5774 + C6391 * C5829) *
              C9006 * C2763 +
          (C8220 * C5829 + C8406 * C5774 +
           (C122 * C8177 + C9008 * C8212) * C5830 +
           (C122 * C8248 + C9008 * C8402) * C5775) *
              C9006 * C2764) *
         C8932 * C8898) /
        (p * q * std::sqrt(p + q));
    d2eezz[26] += (2 * std::pow(Pi, 2.5) *
                   ((C5987 * C78 + C5990 + C5990 + C5774 * C402 + C5988 * C851 +
                     C5991 + C5991 + C5775 * C1193) *
                        C9008 * C9006 * C2762 -
                    (C5988 * C2765 + C6665 + C6665 + C5775 * C3001 +
                     C5987 * C851 + C6666 + C6666 + C5774 * C1193) *
                        C9008 * C9006 * C2763 +
                    (C5987 * C2765 + C8434 + C8434 + C5774 * C3001 +
                     C5988 * C8177 + C8435 + C8435 + C5775 * C8432) *
                        C9008 * C9006 * C2764) *
                   C8932 * C8898) /
                  (p * q * std::sqrt(p + q));
    
}
