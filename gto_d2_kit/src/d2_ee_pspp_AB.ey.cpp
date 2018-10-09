/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pspp_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1011_12(const double ae,
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    const double C8314 = xA - xB;
    const double C8313 = ae + be;
    const double C8317 = ae * be;
    const double C8331 = yA - yB;
    const double C8334 = zA - zB;
    const double C8365 = p + q;
    const double C8364 = p * q;
    const double C8370 = xP - xQ;
    const double C8369 = bs[2];
    const double C8375 = bs[3];
    const double C8386 = bs[4];
    const double C8405 = yP - yQ;
    const double C8420 = zP - zQ;
    const double C78 = bs[0];
    const double C8815 = ce + de;
    const double C8814 = ce * de;
    const double C8813 = xC - xD;
    const double C8828 = yC - yD;
    const double C8837 = zC - zD;
    const double C8899 = std::pow(C8314, 2);
    const double C8900 = 2 * C8313;
    const double C8318 = C8317 * C8314;
    const double C8347 = C8317 * C8331;
    const double C8902 = std::pow(C8331, 2);
    const double C8359 = C8317 * C8334;
    const double C8901 = std::pow(C8334, 2);
    const double C8366 = 2 * C8364;
    const double C8378 = C8370 * ae;
    const double C8377 = C8370 * be;
    const double C8374 = std::pow(C8370, 2);
    const double C8408 = C8405 * be;
    const double C8407 = C8370 * C8405;
    const double C8437 = C8405 * ae;
    const double C8436 = C8405 * C8370;
    const double C8450 = std::pow(C8405, 2);
    const double C8423 = C8420 * be;
    const double C8422 = C8370 * C8420;
    const double C8459 = C8405 * C8420;
    const double C8469 = C8420 * ae;
    const double C8468 = C8420 * C8370;
    const double C8482 = C8420 * C8405;
    const double C8491 = std::pow(C8420, 2);
    const double C8825 = 2 * C8815;
    const double C8905 = std::pow(C8815, 2);
    const double C8816 = std::pow(C8813, 2);
    const double C8904 = C8813 * de;
    const double C8903 = C8813 * ce;
    const double C8850 = std::pow(C8828, 2);
    const double C8909 = C8828 * de;
    const double C8907 = C8828 * ce;
    const double C8867 = std::pow(C8837, 2);
    const double C8910 = C8837 * de;
    const double C8908 = C8837 * ce;
    const double C8911 = C8899 * C8317;
    const double C8912 = std::pow(C8900, -1);
    const double C8914 = C8902 * C8317;
    const double C8913 = C8901 * C8317;
    const double C8368 = C8366 / C8365;
    const double C90 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C8366 / C8365, 2) -
          (bs[1] * C8366) / C8365) *
         C8317) /
        std::pow(C8313, 2);
    const double C79 = -(C8370 * bs[1] * C8366) / C8365;
    const double C447 = -(C8405 * bs[1] * C8366) / C8365;
    const double C830 = -(C8420 * bs[1] * C8366) / C8365;
    const double C8381 = C8375 * C8378;
    const double C8392 = C8386 * C8378;
    const double C83 = (-(bs[1] * C8378 * C8366) / C8365) / C8313;
    const double C8380 = C8375 * C8377;
    const double C8389 = C8386 * C8377;
    const double C82 = (-(bs[1] * C8377 * C8366) / C8365) / C8313;
    const double C8388 = C8374 * C8386;
    const double C8410 = C8375 * C8408;
    const double C8415 = C8386 * C8408;
    const double C121 = (-(bs[1] * C8408 * C8366) / C8365) / C8313;
    const double C8409 = C8407 * ae;
    const double C8439 = C8375 * C8437;
    const double C8444 = C8386 * C8437;
    const double C206 = (-(bs[1] * C8437 * C8366) / C8365) / C8313;
    const double C8438 = C8436 * ae;
    const double C8452 = C8450 * C8386;
    const double C8425 = C8375 * C8423;
    const double C8430 = C8386 * C8423;
    const double C164 = (-(bs[1] * C8423 * C8366) / C8365) / C8313;
    const double C8424 = C8422 * ae;
    const double C8460 = C8459 * ae;
    const double C8471 = C8375 * C8469;
    const double C8476 = C8386 * C8469;
    const double C319 = (-(bs[1] * C8469 * C8366) / C8365) / C8313;
    const double C8470 = C8468 * ae;
    const double C8483 = C8482 * ae;
    const double C8493 = C8491 * C8386;
    const double C8906 = std::pow(C8825, -1);
    const double C8916 = 2 * C8905;
    const double C8817 = C8816 * C8814;
    const double C8851 = C8850 * C8814;
    const double C8868 = C8867 * C8814;
    const double C8922 = C8911 / C8313;
    const double C8924 = C8914 / C8313;
    const double C8923 = C8913 / C8313;
    const double C8371 = std::pow(C8368, 2);
    const double C8376 = -C8368;
    const double C8387 = std::pow(C8368, 4);
    const double C8411 = C8409 * be;
    const double C8440 = C8438 * be;
    const double C8426 = C8424 * be;
    const double C8461 = C8460 * be;
    const double C8472 = C8470 * be;
    const double C8484 = C8483 * be;
    const double C8818 = C8817 / C8815;
    const double C8852 = C8851 / C8815;
    const double C8869 = C8868 / C8815;
    const double C8925 = -C8922;
    const double C8927 = -C8924;
    const double C8926 = -C8923;
    const double C8373 = C8369 * C8371;
    const double C91 =
        (ae * C8371 * C8369 * C8370 * be + be * C8371 * C8369 * C8370 * ae +
         C8370 *
             (C8369 * C8371 +
              std::pow(C8370, 2) * bs[3] * std::pow(-C8368, 3)) *
             C8317) /
        std::pow(C8313, 2);
    const double C125 =
        (C8371 * C8369 * C8370 * (yP - yQ) * ae * be) / std::pow(C8313, 2);
    const double C168 =
        (C8371 * C8369 * C8370 * (zP - zQ) * ae * be) / std::pow(C8313, 2);
    const double C210 =
        (C8371 * C8369 * C8405 * C8370 * ae * be) / std::pow(C8313, 2);
    const double C241 =
        ((std::pow(C8405, 2) * C8369 * C8371 - (bs[1] * C8366) / C8365) *
         C8317) /
        std::pow(C8313, 2);
    const double C285 =
        (C8371 * C8369 * C8405 * C8420 * ae * be) / std::pow(C8313, 2);
    const double C323 =
        (C8371 * C8369 * C8420 * C8370 * ae * be) / std::pow(C8313, 2);
    const double C353 =
        (C8371 * C8369 * C8420 * C8405 * ae * be) / std::pow(C8313, 2);
    const double C388 =
        ((std::pow(C8420, 2) * C8369 * C8371 - (bs[1] * C8366) / C8365) *
         C8317) /
        std::pow(C8313, 2);
    const double C84 = (C8370 * C8371 * C8369 * C8377) / C8313 -
                       (be * bs[1] * C8366) / (C8365 * C8313);
    const double C85 = (C8370 * C8371 * C8369 * C8378) / C8313 -
                       (ae * bs[1] * C8366) / (C8365 * C8313);
    const double C122 = (C8370 * C8371 * C8369 * C8408) / C8313;
    const double C165 = (C8370 * C8371 * C8369 * C8423) / C8313;
    const double C207 = (C8370 * C8371 * C8369 * C8437) / C8313;
    const double C320 = (C8370 * C8371 * C8369 * C8469) / C8313;
    const double C451 = (C8405 * C8371 * C8369 * C8377) / C8313;
    const double C452 = (C8405 * C8371 * C8369 * C8378) / C8313;
    const double C492 = (C8405 * C8371 * C8369 * C8408) / C8313 -
                        (be * bs[1] * C8366) / (C8365 * C8313);
    const double C536 = (C8405 * C8371 * C8369 * C8423) / C8313;
    const double C580 = (C8405 * C8371 * C8369 * C8437) / C8313 -
                        (ae * bs[1] * C8366) / (C8365 * C8313);
    const double C703 = (C8405 * C8371 * C8369 * C8469) / C8313;
    const double C834 = (C8420 * C8371 * C8369 * C8377) / C8313;
    const double C835 = (C8420 * C8371 * C8369 * C8378) / C8313;
    const double C875 = (C8420 * C8371 * C8369 * C8408) / C8313;
    const double C919 = (C8420 * C8371 * C8369 * C8423) / C8313 -
                        (be * bs[1] * C8366) / (C8365 * C8313);
    const double C963 = (C8420 * C8371 * C8369 * C8437) / C8313;
    const double C1086 = (C8420 * C8371 * C8369 * C8469) / C8313 -
                         (ae * bs[1] * C8366) / (C8365 * C8313);
    const double C8379 = std::pow(C8376, 3);
    const double C8396 = C8387 * C8392;
    const double C8395 = C8387 * C8389;
    const double C8394 = C8388 * C8387;
    const double C8417 = C8387 * C8415;
    const double C8432 = C8387 * C8430;
    const double C8446 = C8387 * C8444;
    const double C8453 = C8452 * C8387;
    const double C8478 = C8387 * C8476;
    const double C8494 = C8493 * C8387;
    const double C8414 = C8386 * C8411;
    const double C8443 = C8386 * C8440;
    const double C8429 = C8386 * C8426;
    const double C8463 = C8386 * C8461;
    const double C8475 = C8386 * C8472;
    const double C8486 = C8386 * C8484;
    const double C8819 = -C8818;
    const double C8853 = -C8852;
    const double C8870 = -C8869;
    const double C8928 = std::exp(C8925);
    const double C8930 = std::exp(C8927);
    const double C8929 = std::exp(C8926);
    const double C80 = C8373 * C8374 - (bs[1] * C8366) / C8365;
    const double C446 = C8405 * C8370 * C8373;
    const double C829 = C8420 * C8370 * C8373;
    const double C1516 = C8373 * C8450 - (bs[1] * C8366) / C8365;
    const double C1790 = C8420 * C8405 * C8373;
    const double C2737 = C8373 * C8491 - (bs[1] * C8366) / C8365;
    const double C8383 = C8379 * C8381;
    const double C8382 = C8379 * C8380;
    const double C8385 = C8375 * C8379;
    const double C8412 = C8379 * C8410;
    const double C8427 = C8379 * C8425;
    const double C8441 = C8379 * C8439;
    const double C8473 = C8379 * C8471;
    const double C126 = (ae * C8371 * C8369 * C8405 * be +
                         C8370 * C8379 * C8375 * C8370 * C8405 * ae * be) /
                        std::pow(C8313, 2);
    const double C169 = (ae * C8371 * C8369 * C8420 * be +
                         C8370 * C8379 * C8375 * C8370 * C8420 * ae * be) /
                        std::pow(C8313, 2);
    const double C211 = (be * C8371 * C8369 * C8405 * ae +
                         C8370 * C8379 * C8375 * C8405 * C8370 * ae * be) /
                        std::pow(C8313, 2);
    const double C242 =
        (C8370 * (C8373 + std::pow(C8405, 2) * C8375 * C8379) * C8317) /
        std::pow(C8313, 2);
    const double C286 =
        (C8370 * C8379 * C8375 * C8405 * C8420 * ae * be) / std::pow(C8313, 2);
    const double C287 =
        (C8379 * C8375 * C8461 + C8387 * C8386 * C8461 * C8374) /
        std::pow(C8313, 2);
    const double C324 = (be * C8371 * C8369 * C8420 * ae +
                         C8370 * C8379 * C8375 * C8420 * C8370 * ae * be) /
                        std::pow(C8313, 2);
    const double C354 =
        (C8370 * C8379 * C8375 * C8420 * C8405 * ae * be) / std::pow(C8313, 2);
    const double C355 =
        (C8379 * C8375 * C8484 + C8387 * C8386 * C8484 * C8374) /
        std::pow(C8313, 2);
    const double C389 =
        (C8370 * (C8373 + std::pow(C8420, 2) * C8375 * C8379) * C8317) /
        std::pow(C8313, 2);
    const double C456 =
        (C8405 * (C8373 + C8374 * C8375 * C8379) * C8317) / std::pow(C8313, 2);
    const double C495 =
        (be * C8371 * C8369 * C8378 + C8405 * C8379 * C8375 * C8411) /
        std::pow(C8313, 2);
    const double C539 = (C8405 * C8379 * C8375 * C8426) / std::pow(C8313, 2);
    const double C583 =
        (ae * C8371 * C8369 * C8377 + C8405 * C8379 * C8375 * C8440) /
        std::pow(C8313, 2);
    const double C621 =
        (ae * C8371 * C8369 * C8408 + be * C8371 * C8369 * C8437 +
         C8405 * (C8373 + C8450 * C8375 * C8379) * C8317) /
        std::pow(C8313, 2);
    const double C664 =
        (ae * C8371 * C8369 * C8423 + C8405 * C8379 * C8375 * C8461) /
        std::pow(C8313, 2);
    const double C706 = (C8405 * C8379 * C8375 * C8472) / std::pow(C8313, 2);
    const double C743 =
        (be * C8371 * C8369 * C8469 + C8405 * C8379 * C8375 * C8484) /
        std::pow(C8313, 2);
    const double C783 =
        (C8405 * (C8373 + C8491 * C8375 * C8379) * C8317) / std::pow(C8313, 2);
    const double C839 =
        (C8420 * (C8373 + C8374 * C8375 * C8379) * C8317) / std::pow(C8313, 2);
    const double C878 = (C8420 * C8379 * C8375 * C8411) / std::pow(C8313, 2);
    const double C922 =
        (be * C8371 * C8369 * C8378 + C8420 * C8379 * C8375 * C8426) /
        std::pow(C8313, 2);
    const double C966 = (C8420 * C8379 * C8375 * C8440) / std::pow(C8313, 2);
    const double C1004 =
        (C8420 * (C8373 + C8450 * C8375 * C8379) * C8317) / std::pow(C8313, 2);
    const double C1047 =
        (be * C8371 * C8369 * C8437 + C8420 * C8379 * C8375 * C8461) /
        std::pow(C8313, 2);
    const double C1089 =
        (ae * C8371 * C8369 * C8377 + C8420 * C8379 * C8375 * C8472) /
        std::pow(C8313, 2);
    const double C1126 =
        (ae * C8371 * C8369 * C8408 + C8420 * C8379 * C8375 * C8484) /
        std::pow(C8313, 2);
    const double C1166 =
        (ae * C8371 * C8369 * C8423 + be * C8371 * C8369 * C8469 +
         C8420 * (C8373 + C8491 * C8375 * C8379) * C8317) /
        std::pow(C8313, 2);
    const double C8399 = C8370 * C8396;
    const double C8635 = C8405 * C8396;
    const double C8398 = C8370 * C8395;
    const double C8640 = C8405 * C8395;
    const double C1797 =
        (ae * C8420 * C8405 * C8395 + be * C8420 * C8405 * C8396 +
         C8370 * C8420 * C8405 *
             (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) * C8317) /
        std::pow(C8313, 2);
    const double C8561 = C8370 * C8417;
    const double C8614 = C8405 * C8417;
    const double C8565 = C8370 * C8432;
    const double C8643 = C8405 * C8432;
    const double C8654 = C8420 * C8432;
    const double C8562 = C8370 * C8446;
    const double C8616 = C8405 * C8446;
    const double C8570 = C8370 * C8478;
    const double C8644 = C8405 * C8478;
    const double C8656 = C8420 * C8478;
    const double C8416 = C8387 * C8414;
    const double C8445 = C8387 * C8443;
    const double C8431 = C8387 * C8429;
    const double C8464 = C8387 * C8463;
    const double C8477 = C8387 * C8475;
    const double C8487 = C8387 * C8486;
    const double C8820 = std::exp(C8819);
    const double C8854 = std::exp(C8853);
    const double C8871 = std::exp(C8870);
    const double C3377 = C8928 * C451;
    const double C6368 = C8928 * C834;
    const double C8319 = C8318 * C8928;
    const double C74 =
        (-(0 * be) / C8313) / (2 * C8313) -
        ((C8928 - (C8314 * 2 * ae * be * C8314 * C8928) / C8313) * be) / C8313;
    const double C65 = -(C8928 * C8314 * be) / C8313;
    const double C66 = C8912 * C8928;
    const double C130 = C8930 * C122;
    const double C6296 = C8930 * C875;
    const double C8348 = C8347 * C8930;
    const double C120 = -(2 * C8317 * (yA - yB) * C8930) / C8313;
    const double C240 =
        -((C8930 - (C8331 * 2 * C8317 * C8331 * C8930) / C8313) * 2 * C8317) /
        C8313;
    const double C3034 =
        (-(0 * be) / C8313) / (2 * C8313) -
        ((C8930 - (C8331 * 2 * C8317 * C8331 * C8930) / C8313) * be) / C8313;
    const double C3035 =
        (-(2 * C8317 * C8331 * C8930) / C8313) / (2 * C8313) - (0 * be) / C8313;
    const double C3004 = -(C8930 * C8331 * be) / C8313;
    const double C3005 = C8912 * C8930;
    const double C173 = C8929 * C165;
    const double C3339 = C8929 * C536;
    const double C8360 = C8359 * C8929;
    const double C163 = -(2 * C8317 * (zA - zB) * C8929) / C8313;
    const double C387 =
        -((C8929 - (C8334 * 2 * C8317 * C8334 * C8929) / C8313) * 2 * C8317) /
        C8313;
    const double C5747 =
        (-(0 * be) / C8313) / (2 * C8313) -
        ((C8929 - (C8334 * 2 * C8317 * C8334 * C8929) / C8313) * be) / C8313;
    const double C5748 =
        (-(2 * C8317 * C8334 * C8929) / C8313) / (2 * C8313) - (0 * be) / C8313;
    const double C5693 = -(C8929 * C8334 * be) / C8313;
    const double C5694 = C8912 * C8929;
    const double C87 =
        (C8371 * C8369 * C8378 + C8370 * (C8370 * C8383 + C8373 * ae) +
         C8370 * C8373 * ae) /
        C8313;
    const double C450 = (C8405 * (C8370 * C8383 + C8373 * ae)) / C8313;
    const double C833 = (C8420 * (C8370 * C8383 + C8373 * ae)) / C8313;
    const double C1519 = (C8371 * C8369 * C8378 + C8383 * C8450) / C8313;
    const double C1793 = (C8420 * C8405 * C8383) / C8313;
    const double C2740 = (C8371 * C8369 * C8378 + C8383 * C8491) / C8313;
    const double C4207 =
        (2 * C8405 * C8383 + C8405 * (C8383 + C8396 * C8450)) / C8313;
    const double C4492 = (C8420 * (C8383 + C8396 * C8450)) / C8313;
    const double C8060 =
        (2 * C8420 * C8383 + C8420 * (C8383 + C8396 * C8491)) / C8313;
    const double C92 =
        ((C8373 + C8374 * C8375 * C8379) * C8317 +
         ae * (C8370 * C8382 + C8373 * be) + be * (C8370 * C8383 + C8373 * ae) +
         C8370 * (ae * C8382 + be * C8383 +
                  C8370 * (C8375 * C8379 + C8374 * bs[4] * std::pow(C8368, 4)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C86 =
        (C8371 * C8369 * C8377 + C8370 * (C8370 * C8382 + C8373 * be) +
         C8370 * C8373 * be) /
        C8313;
    const double C449 = (C8405 * (C8370 * C8382 + C8373 * be)) / C8313;
    const double C832 = (C8420 * (C8370 * C8382 + C8373 * be)) / C8313;
    const double C1518 = (C8371 * C8369 * C8377 + C8382 * C8450) / C8313;
    const double C1792 = (C8420 * C8405 * C8382) / C8313;
    const double C2739 = (C8371 * C8369 * C8377 + C8382 * C8491) / C8313;
    const double C4206 =
        (2 * C8405 * C8382 + C8405 * (C8382 + C8395 * C8450)) / C8313;
    const double C4491 = (C8420 * (C8382 + C8395 * C8450)) / C8313;
    const double C8059 =
        (2 * C8420 * C8382 + C8420 * (C8382 + C8395 * C8491)) / C8313;
    const double C8393 = C8385 * ae;
    const double C8391 = C8370 * C8385;
    const double C8390 = C8385 * be;
    const double C8397 = C8385 + C8394;
    const double C8454 = C8385 + C8453;
    const double C8495 = C8385 + C8494;
    const double C8615 = C8405 * C8385;
    const double C8655 = C8420 * C8385;
    const double C243 = ((C8373 + C8450 * C8375 * C8379) * C8317 +
                         (C8385 + C8450 * C8386 * C8387) * C8317 * C8374) /
                        std::pow(C8313, 2);
    const double C390 = ((C8373 + C8491 * C8375 * C8379) * C8317 +
                         (C8385 + C8491 * C8386 * C8387) * C8317 * C8374) /
                        std::pow(C8313, 2);
    const double C81 = 2 * C8370 * C8373 + C8370 * (C8373 + C8385 * C8374);
    const double C448 = C8405 * (C8373 + C8385 * C8374);
    const double C831 = C8420 * (C8373 + C8385 * C8374);
    const double C4205 = 2 * C8405 * C8373 + C8405 * (C8373 + C8385 * C8450);
    const double C4490 = C8420 * (C8373 + C8385 * C8450);
    const double C8058 = 2 * C8420 * C8373 + C8420 * (C8373 + C8385 * C8491);
    const double C127 = (C8379 * C8375 * C8411 + ae * C8370 * C8412 +
                         C8370 * (ae * C8412 + C8370 * C8387 * C8386 * C8411)) /
                        std::pow(C8313, 2);
    const double C123 = (C8371 * C8369 * C8408 + C8412 * C8374) / C8313;
    const double C124 =
        (2 * C8370 * C8412 + C8370 * (C8412 + C8417 * C8374)) / C8313;
    const double C493 = (C8405 * C8370 * C8412 + C8370 * C8373 * be) / C8313;
    const double C494 =
        (C8405 * (C8412 + C8417 * C8374) + (C8373 + C8385 * C8374) * be) /
        C8313;
    const double C876 = (C8420 * C8370 * C8412) / C8313;
    const double C877 = (C8420 * (C8412 + C8417 * C8374)) / C8313;
    const double C1550 =
        (C8371 * C8369 * C8408 + C8405 * (C8405 * C8412 + C8373 * be) +
         C8405 * C8373 * be) /
        C8313;
    const double C1832 = (C8420 * (C8405 * C8412 + C8373 * be)) / C8313;
    const double C2771 = (C8371 * C8369 * C8408 + C8412 * C8491) / C8313;
    const double C8095 =
        (2 * C8420 * C8412 + C8420 * (C8412 + C8417 * C8491)) / C8313;
    const double C170 = (C8379 * C8375 * C8426 + ae * C8370 * C8427 +
                         C8370 * (ae * C8427 + C8370 * C8387 * C8386 * C8426)) /
                        std::pow(C8313, 2);
    const double C166 = (C8371 * C8369 * C8423 + C8427 * C8374) / C8313;
    const double C167 =
        (2 * C8370 * C8427 + C8370 * (C8427 + C8432 * C8374)) / C8313;
    const double C537 = (C8405 * C8370 * C8427) / C8313;
    const double C538 = (C8405 * (C8427 + C8432 * C8374)) / C8313;
    const double C920 = (C8420 * C8370 * C8427 + C8370 * C8373 * be) / C8313;
    const double C921 =
        (C8420 * (C8427 + C8432 * C8374) + (C8373 + C8385 * C8374) * be) /
        C8313;
    const double C1580 = (C8371 * C8369 * C8423 + C8427 * C8450) / C8313;
    const double C1870 = (C8420 * C8405 * C8427 + C8405 * C8373 * be) / C8313;
    const double C2801 =
        (C8371 * C8369 * C8423 + C8420 * (C8420 * C8427 + C8373 * be) +
         C8420 * C8373 * be) /
        C8313;
    const double C4271 =
        (2 * C8405 * C8427 + C8405 * (C8427 + C8432 * C8450)) / C8313;
    const double C4572 =
        (C8420 * (C8427 + C8432 * C8450) + (C8373 + C8385 * C8450) * be) /
        C8313;
    const double C212 = (C8379 * C8375 * C8440 + be * C8370 * C8441 +
                         C8370 * (be * C8441 + C8370 * C8387 * C8386 * C8440)) /
                        std::pow(C8313, 2);
    const double C208 = (C8371 * C8369 * C8437 + C8441 * C8374) / C8313;
    const double C209 =
        (2 * C8370 * C8441 + C8370 * (C8441 + C8446 * C8374)) / C8313;
    const double C581 = (C8405 * C8370 * C8441 + C8370 * C8373 * ae) / C8313;
    const double C582 =
        (C8405 * (C8441 + C8446 * C8374) + (C8373 + C8385 * C8374) * ae) /
        C8313;
    const double C964 = (C8420 * C8370 * C8441) / C8313;
    const double C965 = (C8420 * (C8441 + C8446 * C8374)) / C8313;
    const double C1610 =
        (C8371 * C8369 * C8437 + C8405 * (C8405 * C8441 + C8373 * ae) +
         C8405 * C8373 * ae) /
        C8313;
    const double C1908 = (C8420 * (C8405 * C8441 + C8373 * ae)) / C8313;
    const double C2831 = (C8371 * C8369 * C8437 + C8441 * C8491) / C8313;
    const double C8155 =
        (2 * C8420 * C8441 + C8420 * (C8441 + C8446 * C8491)) / C8313;
    const double C325 = (C8379 * C8375 * C8472 + be * C8370 * C8473 +
                         C8370 * (be * C8473 + C8370 * C8387 * C8386 * C8472)) /
                        std::pow(C8313, 2);
    const double C321 = (C8371 * C8369 * C8469 + C8473 * C8374) / C8313;
    const double C322 =
        (2 * C8370 * C8473 + C8370 * (C8473 + C8478 * C8374)) / C8313;
    const double C704 = (C8405 * C8370 * C8473) / C8313;
    const double C705 = (C8405 * (C8473 + C8478 * C8374)) / C8313;
    const double C1087 = (C8420 * C8370 * C8473 + C8370 * C8373 * ae) / C8313;
    const double C1088 =
        (C8420 * (C8473 + C8478 * C8374) + (C8373 + C8385 * C8374) * ae) /
        C8313;
    const double C1696 = (C8371 * C8369 * C8469 + C8473 * C8450) / C8313;
    const double C2018 = (C8420 * C8405 * C8473 + C8405 * C8373 * ae) / C8313;
    const double C2917 =
        (C8371 * C8369 * C8469 + C8420 * (C8420 * C8473 + C8373 * ae) +
         C8420 * C8373 * ae) /
        C8313;
    const double C4391 =
        (2 * C8405 * C8473 + C8405 * (C8473 + C8478 * C8450)) / C8313;
    const double C4724 =
        (C8420 * (C8473 + C8478 * C8450) + (C8373 + C8385 * C8450) * ae) /
        C8313;
    const double C132 = C8930 * C126;
    const double C175 = C8929 * C169;
    const double C249 = C8930 * C242;
    const double C290 = C8929 * C286;
    const double C293 = C8929 * C287;
    const double C358 = C8930 * C354;
    const double C361 = C8930 * C355;
    const double C396 = C8929 * C389;
    const double C3258 = C8928 * C456;
    const double C3341 = C8929 * C539;
    const double C3379 = C8928 * C583;
    const double C3453 = C8929 * C664;
    const double C3489 = C8928 * C706;
    const double C3564 = C8929 * C783;
    const double C6251 = C8928 * C839;
    const double C6298 = C8930 * C878;
    const double C6370 = C8928 * C966;
    const double C6413 = C8930 * C1004;
    const double C6487 = C8928 * C1089;
    const double C6525 = C8930 * C1126;
    const double C5445 = (C8405 * C8383 + C8635 * C8491) / C8313;
    const double C5444 = (C8405 * C8382 + C8640 * C8491) / C8313;
    const double C2772 = (C8370 * C8412 + C8561 * C8491) / C8313;
    const double C1581 = (C8370 * C8427 + C8565 * C8450) / C8313;
    const double C1947 =
        (ae * C8420 * C8561 + be * C8420 * C8562 +
         C8405 * C8420 * C8370 *
             (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) * C8317) /
        std::pow(C8313, 2);
    const double C2832 = (C8370 * C8441 + C8562 * C8491) / C8313;
    const double C2093 =
        (ae * C8405 * C8565 + be * C8405 * C8570 +
         C8420 * C8405 * C8370 *
             (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) * C8317) /
        std::pow(C8313, 2);
    const double C1697 = (C8370 * C8473 + C8570 * C8450) / C8313;
    const double C128 =
        (2 * (ae * C8412 + C8370 * C8416) + ae * (C8412 + C8417 * C8374) +
         C8370 * (C8416 + ae * C8370 * C8417 +
                  C8370 * (ae * C8417 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C496 = (be * (C8370 * C8383 + C8373 * ae) +
                         C8405 * (ae * C8412 + C8370 * C8416)) /
                        std::pow(C8313, 2);
    const double C879 =
        (C8420 * (ae * C8412 + C8370 * C8416)) / std::pow(C8313, 2);
    const double C880 =
        (C8420 *
         (C8416 + ae * C8370 * C8417 +
          C8370 * (ae * C8417 + C8370 * std::pow(C8376, 5) * bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C1552 = (C8379 * C8375 * C8411 + be * C8405 * C8383 +
                          C8405 * (be * C8383 + C8405 * C8416)) /
                         std::pow(C8313, 2);
    const double C1834 =
        (C8420 * (be * C8383 + C8405 * C8416)) / std::pow(C8313, 2);
    const double C2773 =
        (C8379 * C8375 * C8411 + C8416 * C8491) / std::pow(C8313, 2);
    const double C2774 =
        (ae * C8412 + C8370 * C8416 +
         (ae * C8417 + C8370 * std::pow(C8376, 5) * bs[5] * C8411) * C8491) /
        std::pow(C8313, 2);
    const double C4244 =
        (2 * (be * C8383 + C8405 * C8416) + be * (C8383 + C8396 * C8450) +
         C8405 * (C8416 + be * C8405 * C8396 +
                  C8405 * (be * C8396 +
                           C8405 * std::pow(C8376, 5) * bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C4537 =
        (C8420 *
         (C8416 + be * C8405 * C8396 +
          C8405 * (be * C8396 + C8405 * std::pow(C8376, 5) * bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C5474 =
        (be * C8383 + C8405 * C8416 +
         (be * C8396 + C8405 * std::pow(C8376, 5) * bs[5] * C8411) * C8491) /
        std::pow(C8313, 2);
    const double C8096 =
        (2 * C8420 * C8416 +
         C8420 * (C8416 + std::pow(C8376, 5) * bs[5] * C8411 * C8491)) /
        std::pow(C8313, 2);
    const double C213 =
        (2 * (be * C8441 + C8370 * C8445) + be * (C8441 + C8446 * C8374) +
         C8370 * (C8445 + be * C8370 * C8446 +
                  C8370 * (be * C8446 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8440))) /
        std::pow(C8313, 2);
    const double C584 = (ae * (C8370 * C8382 + C8373 * be) +
                         C8405 * (be * C8441 + C8370 * C8445)) /
                        std::pow(C8313, 2);
    const double C967 =
        (C8420 * (be * C8441 + C8370 * C8445)) / std::pow(C8313, 2);
    const double C968 =
        (C8420 *
         (C8445 + be * C8370 * C8446 +
          C8370 * (be * C8446 + C8370 * std::pow(C8376, 5) * bs[5] * C8440))) /
        std::pow(C8313, 2);
    const double C1612 = (C8379 * C8375 * C8440 + ae * C8405 * C8382 +
                          C8405 * (ae * C8382 + C8405 * C8445)) /
                         std::pow(C8313, 2);
    const double C1910 =
        (ae * C8420 * C8382 + C8405 * C8420 * C8445) / std::pow(C8313, 2);
    const double C2833 =
        (C8379 * C8375 * C8440 + C8445 * C8491) / std::pow(C8313, 2);
    const double C2834 =
        (be * C8441 + C8370 * C8445 +
         (be * C8446 + C8370 * std::pow(C8376, 5) * bs[5] * C8440) * C8491) /
        std::pow(C8313, 2);
    const double C4304 =
        (2 * (ae * C8382 + C8405 * C8445) + ae * (C8382 + C8395 * C8450) +
         C8405 * (C8445 + ae * C8405 * C8395 +
                  C8405 * (ae * C8395 +
                           C8405 * std::pow(C8376, 5) * bs[5] * C8440))) /
        std::pow(C8313, 2);
    const double C4613 =
        (C8420 * C8445 + ae * C8420 * C8405 * C8395 +
         C8405 * (ae * C8420 * C8395 +
                  C8405 * C8420 * std::pow(C8376, 5) * bs[5] * C8440)) /
        std::pow(C8313, 2);
    const double C5530 =
        (ae * (C8382 + C8395 * C8491) +
         C8405 * (C8445 + std::pow(C8376, 5) * bs[5] * C8440 * C8491)) /
        std::pow(C8313, 2);
    const double C8156 =
        (2 * C8420 * C8445 +
         C8420 * (C8445 + std::pow(C8376, 5) * bs[5] * C8440 * C8491)) /
        std::pow(C8313, 2);
    const double C171 =
        (2 * (ae * C8427 + C8370 * C8431) + ae * (C8427 + C8432 * C8374) +
         C8370 * (C8431 + ae * C8370 * C8432 +
                  C8370 * (ae * C8432 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8426))) /
        std::pow(C8313, 2);
    const double C540 =
        (C8405 * (ae * C8427 + C8370 * C8431)) / std::pow(C8313, 2);
    const double C541 =
        (C8405 *
         (C8431 + ae * C8370 * C8432 +
          C8370 * (ae * C8432 + C8370 * std::pow(C8376, 5) * bs[5] * C8426))) /
        std::pow(C8313, 2);
    const double C923 = (be * (C8370 * C8383 + C8373 * ae) +
                         C8420 * (ae * C8427 + C8370 * C8431)) /
                        std::pow(C8313, 2);
    const double C1582 =
        (C8379 * C8375 * C8426 + C8431 * C8450) / std::pow(C8313, 2);
    const double C1583 =
        (ae * C8427 + C8370 * C8431 +
         (ae * C8432 + C8370 * std::pow(C8376, 5) * bs[5] * C8426) * C8450) /
        std::pow(C8313, 2);
    const double C1872 =
        (be * C8405 * C8383 + C8420 * C8405 * C8431) / std::pow(C8313, 2);
    const double C2803 = (C8379 * C8375 * C8426 + be * C8420 * C8383 +
                          C8420 * (be * C8383 + C8420 * C8431)) /
                         std::pow(C8313, 2);
    const double C4272 =
        (2 * C8405 * C8431 +
         C8405 * (C8431 + std::pow(C8376, 5) * bs[5] * C8426 * C8450)) /
        std::pow(C8313, 2);
    const double C4573 =
        (be * (C8383 + C8396 * C8450) +
         C8420 * (C8431 + std::pow(C8376, 5) * bs[5] * C8426 * C8450)) /
        std::pow(C8313, 2);
    const double C5502 =
        (C8405 * C8431 + be * C8420 * C8635 +
         C8420 * (be * C8635 +
                  C8420 * C8405 * std::pow(C8376, 5) * bs[5] * C8426)) /
        std::pow(C8313, 2);
    const double C8128 =
        (2 * (be * C8383 + C8420 * C8431) + be * (C8383 + C8396 * C8491) +
         C8420 * (C8431 + be * C8420 * C8396 +
                  C8420 * (be * C8396 +
                           C8420 * std::pow(C8376, 5) * bs[5] * C8426))) /
        std::pow(C8313, 2);
    const double C288 =
        (2 * C8370 * C8464 +
         C8370 * (C8464 + std::pow(C8376, 5) * bs[5] * C8461 * C8374)) /
        std::pow(C8313, 2);
    const double C665 =
        (ae * C8370 * C8427 + C8405 * C8370 * C8464) / std::pow(C8313, 2);
    const double C666 =
        (ae * (C8427 + C8432 * C8374) +
         C8405 * (C8464 + std::pow(C8376, 5) * bs[5] * C8461 * C8374)) /
        std::pow(C8313, 2);
    const double C1048 =
        (be * C8370 * C8441 + C8420 * C8370 * C8464) / std::pow(C8313, 2);
    const double C1049 =
        (be * (C8441 + C8446 * C8374) +
         C8420 * (C8464 + std::pow(C8376, 5) * bs[5] * C8461 * C8374)) /
        std::pow(C8313, 2);
    const double C1668 = (C8379 * C8375 * C8461 + ae * C8405 * C8427 +
                          C8405 * (ae * C8427 + C8405 * C8464)) /
                         std::pow(C8313, 2);
    const double C1669 =
        (C8370 * C8464 + ae * C8405 * C8565 +
         C8405 * (ae * C8565 +
                  C8405 * C8370 * std::pow(C8376, 5) * bs[5] * C8461)) /
        std::pow(C8313, 2);
    const double C1982 = (ae * (C8420 * C8427 + C8373 * be) +
                          C8405 * (be * C8441 + C8420 * C8464)) /
                         std::pow(C8313, 2);
    const double C2889 = (C8379 * C8375 * C8461 + be * C8420 * C8441 +
                          C8420 * (be * C8441 + C8420 * C8464)) /
                         std::pow(C8313, 2);
    const double C2890 =
        (C8370 * C8464 + be * C8420 * C8562 +
         C8420 * (be * C8562 +
                  C8420 * C8370 * std::pow(C8376, 5) * bs[5] * C8461)) /
        std::pow(C8313, 2);
    const double C4362 =
        (2 * (ae * C8427 + C8405 * C8464) + ae * (C8427 + C8432 * C8450) +
         C8405 * (C8464 + ae * C8405 * C8432 +
                  C8405 * (ae * C8432 +
                           C8405 * std::pow(C8376, 5) * bs[5] * C8461))) /
        std::pow(C8313, 2);
    const double C8222 =
        (2 * (be * C8441 + C8420 * C8464) + be * (C8441 + C8446 * C8491) +
         C8420 * (C8464 + be * C8420 * C8446 +
                  C8420 * (be * C8446 +
                           C8420 * std::pow(C8376, 5) * bs[5] * C8461))) /
        std::pow(C8313, 2);
    const double C326 =
        (2 * (be * C8473 + C8370 * C8477) + be * (C8473 + C8478 * C8374) +
         C8370 * (C8477 + be * C8370 * C8478 +
                  C8370 * (be * C8478 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8472))) /
        std::pow(C8313, 2);
    const double C707 =
        (C8405 * (be * C8473 + C8370 * C8477)) / std::pow(C8313, 2);
    const double C708 =
        (C8405 *
         (C8477 + be * C8370 * C8478 +
          C8370 * (be * C8478 + C8370 * std::pow(C8376, 5) * bs[5] * C8472))) /
        std::pow(C8313, 2);
    const double C1090 = (ae * (C8370 * C8382 + C8373 * be) +
                          C8420 * (be * C8473 + C8370 * C8477)) /
                         std::pow(C8313, 2);
    const double C1698 =
        (C8379 * C8375 * C8472 + C8477 * C8450) / std::pow(C8313, 2);
    const double C1699 =
        (be * C8473 + C8370 * C8477 +
         (be * C8478 + C8370 * std::pow(C8376, 5) * bs[5] * C8472) * C8450) /
        std::pow(C8313, 2);
    const double C2020 =
        (ae * C8405 * C8382 + C8420 * C8405 * C8477) / std::pow(C8313, 2);
    const double C2919 = (C8379 * C8375 * C8472 + ae * C8420 * C8382 +
                          C8420 * (ae * C8382 + C8420 * C8477)) /
                         std::pow(C8313, 2);
    const double C4392 =
        (2 * C8405 * C8477 +
         C8405 * (C8477 + std::pow(C8376, 5) * bs[5] * C8472 * C8450)) /
        std::pow(C8313, 2);
    const double C4725 =
        (ae * (C8382 + C8395 * C8450) +
         C8420 * (C8477 + std::pow(C8376, 5) * bs[5] * C8472 * C8450)) /
        std::pow(C8313, 2);
    const double C5612 =
        (C8405 * C8477 + ae * C8420 * C8640 +
         C8420 * (ae * C8640 +
                  C8420 * C8405 * std::pow(C8376, 5) * bs[5] * C8472)) /
        std::pow(C8313, 2);
    const double C8250 =
        (2 * (ae * C8382 + C8420 * C8477) + ae * (C8382 + C8395 * C8491) +
         C8420 * (C8477 + ae * C8420 * C8395 +
                  C8420 * (ae * C8395 +
                           C8420 * std::pow(C8376, 5) * bs[5] * C8472))) /
        std::pow(C8313, 2);
    const double C356 =
        (2 * C8370 * C8487 +
         C8370 * (C8487 + std::pow(C8376, 5) * bs[5] * C8484 * C8374)) /
        std::pow(C8313, 2);
    const double C744 =
        (be * C8370 * C8473 + C8405 * C8370 * C8487) / std::pow(C8313, 2);
    const double C745 =
        (be * (C8473 + C8478 * C8374) +
         C8405 * (C8487 + std::pow(C8376, 5) * bs[5] * C8484 * C8374)) /
        std::pow(C8313, 2);
    const double C1127 =
        (ae * C8370 * C8412 + C8420 * C8370 * C8487) / std::pow(C8313, 2);
    const double C1128 =
        (ae * (C8412 + C8417 * C8374) +
         C8420 * (C8487 + std::pow(C8376, 5) * bs[5] * C8484 * C8374)) /
        std::pow(C8313, 2);
    const double C1726 = (C8379 * C8375 * C8484 + be * C8405 * C8473 +
                          C8405 * (be * C8473 + C8405 * C8487)) /
                         std::pow(C8313, 2);
    const double C1727 =
        (C8370 * C8487 + be * C8405 * C8570 +
         C8405 * (be * C8570 +
                  C8405 * C8370 * std::pow(C8376, 5) * bs[5] * C8484)) /
        std::pow(C8313, 2);
    const double C2056 = (ae * (C8405 * C8412 + C8373 * be) +
                          C8420 * (be * C8473 + C8405 * C8487)) /
                         std::pow(C8313, 2);
    const double C2947 = (C8379 * C8375 * C8484 + ae * C8420 * C8412 +
                          C8420 * (ae * C8412 + C8420 * C8487)) /
                         std::pow(C8313, 2);
    const double C2948 =
        (C8370 * C8487 + ae * C8420 * C8561 +
         C8420 * (ae * C8561 +
                  C8420 * C8370 * std::pow(C8376, 5) * bs[5] * C8484)) /
        std::pow(C8313, 2);
    const double C4421 =
        (2 * (be * C8473 + C8405 * C8487) + be * (C8473 + C8478 * C8450) +
         C8405 * (C8487 + be * C8405 * C8478 +
                  C8405 * (be * C8478 +
                           C8405 * std::pow(C8376, 5) * bs[5] * C8484))) /
        std::pow(C8313, 2);
    const double C8279 =
        (2 * (ae * C8412 + C8420 * C8487) + ae * (C8412 + C8417 * C8491) +
         C8420 * (C8487 + ae * C8420 * C8417 +
                  C8420 * (ae * C8417 +
                           C8420 * std::pow(C8376, 5) * bs[5] * C8484))) /
        std::pow(C8313, 2);
    const double C8917 = C8906 * C8820;
    const double C8915 = C8820 * C8903;
    const double C444 = -(C8820 * C8904) / C8815;
    const double C8919 = C8906 * C8854;
    const double C8918 = C8854 * C8907;
    const double C1210 = -(C8854 * C8909) / C8815;
    const double C8921 = C8906 * C8871;
    const double C8920 = C8871 * C8908;
    const double C2128 = -(C8871 * C8910) / C8815;
    const double C75 =
        -(((-4 * C8319) / C8313 -
           (C8314 * (C8928 - (C8314 * 2 * C8319) / C8313) * 2 * C8317) /
               C8313) *
          be) /
        C8313;
    const double C76 = (-(2 * C8319) / C8313) / (2 * C8313) - (0 * be) / C8313;
    const double C77 =
        (-((C8928 - (C8314 * 2 * C8319) / C8313) * 2 * C8317) / C8313) /
        (2 * C8313);
    const double C3006 = -(2 * C8319) / C8313;
    const double C3007 =
        -((C8928 - (C8314 * 2 * C8319) / C8313) * 2 * C8317) / C8313;
    const double C3114 =
        -(((-4 * C8348) / C8313 -
           (C8331 * (C8930 - (C8331 * 2 * C8348) / C8313) * 2 * C8317) /
               C8313) *
          be) /
        C8313;
    const double C3115 =
        (-((C8930 - (C8331 * 2 * C8348) / C8313) * 2 * C8317) / C8313) /
        (2 * C8313);
    const double C134 = C120 * C80;
    const double C133 = C120 * C85;
    const double C131 = C120 * C79;
    const double C248 = C120 * C207;
    const double C246 = C120 * C122;
    const double C359 = C120 * C320;
    const double C499 = C120 * C446;
    const double C882 = C120 * C829;
    const double C6299 = C120 * C835;
    const double C6297 = C120 * C830;
    const double C6412 = C120 * C963;
    const double C6410 = C120 * C875;
    const double C6526 = C120 * C1086;
    const double C7169 = C120 * C1790;
    const double C8098 = C120 * C2737;
    const double C251 = C240 * C80;
    const double C247 = C240 * C79;
    const double C625 = C240 * C446;
    const double C1008 = C240 * C829;
    const double C6411 = C240 * C830;
    const double C7276 = C240 * C1790;
    const double C8190 = C240 * C2737;
    const double C5905 =
        -(((-4 * C8360) / C8313 -
           (C8334 * (C8929 - (C8334 * 2 * C8360) / C8313) * 2 * C8317) /
               C8313) *
          be) /
        C8313;
    const double C5906 =
        (-((C8929 - (C8334 * 2 * C8360) / C8313) * 2 * C8317) / C8313) /
        (2 * C8313);
    const double C177 = C163 * C80;
    const double C176 = C163 * C85;
    const double C174 = C163 * C79;
    const double C291 = C163 * C207;
    const double C395 = C163 * C320;
    const double C393 = C163 * C165;
    const double C543 = C163 * C446;
    const double C926 = C163 * C829;
    const double C3342 = C163 * C452;
    const double C3340 = C163 * C447;
    const double C3454 = C163 * C580;
    const double C3563 = C163 * C703;
    const double C3561 = C163 * C536;
    const double C4274 = C163 * C1516;
    const double C4575 = C163 * C1790;
    const double C398 = C387 * C80;
    const double C394 = C387 * C79;
    const double C787 = C387 * C446;
    const double C1170 = C387 * C829;
    const double C3562 = C387 * C447;
    const double C4451 = C387 * C1516;
    const double C4800 = C387 * C1790;
    const double C136 = C120 * C87;
    const double C179 = C163 * C87;
    const double C501 = C120 * C450;
    const double C545 = C163 * C450;
    const double C884 = C120 * C833;
    const double C928 = C163 * C833;
    const double C4276 = C163 * C1519;
    const double C4577 = C163 * C1793;
    const double C7171 = C120 * C1793;
    const double C8100 = C120 * C2740;
    const double C3382 = C8928 * C449;
    const double C6373 = C8928 * C832;
    const double C4307 = C8928 * C1518;
    const double C4616 = C8928 * C1792;
    const double C8159 = C8928 * C2739;
    const double C8402 = C8399 + C8393;
    const double C8618 = C8616 + C8393;
    const double C8658 = C8656 + C8393;
    const double C1983 =
        (ae * (C8420 * C8565 + C8391 * be) +
         C8405 * (be * C8562 +
                  C8420 * C8370 * std::pow(C8376, 5) * bs[5] * C8461)) /
        std::pow(C8313, 2);
    const double C2057 =
        (ae * (C8405 * C8561 + C8391 * be) +
         C8420 * (be * C8570 +
                  C8405 * C8370 * std::pow(C8376, 5) * bs[5] * C8484)) /
        std::pow(C8313, 2);
    const double C1551 = (C8370 * C8412 + C8405 * (C8405 * C8561 + C8391 * be) +
                          C8405 * C8391 * be) /
                         C8313;
    const double C1611 = (C8370 * C8441 + C8405 * (C8405 * C8562 + C8391 * ae) +
                          C8405 * C8391 * ae) /
                         C8313;
    const double C1833 = (C8420 * (C8405 * C8561 + C8391 * be)) / C8313;
    const double C1871 = (C8420 * C8405 * C8565 + C8405 * C8391 * be) / C8313;
    const double C1909 = (C8420 * (C8405 * C8562 + C8391 * ae)) / C8313;
    const double C2019 = (C8420 * C8405 * C8570 + C8405 * C8391 * ae) / C8313;
    const double C2802 = (C8370 * C8427 + C8420 * (C8420 * C8565 + C8391 * be) +
                          C8420 * C8391 * be) /
                         C8313;
    const double C2918 = (C8370 * C8473 + C8420 * (C8420 * C8570 + C8391 * ae) +
                          C8420 * C8391 * ae) /
                         C8313;
    const double C1517 = C8370 * C8373 + C8391 * C8450;
    const double C1791 = C8420 * C8405 * C8391;
    const double C2738 = C8370 * C8373 + C8391 * C8491;
    const double C8401 = C8398 + C8390;
    const double C8617 = C8614 + C8390;
    const double C8657 = C8654 + C8390;
    const double C5584 =
        (ae * (C8427 + C8420 * (C8420 * C8432 + C8390) + C8420 * C8385 * be) +
         C8405 * (C8464 + be * C8420 * C8446 +
                  C8420 * (be * C8446 +
                           C8420 * std::pow(C8376, 5) * bs[5] * C8461))) /
        std::pow(C8313, 2);
    const double C8400 = C8397 * C8317;
    const double C8455 = C8454 * C8317;
    const double C8496 = C8495 * C8317;
    const double C4687 =
        (be * C8441 + C8420 * C8464 +
         ae * (C8420 * C8405 * C8432 + C8615 * be) +
         C8405 * (ae * (C8420 * C8432 + C8390) +
                  C8405 * (be * C8446 +
                           C8420 * std::pow(C8376, 5) * bs[5] * C8461))) /
        std::pow(C8313, 2);
    const double C5501 = (C8405 * C8427 + C8420 * (C8420 * C8643 + C8615 * be) +
                          C8420 * C8615 * be) /
                         C8313;
    const double C5611 = (C8405 * C8473 + C8420 * (C8420 * C8644 + C8615 * ae) +
                          C8420 * C8615 * ae) /
                         C8313;
    const double C5443 = C8405 * C8373 + C8615 * C8491;
    const double C253 = C8930 * C243;
    const double C400 = C8929 * C390;
    const double C137 = C8930 * C127;
    const double C135 = C8930 * C123;
    const double C250 = C120 * C123;
    const double C500 = C8930 * C493;
    const double C624 = C120 * C493;
    const double C883 = C8930 * C876;
    const double C1007 = C120 * C876;
    const double C7170 = C8930 * C1832;
    const double C7275 = C120 * C1832;
    const double C8099 = C8930 * C2771;
    const double C8189 = C120 * C2771;
    const double C180 = C8929 * C170;
    const double C178 = C8929 * C166;
    const double C397 = C163 * C166;
    const double C544 = C8929 * C537;
    const double C786 = C163 * C537;
    const double C927 = C8929 * C920;
    const double C1169 = C163 * C920;
    const double C4275 = C8929 * C1580;
    const double C4450 = C163 * C1580;
    const double C4576 = C8929 * C1870;
    const double C4799 = C163 * C1870;
    const double C252 = C120 * C208;
    const double C292 = C163 * C208;
    const double C626 = C120 * C581;
    const double C668 = C163 * C581;
    const double C1009 = C120 * C964;
    const double C1051 = C163 * C964;
    const double C4364 = C163 * C1610;
    const double C4689 = C163 * C1908;
    const double C7277 = C120 * C1908;
    const double C8191 = C120 * C2831;
    const double C360 = C120 * C321;
    const double C399 = C163 * C321;
    const double C747 = C120 * C704;
    const double C788 = C163 * C704;
    const double C1130 = C120 * C1087;
    const double C1171 = C163 * C1087;
    const double C4452 = C163 * C1696;
    const double C4801 = C163 * C2018;
    const double C7385 = C120 * C2018;
    const double C8281 = C120 * C2917;
    const double C502 = C8930 * C496;
    const double C885 = C8930 * C879;
    const double C7172 = C8930 * C1834;
    const double C8101 = C8930 * C2773;
    const double C3384 = C8928 * C584;
    const double C6375 = C8928 * C967;
    const double C4309 = C8928 * C1612;
    const double C4618 = C8928 * C1910;
    const double C8161 = C8928 * C2833;
    const double C546 = C8929 * C540;
    const double C929 = C8929 * C923;
    const double C4277 = C8929 * C1582;
    const double C4578 = C8929 * C1872;
    const double C669 = C8929 * C665;
    const double C1052 = C8929 * C1048;
    const double C4365 = C8929 * C1668;
    const double C4690 = C8929 * C1982;
    const double C3492 = C8928 * C707;
    const double C6490 = C8928 * C1090;
    const double C4395 = C8928 * C1698;
    const double C4728 = C8928 * C2020;
    const double C8253 = C8928 * C2919;
    const double C748 = C8930 * C744;
    const double C1131 = C8930 * C1127;
    const double C7386 = C8930 * C2056;
    const double C8282 = C8930 * C2947;
    const double C73 = C8917 / C8825;
    const double C71 = C8820 / C8825 - (C8915 * C8904) / C8905;
    const double C72 = C8915 / C8916 - (C8917 * C8904) / C8815;
    const double C1212 = C8915 / C8815;
    const double C1514 = C8919 / C8825;
    const double C442 = C8918 / C8815;
    const double C1512 = C8854 / C8825 - (C8918 * C8909) / C8905;
    const double C1513 = C8918 / C8916 - (C8919 * C8909) / C8815;
    const double C2736 = C8921 / C8825;
    const double C827 = C8920 / C8815;
    const double C2734 = C8871 / C8825 - (C8920 * C8910) / C8905;
    const double C2735 = C8920 / C8916 - (C8921 * C8910) / C8815;
    const double C3261 = C3006 * C450;
    const double C3259 = C3006 * C449;
    const double C3257 = C3006 * C452;
    const double C3255 = C3006 * C451;
    const double C3383 = C3006 * C581;
    const double C3381 = C3006 * C446;
    const double C3380 = C3006 * C580;
    const double C3378 = C3006 * C447;
    const double C3491 = C3006 * C704;
    const double C3490 = C3006 * C703;
    const double C4212 = C3006 * C1519;
    const double C4210 = C3006 * C1518;
    const double C4308 = C3006 * C1610;
    const double C4306 = C3006 * C1516;
    const double C4394 = C3006 * C1696;
    const double C4497 = C3006 * C1793;
    const double C4495 = C3006 * C1792;
    const double C4617 = C3006 * C1908;
    const double C4615 = C3006 * C1790;
    const double C4727 = C3006 * C2018;
    const double C6254 = C3006 * C833;
    const double C6252 = C3006 * C832;
    const double C6250 = C3006 * C835;
    const double C6248 = C3006 * C834;
    const double C6374 = C3006 * C964;
    const double C6372 = C3006 * C829;
    const double C6371 = C3006 * C963;
    const double C6369 = C3006 * C830;
    const double C6489 = C3006 * C1087;
    const double C6488 = C3006 * C1086;
    const double C8065 = C3006 * C2740;
    const double C8063 = C3006 * C2739;
    const double C8160 = C3006 * C2831;
    const double C8158 = C3006 * C2737;
    const double C8252 = C3006 * C2917;
    const double C3260 = C3007 * C446;
    const double C3256 = C3007 * C447;
    const double C4211 = C3007 * C1516;
    const double C4496 = C3007 * C1790;
    const double C6253 = C3007 * C829;
    const double C6249 = C3007 * C830;
    const double C8064 = C3007 * C2737;
    const double C254 = C246 - C247;
    const double C6415 = C6410 - C6411;
    const double C401 = C393 - C394;
    const double C3565 = C3561 - C3562;
    const double C497 =
        (be * (C8383 + C8370 * C8402 + C8391 * ae) +
         C8405 * (C8416 + ae * C8370 * C8417 +
                  C8370 * (ae * C8417 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C924 =
        (be * (C8383 + C8370 * C8402 + C8391 * ae) +
         C8420 * (C8431 + ae * C8370 * C8432 +
                  C8370 * (ae * C8432 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8426))) /
        std::pow(C8313, 2);
    const double C1553 =
        (ae * C8412 + C8370 * C8416 + be * C8405 * C8402 +
         C8405 *
             (be * C8402 + C8405 * (ae * C8417 + C8370 * std::pow(C8376, 5) *
                                                     bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C1835 =
        (C8420 *
         (be * C8402 +
          C8405 * (ae * C8417 + C8370 * std::pow(C8376, 5) * bs[5] * C8411))) /
        std::pow(C8313, 2);
    const double C1873 =
        (be * C8405 * C8402 +
         C8420 * C8405 *
             (ae * C8432 + C8370 * std::pow(C8376, 5) * bs[5] * C8426)) /
        std::pow(C8313, 2);
    const double C2804 =
        (ae * C8427 + C8370 * C8431 + be * C8420 * C8402 +
         C8420 *
             (be * C8402 + C8420 * (ae * C8432 + C8370 * std::pow(C8376, 5) *
                                                     bs[5] * C8426))) /
        std::pow(C8313, 2);
    const double C89 = (2 * (C8370 * C8383 + C8373 * ae) +
                        C8370 * (C8383 + C8370 * C8402 + C8391 * ae) +
                        (C8373 + C8385 * C8374) * ae) /
                       C8313;
    const double C454 = (C8405 * (C8383 + C8370 * C8402 + C8391 * ae)) / C8313;
    const double C837 = (C8420 * (C8383 + C8370 * C8402 + C8391 * ae)) / C8313;
    const double C1521 = (C8370 * C8383 + C8373 * ae + C8402 * C8450) / C8313;
    const double C1795 = (C8420 * C8405 * C8402) / C8313;
    const double C2742 = (C8370 * C8383 + C8373 * ae + C8402 * C8491) / C8313;
    const double C4303 = (2 * (C8405 * C8441 + C8373 * ae) +
                          C8405 * (C8441 + C8405 * C8618 + C8615 * ae) +
                          (C8373 + C8385 * C8450) * ae) /
                         C8313;
    const double C4612 = (C8420 * (C8441 + C8405 * C8618 + C8615 * ae)) / C8313;
    const double C5529 = (C8405 * C8441 + C8373 * ae + C8618 * C8491) / C8313;
    const double C8249 = (2 * (C8420 * C8473 + C8373 * ae) +
                          C8420 * (C8473 + C8420 * C8658 + C8655 * ae) +
                          (C8373 + C8385 * C8491) * ae) /
                         C8313;
    const double C585 =
        (ae * (C8382 + C8370 * C8401 + C8391 * be) +
         C8405 * (C8445 + be * C8370 * C8446 +
                  C8370 * (be * C8446 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8440))) /
        std::pow(C8313, 2);
    const double C1091 =
        (ae * (C8382 + C8370 * C8401 + C8391 * be) +
         C8420 * (C8477 + be * C8370 * C8478 +
                  C8370 * (be * C8478 +
                           C8370 * std::pow(C8376, 5) * bs[5] * C8472))) /
        std::pow(C8313, 2);
    const double C1613 =
        (be * C8441 + C8370 * C8445 + ae * C8405 * C8401 +
         C8405 *
             (ae * C8401 + C8405 * (be * C8446 + C8370 * std::pow(C8376, 5) *
                                                     bs[5] * C8440))) /
        std::pow(C8313, 2);
    const double C1911 =
        (ae * C8420 * C8401 +
         C8405 * C8420 *
             (be * C8446 + C8370 * std::pow(C8376, 5) * bs[5] * C8440)) /
        std::pow(C8313, 2);
    const double C2021 =
        (ae * C8405 * C8401 +
         C8420 * C8405 *
             (be * C8478 + C8370 * std::pow(C8376, 5) * bs[5] * C8472)) /
        std::pow(C8313, 2);
    const double C2920 =
        (be * C8473 + C8370 * C8477 + ae * C8420 * C8401 +
         C8420 *
             (ae * C8401 + C8420 * (be * C8478 + C8370 * std::pow(C8376, 5) *
                                                     bs[5] * C8472))) /
        std::pow(C8313, 2);
    const double C88 = (2 * (C8370 * C8382 + C8373 * be) +
                        C8370 * (C8382 + C8370 * C8401 + C8391 * be) +
                        (C8373 + C8385 * C8374) * be) /
                       C8313;
    const double C453 = (C8405 * (C8382 + C8370 * C8401 + C8391 * be)) / C8313;
    const double C836 = (C8420 * (C8382 + C8370 * C8401 + C8391 * be)) / C8313;
    const double C1520 = (C8370 * C8382 + C8373 * be + C8401 * C8450) / C8313;
    const double C1794 = (C8420 * C8405 * C8401) / C8313;
    const double C2741 = (C8370 * C8382 + C8373 * be + C8401 * C8491) / C8313;
    const double C4762 =
        (ae * (C8412 + C8405 * C8617 + C8615 * be) +
         C8420 * (C8487 + be * C8405 * C8478 +
                  C8405 * (be * C8478 +
                           C8405 * std::pow(C8376, 5) * bs[5] * C8484))) /
        std::pow(C8313, 2);
    const double C5639 =
        (be * C8473 + C8405 * C8487 + ae * C8420 * C8617 +
         C8420 *
             (ae * C8617 + C8420 * (be * C8478 + C8405 * std::pow(C8376, 5) *
                                                     bs[5] * C8484))) /
        std::pow(C8313, 2);
    const double C4243 = (2 * (C8405 * C8412 + C8373 * be) +
                          C8405 * (C8412 + C8405 * C8617 + C8615 * be) +
                          (C8373 + C8385 * C8450) * be) /
                         C8313;
    const double C4536 = (C8420 * (C8412 + C8405 * C8617 + C8615 * be)) / C8313;
    const double C5473 = (C8405 * C8412 + C8373 * be + C8617 * C8491) / C8313;
    const double C8127 = (2 * (C8420 * C8427 + C8373 * be) +
                          C8420 * (C8427 + C8420 * C8657 + C8655 * be) +
                          (C8373 + C8385 * C8491) * be) /
                         C8313;
    const double C93 =
        (2 * (ae * C8382 + be * C8383 + C8370 * C8400) +
         ae * (C8382 + C8370 * C8401 + C8391 * be) +
         be * (C8383 + C8370 * C8402 + C8391 * ae) +
         C8370 * (C8400 + ae * C8401 + be * C8402 +
                  C8370 * (ae * C8395 + be * C8396 +
                           C8370 *
                               (C8386 * C8387 +
                                C8374 * bs[5] * std::pow(C8376, 5)) *
                               C8317))) /
        std::pow(C8313, 2);
    const double C455 =
        (ae * C8405 * C8382 + be * C8405 * C8383 + C8370 * C8405 * C8400) /
        std::pow(C8313, 2);
    const double C457 =
        (C8405 * C8400 + ae * C8405 * C8401 + be * C8405 * C8402 +
         C8370 * (ae * C8405 * C8395 + be * C8405 * C8396 +
                  C8370 * C8405 *
                      (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C838 =
        (ae * C8420 * C8382 + be * C8420 * C8383 + C8370 * C8420 * C8400) /
        std::pow(C8313, 2);
    const double C840 =
        (C8420 * C8400 + ae * C8420 * C8401 + be * C8420 * C8402 +
         C8370 * (ae * C8420 * C8395 + be * C8420 * C8396 +
                  C8370 * C8420 *
                      (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C1522 =
        ((C8373 + C8374 * C8375 * C8379) * C8317 + C8400 * C8450) /
        std::pow(C8313, 2);
    const double C1523 =
        (ae * (C8382 + C8395 * C8450) + be * (C8383 + C8396 * C8450) +
         C8370 * (C8400 + (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8450)) /
        std::pow(C8313, 2);
    const double C1796 = (C8420 * C8405 * C8400) / std::pow(C8313, 2);
    const double C2743 =
        ((C8373 + C8374 * C8375 * C8379) * C8317 + C8400 * C8491) /
        std::pow(C8313, 2);
    const double C2744 =
        (ae * (C8382 + C8395 * C8491) + be * (C8383 + C8396 * C8491) +
         C8370 * (C8400 + (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8491)) /
        std::pow(C8313, 2);
    const double C4208 =
        (2 * C8405 * C8400 +
         C8405 * (C8400 + (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8450)) /
        std::pow(C8313, 2);
    const double C4493 =
        (C8420 * (C8400 + (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8450)) /
        std::pow(C8313, 2);
    const double C5446 =
        (C8405 * C8400 +
         C8405 * (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) * C8317 *
             C8491) /
        std::pow(C8313, 2);
    const double C8061 =
        (2 * C8420 * C8400 +
         C8420 * (C8400 + (C8386 * C8387 + C8374 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8491)) /
        std::pow(C8313, 2);
    const double C244 =
        (2 * C8370 * C8455 +
         C8370 * (C8455 + (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8374)) /
        std::pow(C8313, 2);
    const double C620 =
        (ae * C8370 * C8412 + be * C8370 * C8441 + C8405 * C8370 * C8455) /
        std::pow(C8313, 2);
    const double C622 =
        (ae * (C8412 + C8417 * C8374) + be * (C8441 + C8446 * C8374) +
         C8405 * (C8455 + (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8374)) /
        std::pow(C8313, 2);
    const double C1003 = (C8420 * C8370 * C8455) / std::pow(C8313, 2);
    const double C1005 =
        (C8420 * (C8455 + (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8374)) /
        std::pow(C8313, 2);
    const double C1640 =
        ((C8373 + C8450 * C8375 * C8379) * C8317 +
         ae * (C8405 * C8412 + C8373 * be) + be * (C8405 * C8441 + C8373 * ae) +
         C8405 * (ae * C8412 + be * C8441 + C8405 * C8455)) /
        std::pow(C8313, 2);
    const double C1641 =
        (C8370 * C8455 + ae * (C8405 * C8561 + C8391 * be) +
         be * (C8405 * C8562 + C8391 * ae) +
         C8405 * (ae * C8561 + be * C8562 +
                  C8405 * C8370 *
                      (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C1946 =
        (ae * C8420 * C8412 + be * C8420 * C8441 + C8405 * C8420 * C8455) /
        std::pow(C8313, 2);
    const double C2861 =
        ((C8373 + C8450 * C8375 * C8379) * C8317 + C8455 * C8491) /
        std::pow(C8313, 2);
    const double C2862 =
        (C8370 * C8455 +
         C8370 * (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) * C8317 *
             C8491) /
        std::pow(C8313, 2);
    const double C4335 =
        (2 * (ae * C8412 + be * C8441 + C8405 * C8455) +
         ae * (C8412 + C8405 * C8617 + C8615 * be) +
         be * (C8441 + C8405 * C8618 + C8615 * ae) +
         C8405 * (C8455 + ae * C8617 + be * C8618 +
                  C8405 * (ae * C8417 + be * C8446 +
                           C8405 *
                               (C8386 * C8387 +
                                C8450 * bs[5] * std::pow(C8376, 5)) *
                               C8317))) /
        std::pow(C8313, 2);
    const double C4652 =
        (C8420 * C8455 + ae * C8420 * C8617 + be * C8420 * C8618 +
         C8405 * (ae * C8420 * C8417 + be * C8420 * C8446 +
                  C8405 * C8420 *
                      (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C5557 =
        (ae * (C8412 + C8417 * C8491) + be * (C8441 + C8446 * C8491) +
         C8405 * (C8455 + (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8491)) /
        std::pow(C8313, 2);
    const double C8187 =
        (2 * C8420 * C8455 +
         C8420 * (C8455 + (C8386 * C8387 + C8450 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8491)) /
        std::pow(C8313, 2);
    const double C391 =
        (2 * C8370 * C8496 +
         C8370 * (C8496 + (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8374)) /
        std::pow(C8313, 2);
    const double C782 = (C8405 * C8370 * C8496) / std::pow(C8313, 2);
    const double C784 =
        (C8405 * (C8496 + (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8374)) /
        std::pow(C8313, 2);
    const double C1165 =
        (ae * C8370 * C8427 + be * C8370 * C8473 + C8420 * C8370 * C8496) /
        std::pow(C8313, 2);
    const double C1167 =
        (ae * (C8427 + C8432 * C8374) + be * (C8473 + C8478 * C8374) +
         C8420 * (C8496 + (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8374)) /
        std::pow(C8313, 2);
    const double C1754 =
        ((C8373 + C8491 * C8375 * C8379) * C8317 + C8496 * C8450) /
        std::pow(C8313, 2);
    const double C1755 =
        (C8370 * C8496 +
         C8370 * (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) * C8317 *
             C8450) /
        std::pow(C8313, 2);
    const double C2092 =
        (ae * C8405 * C8427 + be * C8405 * C8473 + C8420 * C8405 * C8496) /
        std::pow(C8313, 2);
    const double C2975 =
        ((C8373 + C8491 * C8375 * C8379) * C8317 +
         ae * (C8420 * C8427 + C8373 * be) + be * (C8420 * C8473 + C8373 * ae) +
         C8420 * (ae * C8427 + be * C8473 + C8420 * C8496)) /
        std::pow(C8313, 2);
    const double C2976 =
        (C8370 * C8496 + ae * (C8420 * C8565 + C8391 * be) +
         be * (C8420 * C8570 + C8391 * ae) +
         C8420 * (ae * C8565 + be * C8570 +
                  C8420 * C8370 *
                      (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C4448 =
        (2 * C8405 * C8496 +
         C8405 * (C8496 + (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8450)) /
        std::pow(C8313, 2);
    const double C4797 =
        (ae * (C8427 + C8432 * C8450) + be * (C8473 + C8478 * C8450) +
         C8420 * (C8496 + (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                              C8317 * C8450)) /
        std::pow(C8313, 2);
    const double C5666 =
        (C8405 * C8496 + ae * (C8420 * C8643 + C8615 * be) +
         be * (C8420 * C8644 + C8615 * ae) +
         C8420 * (ae * C8643 + be * C8644 +
                  C8420 * C8405 *
                      (C8386 * C8387 + C8491 * bs[5] * std::pow(C8376, 5)) *
                      C8317)) /
        std::pow(C8313, 2);
    const double C8308 =
        (2 * (ae * C8427 + be * C8473 + C8420 * C8496) +
         ae * (C8427 + C8420 * C8657 + C8655 * be) +
         be * (C8473 + C8420 * C8658 + C8655 * ae) +
         C8420 * (C8496 + ae * C8657 + be * C8658 +
                  C8420 * (ae * C8432 + be * C8478 +
                           C8420 *
                               (C8386 * C8387 +
                                C8491 * bs[5] * std::pow(C8376, 5)) *
                               C8317))) /
        std::pow(C8313, 2);
    const double C255 = C250 - C251;
    const double C628 = C624 - C625;
    const double C1011 = C1007 - C1008;
    const double C7279 = C7275 - C7276;
    const double C8193 = C8189 - C8190;
    const double C402 = C397 - C398;
    const double C790 = C786 - C787;
    const double C1173 = C1169 - C1170;
    const double C4454 = C4450 - C4451;
    const double C4803 = C4799 - C4800;
    const double C3264 = C3259 - C3260;
    const double C3263 = C3255 - C3256;
    const double C4214 = C4210 - C4211;
    const double C4499 = C4495 - C4496;
    const double C6257 = C6252 - C6253;
    const double C6256 = C6248 - C6249;
    const double C8067 = C8063 - C8064;
    const double C256 = C254 - C248;
    const double C6416 = C6415 - C6412;
    const double C403 = C401 - C395;
    const double C3566 = C3565 - C3563;
    const double C3262 = C8928 * C455;
    const double C6255 = C8928 * C838;
    const double C4213 = C8928 * C1522;
    const double C4498 = C8928 * C1796;
    const double C8066 = C8928 * C2743;
    const double C627 = C8930 * C620;
    const double C1010 = C8930 * C1003;
    const double C7278 = C8930 * C1946;
    const double C8192 = C8930 * C2861;
    const double C789 = C8929 * C782;
    const double C1172 = C8929 * C1165;
    const double C4453 = C8929 * C1754;
    const double C4802 = C8929 * C2092;
    const double C257 = C255 - C252;
    const double C629 = C628 - C626;
    const double C1012 = C1011 - C1009;
    const double C7280 = C7279 - C7277;
    const double C8194 = C8193 - C8191;
    const double C404 = C402 - C399;
    const double C791 = C790 - C788;
    const double C1174 = C1173 - C1171;
    const double C4455 = C4454 - C4452;
    const double C4804 = C4803 - C4801;
    const double C3266 = C3264 - C3261;
    const double C3265 = C3263 - C3257;
    const double C4215 = C4214 - C4212;
    const double C4500 = C4499 - C4497;
    const double C6259 = C6257 - C6254;
    const double C6258 = C6256 - C6250;
    const double C8068 = C8067 - C8065;
    const double C258 = C256 + C249;
    const double C6417 = C6416 + C6413;
    const double C405 = C403 + C396;
    const double C3567 = C3566 + C3564;
    const double C259 = C257 + C253;
    const double C630 = C629 + C627;
    const double C1013 = C1012 + C1010;
    const double C7281 = C7280 + C7278;
    const double C8195 = C8194 + C8192;
    const double C406 = C404 + C400;
    const double C792 = C791 + C789;
    const double C1175 = C1174 + C1172;
    const double C4456 = C4455 + C4453;
    const double C4805 = C4804 + C4802;
    const double C3268 = C3266 + C3262;
    const double C3267 = C3265 + C3258;
    const double C4216 = C4215 + C4213;
    const double C4501 = C4500 + C4498;
    const double C6261 = C6259 + C6255;
    const double C6260 = C6258 + C6251;
    const double C8069 = C8068 + C8066;
    const double C6418 = C6417 * C8928;
    const double C407 = C405 * C8930;
    const double C6414 = C1013 * C8928;
    const double C7282 = C7281 * C8928;
    const double C8196 = C8195 * C8928;
    const double C408 = C406 * C8930;
    const double C793 = C792 * C8930;
    const double C1176 = C1175 * C8930;
    const double C3270 = C3268 * C8929;
    const double C3269 = C3267 * C8929;
    const double C4217 = C4216 * C8929;
    const double C4502 = C4501 * C8929;
    
    d2eexx[0] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                    C77 * C79 - C76 * C85 + C66 * C91) *
                       C8929 * C8930 * C8871 * C8854 * C71 -
                   (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                    C75 * C79 - C74 * C85 + C65 * C91) *
                       C8929 * C8930 * C8871 * C8854 * C72 +
                   (C74 * C86 - C75 * C80 - C74 * C87 + C65 * C92 + C76 * C88 -
                    C77 * C81 - C76 * C89 + C66 * C93) *
                       C8929 * C8930 * C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] += (2 * std::pow(Pi, 2.5) *
                  (((C8930 * C121 - C120 * C78) * C74 +
                    (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                    (C132 - C133) * C66) *
                       C8929 * C8871 * C8854 * C71 +
                   ((C131 - C130) * C74 + (C133 - C132) * C65 +
                    (C134 - C135) * C76 + (C136 - C137) * C66) *
                       C8929 * C8871 * C8854 * C72 +
                   ((C135 - C134) * C74 + (C137 - C136) * C65 +
                    (C8930 * C124 - C120 * C81) * C76 +
                    (C8930 * C128 - C120 * C89) * C66) *
                       C8929 * C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C8929 * C164 - C163 * C78) * C74 +
                    (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                    (C175 - C176) * C66) *
                       C8930 * C8871 * C8854 * C71 +
                   ((C174 - C173) * C74 + (C176 - C175) * C65 +
                    (C177 - C178) * C76 + (C179 - C180) * C66) *
                       C8930 * C8871 * C8854 * C72 +
                   ((C178 - C177) * C74 + (C180 - C179) * C65 +
                    (C8929 * C167 - C163 * C81) * C76 +
                    (C8929 * C171 - C163 * C89) * C66) *
                       C8930 * C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
              C8929 * C8871 * C8854 * C71 +
          ((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
           (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C8930) *
              C8929 * C8871 * C8854 * C72 +
          ((C65 * C86 - C74 * C80 + C66 * C88 - C76 * C81) * C120 +
           (C65 * C212 - C74 * C208 + C66 * C213 - C76 * C209) * C8930) *
              C8929 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
           C258 * C66) *
              C8929 * C8871 * C8854 * C71 -
          (C259 * C66 + C258 * C65) * C8929 * C8871 * C8854 * C72 +
          (C259 * C65 +
           (C120 * C124 - C240 * C81 - C120 * C209 + C8930 * C244) * C66) *
              C8929 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C120 +
                     (C8929 * C285 - C163 * C206) * C8930) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                       C8871 * C8854 * C71 +
                   (((C174 - C173) * C120 + (C291 - C290) * C8930) * C65 +
                    ((C177 - C178) * C120 + (C292 - C293) * C8930) * C66) *
                       C8871 * C8854 * C72 +
                   (((C178 - C177) * C120 + (C293 - C292) * C8930) * C65 +
                    ((C8929 * C167 - C163 * C81) * C120 +
                     (C8929 * C288 - C163 * C209) * C8930) *
                        C66) *
                       C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
              C8930 * C8871 * C8854 * C71 +
          ((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
           (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C8929) *
              C8930 * C8871 * C8854 * C72 +
          ((C65 * C86 - C74 * C80 + C66 * C88 - C76 * C81) * C163 +
           (C65 * C325 - C74 * C321 + C66 * C326 - C76 * C322) * C8929) *
              C8930 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C163 +
                     (C8930 * C353 - C120 * C319) * C8929) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                       C8871 * C8854 * C71 +
                   (((C131 - C130) * C163 + (C359 - C358) * C8929) * C65 +
                    ((C134 - C135) * C163 + (C360 - C361) * C8929) * C66) *
                       C8871 * C8854 * C72 +
                   (((C135 - C134) * C163 + (C361 - C360) * C8929) * C65 +
                    ((C8930 * C124 - C120 * C81) * C163 +
                     (C8930 * C356 - C120 * C322) * C8929) *
                        C66) *
                       C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (2 * std::pow(Pi, 2.5) *
                  (((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) *
                        C8930 * C65 +
                    C407 * C66) *
                       C8871 * C8854 * C71 -
                   (C408 * C66 + C407 * C65) * C8871 * C8854 * C72 +
                   (C408 * C65 +
                    (C163 * C167 - C387 * C81 - C163 * C322 + C8929 * C391) *
                        C8930 * C66) *
                       C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C8929 * C8930 * C8871 * C442 -
                    (C76 * C449 - C77 * C446 - C76 * C450 + C66 * C455 +
                     C74 * C451 - C75 * C447 - C74 * C452 + C65 * C456) *
                        C8929 * C8930 * C8871 * C8919) *
                       C444 +
                   ((C74 * C449 - C75 * C446 - C74 * C450 + C65 * C455 +
                     C76 * C453 - C77 * C448 - C76 * C454 + C66 * C457) *
                        C8929 * C8930 * C8871 * C8919 -
                    (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                     C75 * C79 - C74 * C85 + C65 * C91) *
                        C8929 * C8930 * C8871 * C442) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C74 +
                     (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C8929 * C8871 * C442 +
                    ((C120 * C447 - C8930 * C492) * C74 +
                     (C120 * C452 - C8930 * C495) * C65 + (C499 - C500) * C76 +
                     (C501 - C502) * C66) *
                        C8929 * C8871 * C8919) *
                       C444 +
                   (((C131 - C130) * C74 + (C133 - C132) * C65 +
                     (C134 - C135) * C76 + (C136 - C137) * C66) *
                        C8929 * C8871 * C442 +
                    ((C500 - C499) * C74 + (C502 - C501) * C65 +
                     (C8930 * C494 - C120 * C448) * C76 +
                     (C8930 * C497 - C120 * C454) * C66) *
                        C8929 * C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C74 +
                     (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C8930 * C8871 * C442 +
                    ((C163 * C447 - C8929 * C536) * C74 +
                     (C163 * C452 - C8929 * C539) * C65 + (C543 - C544) * C76 +
                     (C545 - C546) * C66) *
                        C8930 * C8871 * C8919) *
                       C444 +
                   (((C174 - C173) * C74 + (C176 - C175) * C65 +
                     (C177 - C178) * C76 + (C179 - C180) * C66) *
                        C8930 * C8871 * C442 +
                    ((C544 - C543) * C74 + (C546 - C545) * C65 +
                     (C8929 * C538 - C163 * C448) * C76 +
                     (C8929 * C541 - C163 * C454) * C66) *
                        C8930 * C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
               C8929 * C8871 * C442 +
           ((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C120 +
            (C74 * C580 - C65 * C583 + C76 * C581 - C66 * C584) * C8930) *
               C8929 * C8871 * C8919) *
              C444 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
            (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C8930) *
               C8929 * C8871 * C442 +
           ((C65 * C449 - C74 * C446 + C66 * C453 - C76 * C448) * C120 +
            (C65 * C584 - C74 * C581 + C66 * C585 - C76 * C582) * C8930) *
               C8929 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
            C258 * C66) *
               C8929 * C8871 * C442 -
           (C630 * C66 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C65) *
               C8929 * C8871 * C8919) *
              C444 +
          ((C630 * C65 +
            (C120 * C494 - C240 * C448 - C120 * C582 + C8930 * C622) * C66) *
               C8929 * C8871 * C8919 -
           (C259 * C66 + C258 * C65) * C8929 * C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (2 * std::pow(Pi, 2.5) *
                  (((((C8929 * C164 - C163 * C78) * C120 +
                      (C8929 * C285 - C163 * C206) * C8930) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                        C8871 * C442 +
                    (((C163 * C447 - C8929 * C536) * C120 +
                      (C163 * C580 - C8929 * C664) * C8930) *
                         C65 +
                     ((C543 - C544) * C120 + (C668 - C669) * C8930) * C66) *
                        C8871 * C8919) *
                       C444 +
                   ((((C174 - C173) * C120 + (C291 - C290) * C8930) * C65 +
                     ((C177 - C178) * C120 + (C292 - C293) * C8930) * C66) *
                        C8871 * C442 +
                    (((C544 - C543) * C120 + (C669 - C668) * C8930) * C65 +
                     ((C8929 * C538 - C163 * C448) * C120 +
                      (C8929 * C666 - C163 * C582) * C8930) *
                         C66) *
                        C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
               C8930 * C8871 * C442 +
           ((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C163 +
            (C74 * C703 - C65 * C706 + C76 * C704 - C66 * C707) * C8929) *
               C8930 * C8871 * C8919) *
              C444 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
            (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C8929) *
               C8930 * C8871 * C442 +
           ((C65 * C449 - C74 * C446 + C66 * C453 - C76 * C448) * C163 +
            (C65 * C707 - C74 * C704 + C66 * C708 - C76 * C705) * C8929) *
               C8930 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (2 * std::pow(Pi, 2.5) *
                  (((((C8930 * C121 - C120 * C78) * C163 +
                      (C8930 * C353 - C120 * C319) * C8929) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                        C8871 * C442 +
                    (((C120 * C447 - C8930 * C492) * C163 +
                      (C120 * C703 - C8930 * C743) * C8929) *
                         C65 +
                     ((C499 - C500) * C163 + (C747 - C748) * C8929) * C66) *
                        C8871 * C8919) *
                       C444 +
                   ((((C131 - C130) * C163 + (C359 - C358) * C8929) * C65 +
                     ((C134 - C135) * C163 + (C360 - C361) * C8929) * C66) *
                        C8871 * C442 +
                    (((C500 - C499) * C163 + (C748 - C747) * C8929) * C65 +
                     ((C8930 * C494 - C120 * C448) * C163 +
                      (C8930 * C745 - C120 * C705) * C8929) *
                         C66) *
                        C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (2 * std::pow(Pi, 2.5) *
                  ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) *
                         C8930 * C65 +
                     C407 * C66) *
                        C8871 * C442 -
                    (C793 * C66 +
                     (C163 * C536 - C387 * C447 - C163 * C703 + C8929 * C783) *
                         C8930 * C65) *
                        C8871 * C8919) *
                       C444 +
                   ((C793 * C65 +
                     (C163 * C538 - C387 * C448 - C163 * C705 + C8929 * C784) *
                         C8930 * C66) *
                        C8871 * C8919 -
                    (C408 * C66 + C407 * C65) * C8871 * C442) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C8929 * C8930 * C827 -
                    (C76 * C832 - C77 * C829 - C76 * C833 + C66 * C838 +
                     C74 * C834 - C75 * C830 - C74 * C835 + C65 * C839) *
                        C8929 * C8930 * C8921) *
                       C8854 * C444 +
                   ((C74 * C832 - C75 * C829 - C74 * C833 + C65 * C838 +
                     C76 * C836 - C77 * C831 - C76 * C837 + C66 * C840) *
                        C8929 * C8930 * C8921 -
                    (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                     C75 * C79 - C74 * C85 + C65 * C91) *
                        C8929 * C8930 * C827) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C74 +
                     (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C8929 * C827 +
                    ((C120 * C830 - C8930 * C875) * C74 +
                     (C120 * C835 - C8930 * C878) * C65 + (C882 - C883) * C76 +
                     (C884 - C885) * C66) *
                        C8929 * C8921) *
                       C8854 * C444 +
                   (((C131 - C130) * C74 + (C133 - C132) * C65 +
                     (C134 - C135) * C76 + (C136 - C137) * C66) *
                        C8929 * C827 +
                    ((C883 - C882) * C74 + (C885 - C884) * C65 +
                     (C8930 * C877 - C120 * C831) * C76 +
                     (C8930 * C880 - C120 * C837) * C66) *
                        C8929 * C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[2] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C74 +
                     (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C8930 * C827 +
                    ((C163 * C830 - C8929 * C919) * C74 +
                     (C163 * C835 - C8929 * C922) * C65 + (C926 - C927) * C76 +
                     (C928 - C929) * C66) *
                        C8930 * C8921) *
                       C8854 * C444 +
                   (((C174 - C173) * C74 + (C176 - C175) * C65 +
                     (C177 - C178) * C76 + (C179 - C180) * C66) *
                        C8930 * C827 +
                    ((C927 - C926) * C74 + (C929 - C928) * C65 +
                     (C8929 * C921 - C163 * C831) * C76 +
                     (C8929 * C924 - C163 * C837) * C66) *
                        C8930 * C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
               C8929 * C827 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C120 +
            (C74 * C963 - C65 * C966 + C76 * C964 - C66 * C967) * C8930) *
               C8929 * C8921) *
              C8854 * C444 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
            (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C8930) *
               C8929 * C827 +
           ((C65 * C832 - C74 * C829 + C66 * C836 - C76 * C831) * C120 +
            (C65 * C967 - C74 * C964 + C66 * C968 - C76 * C965) * C8930) *
               C8929 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
            C258 * C66) *
               C8929 * C827 -
           (C1013 * C66 +
            (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C65) *
               C8929 * C8921) *
              C8854 * C444 +
          ((C1013 * C65 +
            (C120 * C877 - C240 * C831 - C120 * C965 + C8930 * C1005) * C66) *
               C8929 * C8921 -
           (C259 * C66 + C258 * C65) * C8929 * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[2] += (2 * std::pow(Pi, 2.5) *
                  (((((C8929 * C164 - C163 * C78) * C120 +
                      (C8929 * C285 - C163 * C206) * C8930) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                        C827 +
                    (((C163 * C830 - C8929 * C919) * C120 +
                      (C163 * C963 - C8929 * C1047) * C8930) *
                         C65 +
                     ((C926 - C927) * C120 + (C1051 - C1052) * C8930) * C66) *
                        C8921) *
                       C8854 * C444 +
                   ((((C174 - C173) * C120 + (C291 - C290) * C8930) * C65 +
                     ((C177 - C178) * C120 + (C292 - C293) * C8930) * C66) *
                        C827 +
                    (((C927 - C926) * C120 + (C1052 - C1051) * C8930) * C65 +
                     ((C8929 * C921 - C163 * C831) * C120 +
                      (C8929 * C1049 - C163 * C965) * C8930) *
                         C66) *
                        C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
               C8930 * C827 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C163 +
            (C74 * C1086 - C65 * C1089 + C76 * C1087 - C66 * C1090) * C8929) *
               C8930 * C8921) *
              C8854 * C444 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
            (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C8929) *
               C8930 * C827 +
           ((C65 * C832 - C74 * C829 + C66 * C836 - C76 * C831) * C163 +
            (C65 * C1090 - C74 * C1087 + C66 * C1091 - C76 * C1088) * C8929) *
               C8930 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] += (2 * std::pow(Pi, 2.5) *
                  (((((C8930 * C121 - C120 * C78) * C163 +
                      (C8930 * C353 - C120 * C319) * C8929) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                        C827 +
                    (((C120 * C830 - C8930 * C875) * C163 +
                      (C120 * C1086 - C8930 * C1126) * C8929) *
                         C65 +
                     ((C882 - C883) * C163 + (C1130 - C1131) * C8929) * C66) *
                        C8921) *
                       C8854 * C444 +
                   ((((C131 - C130) * C163 + (C359 - C358) * C8929) * C65 +
                     ((C134 - C135) * C163 + (C360 - C361) * C8929) * C66) *
                        C827 +
                    (((C883 - C882) * C163 + (C1131 - C1130) * C8929) * C65 +
                     ((C8930 * C877 - C120 * C831) * C163 +
                      (C8930 * C1128 - C120 * C1088) * C8929) *
                         C66) *
                        C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C8930 *
                C65 +
            C407 * C66) *
               C827 -
           (C1176 * C66 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) * C8930 *
                C65) *
               C8921) *
              C8854 * C444 +
          ((C1176 * C65 +
            (C163 * C921 - C387 * C831 - C163 * C1088 + C8929 * C1167) * C8930 *
                C66) *
               C8921 -
           (C408 * C66 + C407 * C65) * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[3] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C8929 * C8930 * C8871 * C1210 -
                    (C76 * C449 - C77 * C446 - C76 * C450 + C66 * C455 +
                     C74 * C451 - C75 * C447 - C74 * C452 + C65 * C456) *
                        C8929 * C8930 * C8871 * C8919) *
                       C1212 +
                   ((C74 * C449 - C75 * C446 - C74 * C450 + C65 * C455 +
                     C76 * C453 - C77 * C448 - C76 * C454 + C66 * C457) *
                        C8929 * C8930 * C8871 * C8919 -
                    (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                     C75 * C79 - C74 * C85 + C65 * C91) *
                        C8929 * C8930 * C8871 * C1210) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C74 +
                     (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C8929 * C8871 * C1210 +
                    ((C120 * C447 - C8930 * C492) * C74 +
                     (C120 * C452 - C8930 * C495) * C65 + (C499 - C500) * C76 +
                     (C501 - C502) * C66) *
                        C8929 * C8871 * C8919) *
                       C1212 +
                   (((C131 - C130) * C74 + (C133 - C132) * C65 +
                     (C134 - C135) * C76 + (C136 - C137) * C66) *
                        C8929 * C8871 * C1210 +
                    ((C500 - C499) * C74 + (C502 - C501) * C65 +
                     (C8930 * C494 - C120 * C448) * C76 +
                     (C8930 * C497 - C120 * C454) * C66) *
                        C8929 * C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C74 +
                     (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C8930 * C8871 * C1210 +
                    ((C163 * C447 - C8929 * C536) * C74 +
                     (C163 * C452 - C8929 * C539) * C65 + (C543 - C544) * C76 +
                     (C545 - C546) * C66) *
                        C8930 * C8871 * C8919) *
                       C1212 +
                   (((C174 - C173) * C74 + (C176 - C175) * C65 +
                     (C177 - C178) * C76 + (C179 - C180) * C66) *
                        C8930 * C8871 * C1210 +
                    ((C544 - C543) * C74 + (C546 - C545) * C65 +
                     (C8929 * C538 - C163 * C448) * C76 +
                     (C8929 * C541 - C163 * C454) * C66) *
                        C8930 * C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
               C8929 * C8871 * C1210 +
           ((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C120 +
            (C74 * C580 - C65 * C583 + C76 * C581 - C66 * C584) * C8930) *
               C8929 * C8871 * C8919) *
              C1212 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
            (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C8930) *
               C8929 * C8871 * C1210 +
           ((C65 * C449 - C74 * C446 + C66 * C453 - C76 * C448) * C120 +
            (C65 * C584 - C74 * C581 + C66 * C585 - C76 * C582) * C8930) *
               C8929 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
            C258 * C66) *
               C8929 * C8871 * C1210 -
           (C630 * C66 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C65) *
               C8929 * C8871 * C8919) *
              C1212 +
          ((C630 * C65 +
            (C120 * C494 - C240 * C448 - C120 * C582 + C8930 * C622) * C66) *
               C8929 * C8871 * C8919 -
           (C259 * C66 + C258 * C65) * C8929 * C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (2 * std::pow(Pi, 2.5) *
                  (((((C8929 * C164 - C163 * C78) * C120 +
                      (C8929 * C285 - C163 * C206) * C8930) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                        C8871 * C1210 +
                    (((C163 * C447 - C8929 * C536) * C120 +
                      (C163 * C580 - C8929 * C664) * C8930) *
                         C65 +
                     ((C543 - C544) * C120 + (C668 - C669) * C8930) * C66) *
                        C8871 * C8919) *
                       C1212 +
                   ((((C174 - C173) * C120 + (C291 - C290) * C8930) * C65 +
                     ((C177 - C178) * C120 + (C292 - C293) * C8930) * C66) *
                        C8871 * C1210 +
                    (((C544 - C543) * C120 + (C669 - C668) * C8930) * C65 +
                     ((C8929 * C538 - C163 * C448) * C120 +
                      (C8929 * C666 - C163 * C582) * C8930) *
                         C66) *
                        C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
               C8930 * C8871 * C1210 +
           ((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C163 +
            (C74 * C703 - C65 * C706 + C76 * C704 - C66 * C707) * C8929) *
               C8930 * C8871 * C8919) *
              C1212 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
            (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C8929) *
               C8930 * C8871 * C1210 +
           ((C65 * C449 - C74 * C446 + C66 * C453 - C76 * C448) * C163 +
            (C65 * C707 - C74 * C704 + C66 * C708 - C76 * C705) * C8929) *
               C8930 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (2 * std::pow(Pi, 2.5) *
                  (((((C8930 * C121 - C120 * C78) * C163 +
                      (C8930 * C353 - C120 * C319) * C8929) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                        C8871 * C1210 +
                    (((C120 * C447 - C8930 * C492) * C163 +
                      (C120 * C703 - C8930 * C743) * C8929) *
                         C65 +
                     ((C499 - C500) * C163 + (C747 - C748) * C8929) * C66) *
                        C8871 * C8919) *
                       C1212 +
                   ((((C131 - C130) * C163 + (C359 - C358) * C8929) * C65 +
                     ((C134 - C135) * C163 + (C360 - C361) * C8929) * C66) *
                        C8871 * C1210 +
                    (((C500 - C499) * C163 + (C748 - C747) * C8929) * C65 +
                     ((C8930 * C494 - C120 * C448) * C163 +
                      (C8930 * C745 - C120 * C705) * C8929) *
                         C66) *
                        C8871 * C8919) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (2 * std::pow(Pi, 2.5) *
                  ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) *
                         C8930 * C65 +
                     C407 * C66) *
                        C8871 * C1210 -
                    (C793 * C66 +
                     (C163 * C536 - C387 * C447 - C163 * C703 + C8929 * C783) *
                         C8930 * C65) *
                        C8871 * C8919) *
                       C1212 +
                   ((C793 * C65 +
                     (C163 * C538 - C387 * C448 - C163 * C705 + C8929 * C784) *
                         C8930 * C66) *
                        C8871 * C8919 -
                    (C408 * C66 + C407 * C65) * C8871 * C1210) *
                       C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                    C77 * C79 - C76 * C85 + C66 * C91) *
                       C8929 * C8930 * C8871 * C1512 -
                   (C76 * C449 - C77 * C446 - C76 * C450 + C66 * C455 +
                    C74 * C451 - C75 * C447 - C74 * C452 + C65 * C456) *
                       C8929 * C8930 * C8871 * C1513 +
                   (C74 * C1518 - C75 * C1516 - C74 * C1519 + C65 * C1522 +
                    C76 * C1520 - C77 * C1517 - C76 * C1521 + C66 * C1523) *
                       C8929 * C8930 * C8871 * C1514) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] += (2 * std::pow(Pi, 2.5) *
                  (((C8930 * C121 - C120 * C78) * C74 +
                    (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                    (C132 - C133) * C66) *
                       C8929 * C8871 * C1512 +
                   ((C120 * C447 - C8930 * C492) * C74 +
                    (C120 * C452 - C8930 * C495) * C65 + (C499 - C500) * C76 +
                    (C501 - C502) * C66) *
                       C8929 * C8871 * C1513 +
                   ((C8930 * C1550 - C120 * C1516) * C74 +
                    (C8930 * C1552 - C120 * C1519) * C65 +
                    (C8930 * C1551 - C120 * C1517) * C76 +
                    (C8930 * C1553 - C120 * C1521) * C66) *
                       C8929 * C8871 * C1514) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexz[4] += (2 * std::pow(Pi, 2.5) *
                  (((C8929 * C164 - C163 * C78) * C74 +
                    (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                    (C175 - C176) * C66) *
                       C8930 * C8871 * C1512 +
                   ((C163 * C447 - C8929 * C536) * C74 +
                    (C163 * C452 - C8929 * C539) * C65 + (C543 - C544) * C76 +
                    (C545 - C546) * C66) *
                       C8930 * C8871 * C1513 +
                   ((C8929 * C1580 - C163 * C1516) * C74 +
                    (C8929 * C1582 - C163 * C1519) * C65 +
                    (C8929 * C1581 - C163 * C1517) * C76 +
                    (C8929 * C1583 - C163 * C1521) * C66) *
                       C8930 * C8871 * C1514) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
              C8929 * C8871 * C1512 +
          ((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C120 +
           (C74 * C580 - C65 * C583 + C76 * C581 - C66 * C584) * C8930) *
              C8929 * C8871 * C1513 +
          ((C65 * C1518 - C74 * C1516 + C66 * C1520 - C76 * C1517) * C120 +
           (C65 * C1612 - C74 * C1610 + C66 * C1613 - C76 * C1611) * C8930) *
              C8929 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
           C258 * C66) *
              C8929 * C8871 * C1512 -
          (C630 * C66 +
           (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C65) *
              C8929 * C8871 * C1513 +
          ((C120 * C1550 - C240 * C1516 - C120 * C1610 + C8930 * C1640) * C65 +
           (C120 * C1551 - C240 * C1517 - C120 * C1611 + C8930 * C1641) * C66) *
              C8929 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C120 +
                     (C8929 * C285 - C163 * C206) * C8930) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                       C8871 * C1512 +
                   (((C163 * C447 - C8929 * C536) * C120 +
                     (C163 * C580 - C8929 * C664) * C8930) *
                        C65 +
                    ((C543 - C544) * C120 + (C668 - C669) * C8930) * C66) *
                       C8871 * C1513 +
                   (((C8929 * C1580 - C163 * C1516) * C120 +
                     (C8929 * C1668 - C163 * C1610) * C8930) *
                        C65 +
                    ((C8929 * C1581 - C163 * C1517) * C120 +
                     (C8929 * C1669 - C163 * C1611) * C8930) *
                        C66) *
                       C8871 * C1514) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
              C8930 * C8871 * C1512 +
          ((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C163 +
           (C74 * C703 - C65 * C706 + C76 * C704 - C66 * C707) * C8929) *
              C8930 * C8871 * C1513 +
          ((C65 * C1518 - C74 * C1516 + C66 * C1520 - C76 * C1517) * C163 +
           (C65 * C1698 - C74 * C1696 + C66 * C1699 - C76 * C1697) * C8929) *
              C8930 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C163 +
                     (C8930 * C353 - C120 * C319) * C8929) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                       C8871 * C1512 +
                   (((C120 * C447 - C8930 * C492) * C163 +
                     (C120 * C703 - C8930 * C743) * C8929) *
                        C65 +
                    ((C499 - C500) * C163 + (C747 - C748) * C8929) * C66) *
                       C8871 * C1513 +
                   (((C8930 * C1550 - C120 * C1516) * C163 +
                     (C8930 * C1726 - C120 * C1696) * C8929) *
                        C65 +
                    ((C8930 * C1551 - C120 * C1517) * C163 +
                     (C8930 * C1727 - C120 * C1697) * C8929) *
                        C66) *
                       C8871 * C1514) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C8930 *
               C65 +
           C407 * C66) *
              C8871 * C1512 -
          (C793 * C66 +
           (C163 * C536 - C387 * C447 - C163 * C703 + C8929 * C783) * C8930 *
               C65) *
              C8871 * C1513 +
          ((C163 * C1580 - C387 * C1516 - C163 * C1696 + C8929 * C1754) *
               C8930 * C65 +
           (C163 * C1581 - C387 * C1517 - C163 * C1697 + C8929 * C1755) *
               C8930 * C66) *
              C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C8929 * C8930 * C827 -
                    (C76 * C832 - C77 * C829 - C76 * C833 + C66 * C838 +
                     C74 * C834 - C75 * C830 - C74 * C835 + C65 * C839) *
                        C8929 * C8930 * C8921) *
                       C1210 +
                   ((C74 * C1792 - C75 * C1790 - C74 * C1793 + C65 * C1796 +
                     C76 * C1794 - C77 * C1791 - C76 * C1795 + C66 * C1797) *
                        C8929 * C8930 * C8921 -
                    (C76 * C449 - C77 * C446 - C76 * C450 + C66 * C455 +
                     C74 * C451 - C75 * C447 - C74 * C452 + C65 * C456) *
                        C8929 * C8930 * C827) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C74 +
                     (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C8929 * C827 +
                    ((C120 * C830 - C8930 * C875) * C74 +
                     (C120 * C835 - C8930 * C878) * C65 + (C882 - C883) * C76 +
                     (C884 - C885) * C66) *
                        C8929 * C8921) *
                       C1210 +
                   (((C120 * C447 - C8930 * C492) * C74 +
                     (C120 * C452 - C8930 * C495) * C65 + (C499 - C500) * C76 +
                     (C501 - C502) * C66) *
                        C8929 * C827 +
                    ((C8930 * C1832 - C120 * C1790) * C74 +
                     (C8930 * C1834 - C120 * C1793) * C65 +
                     (C8930 * C1833 - C120 * C1791) * C76 +
                     (C8930 * C1835 - C120 * C1795) * C66) *
                        C8929 * C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C74 +
                     (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C8930 * C827 +
                    ((C163 * C830 - C8929 * C919) * C74 +
                     (C163 * C835 - C8929 * C922) * C65 + (C926 - C927) * C76 +
                     (C928 - C929) * C66) *
                        C8930 * C8921) *
                       C1210 +
                   (((C163 * C447 - C8929 * C536) * C74 +
                     (C163 * C452 - C8929 * C539) * C65 + (C543 - C544) * C76 +
                     (C545 - C546) * C66) *
                        C8930 * C827 +
                    ((C8929 * C1870 - C163 * C1790) * C74 +
                     (C8929 * C1872 - C163 * C1793) * C65 +
                     (C8929 * C1871 - C163 * C1791) * C76 +
                     (C8929 * C1873 - C163 * C1795) * C66) *
                        C8930 * C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
               C8929 * C827 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C120 +
            (C74 * C963 - C65 * C966 + C76 * C964 - C66 * C967) * C8930) *
               C8929 * C8921) *
              C1210 +
          (((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C120 +
            (C74 * C580 - C65 * C583 + C76 * C581 - C66 * C584) * C8930) *
               C8929 * C827 +
           ((C65 * C1792 - C74 * C1790 + C66 * C1794 - C76 * C1791) * C120 +
            (C65 * C1910 - C74 * C1908 + C66 * C1911 - C76 * C1909) * C8930) *
               C8929 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
            C258 * C66) *
               C8929 * C827 -
           (C1013 * C66 +
            (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C65) *
               C8929 * C8921) *
              C1210 +
          (((C120 * C1832 - C240 * C1790 - C120 * C1908 + C8930 * C1946) * C65 +
            (C120 * C1833 - C240 * C1791 - C120 * C1909 + C8930 * C1947) *
                C66) *
               C8929 * C8921 -
           (C630 * C66 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C65) *
               C8929 * C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] += (2 * std::pow(Pi, 2.5) *
                  (((((C8929 * C164 - C163 * C78) * C120 +
                      (C8929 * C285 - C163 * C206) * C8930) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                        C827 +
                    (((C163 * C830 - C8929 * C919) * C120 +
                      (C163 * C963 - C8929 * C1047) * C8930) *
                         C65 +
                     ((C926 - C927) * C120 + (C1051 - C1052) * C8930) * C66) *
                        C8921) *
                       C1210 +
                   ((((C163 * C447 - C8929 * C536) * C120 +
                      (C163 * C580 - C8929 * C664) * C8930) *
                         C65 +
                     ((C543 - C544) * C120 + (C668 - C669) * C8930) * C66) *
                        C827 +
                    (((C8929 * C1870 - C163 * C1790) * C120 +
                      (C8929 * C1982 - C163 * C1908) * C8930) *
                         C65 +
                     ((C8929 * C1871 - C163 * C1791) * C120 +
                      (C8929 * C1983 - C163 * C1909) * C8930) *
                         C66) *
                        C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
               C8930 * C827 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C163 +
            (C74 * C1086 - C65 * C1089 + C76 * C1087 - C66 * C1090) * C8929) *
               C8930 * C8921) *
              C1210 +
          (((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C163 +
            (C74 * C703 - C65 * C706 + C76 * C704 - C66 * C707) * C8929) *
               C8930 * C827 +
           ((C65 * C1792 - C74 * C1790 + C66 * C1794 - C76 * C1791) * C163 +
            (C65 * C2020 - C74 * C2018 + C66 * C2021 - C76 * C2019) * C8929) *
               C8930 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (2 * std::pow(Pi, 2.5) *
                  (((((C8930 * C121 - C120 * C78) * C163 +
                      (C8930 * C353 - C120 * C319) * C8929) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                        C827 +
                    (((C120 * C830 - C8930 * C875) * C163 +
                      (C120 * C1086 - C8930 * C1126) * C8929) *
                         C65 +
                     ((C882 - C883) * C163 + (C1130 - C1131) * C8929) * C66) *
                        C8921) *
                       C1210 +
                   ((((C120 * C447 - C8930 * C492) * C163 +
                      (C120 * C703 - C8930 * C743) * C8929) *
                         C65 +
                     ((C499 - C500) * C163 + (C747 - C748) * C8929) * C66) *
                        C827 +
                    (((C8930 * C1832 - C120 * C1790) * C163 +
                      (C8930 * C2056 - C120 * C2018) * C8929) *
                         C65 +
                     ((C8930 * C1833 - C120 * C1791) * C163 +
                      (C8930 * C2057 - C120 * C2019) * C8929) *
                         C66) *
                        C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C8930 *
                C65 +
            C407 * C66) *
               C827 -
           (C1176 * C66 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) * C8930 *
                C65) *
               C8921) *
              C1210 +
          (((C163 * C1870 - C387 * C1790 - C163 * C2018 + C8929 * C2092) *
                C8930 * C65 +
            (C163 * C1871 - C387 * C1791 - C163 * C2019 + C8929 * C2093) *
                C8930 * C66) *
               C8921 -
           (C793 * C66 +
            (C163 * C536 - C387 * C447 - C163 * C703 + C8929 * C783) * C8930 *
                C65) *
               C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C8929 * C8930 * C2128 -
                    (C76 * C832 - C77 * C829 - C76 * C833 + C66 * C838 +
                     C74 * C834 - C75 * C830 - C74 * C835 + C65 * C839) *
                        C8929 * C8930 * C8921) *
                       C8854 * C1212 +
                   ((C74 * C832 - C75 * C829 - C74 * C833 + C65 * C838 +
                     C76 * C836 - C77 * C831 - C76 * C837 + C66 * C840) *
                        C8929 * C8930 * C8921 -
                    (C76 * C86 - C77 * C80 - C76 * C87 + C66 * C92 + C74 * C84 -
                     C75 * C79 - C74 * C85 + C65 * C91) *
                        C8929 * C8930 * C2128) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C74 +
                     (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C8929 * C2128 +
                    ((C120 * C830 - C8930 * C875) * C74 +
                     (C120 * C835 - C8930 * C878) * C65 + (C882 - C883) * C76 +
                     (C884 - C885) * C66) *
                        C8929 * C8921) *
                       C8854 * C1212 +
                   (((C131 - C130) * C74 + (C133 - C132) * C65 +
                     (C134 - C135) * C76 + (C136 - C137) * C66) *
                        C8929 * C2128 +
                    ((C883 - C882) * C74 + (C885 - C884) * C65 +
                     (C8930 * C877 - C120 * C831) * C76 +
                     (C8930 * C880 - C120 * C837) * C66) *
                        C8929 * C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C74 +
                     (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C8930 * C2128 +
                    ((C163 * C830 - C8929 * C919) * C74 +
                     (C163 * C835 - C8929 * C922) * C65 + (C926 - C927) * C76 +
                     (C928 - C929) * C66) *
                        C8930 * C8921) *
                       C8854 * C1212 +
                   (((C174 - C173) * C74 + (C176 - C175) * C65 +
                     (C177 - C178) * C76 + (C179 - C180) * C66) *
                        C8930 * C2128 +
                    ((C927 - C926) * C74 + (C929 - C928) * C65 +
                     (C8929 * C921 - C163 * C831) * C76 +
                     (C8929 * C924 - C163 * C837) * C66) *
                        C8930 * C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
               C8929 * C2128 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C120 +
            (C74 * C963 - C65 * C966 + C76 * C964 - C66 * C967) * C8930) *
               C8929 * C8921) *
              C8854 * C1212 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C120 +
            (C74 * C207 - C65 * C211 + C76 * C208 - C66 * C212) * C8930) *
               C8929 * C2128 +
           ((C65 * C832 - C74 * C829 + C66 * C836 - C76 * C831) * C120 +
            (C65 * C967 - C74 * C964 + C66 * C968 - C76 * C965) * C8930) *
               C8929 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
            C258 * C66) *
               C8929 * C2128 -
           (C1013 * C66 +
            (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C65) *
               C8929 * C8921) *
              C8854 * C1212 +
          ((C1013 * C65 +
            (C120 * C877 - C240 * C831 - C120 * C965 + C8930 * C1005) * C66) *
               C8929 * C8921 -
           (C259 * C66 + C258 * C65) * C8929 * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] += (2 * std::pow(Pi, 2.5) *
                  (((((C8929 * C164 - C163 * C78) * C120 +
                      (C8929 * C285 - C163 * C206) * C8930) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                        C2128 +
                    (((C163 * C830 - C8929 * C919) * C120 +
                      (C163 * C963 - C8929 * C1047) * C8930) *
                         C65 +
                     ((C926 - C927) * C120 + (C1051 - C1052) * C8930) * C66) *
                        C8921) *
                       C8854 * C1212 +
                   ((((C174 - C173) * C120 + (C291 - C290) * C8930) * C65 +
                     ((C177 - C178) * C120 + (C292 - C293) * C8930) * C66) *
                        C2128 +
                    (((C927 - C926) * C120 + (C1052 - C1051) * C8930) * C65 +
                     ((C8929 * C921 - C163 * C831) * C120 +
                      (C8929 * C1049 - C163 * C965) * C8930) *
                         C66) *
                        C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
               C8930 * C2128 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C163 +
            (C74 * C1086 - C65 * C1089 + C76 * C1087 - C66 * C1090) * C8929) *
               C8930 * C8921) *
              C8854 * C1212 +
          (((C74 * C79 - C65 * C84 + C76 * C80 - C66 * C86) * C163 +
            (C74 * C320 - C65 * C324 + C76 * C321 - C66 * C325) * C8929) *
               C8930 * C2128 +
           ((C65 * C832 - C74 * C829 + C66 * C836 - C76 * C831) * C163 +
            (C65 * C1090 - C74 * C1087 + C66 * C1091 - C76 * C1088) * C8929) *
               C8930 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] += (2 * std::pow(Pi, 2.5) *
                  (((((C8930 * C121 - C120 * C78) * C163 +
                      (C8930 * C353 - C120 * C319) * C8929) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                        C2128 +
                    (((C120 * C830 - C8930 * C875) * C163 +
                      (C120 * C1086 - C8930 * C1126) * C8929) *
                         C65 +
                     ((C882 - C883) * C163 + (C1130 - C1131) * C8929) * C66) *
                        C8921) *
                       C8854 * C1212 +
                   ((((C131 - C130) * C163 + (C359 - C358) * C8929) * C65 +
                     ((C134 - C135) * C163 + (C360 - C361) * C8929) * C66) *
                        C2128 +
                    (((C883 - C882) * C163 + (C1131 - C1130) * C8929) * C65 +
                     ((C8930 * C877 - C120 * C831) * C163 +
                      (C8930 * C1128 - C120 * C1088) * C8929) *
                         C66) *
                        C8921) *
                       C8854 * C8917)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C8930 *
                C65 +
            C407 * C66) *
               C2128 -
           (C1176 * C66 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) * C8930 *
                C65) *
               C8921) *
              C8854 * C1212 +
          ((C1176 * C65 +
            (C163 * C921 - C387 * C831 - C163 * C1088 + C8929 * C1167) * C8930 *
                C66) *
               C8921 -
           (C408 * C66 + C407 * C65) * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] += (2 * std::pow(Pi, 2.5) *
                  (((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                     C77 * C79 - C76 * C85 + C66 * C91) *
                        C8929 * C8930 * C2128 -
                    (C76 * C832 - C77 * C829 - C76 * C833 + C66 * C838 +
                     C74 * C834 - C75 * C830 - C74 * C835 + C65 * C839) *
                        C8929 * C8930 * C8921) *
                       C442 +
                   ((C74 * C1792 - C75 * C1790 - C74 * C1793 + C65 * C1796 +
                     C76 * C1794 - C77 * C1791 - C76 * C1795 + C66 * C1797) *
                        C8929 * C8930 * C8921 -
                    (C76 * C449 - C77 * C446 - C76 * C450 + C66 * C455 +
                     C74 * C451 - C75 * C447 - C74 * C452 + C65 * C456) *
                        C8929 * C8930 * C2128) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexy[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C74 +
                     (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                     (C132 - C133) * C66) *
                        C8929 * C2128 +
                    ((C120 * C830 - C8930 * C875) * C74 +
                     (C120 * C835 - C8930 * C878) * C65 + (C882 - C883) * C76 +
                     (C884 - C885) * C66) *
                        C8929 * C8921) *
                       C442 +
                   (((C120 * C447 - C8930 * C492) * C74 +
                     (C120 * C452 - C8930 * C495) * C65 + (C499 - C500) * C76 +
                     (C501 - C502) * C66) *
                        C8929 * C2128 +
                    ((C8930 * C1832 - C120 * C1790) * C74 +
                     (C8930 * C1834 - C120 * C1793) * C65 +
                     (C8930 * C1833 - C120 * C1791) * C76 +
                     (C8930 * C1835 - C120 * C1795) * C66) *
                        C8929 * C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexz[7] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C74 +
                     (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                     (C175 - C176) * C66) *
                        C8930 * C2128 +
                    ((C163 * C830 - C8929 * C919) * C74 +
                     (C163 * C835 - C8929 * C922) * C65 + (C926 - C927) * C76 +
                     (C928 - C929) * C66) *
                        C8930 * C8921) *
                       C442 +
                   (((C163 * C447 - C8929 * C536) * C74 +
                     (C163 * C452 - C8929 * C539) * C65 + (C543 - C544) * C76 +
                     (C545 - C546) * C66) *
                        C8930 * C2128 +
                    ((C8929 * C1870 - C163 * C1790) * C74 +
                     (C8929 * C1872 - C163 * C1793) * C65 +
                     (C8929 * C1871 - C163 * C1791) * C76 +
                     (C8929 * C1873 - C163 * C1795) * C66) *
                        C8930 * C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
            (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
               C8929 * C2128 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C120 +
            (C74 * C963 - C65 * C966 + C76 * C964 - C66 * C967) * C8930) *
               C8929 * C8921) *
              C442 +
          (((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C120 +
            (C74 * C580 - C65 * C583 + C76 * C581 - C66 * C584) * C8930) *
               C8929 * C2128 +
           ((C65 * C1792 - C74 * C1790 + C66 * C1794 - C76 * C1791) * C120 +
            (C65 * C1910 - C74 * C1908 + C66 * C1911 - C76 * C1909) * C8930) *
               C8929 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
            C258 * C66) *
               C8929 * C2128 -
           (C1013 * C66 +
            (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C65) *
               C8929 * C8921) *
              C442 +
          (((C120 * C1832 - C240 * C1790 - C120 * C1908 + C8930 * C1946) * C65 +
            (C120 * C1833 - C240 * C1791 - C120 * C1909 + C8930 * C1947) *
                C66) *
               C8929 * C8921 -
           (C630 * C66 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C65) *
               C8929 * C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[7] += (2 * std::pow(Pi, 2.5) *
                  (((((C8929 * C164 - C163 * C78) * C120 +
                      (C8929 * C285 - C163 * C206) * C8930) *
                         C65 +
                     ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                        C2128 +
                    (((C163 * C830 - C8929 * C919) * C120 +
                      (C163 * C963 - C8929 * C1047) * C8930) *
                         C65 +
                     ((C926 - C927) * C120 + (C1051 - C1052) * C8930) * C66) *
                        C8921) *
                       C442 +
                   ((((C163 * C447 - C8929 * C536) * C120 +
                      (C163 * C580 - C8929 * C664) * C8930) *
                         C65 +
                     ((C543 - C544) * C120 + (C668 - C669) * C8930) * C66) *
                        C2128 +
                    (((C8929 * C1870 - C163 * C1790) * C120 +
                      (C8929 * C1982 - C163 * C1908) * C8930) *
                         C65 +
                     ((C8929 * C1871 - C163 * C1791) * C120 +
                      (C8929 * C1983 - C163 * C1909) * C8930) *
                         C66) *
                        C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
            (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
               C8930 * C2128 +
           ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C163 +
            (C74 * C1086 - C65 * C1089 + C76 * C1087 - C66 * C1090) * C8929) *
               C8930 * C8921) *
              C442 +
          (((C74 * C447 - C65 * C451 + C76 * C446 - C66 * C449) * C163 +
            (C74 * C703 - C65 * C706 + C76 * C704 - C66 * C707) * C8929) *
               C8930 * C2128 +
           ((C65 * C1792 - C74 * C1790 + C66 * C1794 - C76 * C1791) * C163 +
            (C65 * C2020 - C74 * C2018 + C66 * C2021 - C76 * C2019) * C8929) *
               C8930 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] += (2 * std::pow(Pi, 2.5) *
                  (((((C8930 * C121 - C120 * C78) * C163 +
                      (C8930 * C353 - C120 * C319) * C8929) *
                         C65 +
                     ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                        C2128 +
                    (((C120 * C830 - C8930 * C875) * C163 +
                      (C120 * C1086 - C8930 * C1126) * C8929) *
                         C65 +
                     ((C882 - C883) * C163 + (C1130 - C1131) * C8929) * C66) *
                        C8921) *
                       C442 +
                   ((((C120 * C447 - C8930 * C492) * C163 +
                      (C120 * C703 - C8930 * C743) * C8929) *
                         C65 +
                     ((C499 - C500) * C163 + (C747 - C748) * C8929) * C66) *
                        C2128 +
                    (((C8930 * C1832 - C120 * C1790) * C163 +
                      (C8930 * C2056 - C120 * C2018) * C8929) *
                         C65 +
                     ((C8930 * C1833 - C120 * C1791) * C163 +
                      (C8930 * C2057 - C120 * C2019) * C8929) *
                         C66) *
                        C8921) *
                       C8919) *
                  C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C8930 *
                C65 +
            C407 * C66) *
               C2128 -
           (C1176 * C66 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) * C8930 *
                C65) *
               C8921) *
              C442 +
          (((C163 * C1870 - C387 * C1790 - C163 * C2018 + C8929 * C2092) *
                C8930 * C65 +
            (C163 * C1871 - C387 * C1791 - C163 * C2019 + C8929 * C2093) *
                C8930 * C66) *
               C8921 -
           (C793 * C66 +
            (C163 * C536 - C387 * C447 - C163 * C703 + C8929 * C783) * C8930 *
                C65) *
               C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] += (2 * std::pow(Pi, 2.5) *
                  ((C74 * C82 - C75 * C78 - C74 * C83 + C65 * C90 + C76 * C84 -
                    C77 * C79 - C76 * C85 + C66 * C91) *
                       C8929 * C8930 * C2734 -
                   (C76 * C832 - C77 * C829 - C76 * C833 + C66 * C838 +
                    C74 * C834 - C75 * C830 - C74 * C835 + C65 * C839) *
                       C8929 * C8930 * C2735 +
                   (C74 * C2739 - C75 * C2737 - C74 * C2740 + C65 * C2743 +
                    C76 * C2741 - C77 * C2738 - C76 * C2742 + C66 * C2744) *
                       C8929 * C8930 * C2736) *
                  C8854 * C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] += (2 * std::pow(Pi, 2.5) *
                  (((C8930 * C121 - C120 * C78) * C74 +
                    (C8930 * C125 - C120 * C83) * C65 + (C130 - C131) * C76 +
                    (C132 - C133) * C66) *
                       C8929 * C2734 +
                   ((C120 * C830 - C8930 * C875) * C74 +
                    (C120 * C835 - C8930 * C878) * C65 + (C882 - C883) * C76 +
                    (C884 - C885) * C66) *
                       C8929 * C2735 +
                   ((C8930 * C2771 - C120 * C2737) * C74 +
                    (C8930 * C2773 - C120 * C2740) * C65 +
                    (C8930 * C2772 - C120 * C2738) * C76 +
                    (C8930 * C2774 - C120 * C2742) * C66) *
                       C8929 * C2736) *
                  C8854 * C8820) /
                 (p * q * std::sqrt(p + q));
    d2eexz[8] += (2 * std::pow(Pi, 2.5) *
                  (((C8929 * C164 - C163 * C78) * C74 +
                    (C8929 * C168 - C163 * C83) * C65 + (C173 - C174) * C76 +
                    (C175 - C176) * C66) *
                       C8930 * C2734 +
                   ((C163 * C830 - C8929 * C919) * C74 +
                    (C163 * C835 - C8929 * C922) * C65 + (C926 - C927) * C76 +
                    (C928 - C929) * C66) *
                       C8930 * C2735 +
                   ((C8929 * C2801 - C163 * C2737) * C74 +
                    (C8929 * C2803 - C163 * C2740) * C65 +
                    (C8929 * C2802 - C163 * C2738) * C76 +
                    (C8929 * C2804 - C163 * C2742) * C66) *
                       C8930 * C2736) *
                  C8854 * C8820) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C120 +
           (C65 * C210 - C74 * C206 + C66 * C211 - C76 * C207) * C8930) *
              C8929 * C2734 +
          ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C120 +
           (C74 * C963 - C65 * C966 + C76 * C964 - C66 * C967) * C8930) *
              C8929 * C2735 +
          ((C65 * C2739 - C74 * C2737 + C66 * C2741 - C76 * C2738) * C120 +
           (C65 * C2833 - C74 * C2831 + C66 * C2834 - C76 * C2832) * C8930) *
              C8929 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C65 +
           C258 * C66) *
              C8929 * C2734 -
          (C1013 * C66 +
           (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C65) *
              C8929 * C2735 +
          ((C120 * C2771 - C240 * C2737 - C120 * C2831 + C8930 * C2861) * C65 +
           (C120 * C2772 - C240 * C2738 - C120 * C2832 + C8930 * C2862) * C66) *
              C8929 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C120 +
                     (C8929 * C285 - C163 * C206) * C8930) *
                        C65 +
                    ((C173 - C174) * C120 + (C290 - C291) * C8930) * C66) *
                       C2734 +
                   (((C163 * C830 - C8929 * C919) * C120 +
                     (C163 * C963 - C8929 * C1047) * C8930) *
                        C65 +
                    ((C926 - C927) * C120 + (C1051 - C1052) * C8930) * C66) *
                       C2735 +
                   (((C8929 * C2801 - C163 * C2737) * C120 +
                     (C8929 * C2889 - C163 * C2831) * C8930) *
                        C65 +
                    ((C8929 * C2802 - C163 * C2738) * C120 +
                     (C8929 * C2890 - C163 * C2832) * C8930) *
                        C66) *
                       C2736) *
                  C8854 * C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C65 * C82 - C74 * C78 + C66 * C84 - C76 * C79) * C163 +
           (C65 * C323 - C74 * C319 + C66 * C324 - C76 * C320) * C8929) *
              C8930 * C2734 +
          ((C74 * C830 - C65 * C834 + C76 * C829 - C66 * C832) * C163 +
           (C74 * C1086 - C65 * C1089 + C76 * C1087 - C66 * C1090) * C8929) *
              C8930 * C2735 +
          ((C65 * C2739 - C74 * C2737 + C66 * C2741 - C76 * C2738) * C163 +
           (C65 * C2919 - C74 * C2917 + C66 * C2920 - C76 * C2918) * C8929) *
              C8930 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] += (2 * std::pow(Pi, 2.5) *
                  ((((C8930 * C121 - C120 * C78) * C163 +
                     (C8930 * C353 - C120 * C319) * C8929) *
                        C65 +
                    ((C130 - C131) * C163 + (C358 - C359) * C8929) * C66) *
                       C2734 +
                   (((C120 * C830 - C8930 * C875) * C163 +
                     (C120 * C1086 - C8930 * C1126) * C8929) *
                        C65 +
                    ((C882 - C883) * C163 + (C1130 - C1131) * C8929) * C66) *
                       C2735 +
                   (((C8930 * C2771 - C120 * C2737) * C163 +
                     (C8930 * C2947 - C120 * C2917) * C8929) *
                        C65 +
                    ((C8930 * C2772 - C120 * C2738) * C163 +
                     (C8930 * C2948 - C120 * C2918) * C8929) *
                        C66) *
                       C2736) *
                  C8854 * C8820) /
                 (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C8930 *
               C65 +
           C407 * C66) *
              C2734 -
          (C1176 * C66 +
           (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) * C8930 *
               C65) *
              C2735 +
          ((C163 * C2801 - C387 * C2737 - C163 * C2917 + C8929 * C2975) *
               C8930 * C65 +
           (C163 * C2802 - C387 * C2738 - C163 * C2918 + C8929 * C2976) *
               C8930 * C66) *
              C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
               C3004 +
           (C3006 * C451 - C3007 * C447 - C3006 * C452 + C8928 * C456) * C8929 *
               C3005) *
              C8871 * C8854 * C71 -
          ((C3006 * C449 - C3007 * C446 - C3006 * C450 + C8928 * C455) * C8929 *
               C3005 +
           (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C8929 *
               C3004) *
              C8871 * C8854 * C72 +
          ((C3006 * C86 - C3007 * C80 - C3006 * C87 + C8928 * C92) * C8929 *
               C3004 +
           (C3006 * C453 - C3007 * C448 - C3006 * C454 + C8928 * C457) * C8929 *
               C3005) *
              C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
           (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) * C8928) *
              C8929 * C8871 * C8854 * C71 +
          ((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C3006 +
           (C3034 * C85 - C3004 * C126 + C3035 * C450 - C3005 * C496) * C8928) *
              C8929 * C8871 * C8854 * C72 +
          ((C3004 * C123 - C3034 * C80 + C3005 * C494 - C3035 * C448) * C3006 +
           (C3004 * C127 - C3034 * C87 + C3005 * C497 - C3035 * C454) * C8928) *
              C8929 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C8929 * C164 - C163 * C78) * C3006 +
                     (C8929 * C168 - C163 * C83) * C8928) *
                        C3004 +
                    ((C8929 * C536 - C163 * C447) * C3006 +
                     (C8929 * C539 - C163 * C452) * C8928) *
                        C3005) *
                       C8871 * C8854 * C71 +
                   (((C174 - C173) * C3006 + (C176 - C175) * C8928) * C3004 +
                    ((C543 - C544) * C3006 + (C545 - C546) * C8928) * C3005) *
                       C8871 * C8854 * C72 +
                   (((C178 - C177) * C3006 + (C180 - C179) * C8928) * C3004 +
                    ((C8929 * C538 - C163 * C448) * C3006 +
                     (C8929 * C541 - C163 * C454) * C8928) *
                        C3005) *
                       C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[9] += (2 * std::pow(Pi, 2.5) *
                  (((C8928 * C82 - C3006 * C78) * C3034 +
                    (C8928 * C210 - C3006 * C206) * C3004 +
                    (C8928 * C451 - C3006 * C447) * C3035 +
                    (C8928 * C583 - C3006 * C580) * C3005) *
                       C8929 * C8871 * C8854 * C71 +
                   ((C3006 * C79 - C8928 * C84) * C3034 +
                    (C3006 * C207 - C8928 * C211) * C3004 +
                    (C3006 * C446 - C8928 * C449) * C3035 +
                    (C3006 * C581 - C8928 * C584) * C3005) *
                       C8929 * C8871 * C8854 * C72 +
                   ((C8928 * C86 - C3006 * C80) * C3034 +
                    (C8928 * C212 - C3006 * C208) * C3004 +
                    (C8928 * C453 - C3006 * C448) * C3035 +
                    (C8928 * C585 - C3006 * C582) * C3005) *
                       C8929 * C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] += (2 * std::pow(Pi, 2.5) *
                  ((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
                    C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
                       C8928 * C8929 * C8871 * C8854 * C71 -
                   (C3035 * C493 - C3115 * C446 - C3035 * C581 + C3005 * C620 +
                    C3034 * C122 - C3114 * C79 - C3034 * C207 + C3004 * C242) *
                       C8928 * C8929 * C8871 * C8854 * C72 +
                   (C3034 * C123 - C3114 * C80 - C3034 * C208 + C3004 * C243 +
                    C3035 * C494 - C3115 * C448 - C3035 * C582 + C3005 * C622) *
                       C8928 * C8929 * C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[9] += (2 * std::pow(Pi, 2.5) *
                  (((C8929 * C164 - C163 * C78) * C3034 +
                    (C8929 * C285 - C163 * C206) * C3004 +
                    (C8929 * C536 - C163 * C447) * C3035 +
                    (C8929 * C664 - C163 * C580) * C3005) *
                       C8928 * C8871 * C8854 * C71 +
                   ((C174 - C173) * C3034 + (C291 - C290) * C3004 +
                    (C543 - C544) * C3035 + (C668 - C669) * C3005) *
                       C8928 * C8871 * C8854 * C72 +
                   ((C178 - C177) * C3034 + (C293 - C292) * C3004 +
                    (C8929 * C538 - C163 * C448) * C3035 +
                    (C8929 * C666 - C163 * C582) * C3005) *
                       C8928 * C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[9] += (2 * std::pow(Pi, 2.5) *
                  ((((C8928 * C82 - C3006 * C78) * C163 +
                     (C8928 * C323 - C3006 * C319) * C8929) *
                        C3004 +
                    ((C8928 * C451 - C3006 * C447) * C163 +
                     (C8928 * C706 - C3006 * C703) * C8929) *
                        C3005) *
                       C8871 * C8854 * C71 +
                   (((C3006 * C79 - C8928 * C84) * C163 +
                     (C3006 * C320 - C8928 * C324) * C8929) *
                        C3004 +
                    ((C3006 * C446 - C8928 * C449) * C163 +
                     (C3006 * C704 - C8928 * C707) * C8929) *
                        C3005) *
                       C8871 * C8854 * C72 +
                   (((C8928 * C86 - C3006 * C80) * C163 +
                     (C8928 * C325 - C3006 * C321) * C8929) *
                        C3004 +
                    ((C8928 * C453 - C3006 * C448) * C163 +
                     (C8928 * C708 - C3006 * C705) * C8929) *
                        C3005) *
                       C8871 * C8854 * C73)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
           (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
               C8929) *
              C8928 * C8871 * C8854 * C71 +
          ((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C163 +
           (C3034 * C320 - C3004 * C354 + C3035 * C704 - C3005 * C744) *
               C8929) *
              C8928 * C8871 * C8854 * C72 +
          ((C3004 * C123 - C3034 * C80 + C3005 * C494 - C3035 * C448) * C163 +
           (C3004 * C355 - C3034 * C321 + C3005 * C745 - C3035 * C705) *
               C8929) *
              C8928 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
           (C163 * C536 - C387 * C447 - C163 * C703 + C8929 * C783) * C3005) *
              C8928 * C8871 * C8854 * C71 -
          (C792 * C3005 + C405 * C3004) * C8928 * C8871 * C8854 * C72 +
          (C406 * C3004 +
           (C163 * C538 - C387 * C448 - C163 * C705 + C8929 * C784) * C3005) *
              C8928 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
                C3004 +
            C3269 * C3005) *
               C8871 * C442 -
           ((C3006 * C1518 - C3007 * C1516 - C3006 * C1519 + C8928 * C1522) *
                C8929 * C3005 +
            C3269 * C3004) *
               C8871 * C8919) *
              C444 +
          ((C3270 * C3004 +
            (C3006 * C1520 - C3007 * C1517 - C3006 * C1521 + C8928 * C1523) *
                C8929 * C3005) *
               C8871 * C8919 -
           (C3270 * C3005 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C8929 *
                C3004) *
               C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
            (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) *
                C8928) *
               C8929 * C8871 * C442 +
           ((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C3006 +
            (C3034 * C452 - C3004 * C495 + C3035 * C1519 - C3005 * C1552) *
                C8928) *
               C8929 * C8871 * C8919) *
              C444 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C3006 +
            (C3034 * C85 - C3004 * C126 + C3035 * C450 - C3005 * C496) *
                C8928) *
               C8929 * C8871 * C442 +
           ((C3004 * C493 - C3034 * C446 + C3005 * C1551 - C3035 * C1517) *
                C3006 +
            (C3004 * C496 - C3034 * C450 + C3005 * C1553 - C3035 * C1521) *
                C8928) *
               C8929 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8929 * C164 - C163 * C78) * C3006 +
             (C8929 * C168 - C163 * C83) * C8928) *
                C3004 +
            ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
               C8871 * C442 +
           (((C3340 - C3339) * C3006 + (C3342 - C3341) * C8928) * C3004 +
            ((C163 * C1516 - C8929 * C1580) * C3006 +
             (C163 * C1519 - C8929 * C1582) * C8928) *
                C3005) *
               C8871 * C8919) *
              C444 +
          ((((C174 - C173) * C3006 + (C176 - C175) * C8928) * C3004 +
            ((C543 - C544) * C3006 + (C545 - C546) * C8928) * C3005) *
               C8871 * C442 +
           (((C544 - C543) * C3006 + (C546 - C545) * C8928) * C3004 +
            ((C8929 * C1581 - C163 * C1517) * C3006 +
             (C8929 * C1583 - C163 * C1521) * C8928) *
                C3005) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C3034 +
                      (C8928 * C210 - C3006 * C206) * C3004 +
                      (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                         C8929 * C8871 * C442 +
                     ((C3378 - C3377) * C3034 + (C3380 - C3379) * C3004 +
                      (C3006 * C1516 - C8928 * C1518) * C3035 +
                      (C3006 * C1610 - C8928 * C1612) * C3005) *
                         C8929 * C8871 * C8919) *
                        C444 +
                    (((C3006 * C79 - C8928 * C84) * C3034 +
                      (C3006 * C207 - C8928 * C211) * C3004 +
                      (C3381 - C3382) * C3035 + (C3383 - C3384) * C3005) *
                         C8929 * C8871 * C442 +
                     ((C3382 - C3381) * C3034 + (C3384 - C3383) * C3004 +
                      (C8928 * C1520 - C3006 * C1517) * C3035 +
                      (C8928 * C1613 - C3006 * C1611) * C3005) *
                         C8929 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
            C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
               C8928 * C8929 * C8871 * C442 -
           (C3035 * C1550 - C3115 * C1516 - C3035 * C1610 + C3005 * C1640 +
            C3034 * C492 - C3114 * C447 - C3034 * C580 + C3004 * C621) *
               C8928 * C8929 * C8871 * C8919) *
              C444 +
          ((C3034 * C493 - C3114 * C446 - C3034 * C581 + C3004 * C620 +
            C3035 * C1551 - C3115 * C1517 - C3035 * C1611 + C3005 * C1641) *
               C8928 * C8929 * C8871 * C8919 -
           (C3035 * C493 - C3115 * C446 - C3035 * C581 + C3005 * C620 +
            C3034 * C122 - C3114 * C79 - C3034 * C207 + C3004 * C242) *
               C8928 * C8929 * C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] += (2 * std::pow(Pi, 2.5) *
                   ((((C8929 * C164 - C163 * C78) * C3034 +
                      (C8929 * C285 - C163 * C206) * C3004 +
                      (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                         C8928 * C8871 * C442 +
                     ((C3340 - C3339) * C3034 + (C3454 - C3453) * C3004 +
                      (C163 * C1516 - C8929 * C1580) * C3035 +
                      (C163 * C1610 - C8929 * C1668) * C3005) *
                         C8928 * C8871 * C8919) *
                        C444 +
                    (((C174 - C173) * C3034 + (C291 - C290) * C3004 +
                      (C543 - C544) * C3035 + (C668 - C669) * C3005) *
                         C8928 * C8871 * C442 +
                     ((C544 - C543) * C3034 + (C669 - C668) * C3004 +
                      (C8929 * C1581 - C163 * C1517) * C3035 +
                      (C8929 * C1669 - C163 * C1611) * C3005) *
                         C8928 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C163 +
             (C8928 * C323 - C3006 * C319) * C8929) *
                C3004 +
            ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
               C8871 * C442 +
           (((C3378 - C3377) * C163 + (C3490 - C3489) * C8929) * C3004 +
            ((C3006 * C1516 - C8928 * C1518) * C163 +
             (C3006 * C1696 - C8928 * C1698) * C8929) *
                C3005) *
               C8871 * C8919) *
              C444 +
          ((((C3006 * C79 - C8928 * C84) * C163 +
             (C3006 * C320 - C8928 * C324) * C8929) *
                C3004 +
            ((C3381 - C3382) * C163 + (C3491 - C3492) * C8929) * C3005) *
               C8871 * C442 +
           (((C3382 - C3381) * C163 + (C3492 - C3491) * C8929) * C3004 +
            ((C8928 * C1520 - C3006 * C1517) * C163 +
             (C8928 * C1699 - C3006 * C1697) * C8929) *
                C3005) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
            (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
                C8929) *
               C8928 * C8871 * C442 +
           ((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C163 +
            (C3034 * C703 - C3004 * C743 + C3035 * C1696 - C3005 * C1726) *
                C8929) *
               C8928 * C8871 * C8919) *
              C444 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C163 +
            (C3034 * C320 - C3004 * C354 + C3035 * C704 - C3005 * C744) *
                C8929) *
               C8928 * C8871 * C442 +
           ((C3004 * C493 - C3034 * C446 + C3005 * C1551 - C3035 * C1517) *
                C163 +
            (C3004 * C744 - C3034 * C704 + C3005 * C1727 - C3035 * C1697) *
                C8929) *
               C8928 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
            C3567 * C3005) *
               C8928 * C8871 * C442 -
           ((C163 * C1580 - C387 * C1516 - C163 * C1696 + C8929 * C1754) *
                C3005 +
            C3567 * C3004) *
               C8928 * C8871 * C8919) *
              C444 +
          ((C792 * C3004 +
            (C163 * C1581 - C387 * C1517 - C163 * C1697 + C8929 * C1755) *
                C3005) *
               C8928 * C8871 * C8919 -
           (C792 * C3005 + C405 * C3004) * C8928 * C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
                C3004 +
            C3269 * C3005) *
               C827 -
           ((C3006 * C1792 - C3007 * C1790 - C3006 * C1793 + C8928 * C1796) *
                C8929 * C3005 +
            (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) *
                C8929 * C3004) *
               C8921) *
              C8854 * C444 +
          (((C3006 * C832 - C3007 * C829 - C3006 * C833 + C8928 * C838) *
                C8929 * C3004 +
            (C3006 * C1794 - C3007 * C1791 - C3006 * C1795 + C8928 * C1797) *
                C8929 * C3005) *
               C8921 -
           (C3270 * C3005 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C8929 *
                C3004) *
               C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
            (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) *
                C8928) *
               C8929 * C827 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C3006 +
            (C3034 * C835 - C3004 * C878 + C3035 * C1793 - C3005 * C1834) *
                C8928) *
               C8929 * C8921) *
              C8854 * C444 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C3006 +
            (C3034 * C85 - C3004 * C126 + C3035 * C450 - C3005 * C496) *
                C8928) *
               C8929 * C827 +
           ((C3004 * C876 - C3034 * C829 + C3005 * C1833 - C3035 * C1791) *
                C3006 +
            (C3004 * C879 - C3034 * C833 + C3005 * C1835 - C3035 * C1795) *
                C8928) *
               C8929 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8929 * C164 - C163 * C78) * C3006 +
             (C8929 * C168 - C163 * C83) * C8928) *
                C3004 +
            ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
               C827 +
           (((C163 * C830 - C8929 * C919) * C3006 +
             (C163 * C835 - C8929 * C922) * C8928) *
                C3004 +
            ((C163 * C1790 - C8929 * C1870) * C3006 +
             (C163 * C1793 - C8929 * C1872) * C8928) *
                C3005) *
               C8921) *
              C8854 * C444 +
          ((((C174 - C173) * C3006 + (C176 - C175) * C8928) * C3004 +
            ((C543 - C544) * C3006 + (C545 - C546) * C8928) * C3005) *
               C827 +
           (((C927 - C926) * C3006 + (C929 - C928) * C8928) * C3004 +
            ((C8929 * C1871 - C163 * C1791) * C3006 +
             (C8929 * C1873 - C163 * C1795) * C8928) *
                C3005) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C3034 +
                      (C8928 * C210 - C3006 * C206) * C3004 +
                      (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                         C8929 * C827 +
                     ((C3006 * C830 - C8928 * C834) * C3034 +
                      (C3006 * C963 - C8928 * C966) * C3004 +
                      (C3006 * C1790 - C8928 * C1792) * C3035 +
                      (C3006 * C1908 - C8928 * C1910) * C3005) *
                         C8929 * C8921) *
                        C8854 * C444 +
                    (((C3006 * C79 - C8928 * C84) * C3034 +
                      (C3006 * C207 - C8928 * C211) * C3004 +
                      (C3381 - C3382) * C3035 + (C3383 - C3384) * C3005) *
                         C8929 * C827 +
                     ((C8928 * C832 - C3006 * C829) * C3034 +
                      (C8928 * C967 - C3006 * C964) * C3004 +
                      (C8928 * C1794 - C3006 * C1791) * C3035 +
                      (C8928 * C1911 - C3006 * C1909) * C3005) *
                         C8929 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
            C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
               C8928 * C8929 * C827 -
           (C3035 * C1832 - C3115 * C1790 - C3035 * C1908 + C3005 * C1946 +
            C3034 * C875 - C3114 * C830 - C3034 * C963 + C3004 * C1004) *
               C8928 * C8929 * C8921) *
              C8854 * C444 +
          ((C3034 * C876 - C3114 * C829 - C3034 * C964 + C3004 * C1003 +
            C3035 * C1833 - C3115 * C1791 - C3035 * C1909 + C3005 * C1947) *
               C8928 * C8929 * C8921 -
           (C3035 * C493 - C3115 * C446 - C3035 * C581 + C3005 * C620 +
            C3034 * C122 - C3114 * C79 - C3034 * C207 + C3004 * C242) *
               C8928 * C8929 * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] += (2 * std::pow(Pi, 2.5) *
                   ((((C8929 * C164 - C163 * C78) * C3034 +
                      (C8929 * C285 - C163 * C206) * C3004 +
                      (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                         C8928 * C827 +
                     ((C163 * C830 - C8929 * C919) * C3034 +
                      (C163 * C963 - C8929 * C1047) * C3004 +
                      (C163 * C1790 - C8929 * C1870) * C3035 +
                      (C163 * C1908 - C8929 * C1982) * C3005) *
                         C8928 * C8921) *
                        C8854 * C444 +
                    (((C174 - C173) * C3034 + (C291 - C290) * C3004 +
                      (C543 - C544) * C3035 + (C668 - C669) * C3005) *
                         C8928 * C827 +
                     ((C927 - C926) * C3034 + (C1052 - C1051) * C3004 +
                      (C8929 * C1871 - C163 * C1791) * C3035 +
                      (C8929 * C1983 - C163 * C1909) * C3005) *
                         C8928 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C163 +
             (C8928 * C323 - C3006 * C319) * C8929) *
                C3004 +
            ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
               C827 +
           (((C3006 * C830 - C8928 * C834) * C163 +
             (C3006 * C1086 - C8928 * C1089) * C8929) *
                C3004 +
            ((C3006 * C1790 - C8928 * C1792) * C163 +
             (C3006 * C2018 - C8928 * C2020) * C8929) *
                C3005) *
               C8921) *
              C8854 * C444 +
          ((((C3006 * C79 - C8928 * C84) * C163 +
             (C3006 * C320 - C8928 * C324) * C8929) *
                C3004 +
            ((C3381 - C3382) * C163 + (C3491 - C3492) * C8929) * C3005) *
               C827 +
           (((C8928 * C832 - C3006 * C829) * C163 +
             (C8928 * C1090 - C3006 * C1087) * C8929) *
                C3004 +
            ((C8928 * C1794 - C3006 * C1791) * C163 +
             (C8928 * C2021 - C3006 * C2019) * C8929) *
                C3005) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
            (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
                C8929) *
               C8928 * C827 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C163 +
            (C3034 * C1086 - C3004 * C1126 + C3035 * C2018 - C3005 * C2056) *
                C8929) *
               C8928 * C8921) *
              C8854 * C444 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C163 +
            (C3034 * C320 - C3004 * C354 + C3035 * C704 - C3005 * C744) *
                C8929) *
               C8928 * C827 +
           ((C3004 * C876 - C3034 * C829 + C3005 * C1833 - C3035 * C1791) *
                C163 +
            (C3004 * C1127 - C3034 * C1087 + C3005 * C2057 - C3035 * C2019) *
                C8929) *
               C8928 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
            C3567 * C3005) *
               C8928 * C827 -
           ((C163 * C1870 - C387 * C1790 - C163 * C2018 + C8929 * C2092) *
                C3005 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) *
                C3004) *
               C8928 * C8921) *
              C8854 * C444 +
          ((C1175 * C3004 +
            (C163 * C1871 - C387 * C1791 - C163 * C2019 + C8929 * C2093) *
                C3005) *
               C8928 * C8921 -
           (C792 * C3005 + C405 * C3004) * C8928 * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
                C3004 +
            C3269 * C3005) *
               C8871 * C1210 -
           ((C3006 * C1518 - C3007 * C1516 - C3006 * C1519 + C8928 * C1522) *
                C8929 * C3005 +
            C3269 * C3004) *
               C8871 * C8919) *
              C1212 +
          ((C3270 * C3004 +
            (C3006 * C1520 - C3007 * C1517 - C3006 * C1521 + C8928 * C1523) *
                C8929 * C3005) *
               C8871 * C8919 -
           (C3270 * C3005 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C8929 *
                C3004) *
               C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
            (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) *
                C8928) *
               C8929 * C8871 * C1210 +
           ((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C3006 +
            (C3034 * C452 - C3004 * C495 + C3035 * C1519 - C3005 * C1552) *
                C8928) *
               C8929 * C8871 * C8919) *
              C1212 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C3006 +
            (C3034 * C85 - C3004 * C126 + C3035 * C450 - C3005 * C496) *
                C8928) *
               C8929 * C8871 * C1210 +
           ((C3004 * C493 - C3034 * C446 + C3005 * C1551 - C3035 * C1517) *
                C3006 +
            (C3004 * C496 - C3034 * C450 + C3005 * C1553 - C3035 * C1521) *
                C8928) *
               C8929 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8929 * C164 - C163 * C78) * C3006 +
             (C8929 * C168 - C163 * C83) * C8928) *
                C3004 +
            ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
               C8871 * C1210 +
           (((C3340 - C3339) * C3006 + (C3342 - C3341) * C8928) * C3004 +
            ((C163 * C1516 - C8929 * C1580) * C3006 +
             (C163 * C1519 - C8929 * C1582) * C8928) *
                C3005) *
               C8871 * C8919) *
              C1212 +
          ((((C174 - C173) * C3006 + (C176 - C175) * C8928) * C3004 +
            ((C543 - C544) * C3006 + (C545 - C546) * C8928) * C3005) *
               C8871 * C1210 +
           (((C544 - C543) * C3006 + (C546 - C545) * C8928) * C3004 +
            ((C8929 * C1581 - C163 * C1517) * C3006 +
             (C8929 * C1583 - C163 * C1521) * C8928) *
                C3005) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C3034 +
                      (C8928 * C210 - C3006 * C206) * C3004 +
                      (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                         C8929 * C8871 * C1210 +
                     ((C3378 - C3377) * C3034 + (C3380 - C3379) * C3004 +
                      (C3006 * C1516 - C8928 * C1518) * C3035 +
                      (C3006 * C1610 - C8928 * C1612) * C3005) *
                         C8929 * C8871 * C8919) *
                        C1212 +
                    (((C3006 * C79 - C8928 * C84) * C3034 +
                      (C3006 * C207 - C8928 * C211) * C3004 +
                      (C3381 - C3382) * C3035 + (C3383 - C3384) * C3005) *
                         C8929 * C8871 * C1210 +
                     ((C3382 - C3381) * C3034 + (C3384 - C3383) * C3004 +
                      (C8928 * C1520 - C3006 * C1517) * C3035 +
                      (C8928 * C1613 - C3006 * C1611) * C3005) *
                         C8929 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
            C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
               C8928 * C8929 * C8871 * C1210 -
           (C3035 * C1550 - C3115 * C1516 - C3035 * C1610 + C3005 * C1640 +
            C3034 * C492 - C3114 * C447 - C3034 * C580 + C3004 * C621) *
               C8928 * C8929 * C8871 * C8919) *
              C1212 +
          ((C3034 * C493 - C3114 * C446 - C3034 * C581 + C3004 * C620 +
            C3035 * C1551 - C3115 * C1517 - C3035 * C1611 + C3005 * C1641) *
               C8928 * C8929 * C8871 * C8919 -
           (C3035 * C493 - C3115 * C446 - C3035 * C581 + C3005 * C620 +
            C3034 * C122 - C3114 * C79 - C3034 * C207 + C3004 * C242) *
               C8928 * C8929 * C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[12] += (2 * std::pow(Pi, 2.5) *
                   ((((C8929 * C164 - C163 * C78) * C3034 +
                      (C8929 * C285 - C163 * C206) * C3004 +
                      (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                         C8928 * C8871 * C1210 +
                     ((C3340 - C3339) * C3034 + (C3454 - C3453) * C3004 +
                      (C163 * C1516 - C8929 * C1580) * C3035 +
                      (C163 * C1610 - C8929 * C1668) * C3005) *
                         C8928 * C8871 * C8919) *
                        C1212 +
                    (((C174 - C173) * C3034 + (C291 - C290) * C3004 +
                      (C543 - C544) * C3035 + (C668 - C669) * C3005) *
                         C8928 * C8871 * C1210 +
                     ((C544 - C543) * C3034 + (C669 - C668) * C3004 +
                      (C8929 * C1581 - C163 * C1517) * C3035 +
                      (C8929 * C1669 - C163 * C1611) * C3005) *
                         C8928 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C163 +
             (C8928 * C323 - C3006 * C319) * C8929) *
                C3004 +
            ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
               C8871 * C1210 +
           (((C3378 - C3377) * C163 + (C3490 - C3489) * C8929) * C3004 +
            ((C3006 * C1516 - C8928 * C1518) * C163 +
             (C3006 * C1696 - C8928 * C1698) * C8929) *
                C3005) *
               C8871 * C8919) *
              C1212 +
          ((((C3006 * C79 - C8928 * C84) * C163 +
             (C3006 * C320 - C8928 * C324) * C8929) *
                C3004 +
            ((C3381 - C3382) * C163 + (C3491 - C3492) * C8929) * C3005) *
               C8871 * C1210 +
           (((C3382 - C3381) * C163 + (C3492 - C3491) * C8929) * C3004 +
            ((C8928 * C1520 - C3006 * C1517) * C163 +
             (C8928 * C1699 - C3006 * C1697) * C8929) *
                C3005) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
            (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
                C8929) *
               C8928 * C8871 * C1210 +
           ((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C163 +
            (C3034 * C703 - C3004 * C743 + C3035 * C1696 - C3005 * C1726) *
                C8929) *
               C8928 * C8871 * C8919) *
              C1212 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C163 +
            (C3034 * C320 - C3004 * C354 + C3035 * C704 - C3005 * C744) *
                C8929) *
               C8928 * C8871 * C1210 +
           ((C3004 * C493 - C3034 * C446 + C3005 * C1551 - C3035 * C1517) *
                C163 +
            (C3004 * C744 - C3034 * C704 + C3005 * C1727 - C3035 * C1697) *
                C8929) *
               C8928 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
            C3567 * C3005) *
               C8928 * C8871 * C1210 -
           ((C163 * C1580 - C387 * C1516 - C163 * C1696 + C8929 * C1754) *
                C3005 +
            C3567 * C3004) *
               C8928 * C8871 * C8919) *
              C1212 +
          ((C792 * C3004 +
            (C163 * C1581 - C387 * C1517 - C163 * C1697 + C8929 * C1755) *
                C3005) *
               C8928 * C8871 * C8919 -
           (C792 * C3005 + C405 * C3004) * C8928 * C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[13] += (2 * std::pow(Pi, 2.5) *
                   (((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) *
                         C8929 * C3004 +
                     C3269 * C3005) *
                        C8871 * C1512 -
                    (C4217 * C3005 + C3269 * C3004) * C8871 * C1513 +
                    (C4217 * C3004 + (C3006 * C4206 - C3007 * C4205 -
                                      C3006 * C4207 + C8928 * C4208) *
                                         C8929 * C3005) *
                        C8871 * C1514) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
           (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) * C8928) *
              C8929 * C8871 * C1512 +
          ((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
               C3006 +
           (C3034 * C452 - C3004 * C495 + C3035 * C1519 - C3005 * C1552) *
               C8928) *
              C8929 * C8871 * C1513 +
          ((C3004 * C1550 - C3034 * C1516 + C3005 * C4243 - C3035 * C4205) *
               C3006 +
           (C3004 * C1552 - C3034 * C1519 + C3005 * C4244 - C3035 * C4207) *
               C8928) *
              C8929 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8929 * C164 - C163 * C78) * C3006 +
            (C8929 * C168 - C163 * C83) * C8928) *
               C3004 +
           ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
              C8871 * C1512 +
          (((C3340 - C3339) * C3006 + (C3342 - C3341) * C8928) * C3004 +
           ((C4274 - C4275) * C3006 + (C4276 - C4277) * C8928) * C3005) *
              C8871 * C1513 +
          (((C4275 - C4274) * C3006 + (C4277 - C4276) * C8928) * C3004 +
           ((C8929 * C4271 - C163 * C4205) * C3006 +
            (C8929 * C4272 - C163 * C4207) * C8928) *
               C3005) *
              C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] += (2 * std::pow(Pi, 2.5) *
                   (((C8928 * C82 - C3006 * C78) * C3034 +
                     (C8928 * C210 - C3006 * C206) * C3004 +
                     (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                        C8929 * C8871 * C1512 +
                    ((C3378 - C3377) * C3034 + (C3380 - C3379) * C3004 +
                     (C4306 - C4307) * C3035 + (C4308 - C4309) * C3005) *
                        C8929 * C8871 * C1513 +
                    ((C4307 - C4306) * C3034 + (C4309 - C4308) * C3004 +
                     (C8928 * C4206 - C3006 * C4205) * C3035 +
                     (C8928 * C4304 - C3006 * C4303) * C3005) *
                        C8929 * C8871 * C1514) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
           C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
              C8928 * C8929 * C8871 * C1512 -
          (C3035 * C1550 - C3115 * C1516 - C3035 * C1610 + C3005 * C1640 +
           C3034 * C492 - C3114 * C447 - C3034 * C580 + C3004 * C621) *
              C8928 * C8929 * C8871 * C1513 +
          (C3034 * C1550 - C3114 * C1516 - C3034 * C1610 + C3004 * C1640 +
           C3035 * C4243 - C3115 * C4205 - C3035 * C4303 + C3005 * C4335) *
              C8928 * C8929 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[13] += (2 * std::pow(Pi, 2.5) *
                   (((C8929 * C164 - C163 * C78) * C3034 +
                     (C8929 * C285 - C163 * C206) * C3004 +
                     (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                        C8928 * C8871 * C1512 +
                    ((C3340 - C3339) * C3034 + (C3454 - C3453) * C3004 +
                     (C4274 - C4275) * C3035 + (C4364 - C4365) * C3005) *
                        C8928 * C8871 * C1513 +
                    ((C4275 - C4274) * C3034 + (C4365 - C4364) * C3004 +
                     (C8929 * C4271 - C163 * C4205) * C3035 +
                     (C8929 * C4362 - C163 * C4303) * C3005) *
                        C8928 * C8871 * C1514) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8928 * C82 - C3006 * C78) * C163 +
            (C8928 * C323 - C3006 * C319) * C8929) *
               C3004 +
           ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
              C8871 * C1512 +
          (((C3378 - C3377) * C163 + (C3490 - C3489) * C8929) * C3004 +
           ((C4306 - C4307) * C163 + (C4394 - C4395) * C8929) * C3005) *
              C8871 * C1513 +
          (((C4307 - C4306) * C163 + (C4395 - C4394) * C8929) * C3004 +
           ((C8928 * C4206 - C3006 * C4205) * C163 +
            (C8928 * C4392 - C3006 * C4391) * C8929) *
               C3005) *
              C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
           (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
               C8929) *
              C8928 * C8871 * C1512 +
          ((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
               C163 +
           (C3034 * C703 - C3004 * C743 + C3035 * C1696 - C3005 * C1726) *
               C8929) *
              C8928 * C8871 * C1513 +
          ((C3004 * C1550 - C3034 * C1516 + C3005 * C4243 - C3035 * C4205) *
               C163 +
           (C3004 * C1726 - C3034 * C1696 + C3005 * C4421 - C3035 * C4391) *
               C8929) *
              C8928 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
           C3567 * C3005) *
              C8928 * C8871 * C1512 -
          (C4456 * C3005 + C3567 * C3004) * C8928 * C8871 * C1513 +
          (C4456 * C3004 +
           (C163 * C4271 - C387 * C4205 - C163 * C4391 + C8929 * C4448) *
               C3005) *
              C8928 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
                C3004 +
            C3269 * C3005) *
               C827 -
           (C4502 * C3005 +
            (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) *
                C8929 * C3004) *
               C8921) *
              C1210 +
          ((C4502 * C3004 +
            (C3006 * C4491 - C3007 * C4490 - C3006 * C4492 + C8928 * C4493) *
                C8929 * C3005) *
               C8921 -
           (C4217 * C3005 + C3269 * C3004) * C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
            (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) *
                C8928) *
               C8929 * C827 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C3006 +
            (C3034 * C835 - C3004 * C878 + C3035 * C1793 - C3005 * C1834) *
                C8928) *
               C8929 * C8921) *
              C1210 +
          (((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C3006 +
            (C3034 * C452 - C3004 * C495 + C3035 * C1519 - C3005 * C1552) *
                C8928) *
               C8929 * C827 +
           ((C3004 * C1832 - C3034 * C1790 + C3005 * C4536 - C3035 * C4490) *
                C3006 +
            (C3004 * C1834 - C3034 * C1793 + C3005 * C4537 - C3035 * C4492) *
                C8928) *
               C8929 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8929 * C164 - C163 * C78) * C3006 +
             (C8929 * C168 - C163 * C83) * C8928) *
                C3004 +
            ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
               C827 +
           (((C163 * C830 - C8929 * C919) * C3006 +
             (C163 * C835 - C8929 * C922) * C8928) *
                C3004 +
            ((C4575 - C4576) * C3006 + (C4577 - C4578) * C8928) * C3005) *
               C8921) *
              C1210 +
          ((((C3340 - C3339) * C3006 + (C3342 - C3341) * C8928) * C3004 +
            ((C4274 - C4275) * C3006 + (C4276 - C4277) * C8928) * C3005) *
               C827 +
           (((C4576 - C4575) * C3006 + (C4578 - C4577) * C8928) * C3004 +
            ((C8929 * C4572 - C163 * C4490) * C3006 +
             (C8929 * C4573 - C163 * C4492) * C8928) *
                C3005) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C3034 +
                      (C8928 * C210 - C3006 * C206) * C3004 +
                      (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                         C8929 * C827 +
                     ((C3006 * C830 - C8928 * C834) * C3034 +
                      (C3006 * C963 - C8928 * C966) * C3004 +
                      (C4615 - C4616) * C3035 + (C4617 - C4618) * C3005) *
                         C8929 * C8921) *
                        C1210 +
                    (((C3378 - C3377) * C3034 + (C3380 - C3379) * C3004 +
                      (C4306 - C4307) * C3035 + (C4308 - C4309) * C3005) *
                         C8929 * C827 +
                     ((C4616 - C4615) * C3034 + (C4618 - C4617) * C3004 +
                      (C8928 * C4491 - C3006 * C4490) * C3035 +
                      (C8928 * C4613 - C3006 * C4612) * C3005) *
                         C8929 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
            C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
               C8928 * C8929 * C827 -
           (C3035 * C1832 - C3115 * C1790 - C3035 * C1908 + C3005 * C1946 +
            C3034 * C875 - C3114 * C830 - C3034 * C963 + C3004 * C1004) *
               C8928 * C8929 * C8921) *
              C1210 +
          ((C3034 * C1832 - C3114 * C1790 - C3034 * C1908 + C3004 * C1946 +
            C3035 * C4536 - C3115 * C4490 - C3035 * C4612 + C3005 * C4652) *
               C8928 * C8929 * C8921 -
           (C3035 * C1550 - C3115 * C1516 - C3035 * C1610 + C3005 * C1640 +
            C3034 * C492 - C3114 * C447 - C3034 * C580 + C3004 * C621) *
               C8928 * C8929 * C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[14] += (2 * std::pow(Pi, 2.5) *
                   ((((C8929 * C164 - C163 * C78) * C3034 +
                      (C8929 * C285 - C163 * C206) * C3004 +
                      (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                         C8928 * C827 +
                     ((C163 * C830 - C8929 * C919) * C3034 +
                      (C163 * C963 - C8929 * C1047) * C3004 +
                      (C4575 - C4576) * C3035 + (C4689 - C4690) * C3005) *
                         C8928 * C8921) *
                        C1210 +
                    (((C3340 - C3339) * C3034 + (C3454 - C3453) * C3004 +
                      (C4274 - C4275) * C3035 + (C4364 - C4365) * C3005) *
                         C8928 * C827 +
                     ((C4576 - C4575) * C3034 + (C4690 - C4689) * C3004 +
                      (C8929 * C4572 - C163 * C4490) * C3035 +
                      (C8929 * C4687 - C163 * C4612) * C3005) *
                         C8928 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C163 +
             (C8928 * C323 - C3006 * C319) * C8929) *
                C3004 +
            ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
               C827 +
           (((C3006 * C830 - C8928 * C834) * C163 +
             (C3006 * C1086 - C8928 * C1089) * C8929) *
                C3004 +
            ((C4615 - C4616) * C163 + (C4727 - C4728) * C8929) * C3005) *
               C8921) *
              C1210 +
          ((((C3378 - C3377) * C163 + (C3490 - C3489) * C8929) * C3004 +
            ((C4306 - C4307) * C163 + (C4394 - C4395) * C8929) * C3005) *
               C827 +
           (((C4616 - C4615) * C163 + (C4728 - C4727) * C8929) * C3004 +
            ((C8928 * C4491 - C3006 * C4490) * C163 +
             (C8928 * C4725 - C3006 * C4724) * C8929) *
                C3005) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
            (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
                C8929) *
               C8928 * C827 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C163 +
            (C3034 * C1086 - C3004 * C1126 + C3035 * C2018 - C3005 * C2056) *
                C8929) *
               C8928 * C8921) *
              C1210 +
          (((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C163 +
            (C3034 * C703 - C3004 * C743 + C3035 * C1696 - C3005 * C1726) *
                C8929) *
               C8928 * C827 +
           ((C3004 * C1832 - C3034 * C1790 + C3005 * C4536 - C3035 * C4490) *
                C163 +
            (C3004 * C2056 - C3034 * C2018 + C3005 * C4762 - C3035 * C4724) *
                C8929) *
               C8928 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
            C3567 * C3005) *
               C8928 * C827 -
           (C4805 * C3005 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) *
                C3004) *
               C8928 * C8921) *
              C1210 +
          ((C4805 * C3004 +
            (C163 * C4572 - C387 * C4490 - C163 * C4724 + C8929 * C4797) *
                C3005) *
               C8928 * C8921 -
           (C4456 * C3005 + C3567 * C3004) * C8928 * C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
                C3004 +
            C3269 * C3005) *
               C2128 -
           (C4502 * C3005 +
            (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) *
                C8929 * C3004) *
               C8921) *
              C8854 * C1212 +
          (((C3006 * C832 - C3007 * C829 - C3006 * C833 + C8928 * C838) *
                C8929 * C3004 +
            (C3006 * C1794 - C3007 * C1791 - C3006 * C1795 + C8928 * C1797) *
                C8929 * C3005) *
               C8921 -
           (C3270 * C3005 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C8929 *
                C3004) *
               C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
            (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) *
                C8928) *
               C8929 * C2128 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C3006 +
            (C3034 * C835 - C3004 * C878 + C3035 * C1793 - C3005 * C1834) *
                C8928) *
               C8929 * C8921) *
              C8854 * C1212 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C3006 +
            (C3034 * C85 - C3004 * C126 + C3035 * C450 - C3005 * C496) *
                C8928) *
               C8929 * C2128 +
           ((C3004 * C876 - C3034 * C829 + C3005 * C1833 - C3035 * C1791) *
                C3006 +
            (C3004 * C879 - C3034 * C833 + C3005 * C1835 - C3035 * C1795) *
                C8928) *
               C8929 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8929 * C164 - C163 * C78) * C3006 +
             (C8929 * C168 - C163 * C83) * C8928) *
                C3004 +
            ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
               C2128 +
           (((C163 * C830 - C8929 * C919) * C3006 +
             (C163 * C835 - C8929 * C922) * C8928) *
                C3004 +
            ((C4575 - C4576) * C3006 + (C4577 - C4578) * C8928) * C3005) *
               C8921) *
              C8854 * C1212 +
          ((((C174 - C173) * C3006 + (C176 - C175) * C8928) * C3004 +
            ((C543 - C544) * C3006 + (C545 - C546) * C8928) * C3005) *
               C2128 +
           (((C927 - C926) * C3006 + (C929 - C928) * C8928) * C3004 +
            ((C8929 * C1871 - C163 * C1791) * C3006 +
             (C8929 * C1873 - C163 * C1795) * C8928) *
                C3005) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C3034 +
                      (C8928 * C210 - C3006 * C206) * C3004 +
                      (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                         C8929 * C2128 +
                     ((C3006 * C830 - C8928 * C834) * C3034 +
                      (C3006 * C963 - C8928 * C966) * C3004 +
                      (C4615 - C4616) * C3035 + (C4617 - C4618) * C3005) *
                         C8929 * C8921) *
                        C8854 * C1212 +
                    (((C3006 * C79 - C8928 * C84) * C3034 +
                      (C3006 * C207 - C8928 * C211) * C3004 +
                      (C3381 - C3382) * C3035 + (C3383 - C3384) * C3005) *
                         C8929 * C2128 +
                     ((C8928 * C832 - C3006 * C829) * C3034 +
                      (C8928 * C967 - C3006 * C964) * C3004 +
                      (C8928 * C1794 - C3006 * C1791) * C3035 +
                      (C8928 * C1911 - C3006 * C1909) * C3005) *
                         C8929 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
            C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
               C8928 * C8929 * C2128 -
           (C3035 * C1832 - C3115 * C1790 - C3035 * C1908 + C3005 * C1946 +
            C3034 * C875 - C3114 * C830 - C3034 * C963 + C3004 * C1004) *
               C8928 * C8929 * C8921) *
              C8854 * C1212 +
          ((C3034 * C876 - C3114 * C829 - C3034 * C964 + C3004 * C1003 +
            C3035 * C1833 - C3115 * C1791 - C3035 * C1909 + C3005 * C1947) *
               C8928 * C8929 * C8921 -
           (C3035 * C493 - C3115 * C446 - C3035 * C581 + C3005 * C620 +
            C3034 * C122 - C3114 * C79 - C3034 * C207 + C3004 * C242) *
               C8928 * C8929 * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] += (2 * std::pow(Pi, 2.5) *
                   ((((C8929 * C164 - C163 * C78) * C3034 +
                      (C8929 * C285 - C163 * C206) * C3004 +
                      (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                         C8928 * C2128 +
                     ((C163 * C830 - C8929 * C919) * C3034 +
                      (C163 * C963 - C8929 * C1047) * C3004 +
                      (C4575 - C4576) * C3035 + (C4689 - C4690) * C3005) *
                         C8928 * C8921) *
                        C8854 * C1212 +
                    (((C174 - C173) * C3034 + (C291 - C290) * C3004 +
                      (C543 - C544) * C3035 + (C668 - C669) * C3005) *
                         C8928 * C2128 +
                     ((C927 - C926) * C3034 + (C1052 - C1051) * C3004 +
                      (C8929 * C1871 - C163 * C1791) * C3035 +
                      (C8929 * C1983 - C163 * C1909) * C3005) *
                         C8928 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C163 +
             (C8928 * C323 - C3006 * C319) * C8929) *
                C3004 +
            ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
               C2128 +
           (((C3006 * C830 - C8928 * C834) * C163 +
             (C3006 * C1086 - C8928 * C1089) * C8929) *
                C3004 +
            ((C4615 - C4616) * C163 + (C4727 - C4728) * C8929) * C3005) *
               C8921) *
              C8854 * C1212 +
          ((((C3006 * C79 - C8928 * C84) * C163 +
             (C3006 * C320 - C8928 * C324) * C8929) *
                C3004 +
            ((C3381 - C3382) * C163 + (C3491 - C3492) * C8929) * C3005) *
               C2128 +
           (((C8928 * C832 - C3006 * C829) * C163 +
             (C8928 * C1090 - C3006 * C1087) * C8929) *
                C3004 +
            ((C8928 * C1794 - C3006 * C1791) * C163 +
             (C8928 * C2021 - C3006 * C2019) * C8929) *
                C3005) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
            (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
                C8929) *
               C8928 * C2128 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C163 +
            (C3034 * C1086 - C3004 * C1126 + C3035 * C2018 - C3005 * C2056) *
                C8929) *
               C8928 * C8921) *
              C8854 * C1212 +
          (((C3034 * C79 - C3004 * C122 + C3035 * C446 - C3005 * C493) * C163 +
            (C3034 * C320 - C3004 * C354 + C3035 * C704 - C3005 * C744) *
                C8929) *
               C8928 * C2128 +
           ((C3004 * C876 - C3034 * C829 + C3005 * C1833 - C3035 * C1791) *
                C163 +
            (C3004 * C1127 - C3034 * C1087 + C3005 * C2057 - C3035 * C2019) *
                C8929) *
               C8928 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
            C3567 * C3005) *
               C8928 * C2128 -
           (C4805 * C3005 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) *
                C3004) *
               C8928 * C8921) *
              C8854 * C1212 +
          ((C1175 * C3004 +
            (C163 * C1871 - C387 * C1791 - C163 * C2019 + C8929 * C2093) *
                C3005) *
               C8928 * C8921 -
           (C792 * C3005 + C405 * C3004) * C8928 * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
                C3004 +
            C3269 * C3005) *
               C2128 -
           (C4502 * C3005 +
            (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) *
                C8929 * C3004) *
               C8921) *
              C442 +
          ((C4502 * C3004 +
            (C3006 * C4491 - C3007 * C4490 - C3006 * C4492 + C8928 * C4493) *
                C8929 * C3005) *
               C8921 -
           (C4217 * C3005 + C3269 * C3004) * C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
            (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) *
                C8928) *
               C8929 * C2128 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C3006 +
            (C3034 * C835 - C3004 * C878 + C3035 * C1793 - C3005 * C1834) *
                C8928) *
               C8929 * C8921) *
              C442 +
          (((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C3006 +
            (C3034 * C452 - C3004 * C495 + C3035 * C1519 - C3005 * C1552) *
                C8928) *
               C8929 * C2128 +
           ((C3004 * C1832 - C3034 * C1790 + C3005 * C4536 - C3035 * C4490) *
                C3006 +
            (C3004 * C1834 - C3034 * C1793 + C3005 * C4537 - C3035 * C4492) *
                C8928) *
               C8929 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8929 * C164 - C163 * C78) * C3006 +
             (C8929 * C168 - C163 * C83) * C8928) *
                C3004 +
            ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
               C2128 +
           (((C163 * C830 - C8929 * C919) * C3006 +
             (C163 * C835 - C8929 * C922) * C8928) *
                C3004 +
            ((C4575 - C4576) * C3006 + (C4577 - C4578) * C8928) * C3005) *
               C8921) *
              C442 +
          ((((C3340 - C3339) * C3006 + (C3342 - C3341) * C8928) * C3004 +
            ((C4274 - C4275) * C3006 + (C4276 - C4277) * C8928) * C3005) *
               C2128 +
           (((C4576 - C4575) * C3006 + (C4578 - C4577) * C8928) * C3004 +
            ((C8929 * C4572 - C163 * C4490) * C3006 +
             (C8929 * C4573 - C163 * C4492) * C8928) *
                C3005) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C3034 +
                      (C8928 * C210 - C3006 * C206) * C3004 +
                      (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                         C8929 * C2128 +
                     ((C3006 * C830 - C8928 * C834) * C3034 +
                      (C3006 * C963 - C8928 * C966) * C3004 +
                      (C4615 - C4616) * C3035 + (C4617 - C4618) * C3005) *
                         C8929 * C8921) *
                        C442 +
                    (((C3378 - C3377) * C3034 + (C3380 - C3379) * C3004 +
                      (C4306 - C4307) * C3035 + (C4308 - C4309) * C3005) *
                         C8929 * C2128 +
                     ((C4616 - C4615) * C3034 + (C4618 - C4617) * C3004 +
                      (C8928 * C4491 - C3006 * C4490) * C3035 +
                      (C8928 * C4613 - C3006 * C4612) * C3005) *
                         C8929 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
            C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
               C8928 * C8929 * C2128 -
           (C3035 * C1832 - C3115 * C1790 - C3035 * C1908 + C3005 * C1946 +
            C3034 * C875 - C3114 * C830 - C3034 * C963 + C3004 * C1004) *
               C8928 * C8929 * C8921) *
              C442 +
          ((C3034 * C1832 - C3114 * C1790 - C3034 * C1908 + C3004 * C1946 +
            C3035 * C4536 - C3115 * C4490 - C3035 * C4612 + C3005 * C4652) *
               C8928 * C8929 * C8921 -
           (C3035 * C1550 - C3115 * C1516 - C3035 * C1610 + C3005 * C1640 +
            C3034 * C492 - C3114 * C447 - C3034 * C580 + C3004 * C621) *
               C8928 * C8929 * C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] += (2 * std::pow(Pi, 2.5) *
                   ((((C8929 * C164 - C163 * C78) * C3034 +
                      (C8929 * C285 - C163 * C206) * C3004 +
                      (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                         C8928 * C2128 +
                     ((C163 * C830 - C8929 * C919) * C3034 +
                      (C163 * C963 - C8929 * C1047) * C3004 +
                      (C4575 - C4576) * C3035 + (C4689 - C4690) * C3005) *
                         C8928 * C8921) *
                        C442 +
                    (((C3340 - C3339) * C3034 + (C3454 - C3453) * C3004 +
                      (C4274 - C4275) * C3035 + (C4364 - C4365) * C3005) *
                         C8928 * C2128 +
                     ((C4576 - C4575) * C3034 + (C4690 - C4689) * C3004 +
                      (C8929 * C4572 - C163 * C4490) * C3035 +
                      (C8929 * C4687 - C163 * C4612) * C3005) *
                         C8928 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C163 +
             (C8928 * C323 - C3006 * C319) * C8929) *
                C3004 +
            ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
               C2128 +
           (((C3006 * C830 - C8928 * C834) * C163 +
             (C3006 * C1086 - C8928 * C1089) * C8929) *
                C3004 +
            ((C4615 - C4616) * C163 + (C4727 - C4728) * C8929) * C3005) *
               C8921) *
              C442 +
          ((((C3378 - C3377) * C163 + (C3490 - C3489) * C8929) * C3004 +
            ((C4306 - C4307) * C163 + (C4394 - C4395) * C8929) * C3005) *
               C2128 +
           (((C4616 - C4615) * C163 + (C4728 - C4727) * C8929) * C3004 +
            ((C8928 * C4491 - C3006 * C4490) * C163 +
             (C8928 * C4725 - C3006 * C4724) * C8929) *
                C3005) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
            (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
                C8929) *
               C8928 * C2128 +
           ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
                C163 +
            (C3034 * C1086 - C3004 * C1126 + C3035 * C2018 - C3005 * C2056) *
                C8929) *
               C8928 * C8921) *
              C442 +
          (((C3034 * C447 - C3004 * C492 + C3035 * C1516 - C3005 * C1550) *
                C163 +
            (C3034 * C703 - C3004 * C743 + C3035 * C1696 - C3005 * C1726) *
                C8929) *
               C8928 * C2128 +
           ((C3004 * C1832 - C3034 * C1790 + C3005 * C4536 - C3035 * C4490) *
                C163 +
            (C3004 * C2056 - C3034 * C2018 + C3005 * C4762 - C3035 * C4724) *
                C8929) *
               C8928 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
            C3567 * C3005) *
               C8928 * C2128 -
           (C4805 * C3005 +
            (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) *
                C3004) *
               C8928 * C8921) *
              C442 +
          ((C4805 * C3004 +
            (C163 * C4572 - C387 * C4490 - C163 * C4724 + C8929 * C4797) *
                C3005) *
               C8928 * C8921 -
           (C4456 * C3005 + C3567 * C3004) * C8928 * C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C8929 *
               C3004 +
           C3269 * C3005) *
              C2734 -
          (C4502 * C3005 +
           (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) * C8929 *
               C3004) *
              C2735 +
          ((C3006 * C2739 - C3007 * C2737 - C3006 * C2740 + C8928 * C2743) *
               C8929 * C3004 +
           (C3006 * C5444 - C3007 * C5443 - C3006 * C5445 + C8928 * C5446) *
               C8929 * C3005) *
              C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C3006 +
           (C3004 * C125 - C3034 * C83 + C3005 * C495 - C3035 * C452) * C8928) *
              C8929 * C2734 +
          ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
               C3006 +
           (C3034 * C835 - C3004 * C878 + C3035 * C1793 - C3005 * C1834) *
               C8928) *
              C8929 * C2735 +
          ((C3004 * C2771 - C3034 * C2737 + C3005 * C5473 - C3035 * C5443) *
               C3006 +
           (C3004 * C2773 - C3034 * C2740 + C3005 * C5474 - C3035 * C5445) *
               C8928) *
              C8929 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8929 * C164 - C163 * C78) * C3006 +
            (C8929 * C168 - C163 * C83) * C8928) *
               C3004 +
           ((C3339 - C3340) * C3006 + (C3341 - C3342) * C8928) * C3005) *
              C2734 +
          (((C163 * C830 - C8929 * C919) * C3006 +
            (C163 * C835 - C8929 * C922) * C8928) *
               C3004 +
           ((C4575 - C4576) * C3006 + (C4577 - C4578) * C8928) * C3005) *
              C2735 +
          (((C8929 * C2801 - C163 * C2737) * C3006 +
            (C8929 * C2803 - C163 * C2740) * C8928) *
               C3004 +
           ((C8929 * C5501 - C163 * C5443) * C3006 +
            (C8929 * C5502 - C163 * C5445) * C8928) *
               C3005) *
              C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[17] += (2 * std::pow(Pi, 2.5) *
                   (((C8928 * C82 - C3006 * C78) * C3034 +
                     (C8928 * C210 - C3006 * C206) * C3004 +
                     (C3377 - C3378) * C3035 + (C3379 - C3380) * C3005) *
                        C8929 * C2734 +
                    ((C3006 * C830 - C8928 * C834) * C3034 +
                     (C3006 * C963 - C8928 * C966) * C3004 +
                     (C4615 - C4616) * C3035 + (C4617 - C4618) * C3005) *
                        C8929 * C2735 +
                    ((C8928 * C2739 - C3006 * C2737) * C3034 +
                     (C8928 * C2833 - C3006 * C2831) * C3004 +
                     (C8928 * C5444 - C3006 * C5443) * C3035 +
                     (C8928 * C5530 - C3006 * C5529) * C3005) *
                        C8929 * C2736) *
                   C8854 * C8820) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((C3034 * C121 - C3114 * C78 - C3034 * C206 + C3004 * C241 +
           C3035 * C492 - C3115 * C447 - C3035 * C580 + C3005 * C621) *
              C8928 * C8929 * C2734 -
          (C3035 * C1832 - C3115 * C1790 - C3035 * C1908 + C3005 * C1946 +
           C3034 * C875 - C3114 * C830 - C3034 * C963 + C3004 * C1004) *
              C8928 * C8929 * C2735 +
          (C3034 * C2771 - C3114 * C2737 - C3034 * C2831 + C3004 * C2861 +
           C3035 * C5473 - C3115 * C5443 - C3035 * C5529 + C3005 * C5557) *
              C8928 * C8929 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[17] += (2 * std::pow(Pi, 2.5) *
                   (((C8929 * C164 - C163 * C78) * C3034 +
                     (C8929 * C285 - C163 * C206) * C3004 +
                     (C3339 - C3340) * C3035 + (C3453 - C3454) * C3005) *
                        C8928 * C2734 +
                    ((C163 * C830 - C8929 * C919) * C3034 +
                     (C163 * C963 - C8929 * C1047) * C3004 +
                     (C4575 - C4576) * C3035 + (C4689 - C4690) * C3005) *
                        C8928 * C2735 +
                    ((C8929 * C2801 - C163 * C2737) * C3034 +
                     (C8929 * C2889 - C163 * C2831) * C3004 +
                     (C8929 * C5501 - C163 * C5443) * C3035 +
                     (C8929 * C5584 - C163 * C5529) * C3005) *
                        C8928 * C2736) *
                   C8854 * C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8928 * C82 - C3006 * C78) * C163 +
            (C8928 * C323 - C3006 * C319) * C8929) *
               C3004 +
           ((C3377 - C3378) * C163 + (C3489 - C3490) * C8929) * C3005) *
              C2734 +
          (((C3006 * C830 - C8928 * C834) * C163 +
            (C3006 * C1086 - C8928 * C1089) * C8929) *
               C3004 +
           ((C4615 - C4616) * C163 + (C4727 - C4728) * C8929) * C3005) *
              C2735 +
          (((C8928 * C2739 - C3006 * C2737) * C163 +
            (C8928 * C2919 - C3006 * C2917) * C8929) *
               C3004 +
           ((C8928 * C5444 - C3006 * C5443) * C163 +
            (C8928 * C5612 - C3006 * C5611) * C8929) *
               C3005) *
              C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3004 * C121 - C3034 * C78 + C3005 * C492 - C3035 * C447) * C163 +
           (C3004 * C353 - C3034 * C319 + C3005 * C743 - C3035 * C703) *
               C8929) *
              C8928 * C2734 +
          ((C3034 * C830 - C3004 * C875 + C3035 * C1790 - C3005 * C1832) *
               C163 +
           (C3034 * C1086 - C3004 * C1126 + C3035 * C2018 - C3005 * C2056) *
               C8929) *
              C8928 * C2735 +
          ((C3004 * C2771 - C3034 * C2737 + C3005 * C5473 - C3035 * C5443) *
               C163 +
           (C3004 * C2947 - C3034 * C2917 + C3005 * C5639 - C3035 * C5611) *
               C8929) *
              C8928 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (2 * std::pow(Pi, 2.5) *
         (((C163 * C164 - C387 * C78 - C163 * C319 + C8929 * C388) * C3004 +
           C3567 * C3005) *
              C8928 * C2734 -
          (C4805 * C3005 +
           (C163 * C919 - C387 * C830 - C163 * C1086 + C8929 * C1166) * C3004) *
              C8928 * C2735 +
          ((C163 * C2801 - C387 * C2737 - C163 * C2917 + C8929 * C2975) *
               C3004 +
           (C163 * C5501 - C387 * C5443 - C163 * C5611 + C8929 * C5666) *
               C3005) *
              C8928 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
           (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) *
               C5694) *
              C8930 * C8871 * C8854 * C71 -
          ((C3006 * C832 - C3007 * C829 - C3006 * C833 + C8928 * C838) * C5694 +
           (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C5693) *
              C8930 * C8871 * C8854 * C72 +
          ((C3006 * C86 - C3007 * C80 - C3006 * C87 + C8928 * C92) * C5693 +
           (C3006 * C836 - C3007 * C831 - C3006 * C837 + C8928 * C840) *
               C5694) *
              C8930 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C3006 +
                      (C8930 * C125 - C120 * C83) * C8928) *
                         C5693 +
                     ((C8930 * C875 - C120 * C830) * C3006 +
                      (C8930 * C878 - C120 * C835) * C8928) *
                         C5694) *
                        C8871 * C8854 * C71 +
                    (((C131 - C130) * C3006 + (C133 - C132) * C8928) * C5693 +
                     ((C882 - C883) * C3006 + (C884 - C885) * C8928) * C5694) *
                        C8871 * C8854 * C72 +
                    (((C135 - C134) * C3006 + (C137 - C136) * C8928) * C5693 +
                     ((C8930 * C877 - C120 * C831) * C3006 +
                      (C8930 * C880 - C120 * C837) * C8928) *
                         C5694) *
                        C8871 * C8854 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
           (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) * C8928) *
              C8930 * C8871 * C8854 * C71 +
          ((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C3006 +
           (C5747 * C85 - C5693 * C169 + C5748 * C833 - C5694 * C923) * C8928) *
              C8930 * C8871 * C8854 * C72 +
          ((C5693 * C166 - C5747 * C80 + C5694 * C921 - C5748 * C831) * C3006 +
           (C5693 * C170 - C5747 * C87 + C5694 * C924 - C5748 * C837) * C8928) *
              C8930 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C120 +
                      (C8928 * C210 - C3006 * C206) * C8930) *
                         C5693 +
                     ((C8928 * C834 - C3006 * C830) * C120 +
                      (C8928 * C966 - C3006 * C963) * C8930) *
                         C5694) *
                        C8871 * C8854 * C71 +
                    (((C3006 * C79 - C8928 * C84) * C120 +
                      (C3006 * C207 - C8928 * C211) * C8930) *
                         C5693 +
                     ((C3006 * C829 - C8928 * C832) * C120 +
                      (C3006 * C964 - C8928 * C967) * C8930) *
                         C5694) *
                        C8871 * C8854 * C72 +
                    (((C8928 * C86 - C3006 * C80) * C120 +
                      (C8928 * C212 - C3006 * C208) * C8930) *
                         C5693 +
                     ((C8928 * C836 - C3006 * C831) * C120 +
                      (C8928 * C968 - C3006 * C965) * C8930) *
                         C5694) *
                        C8871 * C8854 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
               C5693 +
           (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C8928 *
               C5694) *
              C8871 * C8854 * C71 -
          (C1013 * C8928 * C5694 + C258 * C8928 * C5693) * C8871 * C8854 * C72 +
          (C259 * C8928 * C5693 +
           (C120 * C877 - C240 * C831 - C120 * C965 + C8930 * C1005) * C8928 *
               C5694) *
              C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
           (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
               C8930) *
              C8928 * C8871 * C8854 * C71 +
          ((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C120 +
           (C5747 * C207 - C5693 * C286 + C5748 * C964 - C5694 * C1048) *
               C8930) *
              C8928 * C8871 * C8854 * C72 +
          ((C5693 * C166 - C5747 * C80 + C5694 * C921 - C5748 * C831) * C120 +
           (C5693 * C287 - C5747 * C208 + C5694 * C1049 - C5748 * C965) *
               C8930) *
              C8928 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] += (2 * std::pow(Pi, 2.5) *
                   (((C8928 * C82 - C3006 * C78) * C5747 +
                     (C8928 * C323 - C3006 * C319) * C5693 +
                     (C8928 * C834 - C3006 * C830) * C5748 +
                     (C8928 * C1089 - C3006 * C1086) * C5694) *
                        C8930 * C8871 * C8854 * C71 +
                    ((C3006 * C79 - C8928 * C84) * C5747 +
                     (C3006 * C320 - C8928 * C324) * C5693 +
                     (C3006 * C829 - C8928 * C832) * C5748 +
                     (C3006 * C1087 - C8928 * C1090) * C5694) *
                        C8930 * C8871 * C8854 * C72 +
                    ((C8928 * C86 - C3006 * C80) * C5747 +
                     (C8928 * C325 - C3006 * C321) * C5693 +
                     (C8928 * C836 - C3006 * C831) * C5748 +
                     (C8928 * C1091 - C3006 * C1088) * C5694) *
                        C8930 * C8871 * C8854 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] += (2 * std::pow(Pi, 2.5) *
                   (((C8930 * C121 - C120 * C78) * C5747 +
                     (C8930 * C353 - C120 * C319) * C5693 +
                     (C8930 * C875 - C120 * C830) * C5748 +
                     (C8930 * C1126 - C120 * C1086) * C5694) *
                        C8928 * C8871 * C8854 * C71 +
                    ((C131 - C130) * C5747 + (C359 - C358) * C5693 +
                     (C882 - C883) * C5748 + (C1130 - C1131) * C5694) *
                        C8928 * C8871 * C8854 * C72 +
                    ((C135 - C134) * C5747 + (C361 - C360) * C5693 +
                     (C8930 * C877 - C120 * C831) * C5748 +
                     (C8930 * C1128 - C120 * C1088) * C5694) *
                        C8928 * C8871 * C8854 * C73)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (2 * std::pow(Pi, 2.5) *
         ((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
           C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
              C8930 * C8928 * C8871 * C8854 * C71 -
          (C5748 * C920 - C5906 * C829 - C5748 * C1087 + C5694 * C1165 +
           C5747 * C165 - C5905 * C79 - C5747 * C320 + C5693 * C389) *
              C8930 * C8928 * C8871 * C8854 * C72 +
          (C5747 * C166 - C5905 * C80 - C5747 * C321 + C5693 * C390 +
           C5748 * C921 - C5906 * C831 - C5748 * C1088 + C5694 * C1167) *
              C8930 * C8928 * C8871 * C8854 * C73)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
            (C3006 * C834 - C3007 * C830 - C3006 * C835 + C8928 * C839) *
                C5694) *
               C8930 * C8871 * C442 -
           (C4501 * C5694 + C3267 * C5693) * C8930 * C8871 * C8919) *
              C444 +
          ((C3268 * C5693 +
            (C3006 * C1794 - C3007 * C1791 - C3006 * C1795 + C8928 * C1797) *
                C5694) *
               C8930 * C8871 * C8919 -
           ((C3006 * C832 - C3007 * C829 - C3006 * C833 + C8928 * C838) *
                C5694 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C5693) *
               C8930 * C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[19] += (2 * std::pow(Pi, 2.5) *
                   (((((C8930 * C121 - C120 * C78) * C3006 +
                       (C8930 * C125 - C120 * C83) * C8928) *
                          C5693 +
                      ((C8930 * C875 - C120 * C830) * C3006 +
                       (C8930 * C878 - C120 * C835) * C8928) *
                          C5694) *
                         C8871 * C442 +
                     (((C120 * C447 - C8930 * C492) * C3006 +
                       (C120 * C452 - C8930 * C495) * C8928) *
                          C5693 +
                      ((C120 * C1790 - C8930 * C1832) * C3006 +
                       (C120 * C1793 - C8930 * C1834) * C8928) *
                          C5694) *
                         C8871 * C8919) *
                        C444 +
                    ((((C131 - C130) * C3006 + (C133 - C132) * C8928) * C5693 +
                      ((C882 - C883) * C3006 + (C884 - C885) * C8928) * C5694) *
                         C8871 * C442 +
                     (((C500 - C499) * C3006 + (C502 - C501) * C8928) * C5693 +
                      ((C8930 * C1833 - C120 * C1791) * C3006 +
                       (C8930 * C1835 - C120 * C1795) * C8928) *
                          C5694) *
                         C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
            (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) *
                C8928) *
               C8930 * C8871 * C442 +
           ((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C3006 +
            (C5747 * C452 - C5693 * C539 + C5748 * C1793 - C5694 * C1872) *
                C8928) *
               C8930 * C8871 * C8919) *
              C444 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C3006 +
            (C5747 * C85 - C5693 * C169 + C5748 * C833 - C5694 * C923) *
                C8928) *
               C8930 * C8871 * C442 +
           ((C5693 * C537 - C5747 * C446 + C5694 * C1871 - C5748 * C1791) *
                C3006 +
            (C5693 * C540 - C5747 * C450 + C5694 * C1873 - C5748 * C1795) *
                C8928) *
               C8930 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C120 +
             (C8928 * C210 - C3006 * C206) * C8930) *
                C5693 +
            ((C8928 * C834 - C3006 * C830) * C120 +
             (C8928 * C966 - C3006 * C963) * C8930) *
                C5694) *
               C8871 * C442 +
           (((C3378 - C3377) * C120 + (C3380 - C3379) * C8930) * C5693 +
            ((C4615 - C4616) * C120 + (C4617 - C4618) * C8930) * C5694) *
               C8871 * C8919) *
              C444 +
          ((((C3006 * C79 - C8928 * C84) * C120 +
             (C3006 * C207 - C8928 * C211) * C8930) *
                C5693 +
            ((C3006 * C829 - C8928 * C832) * C120 +
             (C3006 * C964 - C8928 * C967) * C8930) *
                C5694) *
               C8871 * C442 +
           (((C3382 - C3381) * C120 + (C3384 - C3383) * C8930) * C5693 +
            ((C8928 * C1794 - C3006 * C1791) * C120 +
             (C8928 * C1911 - C3006 * C1909) * C8930) *
                C5694) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
                C5693 +
            (C120 * C875 - C240 * C830 - C120 * C963 + C8930 * C1004) * C8928 *
                C5694) *
               C8871 * C442 -
           ((C120 * C1832 - C240 * C1790 - C120 * C1908 + C8930 * C1946) *
                C8928 * C5694 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C8928 *
                C5693) *
               C8871 * C8919) *
              C444 +
          ((C630 * C8928 * C5693 +
            (C120 * C1833 - C240 * C1791 - C120 * C1909 + C8930 * C1947) *
                C8928 * C5694) *
               C8871 * C8919 -
           (C1013 * C8928 * C5694 + C258 * C8928 * C5693) * C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
            (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
                C8930) *
               C8928 * C8871 * C442 +
           ((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C120 +
            (C5747 * C580 - C5693 * C664 + C5748 * C1908 - C5694 * C1982) *
                C8930) *
               C8928 * C8871 * C8919) *
              C444 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C120 +
            (C5747 * C207 - C5693 * C286 + C5748 * C964 - C5694 * C1048) *
                C8930) *
               C8928 * C8871 * C442 +
           ((C5693 * C537 - C5747 * C446 + C5694 * C1871 - C5748 * C1791) *
                C120 +
            (C5693 * C665 - C5747 * C581 + C5694 * C1983 - C5748 * C1909) *
                C8930) *
               C8928 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C5747 +
                      (C8928 * C323 - C3006 * C319) * C5693 +
                      (C8928 * C834 - C3006 * C830) * C5748 +
                      (C8928 * C1089 - C3006 * C1086) * C5694) *
                         C8930 * C8871 * C442 +
                     ((C3378 - C3377) * C5747 + (C3490 - C3489) * C5693 +
                      (C4615 - C4616) * C5748 + (C4727 - C4728) * C5694) *
                         C8930 * C8871 * C8919) *
                        C444 +
                    (((C3006 * C79 - C8928 * C84) * C5747 +
                      (C3006 * C320 - C8928 * C324) * C5693 +
                      (C3006 * C829 - C8928 * C832) * C5748 +
                      (C3006 * C1087 - C8928 * C1090) * C5694) *
                         C8930 * C8871 * C442 +
                     ((C3382 - C3381) * C5747 + (C3492 - C3491) * C5693 +
                      (C8928 * C1794 - C3006 * C1791) * C5748 +
                      (C8928 * C2021 - C3006 * C2019) * C5694) *
                         C8930 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[19] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C5747 +
                      (C8930 * C353 - C120 * C319) * C5693 +
                      (C8930 * C875 - C120 * C830) * C5748 +
                      (C8930 * C1126 - C120 * C1086) * C5694) *
                         C8928 * C8871 * C442 +
                     ((C120 * C447 - C8930 * C492) * C5747 +
                      (C120 * C703 - C8930 * C743) * C5693 +
                      (C120 * C1790 - C8930 * C1832) * C5748 +
                      (C120 * C2018 - C8930 * C2056) * C5694) *
                         C8928 * C8871 * C8919) *
                        C444 +
                    (((C131 - C130) * C5747 + (C359 - C358) * C5693 +
                      (C882 - C883) * C5748 + (C1130 - C1131) * C5694) *
                         C8928 * C8871 * C442 +
                     ((C500 - C499) * C5747 + (C748 - C747) * C5693 +
                      (C8930 * C1833 - C120 * C1791) * C5748 +
                      (C8930 * C2057 - C120 * C2019) * C5694) *
                         C8928 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
            C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
               C8930 * C8928 * C8871 * C442 -
           (C5748 * C1870 - C5906 * C1790 - C5748 * C2018 + C5694 * C2092 +
            C5747 * C536 - C5905 * C447 - C5747 * C703 + C5693 * C783) *
               C8930 * C8928 * C8871 * C8919) *
              C444 +
          ((C5747 * C537 - C5905 * C446 - C5747 * C704 + C5693 * C782 +
            C5748 * C1871 - C5906 * C1791 - C5748 * C2019 + C5694 * C2093) *
               C8930 * C8928 * C8871 * C8919 -
           (C5748 * C920 - C5906 * C829 - C5748 * C1087 + C5694 * C1165 +
            C5747 * C165 - C5905 * C79 - C5747 * C320 + C5693 * C389) *
               C8930 * C8928 * C8871 * C442) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
            C6260 * C5694) *
               C8930 * C827 -
           ((C3006 * C2739 - C3007 * C2737 - C3006 * C2740 + C8928 * C2743) *
                C5694 +
            C6260 * C5693) *
               C8930 * C8921) *
              C8854 * C444 +
          ((C6261 * C5693 +
            (C3006 * C2741 - C3007 * C2738 - C3006 * C2742 + C8928 * C2744) *
                C5694) *
               C8930 * C8921 -
           (C6261 * C5694 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C5693) *
               C8930 * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8930 * C121 - C120 * C78) * C3006 +
             (C8930 * C125 - C120 * C83) * C8928) *
                C5693 +
            ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
               C827 +
           (((C6297 - C6296) * C3006 + (C6299 - C6298) * C8928) * C5693 +
            ((C120 * C2737 - C8930 * C2771) * C3006 +
             (C120 * C2740 - C8930 * C2773) * C8928) *
                C5694) *
               C8921) *
              C8854 * C444 +
          ((((C131 - C130) * C3006 + (C133 - C132) * C8928) * C5693 +
            ((C882 - C883) * C3006 + (C884 - C885) * C8928) * C5694) *
               C827 +
           (((C883 - C882) * C3006 + (C885 - C884) * C8928) * C5693 +
            ((C8930 * C2772 - C120 * C2738) * C3006 +
             (C8930 * C2774 - C120 * C2742) * C8928) *
                C5694) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
            (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) *
                C8928) *
               C8930 * C827 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C3006 +
            (C5747 * C835 - C5693 * C922 + C5748 * C2740 - C5694 * C2803) *
                C8928) *
               C8930 * C8921) *
              C8854 * C444 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C3006 +
            (C5747 * C85 - C5693 * C169 + C5748 * C833 - C5694 * C923) *
                C8928) *
               C8930 * C827 +
           ((C5693 * C920 - C5747 * C829 + C5694 * C2802 - C5748 * C2738) *
                C3006 +
            (C5693 * C923 - C5747 * C833 + C5694 * C2804 - C5748 * C2742) *
                C8928) *
               C8930 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C120 +
             (C8928 * C210 - C3006 * C206) * C8930) *
                C5693 +
            ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
               C827 +
           (((C6369 - C6368) * C120 + (C6371 - C6370) * C8930) * C5693 +
            ((C3006 * C2737 - C8928 * C2739) * C120 +
             (C3006 * C2831 - C8928 * C2833) * C8930) *
                C5694) *
               C8921) *
              C8854 * C444 +
          ((((C3006 * C79 - C8928 * C84) * C120 +
             (C3006 * C207 - C8928 * C211) * C8930) *
                C5693 +
            ((C6372 - C6373) * C120 + (C6374 - C6375) * C8930) * C5694) *
               C827 +
           (((C6373 - C6372) * C120 + (C6375 - C6374) * C8930) * C5693 +
            ((C8928 * C2741 - C3006 * C2738) * C120 +
             (C8928 * C2834 - C3006 * C2832) * C8930) *
                C5694) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
                C5693 +
            C6418 * C5694) *
               C827 -
           ((C120 * C2771 - C240 * C2737 - C120 * C2831 + C8930 * C2861) *
                C8928 * C5694 +
            C6418 * C5693) *
               C8921) *
              C8854 * C444 +
          ((C6414 * C5693 +
            (C120 * C2772 - C240 * C2738 - C120 * C2832 + C8930 * C2862) *
                C8928 * C5694) *
               C8921 -
           (C6414 * C5694 + C258 * C8928 * C5693) * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
            (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
                C8930) *
               C8928 * C827 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C120 +
            (C5747 * C963 - C5693 * C1047 + C5748 * C2831 - C5694 * C2889) *
                C8930) *
               C8928 * C8921) *
              C8854 * C444 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C120 +
            (C5747 * C207 - C5693 * C286 + C5748 * C964 - C5694 * C1048) *
                C8930) *
               C8928 * C827 +
           ((C5693 * C920 - C5747 * C829 + C5694 * C2802 - C5748 * C2738) *
                C120 +
            (C5693 * C1048 - C5747 * C964 + C5694 * C2890 - C5748 * C2832) *
                C8930) *
               C8928 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C5747 +
                      (C8928 * C323 - C3006 * C319) * C5693 +
                      (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                         C8930 * C827 +
                     ((C6369 - C6368) * C5747 + (C6488 - C6487) * C5693 +
                      (C3006 * C2737 - C8928 * C2739) * C5748 +
                      (C3006 * C2917 - C8928 * C2919) * C5694) *
                         C8930 * C8921) *
                        C8854 * C444 +
                    (((C3006 * C79 - C8928 * C84) * C5747 +
                      (C3006 * C320 - C8928 * C324) * C5693 +
                      (C6372 - C6373) * C5748 + (C6489 - C6490) * C5694) *
                         C8930 * C827 +
                     ((C6373 - C6372) * C5747 + (C6490 - C6489) * C5693 +
                      (C8928 * C2741 - C3006 * C2738) * C5748 +
                      (C8928 * C2920 - C3006 * C2918) * C5694) *
                         C8930 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[20] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C5747 +
                      (C8930 * C353 - C120 * C319) * C5693 +
                      (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                         C8928 * C827 +
                     ((C6297 - C6296) * C5747 + (C6526 - C6525) * C5693 +
                      (C120 * C2737 - C8930 * C2771) * C5748 +
                      (C120 * C2917 - C8930 * C2947) * C5694) *
                         C8928 * C8921) *
                        C8854 * C444 +
                    (((C131 - C130) * C5747 + (C359 - C358) * C5693 +
                      (C882 - C883) * C5748 + (C1130 - C1131) * C5694) *
                         C8928 * C827 +
                     ((C883 - C882) * C5747 + (C1131 - C1130) * C5693 +
                      (C8930 * C2772 - C120 * C2738) * C5748 +
                      (C8930 * C2948 - C120 * C2918) * C5694) *
                         C8928 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
            C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
               C8930 * C8928 * C827 -
           (C5748 * C2801 - C5906 * C2737 - C5748 * C2917 + C5694 * C2975 +
            C5747 * C919 - C5905 * C830 - C5747 * C1086 + C5693 * C1166) *
               C8930 * C8928 * C8921) *
              C8854 * C444 +
          ((C5747 * C920 - C5905 * C829 - C5747 * C1087 + C5693 * C1165 +
            C5748 * C2802 - C5906 * C2738 - C5748 * C2918 + C5694 * C2976) *
               C8930 * C8928 * C8921 -
           (C5748 * C920 - C5906 * C829 - C5748 * C1087 + C5694 * C1165 +
            C5747 * C165 - C5905 * C79 - C5747 * C320 + C5693 * C389) *
               C8930 * C8928 * C827) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
            C6260 * C5694) *
               C8930 * C8871 * C1210 -
           (C4501 * C5694 + C3267 * C5693) * C8930 * C8871 * C8919) *
              C1212 +
          ((C3268 * C5693 +
            (C3006 * C1794 - C3007 * C1791 - C3006 * C1795 + C8928 * C1797) *
                C5694) *
               C8930 * C8871 * C8919 -
           (C6261 * C5694 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C5693) *
               C8930 * C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8930 * C121 - C120 * C78) * C3006 +
             (C8930 * C125 - C120 * C83) * C8928) *
                C5693 +
            ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
               C8871 * C1210 +
           (((C120 * C447 - C8930 * C492) * C3006 +
             (C120 * C452 - C8930 * C495) * C8928) *
                C5693 +
            ((C120 * C1790 - C8930 * C1832) * C3006 +
             (C120 * C1793 - C8930 * C1834) * C8928) *
                C5694) *
               C8871 * C8919) *
              C1212 +
          ((((C131 - C130) * C3006 + (C133 - C132) * C8928) * C5693 +
            ((C882 - C883) * C3006 + (C884 - C885) * C8928) * C5694) *
               C8871 * C1210 +
           (((C500 - C499) * C3006 + (C502 - C501) * C8928) * C5693 +
            ((C8930 * C1833 - C120 * C1791) * C3006 +
             (C8930 * C1835 - C120 * C1795) * C8928) *
                C5694) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
            (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) *
                C8928) *
               C8930 * C8871 * C1210 +
           ((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C3006 +
            (C5747 * C452 - C5693 * C539 + C5748 * C1793 - C5694 * C1872) *
                C8928) *
               C8930 * C8871 * C8919) *
              C1212 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C3006 +
            (C5747 * C85 - C5693 * C169 + C5748 * C833 - C5694 * C923) *
                C8928) *
               C8930 * C8871 * C1210 +
           ((C5693 * C537 - C5747 * C446 + C5694 * C1871 - C5748 * C1791) *
                C3006 +
            (C5693 * C540 - C5747 * C450 + C5694 * C1873 - C5748 * C1795) *
                C8928) *
               C8930 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C120 +
             (C8928 * C210 - C3006 * C206) * C8930) *
                C5693 +
            ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
               C8871 * C1210 +
           (((C3378 - C3377) * C120 + (C3380 - C3379) * C8930) * C5693 +
            ((C4615 - C4616) * C120 + (C4617 - C4618) * C8930) * C5694) *
               C8871 * C8919) *
              C1212 +
          ((((C3006 * C79 - C8928 * C84) * C120 +
             (C3006 * C207 - C8928 * C211) * C8930) *
                C5693 +
            ((C6372 - C6373) * C120 + (C6374 - C6375) * C8930) * C5694) *
               C8871 * C1210 +
           (((C3382 - C3381) * C120 + (C3384 - C3383) * C8930) * C5693 +
            ((C8928 * C1794 - C3006 * C1791) * C120 +
             (C8928 * C1911 - C3006 * C1909) * C8930) *
                C5694) *
               C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
                C5693 +
            C6418 * C5694) *
               C8871 * C1210 -
           ((C120 * C1832 - C240 * C1790 - C120 * C1908 + C8930 * C1946) *
                C8928 * C5694 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C8928 *
                C5693) *
               C8871 * C8919) *
              C1212 +
          ((C630 * C8928 * C5693 +
            (C120 * C1833 - C240 * C1791 - C120 * C1909 + C8930 * C1947) *
                C8928 * C5694) *
               C8871 * C8919 -
           (C6414 * C5694 + C258 * C8928 * C5693) * C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
            (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
                C8930) *
               C8928 * C8871 * C1210 +
           ((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C120 +
            (C5747 * C580 - C5693 * C664 + C5748 * C1908 - C5694 * C1982) *
                C8930) *
               C8928 * C8871 * C8919) *
              C1212 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C120 +
            (C5747 * C207 - C5693 * C286 + C5748 * C964 - C5694 * C1048) *
                C8930) *
               C8928 * C8871 * C1210 +
           ((C5693 * C537 - C5747 * C446 + C5694 * C1871 - C5748 * C1791) *
                C120 +
            (C5693 * C665 - C5747 * C581 + C5694 * C1983 - C5748 * C1909) *
                C8930) *
               C8928 * C8871 * C8919) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezx[21] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C5747 +
                      (C8928 * C323 - C3006 * C319) * C5693 +
                      (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                         C8930 * C8871 * C1210 +
                     ((C3378 - C3377) * C5747 + (C3490 - C3489) * C5693 +
                      (C4615 - C4616) * C5748 + (C4727 - C4728) * C5694) *
                         C8930 * C8871 * C8919) *
                        C1212 +
                    (((C3006 * C79 - C8928 * C84) * C5747 +
                      (C3006 * C320 - C8928 * C324) * C5693 +
                      (C6372 - C6373) * C5748 + (C6489 - C6490) * C5694) *
                         C8930 * C8871 * C1210 +
                     ((C3382 - C3381) * C5747 + (C3492 - C3491) * C5693 +
                      (C8928 * C1794 - C3006 * C1791) * C5748 +
                      (C8928 * C2021 - C3006 * C2019) * C5694) *
                         C8930 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[21] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C5747 +
                      (C8930 * C353 - C120 * C319) * C5693 +
                      (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                         C8928 * C8871 * C1210 +
                     ((C120 * C447 - C8930 * C492) * C5747 +
                      (C120 * C703 - C8930 * C743) * C5693 +
                      (C120 * C1790 - C8930 * C1832) * C5748 +
                      (C120 * C2018 - C8930 * C2056) * C5694) *
                         C8928 * C8871 * C8919) *
                        C1212 +
                    (((C131 - C130) * C5747 + (C359 - C358) * C5693 +
                      (C882 - C883) * C5748 + (C1130 - C1131) * C5694) *
                         C8928 * C8871 * C1210 +
                     ((C500 - C499) * C5747 + (C748 - C747) * C5693 +
                      (C8930 * C1833 - C120 * C1791) * C5748 +
                      (C8930 * C2057 - C120 * C2019) * C5694) *
                         C8928 * C8871 * C8919) *
                        C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
            C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
               C8930 * C8928 * C8871 * C1210 -
           (C5748 * C1870 - C5906 * C1790 - C5748 * C2018 + C5694 * C2092 +
            C5747 * C536 - C5905 * C447 - C5747 * C703 + C5693 * C783) *
               C8930 * C8928 * C8871 * C8919) *
              C1212 +
          ((C5747 * C537 - C5905 * C446 - C5747 * C704 + C5693 * C782 +
            C5748 * C1871 - C5906 * C1791 - C5748 * C2019 + C5694 * C2093) *
               C8930 * C8928 * C8871 * C8919 -
           (C5748 * C920 - C5906 * C829 - C5748 * C1087 + C5694 * C1165 +
            C5747 * C165 - C5905 * C79 - C5747 * C320 + C5693 * C389) *
               C8930 * C8928 * C8871 * C1210) *
              C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
           C6260 * C5694) *
              C8930 * C8871 * C1512 -
          (C4501 * C5694 + C3267 * C5693) * C8930 * C8871 * C1513 +
          (C4216 * C5693 +
           (C3006 * C4491 - C3007 * C4490 - C3006 * C4492 + C8928 * C4493) *
               C5694) *
              C8930 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8930 * C121 - C120 * C78) * C3006 +
            (C8930 * C125 - C120 * C83) * C8928) *
               C5693 +
           ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
              C8871 * C1512 +
          (((C120 * C447 - C8930 * C492) * C3006 +
            (C120 * C452 - C8930 * C495) * C8928) *
               C5693 +
           ((C120 * C1790 - C8930 * C1832) * C3006 +
            (C120 * C1793 - C8930 * C1834) * C8928) *
               C5694) *
              C8871 * C1513 +
          (((C8930 * C1550 - C120 * C1516) * C3006 +
            (C8930 * C1552 - C120 * C1519) * C8928) *
               C5693 +
           ((C8930 * C4536 - C120 * C4490) * C3006 +
            (C8930 * C4537 - C120 * C4492) * C8928) *
               C5694) *
              C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
           (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) * C8928) *
              C8930 * C8871 * C1512 +
          ((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
               C3006 +
           (C5747 * C452 - C5693 * C539 + C5748 * C1793 - C5694 * C1872) *
               C8928) *
              C8930 * C8871 * C1513 +
          ((C5693 * C1580 - C5747 * C1516 + C5694 * C4572 - C5748 * C4490) *
               C3006 +
           (C5693 * C1582 - C5747 * C1519 + C5694 * C4573 - C5748 * C4492) *
               C8928) *
              C8930 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8928 * C82 - C3006 * C78) * C120 +
            (C8928 * C210 - C3006 * C206) * C8930) *
               C5693 +
           ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
              C8871 * C1512 +
          (((C3378 - C3377) * C120 + (C3380 - C3379) * C8930) * C5693 +
           ((C4615 - C4616) * C120 + (C4617 - C4618) * C8930) * C5694) *
              C8871 * C1513 +
          (((C4307 - C4306) * C120 + (C4309 - C4308) * C8930) * C5693 +
           ((C8928 * C4491 - C3006 * C4490) * C120 +
            (C8928 * C4613 - C3006 * C4612) * C8930) *
               C5694) *
              C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
               C5693 +
           C6418 * C5694) *
              C8871 * C1512 -
          ((C120 * C1832 - C240 * C1790 - C120 * C1908 + C8930 * C1946) *
               C8928 * C5694 +
           (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C8928 *
               C5693) *
              C8871 * C1513 +
          ((C120 * C1550 - C240 * C1516 - C120 * C1610 + C8930 * C1640) *
               C8928 * C5693 +
           (C120 * C4536 - C240 * C4490 - C120 * C4612 + C8930 * C4652) *
               C8928 * C5694) *
              C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
           (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
               C8930) *
              C8928 * C8871 * C1512 +
          ((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
               C120 +
           (C5747 * C580 - C5693 * C664 + C5748 * C1908 - C5694 * C1982) *
               C8930) *
              C8928 * C8871 * C1513 +
          ((C5693 * C1580 - C5747 * C1516 + C5694 * C4572 - C5748 * C4490) *
               C120 +
           (C5693 * C1668 - C5747 * C1610 + C5694 * C4687 - C5748 * C4612) *
               C8930) *
              C8928 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezx[22] += (2 * std::pow(Pi, 2.5) *
                   (((C8928 * C82 - C3006 * C78) * C5747 +
                     (C8928 * C323 - C3006 * C319) * C5693 +
                     (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                        C8930 * C8871 * C1512 +
                    ((C3378 - C3377) * C5747 + (C3490 - C3489) * C5693 +
                     (C4615 - C4616) * C5748 + (C4727 - C4728) * C5694) *
                        C8930 * C8871 * C1513 +
                    ((C4307 - C4306) * C5747 + (C4395 - C4394) * C5693 +
                     (C8928 * C4491 - C3006 * C4490) * C5748 +
                     (C8928 * C4725 - C3006 * C4724) * C5694) *
                        C8930 * C8871 * C1514) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezy[22] += (2 * std::pow(Pi, 2.5) *
                   (((C8930 * C121 - C120 * C78) * C5747 +
                     (C8930 * C353 - C120 * C319) * C5693 +
                     (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                        C8928 * C8871 * C1512 +
                    ((C120 * C447 - C8930 * C492) * C5747 +
                     (C120 * C703 - C8930 * C743) * C5693 +
                     (C120 * C1790 - C8930 * C1832) * C5748 +
                     (C120 * C2018 - C8930 * C2056) * C5694) *
                        C8928 * C8871 * C1513 +
                    ((C8930 * C1550 - C120 * C1516) * C5747 +
                     (C8930 * C1726 - C120 * C1696) * C5693 +
                     (C8930 * C4536 - C120 * C4490) * C5748 +
                     (C8930 * C4762 - C120 * C4724) * C5694) *
                        C8928 * C8871 * C1514) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (2 * std::pow(Pi, 2.5) *
         ((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
           C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
              C8930 * C8928 * C8871 * C1512 -
          (C5748 * C1870 - C5906 * C1790 - C5748 * C2018 + C5694 * C2092 +
           C5747 * C536 - C5905 * C447 - C5747 * C703 + C5693 * C783) *
              C8930 * C8928 * C8871 * C1513 +
          (C5747 * C1580 - C5905 * C1516 - C5747 * C1696 + C5693 * C1754 +
           C5748 * C4572 - C5906 * C4490 - C5748 * C4724 + C5694 * C4797) *
              C8930 * C8928 * C8871 * C1514) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
            C6260 * C5694) *
               C8930 * C827 -
           ((C3006 * C2739 - C3007 * C2737 - C3006 * C2740 + C8928 * C2743) *
                C5694 +
            C6260 * C5693) *
               C8930 * C8921) *
              C1210 +
          ((C4501 * C5693 +
            (C3006 * C5444 - C3007 * C5443 - C3006 * C5445 + C8928 * C5446) *
                C5694) *
               C8930 * C8921 -
           (C4501 * C5694 + C3267 * C5693) * C8930 * C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8930 * C121 - C120 * C78) * C3006 +
             (C8930 * C125 - C120 * C83) * C8928) *
                C5693 +
            ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
               C827 +
           (((C6297 - C6296) * C3006 + (C6299 - C6298) * C8928) * C5693 +
            ((C120 * C2737 - C8930 * C2771) * C3006 +
             (C120 * C2740 - C8930 * C2773) * C8928) *
                C5694) *
               C8921) *
              C1210 +
          ((((C120 * C447 - C8930 * C492) * C3006 +
             (C120 * C452 - C8930 * C495) * C8928) *
                C5693 +
            ((C7169 - C7170) * C3006 + (C7171 - C7172) * C8928) * C5694) *
               C827 +
           (((C7170 - C7169) * C3006 + (C7172 - C7171) * C8928) * C5693 +
            ((C8930 * C5473 - C120 * C5443) * C3006 +
             (C8930 * C5474 - C120 * C5445) * C8928) *
                C5694) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
            (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) *
                C8928) *
               C8930 * C827 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C3006 +
            (C5747 * C835 - C5693 * C922 + C5748 * C2740 - C5694 * C2803) *
                C8928) *
               C8930 * C8921) *
              C1210 +
          (((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C3006 +
            (C5747 * C452 - C5693 * C539 + C5748 * C1793 - C5694 * C1872) *
                C8928) *
               C8930 * C827 +
           ((C5693 * C1870 - C5747 * C1790 + C5694 * C5501 - C5748 * C5443) *
                C3006 +
            (C5693 * C1872 - C5747 * C1793 + C5694 * C5502 - C5748 * C5445) *
                C8928) *
               C8930 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C120 +
             (C8928 * C210 - C3006 * C206) * C8930) *
                C5693 +
            ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
               C827 +
           (((C6369 - C6368) * C120 + (C6371 - C6370) * C8930) * C5693 +
            ((C3006 * C2737 - C8928 * C2739) * C120 +
             (C3006 * C2831 - C8928 * C2833) * C8930) *
                C5694) *
               C8921) *
              C1210 +
          ((((C3378 - C3377) * C120 + (C3380 - C3379) * C8930) * C5693 +
            ((C4615 - C4616) * C120 + (C4617 - C4618) * C8930) * C5694) *
               C827 +
           (((C4616 - C4615) * C120 + (C4618 - C4617) * C8930) * C5693 +
            ((C8928 * C5444 - C3006 * C5443) * C120 +
             (C8928 * C5530 - C3006 * C5529) * C8930) *
                C5694) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
                C5693 +
            C6418 * C5694) *
               C827 -
           ((C120 * C2771 - C240 * C2737 - C120 * C2831 + C8930 * C2861) *
                C8928 * C5694 +
            C6418 * C5693) *
               C8921) *
              C1210 +
          ((C7282 * C5693 +
            (C120 * C5473 - C240 * C5443 - C120 * C5529 + C8930 * C5557) *
                C8928 * C5694) *
               C8921 -
           (C7282 * C5694 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C8928 *
                C5693) *
               C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
            (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
                C8930) *
               C8928 * C827 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C120 +
            (C5747 * C963 - C5693 * C1047 + C5748 * C2831 - C5694 * C2889) *
                C8930) *
               C8928 * C8921) *
              C1210 +
          (((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C120 +
            (C5747 * C580 - C5693 * C664 + C5748 * C1908 - C5694 * C1982) *
                C8930) *
               C8928 * C827 +
           ((C5693 * C1870 - C5747 * C1790 + C5694 * C5501 - C5748 * C5443) *
                C120 +
            (C5693 * C1982 - C5747 * C1908 + C5694 * C5584 - C5748 * C5529) *
                C8930) *
               C8928 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezx[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C5747 +
                      (C8928 * C323 - C3006 * C319) * C5693 +
                      (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                         C8930 * C827 +
                     ((C6369 - C6368) * C5747 + (C6488 - C6487) * C5693 +
                      (C3006 * C2737 - C8928 * C2739) * C5748 +
                      (C3006 * C2917 - C8928 * C2919) * C5694) *
                         C8930 * C8921) *
                        C1210 +
                    (((C3378 - C3377) * C5747 + (C3490 - C3489) * C5693 +
                      (C4615 - C4616) * C5748 + (C4727 - C4728) * C5694) *
                         C8930 * C827 +
                     ((C4616 - C4615) * C5747 + (C4728 - C4727) * C5693 +
                      (C8928 * C5444 - C3006 * C5443) * C5748 +
                      (C8928 * C5612 - C3006 * C5611) * C5694) *
                         C8930 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezy[23] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C5747 +
                      (C8930 * C353 - C120 * C319) * C5693 +
                      (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                         C8928 * C827 +
                     ((C6297 - C6296) * C5747 + (C6526 - C6525) * C5693 +
                      (C120 * C2737 - C8930 * C2771) * C5748 +
                      (C120 * C2917 - C8930 * C2947) * C5694) *
                         C8928 * C8921) *
                        C1210 +
                    (((C120 * C447 - C8930 * C492) * C5747 +
                      (C120 * C703 - C8930 * C743) * C5693 +
                      (C7169 - C7170) * C5748 + (C7385 - C7386) * C5694) *
                         C8928 * C827 +
                     ((C7170 - C7169) * C5747 + (C7386 - C7385) * C5693 +
                      (C8930 * C5473 - C120 * C5443) * C5748 +
                      (C8930 * C5639 - C120 * C5611) * C5694) *
                         C8928 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
            C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
               C8930 * C8928 * C827 -
           (C5748 * C2801 - C5906 * C2737 - C5748 * C2917 + C5694 * C2975 +
            C5747 * C919 - C5905 * C830 - C5747 * C1086 + C5693 * C1166) *
               C8930 * C8928 * C8921) *
              C1210 +
          ((C5747 * C1870 - C5905 * C1790 - C5747 * C2018 + C5693 * C2092 +
            C5748 * C5501 - C5906 * C5443 - C5748 * C5611 + C5694 * C5666) *
               C8930 * C8928 * C8921 -
           (C5748 * C1870 - C5906 * C1790 - C5748 * C2018 + C5694 * C2092 +
            C5747 * C536 - C5905 * C447 - C5747 * C703 + C5693 * C783) *
               C8930 * C8928 * C827) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
            C6260 * C5694) *
               C8930 * C2128 -
           ((C3006 * C2739 - C3007 * C2737 - C3006 * C2740 + C8928 * C2743) *
                C5694 +
            C6260 * C5693) *
               C8930 * C8921) *
              C8854 * C1212 +
          ((C6261 * C5693 +
            (C3006 * C2741 - C3007 * C2738 - C3006 * C2742 + C8928 * C2744) *
                C5694) *
               C8930 * C8921 -
           (C6261 * C5694 +
            (C3006 * C84 - C3007 * C79 - C3006 * C85 + C8928 * C91) * C5693) *
               C8930 * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8930 * C121 - C120 * C78) * C3006 +
             (C8930 * C125 - C120 * C83) * C8928) *
                C5693 +
            ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
               C2128 +
           (((C6297 - C6296) * C3006 + (C6299 - C6298) * C8928) * C5693 +
            ((C120 * C2737 - C8930 * C2771) * C3006 +
             (C120 * C2740 - C8930 * C2773) * C8928) *
                C5694) *
               C8921) *
              C8854 * C1212 +
          ((((C131 - C130) * C3006 + (C133 - C132) * C8928) * C5693 +
            ((C882 - C883) * C3006 + (C884 - C885) * C8928) * C5694) *
               C2128 +
           (((C883 - C882) * C3006 + (C885 - C884) * C8928) * C5693 +
            ((C8930 * C2772 - C120 * C2738) * C3006 +
             (C8930 * C2774 - C120 * C2742) * C8928) *
                C5694) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
            (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) *
                C8928) *
               C8930 * C2128 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C3006 +
            (C5747 * C835 - C5693 * C922 + C5748 * C2740 - C5694 * C2803) *
                C8928) *
               C8930 * C8921) *
              C8854 * C1212 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C3006 +
            (C5747 * C85 - C5693 * C169 + C5748 * C833 - C5694 * C923) *
                C8928) *
               C8930 * C2128 +
           ((C5693 * C920 - C5747 * C829 + C5694 * C2802 - C5748 * C2738) *
                C3006 +
            (C5693 * C923 - C5747 * C833 + C5694 * C2804 - C5748 * C2742) *
                C8928) *
               C8930 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C120 +
             (C8928 * C210 - C3006 * C206) * C8930) *
                C5693 +
            ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
               C2128 +
           (((C6369 - C6368) * C120 + (C6371 - C6370) * C8930) * C5693 +
            ((C3006 * C2737 - C8928 * C2739) * C120 +
             (C3006 * C2831 - C8928 * C2833) * C8930) *
                C5694) *
               C8921) *
              C8854 * C1212 +
          ((((C3006 * C79 - C8928 * C84) * C120 +
             (C3006 * C207 - C8928 * C211) * C8930) *
                C5693 +
            ((C6372 - C6373) * C120 + (C6374 - C6375) * C8930) * C5694) *
               C2128 +
           (((C6373 - C6372) * C120 + (C6375 - C6374) * C8930) * C5693 +
            ((C8928 * C2741 - C3006 * C2738) * C120 +
             (C8928 * C2834 - C3006 * C2832) * C8930) *
                C5694) *
               C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
                C5693 +
            C6418 * C5694) *
               C2128 -
           ((C120 * C2771 - C240 * C2737 - C120 * C2831 + C8930 * C2861) *
                C8928 * C5694 +
            C6418 * C5693) *
               C8921) *
              C8854 * C1212 +
          ((C6414 * C5693 +
            (C120 * C2772 - C240 * C2738 - C120 * C2832 + C8930 * C2862) *
                C8928 * C5694) *
               C8921 -
           (C6414 * C5694 + C258 * C8928 * C5693) * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
            (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
                C8930) *
               C8928 * C2128 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C120 +
            (C5747 * C963 - C5693 * C1047 + C5748 * C2831 - C5694 * C2889) *
                C8930) *
               C8928 * C8921) *
              C8854 * C1212 +
          (((C5747 * C79 - C5693 * C165 + C5748 * C829 - C5694 * C920) * C120 +
            (C5747 * C207 - C5693 * C286 + C5748 * C964 - C5694 * C1048) *
                C8930) *
               C8928 * C2128 +
           ((C5693 * C920 - C5747 * C829 + C5694 * C2802 - C5748 * C2738) *
                C120 +
            (C5693 * C1048 - C5747 * C964 + C5694 * C2890 - C5748 * C2832) *
                C8930) *
               C8928 * C8921) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eezx[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C5747 +
                      (C8928 * C323 - C3006 * C319) * C5693 +
                      (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                         C8930 * C2128 +
                     ((C6369 - C6368) * C5747 + (C6488 - C6487) * C5693 +
                      (C3006 * C2737 - C8928 * C2739) * C5748 +
                      (C3006 * C2917 - C8928 * C2919) * C5694) *
                         C8930 * C8921) *
                        C8854 * C1212 +
                    (((C3006 * C79 - C8928 * C84) * C5747 +
                      (C3006 * C320 - C8928 * C324) * C5693 +
                      (C6372 - C6373) * C5748 + (C6489 - C6490) * C5694) *
                         C8930 * C2128 +
                     ((C6373 - C6372) * C5747 + (C6490 - C6489) * C5693 +
                      (C8928 * C2741 - C3006 * C2738) * C5748 +
                      (C8928 * C2920 - C3006 * C2918) * C5694) *
                         C8930 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[24] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C5747 +
                      (C8930 * C353 - C120 * C319) * C5693 +
                      (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                         C8928 * C2128 +
                     ((C6297 - C6296) * C5747 + (C6526 - C6525) * C5693 +
                      (C120 * C2737 - C8930 * C2771) * C5748 +
                      (C120 * C2917 - C8930 * C2947) * C5694) *
                         C8928 * C8921) *
                        C8854 * C1212 +
                    (((C131 - C130) * C5747 + (C359 - C358) * C5693 +
                      (C882 - C883) * C5748 + (C1130 - C1131) * C5694) *
                         C8928 * C2128 +
                     ((C883 - C882) * C5747 + (C1131 - C1130) * C5693 +
                      (C8930 * C2772 - C120 * C2738) * C5748 +
                      (C8930 * C2948 - C120 * C2918) * C5694) *
                         C8928 * C8921) *
                        C8854 * C8917)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
            C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
               C8930 * C8928 * C2128 -
           (C5748 * C2801 - C5906 * C2737 - C5748 * C2917 + C5694 * C2975 +
            C5747 * C919 - C5905 * C830 - C5747 * C1086 + C5693 * C1166) *
               C8930 * C8928 * C8921) *
              C8854 * C1212 +
          ((C5747 * C920 - C5905 * C829 - C5747 * C1087 + C5693 * C1165 +
            C5748 * C2802 - C5906 * C2738 - C5748 * C2918 + C5694 * C2976) *
               C8930 * C8928 * C8921 -
           (C5748 * C920 - C5906 * C829 - C5748 * C1087 + C5694 * C1165 +
            C5747 * C165 - C5905 * C79 - C5747 * C320 + C5693 * C389) *
               C8930 * C8928 * C2128) *
              C8854 * C8917)) /
        (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
            C6260 * C5694) *
               C8930 * C2128 -
           ((C3006 * C2739 - C3007 * C2737 - C3006 * C2740 + C8928 * C2743) *
                C5694 +
            C6260 * C5693) *
               C8930 * C8921) *
              C442 +
          ((C4501 * C5693 +
            (C3006 * C5444 - C3007 * C5443 - C3006 * C5445 + C8928 * C5446) *
                C5694) *
               C8930 * C8921 -
           (C4501 * C5694 + C3267 * C5693) * C8930 * C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8930 * C121 - C120 * C78) * C3006 +
             (C8930 * C125 - C120 * C83) * C8928) *
                C5693 +
            ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
               C2128 +
           (((C6297 - C6296) * C3006 + (C6299 - C6298) * C8928) * C5693 +
            ((C120 * C2737 - C8930 * C2771) * C3006 +
             (C120 * C2740 - C8930 * C2773) * C8928) *
                C5694) *
               C8921) *
              C442 +
          ((((C120 * C447 - C8930 * C492) * C3006 +
             (C120 * C452 - C8930 * C495) * C8928) *
                C5693 +
            ((C7169 - C7170) * C3006 + (C7171 - C7172) * C8928) * C5694) *
               C2128 +
           (((C7170 - C7169) * C3006 + (C7172 - C7171) * C8928) * C5693 +
            ((C8930 * C5473 - C120 * C5443) * C3006 +
             (C8930 * C5474 - C120 * C5445) * C8928) *
                C5694) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
            (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) *
                C8928) *
               C8930 * C2128 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C3006 +
            (C5747 * C835 - C5693 * C922 + C5748 * C2740 - C5694 * C2803) *
                C8928) *
               C8930 * C8921) *
              C442 +
          (((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C3006 +
            (C5747 * C452 - C5693 * C539 + C5748 * C1793 - C5694 * C1872) *
                C8928) *
               C8930 * C2128 +
           ((C5693 * C1870 - C5747 * C1790 + C5694 * C5501 - C5748 * C5443) *
                C3006 +
            (C5693 * C1872 - C5747 * C1793 + C5694 * C5502 - C5748 * C5445) *
                C8928) *
               C8930 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((((C8928 * C82 - C3006 * C78) * C120 +
             (C8928 * C210 - C3006 * C206) * C8930) *
                C5693 +
            ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
               C2128 +
           (((C6369 - C6368) * C120 + (C6371 - C6370) * C8930) * C5693 +
            ((C3006 * C2737 - C8928 * C2739) * C120 +
             (C3006 * C2831 - C8928 * C2833) * C8930) *
                C5694) *
               C8921) *
              C442 +
          ((((C3378 - C3377) * C120 + (C3380 - C3379) * C8930) * C5693 +
            ((C4615 - C4616) * C120 + (C4617 - C4618) * C8930) * C5694) *
               C2128 +
           (((C4616 - C4615) * C120 + (C4618 - C4617) * C8930) * C5693 +
            ((C8928 * C5444 - C3006 * C5443) * C120 +
             (C8928 * C5530 - C3006 * C5529) * C8930) *
                C5694) *
               C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) * C8928 *
                C5693 +
            C6418 * C5694) *
               C2128 -
           ((C120 * C2771 - C240 * C2737 - C120 * C2831 + C8930 * C2861) *
                C8928 * C5694 +
            C6418 * C5693) *
               C8921) *
              C442 +
          ((C7282 * C5693 +
            (C120 * C5473 - C240 * C5443 - C120 * C5529 + C8930 * C5557) *
                C8928 * C5694) *
               C8921 -
           (C7282 * C5694 +
            (C120 * C492 - C240 * C447 - C120 * C580 + C8930 * C621) * C8928 *
                C5693) *
               C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
            (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
                C8930) *
               C8928 * C2128 +
           ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
                C120 +
            (C5747 * C963 - C5693 * C1047 + C5748 * C2831 - C5694 * C2889) *
                C8930) *
               C8928 * C8921) *
              C442 +
          (((C5747 * C447 - C5693 * C536 + C5748 * C1790 - C5694 * C1870) *
                C120 +
            (C5747 * C580 - C5693 * C664 + C5748 * C1908 - C5694 * C1982) *
                C8930) *
               C8928 * C2128 +
           ((C5693 * C1870 - C5747 * C1790 + C5694 * C5501 - C5748 * C5443) *
                C120 +
            (C5693 * C1982 - C5747 * C1908 + C5694 * C5584 - C5748 * C5529) *
                C8930) *
               C8928 * C8921) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C8928 * C82 - C3006 * C78) * C5747 +
                      (C8928 * C323 - C3006 * C319) * C5693 +
                      (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                         C8930 * C2128 +
                     ((C6369 - C6368) * C5747 + (C6488 - C6487) * C5693 +
                      (C3006 * C2737 - C8928 * C2739) * C5748 +
                      (C3006 * C2917 - C8928 * C2919) * C5694) *
                         C8930 * C8921) *
                        C442 +
                    (((C3378 - C3377) * C5747 + (C3490 - C3489) * C5693 +
                      (C4615 - C4616) * C5748 + (C4727 - C4728) * C5694) *
                         C8930 * C2128 +
                     ((C4616 - C4615) * C5747 + (C4728 - C4727) * C5693 +
                      (C8928 * C5444 - C3006 * C5443) * C5748 +
                      (C8928 * C5612 - C3006 * C5611) * C5694) *
                         C8930 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezy[25] += (2 * std::pow(Pi, 2.5) *
                   ((((C8930 * C121 - C120 * C78) * C5747 +
                      (C8930 * C353 - C120 * C319) * C5693 +
                      (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                         C8928 * C2128 +
                     ((C6297 - C6296) * C5747 + (C6526 - C6525) * C5693 +
                      (C120 * C2737 - C8930 * C2771) * C5748 +
                      (C120 * C2917 - C8930 * C2947) * C5694) *
                         C8928 * C8921) *
                        C442 +
                    (((C120 * C447 - C8930 * C492) * C5747 +
                      (C120 * C703 - C8930 * C743) * C5693 +
                      (C7169 - C7170) * C5748 + (C7385 - C7386) * C5694) *
                         C8928 * C2128 +
                     ((C7170 - C7169) * C5747 + (C7386 - C7385) * C5693 +
                      (C8930 * C5473 - C120 * C5443) * C5748 +
                      (C8930 * C5639 - C120 * C5611) * C5694) *
                         C8928 * C8921) *
                        C8919) *
                   C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
            C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
               C8930 * C8928 * C2128 -
           (C5748 * C2801 - C5906 * C2737 - C5748 * C2917 + C5694 * C2975 +
            C5747 * C919 - C5905 * C830 - C5747 * C1086 + C5693 * C1166) *
               C8930 * C8928 * C8921) *
              C442 +
          ((C5747 * C1870 - C5905 * C1790 - C5747 * C2018 + C5693 * C2092 +
            C5748 * C5501 - C5906 * C5443 - C5748 * C5611 + C5694 * C5666) *
               C8930 * C8928 * C8921 -
           (C5748 * C1870 - C5906 * C1790 - C5748 * C2018 + C5694 * C2092 +
            C5747 * C536 - C5905 * C447 - C5747 * C703 + C5693 * C783) *
               C8930 * C8928 * C2128) *
              C8919) *
         C8820) /
        (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C3006 * C82 - C3007 * C78 - C3006 * C83 + C8928 * C90) * C5693 +
           C6260 * C5694) *
              C8930 * C2734 -
          (C8069 * C5694 + C6260 * C5693) * C8930 * C2735 +
          (C8069 * C5693 +
           (C3006 * C8059 - C3007 * C8058 - C3006 * C8060 + C8928 * C8061) *
               C5694) *
              C8930 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8930 * C121 - C120 * C78) * C3006 +
            (C8930 * C125 - C120 * C83) * C8928) *
               C5693 +
           ((C6296 - C6297) * C3006 + (C6298 - C6299) * C8928) * C5694) *
              C2734 +
          (((C6297 - C6296) * C3006 + (C6299 - C6298) * C8928) * C5693 +
           ((C8098 - C8099) * C3006 + (C8100 - C8101) * C8928) * C5694) *
              C2735 +
          (((C8099 - C8098) * C3006 + (C8101 - C8100) * C8928) * C5693 +
           ((C8930 * C8095 - C120 * C8058) * C3006 +
            (C8930 * C8096 - C120 * C8060) * C8928) *
               C5694) *
              C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C3006 +
           (C5693 * C168 - C5747 * C83 + C5694 * C922 - C5748 * C835) * C8928) *
              C8930 * C2734 +
          ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
               C3006 +
           (C5747 * C835 - C5693 * C922 + C5748 * C2740 - C5694 * C2803) *
               C8928) *
              C8930 * C2735 +
          ((C5693 * C2801 - C5747 * C2737 + C5694 * C8127 - C5748 * C8058) *
               C3006 +
           (C5693 * C2803 - C5747 * C2740 + C5694 * C8128 - C5748 * C8060) *
               C8928) *
              C8930 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((((C8928 * C82 - C3006 * C78) * C120 +
            (C8928 * C210 - C3006 * C206) * C8930) *
               C5693 +
           ((C6368 - C6369) * C120 + (C6370 - C6371) * C8930) * C5694) *
              C2734 +
          (((C6369 - C6368) * C120 + (C6371 - C6370) * C8930) * C5693 +
           ((C8158 - C8159) * C120 + (C8160 - C8161) * C8930) * C5694) *
              C2735 +
          (((C8159 - C8158) * C120 + (C8161 - C8160) * C8930) * C5693 +
           ((C8928 * C8059 - C3006 * C8058) * C120 +
            (C8928 * C8156 - C3006 * C8155) * C8930) *
               C5694) *
              C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] += (2 * std::pow(Pi, 2.5) *
                   (((C120 * C121 - C240 * C78 - C120 * C206 + C8930 * C241) *
                         C8928 * C5693 +
                     C6418 * C5694) *
                        C2734 -
                    (C8196 * C5694 + C6418 * C5693) * C2735 +
                    (C8196 * C5693 + (C120 * C8095 - C240 * C8058 -
                                      C120 * C8155 + C8930 * C8187) *
                                         C8928 * C5694) *
                        C2736) *
                   C8854 * C8820) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (2 * std::pow(Pi, 2.5) *
         (((C5693 * C164 - C5747 * C78 + C5694 * C919 - C5748 * C830) * C120 +
           (C5693 * C285 - C5747 * C206 + C5694 * C1047 - C5748 * C963) *
               C8930) *
              C8928 * C2734 +
          ((C5747 * C830 - C5693 * C919 + C5748 * C2737 - C5694 * C2801) *
               C120 +
           (C5747 * C963 - C5693 * C1047 + C5748 * C2831 - C5694 * C2889) *
               C8930) *
              C8928 * C2735 +
          ((C5693 * C2801 - C5747 * C2737 + C5694 * C8127 - C5748 * C8058) *
               C120 +
           (C5693 * C2889 - C5747 * C2831 + C5694 * C8222 - C5748 * C8155) *
               C8930) *
              C8928 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] += (2 * std::pow(Pi, 2.5) *
                   (((C8928 * C82 - C3006 * C78) * C5747 +
                     (C8928 * C323 - C3006 * C319) * C5693 +
                     (C6368 - C6369) * C5748 + (C6487 - C6488) * C5694) *
                        C8930 * C2734 +
                    ((C6369 - C6368) * C5747 + (C6488 - C6487) * C5693 +
                     (C8158 - C8159) * C5748 + (C8252 - C8253) * C5694) *
                        C8930 * C2735 +
                    ((C8159 - C8158) * C5747 + (C8253 - C8252) * C5693 +
                     (C8928 * C8059 - C3006 * C8058) * C5748 +
                     (C8928 * C8250 - C3006 * C8249) * C5694) *
                        C8930 * C2736) *
                   C8854 * C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezy[26] += (2 * std::pow(Pi, 2.5) *
                   (((C8930 * C121 - C120 * C78) * C5747 +
                     (C8930 * C353 - C120 * C319) * C5693 +
                     (C6296 - C6297) * C5748 + (C6525 - C6526) * C5694) *
                        C8928 * C2734 +
                    ((C6297 - C6296) * C5747 + (C6526 - C6525) * C5693 +
                     (C8098 - C8099) * C5748 + (C8281 - C8282) * C5694) *
                        C8928 * C2735 +
                    ((C8099 - C8098) * C5747 + (C8282 - C8281) * C5693 +
                     (C8930 * C8095 - C120 * C8058) * C5748 +
                     (C8930 * C8279 - C120 * C8249) * C5694) *
                        C8928 * C2736) *
                   C8854 * C8820) /
                  (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (2 * std::pow(Pi, 2.5) *
         ((C5747 * C164 - C5905 * C78 - C5747 * C319 + C5693 * C388 +
           C5748 * C919 - C5906 * C830 - C5748 * C1086 + C5694 * C1166) *
              C8930 * C8928 * C2734 -
          (C5748 * C2801 - C5906 * C2737 - C5748 * C2917 + C5694 * C2975 +
           C5747 * C919 - C5905 * C830 - C5747 * C1086 + C5693 * C1166) *
              C8930 * C8928 * C2735 +
          (C5747 * C2801 - C5905 * C2737 - C5747 * C2917 + C5693 * C2975 +
           C5748 * C8127 - C5906 * C8058 - C5748 * C8249 + C5694 * C8308) *
              C8930 * C8928 * C2736) *
         C8854 * C8820) /
        (p * q * std::sqrt(p + q));
    
}
